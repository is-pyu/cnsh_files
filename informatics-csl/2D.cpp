#include <string.h>
#include <stdio.h>
int main() {
	char s[999];
	scanf("%s", s);
	printf("�Է¹��� ���ڿ��� ���̴� %d�Դϴ�.\n�Է¹��� ���ڿ��� �Ųٷ� ����մϴ�.\n", strlen(s));
	for (int i=strlen(s)-1;i>=0;i--) {
		printf("%c", s[i]);
	}
}
