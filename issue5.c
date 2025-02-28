// Make sure you only get the desired output

#include<stdio.h>
int main(void){
    int flag ;
    
    printf("Choose the operation:-\n1. Multiples of 2\n2. Multiples of 3\n3. Multiples of 4\n");
    scanf(" %d", &flag);

    switch(flag){
        case 1 :
            for(int i=1;i<6;i++){
                printf("%d\t", 2*i);
            }
            break;
            
            printf("\n");
        case 2 : 
            for(int i=1;i<6;i++){
                printf("%d\t", 3*i);
            }
            break;
            printf("\n");
        case 3 : 
            for(int i=1;i<6;i++){
                printf("%d\t", 4*i);
            }
            break;
            printf("\n");
        default :
                printf("Choose a valid option!!!\n");
    }
}