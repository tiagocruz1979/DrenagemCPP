#include "Contribuicao.h"

Contribuicao::Contribuicao() : area(0.0) , runoff(0.0), tempoConcentracao(tcMin)
{
    this->chuva = nullptr;
}

Contribuicao::~Contribuicao()
{
    delete this->chuva;
}

// Construtor de cópia
Contribuicao::Contribuicao(const Contribuicao& outro) {
    this->area = outro.area;
    this->runoff = outro.runoff;
    this->tcMin = outro.tcMin;
    this->tempoConcentracao = outro.tempoConcentracao;
    this->chuva = new Chuva(*outro.chuva);
    this->extensaoFluxoLaminar = outro.extensaoFluxoLaminar;
    this->extensaoFluxoCanalRaso = outro.extensaoFluxoCanalRaso;
}


Contribuicao& Contribuicao::operator=(const Contribuicao& other)
{
     // Evita auto-atribuição
    if (this != &other)
    {
        this->area = other.area;
        this->runoff = other.runoff;
        this->tcMin = other.tcMin;
        this->extensaoFluxoLaminar = other.extensaoFluxoLaminar;
        this->extensaoFluxoCanalRaso = other.extensaoFluxoCanalRaso;
        this->chuva = other.chuva;
    }
    return *this;
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


