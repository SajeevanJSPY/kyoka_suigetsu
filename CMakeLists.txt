if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR
    "CMake generation for `Kyoka Suigetsu` is not allowed within the source directory!"
    "\n Remove \"${CMAKE_SOURCE_DIR}/CMakeCache.txt\" and try again from another folder, e.g.:"
    "\n "
    "\n rm -rf CMakeCache.txt CMakeFiles"
    "\n cd .."
    "\n mkdir build"
    "\n cd build"
    "\n cmake ../"
    "\n "
    )
endif()

cmake_minimum_required (VERSION 3.28.0)

if(NOT DEFINED CMAKE_BUILD_TYPE_INIT)
    set(CMAKE_BUILD_TYPE_INIT "Release")
endif()
mark_as_advanced(CMAKE_BUILD_TYPE_INIT)

set (CMAKE_C_COMPILER clang)
# Global compile definitions since add_definitions() adds for all.
# _DEBUG is a Visual Studio define, enabled for all platforms.
set_property(DIRECTORY APPEND PROPERTY COMPILE_DEFINITIONS
  $<$<CONFIG:Debug>:_DEBUG>
)

# C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

project (kyoka_suigetsu)

# include paths
include_directories(${CMAKE_SOURCE_DIR}/core)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin CACHE INTERNAL "" FORCE)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib CACHE INTERNAL "" FORCE)

# vulkan
option(WITH_VULKAN_BACKEND "Enable Vulkan as graphics backend" ON)
mark_as_advanced(WITH_VULKAN_BACKEND)

# opengl
option(WITH_OPENGL_BACKEND "Enable OpenGL support as graphic backend" ON)
mark_as_advanced(WITH_OPENGL_BACKEND)



# //------------------ Bins and Libs -------------------//
# //----------------------------------------------------//
add_subdirectory(core)
# add_subdirectory(platform)
# add_subdirectory(kanzen_saimin)


# bins
add_subdirectory(tensa_zangetsu) # game engine