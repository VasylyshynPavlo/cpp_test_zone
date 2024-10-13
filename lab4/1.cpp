#include <ncurses.h>

#include <cmath>

int main() {
	initscr();
	cbreak();
	echo();

	int X, Y;

	printw("a) 2.3 <= t <= 7.2\n");

	getyx(stdscr, Y, X);

	refresh();

	int i = 0;
	int step = 13;
	float t = 2.3, y = 0.0;
	while (t <= 7.2) {
		y = pow(cos(pow(t, 2)), 3) / (1.5 * t + 2);
		move(Y, step * i + 5);
		printw("t");
		move(Y + 1, step * i);
		printw("%f", t);
		move(Y + 2, step * i + 5);
		printw("x");
		move(Y + 3, step * i);
		printw("%f", y);
		i++;
		refresh();
		t += 0.8;
	}

	printw("\nPress any key to close...\n");
	refresh();
	getch();
	endwin();
	return 0;
}
