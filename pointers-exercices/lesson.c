#include <stdio.h>


int main(){

    int num = 100;
    int *ptr = &num;

    printf("Value = %d\n",num);
    printf("Adresse = %p\n",&num);
    printf("Value = %d\n",*ptr);
    printf("Adresse = %p\n",ptr);

    *ptr = 300;
    printf("After \n");
    printf("Value = %d\n",num);
    printf("Adresse = %p\n",&num);
    printf("Value = %d\n",*ptr);
    printf("Adresse = %p\n",ptr);

    printf("#############Array###########\n");

    int arr[] = {1,18,20,6};

    // an array to pointer points to the first element in array 
    int *ptr_arr = &arr[0];
    // we can also wite int *ptr_arr = &arr[0];  it is equal of the the previous line  
    printf("Value of the first element = %d\n",arr[0]);
    printf("Adresse the first element = %p\n",&arr);
    printf("Value the first element = %d\n",*ptr_arr);
    printf("Adresse the first element = %p\n",ptr_arr);

    printf("Value of the second element = %d\n",arr[1]);
    printf("Adresse the second element = %p\n",&arr[1]);
    printf("Value the second element = %d\n",*(ptr_arr + 1));
    printf("Adresse the second element = %p\n",ptr_arr + 1);

    int i;
    for (i=0 ; i < sizeof(arr) / sizeof(arr[0]) ; i++){
        printf("elemet %d = %d\n",i+1,*(ptr_arr + i));
    }
    
    return 0;
}