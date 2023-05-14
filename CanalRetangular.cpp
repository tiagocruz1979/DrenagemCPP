#include "CanalRetangular.h"

CanalRetangular::CanalRetangular()
{
    //ctor
}

CanalRetangular::~CanalRetangular()
{
    //dtor
}

CanalRetangular::CanalRetangular(const CanalRetangular& other)
{
    //copy ctor
}

CanalRetangular& CanalRetangular::operator=(const CanalRetangular& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

double CanalRetangular::getAreaMolhada()
{
    return 3.0;
}

double CanalRetangular::getPerimetroMolhado()
{
    return 4.0;
}
