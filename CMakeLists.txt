cmake_minimum_required(VERSION 3.5)

project("playfield")

find_package(SDL2 REQUIRED)

#set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(SRC render.cpp shader.cpp timer.cpp display.cpp main.cpp)
  
add_executable(playfield ${SRC} )

target_link_libraries(playfield GLEW GL SDL2)
#target_include_directories(playfield BEFORE PUBLIC /usr/include)




