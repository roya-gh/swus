#!/bin/bash
wsdl2h -c++11 -p -oSWUS.h ../docs/service.wsdl
soapcpp2 -C -c++11 -b -i -w -x ./SWUS.h
