# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

#project name
PROJECT(CodeNote)

#head file path
INCLUDE_DIRECTORIES(include)

#source file path
AUX_SOURCE_DIRECTORY(src DIR_SRCS)

#指定源文件
#用变量的方式默认路径下的所有源文件
#add_executable(CodeNote ${DIR_SRCS})

#set extern libraries
option(wxWidgets3.0 "use wxWidgets lib")
option(WIN32_WINDOW "Set as Window Program")

#添加编译参数
add_definitions(-DDBUG)

#设置成窗口程序
IF(WIN32_WINDOW)
    SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS") 
ENDIF(WIN32_WINDOW)

#添加WX库
if (wxWidgets3.0)
	INCLUDE_DIRECTORIES("E:/wxWidgets-3.0.4/include")
	INCLUDE_DIRECTORIES("E:/wxWidgets-3.0.4/lib/vc_lib/mswud")
	
	link_directories("E:/wxWidgets-3.0.4/lib/vc_lib")
	set(PROJECT_WX_LIBS
		wxbase30ud_net.lib  
		wxmsw30ud_html.lib  
		wxbase30ud_xml.lib  
		wxmsw30ud_adv.lib  
		wxmsw30ud_aui.lib  
		wxmsw30ud_gl.lib  
		wxmsw30ud_media.lib  
		wxmsw30ud_propgrid.lib  
		wxmsw30ud_qa.lib  
		wxmsw30ud_ribbon.lib  
		wxmsw30ud_richtext.lib  
		wxmsw30ud_stc.lib  
		wxmsw30ud_xrc.lib  
		wxscintillad.lib  
		wxmsw30ud_core.lib  
		wxbase30ud.lib  
		wxjpegd.lib  
		wxpngd.lib  
		wxzlibd.lib  
		wxexpatd.lib  
		winmm.lib  
		comctl32.lib  
		rpcrt4.lib  
		wsock32.lib  
		odbc32.lib)
	add_executable(CodeNote ${DIR_SRCS})
	TARGET_LINK_LIBRARIES(CodeNote ${PROJECT_WX_LIBS})
endif(wxWidgets3.0)
