#############################################################################
# Makefile for building: JMPQuick
# Generated by qmake (3.1) (Qt 5.11.2)
# Project:  JMPQuick.pro
# Template: app
# Command: /home/whisper/mxe/usr/bin/x86_64-w64-mingw32.static-qmake-qt5 -o Makefile JMPQuick.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = /home/whisper/mxe/usr/bin/x86_64-w64-mingw32.static-qmake-qt5
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = /home/whisper/mxe/usr/bin/x86_64-w64-mingw32.static-qmake-qt5 -install qinstall
QINSTALL_PROGRAM = /home/whisper/mxe/usr/bin/x86_64-w64-mingw32.static-qmake-qt5 -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
SUBTARGETS    =  \
		release \
		debug


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

Makefile: JMPQuick.pro ../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/win32-g++/qmake.conf ../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/spec_pre.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/qdevice.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/device_config.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/sanitize.conf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/gcc-base.conf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/g++-base.conf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/angle.conf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/windows-vulkan.conf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/g++-win32.conf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/qconfig.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_edid_support_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_fb_support_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_theme_support_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_zlib_private.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qflatpak.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qgenericbearer.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qgif.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qico.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qjpeg.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qminimal.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qoffscreen.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlite.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlmysql.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlodbc.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlpsql.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqltds.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qtuiotouchplugin.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qwindows.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qwindowsvistastyle.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_windowsprintersupport.pri \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt_functions.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt_config.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/win32-g++/qmake.conf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/spec_post.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/toolchain.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/default_pre.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/default_pre.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/resolve_config.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds_post.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/default_post.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/precompile_header.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/warn_on.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/resources.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/moc.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/opengl.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/uic.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qmake_use.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/file_copies.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/windows.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/testcase_targets.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exceptions.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/yacc.prf \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/lex.prf \
		JMPQuick.pro \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/lib/qtmain.prl \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/styles/qwindowsvistastyle.prl \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/platforms/qwindows.prl \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/imageformats/qgif.prl \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/imageformats/qico.prl \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/imageformats/qjpeg.prl \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Widgets.prl \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Gui.prl \
		../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Core.prl
	$(QMAKE) -o Makefile JMPQuick.pro
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/spec_pre.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/qdevice.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/device_config.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/sanitize.conf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/gcc-base.conf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/g++-base.conf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/angle.conf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/windows-vulkan.conf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/g++-win32.conf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/qconfig.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_edid_support_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_fb_support_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_theme_support_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_zlib_private.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qflatpak.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qgenericbearer.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qgif.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qico.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qjpeg.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qminimal.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qoffscreen.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlite.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlmysql.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlodbc.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlpsql.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqltds.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qtuiotouchplugin.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qwindows.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qwindowsvistastyle.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_windowsprintersupport.pri:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt_functions.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt_config.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/win32-g++/qmake.conf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/spec_post.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/toolchain.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/default_pre.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/default_pre.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/resolve_config.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds_post.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/default_post.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/precompile_header.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/warn_on.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/resources.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/moc.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/opengl.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/uic.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qmake_use.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/file_copies.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/windows.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/testcase_targets.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exceptions.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/yacc.prf:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/lex.prf:
JMPQuick.pro:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/lib/qtmain.prl:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/styles/qwindowsvistastyle.prl:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/platforms/qwindows.prl:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/imageformats/qgif.prl:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/imageformats/qico.prl:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/imageformats/qjpeg.prl:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Widgets.prl:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Gui.prl:
../../../../mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile JMPQuick.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) "/home/whisper/Projects/LM Archive/Tools/JMPQuick/jmpquick_plugin_import.cpp" .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile