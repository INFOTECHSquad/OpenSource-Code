#include<stdio.h>

int size,queue[50];
int front=-1;
int rear =-1;

void Enqueue(int x)
{
    if(front==0 && rear==size-1){
        printf("\nQueue is Overflow!!\n");
        return;
    }
    if(front==-1 && rear==-1){
        front=rear=0;
    }
    else if(rear ==size-1 && front!=0){
        rear=0;
    }
    else{
        rear=rear+1;
    }
    queue[rear]=x;
}

void dequeue()
{
    if(front==-1){
        printf("\nQueue is underflow");
        return;
    }
    int val=queue[front];
    printf("\n%d is removed.\n",queue[front]);
    if(front==rear){
        front=rear=-1;
    }
    else{
        if(front==size-1)
            front=0;
        else
            front=front+1;
    }
}

int main()
{
    int val;
    printf("\nEnter size of queue: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter Data: ");
        scanf("%d",&val);
        Enqueue(val);
    }
    dequeue();
    dequeue();
    dequeue();

    return 0;
}