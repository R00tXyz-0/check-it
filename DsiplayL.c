#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int Data;
    struct Node *next;
} Node;

Node *MakeNode(int data){
    Node *Liste = (Node *) malloc(sizeof(Node *));

    Liste->Data = data;
    Liste->next = NULL;

    return Liste;
}

Node *DispleyNode(Node *Rass){
    Node *temp = Rass;

    while (temp != NULL){
        printf("%d -> ", temp->Data);
        temp = temp->next;
    }
    printf("NULL");

    return Rass;   
}


int main(){

    Node *Head = NULL;

    Node *Liste1 = MakeNode(50);
    Node *Liste2 = MakeNode(60);
    Node *Liste3 = MakeNode(70);
    Node *Liste4 = MakeNode(90);

    Head = Liste1;
    Liste1->next = Liste2;
    Liste2->next = Liste3;
    Liste3->next = Liste4;
    Liste4->next = NULL;
    
    DispleyNode(Head);

}