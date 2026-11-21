/* Function: SPRINTF_OBJ_82C */
/* Address: 800a13f8 */

int SPRINTF_OBJ_82C(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uchar *puVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar12;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
  while( true ) {
    iVar9 = (int)*(char *)(in_stack_0000024c + 1);
    if (iVar9 == 0) break;
    if (iVar9 != 0x25) {
SPRINTF_OBJ_794:
      *(char *)(unaff_s3 + unaff_s2) = (char)iVar9;
      iVar9 = SPRINTF_OBJ_82C();
      return iVar9;
    }
    uVar2 = DAT_800ca4ec;
    iVar6 = in_stack_0000024c + 1;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar1 = iVar6 + 1;
              iVar9 = (int)*(char *)(iVar6 + 1);
              if (iVar9 != unaff_s5) break;
              uVar2 = uVar2 | 1;
              iVar6 = iVar1;
            }
            if (iVar9 != unaff_s6) break;
            uVar2 = uVar2 | 2;
            iVar6 = iVar1;
          }
          if (iVar9 != unaff_s4) break;
          uVar2 = (uint)CONCAT11(*(char *)(iVar6 + 1),(byte)uVar2);
          iVar6 = iVar1;
        }
        if (iVar9 != 0x23) break;
        uVar2 = uVar2 | 4;
        iVar6 = iVar1;
      }
      if (iVar9 != 0x30) break;
      uVar2 = uVar2 | 8;
      iVar6 = iVar1;
    }
    iVar3 = DAT_800ca4f0;
    if (iVar9 == 0x2a) {
      iVar9 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar6 + 2));
      return iVar9;
    }
    while (iVar9 - 0x30U < 10) {
      iVar3 = iVar3 * 10 + -0x30 + iVar9;
      iVar9 = (int)*(char *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    iVar6 = 0x23;
    iVar4 = DAT_800ca4f4;
    in_stack_0000024c = iVar1;
    if (iVar9 == 0x2e) {
      iVar9 = (int)*(char *)(iVar1 + 1);
      iVar6 = iVar1;
      if (iVar9 == 0x2a) {
        iVar9 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
        return iVar9;
      }
      while (in_stack_0000024c = iVar6 + 1, iVar9 - 0x30U < 10) {
        iVar4 = iVar4 * 10 + -0x30 + iVar9;
        iVar9 = (int)*(char *)(iVar6 + 2);
        iVar6 = in_stack_0000024c;
      }
      iVar6 = iVar1;
      if (-1 < iVar4) {
        uVar2 = uVar2 | 0x10;
      }
    }
    pbVar11 = &stack0x00000210;
    if ((uVar2 & 1) != 0) {
      uVar2 = uVar2 & 0xfffffff7;
    }
    switch(iVar9) {
    case 0x4c:
      iVar9 = SPRINTF_OBJ_29C(iVar6,(int)*(char *)(in_stack_0000024c + 1));
      return iVar9;
    default:
      if (iVar9 == 0x25) goto SPRINTF_OBJ_794;
      goto SPRINTF_OBJ_84C;
    case 99:
      iVar9 = SPRINTF_OBJ_7A0();
      return iVar9;
    case 100:
    case 0x69:
      uVar7 = *in_stack_00000220;
      if ((uVar2 >> 5 & 1) != 0) {
        uVar7 = (uint)(short)uVar7;
      }
      if ((int)uVar7 < 0) {
        iVar9 = SPRINTF_OBJ_390(-uVar7);
        return iVar9;
      }
      if ((uVar2 >> 1 & 1) != 0) {
        iVar9 = SPRINTF_OBJ_390();
        return iVar9;
      }
      goto code_r0x800a0f5c;
    case 0x68:
      iVar9 = SPRINTF_OBJ_2E4();
      return iVar9;
    case 0x6c:
      iVar9 = SPRINTF_OBJ_2E4();
      return iVar9;
    case 0x6e:
      if ((uVar2 >> 5 & 1) != 0) {
        *(short *)*in_stack_00000220 = (short)unaff_s2;
        iVar9 = SPRINTF_OBJ_82C();
        return iVar9;
      }
      *(int *)*in_stack_00000220 = unaff_s2;
      iVar9 = SPRINTF_OBJ_82C();
      return iVar9;
    case 0x6f:
      uVar7 = *in_stack_00000220;
      if ((uVar2 >> 5 & 1) != 0) {
        uVar7 = uVar7 & 0xffff;
      }
      if ((uVar2 >> 4 & 1) == 0) {
        if ((uVar2 >> 3 & 1) != 0) {
          iVar4 = iVar3;
        }
        if (iVar4 < 1) {
          iVar4 = 1;
        }
      }
      uVar10 = 0;
      for (; uVar7 != 0; uVar7 = uVar7 >> 3) {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = ((byte)uVar7 & 7) + 0x30;
        uVar10 = uVar10 + 1;
      }
      if ((((uVar2 >> 2 & 1) != 0) && (uVar10 != 0)) && (*pbVar11 != 0x30)) {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = 0x30;
        uVar10 = uVar10 + 1;
      }
      if ((int)uVar10 < iVar4) {
        do {
          pbVar11 = pbVar11 + -1;
          *pbVar11 = 0x30;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar4);
        iVar9 = SPRINTF_OBJ_7A0();
        return iVar9;
      }
      break;
    case 0x70:
    case 0x58:
      iVar9 = SPRINTF_OBJ_5A4();
      return iVar9;
    case 0x73:
      pbVar11 = (byte *)*in_stack_00000220;
      if ((uVar2 >> 2 & 1) == 0) {
        if ((uVar2 >> 4 & 1) == 0) {
          FUN_800a018c(pbVar11);
          iVar9 = SPRINTF_OBJ_7A0();
          return iVar9;
        }
        pvVar5 = memchr(pbVar11,'\0',iVar4);
        uVar10 = (int)pvVar5 - (int)pbVar11;
        if (pvVar5 == (void *)0x0) {
          iVar9 = SPRINTF_OBJ_7A0();
          return iVar9;
        }
      }
      else {
        uVar10 = (uint)*pbVar11;
        pbVar11 = pbVar11 + 1;
        if (((uVar2 >> 4 & 1) != 0) && (iVar4 < (int)uVar10)) {
          iVar9 = SPRINTF_OBJ_7A0();
          return iVar9;
        }
      }
      break;
    case 0x75:
      uVar7 = *in_stack_00000220;
      if ((uVar2 >> 5 & 1) != 0) {
        uVar7 = uVar7 & 0xffff;
      }
      uVar2 = uVar2 & 0xff;
code_r0x800a0f5c:
      bVar12 = (byte)(uVar2 >> 8);
      if ((uVar2 >> 4 & 1) == 0) {
        if (((uVar2 >> 3 & 1) != 0) && (iVar4 = iVar3, bVar12 != 0)) {
          iVar4 = iVar3 + -1;
        }
        if (iVar4 < 1) {
          iVar4 = 1;
        }
      }
      uVar10 = 0;
      while (uVar7 != 0) {
        pbVar11 = pbVar11 + -1;
        uVar10 = uVar10 + 1;
        *pbVar11 = (char)uVar7 + (char)(uVar7 / 10) * -10 + 0x30;
        uVar7 = uVar7 / 10;
      }
      for (; (int)uVar10 < iVar4; uVar10 = uVar10 + 1) {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = 0x30;
      }
      if (bVar12 != 0) {
        pbVar11[-1] = bVar12;
        iVar9 = SPRINTF_OBJ_7A0();
        return iVar9;
      }
      break;
    case 0x78:
      uVar7 = *in_stack_00000220;
      if ((uVar2 >> 5 & 1) != 0) {
        uVar7 = uVar7 & 0xffff;
      }
      if ((uVar2 >> 4 & 1) == 0) {
        if (((uVar2 >> 3 & 1) != 0) && (iVar4 = iVar3, (uVar2 >> 2 & 1) != 0)) {
          iVar4 = iVar3 + -2;
        }
        if (iVar4 < 1) {
          iVar4 = 1;
        }
      }
      uVar10 = 0;
      for (; uVar7 != 0; uVar7 = uVar7 >> 4) {
        pbVar11 = pbVar11 + -1;
        uVar10 = uVar10 + 1;
        *pbVar11 = "0123456789abcdef"[uVar7 & 0xf];
      }
      for (; (int)uVar10 < iVar4; uVar10 = uVar10 + 1) {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = 0x30;
      }
      if ((uVar2 >> 2 & 1) != 0) {
        pbVar11[-1] = (byte)iVar9;
        pbVar11[-2] = 0x30;
        iVar9 = SPRINTF_OBJ_7A0();
        return iVar9;
      }
    }
    in_stack_00000220 = in_stack_00000220 + 1;
    puVar8 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar10 < iVar3) && ((uVar2 & 1) == 0)) {
      do {
        *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
        iVar3 = iVar3 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar10 < iVar3);
      puVar8 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar8,pbVar11,uVar10);
    unaff_s2 = unaff_s2 + uVar10;
    for (; (int)uVar10 < iVar3; uVar10 = uVar10 + 1) {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      unaff_s2 = unaff_s2 + 1;
    }
  }
SPRINTF_OBJ_84C:
  *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
  return unaff_s2;
}


