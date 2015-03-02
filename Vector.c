
/*======================================================*\
  Wednesday September the 25th 2013
  Arash HABIBI
  Vector.c
\*======================================================*/

#include "Vector.h"

//------------------------------------------------

Vector V_new(float x, float y, float z)
{
  Vector v;
  v.x = x;
  v.y = y;
  v.z = z;
  return v;
}

//------------------------------------------------
// a des fin de debug

void V_print(Vector v, char *message)
{
  fprintf(stderr,"%s : %f %f %f\n",message, v.x,v.y,v.z);
}

