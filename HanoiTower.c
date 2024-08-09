#include <stdio.h>
#include <conio.h>

// int main()
// {
//     // clrscr();
//     int n;
//     char A = 'A', B = 'B', C = 'B';
//     void hanoi(int, char, char, char);
//     printf("Enter the number of disks. ");
//     scanf("%d", &n);
//     printf("\n \n Tower of Hanoi problem with %d disks.", n);to
//     hanoi(n, A,B,C);
//         printf("\n");
//         getch();

// }
//     void hanoi(int n, char A, char B, char C)
//     {
//         if(n != 0)
//         {
//             hanoi(n-1, A,C,B);
//             printf("Move disk %d from %c to %c\n", n, A, C);
//             hanoi(n-1, B, A, C);
//         }
//     }

// void hanoi(int, char, char, char);

// void main()
// {
//     // clrscr();
//     int n = 3;
//     hanoi(n, 'A','B','C');
//     getch();
// }
// void hanoi(int n, char beg, char aux, char end)
// {
//     if(n>=1){
//         hanoi(n-1, beg, end, aux);
//         printf("%d %c to %c\n", n, beg, end);
//         hanoi(n-1, aux, beg, end);
//     }
// }

// void hanoi(int, char, char, char);

// void main()
// {
//     printf("Enter no of disk : ");
//     int n;
//     scanf("%d", &n);
//     hanoi(n, 'A', 'B', 'C');
//     // getch();
// }
// void hanoi(int n, char beg, char aux, char end)
// {
//     if(n>=1)
//     {
//         hanoi(n-1, beg, end, aux);
//         printf("%d %c to %c\n", n, beg, end);
//         hanoi(n-1, aux, beg, end);
//     }
// }

// void hanoi(int , char, char, char);
// void main()
// {
//     printf("Enter the no of disks : ");
//     int n;
//     scanf("%d", &n);
//     hanoi(n, 'A', 'B', 'C');

// }
// void hanoi(int n, char beg, char aux, char end)
// {
//     if(n>=1)
//     {
//         hanoi(n-1, beg, end, aux);
//         printf("%d %c to %c \n", n, beg, end);
//         hanoi(n-1, aux, beg, end);
//     }
// }

void hanoi(int, char, char, char);

void main()
{
    int n = 3;
    hanoi(n, 'A', 'B', 'C');

}
void hanoi(int n, char beg, char aux, char end)
{
    if(n>=1){
        hanoi(n-1, beg, end, aux);
    printf("%d %c to  %c\n", n, beg, end);
    hanoi(n-1, aux, beg, end);
    }
}