#include <iostream>
#include <math.h>
using namespace std;

int bep(int a, int b, int c) {
	if (c <= b) {
		return -1;
	}
	else {
		//for������ 1���� �ö󰡷��ϴ� �ð��ʰ��� Ʋ�Ⱦ���.
		int i = a / (c - b);
		return (i + 1);
		//+1�� �� ���ִ� Ʋ�Ⱦ���. �ֱ׷�����.
		//��: a, b, c ��� ������
		//a/(c-b)�� ����� �� �̹� �Ҽ����� ���� ���� ���� ���� ���ȴ�.
		//���� +1 �� ���ϸ� ���ص� Ʋ����.
		//������ ���� ���� �ʿ������ ������.
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
