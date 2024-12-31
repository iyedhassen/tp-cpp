#include <iostream>

using namespace std;
#include <map>
struct ville{
	string name;
	pair<int,int> pos;
};
int main(){
map <string,pair<int,int> > villes;
villes["Sfax"]=make_pair(15, 18);
villes["Sousse"]=make_pair(5,8);
villes["Gabes"]=make_pair(150,180);

string v;
cout<<"donner une ville: Sfax ou Sousse ou Gabes";
cin>>v;
if ( v != "Sfax" && v != "Sousse" && v != "Gabes")
  cout<<"ville n'exciste pas"<<endl;
else cout<< villes[v].first<< "  "<<villes[v].second;
}
