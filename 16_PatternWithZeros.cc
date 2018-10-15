#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <iostream>
using namespace std;

int main(){
	int NoOfRows;
	cin>>NoOfRows;

	for(int i =1 ;i<=NoOfRows;++i){
		if(i==1){
			cout<<i<<"\t";
		}
		else{
			cout<<i<<"\t";
			for(int j=1;j<=i-2;++j){
				cout<<0<<"\t";
			}
			cout<<i<<"\t";
		}
		cout<<endl;
	}
	return 0;
}