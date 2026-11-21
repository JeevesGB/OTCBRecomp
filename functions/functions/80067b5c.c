/* Function: FUN_80067b5c */
/* Address: 80067b5c */

void FUN_80067b5c(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int local_e8 [4];
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 10:
  case 0xb:
  case 0xc:
    iVar1 = 0;
    local_70 = param_1 + 0xf;
    local_6c = param_1 + 0x14;
    local_68 = param_1 + 0x19;
    local_64 = param_1 + 0x1e;
    local_c0 = param_1 + 0x32;
    local_30 = param_1 + 0x6e;
    do {
      local_e8[3] = local_70;
      local_d8 = local_6c;
      local_d4 = local_68;
      local_d0 = local_64;
      local_e8[0] = param_1;
      local_e8[1] = param_1;
      local_e8[2] = param_1;
      local_cc = param_1 + 0x23;
      local_c8 = param_1 + 0x28;
      local_c4 = param_1 + 0x2d;
      local_bc = local_c0;
      local_b8 = local_c0;
      local_b4 = param_1 + 0x41;
      local_b0 = param_1 + 0x46;
      local_ac = param_1 + 0x4b;
      local_a8 = param_1 + 0x50;
      local_a4 = param_1 + 0x55;
      local_a0 = param_1 + 0x5a;
      local_9c = param_1 + 0x5f;
      local_98 = param_1 + 100;
      local_94 = param_1 + 0x69;
      local_8c = param_1 + 0x73;
      local_88 = param_1 + 0x78;
      local_84 = param_1 + 0x7d;
      local_80 = param_1 + 0x82;
      local_90 = local_30;
      local_7c = param_1 + 0x87;
      local_78 = param_1 + 0x8c;
      if (*(char *)(local_e8[param_2] + iVar1) == '\x02') {
        *(undefined1 *)(local_e8[param_2] + iVar1) = 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0xf);
    break;
  default:
    iVar1 = 0;
    local_40 = param_1 + 0xf;
    local_3c = param_1 + 0x14;
    local_38 = param_1 + 0x19;
    local_34 = param_1 + 0x1e;
    local_c0 = param_1 + 0x32;
    local_30 = param_1 + 0x6e;
    do {
      local_e8[3] = local_40;
      local_d8 = local_3c;
      local_d4 = local_38;
      local_d0 = local_34;
      local_e8[0] = param_1;
      local_e8[1] = param_1;
      local_e8[2] = param_1;
      local_cc = param_1 + 0x23;
      local_c8 = param_1 + 0x28;
      local_c4 = param_1 + 0x2d;
      local_bc = local_c0;
      local_b8 = local_c0;
      local_b4 = param_1 + 0x41;
      local_b0 = param_1 + 0x46;
      local_ac = param_1 + 0x4b;
      local_a8 = param_1 + 0x50;
      local_a4 = param_1 + 0x55;
      local_a0 = param_1 + 0x5a;
      local_9c = param_1 + 0x5f;
      local_98 = param_1 + 100;
      local_94 = param_1 + 0x69;
      local_8c = param_1 + 0x73;
      local_88 = param_1 + 0x78;
      local_84 = param_1 + 0x7d;
      local_80 = param_1 + 0x82;
      local_90 = local_30;
      local_7c = param_1 + 0x87;
      local_78 = param_1 + 0x8c;
      if (*(char *)(local_e8[param_2] + iVar1) == '\x02') {
        *(undefined1 *)(local_e8[param_2] + iVar1) = 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 5);
    break;
  case 0x15:
  case 0x16:
    iVar1 = 0;
    local_60 = param_1 + 0xf;
    local_5c = param_1 + 0x14;
    local_58 = param_1 + 0x19;
    local_54 = param_1 + 0x1e;
    do {
      pcVar2 = (char *)(param_1 + 0x69 + iVar1);
      if (*pcVar2 == '\x02') {
        *pcVar2 = '\x01';
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 5);
    iVar1 = 0;
    local_50 = param_1 + 0xf;
    local_4c = param_1 + 0x14;
    local_48 = param_1 + 0x19;
    local_44 = param_1 + 0x1e;
    local_30 = param_1 + 0x5a;
    do {
      pcVar2 = (char *)(param_1 + 0x6e + iVar1);
      if (*pcVar2 == '\x02') {
        *pcVar2 = '\x01';
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 5);
  }
  local_e8[3] = param_1 + 0xf;
  local_d8 = param_1 + 0x14;
  local_d4 = param_1 + 0x19;
  local_d0 = param_1 + 0x1e;
  local_cc = param_1 + 0x23;
  local_c8 = param_1 + 0x28;
  local_c4 = param_1 + 0x2d;
  local_c0 = param_1 + 0x32;
  local_bc = local_c0;
  local_b8 = local_c0;
  local_b4 = param_1 + 0x41;
  local_b0 = param_1 + 0x46;
  local_ac = param_1 + 0x4b;
  local_a8 = param_1 + 0x50;
  local_a4 = param_1 + 0x55;
  local_a0 = param_1 + 0x5a;
  local_9c = param_1 + 0x5f;
  local_98 = param_1 + 100;
  local_94 = param_1 + 0x69;
  local_90 = param_1 + 0x6e;
  local_8c = param_1 + 0x73;
  local_88 = param_1 + 0x78;
  local_84 = param_1 + 0x7d;
  local_80 = param_1 + 0x82;
  local_7c = param_1 + 0x87;
  local_e8[0] = param_1;
  local_e8[1] = param_1;
  local_e8[2] = param_1;
  local_78 = param_1 + 0x8c;
  *(undefined1 *)(local_e8[param_2] + param_3) = 2;
  return;
}


