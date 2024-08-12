#include"ECEN.h"
void setup() {
  volatile int outputmode=0xff,inputmode=0x00,var;
  volatile int ReadSwitch,count=0;
  volatile long i=0;
      init_PORTF(outputmode);
      init_PORTK(inputmode);
          while(1){
           
               *inputK=0x00;
               ReadSwitch=*inputK;
            if((ReadSwitch & 0x01)==0x01 ||(ReadSwitch & 0x02)==0x02 || (ReadSwitch & 0x04)==0x04 || (ReadSwitch & 0x08)==0x08)
          {   
             count=count+1;
               for(i=0;i<150000;i++);   
          }
          if(count==4)
                {
               GlowEvenLEDs();
               delay(10000);
                 count=0;
                }
                  }
}
void loop() {
}




volatile int *dirF,*dirK,*outputF,*inputF,*outputK,*inputK;
void init_PORTF(int x)
{
  inputF=0x2f;
  outputF=0x31;
   dirF=0x30;
   *dirF=x;
}
void init_PORTK(int x)
{
  inputK=0x106;
  outputK=0x108;
   dirK=0x107;
   *dirK=x;
}
void GlowLEDs0To7onebyone(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);
  volatile int Array[8]={1,3,7,15,31,63,127,255};
  for(i=0;i<8;i++)
  {
   *outputF=Array[i];
   delay(1000);
}
 *outputF=0x00;
}
void GlowLEDs7To0onebyone(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);
  volatile int Array[8]={0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0xff};
  for(i=0;i<8;i++)
  {
   *outputF=Array[i];
   delay(1000);
}
 *outputF=0x00;
}
void GlowEvenLEDs(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x55;
   delay(1000);
 *outputF=0x00;
}
void GlowOddLEDs(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0xaa;
   delay(1000);
 *outputF=0x00;
}
void Glow0thLED(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x01;
   delay(1000);
 *outputF=0x00;
}
void Glow1thLED(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x02;
   delay(1000);
 *outputF=0x00;
}
void Glow2thLED(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x04;
   delay(1000);
 *outputF=0x00;
}
void Glow3thLED(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x08;
   delay(1000);
 *outputF=0x00;
}
void Glow4thLED(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x10;
   delay(1000);
 *outputF=0x00;
}
void Glow5thLED(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x20;
   delay(30000);//30 seconds delay
 *outputF=0x00;
}
void Glow6thLED(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x40;
   delay(1000);
 *outputF=0x00;
}
void Glow7thLED(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x80;
   delay(1000);
 *outputF=0x00;
}
void Glow0347thLED(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x99;
   delay(1000);
 *outputF=0x00;
}
void Glow1256thLED(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x02;
   delay(1000);
   *outputF=0x06;
   delay(1000);
   *outputF=0x26;
   delay(1000);
   *outputF=0x66;
   delay(1000);
 *outputF=0x00;
}
void Glow3174thLEDs(void)
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x08;
   delay(1000);
   *outputF=0x0a;
   delay(1000);
   *outputF=0x8a;
   delay(1000);
   *outputF=0x9a;
   delay(1000);
 *outputF=0x00;
}
void Glow0156LEDs()
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x01;
   delay(1000);
   *outputF=0x03;
   delay(1000);
   *outputF=0x23;
   delay(1000);
   *outputF=0x63;
   delay(1000);
 *outputF=0x00;
}
void Glow0147LEDs()
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x01;
   delay(1000);
   *outputF=0x03;
   delay(1000);
   *outputF=0x13;
   delay(1000);
   *outputF=0x93;
   delay(1000);
 *outputF=0x00;
}
void Glow7632LEDs()
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x80;
   delay(1000);
   *outputF=0xc0;
   delay(1000);
   *outputF=0xc8;
   delay(1000);
   *outputF=0xcc;
   delay(1000);
 *outputF=0x00;
}
void Glow3576LEDs()
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x08;
   delay(1000);
   *outputF=0x28;
   delay(1000);
   *outputF=0xa8;
   delay(1000);
   *outputF=0xe8;
   delay(1000);
 *outputF=0x00;
}
void Glow5301LEDs()
{
   volatile int i,outputmode=0xff;
  init_PORTF(outputmode);

   *outputF=0x20;
   delay(1000);
   *outputF=0x28;
   delay(1000);
   *outputF=0x29;
   delay(1000);
   *outputF=0x2b;
   delay(1000);
 *outputF=0x00;
}
