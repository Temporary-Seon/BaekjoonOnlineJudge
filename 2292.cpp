//https://www.acmicpc.net/problem/2292
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n; // 1 <= n <= 10 0000 0000
	long int endgame = 1;
	int i = 0;
	if (n == 1) {
		cout << 1;
	}
	else {
		while (n > endgame) {
			i++;
			endgame += 6 * i;
			//cout << endgame << '\n';
		}
		i++;
		cout << i;
	}

	return 0;
}