AM_CPPFLAGS = -I$(srcdir)/../src

AM_CPPFLAGS += \
    -DWITH_NONAMESPACES -DWITH_PURE_VIRTUAL

check_PROGRAMS = \
    tst-server \
    tst-client
    
tst_server_SOURCES = \
    tst-server.cpp \
    swus-test-server.hpp \
    swus-test-server.cpp

tst_client_SOURCES = \
    tst-client.cpp \
    soap.nsmap \
    soapC.cpp \
    soapH.h \
    soapStub.h \
    soapswusProxy.cpp \
    soapswusProxy.h \
    SWUS.h \
    swus-client.hpp \
    swus-client.cpp

tst_client_LDADD = \
    -lgsoap++

tst_server_LDADD = \
    -lgsoap++ \
    ../src/libswus.la 


TESTS = $(check_PROGRAMS)
