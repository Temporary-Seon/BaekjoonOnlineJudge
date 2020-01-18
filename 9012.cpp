#include <iostream>
#include <string>
using namespace std;

string valid(string s) {
	int cnt = 0;
	for (char ch : s) {
		if (ch == '(') {
			cnt++;
		}
		else {
			cnt--;
		}
		if (cnt < 0) {
			return "NO";
		}
	}
	if (cnt == 0) {
		return "YES";
	}
	else {
		return "NO";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	//bool judge = false;
	cin >> t;
	cin.ignore();
	/*
	while (t > 0) {
		int size = 0;
		string str;
		cin >> str;
		for (char ch : str) {
			if (ch == '(') {
				size++;
			}
			else if (ch == ')') {
				size--;
			}
			if (size < 0) {
				judge = false;
			}
		}
		if (judge == false) {
			cout << "NO" << '\n';
			continue;
		}
		if (size == 0) {
			judge == true;
		}
		else {
			judge == false;
		}
		if (judge == true) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
		t--;
	}*/
	//���� �ּ�ó���� ������� �Ϸ� �ߴ���.
	//��� �ʰ��� �Ͼ.
	//�Ǵ��� ���� ���� ���� ������ ���� �ؾ� ��.
	//�Լ��� return ��Ŀ������ �̿�����.
	while (t > 0) {
		string str;
		cin >> str;
		cout << valid(str) << '\n';
		t--;
	}

	return 0;
}
