#!/bin/bash -norc
dnl	This file is an input file used by the GNU "autoconf" program to
dnl	generate the file "configure", which is run during Tcl installation
dnl	to configure the system for the local environment.

#-----------------------------------------------------------------------
# Sample configure.ac for Tcl Extensions.  The only places you should
# need to modify this file are marked by the string __CHANGE__
#-----------------------------------------------------------------------

#-----------------------------------------------------------------------
# __CHANGE__
# Set your package name and version numbers here.
#
# This initializes the environment with PACKAGE_NAME and PACKAGE_VERSION
# set as provided.  These will also be added as -D defs in your Makefile
# so you can encode the package version directly into the source files.
# This will also define a special symbol for Windows (BUILD_<PACKAGE_NAME>
# so that we create the export library with the dll.
#-----------------------------------------------------------------------

AC_INIT([tksao], [1.0])

#--------------------------------------------------------------------
# Call TEA_INIT as the first TEA_ macro to set up initial vars.
# This will define a ${TEA_PLATFORM} variable == "unix" or "windows"
# as well as PKG_LIB_FILE and PKG_STUB_LIB_FILE.
#--------------------------------------------------------------------

TEA_INIT()

AC_CONFIG_AUX_DIR(tclconfig)

#--------------------------------------------------------------------
# Load the tclConfig.sh file
#--------------------------------------------------------------------

TEA_PATH_TCLCONFIG
TEA_LOAD_TCLCONFIG

#--------------------------------------------------------------------
# Load the tkConfig.sh file if necessary (Tk extension)
#--------------------------------------------------------------------

TEA_PATH_TKCONFIG
TEA_LOAD_TKCONFIG

#-----------------------------------------------------------------------
# Handle the --prefix=... option by defaulting to what Tcl gave.
# Must be called after TEA_LOAD_TCLCONFIG and before TEA_SETUP_COMPILER.
#-----------------------------------------------------------------------

TEA_PREFIX

#-----------------------------------------------------------------------
# Standard compiler checks.
# This sets up CC by using the CC env var, or looks for gcc otherwise.
# This also calls AC_PROG_CC and a few others to create the basic setup
# necessary to compile executables.
#-----------------------------------------------------------------------

TEA_SETUP_COMPILER

#-----------------------------------------------------------------------
# __CHANGE__
# Specify the C source files to compile in TEA_ADD_SOURCES,
# public headers that need to be installed in TEA_ADD_HEADERS,
# stub library C source files to compile in TEA_ADD_STUB_SOURCES,
# and runtime Tcl library files in TEA_ADD_TCL_SOURCES.
# This defines PKG(_STUB)_SOURCES, PKG(_STUB)_OBJECTS, PKG_HEADERS
# and PKG_TCL_SOURCES.
#-----------------------------------------------------------------------

TEA_ADD_SOURCES([
saotk.C
colorbar/cbgrid.C
colorbar/colorbar.C
colorbar/colorbarbase.C
colorbar/colorbarrgb.C
colorbar/colorbarrgbtruecolor16.C
colorbar/colorbarrgbtruecolor24.C
colorbar/colorbarrgbtruecolor8.C
colorbar/colorbartruecolor16.C
colorbar/colorbartruecolor24.C
colorbar/colorbartruecolor8.C
colorbar/colormap.C
colorbar/colortag.C
colorbar/default.C
colorbar/lex.C
colorbar/lut.C
colorbar/lutlex.C
colorbar/lutparser.C
colorbar/parser.C
colorbar/sao.C
colorbar/saolex.C
colorbar/saoparser.C
fitsy++/alloc.C
fitsy++/allocgz.C
fitsy++/analysis.C
fitsy++/block.C
fitsy++/card.C
fitsy++/channel.C
fitsy++/column.C
fitsy++/compress.C
fitsy++/envi.C
fitsy++/envilex.C
fitsy++/enviparser.C
fitsy++/file.C
fitsy++/gzip.C
fitsy++/hcompress.C
fitsy++/hdecompress.c
fitsy++/hdu.C
fitsy++/head.C
fitsy++/hist.C
fitsy++/hpx.C
fitsy++/iis.C
fitsy++/lex.C
fitsy++/map.C
fitsy++/mapincr.C
fitsy++/mmap.C
fitsy++/mmapincr.C
fitsy++/nrrd.C
fitsy++/nrrdgzip.C
fitsy++/nrrdlex.C
fitsy++/nrrdparser.C
fitsy++/order.C
fitsy++/outchannel.C
fitsy++/outfile.C
fitsy++/outfits.C
fitsy++/outsocket.C
fitsy++/parser.C
fitsy++/photo.C
fitsy++/plio.C
fitsy++/pliocomp.c
fitsy++/rice.C
fitsy++/ricecomp.c
fitsy++/savefits.C
fitsy++/share.C
fitsy++/smap.C
fitsy++/smmap.C
fitsy++/socket.C
fitsy++/socketgz.C
fitsy++/sshare.C
fitsy++/strm.C
fitsy++/var.C
frame/annulus.C
frame/base.C
frame/basebox.C
frame/basecommand.C
frame/baseellipse.C
frame/baseline.C
frame/baseload.C
frame/basemarker.C
frame/basepolygon.C
frame/box.C
frame/boxannulus.C
frame/bpanda.C
frame/callback.C
frame/ciaolex.C
frame/ciaoparser.C
frame/circle.C
frame/colorscale.C
frame/colorscalergb.C
frame/colorscaletrue16.C
frame/colorscaletrue24.C
frame/colorscaletrue32.C
frame/colorscaletrue8.C
frame/compass.C
frame/composite.C
frame/context.C
frame/contour.C
frame/contourlex.C
frame/contourparser.C
frame/coord.C
frame/cpanda.C
frame/ds9lex.C
frame/ds9parser.C
frame/ellipse.C
frame/ellipseannulus.C
frame/epanda.C
frame/fitsanalysis.C
frame/fitsbin.C
frame/fitsblock.C
frame/fitscompress.C
frame/fitsdata.C
frame/fitsenvi.C
frame/fitshealpix.C
frame/fitsimage.C
frame/fitsmap.C
frame/fitsmask.C
frame/fitsnrrd.C
frame/fr3dcommand.C
frame/fr3dmap.C
frame/frame.C
frame/frame3d.C
frame/frame3dbase.C
frame/frame3dtruecolor16.C
frame/frame3dtruecolor24.C
frame/frame3dtruecolor8.C
frame/framebase.C
frame/frameload.C
frame/framergb.C
frame/framergbload.C
frame/framergbtruecolor16.C
frame/framergbtruecolor24.C
frame/framergbtruecolor8.C
frame/frametruecolor16.C
frame/frametruecolor24.C
frame/frametruecolor8.C
frame/frblt.C
frame/frcommand.C
frame/frmap.C
frame/frmarker.C
frame/frmarkerxml.C
frame/frsave.C
frame/frscale.C
frame/fvcontour.C
frame/grid.C
frame/grid25d.C
frame/grid2d.C
frame/grid3d.C
frame/inversescale.C
frame/lex.C
frame/line.C
frame/marker.C
frame/parser.C
frame/point.C
frame/polygon.C
frame/projection.C
frame/proslex.C
frame/prosparser.C
frame/raytrace.C
frame/ruler.C
frame/saolex.C
frame/saoparser.C
frame/segment.C
frame/tag.C
frame/text.C
frame/tnglex.C
frame/tngparser.C
frame/vect.C
frame/wcsast.C
frame/xylex.C
frame/xyparser.C
list/list.C
magnifier/lex.C
magnifier/magnifier.C
magnifier/magnifiertrue.C
magnifier/parser.C
panner/lex.C
panner/panner.C
panner/pannertrue.C
panner/parser.C
util/attribute.C
util/convolve.C
util/grf.C
util/grf3d.C
util/grid25dbase.C
util/grid2dbase.C
util/grid3dbase.C
util/gridbase.C
util/ps.C
util/util.C
vector/vector.C
vector/vector3d.C
vector/vectorstr.C
widget/truecolor16.C
widget/truecolor24.C
widget/truecolor8.C
widget/widget.C
])

TEA_ADD_HEADERS([])
TEA_ADD_INCLUDES([-I. -I./colorbar -I./fitsy++ -I./frame -I./list -I./magnifier -I./panner -I./util -I./vector -I./widget -I${prefix}/include])
TEA_ADD_LIBS([-lstdc++])
TEA_ADD_CFLAGS([])
TEA_ADD_STUB_SOURCES([])
TEA_ADD_TCL_SOURCES([])

case ${TEA_PLATFORM} in
    windows*)
	AC_DEFINE(HAVE_MINGW32)
	;;
    *)
	AC_CHECK_HEADERS(sys/shm.h)
	;;
esac

#--------------------------------------------------------------------
# __CHANGE__
#
# You can add more files to clean if your extension creates any extra
# files by extending CLEANFILES.
# Add pkgIndex.tcl if it is generated in the Makefile instead of ./configure
# and change Makefile.in to move it from CONFIG_CLEAN_FILES to BINARIES var.
#
# A few miscellaneous platform-specific items:
# TEA_ADD_* any platform specific compiler/build info here.
#--------------------------------------------------------------------

TEA_CONFIG_SYSTEM

case $system in
    Darwin* )
	devdir=`xcrun --show-sdk-path`
	TEA_ADD_INCLUDES([-I${devdir}/usr/include/libxml2])
	;;
    CYGWIN* )
	TEA_ADD_INCLUDES([-I/usr/include/libxml2])
	;;
    Linux* )
	TEA_ADD_INCLUDES([-I/usr/include/libxml2])
	;;
    windows*)
	TEA_ADD_INCLUDES([-I${prefix}/include/libxml2])
	;;
esac

#CLEANFILES="$CLEANFILES pkgIndex.tcl"
#if test "${TEA_PLATFORM}" = "windows" ; then
#    TEA_ADD_INCLUDES([-I${prefix}/include/libxml2])
#else
#    TEA_ADD_INCLUDES([-I/usr/include/libxml2])
#fi

#--------------------------------------------------------------------
# __CHANGE__
# Choose which headers you need.  Extension authors should try very
# hard to only rely on the Tcl public header files.  Internal headers
# contain private data structures and are subject to change without
# notice.
# This MUST be called after TEA_LOAD_TCLCONFIG / TEA_LOAD_TKCONFIG
#--------------------------------------------------------------------

TEA_PUBLIC_TCL_HEADERS
#TEA_PRIVATE_TCL_HEADERS

TEA_PUBLIC_TK_HEADERS
TEA_PRIVATE_TK_HEADERS
TEA_PATH_X

#--------------------------------------------------------------------
# Check whether --enable-threads or --disable-threads was given.
# This auto-enables if Tcl was compiled threaded.
#--------------------------------------------------------------------

TEA_ENABLE_THREADS

#--------------------------------------------------------------------
# The statement below defines a collection of symbols related to
# building as a shared library instead of a static library.
#--------------------------------------------------------------------

TEA_ENABLE_SHARED

#--------------------------------------------------------------------
# This macro figures out what flags to use with the compiler/linker
# when building shared/static debug/optimized objects.  This information
# can be taken from the tclConfig.sh file, but this figures it all out.
#--------------------------------------------------------------------

TEA_CONFIG_CFLAGS

#--------------------------------------------------------------------
# Set the default compiler switches based on the --enable-symbols option.
#--------------------------------------------------------------------

TEA_ENABLE_SYMBOLS

#--------------------------------------------------------------------
# This macro generates a line to use when building a library.  It
# depends on values set by the TEA_ENABLE_SHARED, TEA_ENABLE_SYMBOLS,
# and TEA_LOAD_TCLCONFIG macros above.
#--------------------------------------------------------------------

TEA_MAKE_LIB

#--------------------------------------------------------------------
# Determine the name of the tclsh and/or wish executables in the
# Tcl and Tk build directories or the location they were installed
# into. These paths are used to support running test cases only,
# the Makefile should not be making use of these paths to generate
# a pkgIndex.tcl file or anything else at extension build time.
#--------------------------------------------------------------------

TEA_PROG_TCLSH
TEA_PROG_WISH

#--------------------------------------------------------------------
# Setup a *Config.sh.in configuration file.
#--------------------------------------------------------------------

TEA_EXPORT_CONFIG([tksao])
#AC_SUBST(SAMPLE_VAR)

#--------------------------------------------------------------------
# Specify files to substitute AC variables in. You may alternatively
# have a special pkgIndex.tcl.in or other files which require
# substituting the AC variables in. Include these here.
#--------------------------------------------------------------------

AC_CONFIG_FILES([Makefile pkgIndex.tcl])
AC_CONFIG_FILES([tksaoConfig.sh])

#--------------------------------------------------------------------
# Finally, substitute all of the various values into the files
# specified with AC_CONFIG_FILES.
#--------------------------------------------------------------------

AC_OUTPUT()
