cmake_minimum_required(VERSION 3.23)
project(My_Game_Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(My_Game_Project main.cpp Game.cpp Game.h States/State.cpp States/State.h States/GameState.cpp States/GameState.h Entity.cpp Entity.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML-2.5.1/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML-2.5.1/include)
target_link_libraries(My_Game_Project sfml-system sfml-window sfml-graphics sfml-audio)
