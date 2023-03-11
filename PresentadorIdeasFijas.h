/*
  Archivo: PresentadorIdeasFijas.h
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/

/**
  CLASE: PresentadorIdeasFijas
  INTENCIÓN: representa un presentador de televisión que siempre entrega un premio del mismo valor.
  Además, como ES un Presentador:
  - le puedo preguntar el nombre
  - le puedo pedir que entregue el premio
  RELACIONES:
  - ES un Presentador
*/

#ifndef PRESENTADORIDEASFIJAS_HH
#define PRESENTADORIDEASFIJAS_HH

#include <string>
#include "Presentador.h"
using namespace std;

class PresentadorIdeasFijas : public Presentador
{
  protected:
  
  public:
  /**
  * @brief Construye un presentador de ideas fijas (ese va a ser su nombre)
  */
  PresentadorIdeasFijas(string nombre);
  /**
  * @brief Destructor. No hace nada.
  */  
  virtual ~PresentadorIdeasFijas();
  /**
  * @brief Retorna el premio a entregar a un concursante (concretamente, 100 bitcoins)
  * @param recibe el nombre del concursante al que le va a entregar el premio, aunque no hace nada con este dato
  */
  virtual double entregarPremio(string nombreConcursante);
};

#else
class PresentadorIdeasFijas;  // Declaración adelantada
#endif


