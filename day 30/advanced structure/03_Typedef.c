#include <stdio.h>

typedef struct employee
{
    int data;
} emp;

void show(emp e1)
{
    printf("The data of the employe: %d", e1.data);
}

int main()
{
    emp harshita;
    emp *ptr;

    ptr = &harshita;
    ptr->data = 919;

    show(harshita);
    return 0;
}


// no need type the struct employee harshita
// instead i can type emp harshita