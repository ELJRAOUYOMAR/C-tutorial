#include<stdio.h>
#include<string.h>

int str_len(const char *Char);
void str_cpy(const char *Char,char* copie );
void str_concatenate();
void str_compaire();

int main(){
    char Char[]="Good Morning!";
    int length=0;
    length=str_len(Char);
    printf("the String '%s' has %d in Character\nwe can also use the strlen function for getting the length of string (strlen(Char)=%d)",Char,length,strlen(Char));
    
    //check that the copy string is large enough to accommodate the contents of string
    char Copie[50]="hhhhh";
    str_cpy(Char,Copie);
    printf("\nThe Char is '%s', the Copie string is '%s'\n", Char, Copie);

    str_concatenate();

    str_compaire();

    return 0;
}



int str_len(const char *Char){

    int char_number = 0 ;
    int actuel_char = 0 ;

    do{
        actuel_char=Char[char_number];
        char_number++;
    }  
    while(actuel_char != '\0');
    //We remove 1 character in length so as not to count the character \0
    char_number-- ;
    return char_number;

} 

void str_cpy(const char *Char,char *copie ){
    strcpy(copie,Char);
}

void str_concatenate(){
    char chaine1[100] = "Welcome ", chaine2[] = "Mateo21";
    strcat(chaine1, chaine2); // we concatenate chaine2 in chaine1
    // if all went wll , chaine1 will be "Welcome Mateo21"
    printf("chaine1 will be  : %s\n", chaine1);
    // chaine2 not changed :
    printf("chaine2 always is  : %s\n", chaine2);
}



void str_compaire(){

    // if all characters are the same, it returns 0;
    // if the characters of string1 are greater than those of string2 , the function returns a positive number;
    // if it is the reverse, the function returns a negative number.

    char chaine1[] = "Text of test", chaine2[] = "Text of test";

    if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
    {
        printf("The strings are identical\n");
    }
    else
    {
        printf("The strings are different\n");
    }

}