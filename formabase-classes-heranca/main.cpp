
#include <iostream>
#include <string>

#include "carro.h"
#include "desportivo.h"
#include "compacto.h"
#include "descapotavel.h"

int main()
{
	std::cout << std::endl;

	// CARRO INICIALIZADO SEM ARGUMENTOS
	Carro *c1 = new Carro();

	c1->setMarca("BMW");
	c1->setModelo("Serie 1 123d");
	c1->setCor("azul");
	c1->setPreco(20500);
	c1->setPotencia(211);

	std::cout << std::endl;
	std::cout << "velocidade inicial: " << c1->getVelocidade() << std::endl;
	
	std::cout << std::endl;
	std::cout << "c1 depois de acelerar\n.\n.\n." << std::endl;

	c1->acelerar();
	
	std::cout << "velocidade: " << c1->getVelocidade() << std::endl;
	
	std::cout << std::endl;
	std::cout << "c1 depois de acelerar\n.\n.\n." << std::endl;

	c1->acelerar();
	
	std::cout << "velocidade: " << c1->getVelocidade() << std::endl;
	
	std::cout << std::endl;
	std::cout << "c1 depois de travar\n.\n.\n." << std::endl;

	c1->travar();
	
	std::cout << "velocidade: " << c1->getVelocidade() << std::endl;

	std::cout << std::endl;
	delete(c1);

	std::cout << std::endl;
	std::cout << "/////////////////////////////////////////////////////\n" << std::endl;

	// CARRO INICIALIZADO COM ARGUMENTOS
	Carro *c2 = new Carro("BMW", "Serie 550i V8", "preto", 111550, 407);

	std::cout << std::endl;
	std::cout << "c2 depois de acelerar\n.\n.\n." << std::endl;

	c2->acelerar();

	std::cout << "velocidade: " << c2->getVelocidade() << std::endl;

	std::cout << std::endl;
	delete(c2);

	std::cout << std::endl;
	std::cout << "/////////////////////////////////////////////////////\n" << std::endl;

	// DESPORTIVO
	Carro *pc3 = new Desportivo("Ferrari", "F12 Berlinetta coupe", "red", 359982, 740, "dohc");

	pc3->acelerar();

	std::cout << std::endl;
	std::cout << pc3->toString() << std::endl;

	delete(pc3);

	std::cout << std::endl;
	std::cout << "/////////////////////////////////////////////////////\n" << std::endl;

	// COMPACTO
	Carro *pc4 = new Compacto("Honda", "Civic Sedan", "silver", 20789, 201);

	pc4->acelerar();

	std::cout << std::endl;
	std::cout << pc4->toString() << std::endl;

	delete(pc4);

	std::cout << std::endl;
	std::cout << "/////////////////////////////////////////////////////\n" << std::endl;

	// DESCAPOTÁVEL
	Carro *pc5 = new Descapotavel("Audi", "R8 Spyder V10 quattro AWD", "yellow", 164150, 610, true);

	pc5->acelerar();

	std::cout << std::endl;
	std::cout << pc5->toString() << std::endl;

	delete(pc5);

	std::cout << std::endl;
	std::cout << "/////////////////////////////////////////////////////\n" << std::endl;
}
