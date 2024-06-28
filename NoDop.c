#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
double *left_shift ( double *arr, int *o )
{
    for ( double *p = arr; p < arr + *o - 1; p++ )
        *p = *(p+1);
    (*o)--;
    return arr;
}
bool check ( double *whoe, int r )
{
    for ( double *p = whoe + 1; p < whoe + r; p++ )
        if ( *p == *whoe )
            return true;
    return false;
}
//I'm tryna put you in the worst mood, i
void rem ( double **whiggarry, int *u )
{
    if ( *whiggarry == NULL ) exit(1);
    // House so empty, need a centerpiece
    for ( double *p = *whiggarry; p < *whiggarry + *u - 1; ++p ) {
            if ( check ( p, *u) ) {
                p = left_shift ( p, u );
                p--;
            }
    }
    *whiggarry = ( double * ) realloc ( *whiggarry, *u * sizeof(double) );
    if ( *whiggarry == NULL ) exit(1);
}
void prnt ( double *niro, int g )
{
    printf(" [");
    for ( double *p = niro; p < niro + g; ++p )
        printf("%.2lf ", p - niro, *p);
    printf("\b]");    
}
void scnr ( double **bitc, int h )
{
    *bitc = ( double * ) malloc ( h * sizeof(double) );
    for ( double *p = *bitc; p < *bitc + h; ++p ) {
        printf("\n V[%ld] = ", p - *bitc);
        scanf("%lf", p);
    }
}
int main()
{
    double *niggarry;
    int n;
    printf(" enter a mf number: ");
    scanf("%d", &n);
    scnr(&niggarry, n);
    puts(" arr before:");
    prnt(niggarry, n);
    rem( &niggarry, &n );
    //I'm a fuckin starboy
    puts("\n arr after:");
    prnt(niggarry, n);
    free(niggarry);
    niggarry = NULL;
    return 0;
}
