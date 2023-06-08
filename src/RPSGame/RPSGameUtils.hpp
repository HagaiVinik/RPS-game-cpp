//
// Created by hagaivinik on 6/2/23.
//

#ifndef IMC_ASSIGNMENT_RPSGAMEUTILS_HPP
#define IMC_ASSIGNMENT_RPSGAMEUTILS_HPP

#include <stdexcept>

namespace RPSGameUtils
{
    enum class PlayerChoice
    {
        ROCK = 1,
        PAPER,
        SCISSORS
    };

    static PlayerChoice covertToPlayerChoice(uint32_t choice)
    {
        if (choice == 1)
        {
            return PlayerChoice::ROCK;
        }
        else if (choice == 2)
        {
            return PlayerChoice::PAPER;
        }
        else if (choice == 3)
        {
            return PlayerChoice::SCISSORS;
        }

        else
        {
            throw std::invalid_argument("Argument provided is invalid.");   //unreachable, but just in case.
        }
    }
}

#endif //IMC_ASSIGNMENT_RPSGAMEUTILS_HPP
