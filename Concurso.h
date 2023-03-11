/*
  Archivo: Concurso.h
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-29
  Fecha última modificación: 2022-12-29
  Versión: 0.1
*/

/**
  CLASE: Concurso
  INTENCIÓN: representa la etapa final de un concurso de televisión, donde ciertos presentadores van a entregar premios a los concursantes ganadores.
  - le puedo preguntar su nombre
  - le puedo solicitar que reciba un concursante
  - le puedo solicitar que reciba un presentador
  - entregar los premios de los presentadores a los concursantes, en el mismo orden
  - mostrar que recibió cada concursante
  RELACIONES:
  - contiene un nombre
  - conoce los concursantes en el orden en que recibirán los premios (toma propiedad de ellos)
  - conoce a los presentadores, ordenados para entregar premios (toma propiedad de ellos)
*/

#ifndef CONCURSO_HH
#define CONCURSO_HH

#include "Concursante.h"
#include "Presentador.h"
#include <vector>
#include <string>
using namespace std;

class Concurso
{
  protected:
  string nombre;
  vector <Concursante *> concursantes;
  vector <Presentador *> presentadores;
  
  public:
  /**
  * Construye un Concurso con un nombre y un presupuesto para premios
  */
  Concurso(string nombre);
  /**
  * Destructor. Borra todos los concursantes y los presentadores
  */
  virtual ~Concurso();
  /**
  * Dice cuál es nombre del Concurso
  */
  virtual string comoTeLlamas();
  /**
  * Añade un nuevo concursante. Toma propiedad de él.
  */
  virtual void nuevoConcursante(Concursante *concursante);
  /**
  * Añade un nuevo presentador. Toma propiedad de él.
  */
  virtual void nuevoPresentador(Presentador *presentador);
  /**
  * Entrega premios a los concursantes, emparejando cada concursante con un presentador, es decir: el primer presentador entrega premio al primer concursante, el segundo presentador al segundo concursante, etc. y así sucesivamente hasta que se acaba el dinero del presupuesto del concurso.
  */
  virtual void entregarPremios();
  /**
  * retorna un string con cada concursante y el premio que obtuvo
  */
  virtual string mostrarPremiosDeConcursantes();   
};

#else
class Concurso;  // Declaración adelantada
#endif


