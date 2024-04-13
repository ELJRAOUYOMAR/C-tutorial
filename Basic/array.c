#include <stdio.h>

int main(int argc, char* argv[]) {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int row, column;

    for (row = 0; row < 1; row++) {
        for (column = 0; column < 3; column++) {
            for (int i = 0; i < 3; i++) {
                printf("%d*%d = %d\n", matrix[row][column], matrix[1][i], matrix[row][column] * matrix[1][i]);
            }
        }
    }
    
//     argc, argv
//     gcc -o myprog myprog.c
//     argc
    // 4
    // argv[0]
    // gcc
    // argv[1]
    // -o
    // argv[2]
    // myprog
    // argv[3]
    // myprog.c
    if (argc > 1) 
    {
      for (int count = 0; count < argc; count++)
        {
            printf("argv[%d] = %s\n", count, argv[count]);
        }
    }
    else
    {
      printf("The command had no other arguments.\n");
    }
    return 0;
}
