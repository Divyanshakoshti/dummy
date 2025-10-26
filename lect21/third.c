 #include <stdio.h>
 #include <string.h>
 int main(){
     char str[]="hello";
     char target='e';
     char newStr[100];
     int j=0;
     int ln=strlen(str);
     for(int i=0;i<ln;i++){
       if(str[i]!=target){
         newStr[j]=str[i];
         j++;
     }
   }
    printf("%s",newStr);
}

