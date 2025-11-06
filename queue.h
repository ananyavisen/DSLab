#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAXQUEUE 10
struct Queue{
    char item[MAXQUEUE];
    int FRONT;
    int REAR;
};

void initialise(Queue *Q){
  Q->REAR=-1;
  Q->FRONT=0;
}
bool IsEmpty(Queue *Q){
   if(Q->REAR - Q->FRONT+1==0)
    return true;
   else
    return false;
}

void Enqueue(Queue *Q, char x){
  if(Q->REAR==MAXQUEUE-1){
    cout << "Queue Overflows";
    exit(1);
  }
  else{
    Q->REAR+=1;
    Q->item[Q->REAR]=x;
  }
}
char Dequeue(Queue *Q){
    if(IsEmpty(Q)){
        cout << "Queue underflows" ;
        exit(1);
    }
    else{
        char x=Q->item[Q->FRONT];
        Q->FRONT++;
        return x;
    }
}
