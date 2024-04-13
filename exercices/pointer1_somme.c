//Ecrire un programme C qui utilise la notion de pointeur pour lire deux entiers 
//et calculer leur somme.

#include <stdio.h>

int somme(int *number1 , int *number2);

int main(){

    int nbre1=2,nbre2=3;
    int total = somme(&nbre1,&nbre2);
    printf("the same of the two numbers is : %d",total);

    return 0;
}

int somme(int *number1 , int *number2){
    return *number1 + *number2 ;
}
