/*
  Archivo: Concursante.cpp
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/

#include "Concursante.h"


Concursante::Concursante(string nombre)
  : nombre(nombre), bitcoinsDePremio(0)
{
}


Concursante::~Concursante()
{
}


string Concursante::comoTeLlamas()
{
  return nombre;
}


double Concursante::quePremioTeDieron()
{
  return bitcoinsDePremio;
}


void Concursante::recibirPremio(double bitcoinsDePremio)
{
  this->bitcoinsDePremio += bitcoinsDePremio;
}