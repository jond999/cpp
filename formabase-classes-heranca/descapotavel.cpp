
#include "descapotavel.h"

void Descapotavel::abrir_fecharCapota()
{
	if(estadoCapota)
	{
		estadoCapota = false;

		std::cout << "Capota fechada!" << std::endl;

		return;
	}

	estadoCapota = true;

	std::cout << "Capota aberta!" << std::endl;
}

std::string Descapotavel::toString()
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
	res += "Estado da Capota: ";

	if(estadoCapota)
	{
		 res += "aberta";
	}
	else
	{
		res += "fechada";
	}

	res += "\n";

	return res;
}
