/* Function: MemAllocAligned */
/* Address: 8005d248 */

void MemAllocAligned(int param_1)

{
  g_VRAMBase = g_VRAMBase + -(param_1 + 3U & 0xfffffffc);
  return;
}


