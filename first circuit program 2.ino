//Pls rand do not blow up the bulbs

int blueLed = 7;
int yellowLed = 2;
int redLed = 4;
int greenLed = 8;

void setup() 
{
	pinMode(blueLed, OUTPUT);
	pinMode(yellowLed, OUTPUT);
	pinMode(redLed, OUTPUT);
	pinMode(greenLed, OUTPUT);
}

void loop()
{
	digitalWrite(blueLed, HIGH);
	delay(500);
	digitalWrite(blueLed, LOW);
	delay(500);
	digitalWrite(yellowLed, HIGH);
	delay(500);
	digitalWrite(yellowLed, LOW);
	delay(500);
	digitalWrite(redLed, HIGH);
	delay(500);
	digitalWrite(redLed, LOW);
	delay(500);
	digitalWrite(greenLed, HIGH);
	delay(500);
	digitalWrite(greenLed, LOW);
	delay(500);
}