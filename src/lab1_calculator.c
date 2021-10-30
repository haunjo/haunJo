#include<stdio.h>
#pragma warning(disable : 4996) //scanf 반환값이 무시되었습니다 오류 
#define Max_num 8
 
//메인함수
int main() // 리턴값 정수형 메인함수 인자값 0
{
    int a, b; //정수형 변수 a,b 선언
    char num; //캐릭터형 변수 num 선언 
    printf("사칙연산 입력(정수):"); //printf 사칙연산 입력하세요 출력
    scanf("%d", &a);     //scanf a값과 +,-,/,%,*,중에 치고 b값 받음
    scanf("%c", &num);
    scanf("%d", &b);
 
    // if /else if문으로 
    if (num == '+') //위에서 받은 num이 +와 같으면 
    {    
        //printf 출력 아래거 위에서 입력받은 값 a+b
        printf("더하기 값\n");    
        printf("%d%c%d=%d\n", a, num, b, a + b);
    }
    else if (num == '-')
    {    //printf 출력 아래거 위에서 입력받은 값 a-b
        printf("빼기 값\n");
        printf("%d%c%d=%d\n", a, num, b, a - b);
    }
    else if (num == '*')
    {    //printf 출력 아래거 위에서 입력받은 값 a*b
        printf("곱셈 값\n");
        printf("%d%c%d=%d\n", a, num, b, a * b);
    }
    else if (num == '/')
    {    //printf 출력 아래거 위에서 입력받은 값 a/b
        printf("나누기 값\n");
        printf("%d%c%d=%d\n", a, num, b, a / b);
    }
    else if (num == '%')
    {    //printf 출력 아래거 위에서 입력받은 값 a%b
        printf("나머지 값\n");
        printf("%d%c%d=%d\n", a, num, b, a % b);
    }
 
}
