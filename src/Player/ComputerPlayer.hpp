//
// Created by hagaivinik on 6/2/23.
//

#ifndef IMC_ASSIGNMENT_COMPUTERPLAYER_HPP
#define IMC_ASSIGNMENT_COMPUTERPLAYER_HPP

#include <iostream>
#include <random>

#include "BasePlayer.hpp"


class ComputerPlayer : public BasePlayer
{
public:
    RPSGameUtils::PlayerChoice getPlayerChoice() override
    {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> dist(1, 3);

        int intChoice = dist(mt);
        std::cout << "Computer choice was: " << intChoice << std::endl;

        RPSGameUtils::PlayerChoice playerChoice = RPSGameUtils::covertToPlayerChoice(intChoice);
        return playerChoice;
    }

};


#endif //IMC_ASSIGNMENT_COMPUTERPLAYER_HPP
