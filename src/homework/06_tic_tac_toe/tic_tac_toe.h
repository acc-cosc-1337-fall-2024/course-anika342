//h
#include <iostream>
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public: 
    TicTacToe(int size) : pegs(size * size, " ") {}

    bool game_over();
    void start_game(std::string first_palyer);
    void mark_board(int position);
    std::string get_palyer() const{return player;}
    void display_board() const;
    std::string get_winner();
    
private:
    //std::vector<std::string> pegs{9, " "};
    std::string player;
    std::string winner;
    int size;
    
    void clear_board();
    void set_next_player();
    bool check_board_full();

    //bool check_column_win();
    //bool check_row_win();
    //bool check_diagonal_win();
    void set_winner();

protected:
    std::vector<std::string> pegs;

    virtual bool check_column_win() = 0;
    virtual bool check_row_win() = 0;
    virtual bool check_diagonal_win() = 0;

};

#endif