#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool TicTacToe3::check_column_win()
{
    // Check if elements at indices 0, 3, 6 are the same and either "X" or "O"
    bool column1 = (pegs[0] == pegs[3] && pegs[3] == pegs[6] && (pegs[0] == "X" || pegs[0] == "O"));
    // Check if elements at indices 1, 4, 7 are the same and either "X" or "O"
    bool column2 = (pegs[1] == pegs[4] && pegs[4] == pegs[7] && (pegs[1] == "X" || pegs[1] == "O"));
    // Check if elements at indices 2, 5, 8 are the same and either "X" or "O"
    bool column3 = (pegs[2] == pegs[5] && pegs[5] == pegs[8] && (pegs[2] == "X" || pegs[2] == "O"));

    return column1 || column2 || column3; // Return true if any column has a win
}

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe3::check_row_win()
{
    // Check if elements at indices 0, 1, 2 are the same and either "X" or "O"
    bool row1 = (pegs[0] == pegs[1] && pegs[1] == pegs[2] && (pegs[0] == "X" || pegs[0] == "O"));
    // Check if elements at indices 3, 4, 5 are the same and either "X" or "O"
    bool row2 = (pegs[3] == pegs[4] && pegs[4] == pegs[5] && (pegs[3] == "X" || pegs[3] == "O"));
    // Check if elements at indices 6, 7, 8 are the same and either "X" or "O"
    bool row3 = (pegs[6] == pegs[7] && pegs[7] == pegs[8] && (pegs[6] == "X" || pegs[6] == "O"));

    return row1 || row2 || row3; // Return true if any row has a win

}

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8
*/
bool TicTacToe3::check_diagonal_win()
{
    // Check if elements at indices 0, 4, 8 are the same and either "X" or "O"
    bool diagonal1 = (pegs[0] == pegs[4] && pegs[4] == pegs[8] && (pegs[0] == "X" || pegs[0] == "O"));
    // Check if elements at indices 6, 4, 2 are the same and either "X" or "O"
    bool diagonal2 = (pegs[6] == pegs[4] && pegs[4] == pegs[2] && (pegs[6] == "X" || pegs[6] == "O"));

    return diagonal1 || diagonal2; // Return true if any diagonal has a win
}
