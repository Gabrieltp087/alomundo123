#ifndef FIGURAGEOMETRICAS_H
#define FIGURAGEOMETRICAS_H
#include <string>
using namespace std;

class FigurasGeometricas{
    protected:
        string nome;
        int Area;
    public:
        FigurasGeometricas();
        FigurasGeometricas(string nome, int Area);
        virtual ~FigurasGeometricas();
        void setNome(string nome);
        void setArea(int Area);
        string getNome();
        int getArea();
};

class Triangulo: public FigurasGeometricas{}
        private:
            double base;
            double altura;
            double area;  
        
        public:

};

#endif