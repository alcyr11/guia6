#include <iostream>
#include <stdlib.h>
#include <char>
using namespace std;





int main(){


    int x;
    cout<< "ingrese por favor el tamanno de su arreglo";
    cin >> x;
    int array[x];
      
      for (int i=0; i<x; i++){
          int a=0;
          cout << "ingrese su valor por favor: ";
          cin >> a;
          array[i]=a;
          cout >> endl;
        
      }
      
      cout << "su arreglo es:";
      for (int i=0;i<x; i++){
          cout << array[i] << endl;
      }















    return 0;
}


