add_subdirectory(kernel)

add_executable(application  exec/main.cpp)

target_link_libraries(application PRIVATE api_kernel)
