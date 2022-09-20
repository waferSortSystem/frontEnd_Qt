#############################################################################
# Makefile for building: ViewerProject
# Generated by qmake (3.1) (Qt 6.3.1)
# Project:  ViewerProject.pro
# Template: app
# Command: D:\App\Qt\6.3.1\mingw_64\bin\qmake.exe -o Makefile ViewerProject.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
#############################################################################

MAKEFILE      = Makefile

EQ            = =

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = D:\App\Qt\6.3.1\mingw_64\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = D:\App\Qt\6.3.1\mingw_64\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = D:\App\Qt\6.3.1\mingw_64\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
IDC           = idc
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = 
SED           = $(QMAKE) -install sed
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: ViewerProject.pro ../../../App/Qt/6.3.1/mingw_64/mkspecs/win32-g++/qmake.conf ../../../App/Qt/6.3.1/mingw_64/mkspecs/features/spec_pre.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/device_config.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/common/sanitize.conf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/common/gcc-base.conf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/common/g++-base.conf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/win32/windows_vulkan_sdk.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/common/windows-vulkan.conf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/common/g++-win32.conf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/common/windows-desktop.conf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/qconfig.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_ext_freetype.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_ext_libjpeg.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_ext_libpng.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_concurrent.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_core.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_core_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_dbus.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_dbus_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_designer.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_designer_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_entrypoint_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_freetype_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_gui.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_gui_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_harfbuzz_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_help.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_help_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_jpeg_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsanimation.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsanimation_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labssettings.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labssettings_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_linguist.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_linguist_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_network.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_network_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_opengl.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_png_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_printsupport.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qml.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qml_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlcompiler_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlcore.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlcore_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmldom_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmllint_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmltest.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quick.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quick_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickcontrolstestutilsprivate_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickshapes_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quicktestutilsprivate_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_sql.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_sql_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_svg.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_svg_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_testlib.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_tools_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_uiplugin.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_uitools.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_uitools_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_widgets.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_xml.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_xml_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_zlib_private.pri \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/qt_functions.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/qt_config.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/win32-g++/qmake.conf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/spec_post.prf \
		.qmake.stash \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/exclusive_builds.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/toolchain.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/default_pre.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/win32/default_pre.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/resolve_config.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/exclusive_builds_post.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/default_post.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/lrelease.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/qml_debug.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/entrypoint.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/precompile_header.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/warn_on.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/qt.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/resources_functions.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/resources.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/moc.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/win32/opengl.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/uic.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/qmake_use.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/file_copies.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/win32/windows.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/testcase_targets.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/exceptions.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/yacc.prf \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/lex.prf \
		ViewerProject.pro \
		../../../App/Qt/6.3.1/mingw_64/lib/Qt6Widgets.prl \
		../../../App/Qt/6.3.1/mingw_64/lib/Qt6Gui.prl \
		../../../App/Qt/6.3.1/mingw_64/lib/Qt6Network.prl \
		../../../App/Qt/6.3.1/mingw_64/lib/Qt6Core.prl \
		../../../App/Qt/6.3.1/mingw_64/lib/Qt6EntryPoint.prl \
		../../../App/Qt/6.3.1/mingw_64/mkspecs/features/build_pass.prf \
		debug/qmake_qmake_qm_files.qrc \
		release/qmake_qmake_qm_files.qrc
	$(QMAKE) -o Makefile ViewerProject.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/spec_pre.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/device_config.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/common/sanitize.conf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/common/gcc-base.conf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/common/g++-base.conf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/win32/windows_vulkan_sdk.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/common/windows-vulkan.conf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/common/g++-win32.conf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/common/windows-desktop.conf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/qconfig.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_ext_freetype.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_ext_libjpeg.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_ext_libpng.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_concurrent.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_concurrent_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_core.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_core_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_dbus.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_dbus_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_designer.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_designer_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_entrypoint_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_fb_support_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_freetype_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_gui.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_gui_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_harfbuzz_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_help.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_help_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_jpeg_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsanimation.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsanimation_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labssettings.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labssettings_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_linguist.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_linguist_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_network.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_network_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_opengl.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_opengl_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_packetprotocol_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_png_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_printsupport.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_printsupport_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qml.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qml_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlcompiler_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlcore.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlcore_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmldebug_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmldom_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmllint_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmltest.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmltest_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quick.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quick_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickcontrolstestutilsprivate_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickshapes_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quicktestutilsprivate_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_sql.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_sql_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_svg.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_svg_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_testlib.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_testlib_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_tools_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_uiplugin.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_uitools.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_uitools_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_widgets.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_widgets_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_xml.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_xml_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/modules/qt_lib_zlib_private.pri:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/qt_functions.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/qt_config.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/win32-g++/qmake.conf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/spec_post.prf:
.qmake.stash:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/exclusive_builds.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/toolchain.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/default_pre.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/win32/default_pre.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/resolve_config.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/exclusive_builds_post.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/default_post.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/lrelease.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/qml_debug.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/entrypoint.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/precompile_header.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/warn_on.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/qt.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/resources_functions.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/resources.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/moc.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/win32/opengl.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/uic.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/qmake_use.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/file_copies.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/win32/windows.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/testcase_targets.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/exceptions.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/yacc.prf:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/lex.prf:
ViewerProject.pro:
../../../App/Qt/6.3.1/mingw_64/lib/Qt6Widgets.prl:
../../../App/Qt/6.3.1/mingw_64/lib/Qt6Gui.prl:
../../../App/Qt/6.3.1/mingw_64/lib/Qt6Network.prl:
../../../App/Qt/6.3.1/mingw_64/lib/Qt6Core.prl:
../../../App/Qt/6.3.1/mingw_64/lib/Qt6EntryPoint.prl:
../../../App/Qt/6.3.1/mingw_64/mkspecs/features/build_pass.prf:
debug/qmake_qmake_qm_files.qrc:
release/qmake_qmake_qm_files.qrc:
qmake: FORCE
	@$(QMAKE) -o Makefile ViewerProject.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile