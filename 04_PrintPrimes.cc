#include <iostream>
using namespace std;

bool Isprime(int N){
	if(N==0 || N==1){
		return false;
	}
	bool prime = true;
	for(int i=2;i<N;++i){
		if(N%i==0){
			prime = false;
		}
		else{
			continue;
		}
	}

	return prime;
}

int main(){
	int N;
	cin>>N;
	for(int i=0;i<=N;++i){
		bool ans = Isprime(i);
		if(ans){
			cout<<i<<endl;
		}
	}

	return 0;
}