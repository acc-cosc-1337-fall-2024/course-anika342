//h
#include <iostream>
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public: 
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& w, int& t);

private:
    std::vector<std::string> games{TicTacToe};
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);
};

#endif