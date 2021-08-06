//no array
#include <iostream>
using namespace std;

int main(){
	int a1, a2, a3, b1, b2, b3, n, medal, cup;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	cin >> n;
	
	cup = a1 + a2 + a3;
	medal = b1 + b2 + b3;
	
	n -= cup/5;
	n -= medal/10;
	if (cup%5 != 0)
		n--;
	if (medal%10 != 0)
		n--;

	if (n < 0)
		cout << "NO";
	else 
		cout << "YES";
	return 0;
}
