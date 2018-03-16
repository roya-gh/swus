#include "swus.nsmap"
#include "swus-client.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;


void fillData(std::vector<pair<string, string>>& data,
              const string& file_name) {
    ifstream inFile(file_name);
    string line;
    if(inFile.is_open()) {
        while(std::getline(inFile, line)) {
            stringstream linestream{line};
            string u;
            string p;
            getline(linestream, u, ',');
            getline(linestream, p);
            pair<string, string> i(u, p);
            data.push_back(std::make_pair(u, p));
        }
    }
}

int main() {
    string usersFileName{"./users.csv"};
    string fakeUsersFileName{"./users-wrong.csv"};
    std::vector<pair<string, string>> users;
    std::vector<pair<string, string>> fakeUsers;
    fillData(users, usersFileName);
    fillData(fakeUsers, fakeUsersFileName);

    //    for(auto i:users)
    //        cout<<i.first<<" "<<i.second<<"\n";
    //    for(auto i:fakeUsers)
    //        cout<<i.first<<" "<<i.second<<"\n";


    swusClient s;
    s.connect_timeout = 10;

    auto i = users.begin();
    auto j = fakeUsers.begin();
    while(i != users.end() || j != fakeUsers.end()) {
        ns2__loginResponse n1;
        ns2__loginResponse n2;
        if(i != users.end()) {
            s.login(i->first, i->second, n1);
            cout << "server response for : " << i->first << " , " << i->second <<
                 " is : " << n1.success << "\n";
            assert(n1.success);
            i++;

        } else {
            break;
        }
        if(j != fakeUsers.end()) {
            s.login(j->first, j->second, n2);
            cout << "server response for : " << j->first << " , " << j->second <<
                 " is : " << n2.success << "\n";
            assert(!n2.success);
            j++;
        } else {
            break;
        }
    }

    return 0;
}
