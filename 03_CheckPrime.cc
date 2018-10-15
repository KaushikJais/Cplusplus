#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N;
	cin>>N;
	if(N==1 || N==0){
		cout<<"Not Prime";
	}
	bool isPrime = true;
	for (int i=2;i<N;++i){
		if(N%2==0){
			isPrime = false;
		}
		else{
			continue;
		}
	}
	if(isPrime){
		cout<<"Prime";
	}
	else{
		cout<<"Not Prime";
	}

	return 0;
}