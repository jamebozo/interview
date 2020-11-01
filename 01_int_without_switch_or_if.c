
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Example: 
 *     if (ii == 1) func1();
 *     if (ii == 2) func2();
 *     if (ii == 3) func3();
 *     if (ii == 4) func4();
 * */
////////////////////////////
void f1(void) {
    printf("f1\n");
}
void f2(void) {
    printf("f2\n");
}

void f3(void) { 
    printf("f3\n");
}
void f4(void) {
    printf("f4\n");
}


///////////////////////////
void main(void) {
    printf("hello\n");
    void (*fp[5])();

    f1();

    int ii = 0;
    //while (ii != -1) {
    printf("Enter:\n");
    scanf("%d", &ii);
    printf("ii: %d\n", ii);

    fp[0] = f1;
    fp[1] = f2;
    fp[2] = f3;
    fp[3] = f4;
    fp[ii-1]();
    //    ii =0;
    //}
}

////////////////////////////

