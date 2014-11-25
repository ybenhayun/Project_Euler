#include <iostream>
using namespace std;

int main(){
	int i = 2;
	for (int j = 1; j < i; j++){
		int k = j*((3*j)-1)/2; 
		int l = i*((3*i)-1)/2;

		//cout << k << " " << l << endl;

		int n = 1;

		while (n*((3*n)-1)/2 <= l-k){
			if (n*((3*n)-1)/2 == l-k){
				cout << k << " " << l << endl;
				int p = n;
				while (p*((3*p)-1)/2 <= l+k){
					if (p*((3*p)-1)/2 == l+k) {
						cout << l-k << endl;
						return 0;
					}
					p++;
				}
			} 
			n++;
		}
		if (j+1 == i){
			j = 1;
			i++;
		}
	}
	return 0;
}