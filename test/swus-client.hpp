#ifndef SWUSCLIENT_H
#define SWUSCLIENT_H
#include "soapswusProxy.h"

class swusClient : public swusProxy {
public:

    swusClient();

    virtual swusProxy* copy()override {

    }


};

#endif // SWUSCLIENT_H
