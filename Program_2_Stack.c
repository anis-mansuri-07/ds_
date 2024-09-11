#include <stdio.h>
#define max 5
int top = -1, stack[max];

void push();
void pop();
void display();
void peep();
void modify();

int main()
{

    int choice = 0;
    printf("1.Push 2.Pop 3.Peek 4.Display 5.Modify 6.Exit..\n");
    while (choice != 6)
    {
        printf("Enter your choice:: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 5:
            modify();
            break;
        case 6:
            printf("thank you..");
            break;

        default:
            printf("Enter valid choice.\n");
            break;
        }
    }
    return 0;
}

void push()
{
    int ele;
    if (top == max - 1)
    {
        printf("Stack is full.\n");
    }
    else
    {
        printf("Enter ele:: ");
        scanf("%d", &ele);
        printf("%d is pushed\n", ele);
        stack[++top] = ele;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("stack is empty..\n");
    }
    else
    {
        printf("%d is poped\n", stack[top]);
        top--;
    }
}

void peep()
{
    if (top == -1)
    {
        printf("stack is empty..\n");
    }
    else
    {
        printf("%d is top ele\n", stack[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("stack is empty..\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
        printf("\n");
    }
}

void modify(){
    int j,k,count=1;
    if(top==-1){
        printf("Stack is empty..\n");
    }else{
        
        printf("Enter value want to modify..");
        scanf("%d",&j);
        for(int i=0;i<=top;i++){
            if(j==stack[i]){
                printf("Now enter new value..");
                scanf("%d",&k);
                stack[i]=k;
                printf("value modify from %d to %d\n",j,k);
                return;
               // break;
            }
            //count++;
        
        }
        
        //if(count==1){
        printf("Value %d is not found in stack..\n",j);
            
        }
    }
    

