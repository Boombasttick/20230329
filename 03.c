#include <stdio.h>

int main()
{
    (*(void (*)()) 0) ( )
    //把0强制类型转换为：void(*)()函数指针类型，0就是一个函数的地址
    //调用0地址处的该函数

   
   void (* signal(int , void(*)(int) )) (int);
   //signal是一个函数声明
   //signal函数的参数有两个，一个是int,一个是函数指针，该函数指针指向的函数参数是int，返回值类型是void
   //signal函数的返回类型是函数指针，该函数指针指向的函数参数是int，返回值类型是void
    //简化：
    //typedef void(*AAA)(int)
    //AAA signal(int , AAA)
    return 0;
}