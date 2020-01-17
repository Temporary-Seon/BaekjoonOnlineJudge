#include <cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	int a, b;
	while (t > 0) {
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);
		t--;
	}
	return 0;
}