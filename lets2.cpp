#include "middle.h"
int itc_max_num(long long a1){
    int a2,a3,a4,a5;
    a5=0;
    a1=a1*10;
if (a1<0){a1=-1*a1;} 
    while (a1>0){
    a2=a1%10;
    a3=a1/10%10;
    if (a2>a3){
        a4=a2;
    } else {
    a4=a3;
    }
    if (a4>a5){
        a5=a4;
    } else {
    a5=a5;}
    a1=a1/100;
    }
    return a5;
}
int itc_min_num(long long a1){
    int a2,a3,a4,a5;
    a5=0;
    if (a1<0){a1=-1*a1;} 
    while (a1>0){
    a2=a1%10;
    a3=a1/10%10;
    if (a2>a3){
        a4=a3;
    } else {
    a4=a2;
    }
    if (a4>=a5){
        a5=a5;
    } else {
    a5=a4;}
    a1=a1/100;
    }
    return a5;
}
int itc_rev_num(long long a1){
    return itc_len_num(itc_reverse_num(a1));
}


int itc_null_count(long long a1){
    int a2=0;
    if (a1==0)
        return 1;

    if (a1<0)
        a1*=-1;
    while (a1>0){
        if (a1%10==0)
            a2++;
        a1/=10;
    }
    return a2;
}
bool itc_mirror_num(long long a1){
    return itc_reverse_num(a1)==a1;
}
