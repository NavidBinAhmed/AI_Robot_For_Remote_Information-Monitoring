//Copyright-navid, navid_bin_ahmed@yahoo.com DHT average data received at remote LCD from the info robot 

// Include needed libraries
#include <VirtualWire.h>
#include <LiquidCrystal.h>

// Definitions for the LCD connections
#define RS 9
#define E  8
#define D4 5
#define D5 4
#define D6 3
#define D7 2

LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

// "Drawing" the degree symbol
byte degreesymbol[8] = {
  B01100,
  B10010,
  B10010,
  B01100,
  B00000,
  B00000,
  B00000,
  B00000  
};

// Variables
int avgTemp = 0;
int i;
int avghum=0;

// Setup function - run one time
void setup() {
  lcd.begin(16,2);                  // Defining the LCD
  lcd.createChar(1, degreesymbol);  // Creating the degree symbol at place 1
  Serial.begin(9600);              // For debugging purpose
  vw_setup(4800);                  // VirtualWire communication speed
  vw_rx_start();                   // Getting redy to receive
  vw_set_rx_pin(6);                // VirtualWire receive pin
  lcd.clear();                     // Clear the LCD
}

// Loop function - runs forever
void loop() {

  uint8_t buf[VW_MAX_MESSAGE_LEN];      // Variable to hold the received data
  uint8_t buflen = VW_MAX_MESSAGE_LEN;  // Variable to hold the length of the received data 
{
void Temp1() {
  lcd.setCursor(0,0);  
  lcd.print("Temp1: ");
  if (vw_get_message(buf, &buflen))    // If data is received
  {
    for (i=0;i<2;i++)               // Get the two first bytes
  {
  Serial.write(buf[i]);                // Debugging purpose
  lcd.write(buf[i]);                   // Write the first bytes on the LCD
  }  
  Serial.println();                    // Debugging purpose
  lcd.write(1);                        // Write the degree symbol on the LCD
  lcd.print(" C"); 
  lcd.setCursor(0,1);
  lcd.print("Hum1: "); 
    for (i=2;i<4;i++)              // Get the two last bytes
    {
      Serial.write(buf[i]);                // Debugging
      lcd.write(buf[i]);                    // Write the last bytes on the lcd
    }  
  lcd.print("% RH");      
  }
  delay(4000);
  }

void Temp2() {
  lcd.setCursor(0,0);  
  lcd.print("Temp2: ");
  if (vw_get_message(buf, &buflen))    // If data is received
  {
    for (i=0;i<2;i++)               // Get the two first bytes
  {
  Serial.write(buf[i]);                // Debugging purpose
  lcd.write(buf[i]);                   // Write the first bytes on the LCD
  }  
  Serial.println();                    // Debugging purpose
  lcd.write(1);                        // Write the degree symbol on the LCD
  lcd.print(" C"); 
  lcd.setCursor(0,1);
  lcd.print("Hum2: "); 
    for (i=2;i<4;i++)              // Get the two last bytes
    {
      Serial.write(buf[i]);                // Debugging
      lcd.write(buf[i]);                    // Write the last bytes on the LCD
    }  
  lcd.print("% RH");      
  }
 delay(4000);
}
 void Temp3() 
 {
  lcd.setCursor(0,0);  
  lcd.print("Temp3: ");
  if (vw_get_message(buf, &buflen))    // If data is received
  {
    for (i=0;i<2;i++)               // Get the two first bytes
  {
  Serial.write(buf[i]);                // Debugging purpose
  lcd.write(buf[i]);                   // Write the first bytes on the LCD
  }  
  Serial.println();                    // Debugging purpose
  lcd.write(1);                        // Write the degree symbol on the LCD
  lcd.print(" C"); 
  lcd.setCursor(0,1);
  lcd.print("Hum3: "); 
    for (i=2;i<4;i++)              // Get the two last bytes
    {
      Serial.write(buf[i]);                // Debugging
      lcd.write(buf[i]);                    // Write the last bytes on the LCD
    }  
  lcd.print("% RH");      
  }
   delay(4000);
}
 void Temp4() 
 {
  lcd.setCursor(0,0);  
  lcd.print("Temp4: ");
  if (vw_get_message(buf, &buflen))    // If data is received
  {
    for (i=0;i<2;i++)               // Get the two first bytes
  {
  Serial.write(buf[i]);                // Debugging purpose
  lcd.write(buf[i]);                   // Write the first bytes on the LCD
  }  
  Serial.println();                    // Debugging purpose
  lcd.write(1);                        // Write the degree symbol on the LCD
  lcd.print(" C"); 
  lcd.setCursor(0,1);
  lcd.print("Hum4: "); 
    for (i=2;i<4;i++)              // Get the two last bytes
    {
      Serial.write(buf[i]);                // Debugging
      lcd.write(buf[i]);                    // Write the last bytes on the LCD
    }  
  lcd.print("% RH");      
  }
   delay(4000);
}
 void Temp5() 
 {
  lcd.setCursor(0,0);  
  lcd.print("Temp5: ");
  if (vw_get_message(buf, &buflen))    // If data is received
  {
    for (i=0;i<2;i++)               // Get the two first bytes
  {
  Serial.write(buf[i]);                // Debugging purpose
  lcd.write(buf[i]);                   // Write the first bytes on the LCD
  }  
  Serial.println();                    // Debugging purpose
  lcd.write(1);                        // Write the degree symbol on the LCD
  lcd.print(" C"); 
  lcd.setCursor(0,1);
  lcd.print("Hum5: "); 
    for (i=2;i<4;i++)              // Get the two last bytes
    {
      Serial.write(buf[i]);                // Debugging
      lcd.write(buf[i]);                    // Write the last bytes on the LCD
    }  
  lcd.print("% RH");      
  }
   delay(4000);
}
 void Avg() {
  lcd.setCursor(0,0);  
  lcd.print("avgTemp: ");
  if (vw_get_message(buf, &buflen))    // If data is received
  {
    for (i=0;i<2;i++)               // Get the two first bytes
  {
  Serial.write(buf[i]);                // Debugging purpose
  lcd.write(buf[i]);                   // Write the first bytes on the LCD
  }  
  Serial.println();                    // Debugging purpose
  lcd.write(1);                        // Write the degree symbol on the LCD
  lcd.print(" C"); 
  lcd.setCursor(0,1);
  lcd.print("avgHum: "); 
    for (i=2;i<4;i++)              // Get the two last bytes
    {
      Serial.write(buf[i]);                // Debugging
      lcd.write(buf[i]);                    // Write the last bytes on the LCD
    }  
  lcd.print("% RH");      
  }
   delay(4000);
}
}
