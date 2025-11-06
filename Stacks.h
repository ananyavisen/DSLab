#include<bits/stdc++.h>
using namespace std;
#define STACKSIZE 10

struct stk{
	int Item[STACKSIZE];
	int Top;
};
struct stk S;

void Initialize(){
	S.Top=-1;
}

bool IsEmpty(){
	if(S.Top==-1){
		return true;
	}
	else{
		return false; 
	}
}

void Push(int x){
	if(S.Top==(STACKSIZE-1)){
		cout<<"Stack Overflows";
		exit(1);
	}
	else{
		S.Top=S.Top+1;
		S.Item[S.Top]=x;
	}
}

int Pop(){
	if(IsEmpty()){
		cout<<"Stack Underflows";
		exit(1);
	}
	else{
		int x=S.Item[S.Top];
		S.Top=S.Top-1;
		return x;
	}
}

int StackTop(){
	return S.Item[S.Top];
}