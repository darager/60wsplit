#include "quantum.h"

#define LAYOUT( \
	  LA0, LA1, LA2, LA3, LA4, LA5, 		RA0, RA1, RA2, RA3, RA4, RA5, RA6, RA7, \
	  LB0, LB1, LB2, LB3, LB4, LB5, 		RB0, RB1, RB2, RB3, RB4, RB5, RB6, RB7, \
	  LC0, LC1, LC2, LC3, LC4, LC5, 		RC0, RC1, RC2, RC3, RC4, RC5, RC6,      \
	  LD0, LD1, LD2, LD3, LD4, LD5, 		RD0, RD1, RD2, RD3, RD4,      RD6,      \
	  LE0, LE1, LE2, LE3, LE4, LE5,		  RE0,           RE3, RE4,      RE6, RE7  \
) \
{ \
	  {LA0,   LA1,   LA2,   LA3,   LA4,   LA5,   KC_NO, KC_NO}, \
	  {LB0,   LB1,   LB2,   LB3,   LB4,   LB5,   KC_NO, KC_NO}, \
	  {LC0,   LC1,   LC2,   LC3,   LC4,   LC5,   KC_NO, KC_NO}, \
	  {LD0,   LD1,   LD2,   LD3,   LD4,   LD5,   KC_NO, KC_NO}, \
	  {LE0,   LE1,   LE2,   LE3,   LE4,   LE5,   KC_NO, KC_NO}, \
\
	  {RA0,   RA1,   RA2,   RA3,   RA4,   RA5,   RA6,   RA7  }, \
	  {RB0,   RB1,   RB2,   RB3,   RB4,   RB5,   RB6,   RB7  }, \
	  {RC0,   RC1,   RC2,   RC3,   RC4,   RC5,   RC6,   KC_NO}, \
	  {RD0,   RD1,   RD2,   RD3,   RD4,   KC_NO, RD6,   KC_NO}, \
	  {RE0,   KC_NO, KC_NO, RE3,   RE4,   KC_NO, RE6,   RE7  }  \
}
