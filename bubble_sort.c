#include <stdio.h>
#include <stdlib.h>
// void bubble_sort();
// int main()
// {
//     int arr[] = {34, 15, 29, 8};
//     int i;
//     bubble_sort(arr, 4);
//     for (i = 0; i <= 4-1; i++)
//         printf("%d ", arr[i]);
// }
// void bubble_sort(int arr[], int n)
// {
//     int round, i, temp;
//     for (round = 1; round <= n - 1; round++)
//         for (i = 0; i <= n - 1 - round; i++)
//             if (arr[i] > arr[i + 1])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
// }

// void bubble_sort();
// int main()
// {
//     int arr[] = {34, 15, 29, 8};
//     int i;
//     bubble_sort(arr, 4);
//     for(int i = 0; i<=4-1; i++)
//     printf("%d ", arr[i]);
// }

// void bubble_sort(int arr[], int n)
// {
//     int round, i, temp;
//     for(round = 1; round<=n-1; round++)
//     for(i=0; i<=n-1-round; i++)
//     if(arr[i]>arr[i+1])
//     {
//         temp = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1] = temp;
//     }
// }
// void bubble_sort(); 
// int main()
// {
//     int arr[] = {45, 20, 47, 23};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     // int n = 4;
//     bubble_sort(arr, n);
//     printf("Array in Bubble sort : ");
//     for(int i = 0; i<n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// void bubble_sort(int arr[], int n)
// {
//     int round, i, temp;
//     for(round=1; round<=n-1; round++)
//     for(i=0; i<=n-1-round; i++)
//     if(arr[i]>arr[i+1])
//     {
//         temp = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1] = temp;
//     }
// }

void bubble_sort(int arr[], int n);
int main()
{
    int arr[] = {47, 8, 55, 96, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    printf("Element after bubble sort : ");
    for(int i = 0; i<=n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void bubble_sort(int arr[], int n)
{
    int i, round, temp;
    for(round = 1; round<=n-1; round++)
    for(i=0; i<=n-1-round; i++)
    if(arr[i]>arr[i+1])
    {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}