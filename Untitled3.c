#include<stdio.h>
int main(){
    float num1, num2, num3,div;
    int sum,sub,mul;

    scanf("%f %f %f",&num1,&num2, &num3);
    sum=num1+num2+num3;
    sub=num1-num2-num3;
    mul=num1*num2*num3;
    div=num1/num2/num3;

    printf("Sum: %d\nSub: %d\nMul: %d\nDiv: %.2f",sum,sub,mul,div);

}
