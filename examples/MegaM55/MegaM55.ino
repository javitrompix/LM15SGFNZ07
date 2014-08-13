/* Siemens M55 LCD (LM15SGFNZ07) 
 * 
 * Ejemplo del uso de la libreria modificada de:
 * Mindogas 2011 | markauskas.mindaugas at gmail.com
 */

#include <SPI.h>
#include <LM15SGFNZ07.h>

//LM15SGFNZ07 lcd(41,38,39,52,51); //configing lcd conectivity
LM15SGFNZ07 lcd(51,52,39,38,41); //configing lcd conectivity

void setup()
{
  pinMode(13, OUTPUT);
  digitalWrite(13,LOW);
  delay(100);
  
  lcd.init_lcd();
  lcd.contrast_lcd(0x11c); //setting new contrast
  delay(100);
}
void loop()
{
  lcd.clear_lcd(RED);
  delay(2000);
  lcd.clear_lcd(GREEN);
  delay(2000);
  lcd.clear_lcd(BLUE);
  delay(2000);
  lcd.clear_lcd(BLACK);
  delay(2000);
  lcd.clear_lcd(WHITE);
  delay(2000);
  lcd.str_lcd("TestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcdTestlcd",1, 1, 1, BLACK, -1);
  lcd.clear_lcd(WHITE);
  delay(2000);
  lcd.str_lcd("test lcd",5, 2, 1, BLACK, -1);
  lcd.clear_lcd(WHITE);
  delay(2000);
   lcd.str_lcd("TEST LCD",1, 2, 2, RED, WHITE);
   lcd.clear_lcd(WHITE);
  delay(2000);
   lcd.line_lcd(0, 101,35 , 35,  GREEN);
   lcd.clear_lcd(WHITE);
  delay(2000);
   lcd.line_lcd(0, 101,37 , 37,  ORANGE);
   lcd.clear_lcd(WHITE);
  delay(2000);
   lcd.frame_lcd(3, 10, 10 , 40, 3, BLUE);
   lcd.clear_lcd(WHITE);
  delay(2000);
   lcd.area_lcd(45, 10, 10 , 40,  BROWN);
   lcd.clear_lcd(WHITE);
  delay(2000);
}
