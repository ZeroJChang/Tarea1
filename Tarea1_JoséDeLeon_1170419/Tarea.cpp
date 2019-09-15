#include "Tarea.h"
#include <string>


//STACKOVERFLOW 
double Tarea::Multiplicacion(double sumador, double multiplicando) {
	if (multiplicando == 0 || sumador == 0) {
		return  0;
	}
	else {
		return sumador + Multiplicacion(sumador, multiplicando - 1);
	}

}


//STACKOVERFLOW
int Tarea::Palindromas(System::String^ palabra) {
	int num = palabra->Length;
	bool estado;
	int l = palabra->Length - 1, contt = 0;

	for (int j = 0; j < palabra->Length - 1; j++)
	{
		if (palabra[j] != palabra[l - j])
		{
			estado = false;
			contt++;
		}
		else if (contt == 0)
		{
			estado = true;

		}

	}
	if (estado) {
		return 1;
	}
	else
	{
		return 0;
	}
}