#
cmake_minimum_required( VERSION 3.2.3 )
project( agd )

add_definitions(-DUNICODE -D_UNICODE)
#add_definitions("/EHsc")

# Inc/Lib
include_directories( "./" )

#include_directories( "$ENV{BOOST_INCLUDE}" )
#link_directories( "$ENV{BOOST_LIB}" )

#include_directories( "$ENV{LOKI_INCLUDE}" )

foreach(flag_var
        CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
        CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO)
   if(${flag_var} MATCHES "/MD")
      string(REGEX REPLACE "/MD" "/MT" ${flag_var} "${${flag_var}}")
   endif(${flag_var} MATCHES "/MD")
endforeach(flag_var)

add_executable( 
  agd
  "./src/pch.cpp"
  "./src/agd.cpp"
  "./src/agd.rc"
)
