#include<bits/stdc++.h>
#include "Stacks.h"

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