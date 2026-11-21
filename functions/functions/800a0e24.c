/* Function: SPRINTF_OBJ_258 */
/* Address: 800a0e24 */

int SPRINTF_OBJ_258(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  uint uVar5;
  byte *pbVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar7;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int iVar8;
  int in_stack_0000024c;
  
  do {
    iVar2 = param_1;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
    do {
      pbVar6 = &stack0x00000210;
      if ((in_stack_00000210 & 1) != 0) {
        in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
      }
      switch(param_2) {
      case 0x4c:
        iVar2 = SPRINTF_OBJ_29C(iVar2,(int)*(char *)(in_stack_0000024c + 1));
        return iVar2;
      default:
        if (param_2 != 0x25) goto SPRINTF_OBJ_84C;
        goto SPRINTF_OBJ_794;
      case 99:
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      case 100:
      case 0x69:
        uVar3 = *in_stack_00000220;
        if ((in_stack_00000210 >> 5 & 1) != 0) {
          uVar3 = (uint)(short)uVar3;
        }
        if ((int)uVar3 < 0) {
          iVar2 = SPRINTF_OBJ_390(-uVar3);
          return iVar2;
        }
        if ((in_stack_00000210 >> 1 & 1) != 0) {
          iVar2 = SPRINTF_OBJ_390();
          return iVar2;
        }
        goto code_r0x800a0f5c;
      case 0x68:
        iVar2 = SPRINTF_OBJ_2E4();
        return iVar2;
      case 0x6c:
        iVar2 = SPRINTF_OBJ_2E4();
        return iVar2;
      case 0x6e:
        if ((in_stack_00000210 >> 5 & 1) != 0) {
          *(short *)*in_stack_00000220 = (short)unaff_s2;
          iVar2 = SPRINTF_OBJ_82C();
          return iVar2;
        }
        *(int *)*in_stack_00000220 = unaff_s2;
        iVar2 = SPRINTF_OBJ_82C();
        return iVar2;
      case 0x6f:
        uVar3 = *in_stack_00000220;
        if ((in_stack_00000210 >> 5 & 1) != 0) {
          uVar3 = uVar3 & 0xffff;
        }
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          if ((in_stack_00000210 >> 3 & 1) != 0) {
            in_stack_00000218 = in_stack_00000214;
          }
          if (in_stack_00000218 < 1) {
            in_stack_00000218 = 1;
          }
        }
        uVar5 = 0;
        for (; uVar3 != 0; uVar3 = uVar3 >> 3) {
          pbVar6 = pbVar6 + -1;
          *pbVar6 = ((byte)uVar3 & 7) + 0x30;
          uVar5 = uVar5 + 1;
        }
        if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar5 != 0)) && (*pbVar6 != 0x30)) {
          pbVar6 = pbVar6 + -1;
          *pbVar6 = 0x30;
          uVar5 = uVar5 + 1;
        }
        if ((int)uVar5 < in_stack_00000218) {
          do {
            pbVar6 = pbVar6 + -1;
            *pbVar6 = 0x30;
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < in_stack_00000218);
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
        break;
      case 0x70:
      case 0x58:
        iVar2 = SPRINTF_OBJ_5A4();
        return iVar2;
      case 0x73:
        pbVar6 = (byte *)*in_stack_00000220;
        if ((in_stack_00000210 >> 2 & 1) == 0) {
          if ((in_stack_00000210 >> 4 & 1) == 0) {
            FUN_800a018c(pbVar6);
            iVar2 = SPRINTF_OBJ_7A0();
            return iVar2;
          }
          pvVar1 = memchr(pbVar6,'\0',in_stack_00000218);
          uVar5 = (int)pvVar1 - (int)pbVar6;
          if (pvVar1 == (void *)0x0) {
            iVar2 = SPRINTF_OBJ_7A0();
            return iVar2;
          }
        }
        else {
          uVar5 = (uint)*pbVar6;
          pbVar6 = pbVar6 + 1;
          if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar5)) {
            iVar2 = SPRINTF_OBJ_7A0();
            return iVar2;
          }
        }
        break;
      case 0x75:
        uVar3 = *in_stack_00000220;
        if ((in_stack_00000210 >> 5 & 1) != 0) {
          uVar3 = uVar3 & 0xffff;
        }
        in_stack_00000210 = in_stack_00000210 & 0xff;
code_r0x800a0f5c:
        bVar7 = (byte)(in_stack_00000210 >> 8);
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          if (((in_stack_00000210 >> 3 & 1) != 0) &&
             (in_stack_00000218 = in_stack_00000214, bVar7 != 0)) {
            in_stack_00000218 = in_stack_00000214 + -1;
          }
          if (in_stack_00000218 < 1) {
            in_stack_00000218 = 1;
          }
        }
        uVar5 = 0;
        while (uVar3 != 0) {
          pbVar6 = pbVar6 + -1;
          uVar5 = uVar5 + 1;
          *pbVar6 = (char)uVar3 + (char)(uVar3 / 10) * -10 + 0x30;
          uVar3 = uVar3 / 10;
        }
        for (; (int)uVar5 < in_stack_00000218; uVar5 = uVar5 + 1) {
          pbVar6 = pbVar6 + -1;
          *pbVar6 = 0x30;
        }
        if (bVar7 != 0) {
          pbVar6[-1] = bVar7;
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
        break;
      case 0x78:
        uVar3 = *in_stack_00000220;
        if ((in_stack_00000210 >> 5 & 1) != 0) {
          uVar3 = uVar3 & 0xffff;
        }
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          if (((in_stack_00000210 >> 3 & 1) != 0) &&
             (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
            in_stack_00000218 = in_stack_00000214 + -2;
          }
          if (in_stack_00000218 < 1) {
            in_stack_00000218 = 1;
          }
        }
        uVar5 = 0;
        for (; uVar3 != 0; uVar3 = uVar3 >> 4) {
          pbVar6 = pbVar6 + -1;
          uVar5 = uVar5 + 1;
          *pbVar6 = "0123456789abcdef"[uVar3 & 0xf];
        }
        for (; (int)uVar5 < in_stack_00000218; uVar5 = uVar5 + 1) {
          pbVar6 = pbVar6 + -1;
          *pbVar6 = 0x30;
        }
        if ((in_stack_00000210 >> 2 & 1) != 0) {
          pbVar6[-1] = (byte)param_2;
          pbVar6[-2] = 0x30;
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
      }
      in_stack_00000220 = in_stack_00000220 + 1;
      puVar4 = (uchar *)(unaff_s3 + unaff_s2);
      if (((int)uVar5 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
        do {
          *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
          in_stack_00000214 = in_stack_00000214 + -1;
          unaff_s2 = unaff_s2 + 1;
        } while ((int)uVar5 < in_stack_00000214);
        puVar4 = (uchar *)(unaff_s3 + unaff_s2);
      }
      memmove(puVar4,pbVar6,uVar5);
      unaff_s2 = unaff_s2 + uVar5;
      for (; (int)uVar5 < in_stack_00000214; uVar5 = uVar5 + 1) {
        *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
        unaff_s2 = unaff_s2 + 1;
      }
      param_2 = (int)*(char *)(in_stack_0000024c + 1);
      if (param_2 == 0) {
SPRINTF_OBJ_84C:
        *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
        return unaff_s2;
      }
      if (param_2 != 0x25) {
SPRINTF_OBJ_794:
        *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
        iVar2 = SPRINTF_OBJ_82C();
        return iVar2;
      }
      iVar2 = 0x23;
      in_stack_00000210 = DAT_800ca4ec;
      iVar8 = in_stack_0000024c + 1;
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                param_1 = iVar8 + 1;
                param_2 = (int)*(char *)(iVar8 + 1);
                if (param_2 != unaff_s5) break;
                in_stack_00000210 = in_stack_00000210 | 1;
                iVar8 = param_1;
              }
              if (param_2 != unaff_s6) break;
              in_stack_00000210 = in_stack_00000210 | 2;
              iVar8 = param_1;
            }
            if (param_2 != unaff_s4) break;
            in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar8 + 1),(byte)in_stack_00000210);
            iVar8 = param_1;
          }
          if (param_2 != 0x23) break;
          in_stack_00000210 = in_stack_00000210 | 4;
          iVar8 = param_1;
        }
        if (param_2 != 0x30) break;
        in_stack_00000210 = in_stack_00000210 | 8;
        iVar8 = param_1;
      }
      in_stack_00000214 = DAT_800ca4f0;
      if (param_2 == 0x2a) {
        iVar2 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar8 + 2));
        return iVar2;
      }
      while (param_2 - 0x30U < 10) {
        in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
        param_2 = (int)*(char *)(param_1 + 1);
        param_1 = param_1 + 1;
      }
      in_stack_00000218 = DAT_800ca4f4;
      in_stack_0000024c = param_1;
    } while (param_2 != 0x2e);
    param_2 = (int)*(char *)(param_1 + 1);
    iVar2 = param_1;
    if (param_2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_258(param_1,(int)*(char *)(param_1 + 2));
      return iVar2;
    }
    while (in_stack_0000024c = iVar2 + 1, param_2 - 0x30U < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
      param_2 = (int)*(char *)(iVar2 + 2);
      iVar2 = in_stack_0000024c;
    }
  } while( true );
}


