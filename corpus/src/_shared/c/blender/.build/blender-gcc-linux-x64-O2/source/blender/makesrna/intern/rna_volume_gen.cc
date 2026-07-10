
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

#include "rna_volume.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_VolumeGrid_rna_properties;
extern PropertyRNA &rna_VolumeGrid_rna_type;
extern PropertyRNA &rna_VolumeGrid_name;
extern PropertyRNA &rna_VolumeGrid_data_type;
extern PropertyRNA &rna_VolumeGrid_channels;
extern PropertyRNA &rna_VolumeGrid_matrix_object;
extern PropertyRNA &rna_VolumeGrid_is_loaded;

extern FunctionRNA *rna_VolumeGrid_load_func;
extern PropertyRNA &rna_VolumeGrid_load_success;

extern FunctionRNA *rna_VolumeGrid_unload_func;


extern PropertyRNA &rna_VolumeDisplay_rna_properties;
extern PropertyRNA &rna_VolumeDisplay_rna_type;
extern PropertyRNA &rna_VolumeDisplay_density;
extern PropertyRNA &rna_VolumeDisplay_wireframe_type;
extern PropertyRNA &rna_VolumeDisplay_wireframe_detail;
extern PropertyRNA &rna_VolumeDisplay_interpolation_method;
extern PropertyRNA &rna_VolumeDisplay_use_slice;
extern PropertyRNA &rna_VolumeDisplay_slice_axis;
extern PropertyRNA &rna_VolumeDisplay_slice_depth;


extern PropertyRNA &rna_VolumeRender_rna_properties;
extern PropertyRNA &rna_VolumeRender_rna_type;
extern PropertyRNA &rna_VolumeRender_precision;
extern PropertyRNA &rna_VolumeRender_space;
extern PropertyRNA &rna_VolumeRender_step_size;
extern PropertyRNA &rna_VolumeRender_clipping;


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

extern PropertyRNA &rna_Volume_filepath;
extern PropertyRNA &rna_Volume_packed_file;
extern PropertyRNA &rna_Volume_is_sequence;
extern PropertyRNA &rna_Volume_frame_start;
extern PropertyRNA &rna_Volume_frame_duration;
extern PropertyRNA &rna_Volume_frame_offset;
extern PropertyRNA &rna_Volume_sequence_mode;
extern PropertyRNA &rna_Volume_grids;
extern PropertyRNA &rna_Volume_materials;
extern PropertyRNA &rna_Volume_display;
extern PropertyRNA &rna_Volume_render;
extern PropertyRNA &rna_Volume_velocity_grid;
extern PropertyRNA &rna_Volume_velocity_unit;
extern PropertyRNA &rna_Volume_velocity_scale;
extern PropertyRNA &rna_Volume_velocity_x_grid;
extern PropertyRNA &rna_Volume_velocity_y_grid;
extern PropertyRNA &rna_Volume_velocity_z_grid;
extern PropertyRNA &rna_Volume_animation_data;

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



extern PropertyRNA &rna_VolumeGrids_rna_properties;
extern PropertyRNA &rna_VolumeGrids_rna_type;
extern PropertyRNA &rna_VolumeGrids_active_index;
extern PropertyRNA &rna_VolumeGrids_error_message;
extern PropertyRNA &rna_VolumeGrids_is_loaded;
extern PropertyRNA &rna_VolumeGrids_frame;
extern PropertyRNA &rna_VolumeGrids_frame_filepath;

extern FunctionRNA *rna_VolumeGrids_load_func;
extern PropertyRNA &rna_VolumeGrids_load_success;

extern FunctionRNA *rna_VolumeGrids_unload_func;
extern FunctionRNA *rna_VolumeGrids_save_func;
extern PropertyRNA &rna_VolumeGrids_save_filepath;
extern PropertyRNA &rna_VolumeGrids_save_success;


static PointerRNA VolumeGrid_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void VolumeGrid_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_VolumeGrid_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = VolumeGrid_rna_properties_get(iter);
    }
}

void VolumeGrid_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = VolumeGrid_rna_properties_get(iter);
    }
}

void VolumeGrid_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool VolumeGrid_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA VolumeGrid_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void VolumeGrid_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_VolumeGrid_name_get;
    fn(ptr, value);
}

int VolumeGrid_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_VolumeGrid_name_length;
    return fn(ptr);
}

int VolumeGrid_data_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_VolumeGrid_data_type_get;
    return fn(ptr);
}

int VolumeGrid_channels_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_VolumeGrid_channels_get;
    return fn(ptr);
}

void VolumeGrid_matrix_object_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_VolumeGrid_matrix_object_get;
    fn(ptr, values);
}

bool VolumeGrid_is_loaded_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_VolumeGrid_is_loaded_get;
    return fn(ptr);
}

static PointerRNA VolumeDisplay_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void VolumeDisplay_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_VolumeDisplay_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = VolumeDisplay_rna_properties_get(iter);
    }
}

void VolumeDisplay_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = VolumeDisplay_rna_properties_get(iter);
    }
}

void VolumeDisplay_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool VolumeDisplay_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA VolumeDisplay_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float VolumeDisplay_density_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (float)(data->density);
}

void VolumeDisplay_density_set(PointerRNA *ptr, float value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    data->density = (std::remove_reference_t<decltype(data->density)>)std::clamp(value, 0.0000100000f, FLT_MAX);
}

int VolumeDisplay_wireframe_type_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (int)(data->wireframe_type);
}

void VolumeDisplay_wireframe_type_set(PointerRNA *ptr, int value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    data->wireframe_type = (std::remove_reference_t<decltype(data->wireframe_type)>)value;
}

int VolumeDisplay_wireframe_detail_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (int)(data->wireframe_detail);
}

void VolumeDisplay_wireframe_detail_set(PointerRNA *ptr, int value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    data->wireframe_detail = (std::remove_reference_t<decltype(data->wireframe_detail)>)value;
}

int VolumeDisplay_interpolation_method_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (int)(data->interpolation_method);
}

void VolumeDisplay_interpolation_method_set(PointerRNA *ptr, int value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    data->interpolation_method = (std::remove_reference_t<decltype(data->interpolation_method)>)value;
}

bool VolumeDisplay_use_slice_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return ((uint64_t(data->axis_slice_method) & 1) != 0);
}

void VolumeDisplay_use_slice_set(PointerRNA *ptr, bool value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    if (value) { data->axis_slice_method = std::remove_reference_t<decltype(data->axis_slice_method)>(uint64_t(data->axis_slice_method) | 1); }
    else { data->axis_slice_method = std::remove_reference_t<decltype(data->axis_slice_method)>(uint64_t(data->axis_slice_method) & ~uint64_t(1)); }
}

int VolumeDisplay_slice_axis_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (int)(data->slice_axis);
}

void VolumeDisplay_slice_axis_set(PointerRNA *ptr, int value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    data->slice_axis = (std::remove_reference_t<decltype(data->slice_axis)>)value;
}

float VolumeDisplay_slice_depth_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (float)(data->slice_depth);
}

void VolumeDisplay_slice_depth_set(PointerRNA *ptr, float value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    data->slice_depth = (std::remove_reference_t<decltype(data->slice_depth)>)std::clamp(value, 0.0f, 1.0f);
}

static PointerRNA VolumeRender_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void VolumeRender_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_VolumeRender_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = VolumeRender_rna_properties_get(iter);
    }
}

void VolumeRender_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = VolumeRender_rna_properties_get(iter);
    }
}

void VolumeRender_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool VolumeRender_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA VolumeRender_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int VolumeRender_precision_get(PointerRNA *ptr)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    return (int)(data->precision);
}

void VolumeRender_precision_set(PointerRNA *ptr, int value)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    data->precision = (std::remove_reference_t<decltype(data->precision)>)value;
}

int VolumeRender_space_get(PointerRNA *ptr)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    return (int)(data->space);
}

void VolumeRender_space_set(PointerRNA *ptr, int value)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    data->space = (std::remove_reference_t<decltype(data->space)>)value;
}

float VolumeRender_step_size_get(PointerRNA *ptr)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    return (float)(data->step_size);
}

void VolumeRender_step_size_set(PointerRNA *ptr, float value)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    data->step_size = (std::remove_reference_t<decltype(data->step_size)>)std::clamp(value, 0.0f, FLT_MAX);
}

float VolumeRender_clipping_get(PointerRNA *ptr)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    return (float)(data->clipping);
}

void VolumeRender_clipping_set(PointerRNA *ptr, float value)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    data->clipping = (std::remove_reference_t<decltype(data->clipping)>)std::clamp(value, 0.0f, 1.0f);
}

void Volume_filepath_get(PointerRNA *ptr, char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

int Volume_filepath_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return strlen(data->filepath);
}

void Volume_filepath_set(PointerRNA *ptr, const char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

PointerRNA Volume_packed_file_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PackedFile, data->packedfile);
}

bool Volume_is_sequence_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (bool)(data->is_sequence);
}

void Volume_is_sequence_set(PointerRNA *ptr, bool value)
{
    Volume *data = (Volume *)(ptr->data);
    data->is_sequence = (std::remove_reference_t<decltype(data->is_sequence)>)value;
}

int Volume_frame_start_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->frame_start);
}

void Volume_frame_start_set(PointerRNA *ptr, int value)
{
    Volume *data = (Volume *)(ptr->data);
    data->frame_start = (std::remove_reference_t<decltype(data->frame_start)>)std::clamp(value, -1048574, 1048574);
}

int Volume_frame_duration_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->frame_duration);
}

void Volume_frame_duration_set(PointerRNA *ptr, int value)
{
    Volume *data = (Volume *)(ptr->data);
    data->frame_duration = (std::remove_reference_t<decltype(data->frame_duration)>)std::clamp(value, 0, 1048574);
}

int Volume_frame_offset_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->frame_offset);
}

void Volume_frame_offset_set(PointerRNA *ptr, int value)
{
    Volume *data = (Volume *)(ptr->data);
    data->frame_offset = (std::remove_reference_t<decltype(data->frame_offset)>)value;
}

int Volume_sequence_mode_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->sequence_mode);
}

void Volume_sequence_mode_set(PointerRNA *ptr, int value)
{
    Volume *data = (Volume *)(ptr->data);
    data->sequence_mode = (std::remove_reference_t<decltype(data->sequence_mode)>)value;
}

int Volume_grids_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Volume_grids_length;
    return fn(ptr);
}

static PointerRNA Volume_grids_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Volume_grids_get;
    return fn(iter);
}

void Volume_grids_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Volume_grids;

    PropCollectionBeginFunc fn = rna_Volume_grids_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Volume_grids_get(iter);
    }
}

void Volume_grids_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_Volume_grids_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Volume_grids_get(iter);
    }
}

void Volume_grids_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_Volume_grids_end;
    fn(iter);
}

int Volume_materials_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA Volume_materials_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Material, rna_iterator_array_dereference_get(iter));
}

void Volume_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Volume_materials;

    rna_iterator_array_begin(iter, ptr, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Volume_materials_get(iter);
    }
}

void Volume_materials_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Volume_materials_get(iter);
    }
}

void Volume_materials_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Volume_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Volume_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Volume_materials_get(&iter); }
    }

    Volume_materials_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool Volume_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Volume_materials_begin(&iter, ptr);

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
        Volume_materials_next(&iter);
    }
    Volume_materials_end(&iter);

    return found;
}

PointerRNA Volume_display_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_VolumeDisplay, &data->display);
}

PointerRNA Volume_render_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_VolumeRender, &data->render);
}

void Volume_velocity_grid_get(PointerRNA *ptr, char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_assert(strlen(data->velocity_grid) < 64);
    strcpy(value, data->velocity_grid);
}

int Volume_velocity_grid_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return strlen(data->velocity_grid);
}

void Volume_velocity_grid_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Volume_velocity_grid_set;
    fn(ptr, value);
}

int Volume_velocity_unit_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->velocity_unit);
}

void Volume_velocity_unit_set(PointerRNA *ptr, int value)
{
    Volume *data = (Volume *)(ptr->data);
    data->velocity_unit = (std::remove_reference_t<decltype(data->velocity_unit)>)value;
}

float Volume_velocity_scale_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (float)(data->velocity_scale);
}

void Volume_velocity_scale_set(PointerRNA *ptr, float value)
{
    Volume *data = (Volume *)(ptr->data);
    data->velocity_scale = (std::remove_reference_t<decltype(data->velocity_scale)>)std::clamp(value, 0.0f, FLT_MAX);
}

void Volume_velocity_x_grid_get(PointerRNA *ptr, char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_assert(strlen(data->runtime->velocity_x_grid) < sizeof(data->runtime->velocity_x_grid));
    strcpy(value, data->runtime->velocity_x_grid);
}

int Volume_velocity_x_grid_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return strlen(data->runtime->velocity_x_grid);
}

void Volume_velocity_y_grid_get(PointerRNA *ptr, char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_assert(strlen(data->runtime->velocity_y_grid) < sizeof(data->runtime->velocity_y_grid));
    strcpy(value, data->runtime->velocity_y_grid);
}

int Volume_velocity_y_grid_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return strlen(data->runtime->velocity_y_grid);
}

void Volume_velocity_z_grid_get(PointerRNA *ptr, char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_assert(strlen(data->runtime->velocity_z_grid) < sizeof(data->runtime->velocity_z_grid));
    strcpy(value, data->runtime->velocity_z_grid);
}

int Volume_velocity_z_grid_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return strlen(data->runtime->velocity_z_grid);
}

PointerRNA Volume_animation_data_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA VolumeGrids_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void VolumeGrids_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_VolumeGrids_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = VolumeGrids_rna_properties_get(iter);
    }
}

void VolumeGrids_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = VolumeGrids_rna_properties_get(iter);
    }
}

void VolumeGrids_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool VolumeGrids_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA VolumeGrids_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int VolumeGrids_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_VolumeGrids_active_index_get;
    return fn(ptr);
}

void VolumeGrids_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_VolumeGrids_active_index_set;
    fn(ptr, value);
}

void VolumeGrids_error_message_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_VolumeGrids_error_message_get;
    fn(ptr, value);
}

int VolumeGrids_error_message_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_VolumeGrids_error_message_length;
    return fn(ptr);
}

bool VolumeGrids_is_loaded_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_VolumeGrids_is_loaded_get;
    return fn(ptr);
}

int VolumeGrids_frame_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->runtime->frame);
}

void VolumeGrids_frame_filepath_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_VolumeGrids_frame_filepath_get;
    fn(ptr, value);
}

int VolumeGrids_frame_filepath_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_VolumeGrids_frame_filepath_length;
    return fn(ptr);
}

bool VolumeGrid_load_func(ID *_selfid, DummyVolumeGridData *_self)
{
	return rna_VolumeGrid_load(_selfid, _self);
}

static void VolumeGrid_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	DummyVolumeGridData *_self;
	bool success;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (DummyVolumeGridData *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	success = rna_VolumeGrid_load(_selfid, _self);
	*((bool *)_retdata) = success;
}

void VolumeGrid_unload_func(ID *_selfid, DummyVolumeGridData *_self)
{
	rna_VolumeGrid_unload(_selfid, _self);
}

static void VolumeGrid_unload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	DummyVolumeGridData *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (DummyVolumeGridData *)_ptr->data;
	
	rna_VolumeGrid_unload(_selfid, _self);
}

/* Repeated prototypes to detect errors */

bool rna_VolumeGrid_load(ID *_selfid, DummyVolumeGridData *_self);
void rna_VolumeGrid_unload(ID *_selfid, DummyVolumeGridData *_self);




bool VolumeGrids_load_func(Volume *_self, Main *bmain)
{
	return rna_Volume_load(_self, bmain);
}

static void VolumeGrids_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Volume *_self;
	bool success;
	char *_data, *_retdata;
	
	_self = (Volume *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	success = rna_Volume_load(_self, CTX_data_main(C));
	*((bool *)_retdata) = success;
}

void VolumeGrids_unload_func(Volume *_self)
{
	BKE_volume_unload(_self);
}

static void VolumeGrids_unload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Volume *_self;
	_self = (Volume *)_ptr->data;
	
	BKE_volume_unload(_self);
}

bool VolumeGrids_save_func(Volume *_self, Main *bmain, ReportList *reports, const char * filepath)
{
	return rna_Volume_save(_self, bmain, reports, filepath);
}

static void VolumeGrids_save_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Volume *_self;
	const char * filepath;
	bool success;
	char *_data, *_retdata;
	
	_self = (Volume *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	success = rna_Volume_save(_self, CTX_data_main(C), reports, filepath);
	*((bool *)_retdata) = success;
}

/* Repeated prototypes to detect errors */

bool rna_Volume_load(Volume *_self, Main *bmain);
void BKE_volume_unload(Volume *_self);
bool rna_Volume_save(Volume *_self, Main *bmain, ReportList *reports, const char * filepath);

/* Volume Grid */
static CollectionPropertyRNA rna_VolumeGrid_rna_properties_;
PropertyRNA &rna_VolumeGrid_rna_properties = reinterpret_cast<PropertyRNA &>(rna_VolumeGrid_rna_properties_);

static PointerPropertyRNA rna_VolumeGrid_rna_type_;
PropertyRNA &rna_VolumeGrid_rna_type = reinterpret_cast<PropertyRNA &>(rna_VolumeGrid_rna_type_);

static StringPropertyRNA rna_VolumeGrid_name_;
PropertyRNA &rna_VolumeGrid_name = reinterpret_cast<PropertyRNA &>(rna_VolumeGrid_name_);

static EnumPropertyRNA rna_VolumeGrid_data_type_;
PropertyRNA &rna_VolumeGrid_data_type = reinterpret_cast<PropertyRNA &>(rna_VolumeGrid_data_type_);

static IntPropertyRNA rna_VolumeGrid_channels_;
PropertyRNA &rna_VolumeGrid_channels = reinterpret_cast<PropertyRNA &>(rna_VolumeGrid_channels_);

static FloatPropertyRNA rna_VolumeGrid_matrix_object_;
PropertyRNA &rna_VolumeGrid_matrix_object = reinterpret_cast<PropertyRNA &>(rna_VolumeGrid_matrix_object_);

static BoolPropertyRNA rna_VolumeGrid_is_loaded_;
PropertyRNA &rna_VolumeGrid_is_loaded = reinterpret_cast<PropertyRNA &>(rna_VolumeGrid_is_loaded_);

static BoolPropertyRNA rna_VolumeGrid_load_success_;
PropertyRNA &rna_VolumeGrid_load_success = reinterpret_cast<PropertyRNA &>(rna_VolumeGrid_load_success_);

FunctionRNA *rna_VolumeGrid_load_func;
FunctionRNA *rna_VolumeGrid_unload_func;
StructRNA *RNA_VolumeGrid;
void register_struct_VolumeGrid(BlenderRNA &brna)
{
	rna_VolumeGrid_rna_properties_ = {
		{&rna_VolumeGrid_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrid_rna_properties_begin, VolumeGrid_rna_properties_next, VolumeGrid_rna_properties_end, VolumeGrid_rna_properties_get, nullptr, nullptr, VolumeGrid_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_VolumeGrid_rna_type_ = {
		{&rna_VolumeGrid_name, 	&rna_VolumeGrid_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrid_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_VolumeGrid_name_ = {
		{&rna_VolumeGrid_data_type, 	&rna_VolumeGrid_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Volume grid name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrid_name_get, VolumeGrid_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_VolumeGrid_data_type_ = {
		{&rna_VolumeGrid_channels, 	&rna_VolumeGrid_name,
		-1, "data_type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Data Type",
		"Data type of voxel values",
		0, "Volume",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrid_data_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_volume_grid_data_type_items, 11, 0
	};

	rna_VolumeGrid_channels_ = {
		{&rna_VolumeGrid_matrix_object, 	&rna_VolumeGrid_data_type,
		-1, "channels", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Channels",
		"Number of dimensions of the grid data type",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrid_channels_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_VolumeGrid_matrix_object_default[16] = {
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
	rna_VolumeGrid_matrix_object_ = {
		{&rna_VolumeGrid_is_loaded, 	&rna_VolumeGrid_channels,
		-1, "matrix_object", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Matrix Object",
		"Transformation matrix from voxel index to object space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, VolumeGrid_matrix_object_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_VolumeGrid_matrix_object_default
	};

	rna_VolumeGrid_is_loaded_ = {
		{nullptr, 	&rna_VolumeGrid_matrix_object,
		-1, "is_loaded", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Loaded",
		"Grid tree is loaded in memory",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrid_is_loaded_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_VolumeGrid;
	srna->cont.properties = {&rna_VolumeGrid_rna_properties, &rna_VolumeGrid_is_loaded};
	srna->identifier = "VolumeGrid";
	srna->flag = 516;
	srna->name = "Volume Grid";
	srna->description = "3D volume grid";
	srna->translation_context = "*";
	srna->icon = 274;
	srna->nameproperty = &rna_VolumeGrid_name;
	srna->iteratorproperty = &rna_VolumeGrid_rna_properties;
	{
	rna_VolumeGrid_load_success_ = {
		{nullptr, 	nullptr,
		-1, "success", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"True if grid tree was successfully loaded",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_VolumeGrid_load_success, &rna_VolumeGrid_load_success};
		func->identifier = "load";
		func->flag = 2048;
		func->description = "Load grid tree from file";
		func->call = VolumeGrid_load_call;
		func->c_ret = &rna_VolumeGrid_load_success;
		rna_VolumeGrid_load_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "unload";
		func->flag = 2048;
		func->description = "Unload grid tree and voxel data from memory, leaving only metadata";
		func->call = VolumeGrid_unload_call;
		rna_VolumeGrid_unload_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Volume Display */
static CollectionPropertyRNA rna_VolumeDisplay_rna_properties_;
PropertyRNA &rna_VolumeDisplay_rna_properties = reinterpret_cast<PropertyRNA &>(rna_VolumeDisplay_rna_properties_);

static PointerPropertyRNA rna_VolumeDisplay_rna_type_;
PropertyRNA &rna_VolumeDisplay_rna_type = reinterpret_cast<PropertyRNA &>(rna_VolumeDisplay_rna_type_);

static FloatPropertyRNA rna_VolumeDisplay_density_;
PropertyRNA &rna_VolumeDisplay_density = reinterpret_cast<PropertyRNA &>(rna_VolumeDisplay_density_);

static EnumPropertyRNA rna_VolumeDisplay_wireframe_type_;
PropertyRNA &rna_VolumeDisplay_wireframe_type = reinterpret_cast<PropertyRNA &>(rna_VolumeDisplay_wireframe_type_);

static EnumPropertyRNA rna_VolumeDisplay_wireframe_detail_;
PropertyRNA &rna_VolumeDisplay_wireframe_detail = reinterpret_cast<PropertyRNA &>(rna_VolumeDisplay_wireframe_detail_);

static EnumPropertyRNA rna_VolumeDisplay_interpolation_method_;
PropertyRNA &rna_VolumeDisplay_interpolation_method = reinterpret_cast<PropertyRNA &>(rna_VolumeDisplay_interpolation_method_);

static BoolPropertyRNA rna_VolumeDisplay_use_slice_;
PropertyRNA &rna_VolumeDisplay_use_slice = reinterpret_cast<PropertyRNA &>(rna_VolumeDisplay_use_slice_);

static EnumPropertyRNA rna_VolumeDisplay_slice_axis_;
PropertyRNA &rna_VolumeDisplay_slice_axis = reinterpret_cast<PropertyRNA &>(rna_VolumeDisplay_slice_axis_);

static FloatPropertyRNA rna_VolumeDisplay_slice_depth_;
PropertyRNA &rna_VolumeDisplay_slice_depth = reinterpret_cast<PropertyRNA &>(rna_VolumeDisplay_slice_depth_);

StructRNA *RNA_VolumeDisplay;
void register_struct_VolumeDisplay(BlenderRNA &brna)
{
	rna_VolumeDisplay_rna_properties_ = {
		{&rna_VolumeDisplay_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeDisplay_rna_properties_begin, VolumeDisplay_rna_properties_next, VolumeDisplay_rna_properties_end, VolumeDisplay_rna_properties_get, nullptr, nullptr, VolumeDisplay_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_VolumeDisplay_rna_type_ = {
		{&rna_VolumeDisplay_density, 	&rna_VolumeDisplay_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeDisplay_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_VolumeDisplay_density_ = {
		{&rna_VolumeDisplay_wireframe_type, 	&rna_VolumeDisplay_rna_type,
		-1, "density", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Density",
		"Thickness of volume display in the viewport",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(VolumeDisplay, density), RawPropertyType(5), nullptr},
		VolumeDisplay_density_get, VolumeDisplay_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 100.0f, 0.0000100000f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	static const EnumPropertyItem rna_VolumeDisplay_wireframe_type_items[5] = {
		{0, "NONE", 0, "None", "Don\'t display volume in wireframe mode"	},
		{1, "BOUNDS", 0, "Bounds", "Display single bounding box for the entire grid"	},
		{2, "BOXES", 0, "Boxes", "Display bounding boxes for nodes in the volume tree"	},
		{3, "POINTS", 0, "Points", "Display points for nodes in the volume tree"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_VolumeDisplay_wireframe_type_ = {
		{&rna_VolumeDisplay_wireframe_detail, 	&rna_VolumeDisplay_density,
		-1, "wireframe_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Wireframe",
		"Type of wireframe display",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(VolumeDisplay, wireframe_type), RawPropertyType(0), nullptr},
		VolumeDisplay_wireframe_type_get, VolumeDisplay_wireframe_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_VolumeDisplay_wireframe_type_items, 4, 2
	};

	static const EnumPropertyItem rna_VolumeDisplay_wireframe_detail_items[3] = {
		{0, "COARSE", 0, "Coarse", "Display one box or point for each intermediate tree node"	},
		{1, "FINE", 0, "Fine", "Display box for each leaf node containing 8×8 voxels"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_VolumeDisplay_wireframe_detail_ = {
		{&rna_VolumeDisplay_interpolation_method, 	&rna_VolumeDisplay_wireframe_type,
		-1, "wireframe_detail", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Wireframe Detail",
		"Amount of detail for wireframe display",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(VolumeDisplay, wireframe_detail), RawPropertyType(0), nullptr},
		VolumeDisplay_wireframe_detail_get, VolumeDisplay_wireframe_detail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_VolumeDisplay_wireframe_detail_items, 2, 0
	};

	static const EnumPropertyItem rna_VolumeDisplay_interpolation_method_items[4] = {
		{0, "LINEAR", 0, "Linear", "Good smoothness and speed"	},
		{1, "CUBIC", 0, "Cubic", "Smoothed high quality interpolation, but slower"	},
		{2, "CLOSEST", 0, "Closest", "No interpolation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_VolumeDisplay_interpolation_method_ = {
		{&rna_VolumeDisplay_use_slice, 	&rna_VolumeDisplay_wireframe_detail,
		-1, "interpolation_method", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interpolation",
		"Interpolation method to use for volumes in solid mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(VolumeDisplay, interpolation_method), RawPropertyType(0), nullptr},
		VolumeDisplay_interpolation_method_get, VolumeDisplay_interpolation_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_VolumeDisplay_interpolation_method_items, 3, 0
	};

	rna_VolumeDisplay_use_slice_ = {
		{&rna_VolumeDisplay_slice_axis, 	&rna_VolumeDisplay_interpolation_method,
		-1, "use_slice", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Slice",
		"Perform a single slice of the domain object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeDisplay_use_slice_get, VolumeDisplay_use_slice_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_VolumeDisplay_slice_axis_items[5] = {
		{0, "AUTO", 0, "Auto", "Adjust slice direction according to the view direction"	},
		{1, "X", 0, "X", "Slice along the X axis"	},
		{2, "Y", 0, "Y", "Slice along the Y axis"	},
		{3, "Z", 0, "Z", "Slice along the Z axis"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_VolumeDisplay_slice_axis_ = {
		{&rna_VolumeDisplay_slice_depth, 	&rna_VolumeDisplay_use_slice,
		-1, "slice_axis", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Axis",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(VolumeDisplay, slice_axis), RawPropertyType(0), nullptr},
		VolumeDisplay_slice_axis_get, VolumeDisplay_slice_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_VolumeDisplay_slice_axis_items, 4, 0
	};

	rna_VolumeDisplay_slice_depth_ = {
		{nullptr, 	&rna_VolumeDisplay_slice_axis,
		-1, "slice_depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Position",
		"Position of the slice",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(VolumeDisplay, slice_depth), RawPropertyType(5), nullptr},
		VolumeDisplay_slice_depth_get, VolumeDisplay_slice_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	StructRNA *srna = RNA_VolumeDisplay;
	srna->cont.properties = {&rna_VolumeDisplay_rna_properties, &rna_VolumeDisplay_slice_depth};
	srna->identifier = "VolumeDisplay";
	srna->flag = 516;
	srna->name = "Volume Display";
	srna->description = "Volume object display settings for 3D viewport";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_VolumeDisplay_rna_properties;
	srna->path = rna_VolumeDisplay_path;
};

/* Volume Render */
static CollectionPropertyRNA rna_VolumeRender_rna_properties_;
PropertyRNA &rna_VolumeRender_rna_properties = reinterpret_cast<PropertyRNA &>(rna_VolumeRender_rna_properties_);

static PointerPropertyRNA rna_VolumeRender_rna_type_;
PropertyRNA &rna_VolumeRender_rna_type = reinterpret_cast<PropertyRNA &>(rna_VolumeRender_rna_type_);

static EnumPropertyRNA rna_VolumeRender_precision_;
PropertyRNA &rna_VolumeRender_precision = reinterpret_cast<PropertyRNA &>(rna_VolumeRender_precision_);

static EnumPropertyRNA rna_VolumeRender_space_;
PropertyRNA &rna_VolumeRender_space = reinterpret_cast<PropertyRNA &>(rna_VolumeRender_space_);

static FloatPropertyRNA rna_VolumeRender_step_size_;
PropertyRNA &rna_VolumeRender_step_size = reinterpret_cast<PropertyRNA &>(rna_VolumeRender_step_size_);

static FloatPropertyRNA rna_VolumeRender_clipping_;
PropertyRNA &rna_VolumeRender_clipping = reinterpret_cast<PropertyRNA &>(rna_VolumeRender_clipping_);

StructRNA *RNA_VolumeRender;
void register_struct_VolumeRender(BlenderRNA &brna)
{
	rna_VolumeRender_rna_properties_ = {
		{&rna_VolumeRender_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeRender_rna_properties_begin, VolumeRender_rna_properties_next, VolumeRender_rna_properties_end, VolumeRender_rna_properties_get, nullptr, nullptr, VolumeRender_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_VolumeRender_rna_type_ = {
		{&rna_VolumeRender_precision, 	&rna_VolumeRender_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeRender_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_VolumeRender_precision_items[4] = {
		{1, "FULL", 0, "Full", "Use 32-bit floating-point numbers for all data"	},
		{0, "HALF", 0, "Half", "Use 16-bit floating-point numbers for all data"	},
		{2, "VARIABLE", 0, "Variable", "Use variable bit quantization"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_VolumeRender_precision_ = {
		{&rna_VolumeRender_space, 	&rna_VolumeRender_rna_type,
		-1, "precision", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Precision",
		"Specify volume data precision. Lower values reduce memory consumption at the cost of detail.",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(VolumeRender, precision), RawPropertyType(0), nullptr},
		VolumeRender_precision_get, VolumeRender_precision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_VolumeRender_precision_items, 3, 0
	};

	static const EnumPropertyItem rna_VolumeRender_space_items[3] = {
		{0, "OBJECT", 0, "Object", "Keep volume opacity and detail the same regardless of object scale"	},
		{1, "WORLD", 0, "World", "Specify volume step size and density in world space"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_VolumeRender_space_ = {
		{&rna_VolumeRender_step_size, 	&rna_VolumeRender_precision,
		-1, "space", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Space",
		"Specify volume density and step size in object or world space",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(VolumeRender, space), RawPropertyType(0), nullptr},
		VolumeRender_space_get, VolumeRender_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_VolumeRender_space_items, 2, 0
	};

	rna_VolumeRender_step_size_ = {
		{&rna_VolumeRender_clipping, 	&rna_VolumeRender_space,
		-1, "step_size", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Step Size",
		"Distance between volume samples. Lower values render more detail at the cost of performance. If set to zero, the step size is automatically determined based on voxel size.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(VolumeRender, step_size), RawPropertyType(5), nullptr},
		VolumeRender_step_size_get, VolumeRender_step_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_VolumeRender_clipping_ = {
		{nullptr, 	&rna_VolumeRender_step_size,
		-1, "clipping", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clipping",
		"Value under which voxels are considered empty space to optimize rendering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(VolumeRender, clipping), RawPropertyType(5), nullptr},
		VolumeRender_clipping_get, VolumeRender_clipping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0010000000f, nullptr
	};

	StructRNA *srna = RNA_VolumeRender;
	srna->cont.properties = {&rna_VolumeRender_rna_properties, &rna_VolumeRender_clipping};
	srna->identifier = "VolumeRender";
	srna->flag = 516;
	srna->name = "Volume Render";
	srna->description = "Volume object render settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_VolumeRender_rna_properties;
	srna->path = rna_VolumeRender_path;
};

/* Volume */
static StringPropertyRNA rna_Volume_filepath_;
PropertyRNA &rna_Volume_filepath = reinterpret_cast<PropertyRNA &>(rna_Volume_filepath_);

static PointerPropertyRNA rna_Volume_packed_file_;
PropertyRNA &rna_Volume_packed_file = reinterpret_cast<PropertyRNA &>(rna_Volume_packed_file_);

static BoolPropertyRNA rna_Volume_is_sequence_;
PropertyRNA &rna_Volume_is_sequence = reinterpret_cast<PropertyRNA &>(rna_Volume_is_sequence_);

static IntPropertyRNA rna_Volume_frame_start_;
PropertyRNA &rna_Volume_frame_start = reinterpret_cast<PropertyRNA &>(rna_Volume_frame_start_);

static IntPropertyRNA rna_Volume_frame_duration_;
PropertyRNA &rna_Volume_frame_duration = reinterpret_cast<PropertyRNA &>(rna_Volume_frame_duration_);

static IntPropertyRNA rna_Volume_frame_offset_;
PropertyRNA &rna_Volume_frame_offset = reinterpret_cast<PropertyRNA &>(rna_Volume_frame_offset_);

static EnumPropertyRNA rna_Volume_sequence_mode_;
PropertyRNA &rna_Volume_sequence_mode = reinterpret_cast<PropertyRNA &>(rna_Volume_sequence_mode_);

static CollectionPropertyRNA rna_Volume_grids_;
PropertyRNA &rna_Volume_grids = reinterpret_cast<PropertyRNA &>(rna_Volume_grids_);

static CollectionPropertyRNA rna_Volume_materials_;
PropertyRNA &rna_Volume_materials = reinterpret_cast<PropertyRNA &>(rna_Volume_materials_);

static PointerPropertyRNA rna_Volume_display_;
PropertyRNA &rna_Volume_display = reinterpret_cast<PropertyRNA &>(rna_Volume_display_);

static PointerPropertyRNA rna_Volume_render_;
PropertyRNA &rna_Volume_render = reinterpret_cast<PropertyRNA &>(rna_Volume_render_);

static StringPropertyRNA rna_Volume_velocity_grid_;
PropertyRNA &rna_Volume_velocity_grid = reinterpret_cast<PropertyRNA &>(rna_Volume_velocity_grid_);

static EnumPropertyRNA rna_Volume_velocity_unit_;
PropertyRNA &rna_Volume_velocity_unit = reinterpret_cast<PropertyRNA &>(rna_Volume_velocity_unit_);

static FloatPropertyRNA rna_Volume_velocity_scale_;
PropertyRNA &rna_Volume_velocity_scale = reinterpret_cast<PropertyRNA &>(rna_Volume_velocity_scale_);

static StringPropertyRNA rna_Volume_velocity_x_grid_;
PropertyRNA &rna_Volume_velocity_x_grid = reinterpret_cast<PropertyRNA &>(rna_Volume_velocity_x_grid_);

static StringPropertyRNA rna_Volume_velocity_y_grid_;
PropertyRNA &rna_Volume_velocity_y_grid = reinterpret_cast<PropertyRNA &>(rna_Volume_velocity_y_grid_);

static StringPropertyRNA rna_Volume_velocity_z_grid_;
PropertyRNA &rna_Volume_velocity_z_grid = reinterpret_cast<PropertyRNA &>(rna_Volume_velocity_z_grid_);

static PointerPropertyRNA rna_Volume_animation_data_;
PropertyRNA &rna_Volume_animation_data = reinterpret_cast<PropertyRNA &>(rna_Volume_animation_data_);

StructRNA *RNA_Volume;
void register_struct_Volume(BlenderRNA &brna)
{
	rna_Volume_filepath_ = {
		{&rna_Volume_packed_file, 	nullptr,
		-1, "filepath", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"Volume file used by this Volume data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_Volume_update_filepath, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Volume_filepath_get, Volume_filepath_length, Volume_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_Volume_packed_file_ = {
		{&rna_Volume_is_sequence, 	&rna_Volume_filepath,
		-1, "packed_file", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Packed File",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Volume_packed_file_get, nullptr, nullptr, nullptr,RNA_PackedFile
	};

	rna_Volume_is_sequence_ = {
		{&rna_Volume_frame_start, 	&rna_Volume_packed_file,
		-1, "is_sequence", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sequence",
		"Whether the cache is separated in a series of files",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_is_sequence, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Volume, is_sequence), RawPropertyType(3), nullptr},
		Volume_is_sequence_get, Volume_is_sequence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Volume_frame_start_ = {
		{&rna_Volume_frame_duration, 	&rna_Volume_is_sequence,
		-1, "frame_start", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Start Frame",
		"Global starting frame of the sequence, assuming first has a #1",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_filepath, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Volume, frame_start), RawPropertyType(0), nullptr},
		Volume_frame_start_get, Volume_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 1, nullptr
	};

	rna_Volume_frame_duration_ = {
		{&rna_Volume_frame_offset, 	&rna_Volume_frame_start,
		-1, "frame_duration", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frames",
		"Number of frames of the sequence to use",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_filepath, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Volume, frame_duration), RawPropertyType(0), nullptr},
		Volume_frame_duration_get, Volume_frame_duration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Volume_frame_offset_ = {
		{&rna_Volume_sequence_mode, 	&rna_Volume_frame_duration,
		-1, "frame_offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Offset the number of the frame to use in the animation",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_filepath, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Volume, frame_offset), RawPropertyType(0), nullptr},
		Volume_frame_offset_get, Volume_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Volume_sequence_mode_items[5] = {
		{0, "CLIP", 0, "Clip", "Hide frames outside the specified frame range"	},
		{1, "EXTEND", 0, "Extend", "Repeat the start frame before, and the end frame after the frame range"	},
		{2, "REPEAT", 0, "Repeat", "Cycle the frames in the sequence"	},
		{3, "PING_PONG", 0, "Ping-Pong", "Repeat the frames, reversing the playback direction every other cycle"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Volume_sequence_mode_ = {
		{&rna_Volume_grids, 	&rna_Volume_frame_offset,
		-1, "sequence_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sequence Mode",
		"Sequence playback mode",
		0, "Volume",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_filepath, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Volume, sequence_mode), RawPropertyType(2), nullptr},
		Volume_sequence_mode_get, Volume_sequence_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Volume_sequence_mode_items, 4, 0
	};

	rna_Volume_grids_ = {
		{&rna_Volume_materials, 	&rna_Volume_sequence_mode,
		-1, "grids", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grids",
		"3D volume grids",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_VolumeGrids},
		Volume_grids_begin, Volume_grids_next, Volume_grids_end, Volume_grids_get, Volume_grids_length, nullptr, nullptr, nullptr, RNA_VolumeGrid
	};

	rna_Volume_materials_ = {
		{&rna_Volume_display, 	&rna_Volume_grids,
		-1, "materials", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Materials",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_IDMaterials},
		Volume_materials_begin, Volume_materials_next, Volume_materials_end, Volume_materials_get, Volume_materials_length, Volume_materials_lookup_int, Volume_materials_lookup_string, rna_IDMaterials_assign_int, RNA_Material
	};

	rna_Volume_display_ = {
		{&rna_Volume_render, 	&rna_Volume_materials,
		-1, "display", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display",
		"Volume display settings for 3D viewport",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Volume_display_get, nullptr, nullptr, nullptr,RNA_VolumeDisplay
	};

	rna_Volume_render_ = {
		{&rna_Volume_velocity_grid, 	&rna_Volume_display,
		-1, "render", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Render",
		"Volume render settings for 3D viewport",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Volume_render_get, nullptr, nullptr, nullptr,RNA_VolumeRender
	};

	rna_Volume_velocity_grid_ = {
		{&rna_Volume_velocity_unit, 	&rna_Volume_render,
		-1, "velocity_grid", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Velocity Grid",
		"Name of the velocity field, or the base name if the velocity is split into multiple grids",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Volume_velocity_grid_get, Volume_velocity_grid_length, Volume_velocity_grid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Volume_velocity_unit_ = {
		{&rna_Volume_velocity_scale, 	&rna_Volume_velocity_grid,
		-1, "velocity_unit", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Velocity Unit",
		"Define how the velocity vectors are interpreted with regard to time, \'frame\' means the delta time is 1 frame, \'second\' means the delta time is 1 / FPS",
		0, "Unit",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Volume, velocity_unit), RawPropertyType(2), nullptr},
		Volume_velocity_unit_get, Volume_velocity_unit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_velocity_unit_items, 2, 0
	};

	rna_Volume_velocity_scale_ = {
		{&rna_Volume_velocity_x_grid, 	&rna_Volume_velocity_unit,
		-1, "velocity_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Velocity Scale",
		"Factor to control the amount of motion blur",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Volume, velocity_scale), RawPropertyType(5), nullptr},
		Volume_velocity_scale_get, Volume_velocity_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Volume_velocity_x_grid_ = {
		{&rna_Volume_velocity_y_grid, 	&rna_Volume_velocity_scale,
		-1, "velocity_x_grid", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Velocity X Grid",
		"Name of the grid for the X axis component of the velocity field if it was split into multiple grids",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Volume_velocity_x_grid_get, Volume_velocity_x_grid_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Volume_velocity_y_grid_ = {
		{&rna_Volume_velocity_z_grid, 	&rna_Volume_velocity_x_grid,
		-1, "velocity_y_grid", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Velocity Y Grid",
		"Name of the grid for the Y axis component of the velocity field if it was split into multiple grids",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Volume_velocity_y_grid_get, Volume_velocity_y_grid_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Volume_velocity_z_grid_ = {
		{&rna_Volume_animation_data, 	&rna_Volume_velocity_y_grid,
		-1, "velocity_z_grid", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Velocity Z Grid",
		"Name of the grid for the Z axis component of the velocity field if it was split into multiple grids",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Volume_velocity_z_grid_get, Volume_velocity_z_grid_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Volume_animation_data_ = {
		{nullptr, 	&rna_Volume_velocity_z_grid,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Volume_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_Volume;
	srna->cont.properties = {&rna_Volume_filepath, &rna_Volume_animation_data};
	srna->identifier = "Volume";
	srna->flag = 519;
	srna->name = "Volume";
	srna->description = "Volume data-block for 3D volume grids";
	srna->translation_context = "*";
	srna->icon = 274;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Volume Grids */
static CollectionPropertyRNA rna_VolumeGrids_rna_properties_;
PropertyRNA &rna_VolumeGrids_rna_properties = reinterpret_cast<PropertyRNA &>(rna_VolumeGrids_rna_properties_);

static PointerPropertyRNA rna_VolumeGrids_rna_type_;
PropertyRNA &rna_VolumeGrids_rna_type = reinterpret_cast<PropertyRNA &>(rna_VolumeGrids_rna_type_);

static IntPropertyRNA rna_VolumeGrids_active_index_;
PropertyRNA &rna_VolumeGrids_active_index = reinterpret_cast<PropertyRNA &>(rna_VolumeGrids_active_index_);

static StringPropertyRNA rna_VolumeGrids_error_message_;
PropertyRNA &rna_VolumeGrids_error_message = reinterpret_cast<PropertyRNA &>(rna_VolumeGrids_error_message_);

static BoolPropertyRNA rna_VolumeGrids_is_loaded_;
PropertyRNA &rna_VolumeGrids_is_loaded = reinterpret_cast<PropertyRNA &>(rna_VolumeGrids_is_loaded_);

static IntPropertyRNA rna_VolumeGrids_frame_;
PropertyRNA &rna_VolumeGrids_frame = reinterpret_cast<PropertyRNA &>(rna_VolumeGrids_frame_);

static StringPropertyRNA rna_VolumeGrids_frame_filepath_;
PropertyRNA &rna_VolumeGrids_frame_filepath = reinterpret_cast<PropertyRNA &>(rna_VolumeGrids_frame_filepath_);

static BoolPropertyRNA rna_VolumeGrids_load_success_;
PropertyRNA &rna_VolumeGrids_load_success = reinterpret_cast<PropertyRNA &>(rna_VolumeGrids_load_success_);

FunctionRNA *rna_VolumeGrids_load_func;
FunctionRNA *rna_VolumeGrids_unload_func;
static StringPropertyRNA rna_VolumeGrids_save_filepath_;
PropertyRNA &rna_VolumeGrids_save_filepath = reinterpret_cast<PropertyRNA &>(rna_VolumeGrids_save_filepath_);

static BoolPropertyRNA rna_VolumeGrids_save_success_;
PropertyRNA &rna_VolumeGrids_save_success = reinterpret_cast<PropertyRNA &>(rna_VolumeGrids_save_success_);

FunctionRNA *rna_VolumeGrids_save_func;
StructRNA *RNA_VolumeGrids;
void register_struct_VolumeGrids(BlenderRNA &brna)
{
	rna_VolumeGrids_rna_properties_ = {
		{&rna_VolumeGrids_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrids_rna_properties_begin, VolumeGrids_rna_properties_next, VolumeGrids_rna_properties_end, VolumeGrids_rna_properties_get, nullptr, nullptr, VolumeGrids_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_VolumeGrids_rna_type_ = {
		{&rna_VolumeGrids_active_index, 	&rna_VolumeGrids_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrids_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_VolumeGrids_active_index_ = {
		{&rna_VolumeGrids_error_message, 	&rna_VolumeGrids_rna_type,
		-1, "active_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Grid Index",
		"Index of active volume grid",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Volume_update_display, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrids_active_index_get, VolumeGrids_active_index_set, nullptr, nullptr, rna_VolumeGrids_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_VolumeGrids_error_message_ = {
		{&rna_VolumeGrids_is_loaded, 	&rna_VolumeGrids_active_index,
		-1, "error_message", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Error Message",
		"If loading grids failed, error message with details",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrids_error_message_get, VolumeGrids_error_message_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_VolumeGrids_is_loaded_ = {
		{&rna_VolumeGrids_frame, 	&rna_VolumeGrids_error_message,
		-1, "is_loaded", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Loaded",
		"List of grids and metadata are loaded in memory",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrids_is_loaded_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_VolumeGrids_frame_ = {
		{&rna_VolumeGrids_frame_filepath, 	&rna_VolumeGrids_is_loaded,
		-1, "frame", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number that volume grids will be loaded at, based on scene time and volume parameters",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrids_frame_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_VolumeGrids_frame_filepath_ = {
		{nullptr, 	&rna_VolumeGrids_frame,
		-1, "frame_filepath", 294912, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame File Path",
		"Volume file used for loading the volume at the current frame. Empty if the volume has not be loaded or the frame only exists in memory.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VolumeGrids_frame_filepath_get, VolumeGrids_frame_filepath_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_VolumeGrids;
	srna->cont.properties = {&rna_VolumeGrids_rna_properties, &rna_VolumeGrids_frame_filepath};
	srna->identifier = "VolumeGrids";
	srna->flag = 516;
	srna->name = "Volume Grids";
	srna->description = "3D volume grids";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_VolumeGrids_rna_properties;
	{
	rna_VolumeGrids_load_success_ = {
		{nullptr, 	nullptr,
		-1, "success", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"True if grid list was successfully loaded",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_VolumeGrids_load_success, &rna_VolumeGrids_load_success};
		func->identifier = "load";
		func->flag = 4;
		func->description = "Load list of grids and metadata from file";
		func->call = VolumeGrids_load_call;
		func->c_ret = &rna_VolumeGrids_load_success;
		rna_VolumeGrids_load_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "unload";
		func->description = "Unload all grid and voxel data from memory";
		func->call = VolumeGrids_unload_call;
		rna_VolumeGrids_unload_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_VolumeGrids_save_filepath_ = {
		{&rna_VolumeGrids_save_success, 	nullptr,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"File path to save to",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_VolumeGrids_save_success_ = {
		{nullptr, 	&rna_VolumeGrids_save_filepath,
		-1, "success", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"True if grid list was successfully loaded",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_VolumeGrids_save_filepath, &rna_VolumeGrids_save_success};
		func->identifier = "save";
		func->flag = 20;
		func->description = "Save grids and metadata to file";
		func->call = VolumeGrids_save_call;
		func->c_ret = &rna_VolumeGrids_save_success;
		rna_VolumeGrids_save_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
