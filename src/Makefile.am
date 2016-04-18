pkglib_LTLIBRARIES = skeleton.la

pkglibdir = $(libdir)/opentmf/drivers

skeleton_la_SOURCES = \
	driver.c \
	oscilloscope.c \
	functiongenerator.c \
	datalogger.c

skeleton_la_CFLAGS = \
	-DOPENTMF_DRIVER \
	-DOPENTMF_OS_API_VERSION=0x0001 \
	-DOPENTMF_FG_API_VERSION=0x0001 \
	-DOPENTMF_DL_API_VERSION=0x0001

skeleton_la_LDFLAGS = \
	-module \
	-avoid-version \
	-shared \
	-fvisibility=hidden
