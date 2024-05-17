/*E08
A 
A B 
A B C 
A B C D 
A B C D E 
A B C D 
A B C 
A B 
A */
#include<stdio.h>
#include<stdlib.h>

int main(){
    for(int i=1; i<=5; i++){
        for(int j=1;j<=i;j++ ){
            if(j==1){
                printf("A ");
            }
            else if(j==2){
                printf("B ");
            }
            else if(j==3){
                printf("C ");
            }
            else if(j==4){
                printf("D ");
            }
            else{
                printf("E ");
            }
        }
        printf("\n");
        if(i==5){
            for(int k=1; k<=4;k++){
            //the below logic of char is way much cooler to write 
            char ch = 'A';
                for(int l=4; l>=k; l--){
                    printf("%c ",ch);
                    ch++;
                }
                printf("\n");
            }
        }
    }

    return 0;
}