#include <iostream>

using namespace std;

struct produit{
	string type;
	int prix;
	bool etat;

};
int calculprix(produit p){
	float k=p.prix;
	if(p.etat){
		k=k-k*0.2;
	}
	if(p.type=="luxe"){
		k=k-k*0.25;
	}
	else{
		k=k-k*0.19;
	}
	return k;
}
int main(){
	produit x,y,z;
	cout<<" le prix\n";
	cin>>x.prix;
	cout<<" le type\n";
	cin>>x.type;
	cout<<" l'etat\n";
	cin>>x.etat;
	cout<<calculprix(x);
	cout<<" le prix\n";
	cin>>y.prix;
	cout<<" le type\n";
	cin>>y.type;
	cout<<" l'etat\n";
	cin>>y.etat;
	cout<<calculprix(y);
	cout<<" le prix\n";
	cin>>z.prix;
	cout<<" le type\n";
	cin>>z.type;
	cout<<" l'etat\n";
	cin>>z.etat;
	cout<<calculprix(z);
}
