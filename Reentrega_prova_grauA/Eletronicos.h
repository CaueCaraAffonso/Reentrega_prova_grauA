#pragma once
#include <string>
#include <iostream>

class Eletronicos {
private:
	std::string nome;
	float preco;
}; 

class Smartphone : Eletronicos{
private:
	std::string modelo;
	float armazenamento;
};

class Laptop : Eletronicos {
private:
	float tamanhoTela;
	std::string marca;
};

class Tablet : Eletronicos{
private:
	float duracaoBateria;
	std::string marca;

};


