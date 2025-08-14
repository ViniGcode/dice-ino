const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;
const int LED5 = 9;
const int LED6 = 8;
const int LED7 = 7;
const int BOTAO = 6;
const int POT = A0;
int dado1[1]={LED4};
int dado2[2]={LED2, LED6};
int dado3[3]={LED2, LED4,LED6};
int dado4[4]={LED1,LED2,LED6, LED7};
int dado5[5]={LED1, LED2, LED4, LED6, LED7};
int dado6[6]={LED1,LED2,LED3,LED5,LED6,LED7};
int valor = LOW;
int valorAnterior = 0;
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
  pinMode(POT, INPUT);
}

void loop()
{
  valor = digitalRead(BOTAO);
  if ((valor==LOW) && (valorAnterior==HIGH))
  {
  		for (int i = 0; i<1; i++)
    	{
    		piscarTudo();
  	 	 }
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);

    sortear();
  }
  valorAnterior = valor;
}
      
void piscarTudo()
{
	for (int i = 0; i<=6; i++)
    {
  		switch (i) {
  			case 1:
    			digitalWrite(LED4, HIGH);
                delay(analogRead(POT));
          		digitalWrite(LED4, LOW);
          		delay(analogRead(POT));
  			case 2:
    			for (int i=0; i<=1;i++)
    			{
    				digitalWrite(dado2[i], HIGH);
                    delay(analogRead(POT));
                    digitalWrite(dado2[i], LOW);
    			}
  			case 3:
    			for (int i=0; i<=2;i++)
    			{			
    				digitalWrite(dado3[i], HIGH);
                    delay(analogRead(POT));
                    digitalWrite(dado3[i], LOW);
                    delay(analogRead(POT));
    			}
   			case 4:
    			for (int i=0; i<=3;i++)
    			{
    				digitalWrite(dado4[i], HIGH);
                    delay(analogRead(POT));
                    digitalWrite(dado4[i], LOW);
                    delay(analogRead(POT));
    			}
   			case 5:
    			for (int i=0; i<=4;i++)
    			{
    				digitalWrite(dado5[i], HIGH);
                    delay(analogRead(POT));
                    digitalWrite(dado5[i], LOW);
                    delay(analogRead(POT));
    			}
      		case 6:
    			for (int i=0; i<=5;i++)
    			{
    				digitalWrite(dado6[i], HIGH);
                    delay(analogRead(POT));
                    digitalWrite(dado6[i], LOW);
                    delay(analogRead(POT));
    			}
        }
}
}

void sortear()
{
  int dadosorteado= random(0,5);
    
    
	switch (dadosorteado) {
  			case 1:
    			digitalWrite(LED4, HIGH);
				break;
  			case 2:
    			for (int i=0; i<=1;i++)
    			{
    				digitalWrite(dado2[i], HIGH);

    			}
 			     break;
  			case 3:
    			for (int i=0; i<=2;i++)
    			{			
    				digitalWrite(dado3[i], HIGH);
                   
    			}
      			break;
   			case 4:
    			for (int i=0; i<=3;i++)
    			{
    				digitalWrite(dado4[i], HIGH);
            
    			}
      			break;
   			case 5:
    			for (int i=0; i<=4;i++)
    			{
    				digitalWrite(dado5[i], HIGH);
             
    			}
      			break;
      		case 6:
    			for (int i=0; i<=5;i++)
    			{
    				digitalWrite(dado6[i], HIGH);
               
    			}
      			break;
    
    }
}
