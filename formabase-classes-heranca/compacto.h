
#ifndef COMPACTO_H
#define COMPACTO_H

#include "carro.h"

class Compacto : public Carro
{
	public:
		Compacto() : Carro() {

			std::cout << "Construtor da classe 'Compacto' chamado..." << std::endl;
		};

		Compacto(std::string m, std::string mod, std::string c, float p, int pot) :
			Carro(m, mod, c, p, pot) {

			std::cout << "Construtor da classe 'Compacto' chamado..." << std::endl;
		};

		virtual ~Compacto()
		{
			std::cout << "Destrutor da classe 'Compacto' chamado..." << std::endl;
		}

		std::string toString()
		{
			std::string res = "";

			res += "Marca: " + marca;
			res += "\n";
			res += "Modelo: " + modelo;
			res += "\n";
			res += "Cor: " + cor;
			res += "\n";
			res += "Preco: " + tostr(preco);
			res += "\n";
			res += "Potencia: " + tostr(potencia);
			res += "\n";
			res += "Velocidade: " + tostr(velocidade);
			res += "\n";

			return res;
		}
};

#endif
