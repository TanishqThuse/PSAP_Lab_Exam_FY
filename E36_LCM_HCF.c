/*E36 
Write a C program to find HCF and LCM of two numbers given by 
user.*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int CalculateHCF(int a, int b){
    int hcf = 1;
    int smalled = ((a<b) ? a : b);
    for(int i=1; i<=smalled; i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    return hcf;
}

int CalculateLCM(int a, int b){
    int greater = ((a>b) ? a : b);
    int small = ((a>b)?b:a);
    int lcm = a*b;
    for(int i=greater; i<=a*b; i++){
        int small_backup =small;
        for(int j=1; small_backup<lcm;j++){
            small_backup = small_backup*j;
            if(small_backup>lcm){
                break;
            }
            if(small_backup%greater==0 && small_backup<lcm){
                lcm = small_backup;
            }
            small_backup = small;
        }
    }
    return lcm;
}


int main(){
    int a,b;

    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    printf("HCF of %d and %d is %d\n",a,b,CalculateHCF(a,b));
    printf("LCM of %d and %d is %d\n",a,b,CalculateLCM(a,b));

    return 0;
}
