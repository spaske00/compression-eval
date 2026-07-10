
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

#include "rna_texture.cc"
#include "rna_texture_api.cc"

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

extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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


extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern PropertyRNA &rna_CloudsTexture_noise_scale;
extern PropertyRNA &rna_CloudsTexture_noise_depth;
extern PropertyRNA &rna_CloudsTexture_noise_basis;
extern PropertyRNA &rna_CloudsTexture_noise_type;
extern PropertyRNA &rna_CloudsTexture_cloud_type;
extern PropertyRNA &rna_CloudsTexture_nabla;

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern PropertyRNA &rna_WoodTexture_noise_scale;
extern PropertyRNA &rna_WoodTexture_turbulence;
extern PropertyRNA &rna_WoodTexture_noise_basis;
extern PropertyRNA &rna_WoodTexture_noise_type;
extern PropertyRNA &rna_WoodTexture_wood_type;
extern PropertyRNA &rna_WoodTexture_noise_basis_2;
extern PropertyRNA &rna_WoodTexture_nabla;

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern PropertyRNA &rna_MarbleTexture_noise_scale;
extern PropertyRNA &rna_MarbleTexture_turbulence;
extern PropertyRNA &rna_MarbleTexture_noise_depth;
extern PropertyRNA &rna_MarbleTexture_noise_type;
extern PropertyRNA &rna_MarbleTexture_marble_type;
extern PropertyRNA &rna_MarbleTexture_noise_basis;
extern PropertyRNA &rna_MarbleTexture_noise_basis_2;
extern PropertyRNA &rna_MarbleTexture_nabla;

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern PropertyRNA &rna_MagicTexture_turbulence;
extern PropertyRNA &rna_MagicTexture_noise_depth;

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern PropertyRNA &rna_BlendTexture_progression;
extern PropertyRNA &rna_BlendTexture_use_flip_axis;

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern PropertyRNA &rna_StucciTexture_turbulence;
extern PropertyRNA &rna_StucciTexture_noise_basis;
extern PropertyRNA &rna_StucciTexture_noise_scale;
extern PropertyRNA &rna_StucciTexture_noise_type;
extern PropertyRNA &rna_StucciTexture_stucci_type;

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern PropertyRNA &rna_ImageTexture_use_interpolation;
extern PropertyRNA &rna_ImageTexture_use_flip_axis;
extern PropertyRNA &rna_ImageTexture_use_alpha;
extern PropertyRNA &rna_ImageTexture_use_calculate_alpha;
extern PropertyRNA &rna_ImageTexture_invert_alpha;
extern PropertyRNA &rna_ImageTexture_filter_size;
extern PropertyRNA &rna_ImageTexture_extension;
extern PropertyRNA &rna_ImageTexture_repeat_x;
extern PropertyRNA &rna_ImageTexture_repeat_y;
extern PropertyRNA &rna_ImageTexture_use_mirror_x;
extern PropertyRNA &rna_ImageTexture_use_mirror_y;
extern PropertyRNA &rna_ImageTexture_use_checker_odd;
extern PropertyRNA &rna_ImageTexture_use_checker_even;
extern PropertyRNA &rna_ImageTexture_checker_distance;
extern PropertyRNA &rna_ImageTexture_crop_min_x;
extern PropertyRNA &rna_ImageTexture_crop_min_y;
extern PropertyRNA &rna_ImageTexture_crop_max_x;
extern PropertyRNA &rna_ImageTexture_crop_max_y;
extern PropertyRNA &rna_ImageTexture_image;
extern PropertyRNA &rna_ImageTexture_image_user;
extern PropertyRNA &rna_ImageTexture_use_normal_map;

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern PropertyRNA &rna_MusgraveTexture_musgrave_type;
extern PropertyRNA &rna_MusgraveTexture_dimension_max;
extern PropertyRNA &rna_MusgraveTexture_lacunarity;
extern PropertyRNA &rna_MusgraveTexture_octaves;
extern PropertyRNA &rna_MusgraveTexture_offset;
extern PropertyRNA &rna_MusgraveTexture_gain;
extern PropertyRNA &rna_MusgraveTexture_noise_intensity;
extern PropertyRNA &rna_MusgraveTexture_noise_scale;
extern PropertyRNA &rna_MusgraveTexture_noise_basis;
extern PropertyRNA &rna_MusgraveTexture_nabla;

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern PropertyRNA &rna_VoronoiTexture_weight_1;
extern PropertyRNA &rna_VoronoiTexture_weight_2;
extern PropertyRNA &rna_VoronoiTexture_weight_3;
extern PropertyRNA &rna_VoronoiTexture_weight_4;
extern PropertyRNA &rna_VoronoiTexture_minkovsky_exponent;
extern PropertyRNA &rna_VoronoiTexture_distance_metric;
extern PropertyRNA &rna_VoronoiTexture_color_mode;
extern PropertyRNA &rna_VoronoiTexture_noise_intensity;
extern PropertyRNA &rna_VoronoiTexture_noise_scale;
extern PropertyRNA &rna_VoronoiTexture_nabla;

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_Texture_type;
extern PropertyRNA &rna_Texture_use_clamp;
extern PropertyRNA &rna_Texture_use_color_ramp;
extern PropertyRNA &rna_Texture_color_ramp;
extern PropertyRNA &rna_Texture_intensity;
extern PropertyRNA &rna_Texture_contrast;
extern PropertyRNA &rna_Texture_saturation;
extern PropertyRNA &rna_Texture_factor_red;
extern PropertyRNA &rna_Texture_factor_green;
extern PropertyRNA &rna_Texture_factor_blue;
extern PropertyRNA &rna_Texture_use_preview_alpha;
extern PropertyRNA &rna_Texture_use_nodes;
extern PropertyRNA &rna_Texture_node_tree;
extern PropertyRNA &rna_Texture_animation_data;

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

extern PropertyRNA &rna_DistortedNoiseTexture_distortion;
extern PropertyRNA &rna_DistortedNoiseTexture_noise_scale;
extern PropertyRNA &rna_DistortedNoiseTexture_noise_basis;
extern PropertyRNA &rna_DistortedNoiseTexture_noise_distortion;
extern PropertyRNA &rna_DistortedNoiseTexture_nabla;

extern FunctionRNA *rna_Texture_evaluate_func;
extern PropertyRNA &rna_Texture_evaluate_value;
extern PropertyRNA &rna_Texture_evaluate_result;


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



extern PropertyRNA &rna_TextureSlot_rna_properties;
extern PropertyRNA &rna_TextureSlot_rna_type;
extern PropertyRNA &rna_TextureSlot_texture;
extern PropertyRNA &rna_TextureSlot_name;
extern PropertyRNA &rna_TextureSlot_offset;
extern PropertyRNA &rna_TextureSlot_scale;
extern PropertyRNA &rna_TextureSlot_color;
extern PropertyRNA &rna_TextureSlot_blend_type;
extern PropertyRNA &rna_TextureSlot_default_value;
extern PropertyRNA &rna_TextureSlot_output_node;


extern PropertyRNA &rna_TexMapping_rna_properties;
extern PropertyRNA &rna_TexMapping_rna_type;
extern PropertyRNA &rna_TexMapping_vector_type;
extern PropertyRNA &rna_TexMapping_translation;
extern PropertyRNA &rna_TexMapping_rotation;
extern PropertyRNA &rna_TexMapping_scale;
extern PropertyRNA &rna_TexMapping_min;
extern PropertyRNA &rna_TexMapping_max;
extern PropertyRNA &rna_TexMapping_use_min;
extern PropertyRNA &rna_TexMapping_use_max;
extern PropertyRNA &rna_TexMapping_mapping_x;
extern PropertyRNA &rna_TexMapping_mapping_y;
extern PropertyRNA &rna_TexMapping_mapping_z;
extern PropertyRNA &rna_TexMapping_mapping;


extern PropertyRNA &rna_ColorMapping_rna_properties;
extern PropertyRNA &rna_ColorMapping_rna_type;
extern PropertyRNA &rna_ColorMapping_use_color_ramp;
extern PropertyRNA &rna_ColorMapping_color_ramp;
extern PropertyRNA &rna_ColorMapping_brightness;
extern PropertyRNA &rna_ColorMapping_contrast;
extern PropertyRNA &rna_ColorMapping_saturation;
extern PropertyRNA &rna_ColorMapping_blend_type;
extern PropertyRNA &rna_ColorMapping_blend_color;
extern PropertyRNA &rna_ColorMapping_blend_factor;

int Texture_type_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->type);
}

void Texture_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Texture_type_set;
    fn(ptr, value);
}

bool Texture_use_clamp_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return !((uint64_t(data->flag) & 1024) != 0);
}

void Texture_use_clamp_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

bool Texture_use_color_ramp_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void Texture_use_color_ramp_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Texture_use_color_ramp_set;
    fn(ptr, value);
}

PointerRNA Texture_color_ramp_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ColorRamp, data->coba);
}

float Texture_intensity_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->bright);
}

void Texture_intensity_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->bright = (std::remove_reference_t<decltype(data->bright)>)std::clamp(value, 0.0f, 2.0f);
}

float Texture_contrast_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->contrast);
}

void Texture_contrast_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->contrast = (std::remove_reference_t<decltype(data->contrast)>)std::clamp(value, 0.0f, 5.0f);
}

float Texture_saturation_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->saturation);
}

void Texture_saturation_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->saturation = (std::remove_reference_t<decltype(data->saturation)>)std::clamp(value, 0.0f, 2.0f);
}

float Texture_factor_red_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->rfac);
}

void Texture_factor_red_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->rfac = (std::remove_reference_t<decltype(data->rfac)>)std::clamp(value, 0.0f, 2.0f);
}

float Texture_factor_green_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->gfac);
}

void Texture_factor_green_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->gfac = (std::remove_reference_t<decltype(data->gfac)>)std::clamp(value, 0.0f, 2.0f);
}

float Texture_factor_blue_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->bfac);
}

void Texture_factor_blue_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->bfac = (std::remove_reference_t<decltype(data->bfac)>)std::clamp(value, 0.0f, 2.0f);
}

bool Texture_use_preview_alpha_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void Texture_use_preview_alpha_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool Texture_use_nodes_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->use_nodes) & 1) != 0);
}

void Texture_use_nodes_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->use_nodes = std::remove_reference_t<decltype(data->use_nodes)>(uint64_t(data->use_nodes) | 1); }
    else { data->use_nodes = std::remove_reference_t<decltype(data->use_nodes)>(uint64_t(data->use_nodes) & ~uint64_t(1)); }
}

PointerRNA Texture_node_tree_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_NodeTree, data->nodetree);
}

PointerRNA Texture_animation_data_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

float CloudsTexture_noise_scale_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->noisesize);
}

void CloudsTexture_noise_scale_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisesize = (std::remove_reference_t<decltype(data->noisesize)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

int CloudsTexture_noise_depth_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisedepth);
}

void CloudsTexture_noise_depth_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisedepth = (std::remove_reference_t<decltype(data->noisedepth)>)std::clamp(value, 0, 30);
}

int CloudsTexture_noise_basis_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisebasis);
}

void CloudsTexture_noise_basis_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisebasis = (std::remove_reference_t<decltype(data->noisebasis)>)value;
}

int CloudsTexture_noise_type_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisetype);
}

void CloudsTexture_noise_type_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisetype = (std::remove_reference_t<decltype(data->noisetype)>)value;
}

int CloudsTexture_cloud_type_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->stype);
}

void CloudsTexture_cloud_type_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->stype = (std::remove_reference_t<decltype(data->stype)>)value;
}

float CloudsTexture_nabla_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->nabla);
}

void CloudsTexture_nabla_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->nabla = (std::remove_reference_t<decltype(data->nabla)>)std::clamp(value, 0.0010000000f, 0.1000000015f);
}

float WoodTexture_noise_scale_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->noisesize);
}

void WoodTexture_noise_scale_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisesize = (std::remove_reference_t<decltype(data->noisesize)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

float WoodTexture_turbulence_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->turbul);
}

void WoodTexture_turbulence_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->turbul = (std::remove_reference_t<decltype(data->turbul)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

int WoodTexture_noise_basis_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisebasis);
}

void WoodTexture_noise_basis_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisebasis = (std::remove_reference_t<decltype(data->noisebasis)>)value;
}

int WoodTexture_noise_type_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisetype);
}

void WoodTexture_noise_type_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisetype = (std::remove_reference_t<decltype(data->noisetype)>)value;
}

int WoodTexture_wood_type_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->stype);
}

void WoodTexture_wood_type_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->stype = (std::remove_reference_t<decltype(data->stype)>)value;
}

int WoodTexture_noise_basis_2_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisebasis2);
}

void WoodTexture_noise_basis_2_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisebasis2 = (std::remove_reference_t<decltype(data->noisebasis2)>)value;
}

float WoodTexture_nabla_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->nabla);
}

void WoodTexture_nabla_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->nabla = (std::remove_reference_t<decltype(data->nabla)>)std::clamp(value, 0.0010000000f, 0.1000000015f);
}

float MarbleTexture_noise_scale_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->noisesize);
}

void MarbleTexture_noise_scale_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisesize = (std::remove_reference_t<decltype(data->noisesize)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

float MarbleTexture_turbulence_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->turbul);
}

void MarbleTexture_turbulence_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->turbul = (std::remove_reference_t<decltype(data->turbul)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

int MarbleTexture_noise_depth_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisedepth);
}

void MarbleTexture_noise_depth_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisedepth = (std::remove_reference_t<decltype(data->noisedepth)>)std::clamp(value, 0, 30);
}

int MarbleTexture_noise_type_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisetype);
}

void MarbleTexture_noise_type_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisetype = (std::remove_reference_t<decltype(data->noisetype)>)value;
}

int MarbleTexture_marble_type_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->stype);
}

void MarbleTexture_marble_type_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->stype = (std::remove_reference_t<decltype(data->stype)>)value;
}

int MarbleTexture_noise_basis_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisebasis);
}

void MarbleTexture_noise_basis_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisebasis = (std::remove_reference_t<decltype(data->noisebasis)>)value;
}

int MarbleTexture_noise_basis_2_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisebasis2);
}

void MarbleTexture_noise_basis_2_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisebasis2 = (std::remove_reference_t<decltype(data->noisebasis2)>)value;
}

float MarbleTexture_nabla_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->nabla);
}

void MarbleTexture_nabla_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->nabla = (std::remove_reference_t<decltype(data->nabla)>)std::clamp(value, 0.0010000000f, 0.1000000015f);
}

float MagicTexture_turbulence_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->turbul);
}

void MagicTexture_turbulence_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->turbul = (std::remove_reference_t<decltype(data->turbul)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

int MagicTexture_noise_depth_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisedepth);
}

void MagicTexture_noise_depth_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisedepth = (std::remove_reference_t<decltype(data->noisedepth)>)std::clamp(value, 0, 30);
}

int BlendTexture_progression_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->stype);
}

void BlendTexture_progression_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->stype = (std::remove_reference_t<decltype(data->stype)>)value;
}

int BlendTexture_use_flip_axis_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (uint64_t(data->flag) & 2);
}

void BlendTexture_use_flip_axis_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

float StucciTexture_turbulence_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->turbul);
}

void StucciTexture_turbulence_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->turbul = (std::remove_reference_t<decltype(data->turbul)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

int StucciTexture_noise_basis_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisebasis);
}

void StucciTexture_noise_basis_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisebasis = (std::remove_reference_t<decltype(data->noisebasis)>)value;
}

float StucciTexture_noise_scale_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->noisesize);
}

void StucciTexture_noise_scale_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisesize = (std::remove_reference_t<decltype(data->noisesize)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

int StucciTexture_noise_type_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisetype);
}

void StucciTexture_noise_type_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisetype = (std::remove_reference_t<decltype(data->noisetype)>)value;
}

int StucciTexture_stucci_type_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->stype);
}

void StucciTexture_stucci_type_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->stype = (std::remove_reference_t<decltype(data->stype)>)value;
}

bool ImageTexture_use_interpolation_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->imaflag) & 1) != 0);
}

void ImageTexture_use_interpolation_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->imaflag = std::remove_reference_t<decltype(data->imaflag)>(uint64_t(data->imaflag) | 1); }
    else { data->imaflag = std::remove_reference_t<decltype(data->imaflag)>(uint64_t(data->imaflag) & ~uint64_t(1)); }
}

bool ImageTexture_use_flip_axis_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->imaflag) & 16) != 0);
}

void ImageTexture_use_flip_axis_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->imaflag = std::remove_reference_t<decltype(data->imaflag)>(uint64_t(data->imaflag) | 16); }
    else { data->imaflag = std::remove_reference_t<decltype(data->imaflag)>(uint64_t(data->imaflag) & ~uint64_t(16)); }
}

bool ImageTexture_use_alpha_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->imaflag) & 2) != 0);
}

void ImageTexture_use_alpha_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->imaflag = std::remove_reference_t<decltype(data->imaflag)>(uint64_t(data->imaflag) | 2); }
    else { data->imaflag = std::remove_reference_t<decltype(data->imaflag)>(uint64_t(data->imaflag) & ~uint64_t(2)); }
}

bool ImageTexture_use_calculate_alpha_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->imaflag) & 32) != 0);
}

void ImageTexture_use_calculate_alpha_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->imaflag = std::remove_reference_t<decltype(data->imaflag)>(uint64_t(data->imaflag) | 32); }
    else { data->imaflag = std::remove_reference_t<decltype(data->imaflag)>(uint64_t(data->imaflag) & ~uint64_t(32)); }
}

bool ImageTexture_invert_alpha_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void ImageTexture_invert_alpha_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

float ImageTexture_filter_size_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->filtersize);
}

void ImageTexture_filter_size_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->filtersize = (std::remove_reference_t<decltype(data->filtersize)>)std::clamp(value, 0.1000000015f, 50.0f);
}

int ImageTexture_extension_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->extend);
}

void ImageTexture_extension_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->extend = (std::remove_reference_t<decltype(data->extend)>)value;
}

int ImageTexture_repeat_x_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->xrepeat);
}

void ImageTexture_repeat_x_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->xrepeat = (std::remove_reference_t<decltype(data->xrepeat)>)std::clamp(value, 1, 512);
}

int ImageTexture_repeat_y_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->yrepeat);
}

void ImageTexture_repeat_y_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->yrepeat = (std::remove_reference_t<decltype(data->yrepeat)>)std::clamp(value, 1, 512);
}

bool ImageTexture_use_mirror_x_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void ImageTexture_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool ImageTexture_use_mirror_y_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void ImageTexture_use_mirror_y_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool ImageTexture_use_checker_odd_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void ImageTexture_use_checker_odd_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool ImageTexture_use_checker_even_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void ImageTexture_use_checker_even_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

float ImageTexture_checker_distance_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->checkerdist);
}

void ImageTexture_checker_distance_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->checkerdist = (std::remove_reference_t<decltype(data->checkerdist)>)std::clamp(value, 0.0f, 0.9900000095f);
}

float ImageTexture_crop_min_x_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->cropxmin);
}

void ImageTexture_crop_min_x_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->cropxmin = (std::remove_reference_t<decltype(data->cropxmin)>)std::clamp(value, -10.0f, 10.0f);
}

float ImageTexture_crop_min_y_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->cropymin);
}

void ImageTexture_crop_min_y_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->cropymin = (std::remove_reference_t<decltype(data->cropymin)>)std::clamp(value, -10.0f, 10.0f);
}

float ImageTexture_crop_max_x_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->cropxmax);
}

void ImageTexture_crop_max_x_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->cropxmax = (std::remove_reference_t<decltype(data->cropxmax)>)std::clamp(value, -10.0f, 10.0f);
}

float ImageTexture_crop_max_y_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->cropymax);
}

void ImageTexture_crop_max_y_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->cropymax = (std::remove_reference_t<decltype(data->cropymax)>)std::clamp(value, -10.0f, 10.0f);
}

PointerRNA ImageTexture_image_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Image, data->ima);
}

void ImageTexture_image_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Tex *data = (Tex *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->ima) {
        id_us_min((ID *)data->ima);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->ima = value.data;
}

PointerRNA ImageTexture_image_user_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ImageUser, &data->iuser);
}

bool ImageTexture_use_normal_map_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return ((uint64_t(data->imaflag) & 2048) != 0);
}

void ImageTexture_use_normal_map_set(PointerRNA *ptr, bool value)
{
    Tex *data = (Tex *)(ptr->data);
    if (value) { data->imaflag = std::remove_reference_t<decltype(data->imaflag)>(uint64_t(data->imaflag) | 2048); }
    else { data->imaflag = std::remove_reference_t<decltype(data->imaflag)>(uint64_t(data->imaflag) & ~uint64_t(2048)); }
}

int MusgraveTexture_musgrave_type_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->stype);
}

void MusgraveTexture_musgrave_type_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->stype = (std::remove_reference_t<decltype(data->stype)>)value;
}

float MusgraveTexture_dimension_max_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->mg_H);
}

void MusgraveTexture_dimension_max_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->mg_H = (std::remove_reference_t<decltype(data->mg_H)>)std::clamp(value, 0.0001000000f, 2.0f);
}

float MusgraveTexture_lacunarity_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->mg_lacunarity);
}

void MusgraveTexture_lacunarity_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->mg_lacunarity = (std::remove_reference_t<decltype(data->mg_lacunarity)>)std::clamp(value, 0.0f, 6.0f);
}

float MusgraveTexture_octaves_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->mg_octaves);
}

void MusgraveTexture_octaves_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->mg_octaves = (std::remove_reference_t<decltype(data->mg_octaves)>)std::clamp(value, 0.0f, 8.0f);
}

float MusgraveTexture_offset_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->mg_offset);
}

void MusgraveTexture_offset_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->mg_offset = (std::remove_reference_t<decltype(data->mg_offset)>)std::clamp(value, 0.0f, 6.0f);
}

float MusgraveTexture_gain_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->mg_gain);
}

void MusgraveTexture_gain_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->mg_gain = (std::remove_reference_t<decltype(data->mg_gain)>)std::clamp(value, 0.0f, 6.0f);
}

float MusgraveTexture_noise_intensity_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->ns_outscale);
}

void MusgraveTexture_noise_intensity_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->ns_outscale = (std::remove_reference_t<decltype(data->ns_outscale)>)std::clamp(value, 0.0f, 10.0f);
}

float MusgraveTexture_noise_scale_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->noisesize);
}

void MusgraveTexture_noise_scale_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisesize = (std::remove_reference_t<decltype(data->noisesize)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

int MusgraveTexture_noise_basis_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisebasis);
}

void MusgraveTexture_noise_basis_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisebasis = (std::remove_reference_t<decltype(data->noisebasis)>)value;
}

float MusgraveTexture_nabla_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->nabla);
}

void MusgraveTexture_nabla_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->nabla = (std::remove_reference_t<decltype(data->nabla)>)std::clamp(value, 0.0010000000f, 0.1000000015f);
}

float VoronoiTexture_weight_1_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->vn_w1);
}

void VoronoiTexture_weight_1_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->vn_w1 = (std::remove_reference_t<decltype(data->vn_w1)>)std::clamp(value, -2.0f, 2.0f);
}

float VoronoiTexture_weight_2_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->vn_w2);
}

void VoronoiTexture_weight_2_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->vn_w2 = (std::remove_reference_t<decltype(data->vn_w2)>)std::clamp(value, -2.0f, 2.0f);
}

float VoronoiTexture_weight_3_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->vn_w3);
}

void VoronoiTexture_weight_3_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->vn_w3 = (std::remove_reference_t<decltype(data->vn_w3)>)std::clamp(value, -2.0f, 2.0f);
}

float VoronoiTexture_weight_4_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->vn_w4);
}

void VoronoiTexture_weight_4_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->vn_w4 = (std::remove_reference_t<decltype(data->vn_w4)>)std::clamp(value, -2.0f, 2.0f);
}

float VoronoiTexture_minkovsky_exponent_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->vn_mexp);
}

void VoronoiTexture_minkovsky_exponent_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->vn_mexp = (std::remove_reference_t<decltype(data->vn_mexp)>)std::clamp(value, 0.0099999998f, 10.0f);
}

int VoronoiTexture_distance_metric_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->vn_distm);
}

void VoronoiTexture_distance_metric_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->vn_distm = (std::remove_reference_t<decltype(data->vn_distm)>)value;
}

int VoronoiTexture_color_mode_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->vn_coltype);
}

void VoronoiTexture_color_mode_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->vn_coltype = (std::remove_reference_t<decltype(data->vn_coltype)>)value;
}

float VoronoiTexture_noise_intensity_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->ns_outscale);
}

void VoronoiTexture_noise_intensity_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->ns_outscale = (std::remove_reference_t<decltype(data->ns_outscale)>)std::clamp(value, 0.0099999998f, 10.0f);
}

float VoronoiTexture_noise_scale_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->noisesize);
}

void VoronoiTexture_noise_scale_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisesize = (std::remove_reference_t<decltype(data->noisesize)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

float VoronoiTexture_nabla_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->nabla);
}

void VoronoiTexture_nabla_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->nabla = (std::remove_reference_t<decltype(data->nabla)>)std::clamp(value, 0.0010000000f, 0.1000000015f);
}

float DistortedNoiseTexture_distortion_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->dist_amount);
}

void DistortedNoiseTexture_distortion_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->dist_amount = (std::remove_reference_t<decltype(data->dist_amount)>)std::clamp(value, 0.0f, 10.0f);
}

float DistortedNoiseTexture_noise_scale_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->noisesize);
}

void DistortedNoiseTexture_noise_scale_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisesize = (std::remove_reference_t<decltype(data->noisesize)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

int DistortedNoiseTexture_noise_basis_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisebasis2);
}

void DistortedNoiseTexture_noise_basis_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisebasis2 = (std::remove_reference_t<decltype(data->noisebasis2)>)value;
}

int DistortedNoiseTexture_noise_distortion_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (int)(data->noisebasis);
}

void DistortedNoiseTexture_noise_distortion_set(PointerRNA *ptr, int value)
{
    Tex *data = (Tex *)(ptr->data);
    data->noisebasis = (std::remove_reference_t<decltype(data->noisebasis)>)value;
}

float DistortedNoiseTexture_nabla_get(PointerRNA *ptr)
{
    Tex *data = (Tex *)(ptr->data);
    return (float)(data->nabla);
}

void DistortedNoiseTexture_nabla_set(PointerRNA *ptr, float value)
{
    Tex *data = (Tex *)(ptr->data);
    data->nabla = (std::remove_reference_t<decltype(data->nabla)>)std::clamp(value, 0.0010000000f, 0.1000000015f);
}

static PointerRNA TextureSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void TextureSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_TextureSlot_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = TextureSlot_rna_properties_get(iter);
    }
}

void TextureSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = TextureSlot_rna_properties_get(iter);
    }
}

void TextureSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool TextureSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA TextureSlot_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA TextureSlot_texture_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Texture, data->tex);
}

void TextureSlot_texture_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    MTex *data = (MTex *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->tex) {
        id_us_min((ID *)data->tex);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->tex = value.data;
}

void TextureSlot_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_TextureSlot_name_get;
    fn(ptr, value);
}

int TextureSlot_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_TextureSlot_name_length;
    return fn(ptr);
}

void TextureSlot_offset_get(PointerRNA *ptr, float values[3])
{
    MTex *data = (MTex *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->ofs)[i]);
    }
}

void TextureSlot_offset_set(PointerRNA *ptr, const float values[3])
{
    MTex *data = (MTex *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->ofs)[i] = values[i];
    }
}

void TextureSlot_scale_get(PointerRNA *ptr, float values[3])
{
    MTex *data = (MTex *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->size)[i]);
    }
}

void TextureSlot_scale_set(PointerRNA *ptr, const float values[3])
{
    MTex *data = (MTex *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->size)[i] = values[i];
    }
}

void TextureSlot_color_get(PointerRNA *ptr, float values[3])
{
    MTex *data = (MTex *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

void TextureSlot_color_set(PointerRNA *ptr, const float values[3])
{
    MTex *data = (MTex *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (&data->r)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

int TextureSlot_blend_type_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->blendtype);
}

void TextureSlot_blend_type_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->blendtype = (std::remove_reference_t<decltype(data->blendtype)>)value;
}

float TextureSlot_default_value_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->def_var);
}

void TextureSlot_default_value_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->def_var = (std::remove_reference_t<decltype(data->def_var)>)value;
}

int TextureSlot_output_node_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_TextureSlot_output_node_get;
    return fn(ptr);
}

void TextureSlot_output_node_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->which_output = (std::remove_reference_t<decltype(data->which_output)>)value;
}

static PointerRNA TexMapping_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void TexMapping_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_TexMapping_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = TexMapping_rna_properties_get(iter);
    }
}

void TexMapping_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = TexMapping_rna_properties_get(iter);
    }
}

void TexMapping_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool TexMapping_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA TexMapping_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int TexMapping_vector_type_get(PointerRNA *ptr)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    return (int)(data->type);
}

void TexMapping_vector_type_set(PointerRNA *ptr, int value)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

void TexMapping_translation_get(PointerRNA *ptr, float values[3])
{
    TexMapping *data = (TexMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->loc)[i]);
    }
}

void TexMapping_translation_set(PointerRNA *ptr, const float values[3])
{
    TexMapping *data = (TexMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->loc)[i] = values[i];
    }
}

void TexMapping_rotation_get(PointerRNA *ptr, float values[3])
{
    TexMapping *data = (TexMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rot)[i]);
    }
}

void TexMapping_rotation_set(PointerRNA *ptr, const float values[3])
{
    TexMapping *data = (TexMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->rot)[i] = values[i];
    }
}

void TexMapping_scale_get(PointerRNA *ptr, float values[3])
{
    TexMapping *data = (TexMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->size)[i]);
    }
}

void TexMapping_scale_set(PointerRNA *ptr, const float values[3])
{
    TexMapping *data = (TexMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->size)[i] = values[i];
    }
}

void TexMapping_min_get(PointerRNA *ptr, float values[3])
{
    TexMapping *data = (TexMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->min)[i]);
    }
}

void TexMapping_min_set(PointerRNA *ptr, const float values[3])
{
    TexMapping *data = (TexMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->min)[i] = values[i];
    }
}

void TexMapping_max_get(PointerRNA *ptr, float values[3])
{
    TexMapping *data = (TexMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->max)[i]);
    }
}

void TexMapping_max_set(PointerRNA *ptr, const float values[3])
{
    TexMapping *data = (TexMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->max)[i] = values[i];
    }
}

bool TexMapping_use_min_get(PointerRNA *ptr)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void TexMapping_use_min_set(PointerRNA *ptr, bool value)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool TexMapping_use_max_get(PointerRNA *ptr)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void TexMapping_use_max_set(PointerRNA *ptr, bool value)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

int TexMapping_mapping_x_get(PointerRNA *ptr)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    return (int)(data->projx);
}

void TexMapping_mapping_x_set(PointerRNA *ptr, int value)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    data->projx = (std::remove_reference_t<decltype(data->projx)>)value;
}

int TexMapping_mapping_y_get(PointerRNA *ptr)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    return (int)(data->projy);
}

void TexMapping_mapping_y_set(PointerRNA *ptr, int value)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    data->projy = (std::remove_reference_t<decltype(data->projy)>)value;
}

int TexMapping_mapping_z_get(PointerRNA *ptr)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    return (int)(data->projz);
}

void TexMapping_mapping_z_set(PointerRNA *ptr, int value)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    data->projz = (std::remove_reference_t<decltype(data->projz)>)value;
}

int TexMapping_mapping_get(PointerRNA *ptr)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    return (int)(data->mapping);
}

void TexMapping_mapping_set(PointerRNA *ptr, int value)
{
    TexMapping *data = (TexMapping *)(ptr->data);
    data->mapping = (std::remove_reference_t<decltype(data->mapping)>)value;
}

static PointerRNA ColorMapping_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ColorMapping_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ColorMapping_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorMapping_rna_properties_get(iter);
    }
}

void ColorMapping_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ColorMapping_rna_properties_get(iter);
    }
}

void ColorMapping_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ColorMapping_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ColorMapping_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool ColorMapping_use_color_ramp_get(PointerRNA *ptr)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ColorMapping_use_color_ramp_set(PointerRNA *ptr, bool value)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

PointerRNA ColorMapping_color_ramp_get(PointerRNA *ptr)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ColorRamp, &data->coba);
}

float ColorMapping_brightness_get(PointerRNA *ptr)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    return (float)(data->bright);
}

void ColorMapping_brightness_set(PointerRNA *ptr, float value)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    data->bright = (std::remove_reference_t<decltype(data->bright)>)std::clamp(value, 0.0f, 2.0f);
}

float ColorMapping_contrast_get(PointerRNA *ptr)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    return (float)(data->contrast);
}

void ColorMapping_contrast_set(PointerRNA *ptr, float value)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    data->contrast = (std::remove_reference_t<decltype(data->contrast)>)std::clamp(value, 0.0f, 5.0f);
}

float ColorMapping_saturation_get(PointerRNA *ptr)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    return (float)(data->saturation);
}

void ColorMapping_saturation_set(PointerRNA *ptr, float value)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    data->saturation = (std::remove_reference_t<decltype(data->saturation)>)std::clamp(value, 0.0f, 2.0f);
}

int ColorMapping_blend_type_get(PointerRNA *ptr)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    return (int)(data->blend_type);
}

void ColorMapping_blend_type_set(PointerRNA *ptr, int value)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    data->blend_type = (std::remove_reference_t<decltype(data->blend_type)>)value;
}

void ColorMapping_blend_color_get(PointerRNA *ptr, float values[3])
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->blend_color)[i]);
    }
}

void ColorMapping_blend_color_set(PointerRNA *ptr, const float values[3])
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->blend_color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float ColorMapping_blend_factor_get(PointerRNA *ptr)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    return (float)(data->blend_factor);
}

void ColorMapping_blend_factor_set(PointerRNA *ptr, float value)
{
    ColorMapping *data = (ColorMapping *)(ptr->data);
    data->blend_factor = (std::remove_reference_t<decltype(data->blend_factor)>)value;
}

void Texture_evaluate_func(Tex *_self, float value[3], float result[4])
{
	texture_evaluate(_self, value, result);
}

static void Texture_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Tex *_self;
	const float *value;
	float *result;
	char *_data;
	
	_self = (Tex *)_ptr->data;
	_data = (char *)_parms->data;
	value = ((const float *)_data);
	_data += 16;
	result = ((float *)_data);
	
	texture_evaluate(_self, value, result);
}

/* Repeated prototypes to detect errors */

void texture_evaluate(Tex *_self, float value[3], float result[4]);















/* Texture */
static EnumPropertyRNA rna_Texture_type_;
PropertyRNA &rna_Texture_type = reinterpret_cast<PropertyRNA &>(rna_Texture_type_);

static BoolPropertyRNA rna_Texture_use_clamp_;
PropertyRNA &rna_Texture_use_clamp = reinterpret_cast<PropertyRNA &>(rna_Texture_use_clamp_);

static BoolPropertyRNA rna_Texture_use_color_ramp_;
PropertyRNA &rna_Texture_use_color_ramp = reinterpret_cast<PropertyRNA &>(rna_Texture_use_color_ramp_);

static PointerPropertyRNA rna_Texture_color_ramp_;
PropertyRNA &rna_Texture_color_ramp = reinterpret_cast<PropertyRNA &>(rna_Texture_color_ramp_);

static FloatPropertyRNA rna_Texture_intensity_;
PropertyRNA &rna_Texture_intensity = reinterpret_cast<PropertyRNA &>(rna_Texture_intensity_);

static FloatPropertyRNA rna_Texture_contrast_;
PropertyRNA &rna_Texture_contrast = reinterpret_cast<PropertyRNA &>(rna_Texture_contrast_);

static FloatPropertyRNA rna_Texture_saturation_;
PropertyRNA &rna_Texture_saturation = reinterpret_cast<PropertyRNA &>(rna_Texture_saturation_);

static FloatPropertyRNA rna_Texture_factor_red_;
PropertyRNA &rna_Texture_factor_red = reinterpret_cast<PropertyRNA &>(rna_Texture_factor_red_);

static FloatPropertyRNA rna_Texture_factor_green_;
PropertyRNA &rna_Texture_factor_green = reinterpret_cast<PropertyRNA &>(rna_Texture_factor_green_);

static FloatPropertyRNA rna_Texture_factor_blue_;
PropertyRNA &rna_Texture_factor_blue = reinterpret_cast<PropertyRNA &>(rna_Texture_factor_blue_);

static BoolPropertyRNA rna_Texture_use_preview_alpha_;
PropertyRNA &rna_Texture_use_preview_alpha = reinterpret_cast<PropertyRNA &>(rna_Texture_use_preview_alpha_);

static BoolPropertyRNA rna_Texture_use_nodes_;
PropertyRNA &rna_Texture_use_nodes = reinterpret_cast<PropertyRNA &>(rna_Texture_use_nodes_);

static PointerPropertyRNA rna_Texture_node_tree_;
PropertyRNA &rna_Texture_node_tree = reinterpret_cast<PropertyRNA &>(rna_Texture_node_tree_);

static PointerPropertyRNA rna_Texture_animation_data_;
PropertyRNA &rna_Texture_animation_data = reinterpret_cast<PropertyRNA &>(rna_Texture_animation_data_);

static FloatPropertyRNA rna_Texture_evaluate_value_;
PropertyRNA &rna_Texture_evaluate_value = reinterpret_cast<PropertyRNA &>(rna_Texture_evaluate_value_);

static FloatPropertyRNA rna_Texture_evaluate_result_;
PropertyRNA &rna_Texture_evaluate_result = reinterpret_cast<PropertyRNA &>(rna_Texture_evaluate_result_);

FunctionRNA *rna_Texture_evaluate_func;
StructRNA *RNA_Texture;
void register_struct_Texture(BlenderRNA &brna)
{
	rna_Texture_type_ = {
		{&rna_Texture_use_clamp, 	nullptr,
		-1, "type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Texture_type_get, Texture_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_texture_type_items, 12, 8
	};

	rna_Texture_use_clamp_ = {
		{&rna_Texture_use_color_ramp, 	&rna_Texture_type,
		-1, "use_clamp", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clamp",
		"Set negative texture RGB and intensity values to zero, for some uses like displacement this option can be disabled to get the full range",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Texture_use_clamp_get, Texture_use_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Texture_use_color_ramp_ = {
		{&rna_Texture_color_ramp, 	&rna_Texture_use_clamp,
		-1, "use_color_ramp", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Color Ramp",
		"Map the texture intensity to the color ramp. Note that the alpha value is used for image textures, enable \"Calculate Alpha\" for images without an alpha channel.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Texture_use_color_ramp_get, Texture_use_color_ramp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Texture_color_ramp_ = {
		{&rna_Texture_intensity, 	&rna_Texture_use_color_ramp,
		-1, "color_ramp", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Ramp",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Texture_color_ramp_get, nullptr, nullptr, nullptr,RNA_ColorRamp
	};

	rna_Texture_intensity_ = {
		{&rna_Texture_contrast, 	&rna_Texture_color_ramp,
		-1, "intensity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brightness",
		"Adjust the brightness of the texture",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, bright), RawPropertyType(5), nullptr},
		Texture_intensity_get, Texture_intensity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Texture_contrast_ = {
		{&rna_Texture_saturation, 	&rna_Texture_intensity,
		-1, "contrast", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Contrast",
		"Adjust the contrast of the texture",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, contrast), RawPropertyType(5), nullptr},
		Texture_contrast_get, Texture_contrast_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 5.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Texture_saturation_ = {
		{&rna_Texture_factor_red, 	&rna_Texture_contrast,
		-1, "saturation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Adjust the saturation of colors in the texture",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, saturation), RawPropertyType(5), nullptr},
		Texture_saturation_get, Texture_saturation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Texture_factor_red_ = {
		{&rna_Texture_factor_green, 	&rna_Texture_saturation,
		-1, "factor_red", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Factor Red",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, rfac), RawPropertyType(5), nullptr},
		Texture_factor_red_get, Texture_factor_red_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Texture_factor_green_ = {
		{&rna_Texture_factor_blue, 	&rna_Texture_factor_red,
		-1, "factor_green", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Factor Green",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, gfac), RawPropertyType(5), nullptr},
		Texture_factor_green_get, Texture_factor_green_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Texture_factor_blue_ = {
		{&rna_Texture_use_preview_alpha, 	&rna_Texture_factor_green,
		-1, "factor_blue", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Factor Blue",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, bfac), RawPropertyType(5), nullptr},
		Texture_factor_blue_get, Texture_factor_blue_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Texture_use_preview_alpha_ = {
		{&rna_Texture_use_nodes, 	&rna_Texture_factor_blue,
		-1, "use_preview_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Alpha",
		"Show Alpha in Preview Render",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Texture_use_preview_alpha_get, Texture_use_preview_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Texture_use_nodes_ = {
		{&rna_Texture_node_tree, 	&rna_Texture_use_preview_alpha,
		-1, "use_nodes", 4194307, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Nodes",
		"Make this a node-based texture",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Texture_use_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Texture_use_nodes_get, Texture_use_nodes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Texture_node_tree_ = {
		{&rna_Texture_animation_data, 	&rna_Texture_use_nodes,
		-1, "node_tree", 8388672, 1, 0, 32, 0, PropertyPathTemplateType(0), "Node Tree",
		"Node tree for node-based textures",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Texture_node_tree_get, nullptr, nullptr, nullptr,RNA_NodeTree
	};

	rna_Texture_animation_data_ = {
		{nullptr, 	&rna_Texture_node_tree,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Texture_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_Texture;
	srna->cont.properties = {&rna_Texture_type, &rna_Texture_animation_data};
	srna->identifier = "Texture";
	srna->flag = 519;
	srna->name = "Texture";
	srna->description = "Texture data-block used by materials, lights, worlds and brushes";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	static float rna_Texture_evaluate_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Texture_evaluate_value_ = {
		{&rna_Texture_evaluate_result, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "The coordinates (x,y,z) of the texture, in case of a 3D texture, the z value is the slice of the texture that is evaluated. For 2D textures such as images, the z value is ignored.",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Texture_evaluate_value_default
	};
	static float rna_Texture_evaluate_result_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_Texture_evaluate_result_ = {
		{nullptr, 	&rna_Texture_evaluate_value,
		-1, "result", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "The result of the texture where (x,y,z,w) are (red, green, blue, intensity). For grayscale textures, often intensity only will be used.",
		nullptr,
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Texture_evaluate_result_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Texture_evaluate_value, &rna_Texture_evaluate_result};
		func->identifier = "evaluate";
		func->description = "Evaluate the texture at the given coordinate and returns the result";
		func->call = Texture_evaluate_call;
		rna_Texture_evaluate_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Clouds Texture */
static FloatPropertyRNA rna_CloudsTexture_noise_scale_;
PropertyRNA &rna_CloudsTexture_noise_scale = reinterpret_cast<PropertyRNA &>(rna_CloudsTexture_noise_scale_);

static IntPropertyRNA rna_CloudsTexture_noise_depth_;
PropertyRNA &rna_CloudsTexture_noise_depth = reinterpret_cast<PropertyRNA &>(rna_CloudsTexture_noise_depth_);

static EnumPropertyRNA rna_CloudsTexture_noise_basis_;
PropertyRNA &rna_CloudsTexture_noise_basis = reinterpret_cast<PropertyRNA &>(rna_CloudsTexture_noise_basis_);

static EnumPropertyRNA rna_CloudsTexture_noise_type_;
PropertyRNA &rna_CloudsTexture_noise_type = reinterpret_cast<PropertyRNA &>(rna_CloudsTexture_noise_type_);

static EnumPropertyRNA rna_CloudsTexture_cloud_type_;
PropertyRNA &rna_CloudsTexture_cloud_type = reinterpret_cast<PropertyRNA &>(rna_CloudsTexture_cloud_type_);

static FloatPropertyRNA rna_CloudsTexture_nabla_;
PropertyRNA &rna_CloudsTexture_nabla = reinterpret_cast<PropertyRNA &>(rna_CloudsTexture_nabla_);

StructRNA *RNA_CloudsTexture;
void register_struct_CloudsTexture(BlenderRNA &brna)
{
	rna_CloudsTexture_noise_scale_ = {
		{&rna_CloudsTexture_noise_depth, 	nullptr,
		-1, "noise_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Size",
		"Scaling for noise input",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisesize), RawPropertyType(5), nullptr},
		CloudsTexture_noise_scale_get, CloudsTexture_noise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.2500000000f, nullptr
	};

	rna_CloudsTexture_noise_depth_ = {
		{&rna_CloudsTexture_noise_basis, 	&rna_CloudsTexture_noise_scale,
		-1, "noise_depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Depth",
		"Depth of the cloud calculation",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisedepth), RawPropertyType(1), nullptr},
		CloudsTexture_noise_depth_get, CloudsTexture_noise_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 24, 0, 30, 1, nullptr, nullptr, 2, nullptr
	};

	static const EnumPropertyItem rna_CloudsTexture_noise_basis_items[11] = {
		{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"	},
		{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"	},
		{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"	},
		{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"	},
		{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"	},
		{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"	},
		{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"	},
		{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"	},
		{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"	},
		{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CloudsTexture_noise_basis_ = {
		{&rna_CloudsTexture_noise_type, 	&rna_CloudsTexture_noise_depth,
		-1, "noise_basis", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Basis",
		"Noise basis used for turbulence",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisebasis), RawPropertyType(1), nullptr},
		CloudsTexture_noise_basis_get, CloudsTexture_noise_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CloudsTexture_noise_basis_items, 10, 0
	};

	static const EnumPropertyItem rna_CloudsTexture_noise_type_items[3] = {
		{0, "SOFT_NOISE", 0, "Soft", "Generate soft noise (smooth transitions)"	},
		{1, "HARD_NOISE", 0, "Hard", "Generate hard noise (sharp transitions)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CloudsTexture_noise_type_ = {
		{&rna_CloudsTexture_cloud_type, 	&rna_CloudsTexture_noise_basis,
		-1, "noise_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisetype), RawPropertyType(1), nullptr},
		CloudsTexture_noise_type_get, CloudsTexture_noise_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CloudsTexture_noise_type_items, 2, 0
	};

	static const EnumPropertyItem rna_CloudsTexture_cloud_type_items[3] = {
		{0, "GRAYSCALE", 0, "Grayscale", ""	},
		{1, "COLOR", 0, "Color", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CloudsTexture_cloud_type_ = {
		{&rna_CloudsTexture_nabla, 	&rna_CloudsTexture_noise_type,
		-1, "cloud_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Determine whether Noise returns grayscale or RGB values",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, stype), RawPropertyType(1), nullptr},
		CloudsTexture_cloud_type_get, CloudsTexture_cloud_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CloudsTexture_cloud_type_items, 2, 0
	};

	rna_CloudsTexture_nabla_ = {
		{nullptr, 	&rna_CloudsTexture_cloud_type,
		-1, "nabla", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Nabla",
		"Size of derivative offset used for calculating normal",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, nabla), RawPropertyType(5), nullptr},
		CloudsTexture_nabla_get, CloudsTexture_nabla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, nullptr, nullptr, 0.0250000004f, nullptr
	};

	StructRNA *srna = RNA_CloudsTexture;
	srna->cont.properties = {&rna_CloudsTexture_noise_scale, &rna_CloudsTexture_nabla};
	srna->identifier = "CloudsTexture";
	srna->flag = 519;
	srna->name = "Clouds Texture";
	srna->description = "Procedural noise texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Wood Texture */
static FloatPropertyRNA rna_WoodTexture_noise_scale_;
PropertyRNA &rna_WoodTexture_noise_scale = reinterpret_cast<PropertyRNA &>(rna_WoodTexture_noise_scale_);

static FloatPropertyRNA rna_WoodTexture_turbulence_;
PropertyRNA &rna_WoodTexture_turbulence = reinterpret_cast<PropertyRNA &>(rna_WoodTexture_turbulence_);

static EnumPropertyRNA rna_WoodTexture_noise_basis_;
PropertyRNA &rna_WoodTexture_noise_basis = reinterpret_cast<PropertyRNA &>(rna_WoodTexture_noise_basis_);

static EnumPropertyRNA rna_WoodTexture_noise_type_;
PropertyRNA &rna_WoodTexture_noise_type = reinterpret_cast<PropertyRNA &>(rna_WoodTexture_noise_type_);

static EnumPropertyRNA rna_WoodTexture_wood_type_;
PropertyRNA &rna_WoodTexture_wood_type = reinterpret_cast<PropertyRNA &>(rna_WoodTexture_wood_type_);

static EnumPropertyRNA rna_WoodTexture_noise_basis_2_;
PropertyRNA &rna_WoodTexture_noise_basis_2 = reinterpret_cast<PropertyRNA &>(rna_WoodTexture_noise_basis_2_);

static FloatPropertyRNA rna_WoodTexture_nabla_;
PropertyRNA &rna_WoodTexture_nabla = reinterpret_cast<PropertyRNA &>(rna_WoodTexture_nabla_);

StructRNA *RNA_WoodTexture;
void register_struct_WoodTexture(BlenderRNA &brna)
{
	rna_WoodTexture_noise_scale_ = {
		{&rna_WoodTexture_turbulence, 	nullptr,
		-1, "noise_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Size",
		"Scaling for noise input",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisesize), RawPropertyType(5), nullptr},
		WoodTexture_noise_scale_get, WoodTexture_noise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.2500000000f, nullptr
	};

	rna_WoodTexture_turbulence_ = {
		{&rna_WoodTexture_noise_basis, 	&rna_WoodTexture_noise_scale,
		-1, "turbulence", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Turbulence",
		"Turbulence of the bandnoise and ringnoise types",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, turbul), RawPropertyType(5), nullptr},
		WoodTexture_turbulence_get, WoodTexture_turbulence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 200.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, nullptr, nullptr, 5.0f, nullptr
	};

	static const EnumPropertyItem rna_WoodTexture_noise_basis_items[11] = {
		{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"	},
		{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"	},
		{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"	},
		{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"	},
		{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"	},
		{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"	},
		{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"	},
		{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"	},
		{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"	},
		{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_WoodTexture_noise_basis_ = {
		{&rna_WoodTexture_noise_type, 	&rna_WoodTexture_turbulence,
		-1, "noise_basis", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Basis",
		"Noise basis used for turbulence",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisebasis), RawPropertyType(1), nullptr},
		WoodTexture_noise_basis_get, WoodTexture_noise_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_WoodTexture_noise_basis_items, 10, 0
	};

	static const EnumPropertyItem rna_WoodTexture_noise_type_items[3] = {
		{0, "SOFT_NOISE", 0, "Soft", "Generate soft noise (smooth transitions)"	},
		{1, "HARD_NOISE", 0, "Hard", "Generate hard noise (sharp transitions)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_WoodTexture_noise_type_ = {
		{&rna_WoodTexture_wood_type, 	&rna_WoodTexture_noise_basis,
		-1, "noise_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisetype), RawPropertyType(1), nullptr},
		WoodTexture_noise_type_get, WoodTexture_noise_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_WoodTexture_noise_type_items, 2, 0
	};

	static const EnumPropertyItem rna_WoodTexture_wood_type_items[5] = {
		{0, "BANDS", 0, "Bands", "Use standard wood texture in bands"	},
		{1, "RINGS", 0, "Rings", "Use wood texture in rings"	},
		{2, "BANDNOISE", 0, "Band Noise", "Add noise to standard wood"	},
		{3, "RINGNOISE", 0, "Ring Noise", "Add noise to rings"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_WoodTexture_wood_type_ = {
		{&rna_WoodTexture_noise_basis_2, 	&rna_WoodTexture_noise_type,
		-1, "wood_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pattern",
		"",
		0, "Texture",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, stype), RawPropertyType(1), nullptr},
		WoodTexture_wood_type_get, WoodTexture_wood_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_WoodTexture_wood_type_items, 4, 0
	};

	static const EnumPropertyItem rna_WoodTexture_noise_basis_2_items[4] = {
		{0, "SIN", 0, "Sine", "Use a sine wave to produce bands"	},
		{1, "SAW", 0, "Saw", "Use a saw wave to produce bands"	},
		{2, "TRI", 0, "Tri", "Use a triangle wave to produce bands"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_WoodTexture_noise_basis_2_ = {
		{&rna_WoodTexture_nabla, 	&rna_WoodTexture_wood_type,
		-1, "noise_basis_2", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Basis 2",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisebasis2), RawPropertyType(1), nullptr},
		WoodTexture_noise_basis_2_get, WoodTexture_noise_basis_2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_WoodTexture_noise_basis_2_items, 3, 0
	};

	rna_WoodTexture_nabla_ = {
		{nullptr, 	&rna_WoodTexture_noise_basis_2,
		-1, "nabla", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Nabla",
		"Size of derivative offset used for calculating normal",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, nabla), RawPropertyType(5), nullptr},
		WoodTexture_nabla_get, WoodTexture_nabla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, nullptr, nullptr, 0.0250000004f, nullptr
	};

	StructRNA *srna = RNA_WoodTexture;
	srna->cont.properties = {&rna_WoodTexture_noise_scale, &rna_WoodTexture_nabla};
	srna->identifier = "WoodTexture";
	srna->flag = 519;
	srna->name = "Wood Texture";
	srna->description = "Procedural noise texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Marble Texture */
static FloatPropertyRNA rna_MarbleTexture_noise_scale_;
PropertyRNA &rna_MarbleTexture_noise_scale = reinterpret_cast<PropertyRNA &>(rna_MarbleTexture_noise_scale_);

static FloatPropertyRNA rna_MarbleTexture_turbulence_;
PropertyRNA &rna_MarbleTexture_turbulence = reinterpret_cast<PropertyRNA &>(rna_MarbleTexture_turbulence_);

static IntPropertyRNA rna_MarbleTexture_noise_depth_;
PropertyRNA &rna_MarbleTexture_noise_depth = reinterpret_cast<PropertyRNA &>(rna_MarbleTexture_noise_depth_);

static EnumPropertyRNA rna_MarbleTexture_noise_type_;
PropertyRNA &rna_MarbleTexture_noise_type = reinterpret_cast<PropertyRNA &>(rna_MarbleTexture_noise_type_);

static EnumPropertyRNA rna_MarbleTexture_marble_type_;
PropertyRNA &rna_MarbleTexture_marble_type = reinterpret_cast<PropertyRNA &>(rna_MarbleTexture_marble_type_);

static EnumPropertyRNA rna_MarbleTexture_noise_basis_;
PropertyRNA &rna_MarbleTexture_noise_basis = reinterpret_cast<PropertyRNA &>(rna_MarbleTexture_noise_basis_);

static EnumPropertyRNA rna_MarbleTexture_noise_basis_2_;
PropertyRNA &rna_MarbleTexture_noise_basis_2 = reinterpret_cast<PropertyRNA &>(rna_MarbleTexture_noise_basis_2_);

static FloatPropertyRNA rna_MarbleTexture_nabla_;
PropertyRNA &rna_MarbleTexture_nabla = reinterpret_cast<PropertyRNA &>(rna_MarbleTexture_nabla_);

StructRNA *RNA_MarbleTexture;
void register_struct_MarbleTexture(BlenderRNA &brna)
{
	rna_MarbleTexture_noise_scale_ = {
		{&rna_MarbleTexture_turbulence, 	nullptr,
		-1, "noise_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Size",
		"Scaling for noise input",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisesize), RawPropertyType(5), nullptr},
		MarbleTexture_noise_scale_get, MarbleTexture_noise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.2500000000f, nullptr
	};

	rna_MarbleTexture_turbulence_ = {
		{&rna_MarbleTexture_noise_depth, 	&rna_MarbleTexture_noise_scale,
		-1, "turbulence", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Turbulence",
		"Turbulence of the bandnoise and ringnoise types",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, turbul), RawPropertyType(5), nullptr},
		MarbleTexture_turbulence_get, MarbleTexture_turbulence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 200.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, nullptr, nullptr, 5.0f, nullptr
	};

	rna_MarbleTexture_noise_depth_ = {
		{&rna_MarbleTexture_noise_type, 	&rna_MarbleTexture_turbulence,
		-1, "noise_depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Depth",
		"Depth of the cloud calculation",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisedepth), RawPropertyType(1), nullptr},
		MarbleTexture_noise_depth_get, MarbleTexture_noise_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 24, 0, 30, 1, nullptr, nullptr, 2, nullptr
	};

	static const EnumPropertyItem rna_MarbleTexture_noise_type_items[3] = {
		{0, "SOFT_NOISE", 0, "Soft", "Generate soft noise (smooth transitions)"	},
		{1, "HARD_NOISE", 0, "Hard", "Generate hard noise (sharp transitions)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MarbleTexture_noise_type_ = {
		{&rna_MarbleTexture_marble_type, 	&rna_MarbleTexture_noise_depth,
		-1, "noise_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisetype), RawPropertyType(1), nullptr},
		MarbleTexture_noise_type_get, MarbleTexture_noise_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MarbleTexture_noise_type_items, 2, 0
	};

	static const EnumPropertyItem rna_MarbleTexture_marble_type_items[4] = {
		{0, "SOFT", 0, "Soft", "Use soft marble"	},
		{1, "SHARP", 0, "Sharp", "Use more clearly defined marble"	},
		{2, "SHARPER", 0, "Sharper", "Use very clearly defined marble"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MarbleTexture_marble_type_ = {
		{&rna_MarbleTexture_noise_basis, 	&rna_MarbleTexture_noise_type,
		-1, "marble_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pattern",
		"",
		0, "Texture",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, stype), RawPropertyType(1), nullptr},
		MarbleTexture_marble_type_get, MarbleTexture_marble_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MarbleTexture_marble_type_items, 3, 0
	};

	static const EnumPropertyItem rna_MarbleTexture_noise_basis_items[11] = {
		{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"	},
		{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"	},
		{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"	},
		{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"	},
		{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"	},
		{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"	},
		{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"	},
		{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"	},
		{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"	},
		{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MarbleTexture_noise_basis_ = {
		{&rna_MarbleTexture_noise_basis_2, 	&rna_MarbleTexture_marble_type,
		-1, "noise_basis", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Basis",
		"Noise basis used for turbulence",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisebasis), RawPropertyType(1), nullptr},
		MarbleTexture_noise_basis_get, MarbleTexture_noise_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MarbleTexture_noise_basis_items, 10, 0
	};

	static const EnumPropertyItem rna_MarbleTexture_noise_basis_2_items[4] = {
		{0, "SIN", 0, "Sin", "Use a sine wave to produce bands"	},
		{1, "SAW", 0, "Saw", "Use a saw wave to produce bands"	},
		{2, "TRI", 0, "Tri", "Use a triangle wave to produce bands"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MarbleTexture_noise_basis_2_ = {
		{&rna_MarbleTexture_nabla, 	&rna_MarbleTexture_noise_basis,
		-1, "noise_basis_2", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Basis 2",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisebasis2), RawPropertyType(1), nullptr},
		MarbleTexture_noise_basis_2_get, MarbleTexture_noise_basis_2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MarbleTexture_noise_basis_2_items, 3, 0
	};

	rna_MarbleTexture_nabla_ = {
		{nullptr, 	&rna_MarbleTexture_noise_basis_2,
		-1, "nabla", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Nabla",
		"Size of derivative offset used for calculating normal",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, nabla), RawPropertyType(5), nullptr},
		MarbleTexture_nabla_get, MarbleTexture_nabla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, nullptr, nullptr, 0.0250000004f, nullptr
	};

	StructRNA *srna = RNA_MarbleTexture;
	srna->cont.properties = {&rna_MarbleTexture_noise_scale, &rna_MarbleTexture_nabla};
	srna->identifier = "MarbleTexture";
	srna->flag = 519;
	srna->name = "Marble Texture";
	srna->description = "Procedural noise texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Magic Texture */
static FloatPropertyRNA rna_MagicTexture_turbulence_;
PropertyRNA &rna_MagicTexture_turbulence = reinterpret_cast<PropertyRNA &>(rna_MagicTexture_turbulence_);

static IntPropertyRNA rna_MagicTexture_noise_depth_;
PropertyRNA &rna_MagicTexture_noise_depth = reinterpret_cast<PropertyRNA &>(rna_MagicTexture_noise_depth_);

StructRNA *RNA_MagicTexture;
void register_struct_MagicTexture(BlenderRNA &brna)
{
	rna_MagicTexture_turbulence_ = {
		{&rna_MagicTexture_noise_depth, 	nullptr,
		-1, "turbulence", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Turbulence",
		"Turbulence of the noise",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, turbul), RawPropertyType(5), nullptr},
		MagicTexture_turbulence_get, MagicTexture_turbulence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 200.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, nullptr, nullptr, 5.0f, nullptr
	};

	rna_MagicTexture_noise_depth_ = {
		{nullptr, 	&rna_MagicTexture_turbulence,
		-1, "noise_depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Depth",
		"Depth of the noise",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisedepth), RawPropertyType(1), nullptr},
		MagicTexture_noise_depth_get, MagicTexture_noise_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 24, 0, 30, 1, nullptr, nullptr, 2, nullptr
	};

	StructRNA *srna = RNA_MagicTexture;
	srna->cont.properties = {&rna_MagicTexture_turbulence, &rna_MagicTexture_noise_depth};
	srna->identifier = "MagicTexture";
	srna->flag = 519;
	srna->name = "Magic Texture";
	srna->description = "Procedural noise texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Blend Texture */
static EnumPropertyRNA rna_BlendTexture_progression_;
PropertyRNA &rna_BlendTexture_progression = reinterpret_cast<PropertyRNA &>(rna_BlendTexture_progression_);

static EnumPropertyRNA rna_BlendTexture_use_flip_axis_;
PropertyRNA &rna_BlendTexture_use_flip_axis = reinterpret_cast<PropertyRNA &>(rna_BlendTexture_use_flip_axis_);

StructRNA *RNA_BlendTexture;
void register_struct_BlendTexture(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_BlendTexture_progression_items[8] = {
		{0, "LINEAR", 0, "Linear", "Create a linear progression"	},
		{1, "QUADRATIC", 0, "Quadratic", "Create a quadratic progression"	},
		{2, "EASING", 0, "Easing", "Create a progression easing from one step to the next"	},
		{3, "DIAGONAL", 0, "Diagonal", "Create a diagonal progression"	},
		{4, "SPHERICAL", 0, "Spherical", "Create a spherical progression"	},
		{5, "QUADRATIC_SPHERE", 0, "Quadratic Sphere", "Create a quadratic progression in the shape of a sphere"	},
		{6, "RADIAL", 0, "Radial", "Create a radial progression"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BlendTexture_progression_ = {
		{&rna_BlendTexture_use_flip_axis, 	nullptr,
		-1, "progression", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Progression",
		"Style of the color blending",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, stype), RawPropertyType(1), nullptr},
		BlendTexture_progression_get, BlendTexture_progression_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BlendTexture_progression_items, 7, 0
	};

	static const EnumPropertyItem rna_BlendTexture_use_flip_axis_items[3] = {
		{0, "HORIZONTAL", 0, "Horizontal", "No flipping"	},
		{2, "VERTICAL", 0, "Vertical", "Flip the texture\'s X and Y axis"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BlendTexture_use_flip_axis_ = {
		{nullptr, 	&rna_BlendTexture_progression,
		-1, "use_flip_axis", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Flip Axis",
		"Flip the texture\'s X and Y axis",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, flag), RawPropertyType(1), nullptr},
		BlendTexture_use_flip_axis_get, BlendTexture_use_flip_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BlendTexture_use_flip_axis_items, 2, 0
	};

	StructRNA *srna = RNA_BlendTexture;
	srna->cont.properties = {&rna_BlendTexture_progression, &rna_BlendTexture_use_flip_axis};
	srna->identifier = "BlendTexture";
	srna->flag = 519;
	srna->name = "Blend Texture";
	srna->description = "Procedural color blending texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Stucci Texture */
static FloatPropertyRNA rna_StucciTexture_turbulence_;
PropertyRNA &rna_StucciTexture_turbulence = reinterpret_cast<PropertyRNA &>(rna_StucciTexture_turbulence_);

static EnumPropertyRNA rna_StucciTexture_noise_basis_;
PropertyRNA &rna_StucciTexture_noise_basis = reinterpret_cast<PropertyRNA &>(rna_StucciTexture_noise_basis_);

static FloatPropertyRNA rna_StucciTexture_noise_scale_;
PropertyRNA &rna_StucciTexture_noise_scale = reinterpret_cast<PropertyRNA &>(rna_StucciTexture_noise_scale_);

static EnumPropertyRNA rna_StucciTexture_noise_type_;
PropertyRNA &rna_StucciTexture_noise_type = reinterpret_cast<PropertyRNA &>(rna_StucciTexture_noise_type_);

static EnumPropertyRNA rna_StucciTexture_stucci_type_;
PropertyRNA &rna_StucciTexture_stucci_type = reinterpret_cast<PropertyRNA &>(rna_StucciTexture_stucci_type_);

StructRNA *RNA_StucciTexture;
void register_struct_StucciTexture(BlenderRNA &brna)
{
	rna_StucciTexture_turbulence_ = {
		{&rna_StucciTexture_noise_basis, 	nullptr,
		-1, "turbulence", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Turbulence",
		"Turbulence of the noise",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, turbul), RawPropertyType(5), nullptr},
		StucciTexture_turbulence_get, StucciTexture_turbulence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 200.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, nullptr, nullptr, 5.0f, nullptr
	};

	static const EnumPropertyItem rna_StucciTexture_noise_basis_items[11] = {
		{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"	},
		{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"	},
		{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"	},
		{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"	},
		{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"	},
		{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"	},
		{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"	},
		{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"	},
		{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"	},
		{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StucciTexture_noise_basis_ = {
		{&rna_StucciTexture_noise_scale, 	&rna_StucciTexture_turbulence,
		-1, "noise_basis", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Basis",
		"Noise basis used for turbulence",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisebasis), RawPropertyType(1), nullptr},
		StucciTexture_noise_basis_get, StucciTexture_noise_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StucciTexture_noise_basis_items, 10, 0
	};

	rna_StucciTexture_noise_scale_ = {
		{&rna_StucciTexture_noise_type, 	&rna_StucciTexture_noise_basis,
		-1, "noise_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Size",
		"Scaling for noise input",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisesize), RawPropertyType(5), nullptr},
		StucciTexture_noise_scale_get, StucciTexture_noise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.2500000000f, nullptr
	};

	static const EnumPropertyItem rna_StucciTexture_noise_type_items[3] = {
		{0, "SOFT_NOISE", 0, "Soft", "Generate soft noise (smooth transitions)"	},
		{1, "HARD_NOISE", 0, "Hard", "Generate hard noise (sharp transitions)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StucciTexture_noise_type_ = {
		{&rna_StucciTexture_stucci_type, 	&rna_StucciTexture_noise_scale,
		-1, "noise_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisetype), RawPropertyType(1), nullptr},
		StucciTexture_noise_type_get, StucciTexture_noise_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StucciTexture_noise_type_items, 2, 0
	};

	static const EnumPropertyItem rna_StucciTexture_stucci_type_items[4] = {
		{0, "PLASTIC", 0, "Plastic", "Use standard stucci"	},
		{1, "WALL_IN", 0, "Wall In", "Create Dimples"	},
		{2, "WALL_OUT", 0, "Wall Out", "Create Ridges"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StucciTexture_stucci_type_ = {
		{nullptr, 	&rna_StucciTexture_noise_type,
		-1, "stucci_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pattern",
		"",
		0, "Texture",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, stype), RawPropertyType(1), nullptr},
		StucciTexture_stucci_type_get, StucciTexture_stucci_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StucciTexture_stucci_type_items, 3, 0
	};

	StructRNA *srna = RNA_StucciTexture;
	srna->cont.properties = {&rna_StucciTexture_turbulence, &rna_StucciTexture_stucci_type};
	srna->identifier = "StucciTexture";
	srna->flag = 519;
	srna->name = "Stucci Texture";
	srna->description = "Procedural noise texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Noise Texture */
StructRNA *RNA_NoiseTexture;
void register_struct_NoiseTexture(BlenderRNA &brna)
{

	StructRNA *srna = RNA_NoiseTexture;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "NoiseTexture";
	srna->flag = 519;
	srna->name = "Noise Texture";
	srna->description = "Procedural noise texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Image Texture */
static BoolPropertyRNA rna_ImageTexture_use_interpolation_;
PropertyRNA &rna_ImageTexture_use_interpolation = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_use_interpolation_);

static BoolPropertyRNA rna_ImageTexture_use_flip_axis_;
PropertyRNA &rna_ImageTexture_use_flip_axis = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_use_flip_axis_);

static BoolPropertyRNA rna_ImageTexture_use_alpha_;
PropertyRNA &rna_ImageTexture_use_alpha = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_use_alpha_);

static BoolPropertyRNA rna_ImageTexture_use_calculate_alpha_;
PropertyRNA &rna_ImageTexture_use_calculate_alpha = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_use_calculate_alpha_);

static BoolPropertyRNA rna_ImageTexture_invert_alpha_;
PropertyRNA &rna_ImageTexture_invert_alpha = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_invert_alpha_);

static FloatPropertyRNA rna_ImageTexture_filter_size_;
PropertyRNA &rna_ImageTexture_filter_size = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_filter_size_);

static EnumPropertyRNA rna_ImageTexture_extension_;
PropertyRNA &rna_ImageTexture_extension = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_extension_);

static IntPropertyRNA rna_ImageTexture_repeat_x_;
PropertyRNA &rna_ImageTexture_repeat_x = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_repeat_x_);

static IntPropertyRNA rna_ImageTexture_repeat_y_;
PropertyRNA &rna_ImageTexture_repeat_y = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_repeat_y_);

static BoolPropertyRNA rna_ImageTexture_use_mirror_x_;
PropertyRNA &rna_ImageTexture_use_mirror_x = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_use_mirror_x_);

static BoolPropertyRNA rna_ImageTexture_use_mirror_y_;
PropertyRNA &rna_ImageTexture_use_mirror_y = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_use_mirror_y_);

static BoolPropertyRNA rna_ImageTexture_use_checker_odd_;
PropertyRNA &rna_ImageTexture_use_checker_odd = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_use_checker_odd_);

static BoolPropertyRNA rna_ImageTexture_use_checker_even_;
PropertyRNA &rna_ImageTexture_use_checker_even = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_use_checker_even_);

static FloatPropertyRNA rna_ImageTexture_checker_distance_;
PropertyRNA &rna_ImageTexture_checker_distance = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_checker_distance_);

static FloatPropertyRNA rna_ImageTexture_crop_min_x_;
PropertyRNA &rna_ImageTexture_crop_min_x = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_crop_min_x_);

static FloatPropertyRNA rna_ImageTexture_crop_min_y_;
PropertyRNA &rna_ImageTexture_crop_min_y = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_crop_min_y_);

static FloatPropertyRNA rna_ImageTexture_crop_max_x_;
PropertyRNA &rna_ImageTexture_crop_max_x = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_crop_max_x_);

static FloatPropertyRNA rna_ImageTexture_crop_max_y_;
PropertyRNA &rna_ImageTexture_crop_max_y = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_crop_max_y_);

static PointerPropertyRNA rna_ImageTexture_image_;
PropertyRNA &rna_ImageTexture_image = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_image_);

static PointerPropertyRNA rna_ImageTexture_image_user_;
PropertyRNA &rna_ImageTexture_image_user = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_image_user_);

static BoolPropertyRNA rna_ImageTexture_use_normal_map_;
PropertyRNA &rna_ImageTexture_use_normal_map = reinterpret_cast<PropertyRNA &>(rna_ImageTexture_use_normal_map_);

StructRNA *RNA_ImageTexture;
void register_struct_ImageTexture(BlenderRNA &brna)
{
	rna_ImageTexture_use_interpolation_ = {
		{&rna_ImageTexture_use_flip_axis, 	nullptr,
		-1, "use_interpolation", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Interpolation",
		"Interpolate pixels using selected filter",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_use_interpolation_get, ImageTexture_use_interpolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ImageTexture_use_flip_axis_ = {
		{&rna_ImageTexture_use_alpha, 	&rna_ImageTexture_use_interpolation,
		-1, "use_flip_axis", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip Axis",
		"Flip the texture\'s X and Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_use_flip_axis_get, ImageTexture_use_flip_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageTexture_use_alpha_ = {
		{&rna_ImageTexture_use_calculate_alpha, 	&rna_ImageTexture_use_flip_axis,
		-1, "use_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Alpha",
		"Use the alpha channel information in the image",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_use_alpha_get, ImageTexture_use_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ImageTexture_use_calculate_alpha_ = {
		{&rna_ImageTexture_invert_alpha, 	&rna_ImageTexture_use_alpha,
		-1, "use_calculate_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Calculate Alpha",
		"Calculate an alpha channel based on RGB values in the image",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_use_calculate_alpha_get, ImageTexture_use_calculate_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageTexture_invert_alpha_ = {
		{&rna_ImageTexture_filter_size, 	&rna_ImageTexture_use_calculate_alpha,
		-1, "invert_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert Alpha",
		"Invert all the alpha values in the image",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_invert_alpha_get, ImageTexture_invert_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageTexture_filter_size_ = {
		{&rna_ImageTexture_extension, 	&rna_ImageTexture_invert_alpha,
		-1, "filter_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Filter Size",
		"Multiply the filter size used by interpolation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, filtersize), RawPropertyType(5), nullptr},
		ImageTexture_filter_size_get, ImageTexture_filter_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 50.0f, 0.1000000015f, 50.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	static const EnumPropertyItem rna_ImageTexture_extension_items[6] = {
		{1, "EXTEND", 0, "Extend", "Extend by repeating edge pixels of the image"	},
		{2, "CLIP", 0, "Clip", "Clip to image size and set exterior pixels as transparent"	},
		{4, "CLIP_CUBE", 0, "Clip Cube", "Clip to cubic-shaped area around the image and set exterior pixels as transparent"	},
		{3, "REPEAT", 0, "Repeat", "Cause the image to repeat horizontally and vertically"	},
		{5, "CHECKER", 0, "Checker", "Cause the image to repeat in checker board pattern"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ImageTexture_extension_ = {
		{&rna_ImageTexture_repeat_x, 	&rna_ImageTexture_filter_size,
		-1, "extension", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Extension",
		"How the image is extrapolated past its original bounds",
		0, "Image",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, extend), RawPropertyType(1), nullptr},
		ImageTexture_extension_get, ImageTexture_extension_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ImageTexture_extension_items, 5, 3
	};

	rna_ImageTexture_repeat_x_ = {
		{&rna_ImageTexture_repeat_y, 	&rna_ImageTexture_extension,
		-1, "repeat_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Repeat X",
		"Repetition multiplier in the X direction",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, xrepeat), RawPropertyType(1), nullptr},
		ImageTexture_repeat_x_get, ImageTexture_repeat_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 512, 1, 512, 1, nullptr, nullptr, 1, nullptr
	};

	rna_ImageTexture_repeat_y_ = {
		{&rna_ImageTexture_use_mirror_x, 	&rna_ImageTexture_repeat_x,
		-1, "repeat_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Repeat Y",
		"Repetition multiplier in the Y direction",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, yrepeat), RawPropertyType(1), nullptr},
		ImageTexture_repeat_y_get, ImageTexture_repeat_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 512, 1, 512, 1, nullptr, nullptr, 1, nullptr
	};

	rna_ImageTexture_use_mirror_x_ = {
		{&rna_ImageTexture_use_mirror_y, 	&rna_ImageTexture_repeat_y,
		-1, "use_mirror_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mirror X",
		"Mirror the image repetition on the X direction",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_use_mirror_x_get, ImageTexture_use_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageTexture_use_mirror_y_ = {
		{&rna_ImageTexture_use_checker_odd, 	&rna_ImageTexture_use_mirror_x,
		-1, "use_mirror_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mirror Y",
		"Mirror the image repetition on the Y direction",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_use_mirror_y_get, ImageTexture_use_mirror_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageTexture_use_checker_odd_ = {
		{&rna_ImageTexture_use_checker_even, 	&rna_ImageTexture_use_mirror_y,
		-1, "use_checker_odd", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Checker Odd",
		"Odd checker tiles",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_use_checker_odd_get, ImageTexture_use_checker_odd_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ImageTexture_use_checker_even_ = {
		{&rna_ImageTexture_checker_distance, 	&rna_ImageTexture_use_checker_odd,
		-1, "use_checker_even", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Checker Even",
		"Even checker tiles",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_use_checker_even_get, ImageTexture_use_checker_even_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageTexture_checker_distance_ = {
		{&rna_ImageTexture_crop_min_x, 	&rna_ImageTexture_use_checker_even,
		-1, "checker_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Checker Distance",
		"Distance between checker tiles",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, checkerdist), RawPropertyType(5), nullptr},
		ImageTexture_checker_distance_get, ImageTexture_checker_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 0.1000000015f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ImageTexture_crop_min_x_ = {
		{&rna_ImageTexture_crop_min_y, 	&rna_ImageTexture_checker_distance,
		-1, "crop_min_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Crop Minimum X",
		"Minimum X value to crop the image",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, cropxmin), RawPropertyType(5), nullptr},
		ImageTexture_crop_min_x_get, ImageTexture_crop_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ImageTexture_crop_min_y_ = {
		{&rna_ImageTexture_crop_max_x, 	&rna_ImageTexture_crop_min_x,
		-1, "crop_min_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Crop Minimum Y",
		"Minimum Y value to crop the image",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, cropymin), RawPropertyType(5), nullptr},
		ImageTexture_crop_min_y_get, ImageTexture_crop_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ImageTexture_crop_max_x_ = {
		{&rna_ImageTexture_crop_max_y, 	&rna_ImageTexture_crop_min_y,
		-1, "crop_max_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Crop Maximum X",
		"Maximum X value to crop the image",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, cropxmax), RawPropertyType(5), nullptr},
		ImageTexture_crop_max_x_get, ImageTexture_crop_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ImageTexture_crop_max_y_ = {
		{&rna_ImageTexture_image, 	&rna_ImageTexture_crop_max_x,
		-1, "crop_max_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Crop Maximum Y",
		"Maximum Y value to crop the image",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, cropymax), RawPropertyType(5), nullptr},
		ImageTexture_crop_max_y_get, ImageTexture_crop_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ImageTexture_image_ = {
		{&rna_ImageTexture_image_user, 	&rna_ImageTexture_crop_max_y,
		-1, "image", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Image",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_image_get, ImageTexture_image_set, nullptr, rna_Image_no_renderresult_or_viewer_poll,RNA_Image
	};

	rna_ImageTexture_image_user_ = {
		{&rna_ImageTexture_use_normal_map, 	&rna_ImageTexture_image,
		-1, "image_user", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image User",
		"Parameters defining which layer, pass and frame of the image is displayed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_image_user_get, nullptr, nullptr, nullptr,RNA_ImageUser
	};

	rna_ImageTexture_use_normal_map_ = {
		{nullptr, 	&rna_ImageTexture_image_user,
		-1, "use_normal_map", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Normal Map",
		"Use image RGB values for normal mapping",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageTexture_use_normal_map_get, ImageTexture_use_normal_map_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ImageTexture;
	srna->cont.properties = {&rna_ImageTexture_use_interpolation, &rna_ImageTexture_use_normal_map};
	srna->identifier = "ImageTexture";
	srna->flag = 519;
	srna->name = "Image Texture";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Musgrave */
static EnumPropertyRNA rna_MusgraveTexture_musgrave_type_;
PropertyRNA &rna_MusgraveTexture_musgrave_type = reinterpret_cast<PropertyRNA &>(rna_MusgraveTexture_musgrave_type_);

static FloatPropertyRNA rna_MusgraveTexture_dimension_max_;
PropertyRNA &rna_MusgraveTexture_dimension_max = reinterpret_cast<PropertyRNA &>(rna_MusgraveTexture_dimension_max_);

static FloatPropertyRNA rna_MusgraveTexture_lacunarity_;
PropertyRNA &rna_MusgraveTexture_lacunarity = reinterpret_cast<PropertyRNA &>(rna_MusgraveTexture_lacunarity_);

static FloatPropertyRNA rna_MusgraveTexture_octaves_;
PropertyRNA &rna_MusgraveTexture_octaves = reinterpret_cast<PropertyRNA &>(rna_MusgraveTexture_octaves_);

static FloatPropertyRNA rna_MusgraveTexture_offset_;
PropertyRNA &rna_MusgraveTexture_offset = reinterpret_cast<PropertyRNA &>(rna_MusgraveTexture_offset_);

static FloatPropertyRNA rna_MusgraveTexture_gain_;
PropertyRNA &rna_MusgraveTexture_gain = reinterpret_cast<PropertyRNA &>(rna_MusgraveTexture_gain_);

static FloatPropertyRNA rna_MusgraveTexture_noise_intensity_;
PropertyRNA &rna_MusgraveTexture_noise_intensity = reinterpret_cast<PropertyRNA &>(rna_MusgraveTexture_noise_intensity_);

static FloatPropertyRNA rna_MusgraveTexture_noise_scale_;
PropertyRNA &rna_MusgraveTexture_noise_scale = reinterpret_cast<PropertyRNA &>(rna_MusgraveTexture_noise_scale_);

static EnumPropertyRNA rna_MusgraveTexture_noise_basis_;
PropertyRNA &rna_MusgraveTexture_noise_basis = reinterpret_cast<PropertyRNA &>(rna_MusgraveTexture_noise_basis_);

static FloatPropertyRNA rna_MusgraveTexture_nabla_;
PropertyRNA &rna_MusgraveTexture_nabla = reinterpret_cast<PropertyRNA &>(rna_MusgraveTexture_nabla_);

StructRNA *RNA_MusgraveTexture;
void register_struct_MusgraveTexture(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_MusgraveTexture_musgrave_type_items[6] = {
		{0, "MULTIFRACTAL", 0, "Multifractal", "Use Perlin noise as a basis"	},
		{1, "RIDGED_MULTIFRACTAL", 0, "Ridged Multifractal", "Use Perlin noise with inflection as a basis"	},
		{2, "HYBRID_MULTIFRACTAL", 0, "Hybrid Multifractal", "Use Perlin noise as a basis, with extended controls"	},
		{3, "FBM", 0, "fBM", "Fractal Brownian Motion, use Brownian noise as a basis"	},
		{4, "HETERO_TERRAIN", 0, "Hetero Terrain", "Similar to multifractal"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MusgraveTexture_musgrave_type_ = {
		{&rna_MusgraveTexture_dimension_max, 	nullptr,
		-1, "musgrave_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Fractal noise algorithm",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, stype), RawPropertyType(1), nullptr},
		MusgraveTexture_musgrave_type_get, MusgraveTexture_musgrave_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MusgraveTexture_musgrave_type_items, 5, 0
	};

	rna_MusgraveTexture_dimension_max_ = {
		{&rna_MusgraveTexture_lacunarity, 	&rna_MusgraveTexture_musgrave_type,
		-1, "dimension_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Highest Dimension",
		"Highest fractal dimension",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, mg_H), RawPropertyType(5), nullptr},
		MusgraveTexture_dimension_max_get, MusgraveTexture_dimension_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 2.0f, 0.0001000000f, 2.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MusgraveTexture_lacunarity_ = {
		{&rna_MusgraveTexture_octaves, 	&rna_MusgraveTexture_dimension_max,
		-1, "lacunarity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lacunarity",
		"Gap between successive frequencies",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, mg_lacunarity), RawPropertyType(5), nullptr},
		MusgraveTexture_lacunarity_get, MusgraveTexture_lacunarity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 6.0f, 0.0f, 6.0f, 1.0f, 2, nullptr, nullptr, 2.0f, nullptr
	};

	rna_MusgraveTexture_octaves_ = {
		{&rna_MusgraveTexture_offset, 	&rna_MusgraveTexture_lacunarity,
		-1, "octaves", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Octaves",
		"Number of frequencies used",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, mg_octaves), RawPropertyType(5), nullptr},
		MusgraveTexture_octaves_get, MusgraveTexture_octaves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 8.0f, 0.0f, 8.0f, 1.0f, 2, nullptr, nullptr, 2.0f, nullptr
	};

	rna_MusgraveTexture_offset_ = {
		{&rna_MusgraveTexture_gain, 	&rna_MusgraveTexture_octaves,
		-1, "offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"The fractal offset",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, mg_offset), RawPropertyType(5), nullptr},
		MusgraveTexture_offset_get, MusgraveTexture_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 6.0f, 0.0f, 6.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MusgraveTexture_gain_ = {
		{&rna_MusgraveTexture_noise_intensity, 	&rna_MusgraveTexture_offset,
		-1, "gain", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gain",
		"The gain multiplier",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, mg_gain), RawPropertyType(5), nullptr},
		MusgraveTexture_gain_get, MusgraveTexture_gain_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 6.0f, 0.0f, 6.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MusgraveTexture_noise_intensity_ = {
		{&rna_MusgraveTexture_noise_scale, 	&rna_MusgraveTexture_gain,
		-1, "noise_intensity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Intensity",
		"Intensity of the noise",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, ns_outscale), RawPropertyType(5), nullptr},
		MusgraveTexture_noise_intensity_get, MusgraveTexture_noise_intensity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MusgraveTexture_noise_scale_ = {
		{&rna_MusgraveTexture_noise_basis, 	&rna_MusgraveTexture_noise_intensity,
		-1, "noise_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Size",
		"Scaling for noise input",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisesize), RawPropertyType(5), nullptr},
		MusgraveTexture_noise_scale_get, MusgraveTexture_noise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.2500000000f, nullptr
	};

	static const EnumPropertyItem rna_MusgraveTexture_noise_basis_items[11] = {
		{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"	},
		{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"	},
		{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"	},
		{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"	},
		{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"	},
		{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"	},
		{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"	},
		{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"	},
		{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"	},
		{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MusgraveTexture_noise_basis_ = {
		{&rna_MusgraveTexture_nabla, 	&rna_MusgraveTexture_noise_scale,
		-1, "noise_basis", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Basis",
		"Noise basis used for turbulence",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisebasis), RawPropertyType(1), nullptr},
		MusgraveTexture_noise_basis_get, MusgraveTexture_noise_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MusgraveTexture_noise_basis_items, 10, 0
	};

	rna_MusgraveTexture_nabla_ = {
		{nullptr, 	&rna_MusgraveTexture_noise_basis,
		-1, "nabla", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Nabla",
		"Size of derivative offset used for calculating normal",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, nabla), RawPropertyType(5), nullptr},
		MusgraveTexture_nabla_get, MusgraveTexture_nabla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, nullptr, nullptr, 0.0250000004f, nullptr
	};

	StructRNA *srna = RNA_MusgraveTexture;
	srna->cont.properties = {&rna_MusgraveTexture_musgrave_type, &rna_MusgraveTexture_nabla};
	srna->identifier = "MusgraveTexture";
	srna->flag = 519;
	srna->name = "Musgrave";
	srna->description = "Procedural musgrave texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Voronoi */
static FloatPropertyRNA rna_VoronoiTexture_weight_1_;
PropertyRNA &rna_VoronoiTexture_weight_1 = reinterpret_cast<PropertyRNA &>(rna_VoronoiTexture_weight_1_);

static FloatPropertyRNA rna_VoronoiTexture_weight_2_;
PropertyRNA &rna_VoronoiTexture_weight_2 = reinterpret_cast<PropertyRNA &>(rna_VoronoiTexture_weight_2_);

static FloatPropertyRNA rna_VoronoiTexture_weight_3_;
PropertyRNA &rna_VoronoiTexture_weight_3 = reinterpret_cast<PropertyRNA &>(rna_VoronoiTexture_weight_3_);

static FloatPropertyRNA rna_VoronoiTexture_weight_4_;
PropertyRNA &rna_VoronoiTexture_weight_4 = reinterpret_cast<PropertyRNA &>(rna_VoronoiTexture_weight_4_);

static FloatPropertyRNA rna_VoronoiTexture_minkovsky_exponent_;
PropertyRNA &rna_VoronoiTexture_minkovsky_exponent = reinterpret_cast<PropertyRNA &>(rna_VoronoiTexture_minkovsky_exponent_);

static EnumPropertyRNA rna_VoronoiTexture_distance_metric_;
PropertyRNA &rna_VoronoiTexture_distance_metric = reinterpret_cast<PropertyRNA &>(rna_VoronoiTexture_distance_metric_);

static EnumPropertyRNA rna_VoronoiTexture_color_mode_;
PropertyRNA &rna_VoronoiTexture_color_mode = reinterpret_cast<PropertyRNA &>(rna_VoronoiTexture_color_mode_);

static FloatPropertyRNA rna_VoronoiTexture_noise_intensity_;
PropertyRNA &rna_VoronoiTexture_noise_intensity = reinterpret_cast<PropertyRNA &>(rna_VoronoiTexture_noise_intensity_);

static FloatPropertyRNA rna_VoronoiTexture_noise_scale_;
PropertyRNA &rna_VoronoiTexture_noise_scale = reinterpret_cast<PropertyRNA &>(rna_VoronoiTexture_noise_scale_);

static FloatPropertyRNA rna_VoronoiTexture_nabla_;
PropertyRNA &rna_VoronoiTexture_nabla = reinterpret_cast<PropertyRNA &>(rna_VoronoiTexture_nabla_);

StructRNA *RNA_VoronoiTexture;
void register_struct_VoronoiTexture(BlenderRNA &brna)
{
	rna_VoronoiTexture_weight_1_ = {
		{&rna_VoronoiTexture_weight_2, 	nullptr,
		-1, "weight_1", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight 1",
		"Voronoi feature weight 1",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, vn_w1), RawPropertyType(5), nullptr},
		VoronoiTexture_weight_1_get, VoronoiTexture_weight_1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_VoronoiTexture_weight_2_ = {
		{&rna_VoronoiTexture_weight_3, 	&rna_VoronoiTexture_weight_1,
		-1, "weight_2", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight 2",
		"Voronoi feature weight 2",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, vn_w2), RawPropertyType(5), nullptr},
		VoronoiTexture_weight_2_get, VoronoiTexture_weight_2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_VoronoiTexture_weight_3_ = {
		{&rna_VoronoiTexture_weight_4, 	&rna_VoronoiTexture_weight_2,
		-1, "weight_3", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight 3",
		"Voronoi feature weight 3",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, vn_w3), RawPropertyType(5), nullptr},
		VoronoiTexture_weight_3_get, VoronoiTexture_weight_3_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_VoronoiTexture_weight_4_ = {
		{&rna_VoronoiTexture_minkovsky_exponent, 	&rna_VoronoiTexture_weight_3,
		-1, "weight_4", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight 4",
		"Voronoi feature weight 4",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, vn_w4), RawPropertyType(5), nullptr},
		VoronoiTexture_weight_4_get, VoronoiTexture_weight_4_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_VoronoiTexture_minkovsky_exponent_ = {
		{&rna_VoronoiTexture_distance_metric, 	&rna_VoronoiTexture_weight_4,
		-1, "minkovsky_exponent", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minkowski Exponent",
		"Minkowski exponent",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, vn_mexp), RawPropertyType(5), nullptr},
		VoronoiTexture_minkovsky_exponent_get, VoronoiTexture_minkovsky_exponent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 10.0f, 0.0099999998f, 10.0f, 10.0f, 3, nullptr, nullptr, 2.5000000000f, nullptr
	};

	static const EnumPropertyItem rna_VoronoiTexture_distance_metric_items[8] = {
		{0, "DISTANCE", 0, "Actual Distance", "sqrt(x*x+y*y+z*z)"	},
		{1, "DISTANCE_SQUARED", 0, "Distance Squared", "(x*x+y*y+z*z)"	},
		{2, "MANHATTAN", 0, "Manhattan", "The length of the distance in axial directions"	},
		{3, "CHEBYCHEV", 0, "Chebychev", "The length of the longest Axial journey"	},
		{4, "MINKOVSKY_HALF", 0, "Minkowski 1/2", "Set Minkowski variable to 0.5"	},
		{5, "MINKOVSKY_FOUR", 0, "Minkowski 4", "Set Minkowski variable to 4"	},
		{6, "MINKOVSKY", 0, "Minkowski", "Use the Minkowski function to calculate distance (exponent value determines the shape of the boundaries)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_VoronoiTexture_distance_metric_ = {
		{&rna_VoronoiTexture_color_mode, 	&rna_VoronoiTexture_minkovsky_exponent,
		-1, "distance_metric", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Distance Metric",
		"Algorithm used to calculate distance of sample points to feature points",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, vn_distm), RawPropertyType(1), nullptr},
		VoronoiTexture_distance_metric_get, VoronoiTexture_distance_metric_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_VoronoiTexture_distance_metric_items, 7, 0
	};

	static const EnumPropertyItem rna_VoronoiTexture_color_mode_items[5] = {
		{0, "INTENSITY", 0, "Intensity", "Only calculate intensity"	},
		{1, "POSITION", 0, "Position", "Color cells by position"	},
		{2, "POSITION_OUTLINE", 0, "Position and Outline", "Use position plus an outline based on F2-F1"	},
		{3, "POSITION_OUTLINE_INTENSITY", 0, "Position, Outline, and Intensity", "Multiply position and outline by intensity"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_VoronoiTexture_color_mode_ = {
		{&rna_VoronoiTexture_noise_intensity, 	&rna_VoronoiTexture_distance_metric,
		-1, "color_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Coloring",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, vn_coltype), RawPropertyType(1), nullptr},
		VoronoiTexture_color_mode_get, VoronoiTexture_color_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_VoronoiTexture_color_mode_items, 4, 0
	};

	rna_VoronoiTexture_noise_intensity_ = {
		{&rna_VoronoiTexture_noise_scale, 	&rna_VoronoiTexture_color_mode,
		-1, "noise_intensity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Intensity",
		"Scales the intensity of the noise",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, ns_outscale), RawPropertyType(5), nullptr},
		VoronoiTexture_noise_intensity_get, VoronoiTexture_noise_intensity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 10.0f, 0.0099999998f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_VoronoiTexture_noise_scale_ = {
		{&rna_VoronoiTexture_nabla, 	&rna_VoronoiTexture_noise_intensity,
		-1, "noise_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Size",
		"Scaling for noise input",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisesize), RawPropertyType(5), nullptr},
		VoronoiTexture_noise_scale_get, VoronoiTexture_noise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.2500000000f, nullptr
	};

	rna_VoronoiTexture_nabla_ = {
		{nullptr, 	&rna_VoronoiTexture_noise_scale,
		-1, "nabla", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Nabla",
		"Size of derivative offset used for calculating normal",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, nabla), RawPropertyType(5), nullptr},
		VoronoiTexture_nabla_get, VoronoiTexture_nabla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, nullptr, nullptr, 0.0250000004f, nullptr
	};

	StructRNA *srna = RNA_VoronoiTexture;
	srna->cont.properties = {&rna_VoronoiTexture_weight_1, &rna_VoronoiTexture_nabla};
	srna->identifier = "VoronoiTexture";
	srna->flag = 519;
	srna->name = "Voronoi";
	srna->description = "Procedural voronoi texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Distorted Noise */
static FloatPropertyRNA rna_DistortedNoiseTexture_distortion_;
PropertyRNA &rna_DistortedNoiseTexture_distortion = reinterpret_cast<PropertyRNA &>(rna_DistortedNoiseTexture_distortion_);

static FloatPropertyRNA rna_DistortedNoiseTexture_noise_scale_;
PropertyRNA &rna_DistortedNoiseTexture_noise_scale = reinterpret_cast<PropertyRNA &>(rna_DistortedNoiseTexture_noise_scale_);

static EnumPropertyRNA rna_DistortedNoiseTexture_noise_basis_;
PropertyRNA &rna_DistortedNoiseTexture_noise_basis = reinterpret_cast<PropertyRNA &>(rna_DistortedNoiseTexture_noise_basis_);

static EnumPropertyRNA rna_DistortedNoiseTexture_noise_distortion_;
PropertyRNA &rna_DistortedNoiseTexture_noise_distortion = reinterpret_cast<PropertyRNA &>(rna_DistortedNoiseTexture_noise_distortion_);

static FloatPropertyRNA rna_DistortedNoiseTexture_nabla_;
PropertyRNA &rna_DistortedNoiseTexture_nabla = reinterpret_cast<PropertyRNA &>(rna_DistortedNoiseTexture_nabla_);

StructRNA *RNA_DistortedNoiseTexture;
void register_struct_DistortedNoiseTexture(BlenderRNA &brna)
{
	rna_DistortedNoiseTexture_distortion_ = {
		{&rna_DistortedNoiseTexture_noise_scale, 	nullptr,
		-1, "distortion", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Distortion Amount",
		"Amount of distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, dist_amount), RawPropertyType(5), nullptr},
		DistortedNoiseTexture_distortion_get, DistortedNoiseTexture_distortion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_DistortedNoiseTexture_noise_scale_ = {
		{&rna_DistortedNoiseTexture_noise_basis, 	&rna_DistortedNoiseTexture_distortion,
		-1, "noise_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Size",
		"Scaling for noise input",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisesize), RawPropertyType(5), nullptr},
		DistortedNoiseTexture_noise_scale_get, DistortedNoiseTexture_noise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.2500000000f, nullptr
	};

	static const EnumPropertyItem rna_DistortedNoiseTexture_noise_basis_items[11] = {
		{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"	},
		{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"	},
		{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"	},
		{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"	},
		{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"	},
		{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"	},
		{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"	},
		{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"	},
		{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"	},
		{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DistortedNoiseTexture_noise_basis_ = {
		{&rna_DistortedNoiseTexture_noise_distortion, 	&rna_DistortedNoiseTexture_noise_scale,
		-1, "noise_basis", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Basis",
		"Noise basis used for turbulence",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisebasis2), RawPropertyType(1), nullptr},
		DistortedNoiseTexture_noise_basis_get, DistortedNoiseTexture_noise_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DistortedNoiseTexture_noise_basis_items, 10, 0
	};

	static const EnumPropertyItem rna_DistortedNoiseTexture_noise_distortion_items[11] = {
		{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"	},
		{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"	},
		{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"	},
		{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"	},
		{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"	},
		{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"	},
		{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"	},
		{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"	},
		{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"	},
		{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DistortedNoiseTexture_noise_distortion_ = {
		{&rna_DistortedNoiseTexture_nabla, 	&rna_DistortedNoiseTexture_noise_basis,
		-1, "noise_distortion", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Distortion",
		"Noise basis for the distortion",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_nodes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, noisebasis), RawPropertyType(1), nullptr},
		DistortedNoiseTexture_noise_distortion_get, DistortedNoiseTexture_noise_distortion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DistortedNoiseTexture_noise_distortion_items, 10, 0
	};

	rna_DistortedNoiseTexture_nabla_ = {
		{nullptr, 	&rna_DistortedNoiseTexture_noise_distortion,
		-1, "nabla", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Nabla",
		"Size of derivative offset used for calculating normal",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Tex, nabla), RawPropertyType(5), nullptr},
		DistortedNoiseTexture_nabla_get, DistortedNoiseTexture_nabla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, nullptr, nullptr, 0.0250000004f, nullptr
	};

	StructRNA *srna = RNA_DistortedNoiseTexture;
	srna->cont.properties = {&rna_DistortedNoiseTexture_distortion, &rna_DistortedNoiseTexture_nabla};
	srna->identifier = "DistortedNoiseTexture";
	srna->flag = 519;
	srna->name = "Distorted Noise";
	srna->description = "Procedural distorted noise texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Texture;
	srna->refine = rna_Texture_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Texture Slot */
static CollectionPropertyRNA rna_TextureSlot_rna_properties_;
PropertyRNA &rna_TextureSlot_rna_properties = reinterpret_cast<PropertyRNA &>(rna_TextureSlot_rna_properties_);

static PointerPropertyRNA rna_TextureSlot_rna_type_;
PropertyRNA &rna_TextureSlot_rna_type = reinterpret_cast<PropertyRNA &>(rna_TextureSlot_rna_type_);

static PointerPropertyRNA rna_TextureSlot_texture_;
PropertyRNA &rna_TextureSlot_texture = reinterpret_cast<PropertyRNA &>(rna_TextureSlot_texture_);

static StringPropertyRNA rna_TextureSlot_name_;
PropertyRNA &rna_TextureSlot_name = reinterpret_cast<PropertyRNA &>(rna_TextureSlot_name_);

static FloatPropertyRNA rna_TextureSlot_offset_;
PropertyRNA &rna_TextureSlot_offset = reinterpret_cast<PropertyRNA &>(rna_TextureSlot_offset_);

static FloatPropertyRNA rna_TextureSlot_scale_;
PropertyRNA &rna_TextureSlot_scale = reinterpret_cast<PropertyRNA &>(rna_TextureSlot_scale_);

static FloatPropertyRNA rna_TextureSlot_color_;
PropertyRNA &rna_TextureSlot_color = reinterpret_cast<PropertyRNA &>(rna_TextureSlot_color_);

static EnumPropertyRNA rna_TextureSlot_blend_type_;
PropertyRNA &rna_TextureSlot_blend_type = reinterpret_cast<PropertyRNA &>(rna_TextureSlot_blend_type_);

static FloatPropertyRNA rna_TextureSlot_default_value_;
PropertyRNA &rna_TextureSlot_default_value = reinterpret_cast<PropertyRNA &>(rna_TextureSlot_default_value_);

static EnumPropertyRNA rna_TextureSlot_output_node_;
PropertyRNA &rna_TextureSlot_output_node = reinterpret_cast<PropertyRNA &>(rna_TextureSlot_output_node_);

StructRNA *RNA_TextureSlot;
void register_struct_TextureSlot(BlenderRNA &brna)
{
	rna_TextureSlot_rna_properties_ = {
		{&rna_TextureSlot_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextureSlot_rna_properties_begin, TextureSlot_rna_properties_next, TextureSlot_rna_properties_end, TextureSlot_rna_properties_get, nullptr, nullptr, TextureSlot_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_TextureSlot_rna_type_ = {
		{&rna_TextureSlot_texture, 	&rna_TextureSlot_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextureSlot_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_TextureSlot_texture_ = {
		{&rna_TextureSlot_name, 	&rna_TextureSlot_rna_type,
		-1, "texture", 12583105, 1, 0, 0, 0, PropertyPathTemplateType(0), "Texture",
		"Texture data-block used by this texture slot",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlotTexture_update, 119537664, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextureSlot_texture_get, TextureSlot_texture_set, nullptr, nullptr,RNA_Texture
	};

	rna_TextureSlot_name_ = {
		{&rna_TextureSlot_offset, 	&rna_TextureSlot_texture,
		-1, "name", 4456448, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Texture slot name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextureSlot_name_get, TextureSlot_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	static float rna_TextureSlot_offset_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_TextureSlot_offset_ = {
		{&rna_TextureSlot_scale, 	&rna_TextureSlot_name,
		-1, "offset", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Fine tune of the texture mapping X, Y and Z locations",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, ofs), RawPropertyType(5), nullptr},
		nullptr, nullptr, TextureSlot_offset_get, TextureSlot_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, rna_TextureSlot_offset_default
	};

	static float rna_TextureSlot_scale_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_TextureSlot_scale_ = {
		{&rna_TextureSlot_color, 	&rna_TextureSlot_offset,
		-1, "scale", 71303171, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Set scaling for the texture\'s X, Y and Z sizes",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, size), RawPropertyType(5), nullptr},
		nullptr, nullptr, TextureSlot_scale_get, TextureSlot_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, nullptr, nullptr, 0.0f, rna_TextureSlot_scale_default
	};

	static float rna_TextureSlot_color_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_TextureSlot_color_ = {
		{&rna_TextureSlot_blend_type, 	&rna_TextureSlot_scale,
		-1, "color", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Default color for textures that don\'t return RGB or when RGB to intensity is enabled",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, r), RawPropertyType(5), nullptr},
		nullptr, nullptr, TextureSlot_color_get, TextureSlot_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, rna_TextureSlot_color_default
	};

	static const EnumPropertyItem rna_TextureSlot_blend_type_items[22] = {
		{0, "MIX", 0, "Mix", ""	},
		{0, "", 0, nullptr, nullptr	},
		{5, "DARKEN", 0, "Darken", ""	},
		{1, "MULTIPLY", 0, "Multiply", ""	},
		{0, "", 0, nullptr, nullptr	},
		{7, "LIGHTEN", 0, "Lighten", ""	},
		{8, "SCREEN", 0, "Screen", ""	},
		{2, "ADD", 0, "Add", ""	},
		{0, "", 0, nullptr, nullptr	},
		{9, "OVERLAY", 0, "Overlay", ""	},
		{15, "SOFT_LIGHT", 0, "Soft Light", ""	},
		{16, "LINEAR_LIGHT", 0, "Linear Light", ""	},
		{0, "", 0, nullptr, nullptr	},
		{6, "DIFFERENCE", 0, "Difference", ""	},
		{3, "SUBTRACT", 0, "Subtract", ""	},
		{4, "DIVIDE", 0, "Divide", ""	},
		{0, "", 0, nullptr, nullptr	},
		{10, "HUE", 0, "Hue", ""	},
		{11, "SATURATION", 0, "Saturation", ""	},
		{13, "COLOR", 0, "Color", ""	},
		{12, "VALUE", 0, "Value", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TextureSlot_blend_type_ = {
		{&rna_TextureSlot_default_value, 	&rna_TextureSlot_color,
		-1, "blend_type", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blend Type",
		"Mode used to apply the texture",
		0, "Color",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, blendtype), RawPropertyType(1), nullptr},
		TextureSlot_blend_type_get, TextureSlot_blend_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TextureSlot_blend_type_items, 21, 0
	};

	rna_TextureSlot_default_value_ = {
		{&rna_TextureSlot_output_node, 	&rna_TextureSlot_blend_type,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "Default Value",
		"Value to use for Ref, Spec, Amb, Emit, Alpha, RayMir, TransLu and Hard",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, def_var), RawPropertyType(5), nullptr},
		TextureSlot_default_value_get, TextureSlot_default_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_TextureSlot_output_node_ = {
		{nullptr, 	&rna_TextureSlot_default_value,
		-1, "output_node", 4194307, 0, 0, 0, 0, PropertyPathTemplateType(0), "Output Node",
		"Which output node to use, for node-based textures",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextureSlot_output_node_get, TextureSlot_output_node_set, rna_TextureSlot_output_node_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};

	StructRNA *srna = RNA_TextureSlot;
	srna->cont.properties = {&rna_TextureSlot_rna_properties, &rna_TextureSlot_output_node};
	srna->identifier = "TextureSlot";
	srna->flag = 516;
	srna->name = "Texture Slot";
	srna->description = "Texture slot defining the mapping and influence of a texture";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_TextureSlot_name;
	srna->iteratorproperty = &rna_TextureSlot_rna_properties;
	srna->path = rna_TextureSlot_path;
};

/* Texture Mapping */
static CollectionPropertyRNA rna_TexMapping_rna_properties_;
PropertyRNA &rna_TexMapping_rna_properties = reinterpret_cast<PropertyRNA &>(rna_TexMapping_rna_properties_);

static PointerPropertyRNA rna_TexMapping_rna_type_;
PropertyRNA &rna_TexMapping_rna_type = reinterpret_cast<PropertyRNA &>(rna_TexMapping_rna_type_);

static EnumPropertyRNA rna_TexMapping_vector_type_;
PropertyRNA &rna_TexMapping_vector_type = reinterpret_cast<PropertyRNA &>(rna_TexMapping_vector_type_);

static FloatPropertyRNA rna_TexMapping_translation_;
PropertyRNA &rna_TexMapping_translation = reinterpret_cast<PropertyRNA &>(rna_TexMapping_translation_);

static FloatPropertyRNA rna_TexMapping_rotation_;
PropertyRNA &rna_TexMapping_rotation = reinterpret_cast<PropertyRNA &>(rna_TexMapping_rotation_);

static FloatPropertyRNA rna_TexMapping_scale_;
PropertyRNA &rna_TexMapping_scale = reinterpret_cast<PropertyRNA &>(rna_TexMapping_scale_);

static FloatPropertyRNA rna_TexMapping_min_;
PropertyRNA &rna_TexMapping_min = reinterpret_cast<PropertyRNA &>(rna_TexMapping_min_);

static FloatPropertyRNA rna_TexMapping_max_;
PropertyRNA &rna_TexMapping_max = reinterpret_cast<PropertyRNA &>(rna_TexMapping_max_);

static BoolPropertyRNA rna_TexMapping_use_min_;
PropertyRNA &rna_TexMapping_use_min = reinterpret_cast<PropertyRNA &>(rna_TexMapping_use_min_);

static BoolPropertyRNA rna_TexMapping_use_max_;
PropertyRNA &rna_TexMapping_use_max = reinterpret_cast<PropertyRNA &>(rna_TexMapping_use_max_);

static EnumPropertyRNA rna_TexMapping_mapping_x_;
PropertyRNA &rna_TexMapping_mapping_x = reinterpret_cast<PropertyRNA &>(rna_TexMapping_mapping_x_);

static EnumPropertyRNA rna_TexMapping_mapping_y_;
PropertyRNA &rna_TexMapping_mapping_y = reinterpret_cast<PropertyRNA &>(rna_TexMapping_mapping_y_);

static EnumPropertyRNA rna_TexMapping_mapping_z_;
PropertyRNA &rna_TexMapping_mapping_z = reinterpret_cast<PropertyRNA &>(rna_TexMapping_mapping_z_);

static EnumPropertyRNA rna_TexMapping_mapping_;
PropertyRNA &rna_TexMapping_mapping = reinterpret_cast<PropertyRNA &>(rna_TexMapping_mapping_);

StructRNA *RNA_TexMapping;
void register_struct_TexMapping(BlenderRNA &brna)
{
	rna_TexMapping_rna_properties_ = {
		{&rna_TexMapping_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TexMapping_rna_properties_begin, TexMapping_rna_properties_next, TexMapping_rna_properties_end, TexMapping_rna_properties_get, nullptr, nullptr, TexMapping_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_TexMapping_rna_type_ = {
		{&rna_TexMapping_vector_type, 	&rna_TexMapping_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TexMapping_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_TexMapping_vector_type_ = {
		{&rna_TexMapping_translation, 	&rna_TexMapping_rna_type,
		-1, "vector_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of vector that the mapping transforms",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TexMapping, type), RawPropertyType(0), nullptr},
		TexMapping_vector_type_get, TexMapping_vector_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_mapping_type_items, 4, 0
	};

	static float rna_TexMapping_translation_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_TexMapping_translation_ = {
		{&rna_TexMapping_rotation, 	&rna_TexMapping_vector_type,
		-1, "translation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TexMapping, loc), RawPropertyType(5), nullptr},
		nullptr, nullptr, TexMapping_translation_get, TexMapping_translation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_TexMapping_translation_default
	};

	static float rna_TexMapping_rotation_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_TexMapping_rotation_ = {
		{&rna_TexMapping_scale, 	&rna_TexMapping_translation,
		-1, "rotation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {3, 0, 0}, 3,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TexMapping, rot), RawPropertyType(5), nullptr},
		nullptr, nullptr, TexMapping_rotation_get, TexMapping_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 5, nullptr, nullptr, 0.0f, rna_TexMapping_rotation_default
	};

	static float rna_TexMapping_scale_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_TexMapping_scale_ = {
		{&rna_TexMapping_min, 	&rna_TexMapping_rotation,
		-1, "scale", 67108867, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TexMapping, size), RawPropertyType(5), nullptr},
		nullptr, nullptr, TexMapping_scale_get, TexMapping_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_TexMapping_scale_default
	};

	static float rna_TexMapping_min_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_TexMapping_min_ = {
		{&rna_TexMapping_max, 	&rna_TexMapping_scale,
		-1, "min", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum",
		"Minimum value for clipping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TexMapping, min), RawPropertyType(5), nullptr},
		nullptr, nullptr, TexMapping_min_get, TexMapping_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_TexMapping_min_default
	};

	static float rna_TexMapping_max_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_TexMapping_max_ = {
		{&rna_TexMapping_use_min, 	&rna_TexMapping_min,
		-1, "max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum",
		"Maximum value for clipping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TexMapping, max), RawPropertyType(5), nullptr},
		nullptr, nullptr, TexMapping_max_get, TexMapping_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_TexMapping_max_default
	};

	rna_TexMapping_use_min_ = {
		{&rna_TexMapping_use_max, 	&rna_TexMapping_max,
		-1, "use_min", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Minimum",
		"Whether to use minimum clipping value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TexMapping_use_min_get, TexMapping_use_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TexMapping_use_max_ = {
		{&rna_TexMapping_mapping_x, 	&rna_TexMapping_use_min,
		-1, "use_max", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Maximum",
		"Whether to use maximum clipping value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TexMapping_use_max_get, TexMapping_use_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_TexMapping_mapping_x_items[5] = {
		{0, "NONE", 0, "None", ""	},
		{1, "X", 0, "X", ""	},
		{2, "Y", 0, "Y", ""	},
		{3, "Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TexMapping_mapping_x_ = {
		{&rna_TexMapping_mapping_y, 	&rna_TexMapping_use_max,
		-1, "mapping_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "X Mapping",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TexMapping, projx), RawPropertyType(2), nullptr},
		TexMapping_mapping_x_get, TexMapping_mapping_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TexMapping_mapping_x_items, 4, 0
	};

	static const EnumPropertyItem rna_TexMapping_mapping_y_items[5] = {
		{0, "NONE", 0, "None", ""	},
		{1, "X", 0, "X", ""	},
		{2, "Y", 0, "Y", ""	},
		{3, "Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TexMapping_mapping_y_ = {
		{&rna_TexMapping_mapping_z, 	&rna_TexMapping_mapping_x,
		-1, "mapping_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Y Mapping",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TexMapping, projy), RawPropertyType(2), nullptr},
		TexMapping_mapping_y_get, TexMapping_mapping_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TexMapping_mapping_y_items, 4, 0
	};

	static const EnumPropertyItem rna_TexMapping_mapping_z_items[5] = {
		{0, "NONE", 0, "None", ""	},
		{1, "X", 0, "X", ""	},
		{2, "Y", 0, "Y", ""	},
		{3, "Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TexMapping_mapping_z_ = {
		{&rna_TexMapping_mapping, 	&rna_TexMapping_mapping_y,
		-1, "mapping_z", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Z Mapping",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TexMapping, projz), RawPropertyType(2), nullptr},
		TexMapping_mapping_z_get, TexMapping_mapping_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TexMapping_mapping_z_items, 4, 0
	};

	static const EnumPropertyItem rna_TexMapping_mapping_items[5] = {
		{0, "FLAT", 0, "Flat", "Map X and Y coordinates directly"	},
		{1, "CUBE", 0, "Cube", "Map using the normal vector"	},
		{2, "TUBE", 0, "Tube", "Map with Z as central axis"	},
		{3, "SPHERE", 0, "Sphere", "Map with Z as central axis"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TexMapping_mapping_ = {
		{nullptr, 	&rna_TexMapping_mapping_z,
		-1, "mapping", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mapping",
		"",
		0, "Image",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Texture_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TexMapping, mapping), RawPropertyType(2), nullptr},
		TexMapping_mapping_get, TexMapping_mapping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TexMapping_mapping_items, 4, 0
	};

	StructRNA *srna = RNA_TexMapping;
	srna->cont.properties = {&rna_TexMapping_rna_properties, &rna_TexMapping_mapping};
	srna->identifier = "TexMapping";
	srna->flag = 516;
	srna->name = "Texture Mapping";
	srna->description = "Texture coordinate mapping settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_TexMapping_rna_properties;
};

/* Color Mapping */
static CollectionPropertyRNA rna_ColorMapping_rna_properties_;
PropertyRNA &rna_ColorMapping_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ColorMapping_rna_properties_);

static PointerPropertyRNA rna_ColorMapping_rna_type_;
PropertyRNA &rna_ColorMapping_rna_type = reinterpret_cast<PropertyRNA &>(rna_ColorMapping_rna_type_);

static BoolPropertyRNA rna_ColorMapping_use_color_ramp_;
PropertyRNA &rna_ColorMapping_use_color_ramp = reinterpret_cast<PropertyRNA &>(rna_ColorMapping_use_color_ramp_);

static PointerPropertyRNA rna_ColorMapping_color_ramp_;
PropertyRNA &rna_ColorMapping_color_ramp = reinterpret_cast<PropertyRNA &>(rna_ColorMapping_color_ramp_);

static FloatPropertyRNA rna_ColorMapping_brightness_;
PropertyRNA &rna_ColorMapping_brightness = reinterpret_cast<PropertyRNA &>(rna_ColorMapping_brightness_);

static FloatPropertyRNA rna_ColorMapping_contrast_;
PropertyRNA &rna_ColorMapping_contrast = reinterpret_cast<PropertyRNA &>(rna_ColorMapping_contrast_);

static FloatPropertyRNA rna_ColorMapping_saturation_;
PropertyRNA &rna_ColorMapping_saturation = reinterpret_cast<PropertyRNA &>(rna_ColorMapping_saturation_);

static EnumPropertyRNA rna_ColorMapping_blend_type_;
PropertyRNA &rna_ColorMapping_blend_type = reinterpret_cast<PropertyRNA &>(rna_ColorMapping_blend_type_);

static FloatPropertyRNA rna_ColorMapping_blend_color_;
PropertyRNA &rna_ColorMapping_blend_color = reinterpret_cast<PropertyRNA &>(rna_ColorMapping_blend_color_);

static FloatPropertyRNA rna_ColorMapping_blend_factor_;
PropertyRNA &rna_ColorMapping_blend_factor = reinterpret_cast<PropertyRNA &>(rna_ColorMapping_blend_factor_);

StructRNA *RNA_ColorMapping;
void register_struct_ColorMapping(BlenderRNA &brna)
{
	rna_ColorMapping_rna_properties_ = {
		{&rna_ColorMapping_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorMapping_rna_properties_begin, ColorMapping_rna_properties_next, ColorMapping_rna_properties_end, ColorMapping_rna_properties_get, nullptr, nullptr, ColorMapping_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ColorMapping_rna_type_ = {
		{&rna_ColorMapping_use_color_ramp, 	&rna_ColorMapping_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorMapping_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ColorMapping_use_color_ramp_ = {
		{&rna_ColorMapping_color_ramp, 	&rna_ColorMapping_rna_type,
		-1, "use_color_ramp", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Color Ramp",
		"Toggle color ramp operations",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Color_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorMapping_use_color_ramp_get, ColorMapping_use_color_ramp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ColorMapping_color_ramp_ = {
		{&rna_ColorMapping_brightness, 	&rna_ColorMapping_use_color_ramp,
		-1, "color_ramp", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Ramp",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		rna_Color_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorMapping_color_ramp_get, nullptr, nullptr, nullptr,RNA_ColorRamp
	};

	rna_ColorMapping_brightness_ = {
		{&rna_ColorMapping_contrast, 	&rna_ColorMapping_color_ramp,
		-1, "brightness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brightness",
		"Adjust the brightness of the texture",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Color_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorMapping, bright), RawPropertyType(5), nullptr},
		ColorMapping_brightness_get, ColorMapping_brightness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ColorMapping_contrast_ = {
		{&rna_ColorMapping_saturation, 	&rna_ColorMapping_brightness,
		-1, "contrast", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Contrast",
		"Adjust the contrast of the texture",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Color_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorMapping, contrast), RawPropertyType(5), nullptr},
		ColorMapping_contrast_get, ColorMapping_contrast_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 5.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ColorMapping_saturation_ = {
		{&rna_ColorMapping_blend_type, 	&rna_ColorMapping_contrast,
		-1, "saturation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Adjust the saturation of colors in the texture",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Color_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorMapping, saturation), RawPropertyType(5), nullptr},
		ColorMapping_saturation_get, ColorMapping_saturation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_ColorMapping_blend_type_items[22] = {
		{0, "MIX", 0, "Mix", ""	},
		{0, "", 0, nullptr, nullptr	},
		{5, "DARKEN", 0, "Darken", ""	},
		{1, "MULTIPLY", 0, "Multiply", ""	},
		{0, "", 0, nullptr, nullptr	},
		{7, "LIGHTEN", 0, "Lighten", ""	},
		{8, "SCREEN", 0, "Screen", ""	},
		{2, "ADD", 0, "Add", ""	},
		{0, "", 0, nullptr, nullptr	},
		{9, "OVERLAY", 0, "Overlay", ""	},
		{15, "SOFT_LIGHT", 0, "Soft Light", ""	},
		{16, "LINEAR_LIGHT", 0, "Linear Light", ""	},
		{0, "", 0, nullptr, nullptr	},
		{6, "DIFFERENCE", 0, "Difference", ""	},
		{3, "SUBTRACT", 0, "Subtract", ""	},
		{4, "DIVIDE", 0, "Divide", ""	},
		{0, "", 0, nullptr, nullptr	},
		{10, "HUE", 0, "Hue", ""	},
		{11, "SATURATION", 0, "Saturation", ""	},
		{13, "COLOR", 0, "Color", ""	},
		{12, "VALUE", 0, "Value", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ColorMapping_blend_type_ = {
		{&rna_ColorMapping_blend_color, 	&rna_ColorMapping_saturation,
		-1, "blend_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blend Type",
		"Mode used to mix with texture output color",
		0, "Color",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Color_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorMapping, blend_type), RawPropertyType(0), nullptr},
		ColorMapping_blend_type_get, ColorMapping_blend_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ColorMapping_blend_type_items, 21, 0
	};

	static float rna_ColorMapping_blend_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ColorMapping_blend_color_ = {
		{&rna_ColorMapping_blend_factor, 	&rna_ColorMapping_blend_type,
		-1, "blend_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Blend color to mix with texture output color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Color_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorMapping, blend_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, ColorMapping_blend_color_get, ColorMapping_blend_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ColorMapping_blend_color_default
	};

	rna_ColorMapping_blend_factor_ = {
		{nullptr, 	&rna_ColorMapping_blend_color,
		-1, "blend_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blend Factor",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Color_mapping_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorMapping, blend_factor), RawPropertyType(5), nullptr},
		ColorMapping_blend_factor_get, ColorMapping_blend_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ColorMapping;
	srna->cont.properties = {&rna_ColorMapping_rna_properties, &rna_ColorMapping_blend_factor};
	srna->identifier = "ColorMapping";
	srna->flag = 516;
	srna->name = "Color Mapping";
	srna->description = "Color mapping settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ColorMapping_rna_properties;
};


}  // namespace blender
