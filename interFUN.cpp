#include<iostream>
using namespace std;

int factorial(int);

int main()
{

double c;

cout<<"ingrese un numero"<<endl;
cin>>c;

factorial(c);

return 0;
}


int factorial(int a){

double fact=1;
int i;

for (i=1;i<=a;i++){
fact = fact*i;
	
}
  cout<<fact<<endl; 
}

