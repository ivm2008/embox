/**
 * @file
 * @brief
 *
 * @author Aleksey Zhmulin
 * @date 28.10.24
 */

#ifndef LIB_LEDDRV_H_
#define LIB_LEDDRV_H_

#include <stdbool.h>
#include <sys/cdefs.h>

#include <module/embox/lib/leddrv.h>

#define LEDDRV_LED_N __LEDDRV_LED_N

extern int leddrv_set(unsigned int nr);
extern int leddrv_clr(unsigned int nr);

extern void leddrv_get_states(bool states[LEDDRV_LED_N]);
extern void leddrv_set_states(bool states[LEDDRV_LED_N]);

#endif /* LIB_LEDDRV_H_ */
