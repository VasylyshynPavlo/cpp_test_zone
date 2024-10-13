#include <ncurses.h>

int main() {
	initscr();	// створення вікна для роботи з терміналом
	cbreak();  // вимкнення буфер-ції виходу щоб отримувати без enter
//	noecho();  // вимкнення відображення введених символів на екрані

	printw("Enter a number: ");
	refresh();

	int num;

	scanw("%d", &num);

	clear();

	printw("Hello! You enter number: %d\n", num);
	refresh();

	getch();

	endwin();

	return 0;
}
