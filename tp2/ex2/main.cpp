#include <iostream>

using namespace std;




string tester ( int a ,int b ){


        if (a==b){

            return "a==b";
        }

        if (a>b){

            return "a>b";
        }

            else{

                return "a<b";
            }}

string tester2 ( int * a ,int *b ){


        if (*a==*b){

            return "a==b";
        }

        if (*a>*b){

            return "a>b";
        }

            else{

                return "a<b";
            }}

int main(){



    int a=5;
    int b=6;

    string result= tester (  a , b );


    int *c=new int(5);
    int *d=new int (6);

    string result2= tester2 ( c , d );

    cout<<result;



}
