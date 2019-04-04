#include<iostream>
#include<cmath>


using namespace std;

int primos(int,int);

int main(){

int infe;
int max;


cout<<"escriba el numero menor de su intervalo mayor o igual a 2"<<endl;
cin>>infe;
cout<<"escriba el numero mayor de su intervalo"<<endl;
cin>>max;


primos(infe,max);



return 0;
}

int primos(int a, int b){
int i;
int num;
int cue=0;

for (i=a;i<=b;i++){
	for(num=a; num<=i ; num++){
		if(i%num==0){
			cue++;
}}
	if(cue==1){
		cout<<i<<endl;
}
	cue=0;

}


}



