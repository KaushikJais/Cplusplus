#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int N;
	cin>>N;
	if(N%2!=0){
		int inc = (N/2)+1;
		int dec = N - inc;
		//Increasing Pattern
		for(int i=1;i<=inc;++i){
			int space = inc - i;
			for(int j=1;j<=space;++j){
				cout<<" "<<" ";
			}
			int stars = 2*i - 1;
			for(int k=1;k<=stars;++k){
				cout<<"*"<<" ";
			}
			cout<<endl;
		}
		int spaces=1;
		for(int i=dec;i>=1;--i){
			
			for(int j=1;j<=spaces;++j){
				cout<<" "<<" ";
			}
			int stars = 2*i - 1;
			for(int j=1;j<=stars;++j){
				cout<<"*"<<" ";
			}
			++spaces;
			cout<<endl;
		}

	}

	return 0;
}