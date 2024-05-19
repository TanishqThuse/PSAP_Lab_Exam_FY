/*E35_q2
Max num in arr using func*/

#include<stdio.h>

int max(int a[5]){
    int max = a[0];
    for(int i=0 ; i<5 ; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int min(int a[5]){
    int min = a[0];
    for(int i=0 ; i<5 ; i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}

int main(){

    int a[5];
    printf("Enter 5 numbers\n");
    
    
    for(int i=0 ; i<5 ; i++){
        scanf("%d",&a[i]);
    }
     
    printf("max = %d\n",max(a));

    printf("min = %d\n",min(a));
    return 0;
}