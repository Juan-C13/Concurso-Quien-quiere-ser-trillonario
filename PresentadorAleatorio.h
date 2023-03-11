/*
  Archivo: PresentadorAleatorio.h
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/

/**
  CLASE: PresentadorAleatorio
  INTENCIÓN: representa un presentador de televisión que tiene un algoritmo que calcula el valor del premio a entregar al azar.
  Además, como ES un Presentador:
  - le puedo preguntar el nombre
  - le puedo pedir que entregue el premio
  RELACIONES:
  - ES un Presentador
*/

#ifndef PRESENTADORALEATORIO_HH
#define PRESENTADORALEATORIO_HH

#include <string>
#include <cstdlib>
#include "Presentador.h"
using namespace std;

class PresentadorAleatorio : public Presentador
{
  protected:
  
  public:
  /**
  * @brief Construye un presentador de ideas fijas (ese va a ser su nombre)
  */
  PresentadorAleatorio(string nombre);
  /**
  * @brief Destructor. No hace nada.
  */  
  virtual ~PresentadorAleatorio();
  /**
  * @brief Retorna el premio a entregar a un concursante (concretamente, un número al azar entre 0 y 300 bitcoins)
  * @param recibe el nombre del concursante al que le va a entregar el premio, aunque no hace nada con este dato
  */
  virtual double entregarPremio(string nombreConcursante);
};

#else
class PresentadorAleatorio;  // Declaración adelantada
#endif


