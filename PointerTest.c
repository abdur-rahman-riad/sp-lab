#include <stdio.h>
int main() {
    int num1, num2, num3;
    int *p, *q, *r;
    scanf("%d %d %d",&num1, &num2, &num3);
    p= &num1;
    q= &num2;
    r= &num3;

    if(*p > *q && *p> *r){
        printf("Largest Number: %d",*p);
    } else if(*q > *p && *q > *r){
        printf("Largest Number: %d",*q);
    } else {
        printf("Largest Number: %d",*r);
    }




    return 0;
}
