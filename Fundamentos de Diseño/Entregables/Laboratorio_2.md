
## Usando la ecuación y la ley de Ohm:

$$
R = \frac{Voltaje de Trabajo - Voltaje umbral Diodo}{I}
$$

$$
V=I*R
$$

## Despejamos la siguiente ecuación para reducir el voltaje de salida de 5V a 1.1V

$$
Vout = \frac{R1}{R1+R2}*Vin
$$

Que usaremos para hallar las resistencias necesarias con el fin de cumplir con la reducción de voltaje.

$$
1.1V = \frac{R1}{R1+R2}*5V
$$

luego, despejando:

$$
R1=3.54*R2
$$

Por lo que, al usar una resistencia comercial de 10K Ohmios para R2, necesitaríamos una resistencia de 35k ohmios, aproximadamente, voltaje que podemos lograr al poner 3 resistencias de 10k ohmios en serie, sumadas a 2 en paralelo, según el esquema a continuación muestra:

<p align="center">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/eca8d018-c5af-4deb-8d6d-1387e55932df" alt="Your Image" width="500">
</p>


