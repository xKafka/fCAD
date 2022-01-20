message("-- Linking DLL")

find_package(Vulkan REQUIRED)

add_library(external INTERFACE)

target_include_directories(external INTERFACE eigen/ fmt/include)

target_include_directories(external INTERFACE ${Vulkan_INCLUDE_DIRS})

target_link_directories(external INTERFACE fmt/lib)

target_link_libraries(external INTERFACE fmt Vulkan::Vulkan)
