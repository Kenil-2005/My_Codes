#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void peep(void);
int main()
{
    top=-1;
    printf("\nEnter the size of STACK : ");
    scanf("%d",&n);
    printf("\n STACK OPERATIONS USING ARRAY");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.Peep\n 5.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                peep();
                break;
            }
            case 5:
            {
                printf("\nExiting...");
                break;
            }
            default:
            {
                printf ("\n Please Enter a Valid Choice(1/2/3/4)");
            }
                 
        }
    }
    while(choice!=5);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK is over flow");
         
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n Stack is under flow");
    }
    else
    {
        printf("\nThe popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
        {
            printf("\n%d",stack[i]);
        }
    }
    else
    {
        printf("\n The STACK is empty");
    }
}

void peep()
{
    if (top>=0)
    {
        printf("Enter position :\n");
        scanf("%d",&i);
        printf("%d",stack[i-1]);
    }
    else
    {
        printf("Stack is under flow\n");
    }
    
}