

/* Represented type declarations */

typedef lispob pathname;
typedef pathname *pathnamep;
typedef lispob nobj;
typedef nobj *nobjp;
typedef lispob universal;
typedef universal *universalp;
typedef real dangle;
typedef dangle *danglep;
typedef integer word;
typedef word *wordp;
typedef integer s_node;
typedef s_node *s_nodep;
typedef integer cache_type;
typedef cache_type *cache_typep;
typedef integer padding_type;
typedef padding_type *padding_typep;
typedef integer c_h_a_r;
typedef c_h_a_r *c_h_a_rp;

/* Types that are forward referenced */



/* Structure declarations */

struct lframe {
   typenum typenum_field;
   padding_type pad__0;
   real r00;
   real r01;
   real r02;
   real xtr;
   real r10;
   real r11;
   real r12;
   real ytr;
   real r20;
   real r21;
   real r22;
   real ztr;
};

/* Pointer to above structure */

typedef struct lframe *lframep;

struct vworld {
   typenum typenum_field;
   type_type my_class;
   lispob c__d0;
   lispob c__d1;
   integer kind_of;
   lispob goods;
   lispob scenes;
   integer booles;
   integer grafid;
};

/* Pointer to above structure */

typedef struct vworld *vworldp;

struct segment {
   typenum typenum_field;
   cache_type kind;
   s_node figid;
   lispob shape_of;
   vworldp vworld_of;
   lispob link_of;
   lispob data_of;
   integer booles;
};

/* Pointer to above structure */

typedef struct segment *segmentp;

struct shape {
   typenum typenum_field;
   type_type my_class;
   lispob c__d0;
   lispob c__d1;
   lframep pose1;
   lispob moved_obs1;
   lispob mover_of1;
   segmentp seg;
   lispob node1;
   word booles;
};

/* Pointer to above structure */

typedef struct shape *shapep;

struct jv {
   typenum typenum_field;
   padding_type pad__0;
   real j1;
   real j2;
   real j3;
   real j4;
   real j5;
   real j6;
   lispob ji;
   padding_type pad__1;
};

/* Pointer to above structure */

typedef struct jv *jvp;

struct frame {
   typenum typenum_field;
   padding_type pad__0;
   real r00;
   real r01;
   real r02;
   real xtr;
   real r10;
   real r11;
   real r12;
   real ytr;
   real r20;
   real r21;
   real r22;
   real ztr;
};

/* Pointer to above structure */

typedef struct frame *framep;

struct crt_zyx {
   typenum typenum_field;
   padding_type pad__0;
   real xc;
   real yc;
   real zc;
   dangle r1;
   dangle r2;
   dangle r3;
};

/* Pointer to above structure */

typedef struct crt_zyx *crt_zyxp;

struct jvr {
   typenum typenum_field;
   padding_type pad__0;
   real j1;
   real j2;
   real j3;
   real j4;
   real j5;
   real j6;
   lispob ji;
   padding_type pad__1;
};

/* Pointer to above structure */

typedef struct jvr *jvrp;

struct flagged_jvr {
   typenum typenum_field;
   boole valid;
   struct jvr value;
};

/* Pointer to above structure */

typedef struct flagged_jvr *flagged_jvrp;

struct arm_solution {
   typenum typenum_field;
   boole in_env;
   integer nsols;
   lispob solutions;
};

/* Pointer to above structure */

typedef struct arm_solution *arm_solutionp;

struct robotdata {
   typenum typenum_field;
   universal robot_constants_of;
   lispob av_to_jvr_fn;
   lispob jvr_to_av_fn;
   lispob in_joint_limits_fn;
   lispob joint_limits_fn;
   lispob em_joint_limits_fn;
   lispob kin_fn;
   lispob invkin;
   lispob move_robot;
   lispob workspace_fn;
   lispob workspace_box_fn;
   lispob workspace_profile_fn;
   lispob jacobian;
   lispob invjacobian;
   lispob robot_to_cim_jvr;
   lispob cim_to_robot_jvr;
   lispob near_sol_fn;
   lispob home_fn;
   lispob ready_fn;
   lispob robot_con_fn;
   lispob robot_con_print_fn;
   struct jvr home;
   struct jvr ready;
   universal robo_aux_1;
   universal robo_aux_2;
   universal robo_aux_3;
   universal robo_aux_4;
   boole emulate_mode;
   padding_type pad__0;
   struct jvr current;
   struct jvr last_computed;
   real default_step;
   boole sols_computed;
   arm_solutionp all_jvrs;
};

/* Pointer to above structure */

typedef struct robotdata *robotdatap;

struct iodata {
   typenum typenum_field;
   universal io_constants_of;
   lispob target_soln_fn;
   lispob init_online_mode_fn;
   lispob translate_fn;
   lispob translate_for_download_fn;
   lispob download_fn;
   lispob upload_fn;
   lispob terminal_fn;
   boole linear_translation_mode;
   boole translate_for_download;
   boole translate_debug;
   boole online_mode;
   boole online_mode_debug;
   boole online_mode_initialized;
   boole hold_for_confirm;
   boole issue_waits;
   boole in_a_path;
   boole path_ok;
   integer program_counter;
   struct frame station_rel_base;
   lispob rcode_list;
   s_t_r output_port_pathname;
   integer stream;
   lispob output_files_of;
   id process_of;
   universal io_aux_1;
   universal io_aux_2;
   universal io_aux_3;
   universal io_aux_4;
   padding_type pad__0;
};

/* Pointer to above structure */

typedef struct iodata *iodatap;

struct robot {
   typenum typenum_field;
   type_type my_class;
   lispob c__d0;
   lispob c__d1;
   shapep shape_of;
   robotdatap data_of;
   lispob aux;
   iodatap iodata_of;
};

/* Pointer to above structure */

typedef struct robot *robotp;

struct crt_ypr {
   typenum typenum_field;
   padding_type pad__0;
   real xc;
   real yc;
   real zc;
   dangle yaw;
   dangle pitch;
   dangle roll;
};

/* Pointer to above structure */

typedef struct crt_ypr *crt_yprp;

struct jv_shape {
   typenum typenum_field;
   type_type my_class;
   lispob c__d0;
   lispob c__d1;
   shapep shape_of;
   pathname owner_of;
   struct jv jv_of;
};

/* Pointer to above structure */

typedef struct jv_shape *jv_shapep;

struct text {
   typenum typenum_field;
   s_t_r pathname;
   lispob strm_ptr;
};

/* Pointer to above structure */

typedef struct text *textp;

struct con_type {
   typenum typenum_field;
   lispob kind;
   real value;
};

/* Pointer to above structure */

typedef struct con_type *con_typep;

struct activity {
   typenum typenum_field;
   lispob action_of;
   universal aux;
};

/* Pointer to above structure */

typedef struct activity *activityp;

struct bpath {
   typenum typenum_field;
   type_type my_class;
   lispob c__d0;
   lispob c__d1;
   universal cpath;
   pathname originator;
   struct con_type vcon;
   struct con_type acon;
   integer kind;
   padding_type pad__0;
   real start_time;
   real duration;
   activityp activity_of;
   padding_type pad__1;
};

/* Pointer to above structure */

typedef struct bpath *bpathp;

struct m_request_path {
   typenum typenum_field;
   type_type my_class;
   lispob c__d0;
   lispob c__d1;
   bpathp bpath_of;
   lispob vias;
};

/* Pointer to above structure */

typedef struct m_request_path *m_request_pathp;

struct object_list_path {
   typenum typenum_field;
   type_type my_class;
   lispob c__d0;
   lispob c__d1;
   bpathp bpath_of;
   lispob vias;
};

/* Pointer to above structure */

typedef struct object_list_path *object_list_pathp;

struct gcoord {
   typenum typenum_field;
   padding_type pad__0;
   real gc1;
   real gc2;
   real gc3;
   real gc4;
   real gc5;
   real gc6;
   lispob gci;
   padding_type pad__1;
};

/* Pointer to above structure */

typedef struct gcoord *gcoordp;

struct flagged_axes_turn {
   typenum typenum_field;
   boole valid;
   lispob values;
};

/* Pointer to above structure */

typedef struct flagged_axes_turn *flagged_axes_turnp;

struct m_request {
   typenum typenum_field;
   type_type my_class;
   lispob c__d0;
   lispob c__d1;
   lispob method_block;
   pathname originator;
   struct con_type lin_velocity;
   struct con_type rot_velocity;
   struct con_type joint_velocity;
   struct con_type joint_acceleration;
   struct con_type joint_deceleration;
   struct con_type joint_jerk;
   struct con_type lin_transition_velocity;
   struct con_type rot_transition_velocity;
   struct con_type lin_acceleration;
   struct con_type rot_acceleration;
   struct con_type lin_deceleration;
   struct con_type rot_deceleration;
   struct con_type lin_jerk;
   struct con_type rot_jerk;
   real dwell;
   struct con_type blend;
   id motion_kind;
   id position_kind;
   struct frame fvalue;
   pathname fpath;
   padding_type pad__0;
   struct gcoord jvalue;
   pathname jpath;
   padding_type pad__1;
   struct gcoord avalue;
   pathname apath;
   lispob solution_number;
   struct flagged_axes_turn axes_turn_numbers;
   lispob solution_jv;
   lispob solution_jvr;
   boole first_call;
   boole base_changing;
   boole tool_changing;
   pathname tool_frame;
   pathname base_frame;
   universal aux;
   padding_type pad__2;
};

/* Pointer to above structure */

typedef struct m_request *m_requestp;


/* Referenced functions */

s_t_r int2str();
s_t_r f686094_times();
lispob f920733_parse_string();
c_h_a_r f751295_select();
integer f747679_ord();
s_t_r f731487_lowercase();
boole f320997_is_robot();
s_t_r f704000_silspec_type();
s_t_r f351630_uppercase();
integer f893325_find();
real f283114_ob_to_real();
s_t_r f10284_real2str();
real real_abs();
integer f1040535_round();
integer trunc();
shapep f946540_get_flange();
shapep f465581_select_noerr();
boole eq();
lispob f329319_pose();
lispob f143161_in_frame();
lispob f868477_frame_to_crt_zyx();
shapep f151301_get_cool_tool();
boole f279791_null();
lispob f863393_crt_zyx_to_crt_yp();
s_t_r f775741_abb_pose();
nobj f811410_change_view();
lispob f232639_imoveto();
integer f304959_refresh();
lispob f977109_real_to_ob();
boole f725439_is_jv_shape();
lispob f358530_c_jv();
m_request_pathp f685938_get_m_request_pat();
shapep f216872_robot_of();
integer f342524_length();
lispob f680756_snap_to_nth();
shapep f386076_wlkup();
lispob out_val();
lispob f929848_switch_output_to();
lispob f894339_tprint();
lispob terpri();
lispob switch_out();
lispob copy_from_heap();
integer f1102_roundoff();
boole equal();
lispob f871277_tprint();
shapep f429050_wlkupn();
boole f843799_null();


/* Functions that are defined in this file */

s_t_r f479144_aa_get_point_type();
s_t_r f511556_aa_build_point_na();
s_t_r f112103_aa_fixup_filename();
boole f136293_is_abb_robot();
s_t_r f720801_aa_abb_ea();
integer f401200_aa_abb_quadrant();
integer f163095_aa_calc_cfx();
lispob f919290_aa_set_cfx_usage();
s_t_r f407730_aa_abb_config();
s_t_r f849568_aa_get_tool_pose();
s_t_r f664284_aa_format_robtarg();
s_t_r f262427_aa_format_robtarg();
s_t_r f729453_aa_format_robtarg();
s_t_r f774156_aa_format_robtarg();
s_t_r f68741_aa_format_jointtar();
s_t_r f262076_aa_format_jointta();
lispob f402590_aa_write_abb_robt();
lispob f389475_aa_write_abb_join();
integer f832026_aa_get_blend_code();
s_t_r f181078_aa_get_blend_stri();
integer f137706_aa_get_speed_code();
s_t_r f371110_aa_get_speed_stri();
s_t_r f973220_aa_build_move_cmd();
s_t_r f45332_aa_build_move_cmd();
s_t_r f202311_aa_build_move_cmd();
s_t_r f157062_aa_build_move_cmd();
s_t_r f944997_aa_build_move_cmd();


/* Activation record template array declaration */

static struct template_array {
  typenum type;
  alen len;
  lispob template[27];
} template_array = {
  VECTOR_TYPE,
  27,
  { nil }
};


/* Init_rec declarations */

static struct module_name {
  typenum type;
  alen len;
  char letters[20];
} module_name = {
  STRING_TYPE,
  20,
  { 'a', 'b', 'b', '_', 'c', 'o', 'm', 'm', 'o', 'n', '_', 'a', 'a', '4', 's', 'h', 'a', 'r', 'e', 'd'}
};

static struct fcn_array {
  typenum type;
  alen len;
  fcnp fcn[27];
} fcn_array = {
  INTEGER_ARRAY_TYPE,
  27,
  {
   (fcnp)f479144_aa_get_point_type,
   (fcnp)f511556_aa_build_point_na,
   (fcnp)f112103_aa_fixup_filename,
   (fcnp)f136293_is_abb_robot,
   (fcnp)f720801_aa_abb_ea,
   (fcnp)f401200_aa_abb_quadrant,
   (fcnp)f163095_aa_calc_cfx,
   (fcnp)f919290_aa_set_cfx_usage,
   (fcnp)f407730_aa_abb_config,
   (fcnp)f849568_aa_get_tool_pose,
   (fcnp)f664284_aa_format_robtarg,
   (fcnp)f262427_aa_format_robtarg,
   (fcnp)f729453_aa_format_robtarg,
   (fcnp)f774156_aa_format_robtarg,
   (fcnp)f68741_aa_format_jointtar,
   (fcnp)f262076_aa_format_jointta,
   (fcnp)f402590_aa_write_abb_robt,
   (fcnp)f389475_aa_write_abb_join,
   (fcnp)f832026_aa_get_blend_code,
   (fcnp)f181078_aa_get_blend_stri,
   (fcnp)f137706_aa_get_speed_code,
   (fcnp)f371110_aa_get_speed_stri,
   (fcnp)f973220_aa_build_move_cmd,
   (fcnp)f45332_aa_build_move_cmd,
   (fcnp)f202311_aa_build_move_cmd,
   (fcnp)f157062_aa_build_move_cmd,
   (fcnp)f944997_aa_build_move_cmd
  }
};

static struct init_rec_struct local_init_rec = {
  INIT_REC_TYPE,
  1409201631,   /* Wed Aug 27 21:53:51 2014  */
  (lispob)&module_name,
  (lispob)&template_array,
  (lispob)&fcn_array
};

