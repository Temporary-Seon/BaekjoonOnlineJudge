#include <iostream>
#include <cstdlib>

using namespace std;

int compare(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}
int compareR(const void *a, const void *b) {
	return (*(int*)b - *(int*)a);
}

int main() {
	int n;
	cin >> n;
	int a[n], b[n], s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	qsort(a, n, sizeof(int), compare);
	qsort(b, n, sizeof(int), compareR);

	for (int i = 0; i < n; i++) {
		s += a[i] * b[i];
	}
	cout << s;
	return 0;
}