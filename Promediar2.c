/*
 ============================================================================
 Promedio de lineas in C, Ansi-style
 Felitti Renzo
 13/5/2015
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int nl, nc, c;

	for (nl = 0, nc = 0; (c = getchar()) != EOF;) {
		c == '\n' ? ++nl : ++nc;
	}

	ferror(stdin) ? perror("No se pudo seguir leyendo de la entrada debido a un error") :
	nl == 0 ? printf("Longitud promedio = 0") : printf("Longitud promedio: %.1f\n", nc / (float) nl);

	return EXIT_SUCCESS;
}
