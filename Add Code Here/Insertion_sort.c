#include <stdlib.h>
#include <stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void insertion(int arr[])
{
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int j=1;j<n;j++)
    {
        int key = arr[j];
        int i = j-1;
        while(i>-1 && arr[i]>key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}
int main()
{
    int arr[]={3,2,8,1,0};
    insertion(arr);
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}