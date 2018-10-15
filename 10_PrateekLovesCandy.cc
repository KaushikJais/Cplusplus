#include <iostream>
#include <cmath>
using namespace std;

//This code throws TLE

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
	int T;
	cin>>T; //Number of test cases

	while(T!=0){
		int N;
		cin>>N; //number of prime numbers
		int count =0;
		int n=2;
		while(count!=N){
			if(Isprime(n)){
				count++;
			}
			++n;
		}
		cout<<n-1;
		--T;
	}
	return 0;
}