# Makefile.in generated by automake 1.10 from Makefile.am.
# gsoap/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,
# 2003, 2004, 2005, 2006  Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.






pkgdatadir = $(datadir)/gsoap
pkglibdir = $(libdir)/gsoap
pkgincludedir = $(includedir)/gsoap
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-unknown-linux-gnu
host_triplet = x86_64-unknown-linux-gnu
subdir = gsoap
DIST_COMMON = $(include_HEADERS) $(srcdir)/Makefile.am \
	$(srcdir)/Makefile.in
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/configure.in
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = `echo $$p | sed -e 's|^.*/||'`;
am__installdirs = "$(DESTDIR)$(libdir)" "$(DESTDIR)$(pkgdatadir)" \
	"$(DESTDIR)$(includedir)"
libLIBRARIES_INSTALL = $(INSTALL_DATA)
LIBRARIES = $(lib_LIBRARIES)
AR = ar
ARFLAGS = cru
libgsoap___a_AR = $(AR) $(ARFLAGS)
libgsoap___a_LIBADD =
am_libgsoap___a_OBJECTS = libgsoap___a-stdsoap2_cpp.$(OBJEXT)
libgsoap___a_OBJECTS = $(am_libgsoap___a_OBJECTS)
libgsoap_a_AR = $(AR) $(ARFLAGS)
libgsoap_a_LIBADD =
am_libgsoap_a_OBJECTS = libgsoap_a-stdsoap2.$(OBJEXT)
libgsoap_a_OBJECTS = $(am_libgsoap_a_OBJECTS)
libgsoapck___a_AR = $(AR) $(ARFLAGS)
libgsoapck___a_LIBADD =
am_libgsoapck___a_OBJECTS = libgsoapck___a-stdsoap2_ck_cpp.$(OBJEXT)
libgsoapck___a_OBJECTS = $(am_libgsoapck___a_OBJECTS)
libgsoapck_a_AR = $(AR) $(ARFLAGS)
libgsoapck_a_LIBADD =
am_libgsoapck_a_OBJECTS = libgsoapck_a-stdsoap2_ck.$(OBJEXT)
libgsoapck_a_OBJECTS = $(am_libgsoapck_a_OBJECTS)
libgsoapssl___a_AR = $(AR) $(ARFLAGS)
libgsoapssl___a_LIBADD =
am_libgsoapssl___a_OBJECTS =  \
	libgsoapssl___a-stdsoap2_ssl_cpp.$(OBJEXT)
libgsoapssl___a_OBJECTS = $(am_libgsoapssl___a_OBJECTS)
libgsoapssl_a_AR = $(AR) $(ARFLAGS)
libgsoapssl_a_LIBADD =
am_libgsoapssl_a_OBJECTS = libgsoapssl_a-stdsoap2_ssl.$(OBJEXT)
libgsoapssl_a_OBJECTS = $(am_libgsoapssl_a_OBJECTS)
DEFAULT_INCLUDES = -I. -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
CXXCOMPILE = $(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
CXXLD = $(CXX)
CXXLINK = $(CXXLD) $(AM_CXXFLAGS) $(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) \
	-o $@
SOURCES = $(libgsoap___a_SOURCES) $(libgsoap_a_SOURCES) \
	$(libgsoapck___a_SOURCES) $(libgsoapck_a_SOURCES) \
	$(libgsoapssl___a_SOURCES) $(libgsoapssl_a_SOURCES)
DIST_SOURCES = $(libgsoap___a_SOURCES) $(libgsoap_a_SOURCES) \
	$(libgsoapck___a_SOURCES) $(libgsoapck_a_SOURCES) \
	$(libgsoapssl___a_SOURCES) $(libgsoapssl_a_SOURCES)
RECURSIVE_TARGETS = all-recursive check-recursive dvi-recursive \
	html-recursive info-recursive install-data-recursive \
	install-dvi-recursive install-exec-recursive \
	install-html-recursive install-info-recursive \
	install-pdf-recursive install-ps-recursive install-recursive \
	installcheck-recursive installdirs-recursive pdf-recursive \
	ps-recursive uninstall-recursive
nobase_pkgdataDATA_INSTALL = $(install_sh_DATA)
DATA = $(nobase_pkgdata_DATA)
includeHEADERS_INSTALL = $(INSTALL_HEADER)
HEADERS = $(include_HEADERS)
RECURSIVE_CLEAN_TARGETS = mostlyclean-recursive clean-recursive	\
  distclean-recursive maintainer-clean-recursive
ETAGS = etags
CTAGS = ctags
DIST_SUBDIRS = $(SUBDIRS)
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /root/OSS/gsoap/gsoap-2.7/missing --run aclocal-1.10
AMTAR = ${SHELL} /root/OSS/gsoap/gsoap-2.7/missing --run tar
AUTOCONF = ${SHELL} /root/OSS/gsoap/gsoap-2.7/missing --run autoconf
AUTOHEADER = ${SHELL} /root/OSS/gsoap/gsoap-2.7/missing --run autoheader
AUTOMAKE = ${SHELL} /root/OSS/gsoap/gsoap-2.7/missing --run automake-1.10
AWK = gawk
BISON_DEFINE = -DWITH_BISON
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2
CPP = gcc -E
CPPFLAGS = 
CXX = g++
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -g -O2
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /usr/bin/grep -E
ENABLE_SAMPLES = 
EXEEXT = 
GREP = /usr/bin/grep
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LDFLAGS = 
LEX = flex
LEXLIB = 
LEX_DEFINE = -DWITH_FLEX
LEX_FLAGS = -l
LEX_OUTPUT_ROOT = lex.yy
LIBOBJS =  ${LIBOBJDIR}mktime$U.o
LIBS = 
LN_S = ln -s
LTLIBOBJS =  ${LIBOBJDIR}mktime$U.lo
MAKEINFO = ${SHELL} /root/OSS/gsoap/gsoap-2.7/missing --run makeinfo
MKDIR_P = /usr/bin/mkdir -p
OBJEXT = o
PACKAGE = gsoap
PACKAGE_BUGREPORT = 
PACKAGE_NAME = gsoap
PACKAGE_STRING = gsoap 2.7
PACKAGE_TARNAME = gsoap
PACKAGE_VERSION = 2.7
PATH_SEPARATOR = :
RANLIB = ranlib
SAMPLE_DIRS = 
SAMPLE_EXTRA_LIBS = 
SET_MAKE = 
SHELL = /bin/sh
SOAPCPP2_DEBUG = 
SOAPCPP2_IMPORTPATH = -DSOAPCPP_IMPORT_PATH="\"${datarootdir}/gsoap/import\""
SOAPCPP2_NONAMESPACES = 
STRIP = 
VERSION = 2.7
WSDL2H_EXTRA_FLAGS = -DWITH_OPENSSL -DWITH_GZIP
WSDL2H_EXTRA_LIBS = -lssl -lcrypto -lz
WSDL2H_IMPORTPATH = -DWSDL_IMPORT_PATH="\"${datarootdir}/gsoap/WS\""
WSDL2H_SOAP_CPP_LIB = libgsoapssl++.a
YACC = bison -y
YACC_LIB = 
YFLAGS = 
abs_builddir = /root/OSS/gsoap/gsoap-2.7/gsoap
abs_srcdir = /root/OSS/gsoap/gsoap-2.7/gsoap
abs_top_builddir = /root/OSS/gsoap/gsoap-2.7
abs_top_srcdir = /root/OSS/gsoap/gsoap-2.7
ac_ct_CC = gcc
ac_ct_CXX = g++
am__include = include
am__leading_dot = .
am__quote = 
am__tar = ${AMTAR} chof - "$$tardir"
am__untar = ${AMTAR} xf -
bindir = ${exec_prefix}/bin
build = x86_64-unknown-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = unknown
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-unknown-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = unknown
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = $(SHELL) /root/OSS/gsoap/gsoap-2.7/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = /usr/bin/mkdir -p
oldincludedir = /usr/include
pdfdir = ${docdir}
platform = LINUX
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_builddir = ..
top_srcdir = ..
AUTOMAKE_OPTIONS = foreign 1.4
SUBDIRS = . src wsdl 
CLEANFILES = soapcpp2 wsdl2h stdsoap2_cpp.cpp stdsoap2_ck.c stdsoap2_ck_cpp.cpp stdsoap2_ssl.c stdsoap2_ssl_cpp.cpp
AM_CXXFLAGS = $(SOAPCPP2_DEBUG) -D$(platform)
AM_CFLAGS = $(SOAPCPP2_DEBUG) -D$(platform)

# Install all soapcpp2 and wsdl2h files into ${prefix}/share/gsoap
nobase_pkgdata_DATA = $(srcdir)/import/* $(srcdir)/plugin/* $(srcdir)/WS/* $(srcdir)/custom/* $(srcdir)/extras/*
lib_LIBRARIES = libgsoap.a libgsoap++.a libgsoapck.a libgsoapck++.a libgsoapssl.a libgsoapssl++.a
libgsoap_a_SOURCES = stdsoap2.c
libgsoap_a_CFLAGS = $(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform)
libgsoap___a_SOURCES = stdsoap2_cpp.cpp
libgsoap___a_CXXFLAGS = $(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform)
libgsoapck_a_SOURCES = stdsoap2_ck.c
libgsoapck_a_CFLAGS = $(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform) -DWITH_COOKIES
libgsoapck___a_SOURCES = stdsoap2_ck_cpp.cpp
libgsoapck___a_CXXFLAGS = $(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform) -DWITH_COOKIES
libgsoapssl_a_SOURCES = stdsoap2_ssl.c
libgsoapssl_a_CFLAGS = $(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform) -DWITH_OPENSSL -DWITH_DOM -DWITH_GZIP
libgsoapssl___a_SOURCES = stdsoap2_ssl_cpp.cpp
libgsoapssl___a_CXXFLAGS = $(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform) -DWITH_OPENSSL -DWITH_DOM -DWITH_GZIP
BUILT_SOURCES = stdsoap2_cpp.cpp $(lib_LIBRARIES)
include_HEADERS = stdsoap2.h
all: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) all-recursive

.SUFFIXES:
.SUFFIXES: .c .cpp .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh \
		&& exit 0; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign  gsoap/Makefile'; \
	cd $(top_srcdir) && \
	  $(AUTOMAKE) --foreign  gsoap/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
install-libLIBRARIES: $(lib_LIBRARIES)
	@$(NORMAL_INSTALL)
	test -z "$(libdir)" || $(MKDIR_P) "$(DESTDIR)$(libdir)"
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    f=$(am__strip_dir) \
	    echo " $(libLIBRARIES_INSTALL) '$$p' '$(DESTDIR)$(libdir)/$$f'"; \
	    $(libLIBRARIES_INSTALL) "$$p" "$(DESTDIR)$(libdir)/$$f"; \
	  else :; fi; \
	done
	@$(POST_INSTALL)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    p=$(am__strip_dir) \
	    echo " $(RANLIB) '$(DESTDIR)$(libdir)/$$p'"; \
	    $(RANLIB) "$(DESTDIR)$(libdir)/$$p"; \
	  else :; fi; \
	done

uninstall-libLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  p=$(am__strip_dir) \
	  echo " rm -f '$(DESTDIR)$(libdir)/$$p'"; \
	  rm -f "$(DESTDIR)$(libdir)/$$p"; \
	done

clean-libLIBRARIES:
	-test -z "$(lib_LIBRARIES)" || rm -f $(lib_LIBRARIES)
libgsoap++.a: $(libgsoap___a_OBJECTS) $(libgsoap___a_DEPENDENCIES) 
	-rm -f libgsoap++.a
	$(libgsoap___a_AR) libgsoap++.a $(libgsoap___a_OBJECTS) $(libgsoap___a_LIBADD)
	$(RANLIB) libgsoap++.a
libgsoap.a: $(libgsoap_a_OBJECTS) $(libgsoap_a_DEPENDENCIES) 
	-rm -f libgsoap.a
	$(libgsoap_a_AR) libgsoap.a $(libgsoap_a_OBJECTS) $(libgsoap_a_LIBADD)
	$(RANLIB) libgsoap.a
libgsoapck++.a: $(libgsoapck___a_OBJECTS) $(libgsoapck___a_DEPENDENCIES) 
	-rm -f libgsoapck++.a
	$(libgsoapck___a_AR) libgsoapck++.a $(libgsoapck___a_OBJECTS) $(libgsoapck___a_LIBADD)
	$(RANLIB) libgsoapck++.a
libgsoapck.a: $(libgsoapck_a_OBJECTS) $(libgsoapck_a_DEPENDENCIES) 
	-rm -f libgsoapck.a
	$(libgsoapck_a_AR) libgsoapck.a $(libgsoapck_a_OBJECTS) $(libgsoapck_a_LIBADD)
	$(RANLIB) libgsoapck.a
libgsoapssl++.a: $(libgsoapssl___a_OBJECTS) $(libgsoapssl___a_DEPENDENCIES) 
	-rm -f libgsoapssl++.a
	$(libgsoapssl___a_AR) libgsoapssl++.a $(libgsoapssl___a_OBJECTS) $(libgsoapssl___a_LIBADD)
	$(RANLIB) libgsoapssl++.a
libgsoapssl.a: $(libgsoapssl_a_OBJECTS) $(libgsoapssl_a_DEPENDENCIES) 
	-rm -f libgsoapssl.a
	$(libgsoapssl_a_AR) libgsoapssl.a $(libgsoapssl_a_OBJECTS) $(libgsoapssl_a_LIBADD)
	$(RANLIB) libgsoapssl.a

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/libgsoap___a-stdsoap2_cpp.Po
include ./$(DEPDIR)/libgsoap_a-stdsoap2.Po
include ./$(DEPDIR)/libgsoapck___a-stdsoap2_ck_cpp.Po
include ./$(DEPDIR)/libgsoapck_a-stdsoap2_ck.Po
include ./$(DEPDIR)/libgsoapssl___a-stdsoap2_ssl_cpp.Po
include ./$(DEPDIR)/libgsoapssl_a-stdsoap2_ssl.Po

.c.o:
	$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	mv -f $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(COMPILE) -c $<

.c.obj:
	$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	mv -f $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(COMPILE) -c `$(CYGPATH_W) '$<'`

libgsoap_a-stdsoap2.o: stdsoap2.c
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoap_a_CFLAGS) $(CFLAGS) -MT libgsoap_a-stdsoap2.o -MD -MP -MF $(DEPDIR)/libgsoap_a-stdsoap2.Tpo -c -o libgsoap_a-stdsoap2.o `test -f 'stdsoap2.c' || echo '$(srcdir)/'`stdsoap2.c
	mv -f $(DEPDIR)/libgsoap_a-stdsoap2.Tpo $(DEPDIR)/libgsoap_a-stdsoap2.Po
#	source='stdsoap2.c' object='libgsoap_a-stdsoap2.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoap_a_CFLAGS) $(CFLAGS) -c -o libgsoap_a-stdsoap2.o `test -f 'stdsoap2.c' || echo '$(srcdir)/'`stdsoap2.c

libgsoap_a-stdsoap2.obj: stdsoap2.c
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoap_a_CFLAGS) $(CFLAGS) -MT libgsoap_a-stdsoap2.obj -MD -MP -MF $(DEPDIR)/libgsoap_a-stdsoap2.Tpo -c -o libgsoap_a-stdsoap2.obj `if test -f 'stdsoap2.c'; then $(CYGPATH_W) 'stdsoap2.c'; else $(CYGPATH_W) '$(srcdir)/stdsoap2.c'; fi`
	mv -f $(DEPDIR)/libgsoap_a-stdsoap2.Tpo $(DEPDIR)/libgsoap_a-stdsoap2.Po
#	source='stdsoap2.c' object='libgsoap_a-stdsoap2.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoap_a_CFLAGS) $(CFLAGS) -c -o libgsoap_a-stdsoap2.obj `if test -f 'stdsoap2.c'; then $(CYGPATH_W) 'stdsoap2.c'; else $(CYGPATH_W) '$(srcdir)/stdsoap2.c'; fi`

libgsoapck_a-stdsoap2_ck.o: stdsoap2_ck.c
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapck_a_CFLAGS) $(CFLAGS) -MT libgsoapck_a-stdsoap2_ck.o -MD -MP -MF $(DEPDIR)/libgsoapck_a-stdsoap2_ck.Tpo -c -o libgsoapck_a-stdsoap2_ck.o `test -f 'stdsoap2_ck.c' || echo '$(srcdir)/'`stdsoap2_ck.c
	mv -f $(DEPDIR)/libgsoapck_a-stdsoap2_ck.Tpo $(DEPDIR)/libgsoapck_a-stdsoap2_ck.Po
#	source='stdsoap2_ck.c' object='libgsoapck_a-stdsoap2_ck.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapck_a_CFLAGS) $(CFLAGS) -c -o libgsoapck_a-stdsoap2_ck.o `test -f 'stdsoap2_ck.c' || echo '$(srcdir)/'`stdsoap2_ck.c

libgsoapck_a-stdsoap2_ck.obj: stdsoap2_ck.c
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapck_a_CFLAGS) $(CFLAGS) -MT libgsoapck_a-stdsoap2_ck.obj -MD -MP -MF $(DEPDIR)/libgsoapck_a-stdsoap2_ck.Tpo -c -o libgsoapck_a-stdsoap2_ck.obj `if test -f 'stdsoap2_ck.c'; then $(CYGPATH_W) 'stdsoap2_ck.c'; else $(CYGPATH_W) '$(srcdir)/stdsoap2_ck.c'; fi`
	mv -f $(DEPDIR)/libgsoapck_a-stdsoap2_ck.Tpo $(DEPDIR)/libgsoapck_a-stdsoap2_ck.Po
#	source='stdsoap2_ck.c' object='libgsoapck_a-stdsoap2_ck.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapck_a_CFLAGS) $(CFLAGS) -c -o libgsoapck_a-stdsoap2_ck.obj `if test -f 'stdsoap2_ck.c'; then $(CYGPATH_W) 'stdsoap2_ck.c'; else $(CYGPATH_W) '$(srcdir)/stdsoap2_ck.c'; fi`

libgsoapssl_a-stdsoap2_ssl.o: stdsoap2_ssl.c
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapssl_a_CFLAGS) $(CFLAGS) -MT libgsoapssl_a-stdsoap2_ssl.o -MD -MP -MF $(DEPDIR)/libgsoapssl_a-stdsoap2_ssl.Tpo -c -o libgsoapssl_a-stdsoap2_ssl.o `test -f 'stdsoap2_ssl.c' || echo '$(srcdir)/'`stdsoap2_ssl.c
	mv -f $(DEPDIR)/libgsoapssl_a-stdsoap2_ssl.Tpo $(DEPDIR)/libgsoapssl_a-stdsoap2_ssl.Po
#	source='stdsoap2_ssl.c' object='libgsoapssl_a-stdsoap2_ssl.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapssl_a_CFLAGS) $(CFLAGS) -c -o libgsoapssl_a-stdsoap2_ssl.o `test -f 'stdsoap2_ssl.c' || echo '$(srcdir)/'`stdsoap2_ssl.c

libgsoapssl_a-stdsoap2_ssl.obj: stdsoap2_ssl.c
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapssl_a_CFLAGS) $(CFLAGS) -MT libgsoapssl_a-stdsoap2_ssl.obj -MD -MP -MF $(DEPDIR)/libgsoapssl_a-stdsoap2_ssl.Tpo -c -o libgsoapssl_a-stdsoap2_ssl.obj `if test -f 'stdsoap2_ssl.c'; then $(CYGPATH_W) 'stdsoap2_ssl.c'; else $(CYGPATH_W) '$(srcdir)/stdsoap2_ssl.c'; fi`
	mv -f $(DEPDIR)/libgsoapssl_a-stdsoap2_ssl.Tpo $(DEPDIR)/libgsoapssl_a-stdsoap2_ssl.Po
#	source='stdsoap2_ssl.c' object='libgsoapssl_a-stdsoap2_ssl.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapssl_a_CFLAGS) $(CFLAGS) -c -o libgsoapssl_a-stdsoap2_ssl.obj `if test -f 'stdsoap2_ssl.c'; then $(CYGPATH_W) 'stdsoap2_ssl.c'; else $(CYGPATH_W) '$(srcdir)/stdsoap2_ssl.c'; fi`

.cpp.o:
	$(CXXCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	mv -f $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(CXXCOMPILE) -c -o $@ $<

.cpp.obj:
	$(CXXCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	mv -f $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(CXXCOMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

libgsoap___a-stdsoap2_cpp.o: stdsoap2_cpp.cpp
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoap___a_CXXFLAGS) $(CXXFLAGS) -MT libgsoap___a-stdsoap2_cpp.o -MD -MP -MF $(DEPDIR)/libgsoap___a-stdsoap2_cpp.Tpo -c -o libgsoap___a-stdsoap2_cpp.o `test -f 'stdsoap2_cpp.cpp' || echo '$(srcdir)/'`stdsoap2_cpp.cpp
	mv -f $(DEPDIR)/libgsoap___a-stdsoap2_cpp.Tpo $(DEPDIR)/libgsoap___a-stdsoap2_cpp.Po
#	source='stdsoap2_cpp.cpp' object='libgsoap___a-stdsoap2_cpp.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoap___a_CXXFLAGS) $(CXXFLAGS) -c -o libgsoap___a-stdsoap2_cpp.o `test -f 'stdsoap2_cpp.cpp' || echo '$(srcdir)/'`stdsoap2_cpp.cpp

libgsoap___a-stdsoap2_cpp.obj: stdsoap2_cpp.cpp
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoap___a_CXXFLAGS) $(CXXFLAGS) -MT libgsoap___a-stdsoap2_cpp.obj -MD -MP -MF $(DEPDIR)/libgsoap___a-stdsoap2_cpp.Tpo -c -o libgsoap___a-stdsoap2_cpp.obj `if test -f 'stdsoap2_cpp.cpp'; then $(CYGPATH_W) 'stdsoap2_cpp.cpp'; else $(CYGPATH_W) '$(srcdir)/stdsoap2_cpp.cpp'; fi`
	mv -f $(DEPDIR)/libgsoap___a-stdsoap2_cpp.Tpo $(DEPDIR)/libgsoap___a-stdsoap2_cpp.Po
#	source='stdsoap2_cpp.cpp' object='libgsoap___a-stdsoap2_cpp.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoap___a_CXXFLAGS) $(CXXFLAGS) -c -o libgsoap___a-stdsoap2_cpp.obj `if test -f 'stdsoap2_cpp.cpp'; then $(CYGPATH_W) 'stdsoap2_cpp.cpp'; else $(CYGPATH_W) '$(srcdir)/stdsoap2_cpp.cpp'; fi`

libgsoapck___a-stdsoap2_ck_cpp.o: stdsoap2_ck_cpp.cpp
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapck___a_CXXFLAGS) $(CXXFLAGS) -MT libgsoapck___a-stdsoap2_ck_cpp.o -MD -MP -MF $(DEPDIR)/libgsoapck___a-stdsoap2_ck_cpp.Tpo -c -o libgsoapck___a-stdsoap2_ck_cpp.o `test -f 'stdsoap2_ck_cpp.cpp' || echo '$(srcdir)/'`stdsoap2_ck_cpp.cpp
	mv -f $(DEPDIR)/libgsoapck___a-stdsoap2_ck_cpp.Tpo $(DEPDIR)/libgsoapck___a-stdsoap2_ck_cpp.Po
#	source='stdsoap2_ck_cpp.cpp' object='libgsoapck___a-stdsoap2_ck_cpp.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapck___a_CXXFLAGS) $(CXXFLAGS) -c -o libgsoapck___a-stdsoap2_ck_cpp.o `test -f 'stdsoap2_ck_cpp.cpp' || echo '$(srcdir)/'`stdsoap2_ck_cpp.cpp

libgsoapck___a-stdsoap2_ck_cpp.obj: stdsoap2_ck_cpp.cpp
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapck___a_CXXFLAGS) $(CXXFLAGS) -MT libgsoapck___a-stdsoap2_ck_cpp.obj -MD -MP -MF $(DEPDIR)/libgsoapck___a-stdsoap2_ck_cpp.Tpo -c -o libgsoapck___a-stdsoap2_ck_cpp.obj `if test -f 'stdsoap2_ck_cpp.cpp'; then $(CYGPATH_W) 'stdsoap2_ck_cpp.cpp'; else $(CYGPATH_W) '$(srcdir)/stdsoap2_ck_cpp.cpp'; fi`
	mv -f $(DEPDIR)/libgsoapck___a-stdsoap2_ck_cpp.Tpo $(DEPDIR)/libgsoapck___a-stdsoap2_ck_cpp.Po
#	source='stdsoap2_ck_cpp.cpp' object='libgsoapck___a-stdsoap2_ck_cpp.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapck___a_CXXFLAGS) $(CXXFLAGS) -c -o libgsoapck___a-stdsoap2_ck_cpp.obj `if test -f 'stdsoap2_ck_cpp.cpp'; then $(CYGPATH_W) 'stdsoap2_ck_cpp.cpp'; else $(CYGPATH_W) '$(srcdir)/stdsoap2_ck_cpp.cpp'; fi`

libgsoapssl___a-stdsoap2_ssl_cpp.o: stdsoap2_ssl_cpp.cpp
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapssl___a_CXXFLAGS) $(CXXFLAGS) -MT libgsoapssl___a-stdsoap2_ssl_cpp.o -MD -MP -MF $(DEPDIR)/libgsoapssl___a-stdsoap2_ssl_cpp.Tpo -c -o libgsoapssl___a-stdsoap2_ssl_cpp.o `test -f 'stdsoap2_ssl_cpp.cpp' || echo '$(srcdir)/'`stdsoap2_ssl_cpp.cpp
	mv -f $(DEPDIR)/libgsoapssl___a-stdsoap2_ssl_cpp.Tpo $(DEPDIR)/libgsoapssl___a-stdsoap2_ssl_cpp.Po
#	source='stdsoap2_ssl_cpp.cpp' object='libgsoapssl___a-stdsoap2_ssl_cpp.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapssl___a_CXXFLAGS) $(CXXFLAGS) -c -o libgsoapssl___a-stdsoap2_ssl_cpp.o `test -f 'stdsoap2_ssl_cpp.cpp' || echo '$(srcdir)/'`stdsoap2_ssl_cpp.cpp

libgsoapssl___a-stdsoap2_ssl_cpp.obj: stdsoap2_ssl_cpp.cpp
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapssl___a_CXXFLAGS) $(CXXFLAGS) -MT libgsoapssl___a-stdsoap2_ssl_cpp.obj -MD -MP -MF $(DEPDIR)/libgsoapssl___a-stdsoap2_ssl_cpp.Tpo -c -o libgsoapssl___a-stdsoap2_ssl_cpp.obj `if test -f 'stdsoap2_ssl_cpp.cpp'; then $(CYGPATH_W) 'stdsoap2_ssl_cpp.cpp'; else $(CYGPATH_W) '$(srcdir)/stdsoap2_ssl_cpp.cpp'; fi`
	mv -f $(DEPDIR)/libgsoapssl___a-stdsoap2_ssl_cpp.Tpo $(DEPDIR)/libgsoapssl___a-stdsoap2_ssl_cpp.Po
#	source='stdsoap2_ssl_cpp.cpp' object='libgsoapssl___a-stdsoap2_ssl_cpp.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libgsoapssl___a_CXXFLAGS) $(CXXFLAGS) -c -o libgsoapssl___a-stdsoap2_ssl_cpp.obj `if test -f 'stdsoap2_ssl_cpp.cpp'; then $(CYGPATH_W) 'stdsoap2_ssl_cpp.cpp'; else $(CYGPATH_W) '$(srcdir)/stdsoap2_ssl_cpp.cpp'; fi`
install-nobase_pkgdataDATA: $(nobase_pkgdata_DATA)
	@$(NORMAL_INSTALL)
	test -z "$(pkgdatadir)" || $(MKDIR_P) "$(DESTDIR)$(pkgdatadir)"
	@$(am__vpath_adj_setup) \
	list='$(nobase_pkgdata_DATA)'; for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  $(am__vpath_adj) \
	  echo " $(nobase_pkgdataDATA_INSTALL) '$$d$$p' '$(DESTDIR)$(pkgdatadir)/$$f'"; \
	  $(nobase_pkgdataDATA_INSTALL) "$$d$$p" "$(DESTDIR)$(pkgdatadir)/$$f"; \
	done

uninstall-nobase_pkgdataDATA:
	@$(NORMAL_UNINSTALL)
	@$(am__vpath_adj_setup) \
	list='$(nobase_pkgdata_DATA)'; for p in $$list; do \
	  $(am__vpath_adj) \
	  echo " rm -f '$(DESTDIR)$(pkgdatadir)/$$f'"; \
	  rm -f "$(DESTDIR)$(pkgdatadir)/$$f"; \
	done
install-includeHEADERS: $(include_HEADERS)
	@$(NORMAL_INSTALL)
	test -z "$(includedir)" || $(MKDIR_P) "$(DESTDIR)$(includedir)"
	@list='$(include_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  f=$(am__strip_dir) \
	  echo " $(includeHEADERS_INSTALL) '$$d$$p' '$(DESTDIR)$(includedir)/$$f'"; \
	  $(includeHEADERS_INSTALL) "$$d$$p" "$(DESTDIR)$(includedir)/$$f"; \
	done

uninstall-includeHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(include_HEADERS)'; for p in $$list; do \
	  f=$(am__strip_dir) \
	  echo " rm -f '$(DESTDIR)$(includedir)/$$f'"; \
	  rm -f "$(DESTDIR)$(includedir)/$$f"; \
	done

# This directory's subdirectories are mostly independent; you can cd
# into them and run `make' without going through this Makefile.
# To change the values of `make' variables: instead of editing Makefiles,
# (1) if the variable is set in `config.status', edit `config.status'
#     (which will cause the Makefiles to be regenerated when you run `make');
# (2) otherwise, pass the desired values on the `make' command line.
$(RECURSIVE_TARGETS):
	@failcom='exit 1'; \
	for f in x $$MAKEFLAGS; do \
	  case $$f in \
	    *=* | --[!k]*);; \
	    *k*) failcom='fail=yes';; \
	  esac; \
	done; \
	dot_seen=no; \
	target=`echo $@ | sed s/-recursive//`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    dot_seen=yes; \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	  || eval $$failcom; \
	done; \
	if test "$$dot_seen" = "no"; then \
	  $(MAKE) $(AM_MAKEFLAGS) "$$target-am" || exit 1; \
	fi; test -z "$$fail"

$(RECURSIVE_CLEAN_TARGETS):
	@failcom='exit 1'; \
	for f in x $$MAKEFLAGS; do \
	  case $$f in \
	    *=* | --[!k]*);; \
	    *k*) failcom='fail=yes';; \
	  esac; \
	done; \
	dot_seen=no; \
	case "$@" in \
	  distclean-* | maintainer-clean-*) list='$(DIST_SUBDIRS)' ;; \
	  *) list='$(SUBDIRS)' ;; \
	esac; \
	rev=''; for subdir in $$list; do \
	  if test "$$subdir" = "."; then :; else \
	    rev="$$subdir $$rev"; \
	  fi; \
	done; \
	rev="$$rev ."; \
	target=`echo $@ | sed s/-recursive//`; \
	for subdir in $$rev; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	  || eval $$failcom; \
	done && test -z "$$fail"
tags-recursive:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  test "$$subdir" = . || (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) tags); \
	done
ctags-recursive:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  test "$$subdir" = . || (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) ctags); \
	done

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	mkid -fID $$unique
tags: TAGS

TAGS: tags-recursive $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	if ($(ETAGS) --etags-include --version) >/dev/null 2>&1; then \
	  include_option=--etags-include; \
	  empty_fix=.; \
	else \
	  include_option=--include; \
	  empty_fix=; \
	fi; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  if test "$$subdir" = .; then :; else \
	    test ! -f $$subdir/TAGS || \
	      tags="$$tags $$include_option=$$here/$$subdir/TAGS"; \
	  fi; \
	done; \
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	if test -z "$(ETAGS_ARGS)$$tags$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	    $$tags $$unique; \
	fi
ctags: CTAGS
CTAGS: ctags-recursive $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(CTAGS_ARGS)$$tags$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$tags $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && cd $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) $$here

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -pR $(srcdir)/$$file $(distdir)$$dir || exit 1; \
	    fi; \
	    cp -pR $$d/$$file $(distdir)$$dir || exit 1; \
	  else \
	    test -f $(distdir)/$$file \
	    || cp -p $$d/$$file $(distdir)/$$file \
	    || exit 1; \
	  fi; \
	done
	list='$(DIST_SUBDIRS)'; for subdir in $$list; do \
	  if test "$$subdir" = .; then :; else \
	    test -d "$(distdir)/$$subdir" \
	    || $(MKDIR_P) "$(distdir)/$$subdir" \
	    || exit 1; \
	    distdir=`$(am__cd) $(distdir) && pwd`; \
	    top_distdir=`$(am__cd) $(top_distdir) && pwd`; \
	    (cd $$subdir && \
	      $(MAKE) $(AM_MAKEFLAGS) \
	        top_distdir="$$top_distdir" \
	        distdir="$$distdir/$$subdir" \
		am__remove_distdir=: \
		am__skip_length_check=: \
	        distdir) \
	      || exit 1; \
	  fi; \
	done
check-am: all-am
check: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) check-recursive
all-am: Makefile $(LIBRARIES) $(DATA) $(HEADERS)
installdirs: installdirs-recursive
installdirs-am:
	for dir in "$(DESTDIR)$(libdir)" "$(DESTDIR)$(pkgdatadir)" "$(DESTDIR)$(includedir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) install-recursive
install-exec: install-exec-recursive
install-data: install-data-recursive
uninstall: uninstall-recursive

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-recursive
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	  install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	  `test -z '$(STRIP)' || \
	    echo "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'"` install
mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
	-test -z "$(BUILT_SOURCES)" || rm -f $(BUILT_SOURCES)
clean: clean-recursive

clean-am: clean-generic clean-libLIBRARIES mostlyclean-am

distclean: distclean-recursive
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-recursive

dvi-am:

html: html-recursive

info: info-recursive

info-am:

install-data-am: install-includeHEADERS install-nobase_pkgdataDATA
	@$(NORMAL_INSTALL)
	$(MAKE) $(AM_MAKEFLAGS) install-data-hook

install-dvi: install-dvi-recursive

install-exec-am: install-libLIBRARIES

install-html: install-html-recursive

install-info: install-info-recursive

install-man:

install-pdf: install-pdf-recursive

install-ps: install-ps-recursive

installcheck-am:

maintainer-clean: maintainer-clean-recursive
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-recursive

mostlyclean-am: mostlyclean-compile mostlyclean-generic

pdf: pdf-recursive

pdf-am:

ps: ps-recursive

ps-am:

uninstall-am: uninstall-includeHEADERS uninstall-libLIBRARIES \
	uninstall-nobase_pkgdataDATA

.MAKE: $(RECURSIVE_CLEAN_TARGETS) $(RECURSIVE_TARGETS) install-am \
	install-data-am install-strip

.PHONY: $(RECURSIVE_CLEAN_TARGETS) $(RECURSIVE_TARGETS) CTAGS GTAGS \
	all all-am check check-am clean clean-generic \
	clean-libLIBRARIES ctags ctags-recursive distclean \
	distclean-compile distclean-generic distclean-tags distdir dvi \
	dvi-am html html-am info info-am install install-am \
	install-data install-data-am install-data-hook install-dvi \
	install-dvi-am install-exec install-exec-am install-html \
	install-html-am install-includeHEADERS install-info \
	install-info-am install-libLIBRARIES install-man \
	install-nobase_pkgdataDATA install-pdf install-pdf-am \
	install-ps install-ps-am install-strip installcheck \
	installcheck-am installdirs installdirs-am maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic pdf pdf-am ps ps-am tags tags-recursive \
	uninstall uninstall-am uninstall-includeHEADERS \
	uninstall-libLIBRARIES uninstall-nobase_pkgdataDATA


stdsoap2_ck.c: stdsoap2.cpp
	$(LN_S) -f $(srcdir)/stdsoap2.cpp stdsoap2_ck.c

stdsoap2_cpp.cpp: stdsoap2.cpp
	$(LN_S) -f $(srcdir)/stdsoap2.cpp stdsoap2_cpp.cpp

stdsoap2_ck_cpp.cpp: stdsoap2.cpp
	$(LN_S) -f $(srcdir)/stdsoap2.cpp stdsoap2_ck_cpp.cpp

stdsoap2_ssl.c: stdsoap2.cpp
	$(LN_S) -f $(srcdir)/stdsoap2.cpp stdsoap2_ssl.c

stdsoap2_ssl_cpp.cpp: stdsoap2.cpp
	$(LN_S) -f $(srcdir)/stdsoap2.cpp stdsoap2_ssl_cpp.cpp

install-data-hook:
	$(LN_S) -f $(top_builddir)/gsoap/src/soapcpp2 $(top_builddir)/gsoap/soapcpp2 || echo "ok, link already exists".
	$(LN_S) -f $(top_builddir)/gsoap/wsdl/wsdl2h $(top_builddir)/gsoap/wsdl2h || echo "ok, link already exists".
# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
