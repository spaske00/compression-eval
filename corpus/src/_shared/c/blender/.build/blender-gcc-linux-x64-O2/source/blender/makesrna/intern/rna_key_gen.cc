
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

#include "rna_key.cc"

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

extern PropertyRNA &rna_Key_reference_key;
extern PropertyRNA &rna_Key_key_blocks;
extern PropertyRNA &rna_Key_animation_data;
extern PropertyRNA &rna_Key_user;
extern PropertyRNA &rna_Key_use_relative;
extern PropertyRNA &rna_Key_eval_time;

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



extern PropertyRNA &rna_ShapeKey_rna_properties;
extern PropertyRNA &rna_ShapeKey_rna_type;
extern PropertyRNA &rna_ShapeKey_name;
extern PropertyRNA &rna_ShapeKey_select;
extern PropertyRNA &rna_ShapeKey_frame;
extern PropertyRNA &rna_ShapeKey_value;
extern PropertyRNA &rna_ShapeKey_interpolation;
extern PropertyRNA &rna_ShapeKey_vertex_group;
extern PropertyRNA &rna_ShapeKey_relative_key;
extern PropertyRNA &rna_ShapeKey_mute;
extern PropertyRNA &rna_ShapeKey_lock_shape;
extern PropertyRNA &rna_ShapeKey_slider_min;
extern PropertyRNA &rna_ShapeKey_slider_max;
extern PropertyRNA &rna_ShapeKey_data;
extern PropertyRNA &rna_ShapeKey_points;

extern FunctionRNA *rna_ShapeKey_normals_vertex_get_func;
extern PropertyRNA &rna_ShapeKey_normals_vertex_get_normals;

extern FunctionRNA *rna_ShapeKey_normals_polygon_get_func;
extern PropertyRNA &rna_ShapeKey_normals_polygon_get_normals;

extern FunctionRNA *rna_ShapeKey_normals_split_get_func;
extern PropertyRNA &rna_ShapeKey_normals_split_get_normals;



extern PropertyRNA &rna_ShapeKeyPoint_rna_properties;
extern PropertyRNA &rna_ShapeKeyPoint_rna_type;
extern PropertyRNA &rna_ShapeKeyPoint_co;


extern PropertyRNA &rna_ShapeKeyCurvePoint_rna_properties;
extern PropertyRNA &rna_ShapeKeyCurvePoint_rna_type;
extern PropertyRNA &rna_ShapeKeyCurvePoint_co;
extern PropertyRNA &rna_ShapeKeyCurvePoint_tilt;
extern PropertyRNA &rna_ShapeKeyCurvePoint_radius;


extern PropertyRNA &rna_ShapeKeyBezierPoint_rna_properties;
extern PropertyRNA &rna_ShapeKeyBezierPoint_rna_type;
extern PropertyRNA &rna_ShapeKeyBezierPoint_co;
extern PropertyRNA &rna_ShapeKeyBezierPoint_handle_left;
extern PropertyRNA &rna_ShapeKeyBezierPoint_handle_right;
extern PropertyRNA &rna_ShapeKeyBezierPoint_tilt;
extern PropertyRNA &rna_ShapeKeyBezierPoint_radius;

PointerRNA Key_reference_key_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ShapeKey, data->refkey);
}

static PointerRNA Key_key_blocks_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ShapeKey, rna_iterator_listbase_get(iter));
}

void Key_key_blocks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Key_key_blocks;

    rna_iterator_listbase_begin(iter, ptr, &data->block, nullptr);

    if (iter->valid) {
        iter->ptr = Key_key_blocks_get(iter);
    }
}

void Key_key_blocks_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Key_key_blocks_get(iter);
    }
}

void Key_key_blocks_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Key_key_blocks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Key_key_blocks_begin(&iter, ptr);

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
        if (found) { *r_ptr = Key_key_blocks_get(&iter); }
    }

    Key_key_blocks_end(&iter);

    return found;
}

bool Key_key_blocks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_KeyBlock_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Key_animation_data_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

PointerRNA Key_user_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ID, data->from);
}

bool Key_use_relative_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return ((uint64_t(data->type) & 1) != 0);
}

void Key_use_relative_set(PointerRNA *ptr, bool value)
{
    Key *data = (Key *)(ptr->data);
    if (value) { data->type = std::remove_reference_t<decltype(data->type)>(uint64_t(data->type) | 1); }
    else { data->type = std::remove_reference_t<decltype(data->type)>(uint64_t(data->type) & ~uint64_t(1)); }
}

float Key_eval_time_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return (float)(data->ctime);
}

void Key_eval_time_set(PointerRNA *ptr, float value)
{
    Key *data = (Key *)(ptr->data);
    data->ctime = (std::remove_reference_t<decltype(data->ctime)>)std::clamp(value, 0.0f, 1048574.0f);
}

static PointerRNA ShapeKey_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ShapeKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ShapeKey_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKey_rna_properties_get(iter);
    }
}

void ShapeKey_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ShapeKey_rna_properties_get(iter);
    }
}

void ShapeKey_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ShapeKey_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ShapeKey_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ShapeKey_name_get(PointerRNA *ptr, char *value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int ShapeKey_name_length(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return strlen(data->name);
}

void ShapeKey_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ShapeKey_name_set;
    fn(ptr, value);
}

bool ShapeKey_select_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ShapeKey_select_set(PointerRNA *ptr, bool value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

float ShapeKey_frame_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_ShapeKey_frame_get;
    return fn(ptr);
}

float ShapeKey_value_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (float)(data->curval);
}

void ShapeKey_value_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKey_value_set;
    fn(ptr, value);
}

int ShapeKey_interpolation_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (int)(data->type);
}

void ShapeKey_interpolation_set(PointerRNA *ptr, int value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

void ShapeKey_vertex_group_get(PointerRNA *ptr, char *value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    BLI_assert(strlen(data->vgroup) < 64);
    strcpy(value, data->vgroup);
}

int ShapeKey_vertex_group_length(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return strlen(data->vgroup);
}

void ShapeKey_vertex_group_set(PointerRNA *ptr, const char *value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    BLI_strncpy_utf8(data->vgroup, value, 64);
}

PointerRNA ShapeKey_relative_key_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ShapeKey_relative_key_get;
    return fn(ptr);
}

void ShapeKey_relative_key_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_ShapeKey_relative_key_set;
    fn(ptr, value, reports);
}

bool ShapeKey_mute_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ShapeKey_mute_set(PointerRNA *ptr, bool value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ShapeKey_lock_shape_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void ShapeKey_lock_shape_set(PointerRNA *ptr, bool value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

float ShapeKey_slider_min_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (float)(data->slidermin);
}

void ShapeKey_slider_min_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKey_slider_min_set;
    fn(ptr, value);
}

float ShapeKey_slider_max_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (float)(data->slidermax);
}

void ShapeKey_slider_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKey_slider_max_set;
    fn(ptr, value);
}

int ShapeKey_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_ShapeKey_data_length;
    return fn(ptr);
}

static PointerRNA ShapeKey_data_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_ShapeKey_data_get;
    return fn(iter);
}

void ShapeKey_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ShapeKey_data;

    PropCollectionBeginFunc fn = rna_ShapeKey_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKey_data_get(iter);
    }
}

void ShapeKey_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ShapeKey_data_get(iter);
    }
}

void ShapeKey_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ShapeKey_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_ShapeKey_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

int ShapeKey_points_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_ShapeKey_points_length;
    return fn(ptr);
}

static PointerRNA ShapeKey_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ShapeKeyPoint, rna_iterator_array_get(iter));
}

void ShapeKey_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ShapeKey_points;

    PropCollectionBeginFunc fn = rna_ShapeKey_points_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKey_points_get(iter);
    }
}

void ShapeKey_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ShapeKey_points_get(iter);
    }
}

void ShapeKey_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ShapeKey_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_ShapeKey_points_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA ShapeKeyPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ShapeKeyPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ShapeKeyPoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKeyPoint_rna_properties_get(iter);
    }
}

void ShapeKeyPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ShapeKeyPoint_rna_properties_get(iter);
    }
}

void ShapeKeyPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ShapeKeyPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ShapeKeyPoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ShapeKeyPoint_co_get(PointerRNA *ptr, float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void ShapeKeyPoint_co_set(PointerRNA *ptr, const float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (&data->x)[i] = values[i];
    }
}

static PointerRNA ShapeKeyCurvePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ShapeKeyCurvePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ShapeKeyCurvePoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKeyCurvePoint_rna_properties_get(iter);
    }
}

void ShapeKeyCurvePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ShapeKeyCurvePoint_rna_properties_get(iter);
    }
}

void ShapeKeyCurvePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ShapeKeyCurvePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ShapeKeyCurvePoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ShapeKeyCurvePoint_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ShapeKeyPoint_co_get;
    fn(ptr, values);
}

void ShapeKeyCurvePoint_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ShapeKeyPoint_co_set;
    fn(ptr, values);
}

float ShapeKeyCurvePoint_tilt_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_ShapeKeyCurvePoint_tilt_get;
    return fn(ptr);
}

void ShapeKeyCurvePoint_tilt_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKeyCurvePoint_tilt_set;
    fn(ptr, value);
}

float ShapeKeyCurvePoint_radius_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_ShapeKeyCurvePoint_radius_get;
    return fn(ptr);
}

void ShapeKeyCurvePoint_radius_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKeyCurvePoint_radius_set;
    fn(ptr, value);
}

static PointerRNA ShapeKeyBezierPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ShapeKeyBezierPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ShapeKeyBezierPoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKeyBezierPoint_rna_properties_get(iter);
    }
}

void ShapeKeyBezierPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ShapeKeyBezierPoint_rna_properties_get(iter);
    }
}

void ShapeKeyBezierPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ShapeKeyBezierPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ShapeKeyBezierPoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ShapeKeyBezierPoint_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ShapeKeyBezierPoint_co_get;
    fn(ptr, values);
}

void ShapeKeyBezierPoint_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ShapeKeyBezierPoint_co_set;
    fn(ptr, values);
}

void ShapeKeyBezierPoint_handle_left_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ShapeKeyBezierPoint_handle_1_co_get;
    fn(ptr, values);
}

void ShapeKeyBezierPoint_handle_left_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ShapeKeyBezierPoint_handle_1_co_set;
    fn(ptr, values);
}

void ShapeKeyBezierPoint_handle_right_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ShapeKeyBezierPoint_handle_2_co_get;
    fn(ptr, values);
}

void ShapeKeyBezierPoint_handle_right_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ShapeKeyBezierPoint_handle_2_co_set;
    fn(ptr, values);
}

float ShapeKeyBezierPoint_tilt_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_ShapeKeyBezierPoint_tilt_get;
    return fn(ptr);
}

void ShapeKeyBezierPoint_tilt_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKeyBezierPoint_tilt_set;
    fn(ptr, value);
}

float ShapeKeyBezierPoint_radius_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_ShapeKeyBezierPoint_radius_get;
    return fn(ptr);
}

void ShapeKeyBezierPoint_radius_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKeyBezierPoint_radius_set;
    fn(ptr, value);
}


void ShapeKey_normals_vertex_get_func(ID *_selfid, KeyBlock *_self, int *normals_num, float **normals)
{
	rna_KeyBlock_normals_vert_calc(_selfid, _self, normals, normals_num);
}

static void ShapeKey_normals_vertex_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	KeyBlock *_self;
	int *normals_num;
	float **normals;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (KeyBlock *)_ptr->data;
	_data = (char *)_parms->data;
	normals_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	normals = ((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_KeyBlock_normals_vert_calc(_selfid, _self, normals, normals_num);
}

void ShapeKey_normals_polygon_get_func(ID *_selfid, KeyBlock *_self, int *normals_num, float **normals)
{
	rna_KeyBlock_normals_poly_calc(_selfid, _self, normals, normals_num);
}

static void ShapeKey_normals_polygon_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	KeyBlock *_self;
	int *normals_num;
	float **normals;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (KeyBlock *)_ptr->data;
	_data = (char *)_parms->data;
	normals_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	normals = ((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_KeyBlock_normals_poly_calc(_selfid, _self, normals, normals_num);
}

void ShapeKey_normals_split_get_func(ID *_selfid, KeyBlock *_self, int *normals_num, float **normals)
{
	rna_KeyBlock_normals_loop_calc(_selfid, _self, normals, normals_num);
}

static void ShapeKey_normals_split_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	KeyBlock *_self;
	int *normals_num;
	float **normals;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (KeyBlock *)_ptr->data;
	_data = (char *)_parms->data;
	normals_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	normals = ((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_KeyBlock_normals_loop_calc(_selfid, _self, normals, normals_num);
}

/* Repeated prototypes to detect errors */

void rna_KeyBlock_normals_vert_calc(ID *_selfid, KeyBlock *_self, int *normals_num, float **normals);
void rna_KeyBlock_normals_poly_calc(ID *_selfid, KeyBlock *_self, int *normals_num, float **normals);
void rna_KeyBlock_normals_loop_calc(ID *_selfid, KeyBlock *_self, int *normals_num, float **normals);




/* Key */
static PointerPropertyRNA rna_Key_reference_key_;
PropertyRNA &rna_Key_reference_key = reinterpret_cast<PropertyRNA &>(rna_Key_reference_key_);

static CollectionPropertyRNA rna_Key_key_blocks_;
PropertyRNA &rna_Key_key_blocks = reinterpret_cast<PropertyRNA &>(rna_Key_key_blocks_);

static PointerPropertyRNA rna_Key_animation_data_;
PropertyRNA &rna_Key_animation_data = reinterpret_cast<PropertyRNA &>(rna_Key_animation_data_);

static PointerPropertyRNA rna_Key_user_;
PropertyRNA &rna_Key_user = reinterpret_cast<PropertyRNA &>(rna_Key_user_);

static BoolPropertyRNA rna_Key_use_relative_;
PropertyRNA &rna_Key_use_relative = reinterpret_cast<PropertyRNA &>(rna_Key_use_relative_);

static FloatPropertyRNA rna_Key_eval_time_;
PropertyRNA &rna_Key_eval_time = reinterpret_cast<PropertyRNA &>(rna_Key_eval_time_);

StructRNA *RNA_Key;
void register_struct_Key(BlenderRNA &brna)
{
	rna_Key_reference_key_ = {
		{&rna_Key_key_blocks, 	nullptr,
		-1, "reference_key", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reference Key",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Key_reference_key_get, nullptr, nullptr, nullptr,RNA_ShapeKey
	};

	rna_Key_key_blocks_ = {
		{&rna_Key_animation_data, 	&rna_Key_reference_key,
		-1, "key_blocks", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Key Blocks",
		"Shape keys",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Key_key_blocks_begin, Key_key_blocks_next, Key_key_blocks_end, Key_key_blocks_get, nullptr, Key_key_blocks_lookup_int, Key_key_blocks_lookup_string, nullptr, RNA_ShapeKey
	};

	rna_Key_animation_data_ = {
		{&rna_Key_user, 	&rna_Key_key_blocks,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Key_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	rna_Key_user_ = {
		{&rna_Key_use_relative, 	&rna_Key_animation_data,
		-1, "user", 8650944, 2, 0, 0, 0, PropertyPathTemplateType(0), "User",
		"Data-block using these shape keys",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Key_user_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_Key_use_relative_ = {
		{&rna_Key_eval_time, 	&rna_Key_user,
		-1, "use_relative", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Relative",
		"Make shape keys relative, otherwise play through shapes as a sequence using the evaluation time",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Key_use_relative_get, Key_use_relative_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Key_eval_time_ = {
		{nullptr, 	&rna_Key_use_relative,
		-1, "eval_time", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Evaluation Time",
		"Evaluation time for absolute shape keys",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Key, ctime), RawPropertyType(5), nullptr},
		Key_eval_time_get, Key_eval_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1048574.0f, 0.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_Key;
	srna->cont.properties = {&rna_Key_reference_key, &rna_Key_eval_time};
	srna->identifier = "Key";
	srna->flag = 519;
	srna->name = "Key";
	srna->description = "Shape keys data-block containing different shapes of geometric data-blocks";
	srna->translation_context = "*";
	srna->icon = 190;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Shape Key */
static CollectionPropertyRNA rna_ShapeKey_rna_properties_;
PropertyRNA &rna_ShapeKey_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_rna_properties_);

static PointerPropertyRNA rna_ShapeKey_rna_type_;
PropertyRNA &rna_ShapeKey_rna_type = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_rna_type_);

static StringPropertyRNA rna_ShapeKey_name_;
PropertyRNA &rna_ShapeKey_name = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_name_);

static BoolPropertyRNA rna_ShapeKey_select_;
PropertyRNA &rna_ShapeKey_select = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_select_);

static FloatPropertyRNA rna_ShapeKey_frame_;
PropertyRNA &rna_ShapeKey_frame = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_frame_);

static FloatPropertyRNA rna_ShapeKey_value_;
PropertyRNA &rna_ShapeKey_value = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_value_);

static EnumPropertyRNA rna_ShapeKey_interpolation_;
PropertyRNA &rna_ShapeKey_interpolation = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_interpolation_);

static StringPropertyRNA rna_ShapeKey_vertex_group_;
PropertyRNA &rna_ShapeKey_vertex_group = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_vertex_group_);

static PointerPropertyRNA rna_ShapeKey_relative_key_;
PropertyRNA &rna_ShapeKey_relative_key = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_relative_key_);

static BoolPropertyRNA rna_ShapeKey_mute_;
PropertyRNA &rna_ShapeKey_mute = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_mute_);

static BoolPropertyRNA rna_ShapeKey_lock_shape_;
PropertyRNA &rna_ShapeKey_lock_shape = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_lock_shape_);

static FloatPropertyRNA rna_ShapeKey_slider_min_;
PropertyRNA &rna_ShapeKey_slider_min = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_slider_min_);

static FloatPropertyRNA rna_ShapeKey_slider_max_;
PropertyRNA &rna_ShapeKey_slider_max = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_slider_max_);

static CollectionPropertyRNA rna_ShapeKey_data_;
PropertyRNA &rna_ShapeKey_data = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_data_);

static CollectionPropertyRNA rna_ShapeKey_points_;
PropertyRNA &rna_ShapeKey_points = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_points_);

static FloatPropertyRNA rna_ShapeKey_normals_vertex_get_normals_;
PropertyRNA &rna_ShapeKey_normals_vertex_get_normals = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_normals_vertex_get_normals_);

FunctionRNA *rna_ShapeKey_normals_vertex_get_func;
static FloatPropertyRNA rna_ShapeKey_normals_polygon_get_normals_;
PropertyRNA &rna_ShapeKey_normals_polygon_get_normals = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_normals_polygon_get_normals_);

FunctionRNA *rna_ShapeKey_normals_polygon_get_func;
static FloatPropertyRNA rna_ShapeKey_normals_split_get_normals_;
PropertyRNA &rna_ShapeKey_normals_split_get_normals = reinterpret_cast<PropertyRNA &>(rna_ShapeKey_normals_split_get_normals_);

FunctionRNA *rna_ShapeKey_normals_split_get_func;
StructRNA *RNA_ShapeKey;
void register_struct_ShapeKey(BlenderRNA &brna)
{
	rna_ShapeKey_rna_properties_ = {
		{&rna_ShapeKey_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_rna_properties_begin, ShapeKey_rna_properties_next, ShapeKey_rna_properties_end, ShapeKey_rna_properties_get, nullptr, nullptr, ShapeKey_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ShapeKey_rna_type_ = {
		{&rna_ShapeKey_name, 	&rna_ShapeKey_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ShapeKey_name_ = {
		{&rna_ShapeKey_select, 	&rna_ShapeKey_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of Shape Key",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_name_get, ShapeKey_name_length, ShapeKey_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_ShapeKey_select_ = {
		{&rna_ShapeKey_frame, 	&rna_ShapeKey_name,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Shape key selection state",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_select_get, ShapeKey_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShapeKey_frame_ = {
		{&rna_ShapeKey_value, 	&rna_ShapeKey_select,
		-1, "frame", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame for absolute keys",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_frame_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShapeKey_value_ = {
		{&rna_ShapeKey_interpolation, 	&rna_ShapeKey_frame,
		-1, "value", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Value",
		"Value of shape key at the current frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 1638400, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_value_get, ShapeKey_value_set, nullptr, nullptr, rna_ShapeKey_value_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_ShapeKey_interpolation_items[5] = {
		{0, "KEY_LINEAR", 0, "Linear", ""	},
		{1, "KEY_CARDINAL", 0, "Cardinal", ""	},
		{3, "KEY_CATMULL_ROM", 0, "Catmull-Rom", ""	},
		{2, "KEY_BSPLINE", 0, "BSpline", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShapeKey_interpolation_ = {
		{&rna_ShapeKey_vertex_group, 	&rna_ShapeKey_value,
		-1, "interpolation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interpolation",
		"Interpolation type for absolute shape keys",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(KeyBlock, type), RawPropertyType(1), nullptr},
		ShapeKey_interpolation_get, ShapeKey_interpolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShapeKey_interpolation_items, 4, 0
	};

	rna_ShapeKey_vertex_group_ = {
		{&rna_ShapeKey_relative_key, 	&rna_ShapeKey_interpolation,
		-1, "vertex_group", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group",
		"Vertex weight group, to blend with basis shape",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_vertex_group_get, ShapeKey_vertex_group_length, ShapeKey_vertex_group_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_ShapeKey_relative_key_ = {
		{&rna_ShapeKey_mute, 	&rna_ShapeKey_vertex_group,
		-1, "relative_key", 8650881, 0, 0, 0, 0, PropertyPathTemplateType(0), "Relative Key",
		"Shape used as a relative key",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_relative_key_get, ShapeKey_relative_key_set, nullptr, nullptr,RNA_ShapeKey
	};

	rna_ShapeKey_mute_ = {
		{&rna_ShapeKey_lock_shape, 	&rna_ShapeKey_relative_key,
		-1, "mute", 4355, 1, 0, 0, 0, PropertyPathTemplateType(0), "Mute",
		"Toggle the effect of the shape key",
		8, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_mute_get, ShapeKey_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShapeKey_lock_shape_ = {
		{&rna_ShapeKey_slider_min, 	&rna_ShapeKey_mute,
		-1, "lock_shape", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock Shape",
		"Protect the shape key from accidental sculpting and editing",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_lock_shape_get, ShapeKey_lock_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShapeKey_slider_min_ = {
		{&rna_ShapeKey_slider_max, 	&rna_ShapeKey_lock_shape,
		-1, "slider_min", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Slider Min",
		"Lowest value allowed by the shape key slider",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShapeKey_update_minmax, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_slider_min_get, ShapeKey_slider_min_set, nullptr, nullptr, rna_ShapeKey_slider_min_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShapeKey_slider_max_ = {
		{&rna_ShapeKey_data, 	&rna_ShapeKey_slider_min,
		-1, "slider_max", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Slider Max",
		"Highest value allowed by the shape key slider",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShapeKey_update_minmax, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_slider_max_get, ShapeKey_slider_max_set, nullptr, nullptr, rna_ShapeKey_slider_max_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ShapeKey_data_ = {
		{&rna_ShapeKey_points, 	&rna_ShapeKey_slider_max,
		-1, "data", 0, 4, 0, 0, 0, PropertyPathTemplateType(0), "Data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_data_begin, ShapeKey_data_next, ShapeKey_data_end, ShapeKey_data_get, ShapeKey_data_length, ShapeKey_data_lookup_int, nullptr, nullptr, RNA_UnknownType
	};

	rna_ShapeKey_points_ = {
		{nullptr, 	&rna_ShapeKey_data,
		-1, "points", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Points",
		"Optimized access to shape keys point data, when using foreach_get/foreach_set accessors. Warning: Does not support legacy Curve shape keys.",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKey_points_begin, ShapeKey_points_next, ShapeKey_points_end, ShapeKey_points_get, ShapeKey_points_length, ShapeKey_points_lookup_int, nullptr, nullptr, RNA_ShapeKeyPoint
	};

	StructRNA *srna = RNA_ShapeKey;
	srna->cont.properties = {&rna_ShapeKey_rna_properties, &rna_ShapeKey_points};
	srna->identifier = "ShapeKey";
	srna->flag = 516;
	srna->name = "Shape Key";
	srna->description = "Shape key in a shape keys data-block";
	srna->translation_context = "*";
	srna->icon = 190;
	srna->nameproperty = &rna_ShapeKey_name;
	srna->iteratorproperty = &rna_ShapeKey_rna_properties;
	srna->path = rna_ShapeKey_path;
	{
	rna_ShapeKey_normals_vertex_get_normals_ = {
		{nullptr, 	nullptr,
		-1, "normals", 131075, 0, 2, 0, 0, PropertyPathTemplateType(0), "normals",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_KeyBlock_normals_vert_len, 2, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ShapeKey_normals_vertex_get_normals, &rna_ShapeKey_normals_vertex_get_normals};
		func->identifier = "normals_vertex_get";
		func->flag = 2048;
		func->description = "Compute local space vertices\' normals for this shape key";
		func->call = ShapeKey_normals_vertex_get_call;
		rna_ShapeKey_normals_vertex_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ShapeKey_normals_polygon_get_normals_ = {
		{nullptr, 	nullptr,
		-1, "normals", 131075, 0, 2, 0, 0, PropertyPathTemplateType(0), "normals",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_KeyBlock_normals_poly_len, 2, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ShapeKey_normals_polygon_get_normals, &rna_ShapeKey_normals_polygon_get_normals};
		func->identifier = "normals_polygon_get";
		func->flag = 2048;
		func->description = "Compute local space faces\' normals for this shape key";
		func->call = ShapeKey_normals_polygon_get_call;
		rna_ShapeKey_normals_polygon_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ShapeKey_normals_split_get_normals_ = {
		{nullptr, 	nullptr,
		-1, "normals", 131075, 0, 2, 0, 0, PropertyPathTemplateType(0), "normals",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_KeyBlock_normals_loop_len, 2, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ShapeKey_normals_split_get_normals, &rna_ShapeKey_normals_split_get_normals};
		func->identifier = "normals_split_get";
		func->flag = 2048;
		func->description = "Compute local space face corners\' normals for this shape key";
		func->call = ShapeKey_normals_split_get_call;
		rna_ShapeKey_normals_split_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Shape Key Point */
static CollectionPropertyRNA rna_ShapeKeyPoint_rna_properties_;
PropertyRNA &rna_ShapeKeyPoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyPoint_rna_properties_);

static PointerPropertyRNA rna_ShapeKeyPoint_rna_type_;
PropertyRNA &rna_ShapeKeyPoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyPoint_rna_type_);

static FloatPropertyRNA rna_ShapeKeyPoint_co_;
PropertyRNA &rna_ShapeKeyPoint_co = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyPoint_co_);

StructRNA *RNA_ShapeKeyPoint;
void register_struct_ShapeKeyPoint(BlenderRNA &brna)
{
	rna_ShapeKeyPoint_rna_properties_ = {
		{&rna_ShapeKeyPoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKeyPoint_rna_properties_begin, ShapeKeyPoint_rna_properties_next, ShapeKeyPoint_rna_properties_end, ShapeKeyPoint_rna_properties_get, nullptr, nullptr, ShapeKeyPoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ShapeKeyPoint_rna_type_ = {
		{&rna_ShapeKeyPoint_co, 	&rna_ShapeKeyPoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKeyPoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_ShapeKeyPoint_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShapeKeyPoint_co_ = {
		{nullptr, 	&rna_ShapeKeyPoint_rna_type,
		-1, "co", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec3f, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShapeKeyPoint_co_get, ShapeKeyPoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShapeKeyPoint_co_default
	};

	StructRNA *srna = RNA_ShapeKeyPoint;
	srna->cont.properties = {&rna_ShapeKeyPoint_rna_properties, &rna_ShapeKeyPoint_co};
	srna->identifier = "ShapeKeyPoint";
	srna->flag = 516;
	srna->name = "Shape Key Point";
	srna->description = "Point in a shape key";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ShapeKeyPoint_rna_properties;
	srna->path = rna_ShapeKeyPoint_path;
};

/* Shape Key Curve Point */
static CollectionPropertyRNA rna_ShapeKeyCurvePoint_rna_properties_;
PropertyRNA &rna_ShapeKeyCurvePoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyCurvePoint_rna_properties_);

static PointerPropertyRNA rna_ShapeKeyCurvePoint_rna_type_;
PropertyRNA &rna_ShapeKeyCurvePoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyCurvePoint_rna_type_);

static FloatPropertyRNA rna_ShapeKeyCurvePoint_co_;
PropertyRNA &rna_ShapeKeyCurvePoint_co = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyCurvePoint_co_);

static FloatPropertyRNA rna_ShapeKeyCurvePoint_tilt_;
PropertyRNA &rna_ShapeKeyCurvePoint_tilt = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyCurvePoint_tilt_);

static FloatPropertyRNA rna_ShapeKeyCurvePoint_radius_;
PropertyRNA &rna_ShapeKeyCurvePoint_radius = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyCurvePoint_radius_);

StructRNA *RNA_ShapeKeyCurvePoint;
void register_struct_ShapeKeyCurvePoint(BlenderRNA &brna)
{
	rna_ShapeKeyCurvePoint_rna_properties_ = {
		{&rna_ShapeKeyCurvePoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKeyCurvePoint_rna_properties_begin, ShapeKeyCurvePoint_rna_properties_next, ShapeKeyCurvePoint_rna_properties_end, ShapeKeyCurvePoint_rna_properties_get, nullptr, nullptr, ShapeKeyCurvePoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ShapeKeyCurvePoint_rna_type_ = {
		{&rna_ShapeKeyCurvePoint_co, 	&rna_ShapeKeyCurvePoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKeyCurvePoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_ShapeKeyCurvePoint_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShapeKeyCurvePoint_co_ = {
		{&rna_ShapeKeyCurvePoint_tilt, 	&rna_ShapeKeyCurvePoint_rna_type,
		-1, "co", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ShapeKeyCurvePoint_co_get, ShapeKeyCurvePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShapeKeyCurvePoint_co_default
	};

	rna_ShapeKeyCurvePoint_tilt_ = {
		{&rna_ShapeKeyCurvePoint_radius, 	&rna_ShapeKeyCurvePoint_co,
		-1, "tilt", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tilt",
		"Tilt in 3D View",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKeyCurvePoint_tilt_get, ShapeKeyCurvePoint_tilt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShapeKeyCurvePoint_radius_ = {
		{nullptr, 	&rna_ShapeKeyCurvePoint_tilt,
		-1, "radius", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Radius",
		"Radius for beveling",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKeyCurvePoint_radius_get, ShapeKeyCurvePoint_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ShapeKeyCurvePoint;
	srna->cont.properties = {&rna_ShapeKeyCurvePoint_rna_properties, &rna_ShapeKeyCurvePoint_radius};
	srna->identifier = "ShapeKeyCurvePoint";
	srna->flag = 516;
	srna->name = "Shape Key Curve Point";
	srna->description = "Point in a shape key for curves";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ShapeKeyCurvePoint_rna_properties;
	srna->path = rna_ShapeKeyPoint_path;
};

/* Shape Key Bézier Point */
static CollectionPropertyRNA rna_ShapeKeyBezierPoint_rna_properties_;
PropertyRNA &rna_ShapeKeyBezierPoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyBezierPoint_rna_properties_);

static PointerPropertyRNA rna_ShapeKeyBezierPoint_rna_type_;
PropertyRNA &rna_ShapeKeyBezierPoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyBezierPoint_rna_type_);

static FloatPropertyRNA rna_ShapeKeyBezierPoint_co_;
PropertyRNA &rna_ShapeKeyBezierPoint_co = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyBezierPoint_co_);

static FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_left_;
PropertyRNA &rna_ShapeKeyBezierPoint_handle_left = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyBezierPoint_handle_left_);

static FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_right_;
PropertyRNA &rna_ShapeKeyBezierPoint_handle_right = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyBezierPoint_handle_right_);

static FloatPropertyRNA rna_ShapeKeyBezierPoint_tilt_;
PropertyRNA &rna_ShapeKeyBezierPoint_tilt = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyBezierPoint_tilt_);

static FloatPropertyRNA rna_ShapeKeyBezierPoint_radius_;
PropertyRNA &rna_ShapeKeyBezierPoint_radius = reinterpret_cast<PropertyRNA &>(rna_ShapeKeyBezierPoint_radius_);

StructRNA *RNA_ShapeKeyBezierPoint;
void register_struct_ShapeKeyBezierPoint(BlenderRNA &brna)
{
	rna_ShapeKeyBezierPoint_rna_properties_ = {
		{&rna_ShapeKeyBezierPoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKeyBezierPoint_rna_properties_begin, ShapeKeyBezierPoint_rna_properties_next, ShapeKeyBezierPoint_rna_properties_end, ShapeKeyBezierPoint_rna_properties_get, nullptr, nullptr, ShapeKeyBezierPoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ShapeKeyBezierPoint_rna_type_ = {
		{&rna_ShapeKeyBezierPoint_co, 	&rna_ShapeKeyBezierPoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKeyBezierPoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_ShapeKeyBezierPoint_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShapeKeyBezierPoint_co_ = {
		{&rna_ShapeKeyBezierPoint_handle_left, 	&rna_ShapeKeyBezierPoint_rna_type,
		-1, "co", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ShapeKeyBezierPoint_co_get, ShapeKeyBezierPoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShapeKeyBezierPoint_co_default
	};

	static float rna_ShapeKeyBezierPoint_handle_left_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShapeKeyBezierPoint_handle_left_ = {
		{&rna_ShapeKeyBezierPoint_handle_right, 	&rna_ShapeKeyBezierPoint_co,
		-1, "handle_left", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 1 Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ShapeKeyBezierPoint_handle_left_get, ShapeKeyBezierPoint_handle_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShapeKeyBezierPoint_handle_left_default
	};

	static float rna_ShapeKeyBezierPoint_handle_right_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShapeKeyBezierPoint_handle_right_ = {
		{&rna_ShapeKeyBezierPoint_tilt, 	&rna_ShapeKeyBezierPoint_handle_left,
		-1, "handle_right", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 2 Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ShapeKeyBezierPoint_handle_right_get, ShapeKeyBezierPoint_handle_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShapeKeyBezierPoint_handle_right_default
	};

	rna_ShapeKeyBezierPoint_tilt_ = {
		{&rna_ShapeKeyBezierPoint_radius, 	&rna_ShapeKeyBezierPoint_handle_right,
		-1, "tilt", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tilt",
		"Tilt in 3D View",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKeyBezierPoint_tilt_get, ShapeKeyBezierPoint_tilt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShapeKeyBezierPoint_radius_ = {
		{nullptr, 	&rna_ShapeKeyBezierPoint_tilt,
		-1, "radius", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Radius",
		"Radius for beveling",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Key_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShapeKeyBezierPoint_radius_get, ShapeKeyBezierPoint_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ShapeKeyBezierPoint;
	srna->cont.properties = {&rna_ShapeKeyBezierPoint_rna_properties, &rna_ShapeKeyBezierPoint_radius};
	srna->identifier = "ShapeKeyBezierPoint";
	srna->flag = 516;
	srna->name = "Shape Key Bézier Point";
	srna->description = "Point in a shape key for Bézier curves";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ShapeKeyBezierPoint_rna_properties;
	srna->path = rna_ShapeKeyPoint_path;
};


}  // namespace blender
