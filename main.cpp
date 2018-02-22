#include <stdio.h>


struct NormalStruct
{
  char CharVar;
  short int ShortIntVar;
  long int LongIntVar;
};

#pragma pack(push, 1)
struct PackedStruct
{
  char CharVar;
  short int ShortIntVar;
  long int LongIntVar;
};
#pragma pack(pop)


int main(int argc, char *argv[])
{
  printf("pogram start\n");
  int iNormalStructSize = sizeof(NormalStruct);
  printf (" Normal struct: %d\n", iNormalStructSize);

  int iPackedStructSize = sizeof(PackedStruct);
  printf (" Normal struct: %d\n", iPackedStructSize);

}
