
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

#include "rna_cachefile.cc"

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

extern PropertyRNA &rna_CacheFile_filepath;
extern PropertyRNA &rna_CacheFile_is_sequence;
extern PropertyRNA &rna_CacheFile_override_frame;
extern PropertyRNA &rna_CacheFile_frame;
extern PropertyRNA &rna_CacheFile_frame_offset;
extern PropertyRNA &rna_CacheFile_forward_axis;
extern PropertyRNA &rna_CacheFile_up_axis;
extern PropertyRNA &rna_CacheFile_scale;
extern PropertyRNA &rna_CacheFile_object_paths;
extern PropertyRNA &rna_CacheFile_velocity_name;
extern PropertyRNA &rna_CacheFile_velocity_unit;
extern PropertyRNA &rna_CacheFile_layers;
extern PropertyRNA &rna_CacheFile_active_index;
extern PropertyRNA &rna_CacheFile_animation_data;

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



extern PropertyRNA &rna_CacheFileLayers_rna_properties;
extern PropertyRNA &rna_CacheFileLayers_rna_type;
extern PropertyRNA &rna_CacheFileLayers_active;

extern FunctionRNA *rna_CacheFileLayers_new_func;
extern PropertyRNA &rna_CacheFileLayers_new_filepath;
extern PropertyRNA &rna_CacheFileLayers_new_layer;

extern FunctionRNA *rna_CacheFileLayers_remove_func;
extern PropertyRNA &rna_CacheFileLayers_remove_layer;



extern PropertyRNA &rna_CacheObjectPaths_rna_properties;
extern PropertyRNA &rna_CacheObjectPaths_rna_type;


extern PropertyRNA &rna_CacheObjectPath_rna_properties;
extern PropertyRNA &rna_CacheObjectPath_rna_type;
extern PropertyRNA &rna_CacheObjectPath_path;


extern PropertyRNA &rna_CacheFileLayer_rna_properties;
extern PropertyRNA &rna_CacheFileLayer_rna_type;
extern PropertyRNA &rna_CacheFileLayer_filepath;
extern PropertyRNA &rna_CacheFileLayer_hide_layer;

void CacheFile_filepath_get(PointerRNA *ptr, char *value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

int CacheFile_filepath_length(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return strlen(data->filepath);
}

void CacheFile_filepath_set(PointerRNA *ptr, const char *value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

bool CacheFile_is_sequence_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (bool)(data->is_sequence);
}

void CacheFile_is_sequence_set(PointerRNA *ptr, bool value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    data->is_sequence = (std::remove_reference_t<decltype(data->is_sequence)>)value;
}

bool CacheFile_override_frame_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (bool)(data->override_frame);
}

void CacheFile_override_frame_set(PointerRNA *ptr, bool value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    data->override_frame = (std::remove_reference_t<decltype(data->override_frame)>)value;
}

float CacheFile_frame_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (float)(data->frame);
}

void CacheFile_frame_set(PointerRNA *ptr, float value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    data->frame = (std::remove_reference_t<decltype(data->frame)>)std::clamp(value, -1048574.0f, 1048574.0f);
}

float CacheFile_frame_offset_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (float)(data->frame_offset);
}

void CacheFile_frame_offset_set(PointerRNA *ptr, float value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    data->frame_offset = (std::remove_reference_t<decltype(data->frame_offset)>)std::clamp(value, -1048574.0f, 1048574.0f);
}

int CacheFile_forward_axis_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (int)(data->forward_axis);
}

void CacheFile_forward_axis_set(PointerRNA *ptr, int value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    data->forward_axis = (std::remove_reference_t<decltype(data->forward_axis)>)value;
}

int CacheFile_up_axis_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (int)(data->up_axis);
}

void CacheFile_up_axis_set(PointerRNA *ptr, int value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    data->up_axis = (std::remove_reference_t<decltype(data->up_axis)>)value;
}

float CacheFile_scale_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (float)(data->scale);
}

void CacheFile_scale_set(PointerRNA *ptr, float value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    data->scale = (std::remove_reference_t<decltype(data->scale)>)std::clamp(value, 0.0001000000f, 1000.0f);
}

static PointerRNA CacheFile_object_paths_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CacheObjectPath, rna_iterator_listbase_get(iter));
}

void CacheFile_object_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CacheFile_object_paths;

    PropCollectionBeginFunc fn = rna_CacheFile_object_paths_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CacheFile_object_paths_get(iter);
    }
}

void CacheFile_object_paths_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CacheFile_object_paths_get(iter);
    }
}

void CacheFile_object_paths_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CacheFile_object_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    CacheFile_object_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = CacheFile_object_paths_get(&iter); }
    }

    CacheFile_object_paths_end(&iter);

    return found;
}

int CacheObjectPath_path_length(PointerRNA *);
void CacheObjectPath_path_get(PointerRNA *, char *);

bool CacheFile_object_paths_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    CacheFile_object_paths_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = CacheObjectPath_path_length(&iter.ptr);
            if (namelen < 1024) {
                CacheObjectPath_path_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                CacheObjectPath_path_get(&iter.ptr, name);
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
        CacheFile_object_paths_next(&iter);
    }
    CacheFile_object_paths_end(&iter);

    return found;
}

void CacheFile_velocity_name_get(PointerRNA *ptr, char *value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    BLI_assert(strlen(data->velocity_name) < 64);
    strcpy(value, data->velocity_name);
}

int CacheFile_velocity_name_length(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return strlen(data->velocity_name);
}

void CacheFile_velocity_name_set(PointerRNA *ptr, const char *value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    BLI_strncpy_utf8(data->velocity_name, value, 64);
}

int CacheFile_velocity_unit_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (int)(data->velocity_unit);
}

void CacheFile_velocity_unit_set(PointerRNA *ptr, int value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    data->velocity_unit = (std::remove_reference_t<decltype(data->velocity_unit)>)value;
}

static PointerRNA CacheFile_layers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CacheFileLayer, rna_iterator_listbase_get(iter));
}

void CacheFile_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CacheFile_layers;

    rna_iterator_listbase_begin(iter, ptr, &data->layers, nullptr);

    if (iter->valid) {
        iter->ptr = CacheFile_layers_get(iter);
    }
}

void CacheFile_layers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CacheFile_layers_get(iter);
    }
}

void CacheFile_layers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CacheFile_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    CacheFile_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = CacheFile_layers_get(&iter); }
    }

    CacheFile_layers_end(&iter);

    return found;
}

int CacheFile_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_CacheFile_active_layer_index_get;
    return fn(ptr);
}

void CacheFile_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_CacheFile_active_layer_index_set;
    fn(ptr, value);
}

PointerRNA CacheFile_animation_data_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA CacheFileLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CacheFileLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CacheFileLayers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CacheFileLayers_rna_properties_get(iter);
    }
}

void CacheFileLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CacheFileLayers_rna_properties_get(iter);
    }
}

void CacheFileLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CacheFileLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CacheFileLayers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA CacheFileLayers_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_CacheFile_active_layer_get;
    return fn(ptr);
}

void CacheFileLayers_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_CacheFile_active_layer_set;
    fn(ptr, value, reports);
}

static PointerRNA CacheObjectPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CacheObjectPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CacheObjectPaths_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CacheObjectPaths_rna_properties_get(iter);
    }
}

void CacheObjectPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CacheObjectPaths_rna_properties_get(iter);
    }
}

void CacheObjectPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CacheObjectPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CacheObjectPaths_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA CacheObjectPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CacheObjectPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CacheObjectPath_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CacheObjectPath_rna_properties_get(iter);
    }
}

void CacheObjectPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CacheObjectPath_rna_properties_get(iter);
    }
}

void CacheObjectPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CacheObjectPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CacheObjectPath_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void CacheObjectPath_path_get(PointerRNA *ptr, char *value)
{
    CacheObjectPath *data = (CacheObjectPath *)(ptr->data);
    BLI_assert(strlen(data->path) < 4096);
    strcpy(value, data->path);
}

int CacheObjectPath_path_length(PointerRNA *ptr)
{
    CacheObjectPath *data = (CacheObjectPath *)(ptr->data);
    return strlen(data->path);
}

void CacheObjectPath_path_set(PointerRNA *ptr, const char *value)
{
    CacheObjectPath *data = (CacheObjectPath *)(ptr->data);
    BLI_strncpy_utf8(data->path, value, 4096);
}

static PointerRNA CacheFileLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CacheFileLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CacheFileLayer_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CacheFileLayer_rna_properties_get(iter);
    }
}

void CacheFileLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CacheFileLayer_rna_properties_get(iter);
    }
}

void CacheFileLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CacheFileLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CacheFileLayer_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void CacheFileLayer_filepath_get(PointerRNA *ptr, char *value)
{
    CacheFileLayer *data = (CacheFileLayer *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

int CacheFileLayer_filepath_length(PointerRNA *ptr)
{
    CacheFileLayer *data = (CacheFileLayer *)(ptr->data);
    return strlen(data->filepath);
}

void CacheFileLayer_filepath_set(PointerRNA *ptr, const char *value)
{
    CacheFileLayer *data = (CacheFileLayer *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

bool CacheFileLayer_hide_layer_get(PointerRNA *ptr)
{
    CacheFileLayer *data = (CacheFileLayer *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CacheFileLayer_hide_layer_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_CacheFileLayer_hidden_flag_set;
    fn(ptr, value);
}


CacheFileLayer *CacheFileLayers_new_func(CacheFile *_self, bContext *C, ReportList *reports, const char * filepath)
{
	return rna_CacheFile_layer_new(_self, C, reports, filepath);
}

static void CacheFileLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CacheFile *_self;
	const char * filepath;
	CacheFileLayer *layer;
	char *_data, *_retdata;
	
	_self = (CacheFile *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_CacheFile_layer_new(_self, C, reports, filepath);
	*((CacheFileLayer **)_retdata) = layer;
}

void CacheFileLayers_remove_func(CacheFile *_self, bContext *C, PointerRNA *layer)
{
	rna_CacheFile_layer_remove(_self, C, layer);
}

static void CacheFileLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CacheFile *_self;
	PointerRNA *layer;
	char *_data;
	
	_self = (CacheFile *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((PointerRNA **)_data);
	
	rna_CacheFile_layer_remove(_self, C, layer);
}

/* Repeated prototypes to detect errors */

CacheFileLayer *rna_CacheFile_layer_new(CacheFile *_self, bContext *C, ReportList *reports, const char * filepath);
void rna_CacheFile_layer_remove(CacheFile *_self, bContext *C, PointerRNA *layer);




/* CacheFile */
static StringPropertyRNA rna_CacheFile_filepath_;
PropertyRNA &rna_CacheFile_filepath = reinterpret_cast<PropertyRNA &>(rna_CacheFile_filepath_);

static BoolPropertyRNA rna_CacheFile_is_sequence_;
PropertyRNA &rna_CacheFile_is_sequence = reinterpret_cast<PropertyRNA &>(rna_CacheFile_is_sequence_);

static BoolPropertyRNA rna_CacheFile_override_frame_;
PropertyRNA &rna_CacheFile_override_frame = reinterpret_cast<PropertyRNA &>(rna_CacheFile_override_frame_);

static FloatPropertyRNA rna_CacheFile_frame_;
PropertyRNA &rna_CacheFile_frame = reinterpret_cast<PropertyRNA &>(rna_CacheFile_frame_);

static FloatPropertyRNA rna_CacheFile_frame_offset_;
PropertyRNA &rna_CacheFile_frame_offset = reinterpret_cast<PropertyRNA &>(rna_CacheFile_frame_offset_);

static EnumPropertyRNA rna_CacheFile_forward_axis_;
PropertyRNA &rna_CacheFile_forward_axis = reinterpret_cast<PropertyRNA &>(rna_CacheFile_forward_axis_);

static EnumPropertyRNA rna_CacheFile_up_axis_;
PropertyRNA &rna_CacheFile_up_axis = reinterpret_cast<PropertyRNA &>(rna_CacheFile_up_axis_);

static FloatPropertyRNA rna_CacheFile_scale_;
PropertyRNA &rna_CacheFile_scale = reinterpret_cast<PropertyRNA &>(rna_CacheFile_scale_);

static CollectionPropertyRNA rna_CacheFile_object_paths_;
PropertyRNA &rna_CacheFile_object_paths = reinterpret_cast<PropertyRNA &>(rna_CacheFile_object_paths_);

static StringPropertyRNA rna_CacheFile_velocity_name_;
PropertyRNA &rna_CacheFile_velocity_name = reinterpret_cast<PropertyRNA &>(rna_CacheFile_velocity_name_);

static EnumPropertyRNA rna_CacheFile_velocity_unit_;
PropertyRNA &rna_CacheFile_velocity_unit = reinterpret_cast<PropertyRNA &>(rna_CacheFile_velocity_unit_);

static CollectionPropertyRNA rna_CacheFile_layers_;
PropertyRNA &rna_CacheFile_layers = reinterpret_cast<PropertyRNA &>(rna_CacheFile_layers_);

static IntPropertyRNA rna_CacheFile_active_index_;
PropertyRNA &rna_CacheFile_active_index = reinterpret_cast<PropertyRNA &>(rna_CacheFile_active_index_);

static PointerPropertyRNA rna_CacheFile_animation_data_;
PropertyRNA &rna_CacheFile_animation_data = reinterpret_cast<PropertyRNA &>(rna_CacheFile_animation_data_);

StructRNA *RNA_CacheFile;
void register_struct_CacheFile(BlenderRNA &brna)
{
	rna_CacheFile_filepath_ = {
		{&rna_CacheFile_is_sequence, 	nullptr,
		-1, "filepath", 294913, 1, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"Path to external displacements file",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_CacheFile_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheFile_filepath_get, CacheFile_filepath_length, CacheFile_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_CacheFile_is_sequence_ = {
		{&rna_CacheFile_override_frame, 	&rna_CacheFile_filepath,
		-1, "is_sequence", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Sequence",
		"Whether the cache is separated in a series of files",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CacheFile_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CacheFile, is_sequence), RawPropertyType(3), nullptr},
		CacheFile_is_sequence_get, CacheFile_is_sequence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CacheFile_override_frame_ = {
		{&rna_CacheFile_frame, 	&rna_CacheFile_is_sequence,
		-1, "override_frame", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Override Frame",
		"Whether to use a custom frame for looking up data in the cache file, instead of using the current scene frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CacheFile_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CacheFile, override_frame), RawPropertyType(3), nullptr},
		CacheFile_override_frame_get, CacheFile_override_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CacheFile_frame_ = {
		{&rna_CacheFile_frame_offset, 	&rna_CacheFile_override_frame,
		-1, "frame", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Frame",
		"The time to use for looking up the data in the cache file, or to determine which file to use in a file sequence",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CacheFile_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CacheFile, frame), RawPropertyType(5), nullptr},
		CacheFile_frame_get, CacheFile_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CacheFile_frame_offset_ = {
		{&rna_CacheFile_forward_axis, 	&rna_CacheFile_frame,
		-1, "frame_offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Frame Offset",
		"Subtracted from the current frame to use for looking up the data in the cache file, or to determine which file to use in a file sequence",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CacheFile_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CacheFile, frame_offset), RawPropertyType(5), nullptr},
		CacheFile_frame_offset_get, CacheFile_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CacheFile_forward_axis_ = {
		{&rna_CacheFile_up_axis, 	&rna_CacheFile_frame_offset,
		-1, "forward_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Forward",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CacheFile_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CacheFile, forward_axis), RawPropertyType(2), nullptr},
		CacheFile_forward_axis_get, CacheFile_forward_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 0
	};

	rna_CacheFile_up_axis_ = {
		{&rna_CacheFile_scale, 	&rna_CacheFile_forward_axis,
		-1, "up_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Up",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CacheFile_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CacheFile, up_axis), RawPropertyType(2), nullptr},
		CacheFile_up_axis_get, CacheFile_up_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 0
	};

	rna_CacheFile_scale_ = {
		{&rna_CacheFile_object_paths, 	&rna_CacheFile_up_axis,
		-1, "scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Value by which to enlarge or shrink the object with respect to the world\'s origin (only applicable through a Transform Cache constraint)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CacheFile_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CacheFile, scale), RawPropertyType(5), nullptr},
		CacheFile_scale_get, CacheFile_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1000.0f, 0.0001000000f, 1000.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_CacheFile_object_paths_ = {
		{&rna_CacheFile_velocity_name, 	&rna_CacheFile_scale,
		-1, "object_paths", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object Paths",
		"Paths of the objects inside the Alembic archive",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_CacheObjectPaths},
		CacheFile_object_paths_begin, CacheFile_object_paths_next, CacheFile_object_paths_end, CacheFile_object_paths_get, nullptr, CacheFile_object_paths_lookup_int, CacheFile_object_paths_lookup_string, nullptr, RNA_CacheObjectPath
	};

	rna_CacheFile_velocity_name_ = {
		{&rna_CacheFile_velocity_unit, 	&rna_CacheFile_object_paths,
		-1, "velocity_name", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Velocity Attribute",
		"Name of the Alembic attribute used for generating motion blur data",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_CacheFile_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheFile_velocity_name_get, CacheFile_velocity_name_length, CacheFile_velocity_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_CacheFile_velocity_unit_ = {
		{&rna_CacheFile_layers, 	&rna_CacheFile_velocity_name,
		-1, "velocity_unit", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Velocity Unit",
		"Define how the velocity vectors are interpreted with regard to time, \'frame\' means the delta time is 1 frame, \'second\' means the delta time is 1 / FPS",
		0, "Unit",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CacheFile_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CacheFile, velocity_unit), RawPropertyType(2), nullptr},
		CacheFile_velocity_unit_get, CacheFile_velocity_unit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_velocity_unit_items, 2, 0
	};

	rna_CacheFile_layers_ = {
		{&rna_CacheFile_active_index, 	&rna_CacheFile_velocity_unit,
		-1, "layers", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cache Layers",
		"Layers of the cache",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_CacheFileLayers},
		CacheFile_layers_begin, CacheFile_layers_next, CacheFile_layers_end, CacheFile_layers_get, nullptr, CacheFile_layers_lookup_int, nullptr, nullptr, RNA_CacheFileLayer
	};

	rna_CacheFile_active_index_ = {
		{&rna_CacheFile_animation_data, 	&rna_CacheFile_layers,
		-1, "active_index", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "active_index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_CacheObjectPaths},
		CacheFile_active_index_get, CacheFile_active_index_set, nullptr, nullptr, rna_CacheFile_active_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_CacheFile_animation_data_ = {
		{nullptr, 	&rna_CacheFile_active_index,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		CacheFile_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_CacheFile;
	srna->cont.properties = {&rna_CacheFile_filepath, &rna_CacheFile_animation_data};
	srna->identifier = "CacheFile";
	srna->flag = 519;
	srna->name = "CacheFile";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 208;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Cache Layers */
static CollectionPropertyRNA rna_CacheFileLayers_rna_properties_;
PropertyRNA &rna_CacheFileLayers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CacheFileLayers_rna_properties_);

static PointerPropertyRNA rna_CacheFileLayers_rna_type_;
PropertyRNA &rna_CacheFileLayers_rna_type = reinterpret_cast<PropertyRNA &>(rna_CacheFileLayers_rna_type_);

static PointerPropertyRNA rna_CacheFileLayers_active_;
PropertyRNA &rna_CacheFileLayers_active = reinterpret_cast<PropertyRNA &>(rna_CacheFileLayers_active_);

static StringPropertyRNA rna_CacheFileLayers_new_filepath_;
PropertyRNA &rna_CacheFileLayers_new_filepath = reinterpret_cast<PropertyRNA &>(rna_CacheFileLayers_new_filepath_);

static PointerPropertyRNA rna_CacheFileLayers_new_layer_;
PropertyRNA &rna_CacheFileLayers_new_layer = reinterpret_cast<PropertyRNA &>(rna_CacheFileLayers_new_layer_);

FunctionRNA *rna_CacheFileLayers_new_func;
static PointerPropertyRNA rna_CacheFileLayers_remove_layer_;
PropertyRNA &rna_CacheFileLayers_remove_layer = reinterpret_cast<PropertyRNA &>(rna_CacheFileLayers_remove_layer_);

FunctionRNA *rna_CacheFileLayers_remove_func;
StructRNA *RNA_CacheFileLayers;
void register_struct_CacheFileLayers(BlenderRNA &brna)
{
	rna_CacheFileLayers_rna_properties_ = {
		{&rna_CacheFileLayers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheFileLayers_rna_properties_begin, CacheFileLayers_rna_properties_next, CacheFileLayers_rna_properties_end, CacheFileLayers_rna_properties_get, nullptr, nullptr, CacheFileLayers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CacheFileLayers_rna_type_ = {
		{&rna_CacheFileLayers_active, 	&rna_CacheFileLayers_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheFileLayers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CacheFileLayers_active_ = {
		{nullptr, 	&rna_CacheFileLayers_rna_type,
		-1, "active", 8388609, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Layer",
		"Active layer of the CacheFile",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheFileLayers_active_get, CacheFileLayers_active_set, nullptr, nullptr,RNA_CacheFileLayer
	};

	StructRNA *srna = RNA_CacheFileLayers;
	srna->cont.properties = {&rna_CacheFileLayers_rna_properties, &rna_CacheFileLayers_active};
	srna->identifier = "CacheFileLayers";
	srna->flag = 516;
	srna->name = "Cache Layers";
	srna->description = "Collection of cache layers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CacheFileLayers_rna_properties;
	{
	rna_CacheFileLayers_new_filepath_ = {
		{&rna_CacheFileLayers_new_layer, 	nullptr,
		-1, "filepath", 262145, 1, 1, 0, 0, PropertyPathTemplateType(0), "",
		"File path to the archive used as a layer",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "File Path"
	};
	rna_CacheFileLayers_new_layer_ = {
		{nullptr, 	&rna_CacheFileLayers_new_filepath,
		-1, "layer", 8388608, 1, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CacheFileLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CacheFileLayers_new_filepath, &rna_CacheFileLayers_new_layer};
		func->identifier = "new";
		func->flag = 24;
		func->description = "Add a new layer";
		func->call = CacheFileLayers_new_call;
		func->c_ret = &rna_CacheFileLayers_new_layer;
		rna_CacheFileLayers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CacheFileLayers_remove_layer_ = {
		{nullptr, 	nullptr,
		-1, "layer", 262144, 1, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Layer to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CacheFileLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CacheFileLayers_remove_layer, &rna_CacheFileLayers_remove_layer};
		func->identifier = "remove";
		func->flag = 8;
		func->description = "Remove an existing layer from the cache file";
		func->call = CacheFileLayers_remove_call;
		rna_CacheFileLayers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Object Paths */
static CollectionPropertyRNA rna_CacheObjectPaths_rna_properties_;
PropertyRNA &rna_CacheObjectPaths_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CacheObjectPaths_rna_properties_);

static PointerPropertyRNA rna_CacheObjectPaths_rna_type_;
PropertyRNA &rna_CacheObjectPaths_rna_type = reinterpret_cast<PropertyRNA &>(rna_CacheObjectPaths_rna_type_);

StructRNA *RNA_CacheObjectPaths;
void register_struct_CacheObjectPaths(BlenderRNA &brna)
{
	rna_CacheObjectPaths_rna_properties_ = {
		{&rna_CacheObjectPaths_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheObjectPaths_rna_properties_begin, CacheObjectPaths_rna_properties_next, CacheObjectPaths_rna_properties_end, CacheObjectPaths_rna_properties_get, nullptr, nullptr, CacheObjectPaths_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CacheObjectPaths_rna_type_ = {
		{nullptr, 	&rna_CacheObjectPaths_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheObjectPaths_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_CacheObjectPaths;
	srna->cont.properties = {&rna_CacheObjectPaths_rna_properties, &rna_CacheObjectPaths_rna_type};
	srna->identifier = "CacheObjectPaths";
	srna->flag = 516;
	srna->name = "Object Paths";
	srna->description = "Collection of object paths";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CacheObjectPaths_rna_properties;
};

/* Object Path */
static CollectionPropertyRNA rna_CacheObjectPath_rna_properties_;
PropertyRNA &rna_CacheObjectPath_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CacheObjectPath_rna_properties_);

static PointerPropertyRNA rna_CacheObjectPath_rna_type_;
PropertyRNA &rna_CacheObjectPath_rna_type = reinterpret_cast<PropertyRNA &>(rna_CacheObjectPath_rna_type_);

static StringPropertyRNA rna_CacheObjectPath_path_;
PropertyRNA &rna_CacheObjectPath_path = reinterpret_cast<PropertyRNA &>(rna_CacheObjectPath_path_);

StructRNA *RNA_CacheObjectPath;
void register_struct_CacheObjectPath(BlenderRNA &brna)
{
	rna_CacheObjectPath_rna_properties_ = {
		{&rna_CacheObjectPath_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheObjectPath_rna_properties_begin, CacheObjectPath_rna_properties_next, CacheObjectPath_rna_properties_end, CacheObjectPath_rna_properties_get, nullptr, nullptr, CacheObjectPath_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CacheObjectPath_rna_type_ = {
		{&rna_CacheObjectPath_path, 	&rna_CacheObjectPath_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheObjectPath_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CacheObjectPath_path_ = {
		{nullptr, 	&rna_CacheObjectPath_rna_type,
		-1, "path", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Path",
		"Object path",
		0, "File browser",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {4096, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheObjectPath_path_get, CacheObjectPath_path_length, CacheObjectPath_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 4096, ""
	};

	StructRNA *srna = RNA_CacheObjectPath;
	srna->cont.properties = {&rna_CacheObjectPath_rna_properties, &rna_CacheObjectPath_path};
	srna->identifier = "CacheObjectPath";
	srna->flag = 516;
	srna->name = "Object Path";
	srna->description = "Path of an object inside of an Alembic archive";
	srna->translation_context = "*";
	srna->icon = 0;
	srna->nameproperty = &rna_CacheObjectPath_path;
	srna->iteratorproperty = &rna_CacheObjectPath_rna_properties;
};

/* Cache Layer */
static CollectionPropertyRNA rna_CacheFileLayer_rna_properties_;
PropertyRNA &rna_CacheFileLayer_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CacheFileLayer_rna_properties_);

static PointerPropertyRNA rna_CacheFileLayer_rna_type_;
PropertyRNA &rna_CacheFileLayer_rna_type = reinterpret_cast<PropertyRNA &>(rna_CacheFileLayer_rna_type_);

static StringPropertyRNA rna_CacheFileLayer_filepath_;
PropertyRNA &rna_CacheFileLayer_filepath = reinterpret_cast<PropertyRNA &>(rna_CacheFileLayer_filepath_);

static BoolPropertyRNA rna_CacheFileLayer_hide_layer_;
PropertyRNA &rna_CacheFileLayer_hide_layer = reinterpret_cast<PropertyRNA &>(rna_CacheFileLayer_hide_layer_);

StructRNA *RNA_CacheFileLayer;
void register_struct_CacheFileLayer(BlenderRNA &brna)
{
	rna_CacheFileLayer_rna_properties_ = {
		{&rna_CacheFileLayer_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheFileLayer_rna_properties_begin, CacheFileLayer_rna_properties_next, CacheFileLayer_rna_properties_end, CacheFileLayer_rna_properties_get, nullptr, nullptr, CacheFileLayer_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CacheFileLayer_rna_type_ = {
		{&rna_CacheFileLayer_filepath, 	&rna_CacheFileLayer_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheFileLayer_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CacheFileLayer_filepath_ = {
		{&rna_CacheFileLayer_hide_layer, 	&rna_CacheFileLayer_rna_type,
		-1, "filepath", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"Path to the archive",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_CacheFileLayer_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheFileLayer_filepath_get, CacheFileLayer_filepath_length, CacheFileLayer_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_CacheFileLayer_hide_layer_ = {
		{nullptr, 	&rna_CacheFileLayer_filepath,
		-1, "hide_layer", 4355, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide Layer",
		"Do not load data from this layer",
		16, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CacheFileLayer_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CacheFileLayer_hide_layer_get, CacheFileLayer_hide_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_CacheFileLayer;
	srna->cont.properties = {&rna_CacheFileLayer_rna_properties, &rna_CacheFileLayer_hide_layer};
	srna->identifier = "CacheFileLayer";
	srna->flag = 516;
	srna->name = "Cache Layer";
	srna->description = "Layer of the cache, used to load or override data from the first the first layer";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CacheFileLayer_rna_properties;
};


}  // namespace blender
