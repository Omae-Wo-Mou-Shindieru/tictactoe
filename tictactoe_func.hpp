#include <iostream>
#include <vector>
class Player{

};

void draw_grid(std::vector<char> &row1, std::vector<char> &row2, std::vector<char> &row3);
void make_turn(char &x, char &player, std::vector<char> &row1, std::vector<char> &row2, std::vector<char> &row3);
void toggle_player(char &player);
char win_check(std::vector<char> row1, std::vector<char> row2, std::vector<char> row3);