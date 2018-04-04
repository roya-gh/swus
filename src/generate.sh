#!/bin/bash
wsdl2h -c++11 -g -a -w -y -oSWUS.h ../docs/service.wsdl
soapcpp2 -2 -S -a -A -t -c++11 -b -i -w -x ./SWUS.h
