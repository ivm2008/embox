#include <lib/leddrv.h>

#include "iec_std_lib.h"

typedef struct {
	__DECLARE_VAR(BOOL, EN)
	__DECLARE_VAR(BOOL, ENO)
	__DECLARE_VAR(UINT, LED)
	__DECLARE_VAR(BOOL, SUCCESS)
} LED_ON;

static inline void LED_ON_init__(LED_ON *data__, BOOL retain) {
	__INIT_VAR(data__->EN, __BOOL_LITERAL(TRUE), retain)
	__INIT_VAR(data__->LED, __UINT_LITERAL(0), retain)
	__INIT_VAR(data__->SUCCESS, __BOOL_LITERAL(FALSE), retain)
}

static inline void LED_ON_body__(LED_ON *data__) {
	int err;

	if (!__GET_VAR(data__->EN)) {
		__SET_VAR(data__->, ENO, , __BOOL_LITERAL(FALSE));
		return;
	}

	__SET_VAR(data__->, ENO, , __BOOL_LITERAL(TRUE));

	err = leddrv_led_on(__GET_VAR(data__->LED));

	__SET_VAR(data__->, SUCCESS, ,
	    err ? __BOOL_LITERAL(FALSE) : __BOOL_LITERAL(TRUE));
}

typedef struct {
	__DECLARE_VAR(BOOL, EN)
	__DECLARE_VAR(BOOL, ENO)
	__DECLARE_VAR(UINT, LED)
	__DECLARE_VAR(BOOL, SUCCESS)
} LED_OFF;

static inline void LED_OFF_init__(LED_OFF *data__, BOOL retain) {
	__INIT_VAR(data__->EN, __BOOL_LITERAL(TRUE), retain)
	__INIT_VAR(data__->LED, __UINT_LITERAL(0), retain)
	__INIT_VAR(data__->SUCCESS, __BOOL_LITERAL(FALSE), retain)
}

static inline void LED_OFF_body__(LED_OFF *data__) {
	int err;

	if (!__GET_VAR(data__->EN)) {
		__SET_VAR(data__->, ENO, , __BOOL_LITERAL(FALSE));
		return;
	}

	__SET_VAR(data__->, ENO, , __BOOL_LITERAL(TRUE));

	err = leddrv_led_off(__GET_VAR(data__->LED));

	__SET_VAR(data__->, SUCCESS, ,
	    err ? __BOOL_LITERAL(FALSE) : __BOOL_LITERAL(TRUE));
}
