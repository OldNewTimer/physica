# ----------------------------
# Makefile Options
# ----------------------------

NAME ?= Physica
ICON ?= icon.png
DESCRIPTION ?= "Physics Wiki Program"
COMPRESSED ?= NO
ARCHIVED ?= NO

CFLAGS ?= -Wall -Wextra -Oz
CXXFLAGS ?= -Wall -Wextra -Oz

# ----------------------------

ifndef CEDEV
$(error CEDEV environment path variable is not set)
endif

include $(CEDEV)/meta/makefile.mk
