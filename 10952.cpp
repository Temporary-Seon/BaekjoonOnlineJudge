#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		cout << a + b << "\n";
		//cout << a + b; �� Ʋ����.
		//cout �� �ڵ����� ���������� �ʴ� ����̴�.
	}
}
//4ms
////////////////////////////

#include <cstdio>

int main() {
	int a, b;
	while (scanf("%d %d", &a, &b) == 2) {
		if (a != 0 || b != 0) {
			printf("%d\n", a + b);
		}
	}
}
//0ms