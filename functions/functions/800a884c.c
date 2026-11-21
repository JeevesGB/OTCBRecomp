/* Function: StSetStream */
/* Address: 800a884c */

void StSetStream(u_long mode,u_long start_frame,u_long end_frame,func1 *func1,func2 *func2)

{
  FUN_800a8a8c(1);
  DAT_800d0fd0 = 0;
  DAT_800d1040 = func1;
  DAT_800d0fa8 = mode & 1;
  DAT_800d0fb8 = 0;
  DAT_800d0fb0 = 0;
  DAT_800d0fa4 = 0;
  DAT_800d0fa0 = 0;
  DAT_800d1044 = func2;
  return;
}


