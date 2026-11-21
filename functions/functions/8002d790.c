/* Function: UpdateCarAnimation */
/* Address: 8002d790 */

void UpdateCarAnimation(void)

{
  (*(code *)(&g_CarAnimTable)[g_DrawSyncFlag])();
  return;
}


