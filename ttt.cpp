#include <iostream>
#include "ttt.hpp"

int main() {
  //tic tac toe game
  start();
//variables needed
std::string p1 = "X ";
std::string p2 = "O ";
int p1_row;
int p1_col;
int p2_row;
int p2_col;
bool win = false;
bool player1_turn = true;
bool player2_turn = true;

//vectors for game board
std::vector<std::string> row1 = {"_ ", "_ ", "_ "};
std::vector<std::string> row2 = {"_ ", "_ ", "_ "};
std::vector<std::string> row3 = {"_ ", "_ ", "_ "};

game_board(row1, row2, row3);

//game automation
while (win != true) {
  end_game(row1, row2, row3, win);

  while(player1_turn == true) {
    end_game(row1, row2, row3, win);

  std::cout << "\nPlayer 1 turn. Select a row (1-3).\n";
  std::cin >> p1_row;
  std::cout << "\nSelect a column. (1-3).\n";
  std::cin >> p1_col;
  std::cout << "\n";
  
  if(p1_row == 1 && p1_col == 1) {
    if(row1[0] == p1 || row1[0] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player2_turn = false;
      break;
    }
    else{
    row1[0] = p1;
    player2_turn = true;
    break;
    }
  }
  else if(p1_row == 1 && p1_col == 2) {
   if(row1[1] == p1 || row1[1] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player2_turn = false;
      break;
    }
    else{
    row1[1] = p1;
    player2_turn = true;
    break;
    }
  }
  else if (p1_row == 1 && p1_col == 3) {
   if(row1[2] == p1 || row1[2] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player2_turn = false;
      break;
    }
    else{
    row1[2] = p1;
    player2_turn = true;
    break;
    }
  }
  else if(p1_row == 2 && p1_col == 1) {
    if(row2[0] == p1 || row2[0] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player2_turn = false;
      break;
    }
    else{
    row2[0] = p1;
    player2_turn = true;
    break;
    }
  }
  else if(p1_row == 2 && p1_col == 2) {
   if(row2[1] == p1 || row2[1] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player2_turn = false;
      break;
    }
    else{
    row2[1] = p1;
    player2_turn = true;
    break;
    }
  }
  else if (p1_row == 2 && p1_col == 3) {
    if(row2[2] == p1 || row2[2] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player2_turn = false;
      break;
    }
    else{
    row2[2] = p1;
    player2_turn = true;
    break;
    }
  }
  else if(p1_row == 3 && p1_col == 1) {
   if(row3[0] == p1 || row3[0] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player2_turn = false;
      break;
    }
    else{
    row3[0] = p1;
    player2_turn = true;
    break;
    }
  }
  else if(p1_row == 3 && p1_col == 2) {
    if(row3[1] == p1 || row3[1] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player2_turn = false;
      break;
    }
    else{
    row3[1] = p1;
    player2_turn = true;
    break;
    }
  }
  else if (p1_row == 3 && p1_col == 3) {
   if(row3[2] == p1 || row3[2] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player2_turn = false;
      break;
    }
    else{
    row3[2] = p1;
    player2_turn = true;
    break;
    }
  }
  end_game(row1, row2, row3, win);
  }

  game_board(row1, row2, row3);
  std::cout << "\n";
  end_game(row1, row2, row3, win);
  draw(row1, row2, row3, win);

  while(player2_turn == true) {
std::cout << "\nPlayer 2 turn. Select a row (1-3).\n";
  std::cin >> p2_row;
  std::cout << "\nSelect a column. (1-3).\n";
  std::cin >> p2_col;
  std::cout << "\n";

  if(p2_row == 1 && p2_col == 1) {
    if(row1[0] == p1 || row1[0] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player1_turn = false;
      break;
    }
    else{
    row1[0] = p2;
    player1_turn = true;
    break;
    }
  }
  else if(p2_row == 1 && p2_col == 2) {
    if(row1[1] == p1 || row1[1] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player1_turn = false;
      break;
    }
    else{
    row1[1] = p2;
    player1_turn = true;
    break;
    }
  }
  else if (p2_row == 1 && p2_col == 3) {
    if(row1[2] == p1 || row1[2] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player1_turn = false;
      break;
    }
    else{
    row1[2] = p2;
    player1_turn = true;
    break;
    }
  }
  else if(p2_row == 2 && p2_col == 1) {
    if(row2[0] == p1 || row2[0] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player1_turn = false;
      break;
    }
    else{
    row2[0] = p2;
    player1_turn = true;
    break;
    }
  }
  else if(p2_row == 2 && p2_col == 2) {
    if(row2[1] == p1 || row2[1] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player1_turn = false;
      break;
    }
    else{
    row2[1] = p2;
    player1_turn = true;
    break;
    }
  }
  else if (p2_row == 2 && p2_col == 3) {
    if(row2[2] == p1 || row2[2] == p2) {
      std::cout << "\nSpot has already been played. Select again.\n";
      player1_turn = false;
      break;
    }
    else{
    row2[2] = p2;
    player1_turn = true;
    break;
    }
  }
  else if(p2_row == 3 && p2_col == 1) {
   if(row3[0] == p1 || row3[0] == p2) {
      std::cout << "\nPlayer 1 already played here. Select again.\n";
      player1_turn = false;
      break;
    }
    else{
    row3[0] = p2;
    player1_turn = true;
    break;
    }
  }
  else if(p2_row == 3 && p2_col == 2) {
   if(row3[1] == p1 || row3[1] == p2) {
      std::cout << "\nPlayer 1 already played here. Select again.\n";
      player1_turn = false;
      break;
    }
    else{
    row3[1] = p2;
    player1_turn = true;
    break;
    }
  }
  else if (p2_row == 3 && p2_col == 3) {
   if(row3[2] == p1 || row3[2] == p2) {
      std::cout << "\nPlayer 1 already played here. Select again.\n";
      player1_turn = false;
      break;
    }
    else{
    row3[2] = p2;
    player1_turn = true;
    break;
    }
  }
  end_game(row1, row2, row3, win);
  }

  game_board(row1, row2, row3);
  std::cout << "\n";
 end_game(row1, row2, row3, win);
  draw(row1, row2, row3, win);

}

  return 0;
}
