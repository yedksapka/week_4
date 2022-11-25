#include <stdio.h>

int main(){
    
    int a, i, i2, i3;

    for(i=1; i<=10; i++){

        for(i2=1; i2<=i; i2++){

            printf("*");
        }

        printf("\n");
    }

    for(i=10; i>=1; i--){

        for(i2=i-1; i2>=1; i2--){

            printf("*");
        }

        printf("\n");
    }

    return 0;
}