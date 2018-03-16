#include "swus-server.hpp"
#include "swus.nsmap"


using namespace std;

int swusServer::login(string username, string password, ns2__loginResponse& _param_1) {
    std::cout << "login request received from : \nusername: "
              << username << "\npassword: " << password << std::endl;
    return SOAP_OK;
}
