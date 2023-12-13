#include <stdio.h>
#include <string.h>

int main() {
    // 문자열 배열을 정의합니다.
	char str[101];
	
	// 공백을 포함한 문자열을 입력받습니다.
	fgets(str, 101, stdin);
	
	// 문자열의 3번째부터 10번째까지를 출력합니다.
	for(int i = 2; i < 10; i++)
		printf("%c", str[i]);

    return 0;
}