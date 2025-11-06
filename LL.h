#include <stdlib.h>

struct Node
{
 char info;
 struct Node *Next;
};
void FreeNode(Node *p){
    free(p);
}
Node * GetNode()
{
    Node *p;
    p=(Node*)malloc(sizeof(struct Node));
    return p;
}
void InsBeg(Node **START,char x)
{
    Node *p;
    p=GetNode();
    p->info=x;
    p->Next=*START;
    *START=p;
}

void InsEnd(Node **START, char x)
{
    Node *q=*START;
    Node *p=GetNode();
    p->info=x;
    p->Next=NULL;
    while(q->Next!=NULL)
    {
        q=q->Next;
    }
    q->Next=p;
 }


int DelBeg(Node **START){
    Node *p =*START;
    *START = p->Next;
    int x= p->info;
    FreeNode(p);
    return x;
}
int insAft(Node **Q,char x)
{
    if (*Q == NULL) return 0;   

    Node *P = GetNode();
    P->info = x;

    P->Next = (*Q)->Next;
    (*Q)->Next = P;

}
void OrderedInsertion(Node **START, char x)
{
    Node *P, *Q;
    P=*START;
    Q=NULL;
    while(P!=NULL && x>=P->info){
        Q=P;
        P=P->Next;
    }
    if(Q==NULL)
     InsBeg(&(*START),x);
    else
     insAft(&Q,x);
}
