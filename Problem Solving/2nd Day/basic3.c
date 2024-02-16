#include <stdio.h>
int main(){
    char p[20]; int i ;
    char s ="string";
    int length = strlen(s);
    for ( i = 0; i < length; i++)

    {
        p[i]=s[length-i];
    }
    print("%s",p);
}