#include <stdio.h>

int main() {
    //continue statement 
    // for(int i=0;i<=5;i++){
    //     if(i==3)
    //         continue;  // Skip iteration when i is 3
    //     printf("%d\n",i);
    // }

    // //break statement
    // for(int i=0;i<=5;i++){
    //     if(i==3)
    //         break;  // Exit the loop when i is 3
    //     printf("%d\n",i);
    // }

    //goto statement
    /*It is used to transfer control from one part of a program to another part. Specifically, 
    it allows you to jump to a labeled section of code within the same function or scope.*/
    int i = 1;

    loop_start:
    if (i <= 5) {
        printf("%d ", i);
        i++;
        goto loop_start; // Jump back to the labeled statement
    }

    // other example of goto 
    int n;
    go_first :
        printf("Enter a number between 1 and 5 ");
        scanf("%d",&n);
    if (n>5 || n<1)
       goto go_first ;    
    
    printf("You're really entered a number between 1 and 5");

    return 0;
}