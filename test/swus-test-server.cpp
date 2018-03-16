#include "swus-test-server.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <algorithm>
using namespace std;

int SwusTestServer::login(std::string username,
                          std::string password,
                          struct ns2__loginResponse& _param_1) {
    cout << "login request for : " << username << " , " << password << "\t ";
    auto i = users.find(username);
    if(i != users.end() && i->second == password) {
        _param_1.success = true;
        _param_1.token = "generate a token";
        _param_1.ttl = "generate a ttl";
        _param_1.errorString = "";
        _param_1.errorCode = "";
        users.erase(i);
        cout << " accepted!" << "\n";
    }

    else if(i == users.end() || fakeUsers.find(username) != fakeUsers.end()) {
        _param_1.success = false;
        _param_1.token = "generate a token";
        _param_1.ttl = "generate a ttl";
        _param_1.errorString = "username or password wrong";
        _param_1.errorCode = "1";
        auto j = fakeUsers.find(username);
        fakeUsers.erase(j);
        cout << " rejected!" << "\n";
    }
    if(users.empty() || fakeUsers.empty()) {
        m_isRunning = false;
    }

}

swusService* SwusTestServer::copy() {
    return nullptr;
}

void SwusTestServer::fillData(const string& file_name,
                              const string& fake_file_name) {
    m_isRunning = true;
    fillDataWorker(users, file_name);
    fillDataWorker(fakeUsers, fake_file_name);
}

void SwusTestServer::fillDataWorker(std::map<string, string>& data,
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
            data.insert(std::make_pair(u, p));
        }
    }
    cout << "fill data " << data.size() << endl;
}

int SwusTestServer::conditionalRun(int portNumber) {
    this->accept_timeout = 5;
    this->recv_timeout = 5;
    this->send_timeout = 5;
    cout << "server------------------------" << endl;
    while(m_isRunning) {
        run(portNumber);
        cout << "Timout occured. Restarting server..." << endl;
    }
    return 0;
}
