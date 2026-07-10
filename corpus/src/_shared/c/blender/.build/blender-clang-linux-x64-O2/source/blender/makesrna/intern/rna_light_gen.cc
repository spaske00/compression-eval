
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

#include "rna_light.cc"

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

extern PropertyRNA &rna_Light_type;
extern PropertyRNA &rna_Light_use_temperature;
extern PropertyRNA &rna_Light_color;
extern PropertyRNA &rna_Light_temperature;
extern PropertyRNA &rna_Light_temperature_color;
extern PropertyRNA &rna_Light_specular_factor;
extern PropertyRNA &rna_Light_diffuse_factor;
extern PropertyRNA &rna_Light_transmission_factor;
extern PropertyRNA &rna_Light_volume_factor;
extern PropertyRNA &rna_Light_use_custom_distance;
extern PropertyRNA &rna_Light_cutoff_distance;
extern PropertyRNA &rna_Light_use_shadow;
extern PropertyRNA &rna_Light_exposure;
extern PropertyRNA &rna_Light_normalize;
extern PropertyRNA &rna_Light_node_tree;
extern PropertyRNA &rna_Light_use_nodes;
extern PropertyRNA &rna_Light_animation_data;

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


extern FunctionRNA *rna_Light_area_func;
extern PropertyRNA &rna_Light_area_matrix_world;
extern PropertyRNA &rna_Light_area_area;



extern PropertyRNA &rna_Light_type;
extern PropertyRNA &rna_Light_use_temperature;
extern PropertyRNA &rna_Light_color;
extern PropertyRNA &rna_Light_temperature;
extern PropertyRNA &rna_Light_temperature_color;
extern PropertyRNA &rna_Light_specular_factor;
extern PropertyRNA &rna_Light_diffuse_factor;
extern PropertyRNA &rna_Light_transmission_factor;
extern PropertyRNA &rna_Light_volume_factor;
extern PropertyRNA &rna_Light_use_custom_distance;
extern PropertyRNA &rna_Light_cutoff_distance;
extern PropertyRNA &rna_Light_use_shadow;
extern PropertyRNA &rna_Light_exposure;
extern PropertyRNA &rna_Light_normalize;
extern PropertyRNA &rna_Light_node_tree;
extern PropertyRNA &rna_Light_use_nodes;
extern PropertyRNA &rna_Light_animation_data;

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

extern PropertyRNA &rna_PointLight_use_soft_falloff;
extern PropertyRNA &rna_PointLight_energy;
extern PropertyRNA &rna_PointLight_shadow_buffer_clip_start;
extern PropertyRNA &rna_PointLight_shadow_soft_size;
extern PropertyRNA &rna_PointLight_shadow_filter_radius;
extern PropertyRNA &rna_PointLight_shadow_maximum_resolution;
extern PropertyRNA &rna_PointLight_use_shadow_jitter;
extern PropertyRNA &rna_PointLight_shadow_jitter_overblur;
extern PropertyRNA &rna_PointLight_use_absolute_resolution;

extern FunctionRNA *rna_Light_area_func;
extern PropertyRNA &rna_Light_area_matrix_world;
extern PropertyRNA &rna_Light_area_area;


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



extern PropertyRNA &rna_Light_type;
extern PropertyRNA &rna_Light_use_temperature;
extern PropertyRNA &rna_Light_color;
extern PropertyRNA &rna_Light_temperature;
extern PropertyRNA &rna_Light_temperature_color;
extern PropertyRNA &rna_Light_specular_factor;
extern PropertyRNA &rna_Light_diffuse_factor;
extern PropertyRNA &rna_Light_transmission_factor;
extern PropertyRNA &rna_Light_volume_factor;
extern PropertyRNA &rna_Light_use_custom_distance;
extern PropertyRNA &rna_Light_cutoff_distance;
extern PropertyRNA &rna_Light_use_shadow;
extern PropertyRNA &rna_Light_exposure;
extern PropertyRNA &rna_Light_normalize;
extern PropertyRNA &rna_Light_node_tree;
extern PropertyRNA &rna_Light_use_nodes;
extern PropertyRNA &rna_Light_animation_data;

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

extern PropertyRNA &rna_AreaLight_energy;
extern PropertyRNA &rna_AreaLight_shadow_buffer_clip_start;
extern PropertyRNA &rna_AreaLight_shadow_soft_size;
extern PropertyRNA &rna_AreaLight_shadow_filter_radius;
extern PropertyRNA &rna_AreaLight_shadow_maximum_resolution;
extern PropertyRNA &rna_AreaLight_use_shadow_jitter;
extern PropertyRNA &rna_AreaLight_shadow_jitter_overblur;
extern PropertyRNA &rna_AreaLight_use_absolute_resolution;
extern PropertyRNA &rna_AreaLight_shape;
extern PropertyRNA &rna_AreaLight_size;
extern PropertyRNA &rna_AreaLight_size_y;
extern PropertyRNA &rna_AreaLight_spread;

extern FunctionRNA *rna_Light_area_func;
extern PropertyRNA &rna_Light_area_matrix_world;
extern PropertyRNA &rna_Light_area_area;


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



extern PropertyRNA &rna_Light_type;
extern PropertyRNA &rna_Light_use_temperature;
extern PropertyRNA &rna_Light_color;
extern PropertyRNA &rna_Light_temperature;
extern PropertyRNA &rna_Light_temperature_color;
extern PropertyRNA &rna_Light_specular_factor;
extern PropertyRNA &rna_Light_diffuse_factor;
extern PropertyRNA &rna_Light_transmission_factor;
extern PropertyRNA &rna_Light_volume_factor;
extern PropertyRNA &rna_Light_use_custom_distance;
extern PropertyRNA &rna_Light_cutoff_distance;
extern PropertyRNA &rna_Light_use_shadow;
extern PropertyRNA &rna_Light_exposure;
extern PropertyRNA &rna_Light_normalize;
extern PropertyRNA &rna_Light_node_tree;
extern PropertyRNA &rna_Light_use_nodes;
extern PropertyRNA &rna_Light_animation_data;

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

extern PropertyRNA &rna_SpotLight_energy;
extern PropertyRNA &rna_SpotLight_shadow_buffer_clip_start;
extern PropertyRNA &rna_SpotLight_shadow_soft_size;
extern PropertyRNA &rna_SpotLight_shadow_filter_radius;
extern PropertyRNA &rna_SpotLight_shadow_maximum_resolution;
extern PropertyRNA &rna_SpotLight_use_shadow_jitter;
extern PropertyRNA &rna_SpotLight_shadow_jitter_overblur;
extern PropertyRNA &rna_SpotLight_use_absolute_resolution;
extern PropertyRNA &rna_SpotLight_use_square;
extern PropertyRNA &rna_SpotLight_spot_blend;
extern PropertyRNA &rna_SpotLight_spot_size;
extern PropertyRNA &rna_SpotLight_show_cone;
extern PropertyRNA &rna_SpotLight_use_soft_falloff;

extern FunctionRNA *rna_Light_area_func;
extern PropertyRNA &rna_Light_area_matrix_world;
extern PropertyRNA &rna_Light_area_area;


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



extern PropertyRNA &rna_Light_type;
extern PropertyRNA &rna_Light_use_temperature;
extern PropertyRNA &rna_Light_color;
extern PropertyRNA &rna_Light_temperature;
extern PropertyRNA &rna_Light_temperature_color;
extern PropertyRNA &rna_Light_specular_factor;
extern PropertyRNA &rna_Light_diffuse_factor;
extern PropertyRNA &rna_Light_transmission_factor;
extern PropertyRNA &rna_Light_volume_factor;
extern PropertyRNA &rna_Light_use_custom_distance;
extern PropertyRNA &rna_Light_cutoff_distance;
extern PropertyRNA &rna_Light_use_shadow;
extern PropertyRNA &rna_Light_exposure;
extern PropertyRNA &rna_Light_normalize;
extern PropertyRNA &rna_Light_node_tree;
extern PropertyRNA &rna_Light_use_nodes;
extern PropertyRNA &rna_Light_animation_data;

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

extern PropertyRNA &rna_SunLight_angle;
extern PropertyRNA &rna_SunLight_energy;
extern PropertyRNA &rna_SunLight_shadow_buffer_clip_start;
extern PropertyRNA &rna_SunLight_shadow_soft_size;
extern PropertyRNA &rna_SunLight_shadow_filter_radius;
extern PropertyRNA &rna_SunLight_shadow_maximum_resolution;
extern PropertyRNA &rna_SunLight_use_shadow_jitter;
extern PropertyRNA &rna_SunLight_shadow_jitter_overblur;
extern PropertyRNA &rna_SunLight_shadow_cascade_max_distance;
extern PropertyRNA &rna_SunLight_shadow_cascade_count;
extern PropertyRNA &rna_SunLight_shadow_cascade_exponent;
extern PropertyRNA &rna_SunLight_shadow_cascade_fade;

extern FunctionRNA *rna_Light_area_func;
extern PropertyRNA &rna_Light_area_matrix_world;
extern PropertyRNA &rna_Light_area_area;


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


int Light_type_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->type);
}

void Light_type_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

bool Light_use_temperature_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 16777216) != 0);
}

void Light_use_temperature_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 16777216); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(16777216)); }
}

void Light_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

void Light_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (&data->r)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float Light_temperature_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->temperature);
}

void Light_temperature_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->temperature = (std::remove_reference_t<decltype(data->temperature)>)std::clamp(value, 800.0f, 20000.0f);
}

void Light_temperature_color_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Light_temperature_color_get;
    fn(ptr, values);
}

float Light_specular_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->spec_fac);
}

void Light_specular_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->spec_fac = (std::remove_reference_t<decltype(data->spec_fac)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Light_diffuse_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->diff_fac);
}

void Light_diffuse_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->diff_fac = (std::remove_reference_t<decltype(data->diff_fac)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Light_transmission_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->transmission_fac);
}

void Light_transmission_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->transmission_fac = (std::remove_reference_t<decltype(data->transmission_fac)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Light_volume_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->volume_fac);
}

void Light_volume_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->volume_fac = (std::remove_reference_t<decltype(data->volume_fac)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool Light_use_custom_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 1048576) != 0);
}

void Light_use_custom_distance_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 1048576); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(1048576)); }
}

float Light_cutoff_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->att_dist);
}

void Light_cutoff_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->att_dist = (std::remove_reference_t<decltype(data->att_dist)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool Light_use_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 1) != 0);
}

void Light_use_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 1); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(1)); }
}

float Light_exposure_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->exposure);
}

void Light_exposure_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->exposure = (std::remove_reference_t<decltype(data->exposure)>)std::clamp(value, -32.0f, 32.0f);
}

bool Light_normalize_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return !((uint64_t(data->mode) & 33554432) != 0);
}

void Light_normalize_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (!value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 33554432); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(33554432)); }
}

PointerRNA Light_node_tree_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_NodeTree, data->nodetree);
}

bool Light_use_nodes_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Light_use_nodes_get;
    return fn(ptr);
}

void Light_use_nodes_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Light_use_nodes_set;
    fn(ptr, value);
}

PointerRNA Light_animation_data_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

bool PointLight_use_soft_falloff_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 2097152) != 0);
}

void PointLight_use_soft_falloff_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 2097152); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(2097152)); }
}

float PointLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

void PointLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->energy = (std::remove_reference_t<decltype(data->energy)>)value;
}

float PointLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

void PointLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->clipsta = (std::remove_reference_t<decltype(data->clipsta)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

float PointLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->radius);
}

void PointLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->radius = (std::remove_reference_t<decltype(data->radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

float PointLight_shadow_filter_radius_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_filter_radius);
}

void PointLight_shadow_filter_radius_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_filter_radius = (std::remove_reference_t<decltype(data->shadow_filter_radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

float PointLight_shadow_maximum_resolution_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_maximum_resolution);
}

void PointLight_shadow_maximum_resolution_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_maximum_resolution = (std::remove_reference_t<decltype(data->shadow_maximum_resolution)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool PointLight_use_shadow_jitter_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 8388608) != 0);
}

void PointLight_use_shadow_jitter_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 8388608); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(8388608)); }
}

float PointLight_shadow_jitter_overblur_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_jitter_overblur);
}

void PointLight_shadow_jitter_overblur_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_jitter_overblur = (std::remove_reference_t<decltype(data->shadow_jitter_overblur)>)std::clamp(value, 0.0f, 100.0f);
}

bool PointLight_use_absolute_resolution_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 4194304) != 0);
}

void PointLight_use_absolute_resolution_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 4194304); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(4194304)); }
}

float AreaLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

void AreaLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->energy = (std::remove_reference_t<decltype(data->energy)>)value;
}

float AreaLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

void AreaLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->clipsta = (std::remove_reference_t<decltype(data->clipsta)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

float AreaLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->radius);
}

void AreaLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->radius = (std::remove_reference_t<decltype(data->radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

float AreaLight_shadow_filter_radius_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_filter_radius);
}

void AreaLight_shadow_filter_radius_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_filter_radius = (std::remove_reference_t<decltype(data->shadow_filter_radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

float AreaLight_shadow_maximum_resolution_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_maximum_resolution);
}

void AreaLight_shadow_maximum_resolution_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_maximum_resolution = (std::remove_reference_t<decltype(data->shadow_maximum_resolution)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool AreaLight_use_shadow_jitter_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 8388608) != 0);
}

void AreaLight_use_shadow_jitter_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 8388608); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(8388608)); }
}

float AreaLight_shadow_jitter_overblur_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_jitter_overblur);
}

void AreaLight_shadow_jitter_overblur_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_jitter_overblur = (std::remove_reference_t<decltype(data->shadow_jitter_overblur)>)std::clamp(value, 0.0f, 100.0f);
}

bool AreaLight_use_absolute_resolution_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 4194304) != 0);
}

void AreaLight_use_absolute_resolution_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 4194304); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(4194304)); }
}

int AreaLight_shape_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->area_shape);
}

void AreaLight_shape_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->area_shape = (std::remove_reference_t<decltype(data->area_shape)>)value;
}

float AreaLight_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_size);
}

void AreaLight_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->area_size = (std::remove_reference_t<decltype(data->area_size)>)std::clamp(value, 0.0f, FLT_MAX);
}

float AreaLight_size_y_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_sizey);
}

void AreaLight_size_y_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->area_sizey = (std::remove_reference_t<decltype(data->area_sizey)>)std::clamp(value, 0.0f, FLT_MAX);
}

float AreaLight_spread_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_spread);
}

void AreaLight_spread_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->area_spread = (std::remove_reference_t<decltype(data->area_spread)>)std::clamp(value, 0.0f, 3.1415927410f);
}

float SpotLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

void SpotLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->energy = (std::remove_reference_t<decltype(data->energy)>)value;
}

float SpotLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

void SpotLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->clipsta = (std::remove_reference_t<decltype(data->clipsta)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

float SpotLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->radius);
}

void SpotLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->radius = (std::remove_reference_t<decltype(data->radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

float SpotLight_shadow_filter_radius_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_filter_radius);
}

void SpotLight_shadow_filter_radius_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_filter_radius = (std::remove_reference_t<decltype(data->shadow_filter_radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

float SpotLight_shadow_maximum_resolution_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_maximum_resolution);
}

void SpotLight_shadow_maximum_resolution_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_maximum_resolution = (std::remove_reference_t<decltype(data->shadow_maximum_resolution)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool SpotLight_use_shadow_jitter_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 8388608) != 0);
}

void SpotLight_use_shadow_jitter_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 8388608); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(8388608)); }
}

float SpotLight_shadow_jitter_overblur_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_jitter_overblur);
}

void SpotLight_shadow_jitter_overblur_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_jitter_overblur = (std::remove_reference_t<decltype(data->shadow_jitter_overblur)>)std::clamp(value, 0.0f, 100.0f);
}

bool SpotLight_use_absolute_resolution_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 4194304) != 0);
}

void SpotLight_use_absolute_resolution_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 4194304); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(4194304)); }
}

bool SpotLight_use_square_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 128) != 0);
}

void SpotLight_use_square_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 128); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(128)); }
}

float SpotLight_spot_blend_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->spotblend);
}

void SpotLight_spot_blend_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->spotblend = (std::remove_reference_t<decltype(data->spotblend)>)std::clamp(value, 0.0f, 1.0f);
}

float SpotLight_spot_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->spotsize);
}

void SpotLight_spot_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->spotsize = (std::remove_reference_t<decltype(data->spotsize)>)std::clamp(value, 0.0174532924f, 3.1415927410f);
}

bool SpotLight_show_cone_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 131072) != 0);
}

void SpotLight_show_cone_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 131072); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(131072)); }
}

bool SpotLight_use_soft_falloff_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 2097152) != 0);
}

void SpotLight_use_soft_falloff_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 2097152); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(2097152)); }
}

float SunLight_angle_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->sun_angle);
}

void SunLight_angle_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->sun_angle = (std::remove_reference_t<decltype(data->sun_angle)>)std::clamp(value, 0.0f, 3.1415927410f);
}

float SunLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

void SunLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->energy = (std::remove_reference_t<decltype(data->energy)>)value;
}

float SunLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

void SunLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->clipsta = (std::remove_reference_t<decltype(data->clipsta)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

float SunLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->radius);
}

void SunLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->radius = (std::remove_reference_t<decltype(data->radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

float SunLight_shadow_filter_radius_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_filter_radius);
}

void SunLight_shadow_filter_radius_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_filter_radius = (std::remove_reference_t<decltype(data->shadow_filter_radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

float SunLight_shadow_maximum_resolution_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_maximum_resolution);
}

void SunLight_shadow_maximum_resolution_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_maximum_resolution = (std::remove_reference_t<decltype(data->shadow_maximum_resolution)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool SunLight_use_shadow_jitter_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return ((uint64_t(data->mode) & 8388608) != 0);
}

void SunLight_use_shadow_jitter_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 8388608); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(8388608)); }
}

float SunLight_shadow_jitter_overblur_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_jitter_overblur);
}

void SunLight_shadow_jitter_overblur_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->shadow_jitter_overblur = (std::remove_reference_t<decltype(data->shadow_jitter_overblur)>)std::clamp(value, 0.0f, 100.0f);
}

float SunLight_shadow_cascade_max_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->cascade_max_dist);
}

void SunLight_shadow_cascade_max_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->cascade_max_dist = (std::remove_reference_t<decltype(data->cascade_max_dist)>)std::clamp(value, 0.0f, FLT_MAX);
}

int SunLight_shadow_cascade_count_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->cascade_count);
}

void SunLight_shadow_cascade_count_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->cascade_count = (std::remove_reference_t<decltype(data->cascade_count)>)std::clamp(value, 1, 4);
}

float SunLight_shadow_cascade_exponent_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->cascade_exponent);
}

void SunLight_shadow_cascade_exponent_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->cascade_exponent = (std::remove_reference_t<decltype(data->cascade_exponent)>)std::clamp(value, 0.0f, 1.0f);
}

float SunLight_shadow_cascade_fade_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->cascade_fade);
}

void SunLight_shadow_cascade_fade_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->cascade_fade = (std::remove_reference_t<decltype(data->cascade_fade)>)std::clamp(value, 0.0f, 1.0f);
}

float Light_area_func(Light *_self, float matrix_world[16])
{
	return rna_Light_area(_self, matrix_world);
}

static void Light_area_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Light *_self;
	const float *matrix_world;
	float area;
	char *_data, *_retdata;
	
	_self = (Light *)_ptr->data;
	_data = (char *)_parms->data;
	matrix_world = ((const float *)_data);
	_data += 64;
	_retdata = _data;
	
	area = rna_Light_area(_self, matrix_world);
	*((float *)_retdata) = area;
}

/* Repeated prototypes to detect errors */

float rna_Light_area(Light *_self, float matrix_world[16]);





/* Light */
static EnumPropertyRNA rna_Light_type_;
PropertyRNA &rna_Light_type = reinterpret_cast<PropertyRNA &>(rna_Light_type_);

static BoolPropertyRNA rna_Light_use_temperature_;
PropertyRNA &rna_Light_use_temperature = reinterpret_cast<PropertyRNA &>(rna_Light_use_temperature_);

static FloatPropertyRNA rna_Light_color_;
PropertyRNA &rna_Light_color = reinterpret_cast<PropertyRNA &>(rna_Light_color_);

static FloatPropertyRNA rna_Light_temperature_;
PropertyRNA &rna_Light_temperature = reinterpret_cast<PropertyRNA &>(rna_Light_temperature_);

static FloatPropertyRNA rna_Light_temperature_color_;
PropertyRNA &rna_Light_temperature_color = reinterpret_cast<PropertyRNA &>(rna_Light_temperature_color_);

static FloatPropertyRNA rna_Light_specular_factor_;
PropertyRNA &rna_Light_specular_factor = reinterpret_cast<PropertyRNA &>(rna_Light_specular_factor_);

static FloatPropertyRNA rna_Light_diffuse_factor_;
PropertyRNA &rna_Light_diffuse_factor = reinterpret_cast<PropertyRNA &>(rna_Light_diffuse_factor_);

static FloatPropertyRNA rna_Light_transmission_factor_;
PropertyRNA &rna_Light_transmission_factor = reinterpret_cast<PropertyRNA &>(rna_Light_transmission_factor_);

static FloatPropertyRNA rna_Light_volume_factor_;
PropertyRNA &rna_Light_volume_factor = reinterpret_cast<PropertyRNA &>(rna_Light_volume_factor_);

static BoolPropertyRNA rna_Light_use_custom_distance_;
PropertyRNA &rna_Light_use_custom_distance = reinterpret_cast<PropertyRNA &>(rna_Light_use_custom_distance_);

static FloatPropertyRNA rna_Light_cutoff_distance_;
PropertyRNA &rna_Light_cutoff_distance = reinterpret_cast<PropertyRNA &>(rna_Light_cutoff_distance_);

static BoolPropertyRNA rna_Light_use_shadow_;
PropertyRNA &rna_Light_use_shadow = reinterpret_cast<PropertyRNA &>(rna_Light_use_shadow_);

static FloatPropertyRNA rna_Light_exposure_;
PropertyRNA &rna_Light_exposure = reinterpret_cast<PropertyRNA &>(rna_Light_exposure_);

static BoolPropertyRNA rna_Light_normalize_;
PropertyRNA &rna_Light_normalize = reinterpret_cast<PropertyRNA &>(rna_Light_normalize_);

static PointerPropertyRNA rna_Light_node_tree_;
PropertyRNA &rna_Light_node_tree = reinterpret_cast<PropertyRNA &>(rna_Light_node_tree_);

static BoolPropertyRNA rna_Light_use_nodes_;
PropertyRNA &rna_Light_use_nodes = reinterpret_cast<PropertyRNA &>(rna_Light_use_nodes_);

static PointerPropertyRNA rna_Light_animation_data_;
PropertyRNA &rna_Light_animation_data = reinterpret_cast<PropertyRNA &>(rna_Light_animation_data_);

static FloatPropertyRNA rna_Light_area_matrix_world_;
PropertyRNA &rna_Light_area_matrix_world = reinterpret_cast<PropertyRNA &>(rna_Light_area_matrix_world_);

static FloatPropertyRNA rna_Light_area_area_;
PropertyRNA &rna_Light_area_area = reinterpret_cast<PropertyRNA &>(rna_Light_area_area_);

FunctionRNA *rna_Light_area_func;
StructRNA *RNA_Light;
void register_struct_Light(BlenderRNA &brna)
{
	rna_Light_type_ = {
		{&rna_Light_use_temperature, 	nullptr,
		-1, "type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of light",
		0, "Light",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, type), RawPropertyType(1), nullptr},
		Light_type_get, Light_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_light_type_items, 4, 0
	};

	rna_Light_use_temperature_ = {
		{&rna_Light_color, 	&rna_Light_type,
		-1, "use_temperature", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Temperature",
		"Use blackbody temperature to define a natural light color",
		0, "Light",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Light_use_temperature_get, Light_use_temperature_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_Light_color_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_Light_color_ = {
		{&rna_Light_temperature, 	&rna_Light_use_temperature,
		-1, "color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Light color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, r), RawPropertyType(5), nullptr},
		nullptr, nullptr, Light_color_get, Light_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, rna_Light_color_default
	};

	rna_Light_temperature_ = {
		{&rna_Light_temperature_color, 	&rna_Light_color,
		-1, "temperature", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Temperature",
		"Light color temperature in Kelvin",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_TEMPERATURE) | int(PROP_UNIT_COLOR_TEMPERATURE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, temperature), RawPropertyType(5), nullptr},
		Light_temperature_get, Light_temperature_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 800.0f, 20000.0f, 800.0f, 20000.0f, 400.0f, 1, nullptr, nullptr, 6500.0f, nullptr
	};

	static float rna_Light_temperature_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Light_temperature_color_ = {
		{&rna_Light_specular_factor, 	&rna_Light_temperature,
		-1, "temperature_color", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Temperature Color",
		"Color from Temperature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Light_temperature_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Light_temperature_color_default
	};

	rna_Light_specular_factor_ = {
		{&rna_Light_diffuse_factor, 	&rna_Light_temperature_color,
		-1, "specular_factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Specular Factor",
		"Specular reflection multiplier",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, spec_fac), RawPropertyType(5), nullptr},
		Light_specular_factor_get, Light_specular_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Light_diffuse_factor_ = {
		{&rna_Light_transmission_factor, 	&rna_Light_specular_factor,
		-1, "diffuse_factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Diffuse Factor",
		"Diffuse reflection multiplier",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, diff_fac), RawPropertyType(5), nullptr},
		Light_diffuse_factor_get, Light_diffuse_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Light_transmission_factor_ = {
		{&rna_Light_volume_factor, 	&rna_Light_diffuse_factor,
		-1, "transmission_factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Transmission Factor",
		"Transmission light multiplier",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, transmission_fac), RawPropertyType(5), nullptr},
		Light_transmission_factor_get, Light_transmission_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Light_volume_factor_ = {
		{&rna_Light_use_custom_distance, 	&rna_Light_transmission_factor,
		-1, "volume_factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Volume Factor",
		"Volume light multiplier",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, volume_fac), RawPropertyType(5), nullptr},
		Light_volume_factor_get, Light_volume_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Light_use_custom_distance_ = {
		{&rna_Light_cutoff_distance, 	&rna_Light_volume_factor,
		-1, "use_custom_distance", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Custom Attenuation",
		"Use custom attenuation distance instead of global light threshold",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Light_use_custom_distance_get, Light_use_custom_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Light_cutoff_distance_ = {
		{&rna_Light_use_shadow, 	&rna_Light_use_custom_distance,
		-1, "cutoff_distance", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Cutoff Distance",
		"Distance at which the light influence will be set to 0",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, att_dist), RawPropertyType(5), nullptr},
		Light_cutoff_distance_get, Light_cutoff_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 40.0f, nullptr
	};

	rna_Light_use_shadow_ = {
		{&rna_Light_exposure, 	&rna_Light_cutoff_distance,
		-1, "use_shadow", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "use_shadow",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Light_use_shadow_get, Light_use_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Light_exposure_ = {
		{&rna_Light_normalize, 	&rna_Light_use_shadow,
		-1, "exposure", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Exposure",
		"Scales the power of the light exponentially, multiplying the intensity by 2^exposure",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, exposure), RawPropertyType(5), nullptr},
		Light_exposure_get, Light_exposure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -32.0f, 32.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Light_normalize_ = {
		{&rna_Light_node_tree, 	&rna_Light_exposure,
		-1, "normalize", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Normalize",
		"Normalize intensity by light area, for consistent total light output regardless of size and shape",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Light_normalize_get, Light_normalize_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Light_node_tree_ = {
		{&rna_Light_use_nodes, 	&rna_Light_normalize,
		-1, "node_tree", 8388672, 1, 0, 32, 0, PropertyPathTemplateType(0), "Node Tree",
		"Node tree for node based lights",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Light_node_tree_get, nullptr, nullptr, nullptr,RNA_NodeTree
	};

	static const DeprecatedRNA rna_Light_use_nodes_deprecated = {
	"Unused but kept for compatibility reasons. Setting the property has no effect, and getting it always returns True.",
		510, 600,
};

	rna_Light_use_nodes_ = {
		{&rna_Light_animation_data, 	&rna_Light_node_tree,
		-1, "use_nodes", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Nodes",
		"Use shader nodes to render the light",
		0, "*",
		&rna_Light_use_nodes_deprecated,		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Light_use_nodes_get, Light_use_nodes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Light_animation_data_ = {
		{nullptr, 	&rna_Light_use_nodes,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Light_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_Light;
	srna->cont.properties = {&rna_Light_type, &rna_Light_animation_data};
	srna->identifier = "Light";
	srna->flag = 519;
	srna->name = "Light";
	srna->description = "Light data-block for lighting a scene";
	srna->translation_context = "Light";
	srna->icon = 186;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_Light_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	static float rna_Light_area_matrix_world_default[16] = {
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
	rna_Light_area_matrix_world_ = {
		{&rna_Light_area_area, 	nullptr,
		-1, "matrix_world", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Object to world space transformation matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Light_area_matrix_world_default
	};
	rna_Light_area_area_ = {
		{nullptr, 	&rna_Light_area_matrix_world,
		-1, "area", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "area",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Light_area_matrix_world, &rna_Light_area_area};
		func->identifier = "area";
		func->description = "Compute light area based on type and shape. The normalize option divides light intensity by this area";
		func->call = Light_area_call;
		func->c_ret = &rna_Light_area_area;
		rna_Light_area_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Point Light */
static BoolPropertyRNA rna_PointLight_use_soft_falloff_;
PropertyRNA &rna_PointLight_use_soft_falloff = reinterpret_cast<PropertyRNA &>(rna_PointLight_use_soft_falloff_);

static FloatPropertyRNA rna_PointLight_energy_;
PropertyRNA &rna_PointLight_energy = reinterpret_cast<PropertyRNA &>(rna_PointLight_energy_);

static FloatPropertyRNA rna_PointLight_shadow_buffer_clip_start_;
PropertyRNA &rna_PointLight_shadow_buffer_clip_start = reinterpret_cast<PropertyRNA &>(rna_PointLight_shadow_buffer_clip_start_);

static FloatPropertyRNA rna_PointLight_shadow_soft_size_;
PropertyRNA &rna_PointLight_shadow_soft_size = reinterpret_cast<PropertyRNA &>(rna_PointLight_shadow_soft_size_);

static FloatPropertyRNA rna_PointLight_shadow_filter_radius_;
PropertyRNA &rna_PointLight_shadow_filter_radius = reinterpret_cast<PropertyRNA &>(rna_PointLight_shadow_filter_radius_);

static FloatPropertyRNA rna_PointLight_shadow_maximum_resolution_;
PropertyRNA &rna_PointLight_shadow_maximum_resolution = reinterpret_cast<PropertyRNA &>(rna_PointLight_shadow_maximum_resolution_);

static BoolPropertyRNA rna_PointLight_use_shadow_jitter_;
PropertyRNA &rna_PointLight_use_shadow_jitter = reinterpret_cast<PropertyRNA &>(rna_PointLight_use_shadow_jitter_);

static FloatPropertyRNA rna_PointLight_shadow_jitter_overblur_;
PropertyRNA &rna_PointLight_shadow_jitter_overblur = reinterpret_cast<PropertyRNA &>(rna_PointLight_shadow_jitter_overblur_);

static BoolPropertyRNA rna_PointLight_use_absolute_resolution_;
PropertyRNA &rna_PointLight_use_absolute_resolution = reinterpret_cast<PropertyRNA &>(rna_PointLight_use_absolute_resolution_);

StructRNA *RNA_PointLight;
void register_struct_PointLight(BlenderRNA &brna)
{
	rna_PointLight_use_soft_falloff_ = {
		{&rna_PointLight_energy, 	nullptr,
		-1, "use_soft_falloff", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Soft Falloff",
		"Apply falloff to avoid sharp edges when the light geometry intersects with other objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointLight_use_soft_falloff_get, PointLight_use_soft_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_PointLight_energy_ = {
		{&rna_PointLight_shadow_buffer_clip_start, 	&rna_PointLight_use_soft_falloff,
		-1, "energy", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Power",
		"Light energy emitted over the entire area of the light in all directions, in units of radiant power (W)",
		0, "Light",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, energy), RawPropertyType(5), nullptr},
		PointLight_energy_get, PointLight_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_PointLight_shadow_buffer_clip_start_ = {
		{&rna_PointLight_shadow_soft_size, 	&rna_PointLight_energy,
		-1, "shadow_buffer_clip_start", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Buffer Clip Start",
		"Shadow map clip start, below which objects will not generate shadows",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, clipsta), RawPropertyType(5), nullptr},
		PointLight_shadow_buffer_clip_start_get, PointLight_shadow_buffer_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0500000007f, nullptr
	};

	rna_PointLight_shadow_soft_size_ = {
		{&rna_PointLight_shadow_filter_radius, 	&rna_PointLight_shadow_buffer_clip_start,
		-1, "shadow_soft_size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Soft Size",
		"Light size for ray shadow sampling (Raytraced shadows)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, radius), RawPropertyType(5), nullptr},
		PointLight_shadow_soft_size_get, PointLight_shadow_soft_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PointLight_shadow_filter_radius_ = {
		{&rna_PointLight_shadow_maximum_resolution, 	&rna_PointLight_shadow_soft_size,
		-1, "shadow_filter_radius", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Filter Radius",
		"Blur shadow aliasing using Percentage Closer Filtering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_filter_radius), RawPropertyType(5), nullptr},
		PointLight_shadow_filter_radius_get, PointLight_shadow_filter_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_PointLight_shadow_maximum_resolution_ = {
		{&rna_PointLight_use_shadow_jitter, 	&rna_PointLight_shadow_filter_radius,
		-1, "shadow_maximum_resolution", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadows Resolution Limit",
		"Minimum size of a shadow map pixel. Higher values use less memory at the cost of shadow quality.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_maximum_resolution), RawPropertyType(5), nullptr},
		PointLight_shadow_maximum_resolution_get, PointLight_shadow_maximum_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 0.0199999996f, 0.0f, FLT_MAX, 0.0500000007f, 4, nullptr, nullptr, 0.0010000000f, nullptr
	};

	rna_PointLight_use_shadow_jitter_ = {
		{&rna_PointLight_shadow_jitter_overblur, 	&rna_PointLight_shadow_maximum_resolution,
		-1, "use_shadow_jitter", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shadow Jitter",
		"Enable jittered soft shadows to increase shadow precision (disabled in viewport unless enabled in the render settings). Has a high performance impact.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointLight_use_shadow_jitter_get, PointLight_use_shadow_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointLight_shadow_jitter_overblur_ = {
		{&rna_PointLight_use_absolute_resolution, 	&rna_PointLight_use_shadow_jitter,
		-1, "shadow_jitter_overblur", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Jitter Overblur",
		"Apply shadow tracing to each jittered sample to reduce under-sampling artifacts",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_jitter_overblur), RawPropertyType(5), nullptr},
		PointLight_shadow_jitter_overblur_get, PointLight_shadow_jitter_overblur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 100.0f, 10.0f, 0, nullptr, nullptr, 10.0f, nullptr
	};

	rna_PointLight_use_absolute_resolution_ = {
		{nullptr, 	&rna_PointLight_shadow_jitter_overblur,
		-1, "use_absolute_resolution", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Absolute Resolution Limit",
		"Limit the resolution at 1 unit from the light origin instead of relative to the shadowed pixel",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointLight_use_absolute_resolution_get, PointLight_use_absolute_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_PointLight;
	srna->cont.properties = {&rna_PointLight_use_soft_falloff, &rna_PointLight_use_absolute_resolution};
	srna->identifier = "PointLight";
	srna->flag = 519;
	srna->name = "Point Light";
	srna->description = "Omnidirectional point Light";
	srna->translation_context = "*";
	srna->icon = 309;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Light;
	srna->refine = rna_Light_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Area Light */
static FloatPropertyRNA rna_AreaLight_energy_;
PropertyRNA &rna_AreaLight_energy = reinterpret_cast<PropertyRNA &>(rna_AreaLight_energy_);

static FloatPropertyRNA rna_AreaLight_shadow_buffer_clip_start_;
PropertyRNA &rna_AreaLight_shadow_buffer_clip_start = reinterpret_cast<PropertyRNA &>(rna_AreaLight_shadow_buffer_clip_start_);

static FloatPropertyRNA rna_AreaLight_shadow_soft_size_;
PropertyRNA &rna_AreaLight_shadow_soft_size = reinterpret_cast<PropertyRNA &>(rna_AreaLight_shadow_soft_size_);

static FloatPropertyRNA rna_AreaLight_shadow_filter_radius_;
PropertyRNA &rna_AreaLight_shadow_filter_radius = reinterpret_cast<PropertyRNA &>(rna_AreaLight_shadow_filter_radius_);

static FloatPropertyRNA rna_AreaLight_shadow_maximum_resolution_;
PropertyRNA &rna_AreaLight_shadow_maximum_resolution = reinterpret_cast<PropertyRNA &>(rna_AreaLight_shadow_maximum_resolution_);

static BoolPropertyRNA rna_AreaLight_use_shadow_jitter_;
PropertyRNA &rna_AreaLight_use_shadow_jitter = reinterpret_cast<PropertyRNA &>(rna_AreaLight_use_shadow_jitter_);

static FloatPropertyRNA rna_AreaLight_shadow_jitter_overblur_;
PropertyRNA &rna_AreaLight_shadow_jitter_overblur = reinterpret_cast<PropertyRNA &>(rna_AreaLight_shadow_jitter_overblur_);

static BoolPropertyRNA rna_AreaLight_use_absolute_resolution_;
PropertyRNA &rna_AreaLight_use_absolute_resolution = reinterpret_cast<PropertyRNA &>(rna_AreaLight_use_absolute_resolution_);

static EnumPropertyRNA rna_AreaLight_shape_;
PropertyRNA &rna_AreaLight_shape = reinterpret_cast<PropertyRNA &>(rna_AreaLight_shape_);

static FloatPropertyRNA rna_AreaLight_size_;
PropertyRNA &rna_AreaLight_size = reinterpret_cast<PropertyRNA &>(rna_AreaLight_size_);

static FloatPropertyRNA rna_AreaLight_size_y_;
PropertyRNA &rna_AreaLight_size_y = reinterpret_cast<PropertyRNA &>(rna_AreaLight_size_y_);

static FloatPropertyRNA rna_AreaLight_spread_;
PropertyRNA &rna_AreaLight_spread = reinterpret_cast<PropertyRNA &>(rna_AreaLight_spread_);

StructRNA *RNA_AreaLight;
void register_struct_AreaLight(BlenderRNA &brna)
{
	rna_AreaLight_energy_ = {
		{&rna_AreaLight_shadow_buffer_clip_start, 	nullptr,
		-1, "energy", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Power",
		"Light energy emitted over the entire area of the light in all directions, in units of radiant power (W)",
		0, "Light",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, energy), RawPropertyType(5), nullptr},
		AreaLight_energy_get, AreaLight_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_AreaLight_shadow_buffer_clip_start_ = {
		{&rna_AreaLight_shadow_soft_size, 	&rna_AreaLight_energy,
		-1, "shadow_buffer_clip_start", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Buffer Clip Start",
		"Shadow map clip start, below which objects will not generate shadows",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, clipsta), RawPropertyType(5), nullptr},
		AreaLight_shadow_buffer_clip_start_get, AreaLight_shadow_buffer_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0500000007f, nullptr
	};

	rna_AreaLight_shadow_soft_size_ = {
		{&rna_AreaLight_shadow_filter_radius, 	&rna_AreaLight_shadow_buffer_clip_start,
		-1, "shadow_soft_size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Soft Size",
		"Light size for ray shadow sampling (Raytraced shadows)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, radius), RawPropertyType(5), nullptr},
		AreaLight_shadow_soft_size_get, AreaLight_shadow_soft_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_AreaLight_shadow_filter_radius_ = {
		{&rna_AreaLight_shadow_maximum_resolution, 	&rna_AreaLight_shadow_soft_size,
		-1, "shadow_filter_radius", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Filter Radius",
		"Blur shadow aliasing using Percentage Closer Filtering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_filter_radius), RawPropertyType(5), nullptr},
		AreaLight_shadow_filter_radius_get, AreaLight_shadow_filter_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_AreaLight_shadow_maximum_resolution_ = {
		{&rna_AreaLight_use_shadow_jitter, 	&rna_AreaLight_shadow_filter_radius,
		-1, "shadow_maximum_resolution", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadows Resolution Limit",
		"Minimum size of a shadow map pixel. Higher values use less memory at the cost of shadow quality.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_maximum_resolution), RawPropertyType(5), nullptr},
		AreaLight_shadow_maximum_resolution_get, AreaLight_shadow_maximum_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 0.0199999996f, 0.0f, FLT_MAX, 0.0500000007f, 4, nullptr, nullptr, 0.0010000000f, nullptr
	};

	rna_AreaLight_use_shadow_jitter_ = {
		{&rna_AreaLight_shadow_jitter_overblur, 	&rna_AreaLight_shadow_maximum_resolution,
		-1, "use_shadow_jitter", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shadow Jitter",
		"Enable jittered soft shadows to increase shadow precision (disabled in viewport unless enabled in the render settings). Has a high performance impact.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AreaLight_use_shadow_jitter_get, AreaLight_use_shadow_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AreaLight_shadow_jitter_overblur_ = {
		{&rna_AreaLight_use_absolute_resolution, 	&rna_AreaLight_use_shadow_jitter,
		-1, "shadow_jitter_overblur", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Jitter Overblur",
		"Apply shadow tracing to each jittered sample to reduce under-sampling artifacts",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_jitter_overblur), RawPropertyType(5), nullptr},
		AreaLight_shadow_jitter_overblur_get, AreaLight_shadow_jitter_overblur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 100.0f, 10.0f, 0, nullptr, nullptr, 10.0f, nullptr
	};

	rna_AreaLight_use_absolute_resolution_ = {
		{&rna_AreaLight_shape, 	&rna_AreaLight_shadow_jitter_overblur,
		-1, "use_absolute_resolution", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Absolute Resolution Limit",
		"Limit the resolution at 1 unit from the light origin instead of relative to the shadowed pixel",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AreaLight_use_absolute_resolution_get, AreaLight_use_absolute_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_AreaLight_shape_items[5] = {
		{0, "SQUARE", 0, "Square", ""	},
		{1, "RECTANGLE", 0, "Rectangle", ""	},
		{4, "DISK", 0, "Disk", ""	},
		{5, "ELLIPSE", 0, "Ellipse", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_AreaLight_shape_ = {
		{&rna_AreaLight_size, 	&rna_AreaLight_use_absolute_resolution,
		-1, "shape", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shape",
		"Shape of the area Light",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, area_shape), RawPropertyType(1), nullptr},
		AreaLight_shape_get, AreaLight_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AreaLight_shape_items, 4, 0
	};

	rna_AreaLight_size_ = {
		{&rna_AreaLight_size_y, 	&rna_AreaLight_shape,
		-1, "size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Size of the area of the area light, X direction size for rectangle shapes",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, area_size), RawPropertyType(5), nullptr},
		AreaLight_size_get, AreaLight_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.2500000000f, nullptr
	};

	rna_AreaLight_size_y_ = {
		{&rna_AreaLight_spread, 	&rna_AreaLight_size,
		-1, "size_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Size Y",
		"Size of the area of the area light in the Y direction for rectangle shapes",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, area_sizey), RawPropertyType(5), nullptr},
		AreaLight_size_y_get, AreaLight_size_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.2500000000f, nullptr
	};

	rna_AreaLight_spread_ = {
		{nullptr, 	&rna_AreaLight_size_y,
		-1, "spread", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Spread",
		"How widely the emitted light fans out, as in the case of a gridded softbox",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, area_spread), RawPropertyType(5), nullptr},
		AreaLight_spread_get, AreaLight_spread_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 3.1415927410f, nullptr
	};

	StructRNA *srna = RNA_AreaLight;
	srna->cont.properties = {&rna_AreaLight_energy, &rna_AreaLight_spread};
	srna->identifier = "AreaLight";
	srna->flag = 519;
	srna->name = "Area Light";
	srna->description = "Directional area Light";
	srna->translation_context = "*";
	srna->icon = 307;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Light;
	srna->refine = rna_Light_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Spot Light */
static FloatPropertyRNA rna_SpotLight_energy_;
PropertyRNA &rna_SpotLight_energy = reinterpret_cast<PropertyRNA &>(rna_SpotLight_energy_);

static FloatPropertyRNA rna_SpotLight_shadow_buffer_clip_start_;
PropertyRNA &rna_SpotLight_shadow_buffer_clip_start = reinterpret_cast<PropertyRNA &>(rna_SpotLight_shadow_buffer_clip_start_);

static FloatPropertyRNA rna_SpotLight_shadow_soft_size_;
PropertyRNA &rna_SpotLight_shadow_soft_size = reinterpret_cast<PropertyRNA &>(rna_SpotLight_shadow_soft_size_);

static FloatPropertyRNA rna_SpotLight_shadow_filter_radius_;
PropertyRNA &rna_SpotLight_shadow_filter_radius = reinterpret_cast<PropertyRNA &>(rna_SpotLight_shadow_filter_radius_);

static FloatPropertyRNA rna_SpotLight_shadow_maximum_resolution_;
PropertyRNA &rna_SpotLight_shadow_maximum_resolution = reinterpret_cast<PropertyRNA &>(rna_SpotLight_shadow_maximum_resolution_);

static BoolPropertyRNA rna_SpotLight_use_shadow_jitter_;
PropertyRNA &rna_SpotLight_use_shadow_jitter = reinterpret_cast<PropertyRNA &>(rna_SpotLight_use_shadow_jitter_);

static FloatPropertyRNA rna_SpotLight_shadow_jitter_overblur_;
PropertyRNA &rna_SpotLight_shadow_jitter_overblur = reinterpret_cast<PropertyRNA &>(rna_SpotLight_shadow_jitter_overblur_);

static BoolPropertyRNA rna_SpotLight_use_absolute_resolution_;
PropertyRNA &rna_SpotLight_use_absolute_resolution = reinterpret_cast<PropertyRNA &>(rna_SpotLight_use_absolute_resolution_);

static BoolPropertyRNA rna_SpotLight_use_square_;
PropertyRNA &rna_SpotLight_use_square = reinterpret_cast<PropertyRNA &>(rna_SpotLight_use_square_);

static FloatPropertyRNA rna_SpotLight_spot_blend_;
PropertyRNA &rna_SpotLight_spot_blend = reinterpret_cast<PropertyRNA &>(rna_SpotLight_spot_blend_);

static FloatPropertyRNA rna_SpotLight_spot_size_;
PropertyRNA &rna_SpotLight_spot_size = reinterpret_cast<PropertyRNA &>(rna_SpotLight_spot_size_);

static BoolPropertyRNA rna_SpotLight_show_cone_;
PropertyRNA &rna_SpotLight_show_cone = reinterpret_cast<PropertyRNA &>(rna_SpotLight_show_cone_);

static BoolPropertyRNA rna_SpotLight_use_soft_falloff_;
PropertyRNA &rna_SpotLight_use_soft_falloff = reinterpret_cast<PropertyRNA &>(rna_SpotLight_use_soft_falloff_);

StructRNA *RNA_SpotLight;
void register_struct_SpotLight(BlenderRNA &brna)
{
	rna_SpotLight_energy_ = {
		{&rna_SpotLight_shadow_buffer_clip_start, 	nullptr,
		-1, "energy", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Power",
		"The energy this light would emit over its entire area if it wasn\'t limited by the spot angle, in units of radiant power (W)",
		0, "Light",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, energy), RawPropertyType(5), nullptr},
		SpotLight_energy_get, SpotLight_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_SpotLight_shadow_buffer_clip_start_ = {
		{&rna_SpotLight_shadow_soft_size, 	&rna_SpotLight_energy,
		-1, "shadow_buffer_clip_start", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Buffer Clip Start",
		"Shadow map clip start, below which objects will not generate shadows",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, clipsta), RawPropertyType(5), nullptr},
		SpotLight_shadow_buffer_clip_start_get, SpotLight_shadow_buffer_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0500000007f, nullptr
	};

	rna_SpotLight_shadow_soft_size_ = {
		{&rna_SpotLight_shadow_filter_radius, 	&rna_SpotLight_shadow_buffer_clip_start,
		-1, "shadow_soft_size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Soft Size",
		"Light size for ray shadow sampling (Raytraced shadows)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, radius), RawPropertyType(5), nullptr},
		SpotLight_shadow_soft_size_get, SpotLight_shadow_soft_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SpotLight_shadow_filter_radius_ = {
		{&rna_SpotLight_shadow_maximum_resolution, 	&rna_SpotLight_shadow_soft_size,
		-1, "shadow_filter_radius", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Filter Radius",
		"Blur shadow aliasing using Percentage Closer Filtering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_filter_radius), RawPropertyType(5), nullptr},
		SpotLight_shadow_filter_radius_get, SpotLight_shadow_filter_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_SpotLight_shadow_maximum_resolution_ = {
		{&rna_SpotLight_use_shadow_jitter, 	&rna_SpotLight_shadow_filter_radius,
		-1, "shadow_maximum_resolution", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadows Resolution Limit",
		"Minimum size of a shadow map pixel. Higher values use less memory at the cost of shadow quality.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_maximum_resolution), RawPropertyType(5), nullptr},
		SpotLight_shadow_maximum_resolution_get, SpotLight_shadow_maximum_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 0.0199999996f, 0.0f, FLT_MAX, 0.0500000007f, 4, nullptr, nullptr, 0.0010000000f, nullptr
	};

	rna_SpotLight_use_shadow_jitter_ = {
		{&rna_SpotLight_shadow_jitter_overblur, 	&rna_SpotLight_shadow_maximum_resolution,
		-1, "use_shadow_jitter", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shadow Jitter",
		"Enable jittered soft shadows to increase shadow precision (disabled in viewport unless enabled in the render settings). Has a high performance impact.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SpotLight_use_shadow_jitter_get, SpotLight_use_shadow_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SpotLight_shadow_jitter_overblur_ = {
		{&rna_SpotLight_use_absolute_resolution, 	&rna_SpotLight_use_shadow_jitter,
		-1, "shadow_jitter_overblur", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Jitter Overblur",
		"Apply shadow tracing to each jittered sample to reduce under-sampling artifacts",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_jitter_overblur), RawPropertyType(5), nullptr},
		SpotLight_shadow_jitter_overblur_get, SpotLight_shadow_jitter_overblur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 100.0f, 10.0f, 0, nullptr, nullptr, 10.0f, nullptr
	};

	rna_SpotLight_use_absolute_resolution_ = {
		{&rna_SpotLight_use_square, 	&rna_SpotLight_shadow_jitter_overblur,
		-1, "use_absolute_resolution", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Absolute Resolution Limit",
		"Limit the resolution at 1 unit from the light origin instead of relative to the shadowed pixel",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SpotLight_use_absolute_resolution_get, SpotLight_use_absolute_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SpotLight_use_square_ = {
		{&rna_SpotLight_spot_blend, 	&rna_SpotLight_use_absolute_resolution,
		-1, "use_square", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Square",
		"Cast a square spot light shape",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SpotLight_use_square_get, SpotLight_use_square_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SpotLight_spot_blend_ = {
		{&rna_SpotLight_spot_size, 	&rna_SpotLight_use_square,
		-1, "spot_blend", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Spot Blend",
		"The softness of the spotlight edge",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, spotblend), RawPropertyType(5), nullptr},
		SpotLight_spot_blend_get, SpotLight_spot_blend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.1500000060f, nullptr
	};

	rna_SpotLight_spot_size_ = {
		{&rna_SpotLight_show_cone, 	&rna_SpotLight_spot_blend,
		-1, "spot_size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Beam Angle",
		"Angular diameter of the spotlight beam",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, spotsize), RawPropertyType(5), nullptr},
		SpotLight_spot_size_get, SpotLight_spot_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0174532924f, 3.1415927410f, 0.0174532924f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 0.7853981853f, nullptr
	};

	rna_SpotLight_show_cone_ = {
		{&rna_SpotLight_use_soft_falloff, 	&rna_SpotLight_spot_size,
		-1, "show_cone", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Cone",
		"Display transparent cone in 3D view to visualize which objects are contained in it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SpotLight_show_cone_get, SpotLight_show_cone_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SpotLight_use_soft_falloff_ = {
		{nullptr, 	&rna_SpotLight_show_cone,
		-1, "use_soft_falloff", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Soft Falloff",
		"Apply falloff to avoid sharp edges when the light geometry intersects with other objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SpotLight_use_soft_falloff_get, SpotLight_use_soft_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	StructRNA *srna = RNA_SpotLight;
	srna->cont.properties = {&rna_SpotLight_energy, &rna_SpotLight_use_soft_falloff};
	srna->identifier = "SpotLight";
	srna->flag = 519;
	srna->name = "Spot Light";
	srna->description = "Directional cone Light";
	srna->translation_context = "*";
	srna->icon = 310;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Light;
	srna->refine = rna_Light_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Sun Light */
static FloatPropertyRNA rna_SunLight_angle_;
PropertyRNA &rna_SunLight_angle = reinterpret_cast<PropertyRNA &>(rna_SunLight_angle_);

static FloatPropertyRNA rna_SunLight_energy_;
PropertyRNA &rna_SunLight_energy = reinterpret_cast<PropertyRNA &>(rna_SunLight_energy_);

static FloatPropertyRNA rna_SunLight_shadow_buffer_clip_start_;
PropertyRNA &rna_SunLight_shadow_buffer_clip_start = reinterpret_cast<PropertyRNA &>(rna_SunLight_shadow_buffer_clip_start_);

static FloatPropertyRNA rna_SunLight_shadow_soft_size_;
PropertyRNA &rna_SunLight_shadow_soft_size = reinterpret_cast<PropertyRNA &>(rna_SunLight_shadow_soft_size_);

static FloatPropertyRNA rna_SunLight_shadow_filter_radius_;
PropertyRNA &rna_SunLight_shadow_filter_radius = reinterpret_cast<PropertyRNA &>(rna_SunLight_shadow_filter_radius_);

static FloatPropertyRNA rna_SunLight_shadow_maximum_resolution_;
PropertyRNA &rna_SunLight_shadow_maximum_resolution = reinterpret_cast<PropertyRNA &>(rna_SunLight_shadow_maximum_resolution_);

static BoolPropertyRNA rna_SunLight_use_shadow_jitter_;
PropertyRNA &rna_SunLight_use_shadow_jitter = reinterpret_cast<PropertyRNA &>(rna_SunLight_use_shadow_jitter_);

static FloatPropertyRNA rna_SunLight_shadow_jitter_overblur_;
PropertyRNA &rna_SunLight_shadow_jitter_overblur = reinterpret_cast<PropertyRNA &>(rna_SunLight_shadow_jitter_overblur_);

static FloatPropertyRNA rna_SunLight_shadow_cascade_max_distance_;
PropertyRNA &rna_SunLight_shadow_cascade_max_distance = reinterpret_cast<PropertyRNA &>(rna_SunLight_shadow_cascade_max_distance_);

static IntPropertyRNA rna_SunLight_shadow_cascade_count_;
PropertyRNA &rna_SunLight_shadow_cascade_count = reinterpret_cast<PropertyRNA &>(rna_SunLight_shadow_cascade_count_);

static FloatPropertyRNA rna_SunLight_shadow_cascade_exponent_;
PropertyRNA &rna_SunLight_shadow_cascade_exponent = reinterpret_cast<PropertyRNA &>(rna_SunLight_shadow_cascade_exponent_);

static FloatPropertyRNA rna_SunLight_shadow_cascade_fade_;
PropertyRNA &rna_SunLight_shadow_cascade_fade = reinterpret_cast<PropertyRNA &>(rna_SunLight_shadow_cascade_fade_);

StructRNA *RNA_SunLight;
void register_struct_SunLight(BlenderRNA &brna)
{
	rna_SunLight_angle_ = {
		{&rna_SunLight_energy, 	nullptr,
		-1, "angle", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Angle",
		"Angular diameter of the Sun as seen from the Earth",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, sun_angle), RawPropertyType(5), nullptr},
		SunLight_angle_get, SunLight_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 0.0091804322f, nullptr
	};

	rna_SunLight_energy_ = {
		{&rna_SunLight_shadow_buffer_clip_start, 	&rna_SunLight_angle,
		-1, "energy", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"Sunlight strength in watts per meter squared (W/m²)",
		0, "Light",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, energy), RawPropertyType(5), nullptr},
		SunLight_energy_get, SunLight_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_SunLight_shadow_buffer_clip_start_ = {
		{&rna_SunLight_shadow_soft_size, 	&rna_SunLight_energy,
		-1, "shadow_buffer_clip_start", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Buffer Clip Start",
		"Shadow map clip start, below which objects will not generate shadows",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, clipsta), RawPropertyType(5), nullptr},
		SunLight_shadow_buffer_clip_start_get, SunLight_shadow_buffer_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0500000007f, nullptr
	};

	rna_SunLight_shadow_soft_size_ = {
		{&rna_SunLight_shadow_filter_radius, 	&rna_SunLight_shadow_buffer_clip_start,
		-1, "shadow_soft_size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Soft Size",
		"Light size for ray shadow sampling (Raytraced shadows)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, radius), RawPropertyType(5), nullptr},
		SunLight_shadow_soft_size_get, SunLight_shadow_soft_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SunLight_shadow_filter_radius_ = {
		{&rna_SunLight_shadow_maximum_resolution, 	&rna_SunLight_shadow_soft_size,
		-1, "shadow_filter_radius", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Filter Radius",
		"Blur shadow aliasing using Percentage Closer Filtering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_filter_radius), RawPropertyType(5), nullptr},
		SunLight_shadow_filter_radius_get, SunLight_shadow_filter_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_SunLight_shadow_maximum_resolution_ = {
		{&rna_SunLight_use_shadow_jitter, 	&rna_SunLight_shadow_filter_radius,
		-1, "shadow_maximum_resolution", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadows Resolution Limit",
		"Minimum size of a shadow map pixel. Higher values use less memory at the cost of shadow quality.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_maximum_resolution), RawPropertyType(5), nullptr},
		SunLight_shadow_maximum_resolution_get, SunLight_shadow_maximum_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 0.0199999996f, 0.0f, FLT_MAX, 0.0500000007f, 4, nullptr, nullptr, 0.0010000000f, nullptr
	};

	rna_SunLight_use_shadow_jitter_ = {
		{&rna_SunLight_shadow_jitter_overblur, 	&rna_SunLight_shadow_maximum_resolution,
		-1, "use_shadow_jitter", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shadow Jitter",
		"Enable jittered soft shadows to increase shadow precision (disabled in viewport unless enabled in the render settings). Has a high performance impact.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SunLight_use_shadow_jitter_get, SunLight_use_shadow_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SunLight_shadow_jitter_overblur_ = {
		{&rna_SunLight_shadow_cascade_max_distance, 	&rna_SunLight_use_shadow_jitter,
		-1, "shadow_jitter_overblur", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Jitter Overblur",
		"Apply shadow tracing to each jittered sample to reduce under-sampling artifacts",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, shadow_jitter_overblur), RawPropertyType(5), nullptr},
		SunLight_shadow_jitter_overblur_get, SunLight_shadow_jitter_overblur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 100.0f, 10.0f, 0, nullptr, nullptr, 10.0f, nullptr
	};

	rna_SunLight_shadow_cascade_max_distance_ = {
		{&rna_SunLight_shadow_cascade_count, 	&rna_SunLight_shadow_jitter_overblur,
		-1, "shadow_cascade_max_distance", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Cascade Max Distance",
		"End distance of the cascaded shadow map (only in perspective view)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, cascade_max_dist), RawPropertyType(5), nullptr},
		SunLight_shadow_cascade_max_distance_get, SunLight_shadow_cascade_max_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 200.0f, nullptr
	};

	rna_SunLight_shadow_cascade_count_ = {
		{&rna_SunLight_shadow_cascade_exponent, 	&rna_SunLight_shadow_cascade_max_distance,
		-1, "shadow_cascade_count", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Cascade Count",
		"Number of texture used by the cascaded shadow map",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, cascade_count), RawPropertyType(0), nullptr},
		SunLight_shadow_cascade_count_get, SunLight_shadow_cascade_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 4, 1, 4, 1, nullptr, nullptr, 4, nullptr
	};

	rna_SunLight_shadow_cascade_exponent_ = {
		{&rna_SunLight_shadow_cascade_fade, 	&rna_SunLight_shadow_cascade_count,
		-1, "shadow_cascade_exponent", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Exponential Distribution",
		"Higher value increase resolution towards the viewpoint",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, cascade_exponent), RawPropertyType(5), nullptr},
		SunLight_shadow_cascade_exponent_get, SunLight_shadow_cascade_exponent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.8000000119f, nullptr
	};

	rna_SunLight_shadow_cascade_fade_ = {
		{nullptr, 	&rna_SunLight_shadow_cascade_exponent,
		-1, "shadow_cascade_fade", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Cascade Fade",
		"How smooth is the transition between each cascade",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Light_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Light, cascade_fade), RawPropertyType(5), nullptr},
		SunLight_shadow_cascade_fade_get, SunLight_shadow_cascade_fade_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	StructRNA *srna = RNA_SunLight;
	srna->cont.properties = {&rna_SunLight_angle, &rna_SunLight_shadow_cascade_fade};
	srna->identifier = "SunLight";
	srna->flag = 519;
	srna->name = "Sun Light";
	srna->description = "Constant direction parallel ray Light";
	srna->translation_context = "*";
	srna->icon = 311;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Light;
	srna->refine = rna_Light_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};


}  // namespace blender
