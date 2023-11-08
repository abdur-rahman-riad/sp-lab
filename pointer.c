#include<stdio.h>
int main(){
    int a=50, b=25;
    int *p;
    int *q;
    p=&a;
    q=&b;
    int sum = *p + *q;
    printf("Sum is: %d",sum);
}
