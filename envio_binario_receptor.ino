int ambiente,velo;
long bin=1;
String aux2;
char ind;
int intensidad;
String cadena;
int led=8;

int promedio(int precision)
{
  int pasadas,suma;
 for(int counter=0;counter<precision;counter++){
  suma+=analogRead(A0);
  pasadas++;
  } 
  return(suma/pasadas);
  }

String car_to_bin(char caracter)
{
  int car=caracter;
  long bin;
  char any;
  String aux;
  int n;
  aux="";
  String cadena;
  while(car>0)
    {
        if((car%2) == 0)
        {
            aux+="0";
        }
        
        else{
            aux+="1";
        }
        car=car/2;
    }
    aux+="0";
    Serial.println(aux);
    any=aux.charAt(6);
    if(any=='0')
    {
      n=5;
      cadena+="00";
      }
      else{n=6;
      cadena+="0";}
    for(int counter=n;counter>=0;counter--)
    {
      any=aux.charAt(counter);
      cadena+=any;
    }
    return cadena;
  }

char bin_to_car(long bin)
{
  int d;
  char ch;
    long p,c;
    c=1;
    d=0;
  while(bin>0)
    {
        p=0;
        p=c*(bin%10);
        d+=p;
        c*=2;
        bin/=10;
    }
    ch=d;
    return ch;
  }


void enviar()
{
  while(Serial.available())
  {
    ind=Serial.read();
    aux2=car_to_bin(ind);
    Serial.println(aux2);
    for(int counter=0;counter<8;counter++)
    {
      Serial.print(aux2.charAt(counter));
      
      
      if((aux2.charAt(counter))=='0')
      {
        digitalWrite(led,LOW);
        }
       
       else{digitalWrite(led,HIGH);}
       
       
       delay(velo);
      }
      Serial.println();
    }
  }

void recibir(){
  while(bin!=0)
  {
    for(int counter=0;counter<8;counter++)
    {
    delay(velo/2);
    intensidad=promedio(10);
    if(intensidad<(ambiente-7))
    {
     // Serial.print("0");
      aux2+="0";
      }
      else{
        aux2+="1";
       //Serial.print("1");
        }
    delay(velo/2);
  }
  //Serial.print("-------");
  bin=aux2.toInt();
  ind=bin_to_car(bin);
  Serial.print(ind);
  aux2="";
  }
}



void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(A0,INPUT);
  velo=400;
  ambiente=promedio(10);
  Serial.print("La intensidad ambiente: ");
  Serial.print(ambiente);
}

void loop() {
  digitalWrite(led,HIGH);
  intensidad=promedio(10);
  if(intensidad<(ambiente-7))
  {
    /*delay(9);
    Serial.println("--Estamos recibiendo--");
    recibir();
    Serial.println("||Mensaje Recibido||");
    Serial.println("\n");
    bin=1;
    }*/
   if(Serial.available())
   {
    digitalWrite(led,LOW);
    delay(10);
    digitalWrite(led,HIGH);
    enviar();
    digitalWrite(led,LOW);
    delay(velo*8);
    Serial.println("\n");
    }
}
}
