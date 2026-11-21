/* Function: SpuGetVoiceEnvelope */
/* Address: 8009ae1c */

void SpuGetVoiceEnvelope(int vNum,short *envx)

{
  *envx = *(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + vNum * 0x10 + 0xc);
  return;
}


