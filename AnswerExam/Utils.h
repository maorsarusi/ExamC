#ifndef UTILS_H
#define UTILS_H
#include"Stack.h"

/**
* @file
* this file contain functions that are the utils for the exam question
*/

/**
 * @brief   this function create a stack 
 * @return  the apperance of the stack
*/
Stack* CreateStack();


/**
 * @brief       this function deleting a stack
 * @param stack  the stack we deleting
*/
void DeleteStack(PStack** stack);

/**
 * @brief        this function push a variable into the stack
 * @param stack  the stack we push into it
 * @param val    the value we push
*/
void Push(PStack stack, int val);

/**
 * @brief        this function extract a variable from the stack
 * @param stack  the stack we extract from it the variable
 * @return       the variable we extract
*/
int Pop(PStack stack);

#endif // !UTILS_H

