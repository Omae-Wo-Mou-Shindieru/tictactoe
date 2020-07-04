#include <iostream>
#include <vector>
#include "tictactoe_func.hpp"

char win_check(std::vector<char> row1, std::vector<char> row2, std::vector<char> row3)
{   
    // Check if X wins

    if (row1[0] == 'X' && row1[1] == 'X' && row1[2] == 'X')
    {
        return 'X';
    }
    if (row2[0] == 'X' && row2[1] == 'X' && row2[2] == 'X')
    {
        return 'X';
    }
    if (row3[0] == 'X' && row3[1] == 'X' && row3[2] == 'X')
    {
        return 'X';
    }
    if (row1[0] == 'X' && row2[1] == 'X' && row3[2] == 'X')
    {
        return 'X';
    }
    if (row1[2] == 'X' && row2[1] == 'X' && row3[0] == 'X')
    {
        return 'X';
    }
    if (row1[0] == 'X' && row2[0] == 'X' && row3[0] == 'X')
    {
        return 'X';
    }
    if (row1[1] == 'X' && row2[1] == 'X' && row3[1] == 'X')
    {
        return 'X';
    }
     if (row1[2] == 'X' && row2[2] == 'X' && row3[2] == 'X')
    {
        return 'X';
    }

    // Check if O wins

    if (row1[0] == 'O' && row1[1] == 'O' && row1[2] == 'O')
    {
        return 'O';
    }
    if (row2[0] == 'O' && row2[1] == 'O' && row2[2] == 'O')
    {
        return 'O';
    }
    if (row3[0] == 'O' && row3[1] == 'O' && row3[2] == 'O')
    {
        return 'O';
    }
    if (row1[0] == 'O' && row2[1] == 'O' && row3[2] == 'O')
    {
        return 'O';
    }
    if (row1[2] == 'O' && row2[1] == 'O' && row3[0] == 'O')
    {
        return 'O';
    }
    if (row1[0] == 'O' && row2[0] == 'O' && row3[0] == 'O')
    {
        return 'O';
    }
    if (row1[1] == 'O' && row2[1] == 'O' && row3[1] == 'O')
    {
        return 'O';
    }
    if (row1[2] == 'O' && row2[2] == 'O' && row3[2] == 'O')
    {
        return 'O';
    }



    return '/';
}

void toggle_player(char &player)
{
    if (player == 'X') 
    {
        player = 'O';
    }
    else
    {
        player = 'X';
    }
    
    
    
}
void draw_grid(std::vector<char> &row1, std::vector<char> &row2, std::vector<char> &row3)
{

        
        
            std::cout << "  _" << row1[0] << "_/_" << row1[1] << "_/_" << row1[2] << "_\n";
        
            std::cout << " _" << row2[0] << "_/_" << row2[1] << "_/_" << row2[2] << "_\n";
        
            std::cout << " " << row3[0] << " / " << row3[1] << " /  " << row3[2] << " \n";
        
        
}

void make_turn(char &x, char &player, std::vector<char> &row1, std::vector<char> &row2, std::vector<char> &row3)
{

    switch (x) 
        {
            case '1':
                if (row1[0] == '1') 
                {
                    row1[0] = player;
                }
                else
                {
                    std::cout << "Occupied! Pick another one\n";
                }
                draw_grid(row1,  row2,  row3);
                break;
            case '2':
                if (row1[1] == '2')
                {
                    row1[1] = player;
                }
                else
                {
                    std::cout << "Occupied! Pick another one\n";
                }
                draw_grid(row1,  row2,  row3);
                break;
            case '3':
                if (row1[2] == '3')
                {
                    row1[2] = player;
                }
                else
                {
                    std::cout << "Occupied! Pick another one\n";
                }
                draw_grid(row1,  row2,  row3);
                break;
             case '4':
                if (row2[0] == '4')
                {
                    row2[0] = player;
                }
                else
                {
                    std::cout << "Occupied! Pick another one\n";
                }
                draw_grid(row1,  row2,  row3);
                break;
             case '5':
                if (row2[1] == '5')
                {
                    row2[1] = player;
                }
                else
                {
                    std::cout << "Occupied! Pick another one\n";
                }
                draw_grid(row1,  row2,  row3);
                break;
             case '6':
                if (row2[2] == '6')
                {
                    row2[2] = player;
                }
                else
                {
                    std::cout << "Occupied! Pick another one\n";
                }
                draw_grid(row1,  row2,  row3);
                break;
             case '7':
                if (row3[0] == '7')
                {
                    row3[0] = player;
                }
                else
                {
                    std::cout << "Occupied! Pick another one\n";
                }
                draw_grid(row1,  row2,  row3);
                break;
             case '8':
                if (row3[1] == '8')
                {
                    row3[1] = player;
                }
                else
                {
                   std::cout << "Occupied! Pick another one\n";
                }
                draw_grid(row1,  row2,  row3);
                break;
             case '9':
                if (row3[2] == '9')
                {
                    row3[2] = player;
                }
                else
                {
                    std::cout << "Occupied! Pick another one\n";
                }
                draw_grid(row1,  row2,  row3);
                break;
             default:
                std::cout << "Pick a field from 1-9\n";
                draw_grid(row1,  row2,  row3);
                break;

        }
}

