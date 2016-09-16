#define NE2C_VERSION 375
#include "compiled.h"
#include "precomp.h"
#include "e2c.h"
#include "aa4shared.h"
#include "postcomp.h"



/* F479144_AA_GET_POINT_TYPE */

s_t_r f479144_aa_get_point_type(proc_num)
 integer proc_num;
{

   struct ff479144_aa_get_point_type {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      integer proc_num;
      integer integer_3;   /* 1 */
      integer tmp_2;
      boole tmp_0;
      s_t_r s_t_r_6;   /* the string "CONST" */
      s_t_r str;
      lispob nil_8;   /* the global variable nil */
      s_t_r s_t_r_9;   /* the string "VAR" */
      s_t_r g1044_aa_get_point_type;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff479144_aa_get_point_type *, template_array.template[0]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(proc_num))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */


   act_rec.tmp_2 = (integer)   -(1);
   act_rec.tmp_0 = (boole)boolean2obj(proc_num > act_rec.tmp_2);
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.str = act_rec.s_t_r_6;
   goto _l2;

_l1:;

   act_rec.str = act_rec.s_t_r_9;

_l2:;

   act_rec.g1044_aa_get_point_type = act_rec.str;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1044_aa_get_point_type;
}


/* F511556_AA_BUILD_POINT_NA */

s_t_r f511556_aa_build_point_na(proc_num, pnt_num)
 integer proc_num;
 integer pnt_num;
{

   struct ff511556_aa_build_point_na {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      integer proc_num;
      integer pnt_num;
      s_t_r s_t_r_4;   /* the string "" */
      s_t_r str;
      integer integer_6;   /* 1 */
      integer tmp_2;
      boole tmp_0;
      s_t_r tmp_4;
      s_t_r s_t_r_10;   /* the string "_" */
      lispob nil_11;   /* the global variable nil */
      s_t_r tmp_6;
      s_t_r tmp_5;
      s_t_r g1045_aa_build_point_name;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff511556_aa_build_point_na *, template_array.template[1]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(proc_num, pnt_num))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */


   act_rec.str = act_rec.s_t_r_4;
   act_rec.tmp_2 = (integer)   -(1);
   act_rec.tmp_0 = (boole)boolean2obj(proc_num > act_rec.tmp_2);
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.tmp_4 = int2str(
      proc_num
   );
   act_rec.str = f686094_times(
      (s_t_r)(act_rec.tmp_4),
      act_rec.s_t_r_10
   );

_l1:;

   act_rec.tmp_6 = int2str(
      pnt_num
   );
   act_rec.tmp_5 = f686094_times(
      act_rec.str,
      (s_t_r)(act_rec.tmp_6)
   );
   act_rec.str = (s_t_r)(act_rec.tmp_5);
   act_rec.g1045_aa_build_point_name = act_rec.str;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1045_aa_build_point_name;
}


/* F112103_AA_FIXUP_FILENAME */

s_t_r f112103_aa_fixup_filename(fn)
 s_t_r fn;
{

   struct ff112103_aa_fixup_filename {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      s_t_r fn;
      s_t_r s_t_r_3;   /* the string "/" */
      lispob los;
      lispob tmp_2;
      s_t_r res;
      lispob _s_2053;
      boole tmp_0;
      s_t_r k;
      s_t_r s_t_r_10;   /* the string "_" */
      integer integer_11;   /* 0 */
      c_h_a_r tmp_5;
      integer tmp_4;
      integer integer_14;   /* 48 */
      integer integer_15;   /* 57 */
      s_t_r s_t_r_16;   /* the string "prog_" */
      s_t_r tmp_3;
      lispob nil_18;   /* the global variable nil */
      s_t_r g1046_aa_fixup_filename;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff112103_aa_fixup_filename *, template_array.template[2]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(fn))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.fn = fn;

   act_rec.los = f920733_parse_string(
      act_rec.s_t_r_3,
      act_rec.fn
   );
   act_rec.tmp_2 = car(
      act_rec.los
   );
   act_rec.res = (s_t_r)(lispob)(act_rec.tmp_2);
   act_rec._s_2053 = cdr(
      act_rec.los
   );

_l1:;

   act_rec.tmp_0 = (boole)list_null(
      act_rec._s_2053
   );
   if (!((boole)(act_rec.tmp_0))) goto _l2;
   goto _l3;

_l2:;

   act_rec.tmp_0 = (boole)car(
      act_rec._s_2053
   );
   act_rec.k = (s_t_r)(lispob)(act_rec.tmp_0);
   act_rec.tmp_2 = (lispob)f686094_times(
      act_rec.res,
      act_rec.s_t_r_10
   );
   act_rec.tmp_0 = (boole)f686094_times(
      (s_t_r)(act_rec.tmp_2),
      act_rec.k
   );
   act_rec.res = (s_t_r)(act_rec.tmp_0);
   act_rec.tmp_0 = (boole)cdr(
      act_rec._s_2053
   );
   act_rec._s_2053 = (lispob)(act_rec.tmp_0);
   goto _l1;

_l3:;

   act_rec.tmp_5 = f751295_select(
      act_rec.res,
      0
   );
   act_rec.tmp_4 = f747679_ord(
      (c_h_a_r)(act_rec.tmp_5)
   );
   act_rec.tmp_0 = (boole)boolean2obj(act_rec.tmp_4 >= 48);
   if (!((boole)(act_rec.tmp_0))) goto _l4;
   act_rec.tmp_4 = (integer)f751295_select(
      act_rec.res,
      0
   );
   act_rec.tmp_5 = (c_h_a_r)f747679_ord(
      (c_h_a_r)(act_rec.tmp_4)
   );
   act_rec.tmp_0 = (boole)boolean2obj(act_rec.tmp_5 <= 57);

_l4:;

   if (!((boole)(act_rec.tmp_0))) goto _l5;
   act_rec.tmp_3 = f686094_times(
      act_rec.s_t_r_16,
      act_rec.res
   );
   act_rec.res = (s_t_r)(act_rec.tmp_3);

_l5:;

   act_rec.g1046_aa_fixup_filename = f731487_lowercase(
      act_rec.res
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1046_aa_fixup_filename;
}


/* F136293_IS_ABB_ROBOT */

boole f136293_is_abb_robot(rob)
 shapep rob;
{

   struct ff136293_is_abb_robot {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      shapep rob;
      idob false_3;   /* the global variable false */
      boole ret;
      boole tmp_0;
      s_t_r tmp_1;
      s_t_r str;
      s_t_r s_t_r_8;   /* the string "ABB" */
      integer tmp_3;
      integer integer_10;   /* 1 */
      integer tmp_5;
      lispob nil_12;   /* the global variable nil */
      boole g1047_is_abb_robot;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff136293_is_abb_robot *, template_array.template[3]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(rob))
      return (boole)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.rob = rob;

   act_rec.ret = ((boole)(act_rec.false_3->id_value));
   act_rec.tmp_0 = f320997_is_robot(
      act_rec.rob
   );
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.tmp_1 = f704000_silspec_type(
      act_rec.rob
   );
   act_rec.str = f351630_uppercase(
      (s_t_r)(act_rec.tmp_1)
   );
   act_rec.tmp_3 = f893325_find(
      act_rec.str,
      act_rec.s_t_r_8
   );
   act_rec.tmp_5 = (integer)   -(1);
   act_rec.tmp_1 = (s_t_r)boolean2obj(act_rec.tmp_3 == act_rec.tmp_5);
   act_rec.ret = boolean2obj(!((boole)(act_rec.tmp_1)));

_l1:;

   act_rec.g1047_is_abb_robot = act_rec.ret;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1047_is_abb_robot;
}


/* F720801_AA_ABB_EA */

s_t_r f720801_aa_abb_ea(lor)
 lispob lor;
{

   struct ff720801_aa_abb_ea {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      lispob lor;
      s_t_r s_t_r_3;   /* the string "[" */
      s_t_r str;
      integer integer_5;   /* 0 */
      integer i;
      integer integer_7;   /* 1 */
      integer _s_2055;
      integer integer_9;   /* 5 */
      integer _s_2056;
      boole tmp_0;
      integer tmp_1;
      lispob tmp_7;
      real tmp_6;
      s_t_r s_t_r_15;   /* the string "%.4f" */
      s_t_r tmp_5;
      s_t_r tmp_3;
      lispob nil_18;   /* the global variable nil */
      s_t_r s_t_r_19;   /* the string "9E9" */
      s_t_r s_t_r_20;   /* the string "," */
      integer tmp_2;
      idob false_22;   /* the global variable false */
      integer integer_23;   /* 6 */
      lispob tmp_4;
      s_t_r s_t_r_25;   /* the string ",9E9" */
      s_t_r s_t_r_26;   /* the string "]" */
      s_t_r g1048_aa_abb_ea;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff720801_aa_abb_ea *, template_array.template[4]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(lor))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.lor = lor;

   act_rec.str = act_rec.s_t_r_3;
   act_rec.i = 0;
   act_rec._s_2055 = 1;
   act_rec._s_2056 = 5;

_l1:;

   act_rec.tmp_0 = (boole)boolean2obj(act_rec.i > act_rec._s_2056);
   if (!((boole)(act_rec.tmp_0))) goto _l2;
   goto _l3;

_l2:;

   act_rec.tmp_1 = (integer)list_length(
      act_rec.lor
   );
   act_rec.tmp_0 = (boole)boolean2obj(act_rec.i < act_rec.tmp_1);
   if (!((boole)(act_rec.tmp_0))) goto _l4;
   act_rec.tmp_7 = list_select(
      act_rec.lor,
      act_rec.i
   );
   act_rec.tmp_6 = f283114_ob_to_real(
      act_rec.tmp_7
   );
   act_rec.tmp_5 = f10284_real2str(
      act_rec.s_t_r_15,
      act_rec.tmp_6
   );
   act_rec.tmp_3 = f686094_times(
      act_rec.str,
      (s_t_r)(act_rec.tmp_5)
   );
   act_rec.str = (s_t_r)(act_rec.tmp_3);
   goto _l5;

_l4:;

   act_rec.tmp_3 = f686094_times(
      act_rec.str,
      act_rec.s_t_r_19
   );
   act_rec.str = (s_t_r)(act_rec.tmp_3);

_l5:;

   act_rec.tmp_0 = (boole)boolean2obj(act_rec.i < 5);
   if (!((boole)(act_rec.tmp_0))) goto _l6;
   act_rec.tmp_3 = f686094_times(
      act_rec.str,
      act_rec.s_t_r_20
   );
   act_rec.str = (s_t_r)(act_rec.tmp_3);

_l6:;

   act_rec.tmp_2 = (integer)act_rec.i + act_rec._s_2055;
   act_rec.i = (integer)(act_rec.tmp_2);
   goto _l1;

_l3:;

   if (!(((boole)(act_rec.false_22->id_value)))) goto _l7;
   act_rec.tmp_2 = (integer)list_length(
      act_rec.lor
   );
   act_rec.tmp_0 = (boole)boolean2obj(act_rec.tmp_2 > 6);
   if (!((boole)(act_rec.tmp_0))) goto _l8;
   act_rec.tmp_5 = f686094_times(
      act_rec.str,
      act_rec.s_t_r_20
   );
   act_rec.tmp_4 = list_select(
      act_rec.lor,
      6
   );
   act_rec.tmp_6 = f283114_ob_to_real(
      act_rec.tmp_4
   );
   act_rec.tmp_7 = (lispob)f10284_real2str(
      act_rec.s_t_r_15,
      act_rec.tmp_6
   );
   act_rec.tmp_3 = f686094_times(
      (s_t_r)(act_rec.tmp_5),
      (s_t_r)(act_rec.tmp_7)
   );
   act_rec.str = (s_t_r)(act_rec.tmp_3);
   goto _l7;

_l8:;

   act_rec.tmp_3 = f686094_times(
      act_rec.str,
      act_rec.s_t_r_25
   );
   act_rec.str = (s_t_r)(act_rec.tmp_3);

_l7:;

   act_rec.g1048_aa_abb_ea = f686094_times(
      act_rec.str,
      act_rec.s_t_r_26
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1048_aa_abb_ea;
}


/* F401200_AA_ABB_QUADRANT */

integer f401200_aa_abb_quadrant(pad__0, j_orig)
 integer pad__0;
 real j_orig;
{

   struct ff401200_aa_abb_quadrant {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      integer pad__0;
      real j_orig;
      real j;
      real real_5;   /* 1.000000000000000e+003 */
      real tmp_1;
      integer j_trunc;
      integer integer_8;   /* 0 */
      real real_9;   /* 9.000000000000000e+001 */
      real tmp_0;
      integer quad_num;
      real real_12;   /* 0.000000000000000e+000 */
      boole tmp_5;
      integer ret;
      lispob nil_15;   /* the global variable nil */
      idob geom_epsilon_16;   /* the global variable geom_epsilon */
      integer integer_17;   /* 1 */
      integer tmp_6;
      integer g1049_aa_abb_quadrant;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff401200_aa_abb_quadrant *, template_array.template[5]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(pad__0, j_orig))
      return ncode_integer_answer;
#endif

   /* This code is a translation of the user's Sil code. */


   act_rec.j = real_abs(
      j_orig
   );
   act_rec.tmp_1 = (real)act_rec.j * 1.000000000000000e+003;
   act_rec.j = (real)(act_rec.tmp_1);
   act_rec.j_trunc = f1040535_round(
      0,
      act_rec.j
   );
   act_rec.tmp_1 = (real)act_rec.j_trunc;
   act_rec.j = act_rec.tmp_1 / 1.000000000000000e+003;
   act_rec.tmp_0 = (real)act_rec.j / 9.000000000000000e+001;
   act_rec.quad_num = trunc(
      act_rec.tmp_0
   );
   act_rec.tmp_5 = (boole)boolean2obj(j_orig >= 0.000000000000000e+000);
   if (!((boole)(act_rec.tmp_5))) goto _l1;
   act_rec.ret = act_rec.quad_num;
   goto _l2;

_l1:;

   act_rec.tmp_0 = (real)j_orig - 0.000000000000000e+000;
   act_rec.tmp_1 = real_abs(
      act_rec.tmp_0
   );
   act_rec.tmp_5 = (boole)boolean2obj(act_rec.tmp_1 < (*((real *)(((charp)(act_rec.geom_epsilon_16->id_value)) + sizeof(real)))));
   if (!((boole)(act_rec.tmp_5))) goto _l3;
   act_rec.ret = act_rec.quad_num;
   goto _l2;

_l3:;

   act_rec.tmp_6 = (integer)act_rec.quad_num + 1;
   act_rec.ret =    -(act_rec.tmp_6);

_l2:;

   act_rec.g1049_aa_abb_quadrant = act_rec.ret;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1049_aa_abb_quadrant;
}


/* F163095_AA_CALC_CFX */

integer f163095_aa_calc_cfx(cur_jv, rob)
 jvp cur_jv;
 shapep rob;
{

   struct ff163095_aa_calc_cfx {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      jvp cur_jv;
      shapep rob;
      real real_4;   /* 9.000000000000000e+001 */
      real tmp_3;
      boole elbow_down;
      real real_7;   /* 0.000000000000000e+000 */
      boole j5_pos;
      idob true_9;   /* the global variable true */
      boole in_front;
      shapep flg_shp;
      id id_12;   /* LINK1 */
      shapep link1_shp;
      boole tmp_0;
      lispob tmp_5;
      idob null_shape_16;   /* the global variable null_shape */
      lispob tmp_7;
      boole tmp_6;
      struct frame tmp_10;
      struct frame tmp_11;
      struct frame fr;
      struct crt_zyx tmp_12;
      lispob nil_23;   /* the global variable nil */
      integer integer_24;   /* 0 */
      integer cfx_val;
      integer integer_26;   /* 4 */
      integer tmp_14;
      integer integer_28;   /* 2 */
      integer integer_29;   /* 1 */
      integer g1050_aa_calc_cfx;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff163095_aa_calc_cfx *, template_array.template[6]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(cur_jv, rob))
      return ncode_integer_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.cur_jv = cur_jv;
   act_rec.rob = rob;

   act_rec.tmp_3 = (real)   -(9.000000000000000e+001);
   act_rec.elbow_down = boolean2obj(act_rec.cur_jv->j3 >= act_rec.tmp_3);
   act_rec.j5_pos = boolean2obj(act_rec.cur_jv->j5 >= 0.000000000000000e+000);
   act_rec.in_front = ((boole)(act_rec.true_9->id_value));
   act_rec.flg_shp = f946540_get_flange(
      act_rec.rob
   );
   act_rec.link1_shp = f465581_select_noerr(
      act_rec.rob,
      act_rec.id_12
   );
   act_rec.tmp_5 = (lispob)act_rec.flg_shp;
   act_rec.tmp_7 = (lispob)((shapep)(act_rec.null_shape_16->id_value));
   act_rec.tmp_6 = eq(
      act_rec.tmp_5,
      act_rec.tmp_7
   );
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_6)));
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.tmp_7 = (lispob)act_rec.link1_shp;
   act_rec.tmp_5 = (lispob)((shapep)(act_rec.null_shape_16->id_value));
   act_rec.tmp_6 = eq(
      act_rec.tmp_7,
      act_rec.tmp_5
   );
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_6)));

_l1:;

   if (!((boole)(act_rec.tmp_0))) goto _l2;
   f329319_pose(
      &(act_rec.tmp_10),
      act_rec.flg_shp
   );
   f329319_pose(
      &(act_rec.tmp_11),
      act_rec.link1_shp
   );
   f143161_in_frame(
      &(act_rec.fr),
      &(act_rec.tmp_10),
      &(act_rec.tmp_11)
   );
   f868477_frame_to_crt_zyx(
      &(act_rec.tmp_12),
      &(act_rec.fr)
   );
   act_rec.in_front = boolean2obj((real)(act_rec.tmp_12.xc) >= 0.000000000000000e+000);

_l2:;

   act_rec.cfx_val = 0;
   act_rec.tmp_0 = (boole)boolean2obj(!(act_rec.in_front));
   if (!((boole)(act_rec.tmp_0))) goto _l3;
   act_rec.tmp_14 = (integer)act_rec.cfx_val + 4;
   act_rec.cfx_val = (integer)(act_rec.tmp_14);

_l3:;

   act_rec.tmp_0 = (boole)boolean2obj(!(act_rec.elbow_down));
   if (!((boole)(act_rec.tmp_0))) goto _l4;
   act_rec.tmp_14 = (integer)act_rec.cfx_val + 2;
   act_rec.cfx_val = (integer)(act_rec.tmp_14);

_l4:;

   act_rec.tmp_0 = (boole)boolean2obj(!(act_rec.j5_pos));
   if (!((boole)(act_rec.tmp_0))) goto _l5;
   act_rec.tmp_14 = (integer)act_rec.cfx_val + 1;
   act_rec.cfx_val = (integer)(act_rec.tmp_14);

_l5:;

   act_rec.g1050_aa_calc_cfx = act_rec.cfx_val;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1050_aa_calc_cfx;
}


/* F919290_AA_SET_CFX_USAGE */

lispob f919290_aa_set_cfx_usage(rob)
 robotp rob;
{

   struct ff919290_aa_set_cfx_usage {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      robotp rob;
      idob false_3;   /* the global variable false */
      idob aa_include_cfx_4;   /* the global variable aa_include_cfx */
      lispob nil_5;   /* the global variable nil */
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff919290_aa_set_cfx_usage *, template_array.template[7]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(rob))
      return ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.rob = rob;

   SET_OB_FIELD(act_rec.aa_include_cfx_4, id_value, ((boole)(act_rec.false_3->id_value)), lispob);

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.nil_5;
}


/* F407730_AA_ABB_CONFIG */

s_t_r f407730_aa_abb_config(cur_jv, rob)
 jvp cur_jv;
 shapep rob;
{

   struct ff407730_aa_abb_config {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      jvp cur_jv;
      shapep rob;
      boole tmp_0;
      idob true_5;   /* the global variable true */
      idob aa_include_cfx_6;   /* the global variable aa_include_cfx */
      integer cfx_val;
      lispob nil_8;   /* the global variable nil */
      integer integer_9;   /* 0 */
      s_t_r s_t_r_10;   /* the string "[" */
      integer tmp_1;
      s_t_r tmp_11;
      s_t_r tmp_9;
      s_t_r s_t_r_14;   /* the string "," */
      s_t_r tmp_8;
      s_t_r tmp_7;
      s_t_r tmp_6;
      s_t_r tmp_5;
      s_t_r tmp_4;
      s_t_r tmp_3;
      s_t_r s_t_r_21;   /* the string "]" */
      s_t_r str;
      s_t_r g1051_aa_abb_config;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff407730_aa_abb_config *, template_array.template[8]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(cur_jv, rob))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.cur_jv = cur_jv;
   act_rec.rob = rob;

   act_rec.tmp_0 = ((boole)(act_rec.true_5->id_value));
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.tmp_0 = ((boole)(act_rec.true_5->id_value));
   goto _l2;

_l1:;

   act_rec.tmp_0 = ((boole)(act_rec.aa_include_cfx_6->id_value));

_l2:;

   if (!((boole)(act_rec.tmp_0))) goto _l3;
   act_rec.cfx_val = f163095_aa_calc_cfx(
      act_rec.cur_jv,
      act_rec.rob
   );
   goto _l4;

_l3:;

   act_rec.cfx_val = 0;

_l4:;

   act_rec.tmp_1 = f401200_aa_abb_quadrant(
      0,
      act_rec.cur_jv->j1
   );
   act_rec.tmp_11 = int2str(
      act_rec.tmp_1
   );
   act_rec.tmp_9 = f686094_times(
      act_rec.s_t_r_10,
      (s_t_r)(act_rec.tmp_11)
   );
   act_rec.tmp_8 = f686094_times(
      (s_t_r)(act_rec.tmp_9),
      act_rec.s_t_r_14
   );
   act_rec.tmp_1 = f401200_aa_abb_quadrant(
      0,
      act_rec.cur_jv->j4
   );
   act_rec.tmp_11 = int2str(
      act_rec.tmp_1
   );
   act_rec.tmp_7 = f686094_times(
      (s_t_r)(act_rec.tmp_8),
      (s_t_r)(act_rec.tmp_11)
   );
   act_rec.tmp_6 = f686094_times(
      (s_t_r)(act_rec.tmp_7),
      act_rec.s_t_r_14
   );
   act_rec.tmp_1 = f401200_aa_abb_quadrant(
      0,
      act_rec.cur_jv->j6
   );
   act_rec.tmp_11 = int2str(
      act_rec.tmp_1
   );
   act_rec.tmp_5 = f686094_times(
      (s_t_r)(act_rec.tmp_6),
      (s_t_r)(act_rec.tmp_11)
   );
   act_rec.tmp_4 = f686094_times(
      (s_t_r)(act_rec.tmp_5),
      act_rec.s_t_r_14
   );
   act_rec.tmp_11 = int2str(
      act_rec.cfx_val
   );
   act_rec.tmp_3 = f686094_times(
      (s_t_r)(act_rec.tmp_4),
      (s_t_r)(act_rec.tmp_11)
   );
   act_rec.str = f686094_times(
      (s_t_r)(act_rec.tmp_3),
      act_rec.s_t_r_21
   );
   act_rec.g1051_aa_abb_config = act_rec.str;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1051_aa_abb_config;
}


/* F849568_AA_GET_TOOL_POSE */

s_t_r f849568_aa_get_tool_pose(rob)
 shapep rob;
{

   struct ff849568_aa_get_tool_pose {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      shapep rob;
      shapep flg;
      shapep tl;
      boole tmp_1;
      boole tmp_0;
      struct frame tmp_4;
      struct frame tmp_5;
      struct frame fr;
      lispob nil_10;   /* the global variable nil */
      idob null_frame_11;   /* the global variable null_frame */
      struct crt_zyx tmp_7;
      struct crt_ypr tmp_6;
      s_t_r g1052_aa_get_tool_pose;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff849568_aa_get_tool_pose *, template_array.template[9]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(rob))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.rob = rob;

   act_rec.flg = f946540_get_flange(
      act_rec.rob
   );
   act_rec.tl = f151301_get_cool_tool(
      act_rec.rob
   );
   act_rec.tmp_1 = f279791_null(
      act_rec.tl
   );
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_1)));
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   f329319_pose(
      &(act_rec.tmp_4),
      act_rec.tl
   );
   f329319_pose(
      &(act_rec.tmp_5),
      act_rec.flg
   );
   f143161_in_frame(
      &(act_rec.fr),
      &(act_rec.tmp_4),
      &(act_rec.tmp_5)
   );
   goto _l2;

_l1:;

   COPY_STRUCT(&(act_rec.fr), framep, &((*(framep)(act_rec.null_frame_11->id_value))));

_l2:;

   f868477_frame_to_crt_zyx(
      &(act_rec.tmp_7),
      &(act_rec.fr)
   );
   f863393_crt_zyx_to_crt_yp(
      &(act_rec.tmp_6),
      &(act_rec.tmp_7)
   );
   act_rec.g1052_aa_get_tool_pose = f775741_abb_pose(
      &(act_rec.tmp_6)
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1052_aa_get_tool_pose;
}


/* F664284_AA_FORMAT_ROBTARG */

s_t_r f664284_aa_format_robtarg(jjj, ref_shape, rob, proc_num, index)
 jvp jjj;
 shapep ref_shape;
 shapep rob;
 integer proc_num;
 integer index;
{

   struct ff664284_aa_format_robtarg {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      jvp jjj;
      shapep ref_shape;
      shapep rob;
      integer proc_num;
      integer index;
      nobj tmp_1;
      type_type type_type_8;   /* the type robot */
      robotp tmp_0;
      integer tmp_4;
      shapep tl;
      lispob nil_12;   /* the global variable nil */
      struct frame tmp_6;
      struct frame tmp_7;
      struct frame fr;
      real real_16;   /* 5.000000000000000e+001 */
      lispob tmp_2;
      integer integer_18;   /* 0 */
      lispob lor;
      s_t_r s_t_r_20;   /* the string "    " */
      s_t_r tmp_17;
      s_t_r tmp_15;
      s_t_r s_t_r_23;   /* the string " robtarget p" */
      s_t_r tmp_14;
      s_t_r tmp_13;
      s_t_r s_t_r_26;   /* the string " := [" */
      s_t_r tmp_12;
      struct crt_zyx tmp_20;
      struct crt_ypr tmp_19;
      s_t_r tmp_11;
      s_t_r s_t_r_31;   /* the string "," */
      s_t_r tmp_10;
      s_t_r tmp_9;
      s_t_r s_t_r_34;   /* the string "];" */
      s_t_r str;
      s_t_r g1053_aa_format_robtarget;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff664284_aa_format_robtarg *, template_array.template[10]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(jjj, ref_shape, rob, proc_num, index))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.jjj = jjj;
   act_rec.ref_shape = ref_shape;
   act_rec.rob = rob;

   act_rec.tmp_1 = (nobj)act_rec.rob;
   act_rec.tmp_0 = (robotp)f811410_change_view(
      (nobj)(act_rec.tmp_1),
      act_rec.type_type_8
   );
   f232639_imoveto(
      (robotp)(act_rec.tmp_0),
      act_rec.jjj
   );
   act_rec.tmp_4 = f304959_refresh();
   act_rec.tl = f151301_get_cool_tool(
      act_rec.rob
   );
   act_rec.tmp_0 = (robotp)f279791_null(
      act_rec.tl
   );
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.tl = f946540_get_flange(
      act_rec.rob
   );

_l1:;

   f329319_pose(
      &(act_rec.tmp_6),
      act_rec.tl
   );
   f329319_pose(
      &(act_rec.tmp_7),
      act_rec.ref_shape
   );
   f143161_in_frame(
      &(act_rec.fr),
      &(act_rec.tmp_6),
      &(act_rec.tmp_7)
   );
   act_rec.tmp_2 = f977109_real_to_ob(
      0,
      5.000000000000000e+001
   );
   act_rec.lor = listn(1, 
      act_rec.tmp_2
   );
   act_rec.tmp_17 = f479144_aa_get_point_type(
      proc_num
   );
   act_rec.tmp_15 = f686094_times(
      act_rec.s_t_r_20,
      (s_t_r)(act_rec.tmp_17)
   );
   act_rec.tmp_14 = f686094_times(
      (s_t_r)(act_rec.tmp_15),
      act_rec.s_t_r_23
   );
   act_rec.tmp_17 = f511556_aa_build_point_na(
      proc_num,
      index
   );
   act_rec.tmp_13 = f686094_times(
      (s_t_r)(act_rec.tmp_14),
      (s_t_r)(act_rec.tmp_17)
   );
   act_rec.tmp_12 = f686094_times(
      (s_t_r)(act_rec.tmp_13),
      act_rec.s_t_r_26
   );
   f868477_frame_to_crt_zyx(
      &(act_rec.tmp_20),
      &(act_rec.fr)
   );
   f863393_crt_zyx_to_crt_yp(
      &(act_rec.tmp_19),
      &(act_rec.tmp_20)
   );
   act_rec.tmp_17 = f775741_abb_pose(
      &(act_rec.tmp_19)
   );
   act_rec.tmp_11 = f686094_times(
      (s_t_r)(act_rec.tmp_12),
      (s_t_r)(act_rec.tmp_17)
   );
   act_rec.tmp_10 = f686094_times(
      (s_t_r)(act_rec.tmp_11),
      act_rec.s_t_r_31
   );
   act_rec.tmp_17 = f407730_aa_abb_config(
      act_rec.jjj,
      act_rec.rob
   );
   act_rec.tmp_9 = f686094_times(
      (s_t_r)(act_rec.tmp_10),
      (s_t_r)(act_rec.tmp_17)
   );
   act_rec.tmp_1 = (nobj)f686094_times(
      (s_t_r)(act_rec.tmp_9),
      act_rec.s_t_r_31
   );
   act_rec.tmp_17 = f720801_aa_abb_ea(
      act_rec.lor
   );
   act_rec.tmp_2 = (lispob)f686094_times(
      (s_t_r)(act_rec.tmp_1),
      (s_t_r)(act_rec.tmp_17)
   );
   act_rec.str = f686094_times(
      (s_t_r)(act_rec.tmp_2),
      act_rec.s_t_r_34
   );
   act_rec.g1053_aa_format_robtarget = act_rec.str;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1053_aa_format_robtarget;
}


/* F262427_AA_FORMAT_ROBTARG */

s_t_r f262427_aa_format_robtarg(jjj, ref_shape, rob, index)
 jvp jjj;
 shapep ref_shape;
 shapep rob;
 integer index;
{

   struct ff262427_aa_format_robtarg {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      jvp jjj;
      shapep ref_shape;
      shapep rob;
      integer index;
      integer integer_6;   /* 1 */
      integer proc_num;
      s_t_r g1054_aa_format_robtarget;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff262427_aa_format_robtarg *, template_array.template[11]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(jjj, ref_shape, rob, index))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.jjj = jjj;
   act_rec.ref_shape = ref_shape;
   act_rec.rob = rob;

   act_rec.proc_num =    -(1);
   act_rec.g1054_aa_format_robtarget = f664284_aa_format_robtarg(
      act_rec.jjj,
      act_rec.ref_shape,
      act_rec.rob,
      act_rec.proc_num,
      index
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1054_aa_format_robtarget;
}


/* F729453_AA_FORMAT_ROBTARG */

s_t_r f729453_aa_format_robtarg(via_shp, ref_shape, rob, proc_num, index)
 shapep via_shp;
 shapep ref_shape;
 shapep rob;
 integer proc_num;
 integer index;
{

   struct ff729453_aa_format_robtarg {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      shapep via_shp;
      shapep ref_shape;
      shapep rob;
      integer proc_num;
      integer index;
      boole tmp_0;
      nobj tmp_1;
      type_type type_type_9;   /* the type jv_shape */
      struct jv jjj;
      s_t_r str;
      lispob nil_12;   /* the global variable nil */
      struct frame tmp_7;
      struct frame tmp_8;
      struct frame fr;
      real real_16;   /* 5.000000000000000e+001 */
      integer integer_17;   /* 0 */
      lispob lor;
      s_t_r s_t_r_19;   /* the string "    " */
      s_t_r tmp_18;
      s_t_r tmp_16;
      s_t_r s_t_r_22;   /* the string " robtarget p" */
      s_t_r tmp_15;
      s_t_r tmp_14;
      s_t_r s_t_r_25;   /* the string " := [" */
      s_t_r tmp_13;
      struct crt_zyx tmp_20;
      struct crt_ypr tmp_19;
      s_t_r tmp_12;
      s_t_r s_t_r_30;   /* the string "," */
      s_t_r tmp_11;
      struct jv tmp_2;
      s_t_r tmp_10;
      s_t_r tmp_3;
      s_t_r s_t_r_35;   /* the string "];" */
      s_t_r g1055_aa_format_robtarget;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff729453_aa_format_robtarg *, template_array.template[12]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(via_shp, ref_shape, rob, proc_num, index))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.via_shp = via_shp;
   act_rec.ref_shape = ref_shape;
   act_rec.rob = rob;

   act_rec.tmp_0 = f725439_is_jv_shape(
      act_rec.via_shp
   );
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.tmp_1 = (nobj)act_rec.via_shp;
   act_rec.tmp_0 = (boole)f811410_change_view(
      (nobj)(act_rec.tmp_1),
      act_rec.type_type_9
   );
   COPY_STRUCT(&(act_rec.jjj), jvp, &(((jv_shapep)(act_rec.tmp_0))->jv_of));
   act_rec.str = f664284_aa_format_robtarg(
      &(act_rec.jjj),
      act_rec.ref_shape,
      act_rec.rob,
      proc_num,
      index
   );
   goto _l2;

_l1:;

   f329319_pose(
      &(act_rec.tmp_7),
      act_rec.via_shp
   );
   f329319_pose(
      &(act_rec.tmp_8),
      act_rec.ref_shape
   );
   f143161_in_frame(
      &(act_rec.fr),
      &(act_rec.tmp_7),
      &(act_rec.tmp_8)
   );
   act_rec.tmp_1 = (nobj)f977109_real_to_ob(
      0,
      5.000000000000000e+001
   );
   act_rec.lor = listn(1, 
      act_rec.tmp_1
   );
   act_rec.tmp_18 = f479144_aa_get_point_type(
      proc_num
   );
   act_rec.tmp_16 = f686094_times(
      act_rec.s_t_r_19,
      (s_t_r)(act_rec.tmp_18)
   );
   act_rec.tmp_15 = f686094_times(
      (s_t_r)(act_rec.tmp_16),
      act_rec.s_t_r_22
   );
   act_rec.tmp_18 = f511556_aa_build_point_na(
      proc_num,
      index
   );
   act_rec.tmp_14 = f686094_times(
      (s_t_r)(act_rec.tmp_15),
      (s_t_r)(act_rec.tmp_18)
   );
   act_rec.tmp_13 = f686094_times(
      (s_t_r)(act_rec.tmp_14),
      act_rec.s_t_r_25
   );
   f868477_frame_to_crt_zyx(
      &(act_rec.tmp_20),
      &(act_rec.fr)
   );
   f863393_crt_zyx_to_crt_yp(
      &(act_rec.tmp_19),
      &(act_rec.tmp_20)
   );
   act_rec.tmp_18 = f775741_abb_pose(
      &(act_rec.tmp_19)
   );
   act_rec.tmp_12 = f686094_times(
      (s_t_r)(act_rec.tmp_13),
      (s_t_r)(act_rec.tmp_18)
   );
   act_rec.tmp_11 = f686094_times(
      (s_t_r)(act_rec.tmp_12),
      act_rec.s_t_r_30
   );
   f358530_c_jv(
      &(act_rec.tmp_2),
      act_rec.rob
   );
   act_rec.tmp_18 = f407730_aa_abb_config(
      &(act_rec.tmp_2),
      act_rec.rob
   );
   act_rec.tmp_10 = f686094_times(
      (s_t_r)(act_rec.tmp_11),
      (s_t_r)(act_rec.tmp_18)
   );
   act_rec.tmp_3 = f686094_times(
      (s_t_r)(act_rec.tmp_10),
      act_rec.s_t_r_30
   );
   act_rec.tmp_18 = f720801_aa_abb_ea(
      act_rec.lor
   );
   act_rec.tmp_1 = (nobj)f686094_times(
      (s_t_r)(act_rec.tmp_3),
      (s_t_r)(act_rec.tmp_18)
   );
   act_rec.str = f686094_times(
      (s_t_r)(act_rec.tmp_1),
      act_rec.s_t_r_35
   );

_l2:;

   act_rec.g1055_aa_format_robtarget = act_rec.str;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1055_aa_format_robtarget;
}


/* F774156_AA_FORMAT_ROBTARG */

s_t_r f774156_aa_format_robtarg(via_shp, ref_shape, rob, index)
 shapep via_shp;
 shapep ref_shape;
 shapep rob;
 integer index;
{

   struct ff774156_aa_format_robtarg {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      shapep via_shp;
      shapep ref_shape;
      shapep rob;
      integer index;
      integer integer_6;   /* 1 */
      integer proc_num;
      s_t_r g1056_aa_format_robtarget;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff774156_aa_format_robtarg *, template_array.template[13]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(via_shp, ref_shape, rob, index))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.via_shp = via_shp;
   act_rec.ref_shape = ref_shape;
   act_rec.rob = rob;

   act_rec.proc_num =    -(1);
   act_rec.g1056_aa_format_robtarget = f729453_aa_format_robtarg(
      act_rec.via_shp,
      act_rec.ref_shape,
      act_rec.rob,
      act_rec.proc_num,
      index
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1056_aa_format_robtarget;
}


/* F68741_AA_FORMAT_JOINTTAR */

s_t_r f68741_aa_format_jointtar(b, proc_num, index)
 jvp b;
 integer proc_num;
 integer index;
{

   struct ff68741_aa_format_jointtar {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      jvp b;
      integer proc_num;
      integer index;
      real real_5;   /* 5.000000000000000e+001 */
      lispob tmp_1;
      integer integer_7;   /* 0 */
      lispob lor;
      s_t_r s_t_r_9;   /* the string "    " */
      s_t_r tmp_20;
      s_t_r tmp_18;
      s_t_r s_t_r_12;   /* the string " jointtarget j" */
      s_t_r tmp_17;
      s_t_r tmp_16;
      s_t_r s_t_r_15;   /* the string " := [[" */
      s_t_r tmp_15;
      s_t_r s_t_r_17;   /* the string "%.4f" */
      s_t_r tmp_14;
      s_t_r s_t_r_19;   /* the string "," */
      s_t_r tmp_13;
      s_t_r tmp_12;
      s_t_r tmp_11;
      s_t_r tmp_10;
      s_t_r tmp_9;
      s_t_r tmp_8;
      s_t_r tmp_7;
      s_t_r tmp_6;
      s_t_r tmp_5;
      s_t_r tmp_4;
      s_t_r s_t_r_30;   /* the string "]," */
      s_t_r tmp_3;
      s_t_r s_t_r_32;   /* the string "];" */
      s_t_r str;
      s_t_r g1057_aa_format_jointtarget;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff68741_aa_format_jointtar *, template_array.template[14]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(b, proc_num, index))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.b = b;

   act_rec.tmp_1 = f977109_real_to_ob(
      0,
      5.000000000000000e+001
   );
   act_rec.lor = listn(1, 
      act_rec.tmp_1
   );
   act_rec.tmp_20 = f479144_aa_get_point_type(
      proc_num
   );
   act_rec.tmp_18 = f686094_times(
      act_rec.s_t_r_9,
      (s_t_r)(act_rec.tmp_20)
   );
   act_rec.tmp_17 = f686094_times(
      (s_t_r)(act_rec.tmp_18),
      act_rec.s_t_r_12
   );
   act_rec.tmp_20 = f511556_aa_build_point_na(
      proc_num,
      index
   );
   act_rec.tmp_16 = f686094_times(
      (s_t_r)(act_rec.tmp_17),
      (s_t_r)(act_rec.tmp_20)
   );
   act_rec.tmp_15 = f686094_times(
      (s_t_r)(act_rec.tmp_16),
      act_rec.s_t_r_15
   );
   act_rec.tmp_20 = f10284_real2str(
      act_rec.s_t_r_17,
      act_rec.b->j1
   );
   act_rec.tmp_14 = f686094_times(
      (s_t_r)(act_rec.tmp_15),
      (s_t_r)(act_rec.tmp_20)
   );
   act_rec.tmp_13 = f686094_times(
      (s_t_r)(act_rec.tmp_14),
      act_rec.s_t_r_19
   );
   act_rec.tmp_20 = f10284_real2str(
      act_rec.s_t_r_17,
      act_rec.b->j2
   );
   act_rec.tmp_12 = f686094_times(
      (s_t_r)(act_rec.tmp_13),
      (s_t_r)(act_rec.tmp_20)
   );
   act_rec.tmp_11 = f686094_times(
      (s_t_r)(act_rec.tmp_12),
      act_rec.s_t_r_19
   );
   act_rec.tmp_20 = f10284_real2str(
      act_rec.s_t_r_17,
      act_rec.b->j3
   );
   act_rec.tmp_10 = f686094_times(
      (s_t_r)(act_rec.tmp_11),
      (s_t_r)(act_rec.tmp_20)
   );
   act_rec.tmp_9 = f686094_times(
      (s_t_r)(act_rec.tmp_10),
      act_rec.s_t_r_19
   );
   act_rec.tmp_20 = f10284_real2str(
      act_rec.s_t_r_17,
      act_rec.b->j4
   );
   act_rec.tmp_8 = f686094_times(
      (s_t_r)(act_rec.tmp_9),
      (s_t_r)(act_rec.tmp_20)
   );
   act_rec.tmp_7 = f686094_times(
      (s_t_r)(act_rec.tmp_8),
      act_rec.s_t_r_19
   );
   act_rec.tmp_20 = f10284_real2str(
      act_rec.s_t_r_17,
      act_rec.b->j5
   );
   act_rec.tmp_6 = f686094_times(
      (s_t_r)(act_rec.tmp_7),
      (s_t_r)(act_rec.tmp_20)
   );
   act_rec.tmp_5 = f686094_times(
      (s_t_r)(act_rec.tmp_6),
      act_rec.s_t_r_19
   );
   act_rec.tmp_20 = f10284_real2str(
      act_rec.s_t_r_17,
      act_rec.b->j6
   );
   act_rec.tmp_4 = f686094_times(
      (s_t_r)(act_rec.tmp_5),
      (s_t_r)(act_rec.tmp_20)
   );
   act_rec.tmp_3 = f686094_times(
      (s_t_r)(act_rec.tmp_4),
      act_rec.s_t_r_30
   );
   act_rec.tmp_20 = f720801_aa_abb_ea(
      act_rec.lor
   );
   act_rec.tmp_1 = (lispob)f686094_times(
      (s_t_r)(act_rec.tmp_3),
      (s_t_r)(act_rec.tmp_20)
   );
   act_rec.str = f686094_times(
      (s_t_r)(act_rec.tmp_1),
      act_rec.s_t_r_32
   );
   act_rec.g1057_aa_format_jointtarget = act_rec.str;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1057_aa_format_jointtarget;
}


/* F262076_AA_FORMAT_JOINTTA */

s_t_r f262076_aa_format_jointta(b, index)
 jvp b;
 integer index;
{

   struct ff262076_aa_format_jointta {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      jvp b;
      integer index;
      integer integer_4;   /* 1 */
      integer proc_num;
      s_t_r g1058_aa_format_jointtarget;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff262076_aa_format_jointta *, template_array.template[15]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(b, index))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.b = b;

   act_rec.proc_num =    -(1);
   act_rec.g1058_aa_format_jointtarget = f68741_aa_format_jointtar(
      act_rec.b,
      act_rec.proc_num,
      index
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1058_aa_format_jointtarget;
}


/* F402590_AA_WRITE_ABB_ROBT */

lispob f402590_aa_write_abb_robt(txt, bp, ref_shape)
 textp txt;
 bpathp bp;
 shapep ref_shape;
{

   struct ff402590_aa_write_abb_robt {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      textp txt;
      bpathp bp;
      shapep ref_shape;
      m_request_pathp mrp;
      nobj tmp_1;
      type_type type_type_7;   /* the type object_list_path */
      object_list_pathp olp;
      shapep rob;
      integer integer_10;   /* 0 */
      integer k;
      integer integer_12;   /* 1 */
      integer _s_2058;
      integer tmp_3;
      integer _s_2059;
      boole tmp_0;
      lispob tmp_2;
      m_requestp mr;
      lispob tmp_5;
      shapep via_shp;
      s_t_r str;
      idob write_tf_save_out_val_22;   /* the global variable write_tf_save_out_val */
      s_t_r s_t_r_23;   /* the string "    ! " */
      lispob nil_24;   /* the global variable nil */
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff402590_aa_write_abb_robt *, template_array.template[16]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(txt, bp, ref_shape))
      return ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.txt = txt;
   act_rec.bp = bp;
   act_rec.ref_shape = ref_shape;

   act_rec.mrp = f685938_get_m_request_pat(
      act_rec.bp
   );
   act_rec.tmp_1 = (nobj)act_rec.bp;
   act_rec.olp = (object_list_pathp)f811410_change_view(
      (nobj)(act_rec.tmp_1),
      act_rec.type_type_7
   );
   act_rec.rob = f216872_robot_of(
      act_rec.bp
   );
   act_rec.k = 0;
   act_rec._s_2058 = 1;
   act_rec.tmp_3 = f342524_length(
      act_rec.bp
   );
   act_rec._s_2059 = act_rec.tmp_3 - 1;

_l1:;

   act_rec.tmp_0 = (boole)boolean2obj(act_rec.k > act_rec._s_2059);
   if (!((boole)(act_rec.tmp_0))) goto _l2;
   goto _l3;

_l2:;

   act_rec.tmp_2 = list_select(
      act_rec.mrp->vias,
      act_rec.k
   );
   act_rec.mr = (m_requestp)(lispob)(act_rec.tmp_2);
   act_rec.bp->kind = 1;
   act_rec.tmp_3 = (integer)act_rec.k + 1;
   f680756_snap_to_nth(
      act_rec.bp,
      act_rec.tmp_3
   );
   act_rec.tmp_5 = list_select(
      act_rec.olp->vias,
      act_rec.k
   );
   act_rec.tmp_2 = (lispob)(act_rec.tmp_5);
   act_rec.via_shp = f386076_wlkup(
      (pathname)(act_rec.tmp_2)
   );
   act_rec.str = f774156_aa_format_robtarg(
      act_rec.via_shp,
      act_rec.ref_shape,
      act_rec.rob,
      act_rec.k
   );
   SET_OB_FCALL(act_rec.write_tf_save_out_val_22, id_value, out_val(), lispob);
   f929848_switch_output_to(
      act_rec.txt
   );
   f894339_tprint(
      act_rec.str
   );
   terpri();
   switch_out(
      ((lispob)(act_rec.write_tf_save_out_val_22->id_value))
   );
   act_rec.tmp_3 = (integer)act_rec.k + act_rec._s_2058;
   act_rec.k = (integer)(act_rec.tmp_3);
   goto _l1;

_l3:;

   SET_OB_FCALL(act_rec.write_tf_save_out_val_22, id_value, out_val(), lispob);
   f929848_switch_output_to(
      act_rec.txt
   );
   f894339_tprint(
      act_rec.s_t_r_23
   );
   terpri();
   switch_out(
      ((lispob)(act_rec.write_tf_save_out_val_22->id_value))
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.nil_24;
}


/* F389475_AA_WRITE_ABB_JOIN */

lispob f389475_aa_write_abb_join(txt, res, rob)
 textp txt;
 lispob res;
 shapep rob;
{

   struct ff389475_aa_write_abb_join {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      textp txt;
      lispob res;
      shapep rob;
      lispob tmp_2;
      lispob tmp_1;
      struct jv last_jv;
      type_type type_type_8;   /* the type robot */
      integer integer_9;   /* 0 */
      integer k;
      integer integer_11;   /* 1 */
      integer _s_2061;
      integer tmp_4;
      integer _s_2062;
      struct jv b;
      s_t_r str;
      idob write_tf_save_out_val_17;   /* the global variable write_tf_save_out_val */
      s_t_r s_t_r_18;   /* the string "    ! " */
      lispob nil_19;   /* the global variable nil */
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff389475_aa_write_abb_join *, template_array.template[17]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(txt, res, rob))
      return ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.txt = txt;
   act_rec.res = res;
   act_rec.rob = rob;

   act_rec.tmp_2 = list_last(
      act_rec.res
   );
   act_rec.tmp_1 = car(
      (lispob)(act_rec.tmp_2)
   );
   COPY_STRUCT(&(act_rec.last_jv), jvp, &(*((lispob)(act_rec.tmp_1))));
   act_rec.tmp_2 = (lispob)act_rec.rob;
   act_rec.tmp_1 = (lispob)f811410_change_view(
      (nobj)(act_rec.tmp_2),
      act_rec.type_type_8
   );
   f232639_imoveto(
      (robotp)(act_rec.tmp_1),
      &(act_rec.last_jv)
   );
   act_rec.k = 0;
   act_rec._s_2061 = 1;
   act_rec.tmp_4 = (integer)list_length(
      act_rec.res
   );
   act_rec._s_2062 = act_rec.tmp_4 - 1;

_l1:;

   act_rec.tmp_1 = boolean2obj(act_rec.k > act_rec._s_2062);
   if (!((boole)(act_rec.tmp_1))) goto _l2;
   goto _l3;

_l2:;

   act_rec.tmp_1 = list_select(
      act_rec.res,
      act_rec.k
   );
   COPY_STRUCT(&(act_rec.b), jvp, &(*((lispob)(act_rec.tmp_1))));
   act_rec.str = f262076_aa_format_jointta(
      &(act_rec.b),
      act_rec.k
   );
   SET_OB_FCALL(act_rec.write_tf_save_out_val_17, id_value, out_val(), lispob);
   f929848_switch_output_to(
      act_rec.txt
   );
   f894339_tprint(
      act_rec.str
   );
   terpri();
   switch_out(
      ((lispob)(act_rec.write_tf_save_out_val_17->id_value))
   );
   act_rec.tmp_4 = (integer)act_rec.k + act_rec._s_2061;
   act_rec.k = (integer)(act_rec.tmp_4);
   goto _l1;

_l3:;

   SET_OB_FCALL(act_rec.write_tf_save_out_val_17, id_value, out_val(), lispob);
   f929848_switch_output_to(
      act_rec.txt
   );
   f894339_tprint(
      act_rec.s_t_r_18
   );
   terpri();
   switch_out(
      ((lispob)(act_rec.write_tf_save_out_val_17->id_value))
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.nil_19;
}


/* F832026_AA_GET_BLEND_CODE */

integer f832026_aa_get_blend_code(pad__1, blend_dist)
 integer pad__1;
 real blend_dist;
{

   struct ff832026_aa_get_blend_code {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      integer pad__1;
      real blend_dist;
      integer integer_4;   /* 1 */
      integer ret;
      idob mm_6;   /* the global variable mm */
      real tmp_2;
      real real_8;   /* 0.000000000000000e+000 */
      boole tmp_5;
      lispob nil_10;   /* the global variable nil */
      real real_11;   /* 5.000000000000000e-001 */
      integer integer_12;   /* 0 */
      integer integer_13;   /* 3 */
      integer integer_14;   /* 200 */
      real tmp_1;
      integer integer_16;   /* 20 */
      real real_17;   /* 5.000000000000000e+000 */
      real step_size;
      integer integer_19;   /* 60 */
      real real_20;   /* 1.000000000000000e+001 */
      integer integer_21;   /* 100 */
      real real_22;   /* 2.000000000000000e+001 */
      real real_23;   /* 5.000000000000000e+001 */
      integer tmp_6;
      integer tmp_7;
      integer g1059_aa_get_blend_code;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff832026_aa_get_blend_code *, template_array.template[18]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(pad__1, blend_dist))
      return ncode_integer_answer;
#endif

   /* This code is a translation of the user's Sil code. */


   act_rec.ret = 1;
   act_rec.tmp_2 = (real)blend_dist / (*((real *)(((charp)(act_rec.mm_6->id_value)) + sizeof(real))));
   blend_dist = (real)(act_rec.tmp_2);
   act_rec.tmp_5 = (boole)boolean2obj(blend_dist == 0.000000000000000e+000);
   if (!((boole)(act_rec.tmp_5))) goto _l1;
   act_rec.ret =    -(1);
   goto _l2;

_l1:;

   act_rec.tmp_5 = (boole)boolean2obj(blend_dist < 5.000000000000000e-001);
   if (!((boole)(act_rec.tmp_5))) goto _l3;
   act_rec.ret = 0;
   goto _l2;

_l3:;

   act_rec.tmp_2 = (real)3;
   act_rec.tmp_5 = (boole)boolean2obj(blend_dist < act_rec.tmp_2);
   if (!((boole)(act_rec.tmp_5))) goto _l4;
   act_rec.ret = 1;
   goto _l2;

_l4:;

   act_rec.tmp_1 = (real)200;
   act_rec.tmp_5 = (boole)boolean2obj(blend_dist >= act_rec.tmp_1);
   if (!((boole)(act_rec.tmp_5))) goto _l5;
   act_rec.ret = 200;
   goto _l2;

_l5:;

   act_rec.tmp_2 = (real)20;
   act_rec.tmp_5 = (boole)boolean2obj(blend_dist < act_rec.tmp_2);
   if (!((boole)(act_rec.tmp_5))) goto _l6;
   act_rec.step_size = 5.000000000000000e+000;
   goto _l7;

_l6:;

   act_rec.tmp_1 = (real)60;
   act_rec.tmp_5 = (boole)boolean2obj(blend_dist < act_rec.tmp_1);
   if (!((boole)(act_rec.tmp_5))) goto _l8;
   act_rec.step_size = 1.000000000000000e+001;
   goto _l7;

_l8:;

   act_rec.tmp_2 = (real)100;
   act_rec.tmp_5 = (boole)boolean2obj(blend_dist < act_rec.tmp_2);
   if (!((boole)(act_rec.tmp_5))) goto _l9;
   act_rec.step_size = 2.000000000000000e+001;
   goto _l7;

_l9:;

   act_rec.step_size = 5.000000000000000e+001;

_l7:;

   act_rec.tmp_6 = f1102_roundoff(
      0,
      act_rec.step_size
   );
   act_rec.tmp_2 = (real)blend_dist / act_rec.step_size;
   act_rec.tmp_7 = f1102_roundoff(
      0,
      act_rec.tmp_2
   );
   act_rec.ret = act_rec.tmp_6 * act_rec.tmp_7;

_l2:;

   act_rec.g1059_aa_get_blend_code = act_rec.ret;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1059_aa_get_blend_code;
}


/* F181078_AA_GET_BLEND_STRI */

s_t_r f181078_aa_get_blend_stri(pad__2, blend_dist)
 integer pad__2;
 real blend_dist;
{

   struct ff181078_aa_get_blend_stri {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      integer pad__2;
      real blend_dist;
      s_t_r s_t_r_4;   /* the string "" */
      s_t_r blend_str;
      integer blend_code;
      integer integer_7;   /* 0 */
      boole tmp_0;
      s_t_r s_t_r_9;   /* the string "z" */
      s_t_r tmp_6;
      s_t_r tmp_4;
      s_t_r s_t_r_12;   /* the string ", " */
      lispob nil_13;   /* the global variable nil */
      s_t_r s_t_r_14;   /* the string "fine, " */
      s_t_r g1060_aa_get_blend_string;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff181078_aa_get_blend_stri *, template_array.template[19]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(pad__2, blend_dist))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */


   act_rec.blend_str = act_rec.s_t_r_4;
   act_rec.blend_code = f832026_aa_get_blend_code(
      0,
      blend_dist
   );
   act_rec.tmp_0 = (boole)boolean2obj(act_rec.blend_code >= 0);
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.tmp_6 = int2str(
      act_rec.blend_code
   );
   act_rec.tmp_4 = f686094_times(
      act_rec.s_t_r_9,
      (s_t_r)(act_rec.tmp_6)
   );
   act_rec.blend_str = f686094_times(
      (s_t_r)(act_rec.tmp_4),
      act_rec.s_t_r_12
   );
   goto _l2;

_l1:;

   act_rec.blend_str = act_rec.s_t_r_14;

_l2:;

   act_rec.g1060_aa_get_blend_string = act_rec.blend_str;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1060_aa_get_blend_string;
}


/* F137706_AA_GET_SPEED_CODE */

integer f137706_aa_get_speed_code(pad__3, vel)
 integer pad__3;
 real vel;
{

   struct ff137706_aa_get_speed_code {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      integer pad__3;
      real vel;
      integer integer_4;   /* 30 */
      integer ret;
      idob mm_6;   /* the global variable mm */
      real tmp_2;
      integer integer_8;   /* 5 */
      boole tmp_5;
      lispob nil_10;   /* the global variable nil */
      integer integer_11;   /* 7500 */
      real tmp_1;
      integer integer_13;   /* 1 */
      integer integer_14;   /* 10 */
      real real_15;   /* 5.000000000000000e+000 */
      real step_size;
      integer integer_17;   /* 60 */
      real real_18;   /* 1.000000000000000e+001 */
      integer integer_19;   /* 100 */
      real real_20;   /* 2.000000000000000e+001 */
      integer integer_21;   /* 200 */
      real real_22;   /* 5.000000000000000e+001 */
      integer integer_23;   /* 600 */
      real real_24;   /* 1.000000000000000e+002 */
      integer integer_25;   /* 1000 */
      real real_26;   /* 2.000000000000000e+002 */
      integer integer_27;   /* 3000 */
      real real_28;   /* 5.000000000000000e+002 */
      real real_29;   /* 1.000000000000000e+003 */
      integer tmp_6;
      integer integer_31;   /* 0 */
      integer tmp_7;
      integer g1061_aa_get_speed_code;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff137706_aa_get_speed_code *, template_array.template[20]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(pad__3, vel))
      return ncode_integer_answer;
#endif

   /* This code is a translation of the user's Sil code. */


   act_rec.ret = 30;
   act_rec.tmp_2 = (real)vel / (*((real *)(((charp)(act_rec.mm_6->id_value)) + sizeof(real))));
   vel = (real)(act_rec.tmp_2);
   act_rec.tmp_2 = (real)5;
   act_rec.tmp_5 = (boole)boolean2obj(vel < act_rec.tmp_2);
   if (!((boole)(act_rec.tmp_5))) goto _l1;
   act_rec.ret = 5;
   goto _l2;

_l1:;

   act_rec.tmp_1 = (real)7500;
   act_rec.tmp_5 = (boole)boolean2obj(vel >= act_rec.tmp_1);
   if (!((boole)(act_rec.tmp_5))) goto _l3;
   act_rec.ret =    -(1);
   goto _l2;

_l3:;

   act_rec.tmp_2 = (real)10;
   act_rec.tmp_5 = (boole)boolean2obj(vel < act_rec.tmp_2);
   if (!((boole)(act_rec.tmp_5))) goto _l4;
   act_rec.step_size = 5.000000000000000e+000;
   goto _l5;

_l4:;

   act_rec.tmp_1 = (real)60;
   act_rec.tmp_5 = (boole)boolean2obj(vel < act_rec.tmp_1);
   if (!((boole)(act_rec.tmp_5))) goto _l6;
   act_rec.step_size = 1.000000000000000e+001;
   goto _l5;

_l6:;

   act_rec.tmp_2 = (real)100;
   act_rec.tmp_5 = (boole)boolean2obj(vel < act_rec.tmp_2);
   if (!((boole)(act_rec.tmp_5))) goto _l7;
   act_rec.step_size = 2.000000000000000e+001;
   goto _l5;

_l7:;

   act_rec.tmp_1 = (real)200;
   act_rec.tmp_5 = (boole)boolean2obj(vel < act_rec.tmp_1);
   if (!((boole)(act_rec.tmp_5))) goto _l8;
   act_rec.step_size = 5.000000000000000e+001;
   goto _l5;

_l8:;

   act_rec.tmp_2 = (real)600;
   act_rec.tmp_5 = (boole)boolean2obj(vel < act_rec.tmp_2);
   if (!((boole)(act_rec.tmp_5))) goto _l9;
   act_rec.step_size = 1.000000000000000e+002;
   goto _l5;

_l9:;

   act_rec.tmp_1 = (real)1000;
   act_rec.tmp_5 = (boole)boolean2obj(vel < act_rec.tmp_1);
   if (!((boole)(act_rec.tmp_5))) goto _l10;
   act_rec.step_size = 2.000000000000000e+002;
   goto _l5;

_l10:;

   act_rec.tmp_2 = (real)3000;
   act_rec.tmp_5 = (boole)boolean2obj(vel < act_rec.tmp_2);
   if (!((boole)(act_rec.tmp_5))) goto _l11;
   act_rec.step_size = 5.000000000000000e+002;
   goto _l5;

_l11:;

   act_rec.step_size = 1.000000000000000e+003;

_l5:;

   act_rec.tmp_6 = f1102_roundoff(
      0,
      act_rec.step_size
   );
   act_rec.tmp_2 = (real)vel / act_rec.step_size;
   act_rec.tmp_7 = f1102_roundoff(
      0,
      act_rec.tmp_2
   );
   act_rec.ret = act_rec.tmp_6 * act_rec.tmp_7;

_l2:;

   act_rec.g1061_aa_get_speed_code = act_rec.ret;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1061_aa_get_speed_code;
}


/* F371110_AA_GET_SPEED_STRI */

s_t_r f371110_aa_get_speed_stri(pad__4, vel)
 integer pad__4;
 real vel;
{

   struct ff371110_aa_get_speed_stri {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      integer pad__4;
      real vel;
      s_t_r s_t_r_4;   /* the string "" */
      s_t_r speed_str;
      integer speed_code;
      integer integer_7;   /* 0 */
      boole tmp_0;
      s_t_r s_t_r_9;   /* the string "v" */
      s_t_r tmp_6;
      s_t_r tmp_4;
      s_t_r s_t_r_12;   /* the string ", " */
      lispob nil_13;   /* the global variable nil */
      s_t_r s_t_r_14;   /* the string "vmax, " */
      s_t_r g1062_aa_get_speed_string;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff371110_aa_get_speed_stri *, template_array.template[21]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(pad__4, vel))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */


   act_rec.speed_str = act_rec.s_t_r_4;
   act_rec.speed_code = f137706_aa_get_speed_code(
      0,
      vel
   );
   act_rec.tmp_0 = (boole)boolean2obj(act_rec.speed_code > 0);
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.tmp_6 = int2str(
      act_rec.speed_code
   );
   act_rec.tmp_4 = f686094_times(
      act_rec.s_t_r_9,
      (s_t_r)(act_rec.tmp_6)
   );
   act_rec.speed_str = f686094_times(
      (s_t_r)(act_rec.tmp_4),
      act_rec.s_t_r_12
   );
   goto _l2;

_l1:;

   act_rec.speed_str = act_rec.s_t_r_14;

_l2:;

   act_rec.g1062_aa_get_speed_string = act_rec.speed_str;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1062_aa_get_speed_string;
}


/* F973220_AA_BUILD_MOVE_CMD */

s_t_r f973220_aa_build_move_cmd(proc_num, pnt_num, motion_id, trigger_str, tool_name, offset_var, use_jointtarget, spd, bld)
 integer proc_num;
 integer pnt_num;
 id motion_id;
 s_t_r trigger_str;
 s_t_r tool_name;
 s_t_r offset_var;
 boole use_jointtarget;
 real spd;
 real bld;
{

   struct ff973220_aa_build_move_cmd {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      integer proc_num;
      integer pnt_num;
      id motion_id;
      s_t_r trigger_str;
      s_t_r tool_name;
      s_t_r offset_var;
      boole use_jointtarget;
      real spd;
      real bld;
      s_t_r s_t_r_11;   /* the string "p" */
      s_t_r target_base;
      s_t_r s_t_r_13;   /* the string "" */
      boole tmp_1;
      boole tmp_0;
      s_t_r s_t_r_16;   /* the string "TriggL " */
      s_t_r move_cmd;
      lispob nil_18;   /* the global variable nil */
      id g1064;
      id id_20;   /* CSL */
      s_t_r s_t_r_21;   /* the string "MoveL " */
      id id_22;   /* JSI */
      s_t_r s_t_r_23;   /* the string "j" */
      s_t_r s_t_r_24;   /* the string "MoveAbsJ " */
      s_t_r s_t_r_25;   /* the string "MoveJ " */
      s_t_r s_t_r_26;   /* the string "Unknown motion: " */
      s_t_r point_name;
      s_t_r s_t_r_28;   /* the string "Offs(" */
      s_t_r tmp_2;
      s_t_r s_t_r_30;   /* the string ", " */
      s_t_r point_str;
      s_t_r s_t_r_32;   /* the string ".trans.x, " */
      s_t_r tmp_6;
      s_t_r tmp_3;
      s_t_r s_t_r_35;   /* the string ".trans.y, " */
      s_t_r s_t_r_36;   /* the string ".trans.z), " */
      s_t_r trigger_action;
      s_t_r speed_str;
      integer integer_39;   /* 0 */
      s_t_r blend_str;
      s_t_r tmp_8;
      s_t_r s_t_r_42;   /* the string ";" */
      s_t_r full_cmd;
      s_t_r g1063_aa_build_move_cmd;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff973220_aa_build_move_cmd *, template_array.template[22]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(proc_num, pnt_num, motion_id, trigger_str, tool_name, offset_var, use_jointtarget, spd, bld))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.motion_id = motion_id;
   act_rec.trigger_str = trigger_str;
   act_rec.tool_name = tool_name;
   act_rec.offset_var = offset_var;
   act_rec.use_jointtarget = use_jointtarget;

   act_rec.target_base = act_rec.s_t_r_11;
   act_rec.tmp_1 = equal(
      act_rec.trigger_str,
      act_rec.s_t_r_13
   );
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_1)));
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.move_cmd = act_rec.s_t_r_16;
   goto _l2;

_l1:;

   act_rec.g1064 = act_rec.motion_id;
   act_rec.tmp_0 = eq(
      act_rec.g1064,
      act_rec.id_20
   );
   if (!((boole)(act_rec.tmp_0))) goto _l3;
   act_rec.move_cmd = act_rec.s_t_r_21;
   goto _l2;

_l3:;

   act_rec.tmp_0 = eq(
      act_rec.g1064,
      act_rec.id_22
   );
   if (!((boole)(act_rec.tmp_0))) goto _l4;
   if (!(act_rec.use_jointtarget)) goto _l5;
   act_rec.target_base = act_rec.s_t_r_23;
   act_rec.move_cmd = act_rec.s_t_r_24;
   goto _l2;

_l5:;

   act_rec.move_cmd = act_rec.s_t_r_25;
   goto _l2;

_l4:;

   f894339_tprint(
      act_rec.s_t_r_26
   );
   f871277_tprint(
      act_rec.motion_id
   );
   terpri();
   act_rec.move_cmd = act_rec.s_t_r_25;

_l2:;

   act_rec.point_name = f511556_aa_build_point_na(
      proc_num,
      pnt_num
   );
   act_rec.tmp_1 = equal(
      act_rec.offset_var,
      act_rec.s_t_r_13
   );
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_1)));
   if (!((boole)(act_rec.tmp_0))) goto _l6;
   act_rec.tmp_2 = f686094_times(
      act_rec.s_t_r_28,
      act_rec.target_base
   );
   act_rec.tmp_1 = (boole)f686094_times(
      (s_t_r)(act_rec.tmp_2),
      act_rec.point_name
   );
   act_rec.point_str = f686094_times(
      (s_t_r)(act_rec.tmp_1),
      act_rec.s_t_r_30
   );
   act_rec.tmp_1 = (boole)f686094_times(
      act_rec.point_str,
      act_rec.offset_var
   );
   act_rec.tmp_6 = f686094_times(
      (s_t_r)(act_rec.tmp_1),
      act_rec.s_t_r_32
   );
   act_rec.point_str = (s_t_r)(act_rec.tmp_6);
   act_rec.tmp_3 = f686094_times(
      act_rec.point_str,
      act_rec.offset_var
   );
   act_rec.tmp_6 = f686094_times(
      (s_t_r)(act_rec.tmp_3),
      act_rec.s_t_r_35
   );
   act_rec.point_str = (s_t_r)(act_rec.tmp_6);
   act_rec.tmp_2 = f686094_times(
      act_rec.point_str,
      act_rec.offset_var
   );
   act_rec.tmp_6 = f686094_times(
      (s_t_r)(act_rec.tmp_2),
      act_rec.s_t_r_36
   );
   act_rec.point_str = (s_t_r)(act_rec.tmp_6);
   goto _l7;

_l6:;

   act_rec.tmp_6 = f686094_times(
      act_rec.target_base,
      act_rec.point_name
   );
   act_rec.point_str = f686094_times(
      (s_t_r)(act_rec.tmp_6),
      act_rec.s_t_r_30
   );

_l7:;

   act_rec.trigger_action = act_rec.s_t_r_13;
   act_rec.tmp_2 = (s_t_r)equal(
      act_rec.trigger_str,
      act_rec.s_t_r_13
   );
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_2)));
   if (!((boole)(act_rec.tmp_0))) goto _l8;
   act_rec.trigger_action = f686094_times(
      act_rec.trigger_str,
      act_rec.s_t_r_30
   );

_l8:;

   act_rec.speed_str = f371110_aa_get_speed_stri(
      0,
      spd
   );
   act_rec.blend_str = f181078_aa_get_blend_stri(
      0,
      bld
   );
   act_rec.tmp_8 = f686094_times(
      act_rec.move_cmd,
      act_rec.point_str
   );
   act_rec.tmp_3 = f686094_times(
      (s_t_r)(act_rec.tmp_8),
      act_rec.speed_str
   );
   act_rec.tmp_6 = f686094_times(
      (s_t_r)(act_rec.tmp_3),
      act_rec.trigger_action
   );
   act_rec.tmp_2 = f686094_times(
      (s_t_r)(act_rec.tmp_6),
      act_rec.blend_str
   );
   act_rec.tmp_1 = (boole)f686094_times(
      (s_t_r)(act_rec.tmp_2),
      act_rec.tool_name
   );
   act_rec.full_cmd = f686094_times(
      (s_t_r)(act_rec.tmp_1),
      act_rec.s_t_r_42
   );
   act_rec.g1063_aa_build_move_cmd = act_rec.full_cmd;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1063_aa_build_move_cmd;
}


/* F45332_AA_BUILD_MOVE_CMD */

s_t_r f45332_aa_build_move_cmd(proc_num, pnt_num, motion_id, trigger_str, tool_name, offset_var, pad__5, spd, bld)
 integer proc_num;
 integer pnt_num;
 id motion_id;
 s_t_r trigger_str;
 s_t_r tool_name;
 s_t_r offset_var;
 integer pad__5;
 real spd;
 real bld;
{

   struct ff45332_aa_build_move_cmd {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      integer proc_num;
      integer pnt_num;
      id motion_id;
      s_t_r trigger_str;
      s_t_r tool_name;
      s_t_r offset_var;
      integer pad__5;
      real spd;
      real bld;
      idob false_11;   /* the global variable false */
      boole is_jv;
      s_t_r g1065_aa_build_move_cmd;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff45332_aa_build_move_cmd *, template_array.template[23]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(proc_num, pnt_num, motion_id, trigger_str, tool_name, offset_var, pad__5, spd, bld))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.motion_id = motion_id;
   act_rec.trigger_str = trigger_str;
   act_rec.tool_name = tool_name;
   act_rec.offset_var = offset_var;

   act_rec.is_jv = ((boole)(act_rec.false_11->id_value));
   act_rec.g1065_aa_build_move_cmd = f973220_aa_build_move_cmd(
      proc_num,
      pnt_num,
      act_rec.motion_id,
      act_rec.trigger_str,
      act_rec.tool_name,
      act_rec.offset_var,
      act_rec.is_jv,
      spd,
      bld
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1065_aa_build_move_cmd;
}


/* F202311_AA_BUILD_MOVE_CMD */

s_t_r f202311_aa_build_move_cmd(pnt_num, motion_id, trigger_str, tool_name, offset_var, spd, bld)
 integer pnt_num;
 id motion_id;
 s_t_r trigger_str;
 s_t_r tool_name;
 s_t_r offset_var;
 real spd;
 real bld;
{

   struct ff202311_aa_build_move_cmd {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      integer pnt_num;
      id motion_id;
      s_t_r trigger_str;
      s_t_r tool_name;
      s_t_r offset_var;
      real spd;
      real bld;
      integer integer_9;   /* 1 */
      integer proc_num;
      s_t_r g1066_aa_build_move_cmd;
      integer integer_12;   /* 0 */
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff202311_aa_build_move_cmd *, template_array.template[24]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(pnt_num, motion_id, trigger_str, tool_name, offset_var, spd, bld))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.motion_id = motion_id;
   act_rec.trigger_str = trigger_str;
   act_rec.tool_name = tool_name;
   act_rec.offset_var = offset_var;

   act_rec.proc_num =    -(1);
   act_rec.g1066_aa_build_move_cmd = f45332_aa_build_move_cmd(
      act_rec.proc_num,
      pnt_num,
      act_rec.motion_id,
      act_rec.trigger_str,
      act_rec.tool_name,
      act_rec.offset_var,
      0,
      spd,
      bld
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1066_aa_build_move_cmd;
}


/* F157062_AA_BUILD_MOVE_CMD */

s_t_r f157062_aa_build_move_cmd(mr, proc_num, pnt_num, trigger_str, tool_name, offset_var)
 m_requestp mr;
 integer proc_num;
 integer pnt_num;
 s_t_r trigger_str;
 s_t_r tool_name;
 s_t_r offset_var;
{

   struct ff157062_aa_build_move_cmd {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      m_requestp mr;
      integer proc_num;
      integer pnt_num;
      s_t_r trigger_str;
      s_t_r tool_name;
      s_t_r offset_var;
      id motion_id;
      id g1068;
      id id_10;   /* CSL */
      boole tmp_0;
      real spd;
      idob false_13;   /* the global variable false */
      boole use_jointtarget;
      id id_15;   /* JSI */
      idob aa_joint_speed_factor_16;   /* the global variable aa_joint_speed_factor */
      idob aa_allow_jointtargets_17;   /* the global variable aa_allow_jointtargets */
      shapep via_shp;
      boole tmp_2;
      nobj tmp_8;
      type_type type_type_21;   /* the type jv_shape */
      jv_shapep tmp_7;
      nobj tmp_1;
      lispob nil_24;   /* the global variable nil */
      idob aa_max_blend_dist_25;   /* the global variable aa_max_blend_dist */
      real bld;
      s_t_r g1067_aa_build_move_cmd;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff157062_aa_build_move_cmd *, template_array.template[25]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(mr, proc_num, pnt_num, trigger_str, tool_name, offset_var))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.mr = mr;
   act_rec.trigger_str = trigger_str;
   act_rec.tool_name = tool_name;
   act_rec.offset_var = offset_var;

   act_rec.motion_id = act_rec.mr->motion_kind;
   act_rec.g1068 = act_rec.mr->motion_kind;
   act_rec.tmp_0 = eq(
      act_rec.g1068,
      act_rec.id_10
   );
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.spd = act_rec.mr->lin_velocity.value;
   act_rec.use_jointtarget = ((boole)(act_rec.false_13->id_value));
   goto _l2;

_l1:;

   act_rec.tmp_0 = eq(
      act_rec.g1068,
      act_rec.id_15
   );
   if (!((boole)(act_rec.tmp_0))) goto _l2;
   act_rec.spd = act_rec.mr->joint_velocity.value * (*((real *)(((charp)(act_rec.aa_joint_speed_factor_16->id_value)) + sizeof(real))));
   if (!(((boole)(act_rec.aa_allow_jointtargets_17->id_value)))) goto _l2;
   act_rec.via_shp = f429050_wlkupn(
      act_rec.mr->fpath
   );
   act_rec.tmp_2 = f279791_null(
      act_rec.via_shp
   );
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_2)));
   if (!((boole)(act_rec.tmp_0))) goto _l2;
   act_rec.tmp_8 = (nobj)act_rec.via_shp;
   act_rec.tmp_7 = (jv_shapep)f811410_change_view(
      (nobj)(act_rec.tmp_8),
      act_rec.type_type_21
   );
   act_rec.tmp_1 = (nobj)(jv_shapep)(act_rec.tmp_7);
   act_rec.tmp_2 = f843799_null(
      (nobj)(act_rec.tmp_1)
   );
   act_rec.use_jointtarget = boolean2obj(!((boole)(act_rec.tmp_2)));

_l2:;

   act_rec.bld = act_rec.mr->blend.value * (*((real *)(((charp)(act_rec.aa_max_blend_dist_25->id_value)) + sizeof(real))));
   act_rec.g1067_aa_build_move_cmd = f973220_aa_build_move_cmd(
      proc_num,
      pnt_num,
      act_rec.motion_id,
      act_rec.trigger_str,
      act_rec.tool_name,
      act_rec.offset_var,
      act_rec.use_jointtarget,
      act_rec.spd,
      act_rec.bld
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1067_aa_build_move_cmd;
}


/* F944997_AA_BUILD_MOVE_CMD */

s_t_r f944997_aa_build_move_cmd(mr, pnt_num, trigger_str, tool_name, offset_var)
 m_requestp mr;
 integer pnt_num;
 s_t_r trigger_str;
 s_t_r tool_name;
 s_t_r offset_var;
{

   struct ff944997_aa_build_move_cmd {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      m_requestp mr;
      integer pnt_num;
      s_t_r trigger_str;
      s_t_r tool_name;
      s_t_r offset_var;
      integer integer_7;   /* 1 */
      integer proc_num;
      s_t_r g1069_aa_build_move_cmd;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff944997_aa_build_move_cmd *, template_array.template[26]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(mr, pnt_num, trigger_str, tool_name, offset_var))
      return (s_t_r)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.mr = mr;
   act_rec.trigger_str = trigger_str;
   act_rec.tool_name = tool_name;
   act_rec.offset_var = offset_var;

   act_rec.proc_num =    -(1);
   act_rec.g1069_aa_build_move_cmd = f157062_aa_build_move_cmd(
      act_rec.mr,
      act_rec.proc_num,
      pnt_num,
      act_rec.trigger_str,
      act_rec.tool_name,
      act_rec.offset_var
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1069_aa_build_move_cmd;
}


/* INIT AA4SHARED */

init_abb_common_aa4shared()
{	static unsigned char mid[] = {
	  35, 26, 137, 65, 254, 87, 154, 104, 142, 6, 205, 168, 185, 33, 240, 240, 0
	};
	initialize_module(mid, &local_init_rec);
}

