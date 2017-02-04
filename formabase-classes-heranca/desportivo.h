
#ifndef DESPORTIVO_H
#define DESPORTIVO_H

#include "carro.h"

class Desportivo : public Carro
{
	private:
		std::string motor;

	public:
		Desportivo() : Carro()
		{
			motor = "undefined";

			std::cout << "Construtor da classe 'Desportivo' chamado..." << std::endl;
		};

		Desportivo(std::string m, std::string mod, std::string c, float p, int pot, std::string mot) :
			Carro(m, mod, c, p, pot), motor(mot) {

			std::cout << "Construtor da classe 'Desportivo' chamado..." << std::endl;
		};

		virtual ~Desportivo()
		{
			std::cout << "Destrutor da classe 'Desportivo' chamado..." << std::endl;
		};

		void acelerar();

		std::string toString();
};

#endif
