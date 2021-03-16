#include <stdio.h>
#include <stdlib.h>

int maxsimum(int a[], int l, int r)
{
    if (r - l == 1)
        return a[l];
    int m = (l + r) / 2;
    int u = maxsimum(a, l, m);
    int v = maxsimum(a, m, r);
    return u > v ? u : v;
}
int main()

{
    int a[] = {34, 23, 45, 56, 30, 31, 57, 33, 55, 10};
    int n = sizeof(a) / sizeof(int);

    printf("%d\n",maxsimum(a, 0, n));

    return 0;
}