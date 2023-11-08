#include<stdio.h>
int main(){
    int i,a,n,sum=0;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&n);
    if(a<n){
    for(i=a; i<=n; i++){
        if(i%2==0){
            sum=sum+i;
        }

    }
    printf("Sum is: %d",sum);
    } else {
        printf("Invalid Input");
    }
}
