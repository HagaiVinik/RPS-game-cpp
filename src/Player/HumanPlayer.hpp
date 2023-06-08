//
// Created by hagaivinik on 6/2/23.
//

#ifndef IMC_ASSIGNMENT_HUMANPLAYER_HPP
#define IMC_ASSIGNMENT_HUMANPLAYER_HPP

#include <iostream>
#include <iomanip>

#include "BasePlayer.hpp"


class HumanPlayer : public BasePlayer
{
public:
    RPSGameUtils::PlayerChoice getPlayerChoice() override
    {
        printMenuForUser();

        std::string input;
        std::getline(std::cin, input);

        while(input != "1"  && input != "2" && input != "3")
        {
            std::cout << "please enter a valid input (1-3): " << std::endl;
            std::cout << "Your choice: " ;
            std::getline(std::cin, input);
        }

        int choice = std::stoi(input);

        RPSGameUtils::PlayerChoice playerChoice = RPSGameUtils::covertToPlayerChoice(choice);
        return playerChoice;
    }

private:
    void printMenuForUser()
    {
        std::cout << "Please choose your hand:" << std::endl;
        std::cout << "1. Rock " << std::endl;
        std::cout << "2. Paper " << std::endl;
        std::cout << "3. Scissors " << std::endl;
        std::cout << "Your choice: " ;
    }
};


#endif //IMC_ASSIGNMENT_HUMANPLAYER_HPP
