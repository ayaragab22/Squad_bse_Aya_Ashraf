///declaring LEDs

int green = 2;
int yellow = 3;
int red = 4;

int push_button = 6;

void changeLights();

void setup() {
  // put your setup code here, to run once:
  ///Declare LEDs pins as OUTPUT
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);

  ///sET THE LEDS OFF
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);

  ///Set push_button as input
  pinMode(push_button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if (digitalRead(push_button) == HIGH)
   {

        delay(15); // software debounce

        if (digitalRead(push_button) == HIGH) {

            // if the switch is HIGH, ie. pushed down - change the lights!

            changeLights();

            delay(15000); // wait for 15 seconds

        }

    }
}
void changeLights(){

    // green on, 3 seconds
    if( ((digitalRead(green)==0) && (digitalRead(yellow)== 0 || 1) && (digitalRead(red)== 0 || 1) ))
    {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);

    delay(3000);
    }

    // yellow on, 3 seconds
    else if( ((digitalRead(yellow)==0) && (digitalRead(red)== 0 || 1) && (digitalRead(green)== 0 || 1) ))
    {
    digitalWrite(yellow,HIGH);  
    digitalWrite(red,LOW);  
    digitalWrite(green, LOW);
    

    delay(3000);
    }


    // then turn red on for 3 seconds
    else if( ((digitalRead(red)==0) && (digitalRead(yellow)== 0 || 1) && (digitalRead(green)== 0 || 1) ))
    {
    digitalWrite(red, HIGH);  
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);

    delay(3000);
    }

    else
    {
    digitalWrite(red, LOW);  
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    
    }
}
