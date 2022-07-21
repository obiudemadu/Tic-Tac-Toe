#include <vector>

//declare functions here
void start();

void game_board(std::vector<std::string> row1, std::vector<std::string> row2, std::vector<std::string> row3);

void end_game(std::vector<std::string> row1, std::vector<std::string> row2, std::vector<std::string> row3, bool win);

void draw(std::vector<std::string> row1, std::vector<std::string> row2, std::vector<std::string> row3, bool win);
