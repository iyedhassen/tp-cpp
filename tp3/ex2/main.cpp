#include <iostream>

using namespace std;
#include <vector>

vector<int> remplir_v(int n){
	vector<int> v(n);
	for (int i=0; i<n;i++){
	cout<<"donner entier v ["<<i<<"]:";
	cin>>v[i];
}
	return v;
}

void recheche(const vector<int>& v,int k){
	bool trouve=false;
		for (int i = 0; i < v.size(); i++) {
        if (v[i] == k) {
            cout << k << " de la position " << i << endl;
            trouve = true;
            break;
        }
    }
    if (!trouve) {
        cout << k << " n'exciste pas dans le tableau!!" << endl;
    }
}


int main(){
	int n=5;
	vector <int> v =remplir_v(n);
	recheche(v,5);

}
