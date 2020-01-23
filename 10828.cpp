//https://www.acmicpc.net/problem/10828
#include <iostream>
#include <string>
using namespace std;

struct Stack {
	int stack[10000] = { 0 };
	int size = 0;

	void push(int x) {
		stack[size] = x;
		size++;
	}

	int pop(){
		if (size > 0) {
			int x;
			x = stack[size - 1];
			stack[size - 1] = 0;
			size--;
			return x;
		} else {
			return -1;
		}
	}
	/*
	int size() {
		return size;
	}
	*/
	int empty() {
		if (size == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}

	int top() {
		if (size == 0) {
			return -1;
		}
		else {
			return stack[size - 1];
		}
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	Stack s;
	cin >> n;

	while (n > 0) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (cmd == "pop") {
			cout << s.pop() << '\n';
		}
		else if (cmd == "top") {
			cout << s.top() << '\n';
		}
		else if (cmd == "size") {
			cout << s.size << '\n';
		}
		else if (cmd == "empty") {
			cout << s.empty() << '\n';
		}
		else {
			cout << "worng" << '\n';
		}
		n--;
	}

	return 0;
}