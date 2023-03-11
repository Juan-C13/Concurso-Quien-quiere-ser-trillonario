/*
  Archivo: PresentadorIdeasFijas.cpp
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/

#include "PresentadorIdeasFijas.h"


PresentadorIdeasFijas::PresentadorIdeasFijas(string nombre)
  : Presentador(nombre)
{
  // No hay que hacer nada
}


PresentadorIdeasFijas::~PresentadorIdeasFijas()
{
  // No hay que hacer nada
}


double PresentadorIdeasFijas::entregarPremio(string nombreConcursante)
{
  return 100;
}



