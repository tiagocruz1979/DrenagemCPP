#include "Vertice.h"

Vertice::Vertice()
{
    //ctor
}

Vertice::~Vertice()
{
    //dtor
}

        void Vertice::setCoord(double X, double Y, double Z)
        {
            SetcoordX(X);
            SetcoordY(Y);
            SetcotaTer(Z);
        }

void Vertice::setVazaoEntrada(double v)
{
    this->vazaoEntrada = v;
}

double Vertice::getVazaoEntrada()
{
    return this->vazaoEntrada;
}




