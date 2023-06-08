//
// Created by hagaivinik on 6/2/23.
//

#ifndef IMC_ASSIGNMENT_RPSGAME_HPP
#define IMC_ASSIGNMENT_RPSGAME_HPP

#include "ComputerPlayer.hpp"
#include "HumanPlayer.hpp"

#include "RPSGameUtils.hpp"


class RPSGame
{
public:
    void setRoundsNumber(uint32_t roundNumber);
    void startGame();

private:
    uint32_t _roundsNumber = 3; // default number of rounds;

    HumanPlayer _humanPlayer;
    ComputerPlayer _computerPlayer;

    void playRound();
    void endGame();
};

#endif //IMC_ASSIGNMENT_RPSGAME_HPP
