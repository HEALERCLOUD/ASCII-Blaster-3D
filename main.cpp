#include "iostream"
#include "vector"
#include <ncurses.h>
#include "utility"
#include "algorithm"
#include "chrono"

////////////////////////////////////////////////////////////
///Global Variables
////////////////////////////////////////////////////////////
int n_screen_width = 140;
int n_screen_height = 40;

int main() {

    //Create Screen Buffer
    std::vector<wchar_t> screen(n_screen_height * n_screen_width);
    initscr();
}
