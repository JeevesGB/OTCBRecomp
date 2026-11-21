/* Function: SPRINTF_OBJ_7A0 */
/* Address: 800a136c */

int SPRINTF_OBJ_7A0(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  uint unaff_s0;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar8;
  uint in_stack_00000210;
  int in_stack_00000214;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
code_r0x800a136c:
  puVar6 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)unaff_s0 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    do {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)unaff_s0 < in_stack_00000214);
    puVar6 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar6,unaff_s1,unaff_s0);
  unaff_s2 = unaff_s2 + unaff_s0;
  for (; (int)unaff_s0 < in_stack_00000214; unaff_s0 = unaff_s0 + 1) {
    *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
    unaff_s2 = unaff_s2 + 1;
  }
  iVar7 = (int)*(char *)(in_stack_0000024c + 1);
  if (iVar7 == 0) {
SPRINTF_OBJ_84C:
    *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (iVar7 != 0x25) {
SPRINTF_OBJ_794:
    *(char *)(unaff_s3 + unaff_s2) = (char)iVar7;
    iVar7 = SPRINTF_OBJ_82C();
    return iVar7;
  }
  in_stack_00000210 = DAT_800ca4ec;
  iVar4 = in_stack_0000024c + 1;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = iVar4 + 1;
            iVar7 = (int)*(char *)(iVar4 + 1);
            if (iVar7 != unaff_s5) break;
            in_stack_00000210 = in_stack_00000210 | 1;
            iVar4 = iVar1;
          }
          if (iVar7 != unaff_s6) break;
          in_stack_00000210 = in_stack_00000210 | 2;
          iVar4 = iVar1;
        }
        if (iVar7 != unaff_s4) break;
        in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar4 + 1),(byte)in_stack_00000210);
        iVar4 = iVar1;
      }
      if (iVar7 != 0x23) break;
      in_stack_00000210 = in_stack_00000210 | 4;
      iVar4 = iVar1;
    }
    if (iVar7 != 0x30) break;
    in_stack_00000210 = in_stack_00000210 | 8;
    iVar4 = iVar1;
  }
  in_stack_00000214 = DAT_800ca4f0;
  if (iVar7 == 0x2a) {
    iVar7 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar4 + 2));
    return iVar7;
  }
  while (iVar7 - 0x30U < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + iVar7;
    iVar7 = (int)*(char *)(iVar1 + 1);
    iVar1 = iVar1 + 1;
  }
  iVar4 = 0x23;
  iVar2 = DAT_800ca4f4;
  in_stack_0000024c = iVar1;
  if (iVar7 == 0x2e) {
    iVar7 = (int)*(char *)(iVar1 + 1);
    iVar4 = iVar1;
    if (iVar7 == 0x2a) {
      iVar7 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
      return iVar7;
    }
    while (in_stack_0000024c = iVar4 + 1, iVar7 - 0x30U < 10) {
      iVar2 = iVar2 * 10 + -0x30 + iVar7;
      iVar7 = (int)*(char *)(iVar4 + 2);
      iVar4 = in_stack_0000024c;
    }
    iVar4 = iVar1;
    if (-1 < iVar2) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
  }
  unaff_s1 = &stack0x00000210;
  if ((in_stack_00000210 & 1) != 0) {
    in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
  }
  switch(iVar7) {
  case 0x4c:
    iVar7 = SPRINTF_OBJ_29C(iVar4,(int)*(char *)(in_stack_0000024c + 1));
    return iVar7;
  default:
    if (iVar7 != 0x25) goto SPRINTF_OBJ_84C;
    goto SPRINTF_OBJ_794;
  case 99:
    iVar7 = SPRINTF_OBJ_7A0();
    return iVar7;
  case 100:
  case 0x69:
    uVar5 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = (uint)(short)uVar5;
    }
    if ((int)uVar5 < 0) {
      iVar7 = SPRINTF_OBJ_390(-uVar5);
      return iVar7;
    }
    if ((in_stack_00000210 >> 1 & 1) != 0) {
      iVar7 = SPRINTF_OBJ_390();
      return iVar7;
    }
    break;
  case 0x68:
    iVar7 = SPRINTF_OBJ_2E4();
    return iVar7;
  case 0x6c:
    iVar7 = SPRINTF_OBJ_2E4();
    return iVar7;
  case 0x6e:
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      *(short *)*in_stack_00000220 = (short)unaff_s2;
      iVar7 = SPRINTF_OBJ_82C();
      return iVar7;
    }
    *(int *)*in_stack_00000220 = unaff_s2;
    iVar7 = SPRINTF_OBJ_82C();
    return iVar7;
  case 0x6f:
    uVar5 = *in_stack_00000220;
    in_stack_00000220 = in_stack_00000220 + 1;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = uVar5 & 0xffff;
    }
    if ((in_stack_00000210 >> 4 & 1) == 0) {
      if ((in_stack_00000210 >> 3 & 1) != 0) {
        iVar2 = in_stack_00000214;
      }
      if (iVar2 < 1) {
        iVar2 = 1;
      }
    }
    unaff_s0 = 0;
    for (; uVar5 != 0; uVar5 = uVar5 >> 3) {
      unaff_s1 = unaff_s1 + -1;
      *unaff_s1 = ((byte)uVar5 & 7) + 0x30;
      unaff_s0 = unaff_s0 + 1;
    }
    if ((((in_stack_00000210 >> 2 & 1) != 0) && (unaff_s0 != 0)) && (*unaff_s1 != 0x30)) {
      unaff_s1 = unaff_s1 + -1;
      *unaff_s1 = 0x30;
      unaff_s0 = unaff_s0 + 1;
    }
    if ((int)unaff_s0 < iVar2) {
      do {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
        unaff_s0 = unaff_s0 + 1;
      } while ((int)unaff_s0 < iVar2);
      iVar7 = SPRINTF_OBJ_7A0();
      return iVar7;
    }
    goto code_r0x800a136c;
  case 0x70:
  case 0x58:
    iVar7 = SPRINTF_OBJ_5A4();
    return iVar7;
  case 0x73:
    unaff_s1 = (byte *)*in_stack_00000220;
    in_stack_00000220 = in_stack_00000220 + 1;
    if ((in_stack_00000210 >> 2 & 1) == 0) {
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        FUN_800a018c(unaff_s1);
        iVar7 = SPRINTF_OBJ_7A0();
        return iVar7;
      }
      pvVar3 = memchr(unaff_s1,'\0',iVar2);
      unaff_s0 = (int)pvVar3 - (int)unaff_s1;
      if (pvVar3 == (void *)0x0) {
        iVar7 = SPRINTF_OBJ_7A0();
        return iVar7;
      }
    }
    else {
      unaff_s0 = (uint)*unaff_s1;
      unaff_s1 = unaff_s1 + 1;
      if (((in_stack_00000210 >> 4 & 1) != 0) && (iVar2 < (int)unaff_s0)) {
        iVar7 = SPRINTF_OBJ_7A0();
        return iVar7;
      }
    }
    goto code_r0x800a136c;
  case 0x75:
    uVar5 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = uVar5 & 0xffff;
    }
    in_stack_00000210 = in_stack_00000210 & 0xff;
    break;
  case 0x78:
    goto SPRINTF_OBJ_59C;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  bVar8 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) && (iVar2 = in_stack_00000214, bVar8 != 0)) {
      iVar2 = in_stack_00000214 + -1;
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
  }
  unaff_s0 = 0;
  while (uVar5 != 0) {
    unaff_s1 = unaff_s1 + -1;
    unaff_s0 = unaff_s0 + 1;
    *unaff_s1 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
    uVar5 = uVar5 / 10;
  }
  for (; (int)unaff_s0 < iVar2; unaff_s0 = unaff_s0 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if (bVar8 != 0) {
    unaff_s1[-1] = bVar8;
    iVar7 = SPRINTF_OBJ_7A0();
    return iVar7;
  }
  goto code_r0x800a136c;
SPRINTF_OBJ_59C:
  uVar5 = *in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar5 = uVar5 & 0xffff;
  }
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) &&
       (iVar2 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
      iVar2 = in_stack_00000214 + -2;
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
  }
  unaff_s0 = 0;
  for (; uVar5 != 0; uVar5 = uVar5 >> 4) {
    unaff_s1 = unaff_s1 + -1;
    unaff_s0 = unaff_s0 + 1;
    *unaff_s1 = "0123456789abcdef"[uVar5 & 0xf];
  }
  for (; (int)unaff_s0 < iVar2; unaff_s0 = unaff_s0 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if ((in_stack_00000210 >> 2 & 1) != 0) {
    unaff_s1[-1] = (byte)iVar7;
    unaff_s1[-2] = 0x30;
    iVar7 = SPRINTF_OBJ_7A0();
    return iVar7;
  }
  goto code_r0x800a136c;
}


