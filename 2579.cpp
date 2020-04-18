//https://www.acmicpc.net/problem/2579
#include <iostream>

using namespace std;

//점화식: n번째 계단에서의 최댓값 =  max(n-3까지의 최대값 + n-1 + n , n-2까지의 최대+ n)
int main() {

	int n;
	cin >> n;
	int stair[n+1] = {0};
	int ans[n+1] = {0};
	for (int i = 1; i <= n; i++) {
		cin >> stair[i];
	}

	ans[1] = stair[1];
	ans[2] = stair[1] + stair[2];
	ans[3] = max(stair[1] + stair[3], stair[2] + stair[3]);

	for (int i = 4; i <= n; i++) {
		ans[i] = max(ans[i-3] + stair[i-1], ans[i-2]) + stair[i];
	}

	cout << ans[n];

	/*
	for (int i = 0; i <= n; i++) {
		cout << stair[i] << ' ';
	}
	cout << '\n';
	for (int i = 0; i <= n; i++) {
		cout << ans[i] << ' ';
	}
	*/
	return 0;
}