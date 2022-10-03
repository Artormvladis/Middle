#include "middle.h"
int itc_min_num(long long a1){
    int a2,a3,a4,a5;
    a5=0;
    if (a1<0)
            a1 = a1*(-1);
    else
        a1 = a1;
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
