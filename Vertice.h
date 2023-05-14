#pragma once

#include "Contribuicao.h"
#include "Link.h"


class Vertice
{
    public:
        Vertice();
        virtual ~Vertice();
        Vertice(const Vertice& outro);
        Vertice& operator=(const Vertice& other);


        double GetcoordX() { return coordX; }
        void SetcoordX(double val) { coordX = val; }
        double GetcoordY() { return coordY; }
        void SetcoordY(double val) { coordY = val; }
        double GetcotaTer() { return cotaTer; }
        void SetcotaTer(double val) { cotaTer = val; }
        int Getid() { return id; }
        void Setid(int val) { id = val; }
        void setCoord(double X, double Y, double Z=0);
        void setVazaoEntrada(double v);
        double getVazaoEntrada();
        void setAreaContrib(Contribuicao &area);
      //  void setLinkEntrada(Link &link);

    protected:

    private:
        int id;
        double coordY;
        double coordX;
        double cotaTer;
        double vazaoEntrada;
       // Link *linkEntrada;
        Contribuicao *areaContrib;

};


