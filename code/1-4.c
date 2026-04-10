#include <stdio.h>

int main(){
    int arr3[2][3][4] = { 0 };
    
    int (*p)[3][4] = arr3;

    printf("%zu\n", sizeof(p));
    printf("%zu\n", sizeof(*p));
    printf("%zu\n", sizeof(**p));
    printf("%zu\n", sizeof(***p));

    printf("%zu\n", (void*)p);
    printf("%zu\n", (void*)*p);
    printf("%zu\n", (void*)**p);
    printf("%zu\n", (***p));
}
