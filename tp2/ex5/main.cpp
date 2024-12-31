#include <iostream>

using namespace std;

float calcul(float op1,int operat,float op2){

    float result;
    switch ( operat){

    case 1 :
        result=op1+op2;
        break;

    case  2:
        result=op1*op2;
        break;

    case 3 :
        result=op1-op2;
        break;

    case 4 :
        result=(float) (op1/op2);
        break;

    default:
            cout << "Op�rateur invalide !" << endl;
            return 0;

    }

    return result ;


}
int main (){

    int choix;
    float op1;
    float op2;
    float resulta;
    cout<<"donneer  valeur 1= ";
    cin>>op1;
    cout<<"donneer  valeur 2= ";
    cin>>op2;


    cout<<"**********calculatrice**********"<<endl;
    cout<<"*1-ADDITION "<<endl;
    cout<<"*2-MULTIPLICATION "<<endl;
    cout<<"*3-SOUSTRACTION "<<endl;
    cout<<"*4-DIVISION "<<endl;
    cout<<"*5-QUITER "<<endl;
    cout<<"operation? "<<endl;

    cout<<"donneer  votre choix de calcul  = "<<endl;

    cin>>choix;



    while (choix !=5){



        resulta=calcul( op1,choix, op2);

        cout<<resulta<<endl;

    cout<<"**********calculatrice**********"<<endl;
    cout<<"*1-ADDITION "<<endl;
    cout<<"*2-MULTIPLICATION "<<endl;
    cout<<"*3-SOUSTRACTION "<<endl;
    cout<<"*4-DIVISION "<<endl;
    cout<<"*5-QUITER "<<endl;
    cout<<"operation? "<<endl;

    cout<<"donneer  votre choix de calcul  = "<<endl;

    cin>>choix;



    }
}
