#include "Link.h"

Link::Link() : rugosidade(0.0) , comprimento(0.0) , declividade (0.0), v_inicio(nullptr), v_fim(nullptr)
{

}

Link::~Link()
{
    delete v_inicio;
    delete v_fim;
}

Link::Link(const Link& outro) : comprimento(outro.comprimento) , rugosidade(outro.rugosidade) , declividade(outro.declividade) {
    this->v_inicio = new Vertice();
    this->v_fim = new Vertice();
}



Link& Link::operator=(const Link& other)
{
     // Evita auto-atribuição
    if (this != &other)
    {
        v_inicio = new Vertice();
        v_fim = new Vertice();
        this->comprimento = other.comprimento;
        this->rugosidade = other.rugosidade;
        this->declividade = other.declividade;
    }
    return *this;
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

        double Link::calcularCapacidadeVazao()
        {
            return 0.0;
        }

double Link::getTempoPercurso()
{
    return getVelocidade()*getComprimento();
}










