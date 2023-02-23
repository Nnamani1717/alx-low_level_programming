#include<stdio.h>
#include<complex.h>

void main(){
    double complex s = 3.14 + 5.14*I;
    printf("\ns is: %f + %f i", creal(s), cimag(s));
    double complex S = conj(s);
    printf("\nConjugate of s is: %f + %f i", creal(S), cimag(S));
}

/*
printf("\nConjugate of s is: %f ", creal(S))
if cimag(S) > 0
    printf("+ %f i", cimag(S))
else
    printf("- %f i", abs(cimag(S)))
*/
