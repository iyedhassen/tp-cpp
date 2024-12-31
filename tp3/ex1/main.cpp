#include <iostream>

using namespace std;

void remplir_T(int t[],int n){
	for (int i=0; i<n;i++){
	cout<<"donner entier t ["<<i<<"]:";
	cin>>t[i];
}
}

int nbpos(int t[],int n){
	    int x=0;
		for (int i=0; i<n;i++){
			if (t[i]>0){
				x=x+1;
			}}
			return x;
}

int main() {
	int n=5;
	int t[n];
	remplir_T(t,n);
	cout<<nbpos(t,n);
	return 0;
}
