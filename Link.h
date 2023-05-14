#pragma once
#include "cmath"
#include "Vertice.h"
#include "FormulasGerais.h"

class Link
{
    public:
        Link();
        virtual ~Link();
        Link(const Link& outro);
        Link& operator=(const Link& other);

        virtual double getAreaMolhada()=0;
        virtual double getPerimetroMolhado()=0;
        virtual double getAreaSecao()=0;
        virtual double getPerimetroSecao()=0;
        virtual double getVazaoMaxima()=0;
        virtual bool vazaoSuficiente(double vazao)=0;
        virtual double getTempoPercurso()=0;
        virtual double getVelocidade()=0;


        void setV_inicio(Vertice* v);
        Vertice* getV_inicio();
        void setV_fim(Vertice* v);
        Vertice* getV_fim();

        void setComprimento(double v);
        double getComprimento();
        void calcularComprimento();

        void setRugosidade(double r);
        double getRugosidade();

        void setDeclividade(double dec);
        double getDeclividade();

        double calcularVelocidade();
        virtual double calcularCapacidadeVazao();


    protected:


    private:
        double rugosidade;
        double comprimento;
        double declividade;

        Vertice *v_inicio;
        Vertice *v_fim;

};
