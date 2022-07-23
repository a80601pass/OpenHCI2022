#define NTD0 -1
#define NTD1 261
#define NTD2 294
#define NTD3 329
#define NTD4 349
#define NTD5 392
#define NTD6 440
#define NTD7 493

#define NTDL1 131
#define NTDL2 147
#define NTDL3 165
#define NTDL4 175
#define NTDL5 196
#define NTDL6 221
#define NTDL7 248

#define NTDH1 525
#define NTDH2 589
#define NTDH3 661
#define NTDH4 700
#define NTDH5 786
#define NTDH6 882
#define NTDH7 990


#define WHOLE 1
#define HALF 0.5
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625

int tune[]=              
{
  NTD3,NTD3,NTD4,NTD5,
  NTD5,NTD4,NTD3,NTD2,
  NTD1,NTD1,NTD2,NTD3,
  NTD3,NTD2,NTD2,
  NTD3,NTD3,NTD4,NTD5,
  NTD5,NTD4,NTD3,NTD2,
  NTD1,NTD1,NTD2,NTD3,
  NTD2,NTD1,NTD1,
  NTD2,NTD2,NTD3,NTD1,
  NTD2,NTD3,NTD4,NTD3,NTD1,
  NTD2,NTD3,NTD4,NTD3,NTD2,
  NTD1,NTD2,NTDL5,NTD0,
  NTD3,NTD3,NTD4,NTD5,
  NTD5,NTD4,NTD3,NTD4,NTD2,
  NTD1,NTD1,NTD2,NTD3,
  NTD2,NTD1,NTD1
};

float durt[]=    
  {               
  1,1,1,1,
  1,1,1,1,
  1,1,1,1,
  1+0.5,0.5,1+1,
  1,1,1,1,
  1,1,1,1,
  1,1,1,1,
  1+0.5,0.5,1+1,
  1,1,1,1,
  1,0.5,0.5,1,1,
  1,0.5,0.5,1,1,
  1,1,1,1,
  1,1,1,1,
  1,1,1,0.5,0.5,
  1,1,1,1,
  1+0.5,0.5,1+1,
};

int length;
void setup()
{
  pinMode(5,OUTPUT);
  length=sizeof(tune)/sizeof(tune[0]);   
}
void loop()
{
  for(int x=0;x<length;x++)
  {
    tone(5,tune[x]);
    delay(500*durt[x]);   
    noTone(5);
  }
  delay(2000);
}
