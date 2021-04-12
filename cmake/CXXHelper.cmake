################################################################################
# Copyright (c) 2018-2021, Induspotis, Inc.
# All rights reserved.
#
# Root cmake script entry
#
# author   : hunt978(hubq@initialsoft.com)
# create   : 2018-05-02 09:34:07 UTC
# modified : 2021-03-15 09:34:56 UTC
################################################################################

# cmake version
cmake_minimum_required(VERSION 3.5.0)

# build dock project
MACRO(EnableCxx17)

  # msvc
  if( MSVC_VERSION GREATER_EQUAL "1914" )
    add_compile_options("/Zc:__cplusplus")
  endif()

  if( MSVC_VERSION GREATER_EQUAL "1900" )
    include(CheckCXXCompilerFlag)
    CHECK_CXX_COMPILER_FLAG("/std:c++17" _compiler_supports_cxx17)
    if(_compiler_supports_cxx17)
      add_compile_options("/std:c++17")
    endif()
  endif()

  # gnu
  if( CMAKE_COMPILER_IS_GNUCXX )
    include(CheckCXXCompilerFlag)
    CHECK_CXX_COMPILER_FLAG("-std=c++17" _compiler_supports_cxx17)
    if(_compiler_supports_cxx17)
      set(CMAKE_CXX_FLAGS "-std=c++17 ${CMAKE_CXX_FLAGS}")
    endif()
  endif()

ENDMACRO(EnableCxx17)