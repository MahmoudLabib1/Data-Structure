/*******************************************************************************
 * [File Name]: stack.h
 *
 * [Date Created]: July 07/22
 *
 * [Description]: Header File Contains Prototypes and Structures for stack need.
 *
 * [Author]: Mahmoud-Labib
 *******************************************************************************/

#ifndef STACK_H_
#define STACK_H_
#include <stdio.h>
/*------------------------------------------------------------------------------
 *                           Definition and Types
 *------------------------------------------------------------------------------*/
#define STACK_SIZE  1024

typedef unsigned char uint8_t;
typedef unsigned long uint32_t;

/*--------------------------------------------------------------------------------------
 * [Structure Name]: ST_stack_t
 * [Description]: This structure is responsible for maintaining Stack elements and Top.
 *-------------------------------------------------------------------------------------*/
typedef struct stack{
	uint32_t elements[STACK_SIZE];
	uint32_t top;
}ST_stack_t;

typedef enum{
	OK_PUSH,STACK_OVER_FLOW
}EN_pushError_t;

typedef enum{
	OK_POP,EMPTY_STACK
}EN_popError_t;

typedef enum{
	STACK_FULL,STACK_EMPTY,STACK_NOT_FULL,STACK_NOT_EMPTY
}EN_stackError_t;

/*------------------------------------------------------------------------------
 *                           Function Prototypes
 *------------------------------------------------------------------------------*/

/*******************************************************************************
 * [Function Name]:createEmptyStack
 *
 * [Description]: This function is responsible for creating Empty Stack.
 *
 * [Arg]:Pointer to Structure from type (ST_stack_t)
 *
 * [Return]:void
 *******************************************************************************/
void createEmptyStack(ST_stack_t *stack);

/*******************************************************************************
 * [Function Name]:push
 *
 * [Description]:This function is responsible for check stack full or
 *               not then add new element on stack.
 * [Arg]:Pointer to Structure from type (ST_stack_t) and data (uint32_t)
 *
 * [Return]:EN_pushError_t
 *******************************************************************************/
EN_pushError_t push(ST_stack_t *stack , uint32_t data);

/*******************************************************************************
 * [Function Name]:pop
 *
 * [Description]:This function is responsible for check stack Empty or
 *               not then remove an element from stack.
 * [Arg]:Pointer to Structure from type (ST_stack_t) and data (uint32_t)
 *
 * [Return]:EN_popError_t
 *******************************************************************************/
EN_popError_t pop(ST_stack_t *stack,uint32_t *data);

/*******************************************************************************
 * [Function Name]:printStack
 *
 * [Description]:This function is responsible for print stack elements if stack
 *               not empty.
 * [Arg]:Pointer to Structure from type (ST_stack_t)
 *
 * [Return]:EN_stackError_t
 *******************************************************************************/
EN_stackError_t printStack(ST_stack_t *stack);

/*******************************************************************************
 * [Function Name]:getSatckTop
 *
 * [Description]:This function is responsible for getting the value of the TOP .
 *
 * [Arg]:Pointer to Structure from type (ST_stack_t)
 *
 * [Return]:uint32_t
 *******************************************************************************/
uint32_t getSatckTop(ST_stack_t *stack);

/*******************************************************************************
 * [Function Name]:isFull
 *
 * [Description]:This function is responsible for Check the stack full or not it's
 *               help at Debugging.
 * [Arg]:Pointer to Structure from type (ST_stack_t)
 *
 * [Return]:EN_stackError_t
 *******************************************************************************/
EN_stackError_t isFull(ST_stack_t  *stack);

/*******************************************************************************
 * [Function Name]:isEmpty
 *
 * [Description]:This function is responsible for Check the stack Empty or not it's
 *               help at Debugging.
 * [Arg]:Pointer to Structure from type (ST_stack_t)
 *
 * [Return]:EN_stackError_t
 *******************************************************************************/
EN_stackError_t isEmpty(ST_stack_t *stack);
#endif /* STACK_H_ */
