cmake_minimum_required(VERSION 3.10)
project(OpenGLProject)

set(CMAKE_CXX_STANDARD 17)

# Ruta a códigofuente

add_subdirectory(external/glfw)

include_directories(
	external/glad/include
	external/glfw/include
	${MAKE_SOURCE_DIR}/include
)
	
add_library(glad STATIC external/glad/src/glad.c)

add_executable(OpenGLProject src/main.cpp)

target_link_libraries(OpenGLProject glad glfw ${CMAKE_DL_LIBS})
