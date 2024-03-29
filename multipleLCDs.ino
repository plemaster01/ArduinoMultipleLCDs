#include <LCD_I2C.h>

LCD_I2C lcd1(0x27, 20, 4); // assign each led to an LCD_I2C instance
LCD_I2C lcd2(0x26, 20, 4);
LCD_I2C lcd3(0x25, 20, 4);

String questions[9] = {
  "Why can't a leopard hide?", 
  "How do moths swim?",
  "What do you call illegally parked frogs?",
  "How many tickles make an octopus laugh?",
  "What do you get from a pampered cow?",
  "What did the duck buying chapstick say?",
  "Where do baby cats learn to swim?",
  "Which is faster, hot or cold?",
  "How do you organize a space party?"
};

String answers[9] = { 
  "Because he's always spotted.",
  "Using the butterfly stroke.",
  "Toad.",
  "10 Tickles.",
  "Spoiled Milk.",
  "Put It On My Bill.",
  "The Kitty Pool.",
  "Hot - You Can Catch a Cold.",
  "You Planet."
};

void setup() {
  lcd1.begin();
  lcd1.backlight();
  lcd1.print("Hello World 1!");
  lcd2.begin();
  lcd2.backlight();
  lcd2.print("Hello World 2!");
  lcd3.begin();
  lcd3.backlight();
}


void clear(){
  lcd1.clear();
  lcd2.clear();
  lcd3.clear();
}


void loop() {
  for (int i = 0; i < 9; i++){
  clear();
  lcd1.print(questions[i]);
  delay(2000);
  lcd2.print(answers[i]);
  lcd3.print("please stop");
  delay(5000);
  clear();
  }
}
