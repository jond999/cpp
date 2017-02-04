
#ifndef DESCAPOTAVEL_H
#define DESCAPOTAVEL_H

#include "carro.h"

class Descapotavel : public Carro
{
	private:
		bool estadoCapota;

	public:
		Descapotavel() : Carro()
		{
			estadoCapota = false;

			std::cout << "Construtor da classe 'Descapotavel' chamado..." << std::endl;
		};

		Descapotavel(std::string m, std::string mod, std::string c, float p, int pot, bool e) :
			Carro(m, mod, c, p, pot), estadoCapota(e) {

			std::cout << "Construtor da classe 'Descapotavel' chamado..." << std::endl;
		};

		~Descapotavel()
		{
			std::cout << "Destrutor da classe 'Descapotavel' chamado..." << std::endl;
		}

		void abrir_fecharCapota();

		std::string toString();
};

#endif
