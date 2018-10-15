#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int binary;
	cin>>binary;
	int rem=0;
	int dec = 0;
	int i=0;
	int base = 2;
	while(binary!=0){
		rem = binary%10;
		binary = binary/10;
		dec = rem * pow(base,i) + dec;
		++i;
	}
	cout<<dec;
	return 0;
}