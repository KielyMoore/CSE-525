#ifndef	_TIMER_H
#define	_TIMER_H

void timer_init ( void );
void handle_timer_irq ( void );

// Arm Timer Functions
void arm_timer_init( void );
void handle_arm_timer_irq( void );

#endif  /*_TIMER_H */
