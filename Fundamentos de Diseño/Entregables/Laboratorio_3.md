# INTERNET DE LAS COSAS (IoT)
Es una red global de dispositivos conectados que intercambian datos digitalizados.  Esta interconexión abarca desde objetos simples hasta sistemas complejos, generando una nueva era de computación distribuida a través de Internet. Entidades como lámparas, teléfonos, electrodomésticos y automóviles se comunican entre sí, permitiendo diversas aplicaciones, desde el control remoto de dispositivos hasta sistemas de gestión avanzada.

## A continuación, mostraremos el encapsulado del Carrier:

<p align="center">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/abf54205-be26-45cd-a683-8cfa7f9d01e0" width="460" alt="Your Image">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/6532dab0-1e3d-43ab-8f25-3d2ef5b2ebd1" width="400" alt="Your Image">
</p>


## Para la siguiente actividad:
Primero tenemos que montar la placa Arduino MKR WiFi 1010 sobre la MKR IoT Carrier; luego, conectamos con la laptop para que este funcione.

<p align="center">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/54f76db5-1a11-4b91-b0ca-1f06e66d3ac2" width="460" alt="Your Image">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/3d0792f2-a1a3-4175-b094-8098bc7b9905" width="400" alt="Your Image">
</p>


## Arduino MKR WiFi 1010:
Es una placa microcontroladora con un chip que nos permite realzar conexión inalámbrica Wi-Fi o Bluetooth a otros ordenadores, La Arduino MKR WiFi 1010 es fácilmente reconocible por su diseño, siendo parte de la familia de placas MKR.
### Recolectar datos: 
Las dos características particulares: es el sensor de temperatura y humedad, y la pantalla que se usará para imprimir los datos. Este sensor se llama HTS221
# PRIMERA ACTIVIDAD: 
### Lectura de la temperatura y humedad: 

<p align="center">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/a6e47d2d-522d-4aeb-87da-8448c6179130" alt="Your Image">
</p>

# SEGUNDA ACTIVIDAD: 
Mostrar los valores de la temperatura en las diferentes escalas, Celsius, Fahrenheit y Kelvin al presionar diferentes sensores touch (en este caso los espacios 2 y 3). Para esto, creamos las variables globales de kelvin y fahrenheit, así como las funciones que se encargan de medir en dichas escalas.
<p align="center">

| Escala | Medida |
|--------------|--------------|
| Medida de la temperatura en Fahrenheit **(usando la función carrier.Env.readTemperature(FAHRENHEIT), según estaba explicado en la guía)** | <p align="center"><img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/a9400d8c-e678-427e-a293-2a5c7f33ebc6" width="440" alt="Your Image"></p>    |
| Medida de la temperatura en Celsius **(con la función carrier.Env.readTemperature())**| <p align="center"><img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/3cca2d49-2b1b-4779-9c1c-f67da1b8321f" width="400" alt="Your Image"></p>    |
| Medida de la temperatura en Kelvin  **(leyendo la temperatura en celsius y sumando 273.15)**  | <p align="center"><img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/f39ea474-50dc-4103-b37e-72e134cd9acc" width="400" alt="Your Image"></p>    |
</p>

# TERCERA ACTIVIDAD: 
Usando el sensor integrado del MKR IoT Carrier, logramos hacer que al bajar la temperatura del ambiente (en un rango pequeño, debido a la dificultad para variar la temperatura en el laboratorio) el programa detecte estas diferencias y cambie de color, mostrando mensajes variantes de frío y calor, junto a un zumbido del buzzer y el encendido de las luces led integradas, mostrando diferentes colores dependiendo de la temperatura.
<p align="center">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/b248cf30-76ad-4e0d-8162-67764a32489a" width="460" alt="Your Image">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/18daa3e7-6092-452e-987f-06c2f2fe6b5c" width="480" alt="Your Image">
</p>

## Demostramos también el funcionamiento con alimentación externa, en este caso, una batería:

<p align="center">
  <img src="https://github.com/Jordan300105/FUNDAMENTOS-DE-DISE-O/assets/150297452/cf4720df-5e28-469c-8eab-f1a37c8933ec" width="460" alt="Your Image">
  
</p>



