#include <iostream>
#include <stdlib.h>
#include "queue.h"
using namespace std;
int main(){
    Queue Q;
    initialise(&Q);
    Enqueue(&Q, 'A');
    Enqueue(&Q, 'B');
    Enqueue(&Q, 'C');
    Enqueue(&Q, 'D');
    Enqueue(&Q, 'E');
    Enqueue(&Q, 'F');
    char x=Dequeue(&Q);
    cout << "Deleted item: " << x << "\n";
    x=Dequeue(&Q);
    cout << "Deleted item: " << x << "\n" ;
    x=Dequeue(&Q);
    cout << "Deleted item: " << x << "\n";
}
