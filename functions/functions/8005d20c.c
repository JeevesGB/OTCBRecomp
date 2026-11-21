/* Function: MemAlloc */
/* Address: 8005d20c */

void MemAlloc(int param_1)

{
  g_HeapBase = g_HeapBase + (param_1 + 3U & 0xfffffffc);
  return;
}


