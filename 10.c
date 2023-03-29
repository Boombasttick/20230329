#include <stdio.h>
void bullle_sort(int arr1[],int sz)
{
    int i=0;
    int j=0;
    // int flag=1;
    for (i=0;i<sz-1;i++)
    {
        int flag=1;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int tem=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=tem;
                flag=0;
            }
        }
        if(flag==1)
        {
            break;
        }
    }

}
int main()
{
    int arr[]={10,3,5,2,6,9,4,7,8};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int k=0;
    bullle_sort(arr,sz);
    for(k=0;k<sz;k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}
