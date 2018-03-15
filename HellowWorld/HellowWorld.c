//#include <stdio.h>
//
//int main(void) {
//	short s = 0x1234567890; // 10진수로 약 780억
//	int i = 0x1234567890; // int의 값은 약 20억
//
//	printf("%#llx=%lld\n\n", 0x1234567890, 0x1234567890);
//
//	// 16진수로 출력
//	printf("[16진수]\n");
//	printf("s=%#x\n", s);
//	printf("i=%#x\n", i);
//	printf("\n");
//
//	//10진수로 출력
//	printf("[10진수]\n");
//	printf("s=%d\n" ,s);
//	printf("i=%d\n", i);
//	printf("\n"); //뭔소린지 하나도 모르겠네
//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* toUpperCase(char* str){
	char* newStr = malloc((strlen(str) + 1));
	char* p = newStr;

	if(str == NULL) return str;

	while (*str) {
		if ('a' <= *str && *str <= 'z') // &&= and결합 양쪽 모두 참이어야만 참을 결과로 얻는다.
			*p++ = (char)(*str++ - 32);
		else
			*p++ = *str++;
	}
	*p = '\0';
	return newStr;
}

int main(void){
	printf("%s -> %s\n", "abc", toUpperCase("abc"));
	printf("%s -> %s\n", "abc", toUpperCase("abc2"));
	printf("%s -> %s\n", "abc", toUpperCase("abc3"));
	printf("%s -> %s\n", "a1b2c3", toUpperCase("a1b2c3"));
	return 0;
}
