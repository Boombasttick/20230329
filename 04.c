#include <stdio.h>
//函数指针数组
int ADD(int x,int y)
{
    return x+y;
}
int SUB(int x,int y)
{
    return x-y;
}
int MUL(int x,int y)
{
    return x*y;
}
int DIV(int x,int y)
{
    return x/y;
}
int main()
{
    //int (*pa)(int,int)=ADD; //SUB/MUL/DIV
    int (*paAA[4])(int,int)={ADD,SUB,MUL,DIV}; //函数指针数组
    int i=0;
    for (i=0;i<4;i++)
    {
        printf("%d\n",*paAA[i](6,3));
    }
    return 0;
}