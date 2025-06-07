#include <stdio.h>
#define rows 4 // 행의 합과 차를 정하는 상수
#define cols 3 // 열의 합과 차를 정하는 상수

void print(int[][3]); // 결과값을 출력하는 함수

int main() {
    int i,j;
    int s1[4][3], s2[4][3];
    
    int x[][3] = {
        {46, 79, 78},
        {35, 57, 28},
        {43, 68, 76},
        {56, 78, 98}
    };
    int y[][3] = {
        {78, 35, 99},
        {85, 82, 34},
        {58, 69, 29},
        {34, 59, 35}
    };


    // 두 행렬의 합의 결과값
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            s1[i][j] = x[i][j] + y[i][j];
        }
    }

    printf("\n[김현진씨] 위의 두 행렬 합의 결과값입니다.\n");
    print(s1);

    // 두 행렬의 차의 결과값
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            s2[i][j] = x[i][j] - y[i][j];
        }
    }
    
    printf("\n[김현진씨] 위의 두 행렬 차의 결과값입니다.\n");
    print(s2);

    return 0;
}
void print(int x[][3])
{
    int i,j;

    printf("----------------\n"); // 문제에 보이는 -개수와 동일하게 작성했습니다.
    //출력문
    for (int i=0; i<rows; i++) {
        printf(" ");
        for (int j=0; j<cols; j++) {
            printf("|%4d ", x[i][j]); // 오른쪽 정렬하려고 %4d했습니다.
        }
        printf("|\n");
    }    
    printf("----------------\n");
    
}