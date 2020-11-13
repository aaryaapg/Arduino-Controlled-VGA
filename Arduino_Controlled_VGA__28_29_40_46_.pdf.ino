void setup() {
pinMode(2, OUTPUT);// to pin 13
pinMode(3, OUTPUT);// to pin 5 
pinMode(4, OUTPUT);// to pin 6 
pinMode(5, OUTPUT);// to pin 12 
Serial.begin(9600);
}
char cmd;
void loop() {
while (Serial.available() > 0) {
cmd = char(Serial.read());
if (cmd == '0') {
digitalWrite(2, 1);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 0);
}
if (cmd == '1') {
digitalWrite(2, 0);
digitalWrite(3, 1);
digitalWrite(4, 0);
digitalWrite(5, 0);
}
if (cmd == '2') {
digitalWrite(2, 0);
digitalWrite(3, 0);
digitalWrite(4, 1);
digitalWrite(5, 0);
}
if (cmd == '3') {
digitalWrite(2, 0);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 1);
}
if (cmd == '4') {
digitalWrite(2, 1);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 1);
}
if (cmd == '5') {
digitalWrite(2, 1);
digitalWrite(3, 0);
digitalWrite(4, 1);
digitalWrite(5, 0);
}
if (cmd == '6') {
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 0);
digitalWrite(5, 0);
}
if (cmd == '7') {
digitalWrite(2, 0);
digitalWrite(3, 1);
digitalWrite(4, 0);
digitalWrite(5, 1);
}
if (cmd == '8') {
digitalWrite(2, 0);
digitalWrite(3, 1);
digitalWrite(4, 1);
digitalWrite(5, 0);
}
if (cmd == '9') {
digitalWrite(2, 0);
digitalWrite(3, 0);
digitalWrite(4, 1);
digitalWrite(5, 1);
}
}
}
