#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE ("Test if the board is full")
{
	TicTacToe game;

	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(2);
	REQUIRE (game.game_over() == false);
	game.mark_board(3);
	REQUIRE (game.game_over() == false);
	game.mark_board(4);
	REQUIRE (game.game_over() == false);
	game.mark_board(5);
	REQUIRE (game.game_over() == false);
	game.mark_board(7);
	REQUIRE (game.game_over() == false);
	game.mark_board(6);
	REQUIRE (game.game_over() == false);
	game.mark_board(9);
	REQUIRE (game.game_over() == false);
	game.mark_board(8);
	REQUIRE (game.game_over() == true);

	//REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test first player set to X")
{
	TicTacToe game;

	game.start_game("X");

	REQUIRE (game.get_palyer() == "X");
}

TEST_CASE ("Test first player set to O")
{
	TicTacToe game;

	game.start_game("O");

	REQUIRE (game.get_palyer() == "O");
}

TEST_CASE ("Test game over if 9 slots are selected")
{
	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(2);
	REQUIRE (game.game_over() == false);
	game.mark_board(3);
	REQUIRE (game.game_over() == false);
	game.mark_board(4);
	REQUIRE (game.game_over() == false);
	game.mark_board(7);
	REQUIRE (game.game_over() == false);
	game.mark_board(5);
	REQUIRE (game.game_over() == false);
	game.mark_board(6);
	REQUIRE (game.game_over() == false);
	game.mark_board(9);
	REQUIRE (game.game_over() == false);
	game.mark_board(8);
	REQUIRE (game.game_over() == true);

	REQUIRE (game.get_winner() == "C");

}

TEST_CASE ("Test win by first column")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(2);
	REQUIRE (game.game_over() == false);
	game.mark_board(4);
	REQUIRE (game.game_over() == false);
	game.mark_board(5);
	REQUIRE (game.game_over() == false);
	game.mark_board(7);

	REQUIRE (game.game_over() == true);
}

TEST_CASE ("Test win by second column")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(2);
	REQUIRE (game.game_over() == false);
	game.mark_board(3);
	REQUIRE (game.game_over() == false);
	game.mark_board(5);
	REQUIRE (game.game_over() == false);
	game.mark_board(6);
	REQUIRE (game.game_over() == false);
	game.mark_board(8);

	REQUIRE (game.game_over() == true);
}

TEST_CASE ("Test win by third column")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(3);
	REQUIRE (game.game_over() == false);
	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(6);
	REQUIRE (game.game_over() == false);
	game.mark_board(4);
	REQUIRE (game.game_over() == false);
	game.mark_board(9);

	REQUIRE (game.game_over() == true);
}

TEST_CASE ("Test win by first row")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(4);
	REQUIRE (game.game_over() == false);
	game.mark_board(2);
	REQUIRE (game.game_over() == false);
	game.mark_board(5);
	REQUIRE (game.game_over() == false);
	game.mark_board(3);

	REQUIRE (game.game_over() == true);
}

TEST_CASE ("Test win by second row")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(4);
	REQUIRE (game.game_over() == false);
	game.mark_board(7);
	REQUIRE (game.game_over() == false);
	game.mark_board(5);
	REQUIRE (game.game_over() == false);
	game.mark_board(8);
	REQUIRE (game.game_over() == false);
	game.mark_board(6);

	REQUIRE (game.game_over() == true);
}

TEST_CASE ("Test win by third row")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(7);
	REQUIRE (game.game_over() == false);
	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(8);
	REQUIRE (game.game_over() == false);
	game.mark_board(2);
	REQUIRE (game.game_over() == false);
	game.mark_board(9);

	REQUIRE (game.game_over() == true);
}

TEST_CASE ("Test win diagonally from top left ")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(3);
	REQUIRE (game.game_over() == false);
	game.mark_board(5);
	REQUIRE (game.game_over() == false);
	game.mark_board(7);
	REQUIRE (game.game_over() == false);
	game.mark_board(9);

	REQUIRE (game.game_over() == true);
}

TEST_CASE ("Test win diagonally from bottom left ")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(7);
	REQUIRE (game.game_over() == false);
	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(5);
	REQUIRE (game.game_over() == false);
	game.mark_board(9);
	REQUIRE (game.game_over() == false);
	game.mark_board(3);

	REQUIRE (game.game_over() == true);
	REQUIRE (game.get_winner() == "X"); 	//HW8 test case 1
}

//HW8 test case 2
TEST_CASE("Test TicTacToeManager get_winner_total function")
{
	TicTacToeManager manager;
	TicTacToe game;

	int x_win = 0;
    int o_win = 0;
    int ties = 0;

	//X wins by 3rd row
	game.start_game("X");
	game.mark_board(7);
	REQUIRE (game.game_over() == false);
	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(8);
	REQUIRE (game.game_over() == false);
	game.mark_board(2);
	REQUIRE (game.game_over() == false);
	game.mark_board(9);

	REQUIRE (game.game_over() == true);
	REQUIRE (game.get_winner() == "X");
	manager.save_game(game);

	//O wins diagonally from top left
	game.start_game("O");
	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(3);
	REQUIRE (game.game_over() == false);
	game.mark_board(5);
	REQUIRE (game.game_over() == false);
	game.mark_board(7);
	REQUIRE (game.game_over() == false);
	game.mark_board(9);

	REQUIRE (game.game_over() == true);
	REQUIRE (game.get_winner() == "O");
	manager.save_game(game);

	//C wins and game is TIE
	game.start_game("X");

	game.mark_board(1);
	REQUIRE (game.game_over() == false);
	game.mark_board(2);
	REQUIRE (game.game_over() == false);
	game.mark_board(3);
	REQUIRE (game.game_over() == false);
	game.mark_board(4);
	REQUIRE (game.game_over() == false);
	game.mark_board(7);
	REQUIRE (game.game_over() == false);
	game.mark_board(5);
	REQUIRE (game.game_over() == false);
	game.mark_board(6);
	REQUIRE (game.game_over() == false);
	game.mark_board(9);
	REQUIRE (game.game_over() == false);
	game.mark_board(8);
	REQUIRE (game.game_over() == true);

	REQUIRE (game.get_winner() == "C");
	manager.save_game(game);


	//	REQUIRE (manager.get_winner_total(x_win,o_win,ties));
	REQUIRE(x_win==1);
	REQUIRE(o_win==1);
	REQUIRE(ties==1);
}