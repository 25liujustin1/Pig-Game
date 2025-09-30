#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
int rng(int, int);
int round(int);
bool query();
bool me(int, int, int);


int game() {

	int score[] = {0,0};
	int sum{};
	int turn{};
	
		if (rng(1, 2) == 1) {
			turn = 1;
		}
		else {
			turn = -1;
		}

		while (score[0] < 100 && score[1] < 100) {

			bool loop{true};

			if (turn == 1) {
				cout << "My turn" << std::endl;
			}
			else {
				cout << "Your turn" << std::endl;
			}

			int sum{ 0 };

			do {

				
				
				

				
				int temproll = round(turn);

				if (temproll == 1) {
					sum = 0;
					cout << "Unfortunate." << std::endl;
					loop = false;
				}
				else if (turn == 1) {
					sum += temproll;
					cout << "I have " << sum << " points" << std::endl;
					loop = me(score[0], score[1], sum);
				}
				else {
					sum += temproll;
					cout << "You have " << sum << " points" << std::endl;
					loop = query();
				}

			} while (loop == true);


			
			score[(turn + 1)/2] += sum;
			cout << "Our scores: \n" << "You: " << score[0] << '\n' << "Me: " << score[1]<< std::endl;
			turn *= -1;








		}
		if (score[0] > 100) {
			cout << "You win" << std::endl;

		}
		else {
			cout << "I win" << std::endl;
		}
	
	

	return 0;

}