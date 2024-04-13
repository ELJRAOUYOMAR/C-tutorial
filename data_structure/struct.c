#include <stdio.h>
#include <string.h>
// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
    // Create a structure variable of myStructure called s1
    struct myStructure s1;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';
    //Remember that strings in C are actually an array of characters, and unfortunately,you can't assign a value to an array like this:
    //   s1.myString = "Some Text";
    // And to modify a string value, the strcpy() function is useful again:
    strcpy(s1.myString, "Some Text");
    // we  can also assign values to members of a structure variable at declaration time, in a single line.
    //   struct myStructure s1 = {13, 'B', "Some text"};
    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My String: %s\n", s1.myString);

    return 0;
}