#include <stdio.h>
void resolver(char *argv)
{
	char matriz[4][4];
	int i;
	int j;
	j = 0;
	while(j < 4)
	{
		i = 0;
	}
}
int main(int argc, char *argv[])
{
	int i;
	int soma;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i + 8] != '\0')
		{
			printf("Valor atual: %c\n", argv[1][i]);
			if (i % 2 == 0)
			{
				if (argv[1][i] >= 49 && argv [1][i] <= 52)
					soma = argv[1][i] + argv[1][i + 8];
				else
					printf("Nao pode! (Nao entrou numeros entre 1 e 4)\n");
				if (!(soma >= 99 && soma <= 101))
					printf("Nao pode!(Soma passou de 1 e 5)\n");
			}
			else
			{
				if (argv[1][i] != ' ' && argv[1][i] + 8 != ' ')
					printf("Nao pode! (Espaços estão dentro)\n");
			}
			i++;
		}
		if (i + 8 == 31)
			resolver(argv);
		else
			printf("Nao passou! (Somatoria passou de 31)\n");
	}
	else
		printf("Não Passou! (Passou dos argsc)\n");
}