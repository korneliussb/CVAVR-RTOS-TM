/*****************************************************
This program was produced by the
CodeWizardAVR V2.05.0 Evaluation
Automatic Program Generator
© Copyright 1998-2010 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 19/04/2018
Author  : Freeware, for evaluation and non-commercial use only
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 8,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*****************************************************/

#include <mega32.h>
#include <delay.h>

// Declare your global variables here

void main(void)
{
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization
// Func7=Out Func6=Out Func5=Out Func4=Out Func3=Out Func2=Out Func1=Out Func0=Out 
// State7=0 State6=0 State5=0 State4=0 State3=0 State2=0 State1=0 State0=0 
PORTA=0x00;
DDRA=0xFF;

// Port B initialization
// Func7=Out Func6=Out Func5=Out Func4=Out Func3=Out Func2=Out Func1=Out Func0=Out 
// State7=0 State6=0 State5=0 State4=0 State3=0 State2=0 State1=0 State0=0 
PORTB=0x00;
DDRB=0xFF;

// Port C initialization
// Func7=Out Func6=Out Func5=Out Func4=Out Func3=Out Func2=Out Func1=Out Func0=Out 
// State7=0 State6=0 State5=0 State4=0 State3=0 State2=0 State1=0 State0=0 
PORTC=0x00;
DDRC=0xFF;

// Port D initialization
// Func7=Out Func6=Out Func5=Out Func4=Out Func3=Out Func2=Out Func1=Out Func0=Out 
// State7=0 State6=0 State5=0 State4=0 State3=0 State2=0 State1=0 State0=0 
PORTD=0x00;
DDRD=0xFF;

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: Timer 0 Stopped
// Mode: Normal top=0xFF
// OC0 output: Disconnected
TCCR0=0x00;
TCNT0=0x00;
OCR0=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: Timer1 Stopped
// Mode: Normal top=0xFFFF
// OC1A output: Discon.
// OC1B output: Discon.
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: Off
// Compare B Match Interrupt: Off
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

// Timer/Counter 2 initialization
// Clock source: System Clock
// Clock value: Timer2 Stopped
// Mode: Normal top=0xFF
// OC2 output: Disconnected
ASSR=0x00;
TCCR2=0x00;
TCNT2=0x00;
OCR2=0x00;

// External Interrupt(s) initialization
// INT0: Off
// INT1: Off
// INT2: Off
MCUCR=0x00;
MCUCSR=0x00;

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

while (1)
      {
       PORTB = 0b11111111; //isi kolom 1
    PORTA = 0b00000001;
//mengaktifkan baris 1 , active low
    delay_ms(1);   
    
    PORTB = 0b11111111; //isi kolom 2
    PORTA = 0b00000010;
    delay_ms(1); 
    
    PORTB = 0b11111111; //isi kolom 3
    PORTA = 0b00000100;
    delay_ms(1);
    
    PORTB = 0b00000000; //isi kolom 4
    PORTA = 0b00001000;
    delay_ms(1);
    
    PORTB = 0b00000000; //isi kolom 5
    PORTA = 0b00010000;
    delay_ms(1);
    
    PORTB = 0b11111111; //isi kolom 6
    PORTA = 0b00100000;
    delay_ms(1);
    
    PORTB = 0b11111111; //isi kolom 7
    PORTA = 0b0100000;
    delay_ms(1);
    
    PORTB = 0b11111111; //isi kolom 8
    PORTA = 0b10000000;
    delay_ms(1);
    
    
    PORTD = 0b11111111; //isi kolom 1
    PORTC = 0b00000001;
    delay_ms(1);
    
    PORTD = 0b11111111; //isi kolom 2
    PORTC = 0b00000010;
    delay_ms(1);
    
    PORTD = 0b11111111; //isi kolom 3
    PORTC = 0b00000100;
    delay_ms(1);
    
    PORTD = 0b00000000; //isi kolom 4
    PORTC = 0b00001000;
    delay_ms(1);
    
    PORTD = 0b00000000; //isi kolom 5
    PORTC = 0b00010000;
    delay_ms(1);
    
    PORTD = 0b11111111; //isi kolom 6
    PORTC = 0b00100000;
    delay_ms(1);
    
    PORTD = 0b11111111; //isi kolom 7
    PORTC = 0b01000000;
    delay_ms(1);
    
    PORTD = 0b11111111; //isi kolom 8
    PORTC = 0b10000000;
    delay_ms(1);

      }
}
