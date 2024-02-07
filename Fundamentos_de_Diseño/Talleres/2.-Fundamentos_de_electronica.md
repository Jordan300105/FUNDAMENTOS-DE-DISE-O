# Laboratorio 2.- Ejercicios Fundamentos de Electrónica

[MÁS SOBRE NOSOTROS](https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/blob/main/Fundamentos%20de%20Diseño/Entregables/Sobre_nosotros.md)

## Para la realización de los circuitos, seguimos los códigos de colores para identificar el valor de cada una de nuestras resistencias.


<p align="center">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/08c05945-f9d4-44f9-bd3c-da0fbf22f94d" alt="Your Image" width="500">
   
</p>

> Imagen extraída de: https://www.areatecnologia.com/electricidad/codigo-de-colores-de-resistencias.html

Llegando al consenso en equipo de usar resistencias de 10k Ohmios.

<p align="center">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/b7949d28-2f7a-4558-af36-a855b2c89c31" alt="Your Image" width="300">
</p>

> Imagen extraída de: https://www.electrocomponentes.es/fijas/49-resistencia-10k-ohm-025w.html

# Se usará la plataforma TinkerCad para más claridad en la representación de los circuitos.
# Ejercicio 1
Realizando los cálculos, obtenemos una resistencia total esperada de 6.6k ohmios, que, al ser medidos con el multitester y dar valores muy cercanos, confirman que el circuito es correcto. 

<p align="center">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/1bcb99d2-1cd9-4b88-a0b4-1d7fa0cd3c8a" alt="Your Image" width="500">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/ae531941-9ad9-4f73-97c0-9e482dc89b69" alt="Your Image" width="500">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/4c60229a-bd4c-4ceb-8400-a1d4ef6b84ee" alt="Your Image" width="500">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/9bc74dfc-83fc-410f-bcaa-2e41dd2be4d2" width="500">

</p>



# Ejercicio 2

Al usar resitencias de 10k ohmios, realizamos el cálculo y obtuvimos un valor de resitencia total de 4K ohmios. Valor que, al ser medido con el multitester, concuerda con los cálculos realizados.

<p align="center">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/ea299a5c-d604-4545-8d65-f246ddd687c6" alt="Your Image" width="500">
</p>
<p align="center">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/e64f5bcf-6cc7-4547-8e4d-de153fca6369" alt="Your Image" width="470">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/915acf25-8022-4dcc-abef-19d6cf02c47f" alt="Your Image" width="470">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/f46397bf-9fc4-4ebe-9057-fa0de5eb080c" alt="Your Image" width="500">
</p>


### El caso de este ejercicio presenta una situación interesante, puesto que la resistencia R5 está conectada en sus dos extremos al mismo punto, siendo, efectivamente, innecesaria, por lo que no afecta a la resistencia total del circuito





# Ejercicio 3

Usando resistencias de 10k ohmios, identificamos la forma de realizar el circuito y cumpla con los requerimientos al contar con 3 niveles en paralelo de 2 circuitos de serie cada una. Con los cálculos realizados y el multitester mostrando la resistencia de 4K ohmios confirmramos la correctitud del circuito.

<p align="center">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/7fe690a2-dd2f-4b40-999a-6eeb91d5a17d" alt="Your Image" width="500">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/7a9a7f0e-2653-4fd6-aafe-bfd2d27ec75c" alt="Your Image" width="500">
    <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/d47d96ea-d62b-4ff8-aa88-daa2fb08faea" alt="calculo" width="500">
        <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/fdc633d2-28b1-48f7-9b01-0ecb577d24ac" alt="Your Image" width="500">


</p>







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






