#include<stdio.h>

int main(){
    char a [6]= "World";
    int i ,j;
    for ( i = 0, j =5 ;i < j ; a[i++]=a[j--]);
    printf("%s\n",a);
    
}