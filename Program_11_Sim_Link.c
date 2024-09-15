// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node{
    struct node* next;
    int data;
};

void insert(struct node **head){
    
    struct node *new ;
    int ele;
    new = (struct node *)(malloc(sizeof(struct node)));
    if(!new){
        printf("memory allocation failed\n");
        return;
    }else{
        printf("Enter ele:  ");
        scanf("%d",&ele);
        if(*head==NULL){
            new->data=ele;
            new->next=NULL;
            *head = new;
        }else{
            new->data=ele;
            new->next = *head;
            *head = new;
        }
        printf("%d is insrted\n",new->data);
    }
}


void delete(struct node **head){
    //int ele;
    if(*head==NULL){
        printf("Empty..\n");
        return;
    }else{
        struct node *new;
        new = *head;
        printf("%d is deleted\n",new->data);
        *head = new->next;
        free(new);

        
    }
}

void  modify(struct node *head){
    int ele,nele;
    if(head==NULL){
        printf("Emoty..\n");
    }else{
        printf("Enter changing num:: ");
        scanf("%d",&ele);
        while(head!=NULL){
            if(head->data==ele){
                printf("Enter new value:: ");
                scanf("%d",&nele);
                head->data=nele;
                printf("modify to %\n");
                return;
            }else{
                head = head->next;
            }
        }
        printf("Not found\n");
    }
}

void display(struct node *head){
    if(head==NULL){
        printf("Empty..\n");
    }else{
        while(head!=NULL){
            printf("%d>",head->data);
            head = head->next;
        }
        printf("NULL\n");
    }
}

int main(){
    int choice  = 0;
    struct node *head = NULL;
    while(choice!=5){
        printf("Enter choice::");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert(&head);
            break;
            case 2: delete(&head);
            break;
            case 3: modify(head);
            break;
            case 4: display(head);
            break;
            case 5: printf("Thank you..");
            break;
          default:printf("enter valid Choice..\n");
          break;
        }
    }
    
}
