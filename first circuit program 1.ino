// first circuit program

int yellow1 = 7;
int yellow2 = 2;
int blue1 	= 4;
int blue2	= 8;

void setup()
{
	pinMode(yellow1, OUTPUT);
	pinMode(yellow2, OUTPUT);
	pinMode(blue1,OUTPUT);
	pinMode(blue2, OUTPUT);
}

void loop()
{
	digitalWrite(yellow1, HIGH);
	digitalWrite(yellow2, HIGH);
	delay(500);
	digitalWrite(yellow1, LOW);
	digitalWrite(yellow2, LOW);
	delay(500);
	digitalWrite(blue1, HIGH);
	digitalWrite(blue2, HIGH);
	delay(500);
	digitalWrite(blue1, HIGH);
	digitalWrite(blue2, HIGH);
	delay(500);
}