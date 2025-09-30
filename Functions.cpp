#pragma once

#include <random>
#include <iostream>
using std::cout;
using std::cin;
using std::string;

int rng(int x, int y) {
    std::random_device rd;  // non-deterministic random device (if available)
    std::mt19937 gen(rd()); // Mersenne Twister engine seeded with rd()
    std::uniform_int_distribution<int> dist(x, y);

    return dist(gen);
}


int round(int turn) {
    int y{};
    y = rng(1, 6);
    if (turn == 1) {
        cout << "I have rolled: " << y << std::endl;
    }
    else {
        cout << "You have rolled: " << y << std::endl;
    }
    return y;
    
}

bool query() {


    
        
    
    
        cout << "Would you like to continue rolling?" << std::endl;
        for (;;) {
            cout << "Please respond with either y or n." << std::endl;
            string check{};
            cin >> check;

            if (check == "y") {
                cout << "Okay." << std::endl;
                return true;
            }
            else if (check == "n") {
                cout << "My turn..." << std::endl;
                return false;
              
            }
        }

    
   

}