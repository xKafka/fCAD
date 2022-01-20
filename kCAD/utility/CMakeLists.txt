file(GLOB_RECURSE sources "src/*.cpp")

add_library(utility STATIC ${sources})

target_include_directories(utility PUBLIC include PRIVATE src)

target_link_libraries(utility external)
