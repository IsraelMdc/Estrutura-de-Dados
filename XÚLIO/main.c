#include "image.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    IMAGEM *original = ler_arquivo_ppm_p3("emu_facep3.ppm");
    if (original == NULL) {
        printf("Arquivo nao eh PPM P3 ou nao existe");
        return 1;
    }
    salvar_arquivo_ppm_p3("imagemsaida_original.ppm", original);
    IMAGEM *grayscale = escalaCinza(original);
    salvar_arquivo_ppm_p3("imagemsaida_gray.ppm", grayscale);
    destruir_imagem(original);
    destruir_imagem(grayscale);
    return 0;
}
