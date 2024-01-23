# Ejercicio 1

# Ejercicio 2

Al usar resitencias de 10k ohmios, realizamos el cálculo y obtuvimos un valor de resitencia total de 4K ohmios. Valor que, al ser medido con el multitester, concuerda con los cálculos realizados.

<p align="center">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/ea299a5c-d604-4545-8d65-f246ddd687c6" alt="Your Image" width="500">
</p>
<p align="center">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/915acf25-8022-4dcc-abef-19d6cf02c47f" alt="Your Image" width="470">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/075bf3d6-b721-4b25-ab95-f76f43aefa5f" alt="Your Image" width="500">
</p>

### El caso de este ejercicio presenta una situación interesante, puesto que la resistencia R5 está conectada en sus dos extremos al mismo punto, siendo, efectivamente, innecesaria, por lo que no afecta a la resistencia total del circuito




# Ejercicio 3





# Circuito Divisor de Tensión: 

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

<br> Que usaremos para hallar las resistencias necesarias con el fin de cumplir con la reducción de voltaje. <br>

$$
1.1V = \frac{R1}{R1+R2}*5V
$$

<br> luego, despejando:

$$
R1=3.54*R2
$$

<br> Por lo que, al usar una resistencia comercial de 10K Ohmios para R2, necesitaríamos una resistencia de 35k ohmios, aproximadamente, voltaje que podemos lograr al poner 3 resistencias de 10k ohmios en serie, sumadas a 2 en paralelo, según el esquema a continuación muestra:

<p align="center">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/eca8d018-c5af-4deb-8d6d-1387e55932df" alt="esquema" width="500">
</p>

### Logrando así, finalmente, el voltaje de 1.1 Voltios.

<p align="center">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/7bff15a3-8184-4c7d-8b72-e79eba81b89a" alt="circuito" width="500">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/0d0799d6-276b-4e8d-96d4-413efd70ce48" alt="calculo" width="500">
</p>






