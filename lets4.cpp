#include "middle.h"
int itc_rev_bin_num(long long a1){
    long long a2,a3;
    a2=0;
    a3=0;
    while (a1>0){
        a2+=a1%10*itc_pow(2,a3);
        a3++;
        a1=a1/10;
    }
    return a2;
}
int itc_mirror_count(long long a1){
    int a2=0;
    for (long long i=1;i<=a1;++i){
        if (itc_mirror_num(i))
            a2++;
    } 
    return a2;
}
int itc_rev_oct_num(long long a1){
    long long a2=0, a3=0;
    while (a1<0){
        a2+=a1%10*itc_pow(8, a3);
        a3++;
        a1/=10;
    }
    return a2;
}
