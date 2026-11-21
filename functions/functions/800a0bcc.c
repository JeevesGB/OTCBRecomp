/* Function: sprintf */
/* Address: 800a0bcc */

int sprintf(char *buffer,char *fmt,...)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  uint uVar4;
  char *pcVar5;
  uchar *puVar6;
  int iVar7;
  uint in_a2;
  undefined4 in_a3;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  char *local_res4;
  uint local_res8;
  undefined4 local_resc;
  byte local_39;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint *local_28;
  
  local_28 = &local_res8;
  iVar11 = 0;
  cVar1 = *fmt;
  local_res8 = in_a2;
  local_resc = in_a3;
  while (iVar7 = (int)cVar1, iVar7 != 0) {
    if (iVar7 != 0x25) {
SPRINTF_OBJ_794:
      buffer[iVar11] = (char)iVar7;
      iVar11 = SPRINTF_OBJ_82C();
      return iVar11;
    }
    local_38 = DAT_800ca4ec;
    local_34 = DAT_800ca4f0;
    local_30 = DAT_800ca4f4;
    local_res4 = fmt;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pcVar2 = local_res4 + 1;
              iVar7 = (int)local_res4[1];
              if (iVar7 != 0x2d) break;
              local_38 = local_38 | 1;
              local_res4 = pcVar2;
            }
            if (iVar7 != 0x2b) break;
            local_38 = local_38 | 2;
            local_res4 = pcVar2;
          }
          if (iVar7 != 0x20) break;
          local_38._0_2_ = CONCAT11(local_res4[1],(byte)local_38);
          local_res4 = pcVar2;
        }
        if (iVar7 != 0x23) break;
        local_38 = local_38 | 4;
        local_res4 = pcVar2;
      }
      if (iVar7 != 0x30) break;
      local_38 = local_38 | 8;
      local_res4 = pcVar2;
    }
    if (iVar7 == 0x2a) {
      uVar4 = *local_28;
      local_28 = local_28 + 1;
      local_34 = uVar4;
      if ((int)uVar4 < 0) {
        local_34 = -uVar4;
        local_38 = local_38 | 1;
      }
      iVar11 = SPRINTF_OBJ_1BC(uVar4,(int)local_res4[2]);
      return iVar11;
    }
    while (local_res4 = pcVar2, pcVar2 = local_res4, iVar7 - 0x30U < 10) {
      local_34 = local_34 * 10 + -0x30 + iVar7;
      pcVar2 = local_res4 + 1;
      iVar7 = (int)local_res4[1];
    }
    pcVar5 = (char *)0x23;
    if (iVar7 == 0x2e) {
      iVar7 = (int)local_res4[1];
      pcVar5 = local_res4;
      if (iVar7 == 0x2a) {
        local_30 = *local_28;
        local_28 = local_28 + 1;
        iVar11 = SPRINTF_OBJ_258(local_res4,(int)local_res4[2]);
        return iVar11;
      }
      while (local_res4 = pcVar5 + 1, iVar7 - 0x30U < 10) {
        local_30 = local_30 * 10 + -0x30 + iVar7;
        iVar7 = (int)pcVar5[2];
        pcVar5 = local_res4;
      }
      pcVar5 = pcVar2;
      if (-1 < (int)local_30) {
        local_38 = local_38 | 0x10;
      }
    }
    pbVar9 = (byte *)&local_38;
    if ((local_38 & 1) != 0) {
      local_38 = local_38 & 0xfffffff7;
    }
    switch(iVar7) {
    case 0x4c:
      local_38 = local_38 | 0x80;
      iVar11 = SPRINTF_OBJ_29C(pcVar5,(int)local_res4[1]);
      return iVar11;
    default:
      if (iVar7 == 0x25) goto SPRINTF_OBJ_794;
      goto SPRINTF_OBJ_84C;
    case 99:
      local_28 = local_28 + 1;
      iVar11 = SPRINTF_OBJ_7A0();
      return iVar11;
    case 100:
    case 0x69:
      uVar4 = *local_28;
      if ((local_38 >> 5 & 1) != 0) {
        uVar4 = (uint)(short)uVar4;
      }
      if ((int)uVar4 < 0) {
        local_38._0_2_ = CONCAT11(0x2d,(byte)local_38);
        local_28 = local_28 + 1;
        iVar11 = SPRINTF_OBJ_390(-uVar4);
        return iVar11;
      }
      if ((local_38 >> 1 & 1) != 0) {
        local_38._0_2_ = CONCAT11(0x2b,(byte)local_38);
        local_28 = local_28 + 1;
        iVar11 = SPRINTF_OBJ_390();
        return iVar11;
      }
      goto code_r0x800a0f5c;
    case 0x68:
      iVar11 = SPRINTF_OBJ_2E4();
      return iVar11;
    case 0x6c:
      iVar11 = SPRINTF_OBJ_2E4();
      return iVar11;
    case 0x6e:
      piVar10 = (int *)*local_28;
      local_28 = local_28 + 1;
      if ((local_38 >> 5 & 1) != 0) {
        *(short *)piVar10 = (short)iVar11;
        iVar11 = SPRINTF_OBJ_82C();
        return iVar11;
      }
      *piVar10 = iVar11;
      iVar11 = SPRINTF_OBJ_82C();
      return iVar11;
    case 0x6f:
      uVar4 = *local_28;
      local_28 = local_28 + 1;
      if ((local_38 >> 5 & 1) != 0) {
        uVar4 = uVar4 & 0xffff;
      }
      if ((local_38 >> 4 & 1) == 0) {
        if ((local_38 >> 3 & 1) != 0) {
          local_30 = local_34;
        }
        if ((int)local_30 < 1) {
          local_30 = 1;
        }
      }
      uVar8 = 0;
      for (; uVar4 != 0; uVar4 = uVar4 >> 3) {
        pbVar9 = pbVar9 + -1;
        *pbVar9 = ((byte)uVar4 & 7) + 0x30;
        uVar8 = uVar8 + 1;
      }
      if ((((local_38 >> 2 & 1) != 0) && (uVar8 != 0)) && (*pbVar9 != 0x30)) {
        pbVar9 = pbVar9 + -1;
        *pbVar9 = 0x30;
        uVar8 = uVar8 + 1;
      }
      if ((int)uVar8 < (int)local_30) {
        do {
          pbVar9 = pbVar9 + -1;
          *pbVar9 = 0x30;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_30);
        iVar11 = SPRINTF_OBJ_7A0();
        return iVar11;
      }
      break;
    case 0x70:
      local_30 = 8;
      local_38 = local_38 | 0x50;
    case 0x58:
      iVar11 = SPRINTF_OBJ_5A4();
      return iVar11;
    case 0x73:
      pbVar9 = (byte *)*local_28;
      local_28 = local_28 + 1;
      if ((local_38 >> 2 & 1) == 0) {
        if ((local_38 >> 4 & 1) == 0) {
          FUN_800a018c(pbVar9);
          iVar11 = SPRINTF_OBJ_7A0();
          return iVar11;
        }
        pvVar3 = memchr(pbVar9,'\0',local_30);
        uVar8 = (int)pvVar3 - (int)pbVar9;
        if (pvVar3 == (void *)0x0) {
          iVar11 = SPRINTF_OBJ_7A0();
          return iVar11;
        }
      }
      else {
        uVar8 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
        if (((local_38 >> 4 & 1) != 0) && ((int)local_30 < (int)uVar8)) {
          iVar11 = SPRINTF_OBJ_7A0();
          return iVar11;
        }
      }
      break;
    case 0x75:
      uVar4 = *local_28;
      if ((local_38 >> 5 & 1) != 0) {
        uVar4 = uVar4 & 0xffff;
      }
      local_38._0_2_ = (ushort)(byte)local_38;
code_r0x800a0f5c:
      local_28 = local_28 + 1;
      if ((local_38 >> 4 & 1) == 0) {
        if (((local_38 >> 3 & 1) != 0) && (local_30 = local_34, local_38._1_1_ != 0)) {
          local_30 = local_34 + -1;
        }
        if ((int)local_30 < 1) {
          local_30 = 1;
        }
      }
      uVar8 = 0;
      while (uVar4 != 0) {
        pbVar9 = pbVar9 + -1;
        uVar8 = uVar8 + 1;
        *pbVar9 = (char)uVar4 + (char)(uVar4 / 10) * -10 + 0x30;
        uVar4 = uVar4 / 10;
      }
      for (; (int)uVar8 < (int)local_30; uVar8 = uVar8 + 1) {
        pbVar9 = pbVar9 + -1;
        *pbVar9 = 0x30;
      }
      if (local_38._1_1_ != 0) {
        pbVar9[-1] = local_38._1_1_;
        iVar11 = SPRINTF_OBJ_7A0();
        return iVar11;
      }
      break;
    case 0x78:
      uVar4 = *local_28;
      local_28 = local_28 + 1;
      if ((local_38 >> 5 & 1) != 0) {
        uVar4 = uVar4 & 0xffff;
      }
      if ((local_38 >> 4 & 1) == 0) {
        if (((local_38 >> 3 & 1) != 0) && (local_30 = local_34, (local_38 >> 2 & 1) != 0)) {
          local_30 = local_34 + -2;
        }
        if ((int)local_30 < 1) {
          local_30 = 1;
        }
      }
      uVar8 = 0;
      for (; uVar4 != 0; uVar4 = uVar4 >> 4) {
        pbVar9 = pbVar9 + -1;
        uVar8 = uVar8 + 1;
        *pbVar9 = "0123456789abcdef"[uVar4 & 0xf];
      }
      for (; (int)uVar8 < (int)local_30; uVar8 = uVar8 + 1) {
        pbVar9 = pbVar9 + -1;
        *pbVar9 = 0x30;
      }
      if ((local_38 >> 2 & 1) != 0) {
        pbVar9[-1] = (byte)iVar7;
        pbVar9[-2] = 0x30;
        iVar11 = SPRINTF_OBJ_7A0();
        return iVar11;
      }
    }
    puVar6 = (uchar *)(buffer + iVar11);
    if (((int)uVar8 < (int)local_34) && ((local_38 & 1) == 0)) {
      do {
        buffer[iVar11] = ' ';
        local_34 = local_34 + -1;
        iVar11 = iVar11 + 1;
      } while ((int)uVar8 < (int)local_34);
      puVar6 = (uchar *)(buffer + iVar11);
    }
    memmove(puVar6,pbVar9,uVar8);
    iVar11 = iVar11 + uVar8;
    for (; (int)uVar8 < (int)local_34; uVar8 = uVar8 + 1) {
      buffer[iVar11] = ' ';
      iVar11 = iVar11 + 1;
    }
    fmt = local_res4 + 1;
    cVar1 = local_res4[1];
  }
SPRINTF_OBJ_84C:
  buffer[iVar11] = '\0';
  return iVar11;
}


