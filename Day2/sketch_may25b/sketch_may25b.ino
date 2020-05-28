int led=13, input=3, state;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(input, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  state=digitalRead(input);
  digitalWrite(led, state);

}
