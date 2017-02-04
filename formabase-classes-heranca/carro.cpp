
#include "carro.h"

Carro::Carro()
{
	marca = "undefined";
	modelo = "undefined";
	cor = "undefined";
	preco = -1;
	potencia = -1;
	velocidade = 0;
	
	std::cout << "Construtor da classe 'Carro' chamado..." << std::endl;
}

Carro::Carro(std::string m, std::string mod, std::string c, float p, int pot) :
		marca(m), modelo(mod), cor(c), preco(p), potencia(pot) {

	velocidade = 0;

	std::cout << "Construtor da classe 'Carro' chamado..." << std::endl;
}

Carro::~Carro()
{	
	std::cout << "Destrutor da classe 'Carro' chamado..." << std::endl;
}

void Carro::acelerar()
{
	velocidade += 10;
}

void Carro::travar()
{
	velocidade -= 10;
}

std::string Carro::toString()
{
	std::string res = std::string();

	std::cout << res;

	return res;
}
