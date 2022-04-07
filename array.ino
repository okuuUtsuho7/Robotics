//Array programming because I actually missed last session lol


// intigers
int LEDpin[5] = { 2, 3, 4, 5, 6 };
long ranPins;


//Calling all LEDS
void setup()
{
	pinMode(LEDpin[0], OUTPUT); //pin 1
	pinMode(LEDpin[1], OUTPUT); //pin 2
	pinMode(LEDpin[2], OUTPUT); //pin 3
	pinMode(LEDpin[3], OUTPUT); //pin 4
	pinMode(LEDpin[4], OUTPUT); //pin 5
	randomSeed(analogRead(0));
}


//RNG go brrrrr
void loop()
{
	ranPins = random(2, 7);
	
	digitalWrite(ranPins, HIGH);
	delay(300);

	digitalWrite(ranPins, LOW);
	delay(300);
}
