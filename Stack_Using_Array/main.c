#include <stdio.h>
#include "stack.h"
ST_stack_t My_stack;
uint32_t data;

int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	/*------------------------------------------------------------------------------
	 *                              TEST Case 1
	 *------------------------------------------------------------------------------*/
	printf("\n\t-----TEST CASE 1-----\t\n");
	uint32_t i_Index=0;
	createEmptyStack(&My_stack);
	if(isEmpty(&My_stack) == STACK_EMPTY){printf("\n[The Stack Is Empty]\n");}
	if(isFull(&My_stack) == STACK_NOT_FULL)
	{
		while(i_Index <= 1023){
			push(&My_stack, i_Index);
			i_Index++;
		}
	}
	printf("\nThe Number Of Element Exist In Stack : %lu\n" ,getSatckTop(&My_stack));
	/*------------------------------------------------------------------------------
	 *                              TEST Case 2
	 *------------------------------------------------------------------------------*/
	printf("\n\t-----TEST CASE 2-----\t\n");
	if(isEmpty(&My_stack) == STACK_NOT_EMPTY){printf("\n[The Stack Has Elements]\n");}
	if(isFull(&My_stack) == STACK_FULL)
	{
		while(i_Index <= 20){
			pop(&My_stack, &data);
			i_Index++;
		}
		printf("\n[last data poped from stack]: %lu\n",data);
	}
	printf("\nThe Number Of Element Exist In Stack : %lu\n" ,getSatckTop(&My_stack));

    printf("------------Printing Elemnts of Array------------");
    printStack(&My_stack);


	return 0;
}

