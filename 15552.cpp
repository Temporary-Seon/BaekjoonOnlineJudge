#include <cstdio>
//using namespace std; 를 빼니 맞았다.

int main() {
	int t; 
	int a, b; //unsigned short int 로 바꾸니 틀렸다.
	scanf("%d", &t);
	while (t > 0) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
		t--;
	}
	return 0;
}