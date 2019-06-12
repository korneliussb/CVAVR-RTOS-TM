#include <mega32.h>
#include <delay.h>
#define LOW 0
#define HIGH 1

void main(void)
{
PORTB=0x00;
DDRB=0xFF;    

PORTD=0x00;
DDRD=0x00;

while (1)
      {
        if(PIND.0==HIGH){
            PORTB=0b00110011;
            delay_ms(100);
            PORTB=0b11001100;
            delay_ms(100);
            PORTB=0b11111111;
            delay_ms(100);
        }
    }
}
