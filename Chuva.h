#pragma once
#include <cmath>


class Chuva
{
    public:
        Chuva();
        virtual ~Chuva();

        double mmChuva(double tc);

        void setPeriodoRetorno(double p);
        double getPeriodoRetorno();


    protected:

    private:
        double periodoRetorno;

};


