#include<bits/stdc++.h>
using namespace std;
#define STACKSIZE 100

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
int Evaluate(int x, int y,char symbol){
    switch(symbol)
    {
      case '+': return x+y;
      case '-': return x-y;
      case '*': return x*y;
      case '/': return x/y;
      case '^': return (int)pow(x,y);

    } 
}
void prefix(char opStack[]){
    int i=0;
    Initialize();
	while(opStack[i]!='\0')
	 i++;
	i=i-1;
    while(i>=0){
       1 +
        char symbol=opStack[i];
        if(symbol>='0' && symbol<='9')
         Push(symbol-'0');
        else
        {
            int x=Pop();
            int y=Pop();
            int value=Evaluate(x,y,symbol);
            Push(value);
        }
        i--;
    }
    cout << "Result = " << Pop() << endl;
}

int main(){
	char opStack[30];
    cout<<"Enter postfix exp: " << endl;
    cin >> opStack;

    prefix(opStack);
	
	return 0;
}