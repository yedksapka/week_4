#include <stdio.h>

int main(){

    int num1, num2, temp, sum=0;

    printf("\nPlease enter first number : ");
    scanf("%d", &num1);

    printf("\nPlease enter second number : ");
    scanf("%d", &num2);

    while(1){
        if(num1 == num2){
        printf("\nPlease enter first number : ");
        scanf("%d", &num1);

        printf("\nPlease enter second number : ");
        scanf("%d", &num2);
        }
        else break;
    }

    if(num1 > num2){

        temp=num2;
        num2=num1;
        num1=temp;
    }

    for(num2=num2; num2>=num1; num2--){

        sum = sum+num2;
    }

    printf("Result is : %d", sum);

    return 0;
}