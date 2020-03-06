//https://www.acmicpc.net/problem/1110
#include <iostream>
using namespace std;

int main() {
	int n;
	int cycle = 0;
	cin >> n;
	if (n < 10) {
		n = n * 10;
	}
	int oldn = n;
	int tempn = -1;
	while (oldn != tempn) {
		int a = n / 10;
		int b = n % 10;
		int c = (a + b) % 10;
		n = b * 10 + c;
		tempn = n;
		
		cycle++;
	}
	cout << cycle;
	return 0;
}