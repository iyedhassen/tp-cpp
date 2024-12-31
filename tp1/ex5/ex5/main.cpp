#include <iostream>

using namespace std;
#include <cmath>
double f (double x ,bool &ok ){
	double r;
	r=(x-1)*(2-x);
	if (r>0){
		ok=true;
		return sqrt(r);
	}
	else{
		ok=false;
	}
}

int main(){
	double x;
	bool test;
	cout<<"donner x =";
	cin>>x;
	double res=f(x,test);
	if (test){
		cout<<res;
	}
	else {
		cout<<"imposible";
	}
	return 0;
}
