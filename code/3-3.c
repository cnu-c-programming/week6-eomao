#include <stdio.h>

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};

    // &arr     → int (*)[2][3]  : 배열 전체를 가리키는 포인터, +1 시 배열 전체 크기(24바이트) 이동
    // &arr[0]  → int (*)[3]     : 한 행을 가리키는 포인터, +1 시 한 행 크기(12바이트) 이동
    // &arr[0][0] → int *        : 개별 원소를 가리키는 포인터, +1 시 int 크기(4바이트) 이동
    int (*p1)[2][3] = &arr;
    int (*p2)[3]    = &arr[0];
    int *p3         = &arr[0][0];

    printf("%p\n", (void*)p1);
    printf("%p\n", (void*)p2);
    printf("%p\n", (void*)p3);
    printf("\n");

    printf("%llu\n", (unsigned long long)(p1+1) - (unsigned long long)(p1));
    printf("%llu\n", (unsigned long long)(p2+1) - (unsigned long long)(p2));
    printf("%llu\n", (unsigned long long)(p3+1) - (unsigned long long)(p3));

    return 0;
}
