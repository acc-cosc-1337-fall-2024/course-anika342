#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <memory>

using std::cout; using std::cin; using std::string;
int main() 
{
	TicTacToeManager manager;
	std::unique_ptr<TicTacToe> game;
	//TicTacToe game;
	string first_player;
	int game_choice;
	char user_choice = 'y';

	do
	{
		std::cout << "Choose game type (3 for TicTacToe 3, 4 for TicTacToe 4): ";
		std::cin >> game_choice;

		if (game_choice == 3)
		{
			game = std::make_unique<TicTacToe3>();
		}
		else if (game_choice ==4)
		{
			game = std::make_unique<TicTacToe4>();
		}
		else
		{
			std::cout << "Invalid choice, please try again!" << std::endl;
			continue;
		}

		cout<<"Enter first player (X or O): ";
		cin>>first_player;
		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{

			cout<<"Enter a position: ";
			cin>>position;
			game->mark_board(position);
			game->display_board();

			
		}
		if (game->get_winner()=="C")
		{
			cout<<"This game is a tie!"<<std::endl;
		}
		else
		{
			cout<<"Winner of the game is: "<<game->get_winner()<<std::endl;
		}
		//after each complete game add the TicTacToe game instance to the TicTacToeManager
		manager.save_game(game);
		
		cout<<"play again enter y or Y? ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	manager.display_history();

	return 0;
}