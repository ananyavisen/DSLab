#include <iostream>
#include  <stdlib.h>
using namespace std;
struct Node{
    char info;
    Node *next, *prev;
};
Node *left, *right;
Node *getNode(){
    Node *p;
    p=(Node *)malloc(sizeof(struct Node));
    return p;
}
void insertleft(char x){
    Node *p;
    p=getNode();
    p->info=x;
    p->prev=NULL;
}