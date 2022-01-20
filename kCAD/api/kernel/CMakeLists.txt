set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS ui)

add_definitions(${QT_DEFINITIONS})

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")
file(GLOB_RECURSE forms "ui/.ui")

qt_wrap_cpp(qt_moc_headers ${headers})
qt_wrap_ui(qt_uic_forms ${forms})

qt_wrap_ui(SOURCES src/main_window.ui)

add_library(api_kernel STATIC ${sources} ${qt_moc_headers} ${qt_uic_forms})

target_include_directories(api_kernel PUBLIC include PRIVATE src)

target_link_libraries(api_kernel external utility Qt${QT_VERSION_MAJOR}::Widgets)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(api_kernel)
endif()

