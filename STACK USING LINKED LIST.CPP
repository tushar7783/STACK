#include<stdio.h>
#include<stdlib.h>
struct node{
	int data ;
	struct node *nexy;
}*top=NULL;

void push(int x)
{
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	if(t==NULL){
		printf("stcak overflow");
	}
	else {
		t->data=x;
		t->nexy=top;
		top=t;
	}
}
int pop() {
	int x=-1;
	if(top==NULL){
		printf("stack underflow");
     }
    else {
    	struct node *p=top;
    	top=top->nexy;
    	x=p->data;
    	free(p);
	}
	return x;
}

void display(){
	struct node *p=top;
	while(p!=NULL){
		printf("%d"p->data);
		p=p->nexy;
	}

}


int main(){
	push(10);
	push(20);
	push(32);
	display();
}
