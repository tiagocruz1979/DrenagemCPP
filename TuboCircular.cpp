#include "TuboCircular.h"


TuboCircular::TuboCircular()
{
    //ctor
}

TuboCircular::~TuboCircular()
{
    //dtor
}

TuboCircular::TuboCircular(const TuboCircular& other)
{
    //copy ctor
}

TuboCircular& TuboCircular::operator=(const TuboCircular& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

double TuboCircular::getAreaMolhada()
{
    double D = getDiametro();
    double y = getAlturaLamina();
    double teta = AnguloInterno_teta(D,y);
    double Am = std::pow(D,2)/8*(teta - std::sin(teta));
    return Am;
}

double TuboCircular::getPerimetroMolhado()
{
    double D = getDiametro();
    double y = getAlturaLamina();
    double teta = AnguloInterno_teta(D,y);
    double Pm = teta*D/2;
    return Pm;
}


double TuboCircular::getAreaSecao()
{
    return AreaCirculo(getDiametro());
}

double TuboCircular::getPerimetroSecao()
{
    return PerimetroCirculo(getDiametro());
}

double TuboCircular::getDiametro()
{
    return this->diametro;
}

void TuboCircular::setDiametro(double d)
{
    this->diametro = d;
}

double TuboCircular::getAlturaLamina()
{
    return this->alturaLamina;
}

void TuboCircular::setAlturaLamina(double h)
{
    if (h <= getDiametro())
    {
        this->alturaLamina=h;
    }
}

void TuboCircular::setFracaoMaximaLamina(double porcentagem)
{
    double D = getDiametro();
    double y = porcentagem*D;
    setAlturaLamina(y);
}

double TuboCircular::getVazaoMaxima()
{
    return Vazao_Manning(getDeclividade(),getRugosidade(),getAreaMolhada(),getPerimetroMolhado());
}
double TuboCircular::getVelocidade()
{
    return getAreaMolhada()/getVazaoMaxima();
}

bool TuboCircular::vazaoSuficiente(double vazao)
{
    return vazao<=getVazaoMaxima();
}

double TuboCircular::getTempoPercurso()
{
    return getVelocidade()*getComprimento();
}

