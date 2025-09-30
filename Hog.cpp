

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;


int win1{};
int win2{};


string spiel{"You and I take turns rolling dice. When it is one of ours' turns, any dice we roll is added to the player's score. We can roll as many times as we wish in one turn. However, if we roll a one, then the sum from the entire turn will not add to the score. The first one that reaches 100 wins. Let's begin."};

int game();


int main()
{
    cout << "Hello. Would you like to play a game with me? ";
    for (;;) {
        cout << "Please respond with either y or n." << std::endl;
        string check{};
        cin >> check;

        if (check == "y") {
            cout << "Thank you. We are going to play hog. Here are the rules: \n" << spiel << std::endl;
            game();
                 break; 
        }
        else if (check == "n") {
            cout << "Okay.";
                break;
        }
    }
   
   
    
}

