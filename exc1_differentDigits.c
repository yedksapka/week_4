#include <stdio.h>

int main(){

    int num=100, d1, d2, d3, cnt=0;

    for(num=100; num<1000; num++){

        d1 = (num/1)%10;
        d2 = (num/10)%10;
        d3 = (num/100)%10;

        if(d1!=d2 && d1!=d3 && d2!=d3){
            cnt++;
        }
        else;
        
    }

    printf("%d", cnt);

    return 0;

}