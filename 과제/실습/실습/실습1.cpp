#include <stdio.h>

int main(void) {
	char ch;
	printf("대문자를 입력하시오 : ");
	scanf_s("%c", &ch);
	if (ch >= 'A' && ch <= 'Z') {
		ch = ch + 32;
	}
	printf("소문자 : %c\n", ch);
	return 0;
 }