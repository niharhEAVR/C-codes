// Program to convert the string into lowercase or 
// uppercase using string function and manually

/*
		indranil = INDRANIL -> strupr(string)
		INDRANIL = indranil -> strlwr(string)
*/

#include <stdio.h>
int main()
{
    /*
    //using string function -> #include<string.h>
	char s[100];
	puts("Enter a string: ");
	gets(s);
	printf("UPPER case to LOWER case: %s\n",strlwr(s));
	printf("LOWER CASE TO UPPER case: %s",strupr(s));
    */

	// withour using string function or manually
	char s[100];
	int i;
	printf("Enter a string: ");
	scanf("%[^\n]s",s);
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]>='a' && s[i]<='z'){
			s[i] = s[i] - 32;
		}
		else if(s[i]==32){
			s[i]=s[i];
		}
		else{
			s[i] = s[i] + 32;
		}	
	}
	printf("string is: %s", s);

    return 0;
}