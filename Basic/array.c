#include <stdio.h>

int main (){

    int matrix[2][3]={{1,2,3},{1,2,3}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d*%d =%d\n",matrix[i],matrix[j],matrix[i*j]);
        }
    }
    return 0;
}