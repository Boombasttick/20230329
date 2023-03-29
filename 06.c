#include <stdio.h>

void menu()
{
    printf("**************************\n");
    printf("***** 1.ADD   2.SUB ******\n");
    printf("***** 3.MUL   4.DIV ******\n");
    printf("*****    0. exit    ******\n");
    printf("**************************\n");
}
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
    menu();
    int input = 0;
    int x=0;
    int y=0;
    int (*arr[5])(int,int)={0,ADD,SUB,MUL,DIV};
    do
    {
        printf("input:>\n");
        scanf("%d",&input);
        if(input<=4 && input >= 1)
        {
            printf("input number:>\n");
            scanf("%d %d",&x,&y);
            printf("%d\n",arr[input](x,y));
        }
        else if (input == 0)
        {
            printf("exit\n");
        }
        else
        {
            printf("again\n");
        }
        
    } while (input);

    return 0;
}