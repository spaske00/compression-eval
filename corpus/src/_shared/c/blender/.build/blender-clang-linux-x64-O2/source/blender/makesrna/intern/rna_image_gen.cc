
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

#include "rna_image.cc"
#include "rna_image_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_RenderSlot_rna_properties;
extern PropertyRNA &rna_RenderSlot_rna_type;
extern PropertyRNA &rna_RenderSlot_name;

extern FunctionRNA *rna_RenderSlot_clear_func;
extern PropertyRNA &rna_RenderSlot_clear_iuser;



extern PropertyRNA &rna_UDIMTile_rna_properties;
extern PropertyRNA &rna_UDIMTile_rna_type;
extern PropertyRNA &rna_UDIMTile_label;
extern PropertyRNA &rna_UDIMTile_number;
extern PropertyRNA &rna_UDIMTile_size;
extern PropertyRNA &rna_UDIMTile_channels;
extern PropertyRNA &rna_UDIMTile_generated_type;
extern PropertyRNA &rna_UDIMTile_generated_width;
extern PropertyRNA &rna_UDIMTile_generated_height;
extern PropertyRNA &rna_UDIMTile_use_generated_float;
extern PropertyRNA &rna_UDIMTile_is_generated_tile;
extern PropertyRNA &rna_UDIMTile_generated_color;


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

extern PropertyRNA &rna_Image_filepath;
extern PropertyRNA &rna_Image_filepath_raw;
extern PropertyRNA &rna_Image_file_format;
extern PropertyRNA &rna_Image_source;
extern PropertyRNA &rna_Image_type;
extern PropertyRNA &rna_Image_packed_file;
extern PropertyRNA &rna_Image_packed_files;
extern PropertyRNA &rna_Image_use_view_as_render;
extern PropertyRNA &rna_Image_use_deinterlace;
extern PropertyRNA &rna_Image_use_multiview;
extern PropertyRNA &rna_Image_is_stereo_3d;
extern PropertyRNA &rna_Image_is_multiview;
extern PropertyRNA &rna_Image_is_dirty;
extern PropertyRNA &rna_Image_generated_type;
extern PropertyRNA &rna_Image_generated_width;
extern PropertyRNA &rna_Image_generated_height;
extern PropertyRNA &rna_Image_use_generated_float;
extern PropertyRNA &rna_Image_generated_color;
extern PropertyRNA &rna_Image_display_aspect;
extern PropertyRNA &rna_Image_render_slots;
extern PropertyRNA &rna_Image_tiles;
extern PropertyRNA &rna_Image_has_data;
extern PropertyRNA &rna_Image_depth;
extern PropertyRNA &rna_Image_size;
extern PropertyRNA &rna_Image_resolution;
extern PropertyRNA &rna_Image_frame_duration;
extern PropertyRNA &rna_Image_pixels;
extern PropertyRNA &rna_Image_channels;
extern PropertyRNA &rna_Image_is_float;
extern PropertyRNA &rna_Image_colorspace_settings;
extern PropertyRNA &rna_Image_alpha_mode;
extern PropertyRNA &rna_Image_use_half_precision;
extern PropertyRNA &rna_Image_seam_margin;
extern PropertyRNA &rna_Image_views_format;
extern PropertyRNA &rna_Image_stereo_3d_format;

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


extern FunctionRNA *rna_Image_save_render_func;
extern PropertyRNA &rna_Image_save_render_filepath;
extern PropertyRNA &rna_Image_save_render_scene;
extern PropertyRNA &rna_Image_save_render_quality;

extern FunctionRNA *rna_Image_save_func;
extern PropertyRNA &rna_Image_save_filepath;
extern PropertyRNA &rna_Image_save_quality;
extern PropertyRNA &rna_Image_save_save_copy;

extern FunctionRNA *rna_Image_pack_func;
extern PropertyRNA &rna_Image_pack_data;
extern PropertyRNA &rna_Image_pack_data_len;

extern FunctionRNA *rna_Image_unpack_func;
extern PropertyRNA &rna_Image_unpack_method;

extern FunctionRNA *rna_Image_reload_func;
extern FunctionRNA *rna_Image_update_func;
extern FunctionRNA *rna_Image_scale_func;
extern PropertyRNA &rna_Image_scale_width;
extern PropertyRNA &rna_Image_scale_height;
extern PropertyRNA &rna_Image_scale_frame;
extern PropertyRNA &rna_Image_scale_tile_index;

extern FunctionRNA *rna_Image_gl_touch_func;
extern PropertyRNA &rna_Image_gl_touch_frame;
extern PropertyRNA &rna_Image_gl_touch_layer_index;
extern PropertyRNA &rna_Image_gl_touch_pass_index;
extern PropertyRNA &rna_Image_gl_touch_error;

extern FunctionRNA *rna_Image_gl_load_func;
extern PropertyRNA &rna_Image_gl_load_frame;
extern PropertyRNA &rna_Image_gl_load_layer_index;
extern PropertyRNA &rna_Image_gl_load_pass_index;
extern PropertyRNA &rna_Image_gl_load_error;

extern FunctionRNA *rna_Image_gl_free_func;
extern FunctionRNA *rna_Image_filepath_from_user_func;
extern PropertyRNA &rna_Image_filepath_from_user_image_user;
extern PropertyRNA &rna_Image_filepath_from_user_filepath;

extern FunctionRNA *rna_Image_buffers_free_func;


extern PropertyRNA &rna_RenderSlots_rna_properties;
extern PropertyRNA &rna_RenderSlots_rna_type;
extern PropertyRNA &rna_RenderSlots_active_index;
extern PropertyRNA &rna_RenderSlots_active;

extern FunctionRNA *rna_RenderSlots_new_func;
extern PropertyRNA &rna_RenderSlots_new_name;
extern PropertyRNA &rna_RenderSlots_new_result;



extern PropertyRNA &rna_UDIMTiles_rna_properties;
extern PropertyRNA &rna_UDIMTiles_rna_type;
extern PropertyRNA &rna_UDIMTiles_active_index;
extern PropertyRNA &rna_UDIMTiles_active;

extern FunctionRNA *rna_UDIMTiles_new_func;
extern PropertyRNA &rna_UDIMTiles_new_tile_number;
extern PropertyRNA &rna_UDIMTiles_new_label;
extern PropertyRNA &rna_UDIMTiles_new_result;

extern FunctionRNA *rna_UDIMTiles_get_func;
extern PropertyRNA &rna_UDIMTiles_get_tile_number;
extern PropertyRNA &rna_UDIMTiles_get_result;

extern FunctionRNA *rna_UDIMTiles_remove_func;
extern PropertyRNA &rna_UDIMTiles_remove_tile;



extern PropertyRNA &rna_ImageUser_rna_properties;
extern PropertyRNA &rna_ImageUser_rna_type;
extern PropertyRNA &rna_ImageUser_use_auto_refresh;
extern PropertyRNA &rna_ImageUser_frame_current;
extern PropertyRNA &rna_ImageUser_use_cyclic;
extern PropertyRNA &rna_ImageUser_frame_duration;
extern PropertyRNA &rna_ImageUser_frame_offset;
extern PropertyRNA &rna_ImageUser_frame_start;
extern PropertyRNA &rna_ImageUser_multilayer_layer;
extern PropertyRNA &rna_ImageUser_multilayer_pass;
extern PropertyRNA &rna_ImageUser_multilayer_view;
extern PropertyRNA &rna_ImageUser_tile;


extern PropertyRNA &rna_ImagePackedFile_rna_properties;
extern PropertyRNA &rna_ImagePackedFile_rna_type;
extern PropertyRNA &rna_ImagePackedFile_packed_file;
extern PropertyRNA &rna_ImagePackedFile_filepath;
extern PropertyRNA &rna_ImagePackedFile_view;
extern PropertyRNA &rna_ImagePackedFile_tile_number;

extern FunctionRNA *rna_ImagePackedFile_save_func;

static PointerRNA RenderSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RenderSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderSlot_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderSlot_rna_properties_get(iter);
    }
}

void RenderSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderSlot_rna_properties_get(iter);
    }
}

void RenderSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RenderSlot_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void RenderSlot_name_get(PointerRNA *ptr, char *value)
{
    RenderSlot *data = (RenderSlot *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int RenderSlot_name_length(PointerRNA *ptr)
{
    RenderSlot *data = (RenderSlot *)(ptr->data);
    return strlen(data->name);
}

void RenderSlot_name_set(PointerRNA *ptr, const char *value)
{
    RenderSlot *data = (RenderSlot *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA UDIMTile_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UDIMTile_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UDIMTile_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UDIMTile_rna_properties_get(iter);
    }
}

void UDIMTile_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UDIMTile_rna_properties_get(iter);
    }
}

void UDIMTile_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UDIMTile_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UDIMTile_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void UDIMTile_label_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_UDIMTile_label_get;
    fn(ptr, value);
}

int UDIMTile_label_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_UDIMTile_label_length;
    return fn(ptr);
}

void UDIMTile_label_set(PointerRNA *ptr, const char *value)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    BLI_strncpy_utf8(data->label, value, 64);
}

int UDIMTile_number_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return (int)(data->tile_number);
}

void UDIMTile_number_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_UDIMTile_tile_number_set;
    fn(ptr, value);
}

void UDIMTile_size_get(PointerRNA *ptr, int values[2])
{
    PropIntArrayGetFunc fn = rna_UDIMTile_size_get;
    fn(ptr, values);
}

int UDIMTile_channels_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_UDIMTile_channels_get;
    return fn(ptr);
}

int UDIMTile_generated_type_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return (int)(data->gen_type);
}

void UDIMTile_generated_type_set(PointerRNA *ptr, int value)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    data->gen_type = (std::remove_reference_t<decltype(data->gen_type)>)value;
}

int UDIMTile_generated_width_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return (int)(data->gen_x);
}

void UDIMTile_generated_width_set(PointerRNA *ptr, int value)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    data->gen_x = (std::remove_reference_t<decltype(data->gen_x)>)std::clamp(value, 1, 65536);
}

int UDIMTile_generated_height_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return (int)(data->gen_y);
}

void UDIMTile_generated_height_set(PointerRNA *ptr, int value)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    data->gen_y = (std::remove_reference_t<decltype(data->gen_y)>)std::clamp(value, 1, 65536);
}

bool UDIMTile_use_generated_float_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return ((uint64_t(data->gen_flag) & 1) != 0);
}

void UDIMTile_use_generated_float_set(PointerRNA *ptr, bool value)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    if (value) { data->gen_flag = std::remove_reference_t<decltype(data->gen_flag)>(uint64_t(data->gen_flag) | 1); }
    else { data->gen_flag = std::remove_reference_t<decltype(data->gen_flag)>(uint64_t(data->gen_flag) & ~uint64_t(1)); }
}

bool UDIMTile_is_generated_tile_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return ((uint64_t(data->gen_flag) & 2) != 0);
}

void UDIMTile_generated_color_get(PointerRNA *ptr, float values[4])
{
    ImageTile *data = (ImageTile *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->gen_color)[i]);
    }
}

void UDIMTile_generated_color_set(PointerRNA *ptr, const float values[4])
{
    ImageTile *data = (ImageTile *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->gen_color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void Image_filepath_get(PointerRNA *ptr, char *value)
{
    Image *data = (Image *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

int Image_filepath_length(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return strlen(data->filepath);
}

void Image_filepath_set(PointerRNA *ptr, const char *value)
{
    Image *data = (Image *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

void Image_filepath_raw_get(PointerRNA *ptr, char *value)
{
    Image *data = (Image *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

int Image_filepath_raw_length(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return strlen(data->filepath);
}

void Image_filepath_raw_set(PointerRNA *ptr, const char *value)
{
    Image *data = (Image *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

int Image_file_format_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Image_file_format_get;
    return fn(ptr);
}

void Image_file_format_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Image_file_format_set;
    fn(ptr, value);
}

int Image_source_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (int)(data->source);
}

void Image_source_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Image_source_set;
    fn(ptr, value);
}

int Image_type_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (int)(data->type);
}

PointerRNA Image_packed_file_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Image_packed_file_get;
    return fn(ptr);
}

static PointerRNA Image_packed_files_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ImagePackedFile, rna_iterator_listbase_get(iter));
}

void Image_packed_files_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Image_packed_files;

    rna_iterator_listbase_begin(iter, ptr, &data->packedfiles, nullptr);

    if (iter->valid) {
        iter->ptr = Image_packed_files_get(iter);
    }
}

void Image_packed_files_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Image_packed_files_get(iter);
    }
}

void Image_packed_files_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Image_packed_files_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Image_packed_files_begin(&iter, ptr);

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
        if (found) { *r_ptr = Image_packed_files_get(&iter); }
    }

    Image_packed_files_end(&iter);

    return found;
}

int ImagePackedFile_filepath_length(PointerRNA *);
void ImagePackedFile_filepath_get(PointerRNA *, char *);

bool Image_packed_files_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Image_packed_files_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ImagePackedFile_filepath_length(&iter.ptr);
            if (namelen < 1024) {
                ImagePackedFile_filepath_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                ImagePackedFile_filepath_get(&iter.ptr, name);
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
        Image_packed_files_next(&iter);
    }
    Image_packed_files_end(&iter);

    return found;
}

bool Image_use_view_as_render_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void Image_use_view_as_render_set(PointerRNA *ptr, bool value)
{
    Image *data = (Image *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool Image_use_deinterlace_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void Image_use_deinterlace_set(PointerRNA *ptr, bool value)
{
    Image *data = (Image *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool Image_use_multiview_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return ((uint64_t(data->flag) & 16384) != 0);
}

void Image_use_multiview_set(PointerRNA *ptr, bool value)
{
    Image *data = (Image *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16384); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16384)); }
}

bool Image_is_stereo_3d_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_is_stereo_3d_get;
    return fn(ptr);
}

bool Image_is_multiview_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_is_multiview_get;
    return fn(ptr);
}

bool Image_is_dirty_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_dirty_get;
    return fn(ptr);
}

int Image_generated_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Image_generated_type_get;
    return fn(ptr);
}

void Image_generated_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Image_generated_type_set;
    fn(ptr, value);
}

int Image_generated_width_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_generated_width_get;
    return fn(ptr);
}

void Image_generated_width_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Image_generated_width_set;
    fn(ptr, value);
}

int Image_generated_height_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_generated_height_get;
    return fn(ptr);
}

void Image_generated_height_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Image_generated_height_set;
    fn(ptr, value);
}

bool Image_use_generated_float_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_generated_float_get;
    return fn(ptr);
}

void Image_use_generated_float_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Image_generated_float_set;
    fn(ptr, value);
}

void Image_generated_color_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_Image_generated_color_get;
    fn(ptr, values);
}

void Image_generated_color_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_Image_generated_color_set;
    fn(ptr, values);
}

void Image_display_aspect_get(PointerRNA *ptr, float values[2])
{
    Image *data = (Image *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->aspx)[i]);
    }
}

void Image_display_aspect_set(PointerRNA *ptr, const float values[2])
{
    Image *data = (Image *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        (&data->aspx)[i] = std::clamp(values[i], 0.1000000015f, FLT_MAX);
    }
}

static PointerRNA Image_render_slots_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_RenderSlot, rna_iterator_listbase_get(iter));
}

void Image_render_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Image_render_slots;

    rna_iterator_listbase_begin(iter, ptr, &data->renderslots, nullptr);

    if (iter->valid) {
        iter->ptr = Image_render_slots_get(iter);
    }
}

void Image_render_slots_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Image_render_slots_get(iter);
    }
}

void Image_render_slots_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Image_render_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Image_render_slots_begin(&iter, ptr);

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
        if (found) { *r_ptr = Image_render_slots_get(&iter); }
    }

    Image_render_slots_end(&iter);

    return found;
}

static PointerRNA Image_tiles_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_UDIMTile, rna_iterator_listbase_get(iter));
}

void Image_tiles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Image_tiles;

    rna_iterator_listbase_begin(iter, ptr, &data->tiles, nullptr);

    if (iter->valid) {
        iter->ptr = Image_tiles_get(iter);
    }
}

void Image_tiles_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Image_tiles_get(iter);
    }
}

void Image_tiles_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Image_tiles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Image_tiles_begin(&iter, ptr);

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
        if (found) { *r_ptr = Image_tiles_get(&iter); }
    }

    Image_tiles_end(&iter);

    return found;
}

bool Image_has_data_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_has_data_get;
    return fn(ptr);
}

int Image_depth_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_depth_get;
    return fn(ptr);
}

void Image_size_get(PointerRNA *ptr, int values[2])
{
    PropIntArrayGetFunc fn = rna_Image_size_get;
    fn(ptr, values);
}

void Image_resolution_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_Image_resolution_get;
    fn(ptr, values);
}

void Image_resolution_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_Image_resolution_set;
    fn(ptr, values);
}

int Image_frame_duration_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_frame_duration_get;
    return fn(ptr);
}

void Image_pixels_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_Image_pixels_get;
    fn(ptr, values);
}

void Image_pixels_set(PointerRNA *ptr, const float values[])
{
    PropFloatArraySetFunc fn = rna_Image_pixels_set;
    fn(ptr, values);
}

int Image_channels_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_channels_get;
    return fn(ptr);
}

bool Image_is_float_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_is_float_get;
    return fn(ptr);
}

PointerRNA Image_colorspace_settings_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ColorManagedInputColorspaceSettings, &data->colorspace_settings);
}

int Image_alpha_mode_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (int)(data->alpha_mode);
}

void Image_alpha_mode_set(PointerRNA *ptr, int value)
{
    Image *data = (Image *)(ptr->data);
    data->alpha_mode = (std::remove_reference_t<decltype(data->alpha_mode)>)value;
}

bool Image_use_half_precision_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void Image_use_half_precision_set(PointerRNA *ptr, bool value)
{
    Image *data = (Image *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int Image_seam_margin_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (int)(data->seam_margin);
}

void Image_seam_margin_set(PointerRNA *ptr, int value)
{
    Image *data = (Image *)(ptr->data);
    data->seam_margin = (std::remove_reference_t<decltype(data->seam_margin)>)std::clamp(value, -32768, 32767);
}

int Image_views_format_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (int)(data->views_format);
}

void Image_views_format_set(PointerRNA *ptr, int value)
{
    Image *data = (Image *)(ptr->data);
    data->views_format = (std::remove_reference_t<decltype(data->views_format)>)value;
}

PointerRNA Image_stereo_3d_format_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Stereo3dFormat, data->stereo3d_format);
}

static PointerRNA RenderSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RenderSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderSlots_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderSlots_rna_properties_get(iter);
    }
}

void RenderSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderSlots_rna_properties_get(iter);
    }
}

void RenderSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RenderSlots_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int RenderSlots_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_render_slots_active_index_get;
    return fn(ptr);
}

void RenderSlots_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_render_slots_active_index_set;
    fn(ptr, value);
}

PointerRNA RenderSlots_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_render_slots_active_get;
    return fn(ptr);
}

void RenderSlots_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_render_slots_active_set;
    fn(ptr, value, reports);
}

static PointerRNA UDIMTiles_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UDIMTiles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UDIMTiles_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UDIMTiles_rna_properties_get(iter);
    }
}

void UDIMTiles_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UDIMTiles_rna_properties_get(iter);
    }
}

void UDIMTiles_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UDIMTiles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UDIMTiles_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int UDIMTiles_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_active_tile_index_get;
    return fn(ptr);
}

void UDIMTiles_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Image_active_tile_index_set;
    fn(ptr, value);
}

PointerRNA UDIMTiles_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Image_active_tile_get;
    return fn(ptr);
}

void UDIMTiles_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Image_active_tile_set;
    fn(ptr, value, reports);
}

static PointerRNA ImageUser_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ImageUser_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ImageUser_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ImageUser_rna_properties_get(iter);
    }
}

void ImageUser_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ImageUser_rna_properties_get(iter);
    }
}

void ImageUser_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ImageUser_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ImageUser_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool ImageUser_use_auto_refresh_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ImageUser_use_auto_refresh_set(PointerRNA *ptr, bool value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int ImageUser_frame_current_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->framenr);
}

void ImageUser_frame_current_set(PointerRNA *ptr, int value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    data->framenr = (std::remove_reference_t<decltype(data->framenr)>)std::clamp(value, -1048574, 1048574);
}

bool ImageUser_use_cyclic_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (bool)(data->cycl);
}

void ImageUser_use_cyclic_set(PointerRNA *ptr, bool value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    data->cycl = (std::remove_reference_t<decltype(data->cycl)>)value;
}

int ImageUser_frame_duration_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->frames);
}

void ImageUser_frame_duration_set(PointerRNA *ptr, int value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    data->frames = (std::remove_reference_t<decltype(data->frames)>)std::clamp(value, 0, 1048574);
}

int ImageUser_frame_offset_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->offset);
}

void ImageUser_frame_offset_set(PointerRNA *ptr, int value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    data->offset = (std::remove_reference_t<decltype(data->offset)>)value;
}

int ImageUser_frame_start_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->sfra);
}

void ImageUser_frame_start_set(PointerRNA *ptr, int value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    data->sfra = (std::remove_reference_t<decltype(data->sfra)>)std::clamp(value, -1048574, 1048574);
}

int ImageUser_multilayer_layer_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->layer);
}

int ImageUser_multilayer_pass_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->pass);
}

int ImageUser_multilayer_view_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->view);
}

int ImageUser_tile_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->tile);
}

void ImageUser_tile_set(PointerRNA *ptr, int value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    data->tile = (std::remove_reference_t<decltype(data->tile)>)std::clamp(value, 0, INT_MAX);
}

static PointerRNA ImagePackedFile_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ImagePackedFile_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ImagePackedFile_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ImagePackedFile_rna_properties_get(iter);
    }
}

void ImagePackedFile_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ImagePackedFile_rna_properties_get(iter);
    }
}

void ImagePackedFile_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ImagePackedFile_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ImagePackedFile_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ImagePackedFile_packed_file_get(PointerRNA *ptr)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PackedFile, data->packedfile);
}

void ImagePackedFile_filepath_get(PointerRNA *ptr, char *value)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

int ImagePackedFile_filepath_length(PointerRNA *ptr)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    return strlen(data->filepath);
}

void ImagePackedFile_filepath_set(PointerRNA *ptr, const char *value)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

int ImagePackedFile_view_get(PointerRNA *ptr)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    return (int)(data->view);
}

int ImagePackedFile_tile_number_get(PointerRNA *ptr)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    return (int)(data->tile_number);
}

void RenderSlot_clear_func(ID *_selfid, RenderSlot *_self, ImageUser *iuser)
{
	rna_RenderSlot_clear(_selfid, _self, iuser);
}

static void RenderSlot_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	RenderSlot *_self;
	ImageUser *iuser;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (RenderSlot *)_ptr->data;
	_data = (char *)_parms->data;
	iuser = *((ImageUser **)_data);
	
	rna_RenderSlot_clear(_selfid, _self, iuser);
}

/* Repeated prototypes to detect errors */

void rna_RenderSlot_clear(ID *_selfid, RenderSlot *_self, ImageUser *iuser);


int Image_pixels_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_Image_pixels_get_length(ptr, arraylen);
}

void Image_save_render_func(Image *_self, bContext *C, ReportList *reports, const char * filepath, Scene *scene, int quality)
{
	rna_Image_save_render(_self, C, reports, filepath, scene, quality);
}

static void Image_save_render_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	const char * filepath;
	Scene *scene;
	int quality;
	char *_data;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	scene = *((Scene **)_data);
	_data += 8;
	quality = *((int *)_data);
	
	rna_Image_save_render(_self, C, reports, filepath, scene, quality);
}

void Image_save_func(Image *_self, Main *bmain, bContext *C, ReportList *reports, const char * filepath, int quality, bool save_copy)
{
	rna_Image_save(_self, bmain, C, reports, filepath, quality, save_copy);
}

static void Image_save_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	const char * filepath;
	int quality;
	bool save_copy;
	char *_data;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	quality = *((int *)_data);
	_data += 8;
	save_copy = *((bool *)_data);
	
	rna_Image_save(_self, CTX_data_main(C), C, reports, filepath, quality, save_copy);
}

void Image_pack_func(Image *_self, Main *bmain, bContext *C, ReportList *reports, const char * data, int data_len)
{
	rna_Image_pack(_self, bmain, C, reports, data, data_len);
}

static void Image_pack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	const char * data;
	int data_len;
	char *_data;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	data = *((const char * *)_data);
	_data += 8;
	data_len = *((int *)_data);
	
	rna_Image_pack(_self, CTX_data_main(C), C, reports, data, data_len);
}

void Image_unpack_func(Image *_self, Main *bmain, ReportList *reports, int method)
{
	rna_Image_unpack(_self, bmain, reports, method);
}

static void Image_unpack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	int method;
	char *_data;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	method = *((int *)_data);
	
	rna_Image_unpack(_self, CTX_data_main(C), reports, method);
}

void Image_reload_func(Image *_self, Main *bmain)
{
	rna_Image_reload(_self, bmain);
}

static void Image_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	_self = (Image *)_ptr->data;
	
	rna_Image_reload(_self, CTX_data_main(C));
}

void Image_update_func(Image *_self, ReportList *reports)
{
	rna_Image_update(_self, reports);
}

static void Image_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	_self = (Image *)_ptr->data;
	
	rna_Image_update(_self, reports);
}

void Image_scale_func(Image *_self, ReportList *reports, int width, int height, int frame, int tile_index)
{
	rna_Image_scale(_self, reports, width, height, frame, tile_index);
}

static void Image_scale_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	int width;
	int height;
	int frame;
	int tile_index;
	char *_data;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	width = *((int *)_data);
	_data += 8;
	height = *((int *)_data);
	_data += 8;
	frame = *((int *)_data);
	_data += 8;
	tile_index = *((int *)_data);
	
	rna_Image_scale(_self, reports, width, height, frame, tile_index);
}

int Image_gl_touch_func(Image *_self, ReportList *reports, int frame, int layer_index, int pass_index)
{
	return rna_Image_gl_touch(_self, reports, frame, layer_index, pass_index);
}

static void Image_gl_touch_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	int frame;
	int layer_index;
	int pass_index;
	int error;
	char *_data, *_retdata;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	layer_index = *((int *)_data);
	_data += 8;
	pass_index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	error = rna_Image_gl_touch(_self, reports, frame, layer_index, pass_index);
	*((int *)_retdata) = error;
}

int Image_gl_load_func(Image *_self, ReportList *reports, int frame, int layer_index, int pass_index)
{
	return rna_Image_gl_load(_self, reports, frame, layer_index, pass_index);
}

static void Image_gl_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	int frame;
	int layer_index;
	int pass_index;
	int error;
	char *_data, *_retdata;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	layer_index = *((int *)_data);
	_data += 8;
	pass_index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	error = rna_Image_gl_load(_self, reports, frame, layer_index, pass_index);
	*((int *)_retdata) = error;
}

void Image_gl_free_func(Image *_self)
{
	rna_Image_gl_free(_self);
}

static void Image_gl_free_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	_self = (Image *)_ptr->data;
	
	rna_Image_gl_free(_self);
}

void Image_filepath_from_user_func(Image *_self, ImageUser *image_user, char * filepath)
{
	rna_Image_filepath_from_user(_self, image_user, filepath);
}

static void Image_filepath_from_user_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	ImageUser *image_user;
	char * filepath;
	char *_data;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	image_user = *((ImageUser **)_data);
	_data += 8;
	filepath = ((char * )_data);
	
	rna_Image_filepath_from_user(_self, image_user, filepath);
}

void Image_buffers_free_func(Image *_self)
{
	rna_Image_buffers_free(_self);
}

static void Image_buffers_free_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	_self = (Image *)_ptr->data;
	
	rna_Image_buffers_free(_self);
}

/* Repeated prototypes to detect errors */

void rna_Image_save_render(Image *_self, bContext *C, ReportList *reports, const char * filepath, Scene *scene, int quality);
void rna_Image_save(Image *_self, Main *bmain, bContext *C, ReportList *reports, const char * filepath, int quality, bool save_copy);
void rna_Image_pack(Image *_self, Main *bmain, bContext *C, ReportList *reports, const char * data, int data_len);
void rna_Image_unpack(Image *_self, Main *bmain, ReportList *reports, int method);
void rna_Image_reload(Image *_self, Main *bmain);
void rna_Image_update(Image *_self, ReportList *reports);
void rna_Image_scale(Image *_self, ReportList *reports, int width, int height, int frame, int tile_index);
int rna_Image_gl_touch(Image *_self, ReportList *reports, int frame, int layer_index, int pass_index);
int rna_Image_gl_load(Image *_self, ReportList *reports, int frame, int layer_index, int pass_index);
void rna_Image_gl_free(Image *_self);
void rna_Image_filepath_from_user(Image *_self, ImageUser *image_user, char * filepath);
void rna_Image_buffers_free(Image *_self);

RenderSlot *RenderSlots_new_func(Image *_self, const char * name)
{
	return BKE_image_add_renderslot(_self, name);
}

static void RenderSlots_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	const char * name;
	RenderSlot *result;
	char *_data, *_retdata;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = BKE_image_add_renderslot(_self, name);
	*((RenderSlot **)_retdata) = result;
}

/* Repeated prototypes to detect errors */

RenderSlot *BKE_image_add_renderslot(Image *_self, const char * name);

ImageTile *UDIMTiles_new_func(Image *_self, int tile_number, const char * label)
{
	return rna_UDIMTile_new(_self, tile_number, label);
}

static void UDIMTiles_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	int tile_number;
	const char * label;
	ImageTile *result;
	char *_data, *_retdata;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	tile_number = *((int *)_data);
	_data += 8;
	label = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_UDIMTile_new(_self, tile_number, label);
	*((ImageTile **)_retdata) = result;
}

ImageTile *UDIMTiles_get_func(Image *_self, int tile_number)
{
	return BKE_image_get_tile(_self, tile_number);
}

static void UDIMTiles_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	int tile_number;
	ImageTile *result;
	char *_data, *_retdata;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	tile_number = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = BKE_image_get_tile(_self, tile_number);
	*((ImageTile **)_retdata) = result;
}

void UDIMTiles_remove_func(Image *_self, PointerRNA *tile)
{
	rna_UDIMTile_remove(_self, tile);
}

static void UDIMTiles_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Image *_self;
	PointerRNA *tile;
	char *_data;
	
	_self = (Image *)_ptr->data;
	_data = (char *)_parms->data;
	tile = *((PointerRNA **)_data);
	
	rna_UDIMTile_remove(_self, tile);
}

/* Repeated prototypes to detect errors */

ImageTile *rna_UDIMTile_new(Image *_self, int tile_number, const char * label);
ImageTile *BKE_image_get_tile(Image *_self, int tile_number);
void rna_UDIMTile_remove(Image *_self, PointerRNA *tile);


void ImagePackedFile_save_func(ImagePackedFile *_self, Main *bmain, ReportList *reports)
{
	rna_ImagePackedFile_save(_self, bmain, reports);
}

static void ImagePackedFile_save_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ImagePackedFile *_self;
	_self = (ImagePackedFile *)_ptr->data;
	
	rna_ImagePackedFile_save(_self, CTX_data_main(C), reports);
}

/* Repeated prototypes to detect errors */

void rna_ImagePackedFile_save(ImagePackedFile *_self, Main *bmain, ReportList *reports);

/* Render Slot */
static CollectionPropertyRNA rna_RenderSlot_rna_properties_;
PropertyRNA &rna_RenderSlot_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RenderSlot_rna_properties_);

static PointerPropertyRNA rna_RenderSlot_rna_type_;
PropertyRNA &rna_RenderSlot_rna_type = reinterpret_cast<PropertyRNA &>(rna_RenderSlot_rna_type_);

static StringPropertyRNA rna_RenderSlot_name_;
PropertyRNA &rna_RenderSlot_name = reinterpret_cast<PropertyRNA &>(rna_RenderSlot_name_);

static PointerPropertyRNA rna_RenderSlot_clear_iuser_;
PropertyRNA &rna_RenderSlot_clear_iuser = reinterpret_cast<PropertyRNA &>(rna_RenderSlot_clear_iuser_);

FunctionRNA *rna_RenderSlot_clear_func;
StructRNA *RNA_RenderSlot;
void register_struct_RenderSlot(BlenderRNA &brna)
{
	rna_RenderSlot_rna_properties_ = {
		{&rna_RenderSlot_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderSlot_rna_properties_begin, RenderSlot_rna_properties_next, RenderSlot_rna_properties_end, RenderSlot_rna_properties_get, nullptr, nullptr, RenderSlot_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RenderSlot_rna_type_ = {
		{&rna_RenderSlot_name, 	&rna_RenderSlot_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderSlot_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RenderSlot_name_ = {
		{nullptr, 	&rna_RenderSlot_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Render slot name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderSlot_name_get, RenderSlot_name_length, RenderSlot_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	StructRNA *srna = RNA_RenderSlot;
	srna->cont.properties = {&rna_RenderSlot_rna_properties, &rna_RenderSlot_name};
	srna->identifier = "RenderSlot";
	srna->flag = 516;
	srna->name = "Render Slot";
	srna->description = "Parameters defining the render slot";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RenderSlot_rna_properties;
	{
	rna_RenderSlot_clear_iuser_ = {
		{nullptr, 	nullptr,
		-1, "iuser", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "ImageUser",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ImageUser
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderSlot_clear_iuser, &rna_RenderSlot_clear_iuser};
		func->identifier = "clear";
		func->flag = 2048;
		func->description = "Clear the render slot";
		func->call = RenderSlot_clear_call;
		rna_RenderSlot_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* UDIM Tile */
static CollectionPropertyRNA rna_UDIMTile_rna_properties_;
PropertyRNA &rna_UDIMTile_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_rna_properties_);

static PointerPropertyRNA rna_UDIMTile_rna_type_;
PropertyRNA &rna_UDIMTile_rna_type = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_rna_type_);

static StringPropertyRNA rna_UDIMTile_label_;
PropertyRNA &rna_UDIMTile_label = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_label_);

static IntPropertyRNA rna_UDIMTile_number_;
PropertyRNA &rna_UDIMTile_number = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_number_);

static IntPropertyRNA rna_UDIMTile_size_;
PropertyRNA &rna_UDIMTile_size = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_size_);

static IntPropertyRNA rna_UDIMTile_channels_;
PropertyRNA &rna_UDIMTile_channels = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_channels_);

static EnumPropertyRNA rna_UDIMTile_generated_type_;
PropertyRNA &rna_UDIMTile_generated_type = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_generated_type_);

static IntPropertyRNA rna_UDIMTile_generated_width_;
PropertyRNA &rna_UDIMTile_generated_width = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_generated_width_);

static IntPropertyRNA rna_UDIMTile_generated_height_;
PropertyRNA &rna_UDIMTile_generated_height = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_generated_height_);

static BoolPropertyRNA rna_UDIMTile_use_generated_float_;
PropertyRNA &rna_UDIMTile_use_generated_float = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_use_generated_float_);

static BoolPropertyRNA rna_UDIMTile_is_generated_tile_;
PropertyRNA &rna_UDIMTile_is_generated_tile = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_is_generated_tile_);

static FloatPropertyRNA rna_UDIMTile_generated_color_;
PropertyRNA &rna_UDIMTile_generated_color = reinterpret_cast<PropertyRNA &>(rna_UDIMTile_generated_color_);

StructRNA *RNA_UDIMTile;
void register_struct_UDIMTile(BlenderRNA &brna)
{
	rna_UDIMTile_rna_properties_ = {
		{&rna_UDIMTile_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTile_rna_properties_begin, UDIMTile_rna_properties_next, UDIMTile_rna_properties_end, UDIMTile_rna_properties_get, nullptr, nullptr, UDIMTile_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UDIMTile_rna_type_ = {
		{&rna_UDIMTile_label, 	&rna_UDIMTile_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTile_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_UDIMTile_label_ = {
		{&rna_UDIMTile_number, 	&rna_UDIMTile_rna_type,
		-1, "label", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Label",
		"Tile label",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTile_label_get, UDIMTile_label_length, UDIMTile_label_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_UDIMTile_number_ = {
		{&rna_UDIMTile_size, 	&rna_UDIMTile_label,
		-1, "number", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Number",
		"Number of the position that this tile covers",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTile_number_get, UDIMTile_number_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static int rna_UDIMTile_size_default[2] = {
		0,
		0
	};
	rna_UDIMTile_size_ = {
		{&rna_UDIMTile_channels, 	&rna_UDIMTile_number,
		-1, "size", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Size",
		"Width and height of the tile buffer in pixels, zero when image data cannot be loaded",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, UDIMTile_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_UDIMTile_size_default
	};

	rna_UDIMTile_channels_ = {
		{&rna_UDIMTile_generated_type, 	&rna_UDIMTile_size,
		-1, "channels", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Channels",
		"Number of channels in the tile pixels buffer",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTile_channels_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_UDIMTile_generated_type_ = {
		{&rna_UDIMTile_generated_width, 	&rna_UDIMTile_channels,
		-1, "generated_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Generated Type",
		"Generated image type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_UDIMTile_generated_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageTile, gen_type), RawPropertyType(2), nullptr},
		UDIMTile_generated_type_get, UDIMTile_generated_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_image_generated_type_items, 3, 0
	};

	rna_UDIMTile_generated_width_ = {
		{&rna_UDIMTile_generated_height, 	&rna_UDIMTile_generated_type,
		-1, "generated_width", 67108865, 0, 0, 4, 0, PropertyPathTemplateType(0), "Generated Width",
		"Generated image width",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_UDIMTile_generated_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageTile, gen_x), RawPropertyType(0), nullptr},
		UDIMTile_generated_width_get, UDIMTile_generated_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 65536, 1, 65536, 1, nullptr, nullptr, 0, nullptr
	};

	rna_UDIMTile_generated_height_ = {
		{&rna_UDIMTile_use_generated_float, 	&rna_UDIMTile_generated_width,
		-1, "generated_height", 67108865, 0, 0, 4, 0, PropertyPathTemplateType(0), "Generated Height",
		"Generated image height",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_UDIMTile_generated_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageTile, gen_y), RawPropertyType(0), nullptr},
		UDIMTile_generated_height_get, UDIMTile_generated_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 65536, 1, 65536, 1, nullptr, nullptr, 0, nullptr
	};

	rna_UDIMTile_use_generated_float_ = {
		{&rna_UDIMTile_is_generated_tile, 	&rna_UDIMTile_generated_height,
		-1, "use_generated_float", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Float Buffer",
		"Generate floating-point buffer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_UDIMTile_generated_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTile_use_generated_float_get, UDIMTile_use_generated_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UDIMTile_is_generated_tile_ = {
		{&rna_UDIMTile_generated_color, 	&rna_UDIMTile_use_generated_float,
		-1, "is_generated_tile", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Generated Tile",
		"Is this image tile generated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTile_is_generated_tile_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_UDIMTile_generated_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_UDIMTile_generated_color_ = {
		{nullptr, 	&rna_UDIMTile_is_generated_tile,
		-1, "generated_color", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Fill color for the generated image",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_UDIMTile_generated_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageTile, gen_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, UDIMTile_generated_color_get, UDIMTile_generated_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_UDIMTile_generated_color_default
	};

	StructRNA *srna = RNA_UDIMTile;
	srna->cont.properties = {&rna_UDIMTile_rna_properties, &rna_UDIMTile_generated_color};
	srna->identifier = "UDIMTile";
	srna->flag = 516;
	srna->name = "UDIM Tile";
	srna->description = "Properties of the UDIM tile";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UDIMTile_rna_properties;
};

/* Image */
static StringPropertyRNA rna_Image_filepath_;
PropertyRNA &rna_Image_filepath = reinterpret_cast<PropertyRNA &>(rna_Image_filepath_);

static StringPropertyRNA rna_Image_filepath_raw_;
PropertyRNA &rna_Image_filepath_raw = reinterpret_cast<PropertyRNA &>(rna_Image_filepath_raw_);

static EnumPropertyRNA rna_Image_file_format_;
PropertyRNA &rna_Image_file_format = reinterpret_cast<PropertyRNA &>(rna_Image_file_format_);

static EnumPropertyRNA rna_Image_source_;
PropertyRNA &rna_Image_source = reinterpret_cast<PropertyRNA &>(rna_Image_source_);

static EnumPropertyRNA rna_Image_type_;
PropertyRNA &rna_Image_type = reinterpret_cast<PropertyRNA &>(rna_Image_type_);

static PointerPropertyRNA rna_Image_packed_file_;
PropertyRNA &rna_Image_packed_file = reinterpret_cast<PropertyRNA &>(rna_Image_packed_file_);

static CollectionPropertyRNA rna_Image_packed_files_;
PropertyRNA &rna_Image_packed_files = reinterpret_cast<PropertyRNA &>(rna_Image_packed_files_);

static BoolPropertyRNA rna_Image_use_view_as_render_;
PropertyRNA &rna_Image_use_view_as_render = reinterpret_cast<PropertyRNA &>(rna_Image_use_view_as_render_);

static BoolPropertyRNA rna_Image_use_deinterlace_;
PropertyRNA &rna_Image_use_deinterlace = reinterpret_cast<PropertyRNA &>(rna_Image_use_deinterlace_);

static BoolPropertyRNA rna_Image_use_multiview_;
PropertyRNA &rna_Image_use_multiview = reinterpret_cast<PropertyRNA &>(rna_Image_use_multiview_);

static BoolPropertyRNA rna_Image_is_stereo_3d_;
PropertyRNA &rna_Image_is_stereo_3d = reinterpret_cast<PropertyRNA &>(rna_Image_is_stereo_3d_);

static BoolPropertyRNA rna_Image_is_multiview_;
PropertyRNA &rna_Image_is_multiview = reinterpret_cast<PropertyRNA &>(rna_Image_is_multiview_);

static BoolPropertyRNA rna_Image_is_dirty_;
PropertyRNA &rna_Image_is_dirty = reinterpret_cast<PropertyRNA &>(rna_Image_is_dirty_);

static EnumPropertyRNA rna_Image_generated_type_;
PropertyRNA &rna_Image_generated_type = reinterpret_cast<PropertyRNA &>(rna_Image_generated_type_);

static IntPropertyRNA rna_Image_generated_width_;
PropertyRNA &rna_Image_generated_width = reinterpret_cast<PropertyRNA &>(rna_Image_generated_width_);

static IntPropertyRNA rna_Image_generated_height_;
PropertyRNA &rna_Image_generated_height = reinterpret_cast<PropertyRNA &>(rna_Image_generated_height_);

static BoolPropertyRNA rna_Image_use_generated_float_;
PropertyRNA &rna_Image_use_generated_float = reinterpret_cast<PropertyRNA &>(rna_Image_use_generated_float_);

static FloatPropertyRNA rna_Image_generated_color_;
PropertyRNA &rna_Image_generated_color = reinterpret_cast<PropertyRNA &>(rna_Image_generated_color_);

static FloatPropertyRNA rna_Image_display_aspect_;
PropertyRNA &rna_Image_display_aspect = reinterpret_cast<PropertyRNA &>(rna_Image_display_aspect_);

static CollectionPropertyRNA rna_Image_render_slots_;
PropertyRNA &rna_Image_render_slots = reinterpret_cast<PropertyRNA &>(rna_Image_render_slots_);

static CollectionPropertyRNA rna_Image_tiles_;
PropertyRNA &rna_Image_tiles = reinterpret_cast<PropertyRNA &>(rna_Image_tiles_);

static BoolPropertyRNA rna_Image_has_data_;
PropertyRNA &rna_Image_has_data = reinterpret_cast<PropertyRNA &>(rna_Image_has_data_);

static IntPropertyRNA rna_Image_depth_;
PropertyRNA &rna_Image_depth = reinterpret_cast<PropertyRNA &>(rna_Image_depth_);

static IntPropertyRNA rna_Image_size_;
PropertyRNA &rna_Image_size = reinterpret_cast<PropertyRNA &>(rna_Image_size_);

static FloatPropertyRNA rna_Image_resolution_;
PropertyRNA &rna_Image_resolution = reinterpret_cast<PropertyRNA &>(rna_Image_resolution_);

static IntPropertyRNA rna_Image_frame_duration_;
PropertyRNA &rna_Image_frame_duration = reinterpret_cast<PropertyRNA &>(rna_Image_frame_duration_);

static FloatPropertyRNA rna_Image_pixels_;
PropertyRNA &rna_Image_pixels = reinterpret_cast<PropertyRNA &>(rna_Image_pixels_);

static IntPropertyRNA rna_Image_channels_;
PropertyRNA &rna_Image_channels = reinterpret_cast<PropertyRNA &>(rna_Image_channels_);

static BoolPropertyRNA rna_Image_is_float_;
PropertyRNA &rna_Image_is_float = reinterpret_cast<PropertyRNA &>(rna_Image_is_float_);

static PointerPropertyRNA rna_Image_colorspace_settings_;
PropertyRNA &rna_Image_colorspace_settings = reinterpret_cast<PropertyRNA &>(rna_Image_colorspace_settings_);

static EnumPropertyRNA rna_Image_alpha_mode_;
PropertyRNA &rna_Image_alpha_mode = reinterpret_cast<PropertyRNA &>(rna_Image_alpha_mode_);

static BoolPropertyRNA rna_Image_use_half_precision_;
PropertyRNA &rna_Image_use_half_precision = reinterpret_cast<PropertyRNA &>(rna_Image_use_half_precision_);

static IntPropertyRNA rna_Image_seam_margin_;
PropertyRNA &rna_Image_seam_margin = reinterpret_cast<PropertyRNA &>(rna_Image_seam_margin_);

static EnumPropertyRNA rna_Image_views_format_;
PropertyRNA &rna_Image_views_format = reinterpret_cast<PropertyRNA &>(rna_Image_views_format_);

static PointerPropertyRNA rna_Image_stereo_3d_format_;
PropertyRNA &rna_Image_stereo_3d_format = reinterpret_cast<PropertyRNA &>(rna_Image_stereo_3d_format_);

static StringPropertyRNA rna_Image_save_render_filepath_;
PropertyRNA &rna_Image_save_render_filepath = reinterpret_cast<PropertyRNA &>(rna_Image_save_render_filepath_);

static PointerPropertyRNA rna_Image_save_render_scene_;
PropertyRNA &rna_Image_save_render_scene = reinterpret_cast<PropertyRNA &>(rna_Image_save_render_scene_);

static IntPropertyRNA rna_Image_save_render_quality_;
PropertyRNA &rna_Image_save_render_quality = reinterpret_cast<PropertyRNA &>(rna_Image_save_render_quality_);

FunctionRNA *rna_Image_save_render_func;
static StringPropertyRNA rna_Image_save_filepath_;
PropertyRNA &rna_Image_save_filepath = reinterpret_cast<PropertyRNA &>(rna_Image_save_filepath_);

static IntPropertyRNA rna_Image_save_quality_;
PropertyRNA &rna_Image_save_quality = reinterpret_cast<PropertyRNA &>(rna_Image_save_quality_);

static BoolPropertyRNA rna_Image_save_save_copy_;
PropertyRNA &rna_Image_save_save_copy = reinterpret_cast<PropertyRNA &>(rna_Image_save_save_copy_);

FunctionRNA *rna_Image_save_func;
static StringPropertyRNA rna_Image_pack_data_;
PropertyRNA &rna_Image_pack_data = reinterpret_cast<PropertyRNA &>(rna_Image_pack_data_);

static IntPropertyRNA rna_Image_pack_data_len_;
PropertyRNA &rna_Image_pack_data_len = reinterpret_cast<PropertyRNA &>(rna_Image_pack_data_len_);

FunctionRNA *rna_Image_pack_func;
static EnumPropertyRNA rna_Image_unpack_method_;
PropertyRNA &rna_Image_unpack_method = reinterpret_cast<PropertyRNA &>(rna_Image_unpack_method_);

FunctionRNA *rna_Image_unpack_func;
FunctionRNA *rna_Image_reload_func;
FunctionRNA *rna_Image_update_func;
static IntPropertyRNA rna_Image_scale_width_;
PropertyRNA &rna_Image_scale_width = reinterpret_cast<PropertyRNA &>(rna_Image_scale_width_);

static IntPropertyRNA rna_Image_scale_height_;
PropertyRNA &rna_Image_scale_height = reinterpret_cast<PropertyRNA &>(rna_Image_scale_height_);

static IntPropertyRNA rna_Image_scale_frame_;
PropertyRNA &rna_Image_scale_frame = reinterpret_cast<PropertyRNA &>(rna_Image_scale_frame_);

static IntPropertyRNA rna_Image_scale_tile_index_;
PropertyRNA &rna_Image_scale_tile_index = reinterpret_cast<PropertyRNA &>(rna_Image_scale_tile_index_);

FunctionRNA *rna_Image_scale_func;
static IntPropertyRNA rna_Image_gl_touch_frame_;
PropertyRNA &rna_Image_gl_touch_frame = reinterpret_cast<PropertyRNA &>(rna_Image_gl_touch_frame_);

static IntPropertyRNA rna_Image_gl_touch_layer_index_;
PropertyRNA &rna_Image_gl_touch_layer_index = reinterpret_cast<PropertyRNA &>(rna_Image_gl_touch_layer_index_);

static IntPropertyRNA rna_Image_gl_touch_pass_index_;
PropertyRNA &rna_Image_gl_touch_pass_index = reinterpret_cast<PropertyRNA &>(rna_Image_gl_touch_pass_index_);

static IntPropertyRNA rna_Image_gl_touch_error_;
PropertyRNA &rna_Image_gl_touch_error = reinterpret_cast<PropertyRNA &>(rna_Image_gl_touch_error_);

FunctionRNA *rna_Image_gl_touch_func;
static IntPropertyRNA rna_Image_gl_load_frame_;
PropertyRNA &rna_Image_gl_load_frame = reinterpret_cast<PropertyRNA &>(rna_Image_gl_load_frame_);

static IntPropertyRNA rna_Image_gl_load_layer_index_;
PropertyRNA &rna_Image_gl_load_layer_index = reinterpret_cast<PropertyRNA &>(rna_Image_gl_load_layer_index_);

static IntPropertyRNA rna_Image_gl_load_pass_index_;
PropertyRNA &rna_Image_gl_load_pass_index = reinterpret_cast<PropertyRNA &>(rna_Image_gl_load_pass_index_);

static IntPropertyRNA rna_Image_gl_load_error_;
PropertyRNA &rna_Image_gl_load_error = reinterpret_cast<PropertyRNA &>(rna_Image_gl_load_error_);

FunctionRNA *rna_Image_gl_load_func;
FunctionRNA *rna_Image_gl_free_func;
static PointerPropertyRNA rna_Image_filepath_from_user_image_user_;
PropertyRNA &rna_Image_filepath_from_user_image_user = reinterpret_cast<PropertyRNA &>(rna_Image_filepath_from_user_image_user_);

static StringPropertyRNA rna_Image_filepath_from_user_filepath_;
PropertyRNA &rna_Image_filepath_from_user_filepath = reinterpret_cast<PropertyRNA &>(rna_Image_filepath_from_user_filepath_);

FunctionRNA *rna_Image_filepath_from_user_func;
FunctionRNA *rna_Image_buffers_free_func;
StructRNA *RNA_Image;
void register_struct_Image(BlenderRNA &brna)
{
	rna_Image_filepath_ = {
		{&rna_Image_filepath_raw, 	nullptr,
		-1, "filepath", 294913, 1, 0, 0, 0, PropertyPathTemplateType(0), "File Name",
		"Image/Movie file name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_Image_reload_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_filepath_get, Image_filepath_length, Image_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_Image_filepath_raw_ = {
		{&rna_Image_file_format, 	&rna_Image_filepath,
		-1, "filepath_raw", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Name",
		"Image/Movie file name (without data refreshing)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_filepath_raw_get, Image_filepath_raw_length, Image_filepath_raw_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_Image_file_format_ = {
		{&rna_Image_source, 	&rna_Image_filepath_raw,
		-1, "file_format", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Format",
		"Format used for re-saving this file",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_file_format_get, Image_file_format_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_image_type_all_items, 17, 0
	};

	static const EnumPropertyItem rna_Image_source_items[7] = {
		{1, "FILE", 0, "Single Image", "Single image file"	},
		{2, "SEQUENCE", 0, "Image Sequence", "Multiple image files, as a sequence"	},
		{3, "MOVIE", 0, "Movie", "Movie file"	},
		{4, "GENERATED", 0, "Generated", "Generated image"	},
		{5, "VIEWER", 0, "Viewer", "Compositing node viewer"	},
		{6, "TILED", 0, "UDIM Tiles", "Tiled UDIM image texture"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Image_source_ = {
		{&rna_Image_type, 	&rna_Image_file_format,
		-1, "source", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Source",
		"Where the image comes from",
		0, "Image",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_source_get, Image_source_set, rna_Image_source_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Image_source_items, 6, 1
	};

	static const EnumPropertyItem rna_Image_type_items[6] = {
		{0, "IMAGE", 0, "Image", ""	},
		{1, "MULTILAYER", 0, "Multilayer", ""	},
		{2, "UV_TEST", 0, "UV Test", ""	},
		{4, "RENDER_RESULT", 0, "Render Result", ""	},
		{5, "COMPOSITING", 0, "Compositing", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Image_type_ = {
		{&rna_Image_packed_file, 	&rna_Image_source,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"How to generate the image",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Image, type), RawPropertyType(1), nullptr},
		Image_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Image_type_items, 5, 0
	};

	rna_Image_packed_file_ = {
		{&rna_Image_packed_files, 	&rna_Image_type,
		-1, "packed_file", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Packed File",
		"First packed file of the image",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_packed_file_get, nullptr, nullptr, nullptr,RNA_PackedFile
	};

	rna_Image_packed_files_ = {
		{&rna_Image_use_view_as_render, 	&rna_Image_packed_file,
		-1, "packed_files", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Packed Files",
		"Collection of packed images",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_packed_files_begin, Image_packed_files_next, Image_packed_files_end, Image_packed_files_get, nullptr, Image_packed_files_lookup_int, Image_packed_files_lookup_string, nullptr, RNA_ImagePackedFile
	};

	rna_Image_use_view_as_render_ = {
		{&rna_Image_use_deinterlace, 	&rna_Image_packed_files,
		-1, "use_view_as_render", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "View as Render",
		"Apply render part of display transformation when displaying this image on the screen",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_use_view_as_render_get, Image_use_view_as_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Image_use_deinterlace_ = {
		{&rna_Image_use_multiview, 	&rna_Image_use_view_as_render,
		-1, "use_deinterlace", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Deinterlace",
		"Deinterlace movie file on load",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Image_reload_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_use_deinterlace_get, Image_use_deinterlace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Image_use_multiview_ = {
		{&rna_Image_is_stereo_3d, 	&rna_Image_use_deinterlace,
		-1, "use_multiview", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Multi-View",
		"Use Multiple Views (when available)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Image_views_format_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_use_multiview_get, Image_use_multiview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Image_is_stereo_3d_ = {
		{&rna_Image_is_multiview, 	&rna_Image_use_multiview,
		-1, "is_stereo_3d", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Stereo 3D",
		"Image has left and right views",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_is_stereo_3d_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Image_is_multiview_ = {
		{&rna_Image_is_dirty, 	&rna_Image_is_stereo_3d,
		-1, "is_multiview", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Multiple Views",
		"Image has more than one view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_is_multiview_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Image_is_dirty_ = {
		{&rna_Image_generated_type, 	&rna_Image_is_multiview,
		-1, "is_dirty", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Dirty",
		"Image has changed and is not saved",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_is_dirty_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Image_generated_type_ = {
		{&rna_Image_generated_width, 	&rna_Image_is_dirty,
		-1, "generated_type", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Generated Type",
		"Generated image type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Image_generated_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_generated_type_get, Image_generated_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_image_generated_type_items, 3, 1
	};

	rna_Image_generated_width_ = {
		{&rna_Image_generated_height, 	&rna_Image_generated_type,
		-1, "generated_width", 67108865, 0, 0, 0, 0, PropertyPathTemplateType(0), "Generated Width",
		"Generated image width",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Image_generated_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_generated_width_get, Image_generated_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 65536, 1, 65536, 1, nullptr, nullptr, 1024, nullptr
	};

	rna_Image_generated_height_ = {
		{&rna_Image_use_generated_float, 	&rna_Image_generated_width,
		-1, "generated_height", 67108865, 0, 0, 0, 0, PropertyPathTemplateType(0), "Generated Height",
		"Generated image height",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Image_generated_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_generated_height_get, Image_generated_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 65536, 1, 65536, 1, nullptr, nullptr, 1024, nullptr
	};

	rna_Image_use_generated_float_ = {
		{&rna_Image_generated_color, 	&rna_Image_generated_height,
		-1, "use_generated_float", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Float Buffer",
		"Generate floating-point buffer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Image_generated_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_use_generated_float_get, Image_use_generated_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_Image_generated_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_Image_generated_color_ = {
		{&rna_Image_display_aspect, 	&rna_Image_use_generated_float,
		-1, "generated_color", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color",
		"Fill color for the generated image",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Image_generated_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Image_generated_color_get, Image_generated_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Image_generated_color_default
	};

	static float rna_Image_display_aspect_default[2] = {
		1.0f,
		1.0f
	};
	rna_Image_display_aspect_ = {
		{&rna_Image_render_slots, 	&rna_Image_generated_color,
		-1, "display_aspect", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Display Aspect",
		"Display Aspect for this image, does not affect rendering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Image, aspx), RawPropertyType(5), nullptr},
		nullptr, nullptr, Image_display_aspect_get, Image_display_aspect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 5000.0f, 0.1000000015f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 1.0f, rna_Image_display_aspect_default
	};

	rna_Image_render_slots_ = {
		{&rna_Image_tiles, 	&rna_Image_display_aspect,
		-1, "render_slots", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Render Slots",
		"Render slots of the image",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_RenderSlots},
		Image_render_slots_begin, Image_render_slots_next, Image_render_slots_end, Image_render_slots_get, nullptr, Image_render_slots_lookup_int, nullptr, nullptr, RNA_RenderSlot
	};

	rna_Image_tiles_ = {
		{&rna_Image_has_data, 	&rna_Image_render_slots,
		-1, "tiles", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image Tiles",
		"Tiles of the image",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_UDIMTiles},
		Image_tiles_begin, Image_tiles_next, Image_tiles_end, Image_tiles_get, nullptr, Image_tiles_lookup_int, nullptr, nullptr, RNA_UDIMTile
	};

	rna_Image_has_data_ = {
		{&rna_Image_depth, 	&rna_Image_tiles,
		-1, "has_data", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Data",
		"True if the image data is loaded into memory",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_has_data_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Image_depth_ = {
		{&rna_Image_size, 	&rna_Image_has_data,
		-1, "depth", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Depth",
		"Image bit depth",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_depth_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static int rna_Image_size_default[2] = {
		0,
		0
	};
	rna_Image_size_ = {
		{&rna_Image_resolution, 	&rna_Image_depth,
		-1, "size", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Size",
		"Width and height of the image buffer in pixels, zero when image data cannot be loaded",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Image_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_Image_size_default
	};

	static float rna_Image_resolution_default[2] = {
		0.0f,
		0.0f
	};
	rna_Image_resolution_ = {
		{&rna_Image_frame_duration, 	&rna_Image_size,
		-1, "resolution", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Resolution",
		"X/Y pixels per meter, for the image buffer",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Image_resolution_get, Image_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Image_resolution_default
	};

	rna_Image_frame_duration_ = {
		{&rna_Image_pixels, 	&rna_Image_resolution,
		-1, "frame_duration", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Duration",
		"Duration (in frames) of the image (1 when not a video/sequence)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_frame_duration_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Image_pixels_ = {
		{&rna_Image_channels, 	&rna_Image_frame_duration,
		-1, "pixels", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pixels",
		"Image buffer pixels in floating-point values",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_Image_pixels_get_length, 1, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Image_pixels_get, Image_pixels_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Image_channels_ = {
		{&rna_Image_is_float, 	&rna_Image_pixels,
		-1, "channels", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Channels",
		"Number of channels in pixels buffer",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_channels_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Image_is_float_ = {
		{&rna_Image_colorspace_settings, 	&rna_Image_channels,
		-1, "is_float", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Float",
		"True if this image is stored in floating-point buffer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_is_float_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Image_colorspace_settings_ = {
		{&rna_Image_alpha_mode, 	&rna_Image_is_float,
		-1, "colorspace_settings", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Space Settings",
		"Input color space settings",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_colorspace_settings_get, nullptr, nullptr, nullptr,RNA_ColorManagedInputColorspaceSettings
	};

	static const EnumPropertyItem rna_Image_alpha_mode_items[5] = {
		{0, "STRAIGHT", 0, "Straight", "Store RGB and alpha channels separately with alpha acting as a mask, also known as unassociated alpha. Commonly used by image editing applications and file formats like PNG."	},
		{1, "PREMUL", 0, "Premultiplied", "Store RGB channels with alpha multiplied in, also known as associated alpha. The natural format for renders and used by file formats like OpenEXR."	},
		{2, "CHANNEL_PACKED", 0, "Channel Packed", "Different images are packed in the RGB and alpha channels, and they should not affect each other. Channel packing is commonly used by game engines to save memory."	},
		{3, "NONE", 0, "None", "Ignore alpha channel from the file and make image fully opaque"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Image_alpha_mode_ = {
		{&rna_Image_use_half_precision, 	&rna_Image_colorspace_settings,
		-1, "alpha_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Alpha Mode",
		"Representation of alpha in the image file, to convert to and from when saving and loading the image",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Image_alpha_mode_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Image, alpha_mode), RawPropertyType(2), nullptr},
		Image_alpha_mode_get, Image_alpha_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Image_alpha_mode_items, 4, 0
	};

	rna_Image_use_half_precision_ = {
		{&rna_Image_seam_margin, 	&rna_Image_alpha_mode,
		-1, "use_half_precision", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Half Float Precision",
		"Use 16 bits per channel to lower the memory usage during rendering.\nNote: Not supported by Cycles",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Image_gpu_texture_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_use_half_precision_get, Image_use_half_precision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Image_seam_margin_ = {
		{&rna_Image_views_format, 	&rna_Image_use_half_precision,
		-1, "seam_margin", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Seam Margin",
		"Margin to take into account when fixing UV seams during painting. Higher number would improve seam-fixes for mipmaps, but decreases performance.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Image, seam_margin), RawPropertyType(1), nullptr},
		Image_seam_margin_get, Image_seam_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, -32768, 32767, 1, nullptr, nullptr, 8, nullptr
	};

	rna_Image_views_format_ = {
		{&rna_Image_stereo_3d_format, 	&rna_Image_seam_margin,
		-1, "views_format", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Views Format",
		"Mode to load image views",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Image_views_format_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Image, views_format), RawPropertyType(2), nullptr},
		Image_views_format_get, Image_views_format_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_views_format_items, 2, 0
	};

	rna_Image_stereo_3d_format_ = {
		{nullptr, 	&rna_Image_views_format,
		-1, "stereo_3d_format", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stereo 3D Format",
		"Settings for stereo 3d",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Image_stereo_3d_format_get, nullptr, nullptr, nullptr,RNA_Stereo3dFormat
	};

	StructRNA *srna = RNA_Image;
	srna->cont.properties = {&rna_Image_filepath, &rna_Image_stereo_3d_format};
	srna->identifier = "Image";
	srna->flag = 519;
	srna->name = "Image";
	srna->description = "Image data-block referencing an external or packed image";
	srna->translation_context = "*";
	srna->icon = 197;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	rna_Image_save_render_filepath_ = {
		{&rna_Image_save_render_scene, 	nullptr,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Output path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_Image_save_render_scene_ = {
		{&rna_Image_save_render_quality, 	&rna_Image_save_render_filepath,
		-1, "scene", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Scene to take image parameters from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	rna_Image_save_render_quality_ = {
		{nullptr, 	&rna_Image_save_render_scene,
		-1, "quality", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Quality",
		"Quality for image formats that support lossy compression, uses default quality if not specified",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Image_save_render_filepath, &rna_Image_save_render_quality};
		func->identifier = "save_render";
		func->flag = 24;
		func->description = "Save image to a specific path using a scenes render settings";
		func->call = Image_save_render_call;
		rna_Image_save_render_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Image_save_filepath_ = {
		{&rna_Image_save_quality, 	nullptr,
		-1, "filepath", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Output path, uses image data-block filepath if not specified",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_Image_save_quality_ = {
		{&rna_Image_save_save_copy, 	&rna_Image_save_filepath,
		-1, "quality", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Quality",
		"Quality for image formats that support lossy compression, uses default quality if not specified",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Image_save_save_copy_ = {
		{nullptr, 	&rna_Image_save_quality,
		-1, "save_copy", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Save Copy",
		"Save the image as a copy, without updating current image\'s filepath",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Image_save_filepath, &rna_Image_save_save_copy};
		func->identifier = "save";
		func->flag = 28;
		func->description = "Save image";
		func->call = Image_save_call;
		rna_Image_save_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Image_pack_data_ = {
		{&rna_Image_pack_data_len, 	nullptr,
		-1, "data", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "data",
		"Raw data (bytes, exact content of the embedded file)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_BYTESTRING) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_Image_pack_data_len_ = {
		{nullptr, 	&rna_Image_pack_data,
		-1, "data_len", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "data_len",
		"length of given data (mandatory if data is provided)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Image_pack_data, &rna_Image_pack_data_len};
		func->identifier = "pack";
		func->flag = 28;
		func->description = "Pack an image as embedded data into the .blend file";
		func->call = Image_pack_call;
		rna_Image_pack_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Image_unpack_method_ = {
		{nullptr, 	nullptr,
		-1, "method", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "method",
		"How to unpack",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_unpack_method_items, 5, 5
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Image_unpack_method, &rna_Image_unpack_method};
		func->identifier = "unpack";
		func->flag = 20;
		func->description = "Save an image packed in the .blend file to disk";
		func->call = Image_unpack_call;
		rna_Image_unpack_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "reload";
		func->flag = 4;
		func->description = "Reload the image from its source path";
		func->call = Image_reload_call;
		rna_Image_reload_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update";
		func->flag = 16;
		func->description = "Update the display image from the floating-point buffer";
		func->call = Image_update_call;
		rna_Image_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Image_scale_width_ = {
		{&rna_Image_scale_height, 	nullptr,
		-1, "width", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Width",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, nullptr, nullptr, 1, nullptr
	};
	rna_Image_scale_height_ = {
		{&rna_Image_scale_frame, 	&rna_Image_scale_width,
		-1, "height", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Height",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, nullptr, nullptr, 1, nullptr
	};
	rna_Image_scale_frame_ = {
		{&rna_Image_scale_tile_index, 	&rna_Image_scale_height,
		-1, "frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame (for image sequences)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Image_scale_tile_index_ = {
		{nullptr, 	&rna_Image_scale_frame,
		-1, "tile_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tile",
		"Tile index (for tiled images)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Image_scale_width, &rna_Image_scale_tile_index};
		func->identifier = "scale";
		func->flag = 16;
		func->description = "Scale the buffer of the image, in pixels";
		func->call = Image_scale_call;
		rna_Image_scale_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Image_gl_touch_frame_ = {
		{&rna_Image_gl_touch_layer_index, 	nullptr,
		-1, "frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame of image sequence or movie",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Image_gl_touch_layer_index_ = {
		{&rna_Image_gl_touch_pass_index, 	&rna_Image_gl_touch_frame,
		-1, "layer_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layer",
		"Index of layer that should be loaded",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Image_gl_touch_pass_index_ = {
		{&rna_Image_gl_touch_error, 	&rna_Image_gl_touch_layer_index,
		-1, "pass_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pass",
		"Index of pass that should be loaded",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Image_gl_touch_error_ = {
		{nullptr, 	&rna_Image_gl_touch_pass_index,
		-1, "error", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Error",
		"OpenGL error value",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Image_gl_touch_frame, &rna_Image_gl_touch_error};
		func->identifier = "gl_touch";
		func->flag = 16;
		func->description = "Delay the image from being cleaned from the cache due inactivity";
		func->call = Image_gl_touch_call;
		func->c_ret = &rna_Image_gl_touch_error;
		rna_Image_gl_touch_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Image_gl_load_frame_ = {
		{&rna_Image_gl_load_layer_index, 	nullptr,
		-1, "frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame of image sequence or movie",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Image_gl_load_layer_index_ = {
		{&rna_Image_gl_load_pass_index, 	&rna_Image_gl_load_frame,
		-1, "layer_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layer",
		"Index of layer that should be loaded",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Image_gl_load_pass_index_ = {
		{&rna_Image_gl_load_error, 	&rna_Image_gl_load_layer_index,
		-1, "pass_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pass",
		"Index of pass that should be loaded",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Image_gl_load_error_ = {
		{nullptr, 	&rna_Image_gl_load_pass_index,
		-1, "error", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Error",
		"OpenGL error value",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Image_gl_load_frame, &rna_Image_gl_load_error};
		func->identifier = "gl_load";
		func->flag = 16;
		func->description = "Load the image into an OpenGL texture. On success, image.bindcode will contain the OpenGL texture bindcode. Colors read from the texture will be in scene linear color space and have premultiplied or straight alpha matching the image alpha mode.";
		func->call = Image_gl_load_call;
		func->c_ret = &rna_Image_gl_load_error;
		rna_Image_gl_load_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "gl_free";
		func->description = "Free the image from OpenGL graphics memory";
		func->call = Image_gl_free_call;
		rna_Image_gl_free_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Image_filepath_from_user_image_user_ = {
		{&rna_Image_filepath_from_user_filepath, 	nullptr,
		-1, "image_user", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Image user of the image to get filepath for",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ImageUser
	};
	rna_Image_filepath_from_user_filepath_ = {
		{nullptr, 	&rna_Image_filepath_from_user_image_user,
		-1, "filepath", 8650753, 0, 2, 0, 0, PropertyPathTemplateType(0), "File Path",
		"The resulting filepath from the image and its user",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Image_filepath_from_user_image_user, &rna_Image_filepath_from_user_filepath};
		func->identifier = "filepath_from_user";
		func->description = "Return the absolute path to the filepath of an image frame specified by the image user";
		func->call = Image_filepath_from_user_call;
		rna_Image_filepath_from_user_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "buffers_free";
		func->description = "Free the image buffers from memory";
		func->call = Image_buffers_free_call;
		rna_Image_buffers_free_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Render Layers */
static CollectionPropertyRNA rna_RenderSlots_rna_properties_;
PropertyRNA &rna_RenderSlots_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RenderSlots_rna_properties_);

static PointerPropertyRNA rna_RenderSlots_rna_type_;
PropertyRNA &rna_RenderSlots_rna_type = reinterpret_cast<PropertyRNA &>(rna_RenderSlots_rna_type_);

static IntPropertyRNA rna_RenderSlots_active_index_;
PropertyRNA &rna_RenderSlots_active_index = reinterpret_cast<PropertyRNA &>(rna_RenderSlots_active_index_);

static PointerPropertyRNA rna_RenderSlots_active_;
PropertyRNA &rna_RenderSlots_active = reinterpret_cast<PropertyRNA &>(rna_RenderSlots_active_);

static StringPropertyRNA rna_RenderSlots_new_name_;
PropertyRNA &rna_RenderSlots_new_name = reinterpret_cast<PropertyRNA &>(rna_RenderSlots_new_name_);

static PointerPropertyRNA rna_RenderSlots_new_result_;
PropertyRNA &rna_RenderSlots_new_result = reinterpret_cast<PropertyRNA &>(rna_RenderSlots_new_result_);

FunctionRNA *rna_RenderSlots_new_func;
StructRNA *RNA_RenderSlots;
void register_struct_RenderSlots(BlenderRNA &brna)
{
	rna_RenderSlots_rna_properties_ = {
		{&rna_RenderSlots_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderSlots_rna_properties_begin, RenderSlots_rna_properties_next, RenderSlots_rna_properties_end, RenderSlots_rna_properties_get, nullptr, nullptr, RenderSlots_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RenderSlots_rna_type_ = {
		{&rna_RenderSlots_active_index, 	&rna_RenderSlots_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderSlots_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RenderSlots_active_index_ = {
		{&rna_RenderSlots_active, 	&rna_RenderSlots_rna_type,
		-1, "active_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"Active render slot of the image",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderSlots_active_index_get, RenderSlots_active_index_set, nullptr, nullptr, rna_render_slots_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_RenderSlots_active_ = {
		{nullptr, 	&rna_RenderSlots_active_index,
		-1, "active", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"Active render slot of the image",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderSlots_active_get, RenderSlots_active_set, nullptr, nullptr,RNA_RenderSlot
	};

	StructRNA *srna = RNA_RenderSlots;
	srna->cont.properties = {&rna_RenderSlots_rna_properties, &rna_RenderSlots_active};
	srna->identifier = "RenderSlots";
	srna->flag = 516;
	srna->name = "Render Layers";
	srna->description = "Collection of render layers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RenderSlots_rna_properties;
	{
	rna_RenderSlots_new_name_ = {
		{&rna_RenderSlots_new_result, 	nullptr,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"New name for the render slot",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_RenderSlots_new_result_ = {
		{nullptr, 	&rna_RenderSlots_new_name,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created render layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_RenderSlot
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderSlots_new_name, &rna_RenderSlots_new_result};
		func->identifier = "new";
		func->description = "Add a render slot to the image";
		func->call = RenderSlots_new_call;
		func->c_ret = &rna_RenderSlots_new_result;
		rna_RenderSlots_new_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* UDIM Tiles */
static CollectionPropertyRNA rna_UDIMTiles_rna_properties_;
PropertyRNA &rna_UDIMTiles_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UDIMTiles_rna_properties_);

static PointerPropertyRNA rna_UDIMTiles_rna_type_;
PropertyRNA &rna_UDIMTiles_rna_type = reinterpret_cast<PropertyRNA &>(rna_UDIMTiles_rna_type_);

static IntPropertyRNA rna_UDIMTiles_active_index_;
PropertyRNA &rna_UDIMTiles_active_index = reinterpret_cast<PropertyRNA &>(rna_UDIMTiles_active_index_);

static PointerPropertyRNA rna_UDIMTiles_active_;
PropertyRNA &rna_UDIMTiles_active = reinterpret_cast<PropertyRNA &>(rna_UDIMTiles_active_);

static IntPropertyRNA rna_UDIMTiles_new_tile_number_;
PropertyRNA &rna_UDIMTiles_new_tile_number = reinterpret_cast<PropertyRNA &>(rna_UDIMTiles_new_tile_number_);

static StringPropertyRNA rna_UDIMTiles_new_label_;
PropertyRNA &rna_UDIMTiles_new_label = reinterpret_cast<PropertyRNA &>(rna_UDIMTiles_new_label_);

static PointerPropertyRNA rna_UDIMTiles_new_result_;
PropertyRNA &rna_UDIMTiles_new_result = reinterpret_cast<PropertyRNA &>(rna_UDIMTiles_new_result_);

FunctionRNA *rna_UDIMTiles_new_func;
static IntPropertyRNA rna_UDIMTiles_get_tile_number_;
PropertyRNA &rna_UDIMTiles_get_tile_number = reinterpret_cast<PropertyRNA &>(rna_UDIMTiles_get_tile_number_);

static PointerPropertyRNA rna_UDIMTiles_get_result_;
PropertyRNA &rna_UDIMTiles_get_result = reinterpret_cast<PropertyRNA &>(rna_UDIMTiles_get_result_);

FunctionRNA *rna_UDIMTiles_get_func;
static PointerPropertyRNA rna_UDIMTiles_remove_tile_;
PropertyRNA &rna_UDIMTiles_remove_tile = reinterpret_cast<PropertyRNA &>(rna_UDIMTiles_remove_tile_);

FunctionRNA *rna_UDIMTiles_remove_func;
StructRNA *RNA_UDIMTiles;
void register_struct_UDIMTiles(BlenderRNA &brna)
{
	rna_UDIMTiles_rna_properties_ = {
		{&rna_UDIMTiles_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTiles_rna_properties_begin, UDIMTiles_rna_properties_next, UDIMTiles_rna_properties_end, UDIMTiles_rna_properties_get, nullptr, nullptr, UDIMTiles_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UDIMTiles_rna_type_ = {
		{&rna_UDIMTiles_active_index, 	&rna_UDIMTiles_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTiles_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_UDIMTiles_active_index_ = {
		{&rna_UDIMTiles_active, 	&rna_UDIMTiles_rna_type,
		-1, "active_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Tile Index",
		"Active index in tiles array",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTiles_active_index_get, UDIMTiles_active_index_set, nullptr, nullptr, rna_Image_active_tile_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_UDIMTiles_active_ = {
		{nullptr, 	&rna_UDIMTiles_active_index,
		-1, "active", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Image Tile",
		"Active Image Tile",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UDIMTiles_active_get, UDIMTiles_active_set, nullptr, nullptr,RNA_UDIMTile
	};

	StructRNA *srna = RNA_UDIMTiles;
	srna->cont.properties = {&rna_UDIMTiles_rna_properties, &rna_UDIMTiles_active};
	srna->identifier = "UDIMTiles";
	srna->flag = 516;
	srna->name = "UDIM Tiles";
	srna->description = "Collection of UDIM tiles";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UDIMTiles_rna_properties;
	{
	rna_UDIMTiles_new_tile_number_ = {
		{&rna_UDIMTiles_new_label, 	nullptr,
		-1, "tile_number", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Number of the newly created tile",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, INT_MAX, 1, nullptr, nullptr, 1, nullptr
	};
	rna_UDIMTiles_new_label_ = {
		{&rna_UDIMTiles_new_result, 	&rna_UDIMTiles_new_tile_number,
		-1, "label", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Optional label for the tile",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_UDIMTiles_new_result_ = {
		{nullptr, 	&rna_UDIMTiles_new_label,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created image tile",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UDIMTile
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_UDIMTiles_new_tile_number, &rna_UDIMTiles_new_result};
		func->identifier = "new";
		func->description = "Add a tile to the image";
		func->call = UDIMTiles_new_call;
		func->c_ret = &rna_UDIMTiles_new_result;
		rna_UDIMTiles_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_UDIMTiles_get_tile_number_ = {
		{&rna_UDIMTiles_get_result, 	nullptr,
		-1, "tile_number", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Number of the tile",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_UDIMTiles_get_result_ = {
		{nullptr, 	&rna_UDIMTiles_get_tile_number,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The tile",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UDIMTile
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_UDIMTiles_get_tile_number, &rna_UDIMTiles_get_result};
		func->identifier = "get";
		func->description = "Get a tile based on its tile number";
		func->call = UDIMTiles_get_call;
		func->c_ret = &rna_UDIMTiles_get_result;
		rna_UDIMTiles_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_UDIMTiles_remove_tile_ = {
		{nullptr, 	nullptr,
		-1, "tile", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Image tile to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UDIMTile
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_UDIMTiles_remove_tile, &rna_UDIMTiles_remove_tile};
		func->identifier = "remove";
		func->description = "Remove an image tile";
		func->call = UDIMTiles_remove_call;
		rna_UDIMTiles_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Image User */
static CollectionPropertyRNA rna_ImageUser_rna_properties_;
PropertyRNA &rna_ImageUser_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ImageUser_rna_properties_);

static PointerPropertyRNA rna_ImageUser_rna_type_;
PropertyRNA &rna_ImageUser_rna_type = reinterpret_cast<PropertyRNA &>(rna_ImageUser_rna_type_);

static BoolPropertyRNA rna_ImageUser_use_auto_refresh_;
PropertyRNA &rna_ImageUser_use_auto_refresh = reinterpret_cast<PropertyRNA &>(rna_ImageUser_use_auto_refresh_);

static IntPropertyRNA rna_ImageUser_frame_current_;
PropertyRNA &rna_ImageUser_frame_current = reinterpret_cast<PropertyRNA &>(rna_ImageUser_frame_current_);

static BoolPropertyRNA rna_ImageUser_use_cyclic_;
PropertyRNA &rna_ImageUser_use_cyclic = reinterpret_cast<PropertyRNA &>(rna_ImageUser_use_cyclic_);

static IntPropertyRNA rna_ImageUser_frame_duration_;
PropertyRNA &rna_ImageUser_frame_duration = reinterpret_cast<PropertyRNA &>(rna_ImageUser_frame_duration_);

static IntPropertyRNA rna_ImageUser_frame_offset_;
PropertyRNA &rna_ImageUser_frame_offset = reinterpret_cast<PropertyRNA &>(rna_ImageUser_frame_offset_);

static IntPropertyRNA rna_ImageUser_frame_start_;
PropertyRNA &rna_ImageUser_frame_start = reinterpret_cast<PropertyRNA &>(rna_ImageUser_frame_start_);

static IntPropertyRNA rna_ImageUser_multilayer_layer_;
PropertyRNA &rna_ImageUser_multilayer_layer = reinterpret_cast<PropertyRNA &>(rna_ImageUser_multilayer_layer_);

static IntPropertyRNA rna_ImageUser_multilayer_pass_;
PropertyRNA &rna_ImageUser_multilayer_pass = reinterpret_cast<PropertyRNA &>(rna_ImageUser_multilayer_pass_);

static IntPropertyRNA rna_ImageUser_multilayer_view_;
PropertyRNA &rna_ImageUser_multilayer_view = reinterpret_cast<PropertyRNA &>(rna_ImageUser_multilayer_view_);

static IntPropertyRNA rna_ImageUser_tile_;
PropertyRNA &rna_ImageUser_tile = reinterpret_cast<PropertyRNA &>(rna_ImageUser_tile_);

StructRNA *RNA_ImageUser;
void register_struct_ImageUser(BlenderRNA &brna)
{
	rna_ImageUser_rna_properties_ = {
		{&rna_ImageUser_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageUser_rna_properties_begin, ImageUser_rna_properties_next, ImageUser_rna_properties_end, ImageUser_rna_properties_get, nullptr, nullptr, ImageUser_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ImageUser_rna_type_ = {
		{&rna_ImageUser_use_auto_refresh, 	&rna_ImageUser_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageUser_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ImageUser_use_auto_refresh_ = {
		{&rna_ImageUser_frame_current, 	&rna_ImageUser_rna_type,
		-1, "use_auto_refresh", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Auto Refresh",
		"Always refresh image on frame changes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ImageUser_relations_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageUser_use_auto_refresh_get, ImageUser_use_auto_refresh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageUser_frame_current_ = {
		{&rna_ImageUser_use_cyclic, 	&rna_ImageUser_use_auto_refresh,
		-1, "frame_current", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Current Frame",
		"Current frame number in image sequence or movie",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageUser, framenr), RawPropertyType(0), nullptr},
		ImageUser_frame_current_get, ImageUser_frame_current_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImageUser_use_cyclic_ = {
		{&rna_ImageUser_frame_duration, 	&rna_ImageUser_frame_current,
		-1, "use_cyclic", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Cyclic",
		"Cycle the images in the movie",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ImageUser_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageUser, cycl), RawPropertyType(3), nullptr},
		ImageUser_use_cyclic_get, ImageUser_use_cyclic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageUser_frame_duration_ = {
		{&rna_ImageUser_frame_offset, 	&rna_ImageUser_use_cyclic,
		-1, "frame_duration", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Frames",
		"Number of images of a movie to use",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ImageUser_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageUser, frames), RawPropertyType(0), nullptr},
		ImageUser_frame_duration_get, ImageUser_frame_duration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImageUser_frame_offset_ = {
		{&rna_ImageUser_frame_start, 	&rna_ImageUser_frame_duration,
		-1, "frame_offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Offset the number of the frame to use in the animation",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ImageUser_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageUser, offset), RawPropertyType(0), nullptr},
		ImageUser_frame_offset_get, ImageUser_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImageUser_frame_start_ = {
		{&rna_ImageUser_multilayer_layer, 	&rna_ImageUser_frame_offset,
		-1, "frame_start", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Start Frame",
		"Global starting frame of the movie/sequence, assuming first picture has a #1",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_ImageUser_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageUser, sfra), RawPropertyType(0), nullptr},
		ImageUser_frame_start_get, ImageUser_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImageUser_multilayer_layer_ = {
		{&rna_ImageUser_multilayer_pass, 	&rna_ImageUser_frame_start,
		-1, "multilayer_layer", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Layer",
		"Layer in multilayer image",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageUser, layer), RawPropertyType(1), nullptr},
		ImageUser_multilayer_layer_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImageUser_multilayer_pass_ = {
		{&rna_ImageUser_multilayer_view, 	&rna_ImageUser_multilayer_layer,
		-1, "multilayer_pass", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Pass",
		"Pass in multilayer image",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageUser, pass), RawPropertyType(1), nullptr},
		ImageUser_multilayer_pass_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImageUser_multilayer_view_ = {
		{&rna_ImageUser_tile, 	&rna_ImageUser_multilayer_pass,
		-1, "multilayer_view", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "View",
		"View in multilayer image",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageUser, view), RawPropertyType(1), nullptr},
		ImageUser_multilayer_view_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImageUser_tile_ = {
		{nullptr, 	&rna_ImageUser_multilayer_view,
		-1, "tile", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Tile",
		"Tile in tiled image",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImageUser, tile), RawPropertyType(0), nullptr},
		ImageUser_tile_get, ImageUser_tile_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ImageUser;
	srna->cont.properties = {&rna_ImageUser_rna_properties, &rna_ImageUser_tile};
	srna->identifier = "ImageUser";
	srna->flag = 516;
	srna->name = "Image User";
	srna->description = "Parameters defining how an Image data-block is used by another data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ImageUser_rna_properties;
	srna->path = rna_ImageUser_path;
};

/* ImagePackedFile */
static CollectionPropertyRNA rna_ImagePackedFile_rna_properties_;
PropertyRNA &rna_ImagePackedFile_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ImagePackedFile_rna_properties_);

static PointerPropertyRNA rna_ImagePackedFile_rna_type_;
PropertyRNA &rna_ImagePackedFile_rna_type = reinterpret_cast<PropertyRNA &>(rna_ImagePackedFile_rna_type_);

static PointerPropertyRNA rna_ImagePackedFile_packed_file_;
PropertyRNA &rna_ImagePackedFile_packed_file = reinterpret_cast<PropertyRNA &>(rna_ImagePackedFile_packed_file_);

static StringPropertyRNA rna_ImagePackedFile_filepath_;
PropertyRNA &rna_ImagePackedFile_filepath = reinterpret_cast<PropertyRNA &>(rna_ImagePackedFile_filepath_);

static IntPropertyRNA rna_ImagePackedFile_view_;
PropertyRNA &rna_ImagePackedFile_view = reinterpret_cast<PropertyRNA &>(rna_ImagePackedFile_view_);

static IntPropertyRNA rna_ImagePackedFile_tile_number_;
PropertyRNA &rna_ImagePackedFile_tile_number = reinterpret_cast<PropertyRNA &>(rna_ImagePackedFile_tile_number_);

FunctionRNA *rna_ImagePackedFile_save_func;
StructRNA *RNA_ImagePackedFile;
void register_struct_ImagePackedFile(BlenderRNA &brna)
{
	rna_ImagePackedFile_rna_properties_ = {
		{&rna_ImagePackedFile_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePackedFile_rna_properties_begin, ImagePackedFile_rna_properties_next, ImagePackedFile_rna_properties_end, ImagePackedFile_rna_properties_get, nullptr, nullptr, ImagePackedFile_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ImagePackedFile_rna_type_ = {
		{&rna_ImagePackedFile_packed_file, 	&rna_ImagePackedFile_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePackedFile_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ImagePackedFile_packed_file_ = {
		{&rna_ImagePackedFile_filepath, 	&rna_ImagePackedFile_rna_type,
		-1, "packed_file", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Packed File",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePackedFile_packed_file_get, nullptr, nullptr, nullptr,RNA_PackedFile
	};

	rna_ImagePackedFile_filepath_ = {
		{&rna_ImagePackedFile_view, 	&rna_ImagePackedFile_packed_file,
		-1, "filepath", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "filepath",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePackedFile_filepath_get, ImagePackedFile_filepath_length, ImagePackedFile_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_ImagePackedFile_view_ = {
		{&rna_ImagePackedFile_tile_number, 	&rna_ImagePackedFile_filepath,
		-1, "view", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "View Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePackedFile, view), RawPropertyType(0), nullptr},
		ImagePackedFile_view_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImagePackedFile_tile_number_ = {
		{nullptr, 	&rna_ImagePackedFile_view,
		-1, "tile_number", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tile Number",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePackedFile, tile_number), RawPropertyType(0), nullptr},
		ImagePackedFile_tile_number_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ImagePackedFile;
	srna->cont.properties = {&rna_ImagePackedFile_rna_properties, &rna_ImagePackedFile_tile_number};
	srna->identifier = "ImagePackedFile";
	srna->flag = 516;
	srna->name = "ImagePackedFile";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_ImagePackedFile_filepath;
	srna->iteratorproperty = &rna_ImagePackedFile_rna_properties;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "save";
		func->flag = 20;
		func->description = "Save the packed file to its filepath";
		func->call = ImagePackedFile_save_call;
		rna_ImagePackedFile_save_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
