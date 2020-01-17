#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		cout << a + b << "\n";
		//cout << a + b; 는 틀린다.
		//cout 은 자동으로 개행해주지 않는 모양이다.
	}
}
//4ms
////////////////////////////

#include <cstdio>

int main() {
	int a, b;
	while (scanf("%d %d", &a, &b)==2) {
		printf("%d\n", a + b);
	}
}
//0ms