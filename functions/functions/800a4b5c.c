/* Function: FORMAT_OBJ_F0 */
/* Address: 800a4b5c */

undefined4 FORMAT_OBJ_F0(byte *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  int unaff_s0;
  int unaff_s1;
  uchar *unaff_s2;
  uchar *unaff_s3;
  long unaff_s4;
  int unaff_s5;
  
  while( true ) {
    bVar6 = 0;
    iVar5 = 0x7e;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar5 = iVar5 + -1;
      bVar6 = bVar6 ^ bVar1;
    } while (-1 < iVar5);
    unaff_s1 = unaff_s1 + 1;
    if (unaff_s3[0x7f] == bVar6) {
      return 1;
    }
    if (7 < unaff_s1) {
      return 0;
    }
    _new_card();
    lVar2 = _card_write(unaff_s0,unaff_s4,unaff_s3);
    if (lVar2 != unaff_s5) break;
    do {
      uVar3 = _card_status(unaff_s0 >> 4);
    } while ((uVar3 & 1) == 0);
    bzero(unaff_s2,0x80);
    _new_card();
    lVar2 = _card_read(unaff_s0,unaff_s4,unaff_s2);
    if (lVar2 != unaff_s5) {
      printf("card read error\n");
      uVar4 = FORMAT_OBJ_F0(&stack0x00000010);
      return uVar4;
    }
    do {
      uVar3 = _card_status(unaff_s0 >> 4);
      param_1 = &stack0x00000010;
    } while ((uVar3 & 1) == 0);
  }
  return 0;
}


