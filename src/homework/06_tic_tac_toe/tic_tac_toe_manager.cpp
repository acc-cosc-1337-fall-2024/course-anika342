//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout;

void TicTacToeManager::save_game(TicTacToe b)
{
    //add the TicTacToe to games vector with push_back, call update winner count pass the winner from TicTacToe to update x, o, or tie totals.
    games.push_back(b);
    update_winner_count(b.get_winner());

}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

/* operator for overloading 
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(auto game: manager.games)
    {
        //out<<game<<"\n";
        //std::cout<<" "<<game<<"\n";
    }

    out<<"O wins: "<<manager.o_win<<"\n";
    out<<"X wins: "<<manager.x_win<<"\n";
    out<<"TIES: "<<manager.ties<<"\n";

    return out;
}*/

//private functions
void TicTacToeManager::update_winner_count(std::string winner)
{
    //if winner X increment x_win, if winner O increment o_win, and else increment ties 
    if (winner == "X")
    {
        x_win = x_win+1;
    }
    else if (winner == "O")
    {
        o_win = o_win+1;
    }
    else
    {
        ties = ties+1;
    }

    //Display the running scores to the user
    std::cout<<"O wins: "<<o_win<<"\n";
    std::cout<<"X wins: "<<x_win<<"\n";
    std::cout<<"TIES: "<<ties<<"\n";

}

