#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Determines if a nu,mber is postive , negative or zero.
 *
 * Return : Always 0 (Success)
 * /
 int  main(void)
 {
 	int n;

	srand(time(0));
	n = rand() - RAND- MAX / 2;	
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("% is zero\n",n);
	}
	else
	{
		printf("%d is negative\n",n);
	}
	returen (0);
}