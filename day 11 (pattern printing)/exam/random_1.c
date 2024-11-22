/*
    1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9
*/

#include<stdio.h>
int main(){
    int num = 0;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" %d",++num);
        }
        num = i;
        printf("\n");
    }

    return 0;
}



/*
    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
*/
// #include<stdio.h>
// int main(){
//     int num = 0;
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf(" %d",i-j+1);
//         }
//         num = i;
//         printf("\n");
//     }

//     return 0;
// }







/*
    a a a a a a
    b b b b b b
    c c c c c c
    d d d d d d
    e e e e e e
*/
// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 0; j <= 5; j++)
//         {
//             printf(" %c",'a'+i-1);
//         }
//         printf("\n");
//     }

//     return 0;
// }




/*
    a b c d e
    b c d e f
    c d e f g
    d e f g h
    e f g h i
*/

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             printf(" %c",'a'+i+j-2);
//         }
//         printf("\n");
//     }
//     return 0;
// }





/*
 E
 D E
 C D E
 B C D E
 A B C D E
*/

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         char alphabet = 'A'+4-i;
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" %c",++alphabet);
//         }
//         printf("\n");
//     }

//     return 0;
// }