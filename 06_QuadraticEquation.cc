#include <iostream>
#include <cmath>
using namespace std;


int NatureofRoots(int a,int b,int c){
	float d = sqrt((b*b)-(4*a*c));
	return d;
}
pair<float,float> rootofQuadraticEquation2(int a ,int b,int c){
	pair<float,float> ans;
	ans.first = (-b/2*a);
	ans.second = (sqrt(-1*((b*b)-4*a*c)))/2*a;
	return ans;
}
float rootofQuadraticEquation3(int a ,int b,int c){
	float ans = -b/2*a;
	return ans;

}
pair<float ,float> rootofQuadraticEquation1(int a,int b,int c){
	pair<float,float> ans;
	ans.first = (-b - (sqrt((b*b)-4*a*c)))/2*a;
	ans.second = (-b + (sqrt((b*b)-4*a*c)))/2*a;
	return ans;
}


int main(){
	int a,b,c;
	cin>>a>>b>>c;

	int ans = NatureofRoots(a,b,c);
	if(ans>0){
		cout<<"Real and Distinct";
		cout<<endl;
		pair<float,float> root = rootofQuadraticEquation1(a,b,c);
		cout<<root.first<<" "<<root.second;

	}
	else if(ans ==0){
		cout<<"Real and Equal";
		cout<<endl;
		float ans = rootofQuadraticEquation3(a,b,c);
		cout<<ans<<" "<<ans;
		
	}
	else{
		cout<<"Imaginary";
		cout<<endl;
	}
	return 0;
}