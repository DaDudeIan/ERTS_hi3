#include the headers
#include_directories(headers)
#include_directories(${CMAKE_SOURCE_DIR}/src/common)

#set(SOURCES EmbeddedSystemX.cpp Failure.cpp Initializing.cpp PowerOnSelfTest.cpp)

#add_executable(EmbeddedSystemX_bin EmbeddedSystemX.cpp)

#target_link_libraries(EmbeddedSystemX_bin common)
#target_include_directories(EmbeddedSystemX_bin PRIVATE headers)

#set_target_properties(
#    EmbeddedSystemX_bin PROPERTIES
#    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/EmbeddedSystemX/"
#    OUTPUT_NAME EmbeddedSystemX
#)


add_library(EmbeddedSystemX_lib 
    STATIC 
    Failure.cpp
    Initializing.cpp
    PowerOnSelfTest.cpp
    EmbeddedSystemX.cpp
)

target_link_libraries(EmbeddedSystemX_lib PRIVATE common Operational_lib)
target_include_directories(EmbeddedSystemX_lib PUBLIC headers)

