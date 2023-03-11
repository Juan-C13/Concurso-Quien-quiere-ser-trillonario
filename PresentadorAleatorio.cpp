/*
  Archivo: PresentadorAleatorio.cpp
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/

#include "PresentadorAleatorio.h"


PresentadorAleatorio::PresentadorAleatorio(string nombre)
  : Presentador(nombre)
{
  // No hay que hacer nada
}


PresentadorAleatorio::~PresentadorAleatorio()
{
  // No hay que hacer nada
}


double PresentadorAleatorio::entregarPremio(string nombreConcursante)
{
  return rand()%300;
}



