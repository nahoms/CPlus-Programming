/*

write a c program to reverse sentence keeping word spell intact.
eg:he is a good boy
output:boy good a is he
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void stringReverse(char *str,int start,int end){
//Inclusive of both start and end
char temp;
for(;start<end;start++,end--){
temp=str[start];
str[start]=str[end];
str[end]=temp;
}
}

int main(){
unsigned int i;
int start,end;
char *str=(char *)malloc(sizeof(char) *30);
strcpy(str,"He is a Good Boy");
printf("Original String-> %s\n",str);
stringReverse(str,0,strlen(str)-1);
start=0;
end=-1;
for(i=0;i<=strlen(str);i++){
if(str[i]=='\0'){
stringReverse(str,start,end);
break;
}
else if(str[i]==' '){
stringReverse(str,start,end);
start=i+1;
}
end++;
}

printf("Final String -> %s\n",str);
return 0;
}
