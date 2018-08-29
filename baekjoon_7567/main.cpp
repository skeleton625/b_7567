#include <iostream>
using namespace std;

int m=10;
char i1[51], tmp;
int main() {
	cin >> i1;
	tmp = i1[0];
	for (int i = 1; i1[i]; i++) {
		if (tmp == i1[i]) m += 5;
		else m += 10;
		tmp = i1[i];
	}
	cout << m << endl;
	return 0;
}