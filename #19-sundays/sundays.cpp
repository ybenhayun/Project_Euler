#include <iostream>
#include <ctime>
using namespace std;

int dayofweek(int d, int m, int y);

int main(){

int sundays = 0;
 
for (int year = 1901; year <= 2000; year++) {
    for (int month = 1; month <= 12; month++) {
        if ((dayofweek(1, month, year) == 0)) {
            sundays++;
        }
    }
}

cout << sundays << endl;
return 0;
}

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}