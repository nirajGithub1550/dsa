// #include <stdio.h>

// void T(n)
// {
//     if(n>0)
//     {
//         T(n-1)
//         {
//             printf("%d", n);
//         }
        
//     }
// }

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void exit();
int main()
{
    static int i = 1;
    if(i>10)
    {
        getch();
        exit(0);
    }
    else
    {
        printf("%d\n", i);
        i++;
    }
    main();
}
