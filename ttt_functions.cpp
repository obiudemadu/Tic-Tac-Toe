#include <iostream>
#include <vector>

//define functions needed

void start() {
  std::cout << "=============\n Tic Tac Toe\n=============\nBest of luck to both players!\n" << "\nPlayer 1 will be X and Player 2 will be O.\n" << "\nMay the best player win!\n";
  std::cout << "\nFlip a coin to determine who will be Player 1 or make the choice yourselves!\n";
}

//game board function 
void game_board(std::vector<std::string> row1, std::vector<std::string> row2, std::vector<std::string> row3) {
  for (int i = 0; i < row1.size(); i++) {
    std::cout << row1[i];
  }
  std::cout << "\n";
  for (int j = 0; j < row2.size(); j++) {
    std::cout << row2[j];
  }
  std::cout << "\n";
  for (int k = 0; k < row3.size(); k++) {
    std::cout << row3[k];
  }
  std::cout << "\n";
}

//end_game function for each player
void end_game(std::vector<std::string> row1, std::vector<std::string> row2, std::vector<std::string> row3, bool win) { 
if(row1[0] == "X " && row1[1] == "X " && row1[2] == "X ") {
  std::cout << "\nPlayer 1 has won!\n";
  win = true;
  exit(0);
}
else if(row1[0] == "X " && row2[0] == "X " && row3[0] == "X ") {
  std::cout << "\nPlayer 1 has won!\n";
  win = true;
  exit(0);
}
else if(row1[0] == "X " && row2[1] == "X " && row3[2] == "X ") {
  std::cout << "\nPlayer 1 has won!\n";
  win = true;
  exit(0);
}
else if(row1[2] == "X " && row2[1] == "X " && row3[0] == "X ") {
  std::cout << "\nPlayer 1 has won!\n";
  win = true;
  exit(0);
}
else if(row1[2] == "X " && row2[2] == "X " && row3[2] == "X ") {
  std::cout << "\nPlayer 1 has won!\n";
  win = true;
  exit(0);
}
else if(row1[0] == "O " && row1[1] == "O " && row1[2] == "O ") {
  std::cout << "\nPlayer 2 has won!\n";
  win = true;
  exit(0);
}
else if(row1[0] == "O " && row2[0] == "O " && row3[0] == "O ") {
  std::cout << "\nPlayer 2 has won!\n";
  win = true;
  exit(0);
}
else if(row1[0] == "O " && row2[1] == "O " && row3[2] == "O ") {
  std::cout << "\nPlayer 2 has won!\n";
  win = true;
  exit(0);
}
else if(row1[2] == "O " && row2[1] == "O " && row3[0] == "O ") {
  std::cout << "\nPlayer 2 has won!\n";
  win = true;
  exit(0);
}
else if(row1[2] == "O " && row2[2] == "O " && row3[2] == "O ") {
  std::cout << "\nPlayer 2 has won!\n";
  win = true;
  exit(0);
}

}

void draw(std::vector<std::string> row1, std::vector<std::string> row2, std::vector<std::string> row3, bool win) {
  for(int i = 0; i < row1.size(); i++) {
   if(row1[0] != "_ ") {
     if(row1[1] != "_ ") {
       if(row1[2] != "_ ") {
     for (int j = 0; j < row2.size(); j++) {
       if(row2[0] != "_ ") {
         if(row2[1] != "_ ") {
           if(row2[2] != "_ ") {
          for (int k = 0; k < row3.size(); k++) {
            if(row3[0] != "_ ") {
              if(row3[1] != "_ ") {
                if(row3[2] != "_ ") {
                  if(win != true){
              std::cout << "\nTie game, play again!\n";
              exit(0);
                  }
            }
              }
            }
          }
           }
         }
       }
   }     
       }
    }
   }
 }
}

