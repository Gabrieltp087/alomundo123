#include<iostream>
#include<string>
#include "Figuras.h"

using namespace std;

FigurasGeometricas::FigurasGeometricas(){}
FigurasGeometricas::FigurasGeometricas(string nome, int Area){
    this -> nome = nome;
    this -> Area = Area;
}
void FigurasGeometricas::setNome(string nome){
    this -> nome = nome;
}

void FigurasGeometricas:: setArea(int Area){
    this -> Area = Area;
}

string FigurasGeometricas:: getNome(){
    return nome;
}
int FigurasGeometricas:: getArea(){
    return Area;
}

FigurasGeometricas::~FigurasGeometricas(){}