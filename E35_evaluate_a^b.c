/*E35
Evaluate a^b using functions*/

#include<stdio.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int findExponential(int a, int b){
    
    int exp = 1;
    for(int i=0; i<b; i++){
        exp = exp * a;
    }

    return exp;
}

int main(){

    int a,b;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);

    printf("a^b is : %d\n", findExponential(a,b));

    return 0;
}