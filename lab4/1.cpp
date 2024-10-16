#include <ncurses.h>

#include <clocale>
#include <cmath>

int main() {
	setlocale(LC_ALL, "");
	initscr();
	echo();

	int X, Y;

	printw("a)\n");
	printw("2.3 ≤ t ≤ 7.2\n");
	printw("∆t = 0.8\n");

	getyx(stdscr, Y, X);

	refresh();

	int i = 0;
	int step = 13;
	int header_step = 4;
	float t = 2.3, y = 0.0, delta_t = 0.8;
	while (t <= 7.2) {
		y = pow(cos(pow(t, 2)), 3) / (1.5 * t + 2);
		move(Y, step * i + header_step);
		printw("t");
		move(Y + 1, step * i);
		printw("%f", t);
		move(Y + 2, step * i + header_step);
		printw("y");
		move(Y + 3, step * i);
		printw("%f", y);
		i++;
		refresh();
		t += delta_t;
	}

	t = 0;
	y = 0;
	int n = 5;
	delta_t = 0.3;
	printw("\n\nb)\nt ≥ %f\nΔt = %f\nn = %x\n", t, delta_t, n);
	getyx(stdscr, Y, X);
	for (int i = 0; i < n; i++) {
		y = pow(cos(pow(t, 2)), 3) / (1.5 * t + 2);
		move(Y, step * i + header_step);
		printw("t");
		move(Y + 1, step * i);
		printw("%f", t);
		move(Y + 2, step * i + header_step);
		printw("y");
		move(Y + 3, step * i);
		printw("%f", y);
		t += delta_t;
	}

	printw("\nPress any key to close...\n");
	refresh();
	getch();
	endwin();
	return 0;
}
