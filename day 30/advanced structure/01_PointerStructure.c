#include<stdio.h>

struct emp
{
    int data;
};


int main()
{
    struct emp cooldude;
    struct emp *ptr;

    ptr = &cooldude;
    ptr->data = 101;

    printf("%d",cooldude.data);

    return 0;
}