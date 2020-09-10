#include <avr/io.h>
#include <util/delay.h>

void
delay_ms(uint16_t);

int
main(void)
{
    DDRB |= (1 << PB4);
    while (1)
    {
        PORTB ^= (1 << PB4);
        delay_ms(1000);
    }
}

void
delay_ms(uint16_t ms)
{
    while (--ms > 0)
        _delay_ms(1);
}
