#include <iostream>
using namespace std;

int main() {
	int t;
	int a, b;
	scanf("%d", &t);
	while (t>0) {
		scanf("%d %d", &a, &b);
		printf("%d", a + b);
		t--;
	}
	return 0;
}
//위에건 틀리고

#include<cstdio>
int t, a, b;
main()
{
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
	}
}

//아래건 맞는다
//왜?
//https://su-m.tistory.com/4
