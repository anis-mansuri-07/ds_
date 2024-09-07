#include <stdio.h>
#define max 5
int Pq[max], Sq[max], pf = -1, pr = -1, sf = -1, sr = -1;
void PEnQ(int item);
void PDeq();
void PDis();
void SEnQ(int item);
void SDeq();
void SDis();

int main()
{
    int item, choice = 0;
    printf("1.Ins 2.Del 3.Dis 4.Exit\n");
    while (choice != 4)
    {
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Element:: ");
            scanf("%d", &item);
            if (item >= 60)
            {

                PEnQ(item);
            }
            else
            {
                SEnQ(item);
            }
            break;
        case 2:
            if (pf == -1)
            {
                if (pf == sf)
                {
                    printf("Q is Empty\n");
                    break;
                }
                SDeq();
            }
            else
            {
                PDeq();
            }
            break;
        case 3:
            PDis();
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

void SEnQ(int item)
{
    if (sr == max - 1)
    {
        printf("SQ is full\n");
    }
    else
    {
        if (sf == -1)
        {
            sf = 0;
        }
        sr++;
        Sq[sr] = item;
    }
}

void PEnQ(int item)
{
    if (pr == max - 1)
    {
        printf("PQ is full\n");
    }
    else
    {
        if (pf == -1)
        {
            pf = 0;
        }
        pr++;
        Pq[pr] = item;
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

void PDeq()
{
    if (pf == -1)
    {

        printf("PQ is Empty..\n");
    }
    else
    {
        printf("Deleted Element:: %d\n", Pq[pf]);
        if (pf == pr)
        {
            pf = pr = -1;
        }
        else
        {
            pf++;
        }
    }
}

void PDis()
{
    if (pf == -1)
    {
        printf("PQ is empty..\n");
    }
    else
    {
        printf("PQ Elements:: ");
        for (int i = pf; i <= pr; i++)
        {
            printf("%d ", Pq[i]);
        }
        printf("\n");
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
        printf("SQ Elements:: ");
        for (int i = sf; i <= sr; i++)
        {
            printf("%d ", Sq[i]);
        }
        printf("\n");
    }
}
