void setup()
{
    pinMode(8, OUTPUT);
    pinMode(3, INPUT);
}

void loop()
{
    if (digitalRead(3) == true){
        digitalWrite(8, true);
    }
    else{
        digitalWrite(8, false);
    }
}