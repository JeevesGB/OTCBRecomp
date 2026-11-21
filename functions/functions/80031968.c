/* Function: UpdateCameraMatrix */
/* Address: 80031968 */

void UpdateCameraMatrix(undefined4 *param_1)

{
  do {
    *(undefined2 *)(param_1 + 7) = 0;
    (*(code *)(&g_CameraUpdateTable)[*(byte *)*param_1])(param_1);
  } while (*(short *)(param_1 + 7) != 0);
  return;
}


