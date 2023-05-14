#include "Chuva.h"

Chuva::Chuva()
{
    //ctor
}

Chuva::~Chuva()
{
    //dtor
}

double Chuva::mmChuva(double tc)
{
    double i = (24521.30 * std::pow( getPeriodoRetorno(),-0.0846) ) / ( std::pow( (tc + 40.0) , 1.3581 * std::pow(getPeriodoRetorno(),-0.0454) ) );
    return i;
}

void Chuva::setPeriodoRetorno(double p)
{
    this->periodoRetorno = p;
}

double Chuva::getPeriodoRetorno()
{
    return this->periodoRetorno;
}

