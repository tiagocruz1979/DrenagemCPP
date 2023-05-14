#include "Vertice.h"

Vertice::Vertice() : id(0) ,  coordY(0.0), coordX(0.0) , cotaTer(0.0) ,\
                                vazaoEntrada(0.0) , areaContrib(nullptr)
{
    //ctor
}

// Construtor de cópia
Vertice::Vertice(const Vertice& outro) : id(0), coordY(outro.coordY), coordX(outro.coordX) , cotaTer(outro.cotaTer), \
                    vazaoEntrada(outro.vazaoEntrada) , areaContrib(outro.areaContrib)
{

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




