/*
 * libxkcdrandom_test.c
 * This file is part of libxkcdrandom
 *
 * Copyright (c) 2018 Martijn
 *
 *
 * libxkcdrandom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libxkcdrandom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libxkcdrandom.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
//#include "xkcdrandom.h"

int main(void)
{
    printf("%d\n", getRandomNumber());
    printf("%d\n", get_random_number());
}
