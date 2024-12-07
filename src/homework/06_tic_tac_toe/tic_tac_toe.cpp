//cpp
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else
    {
        if (check_board_full())
        {
            winner = "C";
            return true;
        }
        else
        {
            return false;
        }
        
    }
}
void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}
void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();

}

void TicTacToe::display_board()const
{
    if (pegs.size()==9)
    {
        for(long unsigned int i=0; i < pegs.size(); i += 3)
        {
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
        }
    }
    else
    {
        for(long unsigned int i=0; i < pegs.size(); i += 4)
        {
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"|"<<pegs[i+3]<<"\n";
        }
    }
}

std::string TicTacToe::get_winner()
{
    return winner;
}


//private functions
void TicTacToe::clear_board()
{
   for(auto& peg: pegs )
   {
        peg = " ";
   } 
}
void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}
bool TicTacToe::check_board_full()
{
    for(long unsigned int i=0; i<pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

bool TicTacToe::check_column_win()
{
    /*
    // Check if elements at indices 0, 3, 6 are the same and either "X" or "O"
    bool column1 = (pegs[0] == pegs[3] && pegs[3] == pegs[6] && (pegs[0] == "X" || pegs[0] == "O"));
    // Check if elements at indices 1, 4, 7 are the same and either "X" or "O"
    bool column2 = (pegs[1] == pegs[4] && pegs[4] == pegs[7] && (pegs[1] == "X" || pegs[1] == "O"));
    // Check if elements at indices 2, 5, 8 are the same and either "X" or "O"
    bool column3 = (pegs[2] == pegs[5] && pegs[5] == pegs[8] && (pegs[2] == "X" || pegs[2] == "O"));

    return column1 || column2 || column3; // Return true if any column has a win
    */
    return false;

}

bool TicTacToe::check_row_win()
{
    /*
    // Check if elements at indices 0, 1, 2 are the same and either "X" or "O"
    bool row1 = (pegs[0] == pegs[1] && pegs[1] == pegs[2] && (pegs[0] == "X" || pegs[0] == "O"));
    // Check if elements at indices 3, 4, 5 are the same and either "X" or "O"
    bool row2 = (pegs[3] == pegs[4] && pegs[4] == pegs[5] && (pegs[3] == "X" || pegs[3] == "O"));
    // Check if elements at indices 6, 7, 8 are the same and either "X" or "O"
    bool row3 = (pegs[6] == pegs[7] && pegs[7] == pegs[8] && (pegs[6] == "X" || pegs[6] == "O"));

    return row1 || row2 || row3; // Return true if any row has a win
    */
    return false;

}

bool TicTacToe::check_diagonal_win()
{
    /*/
    // Check if elements at indices 0, 4, 8 are the same and either "X" or "O"
    bool diagonal1 = (pegs[0] == pegs[4] && pegs[4] == pegs[8] && (pegs[0] == "X" || pegs[0] == "O"));
    // Check if elements at indices 6, 4, 2 are the same and either "X" or "O"
    bool diagonal2 = (pegs[6] == pegs[4] && pegs[4] == pegs[2] && (pegs[6] == "X" || pegs[6] == "O"));

    return diagonal1 || diagonal2; // Return true if any diagonal has a win
    */
    return false;

}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

