#ifndef FIBRAND_H
#define FIBRAND_H
#include <math.h>
int fibrand(int nseed1, int nseed2, int ntimes) {
    int nfib = 0;
    int nfib1 = nseed1;
    int nfib2 = nseed2;

    for (int iii = 0; iii < ntimes; iii++)
    {
        nfib = nfib1 + nfib2;
        nfib1 = nfib2;
        nfib2 = nfib;
    }

    return nfib;
}
#endif
