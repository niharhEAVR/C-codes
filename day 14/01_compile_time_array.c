#include <stdio.h>
int main()
{
    // compile time example
    int rollno[6] = {1,2,3,4};
    // range: 0 to (n-1)=4
    //printf("%d",rollno[3]);

    // Traversal algorithm
    for(int i=0;i<6;i++)
    {
        printf("%d\n",rollno[i]);
    }

    return 0;
}