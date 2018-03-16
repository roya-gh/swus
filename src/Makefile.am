# Copyright 2017 - Roya Ghasemzade <roya@ametisco.ir>
#
# This file is part of windows_update_server.
#
# windows_update_server is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# windows_update_server is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with windows_update_server.  If not, see <http://www.gnu.org/licenses/>.

AUTOMAKE_OPTIONS = subdir-objects

ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS} -I m4

AM_CXXFLAGS = --pedantic -Wall -Werror

noinst_LTLIBRARIES = libswus.la

bin_PROGRAMS = swus

libswus_la_SOURCES = \
    soapC.cpp \
    soapH.h \
    soapStub.h \
    soapswusService.cpp \
    soapswusService.h \
    SWUS.h \
    swus.nsmap \
    swus-server.cpp \
    swus-server.hpp
	
swus_SOURCES = \
    main.cpp

swus_LDADD = \
    -lgsoap++ \
    libswus.la

AM_CPPFLAGS = \
    -DWITH_NONAMESPACES -DWITH_PURE_VIRTUAL
