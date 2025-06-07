#define _CRT_SECURE_NO_WARNINGS // strtok() 사용하기 위해
#include <stdio.h> // getchar()
#include <stdlib.h> // rand(), srand()
#include <time.h> // time
#include <conio.h> // _getche(), _getch() <-- 버퍼 이용 안함
#include <string.h>

int main(void)
{
    char ch;

    printf("문자를 계속 입력하고 Enter를 누르면 >>\n");
    while ((ch = getchar()) != 'q')
        putchar(ch); // stdio.h

    printf("\n문자를 누른 것이 보이고, _putch에 의해 입력문자 출력 >>\n");
    while ((ch = _getche()) != 'q')
        _putch(ch); // conio.h

    printf("\n문자를 누른 것이 보이고, _putch에 의해 입력문자 출력 >>\n");
    while ((ch = _getch()) != 'q')
        _putch(ch); // conio.h
    printf("\n");

    return 0;
}