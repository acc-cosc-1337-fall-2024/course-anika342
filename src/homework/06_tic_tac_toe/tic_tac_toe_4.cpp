#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool TicTacToe4::check_column_win()
{
    // Check if elements at indices 0, 4, 8, 12 are the same and either "X" or "O"
    bool column1 = (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] == pegs[12] && (pegs[0] == "X" || pegs[0] == "O"));
    // Check if elements at indices 1, 5, 9, 13 are the same and either "X" or "O"
    bool column2 = (pegs[1] == pegs[5] && pegs[5] == pegs[9] && pegs[9] == pegs[13] && (pegs[1] == "X" || pegs[1] == "O"));
    // Check if elements at indices 2, 6, 10, 14 are the same and either "X" or "O"
    bool column3 = (pegs[2] == pegs[6] && pegs[6] == pegs[10] && pegs[10] == pegs[14] && (pegs[2] == "X" || pegs[2] == "O"));
    // Check if elements at indices 3, 7, 11, 15 are the same and either "X" or "O"
    bool column4 = (pegs[3] == pegs[7] && pegs[7] == pegs[11] && pegs[11] == pegs[15] && (pegs[3] == "X" || pegs[3] == "O"));

    return column1 || column2 || column3 || column4; // Return true if any column has a win
}

/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool TicTacToe4::check_row_win()
{
    // Check if elements at indices 0, 1, 2, 3 are the same and either "X" or "O"
    bool row1 = (pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[2] == pegs[3] && (pegs[0] == "X" || pegs[0] == "O"));
    // Check if elements at indices 4, 5, 6, 7 are the same and either "X" or "O"
    bool row2 = (pegs[4] == pegs[5] && pegs[5] == pegs[6] && pegs[6] == pegs[7] && (pegs[4] == "X" || pegs[4] == "O"));
    // Check if elements at indices 8, 9, 10, 11 are the same and either "X" or "O"
    bool row3 = (pegs[8] == pegs[9] && pegs[9] == pegs[10] && pegs[10] == pegs[11] && (pegs[8] == "X" || pegs[8] == "O"));
    // Check if elements at indices 12, 13, 14, 15 are the same and either "X" or "O"
    bool row4 = (pegs[12] == pegs[13] && pegs[13] == pegs[14] && pegs[14] == pegs[15] && (pegs[12] == "X" || pegs[12] == "O"));

    return row1 || row2 || row3 || row4; // Return true if any row has a win

}

/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15
*/
bool TicTacToe4::check_diagonal_win()
{
    // Check if elements at indices 0, 5, 10, 15 are the same and either "X" or "O"
    bool diagonal1 = (pegs[0] == pegs[5] && pegs[5] == pegs[10] && pegs[10] == pegs[15] && (pegs[0] == "X" || pegs[0] == "O"));
    // Check if elements at indices 12, 9, 6, 3 are the same and either "X" or "O"
    bool diagonal2 = (pegs[12] == pegs[9] && pegs[9] == pegs[6] && pegs[6] == pegs[3] && (pegs[12] == "X" || pegs[12] == "O"));

    return diagonal1 || diagonal2; // Return true if any diagonal has a win
    
}
