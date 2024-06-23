#include <bits/stdc++.h>
using namespace std;

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main(){
    srand((unsigned int) time(nullptr));
    
    int playerThrow = 0;
    int aiThrow = 0;
    bool draw = false;
    
    
    do {
        cout << "Select your throw:" << endl;
        cout << "1) Rock" << endl;
        cout << "2) Paper" << endl;
        cout << "3) Scissors" << endl;
        cout << "Selection:";
        cin >> playerThrow;
        
        cout << endl;
        
        aiThrow = (rand() % 3) + 1;
        
        if(playerThrow <= 3 && playerThrow >= 1){
            if(aiThrow == ROCK){
                cout << "AI throws ROCK." << endl;
            }
            if(aiThrow == PAPER){
                cout << "AI throws PAPER." << endl;
            }
            if(aiThrow == SCISSORS){
                cout << "AI throws SCISSORS." << endl;
            }
            
            draw = false;
        }
        
        if(playerThrow > 3 || playerThrow < 1){
            cout << "Choose between 1 and 3!" << endl;
            cout << endl;
            return main();
        }
        
        else if(playerThrow == aiThrow){
            draw = true;
            cout << "Draw!, Play again!" << endl;
        }
        else if (playerThrow == ROCK && aiThrow == SCISSORS){
            cout << "ROCK beats SCISSORS! YOU WIN." << endl;
        }
        else if (playerThrow == ROCK && aiThrow == PAPER){
            cout << "PAPER beats ROCK! YOU LOSE." << endl;
        }
        else if (playerThrow == PAPER && aiThrow == ROCK){
            cout << "PAPER beats ROCK! YOU WIN." << endl;
        }
        else if (playerThrow == PAPER && aiThrow == SCISSORS){
            cout << "SCISSORS beats PAPER! YOU LOSE." << endl;
        }
        else if (playerThrow == SCISSORS && aiThrow == ROCK){
            cout << "ROCK beats SCISSORS! YOU LOSE." << endl;
        }
        else if (playerThrow == SCISSORS && aiThrow == PAPER){
            cout << "SCISSORS beats PAPER! YOU WIN." << endl;
        }
        
        
    } while (draw);
    return 0;
}
