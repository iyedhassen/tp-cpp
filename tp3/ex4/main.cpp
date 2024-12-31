#include <iostream>

using namespace std;
#include <vector>

vector<int> remplir(int n){
	vector<int> v(n);
	for (int i = 0; i <= n; i++){
		cout<<"entier=";
		cin>> v[i];

	}
	return v;
}
pair<int,int> mini_maxi(const vector<int>&v){
	int Min=v[0],Max=v[0];
	for (int i = 1; i <= v.size(); i++){
		if (v[i]<Min)
		Min=v[i];
		else if  (v[i]>Max)
		Max=v[i];

	}
	return make_pair(Min, Max);

}
int main(){
	int n=5;
	vector<int> v=remplir(n);
	pair<int,int> r= mini_maxi(v);
	cout<<r.first<<"  "<<r.second;
}
