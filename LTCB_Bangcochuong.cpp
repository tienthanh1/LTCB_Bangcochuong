#include <iostream>
using namespace std;
int main() {
	int so;
	cout << "nhap so: "; cin >> so;
	for (int i = 1; i <= 10; i++)
		cout << " " << so << " x " << i << "=" << so * i << endl;
	return 0;
}
