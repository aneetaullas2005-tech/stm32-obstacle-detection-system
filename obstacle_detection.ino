#define TRIG_PIN PB0
#define ECHO_PIN PB1
#define BUZZER_PIN PB10

long duration;
int distance;

void setup() {

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH, 30000);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if(distance < 20) {

    digitalWrite(BUZZER_PIN, HIGH);

  }
  else {

    digitalWrite(BUZZER_PIN, LOW);

  }

  delay(200);
}
