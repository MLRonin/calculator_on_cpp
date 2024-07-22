#include <iostream>
using namespace std;
void recursion(double a,double b,int operation);
double sum(double a,double b);
double sub(double a,double b);
double mul(double a,double b);
double div(double a,double b);
int main(){
	double a,b;
	int operation;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Enter operation\n1. +\n2. -\n3. *\n4. /\nYour choice: ";
	cin>>operation;
	recursion(a,b,operation);
	return 0;
}
double sum(double a,double b){
	return a+b;
}
double sub(double a,double b){
	return a-b;
}
double mul(double a,double b){
	return a*b;
}
double div(double a,double b){
	return a/b;
}
void recursion(double a,double b,int operation){
    double result;
	bool error=false;
	switch(operation){
		case 1:
			result=sum(a,b);
			break;
		case 2:
			result=sub(a,b);
			break;
		case 3:
			result=mul(a,b);
			break;
		case 4:
			result=div(a,b);
			break;
		default:
			error=true;
			cout<<"This operation not available";
			break;
	}
	if(error){
		cout<<"\nError";
	}
	else{
		cout<<"Result: "<<result;
	        int choice;
	        cout<<"\nContinue?\n1. yes\n2. no\n";
	        cin>>choice;
		if(choice==1){
			double b;
			int operation;
			cout<<"Enter b: ";
			cin>>b;
			cout<<"Enter operation\n1. +\n2. -\n3. *\n4. /\nYour choice: ";
			cin>>operation;
			recursion(result,b,operation);
		}
		else{
			cout<<"Result: "<<result;
		}
	}
}
