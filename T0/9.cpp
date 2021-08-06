#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i+=2){
		for (int j = 0; j < n-i-1; j+=2)
			cout << " ";
		for (int j = 0; j < i+1 ; j++)
			cout << "*";
		cout << "\n";
	}
	n-=2;
	for (int i = n; i > 0; i-=2){
                for (int j = 0; j <= n-i; j+=2)
                        cout << " ";
                for (int j = 0; j < i ; j++)
                        cout << "*";
                cout << "\n";
        }

	
}
