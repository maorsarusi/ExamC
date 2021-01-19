#include <stdio.h>
#include "Utils.h"

/**
* @file
* this file contain the main fubction and from it
* we runs our program
*/

int main(void)
{
    int number;
    int choice = 0;
    PStack stack = CreateStack();
    printf("\n*********Stack operations using linked list*********\n");
    printf("\n----------------------------------------------\n");
    while (choice != 3)
    {
        printf("\n\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Exit");
        printf("\n Enter your choice \n");
        scanf_s("%d", &choice);
        switch (choice)
        {
        case 1:
        {   
            printf("enter the value you want to push\n");
            scanf_s("%d", &number);
            Push(&stack, number);
            break;
        }
        case 2:
        {
            number = Pop(stack);
            if (number != -1)
            {
                printf("the value %d was in the head of the stack\n", number);

            }
            break;
        }
        case 3:
        {
            printf("Exiting....");
            break;
        }
        default:
        {
            printf("Please Enter valid choice ");
        }
        };
    }
    DeleteStack(&stack);
    return 0;
}