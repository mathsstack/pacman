#include <stdio.h>
#include "mapa.h"

char desenhofantasma[4][7] = {
	{" .-.  "},
	{"| OO| "},
	{"|   | "},
	{"'^^^' "}

};

char desenhoparede[4][7] = {
	{"......" },
	{"......" },
	{"......" },
	{"......" }

};

char desenhoheroi[4][7] = {
	{" .--. " },
	{"/ _.-'" },
	{"\\ '-." },
	{" '--' " }

};

char desenhopilula[4][7] = {
	{"      "},
	{"  .-. "},
	{"  '-' "},
	{"      "}

};

char desenhovazio[4][7] = {

	{"      "},
	{"      "},
	{"      "},
	{"      "}

};

void imprimeparte(char desenho[4][7], int parte) {

	printf("%s", desenho[parte]);
}

void imprimemapa(MAPA* m) {

	for(int i = 0; i < m->linhas; i++) {
		for(int parte = 0; parte < 4; parte++) {
			for(int j = 0; j < m->colunas; j++) {

				switch(m->matriz[i][j]) {

					case FANTASMA:
					imprimeparte(desenhofantasma, parte);
					break;
					case HEROI:
					imprimeparte(desenhoheroi, parte);
					break;
					case PAREDE_HORIZONTAL:
					case PAREDE_VERTICAL:
					imprimeparte(desenhoparede, parte);
					break;
					case PILULA:
					imprimeparte(desenhopilula, parte);
					break;
					case VAZIO:
					imprimeparte(desenhovazio, parte);
					break;

				}
			}

		printf("\n");
		}
	}

}

