/* Function: VM_KEY_OBJ_72C */
/* Address: 80095288 */

void VM_KEY_OBJ_72C(short param_1,uint param_2,undefined4 param_3,undefined2 param_4)

{
  uint in_v1;
  short in_t1;
  uint uStack00000010;
  uint uStack00000014;
  
  uStack00000010 = param_2 & 0xffff;
  uStack00000014 = in_v1 & 0xffff;
  _SsVmKeyOn(0x21,(int)param_1,(int)in_t1,param_4);
  return;
}


