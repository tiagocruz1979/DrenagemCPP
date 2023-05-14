#pragma once
#include <cmath>

const double PI = 3.1415;

double AreaCirculo(double diametro);
double PerimetroCirculo(double diametro);

double Vazao_Manning(double declividade, double rugosidade, double Area, double Perimetro);

double AnguloInterno_teta(double diametro, double altura);



