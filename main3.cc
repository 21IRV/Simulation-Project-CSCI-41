#include <iostream>
#include <cmath>
#include <ctime>
#include <utility>
#include <vector>
using namespace std;

int width = 0;
int height = 0;

const int UP = 65; //Key code for up arrow
const int DOWN = 66;
const int LEFT = 68;
const int RIGHT = 67;

int x, y, foodx, foody, score = 0;

bool die() {
	cout << "Bad Input" << endl;
	exit(1);
};

void setup() {
	cout << "Enter the dimensions of the world" << endl;
	cin >> width;
	cin >> height;
	if (!cin || width < 15 || height < 15) {
		die();
	}
	bool game_on = true;
	x = width / 2;
	y = height / 2;
	foodx = rand() % width;
	foodx = rand() % height;
	score = 0;
};


void input() {

};

void print_world() {

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			if (i == 0 || i == width - 1 || j == 0 || j == height - 1) {
				cout << "#";
			} else if (i == y && j == x) {
				cout << "O" << endl;
			} else if (i == foody && j == foodx) {
				cout << "F" << endl;
			} else
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
	setup();
	print_world();
};
