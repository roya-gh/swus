#include "swus-test-server.hpp"
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string usersFileName{"./users.csv"};
    string fakeUsersFileName{"./users-wrong.csv"};
    SwusTestServer server;
    server.fillData(usersFileName, fakeUsersFileName);
    server.conditionalRun(39000);
    return 0;
}
