#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    printf("Enter a word: ");
    gets(word);
    
    int length=strlen(word);
    int flag=0;
    for(int i=0;i<length;i++){
        if((word[i])!=(word[length-i-1])){
            flag =1;
            break;
        }
    }
    if(flag==1){
        printf("This is not palindrome string.");
    }else{
        printf("This is palindrome string.");
    }
    
    return 0;
}