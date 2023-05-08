#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
	int x = 0;
	while (x == 0) {
		string p1, p2;
		int n, input, count = 0;
		bool toss;
		char b1 = ' ', b2 = ' ', b3 = ' ', b4 = ' ', b5 = ' ', b6 = ' ', b7 = ' ', b8 = ' ', b9 = ' ';

		cout << "enter name of player 1:";
		cin >> p1;
		cout << "enter name of player 2:";
		cin >> p2;
		cout << "\n\nRULES FOR TIC-TAC-TOE\n";
		cout << "	The game is played on a grid that's 3 squares by 3 squares\n";
		cout << "   You are X, your friend is O\n";
		cout << "   The first player to get 3 of his/her marks in a row(up, down, across, or diagonally) is the winner\n";
		cout << "   When all 9 squares are full, the game is over.\n\n";

		cout << " 1 | 2 | 3 | \n";
		cout << "--------------\n";
		cout << " 4 | 5 | 6 | \n";
		cout << "--------------\n";
		cout << " 7 | 8 | 9 | \n";


		srand(time(0));
		n = rand();

		if (n % 2 == 0) {
			toss = true;
		}
		else {
			toss = false;
		}

		if (toss == true) {
			cout << p1 << " Wins The Toss\n\n";
		}
		else {
			cout << p2 << " Wins The Toss\n\n";
		}

		while (count < 9) {
			if (toss == true) {
				cout << "its " << p1 << "'s turn\n";
				cout << "Where Do You Want To Put Your X:";
				cin >> input;
				switch (input) {
				case 1:
					if (b1 == 'X' || b1 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b1 = 'X';
						toss = false;
						++count;
					}
					break;
				case 2:
					if (b2 == 'X' || b2 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b2 = 'X';
						toss = false;
						++count;
					}
					break;
				case 3:
					if (b3 == 'X' || b3 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b3 = 'X';
						toss = false;
						++count;
					}
					break;
				case 4:
					if (b4 == 'X' || b4 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b4 = 'X';
						toss = false;
						++count;
					}
					break;
				case 5:
					if (b5 == 'X' || b5 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b5 = 'X';
						toss = false;
						++count;
					}
					break;
				case 6:
					if (b6 == 'X' || b6 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b6 = 'X';
						toss = false;
						++count;
					}
					break;
				case 7:
					if (b7 == 'X' || b7 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b7 = 'X';
						toss = false;
						++count;
					}
					break;

				case 8:
					if (b8 == 'X' || b8 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b8 = 'X';
						toss = false;
						++count;
					}
					break;
				case 9:
					if (b9 == 'X' || b9 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b9 = 'X';
						toss = false;
						++count;
					}
					break;
				default:
					cout << "enter Correct Box\n";
					break;
				}
				cout << "\n";
				cout << b1 << " | " << b2 << " |" << b3 << " | \n";
				cout << "--------------\n";
				cout << b4 << " | " << b5 << " |" << b6 << " | \n";
				cout << "--------------\n";
				cout << b7 << " | " << b8 << " |" << b9 << " | \n";
				cout << "\n";

				if (b1 == 'X' && b2 == 'X' && b3 == 'X') {
					break;
				}
				if (b4 == 'X' && b5 == 'X' && b6 == 'X') {
					break;
				}
				if (b7 == 'X' && b8 == 'X' && b9 == 'X') {
					break;
				}
				if (b1 == 'X' && b4 == 'X' && b7 == 'X') {
					break;
				}
				if (b2 == 'X' && b5 == 'X' && b8 == 'X') {
					break;
				}
				if (b3 == 'X' && b6 == 'X' && b9 == 'X') {
					break;
				}
				if (b1 == 'X' && b5 == 'X' && b9 == 'X') {
					break;
				}
				if (b3 == 'X' && b5 == 'X' && b7 == 'X') {
					break;
				}

			}
			else {
				cout << "its " << p2 << "'s turn\n";
				cout << "Where Do You Want To Put Your O:";
				cin >> input;
				switch (input) {
				case 1:
					if (b1 == 'X' || b1 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b1 = 'O';
						toss = true;
						++count;
					}
					break;
				case 2:
					if (b2 == 'X' || b2 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b2 = 'O';
						toss = true;
						++count;
					}
					break;
				case 3:
					if (b3 == 'X' || b3 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b3 = 'O';
						toss = true;
						++count;
					}
					break;
				case 4:
					if (b4 == 'X' || b4 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b4 = 'O';
						toss = true;
						++count;
					}
					break;
				case 5:
					if (b5 == 'X' || b5 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b5 = 'O';
						toss = true;
						++count;
					}
					break;
				case 6:
					if (b6 == 'X' || b6 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b6 = 'O';
						toss = true;
						++count;
					}
					break;
				case 7:
					if (b7 == 'X' || b7 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b7 = 'O';
						toss = true;
						++count;
					}
					break;
				case 8:
					if (b8 == 'X' || b8 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b8 = 'O';
						toss = true;
						++count;
					}
					break;
				case 9:
					if (b9 == 'X' || b9 == 'O') {
						cout << "This Box Is Already Filled Please Enter Any Other Box\n";
					}
					else {
						b9 = 'O';
						toss = true;
						++count;
					}
					break;
				default:
					cout << "Enter Correct Box\n";
					break;
				}
				cout << "\n";
				cout << b1 << " | " << b2 << " |" << b3 << " | \n";
				cout << "--------------\n";
				cout << b4 << " | " << b5 << " |" << b6 << " | \n";
				cout << "--------------\n";
				cout << b7 << " | " << b8 << " |" << b9 << " | \n";
				cout << "\n";

				if (b1 == 'O' && b2 == 'O' && b3 == 'O') {
					break;
				}
				if (b4 == 'O' && b5 == 'O' && b6 == 'O') {
					break;
				}
				if (b7 == 'O' && b8 == 'O' && b9 == 'O') {
					break;
				}
				if (b1 == 'O' && b4 == 'O' && b7 == 'O') {
					break;
				}
				if (b2 == 'O' && b5 == 'O' && b8 == 'O') {
					break;
				}
				if (b3 == 'O' && b6 == 'O' && b9 == 'O') {
					break;
				}
				if (b1 == 'O' && b5 == 'O' && b9 == 'O') {
					break;
				}
				if (b3 == 'O' && b5 == 'O' && b7 == 'O') {
					break;
				}
			}
		}
		cout << "\n";

		if (b1 == 'X' && b2 == 'X' && b3 == 'X') {
			cout << p1 << " WINS";
		}
		else if (b4 == 'X' && b5 == 'X' && b6 == 'X') {
			cout << p1 << " WINS";
		}
		else if (b7 == 'X' && b8 == 'X' && b9 == 'X') {
			cout << p1 << " WINS";
		}
		else if (b1 == 'X' && b4 == 'X' && b7 == 'X') {
			cout << p1 << " WINS";
		}
		else if (b2 == 'X' && b5 == 'X' && b8 == 'X') {
			cout << p1 << " WINS";
		}
		else if (b3 == 'X' && b6 == 'X' && b9 == 'X') {
			cout << p1 << " WINS";
		}
		else if (b1 == 'X' && b5 == 'X' && b9 == 'X') {
			cout << p1 << " WINS";
		}
		else if (b3 == 'X' && b5 == 'X' && b7 == 'X') {
			cout << p1 << " WINS";
		}
		else if (b1 == 'O' && b2 == 'O' && b3 == 'O') {
			cout << p2 << " WINS";
		}
		else if (b4 == 'O' && b5 == 'O' && b6 == 'O') {
			cout << p2 << " WINS";
		}
		else if (b7 == 'O' && b8 == 'O' && b9 == 'O') {
			cout << p2 << " WINS";
		}
		else if (b1 == 'O' && b4 == 'O' && b7 == 'O') {
			cout << p2 << " WINS";
		}
		else if (b2 == 'O' && b5 == 'O' && b8 == 'O') {
			cout << p2 << " WINS";
		}
		else if (b3 == 'O' && b6 == 'O' && b9 == 'O') {
			cout << p2 << " WINS";
		}
		else if (b1 == 'O' && b5 == 'O' && b9 == 'O') {
			cout << p2 << " WINS";
		}
		else if (b3 == 'O' && b5 == 'O' && b7 == 'O') {
			cout << p2 << " WINS";
		}
		else {
			cout << "The Game Is Draw";
		}
		cout << "\n";

		cout << "Press 0 To Play Again Or Any Other Number To Exit:";
		cin >> x;
	}
	cout << "\n";
}