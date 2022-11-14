#include "middle.h"
int itc_second_max_num(long long a1) {
    int a2,a3;
    a3=itc_max_num(a1);
    a2=0;
    if(a1<0)
        a1=-a1;
    if (a1<10)
        return -1;
    while(a1>0){
        if(a2<a1%10 && a1%10!=a3)
            a2=a1%10;
        if(a1%10==a3)
            a3=10;
        a1=a1/10;
    }
    return a2;
}
int itc_second_simple_max_num(long long a1) {
    if(itc_second_max_num(a1)==itc_max_num(a1))
        return -1;
    return itc_second_max_num(a1);
}
long long itc_bin_num(long long a1){
    long long a2;
    a2=1;
    while(a1)
    {
        a2*=10;
        a2+=(a1%2);
        a1/=2;
    }
    return itc_reverse_num(a2)/10;
}
long long itc_oct_num(long long a1){
    long long a2;
    a2=1;
    while(a1)
    {
        a2*=10;
        a2+=(a1%8);
        a1 /= 8;
    }
    return itc_reverse_num(a2)/10;
}
double itc_pow(int a1, int a2) {
    double a3;
    a3=1;
    long long a4;
    if (a2<0)
        a4=-1*a2;
    else
        a4=a2;
    for (long long i=0;i<a4;++i)
        a3*=a1;
    if (a2<0)
        a3=1/a3;
    return a3;
}
