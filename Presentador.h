/*
  Archivo: Presentador.h
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/

/**
  CLASE: Presentador (Abstracta)
  INTENCIÓN: representa un presentador de televisión que tiene un algoritmo con el cual entrega un premio según el tipo de presentador que sea.
  Además:
  - se le podrá preguntar el nombre
  - le podrá pedir que entregue el premio
  RELACIONES:
  - CONTIENE un nombre
*/

#ifndef PRESENTADOR_HH
#define PRESENTADOR_HH

#include <string>

using namespace std;

class Presentador
{
  protected:
  string nombre;
  
  public:
  /**
  * @brief Construye un presentador (con su nombre, que será el tipo de presentador que sea)
  */
  Presentador(string nombre);
  /**
  * @brief Destructor. No hace nada.
  */  
  virtual ~Presentador();
  /**
  * @brief Dice cuál es nombre
  */
  virtual string comoTeLlamas();
  /**
  * @brief Retorna el premio a entregar a un concursante (el premio dependerá del tipo de presentador)
  * @param recibe el nombre del concursante al que le va a entregar el premio, aunque no hace nada con este dato
  */
  virtual double entregarPremio(string nombreConcursante)=0;
};

#else
class Presentador;  // Declaración adelantada
#endif
