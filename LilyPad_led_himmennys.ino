// Määritetään ledien pinnit
int led = 11;   //ledi / ledi sarjan pinni

// 255 on maksimi kirkkaus, 0-255
int brightness = 20;
int fadeAmount = 5;


// Suorittaa kerran käynnistäessä
void setup() {
  // Asetetaan ledit ulostuloksi
  pinMode(led, OUTPUT);

}

// Ledi sarjan himmennys,
void ledi() {
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness  >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30); // 30millisekunttia odotusta
}



// Loop ajetaan jatkuvasti, tässä käytämme aikasemmin määritettyjä funktioita
void loop() {
  ledi();
}