#include<string.h>
#include<stdio.h>
int main(){
    int freq[256]={0};
    char str[]="hello";
    char newStr[100];
    int j=0;
    int ln=strlen(str);
    for(int i=0;i<ln;i++){
         freq[str[i]]++;
     }
     int fount=0;
     for(int i =0;i<ln;i++){
         if(freq[str[i]]==1){
             printf("%c",str[i]);
            fount=1;
             break;
         }
     }
 for(int i=0;i<256;i++){
          if(freq[i]>0){
        printf("%c: %d",i,freq[i]);
      }
    }
}

