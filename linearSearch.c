#include <stdio.h>

// int linearSearch(int arr[], int size, int element)
// {
//     for(int i = 0; i<size; i++)
//     {
//         if(arr[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;

// }

// int main()
// {
//     int arr[] = {1,5,6,8,9,4,3};
//     int size = sizeof(arr)/sizeof(int);
//     int element = 9;
//     int result = linearSearch(arr,size,element);
//     printf("The %d element is found at %d index.",element, result);
//     return 0;
// }

// #include <stdio.h>

// int linearSearch(int arr[], int size, int element)
// {
//     for(int i = 0; i<size; i++)
//     {
//         if(arr[i]== element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int binarySearch(int arr[], int size, int element){
//     int low, mid, high;
//     low = 0;
//     high = size -1;
//     while(low<=high){
//         mid = (low + high)/2;
//         if(arr[mid] == element)
//         {
//             return mid;
//         }
//         if(arr[mid] < element)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid -1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int choice, result, arrLength, element;
//     int arr[50];
//     int size = sizeof(arr)/sizeof(int);
//     printf("1. Linear Search \n 2. Binary Search\n");
//     printf("Enter your choice : ");
//     scanf("%d", &choice);
//     printf("Enter the Length of Array : ");
//     scanf("%d", &arrLength);
//     printf("Enter the element of array :\n");
//     for(int i = 0; i<arrLength; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter element which you want to search : ");
//     scanf("%d", &element);
//     switch (choice)
//     {
//     case 1:
//         result = linearSearch(arr, size, element);
//         printf("%d element found at %d index. => by Linear Search", element, result);
//         break;
//     case 2 :
//         result = binarySearch(arr, size, element);
//         printf("%d element found at %d index. => by Binary search", element, result);
//         break;
//     default:
//         printf("Invalid Entry.");
//         break;
//     }
    
//     return 0;

// }

int linearSearch(int arr[], int size, int element)
{
    for(int i = 0; i<size; i++)
    {
        if(arr[i]==element)
    {
        return i;
    }
    }
    
    return -1;
}
int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        if(arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid -1 ;
        }
    }
    return -1;
}
int main()
{
    int arr[50] = {4, 6, 8, 10, 12, 14,16};
    int size = sizeof(arr)/ sizeof(int);
    int element = 8;
    int result = linearSearch(arr, 5, 10);
    printf("Element %d found at %d index", element, result);
    // return 0; 

}