#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

	//main�� �ȿ� ���� �ſ�����.
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	cin.ignore(); //�̰� ������ �������� ���д´ٰ���.
	//https://jhnyang.tistory.com/107 ����
	while (t > 0) {
		string str;
		getline(cin, str);
		//�� ���� ��°�� str�� �� ��Ȳ '\n' ���� �о���.
		//�׷��� getline �� '\n'�� ���ڿ��� ���� ���� �׷���
		str += '\n'; //�̰� ���� �־��ִ� ������ �ڿ� ����

		stack<char> s; //char type ���� ����

		//str�� ���ڸ� �ϳ��ϳ� ���鼭 ����
		for (char ch : str) {
			//���ڿ� �߿��� ' ' �� '\n'�� ������ ��.
			if (ch == ' ' || ch == '\n') {
				while (!s.empty()) {
					//�� �� ���� ���ؿ� ���� ���� ��� �����
					cout << s.top();
					s.pop();
				}
				cout << ch; //�׸��� ' '(����) �� '\n' ���� ���
			}
			//�װ� �ƴ϶��
			else {
				s.push(ch);
				//�ܾ��� ���ڸ� ���ÿ� ����.
			}
		}
		t--;
	}
	return 0;
}