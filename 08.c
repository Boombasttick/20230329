#include <stdio.h>
//指向  函数指针数组  的指针


int main()
{
    int arr[10]={0};
    int (*p)[10]=&arr;

    int ( *pfarr[4] )(int , int)={add,sub,mul,div};
    int ( *(*ppfarr)[4] )(int , int)= &pfarr;   
    //ppfarr 是一个数组指针，指针指向的数组有4个元素
    //指向的数组的每个元素的类型是函数指针 int(*)(int , int)
    printf()
    return 0;
}