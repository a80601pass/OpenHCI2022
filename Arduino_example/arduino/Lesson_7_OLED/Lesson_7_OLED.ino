#include <Arduino.h>
#include <U8x8lib.h>
U8X8_SSD1306_128X64_ALT0_HW_I2C u8x8(/* reset=*/ U8X8_PIN_NONE);
void setup() {
  u8x8.begin();
  u8x8.setFlipMode(1);
}

void loop() {
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  u8x8.setCursor(0, 0);//更改座標數值可改變文字位置
  u8x8.print("Hello World!");//更改冒號內文字可改變顯示內容
}
