#include<iostream>
using namespace std;


int main(){

	int NoOfRows;
	cin>>NoOfRows;
	int fib0 = 0;
	int fib1=1;
	 int fib;
	for(int i=1;i<=NoOfRows;++i){
		if(i==1){
			cout<<fib0<<"\t"<<endl;
		}
		else if(i==2){
			fib = fib0+fib1;
			cout<<fib1<<"\t"<<fib<<"\t";
			cout<<endl;
			fib0=fib1;
			fib1=fib;
		}
		else{
			for(int j=1;j<=i;++j){
				fib = fib0+fib1;
				cout<<fib<<"\t";
				fib0= fib1;
				fib1=fib;
			}
			cout<<endl;
		}
	}
	return 0;
}