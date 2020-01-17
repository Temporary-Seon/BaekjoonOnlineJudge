#include <cstdio>
using namespace std;

int main() {
	int n, t;
	scanf("%d", &t);
	n = t;
	int a, b;
	while (t > 0) {
		t--;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", n - t, a, b, a + b);
	}
	return 0;
}