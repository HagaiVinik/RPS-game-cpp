//
// Created by hagaivinik on 6/2/23.
//

#ifndef IMC_ASSIGNMENT_BASEPLAYER_HPP
#define IMC_ASSIGNMENT_BASEPLAYER_HPP

#include "RPSGameUtils.hpp"


class BasePlayer
{
public:
    BasePlayer() = default;
    virtual ~BasePlayer() = default;

    int getWinCount() const { return _winCount; }
    void incrementWinCount() { _winCount++; }

    virtual RPSGameUtils::PlayerChoice getPlayerChoice() = 0;

private:
    int _winCount{};
};


#endif //IMC_ASSIGNMENT_BASEPLAYER_HPP
