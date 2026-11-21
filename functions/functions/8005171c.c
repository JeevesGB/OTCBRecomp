/* Function: FUN_8005171c */
/* Address: 8005171c */

void FUN_8005171c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_800cd028;
  do {
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined2 *)((int)puVar1 + 6) = 0xffff;
    *puVar1 = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 7);
  return;
}


