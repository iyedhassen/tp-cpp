#include <iostream>

using namespace std;
#include <vector>

vector<int> cordonne(int n){
	vector<int> v(n);
	for (int i = 0; i <= n; i++){
		cout<<"donner les cordonnes de vecteur";
		cin>> v[i];

	}
	return v;
}

int produit(const vector<int> &v,const vector<int> &u){
	int p=0;
	for (int i = 0; i <= v.size(); i++){
		p=p+v[i]*u[i];
	}
	return p;
}
int main(){
	int n=2;

	vector<int> v=cordonne(n);
	vector<int> u=cordonne(n);
	int x=produit(v,u);
	cout<<x;
}
