
 /****
 +*
 +* TÍTULO: FUNÇÃO COMPACTAR PARA LZ78
 +*
 +* AUTOR: ÍCARO MARADEI COSTA BORGES
 +*
 +* DATA DA CRIAÇÃO: 16/08/2017
 +* ÚLTIMA MODIFICAÇÃO: 17/08/2017
 +*
 +* DESCRIÇÃO: ESTA FUNÇÃO IRÁ REALIZAR A COMPRESSÃO DE DETERMINADA ENTRADA ATRAVÉS DO ALGORITMO LZ78
 +*
 +* PARÂMETRO: - (char *): UM PONTEIRO A CHAR, COM A SEQUÊNCIA A SER COMPACTADA
 +*            - (int): UM INTEIRO NO QUAL DEVE SE PASSAR O NÚMERO DE ÍNDICES DESEJADO PARA O DICIONÁRIO
 +*            - (int): UM INTEIRO NO QUAL DEVE SE PASSAR O TAMANHO MÁXIMO DOS TERMOS DO DICIONÁRIO
 +*
 +*
 +* VALOR DE RETORNO: (void)
 +****/
 char** compactar_lz78(char* sequencia, int tam_dicionario, int tam_string);
