
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

#include "rna_movieclip.cc"

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

extern PropertyRNA &rna_MovieClip_filepath;
extern PropertyRNA &rna_MovieClip_tracking;
extern PropertyRNA &rna_MovieClip_proxy;
extern PropertyRNA &rna_MovieClip_use_proxy;
extern PropertyRNA &rna_MovieClip_size;
extern PropertyRNA &rna_MovieClip_display_aspect;
extern PropertyRNA &rna_MovieClip_source;
extern PropertyRNA &rna_MovieClip_use_proxy_custom_directory;
extern PropertyRNA &rna_MovieClip_annotation;
extern PropertyRNA &rna_MovieClip_frame_start;
extern PropertyRNA &rna_MovieClip_frame_offset;
extern PropertyRNA &rna_MovieClip_frame_duration;
extern PropertyRNA &rna_MovieClip_fps;
extern PropertyRNA &rna_MovieClip_colorspace_settings;
extern PropertyRNA &rna_MovieClip_animation_data;

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


extern FunctionRNA *rna_MovieClip_metadata_func;
extern PropertyRNA &rna_MovieClip_metadata_metadata;



extern PropertyRNA &rna_MovieClipProxy_rna_properties;
extern PropertyRNA &rna_MovieClipProxy_rna_type;
extern PropertyRNA &rna_MovieClipProxy_build_25;
extern PropertyRNA &rna_MovieClipProxy_build_50;
extern PropertyRNA &rna_MovieClipProxy_build_75;
extern PropertyRNA &rna_MovieClipProxy_build_100;
extern PropertyRNA &rna_MovieClipProxy_build_undistorted_25;
extern PropertyRNA &rna_MovieClipProxy_build_undistorted_50;
extern PropertyRNA &rna_MovieClipProxy_build_undistorted_75;
extern PropertyRNA &rna_MovieClipProxy_build_undistorted_100;
extern PropertyRNA &rna_MovieClipProxy_quality;
extern PropertyRNA &rna_MovieClipProxy_directory;


extern PropertyRNA &rna_MovieClipUser_rna_properties;
extern PropertyRNA &rna_MovieClipUser_rna_type;
extern PropertyRNA &rna_MovieClipUser_frame_current;
extern PropertyRNA &rna_MovieClipUser_proxy_render_size;
extern PropertyRNA &rna_MovieClipUser_use_render_undistorted;


extern PropertyRNA &rna_MovieClipScopes_rna_properties;
extern PropertyRNA &rna_MovieClipScopes_rna_type;

void MovieClip_filepath_get(PointerRNA *ptr, char *value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

int MovieClip_filepath_length(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return strlen(data->filepath);
}

void MovieClip_filepath_set(PointerRNA *ptr, const char *value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

PointerRNA MovieClip_tracking_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieTracking, &data->tracking);
}

PointerRNA MovieClip_proxy_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieClipProxy, &data->proxy);
}

bool MovieClip_use_proxy_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MovieClip_use_proxy_set(PointerRNA *ptr, bool value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

void MovieClip_size_get(PointerRNA *ptr, int values[2])
{
    PropIntArrayGetFunc fn = rna_MovieClip_size_get;
    fn(ptr, values);
}

void MovieClip_display_aspect_get(PointerRNA *ptr, float values[2])
{
    MovieClip *data = (MovieClip *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->aspx)[i]);
    }
}

void MovieClip_display_aspect_set(PointerRNA *ptr, const float values[2])
{
    MovieClip *data = (MovieClip *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        (&data->aspx)[i] = std::clamp(values[i], 0.1000000015f, FLT_MAX);
    }
}

int MovieClip_source_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->source);
}

bool MovieClip_use_proxy_custom_directory_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void MovieClip_use_proxy_custom_directory_set(PointerRNA *ptr, bool value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

PointerRNA MovieClip_annotation_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Annotation, data->gpd);
}

void MovieClip_annotation_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->gpd) {
        id_us_min((ID *)data->gpd);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->gpd = value.data;
}

int MovieClip_frame_start_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->start_frame);
}

void MovieClip_frame_start_set(PointerRNA *ptr, int value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    data->start_frame = (std::remove_reference_t<decltype(data->start_frame)>)value;
}

int MovieClip_frame_offset_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->frame_offset);
}

void MovieClip_frame_offset_set(PointerRNA *ptr, int value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    data->frame_offset = (std::remove_reference_t<decltype(data->frame_offset)>)value;
}

int MovieClip_frame_duration_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->len);
}

float MovieClip_fps_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_MovieClip_fps_get;
    return fn(ptr);
}

PointerRNA MovieClip_colorspace_settings_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ColorManagedInputColorspaceSettings, &data->colorspace_settings);
}

PointerRNA MovieClip_animation_data_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA MovieClipProxy_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieClipProxy_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieClipProxy_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieClipProxy_rna_properties_get(iter);
    }
}

void MovieClipProxy_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieClipProxy_rna_properties_get(iter);
    }
}

void MovieClipProxy_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieClipProxy_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieClipProxy_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool MovieClipProxy_build_25_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flag) & 1) != 0);
}

void MovieClipProxy_build_25_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) | 1); }
    else { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) & ~uint64_t(1)); }
}

bool MovieClipProxy_build_50_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flag) & 2) != 0);
}

void MovieClipProxy_build_50_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) | 2); }
    else { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) & ~uint64_t(2)); }
}

bool MovieClipProxy_build_75_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flag) & 4) != 0);
}

void MovieClipProxy_build_75_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) | 4); }
    else { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) & ~uint64_t(4)); }
}

bool MovieClipProxy_build_100_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flag) & 8) != 0);
}

void MovieClipProxy_build_100_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) | 8); }
    else { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) & ~uint64_t(8)); }
}

bool MovieClipProxy_build_undistorted_25_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flag) & 16) != 0);
}

void MovieClipProxy_build_undistorted_25_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) | 16); }
    else { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) & ~uint64_t(16)); }
}

bool MovieClipProxy_build_undistorted_50_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flag) & 32) != 0);
}

void MovieClipProxy_build_undistorted_50_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) | 32); }
    else { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) & ~uint64_t(32)); }
}

bool MovieClipProxy_build_undistorted_75_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flag) & 64) != 0);
}

void MovieClipProxy_build_undistorted_75_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) | 64); }
    else { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) & ~uint64_t(64)); }
}

bool MovieClipProxy_build_undistorted_100_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flag) & 128) != 0);
}

void MovieClipProxy_build_undistorted_100_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) | 128); }
    else { data->build_size_flag = std::remove_reference_t<decltype(data->build_size_flag)>(uint64_t(data->build_size_flag) & ~uint64_t(128)); }
}

int MovieClipProxy_quality_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (int)(data->quality);
}

void MovieClipProxy_quality_set(PointerRNA *ptr, int value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    data->quality = (std::remove_reference_t<decltype(data->quality)>)std::clamp(value, 0, 32767);
}

void MovieClipProxy_directory_get(PointerRNA *ptr, char *value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    BLI_assert(strlen(data->dir) < 768);
    strcpy(value, data->dir);
}

int MovieClipProxy_directory_length(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return strlen(data->dir);
}

void MovieClipProxy_directory_set(PointerRNA *ptr, const char *value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    BLI_strncpy(data->dir, value, 768);
}

static PointerRNA MovieClipUser_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieClipUser_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieClipUser_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieClipUser_rna_properties_get(iter);
    }
}

void MovieClipUser_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieClipUser_rna_properties_get(iter);
    }
}

void MovieClipUser_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieClipUser_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieClipUser_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MovieClipUser_frame_current_get(PointerRNA *ptr)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    return (int)(data->framenr);
}

void MovieClipUser_frame_current_set(PointerRNA *ptr, int value)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    data->framenr = (std::remove_reference_t<decltype(data->framenr)>)std::clamp(value, -1048574, 1048574);
}

int MovieClipUser_proxy_render_size_get(PointerRNA *ptr)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    return (int)(data->render_size);
}

void MovieClipUser_proxy_render_size_set(PointerRNA *ptr, int value)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    data->render_size = (std::remove_reference_t<decltype(data->render_size)>)value;
}

bool MovieClipUser_use_render_undistorted_get(PointerRNA *ptr)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    return ((uint64_t(data->render_flag) & 1) != 0);
}

void MovieClipUser_use_render_undistorted_set(PointerRNA *ptr, bool value)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    if (value) { data->render_flag = std::remove_reference_t<decltype(data->render_flag)>(uint64_t(data->render_flag) | 1); }
    else { data->render_flag = std::remove_reference_t<decltype(data->render_flag)>(uint64_t(data->render_flag) & ~uint64_t(1)); }
}

static PointerRNA MovieClipScopes_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieClipScopes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieClipScopes_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieClipScopes_rna_properties_get(iter);
    }
}

void MovieClipScopes_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieClipScopes_rna_properties_get(iter);
    }
}

void MovieClipScopes_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieClipScopes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieClipScopes_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MovieClip_metadata_func(MovieClip *_self)
{
	return rna_MovieClip_metadata_get(_self);
}

static void MovieClip_metadata_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MovieClip *_self;
	PointerRNA metadata;
	char *_data, *_retdata;
	
	_self = (MovieClip *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	metadata = rna_MovieClip_metadata_get(_self);
	*reinterpret_cast<PointerRNA *>(_retdata) = metadata;
}

/* Repeated prototypes to detect errors */

PointerRNA rna_MovieClip_metadata_get(MovieClip *_self);




/* MovieClip */
static StringPropertyRNA rna_MovieClip_filepath_;
PropertyRNA &rna_MovieClip_filepath = reinterpret_cast<PropertyRNA &>(rna_MovieClip_filepath_);

static PointerPropertyRNA rna_MovieClip_tracking_;
PropertyRNA &rna_MovieClip_tracking = reinterpret_cast<PropertyRNA &>(rna_MovieClip_tracking_);

static PointerPropertyRNA rna_MovieClip_proxy_;
PropertyRNA &rna_MovieClip_proxy = reinterpret_cast<PropertyRNA &>(rna_MovieClip_proxy_);

static BoolPropertyRNA rna_MovieClip_use_proxy_;
PropertyRNA &rna_MovieClip_use_proxy = reinterpret_cast<PropertyRNA &>(rna_MovieClip_use_proxy_);

static IntPropertyRNA rna_MovieClip_size_;
PropertyRNA &rna_MovieClip_size = reinterpret_cast<PropertyRNA &>(rna_MovieClip_size_);

static FloatPropertyRNA rna_MovieClip_display_aspect_;
PropertyRNA &rna_MovieClip_display_aspect = reinterpret_cast<PropertyRNA &>(rna_MovieClip_display_aspect_);

static EnumPropertyRNA rna_MovieClip_source_;
PropertyRNA &rna_MovieClip_source = reinterpret_cast<PropertyRNA &>(rna_MovieClip_source_);

static BoolPropertyRNA rna_MovieClip_use_proxy_custom_directory_;
PropertyRNA &rna_MovieClip_use_proxy_custom_directory = reinterpret_cast<PropertyRNA &>(rna_MovieClip_use_proxy_custom_directory_);

static PointerPropertyRNA rna_MovieClip_annotation_;
PropertyRNA &rna_MovieClip_annotation = reinterpret_cast<PropertyRNA &>(rna_MovieClip_annotation_);

static IntPropertyRNA rna_MovieClip_frame_start_;
PropertyRNA &rna_MovieClip_frame_start = reinterpret_cast<PropertyRNA &>(rna_MovieClip_frame_start_);

static IntPropertyRNA rna_MovieClip_frame_offset_;
PropertyRNA &rna_MovieClip_frame_offset = reinterpret_cast<PropertyRNA &>(rna_MovieClip_frame_offset_);

static IntPropertyRNA rna_MovieClip_frame_duration_;
PropertyRNA &rna_MovieClip_frame_duration = reinterpret_cast<PropertyRNA &>(rna_MovieClip_frame_duration_);

static FloatPropertyRNA rna_MovieClip_fps_;
PropertyRNA &rna_MovieClip_fps = reinterpret_cast<PropertyRNA &>(rna_MovieClip_fps_);

static PointerPropertyRNA rna_MovieClip_colorspace_settings_;
PropertyRNA &rna_MovieClip_colorspace_settings = reinterpret_cast<PropertyRNA &>(rna_MovieClip_colorspace_settings_);

static PointerPropertyRNA rna_MovieClip_animation_data_;
PropertyRNA &rna_MovieClip_animation_data = reinterpret_cast<PropertyRNA &>(rna_MovieClip_animation_data_);

static PointerPropertyRNA rna_MovieClip_metadata_metadata_;
PropertyRNA &rna_MovieClip_metadata_metadata = reinterpret_cast<PropertyRNA &>(rna_MovieClip_metadata_metadata_);

FunctionRNA *rna_MovieClip_metadata_func;
StructRNA *RNA_MovieClip;
void register_struct_MovieClip(BlenderRNA &brna)
{
	rna_MovieClip_filepath_ = {
		{&rna_MovieClip_tracking, 	nullptr,
		-1, "filepath", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"Filename of the movie or sequence file",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_MovieClip_reload_update, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClip_filepath_get, MovieClip_filepath_length, MovieClip_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_MovieClip_tracking_ = {
		{&rna_MovieClip_proxy, 	&rna_MovieClip_filepath,
		-1, "tracking", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "tracking",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClip_tracking_get, nullptr, nullptr, nullptr,RNA_MovieTracking
	};

	rna_MovieClip_proxy_ = {
		{&rna_MovieClip_use_proxy, 	&rna_MovieClip_tracking,
		-1, "proxy", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "proxy",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClip_proxy_get, nullptr, nullptr, nullptr,RNA_MovieClipProxy
	};

	rna_MovieClip_use_proxy_ = {
		{&rna_MovieClip_size, 	&rna_MovieClip_proxy,
		-1, "use_proxy", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Proxy",
		"Use a preview proxy for this clip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MovieClip_use_proxy_update, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClip_use_proxy_get, MovieClip_use_proxy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static int rna_MovieClip_size_default[2] = {
		0,
		0
	};
	rna_MovieClip_size_ = {
		{&rna_MovieClip_display_aspect, 	&rna_MovieClip_use_proxy,
		-1, "size", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Size",
		"Width and height in pixels, zero when image data cannot be loaded",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MovieClip_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_MovieClip_size_default
	};

	static float rna_MovieClip_display_aspect_default[2] = {
		1.0f,
		1.0f
	};
	rna_MovieClip_display_aspect_ = {
		{&rna_MovieClip_source, 	&rna_MovieClip_size,
		-1, "display_aspect", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Display Aspect",
		"Display Aspect for this clip, does not affect rendering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieClip, aspx), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieClip_display_aspect_get, MovieClip_display_aspect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 5000.0f, 0.1000000015f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 1.0f, rna_MovieClip_display_aspect_default
	};

	static const EnumPropertyItem rna_MovieClip_source_items[3] = {
		{1, "SEQUENCE", 0, "Image Sequence", "Multiple image files, as a sequence"	},
		{2, "MOVIE", 0, "Movie File", "Movie file"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieClip_source_ = {
		{&rna_MovieClip_use_proxy_custom_directory, 	&rna_MovieClip_display_aspect,
		-1, "source", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Source",
		"Where the clip comes from",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieClip, source), RawPropertyType(0), nullptr},
		MovieClip_source_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieClip_source_items, 2, 1
	};

	rna_MovieClip_use_proxy_custom_directory_ = {
		{&rna_MovieClip_annotation, 	&rna_MovieClip_source,
		-1, "use_proxy_custom_directory", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Proxy Custom Directory",
		"Create proxy images in a custom directory (default is movie location)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MovieClip_reload_update, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClip_use_proxy_custom_directory_get, MovieClip_use_proxy_custom_directory_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClip_annotation_ = {
		{&rna_MovieClip_frame_start, 	&rna_MovieClip_use_proxy_custom_directory,
		-1, "annotation", 8388801, 0, 0, 64, 0, PropertyPathTemplateType(0), "Annotation",
		"Annotation data for this movie clip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClip_annotation_get, MovieClip_annotation_set, nullptr, rna_GPencil_datablocks_annotations_poll,RNA_Annotation
	};

	rna_MovieClip_frame_start_ = {
		{&rna_MovieClip_frame_offset, 	&rna_MovieClip_annotation,
		-1, "frame_start", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Start Frame",
		"Global scene frame number at which this movie starts playing (affects all data associated with a clip)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieClip, start_frame), RawPropertyType(0), nullptr},
		MovieClip_frame_start_get, MovieClip_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 1, nullptr
	};

	rna_MovieClip_frame_offset_ = {
		{&rna_MovieClip_frame_duration, 	&rna_MovieClip_frame_start,
		-1, "frame_offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frame Offset",
		"Offset of footage first frame relative to its file name (affects only how footage is loading, does not change data associated with a clip)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieClip, frame_offset), RawPropertyType(0), nullptr},
		MovieClip_frame_offset_get, MovieClip_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClip_frame_duration_ = {
		{&rna_MovieClip_fps, 	&rna_MovieClip_frame_offset,
		-1, "frame_duration", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Duration",
		"Detected duration of movie clip in frames",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieClip, len), RawPropertyType(0), nullptr},
		MovieClip_frame_duration_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClip_fps_ = {
		{&rna_MovieClip_colorspace_settings, 	&rna_MovieClip_frame_duration,
		-1, "fps", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame Rate",
		"Detected frame rate of the movie clip in frames per second",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClip_fps_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieClip_colorspace_settings_ = {
		{&rna_MovieClip_animation_data, 	&rna_MovieClip_fps,
		-1, "colorspace_settings", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Space Settings",
		"Input color space settings",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClip_colorspace_settings_get, nullptr, nullptr, nullptr,RNA_ColorManagedInputColorspaceSettings
	};

	rna_MovieClip_animation_data_ = {
		{nullptr, 	&rna_MovieClip_colorspace_settings,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		MovieClip_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_MovieClip;
	srna->cont.properties = {&rna_MovieClip_filepath, &rna_MovieClip_animation_data};
	srna->identifier = "MovieClip";
	srna->flag = 519;
	srna->name = "MovieClip";
	srna->description = "MovieClip data-block referencing an external movie file";
	srna->translation_context = "*";
	srna->icon = 150;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	rna_MovieClip_metadata_metadata_ = {
		{nullptr, 	nullptr,
		-1, "metadata", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"Dict-like object containing the metadata",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_IDPropertyWrapPtr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieClip_metadata_metadata, &rna_MovieClip_metadata_metadata};
		func->identifier = "metadata";
		func->description = "Retrieve metadata of the movie file";
		func->call = MovieClip_metadata_call;
		func->c_ret = &rna_MovieClip_metadata_metadata;
		rna_MovieClip_metadata_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Movie Clip Proxy */
static CollectionPropertyRNA rna_MovieClipProxy_rna_properties_;
PropertyRNA &rna_MovieClipProxy_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_rna_properties_);

static PointerPropertyRNA rna_MovieClipProxy_rna_type_;
PropertyRNA &rna_MovieClipProxy_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_rna_type_);

static BoolPropertyRNA rna_MovieClipProxy_build_25_;
PropertyRNA &rna_MovieClipProxy_build_25 = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_build_25_);

static BoolPropertyRNA rna_MovieClipProxy_build_50_;
PropertyRNA &rna_MovieClipProxy_build_50 = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_build_50_);

static BoolPropertyRNA rna_MovieClipProxy_build_75_;
PropertyRNA &rna_MovieClipProxy_build_75 = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_build_75_);

static BoolPropertyRNA rna_MovieClipProxy_build_100_;
PropertyRNA &rna_MovieClipProxy_build_100 = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_build_100_);

static BoolPropertyRNA rna_MovieClipProxy_build_undistorted_25_;
PropertyRNA &rna_MovieClipProxy_build_undistorted_25 = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_build_undistorted_25_);

static BoolPropertyRNA rna_MovieClipProxy_build_undistorted_50_;
PropertyRNA &rna_MovieClipProxy_build_undistorted_50 = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_build_undistorted_50_);

static BoolPropertyRNA rna_MovieClipProxy_build_undistorted_75_;
PropertyRNA &rna_MovieClipProxy_build_undistorted_75 = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_build_undistorted_75_);

static BoolPropertyRNA rna_MovieClipProxy_build_undistorted_100_;
PropertyRNA &rna_MovieClipProxy_build_undistorted_100 = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_build_undistorted_100_);

static IntPropertyRNA rna_MovieClipProxy_quality_;
PropertyRNA &rna_MovieClipProxy_quality = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_quality_);

static StringPropertyRNA rna_MovieClipProxy_directory_;
PropertyRNA &rna_MovieClipProxy_directory = reinterpret_cast<PropertyRNA &>(rna_MovieClipProxy_directory_);

StructRNA *RNA_MovieClipProxy;
void register_struct_MovieClipProxy(BlenderRNA &brna)
{
	rna_MovieClipProxy_rna_properties_ = {
		{&rna_MovieClipProxy_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_rna_properties_begin, MovieClipProxy_rna_properties_next, MovieClipProxy_rna_properties_end, MovieClipProxy_rna_properties_get, nullptr, nullptr, MovieClipProxy_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieClipProxy_rna_type_ = {
		{&rna_MovieClipProxy_build_25, 	&rna_MovieClipProxy_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieClipProxy_build_25_ = {
		{&rna_MovieClipProxy_build_50, 	&rna_MovieClipProxy_rna_type,
		-1, "build_25", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "25%",
		"Build proxy resolution 25% of the original footage dimension",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_build_25_get, MovieClipProxy_build_25_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_MovieClipProxy_build_50_ = {
		{&rna_MovieClipProxy_build_75, 	&rna_MovieClipProxy_build_25,
		-1, "build_50", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "50%",
		"Build proxy resolution 50% of the original footage dimension",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_build_50_get, MovieClipProxy_build_50_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipProxy_build_75_ = {
		{&rna_MovieClipProxy_build_100, 	&rna_MovieClipProxy_build_50,
		-1, "build_75", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "75%",
		"Build proxy resolution 75% of the original footage dimension",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_build_75_get, MovieClipProxy_build_75_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipProxy_build_100_ = {
		{&rna_MovieClipProxy_build_undistorted_25, 	&rna_MovieClipProxy_build_75,
		-1, "build_100", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "100%",
		"Build proxy resolution 100% of the original footage dimension",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_build_100_get, MovieClipProxy_build_100_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipProxy_build_undistorted_25_ = {
		{&rna_MovieClipProxy_build_undistorted_50, 	&rna_MovieClipProxy_build_100,
		-1, "build_undistorted_25", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "25%",
		"Build proxy resolution 25% of the original undistorted footage dimension",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_build_undistorted_25_get, MovieClipProxy_build_undistorted_25_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipProxy_build_undistorted_50_ = {
		{&rna_MovieClipProxy_build_undistorted_75, 	&rna_MovieClipProxy_build_undistorted_25,
		-1, "build_undistorted_50", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "50%",
		"Build proxy resolution 50% of the original undistorted footage dimension",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_build_undistorted_50_get, MovieClipProxy_build_undistorted_50_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipProxy_build_undistorted_75_ = {
		{&rna_MovieClipProxy_build_undistorted_100, 	&rna_MovieClipProxy_build_undistorted_50,
		-1, "build_undistorted_75", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "75%",
		"Build proxy resolution 75% of the original undistorted footage dimension",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_build_undistorted_75_get, MovieClipProxy_build_undistorted_75_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipProxy_build_undistorted_100_ = {
		{&rna_MovieClipProxy_quality, 	&rna_MovieClipProxy_build_undistorted_75,
		-1, "build_undistorted_100", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "100%",
		"Build proxy resolution 100% of the original undistorted footage dimension",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_build_undistorted_100_get, MovieClipProxy_build_undistorted_100_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipProxy_quality_ = {
		{&rna_MovieClipProxy_directory, 	&rna_MovieClipProxy_build_undistorted_100,
		-1, "quality", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Quality",
		"JPEG quality of proxy images",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieClipProxy, quality), RawPropertyType(1), nullptr},
		MovieClipProxy_quality_get, MovieClipProxy_quality_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 0, 32767, 1, nullptr, nullptr, 50, nullptr
	};

	rna_MovieClipProxy_directory_ = {
		{nullptr, 	&rna_MovieClipProxy_quality,
		-1, "directory", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "Directory",
		"Location to store the proxy files",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_DIRPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {768, 0, 0}, 0,
		rna_MovieClip_reload_update, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipProxy_directory_get, MovieClipProxy_directory_length, MovieClipProxy_directory_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 768, ""
	};

	StructRNA *srna = RNA_MovieClipProxy;
	srna->cont.properties = {&rna_MovieClipProxy_rna_properties, &rna_MovieClipProxy_directory};
	srna->identifier = "MovieClipProxy";
	srna->flag = 516;
	srna->name = "Movie Clip Proxy";
	srna->description = "Proxy parameters for a movie clip";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieClipProxy_rna_properties;
};

/* Movie Clip User */
static CollectionPropertyRNA rna_MovieClipUser_rna_properties_;
PropertyRNA &rna_MovieClipUser_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieClipUser_rna_properties_);

static PointerPropertyRNA rna_MovieClipUser_rna_type_;
PropertyRNA &rna_MovieClipUser_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieClipUser_rna_type_);

static IntPropertyRNA rna_MovieClipUser_frame_current_;
PropertyRNA &rna_MovieClipUser_frame_current = reinterpret_cast<PropertyRNA &>(rna_MovieClipUser_frame_current_);

static EnumPropertyRNA rna_MovieClipUser_proxy_render_size_;
PropertyRNA &rna_MovieClipUser_proxy_render_size = reinterpret_cast<PropertyRNA &>(rna_MovieClipUser_proxy_render_size_);

static BoolPropertyRNA rna_MovieClipUser_use_render_undistorted_;
PropertyRNA &rna_MovieClipUser_use_render_undistorted = reinterpret_cast<PropertyRNA &>(rna_MovieClipUser_use_render_undistorted_);

StructRNA *RNA_MovieClipUser;
void register_struct_MovieClipUser(BlenderRNA &brna)
{
	rna_MovieClipUser_rna_properties_ = {
		{&rna_MovieClipUser_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipUser_rna_properties_begin, MovieClipUser_rna_properties_next, MovieClipUser_rna_properties_end, MovieClipUser_rna_properties_get, nullptr, nullptr, MovieClipUser_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieClipUser_rna_type_ = {
		{&rna_MovieClipUser_frame_current, 	&rna_MovieClipUser_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipUser_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieClipUser_frame_current_ = {
		{&rna_MovieClipUser_proxy_render_size, 	&rna_MovieClipUser_rna_type,
		-1, "frame_current", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Current Frame",
		"Current frame number in movie or image sequence",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieClipUser, framenr), RawPropertyType(0), nullptr},
		MovieClipUser_frame_current_get, MovieClipUser_frame_current_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_MovieClipUser_proxy_render_size_items[6] = {
		{1, "PROXY_25", 0, "25%", ""	},
		{2, "PROXY_50", 0, "50%", ""	},
		{3, "PROXY_75", 0, "75%", ""	},
		{4, "PROXY_100", 0, "100%", ""	},
		{0, "FULL", 0, "None, full render", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieClipUser_proxy_render_size_ = {
		{&rna_MovieClipUser_use_render_undistorted, 	&rna_MovieClipUser_frame_current,
		-1, "proxy_render_size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Proxy Render Size",
		"Display preview using full resolution or different proxy resolutions",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MovieClipUser_proxy_render_settings_update, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieClipUser, render_size), RawPropertyType(1), nullptr},
		MovieClipUser_proxy_render_size_get, MovieClipUser_proxy_render_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieClipUser_proxy_render_size_items, 5, 0
	};

	rna_MovieClipUser_use_render_undistorted_ = {
		{nullptr, 	&rna_MovieClipUser_proxy_render_size,
		-1, "use_render_undistorted", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Render Undistorted",
		"Render preview using undistorted proxy",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MovieClipUser_proxy_render_settings_update, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipUser_use_render_undistorted_get, MovieClipUser_use_render_undistorted_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MovieClipUser;
	srna->cont.properties = {&rna_MovieClipUser_rna_properties, &rna_MovieClipUser_use_render_undistorted};
	srna->identifier = "MovieClipUser";
	srna->flag = 516;
	srna->name = "Movie Clip User";
	srna->description = "Parameters defining how a MovieClip data-block is used by another data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieClipUser_rna_properties;
	srna->path = rna_MovieClipUser_path;
};

/* MovieClipScopes */
static CollectionPropertyRNA rna_MovieClipScopes_rna_properties_;
PropertyRNA &rna_MovieClipScopes_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieClipScopes_rna_properties_);

static PointerPropertyRNA rna_MovieClipScopes_rna_type_;
PropertyRNA &rna_MovieClipScopes_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieClipScopes_rna_type_);

StructRNA *RNA_MovieClipScopes;
void register_struct_MovieClipScopes(BlenderRNA &brna)
{
	rna_MovieClipScopes_rna_properties_ = {
		{&rna_MovieClipScopes_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipScopes_rna_properties_begin, MovieClipScopes_rna_properties_next, MovieClipScopes_rna_properties_end, MovieClipScopes_rna_properties_get, nullptr, nullptr, MovieClipScopes_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieClipScopes_rna_type_ = {
		{nullptr, 	&rna_MovieClipScopes_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipScopes_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_MovieClipScopes;
	srna->cont.properties = {&rna_MovieClipScopes_rna_properties, &rna_MovieClipScopes_rna_type};
	srna->identifier = "MovieClipScopes";
	srna->flag = 516;
	srna->name = "MovieClipScopes";
	srna->description = "Scopes for statistical view of a movie clip";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieClipScopes_rna_properties;
};


}  // namespace blender
