#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
//std ǥ�� �̸������� ���Ե� vector�� ����ϱ� ����
//��ó���� ������ �̷��� ����صθ� std::vector���� std::�� ������ �� ����
int v, e; //vertex, edge
vector<int> G[10]; //vector �迭 ����  
struct vertex {
	int now;
	int cnt;
} t;
/*
struct vertex {
	int now;
	int cnt;
};
vertex t;
�� ���� ǥ��
*/ 
queue<vertex> Q;
bool visited[10]; //���� �湮 ���θ� ǥ���ϴ� boolean 

int main() {
    int v1, v2;
    scanf("%d %d", &v, &e); //���� ����, ���� ���� 
    for (int i=1; i<=e; i++) {
        scanf("%d %d", &v1, &v2);
        G[v1].push_back(v2); //v1�� v2�� ����Ǿ� �ִ� 
        G[v2].push_back(v1); //v2�� v1�� ����Ǿ� �ִ�
    }
    
    scanf("%d %d", &v1, &v2); //�������, �������� 
    Q.push({v1, 0});
    visited[v1]=1;
    
    while (!Q.empty()) {
        t=Q.front(); //t�� ť�� ���� ó�� �ڷ��� ���� ���� 
		Q.pop(); //ť�� ���� ó�� �ڷ� ���� 
        if (t.now==v2) { //���� ������ ������������ Ȯ�� 	
            printf("%d\n", t.cnt);
            return 0;
        }
        else { //���� ���������� �ƴ϶�� 
            for (int i=0; i<G[t.now].size(); i++) {
                if (visited[G[t.now][i]]==0) { //�湮���� �ʾ��� ��� 
                    Q.push({G[t.now][i], t.cnt+1});
                	printf("{%d, %d}", G[t.now][i], t.cnt+1);
                    visited[G[t.now][i]]=1; //�湮�ߴٰ� ǥ�� 
                }
            }
        }
    }
    printf("Impossible");
}
