#include <stdio.h>
int main() {
    int n, T[1<<10]; //���������� �����ϸ� T[0]==0 : true
    scanf("%d", &n);
    for (int i=1;i<=n;i++) { //���ȣ 1����, 0 ��� X 
        scanf("%d", &T[i]); //1~n������� �Է� 
    }
    for (int k=1;k<=n;k*=2) { //k=1,2,4,8,...
        for (int i=k;i<=n&&i<=2*k-1;i++) { //i<=n�� ��� k ~ 2k-1 ���� k�� ��� 
            printf("%d ", T[i]);
        }
        printf("\n");
    }
}
