
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

#include "rna_curves.cc"
#include "rna_curves_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_CurvePoint_rna_properties;
extern PropertyRNA &rna_CurvePoint_rna_type;
extern PropertyRNA &rna_CurvePoint_position;
extern PropertyRNA &rna_CurvePoint_radius;
extern PropertyRNA &rna_CurvePoint_index;


extern PropertyRNA &rna_CurveSlice_rna_properties;
extern PropertyRNA &rna_CurveSlice_rna_type;
extern PropertyRNA &rna_CurveSlice_points;
extern PropertyRNA &rna_CurveSlice_first_point_index;
extern PropertyRNA &rna_CurveSlice_points_length;
extern PropertyRNA &rna_CurveSlice_index;


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

extern PropertyRNA &rna_Curves_curves;
extern PropertyRNA &rna_Curves_points;
extern PropertyRNA &rna_Curves_position_data;
extern PropertyRNA &rna_Curves_curve_offset_data;
extern PropertyRNA &rna_Curves_normals;
extern PropertyRNA &rna_Curves_materials;
extern PropertyRNA &rna_Curves_surface;
extern PropertyRNA &rna_Curves_surface_uv_map;
extern PropertyRNA &rna_Curves_use_mirror_x;
extern PropertyRNA &rna_Curves_use_mirror_y;
extern PropertyRNA &rna_Curves_use_mirror_z;
extern PropertyRNA &rna_Curves_selection_domain;
extern PropertyRNA &rna_Curves_use_sculpt_collision;
extern PropertyRNA &rna_Curves_surface_collision_distance;
extern PropertyRNA &rna_Curves_attributes;
extern PropertyRNA &rna_Curves_color_attributes;
extern PropertyRNA &rna_Curves_animation_data;

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


extern FunctionRNA *rna_Curves_add_curves_func;
extern PropertyRNA &rna_Curves_add_curves_sizes;

extern FunctionRNA *rna_Curves_remove_curves_func;
extern PropertyRNA &rna_Curves_remove_curves_indices;

extern FunctionRNA *rna_Curves_resize_curves_func;
extern PropertyRNA &rna_Curves_resize_curves_sizes;
extern PropertyRNA &rna_Curves_resize_curves_indices;

extern FunctionRNA *rna_Curves_reorder_curves_func;
extern PropertyRNA &rna_Curves_reorder_curves_new_indices;

extern FunctionRNA *rna_Curves_set_types_func;
extern PropertyRNA &rna_Curves_set_types_type;
extern PropertyRNA &rna_Curves_set_types_indices;

extern FunctionRNA *rna_Curves_unit_test_compare_func;
extern PropertyRNA &rna_Curves_unit_test_compare_curves;
extern PropertyRNA &rna_Curves_unit_test_compare_threshold;
extern PropertyRNA &rna_Curves_unit_test_compare_result;



extern PropertyRNA &rna_FloatVectorValueReadOnly_rna_properties;
extern PropertyRNA &rna_FloatVectorValueReadOnly_rna_type;
extern PropertyRNA &rna_FloatVectorValueReadOnly_vector;

static PointerRNA CurvePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CurvePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurvePoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurvePoint_rna_properties_get(iter);
    }
}

void CurvePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurvePoint_rna_properties_get(iter);
    }
}

void CurvePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CurvePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CurvePoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void CurvePoint_position_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_CurvePoint_location_get;
    fn(ptr, values);
}

void CurvePoint_position_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_CurvePoint_location_set;
    fn(ptr, values);
}

float CurvePoint_radius_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_CurvePoint_radius_get;
    return fn(ptr);
}

void CurvePoint_radius_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_CurvePoint_radius_set;
    fn(ptr, value);
}

int CurvePoint_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_CurvePoint_index_get;
    return fn(ptr);
}

static PointerRNA CurveSlice_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CurveSlice_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveSlice_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveSlice_rna_properties_get(iter);
    }
}

void CurveSlice_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveSlice_rna_properties_get(iter);
    }
}

void CurveSlice_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CurveSlice_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CurveSlice_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int CurveSlice_points_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_CurveSlice_points_length_get;
    return fn(ptr);
}

static PointerRNA CurveSlice_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CurvePoint, rna_iterator_array_get(iter));
}

void CurveSlice_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveSlice_points;

    PropCollectionBeginFunc fn = rna_CurveSlice_points_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveSlice_points_get(iter);
    }
}

void CurveSlice_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveSlice_points_get(iter);
    }
}

void CurveSlice_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool CurveSlice_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    CurveSlice_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = CurveSlice_points_get(&iter); }
    }

    CurveSlice_points_end(&iter);

    return found;
}

int CurveSlice_first_point_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_CurveSlice_first_point_index_get;
    return fn(ptr);
}

int CurveSlice_points_length_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_CurveSlice_points_length_get;
    return fn(ptr);
}

int CurveSlice_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_CurveSlice_index_get;
    return fn(ptr);
}

int Curves_curves_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Curves_curves_length;
    return fn(ptr);
}

static PointerRNA Curves_curves_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CurveSlice, rna_iterator_array_get(iter));
}

void Curves_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Curves_curves;

    PropCollectionBeginFunc fn = rna_Curves_curves_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_curves_get(iter);
    }
}

void Curves_curves_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Curves_curves_get(iter);
    }
}

void Curves_curves_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Curves_curves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Curves_curves_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Curves_points_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Curves_position_data_length;
    return fn(ptr);
}

static PointerRNA Curves_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CurvePoint, rna_iterator_array_get(iter));
}

void Curves_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Curves_points;

    PropCollectionBeginFunc fn = rna_Curves_position_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_points_get(iter);
    }
}

void Curves_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Curves_points_get(iter);
    }
}

void Curves_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Curves_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Curves_points_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Curves_position_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Curves_position_data_length;
    return fn(ptr);
}

static PointerRNA Curves_position_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FloatVectorAttributeValue, rna_iterator_array_get(iter));
}

void Curves_position_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Curves_position_data;

    PropCollectionBeginFunc fn = rna_Curves_position_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_position_data_get(iter);
    }
}

void Curves_position_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Curves_position_data_get(iter);
    }
}

void Curves_position_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Curves_position_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Curves_position_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Curves_curve_offset_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Curves_curve_offset_data_length;
    return fn(ptr);
}

static PointerRNA Curves_curve_offset_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_IntAttributeValue, rna_iterator_array_get(iter));
}

void Curves_curve_offset_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Curves_curve_offset_data;

    PropCollectionBeginFunc fn = rna_Curves_curve_offset_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_curve_offset_data_get(iter);
    }
}

void Curves_curve_offset_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Curves_curve_offset_data_get(iter);
    }
}

void Curves_curve_offset_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Curves_curve_offset_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Curves_curve_offset_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Curves_normals_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Curves_position_data_length;
    return fn(ptr);
}

static PointerRNA Curves_normals_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FloatVectorValueReadOnly, rna_iterator_array_get(iter));
}

void Curves_normals_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Curves_normals;

    PropCollectionBeginFunc fn = rna_Curves_normals_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_normals_get(iter);
    }
}

void Curves_normals_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Curves_normals_get(iter);
    }
}

void Curves_normals_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Curves_normals_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Curves_normals_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curves_normals_get(&iter); }
    }

    Curves_normals_end(&iter);

    return found;
}

int Curves_materials_length(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA Curves_materials_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Material, rna_iterator_array_dereference_get(iter));
}

void Curves_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Curves_materials;

    rna_iterator_array_begin(iter, ptr, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Curves_materials_get(iter);
    }
}

void Curves_materials_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Curves_materials_get(iter);
    }
}

void Curves_materials_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Curves_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Curves_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curves_materials_get(&iter); }
    }

    Curves_materials_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool Curves_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Curves_materials_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ID_name_length(&iter.ptr);
            if (namelen < 1024) {
                ID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                ID_name_get(&iter.ptr, name);
                if (strcmp(name, key) == 0) {
                    MEM_delete(name);

                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
                else {
                    MEM_delete(name);
                }
            }
        }
        Curves_materials_next(&iter);
    }
    Curves_materials_end(&iter);

    return found;
}

PointerRNA Curves_surface_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->surface);
}

void Curves_surface_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Curves *data = (Curves *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->surface = value.data;
}

void Curves_surface_uv_map_get(PointerRNA *ptr, char *value)
{
    Curves *data = (Curves *)(ptr->data);
    if (data->surface_uv_map == nullptr) {
        *value = '\0';
        return;
    }
    strcpy(value, data->surface_uv_map);
}

int Curves_surface_uv_map_length(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (data->surface_uv_map == nullptr) ? 0 : strlen(data->surface_uv_map);
}

void Curves_surface_uv_map_set(PointerRNA *ptr, const char *value)
{
    Curves *data = (Curves *)(ptr->data);
    if (data->surface_uv_map != nullptr) { MEM_delete(data->surface_uv_map); }
    const size_t length = strlen(value);
    if (length > 0) {
        data->surface_uv_map = MEM_new_array_uninitialized<char>(length + 1, __func__);
        memcpy(data->surface_uv_map, value, length + 1);
    } else { data->surface_uv_map = nullptr; }
}

bool Curves_use_mirror_x_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return ((uint64_t(data->symmetry) & 1) != 0);
}

void Curves_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) | 1); }
    else { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) & ~uint64_t(1)); }
}

bool Curves_use_mirror_y_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return ((uint64_t(data->symmetry) & 2) != 0);
}

void Curves_use_mirror_y_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) | 2); }
    else { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) & ~uint64_t(2)); }
}

bool Curves_use_mirror_z_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return ((uint64_t(data->symmetry) & 4) != 0);
}

void Curves_use_mirror_z_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) | 4); }
    else { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) & ~uint64_t(4)); }
}

int Curves_selection_domain_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (int)(data->selection_domain);
}

void Curves_selection_domain_set(PointerRNA *ptr, int value)
{
    Curves *data = (Curves *)(ptr->data);
    data->selection_domain = (std::remove_reference_t<decltype(data->selection_domain)>)value;
}

bool Curves_use_sculpt_collision_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void Curves_use_sculpt_collision_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

float Curves_surface_collision_distance_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (float)(data->surface_collision_distance);
}

void Curves_surface_collision_distance_set(PointerRNA *ptr, float value)
{
    Curves *data = (Curves *)(ptr->data);
    data->surface_collision_distance = (std::remove_reference_t<decltype(data->surface_collision_distance)>)std::clamp(value, 0.0000001192f, FLT_MAX);
}

int Curves_attributes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_AttributeGroup_length;
    return fn(ptr);
}

static PointerRNA Curves_attributes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_AttributeGroup_iterator_get;
    return fn(iter);
}

void Curves_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Curves_attributes;

    PropCollectionBeginFunc fn = rna_AttributeGroup_iterator_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_attributes_get(iter);
    }
}

void Curves_attributes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Curves_attributes_get(iter);
    }
}

void Curves_attributes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Curves_attributes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Curves_attributes_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curves_attributes_get(&iter); }
    }

    Curves_attributes_end(&iter);

    return found;
}

bool Curves_attributes_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_AttributeGroup_lookup_string;
    return fn(ptr, key, r_ptr);
}

int Curves_color_attributes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_AttributeGroup_color_length;
    return fn(ptr);
}

static PointerRNA Curves_color_attributes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_AttributeGroup_iterator_get;
    return fn(iter);
}

void Curves_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Curves_color_attributes;

    PropCollectionBeginFunc fn = rna_AttributeGroup_color_iterator_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_color_attributes_get(iter);
    }
}

void Curves_color_attributes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Curves_color_attributes_get(iter);
    }
}

void Curves_color_attributes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Curves_color_attributes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Curves_color_attributes_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curves_color_attributes_get(&iter); }
    }

    Curves_color_attributes_end(&iter);

    return found;
}

PointerRNA Curves_animation_data_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA FloatVectorValueReadOnly_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FloatVectorValueReadOnly_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FloatVectorValueReadOnly_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatVectorValueReadOnly_rna_properties_get(iter);
    }
}

void FloatVectorValueReadOnly_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FloatVectorValueReadOnly_rna_properties_get(iter);
    }
}

void FloatVectorValueReadOnly_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FloatVectorValueReadOnly_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FloatVectorValueReadOnly_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void FloatVectorValueReadOnly_vector_get(PointerRNA *ptr, float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}



void Curves_add_curves_func(Curves *_self, ReportList *reports, int sizes_num, int *sizes)
{
	rna_Curves_add_curves(_self, reports, sizes, sizes_num);
}

static void Curves_add_curves_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curves *_self;
	int sizes_num;
	const int *sizes;
	char *_data;
	
	_self = (Curves *)_ptr->data;
	_data = (char *)_parms->data;
	sizes_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	sizes = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Curves_add_curves(_self, reports, sizes, sizes_num);
}

void Curves_remove_curves_func(Curves *_self, ReportList *reports, int indices_num, int *indices)
{
	rna_Curves_remove_curves(_self, reports, indices, indices_num);
}

static void Curves_remove_curves_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curves *_self;
	int indices_num;
	const int *indices;
	char *_data;
	
	_self = (Curves *)_ptr->data;
	_data = (char *)_parms->data;
	indices_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	indices = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Curves_remove_curves(_self, reports, indices, indices_num);
}

void Curves_resize_curves_func(Curves *_self, ReportList *reports, int sizes_num, int *sizes, int indices_num, int *indices)
{
	rna_Curves_resize_curves(_self, reports, sizes, sizes_num, indices, indices_num);
}

static void Curves_resize_curves_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curves *_self;
	int sizes_num;
	const int *sizes;
	int indices_num;
	const int *indices;
	char *_data;
	
	_self = (Curves *)_ptr->data;
	_data = (char *)_parms->data;
	sizes_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	sizes = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	indices_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	indices = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Curves_resize_curves(_self, reports, sizes, sizes_num, indices, indices_num);
}

void Curves_reorder_curves_func(Curves *_self, ReportList *reports, int new_indices_num, int *new_indices)
{
	rna_Curves_reorder_curves(_self, reports, new_indices, new_indices_num);
}

static void Curves_reorder_curves_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curves *_self;
	int new_indices_num;
	const int *new_indices;
	char *_data;
	
	_self = (Curves *)_ptr->data;
	_data = (char *)_parms->data;
	new_indices_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	new_indices = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Curves_reorder_curves(_self, reports, new_indices, new_indices_num);
}

void Curves_set_types_func(Curves *_self, ReportList *reports, int type, int indices_num, int *indices)
{
	rna_Curves_set_types(_self, reports, type, indices, indices_num);
}

static void Curves_set_types_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curves *_self;
	int type;
	int indices_num;
	const int *indices;
	char *_data;
	
	_self = (Curves *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	indices_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	indices = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Curves_set_types(_self, reports, type, indices, indices_num);
}

const char * Curves_unit_test_compare_func(Curves *_self, Curves *curves, float threshold)
{
	return rna_Curves_unit_test_compare(_self, curves, threshold);
}

static void Curves_unit_test_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curves *_self;
	Curves *curves;
	float threshold;
	const char * result;
	char *_data, *_retdata;
	
	_self = (Curves *)_ptr->data;
	_data = (char *)_parms->data;
	curves = *((Curves **)_data);
	_data += 8;
	threshold = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Curves_unit_test_compare(_self, curves, threshold);
	*((const char * *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

void rna_Curves_add_curves(Curves *_self, ReportList *reports, int sizes_num, int *sizes);
void rna_Curves_remove_curves(Curves *_self, ReportList *reports, int indices_num, int *indices);
void rna_Curves_resize_curves(Curves *_self, ReportList *reports, int sizes_num, int *sizes, int indices_num, int *indices);
void rna_Curves_reorder_curves(Curves *_self, ReportList *reports, int new_indices_num, int *new_indices);
void rna_Curves_set_types(Curves *_self, ReportList *reports, int type, int indices_num, int *indices);
const char * rna_Curves_unit_test_compare(Curves *_self, Curves *curves, float threshold);


/* Curve Point */
static CollectionPropertyRNA rna_CurvePoint_rna_properties_;
PropertyRNA &rna_CurvePoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CurvePoint_rna_properties_);

static PointerPropertyRNA rna_CurvePoint_rna_type_;
PropertyRNA &rna_CurvePoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_CurvePoint_rna_type_);

static FloatPropertyRNA rna_CurvePoint_position_;
PropertyRNA &rna_CurvePoint_position = reinterpret_cast<PropertyRNA &>(rna_CurvePoint_position_);

static FloatPropertyRNA rna_CurvePoint_radius_;
PropertyRNA &rna_CurvePoint_radius = reinterpret_cast<PropertyRNA &>(rna_CurvePoint_radius_);

static IntPropertyRNA rna_CurvePoint_index_;
PropertyRNA &rna_CurvePoint_index = reinterpret_cast<PropertyRNA &>(rna_CurvePoint_index_);

StructRNA *RNA_CurvePoint;
void register_struct_CurvePoint(BlenderRNA &brna)
{
	rna_CurvePoint_rna_properties_ = {
		{&rna_CurvePoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurvePoint_rna_properties_begin, CurvePoint_rna_properties_next, CurvePoint_rna_properties_end, CurvePoint_rna_properties_get, nullptr, nullptr, CurvePoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CurvePoint_rna_type_ = {
		{&rna_CurvePoint_position, 	&rna_CurvePoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurvePoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_CurvePoint_position_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_CurvePoint_position_ = {
		{&rna_CurvePoint_radius, 	&rna_CurvePoint_rna_type,
		-1, "position", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Position",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Curves_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, CurvePoint_position_get, CurvePoint_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_CurvePoint_position_default
	};

	rna_CurvePoint_radius_ = {
		{&rna_CurvePoint_index, 	&rna_CurvePoint_position,
		-1, "radius", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Radius",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curves_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurvePoint_radius_get, CurvePoint_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CurvePoint_index_ = {
		{nullptr, 	&rna_CurvePoint_radius,
		-1, "index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of this point",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurvePoint_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_CurvePoint;
	srna->cont.properties = {&rna_CurvePoint_rna_properties, &rna_CurvePoint_index};
	srna->identifier = "CurvePoint";
	srna->flag = 516;
	srna->name = "Curve Point";
	srna->description = "Curve control point";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CurvePoint_rna_properties;
	srna->path = rna_CurvePoint_path;
};

/* Curve Slice */
static CollectionPropertyRNA rna_CurveSlice_rna_properties_;
PropertyRNA &rna_CurveSlice_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CurveSlice_rna_properties_);

static PointerPropertyRNA rna_CurveSlice_rna_type_;
PropertyRNA &rna_CurveSlice_rna_type = reinterpret_cast<PropertyRNA &>(rna_CurveSlice_rna_type_);

static CollectionPropertyRNA rna_CurveSlice_points_;
PropertyRNA &rna_CurveSlice_points = reinterpret_cast<PropertyRNA &>(rna_CurveSlice_points_);

static IntPropertyRNA rna_CurveSlice_first_point_index_;
PropertyRNA &rna_CurveSlice_first_point_index = reinterpret_cast<PropertyRNA &>(rna_CurveSlice_first_point_index_);

static IntPropertyRNA rna_CurveSlice_points_length_;
PropertyRNA &rna_CurveSlice_points_length = reinterpret_cast<PropertyRNA &>(rna_CurveSlice_points_length_);

static IntPropertyRNA rna_CurveSlice_index_;
PropertyRNA &rna_CurveSlice_index = reinterpret_cast<PropertyRNA &>(rna_CurveSlice_index_);

StructRNA *RNA_CurveSlice;
void register_struct_CurveSlice(BlenderRNA &brna)
{
	rna_CurveSlice_rna_properties_ = {
		{&rna_CurveSlice_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveSlice_rna_properties_begin, CurveSlice_rna_properties_next, CurveSlice_rna_properties_end, CurveSlice_rna_properties_get, nullptr, nullptr, CurveSlice_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CurveSlice_rna_type_ = {
		{&rna_CurveSlice_points, 	&rna_CurveSlice_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveSlice_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CurveSlice_points_ = {
		{&rna_CurveSlice_first_point_index, 	&rna_CurveSlice_rna_type,
		-1, "points", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Points",
		"Control points of the curve",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveSlice_points_begin, CurveSlice_points_next, CurveSlice_points_end, CurveSlice_points_get, CurveSlice_points_length, CurveSlice_points_lookup_int, nullptr, nullptr, RNA_CurvePoint
	};

	rna_CurveSlice_first_point_index_ = {
		{&rna_CurveSlice_points_length, 	&rna_CurveSlice_points,
		-1, "first_point_index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "First Point Index",
		"The index of this curve\'s first control point",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveSlice_first_point_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_CurveSlice_points_length_ = {
		{&rna_CurveSlice_index, 	&rna_CurveSlice_first_point_index,
		-1, "points_length", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Number of Points",
		"Number of control points in the curve",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveSlice_points_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_CurveSlice_index_ = {
		{nullptr, 	&rna_CurveSlice_points_length,
		-1, "index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of this curve",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveSlice_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_CurveSlice;
	srna->cont.properties = {&rna_CurveSlice_rna_properties, &rna_CurveSlice_index};
	srna->identifier = "CurveSlice";
	srna->flag = 516;
	srna->name = "Curve Slice";
	srna->description = "A single curve from a curves data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CurveSlice_rna_properties;
	srna->path = rna_CurveSlice_path;
};

/* Hair Curves */
static CollectionPropertyRNA rna_Curves_curves_;
PropertyRNA &rna_Curves_curves = reinterpret_cast<PropertyRNA &>(rna_Curves_curves_);

static CollectionPropertyRNA rna_Curves_points_;
PropertyRNA &rna_Curves_points = reinterpret_cast<PropertyRNA &>(rna_Curves_points_);

static CollectionPropertyRNA rna_Curves_position_data_;
PropertyRNA &rna_Curves_position_data = reinterpret_cast<PropertyRNA &>(rna_Curves_position_data_);

static CollectionPropertyRNA rna_Curves_curve_offset_data_;
PropertyRNA &rna_Curves_curve_offset_data = reinterpret_cast<PropertyRNA &>(rna_Curves_curve_offset_data_);

static CollectionPropertyRNA rna_Curves_normals_;
PropertyRNA &rna_Curves_normals = reinterpret_cast<PropertyRNA &>(rna_Curves_normals_);

static CollectionPropertyRNA rna_Curves_materials_;
PropertyRNA &rna_Curves_materials = reinterpret_cast<PropertyRNA &>(rna_Curves_materials_);

static PointerPropertyRNA rna_Curves_surface_;
PropertyRNA &rna_Curves_surface = reinterpret_cast<PropertyRNA &>(rna_Curves_surface_);

static StringPropertyRNA rna_Curves_surface_uv_map_;
PropertyRNA &rna_Curves_surface_uv_map = reinterpret_cast<PropertyRNA &>(rna_Curves_surface_uv_map_);

static BoolPropertyRNA rna_Curves_use_mirror_x_;
PropertyRNA &rna_Curves_use_mirror_x = reinterpret_cast<PropertyRNA &>(rna_Curves_use_mirror_x_);

static BoolPropertyRNA rna_Curves_use_mirror_y_;
PropertyRNA &rna_Curves_use_mirror_y = reinterpret_cast<PropertyRNA &>(rna_Curves_use_mirror_y_);

static BoolPropertyRNA rna_Curves_use_mirror_z_;
PropertyRNA &rna_Curves_use_mirror_z = reinterpret_cast<PropertyRNA &>(rna_Curves_use_mirror_z_);

static EnumPropertyRNA rna_Curves_selection_domain_;
PropertyRNA &rna_Curves_selection_domain = reinterpret_cast<PropertyRNA &>(rna_Curves_selection_domain_);

static BoolPropertyRNA rna_Curves_use_sculpt_collision_;
PropertyRNA &rna_Curves_use_sculpt_collision = reinterpret_cast<PropertyRNA &>(rna_Curves_use_sculpt_collision_);

static FloatPropertyRNA rna_Curves_surface_collision_distance_;
PropertyRNA &rna_Curves_surface_collision_distance = reinterpret_cast<PropertyRNA &>(rna_Curves_surface_collision_distance_);

static CollectionPropertyRNA rna_Curves_attributes_;
PropertyRNA &rna_Curves_attributes = reinterpret_cast<PropertyRNA &>(rna_Curves_attributes_);

static CollectionPropertyRNA rna_Curves_color_attributes_;
PropertyRNA &rna_Curves_color_attributes = reinterpret_cast<PropertyRNA &>(rna_Curves_color_attributes_);

static PointerPropertyRNA rna_Curves_animation_data_;
PropertyRNA &rna_Curves_animation_data = reinterpret_cast<PropertyRNA &>(rna_Curves_animation_data_);

static IntPropertyRNA rna_Curves_add_curves_sizes_;
PropertyRNA &rna_Curves_add_curves_sizes = reinterpret_cast<PropertyRNA &>(rna_Curves_add_curves_sizes_);

FunctionRNA *rna_Curves_add_curves_func;
static IntPropertyRNA rna_Curves_remove_curves_indices_;
PropertyRNA &rna_Curves_remove_curves_indices = reinterpret_cast<PropertyRNA &>(rna_Curves_remove_curves_indices_);

FunctionRNA *rna_Curves_remove_curves_func;
static IntPropertyRNA rna_Curves_resize_curves_sizes_;
PropertyRNA &rna_Curves_resize_curves_sizes = reinterpret_cast<PropertyRNA &>(rna_Curves_resize_curves_sizes_);

static IntPropertyRNA rna_Curves_resize_curves_indices_;
PropertyRNA &rna_Curves_resize_curves_indices = reinterpret_cast<PropertyRNA &>(rna_Curves_resize_curves_indices_);

FunctionRNA *rna_Curves_resize_curves_func;
static IntPropertyRNA rna_Curves_reorder_curves_new_indices_;
PropertyRNA &rna_Curves_reorder_curves_new_indices = reinterpret_cast<PropertyRNA &>(rna_Curves_reorder_curves_new_indices_);

FunctionRNA *rna_Curves_reorder_curves_func;
static EnumPropertyRNA rna_Curves_set_types_type_;
PropertyRNA &rna_Curves_set_types_type = reinterpret_cast<PropertyRNA &>(rna_Curves_set_types_type_);

static IntPropertyRNA rna_Curves_set_types_indices_;
PropertyRNA &rna_Curves_set_types_indices = reinterpret_cast<PropertyRNA &>(rna_Curves_set_types_indices_);

FunctionRNA *rna_Curves_set_types_func;
static PointerPropertyRNA rna_Curves_unit_test_compare_curves_;
PropertyRNA &rna_Curves_unit_test_compare_curves = reinterpret_cast<PropertyRNA &>(rna_Curves_unit_test_compare_curves_);

static FloatPropertyRNA rna_Curves_unit_test_compare_threshold_;
PropertyRNA &rna_Curves_unit_test_compare_threshold = reinterpret_cast<PropertyRNA &>(rna_Curves_unit_test_compare_threshold_);

static StringPropertyRNA rna_Curves_unit_test_compare_result_;
PropertyRNA &rna_Curves_unit_test_compare_result = reinterpret_cast<PropertyRNA &>(rna_Curves_unit_test_compare_result_);

FunctionRNA *rna_Curves_unit_test_compare_func;
StructRNA *RNA_Curves;
void register_struct_Curves(BlenderRNA &brna)
{
	rna_Curves_curves_ = {
		{&rna_Curves_points, 	nullptr,
		-1, "curves", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Curves",
		"All curves in the data-block",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_curves_begin, Curves_curves_next, Curves_curves_end, Curves_curves_get, Curves_curves_length, Curves_curves_lookup_int, nullptr, nullptr, RNA_CurveSlice
	};

	rna_Curves_points_ = {
		{&rna_Curves_position_data, 	&rna_Curves_curves,
		-1, "points", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Points",
		"Control points of all curves",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_points_begin, Curves_points_next, Curves_points_end, Curves_points_get, Curves_points_length, Curves_points_lookup_int, nullptr, nullptr, RNA_CurvePoint
	};

	rna_Curves_position_data_ = {
		{&rna_Curves_curve_offset_data, 	&rna_Curves_points,
		-1, "position_data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "position_data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curves_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_position_data_begin, Curves_position_data_next, Curves_position_data_end, Curves_position_data_get, Curves_position_data_length, Curves_position_data_lookup_int, nullptr, nullptr, RNA_FloatVectorAttributeValue
	};

	rna_Curves_curve_offset_data_ = {
		{&rna_Curves_normals, 	&rna_Curves_position_data,
		-1, "curve_offset_data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "curve_offset_data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curves_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_curve_offset_data_begin, Curves_curve_offset_data_next, Curves_curve_offset_data_end, Curves_curve_offset_data_get, Curves_curve_offset_data_length, Curves_curve_offset_data_lookup_int, nullptr, nullptr, RNA_IntAttributeValue
	};

	rna_Curves_normals_ = {
		{&rna_Curves_materials, 	&rna_Curves_curve_offset_data,
		-1, "normals", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Normals",
		"The curve normal value at each of the curve\'s control points",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_normals_begin, Curves_normals_next, Curves_normals_end, Curves_normals_get, Curves_normals_length, Curves_normals_lookup_int, nullptr, nullptr, RNA_FloatVectorValueReadOnly
	};

	rna_Curves_materials_ = {
		{&rna_Curves_surface, 	&rna_Curves_normals,
		-1, "materials", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Materials",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_IDMaterials},
		Curves_materials_begin, Curves_materials_next, Curves_materials_end, Curves_materials_get, Curves_materials_length, Curves_materials_lookup_int, Curves_materials_lookup_string, rna_IDMaterials_assign_int, RNA_Material
	};

	rna_Curves_surface_ = {
		{&rna_Curves_surface_uv_map, 	&rna_Curves_materials,
		-1, "surface", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Surface",
		"Mesh object that the curves can be attached to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_surface_get, Curves_surface_set, nullptr, rna_Mesh_object_poll,RNA_Object
	};

	rna_Curves_surface_uv_map_ = {
		{&rna_Curves_use_mirror_x, 	&rna_Curves_surface,
		-1, "surface_uv_map", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Surface UV Map",
		"The name of the attribute on the surface mesh used to define the attachment of each curve",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curves_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_surface_uv_map_get, Curves_surface_uv_map_length, Curves_surface_uv_map_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Curves_use_mirror_x_ = {
		{&rna_Curves_use_mirror_y, 	&rna_Curves_surface_uv_map,
		-1, "use_mirror_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "X",
		"Enable symmetry in the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curves_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_use_mirror_x_get, Curves_use_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curves_use_mirror_y_ = {
		{&rna_Curves_use_mirror_z, 	&rna_Curves_use_mirror_x,
		-1, "use_mirror_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Y",
		"Enable symmetry in the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curves_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_use_mirror_y_get, Curves_use_mirror_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curves_use_mirror_z_ = {
		{&rna_Curves_selection_domain, 	&rna_Curves_use_mirror_y,
		-1, "use_mirror_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Z",
		"Enable symmetry in the Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curves_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_use_mirror_z_get, Curves_use_mirror_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curves_selection_domain_ = {
		{&rna_Curves_use_sculpt_collision, 	&rna_Curves_use_mirror_z,
		-1, "selection_domain", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Selection Domain",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curves_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curves, selection_domain), RawPropertyType(2), nullptr},
		Curves_selection_domain_get, Curves_selection_domain_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_curves_domain_items, 2, 0
	};

	rna_Curves_use_sculpt_collision_ = {
		{&rna_Curves_surface_collision_distance, 	&rna_Curves_selection_domain,
		-1, "use_sculpt_collision", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Sculpt Collision",
		"Enable collision with the surface while sculpting",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curves_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curves_use_sculpt_collision_get, Curves_use_sculpt_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curves_surface_collision_distance_ = {
		{&rna_Curves_attributes, 	&rna_Curves_use_sculpt_collision,
		-1, "surface_collision_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Collision distance",
		"Distance to keep the curves away from the surface",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curves_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curves, surface_collision_distance), RawPropertyType(5), nullptr},
		Curves_surface_collision_distance_get, Curves_surface_collision_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0000001192f, FLT_MAX, 0.0010000000f, 3, nullptr, nullptr, 0.0049999999f, nullptr
	};

	rna_Curves_attributes_ = {
		{&rna_Curves_color_attributes, 	&rna_Curves_surface_collision_distance,
		-1, "attributes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Attributes",
		"Geometry attributes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AttributeGroupCurves},
		Curves_attributes_begin, Curves_attributes_next, Curves_attributes_end, Curves_attributes_get, Curves_attributes_length, Curves_attributes_lookup_int, Curves_attributes_lookup_string, nullptr, RNA_Attribute
	};

	rna_Curves_color_attributes_ = {
		{&rna_Curves_animation_data, 	&rna_Curves_attributes,
		-1, "color_attributes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Attributes",
		"Geometry color attributes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AttributeGroupCurves},
		Curves_color_attributes_begin, Curves_color_attributes_next, Curves_color_attributes_end, Curves_color_attributes_get, Curves_color_attributes_length, Curves_color_attributes_lookup_int, nullptr, nullptr, RNA_Attribute
	};

	rna_Curves_animation_data_ = {
		{nullptr, 	&rna_Curves_color_attributes,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Curves_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_Curves;
	srna->cont.properties = {&rna_Curves_curves, &rna_Curves_animation_data};
	srna->identifier = "Curves";
	srna->flag = 519;
	srna->name = "Hair Curves";
	srna->description = "Hair data-block for hair curves";
	srna->translation_context = "*";
	srna->icon = 254;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	static int rna_Curves_add_curves_sizes_default[1] = {
		0
	};
	rna_Curves_add_curves_sizes_ = {
		{nullptr, 	nullptr,
		-1, "sizes", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "Sizes",
		"The number of points in each curve",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_Curves_add_curves_sizes_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Curves_add_curves_sizes, &rna_Curves_add_curves_sizes};
		func->identifier = "add_curves";
		func->flag = 16;
		func->description = "add_curves";
		func->call = Curves_add_curves_call;
		rna_Curves_add_curves_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static int rna_Curves_remove_curves_indices_default[1] = {
		0
	};
	rna_Curves_remove_curves_indices_ = {
		{nullptr, 	nullptr,
		-1, "indices", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Indices",
		"The indices of the curves to remove",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_Curves_remove_curves_indices_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Curves_remove_curves_indices, &rna_Curves_remove_curves_indices};
		func->identifier = "remove_curves";
		func->flag = 16;
		func->description = "Remove all curves. If indices are provided, remove only the curves with the given indices.";
		func->call = Curves_remove_curves_call;
		rna_Curves_remove_curves_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static int rna_Curves_resize_curves_sizes_default[1] = {
		0
	};
	rna_Curves_resize_curves_sizes_ = {
		{&rna_Curves_resize_curves_indices, 	nullptr,
		-1, "sizes", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "Sizes",
		"The number of points in each curve",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10000, 1, INT_MAX, 1, nullptr, nullptr, 0, rna_Curves_resize_curves_sizes_default
	};
	static int rna_Curves_resize_curves_indices_default[1] = {
		0
	};
	rna_Curves_resize_curves_indices_ = {
		{nullptr, 	&rna_Curves_resize_curves_sizes,
		-1, "indices", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Indices",
		"The indices of the curves to resize",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_Curves_resize_curves_indices_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Curves_resize_curves_sizes, &rna_Curves_resize_curves_indices};
		func->identifier = "resize_curves";
		func->flag = 16;
		func->description = "Resize all existing curves. If indices are provided, resize only the curves with the given indices. If the new size for a curve is smaller, the curve is trimmed. If the new size for a curve is larger, the new end values are default initialized.";
		func->call = Curves_resize_curves_call;
		rna_Curves_resize_curves_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static int rna_Curves_reorder_curves_new_indices_default[1] = {
		0
	};
	rna_Curves_reorder_curves_new_indices_ = {
		{nullptr, 	nullptr,
		-1, "new_indices", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "New indices",
		"The new index for each of the curves",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_Curves_reorder_curves_new_indices_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Curves_reorder_curves_new_indices, &rna_Curves_reorder_curves_new_indices};
		func->identifier = "reorder_curves";
		func->flag = 16;
		func->description = "Reorder the curves by the new indices.";
		func->call = Curves_reorder_curves_call;
		rna_Curves_reorder_curves_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Curves_set_types_type_ = {
		{&rna_Curves_set_types_indices, 	nullptr,
		-1, "type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_curves_type_items, 4, 0
	};
	static int rna_Curves_set_types_indices_default[1] = {
		0
	};
	rna_Curves_set_types_indices_ = {
		{nullptr, 	&rna_Curves_set_types_type,
		-1, "indices", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Indices",
		"The indices of the curves to resize",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_Curves_set_types_indices_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Curves_set_types_type, &rna_Curves_set_types_indices};
		func->identifier = "set_types";
		func->flag = 16;
		func->description = "Set the curve type. If indices are provided, set only the types with the given curve indices.";
		func->call = Curves_set_types_call;
		rna_Curves_set_types_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Curves_unit_test_compare_curves_ = {
		{&rna_Curves_unit_test_compare_threshold, 	nullptr,
		-1, "curves", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Curves to compare to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Curves
	};
	rna_Curves_unit_test_compare_threshold_ = {
		{&rna_Curves_unit_test_compare_result, 	&rna_Curves_unit_test_compare_curves,
		-1, "threshold", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Threshold",
		"Comparison tolerance threshold",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0000071526f, nullptr
	};
	rna_Curves_unit_test_compare_result_ = {
		{nullptr, 	&rna_Curves_unit_test_compare_threshold,
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
		func->cont.properties = {&rna_Curves_unit_test_compare_curves, &rna_Curves_unit_test_compare_result};
		func->identifier = "unit_test_compare";
		func->description = "unit_test_compare";
		func->call = Curves_unit_test_compare_call;
		func->c_ret = &rna_Curves_unit_test_compare_result;
		rna_Curves_unit_test_compare_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Read-Only Vector */
static CollectionPropertyRNA rna_FloatVectorValueReadOnly_rna_properties_;
PropertyRNA &rna_FloatVectorValueReadOnly_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FloatVectorValueReadOnly_rna_properties_);

static PointerPropertyRNA rna_FloatVectorValueReadOnly_rna_type_;
PropertyRNA &rna_FloatVectorValueReadOnly_rna_type = reinterpret_cast<PropertyRNA &>(rna_FloatVectorValueReadOnly_rna_type_);

static FloatPropertyRNA rna_FloatVectorValueReadOnly_vector_;
PropertyRNA &rna_FloatVectorValueReadOnly_vector = reinterpret_cast<PropertyRNA &>(rna_FloatVectorValueReadOnly_vector_);

StructRNA *RNA_FloatVectorValueReadOnly;
void register_struct_FloatVectorValueReadOnly(BlenderRNA &brna)
{
	rna_FloatVectorValueReadOnly_rna_properties_ = {
		{&rna_FloatVectorValueReadOnly_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatVectorValueReadOnly_rna_properties_begin, FloatVectorValueReadOnly_rna_properties_next, FloatVectorValueReadOnly_rna_properties_end, FloatVectorValueReadOnly_rna_properties_get, nullptr, nullptr, FloatVectorValueReadOnly_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FloatVectorValueReadOnly_rna_type_ = {
		{&rna_FloatVectorValueReadOnly_vector, 	&rna_FloatVectorValueReadOnly_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatVectorValueReadOnly_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_FloatVectorValueReadOnly_vector_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_FloatVectorValueReadOnly_vector_ = {
		{nullptr, 	&rna_FloatVectorValueReadOnly_rna_type,
		-1, "vector", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vector",
		"3D vector",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec3f, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, FloatVectorValueReadOnly_vector_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FloatVectorValueReadOnly_vector_default
	};

	StructRNA *srna = RNA_FloatVectorValueReadOnly;
	srna->cont.properties = {&rna_FloatVectorValueReadOnly_rna_properties, &rna_FloatVectorValueReadOnly_vector};
	srna->identifier = "FloatVectorValueReadOnly";
	srna->flag = 516;
	srna->name = "Read-Only Vector";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FloatVectorValueReadOnly_rna_properties;
};


}  // namespace blender
