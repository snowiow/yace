#include <ncurses.h>

#include "term.hpp"

Term::Term() {
    //start terminal in curses mode and clears the screen
    initscr();
    //disable line buffering
    raw();
    keypad(stdscr, true);
    noecho();
}

Term::~Term() {
    endwin();
}

int Term::get_char() {
    return getch();
}

void Term::print_char(int c) {
    printw("%c", c);
}
