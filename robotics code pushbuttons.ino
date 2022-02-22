// Cirno can't program like me lol ⑨

int green = 7;
int orang = 2;
int button1 = 4;
int button2 = 8;
int button1_status = 0;
int button2_status = 0;

void setup()
{
	pinMode(green, OUTPUT);
	pinMode(orang, OUTPUT);
	pinMode(button1, INPUT);
	pinMode(button2, INPUT);
}

void loop()
{
	button1_status = digitalRead (button1);
	button2_status = digitalRead (button2);

//Green LED button
  
	if (button1_status == LOW)
    {
		digitalWrite(green, LOW);
	}
	
	else
	{
		digitalWrite(green, HIGH);
		delay(3000);
	}
 
//Orange LED button

	if (button2_status == LOW)
    {
		digitalWrite(orang, LOW);
	}
	
	else
	{
		digitalWrite(orang, HIGH);
		delay(3000);
	}
}
