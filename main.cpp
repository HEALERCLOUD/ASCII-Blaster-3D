#include "iostream"
#include "vector"
#include <ncurses.h>
#include "map"
#include "utility"
#include "algorithm"
#include "chrono"

using  namespace std;

#include <stdio.h>
#include <Windows.h>


////////////////////////////////////////////////////////////
///Global Variables
////////////////////////////////////////////////////////////
int n_screen_width = 140;
int n_screen_height = 40;


int main() {

    //Create Screen Buffer
    // Create Screen Buffer
    wchar_t *screen = new wchar_t[nScreenWidth*nScreenHeight];
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    //initing map
    wstring map;
    map += L"#########.......";
    map += L"#...............";
    map += L"#.......########";
    map += L"#..............#";
    map += L"#......##......#";
    map += L"#......##......#";
    map += L"#..............#";
    map += L"###............#";
    map += L"##.............#";
    map += L"#......####..###";
    map += L"#......#.......#";
    map += L"#......#.......#";
    map += L"#..............#";
    map += L"#......#########";
    map += L"#..............#";
    map += L"################";


}
