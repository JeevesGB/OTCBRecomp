/* Function: DpqColorLight */
/* Address: 8009c0e4 */

void DpqColorLight(VECTOR *_2,CVECTOR *_3,long p,CVECTOR *v2)

{
  gte_ldlvl(_2);
  gte_ldrgb(_3);
  gte_ldIR0(p);
  gte_dpcl_b();
  gte_strgb(v2);
  return;
}


