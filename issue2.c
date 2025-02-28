// Make sure program prints all even numbers from 1 to 40

#include <stdio.h>

int main(){
    int even = 0;
    for(int even = 0; even<= 20; even++){
        even *= 2;
        printf("%d\t", even);
    }
    printf("\n");
    return 0;
}