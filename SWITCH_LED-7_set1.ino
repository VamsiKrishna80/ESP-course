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

