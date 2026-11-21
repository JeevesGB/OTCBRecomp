/* Function: InitMenuHeap */
/* Address: 8006626c */

void InitMenuHeap(void)

{
  SetHeapBase(PTR_DAT_8001bbf8);
  SetVRAMBase(PTR_DAT_8001bbf8 + 0xe0000);
  InitHeap3((ulong *)(PTR_DAT_8001bbf8 + 0xe0000),0x20000);
  InitHeapBlock(PTR_DAT_8001bbf8 + 0x100000,0x20000);
  return;
}


