/* Function: FUN_8006b614 */
/* Address: 8006b614 */

int FUN_8006b614(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_2 + param_4 + param_3 * 6 + 1);
  switch(param_3) {
  case 0:
  case 1:
  case 2:
    iVar1 = *(int *)(param_1 + 0x1c);
    goto LAB_8006b65c;
  case 3:
    iVar1 = *(int *)(param_1 + 0x20);
    break;
  case 4:
    iVar1 = *(int *)(param_1 + 0x24);
    break;
  case 5:
    iVar1 = *(int *)(param_1 + 0x28);
    goto LAB_8006b65c;
  case 6:
    iVar1 = *(int *)(param_1 + 0x2c);
    break;
  case 7:
    iVar1 = *(int *)(param_1 + 0x30);
    break;
  case 8:
    iVar1 = *(int *)(param_1 + 0x34);
    break;
  case 9:
    iVar1 = *(int *)(param_1 + 0x38);
    break;
  case 10:
    iVar1 = *(int *)(param_1 + 0x3c);
    break;
  case 0xb:
    iVar1 = *(int *)(param_1 + 0x3c);
    break;
  case 0xc:
    iVar1 = *(int *)(param_1 + 0x3c);
    break;
  case 0xd:
    iVar1 = *(int *)(param_1 + 0x40);
    break;
  case 0xe:
    iVar1 = *(int *)(param_1 + 0x44);
    break;
  case 0xf:
    iVar1 = *(int *)(param_1 + 0x48);
    break;
  case 0x10:
    iVar1 = *(int *)(param_1 + 0x4c);
    break;
  case 0x11:
    iVar1 = *(int *)(param_1 + 0x50);
    break;
  case 0x12:
    iVar1 = *(int *)(param_1 + 0x54);
    break;
  case 0x13:
    iVar1 = *(int *)(param_1 + 0x58);
    break;
  case 0x14:
    iVar1 = *(int *)(param_1 + 0x5c);
    goto LAB_8006b65c;
  case 0x15:
    return *(int *)(param_1 + 0x60) + uVar2 * 8;
  case 0x16:
    iVar1 = *(int *)(param_1 + 100);
LAB_8006b65c:
    return iVar1 + uVar2 * 0x10;
  case 0x17:
    iVar1 = *(int *)(param_1 + 0x68);
    break;
  case 0x18:
    iVar1 = *(int *)(param_1 + 0x6c);
    break;
  case 0x19:
    iVar1 = *(int *)(param_1 + 0x70);
    break;
  case 0x1a:
    iVar1 = *(int *)(param_1 + 0x74);
    break;
  case 0x1b:
    iVar1 = *(int *)(param_1 + 0x78);
    break;
  case 0x1c:
    iVar1 = *(int *)(param_1 + 0x7c);
    break;
  default:
    return 0;
  }
  return iVar1 + uVar2 * 0xc;
}


