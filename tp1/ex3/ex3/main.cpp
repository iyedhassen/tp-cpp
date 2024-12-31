#include <iostream>

using namespace std;

int main()
{
int n;
string t[10];
cout<<"donner n :";
cin>>n;
for (int i=0;i<=n;i++){
	cout<<"donner mots :";
	cin>>t[i];
}
string Max=t[0];
for (int i=1;i<=n;i++){
if (t[i].length() > Max.length()) {
	Max=t[i];
