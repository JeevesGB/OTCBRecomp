/* Function: SpuSetReverbDepth */
/* Address: 80099c4c */

long SpuSetReverbDepth(SpuReverbAttr *attr)

{
  uint uVar1;
  
  uVar1 = attr->mask;
  if ((uVar1 == 0) || ((uVar1 & 2) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x184) = (attr->depth).left;
    DAT_800c3cf8 = (attr->depth).left;
  }
  if ((uVar1 == 0) || ((uVar1 & 4) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x186) = (attr->depth).right;
    DAT_800c3cfa = (attr->depth).right;
  }
  return 0;
}


