#include <stdio.h>
int main() {
    int a[101][101]={}, rev=1, row=-1, col=0, lim=0, n, m;
    scanf("%d %d", &n, &m);
    for (int cnt=0;cnt<n*m;) {
        for (int j=0;j<n-lim;j++) {
            row+=rev;
            a[row][col]=++cnt;
        }
        for (int i=0;i<m-lim-1;i++) {
            col+=rev;
            a[row][col]=++cnt;
        }
        lim++;
        rev*=-1;
    }
    for (int i=n-1;i>=0;i--) {
        for (int j=0;j<m;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}