#include<stdio.h>
int main(){
    int i=1,n=5;
    int t1=0,t2=1,next;
    while(i<=n){
        printf("%d",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
        i++;
    }
    return 0;
}