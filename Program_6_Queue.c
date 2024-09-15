#include <stdio.h>
#define max 5
int Sq[max], sf = -1, sr = -1;
void SEnQ();
void SDeq();
void SDis();

int main()
{
    int choice = 0;
    printf("1.Ins 2.Del 3.Dis 4.Exit\n");
    while (choice != 4)
    {
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            SEnQ();
            break;
        case 2:
            SDeq();
            break;
        case 3:
            SDis();
            break;
        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Enter valid value..\n");
            break;
        }
    }
}

void SEnQ()
{
    int item;
    if (sr == max - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter Element:: ");
        scanf("%d", &item);
        printf("%d is inserted\n", item);
        if (sf == -1)
        {
            sf = 0;
        }
        sr++;
        Sq[sr] = item;
    }
}

void SDeq()
{
    if (sf == -1)
    {

        printf("SQ is Empty..\n");
    }
    else
    {
        printf("Deleted Element:: %d\n", Sq[sf]);
        if (sf == sr)
        {
            sf = sr = -1;
        }
        else
        {
            sf++;
        }
    }
}

void SDis()
{
    if (sf == -1)
    {
        printf("SQ is empty..\n");
    }
    else
    {
        printf("Queue Elements:: ");
        for (int i = sf; i <= sr; i++)
        {
            printf("%d ", Sq[i]);
        }
        printf("\n");
    }
}
