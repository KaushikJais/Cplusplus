#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	int N1,N2;
	cin>>N1>>N2;

	while(true){
		if(N1==N2){
			cout<<N1;
			break;
		}
		else if(N1>N2){
			N1 = N1-N2;
			N2=N2;
			continue;
		}
		else{
			N2 = N2-N1;
			N1=N1;
			continue;
		}
	}

	return 0;
}
