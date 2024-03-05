//create a simple light dimmer with adc and dac peripherals
int state=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(DAC0,OUTPUT);
  pinMode(A0, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogReadResolution(12);
  state=analogRead(A0);

  analogWriteResolution(12);
  analogWrite(DAC0, state);


}
