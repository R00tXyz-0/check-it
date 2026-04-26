#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char Name[20];
    int Number;
    int Average;
    struct Node *Next;
} Node;

Node *MakeNode(char N[20], int Num, int A){
    Node *Liste = (Node *) malloc(sizeof(Node));

    strcpy(Liste->Name, N);
    Liste->Number = Num;
    Liste->Average = A;
    
    return Liste;
    
}

int main(){

    Node *Head = NULL;
    Node *P = MakeNode("OthmaneX", 35, 18);
    Node *S = MakeNode("OthmaneY", 40, 17);
    Node *T = MakeNode("OthmaneS", 18, 16);

    Head = P;
    P->Next = S;
    S->Next = T;
    T->Next = NULL;

    Node *temp = Head;
    while (temp != NULL){
        printf("\nName : %s", temp->Name);
        printf("\nMoyenne : %d", temp->Average);
        printf("\nStudent : %d", temp->Number);
        temp = temp->Next;
    }
    
}