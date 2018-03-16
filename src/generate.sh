#!/bin/bash
wsdl2h -c++11 -p -oSWUS.h ../docs/service.wsdl
soapcpp2 -2 -S -L -c++11 -b -e -i -w -x ./SWUS.h
