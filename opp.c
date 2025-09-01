#include<stdio.h>
int area(int l,int b){
    return l*b;
}
int perimeter(int l,int b){
    return 2*(l+b);
}
int main(){
    int l,b;
    printf("enter length:");
    scanf("%d",&l);
    printf("enter breadth:");
    scanf("%d",&b);
    printf("area:%d\n",area(l,b));
    printf("perimeter:%d",perimeter(l,b));
}