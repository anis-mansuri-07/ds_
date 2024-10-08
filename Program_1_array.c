#include<stdio.h>
int add(int arr[], int Inele);
int Delete(int arr[], int Inele);
int modify(int arr[], int Inele);
void S_search(int arr[], int Inele);
void Display(int arr[], int Inele);
void B_search(int arr[],int Inele);
void sort(int arr[],int Inele);

int main()
{
    int arr[5], element, choice = 0, Inele = -1;
    printf("1. Add \n2. delete \n3. Modify \n4. Simple Search \n5. Display \n6. Binary Search \n7. Sort \n8. Exit");

    while (choice != 8)
    {
        printf("\nEnter Your Choice::  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Inele = add(arr, Inele);
            break;
        case 2:
            Inele = Delete(arr, Inele);
            break;
        case 3:
            modify(arr, Inele);
            break;
        case 4:
            S_search(arr, Inele);
            break;
        case 5:
            Display(arr, Inele);
            break;
        case 6: 
            if(Inele==-1){
              printf("Array is empty..\n");
          }else{
              B_search(arr,Inele);
            }
            
            break;
         case 7:
            if(Inele==-1){
              printf("Array is empty..\n");
          }else{
              sort(arr,Inele);
            }
          break;
         case 8:
            printf("Thank You..");
            break;

        default:
            printf("Entered wrong input\n");
        }
    }
}

int add(int arr[], int Inele)
{

    if (Inele == 4)
    {
        printf("Array is full\n");
    }
    else
    {
        Inele++;
        // int i;
        printf("Enter Element:: ");
        scanf("%d", &arr[Inele]);
        // arr[Inele] = i;
        printf("Ele %d is added\n", arr[Inele]);
    }
    return Inele;
}

int Delete(int arr[], int Inele)
{

    int ele2 = Inele;
    if (Inele == -1)
    {
        ele2++;
        printf("Array is empty\n");
    }else{
        int i;
        printf("Enter Element You Want to delete..: ");
        scanf("%d",&i);
        for(int j=0;j<=Inele;j++){
            if(arr[j]==i){
                printf("%d is Deleted..\n",i);
                for(int k=j;k<Inele;k++){
                    arr[k] = arr[k+1];
                }
                Inele--;
                j--;
                ele2 = -2;
            }
        }
    }
    
    if(ele2==Inele){
        printf("Element Not Found..\n");
    }
    
    

    return Inele;
}

int modify(int arr[], int Inele)
{
    int oldEle; // newEle;
    if (Inele == -1)
    {
        printf("Array is empty..\n");
    }
    else
    {
        printf("Enter old element: ");
        scanf("%d", &oldEle);
        for (int i = 0; i <= Inele; i++)
        {
            if (arr[i] == oldEle)
            {
                printf("Enter new ele:: ");
                scanf("%d", &arr[i]);
            }
        }
    }
    return 0;
}

void S_search(int arr[], int Inele)
{
    int s, count = 0;
    if (Inele == -1)
    {
        printf("Array is empty..\n");
    }
    else
    {
        printf("Enter value for search in array::  ");
        scanf("%d", &s);
        for (int i = 0; i <= Inele; i++)
        {
            if (s == arr[i])
            {
                printf("found that %d is on %dth index\n", arr[i], i);
                count++;
            }
        }
        if (count == 0)
        {
            printf("Value is not there..\n");
        }
    }
}

void Display(int arr[], int Inele)
{
    if (Inele == -1)
    {
        printf("Array is empty..\n");
    }
    else
    {
        for (int i = 0; i <= Inele; i++)
            printf("%d  ", arr[i]);
    }
}

void sort(int arr[],int Inele){
    int arr2[Inele],temp;
   // int Ele2 = Inele;
    for(int i=0;i<=Inele;i++){
        arr2[i]=arr[i];
    }
    // for sort
    for(int i=0;i<Inele;i++)
    {
        for(int j=i+1;j<=Inele;j++)
        {
            if(arr2[i]>arr2[j])
            {
                temp = arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
        printf("%d ",arr2[i]);
    }
    printf("%d\n",arr2[Inele]);
}


void B_search(int arr[],int Inele){
    
    int arr2[Inele],temp,target;
    printf("Enter value for search:: ");
    scanf("%d",&target);
    
    

    for(int i=0;i<=Inele;i++){
        arr2[i]=arr[i];
    }
    // for sort
   // printf("Sorted Array is\n");
    for(int i=0;i<Inele;i++)
    {
        for(int j=i+1;j<=Inele;j++)
        {
            if(arr2[i]>arr2[j])
            {
                temp = arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
        
    }
   
    
    int left = 0 , count = 0;
    int right = Inele;
    
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            printf("Found:: %d is at index %d\n",target,mid);
            count++;
            break;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if(count==0){
        printf("%d is not there in array..\n",target);
    }
    
    
    
    
}
