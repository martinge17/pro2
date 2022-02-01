/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 0
 * AUTHOR 1: MIGUEL LOPEZ LOPEZ            LOGIN 1: m.llopez
 * AUTHOR 2:                               LOGIN 2:
 * GROUP: 4.4
 * DATE: 11 / 2 / 2022
 */

#ifndef P0_RATIONAL_STRUCT_H
#define P0_RATIONAL_STRUCT_H

typedef struct Data Rational;
struct Data {
    int num;
    int den;
};

Rational createRational(int n, int d);
int numerator(Rational r);
int denominator(Rational r);
Rational sum(Rational r1, Rational r2);

#endif //P0_RATIONAL_STRUCT_H
