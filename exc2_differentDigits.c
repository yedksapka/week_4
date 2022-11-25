#include <stdio.h>

int main(){

    int num=100, mod, cnt=0;

    for(num=100; num<1000; num++){

        mod = num%111;

        if(mod != 0){

            cnt++;
        }
        else;

        num++;
    }

    printf("%d", cnt);

    return 0;

}