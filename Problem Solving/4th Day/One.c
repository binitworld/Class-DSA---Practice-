#include <stdio.h>
void main (){
    char a[6] ="World";
    int i ,j;
    for (i=0, j=5; i<j; a[i++]=a[j--]);
    printf("%d\n", a);
}

// Hence its out put would be : 499119906