#include<stdio.h>
int main(){
    int a, i, j;
    printf("Enter 1st Number: ");
    scanf("%d",&a);

    for( i=1; i<=a; i++){
        for( j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }


}

// Change

