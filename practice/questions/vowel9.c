#include<stdio.h>
#include<string.h>
int main()
{
    char vowel[100];
    printf("Enter the string: ");
    gets(vowel);
    int length =strlen(vowel);
    int count =0;
    for(int i=0;i<length;i++){
        if(vowel[i]=='a'||vowel[i]=='i'||vowel[i]=='o'||vowel[i]=='e'||vowel[i]=='u'||vowel[i]=='A'||vowel[i]=='I'||vowel[i]=='O'||vowel[i]=='E'||vowel[i]=='U'){
            count ++;
        }
    }
    printf("%s has %d vowels",vowel,count);

    return 0;
}