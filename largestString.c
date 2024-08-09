#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
// // int main()
// // {
// //     char string[100], word[20], max[20], min[20], c;
// //     int i = 0, j = 0, flag = 0;
 
// //     printf("Enter string: ");
// //     i = 0;
// //     do
// //     {
// //         fflush(stdin);
// //         c = getchar();
// //         string[i++] = c;
 
// //     } while (c != '\n');
// //     string[i - 1] = '\0';
// //     for (i = 0; i < strlen(string); i++)
// //     {
// //         while (i < strlen(string) && !isspace(string[i]) && isalnum(string[i]))
// //         {
// //             word[j++] = string[i++];
// //         }
// //         if (j != 0)
// //         {
// //             word[j] = '\0';
// //             if (!flag)
// //             {
// //                 flag = !flag;
// //                 strcpy(max, word);
// //                 strcpy(min, word);
// //             }
// //             if (strlen(word) > strlen(max))
// //             {
// //                 strcpy(max, word);
// //             }
// //             if (strlen(word) < strlen(min))
// //             {
// //                 strcpy(min, word);
// //             }
// //             j = 0;
// //         }
// //     }
// //     printf("The largest word is '%s' and smallest word is '%s' in '%s'.\n", max, min, string);
 
// //     return 0;
// // }

// #include<stdio.h>
// #include<string.h>
// main()
// {
//     int i=0,j=0,k=0,a,minIndex=0,maxIndex=0,max=0,min=0;
//     char str1[100]={0},substr[100][100]={0},c;
//     printf("Enter a sentence\n");
//     gets(str1);
//     while(str1[k]!='\0')//for splitting sentence
//     {
//         j=0;
//         while(str1[k]!=' '&&str1[k]!='\0')
//         {
//             substr[i][j]=str1[k];
//             k++;
//             j++;
//         }
//         substr[i][j]='\0';
//         i++;
//         if(str1[k]!='\0')
//         {
//             k++;
//         }
//     }
//     int len=i;
//     max=strlen(substr[0]);
//     min=strlen(substr[0]);
//     //After splitting getting length of string and finding its index having max length and index having min length
//     for(i=0;i<len;i++)
//     {
//        a=strlen(substr[i]);
//        if(a>max)
//         {
//             max=a;
//             maxIndex=i;
//         }
//         if(a<min)
//         {
//             min=a;
//             minIndex=i;
//         }
//     }
//   printf("Largest Word is %s \nSmallest word is %s\n",substr[maxIndex],substr[minIndex]);

// }


 int main()
{
    char na[100], sna[10][20];
    int i, j = 0, k = 0, m = 0, n = 0, max, min;
    printf("Enter Line of String : \n");
    gets(na);
    for(i=0; na[i] =! NULL; i++)
    {
        if(na[i] == ' ')
        {
            sna[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            sna[k][j] = na[i];
            j++;
        }
    }
    sna[k][j] = '\0';
    max = strlen(sna[0]);
    min = strlen(sna[0]);
    for(i = 0; i<=k; i++)
    {
        if(max<strlen((sna[i])))
        {
            m = i;
        }
        if(min>strlen(sna[i]))
        {
            n = i;
        }
    }
    printf("Largest Word = %s and Smallest Word =%s in", sna[m], sna[n]);
    // getch();
    return 1;
}