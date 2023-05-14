#include "FormulasGerais.h"
#include <cmath>


double AreaCirculo(double diametro)
{
    return PI * diametro * diametro /4;
}

double PerimetroCirculo(double diametro)
{
    return PI * diametro;
}

double Vazao_Manning(double declividade, double rugosidade, double Area, double Perimetro)
{
    double expoente = 2.0/3.0;
    double vazao = (1.0/rugosidade)*Area*std::pow(Area/Perimetro,expoente)*std::sqrt(declividade);
    return vazao;
}

double AnguloInterno_teta(double diametro, double altura)
{
    double teta = 2 * std::acos(1-2*(altura/diametro));
    return teta;
}

double VelocidadeFluxo(double area, double vazao)
{
    return area/vazao;
}
