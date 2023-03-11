/*
  Archivo: Presentador.cpp
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/

#include "Presentador.h"

Presentador::Presentador(string nombre)
  : nombre(nombre)
{
  // No hay que hacer nada
}


Presentador::~Presentador()
{
  // No hay que hacer nada
}


string Presentador::comoTeLlamas()
{
  return nombre;
}