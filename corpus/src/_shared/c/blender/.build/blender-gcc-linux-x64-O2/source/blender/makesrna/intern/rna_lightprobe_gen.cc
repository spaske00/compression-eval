
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

#include "rna_lightprobe.cc"

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

extern PropertyRNA &rna_LightProbe_type;
extern PropertyRNA &rna_LightProbe_clip_start;
extern PropertyRNA &rna_LightProbe_show_clip;
extern PropertyRNA &rna_LightProbe_show_influence;
extern PropertyRNA &rna_LightProbe_influence_distance;
extern PropertyRNA &rna_LightProbe_visibility_buffer_bias;
extern PropertyRNA &rna_LightProbe_visibility_bleed_bias;
extern PropertyRNA &rna_LightProbe_visibility_blur;
extern PropertyRNA &rna_LightProbe_visibility_collection;
extern PropertyRNA &rna_LightProbe_invert_visibility_collection;
extern PropertyRNA &rna_LightProbe_show_data;
extern PropertyRNA &rna_LightProbe_use_data_display;
extern PropertyRNA &rna_LightProbe_data_display_size;
extern PropertyRNA &rna_LightProbe_animation_data;

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



extern PropertyRNA &rna_LightProbe_type;
extern PropertyRNA &rna_LightProbe_clip_start;
extern PropertyRNA &rna_LightProbe_show_clip;
extern PropertyRNA &rna_LightProbe_show_influence;
extern PropertyRNA &rna_LightProbe_influence_distance;
extern PropertyRNA &rna_LightProbe_visibility_buffer_bias;
extern PropertyRNA &rna_LightProbe_visibility_bleed_bias;
extern PropertyRNA &rna_LightProbe_visibility_blur;
extern PropertyRNA &rna_LightProbe_visibility_collection;
extern PropertyRNA &rna_LightProbe_invert_visibility_collection;
extern PropertyRNA &rna_LightProbe_show_data;
extern PropertyRNA &rna_LightProbe_use_data_display;
extern PropertyRNA &rna_LightProbe_data_display_size;
extern PropertyRNA &rna_LightProbe_animation_data;

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

extern PropertyRNA &rna_LightProbePlane_parallax_distance;

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



extern PropertyRNA &rna_LightProbe_type;
extern PropertyRNA &rna_LightProbe_clip_start;
extern PropertyRNA &rna_LightProbe_show_clip;
extern PropertyRNA &rna_LightProbe_show_influence;
extern PropertyRNA &rna_LightProbe_influence_distance;
extern PropertyRNA &rna_LightProbe_visibility_buffer_bias;
extern PropertyRNA &rna_LightProbe_visibility_bleed_bias;
extern PropertyRNA &rna_LightProbe_visibility_blur;
extern PropertyRNA &rna_LightProbe_visibility_collection;
extern PropertyRNA &rna_LightProbe_invert_visibility_collection;
extern PropertyRNA &rna_LightProbe_show_data;
extern PropertyRNA &rna_LightProbe_use_data_display;
extern PropertyRNA &rna_LightProbe_data_display_size;
extern PropertyRNA &rna_LightProbe_animation_data;

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

extern PropertyRNA &rna_LightProbeSphere_influence_type;
extern PropertyRNA &rna_LightProbeSphere_falloff;
extern PropertyRNA &rna_LightProbeSphere_clip_end;
extern PropertyRNA &rna_LightProbeSphere_use_custom_parallax;
extern PropertyRNA &rna_LightProbeSphere_show_parallax;
extern PropertyRNA &rna_LightProbeSphere_parallax_type;
extern PropertyRNA &rna_LightProbeSphere_parallax_distance;

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



extern PropertyRNA &rna_LightProbe_type;
extern PropertyRNA &rna_LightProbe_clip_start;
extern PropertyRNA &rna_LightProbe_show_clip;
extern PropertyRNA &rna_LightProbe_show_influence;
extern PropertyRNA &rna_LightProbe_influence_distance;
extern PropertyRNA &rna_LightProbe_visibility_buffer_bias;
extern PropertyRNA &rna_LightProbe_visibility_bleed_bias;
extern PropertyRNA &rna_LightProbe_visibility_blur;
extern PropertyRNA &rna_LightProbe_visibility_collection;
extern PropertyRNA &rna_LightProbe_invert_visibility_collection;
extern PropertyRNA &rna_LightProbe_show_data;
extern PropertyRNA &rna_LightProbe_use_data_display;
extern PropertyRNA &rna_LightProbe_data_display_size;
extern PropertyRNA &rna_LightProbe_animation_data;

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

extern PropertyRNA &rna_LightProbeVolume_intensity;
extern PropertyRNA &rna_LightProbeVolume_resolution_x;
extern PropertyRNA &rna_LightProbeVolume_resolution_y;
extern PropertyRNA &rna_LightProbeVolume_resolution_z;
extern PropertyRNA &rna_LightProbeVolume_capture_distance;
extern PropertyRNA &rna_LightProbeVolume_normal_bias;
extern PropertyRNA &rna_LightProbeVolume_view_bias;
extern PropertyRNA &rna_LightProbeVolume_facing_bias;
extern PropertyRNA &rna_LightProbeVolume_bake_samples;
extern PropertyRNA &rna_LightProbeVolume_surface_bias;
extern PropertyRNA &rna_LightProbeVolume_escape_bias;
extern PropertyRNA &rna_LightProbeVolume_surfel_density;
extern PropertyRNA &rna_LightProbeVolume_validity_threshold;
extern PropertyRNA &rna_LightProbeVolume_dilation_threshold;
extern PropertyRNA &rna_LightProbeVolume_dilation_radius;
extern PropertyRNA &rna_LightProbeVolume_capture_world;
extern PropertyRNA &rna_LightProbeVolume_capture_indirect;
extern PropertyRNA &rna_LightProbeVolume_capture_emission;
extern PropertyRNA &rna_LightProbeVolume_clamp_direct;
extern PropertyRNA &rna_LightProbeVolume_clamp_indirect;

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


int LightProbe_type_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->type);
}

float LightProbe_clip_start_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->clipsta);
}

void LightProbe_clip_start_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->clipsta = (std::remove_reference_t<decltype(data->clipsta)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

bool LightProbe_show_clip_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void LightProbe_show_clip_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool LightProbe_show_influence_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void LightProbe_show_influence_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

float LightProbe_influence_distance_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->distinf);
}

void LightProbe_influence_distance_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->distinf = (std::remove_reference_t<decltype(data->distinf)>)std::clamp(value, 0.0f, FLT_MAX);
}

float LightProbe_visibility_buffer_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->vis_bias);
}

void LightProbe_visibility_buffer_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->vis_bias = (std::remove_reference_t<decltype(data->vis_bias)>)std::clamp(value, 0.0010000000f, 9999.0f);
}

float LightProbe_visibility_bleed_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->vis_bleedbias);
}

void LightProbe_visibility_bleed_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->vis_bleedbias = (std::remove_reference_t<decltype(data->vis_bleedbias)>)std::clamp(value, 0.0f, 1.0f);
}

float LightProbe_visibility_blur_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->vis_blur);
}

void LightProbe_visibility_blur_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->vis_blur = (std::remove_reference_t<decltype(data->vis_blur)>)std::clamp(value, 0.0f, 1.0f);
}

PointerRNA LightProbe_visibility_collection_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->visibility_grp);
}

void LightProbe_visibility_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->visibility_grp = value.data;
}

bool LightProbe_invert_visibility_collection_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void LightProbe_invert_visibility_collection_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool LightProbe_show_data_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void LightProbe_show_data_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool LightProbe_use_data_display_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void LightProbe_use_data_display_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

float LightProbe_data_display_size_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->data_display_size);
}

void LightProbe_data_display_size_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->data_display_size = (std::remove_reference_t<decltype(data->data_display_size)>)std::clamp(value, 0.0f, FLT_MAX);
}

PointerRNA LightProbe_animation_data_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

float LightProbePlane_parallax_distance_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->distpar);
}

void LightProbePlane_parallax_distance_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->distpar = (std::remove_reference_t<decltype(data->distpar)>)std::clamp(value, 0.0f, FLT_MAX);
}

int LightProbeSphere_influence_type_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->attenuation_type);
}

void LightProbeSphere_influence_type_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->attenuation_type = (std::remove_reference_t<decltype(data->attenuation_type)>)value;
}

float LightProbeSphere_falloff_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->falloff);
}

void LightProbeSphere_falloff_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->falloff = (std::remove_reference_t<decltype(data->falloff)>)std::clamp(value, 0.0f, 1.0f);
}

float LightProbeSphere_clip_end_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->clipend);
}

void LightProbeSphere_clip_end_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->clipend = (std::remove_reference_t<decltype(data->clipend)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

bool LightProbeSphere_use_custom_parallax_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void LightProbeSphere_use_custom_parallax_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool LightProbeSphere_show_parallax_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void LightProbeSphere_show_parallax_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

int LightProbeSphere_parallax_type_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->parallax_type);
}

void LightProbeSphere_parallax_type_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->parallax_type = (std::remove_reference_t<decltype(data->parallax_type)>)value;
}

float LightProbeSphere_parallax_distance_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->distpar);
}

void LightProbeSphere_parallax_distance_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->distpar = (std::remove_reference_t<decltype(data->distpar)>)std::clamp(value, 0.0f, FLT_MAX);
}

float LightProbeVolume_intensity_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->intensity);
}

void LightProbeVolume_intensity_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->intensity = (std::remove_reference_t<decltype(data->intensity)>)std::clamp(value, 0.0f, FLT_MAX);
}

int LightProbeVolume_resolution_x_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_resolution_x);
}

void LightProbeVolume_resolution_x_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_resolution_x = (std::remove_reference_t<decltype(data->grid_resolution_x)>)std::clamp(value, 1, 256);
}

int LightProbeVolume_resolution_y_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_resolution_y);
}

void LightProbeVolume_resolution_y_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_resolution_y = (std::remove_reference_t<decltype(data->grid_resolution_y)>)std::clamp(value, 1, 256);
}

int LightProbeVolume_resolution_z_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_resolution_z);
}

void LightProbeVolume_resolution_z_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_resolution_z = (std::remove_reference_t<decltype(data->grid_resolution_z)>)std::clamp(value, 1, 256);
}

float LightProbeVolume_capture_distance_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->clipend);
}

void LightProbeVolume_capture_distance_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->clipend = (std::remove_reference_t<decltype(data->clipend)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

float LightProbeVolume_normal_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_normal_bias);
}

void LightProbeVolume_normal_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_normal_bias = (std::remove_reference_t<decltype(data->grid_normal_bias)>)std::clamp(value, 0.0f, FLT_MAX);
}

float LightProbeVolume_view_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_view_bias);
}

void LightProbeVolume_view_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_view_bias = (std::remove_reference_t<decltype(data->grid_view_bias)>)std::clamp(value, 0.0f, FLT_MAX);
}

float LightProbeVolume_facing_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_facing_bias);
}

void LightProbeVolume_facing_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_facing_bias = (std::remove_reference_t<decltype(data->grid_facing_bias)>)std::clamp(value, 0.0f, FLT_MAX);
}

int LightProbeVolume_bake_samples_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_bake_samples);
}

void LightProbeVolume_bake_samples_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_bake_samples = (std::remove_reference_t<decltype(data->grid_bake_samples)>)std::clamp(value, 1, INT_MAX);
}

float LightProbeVolume_surface_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_surface_bias);
}

void LightProbeVolume_surface_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_surface_bias = (std::remove_reference_t<decltype(data->grid_surface_bias)>)std::clamp(value, 0.0f, 1.0f);
}

float LightProbeVolume_escape_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_escape_bias);
}

void LightProbeVolume_escape_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_escape_bias = (std::remove_reference_t<decltype(data->grid_escape_bias)>)std::clamp(value, 0.0f, 1.0f);
}

int LightProbeVolume_surfel_density_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_surfel_density);
}

void LightProbeVolume_surfel_density_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_surfel_density = (std::remove_reference_t<decltype(data->grid_surfel_density)>)std::clamp(value, 1, INT_MAX);
}

float LightProbeVolume_validity_threshold_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_validity_threshold);
}

void LightProbeVolume_validity_threshold_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_validity_threshold = (std::remove_reference_t<decltype(data->grid_validity_threshold)>)std::clamp(value, 0.0f, 1.0f);
}

float LightProbeVolume_dilation_threshold_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_dilation_threshold);
}

void LightProbeVolume_dilation_threshold_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_dilation_threshold = (std::remove_reference_t<decltype(data->grid_dilation_threshold)>)std::clamp(value, 0.0f, 1.0f);
}

float LightProbeVolume_dilation_radius_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_dilation_radius);
}

void LightProbeVolume_dilation_radius_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_dilation_radius = (std::remove_reference_t<decltype(data->grid_dilation_radius)>)std::clamp(value, 1.0f, 5.0f);
}

bool LightProbeVolume_capture_world_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return ((uint64_t(data->grid_flag) & 1) != 0);
}

void LightProbeVolume_capture_world_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->grid_flag = std::remove_reference_t<decltype(data->grid_flag)>(uint64_t(data->grid_flag) | 1); }
    else { data->grid_flag = std::remove_reference_t<decltype(data->grid_flag)>(uint64_t(data->grid_flag) & ~uint64_t(1)); }
}

bool LightProbeVolume_capture_indirect_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return ((uint64_t(data->grid_flag) & 2) != 0);
}

void LightProbeVolume_capture_indirect_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->grid_flag = std::remove_reference_t<decltype(data->grid_flag)>(uint64_t(data->grid_flag) | 2); }
    else { data->grid_flag = std::remove_reference_t<decltype(data->grid_flag)>(uint64_t(data->grid_flag) & ~uint64_t(2)); }
}

bool LightProbeVolume_capture_emission_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return ((uint64_t(data->grid_flag) & 4) != 0);
}

void LightProbeVolume_capture_emission_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->grid_flag = std::remove_reference_t<decltype(data->grid_flag)>(uint64_t(data->grid_flag) | 4); }
    else { data->grid_flag = std::remove_reference_t<decltype(data->grid_flag)>(uint64_t(data->grid_flag) & ~uint64_t(4)); }
}

float LightProbeVolume_clamp_direct_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_clamp_direct);
}

void LightProbeVolume_clamp_direct_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_clamp_direct = (std::remove_reference_t<decltype(data->grid_clamp_direct)>)std::clamp(value, 0.0f, FLT_MAX);
}

float LightProbeVolume_clamp_indirect_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_clamp_indirect);
}

void LightProbeVolume_clamp_indirect_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_clamp_indirect = (std::remove_reference_t<decltype(data->grid_clamp_indirect)>)std::clamp(value, 0.0f, FLT_MAX);
}





/* LightProbe */
static EnumPropertyRNA rna_LightProbe_type_;
PropertyRNA &rna_LightProbe_type = reinterpret_cast<PropertyRNA &>(rna_LightProbe_type_);

static FloatPropertyRNA rna_LightProbe_clip_start_;
PropertyRNA &rna_LightProbe_clip_start = reinterpret_cast<PropertyRNA &>(rna_LightProbe_clip_start_);

static BoolPropertyRNA rna_LightProbe_show_clip_;
PropertyRNA &rna_LightProbe_show_clip = reinterpret_cast<PropertyRNA &>(rna_LightProbe_show_clip_);

static BoolPropertyRNA rna_LightProbe_show_influence_;
PropertyRNA &rna_LightProbe_show_influence = reinterpret_cast<PropertyRNA &>(rna_LightProbe_show_influence_);

static FloatPropertyRNA rna_LightProbe_influence_distance_;
PropertyRNA &rna_LightProbe_influence_distance = reinterpret_cast<PropertyRNA &>(rna_LightProbe_influence_distance_);

static FloatPropertyRNA rna_LightProbe_visibility_buffer_bias_;
PropertyRNA &rna_LightProbe_visibility_buffer_bias = reinterpret_cast<PropertyRNA &>(rna_LightProbe_visibility_buffer_bias_);

static FloatPropertyRNA rna_LightProbe_visibility_bleed_bias_;
PropertyRNA &rna_LightProbe_visibility_bleed_bias = reinterpret_cast<PropertyRNA &>(rna_LightProbe_visibility_bleed_bias_);

static FloatPropertyRNA rna_LightProbe_visibility_blur_;
PropertyRNA &rna_LightProbe_visibility_blur = reinterpret_cast<PropertyRNA &>(rna_LightProbe_visibility_blur_);

static PointerPropertyRNA rna_LightProbe_visibility_collection_;
PropertyRNA &rna_LightProbe_visibility_collection = reinterpret_cast<PropertyRNA &>(rna_LightProbe_visibility_collection_);

static BoolPropertyRNA rna_LightProbe_invert_visibility_collection_;
PropertyRNA &rna_LightProbe_invert_visibility_collection = reinterpret_cast<PropertyRNA &>(rna_LightProbe_invert_visibility_collection_);

static BoolPropertyRNA rna_LightProbe_show_data_;
PropertyRNA &rna_LightProbe_show_data = reinterpret_cast<PropertyRNA &>(rna_LightProbe_show_data_);

static BoolPropertyRNA rna_LightProbe_use_data_display_;
PropertyRNA &rna_LightProbe_use_data_display = reinterpret_cast<PropertyRNA &>(rna_LightProbe_use_data_display_);

static FloatPropertyRNA rna_LightProbe_data_display_size_;
PropertyRNA &rna_LightProbe_data_display_size = reinterpret_cast<PropertyRNA &>(rna_LightProbe_data_display_size_);

static PointerPropertyRNA rna_LightProbe_animation_data_;
PropertyRNA &rna_LightProbe_animation_data = reinterpret_cast<PropertyRNA &>(rna_LightProbe_animation_data_);

StructRNA *RNA_LightProbe;
void register_struct_LightProbe(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_LightProbe_type_items[4] = {
		{0, "SPHERE", 313, "Sphere", "Light probe that captures precise lighting from all directions at a single point in space"	},
		{1, "PLANE", 312, "Plane", "Light probe that captures incoming light from a single direction on a plane"	},
		{2, "VOLUME", 314, "Volume", "Light probe that captures low frequency lighting inside a volume"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_LightProbe_type_ = {
		{&rna_LightProbe_clip_start, 	nullptr,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of light probe",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, type), RawPropertyType(2), nullptr},
		LightProbe_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_LightProbe_type_items, 3, 0
	};

	rna_LightProbe_clip_start_ = {
		{&rna_LightProbe_show_clip, 	&rna_LightProbe_type,
		-1, "clip_start", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clip Start",
		"Probe clip start, below which objects will not appear in reflections",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, clipsta), RawPropertyType(5), nullptr},
		LightProbe_clip_start_get, LightProbe_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.8000000119f, nullptr
	};

	rna_LightProbe_show_clip_ = {
		{&rna_LightProbe_show_influence, 	&rna_LightProbe_clip_start,
		-1, "show_clip", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clipping",
		"Show the clipping distances in the 3D view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbe_show_clip_get, LightProbe_show_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LightProbe_show_influence_ = {
		{&rna_LightProbe_influence_distance, 	&rna_LightProbe_show_clip,
		-1, "show_influence", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Influence",
		"Show the influence volume in the 3D view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbe_show_influence_get, LightProbe_show_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_LightProbe_influence_distance_ = {
		{&rna_LightProbe_visibility_buffer_bias, 	&rna_LightProbe_show_influence,
		-1, "influence_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Influence Distance",
		"Influence distance of the probe",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, distinf), RawPropertyType(5), nullptr},
		LightProbe_influence_distance_get, LightProbe_influence_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 2.5000000000f, nullptr
	};

	rna_LightProbe_visibility_buffer_bias_ = {
		{&rna_LightProbe_visibility_bleed_bias, 	&rna_LightProbe_influence_distance,
		-1, "visibility_buffer_bias", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Visibility Bias",
		"Bias for reducing self shadowing (Deprecated)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, vis_bias), RawPropertyType(5), nullptr},
		LightProbe_visibility_buffer_bias_get, LightProbe_visibility_buffer_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_LightProbe_visibility_bleed_bias_ = {
		{&rna_LightProbe_visibility_blur, 	&rna_LightProbe_visibility_buffer_bias,
		-1, "visibility_bleed_bias", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Visibility Bleed Bias",
		"Bias for reducing light-bleed on variance shadow maps (Deprecated)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, vis_bleedbias), RawPropertyType(5), nullptr},
		LightProbe_visibility_bleed_bias_get, LightProbe_visibility_bleed_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LightProbe_visibility_blur_ = {
		{&rna_LightProbe_visibility_collection, 	&rna_LightProbe_visibility_bleed_bias,
		-1, "visibility_blur", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Visibility Blur",
		"Filter size of the visibility blur (Deprecated)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, vis_blur), RawPropertyType(5), nullptr},
		LightProbe_visibility_blur_get, LightProbe_visibility_blur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.2000000030f, nullptr
	};

	rna_LightProbe_visibility_collection_ = {
		{&rna_LightProbe_invert_visibility_collection, 	&rna_LightProbe_visibility_blur,
		-1, "visibility_collection", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Visibility Collection",
		"Restrict objects visible for this probe (Deprecated)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbe_visibility_collection_get, LightProbe_visibility_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_LightProbe_invert_visibility_collection_ = {
		{&rna_LightProbe_show_data, 	&rna_LightProbe_visibility_collection,
		-1, "invert_visibility_collection", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert Collection",
		"Invert visibility collection (Deprecated)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbe_invert_visibility_collection_get, LightProbe_invert_visibility_collection_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LightProbe_show_data_ = {
		{&rna_LightProbe_use_data_display, 	&rna_LightProbe_invert_visibility_collection,
		-1, "show_data", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Data (Deprecated)",
		"Deprecated, use use_data_display instead",
		15, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbe_show_data_get, LightProbe_show_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LightProbe_use_data_display_ = {
		{&rna_LightProbe_data_display_size, 	&rna_LightProbe_show_data,
		-1, "use_data_display", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Data",
		"Display sampled data in the viewport to debug captured light",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbe_use_data_display_get, LightProbe_use_data_display_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LightProbe_data_display_size_ = {
		{&rna_LightProbe_animation_data, 	&rna_LightProbe_use_data_display,
		-1, "data_display_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Display Data Size",
		"Viewport display size of the sampled data",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, data_display_size), RawPropertyType(5), nullptr},
		LightProbe_data_display_size_get, LightProbe_data_display_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_LightProbe_animation_data_ = {
		{nullptr, 	&rna_LightProbe_data_display_size,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		LightProbe_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_LightProbe;
	srna->cont.properties = {&rna_LightProbe_type, &rna_LightProbe_animation_data};
	srna->identifier = "LightProbe";
	srna->flag = 519;
	srna->name = "LightProbe";
	srna->description = "Light Probe data-block for lighting capture objects";
	srna->translation_context = "*";
	srna->icon = 265;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_LightProbe_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Planar Probe */
static FloatPropertyRNA rna_LightProbePlane_parallax_distance_;
PropertyRNA &rna_LightProbePlane_parallax_distance = reinterpret_cast<PropertyRNA &>(rna_LightProbePlane_parallax_distance_);

StructRNA *RNA_LightProbePlane;
void register_struct_LightProbePlane(BlenderRNA &brna)
{
	rna_LightProbePlane_parallax_distance_ = {
		{nullptr, 	nullptr,
		-1, "parallax_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Parallax Radius",
		"Amount of parallax to use for reflections on Blended materials or Shader To RGB evaluation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, distpar), RawPropertyType(5), nullptr},
		LightProbePlane_parallax_distance_get, LightProbePlane_parallax_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 2.5000000000f, nullptr
	};

	StructRNA *srna = RNA_LightProbePlane;
	srna->cont.properties = {&rna_LightProbePlane_parallax_distance, &rna_LightProbePlane_parallax_distance};
	srna->identifier = "LightProbePlane";
	srna->flag = 519;
	srna->name = "Planar Probe";
	srna->description = "Light probe that captures incoming light from a single direction on a plane";
	srna->translation_context = "*";
	srna->icon = 312;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_LightProbe;
	srna->refine = rna_LightProbe_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Spherical Probe */
static EnumPropertyRNA rna_LightProbeSphere_influence_type_;
PropertyRNA &rna_LightProbeSphere_influence_type = reinterpret_cast<PropertyRNA &>(rna_LightProbeSphere_influence_type_);

static FloatPropertyRNA rna_LightProbeSphere_falloff_;
PropertyRNA &rna_LightProbeSphere_falloff = reinterpret_cast<PropertyRNA &>(rna_LightProbeSphere_falloff_);

static FloatPropertyRNA rna_LightProbeSphere_clip_end_;
PropertyRNA &rna_LightProbeSphere_clip_end = reinterpret_cast<PropertyRNA &>(rna_LightProbeSphere_clip_end_);

static BoolPropertyRNA rna_LightProbeSphere_use_custom_parallax_;
PropertyRNA &rna_LightProbeSphere_use_custom_parallax = reinterpret_cast<PropertyRNA &>(rna_LightProbeSphere_use_custom_parallax_);

static BoolPropertyRNA rna_LightProbeSphere_show_parallax_;
PropertyRNA &rna_LightProbeSphere_show_parallax = reinterpret_cast<PropertyRNA &>(rna_LightProbeSphere_show_parallax_);

static EnumPropertyRNA rna_LightProbeSphere_parallax_type_;
PropertyRNA &rna_LightProbeSphere_parallax_type = reinterpret_cast<PropertyRNA &>(rna_LightProbeSphere_parallax_type_);

static FloatPropertyRNA rna_LightProbeSphere_parallax_distance_;
PropertyRNA &rna_LightProbeSphere_parallax_distance = reinterpret_cast<PropertyRNA &>(rna_LightProbeSphere_parallax_distance_);

StructRNA *RNA_LightProbeSphere;
void register_struct_LightProbeSphere(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_LightProbeSphere_influence_type_items[3] = {
		{0, "ELIPSOID", 0, "Sphere", ""	},
		{1, "BOX", 0, "Box", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_LightProbeSphere_influence_type_ = {
		{&rna_LightProbeSphere_falloff, 	nullptr,
		-1, "influence_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of influence volume",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, attenuation_type), RawPropertyType(2), nullptr},
		LightProbeSphere_influence_type_get, LightProbeSphere_influence_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_LightProbeSphere_influence_type_items, 2, 0
	};

	rna_LightProbeSphere_falloff_ = {
		{&rna_LightProbeSphere_clip_end, 	&rna_LightProbeSphere_influence_type,
		-1, "falloff", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Falloff",
		"Control how fast the probe influence decreases",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, falloff), RawPropertyType(5), nullptr},
		LightProbeSphere_falloff_get, LightProbeSphere_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.2000000030f, nullptr
	};

	rna_LightProbeSphere_clip_end_ = {
		{&rna_LightProbeSphere_use_custom_parallax, 	&rna_LightProbeSphere_falloff,
		-1, "clip_end", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clip End",
		"Probe clip end, beyond which objects will not appear in reflections",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, clipend), RawPropertyType(5), nullptr},
		LightProbeSphere_clip_end_get, LightProbeSphere_clip_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 20.0f, nullptr
	};

	rna_LightProbeSphere_use_custom_parallax_ = {
		{&rna_LightProbeSphere_show_parallax, 	&rna_LightProbeSphere_clip_end,
		-1, "use_custom_parallax", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Custom Parallax",
		"Enable custom settings for the parallax correction volume",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbeSphere_use_custom_parallax_get, LightProbeSphere_use_custom_parallax_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LightProbeSphere_show_parallax_ = {
		{&rna_LightProbeSphere_parallax_type, 	&rna_LightProbeSphere_use_custom_parallax,
		-1, "show_parallax", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Parallax",
		"Show the parallax correction volume in the 3D view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbeSphere_show_parallax_get, LightProbeSphere_show_parallax_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_LightProbeSphere_parallax_type_items[3] = {
		{0, "ELIPSOID", 0, "Sphere", ""	},
		{1, "BOX", 0, "Box", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_LightProbeSphere_parallax_type_ = {
		{&rna_LightProbeSphere_parallax_distance, 	&rna_LightProbeSphere_show_parallax,
		-1, "parallax_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of parallax volume",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, parallax_type), RawPropertyType(2), nullptr},
		LightProbeSphere_parallax_type_get, LightProbeSphere_parallax_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_LightProbeSphere_parallax_type_items, 2, 0
	};

	rna_LightProbeSphere_parallax_distance_ = {
		{nullptr, 	&rna_LightProbeSphere_parallax_type,
		-1, "parallax_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Parallax Radius",
		"Lowest corner of the parallax bounding box",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, distpar), RawPropertyType(5), nullptr},
		LightProbeSphere_parallax_distance_get, LightProbeSphere_parallax_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 2.5000000000f, nullptr
	};

	StructRNA *srna = RNA_LightProbeSphere;
	srna->cont.properties = {&rna_LightProbeSphere_influence_type, &rna_LightProbeSphere_parallax_distance};
	srna->identifier = "LightProbeSphere";
	srna->flag = 519;
	srna->name = "Spherical Probe";
	srna->description = "Light probe that captures precise lighting from all directions at a single point in space";
	srna->translation_context = "*";
	srna->icon = 313;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_LightProbe;
	srna->refine = rna_LightProbe_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Volume Probe */
static FloatPropertyRNA rna_LightProbeVolume_intensity_;
PropertyRNA &rna_LightProbeVolume_intensity = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_intensity_);

static IntPropertyRNA rna_LightProbeVolume_resolution_x_;
PropertyRNA &rna_LightProbeVolume_resolution_x = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_resolution_x_);

static IntPropertyRNA rna_LightProbeVolume_resolution_y_;
PropertyRNA &rna_LightProbeVolume_resolution_y = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_resolution_y_);

static IntPropertyRNA rna_LightProbeVolume_resolution_z_;
PropertyRNA &rna_LightProbeVolume_resolution_z = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_resolution_z_);

static FloatPropertyRNA rna_LightProbeVolume_capture_distance_;
PropertyRNA &rna_LightProbeVolume_capture_distance = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_capture_distance_);

static FloatPropertyRNA rna_LightProbeVolume_normal_bias_;
PropertyRNA &rna_LightProbeVolume_normal_bias = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_normal_bias_);

static FloatPropertyRNA rna_LightProbeVolume_view_bias_;
PropertyRNA &rna_LightProbeVolume_view_bias = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_view_bias_);

static FloatPropertyRNA rna_LightProbeVolume_facing_bias_;
PropertyRNA &rna_LightProbeVolume_facing_bias = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_facing_bias_);

static IntPropertyRNA rna_LightProbeVolume_bake_samples_;
PropertyRNA &rna_LightProbeVolume_bake_samples = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_bake_samples_);

static FloatPropertyRNA rna_LightProbeVolume_surface_bias_;
PropertyRNA &rna_LightProbeVolume_surface_bias = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_surface_bias_);

static FloatPropertyRNA rna_LightProbeVolume_escape_bias_;
PropertyRNA &rna_LightProbeVolume_escape_bias = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_escape_bias_);

static IntPropertyRNA rna_LightProbeVolume_surfel_density_;
PropertyRNA &rna_LightProbeVolume_surfel_density = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_surfel_density_);

static FloatPropertyRNA rna_LightProbeVolume_validity_threshold_;
PropertyRNA &rna_LightProbeVolume_validity_threshold = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_validity_threshold_);

static FloatPropertyRNA rna_LightProbeVolume_dilation_threshold_;
PropertyRNA &rna_LightProbeVolume_dilation_threshold = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_dilation_threshold_);

static FloatPropertyRNA rna_LightProbeVolume_dilation_radius_;
PropertyRNA &rna_LightProbeVolume_dilation_radius = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_dilation_radius_);

static BoolPropertyRNA rna_LightProbeVolume_capture_world_;
PropertyRNA &rna_LightProbeVolume_capture_world = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_capture_world_);

static BoolPropertyRNA rna_LightProbeVolume_capture_indirect_;
PropertyRNA &rna_LightProbeVolume_capture_indirect = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_capture_indirect_);

static BoolPropertyRNA rna_LightProbeVolume_capture_emission_;
PropertyRNA &rna_LightProbeVolume_capture_emission = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_capture_emission_);

static FloatPropertyRNA rna_LightProbeVolume_clamp_direct_;
PropertyRNA &rna_LightProbeVolume_clamp_direct = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_clamp_direct_);

static FloatPropertyRNA rna_LightProbeVolume_clamp_indirect_;
PropertyRNA &rna_LightProbeVolume_clamp_indirect = reinterpret_cast<PropertyRNA &>(rna_LightProbeVolume_clamp_indirect_);

StructRNA *RNA_LightProbeVolume;
void register_struct_LightProbeVolume(BlenderRNA &brna)
{
	rna_LightProbeVolume_intensity_ = {
		{&rna_LightProbeVolume_resolution_x, 	nullptr,
		-1, "intensity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Intensity",
		"Modify the intensity of the lighting captured by this probe",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, intensity), RawPropertyType(5), nullptr},
		LightProbeVolume_intensity_get, LightProbeVolume_intensity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_LightProbeVolume_resolution_x_ = {
		{&rna_LightProbeVolume_resolution_y, 	&rna_LightProbeVolume_intensity,
		-1, "resolution_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution X",
		"Number of samples along the x axis of the volume",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_resolution_x), RawPropertyType(0), nullptr},
		LightProbeVolume_resolution_x_get, LightProbeVolume_resolution_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 256, 1, 256, 1, nullptr, nullptr, 4, nullptr
	};

	rna_LightProbeVolume_resolution_y_ = {
		{&rna_LightProbeVolume_resolution_z, 	&rna_LightProbeVolume_resolution_x,
		-1, "resolution_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution Y",
		"Number of samples along the y axis of the volume",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_resolution_y), RawPropertyType(0), nullptr},
		LightProbeVolume_resolution_y_get, LightProbeVolume_resolution_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 256, 1, 256, 1, nullptr, nullptr, 4, nullptr
	};

	rna_LightProbeVolume_resolution_z_ = {
		{&rna_LightProbeVolume_capture_distance, 	&rna_LightProbeVolume_resolution_y,
		-1, "resolution_z", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution Z",
		"Number of samples along the z axis of the volume",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_resolution_z), RawPropertyType(0), nullptr},
		LightProbeVolume_resolution_z_get, LightProbeVolume_resolution_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 256, 1, 256, 1, nullptr, nullptr, 4, nullptr
	};

	rna_LightProbeVolume_capture_distance_ = {
		{&rna_LightProbeVolume_normal_bias, 	&rna_LightProbeVolume_resolution_z,
		-1, "capture_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Capture Distance",
		"Distance around the probe volume that will be considered during the bake",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, clipend), RawPropertyType(5), nullptr},
		LightProbeVolume_capture_distance_get, LightProbeVolume_capture_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 1, nullptr, nullptr, 20.0f, nullptr
	};

	rna_LightProbeVolume_normal_bias_ = {
		{&rna_LightProbeVolume_view_bias, 	&rna_LightProbeVolume_capture_distance,
		-1, "normal_bias", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Normal Bias",
		"Offset sampling of the irradiance grid in the surface normal direction to reduce light bleeding",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_normal_bias), RawPropertyType(5), nullptr},
		LightProbeVolume_normal_bias_get, LightProbeVolume_normal_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.3000000119f, nullptr
	};

	rna_LightProbeVolume_view_bias_ = {
		{&rna_LightProbeVolume_facing_bias, 	&rna_LightProbeVolume_normal_bias,
		-1, "view_bias", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "View Bias",
		"Offset sampling of the irradiance grid in the viewing direction to reduce light bleeding",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_view_bias), RawPropertyType(5), nullptr},
		LightProbeVolume_view_bias_get, LightProbeVolume_view_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LightProbeVolume_facing_bias_ = {
		{&rna_LightProbeVolume_bake_samples, 	&rna_LightProbeVolume_view_bias,
		-1, "facing_bias", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Facing Bias",
		"Smoother irradiance interpolation but introduce light bleeding",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_facing_bias), RawPropertyType(5), nullptr},
		LightProbeVolume_facing_bias_get, LightProbeVolume_facing_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_LightProbeVolume_bake_samples_ = {
		{&rna_LightProbeVolume_surface_bias, 	&rna_LightProbeVolume_facing_bias,
		-1, "bake_samples", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bake Samples",
		"Number of ray directions to evaluate when baking",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_bake_samples), RawPropertyType(0), nullptr},
		LightProbeVolume_bake_samples_get, LightProbeVolume_bake_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, nullptr, nullptr, 2048, nullptr
	};

	rna_LightProbeVolume_surface_bias_ = {
		{&rna_LightProbeVolume_escape_bias, 	&rna_LightProbeVolume_bake_samples,
		-1, "surface_bias", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Surface Offset",
		"Moves capture points away from surfaces to prevent artifacts",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_surface_bias), RawPropertyType(5), nullptr},
		LightProbeVolume_surface_bias_get, LightProbeVolume_surface_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0500000007f, nullptr
	};

	rna_LightProbeVolume_escape_bias_ = {
		{&rna_LightProbeVolume_surfel_density, 	&rna_LightProbeVolume_surface_bias,
		-1, "escape_bias", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Search Distance",
		"Distance to search for valid capture positions to prevent lighting artifacts",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_escape_bias), RawPropertyType(5), nullptr},
		LightProbeVolume_escape_bias_get, LightProbeVolume_escape_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_LightProbeVolume_surfel_density_ = {
		{&rna_LightProbeVolume_validity_threshold, 	&rna_LightProbeVolume_escape_bias,
		-1, "surfel_density", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Surfel Resolution",
		"Number of surfels to spawn in one local unit distance (higher values improve quality)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_surfel_density), RawPropertyType(0), nullptr},
		LightProbeVolume_surfel_density_get, LightProbeVolume_surfel_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, nullptr, nullptr, 20, nullptr
	};

	rna_LightProbeVolume_validity_threshold_ = {
		{&rna_LightProbeVolume_dilation_threshold, 	&rna_LightProbeVolume_surfel_density,
		-1, "validity_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Validity Threshold",
		"Ratio of front-facing surface hits under which a grid sample will not be considered for lighting",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_validity_threshold), RawPropertyType(5), nullptr},
		LightProbeVolume_validity_threshold_get, LightProbeVolume_validity_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 0.4000000060f, nullptr
	};

	rna_LightProbeVolume_dilation_threshold_ = {
		{&rna_LightProbeVolume_dilation_radius, 	&rna_LightProbeVolume_validity_threshold,
		-1, "dilation_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dilation Threshold",
		"Ratio of front-facing surface hits under which a grid sample will reuse neighbors grid sample lighting",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_dilation_threshold), RawPropertyType(5), nullptr},
		LightProbeVolume_dilation_threshold_get, LightProbeVolume_dilation_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_LightProbeVolume_dilation_radius_ = {
		{&rna_LightProbeVolume_capture_world, 	&rna_LightProbeVolume_dilation_threshold,
		-1, "dilation_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dilation Radius",
		"Radius in grid sample to search valid grid samples to copy into invalid grid samples",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_dilation_radius), RawPropertyType(5), nullptr},
		LightProbeVolume_dilation_radius_get, LightProbeVolume_dilation_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 5.0f, 1.0f, 5.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_LightProbeVolume_capture_world_ = {
		{&rna_LightProbeVolume_capture_indirect, 	&rna_LightProbeVolume_dilation_radius,
		-1, "capture_world", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Capture World",
		"Bake incoming light from the world instead of just the visibility for more accurate lighting, but lose correct blending to surrounding irradiance volumes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbeVolume_capture_world_get, LightProbeVolume_capture_world_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LightProbeVolume_capture_indirect_ = {
		{&rna_LightProbeVolume_capture_emission, 	&rna_LightProbeVolume_capture_world,
		-1, "capture_indirect", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Capture Indirect",
		"Bake light bounces from light sources for more accurate lighting",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbeVolume_capture_indirect_get, LightProbeVolume_capture_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_LightProbeVolume_capture_emission_ = {
		{&rna_LightProbeVolume_clamp_direct, 	&rna_LightProbeVolume_capture_indirect,
		-1, "capture_emission", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Capture Emission",
		"Bake emissive surfaces for more accurate lighting",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LightProbeVolume_capture_emission_get, LightProbeVolume_capture_emission_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_LightProbeVolume_clamp_direct_ = {
		{&rna_LightProbeVolume_clamp_indirect, 	&rna_LightProbeVolume_capture_emission,
		-1, "clamp_direct", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clamp Direct",
		"Clamp the direct lighting intensity to reduce noise (0 to disable)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_clamp_direct), RawPropertyType(5), nullptr},
		LightProbeVolume_clamp_direct_get, LightProbeVolume_clamp_direct_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LightProbeVolume_clamp_indirect_ = {
		{nullptr, 	&rna_LightProbeVolume_clamp_direct,
		-1, "clamp_indirect", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clamp Indirect",
		"Clamp the indirect lighting intensity to reduce noise (0 to disable)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightProbe_recalc, 119406592, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(LightProbe, grid_clamp_indirect), RawPropertyType(5), nullptr},
		LightProbeVolume_clamp_indirect_get, LightProbeVolume_clamp_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 10.0f, nullptr
	};

	StructRNA *srna = RNA_LightProbeVolume;
	srna->cont.properties = {&rna_LightProbeVolume_intensity, &rna_LightProbeVolume_clamp_indirect};
	srna->identifier = "LightProbeVolume";
	srna->flag = 519;
	srna->name = "Volume Probe";
	srna->description = "Light probe that captures low frequency lighting inside a volume";
	srna->translation_context = "*";
	srna->icon = 314;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_LightProbe;
	srna->refine = rna_LightProbe_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};


}  // namespace blender
