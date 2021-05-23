cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(VideoTrack LANGUAGES C CXX)

# find_include and find_library


# end find_include and find_library

#macro
MACRO(SUBDIRLIST result curdir)
  FILE(GLOB children RELATIVE ${curdir} ${curdir}/*)
  SET(dirlist "")
  FOREACH(child ${children})
    IF(IS_DIRECTORY ${curdir}/${child})
      LIST(APPEND dirlist ${child})
    ENDIF()
  ENDFOREACH()
  SET(${result} ${dirlist})
ENDMACRO()
#end macro

add_subdirectory(Projects)