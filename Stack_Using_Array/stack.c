/*******************************************************************************
 * [File Name]: stack.c
 *
 * [Date Created]: July 07/22
 *
 * [Description]: Source File Contains Implementation The stack .
 *
 * [Author]: Mahmoud-Labib
 *******************************************************************************/


/*------------------------------------------------------------------------------
 *                                   Includes
 *------------------------------------------------------------------------------*/
#include "stack.h"

/*------------------------------------------------------------------------------
 *                           Function Implementation
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
void createEmptyStack(ST_stack_t *stack)
{
	stack->top = -1;
}

/*******************************************************************************
 * [Function Name]:push
 *
 * [Description]:This function is responsible for check stack full or
 *               not then add new element on stack.
 * [Arg]:Pointer to Structure from type (ST_stack_t) and data (uint32_t)
 *
 * [Return]:EN_pushError_t
 *******************************************************************************/
EN_pushError_t push(ST_stack_t *stack , uint32_t data)
{
	if(stack->top != (STACK_SIZE-1))
	{
		stack->top++;
		stack->elements[stack->top]= data;
	}
	else
	{
		return STACK_OVER_FLOW;
	}
	return OK_PUSH;
}

/*******************************************************************************
 * [Function Name]:pop
 *
 * [Description]:This function is responsible for check stack Empty or
 *               not then remove an element from stack.
 * [Arg]:Pointer to Structure from type (ST_stack_t) and data (uint32_t)
 *
 * [Return]:EN_popError_t
 *******************************************************************************/
EN_popError_t pop(ST_stack_t *stack,uint32_t *data)
{
	if(stack->top != -1)
	{
		*data = stack->elements[stack->top];
		(stack->top)--;
	}
	else
	{
		return EMPTY_STACK;
	}
	return OK_POP;
}

/*******************************************************************************
 * [Function Name]:printStack
 *
 * [Description]:This function is responsible for print stack elements if stack
 *               not empty.
 * [Arg]:Pointer to Structure from type (ST_stack_t)
 *
 * [Return]:EN_stackError_t
 *******************************************************************************/
EN_stackError_t printStack(ST_stack_t *stack)
{
	if(stack->top != -1)
	{
		while(stack->top != -1 )
		{
			printf("\n[%lu]: %lu\n ",stack->top,stack->elements[stack->top]);
			(stack->top)--;
		}
	}
	else
	{
		return STACK_EMPTY;
	}
	return STACK_FULL;
}

/*******************************************************************************
 * [Function Name]:getSatckTop
 *
 * [Description]:This function is responsible for getting the value of the TOP .
 *
 * [Arg]:Pointer to Structure from type (ST_stack_t)
 *
 * [Return]:uint32_t
 *******************************************************************************/
uint32_t getSatckTop(ST_stack_t *stack)
{
	return stack->top;
}

/*******************************************************************************
 * [Function Name]:isFull
 *
 * [Description]:This function is responsible for Check the stack full or not it's
 *               help at Debugging.
 * [Arg]:Pointer to Structure from type (ST_stack_t)
 *
 * [Return]:EN_stackError_t
 *******************************************************************************/
EN_stackError_t isFull(ST_stack_t  *stack)
{
	if(stack->top != (STACK_SIZE-1))
	{
		//Do nothing
	}
	else
	{
		return STACK_FULL ;
	}
	return STACK_NOT_FULL;
}

/*******************************************************************************
 * [Function Name]:isEmpty
 *
 * [Description]:This function is responsible for Check the stack Empty or not it's
 *               help at Debugging.
 * [Arg]:Pointer to Structure from type (ST_stack_t)
 *
 * [Return]:EN_stackError_t
 *******************************************************************************/
EN_stackError_t isEmpty(ST_stack_t *stack)
{
	if(stack->top == -1)
	{
		return STACK_EMPTY;
	}
	else
	{
		//Do nothing
	}
	return STACK_NOT_EMPTY;
}
