#include <iostream>
#include <stdlib.h>
using namespace std;

void imprimir (int arr[]){
    cout<< "imprimir descendientemente: "<<endl;
    for (int i=99; i>=0; i--){
        cout<<arr[i]<<endl;


    }
}



int main(){
    int contador=1;
    int vector[100];
    for(int i=0; i<100; i++){
        vector[i]=contador;
        contador +=2;

    }
    imprimir(vector);
    return 0;

}
