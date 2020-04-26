//https://www.acmicpc.net/problem/2869
#include <iostream>
using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;
	int ans = 0;
	if (a == v) {
		ans = 1;
	}
	else if ((v - a) % (a - b) == 0) {
		ans = ((v - a) / (a - b)) + 1;
	}
	else if ((v - a) % (a - b) != 0)
	{
		ans = ((v - a) / (a - b)) + 2;
	} 
	else {
		cout << "wtf";
	}

	cout << ans << '\n';

	return 0;
}