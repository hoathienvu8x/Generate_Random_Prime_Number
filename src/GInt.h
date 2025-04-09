#ifndef __GInt__
#define __GInt__

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

#define GInt_Size 256
#define GInt_DigitBits 8
#define GInt_Base 256

typedef uint8_t gint[GInt_Size];

int ggint_equal(gint a, gint b);

/* a < b */
int ggint_less(gint a, gint b);

/* a <= b */
int ggint_less_or_equal(gint a, gint b);

/* a == 0 */
int ggint_is_zero(gint a);

/* a & 1 == 0 */
int ggint_is_even(gint a);
/* a & 1 == 1 */
int ggint_is_odd(gint a);

/* a = 0 */
void ggint_zero(gint a);

/* a = 1 */
void ggint_one(gint a);

/* a = value */
void ggint_set(gint a, size_t value);

/* a = b */
void ggint_set_gint(gint a, gint b);

/* b = b + a */
void ggint_add_gint(gint a, gint b);

/* b = b + a */
void ggint_add_int(uint8_t a, gint b);

/* b = b - a */
void ggint_sub_gint(gint a, gint b);

void ggint_sub_int(uint8_t a, gint b);

/* a = a << 8*sh (base 256) */
void ggint_shl(gint a, size_t sh);

/* a = a >> 8*sh (base 256) */
void ggint_shr(gint a, size_t sh);

/* a = a << sh */
void ggint_shbl(gint a, size_t sh);

/* a = a >> sh */
void ggint_shbr(gint a, size_t sh);

/* b = b * a */
void ggint_mul_int(uint8_t a, gint b);

/* p = a * b */
void ggint_mul_gint(gint a, gint b, gint p);

/* b / a = q, b % a = r */
void ggint_div_gint(gint a, gint b, gint q, gint r);

/* b % a = r */
void ggint_mod_gint2(gint a, gint b, gint r);

void ggint_mod_gint(gint a, gint b, gint r);

/* b % a = r */
void ggint_mod_int(size_t a, gint b, size_t *r);

// generate random number a */
void ggint_rand(gint a);

/* generate random number a < b */
void ggint_rand_range(gint a, gint b);

/* r = a^x mod n */
void ggint_pow_mod(gint a, gint x, gint n, gint r);

void ggint_print_format(char * pref, gint x, int printBytes);

void ggint_print(gint a);

#endif
