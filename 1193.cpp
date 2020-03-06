//https://www.acmicpc.net/problem/1193
#include <iostream>
using namespace std;

int main() {

	//1 3 6 10 15 21
	int n;
	cin >> n; // 1 <= n <= 10 0000 0000
	int line = 1;
	int i = 1;
	int distance;
	int sum;
	int endindex = 1;
	if (n == 1) {
		cout << "1/1";
	}
	else {
		while (n > endindex) {
			i++;
			endindex += i;
			//cout << endindex << '\n';
		}
		distance = endindex - n;
		//cout << distance << '\n';
		sum = i + 1;
		//cout << sum << '\n';
		if (sum % 2 == 0) {
			cout << distance + 1 << '/' << sum - (distance + 1);
		}
		else {
			cout << sum - (distance + 1) << '/' << distance + 1;
		}
	}

	return 0;
}