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
	//위의 주석처리된 방법으로 하려 했더니.
	//출력 초과가 일어남.
	//판단을 내린 순간 다음 루프로 가게 해야 함.
	//함수의 return 매커니즘을 이용하자.
	while (t > 0) {
		string str;
		cin >> str;
		cout << valid(str) << '\n';
		t--;
	}

	return 0;
}
