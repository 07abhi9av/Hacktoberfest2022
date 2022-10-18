#include <stdio.h>
#include <stdlib.h>
void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int s,int e);
void quickSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int partition(int arr[],int s,int e)
{
    int pivot = arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    int pivotIndex = s+count;

    swap(&arr[pivotIndex],&arr[s]);
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(&arr[i++],&arr[j--]);
        }
    }
    return pivotIndex;
}
void main()
{
    int arr[] = {2,4,1,0,3,8,5};
    int n = 7;
    quickSort(arr,0,6);
    for(int i=0;i<7;i++)
    {
        printf("%d   ",arr[i]);
    }

}