#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter a number from 1 to 5");
    scanf ("%d",&n);
    switch (n)
    {
        case 1 : printf ("Food Item - French Fries\n");
                 printf ("Price - Rs.99");
                 break;
        case 2 : printf ("Food Item - Burger\n");
                 printf ("Price - Rs.129");
                 break;
        case 3 : printf ("Food Item - Sandwich\n");
                 printf ("Price - Rs.149");
                 break;
        case 4 : printf ("Food Item - Pasta\n");
                 printf ("Price - Rs.179");
                 break;
        case 5 : printf ("Food Item - Pizza\n");
                 printf ("Price - Rs.239");
                 break;
        default : printf ("Invalid Input");
    }
    return 0;
}
