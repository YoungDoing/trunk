# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

#project name
PROJECT(Personal Assistant)

#head file path
INCLUDE_DIRECTORIES(include)

#source file path
AUX_SOURCE_DIRECTORIES(src DIR_SRCS)

#指定源文件
#用变量的方式默认路径下的所有源文件
add_excutable(${DIR_SRCS})

#set extern libraries
if (wxWidgets3.0)
	message("wxWidgets3.0 is defined")
endif(wxWidgets3.0)