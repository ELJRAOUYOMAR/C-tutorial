#include <stdio.h>

int main(){

    /*
        Write a C program that declares two integer variables, num1 and num2, and initializes them to different values.
        Then, declare two integer pointers, ptr1 and ptr2, and use them to swap the values of num1 and num2. Finally,
        print the values of num1 and num2 after swapping to verify that the swap was successful.
    */

    int num1= 5;
    int num2=18;
    int *ptr1=&num1;
    int *ptr2=&num2;

    printf("Before swapping\n");
    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);

    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("After swapping\n");
    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);

    /*
        Write a C program that declares an array of integers and a pointer to an integer. Initialize the
        array with some values and use the pointer to find and print the sum of the elements in the array.
    */

    int arr[]={1,2,3};
    int *ptr=arr;  // Declare a pointer and make it point to the first element of the array
    int sum =0;
    /*sizeof(arr) gives you the total size of the array in bytes.
    sizeof(arr[0]) gives you the size of a single element in bytes.
    Dividing the total size by the size of a single element gives you the number of elements because it essentially cancels out the bytes. */
    for(int i=0;i<=sizeof(arr) / sizeof(arr[0]);i++){
        sum+=*ptr;  // Add the value pointed to by ptr to the sum
        ptr++;  // Move the pointer to the next element in the array
    }
    printf("The Sum of the array elements is : %d\n",sum);

    return 0;




}
