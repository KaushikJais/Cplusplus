#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int dec;
	cin>>dec;
	int rem=0;
	int base=10;
	int i=0;
	int oct=0;
	while(dec!=0){
		rem=dec%8;
		dec = dec/8;
		oct = rem*pow(10,i)+oct;
		++i;

	}

	cout<<oct;
	return 0;
}