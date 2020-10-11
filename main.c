/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct stacks{
    int data;
    struct stacks *top;
}*top1,*top2,*top3;



void push(int rd)
{
    struct stacks *n = (struct stacks*)malloc(sizeof(struct stacks));
    if(top1 == NULL){
        n->data = rd;
        n->top = NULL;
        top1 = n;
    }else{
        n->data = rd;
        n->top = top1;
        top1 = n;
    }
    
}

void createTower(struct stacks *temp){
    if(temp!=NULL){
        if(top2 == NULL && top3 == NULL){
            top3 = temp;
            top1 = top1->top;
            createTower(top1);
        }else if(top2 == NULL && top3 != NULL){
            if(temp->data > top3->data){
                top2 = temp;
                top1 = top1->top;
                createTower(top1);
            }else{
                top3->top = temp;
                top3 = top3->top;
                top1 = NULL;
            }
        }else if(top1 != NULL && top2 != NULL && top3 != NULL){
            if(top2->data>top3->data){
                top2->top = top3;
                top2 = top2->top;
                top3 = NULL;
                createTower(top1);
            }else{
                top3->top = top2;
                top3 = top3->top;
                top2 = NULL;
                createTower(top1);
            }
        }else if(top2!=NULL && top3 == NULL){
            top3 = temp;
            top1 == NULL;
            createTower(top2);
        }else if(top1 == NULL && top2->top != NULL && top3 != NULL){
            top1 = temp;
            top2 = top2->top;
        }
    }
}

void display(struct stacks *temp){
    struct stacks *temp1 = temp;
    if(temp1 == NULL)return;
    while(temp1 !=NULL){
        printf(" %d ",temp1->data);
        temp1 = temp1->top;
    }
}

int main()
{
    push(12);
    push(8);
    push(3);
    
    display(top1);
    
    createTower(top1);
    
    display(top1);
    
    display(top3);
    
    
}
