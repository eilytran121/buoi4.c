#include <stdio.h>

int main() {
    int i=0;
    int m=6;
    int n=5;
    m = --n;
    printf("Values of m (--n): %d\n" ,m);
    n = i++;
    printf("Values of n (i++): %d\n" ,n);
    i = m++;
    printf("Values of i (m++): %d\n ",i);
    n = m;
    printf("Values of n (m): %d\n ", m);
    m = i--;
    printf("Values of m (i--): %d\n ", i);
    n = i++ * m++;
    printf("Values of n (i++ * m++): %d\n ",n);
    return 0;
}
