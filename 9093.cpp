#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

	//main문 안에 쓰는 거였구나.
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	cin.ignore(); //이게 없으면 다음줄을 안읽는다고함.
	//https://jhnyang.tistory.com/107 참고
	while (t > 0) {
		string str;
		getline(cin, str);
		//한 줄이 통째로 str에 들어간 상황 '\n' 까지 읽었음.
		//그러나 getline 은 '\n'를 문자열에 넣지 않음 그래서
		str += '\n'; //이걸 굳이 넣어주는 이유는 뒤에 나옴

		stack<char> s; //char type 스택 선언

		//str의 글자를 하나하나 보면서 진행
		for (char ch : str) {
			//문자열 중에서 ' ' 나 '\n'이 나왔을 때.
			if (ch == ' ' || ch == '\n') {
				while (!s.empty()) {
					//빌 때 까지 스텍에 쌓인 것을 모두 비워냄
					cout << s.top();
					s.pop();
				}
				cout << ch; //그리고 ' '(공백) 과 '\n' 까지 출력
			}
			//그게 아니라면
			else {
				s.push(ch);
				//단어의 문자를 스택에 저장.
			}
		}
		t--;
	}
	return 0;
}