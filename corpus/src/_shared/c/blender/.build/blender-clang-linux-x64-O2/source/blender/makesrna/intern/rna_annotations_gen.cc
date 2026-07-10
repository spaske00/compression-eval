
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

#include "rna_annotations.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

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

extern PropertyRNA &rna_Annotation_layers;
extern PropertyRNA &rna_Annotation_animation_data;

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



extern PropertyRNA &rna_AnnotationLayers_rna_properties;
extern PropertyRNA &rna_AnnotationLayers_rna_type;
extern PropertyRNA &rna_AnnotationLayers_active_index;
extern PropertyRNA &rna_AnnotationLayers_active_note;

extern FunctionRNA *rna_AnnotationLayers_new_func;
extern PropertyRNA &rna_AnnotationLayers_new_name;
extern PropertyRNA &rna_AnnotationLayers_new_set_active;
extern PropertyRNA &rna_AnnotationLayers_new_layer;

extern FunctionRNA *rna_AnnotationLayers_remove_func;
extern PropertyRNA &rna_AnnotationLayers_remove_layer;



extern PropertyRNA &rna_AnnotationLayer_rna_properties;
extern PropertyRNA &rna_AnnotationLayer_rna_type;
extern PropertyRNA &rna_AnnotationLayer_info;
extern PropertyRNA &rna_AnnotationLayer_frames;
extern PropertyRNA &rna_AnnotationLayer_active_frame;
extern PropertyRNA &rna_AnnotationLayer_annotation_opacity;
extern PropertyRNA &rna_AnnotationLayer_color;
extern PropertyRNA &rna_AnnotationLayer_thickness;
extern PropertyRNA &rna_AnnotationLayer_use_annotation_onion_skinning;
extern PropertyRNA &rna_AnnotationLayer_annotation_onion_before_range;
extern PropertyRNA &rna_AnnotationLayer_annotation_onion_after_range;
extern PropertyRNA &rna_AnnotationLayer_annotation_onion_before_color;
extern PropertyRNA &rna_AnnotationLayer_annotation_onion_after_color;
extern PropertyRNA &rna_AnnotationLayer_annotation_onion_use_custom_color;
extern PropertyRNA &rna_AnnotationLayer_annotation_hide;
extern PropertyRNA &rna_AnnotationLayer_lock;
extern PropertyRNA &rna_AnnotationLayer_lock_frame;
extern PropertyRNA &rna_AnnotationLayer_is_ruler;
extern PropertyRNA &rna_AnnotationLayer_select;
extern PropertyRNA &rna_AnnotationLayer_show_in_front;


extern PropertyRNA &rna_AnnotationFrames_rna_properties;
extern PropertyRNA &rna_AnnotationFrames_rna_type;

extern FunctionRNA *rna_AnnotationFrames_new_func;
extern PropertyRNA &rna_AnnotationFrames_new_frame_number;
extern PropertyRNA &rna_AnnotationFrames_new_active;
extern PropertyRNA &rna_AnnotationFrames_new_frame;

extern FunctionRNA *rna_AnnotationFrames_remove_func;
extern PropertyRNA &rna_AnnotationFrames_remove_frame;

extern FunctionRNA *rna_AnnotationFrames_copy_func;
extern PropertyRNA &rna_AnnotationFrames_copy_source;
extern PropertyRNA &rna_AnnotationFrames_copy_copy;



extern PropertyRNA &rna_AnnotationFrame_rna_properties;
extern PropertyRNA &rna_AnnotationFrame_rna_type;
extern PropertyRNA &rna_AnnotationFrame_strokes;
extern PropertyRNA &rna_AnnotationFrame_frame_number;
extern PropertyRNA &rna_AnnotationFrame_select;


extern PropertyRNA &rna_AnnotationStrokes_rna_properties;
extern PropertyRNA &rna_AnnotationStrokes_rna_type;

extern FunctionRNA *rna_AnnotationStrokes_new_func;
extern PropertyRNA &rna_AnnotationStrokes_new_stroke;

extern FunctionRNA *rna_AnnotationStrokes_remove_func;
extern PropertyRNA &rna_AnnotationStrokes_remove_stroke;



extern PropertyRNA &rna_AnnotationStroke_rna_properties;
extern PropertyRNA &rna_AnnotationStroke_rna_type;
extern PropertyRNA &rna_AnnotationStroke_points;
extern PropertyRNA &rna_AnnotationStroke_display_mode;


extern PropertyRNA &rna_AnnotationStrokePoints_rna_properties;
extern PropertyRNA &rna_AnnotationStrokePoints_rna_type;

extern FunctionRNA *rna_AnnotationStrokePoints_add_func;
extern PropertyRNA &rna_AnnotationStrokePoints_add_count;
extern PropertyRNA &rna_AnnotationStrokePoints_add_pressure;
extern PropertyRNA &rna_AnnotationStrokePoints_add_strength;

extern FunctionRNA *rna_AnnotationStrokePoints_remove_func;
extern PropertyRNA &rna_AnnotationStrokePoints_remove_index;



extern PropertyRNA &rna_AnnotationStrokePoint_rna_properties;
extern PropertyRNA &rna_AnnotationStrokePoint_rna_type;
extern PropertyRNA &rna_AnnotationStrokePoint_co;

static PointerRNA Annotation_layers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_AnnotationLayer, rna_iterator_listbase_get(iter));
}

void Annotation_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Annotation_layers;

    rna_iterator_listbase_begin(iter, ptr, &data->layers, nullptr);

    if (iter->valid) {
        iter->ptr = Annotation_layers_get(iter);
    }
}

void Annotation_layers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Annotation_layers_get(iter);
    }
}

void Annotation_layers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Annotation_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Annotation_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Annotation_layers_get(&iter); }
    }

    Annotation_layers_end(&iter);

    return found;
}

int AnnotationLayer_info_length(PointerRNA *);
void AnnotationLayer_info_get(PointerRNA *, char *);

bool Annotation_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Annotation_layers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = AnnotationLayer_info_length(&iter.ptr);
            if (namelen < 1024) {
                AnnotationLayer_info_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                AnnotationLayer_info_get(&iter.ptr, name);
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
        Annotation_layers_next(&iter);
    }
    Annotation_layers_end(&iter);

    return found;
}

PointerRNA Annotation_animation_data_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA AnnotationLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnnotationLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationLayers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnnotationLayers_rna_properties_get(iter);
    }
}

void AnnotationLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationLayers_rna_properties_get(iter);
    }
}

void AnnotationLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnnotationLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnnotationLayers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int AnnotationLayers_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_annotation_active_layer_index_get;
    return fn(ptr);
}

void AnnotationLayers_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_annotation_active_layer_index_set;
    fn(ptr, value);
}

int AnnotationLayers_active_note_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_annotation_active_layer_index_get;
    return fn(ptr);
}

void AnnotationLayers_active_note_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_annotation_active_layer_index_set;
    fn(ptr, value);
}

static PointerRNA AnnotationLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnnotationLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationLayer_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnnotationLayer_rna_properties_get(iter);
    }
}

void AnnotationLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationLayer_rna_properties_get(iter);
    }
}

void AnnotationLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnnotationLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnnotationLayer_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void AnnotationLayer_info_get(PointerRNA *ptr, char *value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    BLI_assert(strlen(data->info) < 128);
    strcpy(value, data->info);
}

int AnnotationLayer_info_length(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return strlen(data->info);
}

void AnnotationLayer_info_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_annotation_layer_info_set;
    fn(ptr, value);
}

static PointerRNA AnnotationLayer_frames_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_AnnotationFrame, rna_iterator_listbase_get(iter));
}

void AnnotationLayer_frames_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationLayer_frames;

    rna_iterator_listbase_begin(iter, ptr, &data->frames, nullptr);

    if (iter->valid) {
        iter->ptr = AnnotationLayer_frames_get(iter);
    }
}

void AnnotationLayer_frames_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationLayer_frames_get(iter);
    }
}

void AnnotationLayer_frames_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnnotationLayer_frames_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    AnnotationLayer_frames_begin(&iter, ptr);

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
        if (found) { *r_ptr = AnnotationLayer_frames_get(&iter); }
    }

    AnnotationLayer_frames_end(&iter);

    return found;
}

PointerRNA AnnotationLayer_active_frame_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnnotationFrame, data->actframe);
}

float AnnotationLayer_annotation_opacity_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (float)(data->opacity);
}

void AnnotationLayer_annotation_opacity_set(PointerRNA *ptr, float value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->opacity = (std::remove_reference_t<decltype(data->opacity)>)std::clamp(value, 0.0f, 1.0f);
}

void AnnotationLayer_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void AnnotationLayer_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

int AnnotationLayer_thickness_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->thickness);
}

void AnnotationLayer_thickness_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->thickness = (std::remove_reference_t<decltype(data->thickness)>)std::clamp(value, 1, 10);
}

bool AnnotationLayer_use_annotation_onion_skinning_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return ((uint64_t(data->onion_flag) & 1) != 0);
}

void AnnotationLayer_use_annotation_onion_skinning_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->onion_flag = std::remove_reference_t<decltype(data->onion_flag)>(uint64_t(data->onion_flag) | 1); }
    else { data->onion_flag = std::remove_reference_t<decltype(data->onion_flag)>(uint64_t(data->onion_flag) & ~uint64_t(1)); }
}

int AnnotationLayer_annotation_onion_before_range_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->gstep);
}

void AnnotationLayer_annotation_onion_before_range_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->gstep = (std::remove_reference_t<decltype(data->gstep)>)std::clamp(value, -1, 120);
}

int AnnotationLayer_annotation_onion_after_range_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->gstep_next);
}

void AnnotationLayer_annotation_onion_after_range_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->gstep_next = (std::remove_reference_t<decltype(data->gstep_next)>)std::clamp(value, -1, 120);
}

void AnnotationLayer_annotation_onion_before_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gcolor_prev)[i]);
    }
}

void AnnotationLayer_annotation_onion_before_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->gcolor_prev)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

void AnnotationLayer_annotation_onion_after_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gcolor_next)[i]);
    }
}

void AnnotationLayer_annotation_onion_after_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->gcolor_next)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

bool AnnotationLayer_annotation_onion_use_custom_color_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return ((uint64_t(data->onion_flag) & 2) != 0);
}

void AnnotationLayer_annotation_onion_use_custom_color_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->onion_flag = std::remove_reference_t<decltype(data->onion_flag)>(uint64_t(data->onion_flag) | 2); }
    else { data->onion_flag = std::remove_reference_t<decltype(data->onion_flag)>(uint64_t(data->onion_flag) & ~uint64_t(2)); }
}

bool AnnotationLayer_annotation_hide_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void AnnotationLayer_annotation_hide_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool AnnotationLayer_lock_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void AnnotationLayer_lock_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool AnnotationLayer_lock_frame_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void AnnotationLayer_lock_frame_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool AnnotationLayer_is_ruler_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return ((uint64_t(data->flag) & 16384) != 0);
}

bool AnnotationLayer_select_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void AnnotationLayer_select_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool AnnotationLayer_show_in_front_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return !((uint64_t(data->flag) & 128) != 0);
}

void AnnotationLayer_show_in_front_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

static PointerRNA AnnotationFrames_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnnotationFrames_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationFrames_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnnotationFrames_rna_properties_get(iter);
    }
}

void AnnotationFrames_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationFrames_rna_properties_get(iter);
    }
}

void AnnotationFrames_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnnotationFrames_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnnotationFrames_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA AnnotationFrame_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnnotationFrame_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationFrame_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnnotationFrame_rna_properties_get(iter);
    }
}

void AnnotationFrame_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationFrame_rna_properties_get(iter);
    }
}

void AnnotationFrame_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnnotationFrame_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnnotationFrame_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA AnnotationFrame_strokes_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_AnnotationStroke, rna_iterator_listbase_get(iter));
}

void AnnotationFrame_strokes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationFrame_strokes;

    rna_iterator_listbase_begin(iter, ptr, &data->strokes, nullptr);

    if (iter->valid) {
        iter->ptr = AnnotationFrame_strokes_get(iter);
    }
}

void AnnotationFrame_strokes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationFrame_strokes_get(iter);
    }
}

void AnnotationFrame_strokes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnnotationFrame_strokes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    AnnotationFrame_strokes_begin(&iter, ptr);

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
        if (found) { *r_ptr = AnnotationFrame_strokes_get(&iter); }
    }

    AnnotationFrame_strokes_end(&iter);

    return found;
}

int AnnotationFrame_frame_number_get(PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    return (int)(data->framenum);
}

void AnnotationFrame_frame_number_set(PointerRNA *ptr, int value)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    data->framenum = (std::remove_reference_t<decltype(data->framenum)>)std::clamp(value, -1048574, 1048574);
}

bool AnnotationFrame_select_get(PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void AnnotationFrame_select_set(PointerRNA *ptr, bool value)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

static PointerRNA AnnotationStrokes_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnnotationStrokes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationStrokes_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnnotationStrokes_rna_properties_get(iter);
    }
}

void AnnotationStrokes_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationStrokes_rna_properties_get(iter);
    }
}

void AnnotationStrokes_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnnotationStrokes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnnotationStrokes_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA AnnotationStroke_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnnotationStroke_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationStroke_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnnotationStroke_rna_properties_get(iter);
    }
}

void AnnotationStroke_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationStroke_rna_properties_get(iter);
    }
}

void AnnotationStroke_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnnotationStroke_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnnotationStroke_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int AnnotationStroke_points_length(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (data->points == nullptr) ? 0 : data->totpoints;
}

static PointerRNA AnnotationStroke_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_AnnotationStrokePoint, rna_iterator_array_get(iter));
}

void AnnotationStroke_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationStroke_points;

    rna_iterator_array_begin(iter, ptr, data->points, sizeof(data->points[0]), data->totpoints, 0, nullptr);

    if (iter->valid) {
        iter->ptr = AnnotationStroke_points_get(iter);
    }
}

void AnnotationStroke_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationStroke_points_get(iter);
    }
}

void AnnotationStroke_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool AnnotationStroke_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    AnnotationStroke_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = AnnotationStroke_points_get(&iter); }
    }

    AnnotationStroke_points_end(&iter);

    return found;
}

int AnnotationStroke_display_mode_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (uint64_t(data->flag) & 7);
}

void AnnotationStroke_display_mode_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(7));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

static PointerRNA AnnotationStrokePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnnotationStrokePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationStrokePoints_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnnotationStrokePoints_rna_properties_get(iter);
    }
}

void AnnotationStrokePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationStrokePoints_rna_properties_get(iter);
    }
}

void AnnotationStrokePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnnotationStrokePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnnotationStrokePoints_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA AnnotationStrokePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnnotationStrokePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnnotationStrokePoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnnotationStrokePoint_rna_properties_get(iter);
    }
}

void AnnotationStrokePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnnotationStrokePoint_rna_properties_get(iter);
    }
}

void AnnotationStrokePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnnotationStrokePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnnotationStrokePoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void AnnotationStrokePoint_co_get(PointerRNA *ptr, float values[3])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void AnnotationStrokePoint_co_set(PointerRNA *ptr, const float values[3])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (&data->x)[i] = values[i];
    }
}


bGPDlayer *AnnotationLayers_new_func(bGPdata *_self, const char * name, bool set_active)
{
	return rna_annotation_layer_new(_self, name, set_active);
}

static void AnnotationLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bGPdata *_self;
	const char * name;
	bool set_active;
	bGPDlayer *layer;
	char *_data, *_retdata;
	
	_self = (bGPdata *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	set_active = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_annotation_layer_new(_self, name, set_active);
	*((bGPDlayer **)_retdata) = layer;
}

void AnnotationLayers_remove_func(bGPdata *_self, ReportList *reports, PointerRNA *layer)
{
	rna_annotation_layer_remove(_self, reports, layer);
}

static void AnnotationLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bGPdata *_self;
	PointerRNA *layer;
	char *_data;
	
	_self = (bGPdata *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((PointerRNA **)_data);
	
	rna_annotation_layer_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

bGPDlayer *rna_annotation_layer_new(bGPdata *_self, const char * name, bool set_active);
void rna_annotation_layer_remove(bGPdata *_self, ReportList *reports, PointerRNA *layer);


bGPDframe *AnnotationFrames_new_func(bGPDlayer *_self, ReportList *reports, int frame_number, bool active)
{
	return rna_annotation_frame_new(_self, reports, frame_number, active);
}

static void AnnotationFrames_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bGPDlayer *_self;
	int frame_number;
	bool active;
	bGPDframe *frame;
	char *_data, *_retdata;
	
	_self = (bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame_number = *((int *)_data);
	_data += 8;
	active = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	frame = rna_annotation_frame_new(_self, reports, frame_number, active);
	*((bGPDframe **)_retdata) = frame;
}

void AnnotationFrames_remove_func(bGPDlayer *_self, ReportList *reports, PointerRNA *frame)
{
	rna_annotation_frame_remove(_self, reports, frame);
}

static void AnnotationFrames_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bGPDlayer *_self;
	PointerRNA *frame;
	char *_data;
	
	_self = (bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((PointerRNA **)_data);
	
	rna_annotation_frame_remove(_self, reports, frame);
}

bGPDframe *AnnotationFrames_copy_func(bGPDlayer *_self, bGPDframe *source)
{
	return rna_annotation_frame_copy(_self, source);
}

static void AnnotationFrames_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bGPDlayer *_self;
	bGPDframe *source;
	bGPDframe *copy;
	char *_data, *_retdata;
	
	_self = (bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	source = *((bGPDframe **)_data);
	_data += 8;
	_retdata = _data;
	
	copy = rna_annotation_frame_copy(_self, source);
	*((bGPDframe **)_retdata) = copy;
}

/* Repeated prototypes to detect errors */

bGPDframe *rna_annotation_frame_new(bGPDlayer *_self, ReportList *reports, int frame_number, bool active);
void rna_annotation_frame_remove(bGPDlayer *_self, ReportList *reports, PointerRNA *frame);
bGPDframe *rna_annotation_frame_copy(bGPDlayer *_self, bGPDframe *source);


bGPDstroke *AnnotationStrokes_new_func(bGPDframe *_self)
{
	return rna_annotation_stroke_new(_self);
}

static void AnnotationStrokes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bGPDframe *_self;
	bGPDstroke *stroke;
	char *_data, *_retdata;
	
	_self = (bGPDframe *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	stroke = rna_annotation_stroke_new(_self);
	*((bGPDstroke **)_retdata) = stroke;
}

void AnnotationStrokes_remove_func(bGPDframe *_self, ReportList *reports, PointerRNA *stroke)
{
	rna_annotation_stroke_remove(_self, reports, stroke);
}

static void AnnotationStrokes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bGPDframe *_self;
	PointerRNA *stroke;
	char *_data;
	
	_self = (bGPDframe *)_ptr->data;
	_data = (char *)_parms->data;
	stroke = *((PointerRNA **)_data);
	
	rna_annotation_stroke_remove(_self, reports, stroke);
}

/* Repeated prototypes to detect errors */

bGPDstroke *rna_annotation_stroke_new(bGPDframe *_self);
void rna_annotation_stroke_remove(bGPDframe *_self, ReportList *reports, PointerRNA *stroke);


void AnnotationStrokePoints_add_func(bGPDstroke *_self, int count, float pressure, float strength)
{
	rna_annotation_stroke_point_add(_self, count, pressure, strength);
}

static void AnnotationStrokePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bGPDstroke *_self;
	int count;
	float pressure;
	float strength;
	char *_data;
	
	_self = (bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	_data += 8;
	pressure = *((float *)_data);
	_data += 8;
	strength = *((float *)_data);
	
	rna_annotation_stroke_point_add(_self, count, pressure, strength);
}

void AnnotationStrokePoints_remove_func(bGPDstroke *_self, ReportList *reports, int index)
{
	rna_annotation_stroke_point_remove(_self, reports, index);
}

static void AnnotationStrokePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bGPDstroke *_self;
	int index;
	char *_data;
	
	_self = (bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_annotation_stroke_point_remove(_self, reports, index);
}

/* Repeated prototypes to detect errors */

void rna_annotation_stroke_point_add(bGPDstroke *_self, int count, float pressure, float strength);
void rna_annotation_stroke_point_remove(bGPDstroke *_self, ReportList *reports, int index);


/* Annotation */
static CollectionPropertyRNA rna_Annotation_layers_;
PropertyRNA &rna_Annotation_layers = reinterpret_cast<PropertyRNA &>(rna_Annotation_layers_);

static PointerPropertyRNA rna_Annotation_animation_data_;
PropertyRNA &rna_Annotation_animation_data = reinterpret_cast<PropertyRNA &>(rna_Annotation_animation_data_);

StructRNA *RNA_Annotation;
void register_struct_Annotation(BlenderRNA &brna)
{
	rna_Annotation_layers_ = {
		{&rna_Annotation_animation_data, 	nullptr,
		-1, "layers", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layers",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AnnotationLayers},
		Annotation_layers_begin, Annotation_layers_next, Annotation_layers_end, Annotation_layers_get, nullptr, Annotation_layers_lookup_int, Annotation_layers_lookup_string, nullptr, RNA_AnnotationLayer
	};

	rna_Annotation_animation_data_ = {
		{nullptr, 	&rna_Annotation_layers,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Annotation_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_Annotation;
	srna->cont.properties = {&rna_Annotation_layers, &rna_Annotation_animation_data};
	srna->identifier = "Annotation";
	srna->flag = 519;
	srna->name = "Annotation";
	srna->description = "Freehand annotation sketchbook";
	srna->translation_context = "*";
	srna->icon = 262;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Annotation Layers */
static CollectionPropertyRNA rna_AnnotationLayers_rna_properties_;
PropertyRNA &rna_AnnotationLayers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayers_rna_properties_);

static PointerPropertyRNA rna_AnnotationLayers_rna_type_;
PropertyRNA &rna_AnnotationLayers_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayers_rna_type_);

static IntPropertyRNA rna_AnnotationLayers_active_index_;
PropertyRNA &rna_AnnotationLayers_active_index = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayers_active_index_);

static EnumPropertyRNA rna_AnnotationLayers_active_note_;
PropertyRNA &rna_AnnotationLayers_active_note = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayers_active_note_);

static StringPropertyRNA rna_AnnotationLayers_new_name_;
PropertyRNA &rna_AnnotationLayers_new_name = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayers_new_name_);

static BoolPropertyRNA rna_AnnotationLayers_new_set_active_;
PropertyRNA &rna_AnnotationLayers_new_set_active = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayers_new_set_active_);

static PointerPropertyRNA rna_AnnotationLayers_new_layer_;
PropertyRNA &rna_AnnotationLayers_new_layer = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayers_new_layer_);

FunctionRNA *rna_AnnotationLayers_new_func;
static PointerPropertyRNA rna_AnnotationLayers_remove_layer_;
PropertyRNA &rna_AnnotationLayers_remove_layer = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayers_remove_layer_);

FunctionRNA *rna_AnnotationLayers_remove_func;
StructRNA *RNA_AnnotationLayers;
void register_struct_AnnotationLayers(BlenderRNA &brna)
{
	rna_AnnotationLayers_rna_properties_ = {
		{&rna_AnnotationLayers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayers_rna_properties_begin, AnnotationLayers_rna_properties_next, AnnotationLayers_rna_properties_end, AnnotationLayers_rna_properties_get, nullptr, nullptr, AnnotationLayers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnnotationLayers_rna_type_ = {
		{&rna_AnnotationLayers_active_index, 	&rna_AnnotationLayers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AnnotationLayers_active_index_ = {
		{&rna_AnnotationLayers_active_note, 	&rna_AnnotationLayers_rna_type,
		-1, "active_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Layer Index",
		"Index of active annotation layer",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 391839750, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayers_active_index_get, AnnotationLayers_active_index_set, nullptr, nullptr, rna_annotation_active_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationLayers_active_note_ = {
		{nullptr, 	&rna_AnnotationLayers_active_index,
		-1, "active_note", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Note",
		"Note/Layer to add annotation strokes to",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayers_active_note_get, AnnotationLayers_active_note_set, rna_annotation_active_layer_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};

	StructRNA *srna = RNA_AnnotationLayers;
	srna->cont.properties = {&rna_AnnotationLayers_rna_properties, &rna_AnnotationLayers_active_note};
	srna->identifier = "AnnotationLayers";
	srna->flag = 516;
	srna->name = "Annotation Layers";
	srna->description = "Collection of annotation layers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnnotationLayers_rna_properties;
	{
	rna_AnnotationLayers_new_name_ = {
		{&rna_AnnotationLayers_new_set_active, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the layer",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "Layer"
	};
	rna_AnnotationLayers_new_set_active_ = {
		{&rna_AnnotationLayers_new_layer, 	&rna_AnnotationLayers_new_name,
		-1, "set_active", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Set Active",
		"Set the newly created layer to the active layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_AnnotationLayers_new_layer_ = {
		{nullptr, 	&rna_AnnotationLayers_new_set_active,
		-1, "layer", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnnotationLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnnotationLayers_new_name, &rna_AnnotationLayers_new_layer};
		func->identifier = "new";
		func->description = "Add a new annotation layer";
		func->call = AnnotationLayers_new_call;
		func->c_ret = &rna_AnnotationLayers_new_layer;
		rna_AnnotationLayers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AnnotationLayers_remove_layer_ = {
		{nullptr, 	nullptr,
		-1, "layer", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnnotationLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnnotationLayers_remove_layer, &rna_AnnotationLayers_remove_layer};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a annotation layer";
		func->call = AnnotationLayers_remove_call;
		rna_AnnotationLayers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Annotation Layer */
static CollectionPropertyRNA rna_AnnotationLayer_rna_properties_;
PropertyRNA &rna_AnnotationLayer_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_rna_properties_);

static PointerPropertyRNA rna_AnnotationLayer_rna_type_;
PropertyRNA &rna_AnnotationLayer_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_rna_type_);

static StringPropertyRNA rna_AnnotationLayer_info_;
PropertyRNA &rna_AnnotationLayer_info = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_info_);

static CollectionPropertyRNA rna_AnnotationLayer_frames_;
PropertyRNA &rna_AnnotationLayer_frames = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_frames_);

static PointerPropertyRNA rna_AnnotationLayer_active_frame_;
PropertyRNA &rna_AnnotationLayer_active_frame = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_active_frame_);

static FloatPropertyRNA rna_AnnotationLayer_annotation_opacity_;
PropertyRNA &rna_AnnotationLayer_annotation_opacity = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_annotation_opacity_);

static FloatPropertyRNA rna_AnnotationLayer_color_;
PropertyRNA &rna_AnnotationLayer_color = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_color_);

static IntPropertyRNA rna_AnnotationLayer_thickness_;
PropertyRNA &rna_AnnotationLayer_thickness = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_thickness_);

static BoolPropertyRNA rna_AnnotationLayer_use_annotation_onion_skinning_;
PropertyRNA &rna_AnnotationLayer_use_annotation_onion_skinning = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_use_annotation_onion_skinning_);

static IntPropertyRNA rna_AnnotationLayer_annotation_onion_before_range_;
PropertyRNA &rna_AnnotationLayer_annotation_onion_before_range = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_annotation_onion_before_range_);

static IntPropertyRNA rna_AnnotationLayer_annotation_onion_after_range_;
PropertyRNA &rna_AnnotationLayer_annotation_onion_after_range = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_annotation_onion_after_range_);

static FloatPropertyRNA rna_AnnotationLayer_annotation_onion_before_color_;
PropertyRNA &rna_AnnotationLayer_annotation_onion_before_color = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_annotation_onion_before_color_);

static FloatPropertyRNA rna_AnnotationLayer_annotation_onion_after_color_;
PropertyRNA &rna_AnnotationLayer_annotation_onion_after_color = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_annotation_onion_after_color_);

static BoolPropertyRNA rna_AnnotationLayer_annotation_onion_use_custom_color_;
PropertyRNA &rna_AnnotationLayer_annotation_onion_use_custom_color = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_annotation_onion_use_custom_color_);

static BoolPropertyRNA rna_AnnotationLayer_annotation_hide_;
PropertyRNA &rna_AnnotationLayer_annotation_hide = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_annotation_hide_);

static BoolPropertyRNA rna_AnnotationLayer_lock_;
PropertyRNA &rna_AnnotationLayer_lock = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_lock_);

static BoolPropertyRNA rna_AnnotationLayer_lock_frame_;
PropertyRNA &rna_AnnotationLayer_lock_frame = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_lock_frame_);

static BoolPropertyRNA rna_AnnotationLayer_is_ruler_;
PropertyRNA &rna_AnnotationLayer_is_ruler = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_is_ruler_);

static BoolPropertyRNA rna_AnnotationLayer_select_;
PropertyRNA &rna_AnnotationLayer_select = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_select_);

static BoolPropertyRNA rna_AnnotationLayer_show_in_front_;
PropertyRNA &rna_AnnotationLayer_show_in_front = reinterpret_cast<PropertyRNA &>(rna_AnnotationLayer_show_in_front_);

StructRNA *RNA_AnnotationLayer;
void register_struct_AnnotationLayer(BlenderRNA &brna)
{
	rna_AnnotationLayer_rna_properties_ = {
		{&rna_AnnotationLayer_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_rna_properties_begin, AnnotationLayer_rna_properties_next, AnnotationLayer_rna_properties_end, AnnotationLayer_rna_properties_get, nullptr, nullptr, AnnotationLayer_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnnotationLayer_rna_type_ = {
		{&rna_AnnotationLayer_info, 	&rna_AnnotationLayer_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AnnotationLayer_info_ = {
		{&rna_AnnotationLayer_frames, 	&rna_AnnotationLayer_rna_type,
		-1, "info", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Info",
		"Layer name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {128, 0, 0}, 0,
		rna_annotation_update, 391839749, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_info_get, AnnotationLayer_info_length, AnnotationLayer_info_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 128, ""
	};

	rna_AnnotationLayer_frames_ = {
		{&rna_AnnotationLayer_active_frame, 	&rna_AnnotationLayer_info,
		-1, "frames", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frames",
		"Sketches for this layer on different frames",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AnnotationFrames},
		AnnotationLayer_frames_begin, AnnotationLayer_frames_next, AnnotationLayer_frames_end, AnnotationLayer_frames_get, nullptr, AnnotationLayer_frames_lookup_int, nullptr, nullptr, RNA_AnnotationFrame
	};

	rna_AnnotationLayer_active_frame_ = {
		{&rna_AnnotationLayer_annotation_opacity, 	&rna_AnnotationLayer_frames,
		-1, "active_frame", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Frame",
		"Frame currently being displayed for this layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 391839744, rna_annotation_layer_active_frame_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_active_frame_get, nullptr, nullptr, nullptr,RNA_AnnotationFrame
	};

	rna_AnnotationLayer_annotation_opacity_ = {
		{&rna_AnnotationLayer_color, 	&rna_AnnotationLayer_active_frame,
		-1, "annotation_opacity", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Opacity",
		"Annotation Layer Opacity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGPDlayer, opacity), RawPropertyType(5), nullptr},
		AnnotationLayer_annotation_opacity_get, AnnotationLayer_annotation_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_AnnotationLayer_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_AnnotationLayer_color_ = {
		{&rna_AnnotationLayer_thickness, 	&rna_AnnotationLayer_annotation_opacity,
		-1, "color", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Color for all strokes in this layer",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGPDlayer, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, AnnotationLayer_color_get, AnnotationLayer_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_AnnotationLayer_color_default
	};

	rna_AnnotationLayer_thickness_ = {
		{&rna_AnnotationLayer_use_annotation_onion_skinning, 	&rna_AnnotationLayer_color,
		-1, "thickness", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Thickness",
		"Thickness of annotation strokes",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGPDlayer, thickness), RawPropertyType(1), nullptr},
		AnnotationLayer_thickness_get, AnnotationLayer_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10, 1, 10, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationLayer_use_annotation_onion_skinning_ = {
		{&rna_AnnotationLayer_annotation_onion_before_range, 	&rna_AnnotationLayer_thickness,
		-1, "use_annotation_onion_skinning", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Onion Skinning",
		"Display annotation onion skins before and after the current frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_use_annotation_onion_skinning_get, AnnotationLayer_use_annotation_onion_skinning_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationLayer_annotation_onion_before_range_ = {
		{&rna_AnnotationLayer_annotation_onion_after_range, 	&rna_AnnotationLayer_use_annotation_onion_skinning,
		-1, "annotation_onion_before_range", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frames Before",
		"Maximum number of frames to show before current frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGPDlayer, gstep), RawPropertyType(1), nullptr},
		AnnotationLayer_annotation_onion_before_range_get, AnnotationLayer_annotation_onion_before_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 120, -1, 120, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationLayer_annotation_onion_after_range_ = {
		{&rna_AnnotationLayer_annotation_onion_before_color, 	&rna_AnnotationLayer_annotation_onion_before_range,
		-1, "annotation_onion_after_range", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frames After",
		"Maximum number of frames to show after current frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGPDlayer, gstep_next), RawPropertyType(1), nullptr},
		AnnotationLayer_annotation_onion_after_range_get, AnnotationLayer_annotation_onion_after_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 120, -1, 120, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_AnnotationLayer_annotation_onion_before_color_default[3] = {
		0.3019999862f,
		0.8510000110f,
		0.3019999862f
	};
	rna_AnnotationLayer_annotation_onion_before_color_ = {
		{&rna_AnnotationLayer_annotation_onion_after_color, 	&rna_AnnotationLayer_annotation_onion_after_range,
		-1, "annotation_onion_before_color", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Before Color",
		"Base color for ghosts before the active frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGPDlayer, gcolor_prev), RawPropertyType(5), nullptr},
		nullptr, nullptr, AnnotationLayer_annotation_onion_before_color_get, AnnotationLayer_annotation_onion_before_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_AnnotationLayer_annotation_onion_before_color_default
	};

	static float rna_AnnotationLayer_annotation_onion_after_color_default[3] = {
		0.2500000000f,
		0.1000000015f,
		1.0f
	};
	rna_AnnotationLayer_annotation_onion_after_color_ = {
		{&rna_AnnotationLayer_annotation_onion_use_custom_color, 	&rna_AnnotationLayer_annotation_onion_before_color,
		-1, "annotation_onion_after_color", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "After Color",
		"Base color for ghosts after the active frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGPDlayer, gcolor_next), RawPropertyType(5), nullptr},
		nullptr, nullptr, AnnotationLayer_annotation_onion_after_color_get, AnnotationLayer_annotation_onion_after_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_AnnotationLayer_annotation_onion_after_color_default
	};

	rna_AnnotationLayer_annotation_onion_use_custom_color_ = {
		{&rna_AnnotationLayer_annotation_hide, 	&rna_AnnotationLayer_annotation_onion_after_color,
		-1, "annotation_onion_use_custom_color", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Custom Onion Skin Colors",
		"Use custom colors for onion skinning instead of the theme",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_annotation_onion_use_custom_color_get, AnnotationLayer_annotation_onion_use_custom_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationLayer_annotation_hide_ = {
		{&rna_AnnotationLayer_lock, 	&rna_AnnotationLayer_annotation_onion_use_custom_color,
		-1, "annotation_hide", 4353, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Set annotation Visibility",
		16, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_annotation_hide_get, AnnotationLayer_annotation_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationLayer_lock_ = {
		{&rna_AnnotationLayer_lock_frame, 	&rna_AnnotationLayer_annotation_hide,
		-1, "lock", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Locked",
		"Protect layer from further editing and/or frame changes",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_lock_get, AnnotationLayer_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationLayer_lock_frame_ = {
		{&rna_AnnotationLayer_is_ruler, 	&rna_AnnotationLayer_lock,
		-1, "lock_frame", 4097, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame Locked",
		"Lock current frame displayed by layer",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_lock_frame_get, AnnotationLayer_lock_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationLayer_is_ruler_ = {
		{&rna_AnnotationLayer_select, 	&rna_AnnotationLayer_lock_frame,
		-1, "is_ruler", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ruler",
		"This is a special ruler layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_is_ruler_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationLayer_select_ = {
		{&rna_AnnotationLayer_show_in_front, 	&rna_AnnotationLayer_is_ruler,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Layer is selected for editing in the Dope Sheet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839750, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_select_get, AnnotationLayer_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationLayer_show_in_front_ = {
		{nullptr, 	&rna_AnnotationLayer_select,
		-1, "show_in_front", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "In Front",
		"Make the layer display in front of objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationLayer_show_in_front_get, AnnotationLayer_show_in_front_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	StructRNA *srna = RNA_AnnotationLayer;
	srna->cont.properties = {&rna_AnnotationLayer_rna_properties, &rna_AnnotationLayer_show_in_front};
	srna->identifier = "AnnotationLayer";
	srna->flag = 516;
	srna->name = "Annotation Layer";
	srna->description = "Collection of related sketches";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_AnnotationLayer_info;
	srna->iteratorproperty = &rna_AnnotationLayer_rna_properties;
	srna->path = rna_annotation_layer_path;
};

/* Annotation Frames */
static CollectionPropertyRNA rna_AnnotationFrames_rna_properties_;
PropertyRNA &rna_AnnotationFrames_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrames_rna_properties_);

static PointerPropertyRNA rna_AnnotationFrames_rna_type_;
PropertyRNA &rna_AnnotationFrames_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrames_rna_type_);

static IntPropertyRNA rna_AnnotationFrames_new_frame_number_;
PropertyRNA &rna_AnnotationFrames_new_frame_number = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrames_new_frame_number_);

static BoolPropertyRNA rna_AnnotationFrames_new_active_;
PropertyRNA &rna_AnnotationFrames_new_active = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrames_new_active_);

static PointerPropertyRNA rna_AnnotationFrames_new_frame_;
PropertyRNA &rna_AnnotationFrames_new_frame = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrames_new_frame_);

FunctionRNA *rna_AnnotationFrames_new_func;
static PointerPropertyRNA rna_AnnotationFrames_remove_frame_;
PropertyRNA &rna_AnnotationFrames_remove_frame = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrames_remove_frame_);

FunctionRNA *rna_AnnotationFrames_remove_func;
static PointerPropertyRNA rna_AnnotationFrames_copy_source_;
PropertyRNA &rna_AnnotationFrames_copy_source = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrames_copy_source_);

static PointerPropertyRNA rna_AnnotationFrames_copy_copy_;
PropertyRNA &rna_AnnotationFrames_copy_copy = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrames_copy_copy_);

FunctionRNA *rna_AnnotationFrames_copy_func;
StructRNA *RNA_AnnotationFrames;
void register_struct_AnnotationFrames(BlenderRNA &brna)
{
	rna_AnnotationFrames_rna_properties_ = {
		{&rna_AnnotationFrames_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationFrames_rna_properties_begin, AnnotationFrames_rna_properties_next, AnnotationFrames_rna_properties_end, AnnotationFrames_rna_properties_get, nullptr, nullptr, AnnotationFrames_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnnotationFrames_rna_type_ = {
		{nullptr, 	&rna_AnnotationFrames_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationFrames_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_AnnotationFrames;
	srna->cont.properties = {&rna_AnnotationFrames_rna_properties, &rna_AnnotationFrames_rna_type};
	srna->identifier = "AnnotationFrames";
	srna->flag = 516;
	srna->name = "Annotation Frames";
	srna->description = "Collection of annotation frames";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnnotationFrames_rna_properties;
	{
	rna_AnnotationFrames_new_frame_number_ = {
		{&rna_AnnotationFrames_new_active, 	nullptr,
		-1, "frame_number", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame Number",
		"The frame on which this sketch appears",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_AnnotationFrames_new_active_ = {
		{&rna_AnnotationFrames_new_frame, 	&rna_AnnotationFrames_new_frame_number,
		-1, "active", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_AnnotationFrames_new_frame_ = {
		{nullptr, 	&rna_AnnotationFrames_new_active,
		-1, "frame", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnnotationFrame
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnnotationFrames_new_frame_number, &rna_AnnotationFrames_new_frame};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add a new annotation frame";
		func->call = AnnotationFrames_new_call;
		func->c_ret = &rna_AnnotationFrames_new_frame;
		rna_AnnotationFrames_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AnnotationFrames_remove_frame_ = {
		{nullptr, 	nullptr,
		-1, "frame", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "Frame",
		"The frame to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnnotationFrame
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnnotationFrames_remove_frame, &rna_AnnotationFrames_remove_frame};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove an annotation frame";
		func->call = AnnotationFrames_remove_call;
		rna_AnnotationFrames_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AnnotationFrames_copy_source_ = {
		{&rna_AnnotationFrames_copy_copy, 	nullptr,
		-1, "source", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "Source",
		"The source frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnnotationFrame
	};
	rna_AnnotationFrames_copy_copy_ = {
		{nullptr, 	&rna_AnnotationFrames_copy_source,
		-1, "copy", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly copied frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnnotationFrame
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnnotationFrames_copy_source, &rna_AnnotationFrames_copy_copy};
		func->identifier = "copy";
		func->description = "Copy an annotation frame";
		func->call = AnnotationFrames_copy_call;
		func->c_ret = &rna_AnnotationFrames_copy_copy;
		rna_AnnotationFrames_copy_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Annotation Frame */
static CollectionPropertyRNA rna_AnnotationFrame_rna_properties_;
PropertyRNA &rna_AnnotationFrame_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrame_rna_properties_);

static PointerPropertyRNA rna_AnnotationFrame_rna_type_;
PropertyRNA &rna_AnnotationFrame_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrame_rna_type_);

static CollectionPropertyRNA rna_AnnotationFrame_strokes_;
PropertyRNA &rna_AnnotationFrame_strokes = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrame_strokes_);

static IntPropertyRNA rna_AnnotationFrame_frame_number_;
PropertyRNA &rna_AnnotationFrame_frame_number = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrame_frame_number_);

static BoolPropertyRNA rna_AnnotationFrame_select_;
PropertyRNA &rna_AnnotationFrame_select = reinterpret_cast<PropertyRNA &>(rna_AnnotationFrame_select_);

StructRNA *RNA_AnnotationFrame;
void register_struct_AnnotationFrame(BlenderRNA &brna)
{
	rna_AnnotationFrame_rna_properties_ = {
		{&rna_AnnotationFrame_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationFrame_rna_properties_begin, AnnotationFrame_rna_properties_next, AnnotationFrame_rna_properties_end, AnnotationFrame_rna_properties_get, nullptr, nullptr, AnnotationFrame_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnnotationFrame_rna_type_ = {
		{&rna_AnnotationFrame_strokes, 	&rna_AnnotationFrame_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationFrame_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AnnotationFrame_strokes_ = {
		{&rna_AnnotationFrame_frame_number, 	&rna_AnnotationFrame_rna_type,
		-1, "strokes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strokes",
		"Freehand curves defining the sketch on this frame",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AnnotationStrokes},
		AnnotationFrame_strokes_begin, AnnotationFrame_strokes_next, AnnotationFrame_strokes_end, AnnotationFrame_strokes_get, nullptr, AnnotationFrame_strokes_lookup_int, nullptr, nullptr, RNA_AnnotationStroke
	};

	rna_AnnotationFrame_frame_number_ = {
		{&rna_AnnotationFrame_select, 	&rna_AnnotationFrame_strokes,
		-1, "frame_number", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frame Number",
		"The frame on which this sketch appears",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGPDframe, framenum), RawPropertyType(0), nullptr},
		AnnotationFrame_frame_number_get, AnnotationFrame_frame_number_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnnotationFrame_select_ = {
		{nullptr, 	&rna_AnnotationFrame_frame_number,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Frame is selected for editing in the Dope Sheet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationFrame_select_get, AnnotationFrame_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_AnnotationFrame;
	srna->cont.properties = {&rna_AnnotationFrame_rna_properties, &rna_AnnotationFrame_select};
	srna->identifier = "AnnotationFrame";
	srna->flag = 516;
	srna->name = "Annotation Frame";
	srna->description = "Collection of related sketches on a particular frame";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnnotationFrame_rna_properties;
};

/* Annotation Strokes */
static CollectionPropertyRNA rna_AnnotationStrokes_rna_properties_;
PropertyRNA &rna_AnnotationStrokes_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokes_rna_properties_);

static PointerPropertyRNA rna_AnnotationStrokes_rna_type_;
PropertyRNA &rna_AnnotationStrokes_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokes_rna_type_);

static PointerPropertyRNA rna_AnnotationStrokes_new_stroke_;
PropertyRNA &rna_AnnotationStrokes_new_stroke = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokes_new_stroke_);

FunctionRNA *rna_AnnotationStrokes_new_func;
static PointerPropertyRNA rna_AnnotationStrokes_remove_stroke_;
PropertyRNA &rna_AnnotationStrokes_remove_stroke = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokes_remove_stroke_);

FunctionRNA *rna_AnnotationStrokes_remove_func;
StructRNA *RNA_AnnotationStrokes;
void register_struct_AnnotationStrokes(BlenderRNA &brna)
{
	rna_AnnotationStrokes_rna_properties_ = {
		{&rna_AnnotationStrokes_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationStrokes_rna_properties_begin, AnnotationStrokes_rna_properties_next, AnnotationStrokes_rna_properties_end, AnnotationStrokes_rna_properties_get, nullptr, nullptr, AnnotationStrokes_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnnotationStrokes_rna_type_ = {
		{nullptr, 	&rna_AnnotationStrokes_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationStrokes_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_AnnotationStrokes;
	srna->cont.properties = {&rna_AnnotationStrokes_rna_properties, &rna_AnnotationStrokes_rna_type};
	srna->identifier = "AnnotationStrokes";
	srna->flag = 516;
	srna->name = "Annotation Strokes";
	srna->description = "Collection of annotation strokes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnnotationStrokes_rna_properties;
	{
	rna_AnnotationStrokes_new_stroke_ = {
		{nullptr, 	nullptr,
		-1, "stroke", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created stroke",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnnotationStroke
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnnotationStrokes_new_stroke, &rna_AnnotationStrokes_new_stroke};
		func->identifier = "new";
		func->description = "Add a new annotation stroke";
		func->call = AnnotationStrokes_new_call;
		func->c_ret = &rna_AnnotationStrokes_new_stroke;
		rna_AnnotationStrokes_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AnnotationStrokes_remove_stroke_ = {
		{nullptr, 	nullptr,
		-1, "stroke", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The stroke to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnnotationStroke
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnnotationStrokes_remove_stroke, &rna_AnnotationStrokes_remove_stroke};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove an annotation stroke";
		func->call = AnnotationStrokes_remove_call;
		rna_AnnotationStrokes_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Annotation Stroke */
static CollectionPropertyRNA rna_AnnotationStroke_rna_properties_;
PropertyRNA &rna_AnnotationStroke_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnnotationStroke_rna_properties_);

static PointerPropertyRNA rna_AnnotationStroke_rna_type_;
PropertyRNA &rna_AnnotationStroke_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnnotationStroke_rna_type_);

static CollectionPropertyRNA rna_AnnotationStroke_points_;
PropertyRNA &rna_AnnotationStroke_points = reinterpret_cast<PropertyRNA &>(rna_AnnotationStroke_points_);

static EnumPropertyRNA rna_AnnotationStroke_display_mode_;
PropertyRNA &rna_AnnotationStroke_display_mode = reinterpret_cast<PropertyRNA &>(rna_AnnotationStroke_display_mode_);

StructRNA *RNA_AnnotationStroke;
void register_struct_AnnotationStroke(BlenderRNA &brna)
{
	rna_AnnotationStroke_rna_properties_ = {
		{&rna_AnnotationStroke_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationStroke_rna_properties_begin, AnnotationStroke_rna_properties_next, AnnotationStroke_rna_properties_end, AnnotationStroke_rna_properties_get, nullptr, nullptr, AnnotationStroke_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnnotationStroke_rna_type_ = {
		{&rna_AnnotationStroke_points, 	&rna_AnnotationStroke_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationStroke_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AnnotationStroke_points_ = {
		{&rna_AnnotationStroke_display_mode, 	&rna_AnnotationStroke_rna_type,
		-1, "points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Stroke Points",
		"Stroke data points",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AnnotationStrokePoints},
		AnnotationStroke_points_begin, AnnotationStroke_points_next, AnnotationStroke_points_end, AnnotationStroke_points_get, AnnotationStroke_points_length, AnnotationStroke_points_lookup_int, nullptr, nullptr, RNA_AnnotationStrokePoint
	};

	static const EnumPropertyItem rna_AnnotationStroke_display_mode_items[4] = {
		{1, "3DSPACE", 0, "3D Space", "Stroke is in 3D space"	},
		{2, "2DSPACE", 0, "2D Space", "Stroke is in 2D space, locked to the camera view"	},
		{4, "2DIMAGE", 0, "2D Image", "Stroke is in 2D image/UV space"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_AnnotationStroke_display_mode_ = {
		{nullptr, 	&rna_AnnotationStroke_points,
		-1, "display_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Display Mode",
		"Coordinate space that stroke is in",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGPDstroke, flag), RawPropertyType(1), nullptr},
		AnnotationStroke_display_mode_get, AnnotationStroke_display_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnnotationStroke_display_mode_items, 3, 1
	};

	StructRNA *srna = RNA_AnnotationStroke;
	srna->cont.properties = {&rna_AnnotationStroke_rna_properties, &rna_AnnotationStroke_display_mode};
	srna->identifier = "AnnotationStroke";
	srna->flag = 516;
	srna->name = "Annotation Stroke";
	srna->description = "Freehand curve defining part of a sketch";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnnotationStroke_rna_properties;
};

/* Annotation Stroke Points */
static CollectionPropertyRNA rna_AnnotationStrokePoints_rna_properties_;
PropertyRNA &rna_AnnotationStrokePoints_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokePoints_rna_properties_);

static PointerPropertyRNA rna_AnnotationStrokePoints_rna_type_;
PropertyRNA &rna_AnnotationStrokePoints_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokePoints_rna_type_);

static IntPropertyRNA rna_AnnotationStrokePoints_add_count_;
PropertyRNA &rna_AnnotationStrokePoints_add_count = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokePoints_add_count_);

static FloatPropertyRNA rna_AnnotationStrokePoints_add_pressure_;
PropertyRNA &rna_AnnotationStrokePoints_add_pressure = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokePoints_add_pressure_);

static FloatPropertyRNA rna_AnnotationStrokePoints_add_strength_;
PropertyRNA &rna_AnnotationStrokePoints_add_strength = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokePoints_add_strength_);

FunctionRNA *rna_AnnotationStrokePoints_add_func;
static IntPropertyRNA rna_AnnotationStrokePoints_remove_index_;
PropertyRNA &rna_AnnotationStrokePoints_remove_index = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokePoints_remove_index_);

FunctionRNA *rna_AnnotationStrokePoints_remove_func;
StructRNA *RNA_AnnotationStrokePoints;
void register_struct_AnnotationStrokePoints(BlenderRNA &brna)
{
	rna_AnnotationStrokePoints_rna_properties_ = {
		{&rna_AnnotationStrokePoints_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationStrokePoints_rna_properties_begin, AnnotationStrokePoints_rna_properties_next, AnnotationStrokePoints_rna_properties_end, AnnotationStrokePoints_rna_properties_get, nullptr, nullptr, AnnotationStrokePoints_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnnotationStrokePoints_rna_type_ = {
		{nullptr, 	&rna_AnnotationStrokePoints_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationStrokePoints_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_AnnotationStrokePoints;
	srna->cont.properties = {&rna_AnnotationStrokePoints_rna_properties, &rna_AnnotationStrokePoints_rna_type};
	srna->identifier = "AnnotationStrokePoints";
	srna->flag = 516;
	srna->name = "Annotation Stroke Points";
	srna->description = "Collection of annotation stroke points";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnnotationStrokePoints_rna_properties;
	{
	rna_AnnotationStrokePoints_add_count_ = {
		{&rna_AnnotationStrokePoints_add_pressure, 	nullptr,
		-1, "count", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Count",
		"Number of points to add",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, INT_MAX, 1, nullptr, nullptr, 1, nullptr
	};
	rna_AnnotationStrokePoints_add_pressure_ = {
		{&rna_AnnotationStrokePoints_add_strength, 	&rna_AnnotationStrokePoints_add_count,
		-1, "pressure", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pressure",
		"Pressure/radius for new points",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};
	rna_AnnotationStrokePoints_add_strength_ = {
		{nullptr, 	&rna_AnnotationStrokePoints_add_pressure,
		-1, "strength", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strength",
		"Color strength/opacity for new points",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnnotationStrokePoints_add_count, &rna_AnnotationStrokePoints_add_strength};
		func->identifier = "add";
		func->description = "Add point(s) to the stroke";
		func->call = AnnotationStrokePoints_add_call;
		rna_AnnotationStrokePoints_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AnnotationStrokePoints_remove_index_ = {
		{nullptr, 	nullptr,
		-1, "index", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of point to remove",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnnotationStrokePoints_remove_index, &rna_AnnotationStrokePoints_remove_index};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a point from the stroke";
		func->call = AnnotationStrokePoints_remove_call;
		rna_AnnotationStrokePoints_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Annotation Stroke Point */
static CollectionPropertyRNA rna_AnnotationStrokePoint_rna_properties_;
PropertyRNA &rna_AnnotationStrokePoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokePoint_rna_properties_);

static PointerPropertyRNA rna_AnnotationStrokePoint_rna_type_;
PropertyRNA &rna_AnnotationStrokePoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokePoint_rna_type_);

static FloatPropertyRNA rna_AnnotationStrokePoint_co_;
PropertyRNA &rna_AnnotationStrokePoint_co = reinterpret_cast<PropertyRNA &>(rna_AnnotationStrokePoint_co_);

StructRNA *RNA_AnnotationStrokePoint;
void register_struct_AnnotationStrokePoint(BlenderRNA &brna)
{
	rna_AnnotationStrokePoint_rna_properties_ = {
		{&rna_AnnotationStrokePoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationStrokePoint_rna_properties_begin, AnnotationStrokePoint_rna_properties_next, AnnotationStrokePoint_rna_properties_end, AnnotationStrokePoint_rna_properties_get, nullptr, nullptr, AnnotationStrokePoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnnotationStrokePoint_rna_type_ = {
		{&rna_AnnotationStrokePoint_co, 	&rna_AnnotationStrokePoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnnotationStrokePoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_AnnotationStrokePoint_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_AnnotationStrokePoint_co_ = {
		{nullptr, 	&rna_AnnotationStrokePoint_rna_type,
		-1, "co", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Coordinates",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_annotation_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGPDspoint, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, AnnotationStrokePoint_co_get, AnnotationStrokePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_AnnotationStrokePoint_co_default
	};

	StructRNA *srna = RNA_AnnotationStrokePoint;
	srna->cont.properties = {&rna_AnnotationStrokePoint_rna_properties, &rna_AnnotationStrokePoint_co};
	srna->identifier = "AnnotationStrokePoint";
	srna->flag = 516;
	srna->name = "Annotation Stroke Point";
	srna->description = "Data point for freehand stroke curve";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnnotationStrokePoint_rna_properties;
};


}  // namespace blender
