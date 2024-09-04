// Online C compiler to run C program online
#include <stdio.h>
#define max 5
int stack[max], top1 = -1, top2 = max,choice=0;
void push();
void pop();
void modify();
void display();

int main()
{
    

    printf("1. Push1\n");
    printf("2. Push2\n");
    printf("3. Pop1\n");
    printf("4. Pop2\n");
    printf("5. Modify1\n");
    printf("6. Modify2\n");
    printf("7. Display1\n");
    printf("8. Dispaly2\n");
    printf("9. Exit\n");

    

    while (choice != 9)
    {

        printf("\nEnter Your Choice::  ");
        scanf("%d", &choice);
        

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            push();
            break;
        case 3:pop();
             break;
        case 4:pop();
             break;
        case 5:modify();
             break;
        case 6:modify();
             break;
        case 7:display();
             break;
        case 8:display();
             break;
        case 9:
            printf("Thank You..");
            break;
        default:
            printf("Enter Valid Choice\n");
            break;
        }
    }
    return 0;
}

void push()
{

    if (top2 - top1 == 1)
    {
        printf("Stack is full");
    }
    else
    {
        int ele;
        printf("Enter Element:: ");
        scanf("%d", &ele);
        if (choice == 1)
        {
            top1++;
            stack[top1] = ele;
        }
        else
        {
            top2--;
            stack[top2] = ele;
        }
        printf("%d is insrted..\n", ele);
    }
}

void pop(){
    
    if(choice==3){
        if(top1==-1){
            printf("Stack 1 is empty..\n");
        }else{
            printf("%d is poped..\n",stack[top1]);
            top1--;
        }
    }else{
        
         if(top2==max){
            printf("Stack 2 is empty..\n");
        }else{
            printf("%d is poped..\n",stack[top2]);
            top2++;
        }
    }
    
    
    
    
}

void modify(){
    int ele,j=0;
     if(choice==5){
        if(top1==-1){
            printf("Stack 1 is empty..\n");
        }else{
            
            printf("Enter old element..");
            scanf("%d",&ele);
            for(int i=0;i<=top1;i++){
                if(ele==stack[i]){
                    
                    printf("Enter new element..");
                    scanf("%d",&ele);
                    printf("Modified to %d in stack 1\n",ele);
                    stack[i]=ele;
                    j++;
                    break;
                }
            }
            
        }
    }else{
        
         if(top2==max){
            printf("Stack 1 is empty..\n");
        }else{
            
            printf("Enter old element..");
            scanf("%d",&ele);
            for(int i=max-1;i<=top2;i++){
                if(ele==stack[i]){
                    
                    printf("Enter new element..");
                    scanf("%d",&ele);
                    printf("Modified to %d in stack 2\n",ele);
                    stack[i]=ele;
                    j++;
                    break;
                }
            }
            
        }
    }
    if(j==0){
        printf("%d is not found",ele);
    }
    
    
}

void display(){
    if(choice==7){
        if(top1==-1){
            printf("stack is empty..\n");
        }else{
            for(int i=top1;i>=0;i--){
                printf("%d\n",stack[i]);
            }
        }
        
        
    }else{
        if(top2==max){
            printf("stack is empty..\n");
        }else{
            for(int i=top2;i<max;i++){
                printf("%d\n",stack[i]);
            }
        }
        
    }
}
