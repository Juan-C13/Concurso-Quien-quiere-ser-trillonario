/*
  Archivo: PresentadorLoco.h
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/

/**
  CLASE: PresentadorLoco
  INTENCIÓN: representa un presentador de televisión que tiene un algoritmo raro para calcular el valor del premio a entregar.
  Además, como ES un Presentador:
  - le puedo preguntar el nombre
  - le puedo pedir que entregue el premio
  RELACIONES:
  - ES un Presentador
*/

#ifndef PRESENTADORLOCO_HH
#define PRESENTADORLOCO_HH

#include <string>
#include "Presentador.h"
using namespace std;

class PresentadorLoco : public Presentador
{
  protected:
  
  public:
  /**
  * @brief Construye un presentador aleatorio (ese va a ser su nombre)
  */
  PresentadorLoco(string nombre);
  /**
  * @brief Destructor. No hace nada.
  */  
  virtual ~PresentadorLoco();
  /**
  * @brief Retorna el premio a entregar a un concursante (concretamente, el número de letras del nombre del concursante multiplicado por 200).
  * @param recibe el nombre del concursante al que le va a entregar el premio, aunque no hace nada con este dato
  */
  virtual double entregarPremio(string nombreConcursante);
};

#else
class PresentadorLoco;  // Declaración adelantada
#endif


