#ifndef P20_H
#define P20_H

#include "quantum.h"

#define LAYOUT_ortho( \
    k101, k102, k103, k104, \
    k201, k202, k203, k204, \
    k301, k302, k303, k304, \
    k401, k402, k403, k404, \
    k501, k502, k503, k504 \
) \
{ \
    {k101, k102, k103, k104}, \
    {k201, k202, k203, k204}, \
    {k301, k302, k303, k304}, \
    {k401, k402, k403, k404}, \
    {k501, k502, k503, k504} \
} 

#endif
