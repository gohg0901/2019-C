#include <stdio.h>
#include <malloc.h>

typedef struct _stack {
	int s[10];
	int top;

}Stack;


void push(Stack* a, int i) {

	a->top = a->top + 1;
	a->s[a->top] = i;
}

int pop(Stack* a) {

	a->top = a->top - 1;
	return a->s[a->top + 1];
}



main() {

	int x;
	
	Stack *p1;
	Stack *p2;
	Stack *p3;

	p1 = (Stack*)malloc(sizeof(Stack));
	p2 = (Stack*)malloc(sizeof(Stack));
	p3 = (Stack*)malloc(sizeof(Stack));

	p1->top = -1;
	p2->top = -1;		
	p3->top = -1;
	
	push(p1, 8);
	push(p1, 9);
	push(p1, 3);
	x = pop(p1);
	x = pop(p1);
	printf("%d \n", x);
	
	push(p2, 100);
	push(p2, 200);
	push(p2, 300);
	x = pop(p2);
	x = pop(p2);
	printf("%d \n", x);

	
	free(p1);
	free(p2);
	free(p3);

}

























//#include <stdio.h>
//
//typedef struct _stack {
//	int s[10];
//	int top;
//
//}Stack;
//
//void push(Stack* a, int i) {
//
//	a->top = a->top + 1;
//	a->s[a->top] = i;
//}
//
//int pop(Stack* a) {
//
//	a->top = a->top - 1;
//	return a->s[a->top + 1];
//}
//
//main() {
//
//	Stack s1;
//	Stack s2;
//	Stack s3;
//
//	int x;
//
//	s1.top = -1;
//	s2.top = -1;
//	s3.top = -1;
//
//	push(&s1, 8);
//	push(&s1, 9);
//	push(&s1, 3);
//	x = pop(&s1);
//	x = pop(&s1);
//	printf("%d \n", x);
//
//	push(&s2, 100);
//	push(&s2, 200);
//	push(&s2, 300);
//	x = pop(&s2);
//	x = pop(&s2);
//	printf("%d \n", x);
//
//}