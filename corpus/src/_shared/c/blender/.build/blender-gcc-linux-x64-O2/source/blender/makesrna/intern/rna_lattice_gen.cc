
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <limits>
#include <string.h>

#include <stddef.h>

#include <algorithm>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "DNA_node_types.h"
#include "BLI_fileops.hh"

#include "BLI_listbase.hh"

#include "BLI_path_utils.hh"

#include "BLI_rect.hh"

#include "BLI_string.hh"

#include "BLI_string_utf8.hh"

#include "BLI_utildefines.hh"

#include "BKE_context.hh"
#include "BKE_lib_id.hh"
#include "BKE_main.hh"
#include "BKE_report.hh"
#include "RNA_define.hh"
#include "RNA_types.hh"
#include "rna_internal.hh"

#include "RNA_prototypes.hh"

#include "rna_prototypes_gen.hh"

#include "rna_lattice.cc"
#include "rna_lattice_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_ID_rna_properties;
extern PropertyRNA &rna_ID_rna_type;
extern PropertyRNA &rna_ID_name;
extern PropertyRNA &rna_ID_name_full;
extern PropertyRNA &rna_ID_id_type;
extern PropertyRNA &rna_ID_session_uid;
extern PropertyRNA &rna_ID_is_evaluated;
extern PropertyRNA &rna_ID_original;
extern PropertyRNA &rna_ID_users;
extern PropertyRNA &rna_ID_use_fake_user;
extern PropertyRNA &rna_ID_use_extra_user;
extern PropertyRNA &rna_ID_is_embedded_data;
extern PropertyRNA &rna_ID_is_linked_packed;
extern PropertyRNA &rna_ID_is_missing;
extern PropertyRNA &rna_ID_is_runtime_data;
extern PropertyRNA &rna_ID_is_editable;
extern PropertyRNA &rna_ID_tag;
extern PropertyRNA &rna_ID_is_library_indirect;
extern PropertyRNA &rna_ID_library;
extern PropertyRNA &rna_ID_library_weak_reference;
extern PropertyRNA &rna_ID_asset_data;
extern PropertyRNA &rna_ID_override_library;
extern PropertyRNA &rna_ID_preview;

extern PropertyRNA &rna_Lattice_points_u;
extern PropertyRNA &rna_Lattice_points_v;
extern PropertyRNA &rna_Lattice_points_w;
extern PropertyRNA &rna_Lattice_interpolation_type_u;
extern PropertyRNA &rna_Lattice_interpolation_type_v;
extern PropertyRNA &rna_Lattice_interpolation_type_w;
extern PropertyRNA &rna_Lattice_use_outside;
extern PropertyRNA &rna_Lattice_vertex_group;
extern PropertyRNA &rna_Lattice_shape_keys;
extern PropertyRNA &rna_Lattice_points;
extern PropertyRNA &rna_Lattice_is_editmode;
extern PropertyRNA &rna_Lattice_animation_data;

extern FunctionRNA *rna_ID_bl_system_properties_get_func;
extern PropertyRNA &rna_ID_bl_system_properties_get_do_create;
extern PropertyRNA &rna_ID_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_ID_rename_func;
extern PropertyRNA &rna_ID_rename_name;
extern PropertyRNA &rna_ID_rename_mode;
extern PropertyRNA &rna_ID_rename_id_rename_result;

extern FunctionRNA *rna_ID_evaluated_get_func;
extern PropertyRNA &rna_ID_evaluated_get_depsgraph;
extern PropertyRNA &rna_ID_evaluated_get_id;

extern FunctionRNA *rna_ID_copy_func;
extern PropertyRNA &rna_ID_copy_id;

extern FunctionRNA *rna_ID_asset_mark_func;
extern FunctionRNA *rna_ID_asset_clear_func;
extern FunctionRNA *rna_ID_asset_generate_preview_func;
extern FunctionRNA *rna_ID_override_create_func;
extern PropertyRNA &rna_ID_override_create_id;
extern PropertyRNA &rna_ID_override_create_remap_local_usages;

extern FunctionRNA *rna_ID_override_hierarchy_create_func;
extern PropertyRNA &rna_ID_override_hierarchy_create_id;
extern PropertyRNA &rna_ID_override_hierarchy_create_scene;
extern PropertyRNA &rna_ID_override_hierarchy_create_view_layer;
extern PropertyRNA &rna_ID_override_hierarchy_create_reference;
extern PropertyRNA &rna_ID_override_hierarchy_create_do_fully_editable;

extern FunctionRNA *rna_ID_user_clear_func;
extern FunctionRNA *rna_ID_user_remap_func;
extern PropertyRNA &rna_ID_user_remap_new_id;

extern FunctionRNA *rna_ID_make_local_func;
extern PropertyRNA &rna_ID_make_local_clear_proxy;
extern PropertyRNA &rna_ID_make_local_clear_liboverride;
extern PropertyRNA &rna_ID_make_local_clear_asset_data;
extern PropertyRNA &rna_ID_make_local_id;

extern FunctionRNA *rna_ID_user_of_id_func;
extern PropertyRNA &rna_ID_user_of_id_id;
extern PropertyRNA &rna_ID_user_of_id_count;

extern FunctionRNA *rna_ID_animation_data_create_func;
extern PropertyRNA &rna_ID_animation_data_create_anim_data;

extern FunctionRNA *rna_ID_animation_data_clear_func;
extern FunctionRNA *rna_ID_update_tag_func;
extern PropertyRNA &rna_ID_update_tag_refresh;

extern FunctionRNA *rna_ID_preview_ensure_func;
extern PropertyRNA &rna_ID_preview_ensure_preview_image;


extern FunctionRNA *rna_Lattice_transform_func;
extern PropertyRNA &rna_Lattice_transform_matrix;
extern PropertyRNA &rna_Lattice_transform_shape_keys;

extern FunctionRNA *rna_Lattice_update_gpu_tag_func;
extern FunctionRNA *rna_Lattice_unit_test_compare_func;
extern PropertyRNA &rna_Lattice_unit_test_compare_lattice;
extern PropertyRNA &rna_Lattice_unit_test_compare_threshold;
extern PropertyRNA &rna_Lattice_unit_test_compare_result;



extern PropertyRNA &rna_LatticePoint_rna_properties;
extern PropertyRNA &rna_LatticePoint_rna_type;
extern PropertyRNA &rna_LatticePoint_select;
extern PropertyRNA &rna_LatticePoint_co;
extern PropertyRNA &rna_LatticePoint_co_deform;
extern PropertyRNA &rna_LatticePoint_weight_softbody;
extern PropertyRNA &rna_LatticePoint_groups;

int Lattice_points_u_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Lattice_points_u_get;
    return fn(ptr);
}

void Lattice_points_u_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Lattice_points_u_set;
    fn(ptr, value);
}

int Lattice_points_v_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Lattice_points_v_get;
    return fn(ptr);
}

void Lattice_points_v_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Lattice_points_v_set;
    fn(ptr, value);
}

int Lattice_points_w_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Lattice_points_w_get;
    return fn(ptr);
}

void Lattice_points_w_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Lattice_points_w_set;
    fn(ptr, value);
}

int Lattice_interpolation_type_u_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return (int)(data->typeu);
}

void Lattice_interpolation_type_u_set(PointerRNA *ptr, int value)
{
    Lattice *data = (Lattice *)(ptr->data);
    data->typeu = (std::remove_reference_t<decltype(data->typeu)>)value;
}

int Lattice_interpolation_type_v_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return (int)(data->typev);
}

void Lattice_interpolation_type_v_set(PointerRNA *ptr, int value)
{
    Lattice *data = (Lattice *)(ptr->data);
    data->typev = (std::remove_reference_t<decltype(data->typev)>)value;
}

int Lattice_interpolation_type_w_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return (int)(data->typew);
}

void Lattice_interpolation_type_w_set(PointerRNA *ptr, int value)
{
    Lattice *data = (Lattice *)(ptr->data);
    data->typew = (std::remove_reference_t<decltype(data->typew)>)value;
}

bool Lattice_use_outside_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void Lattice_use_outside_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Lattice_use_outside_set;
    fn(ptr, value);
}

void Lattice_vertex_group_get(PointerRNA *ptr, char *value)
{
    Lattice *data = (Lattice *)(ptr->data);
    BLI_assert(strlen(data->vgroup) < 64);
    strcpy(value, data->vgroup);
}

int Lattice_vertex_group_length(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return strlen(data->vgroup);
}

void Lattice_vertex_group_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Lattice_vg_name_set;
    fn(ptr, value);
}

PointerRNA Lattice_shape_keys_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Key, data->key);
}

static PointerRNA Lattice_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_LatticePoint, rna_iterator_array_get(iter));
}

void Lattice_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Lattice_points;

    PropCollectionBeginFunc fn = rna_Lattice_points_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Lattice_points_get(iter);
    }
}

void Lattice_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Lattice_points_get(iter);
    }
}

void Lattice_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Lattice_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Lattice_points_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = Lattice_points_get(&iter); }
    }

    Lattice_points_end(&iter);

    return found;
}

bool Lattice_is_editmode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Lattice_is_editmode_get;
    return fn(ptr);
}

PointerRNA Lattice_animation_data_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA LatticePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void LatticePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_LatticePoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = LatticePoint_rna_properties_get(iter);
    }
}

void LatticePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = LatticePoint_rna_properties_get(iter);
    }
}

void LatticePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool LatticePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA LatticePoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool LatticePoint_select_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return ((uint64_t(data->f1) & 1) != 0);
}

void LatticePoint_select_set(PointerRNA *ptr, bool value)
{
    BPoint *data = (BPoint *)(ptr->data);
    if (value) { data->f1 = std::remove_reference_t<decltype(data->f1)>(uint64_t(data->f1) | 1); }
    else { data->f1 = std::remove_reference_t<decltype(data->f1)>(uint64_t(data->f1) & ~uint64_t(1)); }
}

void LatticePoint_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_LatticePoint_co_get;
    fn(ptr, values);
}

void LatticePoint_co_deform_get(PointerRNA *ptr, float values[3])
{
    BPoint *data = (BPoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->vec)[i]);
    }
}

void LatticePoint_co_deform_set(PointerRNA *ptr, const float values[3])
{
    BPoint *data = (BPoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->vec)[i] = values[i];
    }
}

float LatticePoint_weight_softbody_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->weight);
}

void LatticePoint_weight_softbody_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0099999998f, 100.0f);
}

static PointerRNA LatticePoint_groups_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_VertexGroupElement, rna_iterator_array_get(iter));
}

void LatticePoint_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_LatticePoint_groups;

    PropCollectionBeginFunc fn = rna_LatticePoint_groups_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = LatticePoint_groups_get(iter);
    }
}

void LatticePoint_groups_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = LatticePoint_groups_get(iter);
    }
}

void LatticePoint_groups_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool LatticePoint_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    LatticePoint_groups_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = LatticePoint_groups_get(&iter); }
    }

    LatticePoint_groups_end(&iter);

    return found;
}

void Lattice_transform_func(Lattice *_self, float matrix[16], bool shape_keys)
{
	rna_Lattice_transform(_self, matrix, shape_keys);
}

static void Lattice_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Lattice *_self;
	const float *matrix;
	bool shape_keys;
	char *_data;
	
	_self = (Lattice *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	shape_keys = *((bool *)_data);
	
	rna_Lattice_transform(_self, matrix, shape_keys);
}

void Lattice_update_gpu_tag_func(Lattice *_self)
{
	rna_Lattice_update_gpu_tag(_self);
}

static void Lattice_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Lattice *_self;
	_self = (Lattice *)_ptr->data;
	
	rna_Lattice_update_gpu_tag(_self);
}

const char * Lattice_unit_test_compare_func(Lattice *_self, Lattice *lattice, float threshold)
{
	return rna_Lattice_unit_test_compare(_self, lattice, threshold);
}

static void Lattice_unit_test_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Lattice *_self;
	Lattice *lattice;
	float threshold;
	const char * result;
	char *_data, *_retdata;
	
	_self = (Lattice *)_ptr->data;
	_data = (char *)_parms->data;
	lattice = *((Lattice **)_data);
	_data += 8;
	threshold = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Lattice_unit_test_compare(_self, lattice, threshold);
	*((const char * *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

void rna_Lattice_transform(Lattice *_self, float matrix[16], bool shape_keys);
void rna_Lattice_update_gpu_tag(Lattice *_self);
const char * rna_Lattice_unit_test_compare(Lattice *_self, Lattice *lattice, float threshold);


/* Lattice */
static IntPropertyRNA rna_Lattice_points_u_;
PropertyRNA &rna_Lattice_points_u = reinterpret_cast<PropertyRNA &>(rna_Lattice_points_u_);

static IntPropertyRNA rna_Lattice_points_v_;
PropertyRNA &rna_Lattice_points_v = reinterpret_cast<PropertyRNA &>(rna_Lattice_points_v_);

static IntPropertyRNA rna_Lattice_points_w_;
PropertyRNA &rna_Lattice_points_w = reinterpret_cast<PropertyRNA &>(rna_Lattice_points_w_);

static EnumPropertyRNA rna_Lattice_interpolation_type_u_;
PropertyRNA &rna_Lattice_interpolation_type_u = reinterpret_cast<PropertyRNA &>(rna_Lattice_interpolation_type_u_);

static EnumPropertyRNA rna_Lattice_interpolation_type_v_;
PropertyRNA &rna_Lattice_interpolation_type_v = reinterpret_cast<PropertyRNA &>(rna_Lattice_interpolation_type_v_);

static EnumPropertyRNA rna_Lattice_interpolation_type_w_;
PropertyRNA &rna_Lattice_interpolation_type_w = reinterpret_cast<PropertyRNA &>(rna_Lattice_interpolation_type_w_);

static BoolPropertyRNA rna_Lattice_use_outside_;
PropertyRNA &rna_Lattice_use_outside = reinterpret_cast<PropertyRNA &>(rna_Lattice_use_outside_);

static StringPropertyRNA rna_Lattice_vertex_group_;
PropertyRNA &rna_Lattice_vertex_group = reinterpret_cast<PropertyRNA &>(rna_Lattice_vertex_group_);

static PointerPropertyRNA rna_Lattice_shape_keys_;
PropertyRNA &rna_Lattice_shape_keys = reinterpret_cast<PropertyRNA &>(rna_Lattice_shape_keys_);

static CollectionPropertyRNA rna_Lattice_points_;
PropertyRNA &rna_Lattice_points = reinterpret_cast<PropertyRNA &>(rna_Lattice_points_);

static BoolPropertyRNA rna_Lattice_is_editmode_;
PropertyRNA &rna_Lattice_is_editmode = reinterpret_cast<PropertyRNA &>(rna_Lattice_is_editmode_);

static PointerPropertyRNA rna_Lattice_animation_data_;
PropertyRNA &rna_Lattice_animation_data = reinterpret_cast<PropertyRNA &>(rna_Lattice_animation_data_);

static FloatPropertyRNA rna_Lattice_transform_matrix_;
PropertyRNA &rna_Lattice_transform_matrix = reinterpret_cast<PropertyRNA &>(rna_Lattice_transform_matrix_);

static BoolPropertyRNA rna_Lattice_transform_shape_keys_;
PropertyRNA &rna_Lattice_transform_shape_keys = reinterpret_cast<PropertyRNA &>(rna_Lattice_transform_shape_keys_);

FunctionRNA *rna_Lattice_transform_func;
FunctionRNA *rna_Lattice_update_gpu_tag_func;
static PointerPropertyRNA rna_Lattice_unit_test_compare_lattice_;
PropertyRNA &rna_Lattice_unit_test_compare_lattice = reinterpret_cast<PropertyRNA &>(rna_Lattice_unit_test_compare_lattice_);

static FloatPropertyRNA rna_Lattice_unit_test_compare_threshold_;
PropertyRNA &rna_Lattice_unit_test_compare_threshold = reinterpret_cast<PropertyRNA &>(rna_Lattice_unit_test_compare_threshold_);

static StringPropertyRNA rna_Lattice_unit_test_compare_result_;
PropertyRNA &rna_Lattice_unit_test_compare_result = reinterpret_cast<PropertyRNA &>(rna_Lattice_unit_test_compare_result_);

FunctionRNA *rna_Lattice_unit_test_compare_func;
StructRNA *RNA_Lattice;
void register_struct_Lattice(BlenderRNA &brna)
{
	rna_Lattice_points_u_ = {
		{&rna_Lattice_points_v, 	nullptr,
		-1, "points_u", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "U",
		"Points in U direction (cannot be changed when there are shape keys)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Lattice_update_size, 0, rna_Lattice_size_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Lattice_points_u_get, Lattice_points_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 64, 1, 64, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Lattice_points_v_ = {
		{&rna_Lattice_points_w, 	&rna_Lattice_points_u,
		-1, "points_v", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "V",
		"Points in V direction (cannot be changed when there are shape keys)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Lattice_update_size, 0, rna_Lattice_size_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Lattice_points_v_get, Lattice_points_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 64, 1, 64, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Lattice_points_w_ = {
		{&rna_Lattice_interpolation_type_u, 	&rna_Lattice_points_v,
		-1, "points_w", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "W",
		"Points in W direction (cannot be changed when there are shape keys)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Lattice_update_size, 0, rna_Lattice_size_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Lattice_points_w_get, Lattice_points_w_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 64, 1, 64, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Lattice_interpolation_type_u_items[5] = {
		{0, "KEY_LINEAR", 0, "Linear", ""	},
		{1, "KEY_CARDINAL", 0, "Cardinal", ""	},
		{3, "KEY_CATMULL_ROM", 0, "Catmull-Rom", ""	},
		{2, "KEY_BSPLINE", 0, "BSpline", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Lattice_interpolation_type_u_ = {
		{&rna_Lattice_interpolation_type_v, 	&rna_Lattice_points_w,
		-1, "interpolation_type_u", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interpolation Type U",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Lattice_update_data_editlatt, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Lattice, typeu), RawPropertyType(2), nullptr},
		Lattice_interpolation_type_u_get, Lattice_interpolation_type_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Lattice_interpolation_type_u_items, 4, 2
	};

	static const EnumPropertyItem rna_Lattice_interpolation_type_v_items[5] = {
		{0, "KEY_LINEAR", 0, "Linear", ""	},
		{1, "KEY_CARDINAL", 0, "Cardinal", ""	},
		{3, "KEY_CATMULL_ROM", 0, "Catmull-Rom", ""	},
		{2, "KEY_BSPLINE", 0, "BSpline", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Lattice_interpolation_type_v_ = {
		{&rna_Lattice_interpolation_type_w, 	&rna_Lattice_interpolation_type_u,
		-1, "interpolation_type_v", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interpolation Type V",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Lattice_update_data_editlatt, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Lattice, typev), RawPropertyType(2), nullptr},
		Lattice_interpolation_type_v_get, Lattice_interpolation_type_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Lattice_interpolation_type_v_items, 4, 2
	};

	static const EnumPropertyItem rna_Lattice_interpolation_type_w_items[5] = {
		{0, "KEY_LINEAR", 0, "Linear", ""	},
		{1, "KEY_CARDINAL", 0, "Cardinal", ""	},
		{3, "KEY_CATMULL_ROM", 0, "Catmull-Rom", ""	},
		{2, "KEY_BSPLINE", 0, "BSpline", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Lattice_interpolation_type_w_ = {
		{&rna_Lattice_use_outside, 	&rna_Lattice_interpolation_type_v,
		-1, "interpolation_type_w", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interpolation Type W",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Lattice_update_data_editlatt, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Lattice, typew), RawPropertyType(2), nullptr},
		Lattice_interpolation_type_w_get, Lattice_interpolation_type_w_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Lattice_interpolation_type_w_items, 4, 2
	};

	rna_Lattice_use_outside_ = {
		{&rna_Lattice_vertex_group, 	&rna_Lattice_interpolation_type_w,
		-1, "use_outside", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Outside",
		"Only display and take into account the outer vertices",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Lattice_update_data_editlatt, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Lattice_use_outside_get, Lattice_use_outside_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Lattice_vertex_group_ = {
		{&rna_Lattice_shape_keys, 	&rna_Lattice_use_outside,
		-1, "vertex_group", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group",
		"Vertex group to apply the influence of the lattice",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Lattice_update_data_editlatt, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Lattice_vertex_group_get, Lattice_vertex_group_length, Lattice_vertex_group_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Lattice_shape_keys_ = {
		{&rna_Lattice_points, 	&rna_Lattice_vertex_group,
		-1, "shape_keys", 8388672, 1, 0, 32, 0, PropertyPathTemplateType(0), "Shape Keys",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Lattice_shape_keys_get, nullptr, nullptr, nullptr,RNA_Key
	};

	rna_Lattice_points_ = {
		{&rna_Lattice_is_editmode, 	&rna_Lattice_shape_keys,
		-1, "points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Points",
		"Points of the lattice",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Lattice_points_begin, Lattice_points_next, Lattice_points_end, Lattice_points_get, nullptr, Lattice_points_lookup_int, nullptr, nullptr, RNA_LatticePoint
	};

	rna_Lattice_is_editmode_ = {
		{&rna_Lattice_animation_data, 	&rna_Lattice_points,
		-1, "is_editmode", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Editmode",
		"True when used in editmode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Lattice_is_editmode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Lattice_animation_data_ = {
		{nullptr, 	&rna_Lattice_is_editmode,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Lattice_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_Lattice;
	srna->cont.properties = {&rna_Lattice_points_u, &rna_Lattice_animation_data};
	srna->identifier = "Lattice";
	srna->flag = 519;
	srna->name = "Lattice";
	srna->description = "Lattice data-block defining a grid for deforming other objects";
	srna->translation_context = "*";
	srna->icon = 185;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	static float rna_Lattice_transform_matrix_default[16] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_Lattice_transform_matrix_ = {
		{&rna_Lattice_transform_shape_keys, 	nullptr,
		-1, "matrix", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Lattice_transform_matrix_default
	};
	rna_Lattice_transform_shape_keys_ = {
		{nullptr, 	&rna_Lattice_transform_matrix,
		-1, "shape_keys", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Transform Shape Keys",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Lattice_transform_matrix, &rna_Lattice_transform_shape_keys};
		func->identifier = "transform";
		func->description = "Transform lattice by a matrix";
		func->call = Lattice_transform_call;
		rna_Lattice_transform_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update_gpu_tag";
		func->description = "update_gpu_tag";
		func->call = Lattice_update_gpu_tag_call;
		rna_Lattice_update_gpu_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Lattice_unit_test_compare_lattice_ = {
		{&rna_Lattice_unit_test_compare_threshold, 	nullptr,
		-1, "lattice", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Lattice to compare to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Lattice
	};
	rna_Lattice_unit_test_compare_threshold_ = {
		{&rna_Lattice_unit_test_compare_result, 	&rna_Lattice_unit_test_compare_lattice,
		-1, "threshold", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Threshold",
		"Comparison tolerance threshold",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0000071526f, nullptr
	};
	rna_Lattice_unit_test_compare_result_ = {
		{nullptr, 	&rna_Lattice_unit_test_compare_threshold,
		-1, "result", 262145, 0, 2, 0, 0, PropertyPathTemplateType(0), "Return value",
		"String description of result of comparison",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "nothing"
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Lattice_unit_test_compare_lattice, &rna_Lattice_unit_test_compare_result};
		func->identifier = "unit_test_compare";
		func->description = "unit_test_compare";
		func->call = Lattice_unit_test_compare_call;
		func->c_ret = &rna_Lattice_unit_test_compare_result;
		rna_Lattice_unit_test_compare_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* LatticePoint */
static CollectionPropertyRNA rna_LatticePoint_rna_properties_;
PropertyRNA &rna_LatticePoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_LatticePoint_rna_properties_);

static PointerPropertyRNA rna_LatticePoint_rna_type_;
PropertyRNA &rna_LatticePoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_LatticePoint_rna_type_);

static BoolPropertyRNA rna_LatticePoint_select_;
PropertyRNA &rna_LatticePoint_select = reinterpret_cast<PropertyRNA &>(rna_LatticePoint_select_);

static FloatPropertyRNA rna_LatticePoint_co_;
PropertyRNA &rna_LatticePoint_co = reinterpret_cast<PropertyRNA &>(rna_LatticePoint_co_);

static FloatPropertyRNA rna_LatticePoint_co_deform_;
PropertyRNA &rna_LatticePoint_co_deform = reinterpret_cast<PropertyRNA &>(rna_LatticePoint_co_deform_);

static FloatPropertyRNA rna_LatticePoint_weight_softbody_;
PropertyRNA &rna_LatticePoint_weight_softbody = reinterpret_cast<PropertyRNA &>(rna_LatticePoint_weight_softbody_);

static CollectionPropertyRNA rna_LatticePoint_groups_;
PropertyRNA &rna_LatticePoint_groups = reinterpret_cast<PropertyRNA &>(rna_LatticePoint_groups_);

StructRNA *RNA_LatticePoint;
void register_struct_LatticePoint(BlenderRNA &brna)
{
	rna_LatticePoint_rna_properties_ = {
		{&rna_LatticePoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LatticePoint_rna_properties_begin, LatticePoint_rna_properties_next, LatticePoint_rna_properties_end, LatticePoint_rna_properties_get, nullptr, nullptr, LatticePoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_LatticePoint_rna_type_ = {
		{&rna_LatticePoint_select, 	&rna_LatticePoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LatticePoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_LatticePoint_select_ = {
		{&rna_LatticePoint_co, 	&rna_LatticePoint_rna_type,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Point selected",
		"Selection status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LatticePoint_select_get, LatticePoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_LatticePoint_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_LatticePoint_co_ = {
		{&rna_LatticePoint_co_deform, 	&rna_LatticePoint_select,
		-1, "co", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Location",
		"Original undeformed location used to calculate the strength of the deform effect (edit/animate the Deformed Location instead)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, LatticePoint_co_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_LatticePoint_co_default
	};

	static float rna_LatticePoint_co_deform_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_LatticePoint_co_deform_ = {
		{&rna_LatticePoint_weight_softbody, 	&rna_LatticePoint_co,
		-1, "co_deform", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Deformed Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Lattice_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BPoint, vec), RawPropertyType(5), nullptr},
		nullptr, nullptr, LatticePoint_co_deform_get, LatticePoint_co_deform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_LatticePoint_co_deform_default
	};

	rna_LatticePoint_weight_softbody_ = {
		{&rna_LatticePoint_groups, 	&rna_LatticePoint_co_deform,
		-1, "weight_softbody", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Softbody goal weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Lattice_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BPoint, weight), RawPropertyType(5), nullptr},
		LatticePoint_weight_softbody_get, LatticePoint_weight_softbody_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LatticePoint_groups_ = {
		{nullptr, 	&rna_LatticePoint_weight_softbody,
		-1, "groups", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Groups",
		"Weights for the vertex groups this point is member of",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LatticePoint_groups_begin, LatticePoint_groups_next, LatticePoint_groups_end, LatticePoint_groups_get, nullptr, LatticePoint_groups_lookup_int, nullptr, nullptr, RNA_VertexGroupElement
	};

	StructRNA *srna = RNA_LatticePoint;
	srna->cont.properties = {&rna_LatticePoint_rna_properties, &rna_LatticePoint_groups};
	srna->identifier = "LatticePoint";
	srna->flag = 516;
	srna->name = "LatticePoint";
	srna->description = "Point in the lattice grid";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_LatticePoint_rna_properties;
	srna->path = rna_LatticePoint_path;
};


}  // namespace blender
