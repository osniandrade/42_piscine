#!/bin/bash
read -p "Qual diretorio deseja validar? " diretorio
cd $diretorio
 norminette -R CheckForbiddenSourceHeader $diretorio
 cc -Wall -Werror -Wextra main.c rush$diretorio.c ft_putchar.c