#include "LL.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void Traverse(Node *START)
{
    Node *p = START;
    while(p != NULL)
    {
        cout << p->info << " ";
        p = p->Next;
    }
    cout << endl;
}

int main() {
    Node *START = NULL;
    Node *Q = NULL;   

    InsBeg(&START, 'A');
    InsBeg(&START, 'B');
    InsBeg(&START, 'X');
    InsBeg(&START, 'O');
    InsBeg(&START, 'P');
    InsBeg(&START, 'Q');

    Traverse(START);

    DelBeg(&START);

    Traverse(START);

    Q = START->Next;   
    insAft(&Q, 'L');  

    Traverse(START);

    return 0;
}
