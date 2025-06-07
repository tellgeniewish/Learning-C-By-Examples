#include <stdio.h>

int main() {
    // 두 점의 좌표
    double x1 = 3.2, y1 = 4.6;
    double x2 = -8.3, y2 = -2.3;

    // 중간 지점 계산
    double xm = (x1 + x2) / 2;
    double ym = (y1 + y2) / 2;

    // 결과 출력
    printf("(%.2f %.2f), (%.2f %.2f)\n", x1, y1, x2, y2);
    printf("김현진씨, 중심좌표는 다음과 같습니다: (%.2f %.2f)\n", xm, ym);

    return 0;
}