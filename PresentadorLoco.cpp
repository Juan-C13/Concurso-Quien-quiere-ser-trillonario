/*
  Archivo: PresentadorLoco.cpp
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/

#include "PresentadorLoco.h"


PresentadorLoco::PresentadorLoco(string nombre)
  : Presentador(nombre)
{
  // No hay que hacer nada
}


PresentadorLoco::~PresentadorLoco()
{
  // No hay que hacer nada
}


double PresentadorLoco::entregarPremio(string nombreConcursante)
{
  return 200 * nombreConcursante.size();
}



