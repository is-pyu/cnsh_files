#include <stdio.h>
#define N 100
FILE *in=fopen("in.txt", "r");
FILE *out=fopen("out.txt", "w");
int n, s, G[N][N], v[N];
void DFS(int s) {
    fprintf(out, "%d ", s);
    v[s]=1;
    for (int i=1;i<=n;i++) {
        if(G[s][i]==1 && v[i]==0) {
            DFS(i);
        }
    }
}
int main() {
    int x, y;
    fscanf(in, "%d %d", &n, &s);
    while (fscanf(in, "%d %d", &x, &y)!=EOF) {
        G[x][y]=G[y][x]=1;
    }
    DFS(s);
    fclose(in);
    fclose(out);
}
