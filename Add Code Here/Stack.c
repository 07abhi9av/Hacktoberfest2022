#include <stdio.h>
#include<stdlib.h>
//int front=-1;
#define size 5
int top=-1;
int arr[size];
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull()
{
    if(top==size)
    {
        return 1;
    }
    return 0;
}
void push(int x)
{
    if(!isfull())
    {
        arr[++top]=x;
        printf("%s\n","Inserted");
    }
    else
    {
        printf("Stack is full\n");

    }
}
int pop()
{
    int item;
    if(!isempty())
    {
        item=arr[top];
        top=top-1;
        return item;
    }
    else
    {
        printf("Stack is empty\n");
        return 0;
    }


}
void display()
{
    if(!isempty())
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("%s","Stack is empty\n");

    }
}
int main()
{
    int count;
    while(1)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n Enter you Choice:\n");
        scanf("%d", &count);
        switch (count)
        {
            case 1:
                printf("Enter the elements to be inserted\n");
                int x;
                scanf("%d", &x);
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Enter the valid choice\n");
                break;

        }
    }
    return 0;
}
