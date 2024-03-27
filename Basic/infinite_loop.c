#include <stdio.h>

// An infinite loop is a looping construct that does not terminate the loop and executes the loop forever. 
// It is also called an indefinite loop or an endless loop.

/*An infinite loop is useful for those applications that accept the user input and generate the output continuously until the user exits from the application manually. In the following situations, this type of loop can be used:
-All the operating systems run in an infinite loop as it does not exist after performing some task. It comes out of an infinite loop only when the user manually shuts down the system.
-All the servers run in an infinite loop as the server responds to all the client requests. It comes out of an indefinite loop only when the administrator shuts down the server manually.
-All the games also run in an infinite loop. The game will accept the user requests until the user exits from the game.
*/
int main (){

    //infinite loop using for loop
    for(;;){
        printf("Hello from for!\n");
    }
    // //infinite loop using while loop
    while(1){
        printf("Hello from while!\n");
    }
    // //infinite loop using do while loop
    do{
        printf("Hello from do while!\n");
    }while(1);
    //infinite loop using goto statement
    int count=0;
    loop:
    printf("Count: %d\n", count);
    count++;
    goto loop;  // Jump back to the "loop" label




    return 0;
}