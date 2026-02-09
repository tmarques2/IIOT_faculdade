// AS CONFIGURAÇÕES (RODA 1X QUANDO LIGA)
void setup()
{
    pinMode(8, OUTPUT);   // DEFINE COMO SAÍDA
}


// A LÓGICA (EXECUTA CONSTANTEMENTE ENQUANTO ESTIVER LIGADO)
void loop()
{
    digitalWrite(8, true);
    delay(5000);
    digitalWrite(8, false);
    delay(5000);
}