#include <iostream>
#include <math.h>
using namespace std;

int bep(int a, int b, int c) {
	if (c <= b) {
		return -1;
	}
	else {
		//for문으로 1개씩 올라가려하니 시간초과로 틀렸었다.
		int i = a / (c - b);
		return (i + 1);
		//+1을 안 해주니 틀렸었다. 왜그랬을까.
		//답: a, b, c 모두 정수라서
		//a/(c-b)를 계산할 때 이미 소수점을 버린 정수 답이 나와 버렸다.
		//따라서 +1 을 안하면 뭘해도 틀린다.
		//변수를 따로 놓을 필요까지도 없었다.
	}
}

int main() {
	int a, b, c;
	int n;

	cin >> a >> b >> c;

	n = bep(a, b, c);
	cout << n;

	return 0;
}
