#include <stdio.h>
#define MAX 50
int stack1[50], stack2[50];
int top1 = -1, top2 = -1;
int count1 = 0, count2 = 0;

void push1(int val)
{
    if (top1 == MAX - 1)
    {
        printf("\n Stack is full\n");
    }
    else
    {
        top1 = top1 + 1;
        stack1[top1] = val;
    }
}

int pop1()
{
    if (top1 == -1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        int del = stack1[top1];
        top1 = top1 - 1;
        return del;
    }
}
void push2(int val)
{
    if (top2 == MAX - 1)
    {
        printf("\nStack is full\n");
    }
    else
    {
        top2 = top2 + 1;          
        stack2[top2] = val; 
        count2 = count2 + 1;
    }
}

int pop2()
{
    int element = stack2[top2]; 
    top2 = top2 - 1;   
    return element;             
}
void enqueue(int x)
{
    push1(x);
    count1 = count1 + 1;
}
void dequeue()
{
    if ((top1 == -1) && (top2 == -1))
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        for (int i = 0; i < count1; i++)
        {
            int num = pop1();
            push2(num);
        }
         pop2();
        printf("\n");
        count2--;
        for (int i = 0; i < count2; i++)
        {
            int a = pop2();
            push1(a);
        }
    }
    
}
void display()
{
    for (int i = 0; i <= top1; i++)
    {
        printf("%d ", stack1[i]);
    }
}
void peek()
{
    if(top1 == -1)
        printf("Queue is empty\n");
    else
    {
       printf("%d",stack1[top1]); 
    }
}
int main()
{
    enqueue(7);
    enqueue(0);
    enqueue(4);
    enqueue(9);
    printf("Queue view after enqueue:");
    display();
    dequeue();
     printf("Queue view after dequeue:");
     display();
     printf("\n");
    enqueue(1);
     printf("Queue view after enqueue:");
    display();
    printf("\n");
    printf("Peek element of Queue : ");
    peek;
    
    return 0;
}