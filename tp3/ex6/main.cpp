#include <iostream>

using namespace std;
#include <map>



template <typename T>
void echange(T t[10],int i,int j){
	swap(t[i],t[j]);
}

template <typename T>
void tri(T t[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int Min = i;
        for (int j = i + 1; j < n; ++j) {
            if (t[j] < t[Min]) {
                Min = j;
            }
        }
        if (Min != i) {
            echange(t,i,Min);
    }
}}
int main(){

	char t[] = {', 'a', 'e', 'h'};
    int n = sizeof(t) / sizeof(t[0]);
    tri(t, n);
    cout<< "Tableau après le tri : ";
    for (int i = 0; i < n; ++i) {
        cout << t[i] << " ";
    }
    cout << std::endl;

    return 0;
}
