#include <stdio.h>
void g(int k) {
	if(k <= 0) {
		return;
	}
	g(k-1);
	printf("*");
}
void f(int k) {
	if(k <= 0) {
		return;
	}
	f(k-1);
	g(k);
	printf("\n");
}
int main() {
	int n;
	scanf("%d", &n);
	f(n);
}
