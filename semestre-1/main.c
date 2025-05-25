#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *nome;
	float kWh;
	int prioridade; // 1 = alta; 2 = média; 3 = baixa
	int estado; // 0 = desligado; 1 = ligado
} Dispositivo;

void cadastro(Dispositivo *p) {
// fgets(); ...
// malloc(); ...
}

void exibicao(const Dispositivo *p) {
// if (prioridade == 1) {
// 	printf("Alta");
// } ...
}

void prioridade(Dispositivo *lista, int n) {
// for () {...} ...
// if () {...} ...
}

void ativar(Dispositivo *lista, int n, float energia) {
// for () {...} ...
// if () {...} ...
}

int main() {
	int n;
	float energia;

	// malloc(); ...

	// for () {...} ...
	
	// for (...) { free(); ... } ...
	// free(); ...

	return 0;
}
