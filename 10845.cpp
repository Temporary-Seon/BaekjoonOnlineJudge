#include <iostream>
#include <string>
using namespace std;

struct Queue {

	int q[10000] = {0};
	int first = 0;
	int end = 0;

	void push(int x) {
		q[end] = x;
		end++;
	}

	int size() {
		return end - first;
	}

	bool empty() {
		if (first == end) {
			return true;
		}
		else {
			return false;
		}
	}

	int pop() {
		if (!empty()) {
			int result;
			result = q[first];
			q[first] = 0;
			first++;
			return result;
		}
		else {
			return -1;
		}
	}

	int front() {
		if (!empty()) {
			return q[first];
		}
		else {
			return -1;
		}
	}

	int back() {
		if (!empty()) {
			return q[end - 1];
		}
		else {
			return -1;
		}
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	Queue q;
	cin >> n;

	while (n > 0) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop") {
			cout << q.pop() << '\n';
		}
		else if (cmd == "front") {
			cout << q.front() << '\n';
		}
		else if (cmd == "back") {
			cout << q.back() << '\n';
		}
		else if (cmd == "size") {
			cout << q.size() << '\n';
		}
		else if (cmd == "empty") {
			if (q.empty() == true) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else {
			cout << "worng" << '\n';
		}
		n--;
	}

	return 0;
}