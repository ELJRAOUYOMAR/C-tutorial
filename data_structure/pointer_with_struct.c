#include <stdio.h>

typedef struct emp
{
    int id;
    char name[10];
    double salary;
} employee;

// void print_emp(struct emp *e){
void print_emp(struct emp* e){
    // printf("ID:%d , Name:%s , Salary:%.2f",(*e).id,(*e).name,(*e).salary);
    printf("ID:%d , Name:%s , Salary:%.2f \n",e->id,e->name,e->salary);
}

int main(){

    employee e[] = {{1,"Ahmed",600.19},{2,"Ahmed",600.19},{3,"Ahmed",600.19},{4,"Ahmed",600.19}};
    int num_employee = sizeof(e) / sizeof(e[0]);

    for (int i = 0; i < num_employee ; i++){
        print_emp(&e[i]);
    }

    return 0;   
}