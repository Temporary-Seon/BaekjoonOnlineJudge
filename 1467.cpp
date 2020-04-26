#include <iostream>

using namespace std;

int main() {

	int e, s, m;
	cin >> e >> s >> m;
	int ee = 0, ss = 0, mm = 0;
	int cnt = 0;
	bool flag = true;
	while (flag) {
		ee++; ss++; mm++;
		if (ee > 15) ee = 1;
		if (ss > 28) ss = 1;
		if (mm > 19) mm = 1;
		cnt++;
		if (e == ee && s == ss && m == mm) {
			flag = false;
		}
	}

	cout << cnt;

	return 0;
}