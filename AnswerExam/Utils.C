#include"Utils.h"
#include "Stack.h"
/**
* @file
* this file contain the implementaion of the function 
* that declares in utils.h to using AnswerExam.C
*/

Stack* CreateStack()
{
   
    PStack stack = malloc(sizeof(Stack));
    (PStack)stack->next = NULL;
    size_stack = 1;
   
}

void DeleteStack(PStack** stack)
{
    PStack current = *stack;
    PStack next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    size_stack = 0;
    printf("the stack is deleted\n");
}

void Push(PStack stack, int val)
{
    if (stack == NULL)
    {
        printf("cant push any elelment\n");
    }
    else
    {
        PStack node = malloc(sizeof(Stack));
        PStack current = stack;
        
            node->data = val;
            node->next = NULL;
   
            stack->next = node;
            ++size_stack;
 
        printf("succeedded pushing\n");
    }
}

int Pop(PStack stack)
{
    if (size_stack == 1)
    {
        printf("the stack is empty\n");
        return -1;
    }
    else
    {
        int item;
        PStack ptr;
        item = stack->data;
        ptr = stack;
        stack  = stack->next;
        free(ptr);
        printf("Pop success\n");
        --size_stack;
        return item;
    }

}
