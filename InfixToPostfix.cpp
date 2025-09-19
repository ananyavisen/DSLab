#include<bits/stdc++.h>
using namespace std;
#define STACKSIZE 100


struct stk{
	char Item[STACKSIZE];
	int Top;
};
struct stk S;

void Initialize(){
	S.Top=-1;
}
char StackTop(){
	return S.Item[S.Top];
}
bool IsEmpty(){
	if(S.Top==-1){
		return true;
	}
	else{
		return false; 
	}
}

void Push(char x){
	if(S.Top==(STACKSIZE-1)){
		cout<<"Stack Overflows";
		exit(1);
	}
	else{
		S.Top=S.Top+1;
		S.Item[S.Top]=x;
	}
}

char Pop(){
	if(IsEmpty()){
		cout<<"Stack Underflows";
		exit(1);
	}
	else{
		char x=S.Item[S.Top];
		S.Top=S.Top-1;
		return x;
	}

}
bool prcd(char a, char b){
    if(a=='(' || b=='(')
     return false;
    else if(b==')')
       return true;
    else if(a=='^' || a=='/' || a=='*' || a=='%')
    { if(b=='^')
       return false;
      else
       return true;
    }
    else if(a=='+' || a=='-'){
        if(b=='+' || b=='-')
         return true;
        else
         return false;
    }
}
void postfix(char infix[], vector <char> postfixExp){
    int i=0;
    Initialize();
	
    while(infix[i]!='\0'){      
        char symbol=infix[i];
         i++;
        if(symbol>='A' && symbol<='Z' ||symbol>='a' && symbol<='z' || symbol>='0' && symbol<='9')
         postfixExp.push_back(symbol);
        else
        {
           while(!IsEmpty() && prcd(StackTop(),symbol))
           {
            char x=Pop();
            postfixExp.push_back(x);
           }
           if(symbol!=')')
            Push(symbol);
           else
            Pop();
        }
       
    }
    while (!IsEmpty())
    {
        char x=Pop();
        postfixExp.push_back(x);
    }
    
     for(int i=0;i<postfixExp.size();i++)
      cout << postfixExp[i];
}

int main(){
	char infix[30];
    cout<<"Enter infix exp: " << endl;
    cin >> infix;
    vector <char> postfixExp;
    postfix(infix,postfixExp);
	
	return 0;
}