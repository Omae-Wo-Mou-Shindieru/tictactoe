#include <iostream>
#include <vector>
#include "tictactoe_func.hpp"


int main() {

    std::cout << "============================\n";
    std::cout << "   Welcome to Tic-tac-toe\n";
    std::cout << "============================\n\n";

    std::cout << "Classic Tic-Tac-Toe rules!" << "\n\n";

    char x;
    int turns = 0;
    char player = 'X';
    char usr_choice = '2';

    std::vector<char> row1 = {'1', '2', '3'};
    std::vector<char> row2 = {'4', '5', '6'};
    std::vector<char> row3 = {'7', '8', '9'};

    start:
    std::cout << "Wanna play? y/n: ";
    std::cin >> usr_choice;
    
    while (1) 
    {   
        if (usr_choice == 'n') {
        std::cout << "Sorry to hear that!\n";
        return 0;
    }
    else if (usr_choice == 'y') {
        std::cout << "Let's go!\n";
        break;
    }
    else 
    {
        std::cout << "Enter y or n \n";
        goto start;
    }
    
    }

    while (1) 
    {

        turns ++;
        draw_grid(row1, row2, row3);
        std::cout << "\n" << player << "'s turn: ";
        std::cin >> x; 
        make_turn(x, player, row1, row2, row3);
        if (win_check(row1, row2, row3) == 'X')
        {
            std::cout << "Dio wins!\n";
            break;
        }
        else if (win_check(row1, row2, row3) == 'O')
        {
            std::cout << "Jotaro wins!\n";
            break;
        }
        else if (win_check(row1, row2, row3) == '/' && turns == 9)
        {
            std::cout << "Za Warudo!\n";
            break;
        }
        
        toggle_player(player);
        system("clear");

        
    }

    usr_choice = '2';

    std::cout << "Do you want to play again? y/n: ";
    std::cin >> usr_choice;
    while (1) 
    {   
        if (usr_choice == 'n') {
        std::cout << "Sorry to hear that!\n";
        return 0;
    }
    else if (usr_choice == 'y') {
        std::cout << "Let's go!\n";
        break;
    }
    else 
    {
        std::cout << "Enter y or n \n";
        goto start;
    }
    }
    return 0;
    

}
