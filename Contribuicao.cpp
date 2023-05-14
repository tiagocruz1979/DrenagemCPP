#include "Contribuicao.h"

Contribuicao::Contribuicao()
{
    //ctor
}

Contribuicao::~Contribuicao()
{
    //dtor
}


        void Contribuicao::setArea(double area)
        {
            this->area = area;
        }
        double Contribuicao::getArea()
        {
            return this->area;
        }

        double Contribuicao::getTc()
        {
            if(this->tempoConcentracao < this->tcMin)
            {
                return this->tcMin;
            }
            else
            {
                return this->tempoConcentracao;
            }
        }

        double Contribuicao::getVazao()
        {
            double iChuva = this->chuva->mmChuva(getTc());
            return 0.278 * getRunoff() * iChuva * getArea()/1000000;
        }

        double Contribuicao::getRunoff()
        {
            return this->runoff;
        }

        void Contribuicao::setRunoff(double r)
        {
            this->runoff = r;
        }

        void Contribuicao::setChuva(Chuva *chuva)
        {
            this->chuva = chuva;
        }

        Chuva* Contribuicao::getChuva()
        {
            return this->chuva;
        }

        void Contribuicao::calculaTc()
        {
            double L = 0.30; // comprimento do talvegue em Km
            double H = 4.5; // Diferença entre o ponto mais remoto e o ponto considerado em metros
            double tc = 57 * std::pow((std::pow(L,3)/H),0.385);
            this->tempoConcentracao = tc;
        }


