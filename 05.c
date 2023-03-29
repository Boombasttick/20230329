#include <stdio.h>
int main()
{
    char* (*pf)(char*,const char*) = my_strcpy;
    char* (*pfArr[4])(char*,const char*) = my_strcpy;
    return 0;
}