#include <Gamebuino-Meta.h>
void setup() {  
  gb.begin();
}

void loop() {  
  while(!gb.update());  
  gb.display.clear();  
  Color c = gb.createColor(162, 62, 243);
  gb.display.setColor(c);
  gb.display.print("hello, world \n je teste des trucs");
}
  
