/*
 * File:   newmain.c
 * Author: aswin
 *
 * Created on 17 October, 2024, 11:37 AM
 */


#include <xc.h>
#include <stdint.h>
#pragma config FOSC = INTRCCLK  // Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF      // RA3/MCLR pin function select (RA3/MCLR pin function is digital I/O, MCLR internally tied to VDD)
#pragma config BOREN = OFF      // Brown-out Detect Enable bit (BOD disabled)
#pragma config CP = OFF         // Code Protection bit (Program Memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)

# define _XTAL_FREQ 4000000
void main(void) {
    TRISC = 0;
    ANSEL=0;
    PORTC = 0b00000000;
    while(1){
        for(int i =0; i < 4; i++){
            if( i % 2 == 0){
                PORTC = 0b00101010;
                __delay_ms(300);
            }
            else{
                PORTC = 0b00010101;
                __delay_ms(300);
            }
        }
    }
    
  
}
