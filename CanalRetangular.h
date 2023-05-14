#pragma once

#include "Link.h"
#include "FormulasGerais.h"

class CanalRetangular : public Link
{
    public:
        CanalRetangular();
        virtual ~CanalRetangular();
        CanalRetangular(const CanalRetangular& other);
        CanalRetangular& operator=(const CanalRetangular& other);
        double getAreaMolhada();
        double getPerimetroMolhado();

    protected:

    private:
};


