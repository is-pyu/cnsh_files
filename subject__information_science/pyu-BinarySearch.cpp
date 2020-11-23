#include <stdio.h>
#define MAX 1<<5
int n, d[MAX], k, L, R, M;

void s() {
	L=1;
	R=n;
	while (L<=R) {
		M=(L+R)/2;
		if (d[M]==k) {
			printf("%d", M);
			return;
		} else if (k>d[M]) {
			L=M+1;
		} else {
			R=M-1;
		}
	}
	printf("Not Found!");
}
int main() {
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		scanf("%d ", &d[i]);
	}
	scanf("%d", &k);
	s();
}
