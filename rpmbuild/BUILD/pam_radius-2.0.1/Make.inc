# -*- makefile -*-
# Make.inc.in
#
# Version:	$Id: dc3f7040bd40b7c0b65df63ba74405b33e9f8993 $
#

CC	  = gcc -std=gnu11
RANLIB	  = ranlib
CFLAGS	  = -fPIC -fno-strict-aliasing -Wall -fpic -Wall -std=c99 -D_GNU_SOURCE -DNDEBUG 
CPPFLAGS  = -fPIC -fno-strict-aliasing 
LDFLAGS   = -fPIC -Wl,--build-id 

