//h
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H
#include "tic_tac_toe.h"

/*
1. Create a class that inherits from TicTacToe.

2. Create a default constructor (no parameters).
    a. Create an initializer to initialize TicTacToe with a value of 3.
       Example: DeriveConstructor(): BaseConstructor(3){}

3. Create private functions  check_column_win, check_row_win, and check_diagonal_win   
    with no parameters that return a bool.

4. From TicTacToe copy the code from  functions check_column_win, check_row_win, and 
    check_diagonal_win to the functions in TicTacToe3.

5. In TicTacToe functions  check_column_win, check_row_win, and check_diagonal_win ,
    remove code leaving only the statement  return false.
*/

class TicTacToe3 : public TicTacToe 
{
public:
    TicTacToe3() : TicTacToe(3) {}

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

//protected:
};
#endif

