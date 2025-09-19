#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int isPrime=1;
    if(n<=1){
        printf("number is not prime");
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("number is not prime");
    }
    else{
        printf("number is prime");
    }

}