#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::string;
int main() 
{
	//In main.cpp create an instance of TicTacToManager, after each complete game add the TicTacToe game instance to the TicTacToeManager.

	TicTacToeManager manager;
	TicTacToe game;
	string first_player;
	char user_choice = 'y';

	do
	{
		cout<<"Enter first player: ";
		cin>>first_player;
		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{

			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();

			
		}
		if (game.get_winner()=="C")
		{
			cout<<"This game is a tie!"<<std::endl;
		}
		else
		{
			cout<<"Winner of the game is: "<<game.get_winner()<<std::endl;
		}
		//after each complete game add the TicTacToe game instance to the TicTacToeManager
		manager.save_game(game);
		
		//Display the running score
		
		cout<<"play again enter y or Y? ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	return 0;
}