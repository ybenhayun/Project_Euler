#include <iostream>
using namespace std;

int main()
{
    long sum = 0;
    int range, first, second;

    cout << "Range? ";
    cin >> range;
    cout << "First divisor? ";
    cin >> first;
    cout << "Second divisor? ";
    cin >> second;

    int i = first;
    while (i < range){
	sum += i;
	i += first;
    }

    i = second;
    while (i < range){
	if (i%first != 0)
	    sum += i;
	i += second;
    }
    cout << "The sum of all numbers, divsible by " << first << " and "
	 << second << ", between 1 and " << range << " is " << sum 
	 << endl;
    return 0;
}