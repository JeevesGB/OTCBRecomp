/* Function: InitControllerPorts */
/* Address: 8005cee4 */

void InitControllerPorts(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  DAT_800cd714 = FUN_8005cb80();
  iVar5 = 0;
  if (0 < DAT_800cd714) {
    piVar7 = &g_PadRawState;
    iVar6 = 0;
    do {
      if (iVar5 < 2) {
        iVar4 = (int)(short)piVar7[1];
        iVar3 = PadGetState(iVar4);
        if (iVar3 == 0) {
          *(undefined2 *)((int)piVar7 + 6) = 1;
        }
        else {
          if (iVar3 == 1) {
            *(undefined2 *)((int)piVar7 + 6) = 1;
          }
          if (*(short *)((int)piVar7 + 6) != 0) {
            PadSetAct(iVar4,&g_MemFlag0 + iVar6,2);
            if (iVar3 != 2) {
              if (iVar3 != 6) goto LAB_8005cfb8;
              PadSetActAlign(iVar4,&DAT_800b54f0);
            }
            *(undefined2 *)((int)piVar7 + 6) = 0;
          }
        }
      }
LAB_8005cfb8:
      uVar1 = *(byte *)(*piVar7 + 1) & 0xf0;
      *(ushort *)(piVar7 + 2) = uVar1;
      if (uVar1 == 0x30) {
LAB_8005d03c:
        if (iVar5 < 2) {
          if (iVar5 == 0) {
            g_PadButtons = 0;
            g_PadAnalog1 = 0;
            g_PadButtons2 = 0;
            iVar3 = g_PadRawState;
          }
          else {
            g_PadButtons2_Alt = 0;
            g_PadAnalog2 = 0;
            g_PadButtons3 = 0;
            iVar3 = DAT_800cd6b4;
          }
          *(undefined1 *)(iVar3 + 3) = 0xff;
          *(undefined1 *)(iVar3 + 2) = 0xff;
        }
      }
      else if (uVar1 < 0x31) {
        if (((uVar1 == 0x10) || (uVar1 < 0x11)) || (uVar1 != 0x20)) goto LAB_8005d03c;
        FUN_8005cd6c(iVar5);
      }
      else {
        if ((uVar1 != 0x50) &&
           (((uVar2 = 0x40, 0x50 < uVar1 && (uVar2 = 0x70, uVar1 == 0x60)) || (uVar1 != uVar2))))
        goto LAB_8005d03c;
        FUN_8005cc3c(iVar5);
      }
      piVar7 = piVar7 + 3;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 2;
    } while (iVar5 < DAT_800cd714);
  }
  return;
}


