################################################################################
# Copyright (c) 2021, Initialsoft, Inc.
# All rights reserved.
#
# [description]
#
# author   : hunt978(hunt978@initialsoft.com)
# create   : 2021-03-15 03:15:35 UTC
# modified : 2021-03-17 13:42:00 UTC
################################################################################

# cmake version
cmake_minimum_required(VERSION 3.5.0)

# project
project(workroom_sln)

# output
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/build)
set(CMAKE_PDB_OUTPUT_DIRECTORY     ${CMAKE_HOME_DIRECTORY}/build)

# debug
if(NOT CMAKE_DEBUG_POSTFIX)
  set(CMAKE_DEBUG_POSTFIX d)
endif()

# import script
include(cmake/CXXHelper.cmake)
EnableCxx17()

# goto subs
add_subdirectory(src)
add_subdirectory(srcpp)
