#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
main()
{
		srand( (unsigned)time(NULL) );
		int i, qtdJ, x, k, j, f, result[6], cont; // criação de variáveis
		printf("Quantas vezes voce quer jogar o dado: ");//entrada de dados
		scanf("%d", &qtdJ);
		int r[qtdJ];//vetor r do tamanho do numero de jogadas.
		for(i = 0; i< qtdJ; i++)
		{
			x = 1+(rand()%6);//geracao de n aleatorio de 1 a 6.
			r[i] = x;	//alocando o resultado de cada jogada em uma casa do vetor r.
		}
		for(k = 1; k < 7; k++) //controlando numero de faces do dado
		{
			for(j = 0; j < qtdJ; j++) // controlando cada jogada 
			{
				if(k == r[j]) //comparando cada face do dado com cada jogada feita.
				{
					cont = cont+1; //armazenar a quantidade de vezes q a face aparece no vetor.
				}
				result[k-1] = cont; //alocando os resultando nas posicoes de um vetor de 6
			}
			cont =0; //zerando a contagem.
		}
		for(f = 0; f < 6; f++)
		{
			printf("\nFace: %d: %d",f+1, result[f]); //imprimindo a qtd de vezes que cada face apareceu.
		}	
}