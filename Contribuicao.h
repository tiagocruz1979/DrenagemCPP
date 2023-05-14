#pragma once
#include <iostream>
#include "Chuva.h"


class Contribuicao
{
    public:
        Contribuicao();
        virtual ~Contribuicao();

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
        Chuva *chuva;
        double extensaoFluxoLaminar;
        double extensaoFluxoCanalRaso;


};


