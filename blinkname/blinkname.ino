

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

// Having declared these variables, let's move on to the setup function.
// The setup function is a standard part of any microcontroller program.
// It runs only once when the device boots up or is reset.

void setup() {

	pinMode(led2, OUTPUT);

}


void dot()

{

	digitalWrite(led2, HIGH);

	// We'll leave it on for 1 second...
	delay(500);

	// Then we'll turn it off...
	digitalWrite(led2, LOW);
    
    delay(500);
    
}


void dash()

{
    digitalWrite(led2, HIGH);

	// We'll leave it on for 1 second...
	delay(1500);

	// Then we'll turn it off...
	digitalWrite(led2, LOW);
	
    
    delay(500);
}





void loop() {
    
	// To blink the LED, first we'll turn it on...
	
	
	// S
	
	dot();
	dot();
	dot();
	delay(500);
	
	
	// H
	
	dot();
	dot();
	dot();
	dot();
	delay(500);
	
	
	// R
	
	dot();
	dash();
	dot();
	delay(500);
	
	// U
	
	dot();
	dot();
	dash();
	delay(500);
	
	
	// T
	
	dash();
	delay(500);
	
	
	// I
	
	dot();
	dot();
	delay(1000);
	

	

	// And repeat!
}
