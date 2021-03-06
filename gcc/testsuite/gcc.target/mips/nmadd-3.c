/* The same code as nmadd-2.c, but compiled with -fno-finite-math-only.
   We can't use nmadd and nmsub in that case.  */
/* { dg-do compile } */
/* { dg-options "-O2 -fno-fast-math -fno-finite-math-only isa=4 -mhard-float" } */
/* { dg-final { scan-assembler-not "nmadd.s" } } */
/* { dg-final { scan-assembler-not "nmadd.d" } } */
/* { dg-final { scan-assembler-not "nmsub.s" } } */
/* { dg-final { scan-assembler-not "nmsub.d" } } */

float
sub1 (float f, float g, float h)
{
  return -((f * g) + h);
}

double
sub2 (double f, double g, double h)
{
  return -((f * g) + h);
}

float
sub3 (float f, float g, float h)
{
  return -((f * g) - h);
}

double
sub4 (double f, double g, double h)
{
  return -((f * g) - h);
}
