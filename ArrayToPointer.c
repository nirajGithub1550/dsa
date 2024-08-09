// #include<stdio.h>
// int main()
// {
//     int data[5];
//     printf("Enter Elements : ");
//     for(int i = 0; i<5; ++i)
//         scanf("%d", data + i);

//     printf("You entered : \n");
//     for(int i = 0; i<5; ++i)
//     printf("%d\n", *(data + i));
//     return 0;
// }

#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
