// Here goes stack data structure logic
#include <stdio.h>
int stack[10], top=-1;
void push();
int main(int argc, char const *argv[])
{
    /* code */
    printf("here i will call push function\n");
    push();
    return 0;
}

void push()
{
    int item;
    printf("enter the element to push\n");
    scanf("%d",&item);
    stack[++top]=item;
}

int pop()
{

    
}