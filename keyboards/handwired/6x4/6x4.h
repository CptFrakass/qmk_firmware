
#ifndef SIXX4_H
#define SIXX4_H

#include "quantum.h"
#define ___ KC_NO

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, \
    K10, K11, K12, K13, K14, K15, \
    K20, K21, K22, K23, K24, K25, \
    K30, K31, K32, K33, K34, K35 \
) \
{ \
    { K00, K01, K02, K03, K04,  K05, }, \
    { K10, K11, K12, K13, K14,  K15, }, \
    { K20, K21, K22, K23, K24,  K25, }, \
    { K30, K31, K32, K33, K34,  K35 } \
}

#endif
