/*
  Archivo: Concurso.cpp
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/


#include "Concurso.h"
using namespace std;
    
Concurso::Concurso(string nombre)
  : nombre(nombre)
{
  // No hay que hacer nada
}


Concurso::~Concurso()
{
  for(int cualConcursante=0; cualConcursante<concursantes.size(); cualConcursante++)
  {
    delete concursantes[cualConcursante];
    concursantes[cualConcursante] = nullptr;
  }
  concursantes.clear();

  for(int cualPresentador=0; cualPresentador<presentadores.size(); cualPresentador++)
  {
    delete presentadores[cualPresentador];
    presentadores[cualPresentador] = nullptr;
  }
  presentadores.clear();
}


string Concurso::comoTeLlamas()
{
  return nombre;
}


void Concurso::nuevoConcursante(Concursante *concursante)
{
  concursantes.push_back(concursante);
}


void Concurso::nuevoPresentador(Presentador *presentador)
{
  if(presentador)
  {
    presentadores.push_back(presentador);
  }
}


void Concurso::entregarPremios()
{
  int cualPresentador = 0;
  for(int cualConcursante=0; cualConcursante<concursantes.size(); cualConcursante++)
  {
    double premio = 0;

    if(presentadores.at(cualPresentador))
    {
      premio = presentadores.at(cualPresentador)->entregarPremio(concursantes.at(cualConcursante)->comoTeLlamas());
    }
      
    concursantes[cualConcursante]->recibirPremio(premio);
    
    cualPresentador++;  // Aquí se pasa al siguiente presentador
    if(cualPresentador >= presentadores.size())  // Y si se han terminado...
      cualPresentador = 0;  // ... entonces se vuelve a comenzar por el primero
  }
}


string Concurso::mostrarPremiosDeConcursantes()
{
  string resultado;

  for(int cualConcursante=0; cualConcursante<concursantes.size(); cualConcursante++)
    resultado += concursantes[cualConcursante]->comoTeLlamas() + " ganó " + to_string(concursantes[cualConcursante]->quePremioTeDieron()) + " bitcoins\n";

  return resultado;
}