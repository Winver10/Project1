cmake_minimum_required(VERSION 3.10)

project(Project1 VERSION 0.2 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
#C++ Standard 11
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#You must follow the rules

add_executable(Project1 #All .cpp files
	${CMAKE_CURRENT_SOURCE_DIR}/Program/Source.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Program/CommandProcessor.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Program/gotoProcessor.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Program/openProcessor.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Program/whereProcessor.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Program/Start.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Program/helpProcessor.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Program/exitProcessor.cpp
	 "Program/Reader.h")

target_include_directories(Project1
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/include
	)
