cmake_minimum_required(VERSION 3.10)

project(Project1 VERSION 0.2 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
#C++ Standard 11
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#You must follow the rules

add_executable(Project1 #All .cpp files
	${CMAKE_CURRENT_SOURCE_DIR}/Programe/Source.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Programe/CommandProcessor.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Programe/gotoProcessor.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Programe/openProcessor.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Programe/whereProcessor.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Programe/Start.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Programe/helpProcessor.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Programe/exitProcessor.cpp
	)

target_include_directories(Project1
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/include
	)