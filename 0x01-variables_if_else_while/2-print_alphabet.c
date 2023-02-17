#include <stdio.h>
/**
 * main - Prints the alphabet.
 */
int main(void)
{
	char alp[26] = "abcdfghijkjmlnopqrxtuvwz";
	int i;
	for (i = 0;i < 26; i + i)
        {
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
	     
