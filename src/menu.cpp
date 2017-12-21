#include <ncurses.h>

void logo()
{
	mvprintw(0, 20, " $$$$$$\\  $$\\   $$\\  $$$$$$\\  $$\\   $$\\ $$$$$$$$\\\n");
   	mvprintw(1, 14, "$$  __$$\\ $$$\\  $$ |$$  __$$\\ $$ | $$  |$$  _____|\n");
   	mvprintw(2, 14, "$$ /  \\__|$$$$\\ $$ |$$ /  $$ |$$ |$$  / $$ |\n");
   	mvprintw(3, 14, "\\$$$$$$\\  $$ $$\\$$ |$$$$$$$$ |$$$$$  /  $$$$$\\\n");
   	mvprintw(4, 14, " \\____$$\\ $$ \\$$$$ |$$  __$$ |$$  $$<   $$  __|\n");
   	mvprintw(5, 14, "$$\\   $$ |$$ |\\$$$ |$$ |  $$ |$$ |\\$$\\  $$ |\n");
   	mvprintw(6, 14, "\\$$$$$$  |$$ | \\$$ |$$ |  $$ |$$ | \\$$\\ $$$$$$$$\\\n");
   	mvprintw(7, 14, " \\______/ \\__|  \\__|\\__|  \\__|\\__|  \\__|\\________|\n");
}
int main()
{
	int choice = 1;
	int ch;

	initscr();	
	raw();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(0);
	logo();
	attron(A_STANDOUT);
	mvprintw(12, 28, "Play Game");
	attroff(A_STANDOUT);
	mvprintw(13, 30, "Top Scores");
	mvprintw(14, 34, "Exit Game");
	
	while(TRUE)
	{
		ch = getch();
		if(ch == '\n')
		{
			return choice;
		}
		else if(ch == KEY_UP)
		{
			if(choice > 1)
			{
				choice--;
			}
			else
			{
				choice = 3;
			}
		}
		else if(ch == KEY_DOWN)
		{
			if(choice < 3)
			{
				choice++;
			}
			else
			{
				choice = 1;
			}
		}
		switch(choice)
		{
			case 1:
				erase();
				logo();	
				attron(A_STANDOUT);
				mvprintw(12, 28, "Play Game");
				attroff(A_STANDOUT);
				mvprintw(13, 30, "Top Scores");
				mvprintw(14, 34, "Exit Game");
				break;
			case 2:	
				erase();
				logo();	
				mvprintw(12, 28, "Play Game");
				attron(A_STANDOUT);
				mvprintw(13, 30, "Top Scores");
				attroff(A_STANDOUT);
				mvprintw(14, 34, "Exit Game");
				break;
			case 3:
				erase();
				logo();	
				mvprintw(12, 28, "Play Game");
				mvprintw(13, 30, "Top Scores");
				attron(A_STANDOUT);
				mvprintw(14, 34, "Exit Game");
				attroff(A_STANDOUT);
				break;
		}
	}
	getch();
	endwin();
	return 0;
}
