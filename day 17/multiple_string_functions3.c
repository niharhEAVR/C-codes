#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter the First string: ");
    gets(s1);
    printf("Enter the Second string: ");
    gets(s2);

    // one of the string function = compare
    if(strcmp(s1,s2) == 0){
        printf("both string are equal\n");
    }else{
        printf("string are not equal\n");
    }

    /* one of the string function = copy paste source string 
                                    to destination string   */
    strcpy(s1,s2);
    printf("string = %s\n",s1); 



    // one of the string function = reverse
    printf("the reverse of s1 = %s\n",strrev(s1));


    return 0;
}