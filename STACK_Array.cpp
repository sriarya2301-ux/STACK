#include <stdio.h>
#define MAX 5
void main()
{
    int stack[MAX];
    int top = -1;
    int choice, value;

    printf("ENTER THE STACK ELEMENTS\n");
    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &stack[i]);
    }

    while (1)
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peep\n");
        printf("4. Display\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (top == MAX - 1)
            {
                printf("Stack is FULL\n");
            }
            else
            {
                printf("Enter value to push: ");
                scanf("%d", &value);
                stack[++top] = value;
                printf("%d pushed to stack\n", value);
               
            }
            break;
        case 2:
            if (top == -1)
            {
                printf("Stack is EMPTY\n");
            }
            else
            {
                value = stack[top];
                printf("%d popped from stack\n", value);
                top--;                                                                                        
            }
            break;
            case 3:
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Top element is: %d\n", stack[top]);
            }
            break;
          case 4:
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Stack elements: ");
                for (int i = 0; i < MAX; i++)
                {
                    printf("%d ", stack[i]);
                }
                printf("\n");
            }
            break;
        
        default:
            printf("Invalid choice\n");
        }
    }
}
