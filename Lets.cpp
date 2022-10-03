#include "middle.h"
void itc_num_print(int a1){
    cout<<a1;
}
int itc_len_num(long long a1){
    int a2;
    a2=0;
    if (a1==0){
        return 1;
    } else {
        if (a1<0){
            a1=a1*(-1);
        }else{
                a1=a1;
        }
        while(a1>0){
            a1=a1/10;
            a2=a2+1;
        }
    }
    return a2;
}
int itc_sum_num(long long a1){
    int a2,a3;
    a2=0;
    a3=0;
    while (a1>0){
        a2=a1%10;
        a3=a3+a2;
        a1=a1/10;
    }
    return a3;
}
long long itc_multi_num(long long a1){
    int a2,a3;
    a2=1;
    a3=1;
    while (a1>0){
        a2=a1%10;
        a3=a3*a2;
        a1=a1/10;
    }
    return a3;
}
int itc_max_num(long long a1){
    int a2,a3,a4,a5;
    a5=0;
    a1=a1*10;
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
