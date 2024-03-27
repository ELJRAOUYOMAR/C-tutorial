#include <stdio.h>


int main (){

    FILE *filePointer;
    
    // o create a file in C, you'll use the fopen() function, which returns a pointer to the file if successful, or NULL if an error occurs. The syntax is as follows:
    // open the file for writing, if the file not exeists, the program creates a new file with the file name 
    // w: Opens the file for writing, creating a new file if it doesn't exist, or truncating an existing file.
    // a: Opens the file for appending, writing data to the end of the file.
    // r: Opens the file for reading.
    filePointer = fopen("simple_test.txt","w");
    // processing of the file 
    fprintf(filePointer, "%s", "This is a simple test of File Handling");
    // end of processing

    // close the file 
    fclose(filePointer);

    return 0;
}