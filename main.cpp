#include <iostream>

using namespace std;

long long int fib(int n){
	if(n<2) return n;	
	return fib(n-1)+fib(n-2);
}

int main(){
	cout<<"this is a program "<<endl;
	cout<<"is saved directly on "<<endl;
	cout<<"github "<<endl;
	return 0;
}
