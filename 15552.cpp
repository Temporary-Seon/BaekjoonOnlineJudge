#include <cstdio>
//using namespace std; �� ���� �¾Ҵ�.

int main() {
	int t; 
	int a, b; //unsigned short int �� �ٲٴ� Ʋ�ȴ�.
	scanf("%d", &t);
	while (t > 0) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
		t--;
	}
	return 0;
}