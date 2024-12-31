#include <iostream>

using namespace std;

void afficherP(int &x,int c=0){
	if (x>0){
	cout<<x<<" ";}}

void afficherN(int &x,int c=0){
	if (x<0){
	cout<<x<<" ";}}

void afficherS(int &x,int c){
	if (x>c){
	cout<<x<<" ";}}

void apfl(int t[10],void (*f) (int&,int)){
	int n=5;
	int c;

	if (f==afficherS) {
		cout<<"donner un seuil";
		cin>>c;

	}
 for (int i = 0; i < n; ++i) {
        f(t[i], c);
    }
}


int main(){
	int x, t[]={1,2,0,-8};
	cout<<"entrer votre choix:"<<"\n";
	cout<<"1.afficher les entier positif"<<"\n";
	cout<<"2.afficher les entier negatif"<<"\n";
	cout<<"3.afficher les entier sup a un seuil"<<"\n";
	cin>>x;
	switch(x)
		{
		case 1:
			apfl(t,afficherP);
			break;
		case 2:
			apfl(t,afficherN);
			break;
		case 3:
			apfl(t,afficherS);
			break;
}}
