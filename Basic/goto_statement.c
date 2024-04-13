#include<stdio.h>

int main(){
    //example 1
    int num,i=1;
    printf("Enter the number whose table you want to print?");
    scanf("%d",&num);
    table:
    printf("%d x %d = %d\n",num,i,num*i);
    i++;
    if(i<=10)
        goto table;

    //example 2
    int x, j, k;
    for(x=0;x<10;x++)
    {
        for(j=0;j<5;j++)
        {
        for(k=0;k<3;k++)
        {
            printf("%d %d %d\n",x,j,k);
            if(j == 3)
            {
            goto out;
            }
        }
        }
    }
    out:
    printf("came out of the loop");

    return 0;
}
