#include "Link.h"

Link::Link()
{
    //ctor
}

Link::~Link()
{
    //dtor
}


        void Link::setV_inicio(Vertice* v)
        {
            this->v_inicio = v;
        }
        Vertice* Link::getV_inicio()
        {
            return this->v_inicio;
        }


        void Link::setV_fim(Vertice* v)
        {
            this->v_fim = v;
        }
        Vertice* Link::getV_fim()
        {
            return this->v_fim;
        }


        void Link::setComprimento(double v)
        {
            this->comprimento = v;
        }
        double Link::getComprimento()
        {
            return this->comprimento;
        }
        void Link::calcularComprimento()
        {
            double x1 = this->getV_inicio()->GetcoordX();
            double x2 = this->getV_fim()->GetcoordX();
            double y1 = this->getV_inicio()->GetcoordY();
            double y2 = this->getV_fim()->GetcoordY();
            double dist = std::sqrt( ((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)) );
            this->comprimento = dist;
        }

        void Link::setRugosidade(double r)
        {
            this->rugosidade = r;
        }
        double Link::getRugosidade()
        {
            return this->rugosidade;
        }

        void Link::setDeclividade(double dec)
        {
            this->declividade = dec;
        }

        double Link::getDeclividade()
        {
            return this->declividade;
        }

        double Link::getAreaMolhada()
        {

        }

        double Link::getPerimetroMolhado()
        {

        }

        double Link::calcularCapacidadeVazao()
        {
            return 0.0;
        }









