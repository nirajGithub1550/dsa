// // Linear Search in C

// #include <stdio.h>

// int search(int array[], int n, int x) {
  
//   // Going through array sequencially
//   for (int i = 0; i < n; i++)
//     if (array[i] == x)
//       return i;
//   return -1;
// }

// int main() {
//   int array[] = {2, 4, 0, 1, 9};
//   int x = 1;
//   int n = sizeof(array) / sizeof(array[0]);

//   int result = search(array, n, x);

//   (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
// }

// #include <stdio.h>  
  
// int binary_search(int arr[], int left, int right, int target) {  
//     while (left <= right) {  
//         int mid = left + (right - left) / 2;  
  
//         if (arr[mid] == target) {  
//             return mid;  
//         } else if (arr[mid] < target) {  
//             left = mid + 1;  
//         } else {  
//             right = mid - 1;  
//         }  
//     }  
  
//     return -1;  // Target not found  
// }  
  
// int main() {  
//     int arr[] = {1, 3, 5, 7, 9};  
//     int n = sizeof(arr) / sizeof(arr[0]);  
//     int target = 7;  
//     printf("size arr 1 =====> %d\n", sizeof(arr[1]));
//     printf("size arr =====> %d\n", sizeof(arr));
//     printf("size of array ==> %d\n", n);

//     int index = binary_search(arr, 0, n - 1, target);  
  
//     if (index == -1) {  
//         printf("Target not found\n");  
//     } else {  
//         printf("Target found at index %d\n", index);  
//     }  
  
//     return 0;  
// }  


// #include <stdio.h>

// int linearSearch(int arr[], int n, int x)
// {
//     for(int i = 0; i<n; i++)
//         if(arr[i] == x)
//             return i;
//             return -1;
// }
// int main()
// {
//     int arr[] = {4, 5, 6, 7, 8, 9, 10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x = 7;
//     int result = linearSearch(arr, n, x);
//     printf(" Target Found at %d index ", result);
// }
#include <stdio.h>

// int binarySearch(int arr[], int left, int right, int x)
// {
//     while(left <= right)
//     {
//         int mid = left + (right - left)/2; 
//         if(arr[mid] == x)
//         {
//             return mid;
//         }
//         else if(arr[mid] <= left)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             left = mid - 1;
//         }
//         // return 0;
//     }
//     return -1;
// }
// int linearSearch(int arr[], int x, int size)
// {
//     for(int i = 0; i<size; i++)
//     if(arr[i] == x)
//     return i;
//     return -1;
// }
// int main()
// {
//     int arr[] = {4,7,8,9,5,2};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int x = 9;
//     // int result = binarySearch(arr, 0, size -1, x);
//     int result = linearSearch(arr,x, size);
//     // if(result == -1){
//     //     printf("Target not found"); 
//     // }
//     // else
//     // {
//        printf("Target found at %d index.", result);
//     // }
//     return 0;
// }

// #include <stdio.h>

// int binarySearch(int arr[], int left, int right, int x)
// {
//     while (left <= right)
//     {
//         int mid = left + (right-left) / 2;

//         if(arr[mid] == x)
//         {
//             return mid;
//         }
//         else if(arr[mid] <= left){
//             left = mid + 1;
//         }
//         else
//         {
//             left = mid - 1;
//         }
//         // return 0;
        
//     }
//     return -1;
    
// }

// int binarySearch(int arr[], int left, int right, int x)
// {
//     while(left <= right)
//     {
//         int mid = left + (right - left)/2; 
//         if(arr[mid] == x)
//         {
//             return mid;
//         }
//         else if(arr[mid] <= left)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             left = mid - 1;
//         }
//         // return 0;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int x = 40;
//     int result = binarySearch(arr, 0, size - 1, x);
//     printf("Target found at %d index.", result);
//     return 0;
// }


