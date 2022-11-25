#include <stdio.h>

int main(){

    int num, i, mod;

    printf("\nPlease enter an integer : ");
    scanf("%d", &num);

    for(i=num; i>=1; i--){

        mod = num%i;

        if(mod==0){
            printf("%d\n", i);
        }
    }

    return 0;
}