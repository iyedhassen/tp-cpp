#include<iostream>
using namespace std;
int main(){
int num[10],s;
cout<<"entrez 10 entiers:"<<endl;
for(int i=0;i<10;i++){
cin>>num[i];
}
 s=num[0];
for(int i=1;i<10;i++){
if(num[i]<s){
  s=num[i];
}
}
cout<<"Le plus petit entier est:"<<s<<endl;
return 0;
}
