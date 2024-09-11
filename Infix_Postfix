#include <stdio.h>

int push(int i, int top, char stack[], char arr[])
{
    top++;
    stack[top] = arr[i];
    return top;
}

int pop(int top, char stack[])
{
    printf("%c", stack[top]);
    top--;

    return top;
}

int main()
{
    int i = 0;
    int top = -1;
    char arr[50];
    // char arr[] = {"a+b-c*d*f/z/m-q+;"};
    printf("Enter infix notion(End with ';'):: ");
    scanf("%s", &arr);
    // int max = strlen(arr);

    char stack[50];

    while (arr[i] != '\0')
    {
        if(arr[i]=='(' || arr[i]==')'){
            if(arr[i]=='('){
               top = pop(top, stack);
            }else{
                while(arr[i]!=')'){
                    top = pop(top, stack);
                }
            }
        }else if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
        {
            printf("%c", arr[i]);
        }
        else if (arr[i] == '+' || arr[i] == '-')
        {
            while (1)
            {
                if (stack[top] == '+' || stack[top] == '-' || stack[top] == '*' || stack[top] == '/')
                {
                    top = pop(top, stack);
                    // pritnf("%c", arr[top--]);
                    // continue;
                }
                else
                {
                    top = push(i, top, stack, arr);
                    break;
                }
            }
        }
        else if (arr[i] == '*' || arr[i] == '/')
        {
            while (1)
            {
                if (stack[top] == '*' || stack[top] == '/')
                {
                    top = pop(top, stack);
                    // pritnf("%c", pop(arr[top--]));
                    // continue;
                }
                else
                {
                    top = push(i, top, stack, arr);
                    break;
                }
            }
        }
        i++;
        while (top != -1 && arr[i] == '\0')
        {
            top = pop(top, stack);

            // continue;
        }
    }
    // printf("%s", arr);
}
