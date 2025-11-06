#include <iostream>
#include <stdlib.h>
using namespace std;
int factorial(int n){
 if(n==0)
  return 1;
 else 
  return n*factorial(n-1);
}
int fibonacci(int n){
 if (n<=2)
  return n-1;
 else 
  return fibonacci(n-1) + fibonacci(n-2);
}
int power(int base, int exponent){
 if(exponent==0)
  return 1;
 else 
  {
    int x=power(base, exponent/2);
    if (exponent%2==0)
     return x*x;
    else
     return x*x*base;   
  }
}
int naturalSum(int endDigit){
 if(endDigit==0)
  return 0;
 else 
  return endDigit+naturalSum(endDigit-1);
}
int GCD(int a, int b){
 if (b==0)
  return a;
 else 
  return GCD(b, a%b);
}

int main(){
 int num;
 cout << "Enter a number to find it's factorial: " ;
 cin >> num;
 int x=factorial(num);
 cout << "Result: " << x << "\n";
 int n;
 cout << "Enter number of terms of fibonacci series: " ;
 cin >> n;
 int y=fibonacci(n);
 cout << "Result: " << y << "\n";
 int base, exponent;
 cout << "Enter base and exponent: " ;
 cin >> base >> exponent;
 int z=power(base, exponent);
 cout << "Result: " << z << "\n";
 int endDigit;
 cout << "Enter last term of natural number: " ;
 cin >> endDigit;
 int p=naturalSum(endDigit);
 cout << "Result: " << p << "\n";
 int num1, num2;
 cout << "Enter two numbers to find GCD: ";
 cin >> num1 >> num2;
 int ans=GCD(num1 ,num2);
 cout << "Result: " << ans <<  "\n";
}