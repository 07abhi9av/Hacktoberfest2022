#include <stdio.h>
#include <stdlib.h>
void conquere(int arr[],int si,int mid,int ei){
    int n = ei-si+1;
    int merge[n];
    int x = 0;
    int index1 = si;
    int index2 = mid+1;
    while(index1 <=mid && index2<=ei) {
        if (arr[index1] <= arr[index2]) {
            merge[x++] = arr[index1++];
        } else {
            merge[x++] = arr[index2++];
        }
    }
    while(index1<=mid){
        merge[x++] = arr[index1++];
    }
    while(index2<=ei){
        merge[x++] = arr[index2++];
    }
    for(int i = 0,j=si;i<n;i++,j++){
        arr[j] = merge[i];
    }
}
void divide(int arr[] , int si , int ei)
{
    if(si>=ei)
        return;
    int mid = si + (ei - si)/2;
    divide(arr,si,mid);
    divide(arr,mid+1,ei);
    conquere(arr,si,mid,ei);

}
int main()
{
    int arr[] = {3,6,1,9,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    divide(arr,0,n-1);
    for(int i = 0;i<n;i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}
