//https://www.acmicpc.net/problem/10844
#include <iostream>

using namespace std;

long long int d[101][10] = { 0 };

void calc() {

	//d[1] = {0, 1, 1, 1, 1, 1, 1 ,1 ,1, 1};'
	d[1][0] = 0;
	for (int i = 1; i < 10; i++) {
		d[1][i] = 1;
	}
	for (int i = 2; i <= 100; i++) {
		for (int j = 0; j < 10; j++) {
			switch (j) {
				case 0:
					d[i][1] += (d[i - 1][0] % 1000000000);
					continue;
				case 9:
					d[i][8] += (d[i - 1][9] % 1000000000);
					continue;
				default:
					d[i][j+1] += (d[i - 1][j] % 1000000000);
					d[i][j-1] += (d[i - 1][j] % 1000000000);
					continue;
			}
		}
		//for (int j = 0; j < 10; j++) {
			//cout << d[i][j] << ' ';
		//}
		//cout << '\n';
	}
}

int main() {
	
	int n;
	cin >> n;
	calc();
	
	long long int ans = 0;
	for (int i = 0; i < 10; i++) {
		ans += d[n][i];
		ans = ans % 1000000000;
	}

	cout << ans;

	return 0;
}