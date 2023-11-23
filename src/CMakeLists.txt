# Add subdirectories
add_subdirectory(common)
add_subdirectory(main_state_machine)
add_subdirectory(operational_state_machine)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/common
    ${CMAKE_CURRENT_SOURCE_DIR}/main_state_machine
    ${CMAKE_CURRENT_SOURCE_DIR}/main_state_machine/headers
    ${CMAKE_CURRENT_SOURCE_DIR}/operational_state_machine
)

# main executable
add_executable(MyExecutable main.cpp)

set_target_properties(MyExecutable 
    PROPERTIES
    OUTPUT_NAME "main"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

# Link libraries to your executable
target_link_libraries(MyExecutable PRIVATE EmbeddedSystemX_lib common)

