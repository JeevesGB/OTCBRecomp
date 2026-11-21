/* Function: UpdateTrackObjects */
/* Address: 8003c8fc */

void UpdateTrackObjects(void)

{
  int *piVar1;
  
  for (piVar1 = (int *)g_TrackObjectList; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    if ((piVar1[0x10] & 0x80000000U) != 0) {
      (**(code **)((&g_TrackObjectTypeTable)[*(short *)(piVar1 + 0x11)] +
                  *(short *)((int)piVar1 + 0x46) * 4))(piVar1);
      *(undefined2 *)((int)piVar1 + 0x15e) = *(undefined2 *)(piVar1 + 0x57);
    }
  }
  return;
}


