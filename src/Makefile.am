pkglib_LTLIBRARIES = skeleton.la

pkglibdir = $(libdir)/opentmf/drivers

skeleton_la_SOURCES = \
	driver.c

skeleton_la_CFLAGS = \
	-DOPENTMF_DRIVER

skeleton_la_LDFLAGS = \
	-module \
	-avoid-version \
	-shared \
	-fvisibility=hidden
