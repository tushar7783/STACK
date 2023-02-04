#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	  int  *s;
};



void create(struct stack *st){
	printf("enter the size");
	scanf("%d",&st->size);
	st->top=-1;
	st->s=(int*)malloc(st->size*sizeof(int));
}
void push(struct stack *st,int x){
	if(st->top==st->size-1){
		printf("stack overflow %d\n",x);
	}
	else{
		st->top++;
		st->s[st->top]=x;
	}
}

int pop(struct stack *st){
	int x=-1;
	if(st->top==-1){
		printf("stack underflow ");
	}
	else {
		x=st->s[st->top];
		st->top--;
	}
}

void display(struct stack *st){
	int i;
	for(i=st->top;i>=0;i--){
		printf("%d",st->s[i]);
		printf(",");
	}
}
int main()
{
	struct stack st;
	create(&st);
	push(&st,3);
	push(&st,9);
	push(&st,7);
	pop(&st);
  printf("%d",pop(&st))	;
	pop(&st);
	pop(&st);
	display(&st);
}
