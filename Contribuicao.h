#pragma once
#include <iostream>
#include "Chuva.h"


class Contribuicao
{
    public:
        Contribuicao();
        Contribuicao(const Contribuicao& outro);
        virtual ~Contribuicao();
        Contribuicao& operator=(const Contribuicao& other);


        void setArea(double area);
        double getArea();
        void setTempoConcetracao(double t);
        double getVazao();
        void setRunoff(double r);
        double getRunoff();
        double getTc();
        void calculaTc();

        void setChuva(Chuva *chuva);
        Chuva* getChuva();



    protected:

    private:
        double area;
        double runoff;
        double tcMin = 10;
        double tempoConcentracao=tcMin;
        double extensaoFluxoLaminar;
        double extensaoFluxoCanalRaso;
        Chuva *chuva;


};


