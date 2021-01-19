#ifndef  STACK_H
#define STACK_H
#include <stdio.h>


typedef struct Stack_t 
{
    int data;
    void* next;
   
}Stack, *PStack;

static size_stack = 0;
static PStack head = NULL;


#endif // ! STACK_H

