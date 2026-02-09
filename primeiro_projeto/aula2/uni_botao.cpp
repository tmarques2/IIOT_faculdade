bool ledState = false;
bool buffer = false;

void setup()
{
    pinMode(8, OUTPUT);
    pinMode(3, INPUT);
}

void loop()
{
    //se o botao for pressionado (inicio da borda = liga buffer)
    if (digitalRead(3) == true){
        buffer = true;
    }
    // se botao acabou de ser solto (fim da borda)
    else if (buffer == true) {
        buffer = false;  //reseta a variavel auxiliar
        ledState = !ledState;  // executa a ação da borda (nesse caso ligar ou desligar led)
    }

    digitalWrite(8, ledState); // liga o led de acordo com a varivel
}