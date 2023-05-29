# Ciclos Ex07
Escreva um programa que peça um valor n, maior ou igual a 3 e ímpar, ao utilizador, que corresponde à dimensão da linha central de um losango. Caso o número não tenha essas características escrever o erro e sair
Veja o exemplo

```shell
    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    * 

```

0 0 1 0 0
0 1 1 1 0
1 1 1 1 1
0 1 1 1 0
0 0 1 0 0

0  0  0  0  0  0  0  0  0  0  0  // triangulo trinomial
0  0  0  0  0  1  0  0  0  0  0
0  0  0  0  1  1  1  0  0  0  0
0  0  0  1  2  3  2  1  0  0  0
0  0  1  3  6  7  6  3  1  0  0
0  1  4  10 16 19 16 10 4  1  0
0  0  1  3  6  7  6  3  1  0  0
0  0  0  1  2  3  2  1  0  0  0
0  0  0  0  1  1  1  0  0  0  0
0  0  0  0  0  1  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0  0

se tiver n numeros na linha central,
vou ter o mesmo numero de colunas

n = lenght of lines;

for i < n:
    for j <= n/2 + 1 && j >= n/2 -1:
        printf(" * ")
    end
end

