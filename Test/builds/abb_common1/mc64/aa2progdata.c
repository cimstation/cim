#define NE2C_VERSION 375
#include "compiled.h"
#include "precomp.h"
#include "e2c.h"
#include "aa2progdata.h"
#include "postcomp.h"



/* F388965_IS_JV */

boole f388965_is_jv(a0)
 aa_position_recp a0;
{

   struct ff388965_is_jv {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      aa_position_recp a0;
      struct aa_position_rec i;
      idob aa_position_rec_is_jv_bit_4;   /* the global variable aa_position_rec_is_jv_bit */
      boole y;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff388965_is_jv *, template_array.template[0]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(a0))
      return (boole)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.a0 = a0;

   COPY_STRUCT(&(act_rec.i), aa_position_recp, &(*(act_rec.a0)));
   act_rec.y = f562509_is_set(
      act_rec.i.booles,
      (*((integer *)(((charp)(act_rec.aa_position_rec_is_jv_bit_4->id_value)) + sizeof(typenum))))
   );

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.y;
}


/* F362772_DSET_IS_JV */

lispob f362772_dset_is_jv(a0, a1)
 aa_position_recp a0;
 boole a1;
{

   struct ff362772_dset_is_jv {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      aa_position_recp a0;
      boole a1;
      struct aa_position_rec _local_a0;
      idob aa_position_rec_is_jv_bit_5;   /* the global variable aa_position_rec_is_jv_bit */
      integer tmp_1;
      lispob nil_7;   /* the global variable nil */
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff362772_dset_is_jv *, template_array.template[1]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(a0, a1))
      return ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.a0 = a0;
   act_rec.a1 = a1;

   COPY_STRUCT(&(act_rec._local_a0), aa_position_recp, &(*(act_rec.a0)));
   act_rec.tmp_1 = f106088_set_bit(
      act_rec._local_a0.booles,
      (*((integer *)(((charp)(act_rec.aa_position_rec_is_jv_bit_5->id_value)) + sizeof(typenum)))),
      act_rec.a1
   );
   act_rec._local_a0.booles = (integer)(act_rec.tmp_1);

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.nil_7;
}


/* F867830_AA_WRITE_POSITION */

id f867830_aa_write_position(txt, pos_arr)
 textp txt;
 aa_position_rec__sarray pos_arr;
{

   struct ff867830_aa_write_position {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      textp txt;
      aa_position_rec__sarray pos_arr;
      osarrayp _s_2045;
      integer integer_5;   /* 0 */
      integer _s_2043;
      integer _s_2044;
      lispob _s_2046;
      boole tmp_0;
      struct aa_position_rec i;
      s_t_r s_t_r_11;   /* the string "" */
      boole tmp_3;
      idob write_tf_save_out_val_13;   /* the global variable write_tf_save_out_val */
      lispob nil_14;   /* the global variable nil */
      integer integer_15;   /* 1 */
      integer tmp_2;
      s_t_r s_t_r_17;   /* the string "    ! " */
      id id_18;   /* ROBOT */
      id frame_id;
      id g1037__rte_positions_to_file;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff867830_aa_write_position *, template_array.template[2]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(txt, pos_arr))
      return (id)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.txt = txt;
   act_rec.pos_arr = pos_arr;

   act_rec._s_2045 = (osarrayp)act_rec.pos_arr;
   act_rec._s_2043 = 0;
   act_rec._s_2044 = act_rec._s_2045->index;
   act_rec._s_2046 = act_rec._s_2045->goods;

_l1:;

   act_rec.tmp_0 = (boole)boolean2obj(act_rec._s_2043 > act_rec._s_2044);
   if (!((boole)(act_rec.tmp_0))) goto _l2;
   goto _l3;

_l2:;

   act_rec.tmp_0 = (boole)((lispobp)(ARRAY_BODY(act_rec._s_2046)))[act_rec._s_2043];
   COPY_STRUCT(&(act_rec.i), aa_position_recp, &(*((lispob)(act_rec.tmp_0))));
   act_rec.tmp_3 = equal(
      act_rec.i.str,
      act_rec.s_t_r_11
   );
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_3)));
   if (!((boole)(act_rec.tmp_0))) goto _l4;
   SET_OB_FCALL(act_rec.write_tf_save_out_val_13, id_value, out_val(), lispob);
   f929848_switch_output_to(
      act_rec.txt
   );
   f894339_tprint(
      act_rec.i.str
   );
   terpri();
   switch_out(
      ((lispob)(act_rec.write_tf_save_out_val_13->id_value))
   );

_l4:;

   act_rec.tmp_2 = (integer)act_rec._s_2043 + 1;
   act_rec._s_2043 = (integer)(act_rec.tmp_2);
   goto _l1;

_l3:;

   SET_OB_FCALL(act_rec.write_tf_save_out_val_13, id_value, out_val(), lispob);
   f929848_switch_output_to(
      act_rec.txt
   );
   f894339_tprint(
      act_rec.s_t_r_17
   );
   terpri();
   switch_out(
      ((lispob)(act_rec.write_tf_save_out_val_13->id_value))
   );
   act_rec.frame_id = act_rec.id_18;
   act_rec.g1037__rte_positions_to_file = act_rec.frame_id;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1037__rte_positions_to_file;
}


/* F195733_AA_GET_XOB_WITH_P */

aa_xob_with_progdatap f195733_aa_get_xob_with_p(xo)
 xobp xo;
{

   struct ff195733_aa_get_xob_with_p {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      xobp xo;
      nobj tmp_1;
      type_type type_type_4;   /* the type aa_xob_with_progdata */
      aa_xob_with_progdatap xp;
      nobj tmp_2;
      boole tmp_0;
      type_type type_type_8;   /* the type aa_position_rec */
      integer integer_9;   /* 3 */
      aa_position_rec__sarray p_arr1;
      aa_position_rec__sarray p_arr2;
      idob aa_procedure_number_12;   /* the global variable aa_procedure_number */
      integer integer_13;   /* 1 */
      integer tmp_4;
      aa_xob_with_progdatap tmp_7;
      lispob nil_16;   /* the global variable nil */
      lispob nil_sconst;
      integer integer_18;   /* 0 */
      integer tmp_3;
      lispob tmp_10;
      type_type type_type_21;   /* the type integer */
      universal tmp_9;
      aa_xob_with_progdatap g1038__get_xob_with_progdata;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff195733_aa_get_xob_with_p *, template_array.template[3]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(xo))
      return (aa_xob_with_progdatap)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.xo = xo;

   act_rec.tmp_1 = (nobj)act_rec.xo;
   act_rec.xp = (aa_xob_with_progdatap)f811410_change_view(
      (nobj)(act_rec.tmp_1),
      act_rec.type_type_4
   );
   act_rec.tmp_2 = (nobj)act_rec.xp;
   act_rec.tmp_0 = f843799_null(
      (nobj)(act_rec.tmp_2)
   );
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.tmp_2 = (nobj)f498244_mk_new_osarray(
      act_rec.type_type_8,
      3
   );
   act_rec.p_arr1 = (aa_position_rec__sarray)(lispob)(act_rec.tmp_2);
   act_rec.tmp_2 = (nobj)f498244_mk_new_osarray(
      act_rec.type_type_8,
      3
   );
   act_rec.p_arr2 = (aa_position_rec__sarray)(lispob)(act_rec.tmp_2);
   act_rec.tmp_4 = (integer)(*((integer *)(((charp)(act_rec.aa_procedure_number_12->id_value)) + sizeof(typenum)))) + 1;
   (*((integer *)(((charp)(act_rec.aa_procedure_number_12->id_value)) + sizeof(typenum)))) = (integer)(act_rec.tmp_4);
   act_rec.tmp_7 = (aa_xob_with_progdatap)f481445_alloc(
      act_rec.type_type_4
   );
   SET_OB_FIELD(((aa_xob_with_progdatap)(act_rec.tmp_7)), my_class, act_rec.type_type_4, type_type);
   SET_OB_FIELD(((aa_xob_with_progdatap)(act_rec.tmp_7)), c__d0, NULL, lispob);
   SET_OB_FIELD(((aa_xob_with_progdatap)(act_rec.tmp_7)), c__d1, NULL, lispob);
   SET_OB_FIELD(((aa_xob_with_progdatap)(act_rec.tmp_7)), pos_array_rob, act_rec.p_arr1, aa_position_rec__sarray);
   SET_OB_FIELD(((aa_xob_with_progdatap)(act_rec.tmp_7)), pos_array_ext, act_rec.p_arr2, aa_position_rec__sarray);
   SET_OB_FIELD(((aa_xob_with_progdatap)(act_rec.tmp_7)), subprog_list, NULL, lispob);
   ((aa_xob_with_progdatap)(act_rec.tmp_7))->procedure_num = (*((integer *)(((charp)(act_rec.aa_procedure_number_12->id_value)) + sizeof(typenum))));
   ((aa_xob_with_progdatap)(act_rec.tmp_7))->booles = 0;
   act_rec.tmp_3 = (integer)   -(1);
   act_rec.tmp_10 = f794013_integer_to_ob(
      act_rec.tmp_3
   );
   act_rec.tmp_9 = f942598_mk_universal(
      act_rec.tmp_10,
      act_rec.type_type_21
   );
   SET_OB_FIELD(((aa_xob_with_progdatap)(act_rec.tmp_7)), aux, (universal)(act_rec.tmp_9), universal);
   act_rec.tmp_1 = (nobj)(aa_xob_with_progdatap)(act_rec.tmp_7);
   act_rec.tmp_2 = f15867_set_up_subclass(
      (nobj)(act_rec.tmp_1)
   );
   act_rec.xp = (aa_xob_with_progdatap)(nobj)(act_rec.tmp_2);
   act_rec.tmp_2 = (nobj)act_rec.xo;
   act_rec.tmp_1 = (nobj)act_rec.xp;
   act_rec.tmp_0 = (boole)f116631_splice1(
      (obj_formp)(act_rec.tmp_2),
      (obj_formp)(act_rec.tmp_1)
   );

_l1:;

   act_rec.g1038__get_xob_with_progdata = act_rec.xp;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1038__get_xob_with_progdata;
}


/* F340434_AA_INIT_XOB_PROGD */

aa_xob_with_progdatap f340434_aa_init_xob_progd(xo)
 xobp xo;
{

   struct ff340434_aa_init_xob_progd {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      xobp xo;
      aa_xob_with_progdatap xp;
      type_type type_type_4;   /* the type aa_position_rec */
      integer integer_5;   /* 3 */
      lispob tmp_1;
      aa_position_rec__sarray p_arr1;
      aa_position_rec__sarray p_arr2;
      lispob nil_sconst;
      shapep ref_shp;
      lispob nil_11;   /* the global variable nil */
      type_type type_type_12;   /* the type pathname */
      universal tmp_0;
      pathname tmp_2;
      lispob tmp_4;
      aa_xob_with_progdatap g1039_aa_init_xob_progdata;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff340434_aa_init_xob_progd *, template_array.template[4]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(xo))
      return (aa_xob_with_progdatap)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.xo = xo;

   act_rec.xp = f195733_aa_get_xob_with_p(
      act_rec.xo
   );
   act_rec.tmp_1 = f498244_mk_new_osarray(
      act_rec.type_type_4,
      3
   );
   act_rec.p_arr1 = (aa_position_rec__sarray)(lispob)(act_rec.tmp_1);
   act_rec.tmp_1 = f498244_mk_new_osarray(
      act_rec.type_type_4,
      3
   );
   act_rec.p_arr2 = (aa_position_rec__sarray)(lispob)(act_rec.tmp_1);
   SET_OB_FIELD(act_rec.xp, pos_array_rob, act_rec.p_arr1, aa_position_rec__sarray);
   SET_OB_FIELD(act_rec.xp, pos_array_ext, act_rec.p_arr2, aa_position_rec__sarray);
   SET_OB_FIELD(act_rec.xp, subprog_list, NULL, lispob);
   act_rec.ref_shp = f735188_pp_g_user_frame_f(
      act_rec.xo
   );
   act_rec.tmp_1 = (lispob)f279791_null(
      act_rec.ref_shp
   );
   if (!((boole)(act_rec.tmp_1))) goto _l1;
   act_rec.tmp_0 = f942598_mk_universal(
      act_rec.nil_11,
      act_rec.type_type_12
   );
   SET_OB_FIELD(act_rec.xp, aux, (universal)(act_rec.tmp_0), universal);
   goto _l2;

_l1:;

   act_rec.tmp_2 = f658470_pathname(
      act_rec.ref_shp
   );
   act_rec.tmp_4 = (lispob)(pathname)(act_rec.tmp_2);
   act_rec.tmp_1 = (lispob)f942598_mk_universal(
      act_rec.tmp_4,
      act_rec.type_type_12
   );
   SET_OB_FIELD(act_rec.xp, aux, (universal)(act_rec.tmp_1), universal);

_l2:;

   act_rec.g1039_aa_init_xob_progdata = act_rec.xp;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1039_aa_init_xob_progdata;
}


/* F754847_AA_GET_NEW_SUBPRO */

integer f754847_aa_get_new_subpro(prog_xob)
 xobp prog_xob;
{

   struct ff754847_aa_get_new_subpro {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      xobp prog_xob;
      aa_xob_with_progdatap xp;
      integer integer_4;   /* 0 */
      integer next_num;
      idob false_6;   /* the global variable false */
      boole num_ok;
      boole tmp_1;
      boole tmp_0;
      integer integer_10;   /* 1 */
      integer tmp_4;
      idob true_12;   /* the global variable true */
      lispob _s_2048;
      struct aa_subprog_rec i;
      integer g1040__gt_new_subprog_number;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff754847_aa_get_new_subpro *, template_array.template[5]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(prog_xob))
      return ncode_integer_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.prog_xob = prog_xob;

   act_rec.xp = f195733_aa_get_xob_with_p(
      act_rec.prog_xob
   );
   act_rec.next_num = 0;
   act_rec.num_ok = ((boole)(act_rec.false_6->id_value));

_l1:;

   act_rec.tmp_1 = (boole)boolean2obj(!(act_rec.num_ok));
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_1)));
   if (!((boole)(act_rec.tmp_0))) goto _l3;
   goto _l4;

_l3:;

   act_rec.tmp_4 = (integer)act_rec.next_num + 1;
   act_rec.next_num = (integer)(act_rec.tmp_4);
   act_rec.num_ok = ((boole)(act_rec.true_12->id_value));
   act_rec._s_2048 = act_rec.xp->subprog_list;

_l2:;

   act_rec.tmp_0 = (boole)list_null(
      act_rec._s_2048
   );
   if (!((boole)(act_rec.tmp_0))) goto _l5;
   goto _l6;

_l5:;

   act_rec.tmp_0 = (boole)car(
      act_rec._s_2048
   );
   COPY_STRUCT(&(act_rec.i), aa_subprog_recp, &(*((lispob)(act_rec.tmp_0))));
   act_rec.tmp_0 = (boole)boolean2obj(!(act_rec.num_ok));
   if (!((boole)(act_rec.tmp_0))) goto _l7;
   goto _l6;

_l7:;

   act_rec.tmp_0 = (boole)boolean2obj(act_rec.next_num == act_rec.i.prog_num);
   act_rec.num_ok = boolean2obj(!((boole)(act_rec.tmp_0)));
   act_rec.tmp_0 = (boole)cdr(
      act_rec._s_2048
   );
   act_rec._s_2048 = (lispob)(act_rec.tmp_0);
   goto _l2;

_l6:;

   goto _l1;

_l4:;

   act_rec.g1040__gt_new_subprog_number = act_rec.next_num;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1040__gt_new_subprog_number;
}


/* F653128_AA_ADD_SUBPROG */

integer f653128_aa_add_subprog(prog_xob, this_path)
 xobp prog_xob;
 pathname this_path;
{

   struct ff653128_aa_add_subprog {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      xobp prog_xob;
      pathname this_path;
      aa_xob_with_progdatap xp;
      integer ret;
      struct aa_subprog_rec prog_rec;
      integer integer_7;   /* 0 */
      integer integer_8;   /* 1 */
      integer tmp_2;
      lispob tmp_1;
      type_type type_type_11;   /* the type integer */
      universal tmp_0;
      lispob tmp_6;
      integer g1041_aa_add_subprog;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff653128_aa_add_subprog *, template_array.template[6]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(prog_xob, this_path))
      return ncode_integer_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.prog_xob = prog_xob;
   act_rec.this_path = this_path;

   act_rec.xp = f195733_aa_get_xob_with_p(
      act_rec.prog_xob
   );
   act_rec.ret = f754847_aa_get_new_subpro(
      act_rec.prog_xob
   );
   act_rec.prog_rec.prog_path = act_rec.this_path;
   act_rec.prog_rec.prog_num = act_rec.ret;
   act_rec.prog_rec.booles = 0;
   act_rec.tmp_2 = (integer)   -(1);
   act_rec.tmp_1 = f794013_integer_to_ob(
      act_rec.tmp_2
   );
   act_rec.tmp_0 = f942598_mk_universal(
      act_rec.tmp_1,
      act_rec.type_type_11
   );
   act_rec.prog_rec.aux = (universal)(act_rec.tmp_0);
   act_rec.tmp_1 = copy(
      &(act_rec.prog_rec)
   );
   act_rec.tmp_6 = cons(
      act_rec.tmp_1,
      act_rec.xp->subprog_list
   );
   SET_OB_FIELD(act_rec.xp, subprog_list, (lispob)(act_rec.tmp_6), lispob);
   act_rec.g1041_aa_add_subprog = act_rec.ret;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1041_aa_add_subprog;
}


/* F887897_AA_REMOVE_SUBPROG */

integer f887897_aa_remove_subprog(prog_xob, this_path)
 xobp prog_xob;
 pathname this_path;
{

   struct ff887897_aa_remove_subprog {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      xobp prog_xob;
      pathname this_path;
      integer integer_4;   /* 1 */
      integer ret;
      aa_xob_with_progdatap xp;
      lispob nil_sconst;
      lispob other_progs;
      idob false_9;   /* the global variable false */
      boole found_it;
      lispob _s_2051;
      boole tmp_2;
      struct aa_subprog_rec i;
      pathname check_path;
      lispob tmp_3;
      lispob tmp_5;
      idob true_17;   /* the global variable true */
      lispob nil_18;   /* the global variable nil */
      s_t_r s_t_r_19;   /* the string "WARNING - FOUND ANOTHER INSTANCE OF PROGRAM. CLOSING MOST RECENT ONE: " */
      s_t_r tmp_6;
      integer g1042_aa_remove_subprog;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff887897_aa_remove_subprog *, template_array.template[7]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(prog_xob, this_path))
      return ncode_integer_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.prog_xob = prog_xob;
   act_rec.this_path = this_path;

   act_rec.ret =    -(1);
   act_rec.xp = f195733_aa_get_xob_with_p(
      act_rec.prog_xob
   );
   act_rec.other_progs = NULL;
   act_rec.found_it = ((boole)(act_rec.false_9->id_value));
   act_rec._s_2051 = act_rec.xp->subprog_list;

_l1:;

   act_rec.tmp_2 = (boole)list_null(
      act_rec._s_2051
   );
   if (!((boole)(act_rec.tmp_2))) goto _l2;
   goto _l3;

_l2:;

   act_rec.tmp_2 = (boole)car(
      act_rec._s_2051
   );
   COPY_STRUCT(&(act_rec.i), aa_subprog_recp, &(*((lispob)(act_rec.tmp_2))));
   act_rec.check_path = act_rec.i.prog_path;
   act_rec.tmp_3 = (lispob)act_rec.check_path;
   act_rec.tmp_5 = (lispob)act_rec.this_path;
   act_rec.tmp_2 = equal(
      act_rec.tmp_3,
      act_rec.tmp_5
   );
   if (!((boole)(act_rec.tmp_2))) goto _l4;
   act_rec.tmp_2 = (boole)boolean2obj(!(act_rec.found_it));
   if (!((boole)(act_rec.tmp_2))) goto _l5;
   act_rec.ret = act_rec.i.prog_num;
   act_rec.found_it = ((boole)(act_rec.true_17->id_value));
   goto _l6;

_l5:;

   act_rec.tmp_3 = copy(
      &(act_rec.i)
   );
   act_rec.tmp_5 = cons(
      act_rec.tmp_3,
      act_rec.other_progs
   );
   act_rec.other_progs = (lispob)(act_rec.tmp_5);
   act_rec.tmp_6 = f1047998_to_string(
      act_rec.this_path
   );
   act_rec.tmp_2 = (boole)f686094_times(
      act_rec.s_t_r_19,
      (s_t_r)(act_rec.tmp_6)
   );
   f894339_tprint(
      (s_t_r)(act_rec.tmp_2)
   );
   terpri();
   goto _l6;

_l4:;

   act_rec.tmp_5 = copy(
      &(act_rec.i)
   );
   act_rec.tmp_6 = (s_t_r)cons(
      act_rec.tmp_5,
      act_rec.other_progs
   );
   act_rec.other_progs = (lispob)(act_rec.tmp_6);

_l6:;

   act_rec.tmp_2 = (boole)cdr(
      act_rec._s_2051
   );
   act_rec._s_2051 = (lispob)(act_rec.tmp_2);
   goto _l1;

_l3:;

   act_rec.tmp_6 = (s_t_r)reverseip(
      act_rec.other_progs
   );
   act_rec.other_progs = (lispob)(act_rec.tmp_6);
   SET_OB_FIELD(act_rec.xp, subprog_list, act_rec.other_progs, lispob);
   act_rec.g1042_aa_remove_subprog = act_rec.ret;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1042_aa_remove_subprog;
}


/* F308726_AA_GET_PROGDATA_U */

shapep f308726_aa_get_progdata_u(prog_xob)
 xobp prog_xob;
{

   struct ff308726_aa_get_progdata_u {
      typenum typenum_field;
      lispob _name_of_;
      integer _num_of_;
      xobp prog_xob;
      idob null_shape_3;   /* the global variable null_shape */
      shapep ret;
      nobj tmp_1;
      type_type type_type_6;   /* the type aa_xob_with_progdata */
      aa_xob_with_progdatap xp;
      boole tmp_2;
      boole tmp_0;
      type_type type_type_10;   /* the type pathname */
      pathname pn;
      nobj tmp_4;
      lispob nil_13;   /* the global variable nil */
      shapep g1043__g_progdata_user_frame;
   } act_rec;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

   COPY_INIT_REC(&act_rec, struct ff308726_aa_get_progdata_u *, template_array.template[8]);

   DATA_BLOCK_PUSH(&act_rec);

#ifdef COMP_TRACE
   if (act_rec._num_of_ && ncode_bit_fcn2(prog_xob))
      return (shapep)ncode_lispob_answer;
#endif

   /* This code is a translation of the user's Sil code. */

   act_rec.prog_xob = prog_xob;

   act_rec.ret = ((shapep)(act_rec.null_shape_3->id_value));
   act_rec.tmp_1 = (nobj)act_rec.prog_xob;
   act_rec.xp = (aa_xob_with_progdatap)f811410_change_view(
      (nobj)(act_rec.tmp_1),
      act_rec.type_type_6
   );
   act_rec.tmp_1 = (nobj)act_rec.xp;
   act_rec.tmp_2 = f843799_null(
      (nobj)(act_rec.tmp_1)
   );
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_2)));
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.tmp_2 = (boole)f621666_from_universal_su(
      act_rec.xp->aux,
      act_rec.type_type_10
   );
   act_rec.pn = (pathname)(lispob)(act_rec.tmp_2);
   act_rec.tmp_4 = (nobj)act_rec.pn;
   act_rec.tmp_2 = f843799_null(
      (nobj)(act_rec.tmp_4)
   );
   act_rec.tmp_0 = (boole)boolean2obj(!((boole)(act_rec.tmp_2)));
   if (!((boole)(act_rec.tmp_0))) goto _l1;
   act_rec.ret = f429050_wlkupn(
      act_rec.pn
   );

_l1:;

   act_rec.g1043__g_progdata_user_frame = act_rec.ret;

   /* This code was generated for internal use only.   */
   /* It is not a translation of the user's Sil code.  */

_end_label:;

#ifdef COMP_TRACE_EXIT
     if (act_rec._num_of_ & DBLOCK_TRACE_EXIT_BIT)
       ncode_trace_exit_fcn2();
#endif
   DATA_BLOCK_POP();

   return act_rec.g1043__g_progdata_user_frame;
}


/* INIT AA2PROGDATA */

init_abb_common_aa2progdata()
{	static unsigned char mid[] = {
	  35, 26, 137, 65, 254, 87, 154, 104, 142, 6, 205, 168, 185, 33, 240, 240, 0
	};
	initialize_module(mid, &local_init_rec);
}

