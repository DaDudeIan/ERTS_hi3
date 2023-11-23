add_library(Operational_lib 
    STATIC
    Ready.cpp
    Configuration.cpp
    Operational.cpp
    Suspended.cpp
    ResumeCommand.cpp
    StopCommand.cpp
)

target_link_libraries(Operational_lib PRIVATE common EmbeddedSystemX_lib)
target_include_directories(Operational_lib PUBLIC headers)