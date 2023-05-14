#pragma once
#include "Link.h"

class TuboCircular : public Link
{
    public:
        TuboCircular();
        virtual ~TuboCircular();
        TuboCircular(const TuboCircular& other);
        TuboCircular& operator=(const TuboCircular& other);
        double getAreaMolhada();
        double getPerimetroMolhado();
        double getAreaSecao();
        double getPerimetroSecao();

        double getDiametro();
        void setDiametro(double d);

        double getAlturaLamina();
        void setAlturaLamina(double h);

        void setFracaoMaximaLamina(double porcentagem);

        double getVelocidade();
        double getVazaoMaxima();

        bool vazaoSuficiente(double vazao);
        double getTempoPercurso();


    protected:

    private:
        double diametro;
        double alturaLamina;
};

