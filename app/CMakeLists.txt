#message ("Cmake project name ${PROJECT_NAME}")

# Application name
set(APP_NAME "${PROJECT_NAME}App.out")

# Application paths
set(APP_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
set(APP_SOURCE_PATH "${APP_MODULE_PATH}/src")

# Add module sources
add_subdirectory(${APP_SOURCE_PATH})
# Add module headers
# add_subdirectory()

# Target definition
add_executable(${APP_NAME} ${SOURCE})

# Target linker search path
target_link_libraries(${APP_NAME}
    thirdparty_spdlog
    test_lib)

# get_target_property(foo ${APP_NAME} INCLUDE_DIRECTORIES)
# message("${APP_NAME} includes ${foo}")

