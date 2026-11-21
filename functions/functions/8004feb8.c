/* Function: UpdateCarParticles */
/* Address: 8004feb8 */

void UpdateCarParticles(int param_1)

{
  int *piVar1;
  
  GTE_IR1 = *(undefined2 *)(g_CarPhysicsParams + 0x3e);
  for (piVar1 = (int *)g_ParticleFlag1; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    if ((*(short *)(piVar1 + 5) < 0) && (piVar1[1] != param_1)) {
      FUN_8004fb80(piVar1);
    }
  }
  return;
}


