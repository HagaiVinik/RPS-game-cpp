//
// Created by hagaivinik on 6/2/23.
//

#include "RPSGame.hpp"


void RPSGame::setRoundsNumber(uint32_t roundNumber)
{
    _roundsNumber = roundNumber;
}

void RPSGame::startGame()
{
    for (int i = 0; i < _roundsNumber; ++i)
    {
        playRound();
    }

    endGame();
}

void RPSGame::playRound()
{
    /**
     * @Rules_Implementation:
     * Rock(1) wins scissors(3)
     * Paper(2) wins rock(1)
     * Scissors(3) wins Paper(2)
     *
     * same input == tie
     */

    //Player before computer
    RPSGameUtils::PlayerChoice hc = _humanPlayer.getPlayerChoice();
    RPSGameUtils::PlayerChoice cc = _computerPlayer.getPlayerChoice();

    if (cc == hc)
    {
        std::cout << "tie! " << std::endl;
    }

    // Computer win cases:
    else if ((cc == RPSGameUtils::PlayerChoice::ROCK && hc == RPSGameUtils::PlayerChoice::SCISSORS) ||
             (cc == RPSGameUtils::PlayerChoice::PAPER && hc == RPSGameUtils::PlayerChoice::ROCK) ||
             (cc == RPSGameUtils::PlayerChoice::SCISSORS && hc == RPSGameUtils::PlayerChoice::PAPER))
    {
        std::cout << "Computer wins this round! " << std::endl;
        _computerPlayer.incrementWinCount();
    }

    else if ((hc == RPSGameUtils::PlayerChoice::ROCK && cc == RPSGameUtils::PlayerChoice::SCISSORS) ||
             (hc == RPSGameUtils::PlayerChoice::PAPER && cc == RPSGameUtils::PlayerChoice::ROCK) ||
             (hc == RPSGameUtils::PlayerChoice::SCISSORS && cc == RPSGameUtils::PlayerChoice::PAPER))
    {
        std::cout << "You win this round! " << std::endl;
        _humanPlayer.incrementWinCount();
    }

    std::cout << std::endl;
}

void RPSGame::endGame()
{
    if (_computerPlayer.getWinCount() > _humanPlayer.getWinCount())
    {
        std::cout << "Computer won! " << std::endl;
    }
    else if(_computerPlayer.getWinCount() < _humanPlayer.getWinCount())
    {
        std::cout << "You won! " << std::endl;
    }
    else
    {
        std::cout << "Draw! " << std::endl;
    }

    std::cout << "Game Over" << std::endl;
}