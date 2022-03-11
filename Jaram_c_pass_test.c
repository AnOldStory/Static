#include <stdio.h>

/**
 * Jaram C언어 패스 문제-
 *  문자열을 원하는 구분자로 나누는 함수(Jaram)를 만드시오.
 * 
 *  조건1. <stdio.h> 제외 라이브러리 사용금지
 *  조건2. 함수의 매개변수(parameter) 변경금지
 *  조건3. 배끼면.... 안됩니다... 차라리 공부하면서 해보시는거 추천드려요!
 * 
 * 제출요령-
 *  코드만 보내셔도되고 c파일로 보내셔도 됩니다
 *  무슨 매체든 괜찮습니다. Github, 이메일, 카카오톡 등등
 *
 * 제출기한-
 * ~ 2022.03.13(일) 24:00
*/

/* 
-아래 예제 출력 예시-
Hello
Have
a
nice
day
smile
*/


char *Jaram(char *string,char *delimiter);

int main(void)
{
	char str[]="Hello,Have a nice day..!smile!";
	char deli[]=" .,!";
	char *ptrArg=Jaram(str,deli);
	while(ptrArg!=NULL){
		printf("%s\n",ptrArg);
		ptrArg = Jaram(NULL,deli);
	}
	return 0;
}
char *Jaram(char *str,char *deli){
	/**
	 * 이 부분을 채워주세요
	 * Hint: 경우에 따라서 static이 필요할 수도 있습니다.
	 */
}
