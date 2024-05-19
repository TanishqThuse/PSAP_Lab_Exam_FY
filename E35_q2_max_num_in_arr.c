/*E35_q2
Max num in arr using func*/

#include<stdio.h>

int main(){

    int a[5];
    printf("Enter 5 numbers\n");
    
    
    for(int i=0 ; i<5 ; i++){
        scanf("%d",&a[i]);
    }
    int min = a[0];
    int max = a[0];

    for(int i=0; i<5; i++){
        if(min>a[i]){
            min=a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
    }  
    printf("max = %d\n",max);

    printf("min = %d\n",min);
    return 0;
}