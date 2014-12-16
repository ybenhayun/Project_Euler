#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 1;
    int sum = 0;
    int range;

    cout << "Range? ";
    cin >> range;

    while (n < range){
	int tempn = n;
	n += i;
	i = tempn;
	if ((n%2 == 0)&&(n < range))
	    sum += n;
    }

    cout << "The sum of all even fibonacci numbers under " << range
 	 << " is " << sum << "." << endl;
    return 0;
}