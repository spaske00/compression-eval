
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

#include "rna_object.cc"
#include "rna_object_api.cc"

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

extern PropertyRNA &rna_Object_data;
extern PropertyRNA &rna_Object_type;
extern PropertyRNA &rna_Object_mode;
extern PropertyRNA &rna_Object_bound_box;
extern PropertyRNA &rna_Object_parent;
extern PropertyRNA &rna_Object_parent_type;
extern PropertyRNA &rna_Object_parent_vertices;
extern PropertyRNA &rna_Object_parent_bone;
extern PropertyRNA &rna_Object_parent_bone_head_tail_factor;
extern PropertyRNA &rna_Object_use_parent_final_indices;
extern PropertyRNA &rna_Object_use_camera_lock_parent;
extern PropertyRNA &rna_Object_track_axis;
extern PropertyRNA &rna_Object_up_axis;
extern PropertyRNA &rna_Object_material_slots;
extern PropertyRNA &rna_Object_active_material;
extern PropertyRNA &rna_Object_active_material_index;
extern PropertyRNA &rna_Object_location;
extern PropertyRNA &rna_Object_rotation_quaternion;
extern PropertyRNA &rna_Object_rotation_axis_angle;
extern PropertyRNA &rna_Object_rotation_euler;
extern PropertyRNA &rna_Object_rotation_mode;
extern PropertyRNA &rna_Object_scale;
extern PropertyRNA &rna_Object_dimensions;
extern PropertyRNA &rna_Object_delta_location;
extern PropertyRNA &rna_Object_delta_rotation_euler;
extern PropertyRNA &rna_Object_delta_rotation_quaternion;
extern PropertyRNA &rna_Object_delta_scale;
extern PropertyRNA &rna_Object_lock_location;
extern PropertyRNA &rna_Object_lock_rotation;
extern PropertyRNA &rna_Object_lock_rotation_w;
extern PropertyRNA &rna_Object_lock_rotations_4d;
extern PropertyRNA &rna_Object_lock_scale;
extern PropertyRNA &rna_Object_matrix_world;
extern PropertyRNA &rna_Object_matrix_local;
extern PropertyRNA &rna_Object_matrix_basis;
extern PropertyRNA &rna_Object_matrix_parent_inverse;
extern PropertyRNA &rna_Object_modifiers;
extern PropertyRNA &rna_Object_shader_effects;
extern PropertyRNA &rna_Object_constraints;
extern PropertyRNA &rna_Object_vertex_groups;
extern PropertyRNA &rna_Object_empty_display_type;
extern PropertyRNA &rna_Object_empty_display_size;
extern PropertyRNA &rna_Object_empty_image_offset;
extern PropertyRNA &rna_Object_image_user;
extern PropertyRNA &rna_Object_empty_image_depth;
extern PropertyRNA &rna_Object_show_empty_image_perspective;
extern PropertyRNA &rna_Object_show_empty_image_orthographic;
extern PropertyRNA &rna_Object_show_empty_image_only_axis_aligned;
extern PropertyRNA &rna_Object_use_empty_image_alpha;
extern PropertyRNA &rna_Object_empty_image_side;
extern PropertyRNA &rna_Object_add_rest_position_attribute;
extern PropertyRNA &rna_Object_pass_index;
extern PropertyRNA &rna_Object_color;
extern PropertyRNA &rna_Object_field;
extern PropertyRNA &rna_Object_collision;
extern PropertyRNA &rna_Object_soft_body;
extern PropertyRNA &rna_Object_particle_systems;
extern PropertyRNA &rna_Object_rigid_body;
extern PropertyRNA &rna_Object_rigid_body_constraint;
extern PropertyRNA &rna_Object_use_simulation_cache;
extern PropertyRNA &rna_Object_hide_viewport;
extern PropertyRNA &rna_Object_hide_select;
extern PropertyRNA &rna_Object_hide_render;
extern PropertyRNA &rna_Object_hide_probe_volume;
extern PropertyRNA &rna_Object_hide_probe_sphere;
extern PropertyRNA &rna_Object_hide_probe_plane;
extern PropertyRNA &rna_Object_hide_surface_pick;
extern PropertyRNA &rna_Object_show_instancer_for_render;
extern PropertyRNA &rna_Object_show_instancer_for_viewport;
extern PropertyRNA &rna_Object_visible_camera;
extern PropertyRNA &rna_Object_visible_diffuse;
extern PropertyRNA &rna_Object_visible_glossy;
extern PropertyRNA &rna_Object_visible_transmission;
extern PropertyRNA &rna_Object_visible_volume_scatter;
extern PropertyRNA &rna_Object_visible_shadow;
extern PropertyRNA &rna_Object_is_holdout;
extern PropertyRNA &rna_Object_is_shadow_catcher;
extern PropertyRNA &rna_Object_visible_raycast;
extern PropertyRNA &rna_Object_instance_type;
extern PropertyRNA &rna_Object_use_instance_vertices_rotation;
extern PropertyRNA &rna_Object_use_instance_faces_scale;
extern PropertyRNA &rna_Object_instance_faces_scale;
extern PropertyRNA &rna_Object_instance_collection;
extern PropertyRNA &rna_Object_is_instancer;
extern PropertyRNA &rna_Object_display_type;
extern PropertyRNA &rna_Object_show_bounds;
extern PropertyRNA &rna_Object_display_bounds_type;
extern PropertyRNA &rna_Object_show_name;
extern PropertyRNA &rna_Object_show_axis;
extern PropertyRNA &rna_Object_show_texture_space;
extern PropertyRNA &rna_Object_show_wire;
extern PropertyRNA &rna_Object_show_all_edges;
extern PropertyRNA &rna_Object_use_grease_pencil_lights;
extern PropertyRNA &rna_Object_show_transparent;
extern PropertyRNA &rna_Object_show_in_front;
extern PropertyRNA &rna_Object_pose;
extern PropertyRNA &rna_Object_show_only_shape_key;
extern PropertyRNA &rna_Object_use_shape_key_edit_mode;
extern PropertyRNA &rna_Object_active_shape_key;
extern PropertyRNA &rna_Object_active_shape_key_index;
extern PropertyRNA &rna_Object_use_dynamic_topology_sculpting;
extern PropertyRNA &rna_Object_is_from_instancer;
extern PropertyRNA &rna_Object_is_from_set;
extern PropertyRNA &rna_Object_display;
extern PropertyRNA &rna_Object_lineart;
extern PropertyRNA &rna_Object_use_mesh_mirror_x;
extern PropertyRNA &rna_Object_use_mesh_mirror_y;
extern PropertyRNA &rna_Object_use_mesh_mirror_z;
extern PropertyRNA &rna_Object_lightgroup;
extern PropertyRNA &rna_Object_light_linking;
extern PropertyRNA &rna_Object_shadow_terminator_normal_offset;
extern PropertyRNA &rna_Object_shadow_terminator_geometry_offset;
extern PropertyRNA &rna_Object_shadow_terminator_shading_offset;
extern PropertyRNA &rna_Object_animation_data;
extern PropertyRNA &rna_Object_animation_visualization;
extern PropertyRNA &rna_Object_motion_path;

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


extern FunctionRNA *rna_Object_select_get_func;
extern PropertyRNA &rna_Object_select_get_view_layer;
extern PropertyRNA &rna_Object_select_get_result;

extern FunctionRNA *rna_Object_select_set_func;
extern PropertyRNA &rna_Object_select_set_state;
extern PropertyRNA &rna_Object_select_set_view_layer;

extern FunctionRNA *rna_Object_hide_get_func;
extern PropertyRNA &rna_Object_hide_get_view_layer;
extern PropertyRNA &rna_Object_hide_get_result;

extern FunctionRNA *rna_Object_hide_set_func;
extern PropertyRNA &rna_Object_hide_set_state;
extern PropertyRNA &rna_Object_hide_set_view_layer;

extern FunctionRNA *rna_Object_visible_get_func;
extern PropertyRNA &rna_Object_visible_get_view_layer;
extern PropertyRNA &rna_Object_visible_get_viewport;
extern PropertyRNA &rna_Object_visible_get_result;

extern FunctionRNA *rna_Object_holdout_get_func;
extern PropertyRNA &rna_Object_holdout_get_view_layer;
extern PropertyRNA &rna_Object_holdout_get_result;

extern FunctionRNA *rna_Object_indirect_only_get_func;
extern PropertyRNA &rna_Object_indirect_only_get_view_layer;
extern PropertyRNA &rna_Object_indirect_only_get_result;

extern FunctionRNA *rna_Object_local_view_get_func;
extern PropertyRNA &rna_Object_local_view_get_viewport;
extern PropertyRNA &rna_Object_local_view_get_result;

extern FunctionRNA *rna_Object_local_view_set_func;
extern PropertyRNA &rna_Object_local_view_set_viewport;
extern PropertyRNA &rna_Object_local_view_set_state;

extern FunctionRNA *rna_Object_visible_in_viewport_get_func;
extern PropertyRNA &rna_Object_visible_in_viewport_get_viewport;
extern PropertyRNA &rna_Object_visible_in_viewport_get_result;

extern FunctionRNA *rna_Object_convert_space_func;
extern PropertyRNA &rna_Object_convert_space_pose_bone;
extern PropertyRNA &rna_Object_convert_space_matrix;
extern PropertyRNA &rna_Object_convert_space_matrix_return;
extern PropertyRNA &rna_Object_convert_space_from_space;
extern PropertyRNA &rna_Object_convert_space_to_space;

extern FunctionRNA *rna_Object_calc_matrix_camera_func;
extern PropertyRNA &rna_Object_calc_matrix_camera_depsgraph;
extern PropertyRNA &rna_Object_calc_matrix_camera_result;
extern PropertyRNA &rna_Object_calc_matrix_camera_x;
extern PropertyRNA &rna_Object_calc_matrix_camera_y;
extern PropertyRNA &rna_Object_calc_matrix_camera_scale_x;
extern PropertyRNA &rna_Object_calc_matrix_camera_scale_y;

extern FunctionRNA *rna_Object_camera_fit_coords_func;
extern PropertyRNA &rna_Object_camera_fit_coords_depsgraph;
extern PropertyRNA &rna_Object_camera_fit_coords_coordinates;
extern PropertyRNA &rna_Object_camera_fit_coords_co_return;
extern PropertyRNA &rna_Object_camera_fit_coords_scale_return;

extern FunctionRNA *rna_Object_crazyspace_eval_func;
extern PropertyRNA &rna_Object_crazyspace_eval_depsgraph;
extern PropertyRNA &rna_Object_crazyspace_eval_scene;

extern FunctionRNA *rna_Object_crazyspace_displacement_to_deformed_func;
extern PropertyRNA &rna_Object_crazyspace_displacement_to_deformed_vertex_index;
extern PropertyRNA &rna_Object_crazyspace_displacement_to_deformed_displacement;
extern PropertyRNA &rna_Object_crazyspace_displacement_to_deformed_displacement_deformed;

extern FunctionRNA *rna_Object_crazyspace_displacement_to_original_func;
extern PropertyRNA &rna_Object_crazyspace_displacement_to_original_vertex_index;
extern PropertyRNA &rna_Object_crazyspace_displacement_to_original_displacement;
extern PropertyRNA &rna_Object_crazyspace_displacement_to_original_displacement_original;

extern FunctionRNA *rna_Object_crazyspace_eval_clear_func;
extern FunctionRNA *rna_Object_to_mesh_func;
extern PropertyRNA &rna_Object_to_mesh_preserve_all_data_layers;
extern PropertyRNA &rna_Object_to_mesh_depsgraph;
extern PropertyRNA &rna_Object_to_mesh_mesh;

extern FunctionRNA *rna_Object_to_mesh_clear_func;
extern FunctionRNA *rna_Object_to_curve_func;
extern PropertyRNA &rna_Object_to_curve_depsgraph;
extern PropertyRNA &rna_Object_to_curve_apply_modifiers;
extern PropertyRNA &rna_Object_to_curve_curve;

extern FunctionRNA *rna_Object_to_curve_clear_func;
extern FunctionRNA *rna_Object_find_armature_func;
extern PropertyRNA &rna_Object_find_armature_ob_arm;

extern FunctionRNA *rna_Object_shape_key_add_func;
extern PropertyRNA &rna_Object_shape_key_add_name;
extern PropertyRNA &rna_Object_shape_key_add_from_mix;
extern PropertyRNA &rna_Object_shape_key_add_key;

extern FunctionRNA *rna_Object_shape_key_remove_func;
extern PropertyRNA &rna_Object_shape_key_remove_key;

extern FunctionRNA *rna_Object_shape_key_clear_func;
extern FunctionRNA *rna_Object_shape_keys_selected_func;
extern PropertyRNA &rna_Object_shape_keys_selected_keyblocks;

extern FunctionRNA *rna_Object_ray_cast_func;
extern PropertyRNA &rna_Object_ray_cast_origin;
extern PropertyRNA &rna_Object_ray_cast_direction;
extern PropertyRNA &rna_Object_ray_cast_distance;
extern PropertyRNA &rna_Object_ray_cast_depsgraph;
extern PropertyRNA &rna_Object_ray_cast_result;
extern PropertyRNA &rna_Object_ray_cast_location;
extern PropertyRNA &rna_Object_ray_cast_normal;
extern PropertyRNA &rna_Object_ray_cast_index;

extern FunctionRNA *rna_Object_closest_point_on_mesh_func;
extern PropertyRNA &rna_Object_closest_point_on_mesh_origin;
extern PropertyRNA &rna_Object_closest_point_on_mesh_distance;
extern PropertyRNA &rna_Object_closest_point_on_mesh_depsgraph;
extern PropertyRNA &rna_Object_closest_point_on_mesh_result;
extern PropertyRNA &rna_Object_closest_point_on_mesh_location;
extern PropertyRNA &rna_Object_closest_point_on_mesh_normal;
extern PropertyRNA &rna_Object_closest_point_on_mesh_index;

extern FunctionRNA *rna_Object_is_modified_func;
extern PropertyRNA &rna_Object_is_modified_scene;
extern PropertyRNA &rna_Object_is_modified_settings;
extern PropertyRNA &rna_Object_is_modified_result;

extern FunctionRNA *rna_Object_is_deform_modified_func;
extern PropertyRNA &rna_Object_is_deform_modified_scene;
extern PropertyRNA &rna_Object_is_deform_modified_settings;
extern PropertyRNA &rna_Object_is_deform_modified_result;

extern FunctionRNA *rna_Object_dm_info_func;
extern PropertyRNA &rna_Object_dm_info_type;
extern PropertyRNA &rna_Object_dm_info_depsgraph;
extern PropertyRNA &rna_Object_dm_info_result;

extern FunctionRNA *rna_Object_update_from_editmode_func;
extern PropertyRNA &rna_Object_update_from_editmode_result;

extern FunctionRNA *rna_Object_cache_release_func;


extern PropertyRNA &rna_ObjectModifiers_rna_properties;
extern PropertyRNA &rna_ObjectModifiers_rna_type;
extern PropertyRNA &rna_ObjectModifiers_active;

extern FunctionRNA *rna_ObjectModifiers_new_func;
extern PropertyRNA &rna_ObjectModifiers_new_name;
extern PropertyRNA &rna_ObjectModifiers_new_type;
extern PropertyRNA &rna_ObjectModifiers_new_modifier;

extern FunctionRNA *rna_ObjectModifiers_remove_func;
extern PropertyRNA &rna_ObjectModifiers_remove_modifier;

extern FunctionRNA *rna_ObjectModifiers_clear_func;
extern FunctionRNA *rna_ObjectModifiers_move_func;
extern PropertyRNA &rna_ObjectModifiers_move_from_index;
extern PropertyRNA &rna_ObjectModifiers_move_to_index;



extern PropertyRNA &rna_ObjectShaderFx_rna_properties;
extern PropertyRNA &rna_ObjectShaderFx_rna_type;

extern FunctionRNA *rna_ObjectShaderFx_new_func;
extern PropertyRNA &rna_ObjectShaderFx_new_name;
extern PropertyRNA &rna_ObjectShaderFx_new_type;
extern PropertyRNA &rna_ObjectShaderFx_new_shader_fx;

extern FunctionRNA *rna_ObjectShaderFx_remove_func;
extern PropertyRNA &rna_ObjectShaderFx_remove_shader_fx;

extern FunctionRNA *rna_ObjectShaderFx_clear_func;


extern PropertyRNA &rna_ObjectConstraints_rna_properties;
extern PropertyRNA &rna_ObjectConstraints_rna_type;
extern PropertyRNA &rna_ObjectConstraints_active;

extern FunctionRNA *rna_ObjectConstraints_new_func;
extern PropertyRNA &rna_ObjectConstraints_new_type;
extern PropertyRNA &rna_ObjectConstraints_new_constraint;

extern FunctionRNA *rna_ObjectConstraints_remove_func;
extern PropertyRNA &rna_ObjectConstraints_remove_constraint;

extern FunctionRNA *rna_ObjectConstraints_clear_func;
extern FunctionRNA *rna_ObjectConstraints_move_func;
extern PropertyRNA &rna_ObjectConstraints_move_from_index;
extern PropertyRNA &rna_ObjectConstraints_move_to_index;

extern FunctionRNA *rna_ObjectConstraints_copy_func;
extern PropertyRNA &rna_ObjectConstraints_copy_constraint;
extern PropertyRNA &rna_ObjectConstraints_copy_new_constraint;



extern PropertyRNA &rna_VertexGroups_rna_properties;
extern PropertyRNA &rna_VertexGroups_rna_type;
extern PropertyRNA &rna_VertexGroups_active;
extern PropertyRNA &rna_VertexGroups_active_index;

extern FunctionRNA *rna_VertexGroups_new_func;
extern PropertyRNA &rna_VertexGroups_new_name;
extern PropertyRNA &rna_VertexGroups_new_group;

extern FunctionRNA *rna_VertexGroups_remove_func;
extern PropertyRNA &rna_VertexGroups_remove_group;

extern FunctionRNA *rna_VertexGroups_clear_func;


extern PropertyRNA &rna_ParticleSystems_rna_properties;
extern PropertyRNA &rna_ParticleSystems_rna_type;
extern PropertyRNA &rna_ParticleSystems_active;
extern PropertyRNA &rna_ParticleSystems_active_index;


extern PropertyRNA &rna_VertexGroup_rna_properties;
extern PropertyRNA &rna_VertexGroup_rna_type;
extern PropertyRNA &rna_VertexGroup_name;
extern PropertyRNA &rna_VertexGroup_lock_weight;
extern PropertyRNA &rna_VertexGroup_index;

extern FunctionRNA *rna_VertexGroup_add_func;
extern PropertyRNA &rna_VertexGroup_add_index;
extern PropertyRNA &rna_VertexGroup_add_weight;
extern PropertyRNA &rna_VertexGroup_add_type;

extern FunctionRNA *rna_VertexGroup_remove_func;
extern PropertyRNA &rna_VertexGroup_remove_index;

extern FunctionRNA *rna_VertexGroup_weight_func;
extern PropertyRNA &rna_VertexGroup_weight_index;
extern PropertyRNA &rna_VertexGroup_weight_weight;



extern PropertyRNA &rna_MaterialSlot_rna_properties;
extern PropertyRNA &rna_MaterialSlot_rna_type;
extern PropertyRNA &rna_MaterialSlot_link;
extern PropertyRNA &rna_MaterialSlot_material;
extern PropertyRNA &rna_MaterialSlot_slot_index;
extern PropertyRNA &rna_MaterialSlot_name;


extern PropertyRNA &rna_ObjectDisplay_rna_properties;
extern PropertyRNA &rna_ObjectDisplay_rna_type;
extern PropertyRNA &rna_ObjectDisplay_show_shadows;


extern PropertyRNA &rna_ObjectLineArt_rna_properties;
extern PropertyRNA &rna_ObjectLineArt_rna_type;
extern PropertyRNA &rna_ObjectLineArt_usage;
extern PropertyRNA &rna_ObjectLineArt_use_crease_override;
extern PropertyRNA &rna_ObjectLineArt_crease_threshold;
extern PropertyRNA &rna_ObjectLineArt_use_intersection_priority_override;
extern PropertyRNA &rna_ObjectLineArt_intersection_priority;


extern PropertyRNA &rna_ObjectLightLinking_rna_properties;
extern PropertyRNA &rna_ObjectLightLinking_rna_type;
extern PropertyRNA &rna_ObjectLightLinking_receiver_collection;
extern PropertyRNA &rna_ObjectLightLinking_blocker_collection;

PointerRNA Object_data_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_data_get;
    return fn(ptr);
}

void Object_data_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Object_data_set;
    fn(ptr, value, reports);
}

int Object_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->type);
}

int Object_mode_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->mode);
}

void Object_bound_box_get(PointerRNA *ptr, float values[24])
{
    PropFloatArrayGetFunc fn = rna_Object_boundbox_get;
    fn(ptr, values);
}

PointerRNA Object_parent_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->parent);
}

void Object_parent_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Object_parent_set;
    fn(ptr, value, reports);
}

int Object_parent_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (uint64_t(data->partype) & 7);
}

void Object_parent_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Object_parent_type_set;
    fn(ptr, value);
}

void Object_parent_vertices_get(PointerRNA *ptr, int values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (int)((&data->par1)[i]);
    }
}

void Object_parent_vertices_set(PointerRNA *ptr, const int values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (&data->par1)[i] = std::clamp(values[i], 0, INT_MAX);
    }
}

void Object_parent_bone_get(PointerRNA *ptr, char *value)
{
    Object *data = (Object *)(ptr->data);
    BLI_assert(strlen(data->parsubstr) < 64);
    strcpy(value, data->parsubstr);
}

int Object_parent_bone_length(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return strlen(data->parsubstr);
}

void Object_parent_bone_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Object_parent_bone_set;
    fn(ptr, value);
}

float Object_parent_bone_head_tail_factor_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (float)(data->parent_bone_head_tail_factor);
}

void Object_parent_bone_head_tail_factor_set(PointerRNA *ptr, float value)
{
    Object *data = (Object *)(ptr->data);
    data->parent_bone_head_tail_factor = (std::remove_reference_t<decltype(data->parent_bone_head_tail_factor)>)std::clamp(value, 0.0f, 1.0f);
}

bool Object_use_parent_final_indices_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->transflag) & 16384) != 0);
}

void Object_use_parent_final_indices_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->transflag = std::remove_reference_t<decltype(data->transflag)>(uint64_t(data->transflag) | 16384); }
    else { data->transflag = std::remove_reference_t<decltype(data->transflag)>(uint64_t(data->transflag) & ~uint64_t(16384)); }
}

bool Object_use_camera_lock_parent_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->transflag) & 1) != 0);
}

void Object_use_camera_lock_parent_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->transflag = std::remove_reference_t<decltype(data->transflag)>(uint64_t(data->transflag) | 1); }
    else { data->transflag = std::remove_reference_t<decltype(data->transflag)>(uint64_t(data->transflag) & ~uint64_t(1)); }
}

int Object_track_axis_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->trackflag);
}

void Object_track_axis_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->trackflag = (std::remove_reference_t<decltype(data->trackflag)>)value;
}

int Object_up_axis_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->upflag);
}

void Object_up_axis_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->upflag = (std::remove_reference_t<decltype(data->upflag)>)value;
}

int Object_material_slots_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Object_material_slots_length;
    return fn(ptr);
}

static PointerRNA Object_material_slots_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Object_material_slots_get;
    return fn(iter);
}

void Object_material_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Object_material_slots;

    PropCollectionBeginFunc fn = rna_Object_material_slots_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Object_material_slots_get(iter);
    }
}

void Object_material_slots_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_Object_material_slots_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Object_material_slots_get(iter);
    }
}

void Object_material_slots_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_Object_material_slots_end;
    fn(iter);
}

PointerRNA Object_active_material_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_active_material_get;
    return fn(ptr);
}

void Object_active_material_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Object_active_material_set;
    fn(ptr, value, reports);
}

int Object_active_material_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Object_active_material_index_get;
    return fn(ptr);
}

void Object_active_material_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Object_active_material_index_set;
    fn(ptr, value);
}

void Object_location_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->loc)[i]);
    }
}

void Object_location_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->loc)[i] = values[i];
    }
}

void Object_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->quat)[i]);
    }
}

void Object_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->quat)[i] = values[i];
    }
}

void Object_rotation_axis_angle_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_Object_rotation_axis_angle_get;
    fn(ptr, values);
}

void Object_rotation_axis_angle_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_Object_rotation_axis_angle_set;
    fn(ptr, values);
}

void Object_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rot)[i]);
    }
}

void Object_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->rot)[i] = values[i];
    }
}

int Object_rotation_mode_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->rotmode);
}

void Object_rotation_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Object_rotation_mode_set;
    fn(ptr, value);
}

void Object_scale_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

void Object_scale_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->scale)[i] = values[i];
    }
}

void Object_dimensions_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Object_dimensions_get;
    fn(ptr, values);
}

void Object_dimensions_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Object_dimensions_set;
    fn(ptr, values);
}

void Object_delta_location_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->dloc)[i]);
    }
}

void Object_delta_location_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->dloc)[i] = values[i];
    }
}

void Object_delta_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->drot)[i]);
    }
}

void Object_delta_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->drot)[i] = values[i];
    }
}

void Object_delta_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->dquat)[i]);
    }
}

void Object_delta_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->dquat)[i] = values[i];
    }
}

void Object_delta_scale_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->dscale)[i]);
    }
}

void Object_delta_scale_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->dscale)[i] = values[i];
    }
}

void Object_lock_location_get(PointerRNA *ptr, bool values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = ((uint64_t(data->protectflag) & (uint64_t(1) << i)) != 0);
    }
}

void Object_lock_location_set(PointerRNA *ptr, const bool values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) | (uint64_t(1) << i)); }
        else { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) & ~(uint64_t(1) << i)); }
    }
}

void Object_lock_rotation_get(PointerRNA *ptr, bool values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = ((uint64_t(data->protectflag) & (uint64_t(8) << i)) != 0);
    }
}

void Object_lock_rotation_set(PointerRNA *ptr, const bool values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) | (uint64_t(8) << i)); }
        else { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) & ~(uint64_t(8) << i)); }
    }
}

bool Object_lock_rotation_w_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->protectflag) & 512) != 0);
}

void Object_lock_rotation_w_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) | 512); }
    else { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) & ~uint64_t(512)); }
}

bool Object_lock_rotations_4d_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->protectflag) & 1024) != 0);
}

void Object_lock_rotations_4d_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) | 1024); }
    else { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) & ~uint64_t(1024)); }
}

void Object_lock_scale_get(PointerRNA *ptr, bool values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = ((uint64_t(data->protectflag) & (uint64_t(64) << i)) != 0);
    }
}

void Object_lock_scale_set(PointerRNA *ptr, const bool values[3])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) | (uint64_t(64) << i)); }
        else { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) & ~(uint64_t(64) << i)); }
    }
}

void Object_matrix_world_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Object_matrix_world_get;
    fn(ptr, values);
}

void Object_matrix_world_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Object_matrix_world_set;
    fn(ptr, values);
}

void Object_matrix_local_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Object_matrix_local_get;
    fn(ptr, values);
}

void Object_matrix_local_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Object_matrix_local_set;
    fn(ptr, values);
}

void Object_matrix_basis_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Object_matrix_basis_get;
    fn(ptr, values);
}

void Object_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Object_matrix_basis_set;
    fn(ptr, values);
}

void Object_matrix_parent_inverse_get(PointerRNA *ptr, float values[16])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->parentinv)[i]);
    }
}

void Object_matrix_parent_inverse_set(PointerRNA *ptr, const float values[16])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 16; i++) {
        ((float *)data->parentinv)[i] = values[i];
    }
}

static PointerRNA Object_modifiers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Modifier, rna_iterator_listbase_get(iter));
}

void Object_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Object_modifiers;

    rna_iterator_listbase_begin(iter, ptr, &data->modifiers, nullptr);

    if (iter->valid) {
        iter->ptr = Object_modifiers_get(iter);
    }
}

void Object_modifiers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Object_modifiers_get(iter);
    }
}

void Object_modifiers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Object_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Object_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_modifiers_get(&iter); }
    }

    Object_modifiers_end(&iter);

    return found;
}

int Modifier_name_length(PointerRNA *);
void Modifier_name_get(PointerRNA *, char *);

bool Object_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_modifiers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Modifier_name_length(&iter.ptr);
            if (namelen < 1024) {
                Modifier_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                Modifier_name_get(&iter.ptr, name);
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
        Object_modifiers_next(&iter);
    }
    Object_modifiers_end(&iter);

    return found;
}

static PointerRNA Object_shader_effects_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ShaderFx, rna_iterator_listbase_get(iter));
}

void Object_shader_effects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Object_shader_effects;

    rna_iterator_listbase_begin(iter, ptr, &data->shader_fx, nullptr);

    if (iter->valid) {
        iter->ptr = Object_shader_effects_get(iter);
    }
}

void Object_shader_effects_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Object_shader_effects_get(iter);
    }
}

void Object_shader_effects_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Object_shader_effects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Object_shader_effects_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_shader_effects_get(&iter); }
    }

    Object_shader_effects_end(&iter);

    return found;
}

int ShaderFx_name_length(PointerRNA *);
void ShaderFx_name_get(PointerRNA *, char *);

bool Object_shader_effects_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_shader_effects_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ShaderFx_name_length(&iter.ptr);
            if (namelen < 1024) {
                ShaderFx_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                ShaderFx_name_get(&iter.ptr, name);
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
        Object_shader_effects_next(&iter);
    }
    Object_shader_effects_end(&iter);

    return found;
}

static PointerRNA Object_constraints_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Constraint, rna_iterator_listbase_get(iter));
}

void Object_constraints_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Object_constraints;

    rna_iterator_listbase_begin(iter, ptr, &data->constraints, nullptr);

    if (iter->valid) {
        iter->ptr = Object_constraints_get(iter);
    }
}

void Object_constraints_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Object_constraints_get(iter);
    }
}

void Object_constraints_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Object_constraints_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Object_constraints_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_constraints_get(&iter); }
    }

    Object_constraints_end(&iter);

    return found;
}

int Constraint_name_length(PointerRNA *);
void Constraint_name_get(PointerRNA *, char *);

bool Object_constraints_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_constraints_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Constraint_name_length(&iter.ptr);
            if (namelen < 1024) {
                Constraint_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                Constraint_name_get(&iter.ptr, name);
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
        Object_constraints_next(&iter);
    }
    Object_constraints_end(&iter);

    return found;
}

static PointerRNA Object_vertex_groups_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_VertexGroup, rna_iterator_listbase_get(iter));
}

void Object_vertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Object_vertex_groups;

    PropCollectionBeginFunc fn = rna_Object_vertex_groups_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Object_vertex_groups_get(iter);
    }
}

void Object_vertex_groups_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Object_vertex_groups_get(iter);
    }
}

void Object_vertex_groups_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Object_vertex_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Object_vertex_groups_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_vertex_groups_get(&iter); }
    }

    Object_vertex_groups_end(&iter);

    return found;
}

int Object_empty_display_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->empty_drawtype);
}

void Object_empty_display_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Object_empty_display_type_set;
    fn(ptr, value);
}

float Object_empty_display_size_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (float)(data->empty_drawsize);
}

void Object_empty_display_size_set(PointerRNA *ptr, float value)
{
    Object *data = (Object *)(ptr->data);
    data->empty_drawsize = (std::remove_reference_t<decltype(data->empty_drawsize)>)std::clamp(value, 0.0001000000f, 1000.0f);
}

void Object_empty_image_offset_get(PointerRNA *ptr, float values[2])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->ima_ofs)[i]);
    }
}

void Object_empty_image_offset_set(PointerRNA *ptr, const float values[2])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->ima_ofs)[i] = values[i];
    }
}

PointerRNA Object_image_user_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ImageUser, data->iuser);
}

int Object_empty_image_depth_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->empty_image_depth);
}

void Object_empty_image_depth_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->empty_image_depth = (std::remove_reference_t<decltype(data->empty_image_depth)>)value;
}

bool Object_show_empty_image_perspective_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !((uint64_t(data->empty_image_visibility_flag) & 1) != 0);
}

void Object_show_empty_image_perspective_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->empty_image_visibility_flag = std::remove_reference_t<decltype(data->empty_image_visibility_flag)>(uint64_t(data->empty_image_visibility_flag) | 1); }
    else { data->empty_image_visibility_flag = std::remove_reference_t<decltype(data->empty_image_visibility_flag)>(uint64_t(data->empty_image_visibility_flag) & ~uint64_t(1)); }
}

bool Object_show_empty_image_orthographic_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !((uint64_t(data->empty_image_visibility_flag) & 2) != 0);
}

void Object_show_empty_image_orthographic_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->empty_image_visibility_flag = std::remove_reference_t<decltype(data->empty_image_visibility_flag)>(uint64_t(data->empty_image_visibility_flag) | 2); }
    else { data->empty_image_visibility_flag = std::remove_reference_t<decltype(data->empty_image_visibility_flag)>(uint64_t(data->empty_image_visibility_flag) & ~uint64_t(2)); }
}

bool Object_show_empty_image_only_axis_aligned_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->empty_image_visibility_flag) & 16) != 0);
}

void Object_show_empty_image_only_axis_aligned_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->empty_image_visibility_flag = std::remove_reference_t<decltype(data->empty_image_visibility_flag)>(uint64_t(data->empty_image_visibility_flag) | 16); }
    else { data->empty_image_visibility_flag = std::remove_reference_t<decltype(data->empty_image_visibility_flag)>(uint64_t(data->empty_image_visibility_flag) & ~uint64_t(16)); }
}

bool Object_use_empty_image_alpha_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->empty_image_flag) & 1) != 0);
}

void Object_use_empty_image_alpha_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->empty_image_flag = std::remove_reference_t<decltype(data->empty_image_flag)>(uint64_t(data->empty_image_flag) | 1); }
    else { data->empty_image_flag = std::remove_reference_t<decltype(data->empty_image_flag)>(uint64_t(data->empty_image_flag) & ~uint64_t(1)); }
}

int Object_empty_image_side_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (uint64_t(data->empty_image_visibility_flag) & 12);
}

void Object_empty_image_side_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->empty_image_visibility_flag = std::remove_reference_t<decltype(data->empty_image_visibility_flag)>(uint64_t(data->empty_image_visibility_flag) & ~uint64_t(12));
    data->empty_image_visibility_flag = std::remove_reference_t<decltype(data->empty_image_visibility_flag)>(uint64_t(data->empty_image_visibility_flag) | uint64_t(value));
}

bool Object_add_rest_position_attribute_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->modifier_flag) & 1) != 0);
}

void Object_add_rest_position_attribute_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->modifier_flag = std::remove_reference_t<decltype(data->modifier_flag)>(uint64_t(data->modifier_flag) | 1); }
    else { data->modifier_flag = std::remove_reference_t<decltype(data->modifier_flag)>(uint64_t(data->modifier_flag) & ~uint64_t(1)); }
}

int Object_pass_index_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->index);
}

void Object_pass_index_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->index = (std::remove_reference_t<decltype(data->index)>)std::clamp(value, 0, 32767);
}

void Object_color_get(PointerRNA *ptr, float values[4])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void Object_color_set(PointerRNA *ptr, const float values[4])
{
    Object *data = (Object *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

PointerRNA Object_field_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_field_get;
    return fn(ptr);
}

PointerRNA Object_collision_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_collision_get;
    return fn(ptr);
}

PointerRNA Object_soft_body_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_SoftBodySettings, data->soft);
}

static PointerRNA Object_particle_systems_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ParticleSystem, rna_iterator_listbase_get(iter));
}

void Object_particle_systems_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Object_particle_systems;

    rna_iterator_listbase_begin(iter, ptr, &data->particlesystem, nullptr);

    if (iter->valid) {
        iter->ptr = Object_particle_systems_get(iter);
    }
}

void Object_particle_systems_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Object_particle_systems_get(iter);
    }
}

void Object_particle_systems_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Object_particle_systems_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Object_particle_systems_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_particle_systems_get(&iter); }
    }

    Object_particle_systems_end(&iter);

    return found;
}

int ParticleSystem_name_length(PointerRNA *);
void ParticleSystem_name_get(PointerRNA *, char *);

bool Object_particle_systems_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_particle_systems_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ParticleSystem_name_length(&iter.ptr);
            if (namelen < 1024) {
                ParticleSystem_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                ParticleSystem_name_get(&iter.ptr, name);
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
        Object_particle_systems_next(&iter);
    }
    Object_particle_systems_end(&iter);

    return found;
}

PointerRNA Object_rigid_body_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_RigidBodyObject, data->rigidbody_object);
}

PointerRNA Object_rigid_body_constraint_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_RigidBodyConstraint, data->rigidbody_constraint);
}

bool Object_use_simulation_cache_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void Object_use_simulation_cache_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool Object_hide_viewport_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 1) != 0);
}

void Object_hide_viewport_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 1); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(1)); }
}

bool Object_hide_select_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 2) != 0);
}

void Object_hide_select_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 2); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(2)); }
}

bool Object_hide_render_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 4) != 0);
}

void Object_hide_render_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 4); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(4)); }
}

bool Object_hide_probe_volume_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 2048) != 0);
}

void Object_hide_probe_volume_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 2048); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(2048)); }
}

bool Object_hide_probe_sphere_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 4096) != 0);
}

void Object_hide_probe_sphere_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 4096); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(4096)); }
}

bool Object_hide_probe_plane_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 8192) != 0);
}

void Object_hide_probe_plane_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 8192); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(8192)); }
}

bool Object_hide_surface_pick_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 16384) != 0);
}

void Object_hide_surface_pick_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 16384); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(16384)); }
}

bool Object_show_instancer_for_render_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->duplicator_visibility_flag) & 2) != 0);
}

void Object_show_instancer_for_render_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->duplicator_visibility_flag = std::remove_reference_t<decltype(data->duplicator_visibility_flag)>(uint64_t(data->duplicator_visibility_flag) | 2); }
    else { data->duplicator_visibility_flag = std::remove_reference_t<decltype(data->duplicator_visibility_flag)>(uint64_t(data->duplicator_visibility_flag) & ~uint64_t(2)); }
}

bool Object_show_instancer_for_viewport_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->duplicator_visibility_flag) & 1) != 0);
}

void Object_show_instancer_for_viewport_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->duplicator_visibility_flag = std::remove_reference_t<decltype(data->duplicator_visibility_flag)>(uint64_t(data->duplicator_visibility_flag) | 1); }
    else { data->duplicator_visibility_flag = std::remove_reference_t<decltype(data->duplicator_visibility_flag)>(uint64_t(data->duplicator_visibility_flag) & ~uint64_t(1)); }
}

bool Object_visible_camera_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !((uint64_t(data->visibility_flag) & 8) != 0);
}

void Object_visible_camera_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 8); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(8)); }
}

bool Object_visible_diffuse_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !((uint64_t(data->visibility_flag) & 16) != 0);
}

void Object_visible_diffuse_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 16); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(16)); }
}

bool Object_visible_glossy_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !((uint64_t(data->visibility_flag) & 32) != 0);
}

void Object_visible_glossy_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 32); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(32)); }
}

bool Object_visible_transmission_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !((uint64_t(data->visibility_flag) & 64) != 0);
}

void Object_visible_transmission_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 64); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(64)); }
}

bool Object_visible_volume_scatter_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !((uint64_t(data->visibility_flag) & 128) != 0);
}

void Object_visible_volume_scatter_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 128); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(128)); }
}

bool Object_visible_shadow_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !((uint64_t(data->visibility_flag) & 256) != 0);
}

void Object_visible_shadow_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 256); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(256)); }
}

bool Object_is_holdout_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 512) != 0);
}

void Object_is_holdout_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 512); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(512)); }
}

bool Object_is_shadow_catcher_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->visibility_flag) & 1024) != 0);
}

void Object_is_shadow_catcher_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 1024); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(1024)); }
}

bool Object_visible_raycast_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !((uint64_t(data->visibility_flag) & 32768) != 0);
}

void Object_visible_raycast_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) | 32768); }
    else { data->visibility_flag = std::remove_reference_t<decltype(data->visibility_flag)>(uint64_t(data->visibility_flag) & ~uint64_t(32768)); }
}

int Object_instance_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (uint64_t(data->transflag) & 784);
}

void Object_instance_type_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->transflag = std::remove_reference_t<decltype(data->transflag)>(uint64_t(data->transflag) & ~uint64_t(784));
    data->transflag = std::remove_reference_t<decltype(data->transflag)>(uint64_t(data->transflag) | uint64_t(value));
}

bool Object_use_instance_vertices_rotation_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->transflag) & 32) != 0);
}

void Object_use_instance_vertices_rotation_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->transflag = std::remove_reference_t<decltype(data->transflag)>(uint64_t(data->transflag) | 32); }
    else { data->transflag = std::remove_reference_t<decltype(data->transflag)>(uint64_t(data->transflag) & ~uint64_t(32)); }
}

bool Object_use_instance_faces_scale_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->transflag) & 1024) != 0);
}

void Object_use_instance_faces_scale_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->transflag = std::remove_reference_t<decltype(data->transflag)>(uint64_t(data->transflag) | 1024); }
    else { data->transflag = std::remove_reference_t<decltype(data->transflag)>(uint64_t(data->transflag) & ~uint64_t(1024)); }
}

float Object_instance_faces_scale_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (float)(data->instance_faces_scale);
}

void Object_instance_faces_scale_set(PointerRNA *ptr, float value)
{
    Object *data = (Object *)(ptr->data);
    data->instance_faces_scale = (std::remove_reference_t<decltype(data->instance_faces_scale)>)std::clamp(value, 0.0010000000f, 10000.0f);
}

PointerRNA Object_instance_collection_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->instance_collection);
}

void Object_instance_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Object_dup_collection_set;
    fn(ptr, value, reports);
}

bool Object_is_instancer_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->transflag) & 2832) != 0);
}

int Object_display_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->dt);
}

void Object_display_type_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->dt = (std::remove_reference_t<decltype(data->dt)>)value;
}

bool Object_show_bounds_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->dtx) & 1) != 0);
}

void Object_show_bounds_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) | 1); }
    else { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) & ~uint64_t(1)); }
}

int Object_display_bounds_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->boundtype);
}

void Object_display_bounds_type_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->boundtype = (std::remove_reference_t<decltype(data->boundtype)>)value;
}

bool Object_show_name_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->dtx) & 8) != 0);
}

void Object_show_name_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) | 8); }
    else { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) & ~uint64_t(8)); }
}

bool Object_show_axis_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->dtx) & 2) != 0);
}

void Object_show_axis_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) | 2); }
    else { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) & ~uint64_t(2)); }
}

bool Object_show_texture_space_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->dtx) & 4) != 0);
}

void Object_show_texture_space_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) | 4); }
    else { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) & ~uint64_t(4)); }
}

bool Object_show_wire_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->dtx) & 32) != 0);
}

void Object_show_wire_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) | 32); }
    else { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) & ~uint64_t(32)); }
}

bool Object_show_all_edges_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->dtx) & 256) != 0);
}

void Object_show_all_edges_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) | 256); }
    else { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) & ~uint64_t(256)); }
}

bool Object_use_grease_pencil_lights_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->dtx) & 1024) != 0);
}

void Object_use_grease_pencil_lights_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) | 1024); }
    else { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) & ~uint64_t(1024)); }
}

bool Object_show_transparent_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->dtx) & 128) != 0);
}

void Object_show_transparent_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) | 128); }
    else { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) & ~uint64_t(128)); }
}

bool Object_show_in_front_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->dtx) & 64) != 0);
}

void Object_show_in_front_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) | 64); }
    else { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) & ~uint64_t(64)); }
}

PointerRNA Object_pose_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Pose, data->pose);
}

bool Object_show_only_shape_key_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->shapeflag) & 1) != 0);
}

void Object_show_only_shape_key_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->shapeflag = std::remove_reference_t<decltype(data->shapeflag)>(uint64_t(data->shapeflag) | 1); }
    else { data->shapeflag = std::remove_reference_t<decltype(data->shapeflag)>(uint64_t(data->shapeflag) & ~uint64_t(1)); }
}

bool Object_use_shape_key_edit_mode_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->shapeflag) & 4) != 0);
}

void Object_use_shape_key_edit_mode_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->shapeflag = std::remove_reference_t<decltype(data->shapeflag)>(uint64_t(data->shapeflag) | 4); }
    else { data->shapeflag = std::remove_reference_t<decltype(data->shapeflag)>(uint64_t(data->shapeflag) & ~uint64_t(4)); }
}

PointerRNA Object_active_shape_key_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_active_shape_key_get;
    return fn(ptr);
}

int Object_active_shape_key_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Object_active_shape_key_index_get;
    return fn(ptr);
}

void Object_active_shape_key_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Object_active_shape_key_index_set;
    fn(ptr, value);
}

bool Object_use_dynamic_topology_sculpting_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Object_use_dynamic_topology_sculpting_get;
    return fn(ptr);
}

bool Object_is_from_instancer_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->base_flag) & 8) != 0);
}

bool Object_is_from_set_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((uint64_t(data->base_flag) & 32) != 0);
}

PointerRNA Object_display_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_display_get;
    return fn(ptr);
}

PointerRNA Object_lineart_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ObjectLineArt, &data->lineart);
}

bool Object_use_mesh_mirror_x_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Object_mesh_symmetry_x_get;
    return fn(ptr);
}

void Object_use_mesh_mirror_x_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Object_mesh_symmetry_x_set;
    fn(ptr, value);
}

bool Object_use_mesh_mirror_y_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Object_mesh_symmetry_y_get;
    return fn(ptr);
}

void Object_use_mesh_mirror_y_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Object_mesh_symmetry_y_set;
    fn(ptr, value);
}

bool Object_use_mesh_mirror_z_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Object_mesh_symmetry_z_get;
    return fn(ptr);
}

void Object_use_mesh_mirror_z_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Object_mesh_symmetry_z_set;
    fn(ptr, value);
}

void Object_lightgroup_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Object_lightgroup_get;
    fn(ptr, value);
}

int Object_lightgroup_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Object_lightgroup_length;
    return fn(ptr);
}

void Object_lightgroup_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Object_lightgroup_set;
    fn(ptr, value);
}

PointerRNA Object_light_linking_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_light_linking_get;
    return fn(ptr);
}

float Object_shadow_terminator_normal_offset_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (float)(data->shadow_terminator_normal_offset);
}

void Object_shadow_terminator_normal_offset_set(PointerRNA *ptr, float value)
{
    Object *data = (Object *)(ptr->data);
    data->shadow_terminator_normal_offset = (std::remove_reference_t<decltype(data->shadow_terminator_normal_offset)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Object_shadow_terminator_geometry_offset_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (float)(data->shadow_terminator_geometry_offset);
}

void Object_shadow_terminator_geometry_offset_set(PointerRNA *ptr, float value)
{
    Object *data = (Object *)(ptr->data);
    data->shadow_terminator_geometry_offset = (std::remove_reference_t<decltype(data->shadow_terminator_geometry_offset)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Object_shadow_terminator_shading_offset_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (float)(data->shadow_terminator_shading_offset);
}

void Object_shadow_terminator_shading_offset_set(PointerRNA *ptr, float value)
{
    Object *data = (Object *)(ptr->data);
    data->shadow_terminator_shading_offset = (std::remove_reference_t<decltype(data->shadow_terminator_shading_offset)>)std::clamp(value, 0.0f, FLT_MAX);
}

PointerRNA Object_animation_data_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

PointerRNA Object_animation_visualization_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimViz, &data->avs);
}

PointerRNA Object_motion_path_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MotionPath, data->mpath);
}

static PointerRNA ObjectModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ObjectModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ObjectModifiers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectModifiers_rna_properties_get(iter);
    }
}

void ObjectModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ObjectModifiers_rna_properties_get(iter);
    }
}

void ObjectModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ObjectModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ObjectModifiers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ObjectModifiers_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_active_modifier_get;
    return fn(ptr);
}

void ObjectModifiers_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Object_active_modifier_set;
    fn(ptr, value, reports);
}

static PointerRNA ObjectShaderFx_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ObjectShaderFx_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ObjectShaderFx_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectShaderFx_rna_properties_get(iter);
    }
}

void ObjectShaderFx_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ObjectShaderFx_rna_properties_get(iter);
    }
}

void ObjectShaderFx_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ObjectShaderFx_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ObjectShaderFx_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA ObjectConstraints_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ObjectConstraints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ObjectConstraints_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectConstraints_rna_properties_get(iter);
    }
}

void ObjectConstraints_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ObjectConstraints_rna_properties_get(iter);
    }
}

void ObjectConstraints_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ObjectConstraints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ObjectConstraints_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ObjectConstraints_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_active_constraint_get;
    return fn(ptr);
}

void ObjectConstraints_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Object_active_constraint_set;
    fn(ptr, value, reports);
}

static PointerRNA VertexGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void VertexGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_VertexGroups_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexGroups_rna_properties_get(iter);
    }
}

void VertexGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = VertexGroups_rna_properties_get(iter);
    }
}

void VertexGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool VertexGroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA VertexGroups_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA VertexGroups_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_active_vertex_group_get;
    return fn(ptr);
}

void VertexGroups_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Object_active_vertex_group_set;
    fn(ptr, value, reports);
}

int VertexGroups_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Object_active_vertex_group_index_get;
    return fn(ptr);
}

void VertexGroups_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Object_active_vertex_group_index_set;
    fn(ptr, value);
}

static PointerRNA ParticleSystems_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ParticleSystems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleSystems_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleSystems_rna_properties_get(iter);
    }
}

void ParticleSystems_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystems_rna_properties_get(iter);
    }
}

void ParticleSystems_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleSystems_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ParticleSystems_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ParticleSystems_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Object_active_particle_system_get;
    return fn(ptr);
}

int ParticleSystems_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Object_active_particle_system_index_get;
    return fn(ptr);
}

void ParticleSystems_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Object_active_particle_system_index_set;
    fn(ptr, value);
}

static PointerRNA VertexGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void VertexGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_VertexGroup_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexGroup_rna_properties_get(iter);
    }
}

void VertexGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = VertexGroup_rna_properties_get(iter);
    }
}

void VertexGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool VertexGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA VertexGroup_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void VertexGroup_name_get(PointerRNA *ptr, char *value)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int VertexGroup_name_length(PointerRNA *ptr)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    return strlen(data->name);
}

void VertexGroup_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_VertexGroup_name_set;
    fn(ptr, value);
}

bool VertexGroup_lock_weight_get(PointerRNA *ptr)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    return (bool)(data->flag);
}

void VertexGroup_lock_weight_set(PointerRNA *ptr, bool value)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    data->flag = (std::remove_reference_t<decltype(data->flag)>)value;
}

int VertexGroup_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_VertexGroup_index_get;
    return fn(ptr);
}

static PointerRNA MaterialSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaterialSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaterialSlot_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaterialSlot_rna_properties_get(iter);
    }
}

void MaterialSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaterialSlot_rna_properties_get(iter);
    }
}

void MaterialSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaterialSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaterialSlot_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MaterialSlot_link_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_MaterialSlot_link_get;
    return fn(ptr);
}

void MaterialSlot_link_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_MaterialSlot_link_set;
    fn(ptr, value);
}

PointerRNA MaterialSlot_material_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_MaterialSlot_material_get;
    return fn(ptr);
}

void MaterialSlot_material_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_MaterialSlot_material_set;
    fn(ptr, value, reports);
}

int MaterialSlot_slot_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MaterialSlot_index_get;
    return fn(ptr);
}

void MaterialSlot_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_MaterialSlot_name_get;
    fn(ptr, value);
}

int MaterialSlot_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_MaterialSlot_name_length;
    return fn(ptr);
}

static PointerRNA ObjectDisplay_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ObjectDisplay_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ObjectDisplay_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectDisplay_rna_properties_get(iter);
    }
}

void ObjectDisplay_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ObjectDisplay_rna_properties_get(iter);
    }
}

void ObjectDisplay_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ObjectDisplay_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ObjectDisplay_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool ObjectDisplay_show_shadows_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !((uint64_t(data->dtx) & 512) != 0);
}

void ObjectDisplay_show_shadows_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) | 512); }
    else { data->dtx = std::remove_reference_t<decltype(data->dtx)>(uint64_t(data->dtx) & ~uint64_t(512)); }
}

static PointerRNA ObjectLineArt_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ObjectLineArt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ObjectLineArt_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectLineArt_rna_properties_get(iter);
    }
}

void ObjectLineArt_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ObjectLineArt_rna_properties_get(iter);
    }
}

void ObjectLineArt_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ObjectLineArt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ObjectLineArt_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ObjectLineArt_usage_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (int)(data->usage);
}

void ObjectLineArt_usage_set(PointerRNA *ptr, int value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    data->usage = (std::remove_reference_t<decltype(data->usage)>)value;
}

bool ObjectLineArt_use_crease_override_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return ((uint64_t(data->flags) & 1) != 0);
}

void ObjectLineArt_use_crease_override_set(PointerRNA *ptr, bool value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1)); }
}

float ObjectLineArt_crease_threshold_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (float)(data->crease_threshold);
}

void ObjectLineArt_crease_threshold_set(PointerRNA *ptr, float value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    data->crease_threshold = (std::remove_reference_t<decltype(data->crease_threshold)>)std::clamp(value, 0.0f, 3.1415927410f);
}

bool ObjectLineArt_use_intersection_priority_override_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void ObjectLineArt_use_intersection_priority_override_set(PointerRNA *ptr, bool value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

int ObjectLineArt_intersection_priority_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (int)(data->intersection_priority);
}

void ObjectLineArt_intersection_priority_set(PointerRNA *ptr, int value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    data->intersection_priority = (std::remove_reference_t<decltype(data->intersection_priority)>)std::clamp(value, 0, 255);
}

static PointerRNA ObjectLightLinking_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ObjectLightLinking_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ObjectLightLinking_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectLightLinking_rna_properties_get(iter);
    }
}

void ObjectLightLinking_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ObjectLightLinking_rna_properties_get(iter);
    }
}

void ObjectLightLinking_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ObjectLightLinking_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ObjectLightLinking_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ObjectLightLinking_receiver_collection_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_LightLinking_receiver_collection_get;
    return fn(ptr);
}

void ObjectLightLinking_receiver_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_LightLinking_receiver_collection_set;
    fn(ptr, value, reports);
}

PointerRNA ObjectLightLinking_blocker_collection_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_LightLinking_blocker_collection_get;
    return fn(ptr);
}

void ObjectLightLinking_blocker_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_LightLinking_blocker_collection_set;
    fn(ptr, value, reports);
}

bool Object_select_get_func(Object *_self, bContext *C, PointerRNA *view_layer)
{
	return rna_Object_select_get(_self, C, view_layer);
}

static void Object_select_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = ((PointerRNA *)_data);
	_data += 88;
	_retdata = _data;
	
	result = rna_Object_select_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

void Object_select_set_func(Object *_self, bContext *C, ReportList *reports, bool state, PointerRNA *view_layer)
{
	rna_Object_select_set(_self, C, reports, state, view_layer);
}

static void Object_select_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	bool state;
	PointerRNA *view_layer;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	state = *((bool *)_data);
	_data += 8;
	view_layer = ((PointerRNA *)_data);
	
	rna_Object_select_set(_self, C, reports, state, view_layer);
}

bool Object_hide_get_func(Object *_self, bContext *C, PointerRNA *view_layer)
{
	return rna_Object_hide_get(_self, C, view_layer);
}

static void Object_hide_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = ((PointerRNA *)_data);
	_data += 88;
	_retdata = _data;
	
	result = rna_Object_hide_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

void Object_hide_set_func(Object *_self, bContext *C, ReportList *reports, bool state, PointerRNA *view_layer)
{
	rna_Object_hide_set(_self, C, reports, state, view_layer);
}

static void Object_hide_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	bool state;
	PointerRNA *view_layer;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	state = *((bool *)_data);
	_data += 8;
	view_layer = ((PointerRNA *)_data);
	
	rna_Object_hide_set(_self, C, reports, state, view_layer);
}

bool Object_visible_get_func(Object *_self, bContext *C, PointerRNA *view_layer, View3D *viewport)
{
	return rna_Object_visible_get(_self, C, view_layer, viewport);
}

static void Object_visible_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *view_layer;
	View3D *viewport;
	bool result;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = ((PointerRNA *)_data);
	_data += 88;
	viewport = *((View3D **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_visible_get(_self, C, view_layer, viewport);
	*((bool *)_retdata) = result;
}

bool Object_holdout_get_func(Object *_self, bContext *C, PointerRNA *view_layer)
{
	return rna_Object_holdout_get(_self, C, view_layer);
}

static void Object_holdout_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = ((PointerRNA *)_data);
	_data += 88;
	_retdata = _data;
	
	result = rna_Object_holdout_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

bool Object_indirect_only_get_func(Object *_self, bContext *C, PointerRNA *view_layer)
{
	return rna_Object_indirect_only_get(_self, C, view_layer);
}

static void Object_indirect_only_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = ((PointerRNA *)_data);
	_data += 88;
	_retdata = _data;
	
	result = rna_Object_indirect_only_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

bool Object_local_view_get_func(Object *_self, ReportList *reports, View3D *viewport)
{
	return rna_Object_local_view_get(_self, reports, viewport);
}

static void Object_local_view_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	View3D *viewport;
	bool result;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	viewport = *((View3D **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_local_view_get(_self, reports, viewport);
	*((bool *)_retdata) = result;
}

void Object_local_view_set_func(Object *_self, ReportList *reports, PointerRNA *viewport, bool state)
{
	rna_Object_local_view_set(_self, reports, viewport, state);
}

static void Object_local_view_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *viewport;
	bool state;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	viewport = ((PointerRNA *)_data);
	_data += 88;
	state = *((bool *)_data);
	
	rna_Object_local_view_set(_self, reports, viewport, state);
}

bool Object_visible_in_viewport_get_func(Object *_self, View3D *viewport)
{
	return rna_Object_visible_in_viewport_get(_self, viewport);
}

static void Object_visible_in_viewport_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	View3D *viewport;
	bool result;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	viewport = *((View3D **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_visible_in_viewport_get(_self, viewport);
	*((bool *)_retdata) = result;
}

void Object_convert_space_func(Object *_self, ReportList *reports, bPoseChannel *pose_bone, float matrix[16], float matrix_return[16], int from_space, int to_space)
{
	rna_Object_mat_convert_space(_self, reports, pose_bone, matrix, matrix_return, from_space, to_space);
}

static void Object_convert_space_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	bPoseChannel *pose_bone;
	const float *matrix;
	float *matrix_return;
	int from_space;
	int to_space;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	pose_bone = *((bPoseChannel **)_data);
	_data += 8;
	matrix = ((const float *)_data);
	_data += 64;
	matrix_return = ((float *)_data);
	_data += 64;
	from_space = *((int *)_data);
	_data += 8;
	to_space = *((int *)_data);
	
	rna_Object_mat_convert_space(_self, reports, pose_bone, matrix, matrix_return, from_space, to_space);
}

void Object_calc_matrix_camera_func(Object *_self, Depsgraph *depsgraph, float result[16], int x, int y, float scale_x, float scale_y)
{
	rna_Object_calc_matrix_camera(_self, depsgraph, result, x, y, scale_x, scale_y);
}

static void Object_calc_matrix_camera_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	Depsgraph *depsgraph;
	float *result;
	int x;
	int y;
	float scale_x;
	float scale_y;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((Depsgraph **)_data);
	_data += 8;
	result = ((float *)_data);
	_data += 64;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	_data += 8;
	scale_x = *((float *)_data);
	_data += 8;
	scale_y = *((float *)_data);
	
	rna_Object_calc_matrix_camera(_self, depsgraph, result, x, y, scale_x, scale_y);
}

void Object_camera_fit_coords_func(Object *_self, Depsgraph *depsgraph, int coordinates_num, float *coordinates, float coord_return[3], float *scale_return)
{
	rna_Object_camera_fit_coords(_self, depsgraph, coordinates, coordinates_num, coord_return, scale_return);
}

static void Object_camera_fit_coords_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	Depsgraph *depsgraph;
	int coordinates_num;
	const float *coordinates;
	float *coord_return;
	float *scale_return;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((Depsgraph **)_data);
	_data += 8;
	coordinates_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	coordinates = *((const float **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	coord_return = ((float *)_data);
	_data += 16;
	scale_return = ((float *)_data);
	
	rna_Object_camera_fit_coords(_self, depsgraph, coordinates, coordinates_num, coord_return, scale_return);
}

void Object_crazyspace_eval_func(Object *_self, ReportList *reports, Depsgraph *depsgraph, Scene *scene)
{
	rna_Object_crazyspace_eval(_self, reports, depsgraph, scene);
}

static void Object_crazyspace_eval_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	Depsgraph *depsgraph;
	Scene *scene;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((Depsgraph **)_data);
	_data += 8;
	scene = *((Scene **)_data);
	
	rna_Object_crazyspace_eval(_self, reports, depsgraph, scene);
}

void Object_crazyspace_displacement_to_deformed_func(Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_deformed[3])
{
	rna_Object_crazyspace_displacement_to_deformed(_self, reports, vertex_index, displacement, displacement_deformed);
}

static void Object_crazyspace_displacement_to_deformed_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	int vertex_index;
	const float *displacement;
	float *displacement_deformed;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_index = *((int *)_data);
	_data += 8;
	displacement = ((const float *)_data);
	_data += 16;
	displacement_deformed = ((float *)_data);
	
	rna_Object_crazyspace_displacement_to_deformed(_self, reports, vertex_index, displacement, displacement_deformed);
}

void Object_crazyspace_displacement_to_original_func(Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_original[3])
{
	rna_Object_crazyspace_displacement_to_original(_self, reports, vertex_index, displacement, displacement_original);
}

static void Object_crazyspace_displacement_to_original_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	int vertex_index;
	const float *displacement;
	float *displacement_original;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_index = *((int *)_data);
	_data += 8;
	displacement = ((const float *)_data);
	_data += 16;
	displacement_original = ((float *)_data);
	
	rna_Object_crazyspace_displacement_to_original(_self, reports, vertex_index, displacement, displacement_original);
}

void Object_crazyspace_eval_clear_func(Object *_self)
{
	rna_Object_crazyspace_eval_clear(_self);
}

static void Object_crazyspace_eval_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	_self = (Object *)_ptr->data;
	
	rna_Object_crazyspace_eval_clear(_self);
}

Mesh *Object_to_mesh_func(Object *_self, ReportList *reports, bool preserve_all_data_layers, Depsgraph *depsgraph)
{
	return rna_Object_to_mesh(_self, reports, preserve_all_data_layers, depsgraph);
}

static void Object_to_mesh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	bool preserve_all_data_layers;
	Depsgraph *depsgraph;
	Mesh *mesh;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	preserve_all_data_layers = *((bool *)_data);
	_data += 8;
	depsgraph = *((Depsgraph **)_data);
	_data += 8;
	_retdata = _data;
	
	mesh = rna_Object_to_mesh(_self, reports, preserve_all_data_layers, depsgraph);
	*((Mesh **)_retdata) = mesh;
}

void Object_to_mesh_clear_func(Object *_self)
{
	rna_Object_to_mesh_clear(_self);
}

static void Object_to_mesh_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	_self = (Object *)_ptr->data;
	
	rna_Object_to_mesh_clear(_self);
}

Curve *Object_to_curve_func(Object *_self, ReportList *reports, Depsgraph *depsgraph, bool apply_modifiers)
{
	return rna_Object_to_curve(_self, reports, depsgraph, apply_modifiers);
}

static void Object_to_curve_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	Depsgraph *depsgraph;
	bool apply_modifiers;
	Curve *curve;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((Depsgraph **)_data);
	_data += 8;
	apply_modifiers = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	curve = rna_Object_to_curve(_self, reports, depsgraph, apply_modifiers);
	*((Curve **)_retdata) = curve;
}

void Object_to_curve_clear_func(Object *_self)
{
	rna_Object_to_curve_clear(_self);
}

static void Object_to_curve_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	_self = (Object *)_ptr->data;
	
	rna_Object_to_curve_clear(_self);
}

Object *Object_find_armature_func(Object *_self)
{
	return BKE_modifiers_is_deformed_by_armature(_self);
}

static void Object_find_armature_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	Object *ob_arm;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	ob_arm = BKE_modifiers_is_deformed_by_armature(_self);
	*((Object **)_retdata) = ob_arm;
}

PointerRNA Object_shape_key_add_func(Object *_self, bContext *C, ReportList *reports, const char * name, bool from_mix)
{
	return rna_Object_shape_key_add(_self, C, reports, name, from_mix);
}

static void Object_shape_key_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	const char * name;
	bool from_mix;
	PointerRNA key;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	from_mix = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	key = rna_Object_shape_key_add(_self, C, reports, name, from_mix);
	*reinterpret_cast<PointerRNA *>(_retdata) = key;
}

void Object_shape_key_remove_func(Object *_self, Main *bmain, ReportList *reports, PointerRNA *key)
{
	rna_Object_shape_key_remove(_self, bmain, reports, key);
}

static void Object_shape_key_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *key;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	key = *((PointerRNA **)_data);
	
	rna_Object_shape_key_remove(_self, CTX_data_main(C), reports, key);
}

void Object_shape_key_clear_func(Object *_self, Main *bmain)
{
	rna_Object_shape_key_clear(_self, bmain);
}

static void Object_shape_key_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	_self = (Object *)_ptr->data;
	
	rna_Object_shape_key_clear(_self, CTX_data_main(C));
}

CollectionVector Object_shape_keys_selected_func(Object *_self)
{
	return rna_Object_shape_keys_selected(_self);
}

static void Object_shape_keys_selected_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	CollectionVector keyblocks;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	keyblocks = rna_Object_shape_keys_selected(_self);
	new ((CollectionVector *)_retdata) CollectionVector(std::move(keyblocks));
}

void Object_ray_cast_func(Object *_self, bContext *C, ReportList *reports, float origin[3], float direction[3], float distance, PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index)
{
	rna_Object_ray_cast(_self, C, reports, origin, direction, distance, depsgraph, result, location, normal, index);
}

static void Object_ray_cast_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	const float *origin;
	const float *direction;
	float distance;
	PointerRNA *depsgraph;
	bool *result;
	float *location;
	float *normal;
	int *index;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	origin = ((const float *)_data);
	_data += 16;
	direction = ((const float *)_data);
	_data += 16;
	distance = *((float *)_data);
	_data += 8;
	depsgraph = ((PointerRNA *)_data);
	_data += 88;
	result = ((bool *)_data);
	_data += 8;
	location = ((float *)_data);
	_data += 16;
	normal = ((float *)_data);
	_data += 16;
	index = ((int *)_data);
	
	rna_Object_ray_cast(_self, C, reports, origin, direction, distance, depsgraph, result, location, normal, index);
}

void Object_closest_point_on_mesh_func(Object *_self, bContext *C, ReportList *reports, float origin[3], float distance, PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index)
{
	rna_Object_closest_point_on_mesh(_self, C, reports, origin, distance, depsgraph, result, location, normal, index);
}

static void Object_closest_point_on_mesh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	const float *origin;
	float distance;
	PointerRNA *depsgraph;
	bool *result;
	float *location;
	float *normal;
	int *index;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	origin = ((const float *)_data);
	_data += 16;
	distance = *((float *)_data);
	_data += 8;
	depsgraph = ((PointerRNA *)_data);
	_data += 88;
	result = ((bool *)_data);
	_data += 8;
	location = ((float *)_data);
	_data += 16;
	normal = ((float *)_data);
	_data += 16;
	index = ((int *)_data);
	
	rna_Object_closest_point_on_mesh(_self, C, reports, origin, distance, depsgraph, result, location, normal, index);
}

bool Object_is_modified_func(Object *_self, Scene *scene, int settings)
{
	return rna_Object_is_modified(_self, scene, settings);
}

static void Object_is_modified_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	Scene *scene;
	int settings;
	bool result;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((Scene **)_data);
	_data += 8;
	settings = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_is_modified(_self, scene, settings);
	*((bool *)_retdata) = result;
}

bool Object_is_deform_modified_func(Object *_self, Scene *scene, int settings)
{
	return rna_Object_is_deform_modified(_self, scene, settings);
}

static void Object_is_deform_modified_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	Scene *scene;
	int settings;
	bool result;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((Scene **)_data);
	_data += 8;
	settings = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_is_deform_modified(_self, scene, settings);
	*((bool *)_retdata) = result;
}

void Object_dm_info_func(Object *_self, bContext *C, int type, PointerRNA *depsgraph, char * result)
{
	rna_Object_me_eval_info(_self, C, type, depsgraph, result);
}

static void Object_dm_info_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	int type;
	PointerRNA *depsgraph;
	char * result;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	depsgraph = ((PointerRNA *)_data);
	_data += 88;
	result = ((char * )_data);
	
	rna_Object_me_eval_info(_self, C, type, depsgraph, result);
}

bool Object_update_from_editmode_func(Object *_self, Main *bmain)
{
	return rna_Object_update_from_editmode(_self, bmain);
}

static void Object_update_from_editmode_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = rna_Object_update_from_editmode(_self, CTX_data_main(C));
	*((bool *)_retdata) = result;
}

void Object_cache_release_func(Object *_self)
{
	BKE_object_free_caches(_self);
}

static void Object_cache_release_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	_self = (Object *)_ptr->data;
	
	BKE_object_free_caches(_self);
}

/* Repeated prototypes to detect errors */

bool rna_Object_select_get(Object *_self, bContext *C, PointerRNA *view_layer);
void rna_Object_select_set(Object *_self, bContext *C, ReportList *reports, bool state, PointerRNA *view_layer);
bool rna_Object_hide_get(Object *_self, bContext *C, PointerRNA *view_layer);
void rna_Object_hide_set(Object *_self, bContext *C, ReportList *reports, bool state, PointerRNA *view_layer);
bool rna_Object_visible_get(Object *_self, bContext *C, PointerRNA *view_layer, View3D *viewport);
bool rna_Object_holdout_get(Object *_self, bContext *C, PointerRNA *view_layer);
bool rna_Object_indirect_only_get(Object *_self, bContext *C, PointerRNA *view_layer);
bool rna_Object_local_view_get(Object *_self, ReportList *reports, View3D *viewport);
void rna_Object_local_view_set(Object *_self, ReportList *reports, PointerRNA *viewport, bool state);
bool rna_Object_visible_in_viewport_get(Object *_self, View3D *viewport);
void rna_Object_mat_convert_space(Object *_self, ReportList *reports, bPoseChannel *pose_bone, float matrix[16], float matrix_return[16], int from_space, int to_space);
void rna_Object_calc_matrix_camera(Object *_self, Depsgraph *depsgraph, float result[16], int x, int y, float scale_x, float scale_y);
void rna_Object_camera_fit_coords(Object *_self, Depsgraph *depsgraph, int coordinates_num, float *coordinates, float coord_return[3], float *scale_return);
void rna_Object_crazyspace_eval(Object *_self, ReportList *reports, Depsgraph *depsgraph, Scene *scene);
void rna_Object_crazyspace_displacement_to_deformed(Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_deformed[3]);
void rna_Object_crazyspace_displacement_to_original(Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_original[3]);
void rna_Object_crazyspace_eval_clear(Object *_self);
Mesh *rna_Object_to_mesh(Object *_self, ReportList *reports, bool preserve_all_data_layers, Depsgraph *depsgraph);
void rna_Object_to_mesh_clear(Object *_self);
Curve *rna_Object_to_curve(Object *_self, ReportList *reports, Depsgraph *depsgraph, bool apply_modifiers);
void rna_Object_to_curve_clear(Object *_self);
Object *BKE_modifiers_is_deformed_by_armature(Object *_self);
PointerRNA rna_Object_shape_key_add(Object *_self, bContext *C, ReportList *reports, const char * name, bool from_mix);
void rna_Object_shape_key_remove(Object *_self, Main *bmain, ReportList *reports, PointerRNA *key);
void rna_Object_shape_key_clear(Object *_self, Main *bmain);
CollectionVector rna_Object_shape_keys_selected(Object *_self);
void rna_Object_ray_cast(Object *_self, bContext *C, ReportList *reports, float origin[3], float direction[3], float distance, PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index);
void rna_Object_closest_point_on_mesh(Object *_self, bContext *C, ReportList *reports, float origin[3], float distance, PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index);
bool rna_Object_is_modified(Object *_self, Scene *scene, int settings);
bool rna_Object_is_deform_modified(Object *_self, Scene *scene, int settings);
void rna_Object_me_eval_info(Object *_self, bContext *C, int type, PointerRNA *depsgraph, char * result);
bool rna_Object_update_from_editmode(Object *_self, Main *bmain);
void BKE_object_free_caches(Object *_self);

ModifierData *ObjectModifiers_new_func(Object *_self, bContext *C, ReportList *reports, const char * name, int type)
{
	return rna_Object_modifier_new(_self, C, reports, name, type);
}

static void ObjectModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	const char * name;
	int type;
	ModifierData *modifier;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	modifier = rna_Object_modifier_new(_self, C, reports, name, type);
	*((ModifierData **)_retdata) = modifier;
}

void ObjectModifiers_remove_func(Object *_self, bContext *C, ReportList *reports, PointerRNA *modifier)
{
	rna_Object_modifier_remove(_self, C, reports, modifier);
}

static void ObjectModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *modifier;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((PointerRNA **)_data);
	
	rna_Object_modifier_remove(_self, C, reports, modifier);
}

void ObjectModifiers_clear_func(Object *_self, bContext *C)
{
	rna_Object_modifier_clear(_self, C);
}

static void ObjectModifiers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	_self = (Object *)_ptr->data;
	
	rna_Object_modifier_clear(_self, C);
}

void ObjectModifiers_move_func(Object *_self, ReportList *reports, int from_index, int to_index)
{
	rna_Object_modifier_move(_self, reports, from_index, to_index);
}

static void ObjectModifiers_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_Object_modifier_move(_self, reports, from_index, to_index);
}

/* Repeated prototypes to detect errors */

ModifierData *rna_Object_modifier_new(Object *_self, bContext *C, ReportList *reports, const char * name, int type);
void rna_Object_modifier_remove(Object *_self, bContext *C, ReportList *reports, PointerRNA *modifier);
void rna_Object_modifier_clear(Object *_self, bContext *C);
void rna_Object_modifier_move(Object *_self, ReportList *reports, int from_index, int to_index);

ShaderFxData *ObjectShaderFx_new_func(Object *_self, bContext *C, ReportList *reports, const char * name, int type)
{
	return rna_Object_shaderfx_new(_self, C, reports, name, type);
}

static void ObjectShaderFx_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	const char * name;
	int type;
	ShaderFxData *shader_fx;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	shader_fx = rna_Object_shaderfx_new(_self, C, reports, name, type);
	*((ShaderFxData **)_retdata) = shader_fx;
}

void ObjectShaderFx_remove_func(Object *_self, bContext *C, ReportList *reports, PointerRNA *shader_fx)
{
	rna_Object_shaderfx_remove(_self, C, reports, shader_fx);
}

static void ObjectShaderFx_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *shader_fx;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	shader_fx = *((PointerRNA **)_data);
	
	rna_Object_shaderfx_remove(_self, C, reports, shader_fx);
}

void ObjectShaderFx_clear_func(Object *_self, bContext *C)
{
	rna_Object_shaderfx_clear(_self, C);
}

static void ObjectShaderFx_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	_self = (Object *)_ptr->data;
	
	rna_Object_shaderfx_clear(_self, C);
}

/* Repeated prototypes to detect errors */

ShaderFxData *rna_Object_shaderfx_new(Object *_self, bContext *C, ReportList *reports, const char * name, int type);
void rna_Object_shaderfx_remove(Object *_self, bContext *C, ReportList *reports, PointerRNA *shader_fx);
void rna_Object_shaderfx_clear(Object *_self, bContext *C);

bConstraint *ObjectConstraints_new_func(Object *_self, Main *bmain, int type)
{
	return rna_Object_constraints_new(_self, bmain, type);
}

static void ObjectConstraints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	int type;
	bConstraint *constraint;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	constraint = rna_Object_constraints_new(_self, CTX_data_main(C), type);
	*((bConstraint **)_retdata) = constraint;
}

void ObjectConstraints_remove_func(Object *_self, Main *bmain, ReportList *reports, PointerRNA *constraint)
{
	rna_Object_constraints_remove(_self, bmain, reports, constraint);
}

static void ObjectConstraints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *constraint;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((PointerRNA **)_data);
	
	rna_Object_constraints_remove(_self, CTX_data_main(C), reports, constraint);
}

void ObjectConstraints_clear_func(Object *_self, Main *bmain)
{
	rna_Object_constraints_clear(_self, bmain);
}

static void ObjectConstraints_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	_self = (Object *)_ptr->data;
	
	rna_Object_constraints_clear(_self, CTX_data_main(C));
}

void ObjectConstraints_move_func(Object *_self, Main *bmain, ReportList *reports, int from_index, int to_index)
{
	rna_Object_constraints_move(_self, bmain, reports, from_index, to_index);
}

static void ObjectConstraints_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_Object_constraints_move(_self, CTX_data_main(C), reports, from_index, to_index);
}

bConstraint *ObjectConstraints_copy_func(Object *_self, Main *bmain, PointerRNA *constraint)
{
	return rna_Object_constraints_copy(_self, bmain, constraint);
}

static void ObjectConstraints_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *constraint;
	bConstraint *new_constraint;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((PointerRNA **)_data);
	_data += 8;
	_retdata = _data;
	
	new_constraint = rna_Object_constraints_copy(_self, CTX_data_main(C), constraint);
	*((bConstraint **)_retdata) = new_constraint;
}

/* Repeated prototypes to detect errors */

bConstraint *rna_Object_constraints_new(Object *_self, Main *bmain, int type);
void rna_Object_constraints_remove(Object *_self, Main *bmain, ReportList *reports, PointerRNA *constraint);
void rna_Object_constraints_clear(Object *_self, Main *bmain);
void rna_Object_constraints_move(Object *_self, Main *bmain, ReportList *reports, int from_index, int to_index);
bConstraint *rna_Object_constraints_copy(Object *_self, Main *bmain, PointerRNA *constraint);

bDeformGroup *VertexGroups_new_func(Object *_self, Main *bmain, ReportList *reports, const char * name)
{
	return rna_Object_vgroup_new(_self, bmain, reports, name);
}

static void VertexGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	const char * name;
	bDeformGroup *group;
	char *_data, *_retdata;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	group = rna_Object_vgroup_new(_self, CTX_data_main(C), reports, name);
	*((bDeformGroup **)_retdata) = group;
}

void VertexGroups_remove_func(Object *_self, Main *bmain, ReportList *reports, PointerRNA *group)
{
	rna_Object_vgroup_remove(_self, bmain, reports, group);
}

static void VertexGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	PointerRNA *group;
	char *_data;
	
	_self = (Object *)_ptr->data;
	_data = (char *)_parms->data;
	group = *((PointerRNA **)_data);
	
	rna_Object_vgroup_remove(_self, CTX_data_main(C), reports, group);
}

void VertexGroups_clear_func(Object *_self, Main *bmain, ReportList *reports)
{
	rna_Object_vgroup_clear(_self, bmain, reports);
}

static void VertexGroups_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Object *_self;
	_self = (Object *)_ptr->data;
	
	rna_Object_vgroup_clear(_self, CTX_data_main(C), reports);
}

/* Repeated prototypes to detect errors */

bDeformGroup *rna_Object_vgroup_new(Object *_self, Main *bmain, ReportList *reports, const char * name);
void rna_Object_vgroup_remove(Object *_self, Main *bmain, ReportList *reports, PointerRNA *group);
void rna_Object_vgroup_clear(Object *_self, Main *bmain, ReportList *reports);


void VertexGroup_add_func(ID *_selfid, bDeformGroup *_self, ReportList *reports, int index_num, int *index, float weight, int type)
{
	rna_VertexGroup_vertex_add(_selfid, _self, reports, index, index_num, weight, type);
}

static void VertexGroup_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bDeformGroup *_self;
	int index_num;
	const int *index;
	float weight;
	int type;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bDeformGroup *)_ptr->data;
	_data = (char *)_parms->data;
	index_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	index = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	weight = *((float *)_data);
	_data += 8;
	type = *((int *)_data);
	
	rna_VertexGroup_vertex_add(_selfid, _self, reports, index, index_num, weight, type);
}

void VertexGroup_remove_func(ID *_selfid, bDeformGroup *_self, ReportList *reports, int index_num, int *index)
{
	rna_VertexGroup_vertex_remove(_selfid, _self, reports, index, index_num);
}

static void VertexGroup_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bDeformGroup *_self;
	int index_num;
	const int *index;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bDeformGroup *)_ptr->data;
	_data = (char *)_parms->data;
	index_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	index = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_VertexGroup_vertex_remove(_selfid, _self, reports, index, index_num);
}

float VertexGroup_weight_func(ID *_selfid, bDeformGroup *_self, ReportList *reports, int index)
{
	return rna_VertexGroup_weight(_selfid, _self, reports, index);
}

static void VertexGroup_weight_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bDeformGroup *_self;
	int index;
	float weight;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bDeformGroup *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	weight = rna_VertexGroup_weight(_selfid, _self, reports, index);
	*((float *)_retdata) = weight;
}

/* Repeated prototypes to detect errors */

void rna_VertexGroup_vertex_add(ID *_selfid, bDeformGroup *_self, ReportList *reports, int index_num, int *index, float weight, int type);
void rna_VertexGroup_vertex_remove(ID *_selfid, bDeformGroup *_self, ReportList *reports, int index_num, int *index);
float rna_VertexGroup_weight(ID *_selfid, bDeformGroup *_self, ReportList *reports, int index);





/* Object */
static PointerPropertyRNA rna_Object_data_;
PropertyRNA &rna_Object_data = reinterpret_cast<PropertyRNA &>(rna_Object_data_);

static EnumPropertyRNA rna_Object_type_;
PropertyRNA &rna_Object_type = reinterpret_cast<PropertyRNA &>(rna_Object_type_);

static EnumPropertyRNA rna_Object_mode_;
PropertyRNA &rna_Object_mode = reinterpret_cast<PropertyRNA &>(rna_Object_mode_);

static FloatPropertyRNA rna_Object_bound_box_;
PropertyRNA &rna_Object_bound_box = reinterpret_cast<PropertyRNA &>(rna_Object_bound_box_);

static PointerPropertyRNA rna_Object_parent_;
PropertyRNA &rna_Object_parent = reinterpret_cast<PropertyRNA &>(rna_Object_parent_);

static EnumPropertyRNA rna_Object_parent_type_;
PropertyRNA &rna_Object_parent_type = reinterpret_cast<PropertyRNA &>(rna_Object_parent_type_);

static IntPropertyRNA rna_Object_parent_vertices_;
PropertyRNA &rna_Object_parent_vertices = reinterpret_cast<PropertyRNA &>(rna_Object_parent_vertices_);

static StringPropertyRNA rna_Object_parent_bone_;
PropertyRNA &rna_Object_parent_bone = reinterpret_cast<PropertyRNA &>(rna_Object_parent_bone_);

static FloatPropertyRNA rna_Object_parent_bone_head_tail_factor_;
PropertyRNA &rna_Object_parent_bone_head_tail_factor = reinterpret_cast<PropertyRNA &>(rna_Object_parent_bone_head_tail_factor_);

static BoolPropertyRNA rna_Object_use_parent_final_indices_;
PropertyRNA &rna_Object_use_parent_final_indices = reinterpret_cast<PropertyRNA &>(rna_Object_use_parent_final_indices_);

static BoolPropertyRNA rna_Object_use_camera_lock_parent_;
PropertyRNA &rna_Object_use_camera_lock_parent = reinterpret_cast<PropertyRNA &>(rna_Object_use_camera_lock_parent_);

static EnumPropertyRNA rna_Object_track_axis_;
PropertyRNA &rna_Object_track_axis = reinterpret_cast<PropertyRNA &>(rna_Object_track_axis_);

static EnumPropertyRNA rna_Object_up_axis_;
PropertyRNA &rna_Object_up_axis = reinterpret_cast<PropertyRNA &>(rna_Object_up_axis_);

static CollectionPropertyRNA rna_Object_material_slots_;
PropertyRNA &rna_Object_material_slots = reinterpret_cast<PropertyRNA &>(rna_Object_material_slots_);

static PointerPropertyRNA rna_Object_active_material_;
PropertyRNA &rna_Object_active_material = reinterpret_cast<PropertyRNA &>(rna_Object_active_material_);

static IntPropertyRNA rna_Object_active_material_index_;
PropertyRNA &rna_Object_active_material_index = reinterpret_cast<PropertyRNA &>(rna_Object_active_material_index_);

static FloatPropertyRNA rna_Object_location_;
PropertyRNA &rna_Object_location = reinterpret_cast<PropertyRNA &>(rna_Object_location_);

static FloatPropertyRNA rna_Object_rotation_quaternion_;
PropertyRNA &rna_Object_rotation_quaternion = reinterpret_cast<PropertyRNA &>(rna_Object_rotation_quaternion_);

static FloatPropertyRNA rna_Object_rotation_axis_angle_;
PropertyRNA &rna_Object_rotation_axis_angle = reinterpret_cast<PropertyRNA &>(rna_Object_rotation_axis_angle_);

static FloatPropertyRNA rna_Object_rotation_euler_;
PropertyRNA &rna_Object_rotation_euler = reinterpret_cast<PropertyRNA &>(rna_Object_rotation_euler_);

static EnumPropertyRNA rna_Object_rotation_mode_;
PropertyRNA &rna_Object_rotation_mode = reinterpret_cast<PropertyRNA &>(rna_Object_rotation_mode_);

static FloatPropertyRNA rna_Object_scale_;
PropertyRNA &rna_Object_scale = reinterpret_cast<PropertyRNA &>(rna_Object_scale_);

static FloatPropertyRNA rna_Object_dimensions_;
PropertyRNA &rna_Object_dimensions = reinterpret_cast<PropertyRNA &>(rna_Object_dimensions_);

static FloatPropertyRNA rna_Object_delta_location_;
PropertyRNA &rna_Object_delta_location = reinterpret_cast<PropertyRNA &>(rna_Object_delta_location_);

static FloatPropertyRNA rna_Object_delta_rotation_euler_;
PropertyRNA &rna_Object_delta_rotation_euler = reinterpret_cast<PropertyRNA &>(rna_Object_delta_rotation_euler_);

static FloatPropertyRNA rna_Object_delta_rotation_quaternion_;
PropertyRNA &rna_Object_delta_rotation_quaternion = reinterpret_cast<PropertyRNA &>(rna_Object_delta_rotation_quaternion_);

static FloatPropertyRNA rna_Object_delta_scale_;
PropertyRNA &rna_Object_delta_scale = reinterpret_cast<PropertyRNA &>(rna_Object_delta_scale_);

static BoolPropertyRNA rna_Object_lock_location_;
PropertyRNA &rna_Object_lock_location = reinterpret_cast<PropertyRNA &>(rna_Object_lock_location_);

static BoolPropertyRNA rna_Object_lock_rotation_;
PropertyRNA &rna_Object_lock_rotation = reinterpret_cast<PropertyRNA &>(rna_Object_lock_rotation_);

static BoolPropertyRNA rna_Object_lock_rotation_w_;
PropertyRNA &rna_Object_lock_rotation_w = reinterpret_cast<PropertyRNA &>(rna_Object_lock_rotation_w_);

static BoolPropertyRNA rna_Object_lock_rotations_4d_;
PropertyRNA &rna_Object_lock_rotations_4d = reinterpret_cast<PropertyRNA &>(rna_Object_lock_rotations_4d_);

static BoolPropertyRNA rna_Object_lock_scale_;
PropertyRNA &rna_Object_lock_scale = reinterpret_cast<PropertyRNA &>(rna_Object_lock_scale_);

static FloatPropertyRNA rna_Object_matrix_world_;
PropertyRNA &rna_Object_matrix_world = reinterpret_cast<PropertyRNA &>(rna_Object_matrix_world_);

static FloatPropertyRNA rna_Object_matrix_local_;
PropertyRNA &rna_Object_matrix_local = reinterpret_cast<PropertyRNA &>(rna_Object_matrix_local_);

static FloatPropertyRNA rna_Object_matrix_basis_;
PropertyRNA &rna_Object_matrix_basis = reinterpret_cast<PropertyRNA &>(rna_Object_matrix_basis_);

static FloatPropertyRNA rna_Object_matrix_parent_inverse_;
PropertyRNA &rna_Object_matrix_parent_inverse = reinterpret_cast<PropertyRNA &>(rna_Object_matrix_parent_inverse_);

static CollectionPropertyRNA rna_Object_modifiers_;
PropertyRNA &rna_Object_modifiers = reinterpret_cast<PropertyRNA &>(rna_Object_modifiers_);

static CollectionPropertyRNA rna_Object_shader_effects_;
PropertyRNA &rna_Object_shader_effects = reinterpret_cast<PropertyRNA &>(rna_Object_shader_effects_);

static CollectionPropertyRNA rna_Object_constraints_;
PropertyRNA &rna_Object_constraints = reinterpret_cast<PropertyRNA &>(rna_Object_constraints_);

static CollectionPropertyRNA rna_Object_vertex_groups_;
PropertyRNA &rna_Object_vertex_groups = reinterpret_cast<PropertyRNA &>(rna_Object_vertex_groups_);

static EnumPropertyRNA rna_Object_empty_display_type_;
PropertyRNA &rna_Object_empty_display_type = reinterpret_cast<PropertyRNA &>(rna_Object_empty_display_type_);

static FloatPropertyRNA rna_Object_empty_display_size_;
PropertyRNA &rna_Object_empty_display_size = reinterpret_cast<PropertyRNA &>(rna_Object_empty_display_size_);

static FloatPropertyRNA rna_Object_empty_image_offset_;
PropertyRNA &rna_Object_empty_image_offset = reinterpret_cast<PropertyRNA &>(rna_Object_empty_image_offset_);

static PointerPropertyRNA rna_Object_image_user_;
PropertyRNA &rna_Object_image_user = reinterpret_cast<PropertyRNA &>(rna_Object_image_user_);

static EnumPropertyRNA rna_Object_empty_image_depth_;
PropertyRNA &rna_Object_empty_image_depth = reinterpret_cast<PropertyRNA &>(rna_Object_empty_image_depth_);

static BoolPropertyRNA rna_Object_show_empty_image_perspective_;
PropertyRNA &rna_Object_show_empty_image_perspective = reinterpret_cast<PropertyRNA &>(rna_Object_show_empty_image_perspective_);

static BoolPropertyRNA rna_Object_show_empty_image_orthographic_;
PropertyRNA &rna_Object_show_empty_image_orthographic = reinterpret_cast<PropertyRNA &>(rna_Object_show_empty_image_orthographic_);

static BoolPropertyRNA rna_Object_show_empty_image_only_axis_aligned_;
PropertyRNA &rna_Object_show_empty_image_only_axis_aligned = reinterpret_cast<PropertyRNA &>(rna_Object_show_empty_image_only_axis_aligned_);

static BoolPropertyRNA rna_Object_use_empty_image_alpha_;
PropertyRNA &rna_Object_use_empty_image_alpha = reinterpret_cast<PropertyRNA &>(rna_Object_use_empty_image_alpha_);

static EnumPropertyRNA rna_Object_empty_image_side_;
PropertyRNA &rna_Object_empty_image_side = reinterpret_cast<PropertyRNA &>(rna_Object_empty_image_side_);

static BoolPropertyRNA rna_Object_add_rest_position_attribute_;
PropertyRNA &rna_Object_add_rest_position_attribute = reinterpret_cast<PropertyRNA &>(rna_Object_add_rest_position_attribute_);

static IntPropertyRNA rna_Object_pass_index_;
PropertyRNA &rna_Object_pass_index = reinterpret_cast<PropertyRNA &>(rna_Object_pass_index_);

static FloatPropertyRNA rna_Object_color_;
PropertyRNA &rna_Object_color = reinterpret_cast<PropertyRNA &>(rna_Object_color_);

static PointerPropertyRNA rna_Object_field_;
PropertyRNA &rna_Object_field = reinterpret_cast<PropertyRNA &>(rna_Object_field_);

static PointerPropertyRNA rna_Object_collision_;
PropertyRNA &rna_Object_collision = reinterpret_cast<PropertyRNA &>(rna_Object_collision_);

static PointerPropertyRNA rna_Object_soft_body_;
PropertyRNA &rna_Object_soft_body = reinterpret_cast<PropertyRNA &>(rna_Object_soft_body_);

static CollectionPropertyRNA rna_Object_particle_systems_;
PropertyRNA &rna_Object_particle_systems = reinterpret_cast<PropertyRNA &>(rna_Object_particle_systems_);

static PointerPropertyRNA rna_Object_rigid_body_;
PropertyRNA &rna_Object_rigid_body = reinterpret_cast<PropertyRNA &>(rna_Object_rigid_body_);

static PointerPropertyRNA rna_Object_rigid_body_constraint_;
PropertyRNA &rna_Object_rigid_body_constraint = reinterpret_cast<PropertyRNA &>(rna_Object_rigid_body_constraint_);

static BoolPropertyRNA rna_Object_use_simulation_cache_;
PropertyRNA &rna_Object_use_simulation_cache = reinterpret_cast<PropertyRNA &>(rna_Object_use_simulation_cache_);

static BoolPropertyRNA rna_Object_hide_viewport_;
PropertyRNA &rna_Object_hide_viewport = reinterpret_cast<PropertyRNA &>(rna_Object_hide_viewport_);

static BoolPropertyRNA rna_Object_hide_select_;
PropertyRNA &rna_Object_hide_select = reinterpret_cast<PropertyRNA &>(rna_Object_hide_select_);

static BoolPropertyRNA rna_Object_hide_render_;
PropertyRNA &rna_Object_hide_render = reinterpret_cast<PropertyRNA &>(rna_Object_hide_render_);

static BoolPropertyRNA rna_Object_hide_probe_volume_;
PropertyRNA &rna_Object_hide_probe_volume = reinterpret_cast<PropertyRNA &>(rna_Object_hide_probe_volume_);

static BoolPropertyRNA rna_Object_hide_probe_sphere_;
PropertyRNA &rna_Object_hide_probe_sphere = reinterpret_cast<PropertyRNA &>(rna_Object_hide_probe_sphere_);

static BoolPropertyRNA rna_Object_hide_probe_plane_;
PropertyRNA &rna_Object_hide_probe_plane = reinterpret_cast<PropertyRNA &>(rna_Object_hide_probe_plane_);

static BoolPropertyRNA rna_Object_hide_surface_pick_;
PropertyRNA &rna_Object_hide_surface_pick = reinterpret_cast<PropertyRNA &>(rna_Object_hide_surface_pick_);

static BoolPropertyRNA rna_Object_show_instancer_for_render_;
PropertyRNA &rna_Object_show_instancer_for_render = reinterpret_cast<PropertyRNA &>(rna_Object_show_instancer_for_render_);

static BoolPropertyRNA rna_Object_show_instancer_for_viewport_;
PropertyRNA &rna_Object_show_instancer_for_viewport = reinterpret_cast<PropertyRNA &>(rna_Object_show_instancer_for_viewport_);

static BoolPropertyRNA rna_Object_visible_camera_;
PropertyRNA &rna_Object_visible_camera = reinterpret_cast<PropertyRNA &>(rna_Object_visible_camera_);

static BoolPropertyRNA rna_Object_visible_diffuse_;
PropertyRNA &rna_Object_visible_diffuse = reinterpret_cast<PropertyRNA &>(rna_Object_visible_diffuse_);

static BoolPropertyRNA rna_Object_visible_glossy_;
PropertyRNA &rna_Object_visible_glossy = reinterpret_cast<PropertyRNA &>(rna_Object_visible_glossy_);

static BoolPropertyRNA rna_Object_visible_transmission_;
PropertyRNA &rna_Object_visible_transmission = reinterpret_cast<PropertyRNA &>(rna_Object_visible_transmission_);

static BoolPropertyRNA rna_Object_visible_volume_scatter_;
PropertyRNA &rna_Object_visible_volume_scatter = reinterpret_cast<PropertyRNA &>(rna_Object_visible_volume_scatter_);

static BoolPropertyRNA rna_Object_visible_shadow_;
PropertyRNA &rna_Object_visible_shadow = reinterpret_cast<PropertyRNA &>(rna_Object_visible_shadow_);

static BoolPropertyRNA rna_Object_is_holdout_;
PropertyRNA &rna_Object_is_holdout = reinterpret_cast<PropertyRNA &>(rna_Object_is_holdout_);

static BoolPropertyRNA rna_Object_is_shadow_catcher_;
PropertyRNA &rna_Object_is_shadow_catcher = reinterpret_cast<PropertyRNA &>(rna_Object_is_shadow_catcher_);

static BoolPropertyRNA rna_Object_visible_raycast_;
PropertyRNA &rna_Object_visible_raycast = reinterpret_cast<PropertyRNA &>(rna_Object_visible_raycast_);

static EnumPropertyRNA rna_Object_instance_type_;
PropertyRNA &rna_Object_instance_type = reinterpret_cast<PropertyRNA &>(rna_Object_instance_type_);

static BoolPropertyRNA rna_Object_use_instance_vertices_rotation_;
PropertyRNA &rna_Object_use_instance_vertices_rotation = reinterpret_cast<PropertyRNA &>(rna_Object_use_instance_vertices_rotation_);

static BoolPropertyRNA rna_Object_use_instance_faces_scale_;
PropertyRNA &rna_Object_use_instance_faces_scale = reinterpret_cast<PropertyRNA &>(rna_Object_use_instance_faces_scale_);

static FloatPropertyRNA rna_Object_instance_faces_scale_;
PropertyRNA &rna_Object_instance_faces_scale = reinterpret_cast<PropertyRNA &>(rna_Object_instance_faces_scale_);

static PointerPropertyRNA rna_Object_instance_collection_;
PropertyRNA &rna_Object_instance_collection = reinterpret_cast<PropertyRNA &>(rna_Object_instance_collection_);

static BoolPropertyRNA rna_Object_is_instancer_;
PropertyRNA &rna_Object_is_instancer = reinterpret_cast<PropertyRNA &>(rna_Object_is_instancer_);

static EnumPropertyRNA rna_Object_display_type_;
PropertyRNA &rna_Object_display_type = reinterpret_cast<PropertyRNA &>(rna_Object_display_type_);

static BoolPropertyRNA rna_Object_show_bounds_;
PropertyRNA &rna_Object_show_bounds = reinterpret_cast<PropertyRNA &>(rna_Object_show_bounds_);

static EnumPropertyRNA rna_Object_display_bounds_type_;
PropertyRNA &rna_Object_display_bounds_type = reinterpret_cast<PropertyRNA &>(rna_Object_display_bounds_type_);

static BoolPropertyRNA rna_Object_show_name_;
PropertyRNA &rna_Object_show_name = reinterpret_cast<PropertyRNA &>(rna_Object_show_name_);

static BoolPropertyRNA rna_Object_show_axis_;
PropertyRNA &rna_Object_show_axis = reinterpret_cast<PropertyRNA &>(rna_Object_show_axis_);

static BoolPropertyRNA rna_Object_show_texture_space_;
PropertyRNA &rna_Object_show_texture_space = reinterpret_cast<PropertyRNA &>(rna_Object_show_texture_space_);

static BoolPropertyRNA rna_Object_show_wire_;
PropertyRNA &rna_Object_show_wire = reinterpret_cast<PropertyRNA &>(rna_Object_show_wire_);

static BoolPropertyRNA rna_Object_show_all_edges_;
PropertyRNA &rna_Object_show_all_edges = reinterpret_cast<PropertyRNA &>(rna_Object_show_all_edges_);

static BoolPropertyRNA rna_Object_use_grease_pencil_lights_;
PropertyRNA &rna_Object_use_grease_pencil_lights = reinterpret_cast<PropertyRNA &>(rna_Object_use_grease_pencil_lights_);

static BoolPropertyRNA rna_Object_show_transparent_;
PropertyRNA &rna_Object_show_transparent = reinterpret_cast<PropertyRNA &>(rna_Object_show_transparent_);

static BoolPropertyRNA rna_Object_show_in_front_;
PropertyRNA &rna_Object_show_in_front = reinterpret_cast<PropertyRNA &>(rna_Object_show_in_front_);

static PointerPropertyRNA rna_Object_pose_;
PropertyRNA &rna_Object_pose = reinterpret_cast<PropertyRNA &>(rna_Object_pose_);

static BoolPropertyRNA rna_Object_show_only_shape_key_;
PropertyRNA &rna_Object_show_only_shape_key = reinterpret_cast<PropertyRNA &>(rna_Object_show_only_shape_key_);

static BoolPropertyRNA rna_Object_use_shape_key_edit_mode_;
PropertyRNA &rna_Object_use_shape_key_edit_mode = reinterpret_cast<PropertyRNA &>(rna_Object_use_shape_key_edit_mode_);

static PointerPropertyRNA rna_Object_active_shape_key_;
PropertyRNA &rna_Object_active_shape_key = reinterpret_cast<PropertyRNA &>(rna_Object_active_shape_key_);

static IntPropertyRNA rna_Object_active_shape_key_index_;
PropertyRNA &rna_Object_active_shape_key_index = reinterpret_cast<PropertyRNA &>(rna_Object_active_shape_key_index_);

static BoolPropertyRNA rna_Object_use_dynamic_topology_sculpting_;
PropertyRNA &rna_Object_use_dynamic_topology_sculpting = reinterpret_cast<PropertyRNA &>(rna_Object_use_dynamic_topology_sculpting_);

static BoolPropertyRNA rna_Object_is_from_instancer_;
PropertyRNA &rna_Object_is_from_instancer = reinterpret_cast<PropertyRNA &>(rna_Object_is_from_instancer_);

static BoolPropertyRNA rna_Object_is_from_set_;
PropertyRNA &rna_Object_is_from_set = reinterpret_cast<PropertyRNA &>(rna_Object_is_from_set_);

static PointerPropertyRNA rna_Object_display_;
PropertyRNA &rna_Object_display = reinterpret_cast<PropertyRNA &>(rna_Object_display_);

static PointerPropertyRNA rna_Object_lineart_;
PropertyRNA &rna_Object_lineart = reinterpret_cast<PropertyRNA &>(rna_Object_lineart_);

static BoolPropertyRNA rna_Object_use_mesh_mirror_x_;
PropertyRNA &rna_Object_use_mesh_mirror_x = reinterpret_cast<PropertyRNA &>(rna_Object_use_mesh_mirror_x_);

static BoolPropertyRNA rna_Object_use_mesh_mirror_y_;
PropertyRNA &rna_Object_use_mesh_mirror_y = reinterpret_cast<PropertyRNA &>(rna_Object_use_mesh_mirror_y_);

static BoolPropertyRNA rna_Object_use_mesh_mirror_z_;
PropertyRNA &rna_Object_use_mesh_mirror_z = reinterpret_cast<PropertyRNA &>(rna_Object_use_mesh_mirror_z_);

static StringPropertyRNA rna_Object_lightgroup_;
PropertyRNA &rna_Object_lightgroup = reinterpret_cast<PropertyRNA &>(rna_Object_lightgroup_);

static PointerPropertyRNA rna_Object_light_linking_;
PropertyRNA &rna_Object_light_linking = reinterpret_cast<PropertyRNA &>(rna_Object_light_linking_);

static FloatPropertyRNA rna_Object_shadow_terminator_normal_offset_;
PropertyRNA &rna_Object_shadow_terminator_normal_offset = reinterpret_cast<PropertyRNA &>(rna_Object_shadow_terminator_normal_offset_);

static FloatPropertyRNA rna_Object_shadow_terminator_geometry_offset_;
PropertyRNA &rna_Object_shadow_terminator_geometry_offset = reinterpret_cast<PropertyRNA &>(rna_Object_shadow_terminator_geometry_offset_);

static FloatPropertyRNA rna_Object_shadow_terminator_shading_offset_;
PropertyRNA &rna_Object_shadow_terminator_shading_offset = reinterpret_cast<PropertyRNA &>(rna_Object_shadow_terminator_shading_offset_);

static PointerPropertyRNA rna_Object_animation_data_;
PropertyRNA &rna_Object_animation_data = reinterpret_cast<PropertyRNA &>(rna_Object_animation_data_);

static PointerPropertyRNA rna_Object_animation_visualization_;
PropertyRNA &rna_Object_animation_visualization = reinterpret_cast<PropertyRNA &>(rna_Object_animation_visualization_);

static PointerPropertyRNA rna_Object_motion_path_;
PropertyRNA &rna_Object_motion_path = reinterpret_cast<PropertyRNA &>(rna_Object_motion_path_);

static PointerPropertyRNA rna_Object_select_get_view_layer_;
PropertyRNA &rna_Object_select_get_view_layer = reinterpret_cast<PropertyRNA &>(rna_Object_select_get_view_layer_);

static BoolPropertyRNA rna_Object_select_get_result_;
PropertyRNA &rna_Object_select_get_result = reinterpret_cast<PropertyRNA &>(rna_Object_select_get_result_);

FunctionRNA *rna_Object_select_get_func;
static BoolPropertyRNA rna_Object_select_set_state_;
PropertyRNA &rna_Object_select_set_state = reinterpret_cast<PropertyRNA &>(rna_Object_select_set_state_);

static PointerPropertyRNA rna_Object_select_set_view_layer_;
PropertyRNA &rna_Object_select_set_view_layer = reinterpret_cast<PropertyRNA &>(rna_Object_select_set_view_layer_);

FunctionRNA *rna_Object_select_set_func;
static PointerPropertyRNA rna_Object_hide_get_view_layer_;
PropertyRNA &rna_Object_hide_get_view_layer = reinterpret_cast<PropertyRNA &>(rna_Object_hide_get_view_layer_);

static BoolPropertyRNA rna_Object_hide_get_result_;
PropertyRNA &rna_Object_hide_get_result = reinterpret_cast<PropertyRNA &>(rna_Object_hide_get_result_);

FunctionRNA *rna_Object_hide_get_func;
static BoolPropertyRNA rna_Object_hide_set_state_;
PropertyRNA &rna_Object_hide_set_state = reinterpret_cast<PropertyRNA &>(rna_Object_hide_set_state_);

static PointerPropertyRNA rna_Object_hide_set_view_layer_;
PropertyRNA &rna_Object_hide_set_view_layer = reinterpret_cast<PropertyRNA &>(rna_Object_hide_set_view_layer_);

FunctionRNA *rna_Object_hide_set_func;
static PointerPropertyRNA rna_Object_visible_get_view_layer_;
PropertyRNA &rna_Object_visible_get_view_layer = reinterpret_cast<PropertyRNA &>(rna_Object_visible_get_view_layer_);

static PointerPropertyRNA rna_Object_visible_get_viewport_;
PropertyRNA &rna_Object_visible_get_viewport = reinterpret_cast<PropertyRNA &>(rna_Object_visible_get_viewport_);

static BoolPropertyRNA rna_Object_visible_get_result_;
PropertyRNA &rna_Object_visible_get_result = reinterpret_cast<PropertyRNA &>(rna_Object_visible_get_result_);

FunctionRNA *rna_Object_visible_get_func;
static PointerPropertyRNA rna_Object_holdout_get_view_layer_;
PropertyRNA &rna_Object_holdout_get_view_layer = reinterpret_cast<PropertyRNA &>(rna_Object_holdout_get_view_layer_);

static BoolPropertyRNA rna_Object_holdout_get_result_;
PropertyRNA &rna_Object_holdout_get_result = reinterpret_cast<PropertyRNA &>(rna_Object_holdout_get_result_);

FunctionRNA *rna_Object_holdout_get_func;
static PointerPropertyRNA rna_Object_indirect_only_get_view_layer_;
PropertyRNA &rna_Object_indirect_only_get_view_layer = reinterpret_cast<PropertyRNA &>(rna_Object_indirect_only_get_view_layer_);

static BoolPropertyRNA rna_Object_indirect_only_get_result_;
PropertyRNA &rna_Object_indirect_only_get_result = reinterpret_cast<PropertyRNA &>(rna_Object_indirect_only_get_result_);

FunctionRNA *rna_Object_indirect_only_get_func;
static PointerPropertyRNA rna_Object_local_view_get_viewport_;
PropertyRNA &rna_Object_local_view_get_viewport = reinterpret_cast<PropertyRNA &>(rna_Object_local_view_get_viewport_);

static BoolPropertyRNA rna_Object_local_view_get_result_;
PropertyRNA &rna_Object_local_view_get_result = reinterpret_cast<PropertyRNA &>(rna_Object_local_view_get_result_);

FunctionRNA *rna_Object_local_view_get_func;
static PointerPropertyRNA rna_Object_local_view_set_viewport_;
PropertyRNA &rna_Object_local_view_set_viewport = reinterpret_cast<PropertyRNA &>(rna_Object_local_view_set_viewport_);

static BoolPropertyRNA rna_Object_local_view_set_state_;
PropertyRNA &rna_Object_local_view_set_state = reinterpret_cast<PropertyRNA &>(rna_Object_local_view_set_state_);

FunctionRNA *rna_Object_local_view_set_func;
static PointerPropertyRNA rna_Object_visible_in_viewport_get_viewport_;
PropertyRNA &rna_Object_visible_in_viewport_get_viewport = reinterpret_cast<PropertyRNA &>(rna_Object_visible_in_viewport_get_viewport_);

static BoolPropertyRNA rna_Object_visible_in_viewport_get_result_;
PropertyRNA &rna_Object_visible_in_viewport_get_result = reinterpret_cast<PropertyRNA &>(rna_Object_visible_in_viewport_get_result_);

FunctionRNA *rna_Object_visible_in_viewport_get_func;
static PointerPropertyRNA rna_Object_convert_space_pose_bone_;
PropertyRNA &rna_Object_convert_space_pose_bone = reinterpret_cast<PropertyRNA &>(rna_Object_convert_space_pose_bone_);

static FloatPropertyRNA rna_Object_convert_space_matrix_;
PropertyRNA &rna_Object_convert_space_matrix = reinterpret_cast<PropertyRNA &>(rna_Object_convert_space_matrix_);

static FloatPropertyRNA rna_Object_convert_space_matrix_return_;
PropertyRNA &rna_Object_convert_space_matrix_return = reinterpret_cast<PropertyRNA &>(rna_Object_convert_space_matrix_return_);

static EnumPropertyRNA rna_Object_convert_space_from_space_;
PropertyRNA &rna_Object_convert_space_from_space = reinterpret_cast<PropertyRNA &>(rna_Object_convert_space_from_space_);

static EnumPropertyRNA rna_Object_convert_space_to_space_;
PropertyRNA &rna_Object_convert_space_to_space = reinterpret_cast<PropertyRNA &>(rna_Object_convert_space_to_space_);

FunctionRNA *rna_Object_convert_space_func;
static PointerPropertyRNA rna_Object_calc_matrix_camera_depsgraph_;
PropertyRNA &rna_Object_calc_matrix_camera_depsgraph = reinterpret_cast<PropertyRNA &>(rna_Object_calc_matrix_camera_depsgraph_);

static FloatPropertyRNA rna_Object_calc_matrix_camera_result_;
PropertyRNA &rna_Object_calc_matrix_camera_result = reinterpret_cast<PropertyRNA &>(rna_Object_calc_matrix_camera_result_);

static IntPropertyRNA rna_Object_calc_matrix_camera_x_;
PropertyRNA &rna_Object_calc_matrix_camera_x = reinterpret_cast<PropertyRNA &>(rna_Object_calc_matrix_camera_x_);

static IntPropertyRNA rna_Object_calc_matrix_camera_y_;
PropertyRNA &rna_Object_calc_matrix_camera_y = reinterpret_cast<PropertyRNA &>(rna_Object_calc_matrix_camera_y_);

static FloatPropertyRNA rna_Object_calc_matrix_camera_scale_x_;
PropertyRNA &rna_Object_calc_matrix_camera_scale_x = reinterpret_cast<PropertyRNA &>(rna_Object_calc_matrix_camera_scale_x_);

static FloatPropertyRNA rna_Object_calc_matrix_camera_scale_y_;
PropertyRNA &rna_Object_calc_matrix_camera_scale_y = reinterpret_cast<PropertyRNA &>(rna_Object_calc_matrix_camera_scale_y_);

FunctionRNA *rna_Object_calc_matrix_camera_func;
static PointerPropertyRNA rna_Object_camera_fit_coords_depsgraph_;
PropertyRNA &rna_Object_camera_fit_coords_depsgraph = reinterpret_cast<PropertyRNA &>(rna_Object_camera_fit_coords_depsgraph_);

static FloatPropertyRNA rna_Object_camera_fit_coords_coordinates_;
PropertyRNA &rna_Object_camera_fit_coords_coordinates = reinterpret_cast<PropertyRNA &>(rna_Object_camera_fit_coords_coordinates_);

static FloatPropertyRNA rna_Object_camera_fit_coords_co_return_;
PropertyRNA &rna_Object_camera_fit_coords_co_return = reinterpret_cast<PropertyRNA &>(rna_Object_camera_fit_coords_co_return_);

static FloatPropertyRNA rna_Object_camera_fit_coords_scale_return_;
PropertyRNA &rna_Object_camera_fit_coords_scale_return = reinterpret_cast<PropertyRNA &>(rna_Object_camera_fit_coords_scale_return_);

FunctionRNA *rna_Object_camera_fit_coords_func;
static PointerPropertyRNA rna_Object_crazyspace_eval_depsgraph_;
PropertyRNA &rna_Object_crazyspace_eval_depsgraph = reinterpret_cast<PropertyRNA &>(rna_Object_crazyspace_eval_depsgraph_);

static PointerPropertyRNA rna_Object_crazyspace_eval_scene_;
PropertyRNA &rna_Object_crazyspace_eval_scene = reinterpret_cast<PropertyRNA &>(rna_Object_crazyspace_eval_scene_);

FunctionRNA *rna_Object_crazyspace_eval_func;
static IntPropertyRNA rna_Object_crazyspace_displacement_to_deformed_vertex_index_;
PropertyRNA &rna_Object_crazyspace_displacement_to_deformed_vertex_index = reinterpret_cast<PropertyRNA &>(rna_Object_crazyspace_displacement_to_deformed_vertex_index_);

static FloatPropertyRNA rna_Object_crazyspace_displacement_to_deformed_displacement_;
PropertyRNA &rna_Object_crazyspace_displacement_to_deformed_displacement = reinterpret_cast<PropertyRNA &>(rna_Object_crazyspace_displacement_to_deformed_displacement_);

static FloatPropertyRNA rna_Object_crazyspace_displacement_to_deformed_displacement_deformed_;
PropertyRNA &rna_Object_crazyspace_displacement_to_deformed_displacement_deformed = reinterpret_cast<PropertyRNA &>(rna_Object_crazyspace_displacement_to_deformed_displacement_deformed_);

FunctionRNA *rna_Object_crazyspace_displacement_to_deformed_func;
static IntPropertyRNA rna_Object_crazyspace_displacement_to_original_vertex_index_;
PropertyRNA &rna_Object_crazyspace_displacement_to_original_vertex_index = reinterpret_cast<PropertyRNA &>(rna_Object_crazyspace_displacement_to_original_vertex_index_);

static FloatPropertyRNA rna_Object_crazyspace_displacement_to_original_displacement_;
PropertyRNA &rna_Object_crazyspace_displacement_to_original_displacement = reinterpret_cast<PropertyRNA &>(rna_Object_crazyspace_displacement_to_original_displacement_);

static FloatPropertyRNA rna_Object_crazyspace_displacement_to_original_displacement_original_;
PropertyRNA &rna_Object_crazyspace_displacement_to_original_displacement_original = reinterpret_cast<PropertyRNA &>(rna_Object_crazyspace_displacement_to_original_displacement_original_);

FunctionRNA *rna_Object_crazyspace_displacement_to_original_func;
FunctionRNA *rna_Object_crazyspace_eval_clear_func;
static BoolPropertyRNA rna_Object_to_mesh_preserve_all_data_layers_;
PropertyRNA &rna_Object_to_mesh_preserve_all_data_layers = reinterpret_cast<PropertyRNA &>(rna_Object_to_mesh_preserve_all_data_layers_);

static PointerPropertyRNA rna_Object_to_mesh_depsgraph_;
PropertyRNA &rna_Object_to_mesh_depsgraph = reinterpret_cast<PropertyRNA &>(rna_Object_to_mesh_depsgraph_);

static PointerPropertyRNA rna_Object_to_mesh_mesh_;
PropertyRNA &rna_Object_to_mesh_mesh = reinterpret_cast<PropertyRNA &>(rna_Object_to_mesh_mesh_);

FunctionRNA *rna_Object_to_mesh_func;
FunctionRNA *rna_Object_to_mesh_clear_func;
static PointerPropertyRNA rna_Object_to_curve_depsgraph_;
PropertyRNA &rna_Object_to_curve_depsgraph = reinterpret_cast<PropertyRNA &>(rna_Object_to_curve_depsgraph_);

static BoolPropertyRNA rna_Object_to_curve_apply_modifiers_;
PropertyRNA &rna_Object_to_curve_apply_modifiers = reinterpret_cast<PropertyRNA &>(rna_Object_to_curve_apply_modifiers_);

static PointerPropertyRNA rna_Object_to_curve_curve_;
PropertyRNA &rna_Object_to_curve_curve = reinterpret_cast<PropertyRNA &>(rna_Object_to_curve_curve_);

FunctionRNA *rna_Object_to_curve_func;
FunctionRNA *rna_Object_to_curve_clear_func;
static PointerPropertyRNA rna_Object_find_armature_ob_arm_;
PropertyRNA &rna_Object_find_armature_ob_arm = reinterpret_cast<PropertyRNA &>(rna_Object_find_armature_ob_arm_);

FunctionRNA *rna_Object_find_armature_func;
static StringPropertyRNA rna_Object_shape_key_add_name_;
PropertyRNA &rna_Object_shape_key_add_name = reinterpret_cast<PropertyRNA &>(rna_Object_shape_key_add_name_);

static BoolPropertyRNA rna_Object_shape_key_add_from_mix_;
PropertyRNA &rna_Object_shape_key_add_from_mix = reinterpret_cast<PropertyRNA &>(rna_Object_shape_key_add_from_mix_);

static PointerPropertyRNA rna_Object_shape_key_add_key_;
PropertyRNA &rna_Object_shape_key_add_key = reinterpret_cast<PropertyRNA &>(rna_Object_shape_key_add_key_);

FunctionRNA *rna_Object_shape_key_add_func;
static PointerPropertyRNA rna_Object_shape_key_remove_key_;
PropertyRNA &rna_Object_shape_key_remove_key = reinterpret_cast<PropertyRNA &>(rna_Object_shape_key_remove_key_);

FunctionRNA *rna_Object_shape_key_remove_func;
FunctionRNA *rna_Object_shape_key_clear_func;
static CollectionPropertyRNA rna_Object_shape_keys_selected_keyblocks_;
PropertyRNA &rna_Object_shape_keys_selected_keyblocks = reinterpret_cast<PropertyRNA &>(rna_Object_shape_keys_selected_keyblocks_);

FunctionRNA *rna_Object_shape_keys_selected_func;
static FloatPropertyRNA rna_Object_ray_cast_origin_;
PropertyRNA &rna_Object_ray_cast_origin = reinterpret_cast<PropertyRNA &>(rna_Object_ray_cast_origin_);

static FloatPropertyRNA rna_Object_ray_cast_direction_;
PropertyRNA &rna_Object_ray_cast_direction = reinterpret_cast<PropertyRNA &>(rna_Object_ray_cast_direction_);

static FloatPropertyRNA rna_Object_ray_cast_distance_;
PropertyRNA &rna_Object_ray_cast_distance = reinterpret_cast<PropertyRNA &>(rna_Object_ray_cast_distance_);

static PointerPropertyRNA rna_Object_ray_cast_depsgraph_;
PropertyRNA &rna_Object_ray_cast_depsgraph = reinterpret_cast<PropertyRNA &>(rna_Object_ray_cast_depsgraph_);

static BoolPropertyRNA rna_Object_ray_cast_result_;
PropertyRNA &rna_Object_ray_cast_result = reinterpret_cast<PropertyRNA &>(rna_Object_ray_cast_result_);

static FloatPropertyRNA rna_Object_ray_cast_location_;
PropertyRNA &rna_Object_ray_cast_location = reinterpret_cast<PropertyRNA &>(rna_Object_ray_cast_location_);

static FloatPropertyRNA rna_Object_ray_cast_normal_;
PropertyRNA &rna_Object_ray_cast_normal = reinterpret_cast<PropertyRNA &>(rna_Object_ray_cast_normal_);

static IntPropertyRNA rna_Object_ray_cast_index_;
PropertyRNA &rna_Object_ray_cast_index = reinterpret_cast<PropertyRNA &>(rna_Object_ray_cast_index_);

FunctionRNA *rna_Object_ray_cast_func;
static FloatPropertyRNA rna_Object_closest_point_on_mesh_origin_;
PropertyRNA &rna_Object_closest_point_on_mesh_origin = reinterpret_cast<PropertyRNA &>(rna_Object_closest_point_on_mesh_origin_);

static FloatPropertyRNA rna_Object_closest_point_on_mesh_distance_;
PropertyRNA &rna_Object_closest_point_on_mesh_distance = reinterpret_cast<PropertyRNA &>(rna_Object_closest_point_on_mesh_distance_);

static PointerPropertyRNA rna_Object_closest_point_on_mesh_depsgraph_;
PropertyRNA &rna_Object_closest_point_on_mesh_depsgraph = reinterpret_cast<PropertyRNA &>(rna_Object_closest_point_on_mesh_depsgraph_);

static BoolPropertyRNA rna_Object_closest_point_on_mesh_result_;
PropertyRNA &rna_Object_closest_point_on_mesh_result = reinterpret_cast<PropertyRNA &>(rna_Object_closest_point_on_mesh_result_);

static FloatPropertyRNA rna_Object_closest_point_on_mesh_location_;
PropertyRNA &rna_Object_closest_point_on_mesh_location = reinterpret_cast<PropertyRNA &>(rna_Object_closest_point_on_mesh_location_);

static FloatPropertyRNA rna_Object_closest_point_on_mesh_normal_;
PropertyRNA &rna_Object_closest_point_on_mesh_normal = reinterpret_cast<PropertyRNA &>(rna_Object_closest_point_on_mesh_normal_);

static IntPropertyRNA rna_Object_closest_point_on_mesh_index_;
PropertyRNA &rna_Object_closest_point_on_mesh_index = reinterpret_cast<PropertyRNA &>(rna_Object_closest_point_on_mesh_index_);

FunctionRNA *rna_Object_closest_point_on_mesh_func;
static PointerPropertyRNA rna_Object_is_modified_scene_;
PropertyRNA &rna_Object_is_modified_scene = reinterpret_cast<PropertyRNA &>(rna_Object_is_modified_scene_);

static EnumPropertyRNA rna_Object_is_modified_settings_;
PropertyRNA &rna_Object_is_modified_settings = reinterpret_cast<PropertyRNA &>(rna_Object_is_modified_settings_);

static BoolPropertyRNA rna_Object_is_modified_result_;
PropertyRNA &rna_Object_is_modified_result = reinterpret_cast<PropertyRNA &>(rna_Object_is_modified_result_);

FunctionRNA *rna_Object_is_modified_func;
static PointerPropertyRNA rna_Object_is_deform_modified_scene_;
PropertyRNA &rna_Object_is_deform_modified_scene = reinterpret_cast<PropertyRNA &>(rna_Object_is_deform_modified_scene_);

static EnumPropertyRNA rna_Object_is_deform_modified_settings_;
PropertyRNA &rna_Object_is_deform_modified_settings = reinterpret_cast<PropertyRNA &>(rna_Object_is_deform_modified_settings_);

static BoolPropertyRNA rna_Object_is_deform_modified_result_;
PropertyRNA &rna_Object_is_deform_modified_result = reinterpret_cast<PropertyRNA &>(rna_Object_is_deform_modified_result_);

FunctionRNA *rna_Object_is_deform_modified_func;
static EnumPropertyRNA rna_Object_dm_info_type_;
PropertyRNA &rna_Object_dm_info_type = reinterpret_cast<PropertyRNA &>(rna_Object_dm_info_type_);

static PointerPropertyRNA rna_Object_dm_info_depsgraph_;
PropertyRNA &rna_Object_dm_info_depsgraph = reinterpret_cast<PropertyRNA &>(rna_Object_dm_info_depsgraph_);

static StringPropertyRNA rna_Object_dm_info_result_;
PropertyRNA &rna_Object_dm_info_result = reinterpret_cast<PropertyRNA &>(rna_Object_dm_info_result_);

FunctionRNA *rna_Object_dm_info_func;
static BoolPropertyRNA rna_Object_update_from_editmode_result_;
PropertyRNA &rna_Object_update_from_editmode_result = reinterpret_cast<PropertyRNA &>(rna_Object_update_from_editmode_result_);

FunctionRNA *rna_Object_update_from_editmode_func;
FunctionRNA *rna_Object_cache_release_func;
StructRNA *RNA_Object;
void register_struct_Object(BlenderRNA &brna)
{
	rna_Object_data_ = {
		{&rna_Object_type, 	nullptr,
		-1, "data", 41943233, 1, 0, 0, 0, PropertyPathTemplateType(0), "Data",
		"Object data",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_data_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_data_get, Object_data_set, rna_Object_data_typef, nullptr,RNA_ID
	};

	rna_Object_type_ = {
		{&rna_Object_mode, 	&rna_Object_data,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of object",
		0, "ID",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, type), RawPropertyType(1), nullptr},
		Object_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_type_items, 21, 0
	};

	rna_Object_mode_ = {
		{&rna_Object_bound_box, 	&rna_Object_type,
		-1, "mode", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Object interaction mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, mode), RawPropertyType(0), nullptr},
		Object_mode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_mode_items, 14, 0
	};

	static float rna_Object_bound_box_default[24] = {
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
	rna_Object_bound_box_ = {
		{&rna_Object_parent, 	&rna_Object_mode,
		-1, "bound_box", 2, 2, 0, 0, 0, PropertyPathTemplateType(0), "Bounding Box",
		"Object\'s bounding box in object-space coordinates, all values are -1.0 when not available",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 2, {8, 3, 0}, 24,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Object_bound_box_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_bound_box_default
	};

	rna_Object_parent_ = {
		{&rna_Object_parent_type, 	&rna_Object_bound_box,
		-1, "parent", 9437313, 1, 0, 0, 0, PropertyPathTemplateType(0), "Parent",
		"Parent object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_dependency_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_parent_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Object_parent_get, Object_parent_set, nullptr, nullptr,RNA_Object
	};

	static const EnumPropertyItem rna_Object_parent_type_items[7] = {
		{0, "OBJECT", 0, "Object", "The object is parented to an object"	},
		{4, "ARMATURE", 0, "Armature", ""	},
		{4, "LATTICE", 0, "Lattice", "The object is parented to a lattice"	},
		{5, "VERTEX", 0, "Vertex", "The object is parented to a vertex"	},
		{6, "VERTEX_3", 0, "3 Vertices", ""	},
		{7, "BONE", 0, "Bone", "The object is parented to a bone"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_parent_type_ = {
		{&rna_Object_parent_vertices, 	&rna_Object_parent,
		-1, "parent_type", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Parent Type",
		"Type of parent relation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_dependency_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_parent_type_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Object_parent_type_get, Object_parent_type_set, rna_Object_parent_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_parent_type_items, 6, 0
	};

	static int rna_Object_parent_vertices_default[3] = {
		0,
		0,
		0
	};
	rna_Object_parent_vertices_ = {
		{&rna_Object_parent_bone, 	&rna_Object_parent_type,
		-1, "parent_vertices", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Parent Vertices",
		"Indices of vertices in case of a vertex parenting relation",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, par1), RawPropertyType(0), nullptr},
		nullptr, nullptr, Object_parent_vertices_get, Object_parent_vertices_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_Object_parent_vertices_default
	};

	rna_Object_parent_bone_ = {
		{&rna_Object_parent_bone_head_tail_factor, 	&rna_Object_parent_vertices,
		-1, "parent_bone", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Parent Bone",
		"Name of parent bone in case of a bone parenting relation",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Object_dependency_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_parent_bone_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Object_parent_bone_get, Object_parent_bone_length, Object_parent_bone_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Object_parent_bone_head_tail_factor_ = {
		{&rna_Object_use_parent_final_indices, 	&rna_Object_parent_bone,
		-1, "parent_bone_head_tail_factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Parent Bone Head/Tail",
		"Position along the length of bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, parent_bone_head_tail_factor), RawPropertyType(5), nullptr},
		Object_parent_bone_head_tail_factor_get, Object_parent_bone_head_tail_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Object_use_parent_final_indices_ = {
		{&rna_Object_use_camera_lock_parent, 	&rna_Object_parent_bone_head_tail_factor,
		-1, "use_parent_final_indices", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Final Indices",
		"Use the final evaluated indices rather than the original mesh indices",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_parent_final_indices_get, Object_use_parent_final_indices_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_use_camera_lock_parent_ = {
		{&rna_Object_track_axis, 	&rna_Object_use_parent_final_indices,
		-1, "use_camera_lock_parent", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Camera Parent Lock",
		"View Lock 3D viewport camera transformation affects the object\'s parent instead",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_camera_lock_parent_get, Object_use_camera_lock_parent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_track_axis_ = {
		{&rna_Object_up_axis, 	&rna_Object_use_camera_lock_parent,
		-1, "track_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Track Axis",
		"Axis that points in the \'forward\' direction (applies to Instance Vertices when Align to Vertex Normal is enabled)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, trackflag), RawPropertyType(1), nullptr},
		Object_track_axis_get, Object_track_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 0
	};

	static const EnumPropertyItem rna_Object_up_axis_items[4] = {
		{0, "X", 0, "X", ""	},
		{1, "Y", 0, "Y", ""	},
		{2, "Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_up_axis_ = {
		{&rna_Object_material_slots, 	&rna_Object_track_axis,
		-1, "up_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Up Axis",
		"Axis that points in the upward direction (applies to Instance Vertices when Align to Vertex Normal is enabled)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, upflag), RawPropertyType(1), nullptr},
		Object_up_axis_get, Object_up_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_up_axis_items, 3, 1
	};

	rna_Object_material_slots_ = {
		{&rna_Object_active_material, 	&rna_Object_up_axis,
		-1, "material_slots", 0, 2049, 0, 0, 0, PropertyPathTemplateType(0), "Material Slots",
		"Material slots in the object",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_material_slots_begin, Object_material_slots_next, Object_material_slots_end, Object_material_slots_get, Object_material_slots_length, nullptr, nullptr, nullptr, RNA_MaterialSlot
	};

	rna_Object_active_material_ = {
		{&rna_Object_active_material_index, 	&rna_Object_material_slots,
		-1, "active_material", 8388801, 1, 0, 64, 0, PropertyPathTemplateType(0), "Active Material",
		"Active material being displayed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialSlot_update, 102170624, rna_Object_active_material_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_active_material_get, Object_active_material_set, nullptr, rna_MaterialSlot_material_poll,RNA_Material
	};

	rna_Object_active_material_index_ = {
		{&rna_Object_location, 	&rna_Object_active_material,
		-1, "active_material_index", 1073741825, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Material Index",
		"Index of active material slot",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119537664, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_active_material_index_get, Object_active_material_index_set, nullptr, nullptr, rna_Object_active_material_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_Object_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_location_ = {
		{&rna_Object_rotation_quaternion, 	&rna_Object_active_material_index,
		-1, "location", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"Location of the object",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 101842944, nullptr, rna_Object_location_editable, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, loc), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_location_get, Object_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_Object_location_default
	};

	static float rna_Object_rotation_quaternion_default[4] = {
		1.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_rotation_quaternion_ = {
		{&rna_Object_rotation_axis_angle, 	&rna_Object_location,
		-1, "rotation_quaternion", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Quaternion Rotation",
		"Rotation in Quaternions",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Object_internal_update, 101842944, nullptr, rna_Object_rotation_4d_editable, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, quat), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_rotation_quaternion_get, Object_rotation_quaternion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_rotation_quaternion_default
	};

	static float rna_Object_rotation_axis_angle_default[4] = {
		0.0f,
		0.0f,
		1.0f,
		0.0f
	};
	rna_Object_rotation_axis_angle_ = {
		{&rna_Object_rotation_euler, 	&rna_Object_rotation_quaternion,
		-1, "rotation_axis_angle", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Axis-Angle Rotation",
		"Angle of Rotation for Axis-Angle rotation representation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_AXISANGLE) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Object_internal_update, 101842944, nullptr, rna_Object_rotation_4d_editable, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Object_rotation_axis_angle_get, Object_rotation_axis_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_rotation_axis_angle_default
	};

	static float rna_Object_rotation_euler_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_rotation_euler_ = {
		{&rna_Object_rotation_mode, 	&rna_Object_rotation_axis_angle,
		-1, "rotation_euler", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Euler Rotation",
		"Rotation in Eulers",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 101842944, nullptr, rna_Object_rotation_euler_editable, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, rot), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_rotation_euler_get, Object_rotation_euler_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 5, nullptr, nullptr, 0.0f, rna_Object_rotation_euler_default
	};

	rna_Object_rotation_mode_ = {
		{&rna_Object_scale, 	&rna_Object_rotation_euler,
		-1, "rotation_mode", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Rotation Mode",
		"The kind of rotation to apply, values from other rotation modes are not used",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_rotation_mode_get, Object_rotation_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_rotation_mode_items, 8, 1
	};

	static float rna_Object_scale_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_Object_scale_ = {
		{&rna_Object_dimensions, 	&rna_Object_rotation_mode,
		-1, "scale", 67108867, 1, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Scaling of the object",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 101842944, nullptr, rna_Object_scale_editable, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, scale), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_scale_get, Object_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Object_scale_default
	};

	static float rna_Object_dimensions_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_dimensions_ = {
		{&rna_Object_delta_location, 	&rna_Object_scale,
		-1, "dimensions", 1, 2, 0, 0, 0, PropertyPathTemplateType(0), "Dimensions",
		"Absolute bounding box dimensions of the object.\nWarning: Assigning to it or its members multiple consecutive times will not work correctly, as this needs up-to-date evaluated data",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Object_dimensions_get, Object_dimensions_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_Object_dimensions_default
	};

	static float rna_Object_delta_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_delta_location_ = {
		{&rna_Object_delta_rotation_euler, 	&rna_Object_dimensions,
		-1, "delta_location", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Delta Location",
		"Extra translation added to the location of the object",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, dloc), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_delta_location_get, Object_delta_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_Object_delta_location_default
	};

	static float rna_Object_delta_rotation_euler_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_delta_rotation_euler_ = {
		{&rna_Object_delta_rotation_quaternion, 	&rna_Object_delta_location,
		-1, "delta_rotation_euler", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Delta Rotation (Euler)",
		"Extra rotation added to the rotation of the object (when using Euler rotations)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, drot), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_delta_rotation_euler_get, Object_delta_rotation_euler_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 5, nullptr, nullptr, 0.0f, rna_Object_delta_rotation_euler_default
	};

	static float rna_Object_delta_rotation_quaternion_default[4] = {
		1.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_delta_rotation_quaternion_ = {
		{&rna_Object_delta_scale, 	&rna_Object_delta_rotation_euler,
		-1, "delta_rotation_quaternion", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Delta Rotation (Quaternion)",
		"Extra rotation added to the rotation of the object (when using Quaternion rotations)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, dquat), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_delta_rotation_quaternion_get, Object_delta_rotation_quaternion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_delta_rotation_quaternion_default
	};

	static float rna_Object_delta_scale_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_Object_delta_scale_ = {
		{&rna_Object_lock_location, 	&rna_Object_delta_rotation_quaternion,
		-1, "delta_scale", 67108867, 1, 0, 4, 0, PropertyPathTemplateType(0), "Delta Scale",
		"Extra scaling added to the scale of the object",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, dscale), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_delta_scale_get, Object_delta_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Object_delta_scale_default
	};

	static bool rna_Object_lock_location_default[3] = {
		0,
		0,
		0
	};
	rna_Object_lock_location_ = {
		{&rna_Object_lock_rotation, 	&rna_Object_delta_scale,
		-1, "lock_location", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Location",
		"Lock editing of location when transforming",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Object_lock_location_get, Object_lock_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_Object_lock_location_default
	};

	static bool rna_Object_lock_rotation_default[3] = {
		0,
		0,
		0
	};
	rna_Object_lock_rotation_ = {
		{&rna_Object_lock_rotation_w, 	&rna_Object_lock_location,
		-1, "lock_rotation", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Rotation",
		"Lock editing of rotation when transforming",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Object_lock_rotation_get, Object_lock_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_Object_lock_rotation_default
	};

	rna_Object_lock_rotation_w_ = {
		{&rna_Object_lock_rotations_4d, 	&rna_Object_lock_rotation,
		-1, "lock_rotation_w", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Rotation (4D Angle)",
		"Lock editing of \'angle\' component of four-component rotations when transforming",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_lock_rotation_w_get, Object_lock_rotation_w_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_lock_rotations_4d_ = {
		{&rna_Object_lock_scale, 	&rna_Object_lock_rotation_w,
		-1, "lock_rotations_4d", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Rotations (4D)",
		"Lock editing of four component rotations by components (instead of as Eulers)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_lock_rotations_4d_get, Object_lock_rotations_4d_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static bool rna_Object_lock_scale_default[3] = {
		0,
		0,
		0
	};
	rna_Object_lock_scale_ = {
		{&rna_Object_matrix_world, 	&rna_Object_lock_rotations_4d,
		-1, "lock_scale", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Scale",
		"Lock editing of scale when transforming",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Object_lock_scale_get, Object_lock_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_Object_lock_scale_default
	};

	static float rna_Object_matrix_world_default[16] = {
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
	rna_Object_matrix_world_ = {
		{&rna_Object_matrix_local, 	&rna_Object_lock_scale,
		-1, "matrix_world", 1, 2, 0, 0, 0, PropertyPathTemplateType(0), "Matrix World",
		"Worldspace transformation matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Object_matrix_world_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Object_matrix_world_get, Object_matrix_world_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_matrix_world_default
	};

	static float rna_Object_matrix_local_default[16] = {
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
	rna_Object_matrix_local_ = {
		{&rna_Object_matrix_basis, 	&rna_Object_matrix_world,
		-1, "matrix_local", 1, 2, 0, 0, 0, PropertyPathTemplateType(0), "Local Matrix",
		"Parent relative transformation matrix.\nWarning: Only takes into account object parenting, so e.g. in case of bone parenting you get a matrix relative to the Armature object, not to the actual parent bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Object_matrix_local_get, Object_matrix_local_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_matrix_local_default
	};

	static float rna_Object_matrix_basis_default[16] = {
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
	rna_Object_matrix_basis_ = {
		{&rna_Object_matrix_parent_inverse, 	&rna_Object_matrix_local,
		-1, "matrix_basis", 1, 2, 0, 0, 0, PropertyPathTemplateType(0), "Input Matrix",
		"Matrix access to location, rotation and scale (including deltas), before constraints and parenting are applied",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Object_matrix_basis_get, Object_matrix_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_matrix_basis_default
	};

	static float rna_Object_matrix_parent_inverse_default[16] = {
		1.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		1.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		1.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		1.0f
	};
	rna_Object_matrix_parent_inverse_ = {
		{&rna_Object_modifiers, 	&rna_Object_matrix_basis,
		-1, "matrix_parent_inverse", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Parent Inverse Matrix",
		"Inverse of object\'s parent matrix at time of parenting",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Object_internal_update, 101842944, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, parentinv), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_matrix_parent_inverse_get, Object_matrix_parent_inverse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_matrix_parent_inverse_default
	};

	rna_Object_modifiers_ = {
		{&rna_Object_shader_effects, 	&rna_Object_matrix_parent_inverse,
		-1, "modifiers", 0, 1025, 0, 0, 0, PropertyPathTemplateType(0), "Modifiers",
		"Modifiers affecting the geometric data of the object",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_modifiers_override_apply,
			0, PROP_RAW_UNSET, RNA_ObjectModifiers},
		Object_modifiers_begin, Object_modifiers_next, Object_modifiers_end, Object_modifiers_get, nullptr, Object_modifiers_lookup_int, Object_modifiers_lookup_string, nullptr, RNA_Modifier
	};

	rna_Object_shader_effects_ = {
		{&rna_Object_constraints, 	&rna_Object_modifiers,
		-1, "shader_effects", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shader Effects",
		"Effects affecting display of object",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ObjectShaderFx},
		Object_shader_effects_begin, Object_shader_effects_next, Object_shader_effects_end, Object_shader_effects_get, nullptr, Object_shader_effects_lookup_int, Object_shader_effects_lookup_string, nullptr, RNA_ShaderFx
	};

	rna_Object_constraints_ = {
		{&rna_Object_vertex_groups, 	&rna_Object_shader_effects,
		-1, "constraints", 0, 1025, 0, 0, 0, PropertyPathTemplateType(0), "Constraints",
		"Constraints affecting the transformation of the object",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_constraints_override_apply,
			0, PROP_RAW_UNSET, RNA_ObjectConstraints},
		Object_constraints_begin, Object_constraints_next, Object_constraints_end, Object_constraints_get, nullptr, Object_constraints_lookup_int, Object_constraints_lookup_string, nullptr, RNA_Constraint
	};

	rna_Object_vertex_groups_ = {
		{&rna_Object_empty_display_type, 	&rna_Object_constraints,
		-1, "vertex_groups", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Groups",
		"Vertex groups of the object",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_VertexGroups},
		Object_vertex_groups_begin, Object_vertex_groups_next, Object_vertex_groups_end, Object_vertex_groups_get, nullptr, Object_vertex_groups_lookup_int, nullptr, nullptr, RNA_VertexGroup
	};

	rna_Object_empty_display_type_ = {
		{&rna_Object_empty_display_size, 	&rna_Object_vertex_groups,
		-1, "empty_display_type", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Empty Display Type",
		"Viewport display style for empties",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_empty_display_type_get, Object_empty_display_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_empty_drawtype_items, 8, 2
	};

	rna_Object_empty_display_size_ = {
		{&rna_Object_empty_image_offset, 	&rna_Object_empty_display_type,
		-1, "empty_display_size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Empty Display Size",
		"Size of display for empties in the viewport",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, empty_drawsize), RawPropertyType(5), nullptr},
		Object_empty_display_size_get, Object_empty_display_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0001000000f, 1000.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	static float rna_Object_empty_image_offset_default[2] = {
		-0.5000000000f,
		-0.5000000000f
	};
	rna_Object_empty_image_offset_ = {
		{&rna_Object_image_user, 	&rna_Object_empty_display_size,
		-1, "empty_image_offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Origin Offset",
		"Origin offset distance",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, ima_ofs), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_empty_image_offset_get, Object_empty_image_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 2, nullptr, nullptr, 0.0f, rna_Object_empty_image_offset_default
	};

	rna_Object_image_user_ = {
		{&rna_Object_empty_image_depth, 	&rna_Object_empty_image_offset,
		-1, "image_user", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Image User",
		"Parameters defining which layer, pass and frame of the image is displayed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_image_user_get, nullptr, nullptr, nullptr,RNA_ImageUser
	};

	static const EnumPropertyItem rna_Object_empty_image_depth_items[4] = {
		{0, "DEFAULT", 0, "Default", ""	},
		{1, "FRONT", 0, "Front", ""	},
		{2, "BACK", 0, "Back", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_empty_image_depth_ = {
		{&rna_Object_show_empty_image_perspective, 	&rna_Object_image_user,
		-1, "empty_image_depth", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Empty Image Depth",
		"Determine which other objects will occlude the image",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, empty_image_depth), RawPropertyType(2), nullptr},
		Object_empty_image_depth_get, Object_empty_image_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_empty_image_depth_items, 3, 0
	};

	rna_Object_show_empty_image_perspective_ = {
		{&rna_Object_show_empty_image_orthographic, 	&rna_Object_empty_image_depth,
		-1, "show_empty_image_perspective", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display in Perspective Mode",
		"Display image in perspective mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_empty_image_perspective_get, Object_show_empty_image_perspective_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_show_empty_image_orthographic_ = {
		{&rna_Object_show_empty_image_only_axis_aligned, 	&rna_Object_show_empty_image_perspective,
		-1, "show_empty_image_orthographic", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display in Orthographic Mode",
		"Display image in orthographic mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_empty_image_orthographic_get, Object_show_empty_image_orthographic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_show_empty_image_only_axis_aligned_ = {
		{&rna_Object_use_empty_image_alpha, 	&rna_Object_show_empty_image_orthographic,
		-1, "show_empty_image_only_axis_aligned", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Only Axis Aligned",
		"Only display the image when it is aligned with the view axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_empty_image_only_axis_aligned_get, Object_show_empty_image_only_axis_aligned_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_use_empty_image_alpha_ = {
		{&rna_Object_empty_image_side, 	&rna_Object_show_empty_image_only_axis_aligned,
		-1, "use_empty_image_alpha", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Alpha",
		"Use alpha blending instead of alpha test (can produce sorting artifacts)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_empty_image_alpha_get, Object_use_empty_image_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Object_empty_image_side_items[4] = {
		{0, "DOUBLE_SIDED", 0, "Both", ""	},
		{4, "FRONT", 0, "Front", ""	},
		{8, "BACK", 0, "Back", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_empty_image_side_ = {
		{&rna_Object_add_rest_position_attribute, 	&rna_Object_use_empty_image_alpha,
		-1, "empty_image_side", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Empty Image Side",
		"Show front/back side",
		0, "Image",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, empty_image_visibility_flag), RawPropertyType(2), nullptr},
		Object_empty_image_side_get, Object_empty_image_side_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_empty_image_side_items, 3, 0
	};

	rna_Object_add_rest_position_attribute_ = {
		{&rna_Object_pass_index, 	&rna_Object_empty_image_side,
		-1, "add_rest_position_attribute", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Add Rest Position",
		"Add a \"rest_position\" attribute that is a copy of the position attribute before shape keys and modifiers are evaluated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_data, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_add_rest_position_attribute_get, Object_add_rest_position_attribute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_pass_index_ = {
		{&rna_Object_color, 	&rna_Object_add_rest_position_attribute,
		-1, "pass_index", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Pass Index",
		"Index number for the \"Object Index\" render pass",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, index), RawPropertyType(1), nullptr},
		Object_pass_index_get, Object_pass_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_Object_color_default[4] = {
		1.0f,
		1.0f,
		1.0f,
		1.0f
	};
	rna_Object_color_ = {
		{&rna_Object_field, 	&rna_Object_pass_index,
		-1, "color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Object color and alpha, used when the Object Color mode is enabled",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, Object_color_get, Object_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_color_default
	};

	rna_Object_field_ = {
		{&rna_Object_collision, 	&rna_Object_color,
		-1, "field", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Field Settings",
		"Settings for using the object as a field in physics simulation",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_field_get, nullptr, nullptr, nullptr,RNA_FieldSettings
	};

	rna_Object_collision_ = {
		{&rna_Object_soft_body, 	&rna_Object_field,
		-1, "collision", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Collision Settings",
		"Settings for using the object as a collider in physics simulation",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_collision_get, nullptr, nullptr, nullptr,RNA_CollisionSettings
	};

	rna_Object_soft_body_ = {
		{&rna_Object_particle_systems, 	&rna_Object_collision,
		-1, "soft_body", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Soft Body Settings",
		"Settings for soft body simulation",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_soft_body_get, nullptr, nullptr, nullptr,RNA_SoftBodySettings
	};

	rna_Object_particle_systems_ = {
		{&rna_Object_rigid_body, 	&rna_Object_soft_body,
		-1, "particle_systems", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Particle Systems",
		"Particle systems emitted from the object",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ParticleSystems},
		Object_particle_systems_begin, Object_particle_systems_next, Object_particle_systems_end, Object_particle_systems_get, nullptr, Object_particle_systems_lookup_int, Object_particle_systems_lookup_string, nullptr, RNA_ParticleSystem
	};

	rna_Object_rigid_body_ = {
		{&rna_Object_rigid_body_constraint, 	&rna_Object_particle_systems,
		-1, "rigid_body", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Rigid Body Settings",
		"Settings for rigid body simulation",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_rigid_body_get, nullptr, nullptr, nullptr,RNA_RigidBodyObject
	};

	rna_Object_rigid_body_constraint_ = {
		{&rna_Object_use_simulation_cache, 	&rna_Object_rigid_body,
		-1, "rigid_body_constraint", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Rigid Body Constraint",
		"Constraint constraining rigid bodies",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_rigid_body_constraint_get, nullptr, nullptr, nullptr,RNA_RigidBodyConstraint
	};

	rna_Object_use_simulation_cache_ = {
		{&rna_Object_hide_viewport, 	&rna_Object_rigid_body_constraint,
		-1, "use_simulation_cache", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Simulation Cache",
		"Cache frames during simulation nodes playback",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_simulation_cache_get, Object_use_simulation_cache_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_hide_viewport_ = {
		{&rna_Object_hide_select, 	&rna_Object_use_simulation_cache,
		-1, "hide_viewport", 4355, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable in Viewports",
		"Globally disable in viewports",
		32, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_hide_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_hide_viewport_get, Object_hide_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_hide_select_ = {
		{&rna_Object_hide_render, 	&rna_Object_hide_viewport,
		-1, "hide_select", 4353, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable Selection",
		"Disable selection in viewport",
		30, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_hide_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_hide_select_get, Object_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_hide_render_ = {
		{&rna_Object_hide_probe_volume, 	&rna_Object_hide_select,
		-1, "hide_render", 4355, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable in Renders",
		"Globally disable in renders",
		28, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_hide_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_hide_render_get, Object_hide_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_hide_probe_volume_ = {
		{&rna_Object_hide_probe_sphere, 	&rna_Object_hide_render,
		-1, "hide_probe_volume", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable in Volume Probes",
		"Globally disable in volume probes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_hide_probe_volume_get, Object_hide_probe_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_hide_probe_sphere_ = {
		{&rna_Object_hide_probe_plane, 	&rna_Object_hide_probe_volume,
		-1, "hide_probe_sphere", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable in Spherical Light Probes",
		"Globally disable in spherical light probes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_hide_probe_sphere_get, Object_hide_probe_sphere_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_hide_probe_plane_ = {
		{&rna_Object_hide_surface_pick, 	&rna_Object_hide_probe_sphere,
		-1, "hide_probe_plane", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable in Planar Light Probes",
		"Globally disable in planar light probes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_hide_probe_plane_get, Object_hide_probe_plane_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_hide_surface_pick_ = {
		{&rna_Object_show_instancer_for_render, 	&rna_Object_hide_probe_plane,
		-1, "hide_surface_pick", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable in Surface Picking",
		"Disable surface influence during selection, snapping and depth-picking operators. Usually used to avoid semi-transparent objects to affect scene navigation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_hide_surface_pick_get, Object_hide_surface_pick_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_show_instancer_for_render_ = {
		{&rna_Object_show_instancer_for_viewport, 	&rna_Object_hide_surface_pick,
		-1, "show_instancer_for_render", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Render Instancer",
		"Make instancer visible when rendering",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_duplicator_visibility_flag_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_instancer_for_render_get, Object_show_instancer_for_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_show_instancer_for_viewport_ = {
		{&rna_Object_visible_camera, 	&rna_Object_show_instancer_for_render,
		-1, "show_instancer_for_viewport", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Instancer",
		"Make instancer visible in the viewport",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_duplicator_visibility_flag_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_instancer_for_viewport_get, Object_show_instancer_for_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_visible_camera_ = {
		{&rna_Object_visible_diffuse, 	&rna_Object_show_instancer_for_viewport,
		-1, "visible_camera", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Camera Visibility",
		"Object visibility to camera rays",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_visible_camera_get, Object_visible_camera_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_visible_diffuse_ = {
		{&rna_Object_visible_glossy, 	&rna_Object_visible_camera,
		-1, "visible_diffuse", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Diffuse Visibility",
		"Object visibility to diffuse rays",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_visible_diffuse_get, Object_visible_diffuse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_visible_glossy_ = {
		{&rna_Object_visible_transmission, 	&rna_Object_visible_diffuse,
		-1, "visible_glossy", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Glossy Visibility",
		"Object visibility to glossy rays",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_visible_glossy_get, Object_visible_glossy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_visible_transmission_ = {
		{&rna_Object_visible_volume_scatter, 	&rna_Object_visible_glossy,
		-1, "visible_transmission", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Transmission Visibility",
		"Object visibility to transmission rays",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_visible_transmission_get, Object_visible_transmission_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_visible_volume_scatter_ = {
		{&rna_Object_visible_shadow, 	&rna_Object_visible_transmission,
		-1, "visible_volume_scatter", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Volume Scatter Visibility",
		"Object visibility to volume scattering rays",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_visible_volume_scatter_get, Object_visible_volume_scatter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_visible_shadow_ = {
		{&rna_Object_is_holdout, 	&rna_Object_visible_volume_scatter,
		-1, "visible_shadow", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shadow Visibility",
		"Object visibility to shadow rays",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_visible_shadow_get, Object_visible_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_is_holdout_ = {
		{&rna_Object_is_shadow_catcher, 	&rna_Object_visible_shadow,
		-1, "is_holdout", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Holdout",
		"Render objects as a holdout or matte, creating a hole in the image with zero alpha, to fill out in compositing with real footage or another render",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_hide_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_is_holdout_get, Object_is_holdout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_is_shadow_catcher_ = {
		{&rna_Object_visible_raycast, 	&rna_Object_is_holdout,
		-1, "is_shadow_catcher", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shadow Catcher",
		"Only render shadows and reflections on this object, for compositing renders into real footage. Objects with this setting are considered to already exist in the footage, objects without it are synthetic objects being composited into it.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_is_shadow_catcher_get, Object_is_shadow_catcher_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_visible_raycast_ = {
		{&rna_Object_instance_type, 	&rna_Object_is_shadow_catcher,
		-1, "visible_raycast", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Raycast Visibility",
		"Object visibility to raycast rays. Implicitly false for Blended materials.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_visible_raycast_get, Object_visible_raycast_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_Object_instance_type_items[5] = {
		{0, "NONE", 0, "None", ""	},
		{16, "VERTS", 0, "Vertices", "Instantiate child objects on all vertices"	},
		{512, "FACES", 0, "Faces", "Instantiate child objects on all faces"	},
		{256, "COLLECTION", 0, "Collection", "Enable collection instancing"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_instance_type_ = {
		{&rna_Object_use_instance_vertices_rotation, 	&rna_Object_visible_raycast,
		-1, "instance_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Instance Type",
		"If not None, object instancing method to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_dependency_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, transflag), RawPropertyType(1), nullptr},
		Object_instance_type_get, Object_instance_type_set, rna_Object_instance_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_instance_type_items, 4, 0
	};

	rna_Object_use_instance_vertices_rotation_ = {
		{&rna_Object_use_instance_faces_scale, 	&rna_Object_instance_type,
		-1, "use_instance_vertices_rotation", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Orient with Normals",
		"Rotate instance according to vertex normal",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_instance_vertices_rotation_get, Object_use_instance_vertices_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_use_instance_faces_scale_ = {
		{&rna_Object_instance_faces_scale, 	&rna_Object_use_instance_vertices_rotation,
		-1, "use_instance_faces_scale", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Scale to Face Sizes",
		"Scale instance based on face size",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_instance_faces_scale_get, Object_use_instance_faces_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_instance_faces_scale_ = {
		{&rna_Object_instance_collection, 	&rna_Object_use_instance_faces_scale,
		-1, "instance_faces_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Instance Faces Scale",
		"Scale the face instance objects",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, instance_faces_scale), RawPropertyType(5), nullptr},
		Object_instance_faces_scale_get, Object_instance_faces_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 10000.0f, 0.0010000000f, 10000.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Object_instance_collection_ = {
		{&rna_Object_is_instancer, 	&rna_Object_instance_faces_scale,
		-1, "instance_collection", 8388801, 1, 0, 64, 0, PropertyPathTemplateType(0), "Instance Collection",
		"Instance an existing collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_dependency_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_instance_collection_get, Object_instance_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_Object_is_instancer_ = {
		{&rna_Object_display_type, 	&rna_Object_instance_collection,
		-1, "is_instancer", 2, 2, 0, 0, 0, PropertyPathTemplateType(0), "is_instancer",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_is_instancer_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Object_display_type_items[5] = {
		{1, "BOUNDS", 0, "Bounds", "Display the bounds of the object"	},
		{2, "WIRE", 0, "Wire", "Display the object as a wireframe"	},
		{3, "SOLID", 0, "Solid", "Display the object as a solid (if solid drawing is enabled in the viewport)"	},
		{5, "TEXTURED", 0, "Textured", "Display the object with textures (if textures are enabled in the viewport)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_display_type_ = {
		{&rna_Object_show_bounds, 	&rna_Object_is_instancer,
		-1, "display_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Display As",
		"How to display object in viewport",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, dt), RawPropertyType(2), nullptr},
		Object_display_type_get, Object_display_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_display_type_items, 4, 5
	};

	rna_Object_show_bounds_ = {
		{&rna_Object_display_bounds_type, 	&rna_Object_display_type,
		-1, "show_bounds", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Bounds",
		"Display the object\'s bounds",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_bounds_get, Object_show_bounds_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Object_display_bounds_type_items[6] = {
		{0, "BOX", 0, "Box", "Display bounds as box"	},
		{1, "SPHERE", 0, "Sphere", "Display bounds as sphere"	},
		{2, "CYLINDER", 0, "Cylinder", "Display bounds as cylinder"	},
		{3, "CONE", 0, "Cone", "Display bounds as cone"	},
		{7, "CAPSULE", 0, "Capsule", "Display bounds as capsule"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_display_bounds_type_ = {
		{&rna_Object_show_name, 	&rna_Object_show_bounds,
		-1, "display_bounds_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Display Bounds Type",
		"Object boundary display type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, boundtype), RawPropertyType(2), nullptr},
		Object_display_bounds_type_get, Object_display_bounds_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_display_bounds_type_items, 5, 0
	};

	rna_Object_show_name_ = {
		{&rna_Object_show_axis, 	&rna_Object_display_bounds_type,
		-1, "show_name", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Name",
		"Display the object\'s name",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_name_get, Object_show_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_show_axis_ = {
		{&rna_Object_show_texture_space, 	&rna_Object_show_name,
		-1, "show_axis", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Axes",
		"Display the object\'s origin and axes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_axis_get, Object_show_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_show_texture_space_ = {
		{&rna_Object_show_wire, 	&rna_Object_show_axis,
		-1, "show_texture_space", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Texture Space",
		"Display the object\'s texture space",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_texture_space_get, Object_show_texture_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_show_wire_ = {
		{&rna_Object_show_all_edges, 	&rna_Object_show_texture_space,
		-1, "show_wire", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Wire",
		"Display the object\'s wireframe over solid shading",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_wire_get, Object_show_wire_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_show_all_edges_ = {
		{&rna_Object_use_grease_pencil_lights, 	&rna_Object_show_wire,
		-1, "show_all_edges", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display All Edges",
		"Display all edges for mesh objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_all_edges_get, Object_show_all_edges_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_use_grease_pencil_lights_ = {
		{&rna_Object_show_transparent, 	&rna_Object_show_all_edges,
		-1, "use_grease_pencil_lights", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Lights",
		"Lights affect Grease Pencil object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_grease_pencil_lights_get, Object_use_grease_pencil_lights_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Object_show_transparent_ = {
		{&rna_Object_show_in_front, 	&rna_Object_use_grease_pencil_lights,
		-1, "show_transparent", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Transparent",
		"Display material transparency in the object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_transparent_get, Object_show_transparent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_show_in_front_ = {
		{&rna_Object_pose, 	&rna_Object_show_transparent,
		-1, "show_in_front", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "In Front",
		"Make the object display in front of others",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_in_front_get, Object_show_in_front_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_pose_ = {
		{&rna_Object_show_only_shape_key, 	&rna_Object_show_in_front,
		-1, "pose", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Pose",
		"Current pose for armatures",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_pose_get, nullptr, nullptr, nullptr,RNA_Pose
	};

	rna_Object_show_only_shape_key_ = {
		{&rna_Object_use_shape_key_edit_mode, 	&rna_Object_pose,
		-1, "show_only_shape_key", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Solo Active Shape Key",
		"Only show the active shape key at full value",
		555, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_show_only_shape_key_get, Object_show_only_shape_key_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_use_shape_key_edit_mode_ = {
		{&rna_Object_active_shape_key, 	&rna_Object_show_only_shape_key,
		-1, "use_shape_key_edit_mode", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shape Key Edit Mode",
		"Display shape keys in edit mode (for meshes only)",
		157, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_shape_key_edit_mode_get, Object_use_shape_key_edit_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_active_shape_key_ = {
		{&rna_Object_active_shape_key_index, 	&rna_Object_use_shape_key_edit_mode,
		-1, "active_shape_key", 8388608, 6, 0, 0, 0, PropertyPathTemplateType(0), "Active Shape Key",
		"Current shape key",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_active_shape_key_get, nullptr, nullptr, nullptr,RNA_ShapeKey
	};

	rna_Object_active_shape_key_index_ = {
		{&rna_Object_use_dynamic_topology_sculpting, 	&rna_Object_active_shape_key,
		-1, "active_shape_key_index", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Shape Key Index",
		"Current shape key index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_active_shape_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_active_shape_key_index_get, Object_active_shape_key_index_set, nullptr, nullptr, rna_Object_active_shape_key_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Object_use_dynamic_topology_sculpting_ = {
		{&rna_Object_is_from_instancer, 	&rna_Object_active_shape_key_index,
		-1, "use_dynamic_topology_sculpting", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Dynamic Topology Sculpting",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_dynamic_topology_sculpting_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_is_from_instancer_ = {
		{&rna_Object_is_from_set, 	&rna_Object_use_dynamic_topology_sculpting,
		-1, "is_from_instancer", 2, 2, 0, 0, 0, PropertyPathTemplateType(0), "Base from Instancer",
		"Object comes from a instancer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_is_from_instancer_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_is_from_set_ = {
		{&rna_Object_display, 	&rna_Object_is_from_instancer,
		-1, "is_from_set", 2, 2, 0, 0, 0, PropertyPathTemplateType(0), "Base from Set",
		"Object comes from a background set",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_is_from_set_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_display_ = {
		{&rna_Object_lineart, 	&rna_Object_is_from_set,
		-1, "display", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object Display",
		"Object display settings for 3D viewport",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_display_get, nullptr, nullptr, nullptr,RNA_ObjectDisplay
	};

	rna_Object_lineart_ = {
		{&rna_Object_use_mesh_mirror_x, 	&rna_Object_display,
		-1, "lineart", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Line Art",
		"Line Art settings for the object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_lineart_get, nullptr, nullptr, nullptr,RNA_ObjectLineArt
	};

	rna_Object_use_mesh_mirror_x_ = {
		{&rna_Object_use_mesh_mirror_y, 	&rna_Object_lineart,
		-1, "use_mesh_mirror_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "X",
		"Enable mesh symmetry in the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_mesh_mirror_x_get, Object_use_mesh_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_use_mesh_mirror_y_ = {
		{&rna_Object_use_mesh_mirror_z, 	&rna_Object_use_mesh_mirror_x,
		-1, "use_mesh_mirror_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Y",
		"Enable mesh symmetry in the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, rna_Object_mesh_symmetry_yz_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_mesh_mirror_y_get, Object_use_mesh_mirror_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_use_mesh_mirror_z_ = {
		{&rna_Object_lightgroup, 	&rna_Object_use_mesh_mirror_y,
		-1, "use_mesh_mirror_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Z",
		"Enable mesh symmetry in the Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, rna_Object_mesh_symmetry_yz_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_use_mesh_mirror_z_get, Object_use_mesh_mirror_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Object_lightgroup_ = {
		{&rna_Object_light_linking, 	&rna_Object_use_mesh_mirror_z,
		-1, "lightgroup", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lightgroup",
		"Lightgroup that the object belongs to",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_draw, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_lightgroup_get, Object_lightgroup_length, Object_lightgroup_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Object_light_linking_ = {
		{&rna_Object_shadow_terminator_normal_offset, 	&rna_Object_lightgroup,
		-1, "light_linking", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Light Linking",
		"Light linking settings",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_light_linking_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Object_light_linking_get, nullptr, nullptr, nullptr,RNA_ObjectLightLinking
	};

	rna_Object_shadow_terminator_normal_offset_ = {
		{&rna_Object_shadow_terminator_geometry_offset, 	&rna_Object_light_linking,
		-1, "shadow_terminator_normal_offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Terminator Normal Offset",
		"Offset rays from the surface to reduce shadow terminator artifact on low poly geometry. Only affect triangles that are affected by the geometry offset",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, shadow_terminator_normal_offset), RawPropertyType(5), nullptr},
		Object_shadow_terminator_normal_offset_get, Object_shadow_terminator_normal_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.0099999998f, 4, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Object_shadow_terminator_geometry_offset_ = {
		{&rna_Object_shadow_terminator_shading_offset, 	&rna_Object_shadow_terminator_normal_offset,
		-1, "shadow_terminator_geometry_offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Terminator Geometry Offset",
		"Offset rays from the surface to reduce shadow terminator artifact on low poly geometry. Only affects triangles at grazing angles to light",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, shadow_terminator_geometry_offset), RawPropertyType(5), nullptr},
		Object_shadow_terminator_geometry_offset_get, Object_shadow_terminator_geometry_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_Object_shadow_terminator_shading_offset_ = {
		{&rna_Object_animation_data, 	&rna_Object_shadow_terminator_geometry_offset,
		-1, "shadow_terminator_shading_offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Terminator Shading Offset",
		"Push the shadow terminator towards the light to hide artifacts on low poly geometry",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Object, shadow_terminator_shading_offset), RawPropertyType(5), nullptr},
		Object_shadow_terminator_shading_offset_get, Object_shadow_terminator_shading_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Object_animation_data_ = {
		{&rna_Object_animation_visualization, 	&rna_Object_shadow_terminator_shading_offset,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Object_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	rna_Object_animation_visualization_ = {
		{&rna_Object_motion_path, 	&rna_Object_animation_data,
		-1, "animation_visualization", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Visualization",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_animation_visualization_get, nullptr, nullptr, nullptr,RNA_AnimViz
	};

	rna_Object_motion_path_ = {
		{nullptr, 	&rna_Object_animation_visualization,
		-1, "motion_path", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Motion Path",
		"Motion Path for this element",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Object_motion_path_get, nullptr, nullptr, nullptr,RNA_MotionPath
	};

	StructRNA *srna = RNA_Object;
	srna->cont.properties = {&rna_Object_data, &rna_Object_motion_path};
	srna->identifier = "Object";
	srna->flag = 517;
	srna->name = "Object";
	srna->description = "Object data-block defining an object in a scene";
	srna->translation_context = "*";
	srna->icon = 192;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	rna_Object_select_get_view_layer_ = {
		{&rna_Object_select_get_result, 	nullptr,
		-1, "view_layer", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"Use this instead of the active view layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
	rna_Object_select_get_result_ = {
		{nullptr, 	&rna_Object_select_get_view_layer,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Object selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_select_get_view_layer, &rna_Object_select_get_result};
		func->identifier = "select_get";
		func->flag = 8;
		func->description = "Test if the object is selected. The selection state is per view layer.";
		func->call = Object_select_get_call;
		func->c_ret = &rna_Object_select_get_result;
		rna_Object_select_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_select_set_state_ = {
		{&rna_Object_select_set_view_layer, 	nullptr,
		-1, "state", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Selection state to define",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Object_select_set_view_layer_ = {
		{nullptr, 	&rna_Object_select_set_state,
		-1, "view_layer", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"Use this instead of the active view layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_select_set_state, &rna_Object_select_set_view_layer};
		func->identifier = "select_set";
		func->flag = 24;
		func->description = "Select or deselect the object. The selection state is per view layer.";
		func->call = Object_select_set_call;
		rna_Object_select_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_hide_get_view_layer_ = {
		{&rna_Object_hide_get_result, 	nullptr,
		-1, "view_layer", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"Use this instead of the active view layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
	rna_Object_hide_get_result_ = {
		{nullptr, 	&rna_Object_hide_get_view_layer,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Object hidden",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_hide_get_view_layer, &rna_Object_hide_get_result};
		func->identifier = "hide_get";
		func->flag = 8;
		func->description = "Test if the object is hidden for viewport editing. This hiding state is per view layer.";
		func->call = Object_hide_get_call;
		func->c_ret = &rna_Object_hide_get_result;
		rna_Object_hide_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_hide_set_state_ = {
		{&rna_Object_hide_set_view_layer, 	nullptr,
		-1, "state", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Hide state to define",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Object_hide_set_view_layer_ = {
		{nullptr, 	&rna_Object_hide_set_state,
		-1, "view_layer", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"Use this instead of the active view layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_hide_set_state, &rna_Object_hide_set_view_layer};
		func->identifier = "hide_set";
		func->flag = 24;
		func->description = "Hide the object for viewport editing. This hiding state is per view layer.";
		func->call = Object_hide_set_call;
		rna_Object_hide_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_visible_get_view_layer_ = {
		{&rna_Object_visible_get_viewport, 	nullptr,
		-1, "view_layer", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"Use this instead of the active view layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
	rna_Object_visible_get_viewport_ = {
		{&rna_Object_visible_get_result, 	&rna_Object_visible_get_view_layer,
		-1, "viewport", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Use this instead of the active 3D viewport",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_SpaceView3D
	};
	rna_Object_visible_get_result_ = {
		{nullptr, 	&rna_Object_visible_get_viewport,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Object visible",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_visible_get_view_layer, &rna_Object_visible_get_result};
		func->identifier = "visible_get";
		func->flag = 8;
		func->description = "Test if the object is visible in the 3D viewport, taking into account all visibility settings";
		func->call = Object_visible_get_call;
		func->c_ret = &rna_Object_visible_get_result;
		rna_Object_visible_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_holdout_get_view_layer_ = {
		{&rna_Object_holdout_get_result, 	nullptr,
		-1, "view_layer", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"Use this instead of the active view layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
	rna_Object_holdout_get_result_ = {
		{nullptr, 	&rna_Object_holdout_get_view_layer,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Object holdout",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_holdout_get_view_layer, &rna_Object_holdout_get_result};
		func->identifier = "holdout_get";
		func->flag = 8;
		func->description = "Test if object is masked in the view layer";
		func->call = Object_holdout_get_call;
		func->c_ret = &rna_Object_holdout_get_result;
		rna_Object_holdout_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_indirect_only_get_view_layer_ = {
		{&rna_Object_indirect_only_get_result, 	nullptr,
		-1, "view_layer", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"Use this instead of the active view layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
	rna_Object_indirect_only_get_result_ = {
		{nullptr, 	&rna_Object_indirect_only_get_view_layer,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Object indirect only",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_indirect_only_get_view_layer, &rna_Object_indirect_only_get_result};
		func->identifier = "indirect_only_get";
		func->flag = 8;
		func->description = "Test if object is set to contribute only indirectly (through shadows and reflections) in the view layer";
		func->call = Object_indirect_only_get_call;
		func->c_ret = &rna_Object_indirect_only_get_result;
		rna_Object_indirect_only_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_local_view_get_viewport_ = {
		{&rna_Object_local_view_get_result, 	nullptr,
		-1, "viewport", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Viewport in local view",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_SpaceView3D
	};
	rna_Object_local_view_get_result_ = {
		{nullptr, 	&rna_Object_local_view_get_viewport,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Object local view state",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_local_view_get_viewport, &rna_Object_local_view_get_result};
		func->identifier = "local_view_get";
		func->flag = 16;
		func->description = "Get the local view state for this object";
		func->call = Object_local_view_get_call;
		func->c_ret = &rna_Object_local_view_get_result;
		rna_Object_local_view_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_local_view_set_viewport_ = {
		{&rna_Object_local_view_set_state, 	nullptr,
		-1, "viewport", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Viewport in local view",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_SpaceView3D
	};
	rna_Object_local_view_set_state_ = {
		{nullptr, 	&rna_Object_local_view_set_viewport,
		-1, "state", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Local view state to define",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_local_view_set_viewport, &rna_Object_local_view_set_state};
		func->identifier = "local_view_set";
		func->flag = 16;
		func->description = "Set the local view state for this object";
		func->call = Object_local_view_set_call;
		rna_Object_local_view_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_visible_in_viewport_get_viewport_ = {
		{&rna_Object_visible_in_viewport_get_result, 	nullptr,
		-1, "viewport", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Viewport in local collections",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_SpaceView3D
	};
	rna_Object_visible_in_viewport_get_result_ = {
		{nullptr, 	&rna_Object_visible_in_viewport_get_viewport,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Object viewport visibility",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_visible_in_viewport_get_viewport, &rna_Object_visible_in_viewport_get_result};
		func->identifier = "visible_in_viewport_get";
		func->description = "Check for local view and local collections for this viewport and object";
		func->call = Object_visible_in_viewport_get_call;
		func->c_ret = &rna_Object_visible_in_viewport_get_result;
		rna_Object_visible_in_viewport_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_convert_space_pose_bone_ = {
		{&rna_Object_convert_space_matrix, 	nullptr,
		-1, "pose_bone", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Bone to use to define spaces (may be None, in which case only the two \'WORLD\' and \'LOCAL\' spaces are usable)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PoseBone
	};
	static float rna_Object_convert_space_matrix_default[16] = {
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
	rna_Object_convert_space_matrix_ = {
		{&rna_Object_convert_space_matrix_return, 	&rna_Object_convert_space_pose_bone,
		-1, "matrix", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The matrix to transform",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_convert_space_matrix_default
	};
	static float rna_Object_convert_space_matrix_return_default[16] = {
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
	rna_Object_convert_space_matrix_return_ = {
		{&rna_Object_convert_space_from_space, 	&rna_Object_convert_space_matrix,
		-1, "matrix_return", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The transformed matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_convert_space_matrix_return_default
	};
	static const EnumPropertyItem rna_Object_convert_space_from_space_items[5] = {
		{0, "WORLD", 0, "World Space", "The most global space in Blender"	},
		{2, "POSE", 0, "Pose Space", "The pose space of a bone (its armature\'s object space)"	},
		{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The rest pose local space of a bone (this matrix includes parent transforms)"	},
		{1, "LOCAL", 0, "Local Space", "The local space of an object/bone"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_convert_space_from_space_ = {
		{&rna_Object_convert_space_to_space, 	&rna_Object_convert_space_matrix_return,
		-1, "from_space", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The space in which \'matrix\' is currently",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_convert_space_from_space_items, 4, 0
	};
	static const EnumPropertyItem rna_Object_convert_space_to_space_items[5] = {
		{0, "WORLD", 0, "World Space", "The most global space in Blender"	},
		{2, "POSE", 0, "Pose Space", "The pose space of a bone (its armature\'s object space)"	},
		{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The rest pose local space of a bone (this matrix includes parent transforms)"	},
		{1, "LOCAL", 0, "Local Space", "The local space of an object/bone"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_convert_space_to_space_ = {
		{nullptr, 	&rna_Object_convert_space_from_space,
		-1, "to_space", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The space to which you want to transform \'matrix\'",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_convert_space_to_space_items, 4, 0
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_convert_space_pose_bone, &rna_Object_convert_space_to_space};
		func->identifier = "convert_space";
		func->flag = 16;
		func->description = "Convert (transform) the given matrix from one space to another";
		func->call = Object_convert_space_call;
		rna_Object_convert_space_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_calc_matrix_camera_depsgraph_ = {
		{&rna_Object_calc_matrix_camera_result, 	nullptr,
		-1, "depsgraph", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Depsgraph to get evaluated data from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	static float rna_Object_calc_matrix_camera_result_default[16] = {
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
	rna_Object_calc_matrix_camera_result_ = {
		{&rna_Object_calc_matrix_camera_x, 	&rna_Object_calc_matrix_camera_depsgraph,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The camera projection matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_calc_matrix_camera_result_default
	};
	rna_Object_calc_matrix_camera_x_ = {
		{&rna_Object_calc_matrix_camera_y, 	&rna_Object_calc_matrix_camera_result,
		-1, "x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Width of the render area",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 1, nullptr
	};
	rna_Object_calc_matrix_camera_y_ = {
		{&rna_Object_calc_matrix_camera_scale_x, 	&rna_Object_calc_matrix_camera_x,
		-1, "y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Height of the render area",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 1, nullptr
	};
	rna_Object_calc_matrix_camera_scale_x_ = {
		{&rna_Object_calc_matrix_camera_scale_y, 	&rna_Object_calc_matrix_camera_y,
		-1, "scale_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Width scaling factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0000010000f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};
	rna_Object_calc_matrix_camera_scale_y_ = {
		{nullptr, 	&rna_Object_calc_matrix_camera_scale_x,
		-1, "scale_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Height scaling factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0000010000f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_calc_matrix_camera_depsgraph, &rna_Object_calc_matrix_camera_scale_y};
		func->identifier = "calc_matrix_camera";
		func->description = "Generate the camera projection matrix of this object (mostly useful for Camera and Light types)";
		func->call = Object_calc_matrix_camera_call;
		rna_Object_calc_matrix_camera_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_camera_fit_coords_depsgraph_ = {
		{&rna_Object_camera_fit_coords_coordinates, 	nullptr,
		-1, "depsgraph", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Depsgraph to get evaluated data from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	static float rna_Object_camera_fit_coords_coordinates_default[1] = {
		0.0f
	};
	rna_Object_camera_fit_coords_coordinates_ = {
		{&rna_Object_camera_fit_coords_co_return, 	&rna_Object_camera_fit_coords_depsgraph,
		-1, "coordinates", 393219, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Coordinates to fit in",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Object_camera_fit_coords_coordinates_default
	};
	static float rna_Object_camera_fit_coords_co_return_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_camera_fit_coords_co_return_ = {
		{&rna_Object_camera_fit_coords_scale_return, 	&rna_Object_camera_fit_coords_coordinates,
		-1, "co_return", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The location to aim to be able to see all given points",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_camera_fit_coords_co_return_default
	};
	rna_Object_camera_fit_coords_scale_return_ = {
		{nullptr, 	&rna_Object_camera_fit_coords_co_return,
		-1, "scale_return", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The ortho scale to aim to be able to see all given points (if relevant)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_camera_fit_coords_depsgraph, &rna_Object_camera_fit_coords_scale_return};
		func->identifier = "camera_fit_coords";
		func->description = "Compute the coordinate (and scale for ortho cameras) given object should be to \'see\' all given coordinates";
		func->call = Object_camera_fit_coords_call;
		rna_Object_camera_fit_coords_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_crazyspace_eval_depsgraph_ = {
		{&rna_Object_crazyspace_eval_scene, 	nullptr,
		-1, "depsgraph", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Dependency Graph",
		"Evaluated dependency graph",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	rna_Object_crazyspace_eval_scene_ = {
		{nullptr, 	&rna_Object_crazyspace_eval_depsgraph,
		-1, "scene", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "Scene",
		"Scene of the object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_crazyspace_eval_depsgraph, &rna_Object_crazyspace_eval_scene};
		func->identifier = "crazyspace_eval";
		func->flag = 16;
		func->description = "Compute orientation mapping between vertices of an original object and object with shape keys and deforming modifiers applied.The evaluation is to be freed with the crazyspace_eval_free function";
		func->call = Object_crazyspace_eval_call;
		rna_Object_crazyspace_eval_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_crazyspace_displacement_to_deformed_vertex_index_ = {
		{&rna_Object_crazyspace_displacement_to_deformed_displacement, 	nullptr,
		-1, "vertex_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "vertex_index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	static float rna_Object_crazyspace_displacement_to_deformed_displacement_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_crazyspace_displacement_to_deformed_displacement_ = {
		{&rna_Object_crazyspace_displacement_to_deformed_displacement_deformed, 	&rna_Object_crazyspace_displacement_to_deformed_vertex_index,
		-1, "displacement", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "displacement",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_crazyspace_displacement_to_deformed_displacement_default
	};
	static float rna_Object_crazyspace_displacement_to_deformed_displacement_deformed_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_crazyspace_displacement_to_deformed_displacement_deformed_ = {
		{nullptr, 	&rna_Object_crazyspace_displacement_to_deformed_displacement,
		-1, "displacement_deformed", 3, 0, 3, 0, 0, PropertyPathTemplateType(0), "displacement_deformed",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_crazyspace_displacement_to_deformed_displacement_deformed_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_crazyspace_displacement_to_deformed_vertex_index, &rna_Object_crazyspace_displacement_to_deformed_displacement_deformed};
		func->identifier = "crazyspace_displacement_to_deformed";
		func->flag = 16;
		func->description = "Convert displacement vector from non-deformed object space to deformed object space";
		func->call = Object_crazyspace_displacement_to_deformed_call;
		rna_Object_crazyspace_displacement_to_deformed_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_crazyspace_displacement_to_original_vertex_index_ = {
		{&rna_Object_crazyspace_displacement_to_original_displacement, 	nullptr,
		-1, "vertex_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "vertex_index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	static float rna_Object_crazyspace_displacement_to_original_displacement_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_crazyspace_displacement_to_original_displacement_ = {
		{&rna_Object_crazyspace_displacement_to_original_displacement_original, 	&rna_Object_crazyspace_displacement_to_original_vertex_index,
		-1, "displacement", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "displacement",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_crazyspace_displacement_to_original_displacement_default
	};
	static float rna_Object_crazyspace_displacement_to_original_displacement_original_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_crazyspace_displacement_to_original_displacement_original_ = {
		{nullptr, 	&rna_Object_crazyspace_displacement_to_original_displacement,
		-1, "displacement_original", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "displacement_original",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Object_crazyspace_displacement_to_original_displacement_original_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_crazyspace_displacement_to_original_vertex_index, &rna_Object_crazyspace_displacement_to_original_displacement_original};
		func->identifier = "crazyspace_displacement_to_original";
		func->flag = 16;
		func->description = "Free evaluated state of crazyspace";
		func->call = Object_crazyspace_displacement_to_original_call;
		rna_Object_crazyspace_displacement_to_original_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "crazyspace_eval_clear";
		func->description = "crazyspace_eval_clear";
		func->call = Object_crazyspace_eval_clear_call;
		rna_Object_crazyspace_eval_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_to_mesh_preserve_all_data_layers_ = {
		{&rna_Object_to_mesh_depsgraph, 	nullptr,
		-1, "preserve_all_data_layers", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Preserve all data layers in the mesh, like UV maps and vertex groups. By default Blender only computes the subset of data layers needed for viewport display and rendering, for better performance.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Object_to_mesh_depsgraph_ = {
		{&rna_Object_to_mesh_mesh, 	&rna_Object_to_mesh_preserve_all_data_layers,
		-1, "depsgraph", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Dependency Graph",
		"Evaluated dependency graph which is required when preserve_all_data_layers is true",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	rna_Object_to_mesh_mesh_ = {
		{nullptr, 	&rna_Object_to_mesh_depsgraph,
		-1, "mesh", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Mesh created from object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Mesh
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_to_mesh_preserve_all_data_layers, &rna_Object_to_mesh_mesh};
		func->identifier = "to_mesh";
		func->flag = 16;
		func->description = "Create a Mesh data-block from the current state of the object. The object owns the data-block. To force free it use to_mesh_clear(). The result is temporary and cannot be used by objects from the main database.";
		func->call = Object_to_mesh_call;
		func->c_ret = &rna_Object_to_mesh_mesh;
		rna_Object_to_mesh_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "to_mesh_clear";
		func->description = "Clears mesh data-block created by to_mesh()";
		func->call = Object_to_mesh_clear_call;
		rna_Object_to_mesh_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_to_curve_depsgraph_ = {
		{&rna_Object_to_curve_apply_modifiers, 	nullptr,
		-1, "depsgraph", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Dependency Graph",
		"Evaluated dependency graph",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	rna_Object_to_curve_apply_modifiers_ = {
		{&rna_Object_to_curve_curve, 	&rna_Object_to_curve_depsgraph,
		-1, "apply_modifiers", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Apply the deform modifiers on the control points of the curve. This is only supported for curve objects.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Object_to_curve_curve_ = {
		{nullptr, 	&rna_Object_to_curve_apply_modifiers,
		-1, "curve", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Curve created from object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Curve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_to_curve_depsgraph, &rna_Object_to_curve_curve};
		func->identifier = "to_curve";
		func->flag = 16;
		func->description = "Create a Curve data-block from the current state of the object. This only works for curve and text objects. The object owns the data-block. To force free it, use to_curve_clear(). The result is temporary and cannot be used by objects from the main database.";
		func->call = Object_to_curve_call;
		func->c_ret = &rna_Object_to_curve_curve;
		rna_Object_to_curve_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "to_curve_clear";
		func->description = "Clears curve data-block created by to_curve()";
		func->call = Object_to_curve_clear_call;
		rna_Object_to_curve_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_find_armature_ob_arm_ = {
		{nullptr, 	nullptr,
		-1, "ob_arm", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Armature object influencing this object or nullptr",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_find_armature_ob_arm, &rna_Object_find_armature_ob_arm};
		func->identifier = "find_armature";
		func->description = "Find armature influencing this object as a parent or via a modifier";
		func->call = Object_find_armature_call;
		func->c_ret = &rna_Object_find_armature_ob_arm;
		rna_Object_find_armature_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_shape_key_add_name_ = {
		{&rna_Object_shape_key_add_from_mix, 	nullptr,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unique name for the new key-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Key"
	};
	rna_Object_shape_key_add_from_mix_ = {
		{&rna_Object_shape_key_add_key, 	&rna_Object_shape_key_add_name,
		-1, "from_mix", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Create new shape from existing mix of shapes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_Object_shape_key_add_key_ = {
		{nullptr, 	&rna_Object_shape_key_add_from_mix,
		-1, "key", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"New shape key-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ShapeKey
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_shape_key_add_name, &rna_Object_shape_key_add_key};
		func->identifier = "shape_key_add";
		func->flag = 24;
		func->description = "Add shape key to this object";
		func->call = Object_shape_key_add_call;
		func->c_ret = &rna_Object_shape_key_add_key;
		rna_Object_shape_key_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_shape_key_remove_key_ = {
		{nullptr, 	nullptr,
		-1, "key", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Key-block to be removed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ShapeKey
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_shape_key_remove_key, &rna_Object_shape_key_remove_key};
		func->identifier = "shape_key_remove";
		func->flag = 20;
		func->description = "Remove a Shape Key from this object";
		func->call = Object_shape_key_remove_call;
		rna_Object_shape_key_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "shape_key_clear";
		func->flag = 4;
		func->description = "Remove all Shape Keys from this object";
		func->call = Object_shape_key_clear_call;
		rna_Object_shape_key_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_shape_keys_selected_keyblocks_ = {
		{nullptr, 	nullptr,
		-1, "keyblocks", 0, 0, 2, 0, 0, PropertyPathTemplateType(0), "keyblocks",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, RNA_ShapeKey
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_shape_keys_selected_keyblocks, &rna_Object_shape_keys_selected_keyblocks};
		func->identifier = "shape_keys_selected";
		func->description = "Return selected shape keys";
		func->call = Object_shape_keys_selected_call;
		func->c_ret = &rna_Object_shape_keys_selected_keyblocks;
		rna_Object_shape_keys_selected_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Object_ray_cast_origin_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_ray_cast_origin_ = {
		{&rna_Object_ray_cast_direction, 	nullptr,
		-1, "origin", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Origin of the ray, in object space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Object_ray_cast_origin_default
	};
	static float rna_Object_ray_cast_direction_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_ray_cast_direction_ = {
		{&rna_Object_ray_cast_distance, 	&rna_Object_ray_cast_origin,
		-1, "direction", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Direction of the ray, in object space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Object_ray_cast_direction_default
	};
	rna_Object_ray_cast_distance_ = {
		{&rna_Object_ray_cast_depsgraph, 	&rna_Object_ray_cast_direction,
		-1, "distance", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Maximum distance",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 170141173319264429905852091742258462720.0000000000f, 0.0f, 170141173319264429905852091742258462720.0000000000f, 1.0f, 3, nullptr, nullptr, 170141173319264429905852091742258462720.0000000000f, nullptr
	};
	rna_Object_ray_cast_depsgraph_ = {
		{&rna_Object_ray_cast_result, 	&rna_Object_ray_cast_distance,
		-1, "depsgraph", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"Depsgraph to use to get evaluated data, when called from original object (only needed if current Context\'s depsgraph is not suitable)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	rna_Object_ray_cast_result_ = {
		{&rna_Object_ray_cast_location, 	&rna_Object_ray_cast_depsgraph,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Whether the ray successfully hit the geometry",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	static float rna_Object_ray_cast_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_ray_cast_location_ = {
		{&rna_Object_ray_cast_normal, 	&rna_Object_ray_cast_result,
		-1, "location", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Location",
		"The hit location of this ray cast",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Object_ray_cast_location_default
	};
	static float rna_Object_ray_cast_normal_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_ray_cast_normal_ = {
		{&rna_Object_ray_cast_index, 	&rna_Object_ray_cast_location,
		-1, "normal", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Normal",
		"The face normal at the ray cast hit location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Object_ray_cast_normal_default
	};
	rna_Object_ray_cast_index_ = {
		{nullptr, 	&rna_Object_ray_cast_normal,
		-1, "index", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The face index, -1 when original data isn\'t available",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_ray_cast_origin, &rna_Object_ray_cast_index};
		func->identifier = "ray_cast";
		func->flag = 24;
		func->description = "Cast a ray onto evaluated geometry, in object space (using context\'s or provided depsgraph to get evaluated mesh if needed)";
		func->call = Object_ray_cast_call;
		rna_Object_ray_cast_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Object_closest_point_on_mesh_origin_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_closest_point_on_mesh_origin_ = {
		{&rna_Object_closest_point_on_mesh_distance, 	nullptr,
		-1, "origin", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Point to find closest geometry from (in object space)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Object_closest_point_on_mesh_origin_default
	};
	rna_Object_closest_point_on_mesh_distance_ = {
		{&rna_Object_closest_point_on_mesh_depsgraph, 	&rna_Object_closest_point_on_mesh_origin,
		-1, "distance", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Maximum distance",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 18446742974197923840.0000000000f, nullptr
	};
	rna_Object_closest_point_on_mesh_depsgraph_ = {
		{&rna_Object_closest_point_on_mesh_result, 	&rna_Object_closest_point_on_mesh_distance,
		-1, "depsgraph", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"Depsgraph to use to get evaluated data, when called from original object (only needed if current Context\'s depsgraph is not suitable)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	rna_Object_closest_point_on_mesh_result_ = {
		{&rna_Object_closest_point_on_mesh_location, 	&rna_Object_closest_point_on_mesh_depsgraph,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Whether closest point on geometry was found",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	static float rna_Object_closest_point_on_mesh_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_closest_point_on_mesh_location_ = {
		{&rna_Object_closest_point_on_mesh_normal, 	&rna_Object_closest_point_on_mesh_result,
		-1, "location", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Location",
		"The location on the object closest to the point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Object_closest_point_on_mesh_location_default
	};
	static float rna_Object_closest_point_on_mesh_normal_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Object_closest_point_on_mesh_normal_ = {
		{&rna_Object_closest_point_on_mesh_index, 	&rna_Object_closest_point_on_mesh_location,
		-1, "normal", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Normal",
		"The face normal at the closest point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Object_closest_point_on_mesh_normal_default
	};
	rna_Object_closest_point_on_mesh_index_ = {
		{nullptr, 	&rna_Object_closest_point_on_mesh_normal,
		-1, "index", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The face index, -1 when original data isn\'t available",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_closest_point_on_mesh_origin, &rna_Object_closest_point_on_mesh_index};
		func->identifier = "closest_point_on_mesh";
		func->flag = 24;
		func->description = "Find the nearest point on evaluated geometry, in object space (using context\'s or provided depsgraph to get evaluated mesh if needed)";
		func->call = Object_closest_point_on_mesh_call;
		rna_Object_closest_point_on_mesh_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_is_modified_scene_ = {
		{&rna_Object_is_modified_settings, 	nullptr,
		-1, "scene", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Scene in which to check the object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	static const EnumPropertyItem rna_Object_is_modified_settings_items[3] = {
		{1, "PREVIEW", 0, "Preview", "Apply modifier preview settings"	},
		{2, "RENDER", 0, "Render", "Apply modifier render settings"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_is_modified_settings_ = {
		{&rna_Object_is_modified_result, 	&rna_Object_is_modified_scene,
		-1, "settings", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Modifier settings to apply",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_is_modified_settings_items, 2, 1
	};
	rna_Object_is_modified_result_ = {
		{nullptr, 	&rna_Object_is_modified_settings,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Whether the object is modified",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_is_modified_scene, &rna_Object_is_modified_result};
		func->identifier = "is_modified";
		func->description = "Determine if this object is modified from the base mesh data";
		func->call = Object_is_modified_call;
		func->c_ret = &rna_Object_is_modified_result;
		rna_Object_is_modified_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_is_deform_modified_scene_ = {
		{&rna_Object_is_deform_modified_settings, 	nullptr,
		-1, "scene", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Scene in which to check the object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	static const EnumPropertyItem rna_Object_is_deform_modified_settings_items[3] = {
		{1, "PREVIEW", 0, "Preview", "Apply modifier preview settings"	},
		{2, "RENDER", 0, "Render", "Apply modifier render settings"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_is_deform_modified_settings_ = {
		{&rna_Object_is_deform_modified_result, 	&rna_Object_is_deform_modified_scene,
		-1, "settings", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Modifier settings to apply",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_is_deform_modified_settings_items, 2, 1
	};
	rna_Object_is_deform_modified_result_ = {
		{nullptr, 	&rna_Object_is_deform_modified_settings,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Whether the object is deform-modified",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_is_deform_modified_scene, &rna_Object_is_deform_modified_result};
		func->identifier = "is_deform_modified";
		func->description = "Determine if this object is modified by a deformation from the base mesh data";
		func->call = Object_is_deform_modified_call;
		func->c_ret = &rna_Object_is_deform_modified_result;
		rna_Object_is_deform_modified_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static const EnumPropertyItem rna_Object_dm_info_type_items[4] = {
		{0, "SOURCE", 0, "Source", "Source mesh"	},
		{1, "DEFORM", 0, "Deform", "Objects deform mesh"	},
		{2, "FINAL", 0, "Final", "Objects final mesh"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Object_dm_info_type_ = {
		{&rna_Object_dm_info_depsgraph, 	nullptr,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Modifier settings to apply",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_dm_info_type_items, 3, 0
	};
	rna_Object_dm_info_depsgraph_ = {
		{&rna_Object_dm_info_result, 	&rna_Object_dm_info_type,
		-1, "depsgraph", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"Depsgraph to use to get evaluated data, when called from original object (only needed if current Context\'s depsgraph is not suitable)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	rna_Object_dm_info_result_ = {
		{nullptr, 	&rna_Object_dm_info_depsgraph,
		-1, "result", 8650753, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Requested information",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 16384, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_dm_info_type, &rna_Object_dm_info_result};
		func->identifier = "dm_info";
		func->flag = 8;
		func->description = "Returns a string for original/evaluated mesh data (debug builds only, using context\'s or provided depsgraph to get evaluated mesh if needed)";
		func->call = Object_dm_info_call;
		rna_Object_dm_info_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Object_update_from_editmode_result_ = {
		{nullptr, 	nullptr,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Success",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Object_update_from_editmode_result, &rna_Object_update_from_editmode_result};
		func->identifier = "update_from_editmode";
		func->flag = 4;
		func->description = "Load the objects edit-mode data into the object data";
		func->call = Object_update_from_editmode_call;
		func->c_ret = &rna_Object_update_from_editmode_result;
		rna_Object_update_from_editmode_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "cache_release";
		func->description = "Release memory used by caches associated with this object. Intended to be used by render engines only.";
		func->call = Object_cache_release_call;
		rna_Object_cache_release_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Object Modifiers */
static CollectionPropertyRNA rna_ObjectModifiers_rna_properties_;
PropertyRNA &rna_ObjectModifiers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ObjectModifiers_rna_properties_);

static PointerPropertyRNA rna_ObjectModifiers_rna_type_;
PropertyRNA &rna_ObjectModifiers_rna_type = reinterpret_cast<PropertyRNA &>(rna_ObjectModifiers_rna_type_);

static PointerPropertyRNA rna_ObjectModifiers_active_;
PropertyRNA &rna_ObjectModifiers_active = reinterpret_cast<PropertyRNA &>(rna_ObjectModifiers_active_);

static StringPropertyRNA rna_ObjectModifiers_new_name_;
PropertyRNA &rna_ObjectModifiers_new_name = reinterpret_cast<PropertyRNA &>(rna_ObjectModifiers_new_name_);

static EnumPropertyRNA rna_ObjectModifiers_new_type_;
PropertyRNA &rna_ObjectModifiers_new_type = reinterpret_cast<PropertyRNA &>(rna_ObjectModifiers_new_type_);

static PointerPropertyRNA rna_ObjectModifiers_new_modifier_;
PropertyRNA &rna_ObjectModifiers_new_modifier = reinterpret_cast<PropertyRNA &>(rna_ObjectModifiers_new_modifier_);

FunctionRNA *rna_ObjectModifiers_new_func;
static PointerPropertyRNA rna_ObjectModifiers_remove_modifier_;
PropertyRNA &rna_ObjectModifiers_remove_modifier = reinterpret_cast<PropertyRNA &>(rna_ObjectModifiers_remove_modifier_);

FunctionRNA *rna_ObjectModifiers_remove_func;
FunctionRNA *rna_ObjectModifiers_clear_func;
static IntPropertyRNA rna_ObjectModifiers_move_from_index_;
PropertyRNA &rna_ObjectModifiers_move_from_index = reinterpret_cast<PropertyRNA &>(rna_ObjectModifiers_move_from_index_);

static IntPropertyRNA rna_ObjectModifiers_move_to_index_;
PropertyRNA &rna_ObjectModifiers_move_to_index = reinterpret_cast<PropertyRNA &>(rna_ObjectModifiers_move_to_index_);

FunctionRNA *rna_ObjectModifiers_move_func;
StructRNA *RNA_ObjectModifiers;
void register_struct_ObjectModifiers(BlenderRNA &brna)
{
	rna_ObjectModifiers_rna_properties_ = {
		{&rna_ObjectModifiers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectModifiers_rna_properties_begin, ObjectModifiers_rna_properties_next, ObjectModifiers_rna_properties_end, ObjectModifiers_rna_properties_get, nullptr, nullptr, ObjectModifiers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ObjectModifiers_rna_type_ = {
		{&rna_ObjectModifiers_active, 	&rna_ObjectModifiers_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectModifiers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ObjectModifiers_active_ = {
		{nullptr, 	&rna_ObjectModifiers_rna_type,
		-1, "active", 1082130433, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Modifier",
		"The active modifier in the list",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectModifiers_active_get, ObjectModifiers_active_set, nullptr, nullptr,RNA_Modifier
	};

	StructRNA *srna = RNA_ObjectModifiers;
	srna->cont.properties = {&rna_ObjectModifiers_rna_properties, &rna_ObjectModifiers_active};
	srna->identifier = "ObjectModifiers";
	srna->flag = 516;
	srna->name = "Object Modifiers";
	srna->description = "Collection of object modifiers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ObjectModifiers_rna_properties;
	{
	rna_ObjectModifiers_new_name_ = {
		{&rna_ObjectModifiers_new_type, 	nullptr,
		-1, "name", 262145, 1, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the modifier",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_ObjectModifiers_new_type_ = {
		{&rna_ObjectModifiers_new_modifier, 	&rna_ObjectModifiers_new_name,
		-1, "type", 3, 1, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Modifier type to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_modifier_type_items, 88, 1
	};
	rna_ObjectModifiers_new_modifier_ = {
		{nullptr, 	&rna_ObjectModifiers_new_type,
		-1, "modifier", 8388608, 1, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created modifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Modifier
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ObjectModifiers_new_name, &rna_ObjectModifiers_new_modifier};
		func->identifier = "new";
		func->flag = 24;
		func->description = "Add a new modifier";
		func->call = ObjectModifiers_new_call;
		func->c_ret = &rna_ObjectModifiers_new_modifier;
		rna_ObjectModifiers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ObjectModifiers_remove_modifier_ = {
		{nullptr, 	nullptr,
		-1, "modifier", 262144, 1, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Modifier to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Modifier
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ObjectModifiers_remove_modifier, &rna_ObjectModifiers_remove_modifier};
		func->identifier = "remove";
		func->flag = 24;
		func->description = "Remove an existing modifier from the object";
		func->call = ObjectModifiers_remove_call;
		rna_ObjectModifiers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 8;
		func->description = "Remove all modifiers from the object";
		func->call = ObjectModifiers_clear_call;
		rna_ObjectModifiers_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ObjectModifiers_move_from_index_ = {
		{&rna_ObjectModifiers_move_to_index, 	nullptr,
		-1, "from_index", 3, 1, 1, 0, 0, PropertyPathTemplateType(0), "From Index",
		"Index to move",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
	rna_ObjectModifiers_move_to_index_ = {
		{nullptr, 	&rna_ObjectModifiers_move_from_index,
		-1, "to_index", 3, 1, 1, 0, 0, PropertyPathTemplateType(0), "To Index",
		"Target index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ObjectModifiers_move_from_index, &rna_ObjectModifiers_move_to_index};
		func->identifier = "move";
		func->flag = 16;
		func->description = "Move a modifier to a different position";
		func->call = ObjectModifiers_move_call;
		rna_ObjectModifiers_move_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Object Shader Effects */
static CollectionPropertyRNA rna_ObjectShaderFx_rna_properties_;
PropertyRNA &rna_ObjectShaderFx_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ObjectShaderFx_rna_properties_);

static PointerPropertyRNA rna_ObjectShaderFx_rna_type_;
PropertyRNA &rna_ObjectShaderFx_rna_type = reinterpret_cast<PropertyRNA &>(rna_ObjectShaderFx_rna_type_);

static StringPropertyRNA rna_ObjectShaderFx_new_name_;
PropertyRNA &rna_ObjectShaderFx_new_name = reinterpret_cast<PropertyRNA &>(rna_ObjectShaderFx_new_name_);

static EnumPropertyRNA rna_ObjectShaderFx_new_type_;
PropertyRNA &rna_ObjectShaderFx_new_type = reinterpret_cast<PropertyRNA &>(rna_ObjectShaderFx_new_type_);

static PointerPropertyRNA rna_ObjectShaderFx_new_shader_fx_;
PropertyRNA &rna_ObjectShaderFx_new_shader_fx = reinterpret_cast<PropertyRNA &>(rna_ObjectShaderFx_new_shader_fx_);

FunctionRNA *rna_ObjectShaderFx_new_func;
static PointerPropertyRNA rna_ObjectShaderFx_remove_shader_fx_;
PropertyRNA &rna_ObjectShaderFx_remove_shader_fx = reinterpret_cast<PropertyRNA &>(rna_ObjectShaderFx_remove_shader_fx_);

FunctionRNA *rna_ObjectShaderFx_remove_func;
FunctionRNA *rna_ObjectShaderFx_clear_func;
StructRNA *RNA_ObjectShaderFx;
void register_struct_ObjectShaderFx(BlenderRNA &brna)
{
	rna_ObjectShaderFx_rna_properties_ = {
		{&rna_ObjectShaderFx_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectShaderFx_rna_properties_begin, ObjectShaderFx_rna_properties_next, ObjectShaderFx_rna_properties_end, ObjectShaderFx_rna_properties_get, nullptr, nullptr, ObjectShaderFx_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ObjectShaderFx_rna_type_ = {
		{nullptr, 	&rna_ObjectShaderFx_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectShaderFx_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ObjectShaderFx;
	srna->cont.properties = {&rna_ObjectShaderFx_rna_properties, &rna_ObjectShaderFx_rna_type};
	srna->identifier = "ObjectShaderFx";
	srna->flag = 516;
	srna->name = "Object Shader Effects";
	srna->description = "Collection of object effects";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ObjectShaderFx_rna_properties;
	{
	rna_ObjectShaderFx_new_name_ = {
		{&rna_ObjectShaderFx_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the effect",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_ObjectShaderFx_new_type_ = {
		{&rna_ObjectShaderFx_new_shader_fx, 	&rna_ObjectShaderFx_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Effect type to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_shaderfx_type_items, 9, 1
	};
	rna_ObjectShaderFx_new_shader_fx_ = {
		{nullptr, 	&rna_ObjectShaderFx_new_type,
		-1, "shader_fx", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ShaderFx
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ObjectShaderFx_new_name, &rna_ObjectShaderFx_new_shader_fx};
		func->identifier = "new";
		func->flag = 24;
		func->description = "Add a new shader fx";
		func->call = ObjectShaderFx_new_call;
		func->c_ret = &rna_ObjectShaderFx_new_shader_fx;
		rna_ObjectShaderFx_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ObjectShaderFx_remove_shader_fx_ = {
		{nullptr, 	nullptr,
		-1, "shader_fx", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Effect to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ShaderFx
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ObjectShaderFx_remove_shader_fx, &rna_ObjectShaderFx_remove_shader_fx};
		func->identifier = "remove";
		func->flag = 24;
		func->description = "Remove an existing effect from the object";
		func->call = ObjectShaderFx_remove_call;
		rna_ObjectShaderFx_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 8;
		func->description = "Remove all effects from the object";
		func->call = ObjectShaderFx_clear_call;
		rna_ObjectShaderFx_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Object Constraints */
static CollectionPropertyRNA rna_ObjectConstraints_rna_properties_;
PropertyRNA &rna_ObjectConstraints_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ObjectConstraints_rna_properties_);

static PointerPropertyRNA rna_ObjectConstraints_rna_type_;
PropertyRNA &rna_ObjectConstraints_rna_type = reinterpret_cast<PropertyRNA &>(rna_ObjectConstraints_rna_type_);

static PointerPropertyRNA rna_ObjectConstraints_active_;
PropertyRNA &rna_ObjectConstraints_active = reinterpret_cast<PropertyRNA &>(rna_ObjectConstraints_active_);

static EnumPropertyRNA rna_ObjectConstraints_new_type_;
PropertyRNA &rna_ObjectConstraints_new_type = reinterpret_cast<PropertyRNA &>(rna_ObjectConstraints_new_type_);

static PointerPropertyRNA rna_ObjectConstraints_new_constraint_;
PropertyRNA &rna_ObjectConstraints_new_constraint = reinterpret_cast<PropertyRNA &>(rna_ObjectConstraints_new_constraint_);

FunctionRNA *rna_ObjectConstraints_new_func;
static PointerPropertyRNA rna_ObjectConstraints_remove_constraint_;
PropertyRNA &rna_ObjectConstraints_remove_constraint = reinterpret_cast<PropertyRNA &>(rna_ObjectConstraints_remove_constraint_);

FunctionRNA *rna_ObjectConstraints_remove_func;
FunctionRNA *rna_ObjectConstraints_clear_func;
static IntPropertyRNA rna_ObjectConstraints_move_from_index_;
PropertyRNA &rna_ObjectConstraints_move_from_index = reinterpret_cast<PropertyRNA &>(rna_ObjectConstraints_move_from_index_);

static IntPropertyRNA rna_ObjectConstraints_move_to_index_;
PropertyRNA &rna_ObjectConstraints_move_to_index = reinterpret_cast<PropertyRNA &>(rna_ObjectConstraints_move_to_index_);

FunctionRNA *rna_ObjectConstraints_move_func;
static PointerPropertyRNA rna_ObjectConstraints_copy_constraint_;
PropertyRNA &rna_ObjectConstraints_copy_constraint = reinterpret_cast<PropertyRNA &>(rna_ObjectConstraints_copy_constraint_);

static PointerPropertyRNA rna_ObjectConstraints_copy_new_constraint_;
PropertyRNA &rna_ObjectConstraints_copy_new_constraint = reinterpret_cast<PropertyRNA &>(rna_ObjectConstraints_copy_new_constraint_);

FunctionRNA *rna_ObjectConstraints_copy_func;
StructRNA *RNA_ObjectConstraints;
void register_struct_ObjectConstraints(BlenderRNA &brna)
{
	rna_ObjectConstraints_rna_properties_ = {
		{&rna_ObjectConstraints_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectConstraints_rna_properties_begin, ObjectConstraints_rna_properties_next, ObjectConstraints_rna_properties_end, ObjectConstraints_rna_properties_get, nullptr, nullptr, ObjectConstraints_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ObjectConstraints_rna_type_ = {
		{&rna_ObjectConstraints_active, 	&rna_ObjectConstraints_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectConstraints_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ObjectConstraints_active_ = {
		{nullptr, 	&rna_ObjectConstraints_rna_type,
		-1, "active", 8388609, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Constraint",
		"Active Object constraint",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectConstraints_active_get, ObjectConstraints_active_set, nullptr, nullptr,RNA_Constraint
	};

	StructRNA *srna = RNA_ObjectConstraints;
	srna->cont.properties = {&rna_ObjectConstraints_rna_properties, &rna_ObjectConstraints_active};
	srna->identifier = "ObjectConstraints";
	srna->flag = 516;
	srna->name = "Object Constraints";
	srna->description = "Collection of object constraints";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ObjectConstraints_rna_properties;
	{
	rna_ObjectConstraints_new_type_ = {
		{&rna_ObjectConstraints_new_constraint, 	nullptr,
		-1, "type", 3, 1, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Constraint type to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_constraint_type_items, 33, 1
	};
	rna_ObjectConstraints_new_constraint_ = {
		{nullptr, 	&rna_ObjectConstraints_new_type,
		-1, "constraint", 8388608, 1, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New constraint",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Constraint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ObjectConstraints_new_type, &rna_ObjectConstraints_new_constraint};
		func->identifier = "new";
		func->flag = 4;
		func->description = "Add a new constraint to this object";
		func->call = ObjectConstraints_new_call;
		func->c_ret = &rna_ObjectConstraints_new_constraint;
		rna_ObjectConstraints_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ObjectConstraints_remove_constraint_ = {
		{nullptr, 	nullptr,
		-1, "constraint", 262144, 1, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Removed constraint",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Constraint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ObjectConstraints_remove_constraint, &rna_ObjectConstraints_remove_constraint};
		func->identifier = "remove";
		func->flag = 20;
		func->description = "Remove a constraint from this object";
		func->call = ObjectConstraints_remove_call;
		rna_ObjectConstraints_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 4;
		func->description = "Remove all constraint from this object";
		func->call = ObjectConstraints_clear_call;
		rna_ObjectConstraints_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ObjectConstraints_move_from_index_ = {
		{&rna_ObjectConstraints_move_to_index, 	nullptr,
		-1, "from_index", 3, 1, 1, 0, 0, PropertyPathTemplateType(0), "From Index",
		"Index to move",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
	rna_ObjectConstraints_move_to_index_ = {
		{nullptr, 	&rna_ObjectConstraints_move_from_index,
		-1, "to_index", 3, 1, 1, 0, 0, PropertyPathTemplateType(0), "To Index",
		"Target index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ObjectConstraints_move_from_index, &rna_ObjectConstraints_move_to_index};
		func->identifier = "move";
		func->flag = 20;
		func->description = "Move a constraint to a different position";
		func->call = ObjectConstraints_move_call;
		rna_ObjectConstraints_move_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ObjectConstraints_copy_constraint_ = {
		{&rna_ObjectConstraints_copy_new_constraint, 	nullptr,
		-1, "constraint", 262144, 1, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Constraint to copy - may belong to a different object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Constraint
	};
	rna_ObjectConstraints_copy_new_constraint_ = {
		{nullptr, 	&rna_ObjectConstraints_copy_constraint,
		-1, "new_constraint", 8388608, 1, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New constraint",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Constraint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ObjectConstraints_copy_constraint, &rna_ObjectConstraints_copy_new_constraint};
		func->identifier = "copy";
		func->flag = 4;
		func->description = "Add a new constraint that is a copy of the given one";
		func->call = ObjectConstraints_copy_call;
		func->c_ret = &rna_ObjectConstraints_copy_new_constraint;
		rna_ObjectConstraints_copy_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Vertex Groups */
static CollectionPropertyRNA rna_VertexGroups_rna_properties_;
PropertyRNA &rna_VertexGroups_rna_properties = reinterpret_cast<PropertyRNA &>(rna_VertexGroups_rna_properties_);

static PointerPropertyRNA rna_VertexGroups_rna_type_;
PropertyRNA &rna_VertexGroups_rna_type = reinterpret_cast<PropertyRNA &>(rna_VertexGroups_rna_type_);

static PointerPropertyRNA rna_VertexGroups_active_;
PropertyRNA &rna_VertexGroups_active = reinterpret_cast<PropertyRNA &>(rna_VertexGroups_active_);

static IntPropertyRNA rna_VertexGroups_active_index_;
PropertyRNA &rna_VertexGroups_active_index = reinterpret_cast<PropertyRNA &>(rna_VertexGroups_active_index_);

static StringPropertyRNA rna_VertexGroups_new_name_;
PropertyRNA &rna_VertexGroups_new_name = reinterpret_cast<PropertyRNA &>(rna_VertexGroups_new_name_);

static PointerPropertyRNA rna_VertexGroups_new_group_;
PropertyRNA &rna_VertexGroups_new_group = reinterpret_cast<PropertyRNA &>(rna_VertexGroups_new_group_);

FunctionRNA *rna_VertexGroups_new_func;
static PointerPropertyRNA rna_VertexGroups_remove_group_;
PropertyRNA &rna_VertexGroups_remove_group = reinterpret_cast<PropertyRNA &>(rna_VertexGroups_remove_group_);

FunctionRNA *rna_VertexGroups_remove_func;
FunctionRNA *rna_VertexGroups_clear_func;
StructRNA *RNA_VertexGroups;
void register_struct_VertexGroups(BlenderRNA &brna)
{
	rna_VertexGroups_rna_properties_ = {
		{&rna_VertexGroups_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexGroups_rna_properties_begin, VertexGroups_rna_properties_next, VertexGroups_rna_properties_end, VertexGroups_rna_properties_get, nullptr, nullptr, VertexGroups_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_VertexGroups_rna_type_ = {
		{&rna_VertexGroups_active, 	&rna_VertexGroups_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexGroups_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_VertexGroups_active_ = {
		{&rna_VertexGroups_active_index, 	&rna_VertexGroups_rna_type,
		-1, "active", 8388609, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Vertex Group",
		"Vertex groups of the object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_vertex_groups_update, 291176448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexGroups_active_get, VertexGroups_active_set, nullptr, nullptr,RNA_VertexGroup
	};

	rna_VertexGroups_active_index_ = {
		{nullptr, 	&rna_VertexGroups_active,
		-1, "active_index", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Vertex Group Index",
		"Active index in vertex group array",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_vertex_groups_update, 291176448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexGroups_active_index_get, VertexGroups_active_index_set, nullptr, nullptr, rna_Object_active_vertex_group_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_VertexGroups;
	srna->cont.properties = {&rna_VertexGroups_rna_properties, &rna_VertexGroups_active_index};
	srna->identifier = "VertexGroups";
	srna->flag = 516;
	srna->name = "Vertex Groups";
	srna->description = "Collection of vertex groups";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_VertexGroups_rna_properties;
	{
	rna_VertexGroups_new_name_ = {
		{&rna_VertexGroups_new_group, 	nullptr,
		-1, "name", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Vertex group name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Group"
	};
	rna_VertexGroups_new_group_ = {
		{nullptr, 	&rna_VertexGroups_new_name,
		-1, "group", 8388608, 1, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New vertex group",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_VertexGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_VertexGroups_new_name, &rna_VertexGroups_new_group};
		func->identifier = "new";
		func->flag = 20;
		func->description = "Add vertex group to object";
		func->call = VertexGroups_new_call;
		func->c_ret = &rna_VertexGroups_new_group;
		rna_VertexGroups_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_VertexGroups_remove_group_ = {
		{nullptr, 	nullptr,
		-1, "group", 262144, 1, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Vertex group to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_VertexGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_VertexGroups_remove_group, &rna_VertexGroups_remove_group};
		func->identifier = "remove";
		func->flag = 20;
		func->description = "Delete vertex group from object";
		func->call = VertexGroups_remove_call;
		rna_VertexGroups_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 20;
		func->description = "Delete all vertex groups from object";
		func->call = VertexGroups_clear_call;
		rna_VertexGroups_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Particle Systems */
static CollectionPropertyRNA rna_ParticleSystems_rna_properties_;
PropertyRNA &rna_ParticleSystems_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ParticleSystems_rna_properties_);

static PointerPropertyRNA rna_ParticleSystems_rna_type_;
PropertyRNA &rna_ParticleSystems_rna_type = reinterpret_cast<PropertyRNA &>(rna_ParticleSystems_rna_type_);

static PointerPropertyRNA rna_ParticleSystems_active_;
PropertyRNA &rna_ParticleSystems_active = reinterpret_cast<PropertyRNA &>(rna_ParticleSystems_active_);

static IntPropertyRNA rna_ParticleSystems_active_index_;
PropertyRNA &rna_ParticleSystems_active_index = reinterpret_cast<PropertyRNA &>(rna_ParticleSystems_active_index_);

StructRNA *RNA_ParticleSystems;
void register_struct_ParticleSystems(BlenderRNA &brna)
{
	rna_ParticleSystems_rna_properties_ = {
		{&rna_ParticleSystems_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystems_rna_properties_begin, ParticleSystems_rna_properties_next, ParticleSystems_rna_properties_end, ParticleSystems_rna_properties_get, nullptr, nullptr, ParticleSystems_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ParticleSystems_rna_type_ = {
		{&rna_ParticleSystems_active, 	&rna_ParticleSystems_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystems_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ParticleSystems_active_ = {
		{&rna_ParticleSystems_active_index, 	&rna_ParticleSystems_rna_type,
		-1, "active", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Particle System",
		"Active particle system being displayed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystems_active_get, nullptr, nullptr, nullptr,RNA_ParticleSystem
	};

	rna_ParticleSystems_active_index_ = {
		{nullptr, 	&rna_ParticleSystems_active,
		-1, "active_index", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Particle System Index",
		"Index of active particle system slot",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_particle_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystems_active_index_get, ParticleSystems_active_index_set, nullptr, nullptr, rna_Object_active_particle_system_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ParticleSystems;
	srna->cont.properties = {&rna_ParticleSystems_rna_properties, &rna_ParticleSystems_active_index};
	srna->identifier = "ParticleSystems";
	srna->flag = 516;
	srna->name = "Particle Systems";
	srna->description = "Collection of particle systems";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ParticleSystems_rna_properties;
};

/* Vertex Group */
static CollectionPropertyRNA rna_VertexGroup_rna_properties_;
PropertyRNA &rna_VertexGroup_rna_properties = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_rna_properties_);

static PointerPropertyRNA rna_VertexGroup_rna_type_;
PropertyRNA &rna_VertexGroup_rna_type = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_rna_type_);

static StringPropertyRNA rna_VertexGroup_name_;
PropertyRNA &rna_VertexGroup_name = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_name_);

static BoolPropertyRNA rna_VertexGroup_lock_weight_;
PropertyRNA &rna_VertexGroup_lock_weight = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_lock_weight_);

static IntPropertyRNA rna_VertexGroup_index_;
PropertyRNA &rna_VertexGroup_index = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_index_);

static IntPropertyRNA rna_VertexGroup_add_index_;
PropertyRNA &rna_VertexGroup_add_index = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_add_index_);

static FloatPropertyRNA rna_VertexGroup_add_weight_;
PropertyRNA &rna_VertexGroup_add_weight = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_add_weight_);

static EnumPropertyRNA rna_VertexGroup_add_type_;
PropertyRNA &rna_VertexGroup_add_type = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_add_type_);

FunctionRNA *rna_VertexGroup_add_func;
static IntPropertyRNA rna_VertexGroup_remove_index_;
PropertyRNA &rna_VertexGroup_remove_index = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_remove_index_);

FunctionRNA *rna_VertexGroup_remove_func;
static IntPropertyRNA rna_VertexGroup_weight_index_;
PropertyRNA &rna_VertexGroup_weight_index = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_weight_index_);

static FloatPropertyRNA rna_VertexGroup_weight_weight_;
PropertyRNA &rna_VertexGroup_weight_weight = reinterpret_cast<PropertyRNA &>(rna_VertexGroup_weight_weight_);

FunctionRNA *rna_VertexGroup_weight_func;
StructRNA *RNA_VertexGroup;
void register_struct_VertexGroup(BlenderRNA &brna)
{
	rna_VertexGroup_rna_properties_ = {
		{&rna_VertexGroup_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexGroup_rna_properties_begin, VertexGroup_rna_properties_next, VertexGroup_rna_properties_end, VertexGroup_rna_properties_get, nullptr, nullptr, VertexGroup_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_VertexGroup_rna_type_ = {
		{&rna_VertexGroup_name, 	&rna_VertexGroup_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexGroup_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_VertexGroup_name_ = {
		{&rna_VertexGroup_lock_weight, 	&rna_VertexGroup_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Vertex group name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Object_internal_update_data_dependency, 291176453, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexGroup_name_get, VertexGroup_name_length, VertexGroup_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_VertexGroup_lock_weight_ = {
		{&rna_VertexGroup_index, 	&rna_VertexGroup_name,
		-1, "lock_weight", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "",
		"Maintain the relative weights for the group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Object_internal_update_data, 291176453, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bDeformGroup, flag), RawPropertyType(3), nullptr},
		VertexGroup_lock_weight_get, VertexGroup_lock_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_VertexGroup_index_ = {
		{nullptr, 	&rna_VertexGroup_lock_weight,
		-1, "index", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index number of the vertex group",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexGroup_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_VertexGroup;
	srna->cont.properties = {&rna_VertexGroup_rna_properties, &rna_VertexGroup_index};
	srna->identifier = "VertexGroup";
	srna->flag = 516;
	srna->name = "Vertex Group";
	srna->description = "Group of vertices, used for armature deform and other purposes";
	srna->translation_context = "*";
	srna->icon = 214;
	srna->nameproperty = &rna_VertexGroup_name;
	srna->iteratorproperty = &rna_VertexGroup_rna_properties;
	{
	static int rna_VertexGroup_add_index_default[1] = {
		0
	};
	rna_VertexGroup_add_index_ = {
		{&rna_VertexGroup_add_weight, 	nullptr,
		-1, "index", 131073, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"List of indices",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_VertexGroup_add_index_default
	};
	rna_VertexGroup_add_weight_ = {
		{&rna_VertexGroup_add_type, 	&rna_VertexGroup_add_index,
		-1, "weight", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Vertex weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	static const EnumPropertyItem rna_VertexGroup_add_type_items[4] = {
		{1, "REPLACE", 0, "Replace", "Replace"	},
		{2, "ADD", 0, "Add", "Add"	},
		{3, "SUBTRACT", 0, "Subtract", "Subtract"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_VertexGroup_add_type_ = {
		{nullptr, 	&rna_VertexGroup_add_weight,
		-1, "type", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Vertex assign mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_VertexGroup_add_type_items, 3, 1
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_VertexGroup_add_index, &rna_VertexGroup_add_type};
		func->identifier = "add";
		func->flag = 2064;
		func->description = "Add vertices to the group";
		func->call = VertexGroup_add_call;
		rna_VertexGroup_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static int rna_VertexGroup_remove_index_default[1] = {
		0
	};
	rna_VertexGroup_remove_index_ = {
		{nullptr, 	nullptr,
		-1, "index", 131073, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"List of indices",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_VertexGroup_remove_index_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_VertexGroup_remove_index, &rna_VertexGroup_remove_index};
		func->identifier = "remove";
		func->flag = 2064;
		func->description = "Remove vertices from the group";
		func->call = VertexGroup_remove_call;
		rna_VertexGroup_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_VertexGroup_weight_index_ = {
		{&rna_VertexGroup_weight_weight, 	nullptr,
		-1, "index", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Index",
		"The index of the vertex",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_VertexGroup_weight_weight_ = {
		{nullptr, 	&rna_VertexGroup_weight_index,
		-1, "weight", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Vertex weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_VertexGroup_weight_index, &rna_VertexGroup_weight_weight};
		func->identifier = "weight";
		func->flag = 2064;
		func->description = "Get a vertex weight from the group";
		func->call = VertexGroup_weight_call;
		func->c_ret = &rna_VertexGroup_weight_weight;
		rna_VertexGroup_weight_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Material Slot */
static CollectionPropertyRNA rna_MaterialSlot_rna_properties_;
PropertyRNA &rna_MaterialSlot_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaterialSlot_rna_properties_);

static PointerPropertyRNA rna_MaterialSlot_rna_type_;
PropertyRNA &rna_MaterialSlot_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaterialSlot_rna_type_);

static EnumPropertyRNA rna_MaterialSlot_link_;
PropertyRNA &rna_MaterialSlot_link = reinterpret_cast<PropertyRNA &>(rna_MaterialSlot_link_);

static PointerPropertyRNA rna_MaterialSlot_material_;
PropertyRNA &rna_MaterialSlot_material = reinterpret_cast<PropertyRNA &>(rna_MaterialSlot_material_);

static IntPropertyRNA rna_MaterialSlot_slot_index_;
PropertyRNA &rna_MaterialSlot_slot_index = reinterpret_cast<PropertyRNA &>(rna_MaterialSlot_slot_index_);

static StringPropertyRNA rna_MaterialSlot_name_;
PropertyRNA &rna_MaterialSlot_name = reinterpret_cast<PropertyRNA &>(rna_MaterialSlot_name_);

StructRNA *RNA_MaterialSlot;
void register_struct_MaterialSlot(BlenderRNA &brna)
{
	rna_MaterialSlot_rna_properties_ = {
		{&rna_MaterialSlot_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialSlot_rna_properties_begin, MaterialSlot_rna_properties_next, MaterialSlot_rna_properties_end, MaterialSlot_rna_properties_get, nullptr, nullptr, MaterialSlot_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaterialSlot_rna_type_ = {
		{&rna_MaterialSlot_link, 	&rna_MaterialSlot_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialSlot_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_MaterialSlot_link_items[3] = {
		{1, "OBJECT", 158, "Object", ""	},
		{0, "DATA", 187, "Data", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaterialSlot_link_ = {
		{&rna_MaterialSlot_material, 	&rna_MaterialSlot_rna_type,
		-1, "link", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Link",
		"Link material to object or the object\'s data",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialSlot_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialSlot_link_get, MaterialSlot_link_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaterialSlot_link_items, 2, 0
	};

	rna_MaterialSlot_material_ = {
		{&rna_MaterialSlot_slot_index, 	&rna_MaterialSlot_link,
		-1, "material", 8388801, 1, 0, 64, 0, PropertyPathTemplateType(0), "Material",
		"Material data-block used by this material slot",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialSlot_update, 102170624, rna_MaterialSlot_material_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialSlot_material_get, MaterialSlot_material_set, nullptr, rna_MaterialSlot_material_poll,RNA_Material
	};

	rna_MaterialSlot_slot_index_ = {
		{&rna_MaterialSlot_name, 	&rna_MaterialSlot_material,
		-1, "slot_index", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "slot_index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialSlot_slot_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialSlot_name_ = {
		{nullptr, 	&rna_MaterialSlot_slot_index,
		-1, "name", 262144, 4, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Material slot name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialSlot_name_get, MaterialSlot_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_MaterialSlot;
	srna->cont.properties = {&rna_MaterialSlot_rna_properties, &rna_MaterialSlot_name};
	srna->identifier = "MaterialSlot";
	srna->flag = 516;
	srna->name = "Material Slot";
	srna->description = "Material slot in an object";
	srna->translation_context = "*";
	srna->icon = 199;
	srna->nameproperty = &rna_MaterialSlot_name;
	srna->iteratorproperty = &rna_MaterialSlot_rna_properties;
	srna->path = rna_MaterialSlot_path;
};

/* Object Display */
static CollectionPropertyRNA rna_ObjectDisplay_rna_properties_;
PropertyRNA &rna_ObjectDisplay_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ObjectDisplay_rna_properties_);

static PointerPropertyRNA rna_ObjectDisplay_rna_type_;
PropertyRNA &rna_ObjectDisplay_rna_type = reinterpret_cast<PropertyRNA &>(rna_ObjectDisplay_rna_type_);

static BoolPropertyRNA rna_ObjectDisplay_show_shadows_;
PropertyRNA &rna_ObjectDisplay_show_shadows = reinterpret_cast<PropertyRNA &>(rna_ObjectDisplay_show_shadows_);

StructRNA *RNA_ObjectDisplay;
void register_struct_ObjectDisplay(BlenderRNA &brna)
{
	rna_ObjectDisplay_rna_properties_ = {
		{&rna_ObjectDisplay_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectDisplay_rna_properties_begin, ObjectDisplay_rna_properties_next, ObjectDisplay_rna_properties_end, ObjectDisplay_rna_properties_get, nullptr, nullptr, ObjectDisplay_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ObjectDisplay_rna_type_ = {
		{&rna_ObjectDisplay_show_shadows, 	&rna_ObjectDisplay_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectDisplay_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ObjectDisplay_show_shadows_ = {
		{nullptr, 	&rna_ObjectDisplay_rna_type,
		-1, "show_shadows", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shadow",
		"Object cast shadows in the 3D viewport",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectDisplay_show_shadows_get, ObjectDisplay_show_shadows_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	StructRNA *srna = RNA_ObjectDisplay;
	srna->cont.properties = {&rna_ObjectDisplay_rna_properties, &rna_ObjectDisplay_show_shadows};
	srna->identifier = "ObjectDisplay";
	srna->flag = 516;
	srna->name = "Object Display";
	srna->description = "Object display settings for 3D viewport";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ObjectDisplay_rna_properties;
	srna->nested = RNA_Object;
	srna->path = rna_ObjectDisplay_path;
};

/* Object Line Art */
static CollectionPropertyRNA rna_ObjectLineArt_rna_properties_;
PropertyRNA &rna_ObjectLineArt_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ObjectLineArt_rna_properties_);

static PointerPropertyRNA rna_ObjectLineArt_rna_type_;
PropertyRNA &rna_ObjectLineArt_rna_type = reinterpret_cast<PropertyRNA &>(rna_ObjectLineArt_rna_type_);

static EnumPropertyRNA rna_ObjectLineArt_usage_;
PropertyRNA &rna_ObjectLineArt_usage = reinterpret_cast<PropertyRNA &>(rna_ObjectLineArt_usage_);

static BoolPropertyRNA rna_ObjectLineArt_use_crease_override_;
PropertyRNA &rna_ObjectLineArt_use_crease_override = reinterpret_cast<PropertyRNA &>(rna_ObjectLineArt_use_crease_override_);

static FloatPropertyRNA rna_ObjectLineArt_crease_threshold_;
PropertyRNA &rna_ObjectLineArt_crease_threshold = reinterpret_cast<PropertyRNA &>(rna_ObjectLineArt_crease_threshold_);

static BoolPropertyRNA rna_ObjectLineArt_use_intersection_priority_override_;
PropertyRNA &rna_ObjectLineArt_use_intersection_priority_override = reinterpret_cast<PropertyRNA &>(rna_ObjectLineArt_use_intersection_priority_override_);

static IntPropertyRNA rna_ObjectLineArt_intersection_priority_;
PropertyRNA &rna_ObjectLineArt_intersection_priority = reinterpret_cast<PropertyRNA &>(rna_ObjectLineArt_intersection_priority_);

StructRNA *RNA_ObjectLineArt;
void register_struct_ObjectLineArt(BlenderRNA &brna)
{
	rna_ObjectLineArt_rna_properties_ = {
		{&rna_ObjectLineArt_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectLineArt_rna_properties_begin, ObjectLineArt_rna_properties_next, ObjectLineArt_rna_properties_end, ObjectLineArt_rna_properties_get, nullptr, nullptr, ObjectLineArt_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ObjectLineArt_rna_type_ = {
		{&rna_ObjectLineArt_usage, 	&rna_ObjectLineArt_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectLineArt_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_ObjectLineArt_usage_items[8] = {
		{0, "INHERIT", 0, "Inherit", "Use settings from the parent collection"	},
		{1, "INCLUDE", 0, "Include", "Generate feature lines for this object\'s data"	},
		{2, "OCCLUSION_ONLY", 0, "Occlusion Only", "Only use the object data to produce occlusion"	},
		{4, "EXCLUDE", 0, "Exclude", "Don\'t use this object for Line Art rendering"	},
		{8, "INTERSECTION_ONLY", 0, "Intersection Only", "Only generate intersection lines for this collection"	},
		{16, "NO_INTERSECTION", 0, "No Intersection", "Include this object but do not generate intersection lines"	},
		{32, "FORCE_INTERSECTION", 0, "Force Intersection", "Generate intersection lines even with objects that disabled intersection"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ObjectLineArt_usage_ = {
		{&rna_ObjectLineArt_use_crease_override, 	&rna_ObjectLineArt_rna_type,
		-1, "usage", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Usage",
		"How to use this object in Line Art calculation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_object_lineart_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ObjectLineArt, usage), RawPropertyType(1), nullptr},
		ObjectLineArt_usage_get, ObjectLineArt_usage_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ObjectLineArt_usage_items, 7, 0
	};

	rna_ObjectLineArt_use_crease_override_ = {
		{&rna_ObjectLineArt_crease_threshold, 	&rna_ObjectLineArt_usage,
		-1, "use_crease_override", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Crease",
		"Use this object\'s crease setting to overwrite scene global",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_object_lineart_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectLineArt_use_crease_override_get, ObjectLineArt_use_crease_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ObjectLineArt_crease_threshold_ = {
		{&rna_ObjectLineArt_use_intersection_priority_override, 	&rna_ObjectLineArt_use_crease_override,
		-1, "crease_threshold", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Crease",
		"Angles smaller than this will be treated as creases",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_object_lineart_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ObjectLineArt, crease_threshold), RawPropertyType(5), nullptr},
		ObjectLineArt_crease_threshold_get, ObjectLineArt_crease_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 0.0099999998f, 1, nullptr, nullptr, 2.4434609413f, nullptr
	};

	rna_ObjectLineArt_use_intersection_priority_override_ = {
		{&rna_ObjectLineArt_intersection_priority, 	&rna_ObjectLineArt_crease_threshold,
		-1, "use_intersection_priority_override", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Intersection Priority",
		"Use this object\'s intersection priority to override collection setting",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_object_lineart_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectLineArt_use_intersection_priority_override_get, ObjectLineArt_use_intersection_priority_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ObjectLineArt_intersection_priority_ = {
		{nullptr, 	&rna_ObjectLineArt_use_intersection_priority_override,
		-1, "intersection_priority", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Intersection Priority",
		"The intersection line will be included into the object with the higher intersection priority value",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_object_lineart_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ObjectLineArt, intersection_priority), RawPropertyType(2), nullptr},
		ObjectLineArt_intersection_priority_get, ObjectLineArt_intersection_priority_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ObjectLineArt;
	srna->cont.properties = {&rna_ObjectLineArt_rna_properties, &rna_ObjectLineArt_intersection_priority};
	srna->identifier = "ObjectLineArt";
	srna->flag = 516;
	srna->name = "Object Line Art";
	srna->description = "Object Line Art settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ObjectLineArt_rna_properties;
	srna->path = rna_ObjectLineArt_path;
};

/* Object Light Linking */
static CollectionPropertyRNA rna_ObjectLightLinking_rna_properties_;
PropertyRNA &rna_ObjectLightLinking_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ObjectLightLinking_rna_properties_);

static PointerPropertyRNA rna_ObjectLightLinking_rna_type_;
PropertyRNA &rna_ObjectLightLinking_rna_type = reinterpret_cast<PropertyRNA &>(rna_ObjectLightLinking_rna_type_);

static PointerPropertyRNA rna_ObjectLightLinking_receiver_collection_;
PropertyRNA &rna_ObjectLightLinking_receiver_collection = reinterpret_cast<PropertyRNA &>(rna_ObjectLightLinking_receiver_collection_);

static PointerPropertyRNA rna_ObjectLightLinking_blocker_collection_;
PropertyRNA &rna_ObjectLightLinking_blocker_collection = reinterpret_cast<PropertyRNA &>(rna_ObjectLightLinking_blocker_collection_);

StructRNA *RNA_ObjectLightLinking;
void register_struct_ObjectLightLinking(BlenderRNA &brna)
{
	rna_ObjectLightLinking_rna_properties_ = {
		{&rna_ObjectLightLinking_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectLightLinking_rna_properties_begin, ObjectLightLinking_rna_properties_next, ObjectLightLinking_rna_properties_end, ObjectLightLinking_rna_properties_get, nullptr, nullptr, ObjectLightLinking_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ObjectLightLinking_rna_type_ = {
		{&rna_ObjectLightLinking_receiver_collection, 	&rna_ObjectLightLinking_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectLightLinking_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ObjectLightLinking_receiver_collection_ = {
		{&rna_ObjectLightLinking_blocker_collection, 	&rna_ObjectLightLinking_rna_type,
		-1, "receiver_collection", 8388801, 1, 0, 64, 0, PropertyPathTemplateType(0), "Receiver Collection",
		"Collection which defines light linking relation of this emitter",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightLinking_collection_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectLightLinking_receiver_collection_get, ObjectLightLinking_receiver_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_ObjectLightLinking_blocker_collection_ = {
		{nullptr, 	&rna_ObjectLightLinking_receiver_collection,
		-1, "blocker_collection", 8388801, 1, 0, 64, 0, PropertyPathTemplateType(0), "Blocker Collection",
		"Collection which defines objects which block light from this emitter",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LightLinking_collection_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectLightLinking_blocker_collection_get, ObjectLightLinking_blocker_collection_set, nullptr, nullptr,RNA_Collection
	};

	StructRNA *srna = RNA_ObjectLightLinking;
	srna->cont.properties = {&rna_ObjectLightLinking_rna_properties, &rna_ObjectLightLinking_blocker_collection};
	srna->identifier = "ObjectLightLinking";
	srna->flag = 516;
	srna->name = "Object Light Linking";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ObjectLightLinking_rna_properties;
	srna->nested = RNA_Object;
	srna->path = rna_ObjectLightLinking_path;
};


}  // namespace blender
