//https://www.acmicpc.net/problem/10799
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	stack<int> s;
	string line;
	int ans = 0;

	getline(cin, line);
	//cout << line << '\n';
	//cout << line[0] << '\n';

	for (int i = 0; i < line.size(); i++) {
		if (line[i] == '(') {
			s.push(i);
		}
		else {
			// ')'
			if (i - s.top() == 1) {
				//���̰� 1 = ������
				s.pop();
				ans += s.size();
			}
			else {
				//�װ� �ƴ϶�� ����� ����.
				s.pop();
				ans += 1;
			}
		}
	}
	cout << ans;

	return 0;

}