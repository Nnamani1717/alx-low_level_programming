#include <stdio.h>

int main(void)

{

        char  ch;

clrscr();

        printf(“Print all lower letters followed by al uppercase letters on the next line :\n”);

        /* print lowercase letters */

        for (ch = ‘a’; ch <= 'z’; ch ++)

           putchar(ch);

             /* print uppercase letters */

             for (ch = ‘A’; ch <= ‘Z’; ch ++)

                  putchar(ch);

              putchar(‘\n’);

                return (0);
}
