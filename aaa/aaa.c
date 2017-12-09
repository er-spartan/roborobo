#include "schoolkits.h"

int main(void)
{
       start();
       while(1)
       {
              if(IN1)
              {
                     motor(0, DIR_CW, 15);
                     motor(2, DIR_CW, 15);
              }
              else
              {
                     motor(0, DIR_CW, 0);
                     motor(2, DIR_CW, 0);
              }
              if(IN2)
              {
                     motor(0, DIR_CCW, 15);
                     motor(2, DIR_CW, 15);
              }
              if(IN3)
              {
                     motor(0, DIR_CW, 15);
                     motor(2, DIR_CCW, 15);
              }
       }
       end();
       return 0;
}
