#ifndef SWUSSERVER_H
#define SWUSSERVER_H
#include "soapswusService.h"

class swusServer : public swusService {
public:
    int login(std::string username,
              std::string password,
              ns2__loginResponse& _param_1) override;

    swusService* copy() override {
        return nullptr;
    }
};

#endif // SWUSSERVER_H
