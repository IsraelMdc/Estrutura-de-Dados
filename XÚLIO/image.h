#ifndef IMAGE_H
#define IMAGE_H

typedef struct IMAGEM IMAGEM;
typedef struct PIXEL PIXEL;

IMAGEM *nova_imagem(int largura, int altura);
void destruir_imagem(IMAGEM *imagem);
PIXEL *pixel_da_imagem(IMAGEM *imagem, int x, int y);
IMAGEM *ler_arquivo_ppm_p3(const char *nome_arquivo);
void salvar_arquivo_ppm_p3(const char *nome_arquivo, IMAGEM *imagem);
IMAGEM *escalaCinza(IMAGEM *imagem);

#endif