cmake_minimum_required(VERSION 3.21)
project(IMC_assignment)

set(CMAKE_CXX_STANDARD 17)


include_directories(src)
include_directories(src/RPSGame)
include_directories(src/Player)

add_executable(IMC_assignment
        src/main.cpp
        src/RPSGame/RPSGame.hpp
        src/RPSGame/RPSGame.cpp
        src/RPSGame/RPSGameUtils.hpp
        src/Player/BasePlayer.hpp
        src/Player/ComputerPlayer.hpp
        src/Player/HumanPlayer.hpp
        )
