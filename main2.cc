#include <iostream>
#include <cmath>
#include <ctime>
#include <utility>
#include <vector>
using namespace std;
bool game_on;



const int UP = 65; //Key code for up arrow
const int DOWN = 66;
const int LEFT = 68;
const int RIGHT = 67;

bool die() {
	cout << "Bad Input" << endl;
	exit(1);
};

void input() {

};

void print_world() {

	int size = 0;
	cout << "Enter the size of the world" << endl;
	cin >> size;
	if (!cin || size < 15) {
		die();


	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
				cout << "#";
			else
				cout << " ";

		}
		cout << endl;



	}
};
int main() {
	/*	while (true) {
		if (!game_on)
		int ch = getch();
		if (ch == 'q' || ch == 'Q') break;
		else if (ch == RIGHT) {
		cursor_y++;
		if (cursor_y >= SIZE_Y) cursor_y = SIZE_Y - 1; //Clamp value
		} else if (ch == LEFT) {
		cursor_y--;
		if (cursor_y < 0) cursor_y = 0;
		} else if (ch == UP) { //Should be KEY_UP, grr
		cursor_x--;
		if (cursor_x < 0) cursor_x = 0;
		} else if (ch == DOWN) {
		cursor_x++;
		if (cursor_x >= SIZE_X) cursor_x = SIZE_X - 1; //Clamp value
		} else if (ch == ERR) { //No keystroke
		; //Do nothing
		} else if (ch == '\n') {
		game_on = !game_on; //Pause or unpause the game
		}
		}
		*/

	print_world();
};
