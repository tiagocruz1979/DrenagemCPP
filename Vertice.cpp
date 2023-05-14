#include "Vertice.h"

Vertice::Vertice() : coordX(0.0) , coordY(0.0) , cotaTer(0.0) , vazaoEntrada(0.0), areaContrib(nullptr)
{
    //ctor
}



Vertice::~Vertice() // Destrutor
{
    delete this->areaContrib;
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




