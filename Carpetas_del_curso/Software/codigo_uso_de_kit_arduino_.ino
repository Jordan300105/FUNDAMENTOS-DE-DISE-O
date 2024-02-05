/*
  Explore IoT - Activity 01
 
  Read values from a temperature and humidity sensor
  and print it in Serial Monitor and on a colored display.
 
  This example uses the IoT carrier and the MKR WiFi 1010.
 
  Based on code by
  (c) 2019 D. Cuartielles for Arduino
 
  Written by:
  (c) 2020 K. SÃ¶derby for Arduino
 
  This code is Free Software licensed under GPLv3
*/
 
#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;
 
float temperature = 0;
float humidity = 0;
float kelvin =0;
float fare =0;
 
void setup() {
  Serial.begin(9600);
  //Wait to open the Serial monitor to start the program and see details on errors
 
 
  //Set if it has the Enclosure mounted
  CARRIER_CASE = true;
  //Initialize the IoTSK carrier and output any errors in the serial monitor
  carrier.begin();
}
 
void loop() {
  // read the sensor values
  temperature = carrier.Env.readTemperature();
  humidity = carrier.Env.readHumidity();
  kelvin = carrier.Env.readHumidity();
  fare=carrier.Env.readTemperature(FAHRENHEIT);
 
  //Update touch buttons
  carrier.Buttons.update();
  if (temperature<89){
        //first pixel, green
    carrier.leds.setPixelColor(0, 255, 0, 0);
    //second pixel, red
    carrier.leds.setPixelColor(1, 255, 0, 0);
    //third pixel, blue
    carrier.leds.setPixelColor(2, 255, 0, 0);
    //fourth pixel, purple
    carrier.leds.setPixelColor(3, 255, 0, 0);
    //fifth pixel, no color
    carrier.leds.setPixelColor(4, 255, 0, 0);
    carrier.Buzzer.sound(500); // Frequency is set to 500
   
    delay(1000); // The delay ensures the sound is on for 1000 milliseconds

    carrier.Buzzer.noSound(); // The sound is deactivated
   
    //update the pixels
    carrier.leds.show();
    carrier.display.fillScreen(ST77XX_RED);
    carrier.display.setTextColor(ST77XX_WHITE);
    carrier.display.setTextSize(4);
    carrier.display.setCursor(40, 120);
    carrier.display.print(temperature);
    carrier.display.print(" C");
    carrier.display.print(" hace calor");

  }
 
  // print each of the sensor values
  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" Â°C");
 
  Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.println(" %");
 
  //function to print out values
  if (carrier.Buttons.onTouchDown(TOUCH0)) {
    printTemperature();
  }
 
  if (carrier.Buttons.onTouchDown(TOUCH1)) {
    printHumidity();
  }
  if (carrier.Buttons.onTouchDown(TOUCH2)){
    changevalues();
  }
  if (carrier.Buttons.onTouchDown(TOUCH3)){
    changevalues2();
  }
}

void changevalues(){
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(kelvin+273);
  carrier.display.print(" K");
}

void changevalues2(){
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(fare);
  carrier.display.print(" F");
}
 
void printTemperature() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperature);
  carrier.display.print(" C");
}
 
 
 
 
void printHumidity() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_BLUE); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(2); //medium sized text
 
  carrier.display.setCursor(20, 110); //sets position for printing (x and y)
  carrier.display.print("Humi: ");
  carrier.display.print(humidity);
  carrier.display.println(" %");
}