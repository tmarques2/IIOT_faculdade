bool ledState = false;

void setup()
{
    pinMode(8, OUTPUT);
    pinMode(3, INPUT);
    pinMode(2, INPUT);
}

void loop()
{
    //se um botao pressionado
    if (digitalRead(3) == true){
        ledState = true;
    } //se o outro botao pressionado
    else if (digitalRead(2) == true){
        ledState = false;
    }
    digitalWrite(8, ledState);  //liga o led de acordo com o estado da varivel
}