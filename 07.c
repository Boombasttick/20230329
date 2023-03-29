#include <stdio.h>
//回调函数

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
void Calc(int (*arr)(int x,int y))
{
    int x=0;
    int y=0;
    printf("input number:>\n");
    scanf("%d %d",&x,&y);
    printf("%d\n",arr(x,y));
}
int main()
{
    int input = 0;
    do
    {
        menu();
        printf("input:>\n");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            Calc(ADD);
            break;
        case 2:
            Calc(SUB);
            break;
        case 3:
            Calc(MUL);
            break;
        case 4:
            Calc(DIV);
            break;
        case 0:
            printf("exit!!\n");
            break;
        default:
            printf("again!!\n");
            break;
        }
    } while (input);
    return 0;
}
