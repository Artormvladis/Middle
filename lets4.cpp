#include "middle.h"
int itc_rev_bin_num(long long a1){
    long long a2,a3;
    a2=0;
    a3=0;
    while (a1>0){
        a2+=a1%10*itc_pow(2,a3);
        a3++;
        a1/=10;
    }
    return a2;
}