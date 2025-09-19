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
		return 1;
	}
	else{
		return 0; 
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

void DecimalToAnyBase(int n,int b){
    Initialize();
    char DAT[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	while(n!=0){
		int r=n%b;
		Push(r);
		n=n/b;
	}
	while(!IsEmpty()){
		int x=Pop();
        cout << DAT[x];
	}
}

int main(){
	int N,B;
    cout << "Enter a decimal number: " ;
    cin >> N;
    cout << "Enter the base: ";
    cin >> B;
	DecimalToAnyBase(N,B);
	return 0;
}