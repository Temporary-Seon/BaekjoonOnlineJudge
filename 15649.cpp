#include <iostream>

using namespace std;

bool c[9] = { false };
int a[9] = { 0 };

void go (int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (c[i]) {
				continue;
			}// true 라면 i번째 수는 이미 쓴 것.
			//=> 다음 루프로 이행.
			//=> i 사용 불가능

			c[i] = true;
			a[index] = i;
			//index 에 i를 사용.

			go(index + 1, n, m);
			//재귀로 호출

			c[i] = false;
			//썼던 수 반납.
			//각 호출에서 자동으로 반납됨.
		}
	}
}

int main () {

	int n, m;
	cin >> n >> m;

	go(0, n, m);

	return 0;
}