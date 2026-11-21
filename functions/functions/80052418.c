/* Function: UpdateSoundEmitter */
/* Address: 80052418 */

void UpdateSoundEmitter(int param_1,int param_2)

{
  short sVar1;
  ushort *puVar2;
  ushort uVar3;
  
  puVar2 = *(ushort **)(param_1 + param_2 * 4 + 0xc);
  uVar3 = *puVar2 & 7;
  if (uVar3 == 1) {
LAB_8005248c:
    *(undefined2 *)(param_1 + param_2 * 2 + 0x36) = 0xffff;
  }
  else {
    if (uVar3 < 2) {
      if ((*puVar2 & 7) != 0) {
        return;
      }
    }
    else {
      if (uVar3 == 2) goto LAB_8005248c;
      if (uVar3 != 3) {
        return;
      }
    }
    sVar1 = SsUtKeyOn(*(short *)(param_1 + 0x32),puVar2[2],puVar2[3],puVar2[4],0,0,0);
    *(short *)(param_1 + param_2 * 2 + 0x36) = sVar1;
  }
  return;
}


