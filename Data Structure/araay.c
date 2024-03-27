#include <stdio.h>


int main(){
    int array_int[]={1,1,2,3,3,2,4,5,5};
    int res=0;
    for(int i=0;i<9;i++){
        res=res ^ array_int[i];
    }
    printf("The number not repeat in the list is : %d",res) ;

    return 0;

}