//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

class TicTacToeManager
{
public:
    //void save_game(TicTacToe b);
    void save_game(std::unique_ptr<TicTacToe>& game);
    void get_winner_total(int& o, int& w, int& t);
    void display_history() const;

private:
    //std::vector<TicTacToe> games;
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    //void update_winner_count(std::string winner);
    void update_winner_count(const std::unique_ptr<TicTacToe>& game);
    //friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
};

#endif