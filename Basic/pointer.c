#include <stdio.h>

void triplePointeur(int *pointeurSurNombre);

int main(int argc, char *argv[])
{
    // int age = 10;
    // int *pointeurSurAge; // 1) signifie "Je crée un pointeur"
    // pointeurSurAge = &age; // 2) signifie "pointeurSurAge contient l'adresse de la variable age"
    // printf("Adresse in Memory : %d",pointeurSurAge);
    // printf("Value of age : %d",*pointeurSurAge);
    // // printf("Value of age : %d",&pointeurSurAge);

    int nombre = 5;

    triplePointeur(&nombre); // On envoie l'adresse de nombre à la fonction
    
    // int *pointeur = &nombre; // pointeur prend l'adresse de nombre
    // triplePointeur(pointeur); // On envoie pointeur (l'adresse de nombre) à la fonction
    // printf("%d",*pointeur)
    
    printf("%d", nombre); // On affiche la variable nombre. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse

    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}