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
int nMapWidth = 16;
int nMapHeight = 16;
float fPlayerX = 14.7f;
float fPlayerY = 5.09f;


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

    auto tp1 = chrono::system_clock::now();
    auto tp2 = chrono::system_clock::now();


}
