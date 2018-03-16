#include "soapswusService.h"
#ifndef SWUSSERVER_HPP
#define SWUSSERVER_HPP
class swusServer:public swusService
{
    //public:
    //    int login(std::string username,
    //              std::string password,
    //              struct ns2__loginResponse &_param_1);
public:
    virtual   int login(std::string username,
                        std::string password,
                        ns2__loginResponse &_param_1) override
    {
        std::cout<<"login request received \nusername: "
           <<username<<" , password: "<<password<<std::endl;
        return SOAP_OK;
    }
    virtual swusService *copy() override
    {
        return nullptr;
    }



};
#endif
