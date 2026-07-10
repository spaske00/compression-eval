
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

#include "rna_mask.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_MaskParent_rna_properties;
extern PropertyRNA &rna_MaskParent_rna_type;
extern PropertyRNA &rna_MaskParent_id;
extern PropertyRNA &rna_MaskParent_id_type;
extern PropertyRNA &rna_MaskParent_type;
extern PropertyRNA &rna_MaskParent_parent;
extern PropertyRNA &rna_MaskParent_sub_parent;


extern PropertyRNA &rna_MaskSplinePointUW_rna_properties;
extern PropertyRNA &rna_MaskSplinePointUW_rna_type;
extern PropertyRNA &rna_MaskSplinePointUW_u;
extern PropertyRNA &rna_MaskSplinePointUW_weight;
extern PropertyRNA &rna_MaskSplinePointUW_select;


extern PropertyRNA &rna_MaskSplinePoint_rna_properties;
extern PropertyRNA &rna_MaskSplinePoint_rna_type;
extern PropertyRNA &rna_MaskSplinePoint_handle_left;
extern PropertyRNA &rna_MaskSplinePoint_co;
extern PropertyRNA &rna_MaskSplinePoint_handle_right;
extern PropertyRNA &rna_MaskSplinePoint_handle_type;
extern PropertyRNA &rna_MaskSplinePoint_handle_left_type;
extern PropertyRNA &rna_MaskSplinePoint_handle_right_type;
extern PropertyRNA &rna_MaskSplinePoint_weight;
extern PropertyRNA &rna_MaskSplinePoint_select;
extern PropertyRNA &rna_MaskSplinePoint_select_left_handle;
extern PropertyRNA &rna_MaskSplinePoint_select_control_point;
extern PropertyRNA &rna_MaskSplinePoint_select_right_handle;
extern PropertyRNA &rna_MaskSplinePoint_select_single_handle;
extern PropertyRNA &rna_MaskSplinePoint_parent;
extern PropertyRNA &rna_MaskSplinePoint_feather_points;


extern PropertyRNA &rna_MaskSpline_rna_properties;
extern PropertyRNA &rna_MaskSpline_rna_type;
extern PropertyRNA &rna_MaskSpline_offset_mode;
extern PropertyRNA &rna_MaskSpline_weight_interpolation;
extern PropertyRNA &rna_MaskSpline_use_cyclic;
extern PropertyRNA &rna_MaskSpline_use_fill;
extern PropertyRNA &rna_MaskSpline_use_self_intersection_check;
extern PropertyRNA &rna_MaskSpline_points;


extern PropertyRNA &rna_MaskSplines_rna_properties;
extern PropertyRNA &rna_MaskSplines_rna_type;
extern PropertyRNA &rna_MaskSplines_active;
extern PropertyRNA &rna_MaskSplines_active_point;

extern FunctionRNA *rna_MaskSplines_new_func;
extern PropertyRNA &rna_MaskSplines_new_spline;

extern FunctionRNA *rna_MaskSplines_remove_func;
extern PropertyRNA &rna_MaskSplines_remove_spline;



extern PropertyRNA &rna_MaskSplinePoints_rna_properties;
extern PropertyRNA &rna_MaskSplinePoints_rna_type;

extern FunctionRNA *rna_MaskSplinePoints_add_func;
extern PropertyRNA &rna_MaskSplinePoints_add_count;

extern FunctionRNA *rna_MaskSplinePoints_remove_func;
extern PropertyRNA &rna_MaskSplinePoints_remove_point;



extern PropertyRNA &rna_MaskLayer_rna_properties;
extern PropertyRNA &rna_MaskLayer_rna_type;
extern PropertyRNA &rna_MaskLayer_name;
extern PropertyRNA &rna_MaskLayer_splines;
extern PropertyRNA &rna_MaskLayer_hide;
extern PropertyRNA &rna_MaskLayer_hide_select;
extern PropertyRNA &rna_MaskLayer_hide_render;
extern PropertyRNA &rna_MaskLayer_select;
extern PropertyRNA &rna_MaskLayer_alpha;
extern PropertyRNA &rna_MaskLayer_blend;
extern PropertyRNA &rna_MaskLayer_invert;
extern PropertyRNA &rna_MaskLayer_falloff;
extern PropertyRNA &rna_MaskLayer_fill_solver;
extern PropertyRNA &rna_MaskLayer_use_fill_holes;
extern PropertyRNA &rna_MaskLayer_use_fill_overlap;


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

extern PropertyRNA &rna_Mask_layers;
extern PropertyRNA &rna_Mask_active_layer_index;
extern PropertyRNA &rna_Mask_frame_start;
extern PropertyRNA &rna_Mask_frame_end;
extern PropertyRNA &rna_Mask_animation_data;

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



extern PropertyRNA &rna_MaskLayers_rna_properties;
extern PropertyRNA &rna_MaskLayers_rna_type;
extern PropertyRNA &rna_MaskLayers_active;

extern FunctionRNA *rna_MaskLayers_new_func;
extern PropertyRNA &rna_MaskLayers_new_name;
extern PropertyRNA &rna_MaskLayers_new_layer;

extern FunctionRNA *rna_MaskLayers_remove_func;
extern PropertyRNA &rna_MaskLayers_remove_layer;

extern FunctionRNA *rna_MaskLayers_clear_func;

static PointerRNA MaskParent_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaskParent_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskParent_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskParent_rna_properties_get(iter);
    }
}

void MaskParent_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskParent_rna_properties_get(iter);
    }
}

void MaskParent_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaskParent_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaskParent_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MaskParent_id_get(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ID, data->id);
}

void MaskParent_id_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->id = value.data;
}

int MaskParent_id_type_get(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return (int)(data->id_type);
}

void MaskParent_id_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_MaskParent_id_type_set;
    fn(ptr, value);
}

int MaskParent_type_get(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return (int)(data->type);
}

void MaskParent_type_set(PointerRNA *ptr, int value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

void MaskParent_parent_get(PointerRNA *ptr, char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_assert(strlen(data->parent) < 256);
    strcpy(value, data->parent);
}

int MaskParent_parent_length(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return strlen(data->parent);
}

void MaskParent_parent_set(PointerRNA *ptr, const char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_strncpy_utf8(data->parent, value, 256);
}

void MaskParent_sub_parent_get(PointerRNA *ptr, char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_assert(strlen(data->sub_parent) < 256);
    strcpy(value, data->sub_parent);
}

int MaskParent_sub_parent_length(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return strlen(data->sub_parent);
}

void MaskParent_sub_parent_set(PointerRNA *ptr, const char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_strncpy_utf8(data->sub_parent, value, 256);
}

static PointerRNA MaskSplinePointUW_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaskSplinePointUW_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskSplinePointUW_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePointUW_rna_properties_get(iter);
    }
}

void MaskSplinePointUW_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePointUW_rna_properties_get(iter);
    }
}

void MaskSplinePointUW_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaskSplinePointUW_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaskSplinePointUW_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float MaskSplinePointUW_u_get(PointerRNA *ptr)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    return (float)(data->u);
}

void MaskSplinePointUW_u_set(PointerRNA *ptr, float value)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    data->u = (std::remove_reference_t<decltype(data->u)>)std::clamp(value, 0.0f, 1.0f);
}

float MaskSplinePointUW_weight_get(PointerRNA *ptr)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    return (float)(data->w);
}

void MaskSplinePointUW_weight_set(PointerRNA *ptr, float value)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    data->w = (std::remove_reference_t<decltype(data->w)>)std::clamp(value, 0.0f, 1.0f);
}

bool MaskSplinePointUW_select_get(PointerRNA *ptr)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MaskSplinePointUW_select_set(PointerRNA *ptr, bool value)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

static PointerRNA MaskSplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaskSplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskSplinePoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_rna_properties_get(iter);
    }
}

void MaskSplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_rna_properties_get(iter);
    }
}

void MaskSplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaskSplinePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaskSplinePoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MaskSplinePoint_handle_left_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_MaskSplinePoint_handle1_get;
    fn(ptr, values);
}

void MaskSplinePoint_handle_left_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_MaskSplinePoint_handle1_set;
    fn(ptr, values);
}

void MaskSplinePoint_co_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_MaskSplinePoint_ctrlpoint_get;
    fn(ptr, values);
}

void MaskSplinePoint_co_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_MaskSplinePoint_ctrlpoint_set;
    fn(ptr, values);
}

void MaskSplinePoint_handle_right_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_MaskSplinePoint_handle2_get;
    fn(ptr, values);
}

void MaskSplinePoint_handle_right_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_MaskSplinePoint_handle2_set;
    fn(ptr, values);
}

int MaskSplinePoint_handle_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_MaskSplinePoint_handle_type_get;
    return fn(ptr);
}

void MaskSplinePoint_handle_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_MaskSplinePoint_handle_type_set;
    fn(ptr, value);
}

int MaskSplinePoint_handle_left_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_MaskSplinePoint_handle_left_type_get;
    return fn(ptr);
}

void MaskSplinePoint_handle_left_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_MaskSplinePoint_handle_left_type_set;
    fn(ptr, value);
}

int MaskSplinePoint_handle_right_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_MaskSplinePoint_handle_right_type_get;
    return fn(ptr);
}

void MaskSplinePoint_handle_right_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_MaskSplinePoint_handle_right_type_set;
    fn(ptr, value);
}

float MaskSplinePoint_weight_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return (float)(data->bezt.weight);
}

void MaskSplinePoint_weight_set(PointerRNA *ptr, float value)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    data->bezt.weight = (std::remove_reference_t<decltype(data->bezt.weight)>)std::clamp(value, 0.0f, 1.0f);
}

bool MaskSplinePoint_select_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return ((uint64_t(data->bezt.f2) & 1) != 0);
}

void MaskSplinePoint_select_set(PointerRNA *ptr, bool value)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    if (value) { data->bezt.f2 = std::remove_reference_t<decltype(data->bezt.f2)>(uint64_t(data->bezt.f2) | 1); }
    else { data->bezt.f2 = std::remove_reference_t<decltype(data->bezt.f2)>(uint64_t(data->bezt.f2) & ~uint64_t(1)); }
}

bool MaskSplinePoint_select_left_handle_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return ((uint64_t(data->bezt.f1) & 1) != 0);
}

void MaskSplinePoint_select_left_handle_set(PointerRNA *ptr, bool value)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    if (value) { data->bezt.f1 = std::remove_reference_t<decltype(data->bezt.f1)>(uint64_t(data->bezt.f1) | 1); }
    else { data->bezt.f1 = std::remove_reference_t<decltype(data->bezt.f1)>(uint64_t(data->bezt.f1) & ~uint64_t(1)); }
}

bool MaskSplinePoint_select_control_point_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return ((uint64_t(data->bezt.f2) & 1) != 0);
}

void MaskSplinePoint_select_control_point_set(PointerRNA *ptr, bool value)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    if (value) { data->bezt.f2 = std::remove_reference_t<decltype(data->bezt.f2)>(uint64_t(data->bezt.f2) | 1); }
    else { data->bezt.f2 = std::remove_reference_t<decltype(data->bezt.f2)>(uint64_t(data->bezt.f2) & ~uint64_t(1)); }
}

bool MaskSplinePoint_select_right_handle_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return ((uint64_t(data->bezt.f3) & 1) != 0);
}

void MaskSplinePoint_select_right_handle_set(PointerRNA *ptr, bool value)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    if (value) { data->bezt.f3 = std::remove_reference_t<decltype(data->bezt.f3)>(uint64_t(data->bezt.f3) | 1); }
    else { data->bezt.f3 = std::remove_reference_t<decltype(data->bezt.f3)>(uint64_t(data->bezt.f3) & ~uint64_t(1)); }
}

bool MaskSplinePoint_select_single_handle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MaskSplinePoint_handle_single_select_get;
    return fn(ptr);
}

void MaskSplinePoint_select_single_handle_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MaskSplinePoint_handle_single_select_set;
    fn(ptr, value);
}

PointerRNA MaskSplinePoint_parent_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MaskParent, &data->parent);
}

int MaskSplinePoint_feather_points_length(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return (data->uw == nullptr) ? 0 : data->tot_uw;
}

static PointerRNA MaskSplinePoint_feather_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MaskSplinePointUW, rna_iterator_array_get(iter));
}

void MaskSplinePoint_feather_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskSplinePoint_feather_points;

    rna_iterator_array_begin(iter, ptr, data->uw, sizeof(data->uw[0]), data->tot_uw, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_feather_points_get(iter);
    }
}

void MaskSplinePoint_feather_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_feather_points_get(iter);
    }
}

void MaskSplinePoint_feather_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MaskSplinePoint_feather_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MaskSplinePoint_feather_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = MaskSplinePoint_feather_points_get(&iter); }
    }

    MaskSplinePoint_feather_points_end(&iter);

    return found;
}

static PointerRNA MaskSpline_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaskSpline_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskSpline_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSpline_rna_properties_get(iter);
    }
}

void MaskSpline_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskSpline_rna_properties_get(iter);
    }
}

void MaskSpline_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaskSpline_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaskSpline_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MaskSpline_offset_mode_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (int)(data->offset_mode);
}

void MaskSpline_offset_mode_set(PointerRNA *ptr, int value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    data->offset_mode = (std::remove_reference_t<decltype(data->offset_mode)>)value;
}

int MaskSpline_weight_interpolation_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (int)(data->weight_interp);
}

void MaskSpline_weight_interpolation_set(PointerRNA *ptr, int value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    data->weight_interp = (std::remove_reference_t<decltype(data->weight_interp)>)value;
}

bool MaskSpline_use_cyclic_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void MaskSpline_use_cyclic_set(PointerRNA *ptr, bool value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool MaskSpline_use_fill_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return !((uint64_t(data->flag) & 4) != 0);
}

void MaskSpline_use_fill_set(PointerRNA *ptr, bool value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool MaskSpline_use_self_intersection_check_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void MaskSpline_use_self_intersection_check_set(PointerRNA *ptr, bool value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

int MaskSpline_points_length(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (data->points == nullptr) ? 0 : data->tot_point;
}

static PointerRNA MaskSpline_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MaskSplinePoint, rna_iterator_array_get(iter));
}

void MaskSpline_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskSpline_points;

    rna_iterator_array_begin(iter, ptr, data->points, sizeof(data->points[0]), data->tot_point, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MaskSpline_points_get(iter);
    }
}

void MaskSpline_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskSpline_points_get(iter);
    }
}

void MaskSpline_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MaskSpline_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MaskSpline_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = MaskSpline_points_get(&iter); }
    }

    MaskSpline_points_end(&iter);

    return found;
}

static PointerRNA MaskSplines_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaskSplines_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskSplines_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplines_rna_properties_get(iter);
    }
}

void MaskSplines_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskSplines_rna_properties_get(iter);
    }
}

void MaskSplines_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaskSplines_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaskSplines_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MaskSplines_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_MaskLayer_active_spline_get;
    return fn(ptr);
}

void MaskSplines_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_MaskLayer_active_spline_set;
    fn(ptr, value, reports);
}

PointerRNA MaskSplines_active_point_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_MaskLayer_active_spline_point_get;
    return fn(ptr);
}

void MaskSplines_active_point_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_MaskLayer_active_spline_point_set;
    fn(ptr, value, reports);
}

static PointerRNA MaskSplinePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaskSplinePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskSplinePoints_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePoints_rna_properties_get(iter);
    }
}

void MaskSplinePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePoints_rna_properties_get(iter);
    }
}

void MaskSplinePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaskSplinePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaskSplinePoints_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA MaskLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaskLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskLayer_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskLayer_rna_properties_get(iter);
    }
}

void MaskLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskLayer_rna_properties_get(iter);
    }
}

void MaskLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaskLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaskLayer_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MaskLayer_name_get(PointerRNA *ptr, char *value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    BLI_assert(strlen(data->name) < 256);
    strcpy(value, data->name);
}

int MaskLayer_name_length(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return strlen(data->name);
}

void MaskLayer_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_MaskLayer_name_set;
    fn(ptr, value);
}

static PointerRNA MaskLayer_splines_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MaskSpline, rna_iterator_listbase_get(iter));
}

void MaskLayer_splines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskLayer_splines;

    PropCollectionBeginFunc fn = rna_MaskLayer_splines_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskLayer_splines_get(iter);
    }
}

void MaskLayer_splines_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskLayer_splines_get(iter);
    }
}

void MaskLayer_splines_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaskLayer_splines_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MaskLayer_splines_begin(&iter, ptr);

    if (iter.valid) {
        ListBaseIterator *internal = &iter.internal.listbase;
        if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_listbase_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            while (index-- > 0 && internal->link) {
                internal->link = internal->link->next;
            }
            found = (index == -1 && internal->link);
        }
        if (found) { *r_ptr = MaskLayer_splines_get(&iter); }
    }

    MaskLayer_splines_end(&iter);

    return found;
}

bool MaskLayer_hide_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 1) != 0);
}

void MaskLayer_hide_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 1); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(1)); }
}

bool MaskLayer_hide_select_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 2) != 0);
}

void MaskLayer_hide_select_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 2); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(2)); }
}

bool MaskLayer_hide_render_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 4) != 0);
}

void MaskLayer_hide_render_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 4); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(4)); }
}

bool MaskLayer_select_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void MaskLayer_select_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

float MaskLayer_alpha_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (float)(data->alpha);
}

void MaskLayer_alpha_set(PointerRNA *ptr, float value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)value;
}

int MaskLayer_blend_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (int)(data->blend);
}

void MaskLayer_blend_set(PointerRNA *ptr, int value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    data->blend = (std::remove_reference_t<decltype(data->blend)>)value;
}

bool MaskLayer_invert_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return ((uint64_t(data->blend_flag) & 1) != 0);
}

void MaskLayer_invert_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) | 1); }
    else { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) & ~uint64_t(1)); }
}

int MaskLayer_falloff_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (int)(data->falloff);
}

void MaskLayer_falloff_set(PointerRNA *ptr, int value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    data->falloff = (std::remove_reference_t<decltype(data->falloff)>)value;
}

int MaskLayer_fill_solver_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (int)(data->fill_solver);
}

void MaskLayer_fill_solver_set(PointerRNA *ptr, int value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    data->fill_solver = (std::remove_reference_t<decltype(data->fill_solver)>)value;
}

bool MaskLayer_use_fill_holes_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return !((uint64_t(data->flag) & 64) != 0);
}

void MaskLayer_use_fill_holes_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool MaskLayer_use_fill_overlap_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void MaskLayer_use_fill_overlap_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

static PointerRNA Mask_layers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MaskLayer, rna_iterator_listbase_get(iter));
}

void Mask_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mask_layers;

    PropCollectionBeginFunc fn = rna_Mask_layers_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mask_layers_get(iter);
    }
}

void Mask_layers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mask_layers_get(iter);
    }
}

void Mask_layers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Mask_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Mask_layers_begin(&iter, ptr);

    if (iter.valid) {
        ListBaseIterator *internal = &iter.internal.listbase;
        if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_listbase_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            while (index-- > 0 && internal->link) {
                internal->link = internal->link->next;
            }
            found = (index == -1 && internal->link);
        }
        if (found) { *r_ptr = Mask_layers_get(&iter); }
    }

    Mask_layers_end(&iter);

    return found;
}

int Mask_active_layer_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mask_layer_active_index_get;
    return fn(ptr);
}

void Mask_active_layer_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mask_layer_active_index_set;
    fn(ptr, value);
}

int Mask_frame_start_get(PointerRNA *ptr)
{
    Mask *data = (Mask *)(ptr->data);
    return (int)(data->sfra);
}

void Mask_frame_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mask_start_frame_set;
    fn(ptr, value);
}

int Mask_frame_end_get(PointerRNA *ptr)
{
    Mask *data = (Mask *)(ptr->data);
    return (int)(data->efra);
}

void Mask_frame_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mask_end_frame_set;
    fn(ptr, value);
}

PointerRNA Mask_animation_data_get(PointerRNA *ptr)
{
    Mask *data = (Mask *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA MaskLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaskLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaskLayers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskLayers_rna_properties_get(iter);
    }
}

void MaskLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaskLayers_rna_properties_get(iter);
    }
}

void MaskLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaskLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaskLayers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MaskLayers_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Mask_layer_active_get;
    return fn(ptr);
}

void MaskLayers_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Mask_layer_active_set;
    fn(ptr, value, reports);
}





MaskSpline *MaskSplines_new_func(ID *_selfid, MaskLayer *_self)
{
	return rna_MaskLayer_spline_new(_selfid, _self);
}

static void MaskSplines_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	MaskLayer *_self;
	MaskSpline *spline;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (MaskLayer *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	spline = rna_MaskLayer_spline_new(_selfid, _self);
	*((MaskSpline **)_retdata) = spline;
}

void MaskSplines_remove_func(ID *_selfid, MaskLayer *_self, ReportList *reports, PointerRNA *spline)
{
	rna_MaskLayer_spline_remove(_selfid, _self, reports, spline);
}

static void MaskSplines_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	MaskLayer *_self;
	PointerRNA *spline;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (MaskLayer *)_ptr->data;
	_data = (char *)_parms->data;
	spline = *((PointerRNA **)_data);
	
	rna_MaskLayer_spline_remove(_selfid, _self, reports, spline);
}

/* Repeated prototypes to detect errors */

MaskSpline *rna_MaskLayer_spline_new(ID *_selfid, MaskLayer *_self);
void rna_MaskLayer_spline_remove(ID *_selfid, MaskLayer *_self, ReportList *reports, PointerRNA *spline);

void MaskSplinePoints_add_func(ID *_selfid, MaskSpline *_self, int count)
{
	rna_MaskSpline_points_add(_selfid, _self, count);
}

static void MaskSplinePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	MaskSpline *_self;
	int count;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (MaskSpline *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_MaskSpline_points_add(_selfid, _self, count);
}

void MaskSplinePoints_remove_func(ID *_selfid, MaskSpline *_self, ReportList *reports, PointerRNA *point)
{
	rna_MaskSpline_point_remove(_selfid, _self, reports, point);
}

static void MaskSplinePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	MaskSpline *_self;
	PointerRNA *point;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (MaskSpline *)_ptr->data;
	_data = (char *)_parms->data;
	point = *((PointerRNA **)_data);
	
	rna_MaskSpline_point_remove(_selfid, _self, reports, point);
}

/* Repeated prototypes to detect errors */

void rna_MaskSpline_points_add(ID *_selfid, MaskSpline *_self, int count);
void rna_MaskSpline_point_remove(ID *_selfid, MaskSpline *_self, ReportList *reports, PointerRNA *point);



MaskLayer *MaskLayers_new_func(Mask *_self, const char * name)
{
	return rna_Mask_layers_new(_self, name);
}

static void MaskLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mask *_self;
	const char * name;
	MaskLayer *layer;
	char *_data, *_retdata;
	
	_self = (Mask *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mask_layers_new(_self, name);
	*((MaskLayer **)_retdata) = layer;
}

void MaskLayers_remove_func(Mask *_self, ReportList *reports, PointerRNA *layer)
{
	rna_Mask_layers_remove(_self, reports, layer);
}

static void MaskLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mask *_self;
	PointerRNA *layer;
	char *_data;
	
	_self = (Mask *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((PointerRNA **)_data);
	
	rna_Mask_layers_remove(_self, reports, layer);
}

void MaskLayers_clear_func(Mask *_self)
{
	rna_Mask_layers_clear(_self);
}

static void MaskLayers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mask *_self;
	_self = (Mask *)_ptr->data;
	
	rna_Mask_layers_clear(_self);
}

/* Repeated prototypes to detect errors */

MaskLayer *rna_Mask_layers_new(Mask *_self, const char * name);
void rna_Mask_layers_remove(Mask *_self, ReportList *reports, PointerRNA *layer);
void rna_Mask_layers_clear(Mask *_self);

/* Mask Parent */
static CollectionPropertyRNA rna_MaskParent_rna_properties_;
PropertyRNA &rna_MaskParent_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaskParent_rna_properties_);

static PointerPropertyRNA rna_MaskParent_rna_type_;
PropertyRNA &rna_MaskParent_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaskParent_rna_type_);

static PointerPropertyRNA rna_MaskParent_id_;
PropertyRNA &rna_MaskParent_id = reinterpret_cast<PropertyRNA &>(rna_MaskParent_id_);

static EnumPropertyRNA rna_MaskParent_id_type_;
PropertyRNA &rna_MaskParent_id_type = reinterpret_cast<PropertyRNA &>(rna_MaskParent_id_type_);

static EnumPropertyRNA rna_MaskParent_type_;
PropertyRNA &rna_MaskParent_type = reinterpret_cast<PropertyRNA &>(rna_MaskParent_type_);

static StringPropertyRNA rna_MaskParent_parent_;
PropertyRNA &rna_MaskParent_parent = reinterpret_cast<PropertyRNA &>(rna_MaskParent_parent_);

static StringPropertyRNA rna_MaskParent_sub_parent_;
PropertyRNA &rna_MaskParent_sub_parent = reinterpret_cast<PropertyRNA &>(rna_MaskParent_sub_parent_);

StructRNA *RNA_MaskParent;
void register_struct_MaskParent(BlenderRNA &brna)
{
	rna_MaskParent_rna_properties_ = {
		{&rna_MaskParent_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskParent_rna_properties_begin, MaskParent_rna_properties_next, MaskParent_rna_properties_end, MaskParent_rna_properties_get, nullptr, nullptr, MaskParent_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaskParent_rna_type_ = {
		{&rna_MaskParent_id, 	&rna_MaskParent_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskParent_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MaskParent_id_ = {
		{&rna_MaskParent_id_type, 	&rna_MaskParent_rna_type,
		-1, "id", 8388737, 0, 0, 64, 0, PropertyPathTemplateType(0), "ID",
		"ID-block to which masking element would be parented to or to its property",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_parent, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskParent_id_get, MaskParent_id_set, rna_MaskParent_id_typef, nullptr,RNA_ID
	};

	static const EnumPropertyItem rna_MaskParent_id_type_items[2] = {
		{17229, "MOVIECLIP", 150, "Movie Clip", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaskParent_id_type_ = {
		{&rna_MaskParent_type, 	&rna_MaskParent_id,
		-1, "id_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID Type",
		"Type of ID-block that can be used",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_parent, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskParent_id_type_get, MaskParent_id_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaskParent_id_type_items, 1, 17229
	};

	static const EnumPropertyItem rna_MaskParent_type_items[3] = {
		{0, "POINT_TRACK", 0, "Point Track", ""	},
		{1, "PLANE_TRACK", 0, "Plane Track", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaskParent_type_ = {
		{&rna_MaskParent_parent, 	&rna_MaskParent_id_type,
		-1, "type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Parent Type",
		"Parent Type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_parent, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaskParent, type), RawPropertyType(0), nullptr},
		MaskParent_type_get, MaskParent_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaskParent_type_items, 2, 0
	};

	rna_MaskParent_parent_ = {
		{&rna_MaskParent_sub_parent, 	&rna_MaskParent_type,
		-1, "parent", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Parent",
		"Name of parent object in specified data-block to which parenting happens",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Mask_update_parent, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskParent_parent_get, MaskParent_parent_length, MaskParent_parent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_MaskParent_sub_parent_ = {
		{nullptr, 	&rna_MaskParent_parent,
		-1, "sub_parent", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sub Parent",
		"Name of parent sub-object in specified data-block to which parenting happens",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Mask_update_parent, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskParent_sub_parent_get, MaskParent_sub_parent_length, MaskParent_sub_parent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	StructRNA *srna = RNA_MaskParent;
	srna->cont.properties = {&rna_MaskParent_rna_properties, &rna_MaskParent_sub_parent};
	srna->identifier = "MaskParent";
	srna->flag = 516;
	srna->name = "Mask Parent";
	srna->description = "Parenting settings for masking element";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MaskParent_rna_properties;
};

/* Mask Spline UW Point */
static CollectionPropertyRNA rna_MaskSplinePointUW_rna_properties_;
PropertyRNA &rna_MaskSplinePointUW_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePointUW_rna_properties_);

static PointerPropertyRNA rna_MaskSplinePointUW_rna_type_;
PropertyRNA &rna_MaskSplinePointUW_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePointUW_rna_type_);

static FloatPropertyRNA rna_MaskSplinePointUW_u_;
PropertyRNA &rna_MaskSplinePointUW_u = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePointUW_u_);

static FloatPropertyRNA rna_MaskSplinePointUW_weight_;
PropertyRNA &rna_MaskSplinePointUW_weight = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePointUW_weight_);

static BoolPropertyRNA rna_MaskSplinePointUW_select_;
PropertyRNA &rna_MaskSplinePointUW_select = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePointUW_select_);

StructRNA *RNA_MaskSplinePointUW;
void register_struct_MaskSplinePointUW(BlenderRNA &brna)
{
	rna_MaskSplinePointUW_rna_properties_ = {
		{&rna_MaskSplinePointUW_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePointUW_rna_properties_begin, MaskSplinePointUW_rna_properties_next, MaskSplinePointUW_rna_properties_end, MaskSplinePointUW_rna_properties_get, nullptr, nullptr, MaskSplinePointUW_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaskSplinePointUW_rna_type_ = {
		{&rna_MaskSplinePointUW_u, 	&rna_MaskSplinePointUW_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePointUW_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MaskSplinePointUW_u_ = {
		{&rna_MaskSplinePointUW_weight, 	&rna_MaskSplinePointUW_rna_type,
		-1, "u", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "U",
		"U coordinate of point along spline segment",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaskSplinePointUW, u), RawPropertyType(5), nullptr},
		MaskSplinePointUW_u_get, MaskSplinePointUW_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaskSplinePointUW_weight_ = {
		{&rna_MaskSplinePointUW_select, 	&rna_MaskSplinePointUW_u,
		-1, "weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Weight of feather point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaskSplinePointUW, w), RawPropertyType(5), nullptr},
		MaskSplinePointUW_weight_get, MaskSplinePointUW_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaskSplinePointUW_select_ = {
		{nullptr, 	&rna_MaskSplinePointUW_weight,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Selection status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePointUW_select_get, MaskSplinePointUW_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MaskSplinePointUW;
	srna->cont.properties = {&rna_MaskSplinePointUW_rna_properties, &rna_MaskSplinePointUW_select};
	srna->identifier = "MaskSplinePointUW";
	srna->flag = 516;
	srna->name = "Mask Spline UW Point";
	srna->description = "Single point in spline segment defining feather";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MaskSplinePointUW_rna_properties;
};

/* Mask Spline Point */
static CollectionPropertyRNA rna_MaskSplinePoint_rna_properties_;
PropertyRNA &rna_MaskSplinePoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_rna_properties_);

static PointerPropertyRNA rna_MaskSplinePoint_rna_type_;
PropertyRNA &rna_MaskSplinePoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_rna_type_);

static FloatPropertyRNA rna_MaskSplinePoint_handle_left_;
PropertyRNA &rna_MaskSplinePoint_handle_left = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_handle_left_);

static FloatPropertyRNA rna_MaskSplinePoint_co_;
PropertyRNA &rna_MaskSplinePoint_co = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_co_);

static FloatPropertyRNA rna_MaskSplinePoint_handle_right_;
PropertyRNA &rna_MaskSplinePoint_handle_right = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_handle_right_);

static EnumPropertyRNA rna_MaskSplinePoint_handle_type_;
PropertyRNA &rna_MaskSplinePoint_handle_type = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_handle_type_);

static EnumPropertyRNA rna_MaskSplinePoint_handle_left_type_;
PropertyRNA &rna_MaskSplinePoint_handle_left_type = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_handle_left_type_);

static EnumPropertyRNA rna_MaskSplinePoint_handle_right_type_;
PropertyRNA &rna_MaskSplinePoint_handle_right_type = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_handle_right_type_);

static FloatPropertyRNA rna_MaskSplinePoint_weight_;
PropertyRNA &rna_MaskSplinePoint_weight = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_weight_);

static BoolPropertyRNA rna_MaskSplinePoint_select_;
PropertyRNA &rna_MaskSplinePoint_select = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_select_);

static BoolPropertyRNA rna_MaskSplinePoint_select_left_handle_;
PropertyRNA &rna_MaskSplinePoint_select_left_handle = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_select_left_handle_);

static BoolPropertyRNA rna_MaskSplinePoint_select_control_point_;
PropertyRNA &rna_MaskSplinePoint_select_control_point = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_select_control_point_);

static BoolPropertyRNA rna_MaskSplinePoint_select_right_handle_;
PropertyRNA &rna_MaskSplinePoint_select_right_handle = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_select_right_handle_);

static BoolPropertyRNA rna_MaskSplinePoint_select_single_handle_;
PropertyRNA &rna_MaskSplinePoint_select_single_handle = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_select_single_handle_);

static PointerPropertyRNA rna_MaskSplinePoint_parent_;
PropertyRNA &rna_MaskSplinePoint_parent = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_parent_);

static CollectionPropertyRNA rna_MaskSplinePoint_feather_points_;
PropertyRNA &rna_MaskSplinePoint_feather_points = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoint_feather_points_);

StructRNA *RNA_MaskSplinePoint;
void register_struct_MaskSplinePoint(BlenderRNA &brna)
{
	rna_MaskSplinePoint_rna_properties_ = {
		{&rna_MaskSplinePoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_rna_properties_begin, MaskSplinePoint_rna_properties_next, MaskSplinePoint_rna_properties_end, MaskSplinePoint_rna_properties_get, nullptr, nullptr, MaskSplinePoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaskSplinePoint_rna_type_ = {
		{&rna_MaskSplinePoint_handle_left, 	&rna_MaskSplinePoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_MaskSplinePoint_handle_left_default[2] = {
		0.0f,
		0.0f
	};
	rna_MaskSplinePoint_handle_left_ = {
		{&rna_MaskSplinePoint_co, 	&rna_MaskSplinePoint_rna_type,
		-1, "handle_left", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 1",
		"Coordinates of the first handle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {2, 0, 0}, 2,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MaskSplinePoint_handle_left_get, MaskSplinePoint_handle_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MaskSplinePoint_handle_left_default
	};

	static float rna_MaskSplinePoint_co_default[2] = {
		0.0f,
		0.0f
	};
	rna_MaskSplinePoint_co_ = {
		{&rna_MaskSplinePoint_handle_right, 	&rna_MaskSplinePoint_handle_left,
		-1, "co", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Control Point",
		"Coordinates of the control point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {2, 0, 0}, 2,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MaskSplinePoint_co_get, MaskSplinePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MaskSplinePoint_co_default
	};

	static float rna_MaskSplinePoint_handle_right_default[2] = {
		0.0f,
		0.0f
	};
	rna_MaskSplinePoint_handle_right_ = {
		{&rna_MaskSplinePoint_handle_type, 	&rna_MaskSplinePoint_co,
		-1, "handle_right", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 2",
		"Coordinates of the second handle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {2, 0, 0}, 2,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MaskSplinePoint_handle_right_get, MaskSplinePoint_handle_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MaskSplinePoint_handle_right_default
	};

	static const EnumPropertyItem rna_MaskSplinePoint_handle_type_items[6] = {
		{1, "AUTO", 0, "Auto", ""	},
		{2, "VECTOR", 0, "Vector", ""	},
		{3, "ALIGNED", 0, "Aligned Single", ""	},
		{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""	},
		{0, "FREE", 0, "Free", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaskSplinePoint_handle_type_ = {
		{&rna_MaskSplinePoint_handle_left_type, 	&rna_MaskSplinePoint_handle_right,
		-1, "handle_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle Type",
		"Handle type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_handle_type_get, MaskSplinePoint_handle_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaskSplinePoint_handle_type_items, 5, 0
	};

	static const EnumPropertyItem rna_MaskSplinePoint_handle_left_type_items[6] = {
		{1, "AUTO", 0, "Auto", ""	},
		{2, "VECTOR", 0, "Vector", ""	},
		{3, "ALIGNED", 0, "Aligned Single", ""	},
		{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""	},
		{0, "FREE", 0, "Free", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaskSplinePoint_handle_left_type_ = {
		{&rna_MaskSplinePoint_handle_right_type, 	&rna_MaskSplinePoint_handle_type,
		-1, "handle_left_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 1 Type",
		"Handle type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_handle_left_type_get, MaskSplinePoint_handle_left_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaskSplinePoint_handle_left_type_items, 5, 0
	};

	static const EnumPropertyItem rna_MaskSplinePoint_handle_right_type_items[6] = {
		{1, "AUTO", 0, "Auto", ""	},
		{2, "VECTOR", 0, "Vector", ""	},
		{3, "ALIGNED", 0, "Aligned Single", ""	},
		{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""	},
		{0, "FREE", 0, "Free", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaskSplinePoint_handle_right_type_ = {
		{&rna_MaskSplinePoint_weight, 	&rna_MaskSplinePoint_handle_left_type,
		-1, "handle_right_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 2 Type",
		"Handle type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_handle_right_type_get, MaskSplinePoint_handle_right_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaskSplinePoint_handle_right_type_items, 5, 0
	};

	rna_MaskSplinePoint_weight_ = {
		{&rna_MaskSplinePoint_select, 	&rna_MaskSplinePoint_handle_right_type,
		-1, "weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Weight of the point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaskSplinePoint, bezt.weight), RawPropertyType(5), nullptr},
		MaskSplinePoint_weight_get, MaskSplinePoint_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaskSplinePoint_select_ = {
		{&rna_MaskSplinePoint_select_left_handle, 	&rna_MaskSplinePoint_weight,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Selection status of the control point. (Deprecated: use Select Control Point instead)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_select_get, MaskSplinePoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskSplinePoint_select_left_handle_ = {
		{&rna_MaskSplinePoint_select_control_point, 	&rna_MaskSplinePoint_select,
		-1, "select_left_handle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select Left Handle",
		"Selection status of the left handle",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_select_left_handle_get, MaskSplinePoint_select_left_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskSplinePoint_select_control_point_ = {
		{&rna_MaskSplinePoint_select_right_handle, 	&rna_MaskSplinePoint_select_left_handle,
		-1, "select_control_point", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select Control Point",
		"Selection status of the control point",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_select_control_point_get, MaskSplinePoint_select_control_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskSplinePoint_select_right_handle_ = {
		{&rna_MaskSplinePoint_select_single_handle, 	&rna_MaskSplinePoint_select_control_point,
		-1, "select_right_handle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select Right Handle",
		"Selection status of the right handle",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_select_right_handle_get, MaskSplinePoint_select_right_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskSplinePoint_select_single_handle_ = {
		{&rna_MaskSplinePoint_parent, 	&rna_MaskSplinePoint_select_right_handle,
		-1, "select_single_handle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select Aligned Single Handle",
		"Selection status of the Aligned Single handle",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_select_single_handle_get, MaskSplinePoint_select_single_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskSplinePoint_parent_ = {
		{&rna_MaskSplinePoint_feather_points, 	&rna_MaskSplinePoint_select_single_handle,
		-1, "parent", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "parent",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_parent_get, nullptr, nullptr, nullptr,RNA_MaskParent
	};

	rna_MaskSplinePoint_feather_points_ = {
		{nullptr, 	&rna_MaskSplinePoint_parent,
		-1, "feather_points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Feather Points",
		"Points defining feather",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoint_feather_points_begin, MaskSplinePoint_feather_points_next, MaskSplinePoint_feather_points_end, MaskSplinePoint_feather_points_get, MaskSplinePoint_feather_points_length, MaskSplinePoint_feather_points_lookup_int, nullptr, nullptr, RNA_MaskSplinePointUW
	};

	StructRNA *srna = RNA_MaskSplinePoint;
	srna->cont.properties = {&rna_MaskSplinePoint_rna_properties, &rna_MaskSplinePoint_feather_points};
	srna->identifier = "MaskSplinePoint";
	srna->flag = 516;
	srna->name = "Mask Spline Point";
	srna->description = "Single point in spline used for defining mask";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MaskSplinePoint_rna_properties;
};

/* Mask spline */
static CollectionPropertyRNA rna_MaskSpline_rna_properties_;
PropertyRNA &rna_MaskSpline_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaskSpline_rna_properties_);

static PointerPropertyRNA rna_MaskSpline_rna_type_;
PropertyRNA &rna_MaskSpline_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaskSpline_rna_type_);

static EnumPropertyRNA rna_MaskSpline_offset_mode_;
PropertyRNA &rna_MaskSpline_offset_mode = reinterpret_cast<PropertyRNA &>(rna_MaskSpline_offset_mode_);

static EnumPropertyRNA rna_MaskSpline_weight_interpolation_;
PropertyRNA &rna_MaskSpline_weight_interpolation = reinterpret_cast<PropertyRNA &>(rna_MaskSpline_weight_interpolation_);

static BoolPropertyRNA rna_MaskSpline_use_cyclic_;
PropertyRNA &rna_MaskSpline_use_cyclic = reinterpret_cast<PropertyRNA &>(rna_MaskSpline_use_cyclic_);

static BoolPropertyRNA rna_MaskSpline_use_fill_;
PropertyRNA &rna_MaskSpline_use_fill = reinterpret_cast<PropertyRNA &>(rna_MaskSpline_use_fill_);

static BoolPropertyRNA rna_MaskSpline_use_self_intersection_check_;
PropertyRNA &rna_MaskSpline_use_self_intersection_check = reinterpret_cast<PropertyRNA &>(rna_MaskSpline_use_self_intersection_check_);

static CollectionPropertyRNA rna_MaskSpline_points_;
PropertyRNA &rna_MaskSpline_points = reinterpret_cast<PropertyRNA &>(rna_MaskSpline_points_);

StructRNA *RNA_MaskSpline;
void register_struct_MaskSpline(BlenderRNA &brna)
{
	rna_MaskSpline_rna_properties_ = {
		{&rna_MaskSpline_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSpline_rna_properties_begin, MaskSpline_rna_properties_next, MaskSpline_rna_properties_end, MaskSpline_rna_properties_get, nullptr, nullptr, MaskSpline_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaskSpline_rna_type_ = {
		{&rna_MaskSpline_offset_mode, 	&rna_MaskSpline_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSpline_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_MaskSpline_offset_mode_items[3] = {
		{0, "EVEN", 0, "Even", "Calculate even feather offset"	},
		{1, "SMOOTH", 0, "Smooth", "Calculate feather offset as a second curve"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaskSpline_offset_mode_ = {
		{&rna_MaskSpline_weight_interpolation, 	&rna_MaskSpline_rna_type,
		-1, "offset_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Feather Offset",
		"The method used for calculating the feather offset",
		0, "Mask",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaskSpline, offset_mode), RawPropertyType(2), nullptr},
		MaskSpline_offset_mode_get, MaskSpline_offset_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaskSpline_offset_mode_items, 2, 0
	};

	static const EnumPropertyItem rna_MaskSpline_weight_interpolation_items[3] = {
		{1, "LINEAR", 0, "Linear", ""	},
		{2, "EASE", 0, "Ease", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaskSpline_weight_interpolation_ = {
		{&rna_MaskSpline_use_cyclic, 	&rna_MaskSpline_offset_mode,
		-1, "weight_interpolation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight Interpolation",
		"The type of weight interpolation for spline",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaskSpline, weight_interp), RawPropertyType(2), nullptr},
		MaskSpline_weight_interpolation_get, MaskSpline_weight_interpolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaskSpline_weight_interpolation_items, 2, 1
	};

	rna_MaskSpline_use_cyclic_ = {
		{&rna_MaskSpline_use_fill, 	&rna_MaskSpline_weight_interpolation,
		-1, "use_cyclic", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cyclic",
		"Make this spline a closed loop",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 369098753, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSpline_use_cyclic_get, MaskSpline_use_cyclic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskSpline_use_fill_ = {
		{&rna_MaskSpline_use_self_intersection_check, 	&rna_MaskSpline_use_cyclic,
		-1, "use_fill", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fill",
		"Make this spline filled",
		0, "Mask",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 369098753, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSpline_use_fill_get, MaskSpline_use_fill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_MaskSpline_use_self_intersection_check_ = {
		{&rna_MaskSpline_points, 	&rna_MaskSpline_use_fill,
		-1, "use_self_intersection_check", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Self Intersection Check",
		"Prevent feather from self-intersections",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mask_update_data, 369098753, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSpline_use_self_intersection_check_get, MaskSpline_use_self_intersection_check_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskSpline_points_ = {
		{nullptr, 	&rna_MaskSpline_use_self_intersection_check,
		-1, "points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Points",
		"Collection of points",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MaskSplinePoints},
		MaskSpline_points_begin, MaskSpline_points_next, MaskSpline_points_end, MaskSpline_points_get, MaskSpline_points_length, MaskSpline_points_lookup_int, nullptr, nullptr, RNA_MaskSplinePoint
	};

	StructRNA *srna = RNA_MaskSpline;
	srna->cont.properties = {&rna_MaskSpline_rna_properties, &rna_MaskSpline_points};
	srna->identifier = "MaskSpline";
	srna->flag = 516;
	srna->name = "Mask spline";
	srna->description = "Single spline used for defining mask shape";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MaskSpline_rna_properties;
};

/* Mask Splines */
static CollectionPropertyRNA rna_MaskSplines_rna_properties_;
PropertyRNA &rna_MaskSplines_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaskSplines_rna_properties_);

static PointerPropertyRNA rna_MaskSplines_rna_type_;
PropertyRNA &rna_MaskSplines_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaskSplines_rna_type_);

static PointerPropertyRNA rna_MaskSplines_active_;
PropertyRNA &rna_MaskSplines_active = reinterpret_cast<PropertyRNA &>(rna_MaskSplines_active_);

static PointerPropertyRNA rna_MaskSplines_active_point_;
PropertyRNA &rna_MaskSplines_active_point = reinterpret_cast<PropertyRNA &>(rna_MaskSplines_active_point_);

static PointerPropertyRNA rna_MaskSplines_new_spline_;
PropertyRNA &rna_MaskSplines_new_spline = reinterpret_cast<PropertyRNA &>(rna_MaskSplines_new_spline_);

FunctionRNA *rna_MaskSplines_new_func;
static PointerPropertyRNA rna_MaskSplines_remove_spline_;
PropertyRNA &rna_MaskSplines_remove_spline = reinterpret_cast<PropertyRNA &>(rna_MaskSplines_remove_spline_);

FunctionRNA *rna_MaskSplines_remove_func;
StructRNA *RNA_MaskSplines;
void register_struct_MaskSplines(BlenderRNA &brna)
{
	rna_MaskSplines_rna_properties_ = {
		{&rna_MaskSplines_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplines_rna_properties_begin, MaskSplines_rna_properties_next, MaskSplines_rna_properties_end, MaskSplines_rna_properties_get, nullptr, nullptr, MaskSplines_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaskSplines_rna_type_ = {
		{&rna_MaskSplines_active, 	&rna_MaskSplines_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplines_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MaskSplines_active_ = {
		{&rna_MaskSplines_active_point, 	&rna_MaskSplines_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Spline",
		"Active spline of masking layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplines_active_get, MaskSplines_active_set, nullptr, nullptr,RNA_MaskSpline
	};

	rna_MaskSplines_active_point_ = {
		{nullptr, 	&rna_MaskSplines_active,
		-1, "active_point", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Point",
		"Active point of masking layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplines_active_point_get, MaskSplines_active_point_set, nullptr, nullptr,RNA_MaskSplinePoint
	};

	StructRNA *srna = RNA_MaskSplines;
	srna->cont.properties = {&rna_MaskSplines_rna_properties, &rna_MaskSplines_active_point};
	srna->identifier = "MaskSplines";
	srna->flag = 516;
	srna->name = "Mask Splines";
	srna->description = "Collection of masking splines";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MaskSplines_rna_properties;
	{
	rna_MaskSplines_new_spline_ = {
		{nullptr, 	nullptr,
		-1, "spline", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created spline",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MaskSpline
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MaskSplines_new_spline, &rna_MaskSplines_new_spline};
		func->identifier = "new";
		func->flag = 2048;
		func->description = "Add a new spline to the layer";
		func->call = MaskSplines_new_call;
		func->c_ret = &rna_MaskSplines_new_spline;
		rna_MaskSplines_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MaskSplines_remove_spline_ = {
		{nullptr, 	nullptr,
		-1, "spline", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The spline to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MaskSpline
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MaskSplines_remove_spline, &rna_MaskSplines_remove_spline};
		func->identifier = "remove";
		func->flag = 2064;
		func->description = "Remove a spline from a layer";
		func->call = MaskSplines_remove_call;
		rna_MaskSplines_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Mask Spline Points */
static CollectionPropertyRNA rna_MaskSplinePoints_rna_properties_;
PropertyRNA &rna_MaskSplinePoints_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoints_rna_properties_);

static PointerPropertyRNA rna_MaskSplinePoints_rna_type_;
PropertyRNA &rna_MaskSplinePoints_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoints_rna_type_);

static IntPropertyRNA rna_MaskSplinePoints_add_count_;
PropertyRNA &rna_MaskSplinePoints_add_count = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoints_add_count_);

FunctionRNA *rna_MaskSplinePoints_add_func;
static PointerPropertyRNA rna_MaskSplinePoints_remove_point_;
PropertyRNA &rna_MaskSplinePoints_remove_point = reinterpret_cast<PropertyRNA &>(rna_MaskSplinePoints_remove_point_);

FunctionRNA *rna_MaskSplinePoints_remove_func;
StructRNA *RNA_MaskSplinePoints;
void register_struct_MaskSplinePoints(BlenderRNA &brna)
{
	rna_MaskSplinePoints_rna_properties_ = {
		{&rna_MaskSplinePoints_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoints_rna_properties_begin, MaskSplinePoints_rna_properties_next, MaskSplinePoints_rna_properties_end, MaskSplinePoints_rna_properties_get, nullptr, nullptr, MaskSplinePoints_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaskSplinePoints_rna_type_ = {
		{nullptr, 	&rna_MaskSplinePoints_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskSplinePoints_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_MaskSplinePoints;
	srna->cont.properties = {&rna_MaskSplinePoints_rna_properties, &rna_MaskSplinePoints_rna_type};
	srna->identifier = "MaskSplinePoints";
	srna->flag = 516;
	srna->name = "Mask Spline Points";
	srna->description = "Collection of masking spline points";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MaskSplinePoints_rna_properties;
	{
	rna_MaskSplinePoints_add_count_ = {
		{nullptr, 	nullptr,
		-1, "count", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Number",
		"Number of points to add to the spline",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MaskSplinePoints_add_count, &rna_MaskSplinePoints_add_count};
		func->identifier = "add";
		func->flag = 2048;
		func->description = "Add a number of point to this spline";
		func->call = MaskSplinePoints_add_call;
		rna_MaskSplinePoints_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MaskSplinePoints_remove_point_ = {
		{nullptr, 	nullptr,
		-1, "point", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The point to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MaskSplinePoint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MaskSplinePoints_remove_point, &rna_MaskSplinePoints_remove_point};
		func->identifier = "remove";
		func->flag = 2064;
		func->description = "Remove a point from a spline";
		func->call = MaskSplinePoints_remove_call;
		rna_MaskSplinePoints_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Mask Layer */
static CollectionPropertyRNA rna_MaskLayer_rna_properties_;
PropertyRNA &rna_MaskLayer_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_rna_properties_);

static PointerPropertyRNA rna_MaskLayer_rna_type_;
PropertyRNA &rna_MaskLayer_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_rna_type_);

static StringPropertyRNA rna_MaskLayer_name_;
PropertyRNA &rna_MaskLayer_name = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_name_);

static CollectionPropertyRNA rna_MaskLayer_splines_;
PropertyRNA &rna_MaskLayer_splines = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_splines_);

static BoolPropertyRNA rna_MaskLayer_hide_;
PropertyRNA &rna_MaskLayer_hide = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_hide_);

static BoolPropertyRNA rna_MaskLayer_hide_select_;
PropertyRNA &rna_MaskLayer_hide_select = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_hide_select_);

static BoolPropertyRNA rna_MaskLayer_hide_render_;
PropertyRNA &rna_MaskLayer_hide_render = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_hide_render_);

static BoolPropertyRNA rna_MaskLayer_select_;
PropertyRNA &rna_MaskLayer_select = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_select_);

static FloatPropertyRNA rna_MaskLayer_alpha_;
PropertyRNA &rna_MaskLayer_alpha = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_alpha_);

static EnumPropertyRNA rna_MaskLayer_blend_;
PropertyRNA &rna_MaskLayer_blend = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_blend_);

static BoolPropertyRNA rna_MaskLayer_invert_;
PropertyRNA &rna_MaskLayer_invert = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_invert_);

static EnumPropertyRNA rna_MaskLayer_falloff_;
PropertyRNA &rna_MaskLayer_falloff = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_falloff_);

static EnumPropertyRNA rna_MaskLayer_fill_solver_;
PropertyRNA &rna_MaskLayer_fill_solver = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_fill_solver_);

static BoolPropertyRNA rna_MaskLayer_use_fill_holes_;
PropertyRNA &rna_MaskLayer_use_fill_holes = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_use_fill_holes_);

static BoolPropertyRNA rna_MaskLayer_use_fill_overlap_;
PropertyRNA &rna_MaskLayer_use_fill_overlap = reinterpret_cast<PropertyRNA &>(rna_MaskLayer_use_fill_overlap_);

StructRNA *RNA_MaskLayer;
void register_struct_MaskLayer(BlenderRNA &brna)
{
	rna_MaskLayer_rna_properties_ = {
		{&rna_MaskLayer_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayer_rna_properties_begin, MaskLayer_rna_properties_next, MaskLayer_rna_properties_end, MaskLayer_rna_properties_get, nullptr, nullptr, MaskLayer_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaskLayer_rna_type_ = {
		{&rna_MaskLayer_name, 	&rna_MaskLayer_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayer_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MaskLayer_name_ = {
		{&rna_MaskLayer_splines, 	&rna_MaskLayer_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Unique name of layer",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Mask_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayer_name_get, MaskLayer_name_length, MaskLayer_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_MaskLayer_splines_ = {
		{&rna_MaskLayer_hide, 	&rna_MaskLayer_name,
		-1, "splines", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Splines",
		"Collection of splines which defines this layer",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MaskSplines},
		MaskLayer_splines_begin, MaskLayer_splines_next, MaskLayer_splines_end, MaskLayer_splines_get, nullptr, MaskLayer_splines_lookup_int, nullptr, nullptr, RNA_MaskSpline
	};

	rna_MaskLayer_hide_ = {
		{&rna_MaskLayer_hide_select, 	&rna_MaskLayer_splines,
		-1, "hide", 4355, 0, 0, 0, 0, PropertyPathTemplateType(0), "Restrict View",
		"Restrict visibility in the viewport",
		32, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 370606080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayer_hide_get, MaskLayer_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskLayer_hide_select_ = {
		{&rna_MaskLayer_hide_render, 	&rna_MaskLayer_hide,
		-1, "hide_select", 4355, 0, 0, 0, 0, PropertyPathTemplateType(0), "Restrict Select",
		"Restrict selection in the viewport",
		30, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 370606080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayer_hide_select_get, MaskLayer_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskLayer_hide_render_ = {
		{&rna_MaskLayer_select, 	&rna_MaskLayer_hide_select,
		-1, "hide_render", 4355, 0, 0, 0, 0, PropertyPathTemplateType(0), "Restrict Render",
		"Restrict renderability",
		28, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 369098753, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayer_hide_render_get, MaskLayer_hide_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskLayer_select_ = {
		{&rna_MaskLayer_alpha, 	&rna_MaskLayer_hide_render,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Layer is selected for editing in the Dope Sheet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayer_select_get, MaskLayer_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskLayer_alpha_ = {
		{&rna_MaskLayer_blend, 	&rna_MaskLayer_select,
		-1, "alpha", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Opacity",
		"Render Opacity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 369098753, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaskLayer, alpha), RawPropertyType(5), nullptr},
		MaskLayer_alpha_get, MaskLayer_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_MaskLayer_blend_items[10] = {
		{7, "MERGE_ADD", 0, "Merge Add", ""	},
		{8, "MERGE_SUBTRACT", 0, "Merge Subtract", ""	},
		{0, "ADD", 0, "Add", ""	},
		{1, "SUBTRACT", 0, "Subtract", ""	},
		{2, "LIGHTEN", 0, "Lighten", ""	},
		{3, "DARKEN", 0, "Darken", ""	},
		{4, "MUL", 0, "Multiply", ""	},
		{5, "REPLACE", 0, "Replace", ""	},
		{6, "DIFFERENCE", 0, "Difference", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaskLayer_blend_ = {
		{&rna_MaskLayer_invert, 	&rna_MaskLayer_alpha,
		-1, "blend", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blend",
		"Method of blending mask layers",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 369098753, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaskLayer, blend), RawPropertyType(2), nullptr},
		MaskLayer_blend_get, MaskLayer_blend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaskLayer_blend_items, 9, 0
	};

	rna_MaskLayer_invert_ = {
		{&rna_MaskLayer_falloff, 	&rna_MaskLayer_blend,
		-1, "invert", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert",
		"Invert the mask black/white",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 369098753, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayer_invert_get, MaskLayer_invert_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskLayer_falloff_ = {
		{&rna_MaskLayer_fill_solver, 	&rna_MaskLayer_invert,
		-1, "falloff", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Falloff",
		"Falloff type of the feather",
		0, "Curve",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 369098753, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaskLayer, falloff), RawPropertyType(2), nullptr},
		MaskLayer_falloff_get, MaskLayer_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_proportional_falloff_curve_only_items, 6, 0
	};

	static const EnumPropertyItem rna_MaskLayer_fill_solver_items[3] = {
		{0, "SWEEP_LINE", 0, "Sweep Line", "Fast without support for self-intersection"	},
		{1, "CDT", 0, "Delaunay", "Constrained Delaunay Triangulation (CDT), robust with support for self-intersections"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaskLayer_fill_solver_ = {
		{&rna_MaskLayer_use_fill_holes, 	&rna_MaskLayer_falloff,
		-1, "fill_solver", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fill Solver",
		"Triangulation solver for filling 2D curves",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 370606080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaskLayer, fill_solver), RawPropertyType(2), nullptr},
		MaskLayer_fill_solver_get, MaskLayer_fill_solver_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaskLayer_fill_solver_items, 2, 1
	};

	rna_MaskLayer_use_fill_holes_ = {
		{&rna_MaskLayer_use_fill_overlap, 	&rna_MaskLayer_fill_solver,
		-1, "use_fill_holes", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Calculate Holes",
		"Calculate holes when filling overlapping curves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 369098753, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayer_use_fill_holes_get, MaskLayer_use_fill_holes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_MaskLayer_use_fill_overlap_ = {
		{nullptr, 	&rna_MaskLayer_use_fill_holes,
		-1, "use_fill_overlap", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Calculate Overlap",
		"Calculate self intersections and overlap before filling (only for the sweep-line solver)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 369098753, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayer_use_fill_overlap_get, MaskLayer_use_fill_overlap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MaskLayer;
	srna->cont.properties = {&rna_MaskLayer_rna_properties, &rna_MaskLayer_use_fill_overlap};
	srna->identifier = "MaskLayer";
	srna->flag = 516;
	srna->name = "Mask Layer";
	srna->description = "Single layer used for masking pixels";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_MaskLayer_name;
	srna->iteratorproperty = &rna_MaskLayer_rna_properties;
	srna->path = rna_MaskLayer_path;
};

/* Mask */
static CollectionPropertyRNA rna_Mask_layers_;
PropertyRNA &rna_Mask_layers = reinterpret_cast<PropertyRNA &>(rna_Mask_layers_);

static IntPropertyRNA rna_Mask_active_layer_index_;
PropertyRNA &rna_Mask_active_layer_index = reinterpret_cast<PropertyRNA &>(rna_Mask_active_layer_index_);

static IntPropertyRNA rna_Mask_frame_start_;
PropertyRNA &rna_Mask_frame_start = reinterpret_cast<PropertyRNA &>(rna_Mask_frame_start_);

static IntPropertyRNA rna_Mask_frame_end_;
PropertyRNA &rna_Mask_frame_end = reinterpret_cast<PropertyRNA &>(rna_Mask_frame_end_);

static PointerPropertyRNA rna_Mask_animation_data_;
PropertyRNA &rna_Mask_animation_data = reinterpret_cast<PropertyRNA &>(rna_Mask_animation_data_);

StructRNA *RNA_Mask;
void register_struct_Mask(BlenderRNA &brna)
{
	rna_Mask_layers_ = {
		{&rna_Mask_active_layer_index, 	nullptr,
		-1, "layers", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layers",
		"Collection of layers which defines this mask",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MaskLayers},
		Mask_layers_begin, Mask_layers_next, Mask_layers_end, Mask_layers_get, nullptr, Mask_layers_lookup_int, nullptr, nullptr, RNA_MaskLayer
	};

	rna_Mask_active_layer_index_ = {
		{&rna_Mask_frame_start, 	&rna_Mask_layers,
		-1, "active_layer_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Shape Index",
		"Index of active layer in list of all mask\'s layers",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 370606080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mask_active_layer_index_get, Mask_active_layer_index_set, nullptr, nullptr, rna_Mask_layer_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Mask_frame_start_ = {
		{&rna_Mask_frame_end, 	&rna_Mask_active_layer_index,
		-1, "frame_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"First frame of the mask (used for sequencer)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 370606080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mask_frame_start_get, Mask_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Mask_frame_end_ = {
		{&rna_Mask_animation_data, 	&rna_Mask_frame_start,
		-1, "frame_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"Final frame of the mask (used for sequencer)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 370606080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mask_frame_end_get, Mask_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Mask_animation_data_ = {
		{nullptr, 	&rna_Mask_frame_end,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Mask_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_Mask;
	srna->cont.properties = {&rna_Mask_layers, &rna_Mask_animation_data};
	srna->identifier = "Mask";
	srna->flag = 519;
	srna->name = "Mask";
	srna->description = "Mask data-block defining mask for compositing";
	srna->translation_context = "*";
	srna->icon = 470;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Mask Layers */
static CollectionPropertyRNA rna_MaskLayers_rna_properties_;
PropertyRNA &rna_MaskLayers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaskLayers_rna_properties_);

static PointerPropertyRNA rna_MaskLayers_rna_type_;
PropertyRNA &rna_MaskLayers_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaskLayers_rna_type_);

static PointerPropertyRNA rna_MaskLayers_active_;
PropertyRNA &rna_MaskLayers_active = reinterpret_cast<PropertyRNA &>(rna_MaskLayers_active_);

static StringPropertyRNA rna_MaskLayers_new_name_;
PropertyRNA &rna_MaskLayers_new_name = reinterpret_cast<PropertyRNA &>(rna_MaskLayers_new_name_);

static PointerPropertyRNA rna_MaskLayers_new_layer_;
PropertyRNA &rna_MaskLayers_new_layer = reinterpret_cast<PropertyRNA &>(rna_MaskLayers_new_layer_);

FunctionRNA *rna_MaskLayers_new_func;
static PointerPropertyRNA rna_MaskLayers_remove_layer_;
PropertyRNA &rna_MaskLayers_remove_layer = reinterpret_cast<PropertyRNA &>(rna_MaskLayers_remove_layer_);

FunctionRNA *rna_MaskLayers_remove_func;
FunctionRNA *rna_MaskLayers_clear_func;
StructRNA *RNA_MaskLayers;
void register_struct_MaskLayers(BlenderRNA &brna)
{
	rna_MaskLayers_rna_properties_ = {
		{&rna_MaskLayers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayers_rna_properties_begin, MaskLayers_rna_properties_next, MaskLayers_rna_properties_end, MaskLayers_rna_properties_get, nullptr, nullptr, MaskLayers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaskLayers_rna_type_ = {
		{&rna_MaskLayers_active, 	&rna_MaskLayers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MaskLayers_active_ = {
		{nullptr, 	&rna_MaskLayers_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Shape",
		"Active layer in this mask",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskLayers_active_get, MaskLayers_active_set, nullptr, nullptr,RNA_MaskLayer
	};

	StructRNA *srna = RNA_MaskLayers;
	srna->cont.properties = {&rna_MaskLayers_rna_properties, &rna_MaskLayers_active};
	srna->identifier = "MaskLayers";
	srna->flag = 516;
	srna->name = "Mask Layers";
	srna->description = "Collection of layers used by mask";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MaskLayers_rna_properties;
	{
	rna_MaskLayers_new_name_ = {
		{&rna_MaskLayers_new_layer, 	nullptr,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of new layer",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_MaskLayers_new_layer_ = {
		{nullptr, 	&rna_MaskLayers_new_name,
		-1, "layer", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New mask layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MaskLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MaskLayers_new_name, &rna_MaskLayers_new_layer};
		func->identifier = "new";
		func->description = "Add layer to this mask";
		func->call = MaskLayers_new_call;
		func->c_ret = &rna_MaskLayers_new_layer;
		rna_MaskLayers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MaskLayers_remove_layer_ = {
		{nullptr, 	nullptr,
		-1, "layer", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Shape to be removed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MaskLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MaskLayers_remove_layer, &rna_MaskLayers_remove_layer};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove layer from this mask";
		func->call = MaskLayers_remove_call;
		rna_MaskLayers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->description = "Remove all mask layers";
		func->call = MaskLayers_clear_call;
		rna_MaskLayers_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
