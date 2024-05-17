/*E09
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    for(int k=1; k<=5; k++){
    char ch = 'E';
        for(int l=5; l>=k; l--){
            printf("%c ",ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}