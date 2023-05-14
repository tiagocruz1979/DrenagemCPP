#include <iostream>
#include "TuboCircular.h"
#include "CanalRetangular.h"
#include "Juncao.h"
#include "Captacao.h"
#include "Contribuicao.h"
#include "FormulasGerais.h"

using namespace std;

int main()
{

    // criação da chuva de projeto
    std::cout << "Chuva de projeto\n";
    Chuva *chuva = new Chuva();
    chuva->setPeriodoRetorno(10);
    std::cout << "Período de Retorno: " << chuva->getPeriodoRetorno();
    std::cout << "\nIntensidade = " << chuva->mmChuva(10) << "\n";

    //Definição da Area de Contribuição
    std::cout << "\n\nArea de Contribuicao";
    Contribuicao area1;
    area1.setArea(45000);
    area1.setRunoff(0.7);
    area1.setChuva(chuva);
    area1.calculaTc();

    std::cout << "\nArea: " << area1.getArea();
    std::cout << "\nRunnof: " << area1.getRunoff();
    std::cout << "\nVazao=" << area1.getVazao() << "m3/s\n";


    //Criação de junção (poços de visita)
    Juncao *v1 = new Juncao();
    v1->setCoord(100,100,0);
    v1->Setid(1);
    v1->setVazaoEntrada(area1.getVazao());


    Juncao *v2 = new Juncao();
    v2->setCoord(190,15,0);
    v2->Setid(2);

    //Criacao dos links , trecho entre junções
    TuboCircular *t1 = new TuboCircular();
    t1->setV_inicio(v1);
    t1->setV_fim(v2);
    t1->calcularComprimento();
    t1->setDiametro(1.2);
    t1->setDeclividade(0.02);
    t1->setRugosidade(0.013);
    t1->setFracaoMaximaLamina(0.8);

    std::cout << "\n\nTrecho de tubulação";
    std::cout << "\nComprimento: " << t1->getComprimento();
    std::cout << "\nRugosidade: " << t1->getRugosidade();
    std::cout << "\nArea: " << t1->getAreaSecao();
    std::cout << "\nPerimetro: " << t1->getPerimetroSecao();
    std::cout << "\nCapacidade vazao max: " << t1->getVazaoMaxima();

    //verificar capacidade do trecho
    std::cout << "\n\nVerificar Capacidade do trecho\n";
    std::cout << "\nVazao no pv1: " << v1->getVazaoEntrada();
    std::cout << "\nTubulação Atende?: " << t1->vazaoSuficiente(v1->getVazaoEntrada());
    std::cout << "\nTempo de Percurso: " << t1->getTempoPercurso();
    std::cout << "\n";






}
