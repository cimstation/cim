

/* Represented type declarations */

typedef lispob pathname;
typedef pathname *pathnamep;
typedef integer word;
typedef word *wordp;
typedef integer s_node;
typedef s_node *s_nodep;
typedef integer cache_type;
typedef cache_type *cache_typep;
typedef integer padding_type;
typedef padding_type *padding_typep;
typedef lispob nobj;
typedef nobj *nobjp;
typedef lispob universal;
typedef universal *universalp;
typedef lispob aa_position_rec__sarray;
typedef aa_position_rec__sarray *aa_position_rec__sarrayp;

/* Types that are forward referenced */



/* Structure declarations */

struct aa_position_rec {
   typenum typenum_field;
   s_t_r str;
   integer booles;
};

/* Pointer to above structure */

typedef struct aa_position_rec *aa_position_recp;

struct text {
   typenum typenum_field;
   s_t_r pathname;
   lispob strm_ptr;
};

/* Pointer to above structure */

typedef struct text *textp;

struct osarray {
   typenum typenum_field;
   integer index;
   lispob goods;
};

/* Pointer to above structure */

typedef struct osarray *osarrayp;

struct aa_xob_with_progdata {
   typenum typenum_field;
   type_type my_class;
   lispob c__d0;
   lispob c__d1;
   aa_position_rec__sarray pos_array_rob;
   aa_position_rec__sarray pos_array_ext;
   lispob subprog_list;
   integer procedure_num;
   integer booles;
   universal aux;
};

/* Pointer to above structure */

typedef struct aa_xob_with_progdata *aa_xob_with_progdatap;

struct xob {
   typenum typenum_field;
   type_type my_class;
   lispob c__d0;
   lispob c__d1;
   lispob method_block;
   type_type type_of1;
   lispob value_of;
   lispob xlat_of1;
   lispob comment_of1;
   struct xob *c_pc;
   struct xob *next_pc;
   universal parent1;
   integer linenum;
   integer booles;
};

/* Pointer to above structure */

typedef struct xob *xobp;

struct obj_form {
   typenum typenum_field;
   type_type my_class;
   lispob obj_tag;
   lispob all_views;
   nobj super0;
   nobj super1;
   nobj super2;
   nobj super3;
};

/* Pointer to above structure */

typedef struct obj_form *obj_formp;

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

struct aa_subprog_rec {
   typenum typenum_field;
   pathname prog_path;
   integer prog_num;
   integer booles;
   universal aux;
};

/* Pointer to above structure */

typedef struct aa_subprog_rec *aa_subprog_recp;


/* Referenced functions */

boole f562509_is_set();
lispob copy_from_heap();
integer f106088_set_bit();
boole equal();
lispob out_val();
lispob f929848_switch_output_to();
lispob f894339_tprint();
lispob terpri();
lispob switch_out();
nobj f811410_change_view();
boole f843799_null();
lispob f498244_mk_new_osarray();
lispob f481445_alloc();
lispob f794013_integer_to_ob();
universal f942598_mk_universal();
nobj f15867_set_up_subclass();
obj_formp f116631_splice1();
shapep f735188_pp_g_user_frame_f();
boole f279791_null();
pathname f658470_pathname();
lispob copy();
s_t_r f1047998_to_string();
s_t_r f686094_times();
lispob f621666_from_universal_su();
shapep f429050_wlkupn();


/* Functions that are defined in this file */

boole f388965_is_jv();
lispob f362772_dset_is_jv();
id f867830_aa_write_position();
aa_xob_with_progdatap f195733_aa_get_xob_with_p();
aa_xob_with_progdatap f340434_aa_init_xob_progd();
integer f754847_aa_get_new_subpro();
integer f653128_aa_add_subprog();
integer f887897_aa_remove_subprog();
shapep f308726_aa_get_progdata_u();


/* Activation record template array declaration */

static struct template_array {
  typenum type;
  alen len;
  lispob template[9];
} template_array = {
  VECTOR_TYPE,
  9,
  { nil }
};


/* Init_rec declarations */

static struct module_name {
  typenum type;
  alen len;
  char letters[22];
} module_name = {
  STRING_TYPE,
  22,
  { 'a', 'b', 'b', '_', 'c', 'o', 'm', 'm', 'o', 'n', '_', 'a', 'a', '2', 'p', 'r', 'o', 'g', 'd', 'a', 't', 'a'}
};

static struct fcn_array {
  typenum type;
  alen len;
  fcnp fcn[9];
} fcn_array = {
  INTEGER_ARRAY_TYPE,
  9,
  {
   (fcnp)f388965_is_jv,
   (fcnp)f362772_dset_is_jv,
   (fcnp)f867830_aa_write_position,
   (fcnp)f195733_aa_get_xob_with_p,
   (fcnp)f340434_aa_init_xob_progd,
   (fcnp)f754847_aa_get_new_subpro,
   (fcnp)f653128_aa_add_subprog,
   (fcnp)f887897_aa_remove_subprog,
   (fcnp)f308726_aa_get_progdata_u
  }
};

static struct init_rec_struct local_init_rec = {
  INIT_REC_TYPE,
  1410290218,   /* Tue Sep 09 12:16:58 2014  */
  (lispob)&module_name,
  (lispob)&template_array,
  (lispob)&fcn_array
};

