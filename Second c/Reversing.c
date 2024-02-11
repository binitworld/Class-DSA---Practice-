//In hexadecimal notation, 
// the maximum positive value for a signed 32-bit integer is represented as 0x7fffffff, 
// and the minimum negative value is represented as 0x80000000.

#include<stdio.h>
int reverse (int n){
    int d , z=0;
    while(n){
        d=n%10;
        if ((n > 0 && z > (0x7fffffff - d) / 10) ||
            (n < 0 && z < ((signed)0x80000000 - d) / 10)){
                return 0;

            }
            z =z*10+d;
            n=n/10;
    }
    return z;
}


void main (){
    int i ,m , v;

    printf("Enter the value you want to reverse :");
    scanf("%d", &i);
    printf("\nThe reversed value will be : %d" ,reverse(i));
    
}
