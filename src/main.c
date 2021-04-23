/*
 */

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
     DDRB|=(1<<PB0); // SET B0=1 FOR LED
     DDRD&=~(1<<PD0); // clear bit
     DDRD&=~(1<<PD1); //clear bit
     PORTD|=(1<<PD0); //SET BIT
     PORTD|=(1<<PD1); //SET BIT


    while(1)
    {
        if((!((PIND)&(1<<PD0)))&&(!((PIND)&(1<<PD1))))
       {
           PORTB|=1<<(PB0);
    //   _delay_ms(200);
       }
       else{
        PORTB&=~1<<(PB0);
        _delay_ms(20);
       }

    }

    return 0;
}
