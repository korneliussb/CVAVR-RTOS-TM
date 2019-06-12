#include <mega32.h>
#include <alcd.h>
#include <delay.h>
#include <stdio.h>

int x,y,z;
char buf[16];


// External Interrupt 0 service routine
interrupt [EXT_INT0] void ext_int0_isr(void)
{
x=x+1;
y=0;
z=0;
lcd_clear();
delay_ms(100);
lcd_gotoxy(0,0);
sprintf (buf, "INT0 = %i",x);
lcd_puts(buf);
lcd_gotoxy(0,1);
lcd_putsf(">>KEL 7 TM<<");

}

// External Interrupt 1 service routine
interrupt [EXT_INT1] void ext_int1_isr(void)
{
x=0;
y++;
z=0;
lcd_clear();
delay_ms(100);
lcd_gotoxy(0,0);
sprintf (buf, "INT1 = %i",y);
lcd_puts(buf);
lcd_gotoxy(0,1);
lcd_putsf(">>KEL 7 TM<<");

}

// External Interrupt 2 service routine
interrupt [EXT_INT2] void ext_int2_isr(void)
{
x=0;
y=0;
z++;
lcd_clear();
delay_ms(100);
lcd_gotoxy(0,0);
sprintf (buf, "INT2 = %i",z);
lcd_puts(buf);
lcd_gotoxy(0,1);
lcd_putsf(">>KEL 7 TM<<");

}

// Declare your global variables here

void main(void)
{

PORTA=0x00;
DDRA=0x00;

PORTB=0x00;
DDRB=0x00;

PORTC=0x00;
DDRC=0x00;

PORTD=0x00;
DDRD=0x00;

TCCR0=0x00;
TCNT0=0x00;
OCR0=0x00;


TCCR1A=0x00;
TCCR1B=0x00;
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;


ASSR=0x00;
TCCR2=0x00;
TCNT2=0x00;
OCR2=0x00;

// External Interrupt(s) initialization
// INT0: On
// INT0 Mode: Falling Edge
// INT1: On
// INT1 Mode: Falling Edge
// INT2: On
// INT2 Mode: Falling Edge
GICR|=0xE0;      //1110-->E   0000-->0 mengaktifkan interrupt
MCUCR=0x0A;      //mengaktifkan mode falling edge atau yg lain pd interrupt 0 dan 1
MCUCSR=0x00;     //mengaktifkan interupt 2 saja
GIFR=0xE0;       //menentukan flag

// Timer(s)/Counter(s) Interrupt(s) initialization
TIMSK=0x00;

// USART initialization
// USART disabled
UCSRB=0x00;

// Analog Comparator initialization
// Analog Comparator: Off
// Analog Comparator Input Capture by Timer/Counter 1: Off
ACSR=0x80;
SFIOR=0x00;

// ADC initialization
// ADC disabled
ADCSRA=0x00;

// SPI initialization
// SPI disabled
SPCR=0x00;

// TWI initialization
// TWI disabled
TWCR=0x00;

// Alphanumeric LCD initialization
// Connections specified in the
// Project|Configure|C Compiler|Libraries|Alphanumeric LCD menu:
// RS - PORTC Bit 0
// RD - PORTC Bit 1
// EN - PORTC Bit 2
// D4 - PORTC Bit 3
// D5 - PORTC Bit 4
// D6 - PORTC Bit 5
// D7 - PORTC Bit 6
// Characters/line: 8
lcd_init(16);

// Global enable interrupts
#asm("sei")

while (1)
      {
      // Place your code here

      }
}
