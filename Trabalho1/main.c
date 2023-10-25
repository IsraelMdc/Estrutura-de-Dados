#include <stdio.h>
#include <stdlib.h>

typedef struct PIXEL {
    int r, g, b;
} PIXEL;

typedef struct IMAGEM {
    int largura;
    int altura;
    int maxcor;
    PIXEL *pixels;
} IMAGEM;

IMAGEM *nova_imagem(int largura, int altura, int maxcor) {
    IMAGEM *imagem = (IMAGEM *) malloc(sizeof(IMAGEM));
    imagem->pixels = (PIXEL *) malloc(largura * altura * sizeof(PIXEL));
    imagem->largura = largura;
    imagem->altura = altura;
    imagem->maxcor = maxcor;
    return imagem;
}

void destruir_imagem(IMAGEM *imagem) {
    free(imagem->pixels);
    free(imagem);
}

PIXEL *pixel_da_imagem(IMAGEM *imagem, int x, int y) {
    return &(imagem->pixels[y * imagem->largura + x]);
}

IMAGEM *ler_arquivo_ppm_p3(const char *nome_arquivo) {
    FILE *arq = fopen(nome_arquivo, "r");
    if (arq == NULL) return NULL;
    int largura, altura, maxcor, x, y;
    IMAGEM *imagem = NULL;
    char formato[6];
    fgets(formato, 6, arq);
    if (strcmp("P3\n", formato) == 0) {
        fscanf(arq, "%d", &largura);
        fscanf(arq, "%d", &altura);
        fscanf(arq, "%d", &maxcor);
        imagem = nova_imagem(largura, altura, maxcor);
        for (y = 0; y < altura; y++) {
            for (x = 0; x < largura; x++) {
                PIXEL *p = pixel_da_imagem(imagem, x, y);
                fscanf(arq, "%d", &(p->r));
                fscanf(arq, "%d", &(p->g));
                fscanf(arq, "%d", &(p->b));
            }
        }
    }
    fclose(arq);
    return imagem;
}

void salvar_arquivo_ppm_p3(const char *nome_arquivo, IMAGEM *imagem) {
    FILE *arq = fopen(nome_arquivo, "w");
    int x, y;
    fprintf(arq, "P3\n%d %d\n%d", imagem->largura, imagem->altura, imagem->maxcor);
    for (y = 0; y < imagem->altura; y++) {
        for (x = 0; x < imagem->largura; x++) {
            PIXEL *p = pixel_da_imagem(imagem, x, y);
            fprintf(arq, "\n%d %d %d", p->r, p->g, p->b);
        }
    }
    fclose(arq);
}

IMAGEM *escalaCinza(IMAGEM *imagem) {
    int i, j;
    int mediaCores;

    for (i = 0; i < imagem->altura; i++) {
        for (j = 0; j < imagem->largura; j++) {
            // Calcula a média das componentes de cor
            mediaCores = (imagem->pixels[i * imagem->largura + j].r +
                           imagem->pixels[i * imagem->largura + j].g +
                           imagem->pixels[i * imagem->largura + j].b) / 3;

            // Atribui a média a todas as componentes de cor
            imagem->pixels[i * imagem->largura + j].r = mediaCores;
            imagem->pixels[i * imagem->largura + j].g = mediaCores;
            imagem->pixels[i * imagem->largura + j].b = mediaCores;
        }
    }
    return imagem;
}


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