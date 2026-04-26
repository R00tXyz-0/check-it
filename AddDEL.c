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

Node *IsDNode(Node **Rass, char Na[20], int Nume, int Av){
    Node *NvNode = (Node *) malloc(sizeof(Node));

    strcpy(NvNode->Name, Na);
    NvNode->Number = Nume;
    NvNode->Average = Av;
    NvNode->Next = NULL;

    Node *temp = *Rass;
    if (temp != NULL){
        NvNode->Next = *Rass;
    *Rass = NvNode;
    }
    
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

    IsDNode(&temp, "OthmaneXs", 15, 18);



    while (temp != NULL){
        printf("\nName : %s", temp->Name);
        printf("\nMoyenne : %d", temp->Average);
        printf("\nStudent : %d", temp->Number);
        temp = temp->Next;
    }
    
}