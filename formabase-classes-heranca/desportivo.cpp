
#include "desportivo.h"

void Desportivo::acelerar()
{
	velocidade = velocidade + 30;
}

std::string Desportivo::toString()
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
	res += "Motor: " + tostr(motor);
	res += "\n";
	res += "Velocidade: " + tostr(velocidade);
	res += "\n";

	return res;
}
