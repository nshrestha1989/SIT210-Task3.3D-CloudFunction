int green = D3;
int red = D4;




void myHandler(const char *event, const char *data)
{
    
    if (strcmp(data, "wave") == 0)
    {
        int i=0;
        while(i<4){
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        delay(1000);
        i++;
        }
        
    }
    else if (strcmp(data, "pat") == 0)
    {
        int i=0;
        while(i<10){
        digitalWrite(green, HIGH);
        delay(500);
        digitalWrite(green, LOW);
         delay(500);
         i++;
        }
    }
    else
    {
       
    }
}


void setup()
{
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
    
    pinMode(green, OUTPUT);
    pinMode(red, OUTPUT);
  
}


void loop()
{
   
}