typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed long long i64;
typedef signed int i32;
typedef signed short i16;
typedef signed char i8;
typedef float f32;
typedef double f64;

#include "fcpu.h"
#include "avr/io.h"
#include "util/delay.h"

;

;
;


i32 main(){
    DDRB=32;
    
    while (1){
        PORTB=32;
        _delay_ms(500);
        PORTB=0;
        _delay_ms(500);
    }
    return 0;
}
