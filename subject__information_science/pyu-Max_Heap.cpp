#include <stdio.h>
int n, H[1<<10], s;
void up(int k) {
    int t;
    if (k==1) {
        return;        // ������̴�  �禡�������������������� 
    }                  //                                   ��
    if (H[k/2]<H[k]) { // (�θ��尡 �ڽĳ�庸�� �۴ٸ�)  ��
        t=H[k/2];      // ����ȯ�۾�                        ��
        H[k/2]=H[k];   // ����ȯ�۾�                        ��
        H[k]=t;        // ����ȯ�۾�                        ��
        up(k/2);       // ����Լ��̴�  ���������������������� 
    }
}
void push(int x) {
    H[++s]=x; // s �ʱⰪ�� 0, 1���� �����ϱ� ���� ++s ���� ���� 
    up(s);
}

int main() {
    int t;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) { // root ��尡 1�� �濡 ���� 
        scanf("%d", &t);
        push(t);
    }
    for (int k=1;k<=n;k*=2) {             // ���� 
        for(int i=k;k<=n&&i<=2*k-1;i++) { // 2�� 
            printf("%d ", H[i]);          // Ʈ�� 
        }                                 // ���� 
        printf("\n");                     // �ڵ� 
    }
}
