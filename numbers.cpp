#include <iostream>
#include "numbers.h"

void Numbers::fillVetI(){
    int i = 0;
    int aux;
    while(i < 18){
        aux = (rand()%100) + 1;
        if(aux % 2 != 0){
            vetI[i] = aux;
            i++;
        }
    }
}

void Numbers::fillVetP(){
    int i = 0;
    int aux;
    while(i < 18){
        aux = (rand()%100) + 1;
        if(aux % 2 == 0){
            vetP[i] = aux;
            i++;
        }
    }
}

void Numbers::showVetP(){
    for(int i=0; i<18; i++){
        std::cout << vetP[i] << " ";
    }
    std::cout << "\n\n";
}

void Numbers::showVetI(){
    for(int i=0; i<18; i++){
        std::cout << vetI[i] << " ";
    }
    std::cout << "\n\n";
}

void Numbers::ordem(int vet[]){
    int aux;
    for( int i = 0; i < 18; i ++) {
        for( int j = 0; j < ( 18 - 1) ; j ++) {
            if(vet[j] > vet[j + 1]) {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j+1] = aux ;
            }
        }
    }
}

void Numbers::fillMat(){
    int imp, par;
    par = imp = 0;
    for(int i=0; i < 6; i++){
        for(int j=0; j<6; j++){
            if(imp < 18 && par < 18){
                if(vetI[imp] < vetP[par]){
                    matriz[i][j] = vetI[imp];
                    imp++;
                }else{
                    matriz[i][j] = vetP[par];
                    par++;
                }
            }else if(imp < 18){
                matriz[i][j] = vetI[imp];
                imp++;
            }else{
                matriz[i][j] = vetP[par];
                par++;
            }
        }
    }
}

void Numbers::showMat(){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            std::cout << "\t"<< matriz[i][j];
        }
        std::cout << "\n";
    }
}
