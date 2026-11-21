/* Function: DrawOTagEnv */
/* Address: 8009cfcc */

void DrawOTagEnv(u_long *p,DRAWENV *env)

{
  undefined *puVar1;
  
  if (1 < DAT_800ca16e) {
    (*(code *)PTR_printf_800ca168)("DrawOTagEnv(%08x,&08x)...\n",p,env);
  }
  SYS_OBJ_13C0(&env->dr_env,env);
  puVar1 = PTR_PTR_800ca164;
  (env->dr_env).tag = (env->dr_env).tag & 0xff000000 | (uint)p & 0xffffff;
  (**(code **)(puVar1 + 8))(*(undefined4 *)(puVar1 + 0x18),&env->dr_env,0x40,0);
  memcpy(&DAT_800ca17c,(uchar *)env,0x5c);
  return;
}


