
#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <sstream>
#include <string>

class Carro
{
	protected:
		std::string marca;
		std::string modelo;
		std::string cor;
		float preco;
		int potencia;
		int velocidade;

	public:
		Carro();
		Carro(std::string m, std::string mod, std::string c, float p, int pot);
		virtual ~Carro();
		
		virtual void acelerar();
		void travar();

		virtual std::string toString();

		inline std::string getMarca()
		{
			return marca;
		}

		inline std::string getModelo()
		{
			return modelo;
		}

		inline std::string getCor()
		{
			return cor;
		}

		inline float getPreco()
		{
			return preco;
		}

		inline int getPotencia()
		{
			return preco;
		}

		inline int getVelocidade()
		{
			return velocidade;
		}

		inline void setMarca(std::string novaMarca)
		{
			marca = novaMarca;
		}

		inline void setModelo(std::string novoModelo)
		{
			modelo = novoModelo;
		}

		inline void setCor(std::string novaCor)
		{
			cor = novaCor;
		}

		inline void setPreco(float novoPreco)
		{
			preco = novoPreco;
		}

		inline void setPotencia(int novaPotencia)
		{
			potencia = novaPotencia;
		}

		inline void setVelocidade(int novaVelocidade)
		{
			velocidade = novaVelocidade;
		}

		template <typename T> std::string tostr(const T& t)
		{
		   std::ostringstream os;

		   os << t;

		   return os.str();
		}
};

#endif
