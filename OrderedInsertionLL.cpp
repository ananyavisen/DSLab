#include "LL.h"
#include <iostream>
using namespace std;

void Traverse(Node *START)
{
    Node *p = START;
    while(p != NULL)
    {
        cout << p->info << " ";
        p = p->Next;
    }
    cout << "\n";
}

int main(){

    struct Node *START1;
    START1=NULL;
    OrderedInsertion(&START1, 'p');
    OrderedInsertion(&START1, 'a');
    OrderedInsertion(&START1, 'w');
    OrderedInsertion(&START1, 'y');
    OrderedInsertion(&START1, 'z');
    Traverse(START1);

    struct Node *START2;
    START2=NULL;
    OrderedInsertion(&START2, 's');
    OrderedInsertion(&START2, 'r');
    OrderedInsertion(&START2, 'b');
    OrderedInsertion(&START2, 'd');
    OrderedInsertion(&START2, 'o');
    Traverse(START2);
    return 0;

}