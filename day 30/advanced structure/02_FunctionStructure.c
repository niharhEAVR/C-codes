#include <stdio.h>

struct emp
{
    int data;
};

void show(struct emp e1)
{
    printf("The data of the employe: %d",e1.data);
}

int main()
{
    struct emp harshita;
    struct emp *ptr;

    ptr = &harshita;
    ptr->data = 919;


    show(harshita);
    return 0;
}