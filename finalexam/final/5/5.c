#include <stdio.h>

int main(void)
{
    int a[] = { 11, 22, 33, 44, 55, 66 }; // 주어진 배열
    int size = sizeof(a) / sizeof(a[0]); // 배열 크기

    // 포인터 p와 q를 선언해 각각 배열의 가장 앞과 뒤 주소 저장
    int* p = a; // 첫 번째 요소 주소
    int* q = &a[size - 1]; // 배열 마지막 요소 주소

    printf("김현진씨 출력 결과는 다음과 같습니다.\n"); // 내 이름

    // a의 순서를 역으로
    while (q >= p) {
        printf("%d ", *q); // 현재 가르키는 값 출력 후
        q--; // 전으로 이동
    }
    printf("\n");

    return 0;
}