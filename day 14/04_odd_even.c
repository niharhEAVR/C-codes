// wap to read an array of 10 integer and count total no 
// of odd number and even number 
#include <stdio.h>
int main()
{
    int arr[10];
    int even=0,odd=0;
    printf("Enter the numbers:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total no of odd number is: %d\n",odd);
    printf("total no of even number is: %d\n",even);
  
    return 0;
}