#include <stdio.h>
#include <stdlib.h>

int maxsimum(int a[], int n)
{   
    int m;
    if (m == 0)
        return a[m];
    int m = n-1;
    int u = maxsimum(a,m);
    for(int i = 0; i<n;i++){
        return u > v ? u : v;

    }
}
int main()

{
    int a[] = {34, 23, 45, 56, 30, 31, 57, 33, 55, 10};
    int n = sizeof(a) / sizeof(int);

    printf("%d\n",maxsimum(a,n));

    return 0;
}