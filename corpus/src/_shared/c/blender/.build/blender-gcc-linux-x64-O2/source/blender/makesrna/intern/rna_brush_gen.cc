
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

#include "rna_brush.cc"

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

extern PropertyRNA &rna_Brush_has_unsaved_changes;
extern PropertyRNA &rna_Brush_blend;
extern PropertyRNA &rna_Brush_sculpt_brush_type;
extern PropertyRNA &rna_Brush_vertex_brush_type;
extern PropertyRNA &rna_Brush_weight_brush_type;
extern PropertyRNA &rna_Brush_image_brush_type;
extern PropertyRNA &rna_Brush_gpencil_brush_type;
extern PropertyRNA &rna_Brush_gpencil_vertex_brush_type;
extern PropertyRNA &rna_Brush_gpencil_sculpt_brush_type;
extern PropertyRNA &rna_Brush_gpencil_weight_brush_type;
extern PropertyRNA &rna_Brush_curves_sculpt_brush_type;
extern PropertyRNA &rna_Brush_direction;
extern PropertyRNA &rna_Brush_stroke_method;
extern PropertyRNA &rna_Brush_sculpt_plane;
extern PropertyRNA &rna_Brush_mask_tool;
extern PropertyRNA &rna_Brush_curve_distance_falloff_preset;
extern PropertyRNA &rna_Brush_deform_target;
extern PropertyRNA &rna_Brush_elastic_deform_type;
extern PropertyRNA &rna_Brush_snake_hook_deform_type;
extern PropertyRNA &rna_Brush_plane_inversion_mode;
extern PropertyRNA &rna_Brush_project_ray_direction_type;
extern PropertyRNA &rna_Brush_minimum_distance;
extern PropertyRNA &rna_Brush_cloth_deform_type;
extern PropertyRNA &rna_Brush_cloth_force_falloff_type;
extern PropertyRNA &rna_Brush_cloth_simulation_area_type;
extern PropertyRNA &rna_Brush_boundary_falloff_type;
extern PropertyRNA &rna_Brush_smooth_deform_type;
extern PropertyRNA &rna_Brush_smear_deform_type;
extern PropertyRNA &rna_Brush_slide_deform_type;
extern PropertyRNA &rna_Brush_boundary_deform_type;
extern PropertyRNA &rna_Brush_pose_deform_type;
extern PropertyRNA &rna_Brush_pose_origin_type;
extern PropertyRNA &rna_Brush_jitter_unit;
extern PropertyRNA &rna_Brush_falloff_shape;
extern PropertyRNA &rna_Brush_size;
extern PropertyRNA &rna_Brush_unprojected_size;
extern PropertyRNA &rna_Brush_input_samples;
extern PropertyRNA &rna_Brush_jitter;
extern PropertyRNA &rna_Brush_jitter_absolute;
extern PropertyRNA &rna_Brush_spacing;
extern PropertyRNA &rna_Brush_grad_spacing;
extern PropertyRNA &rna_Brush_use_color_jitter;
extern PropertyRNA &rna_Brush_hue_jitter;
extern PropertyRNA &rna_Brush_saturation_jitter;
extern PropertyRNA &rna_Brush_value_jitter;
extern PropertyRNA &rna_Brush_use_stroke_random_hue;
extern PropertyRNA &rna_Brush_use_stroke_random_sat;
extern PropertyRNA &rna_Brush_use_stroke_random_val;
extern PropertyRNA &rna_Brush_use_random_press_hue;
extern PropertyRNA &rna_Brush_use_random_press_sat;
extern PropertyRNA &rna_Brush_use_random_press_val;
extern PropertyRNA &rna_Brush_curve_random_hue;
extern PropertyRNA &rna_Brush_curve_random_saturation;
extern PropertyRNA &rna_Brush_curve_random_value;
extern PropertyRNA &rna_Brush_curve_size;
extern PropertyRNA &rna_Brush_curve_strength;
extern PropertyRNA &rna_Brush_curve_jitter;
extern PropertyRNA &rna_Brush_smooth_stroke_radius;
extern PropertyRNA &rna_Brush_smooth_stroke_factor;
extern PropertyRNA &rna_Brush_rate;
extern PropertyRNA &rna_Brush_color;
extern PropertyRNA &rna_Brush_secondary_color;
extern PropertyRNA &rna_Brush_weight;
extern PropertyRNA &rna_Brush_strength;
extern PropertyRNA &rna_Brush_flow;
extern PropertyRNA &rna_Brush_wet_mix;
extern PropertyRNA &rna_Brush_wet_persistence;
extern PropertyRNA &rna_Brush_density;
extern PropertyRNA &rna_Brush_tip_scale_x;
extern PropertyRNA &rna_Brush_use_hardness_pressure;
extern PropertyRNA &rna_Brush_invert_hardness_pressure;
extern PropertyRNA &rna_Brush_use_flow_pressure;
extern PropertyRNA &rna_Brush_invert_flow_pressure;
extern PropertyRNA &rna_Brush_use_wet_mix_pressure;
extern PropertyRNA &rna_Brush_invert_wet_mix_pressure;
extern PropertyRNA &rna_Brush_use_wet_persistence_pressure;
extern PropertyRNA &rna_Brush_invert_wet_persistence_pressure;
extern PropertyRNA &rna_Brush_use_density_pressure;
extern PropertyRNA &rna_Brush_invert_density_pressure;
extern PropertyRNA &rna_Brush_dash_ratio;
extern PropertyRNA &rna_Brush_dash_samples;
extern PropertyRNA &rna_Brush_plane_offset;
extern PropertyRNA &rna_Brush_plane_trim;
extern PropertyRNA &rna_Brush_height;
extern PropertyRNA &rna_Brush_plane_depth;
extern PropertyRNA &rna_Brush_plane_height;
extern PropertyRNA &rna_Brush_stabilize_normal;
extern PropertyRNA &rna_Brush_stabilize_plane;
extern PropertyRNA &rna_Brush_texture_sample_bias;
extern PropertyRNA &rna_Brush_use_color_as_displacement;
extern PropertyRNA &rna_Brush_normal_weight;
extern PropertyRNA &rna_Brush_elastic_deform_volume_preservation;
extern PropertyRNA &rna_Brush_rake_factor;
extern PropertyRNA &rna_Brush_crease_pinch_factor;
extern PropertyRNA &rna_Brush_pose_offset;
extern PropertyRNA &rna_Brush_disconnected_distance_max;
extern PropertyRNA &rna_Brush_boundary_offset;
extern PropertyRNA &rna_Brush_surface_smooth_shape_preservation;
extern PropertyRNA &rna_Brush_surface_smooth_current_vertex;
extern PropertyRNA &rna_Brush_surface_smooth_iterations;
extern PropertyRNA &rna_Brush_multiplane_scrape_angle;
extern PropertyRNA &rna_Brush_pose_smooth_iterations;
extern PropertyRNA &rna_Brush_pose_ik_segments;
extern PropertyRNA &rna_Brush_tip_roundness;
extern PropertyRNA &rna_Brush_cloth_mass;
extern PropertyRNA &rna_Brush_cloth_damping;
extern PropertyRNA &rna_Brush_cloth_sim_limit;
extern PropertyRNA &rna_Brush_cloth_sim_falloff;
extern PropertyRNA &rna_Brush_cloth_constraint_softbody_strength;
extern PropertyRNA &rna_Brush_hardness;
extern PropertyRNA &rna_Brush_auto_smooth_factor;
extern PropertyRNA &rna_Brush_topology_rake_factor;
extern PropertyRNA &rna_Brush_tilt_strength_factor;
extern PropertyRNA &rna_Brush_normal_radius_factor;
extern PropertyRNA &rna_Brush_area_radius_factor;
extern PropertyRNA &rna_Brush_wet_paint_radius_factor;
extern PropertyRNA &rna_Brush_stencil_pos;
extern PropertyRNA &rna_Brush_stencil_dimension;
extern PropertyRNA &rna_Brush_mask_stencil_pos;
extern PropertyRNA &rna_Brush_mask_stencil_dimension;
extern PropertyRNA &rna_Brush_sharp_threshold;
extern PropertyRNA &rna_Brush_fill_threshold;
extern PropertyRNA &rna_Brush_blur_kernel_radius;
extern PropertyRNA &rna_Brush_blur_mode;
extern PropertyRNA &rna_Brush_falloff_angle;
extern PropertyRNA &rna_Brush_use_original_normal;
extern PropertyRNA &rna_Brush_use_original_plane;
extern PropertyRNA &rna_Brush_use_scene_spacing;
extern PropertyRNA &rna_Brush_use_grab_active_vertex;
extern PropertyRNA &rna_Brush_use_grab_silhouette;
extern PropertyRNA &rna_Brush_use_paint_antialiasing;
extern PropertyRNA &rna_Brush_use_multiplane_scrape_dynamic;
extern PropertyRNA &rna_Brush_show_multiplane_scrape_planes_preview;
extern PropertyRNA &rna_Brush_use_pose_ik_anchored;
extern PropertyRNA &rna_Brush_use_pose_lock_rotation;
extern PropertyRNA &rna_Brush_use_connected_only;
extern PropertyRNA &rna_Brush_use_cloth_pin_simulation_boundary;
extern PropertyRNA &rna_Brush_use_cloth_collision;
extern PropertyRNA &rna_Brush_invert_to_scrape_fill;
extern PropertyRNA &rna_Brush_use_pressure_strength;
extern PropertyRNA &rna_Brush_use_offset_pressure;
extern PropertyRNA &rna_Brush_use_pressure_area_radius;
extern PropertyRNA &rna_Brush_use_pressure_size;
extern PropertyRNA &rna_Brush_use_pressure_jitter;
extern PropertyRNA &rna_Brush_use_pressure_spacing;
extern PropertyRNA &rna_Brush_use_pressure_masking;
extern PropertyRNA &rna_Brush_use_inverse_smooth_pressure;
extern PropertyRNA &rna_Brush_use_plane_trim;
extern PropertyRNA &rna_Brush_use_frontface;
extern PropertyRNA &rna_Brush_use_frontface_falloff;
extern PropertyRNA &rna_Brush_use_smooth_stroke;
extern PropertyRNA &rna_Brush_use_persistent;
extern PropertyRNA &rna_Brush_use_bidirectional;
extern PropertyRNA &rna_Brush_use_accumulate;
extern PropertyRNA &rna_Brush_use_space_attenuation;
extern PropertyRNA &rna_Brush_use_adaptive_space;
extern PropertyRNA &rna_Brush_use_locked_size;
extern PropertyRNA &rna_Brush_color_type;
extern PropertyRNA &rna_Brush_use_edge_to_edge;
extern PropertyRNA &rna_Brush_use_alpha;
extern PropertyRNA &rna_Brush_curve_distance_falloff;
extern PropertyRNA &rna_Brush_paint_curve;
extern PropertyRNA &rna_Brush_gradient;
extern PropertyRNA &rna_Brush_gradient_stroke_mode;
extern PropertyRNA &rna_Brush_gradient_fill_mode;
extern PropertyRNA &rna_Brush_use_primary_overlay;
extern PropertyRNA &rna_Brush_use_secondary_overlay;
extern PropertyRNA &rna_Brush_use_cursor_overlay;
extern PropertyRNA &rna_Brush_use_cursor_overlay_override;
extern PropertyRNA &rna_Brush_use_primary_overlay_override;
extern PropertyRNA &rna_Brush_use_secondary_overlay_override;
extern PropertyRNA &rna_Brush_use_paint_sculpt;
extern PropertyRNA &rna_Brush_use_paint_uv_sculpt;
extern PropertyRNA &rna_Brush_use_paint_vertex;
extern PropertyRNA &rna_Brush_use_paint_weight;
extern PropertyRNA &rna_Brush_use_paint_image;
extern PropertyRNA &rna_Brush_use_paint_grease_pencil;
extern PropertyRNA &rna_Brush_use_vertex_grease_pencil;
extern PropertyRNA &rna_Brush_use_paint_sculpt_curves;
extern PropertyRNA &rna_Brush_texture_slot;
extern PropertyRNA &rna_Brush_texture;
extern PropertyRNA &rna_Brush_mask_texture_slot;
extern PropertyRNA &rna_Brush_mask_texture;
extern PropertyRNA &rna_Brush_texture_overlay_alpha;
extern PropertyRNA &rna_Brush_mask_overlay_alpha;
extern PropertyRNA &rna_Brush_cursor_overlay_alpha;
extern PropertyRNA &rna_Brush_cursor_color_add;
extern PropertyRNA &rna_Brush_cursor_color_subtract;
extern PropertyRNA &rna_Brush_brush_capabilities;
extern PropertyRNA &rna_Brush_sculpt_capabilities;
extern PropertyRNA &rna_Brush_image_paint_capabilities;
extern PropertyRNA &rna_Brush_vertex_paint_capabilities;
extern PropertyRNA &rna_Brush_weight_paint_capabilities;
extern PropertyRNA &rna_Brush_gpencil_settings;
extern PropertyRNA &rna_Brush_curves_sculpt_settings;
extern PropertyRNA &rna_Brush_mesh_automasking_settings;

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



extern PropertyRNA &rna_BrushCapabilities_rna_properties;
extern PropertyRNA &rna_BrushCapabilities_rna_type;
extern PropertyRNA &rna_BrushCapabilities_has_overlay;
extern PropertyRNA &rna_BrushCapabilities_has_random_texture_angle;
extern PropertyRNA &rna_BrushCapabilities_has_spacing;
extern PropertyRNA &rna_BrushCapabilities_has_smooth_stroke;


extern PropertyRNA &rna_BrushCapabilitiesSculpt_rna_properties;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_rna_type;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_accumulate;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_auto_smooth;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_normal_radius;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_hardness;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_tip_roundness;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_topology_rake;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_height;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_plane_depth;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_plane_height;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_jitter;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_normal_weight;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_rake_factor;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_persistence;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_pinch_factor;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_plane_offset;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_random_texture_angle;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_sculpt_plane;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_color;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_secondary_color;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_smooth_stroke;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_space_attenuation;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_strength_pressure;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_size_pressure;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_auto_smooth_pressure;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_hardness_pressure;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_direction;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_gravity;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_tilt;
extern PropertyRNA &rna_BrushCapabilitiesSculpt_has_dyntopo;


extern PropertyRNA &rna_BrushCapabilitiesImagePaint_rna_properties;
extern PropertyRNA &rna_BrushCapabilitiesImagePaint_rna_type;
extern PropertyRNA &rna_BrushCapabilitiesImagePaint_has_accumulate;
extern PropertyRNA &rna_BrushCapabilitiesImagePaint_has_space_attenuation;
extern PropertyRNA &rna_BrushCapabilitiesImagePaint_has_radius;
extern PropertyRNA &rna_BrushCapabilitiesImagePaint_has_color;


extern PropertyRNA &rna_BrushCapabilitiesVertexPaint_rna_properties;
extern PropertyRNA &rna_BrushCapabilitiesVertexPaint_rna_type;
extern PropertyRNA &rna_BrushCapabilitiesVertexPaint_has_color;


extern PropertyRNA &rna_BrushCapabilitiesWeightPaint_rna_properties;
extern PropertyRNA &rna_BrushCapabilitiesWeightPaint_rna_type;
extern PropertyRNA &rna_BrushCapabilitiesWeightPaint_has_weight;


extern PropertyRNA &rna_BrushGpencilSettings_rna_properties;
extern PropertyRNA &rna_BrushGpencilSettings_rna_type;
extern PropertyRNA &rna_BrushGpencilSettings_pen_strength;
extern PropertyRNA &rna_BrushGpencilSettings_pen_jitter;
extern PropertyRNA &rna_BrushGpencilSettings_random_pressure;
extern PropertyRNA &rna_BrushGpencilSettings_random_strength;
extern PropertyRNA &rna_BrushGpencilSettings_angle;
extern PropertyRNA &rna_BrushGpencilSettings_angle_factor;
extern PropertyRNA &rna_BrushGpencilSettings_pen_smooth_factor;
extern PropertyRNA &rna_BrushGpencilSettings_pen_smooth_steps;
extern PropertyRNA &rna_BrushGpencilSettings_pen_subdivision_steps;
extern PropertyRNA &rna_BrushGpencilSettings_simplify_factor;
extern PropertyRNA &rna_BrushGpencilSettings_simplify_pixel_threshold;
extern PropertyRNA &rna_BrushGpencilSettings_curve_sensitivity;
extern PropertyRNA &rna_BrushGpencilSettings_curve_strength;
extern PropertyRNA &rna_BrushGpencilSettings_curve_jitter;
extern PropertyRNA &rna_BrushGpencilSettings_curve_random_pressure;
extern PropertyRNA &rna_BrushGpencilSettings_curve_random_strength;
extern PropertyRNA &rna_BrushGpencilSettings_curve_random_uv;
extern PropertyRNA &rna_BrushGpencilSettings_curve_random_hue;
extern PropertyRNA &rna_BrushGpencilSettings_curve_random_saturation;
extern PropertyRNA &rna_BrushGpencilSettings_curve_random_value;
extern PropertyRNA &rna_BrushGpencilSettings_fill_threshold;
extern PropertyRNA &rna_BrushGpencilSettings_fill_factor;
extern PropertyRNA &rna_BrushGpencilSettings_fill_simplify_level;
extern PropertyRNA &rna_BrushGpencilSettings_uv_random;
extern PropertyRNA &rna_BrushGpencilSettings_hardness;
extern PropertyRNA &rna_BrushGpencilSettings_aspect;
extern PropertyRNA &rna_BrushGpencilSettings_input_samples;
extern PropertyRNA &rna_BrushGpencilSettings_active_smooth_factor;
extern PropertyRNA &rna_BrushGpencilSettings_eraser_strength_factor;
extern PropertyRNA &rna_BrushGpencilSettings_eraser_thickness_factor;
extern PropertyRNA &rna_BrushGpencilSettings_vertex_mode;
extern PropertyRNA &rna_BrushGpencilSettings_vertex_color_factor;
extern PropertyRNA &rna_BrushGpencilSettings_random_hue_factor;
extern PropertyRNA &rna_BrushGpencilSettings_random_saturation_factor;
extern PropertyRNA &rna_BrushGpencilSettings_random_value_factor;
extern PropertyRNA &rna_BrushGpencilSettings_extend_stroke_factor;
extern PropertyRNA &rna_BrushGpencilSettings_fill_extend_mode;
extern PropertyRNA &rna_BrushGpencilSettings_dilate;
extern PropertyRNA &rna_BrushGpencilSettings_outline_thickness_factor;
extern PropertyRNA &rna_BrushGpencilSettings_conversion_threshold;
extern PropertyRNA &rna_BrushGpencilSettings_use_pressure;
extern PropertyRNA &rna_BrushGpencilSettings_use_strength_pressure;
extern PropertyRNA &rna_BrushGpencilSettings_use_jitter_pressure;
extern PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_hue;
extern PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_sat;
extern PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_val;
extern PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_radius;
extern PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_strength;
extern PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_uv;
extern PropertyRNA &rna_BrushGpencilSettings_use_random_press_hue;
extern PropertyRNA &rna_BrushGpencilSettings_use_random_press_sat;
extern PropertyRNA &rna_BrushGpencilSettings_use_random_press_val;
extern PropertyRNA &rna_BrushGpencilSettings_use_random_press_radius;
extern PropertyRNA &rna_BrushGpencilSettings_use_random_press_strength;
extern PropertyRNA &rna_BrushGpencilSettings_use_random_press_uv;
extern PropertyRNA &rna_BrushGpencilSettings_stroke_type;
extern PropertyRNA &rna_BrushGpencilSettings_use_settings_stabilizer;
extern PropertyRNA &rna_BrushGpencilSettings_eraser_mode;
extern PropertyRNA &rna_BrushGpencilSettings_caps_type;
extern PropertyRNA &rna_BrushGpencilSettings_fill_draw_mode;
extern PropertyRNA &rna_BrushGpencilSettings_fill_layer_mode;
extern PropertyRNA &rna_BrushGpencilSettings_fill_direction;
extern PropertyRNA &rna_BrushGpencilSettings_fill_solver;
extern PropertyRNA &rna_BrushGpencilSettings_fill_gap_factor;
extern PropertyRNA &rna_BrushGpencilSettings_pin_draw_mode;
extern PropertyRNA &rna_BrushGpencilSettings_brush_draw_mode;
extern PropertyRNA &rna_BrushGpencilSettings_use_trim;
extern PropertyRNA &rna_BrushGpencilSettings_use_settings_outline;
extern PropertyRNA &rna_BrushGpencilSettings_use_edit_position;
extern PropertyRNA &rna_BrushGpencilSettings_use_edit_strength;
extern PropertyRNA &rna_BrushGpencilSettings_use_edit_thickness;
extern PropertyRNA &rna_BrushGpencilSettings_use_edit_uv;
extern PropertyRNA &rna_BrushGpencilSettings_material;
extern PropertyRNA &rna_BrushGpencilSettings_material_alt;
extern PropertyRNA &rna_BrushGpencilSettings_show_fill_boundary;
extern PropertyRNA &rna_BrushGpencilSettings_show_fill_extend;
extern PropertyRNA &rna_BrushGpencilSettings_use_collide_strokes;
extern PropertyRNA &rna_BrushGpencilSettings_show_fill;
extern PropertyRNA &rna_BrushGpencilSettings_use_auto_remove_fill_guides;
extern PropertyRNA &rna_BrushGpencilSettings_fill_internal_gaps;
extern PropertyRNA &rna_BrushGpencilSettings_curve_type;
extern PropertyRNA &rna_BrushGpencilSettings_use_fill_limit;
extern PropertyRNA &rna_BrushGpencilSettings_use_settings_postprocess;
extern PropertyRNA &rna_BrushGpencilSettings_use_settings_random;
extern PropertyRNA &rna_BrushGpencilSettings_use_material_pin;
extern PropertyRNA &rna_BrushGpencilSettings_show_lasso;
extern PropertyRNA &rna_BrushGpencilSettings_use_occlude_eraser;
extern PropertyRNA &rna_BrushGpencilSettings_use_keep_caps_eraser;
extern PropertyRNA &rna_BrushGpencilSettings_use_active_layer_only;


extern PropertyRNA &rna_BrushCurvesSculptSettings_rna_properties;
extern PropertyRNA &rna_BrushCurvesSculptSettings_rna_type;
extern PropertyRNA &rna_BrushCurvesSculptSettings_add_amount;
extern PropertyRNA &rna_BrushCurvesSculptSettings_points_per_curve;
extern PropertyRNA &rna_BrushCurvesSculptSettings_use_uniform_scale;
extern PropertyRNA &rna_BrushCurvesSculptSettings_minimum_length;
extern PropertyRNA &rna_BrushCurvesSculptSettings_use_length_interpolate;
extern PropertyRNA &rna_BrushCurvesSculptSettings_use_radius_interpolate;
extern PropertyRNA &rna_BrushCurvesSculptSettings_use_point_count_interpolate;
extern PropertyRNA &rna_BrushCurvesSculptSettings_use_shape_interpolate;
extern PropertyRNA &rna_BrushCurvesSculptSettings_curve_length;
extern PropertyRNA &rna_BrushCurvesSculptSettings_minimum_distance;
extern PropertyRNA &rna_BrushCurvesSculptSettings_curve_radius;
extern PropertyRNA &rna_BrushCurvesSculptSettings_density_add_attempts;
extern PropertyRNA &rna_BrushCurvesSculptSettings_density_mode;
extern PropertyRNA &rna_BrushCurvesSculptSettings_curve_parameter_falloff;


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

extern PropertyRNA &rna_BrushTextureSlot_angle;
extern PropertyRNA &rna_BrushTextureSlot_map_mode;
extern PropertyRNA &rna_BrushTextureSlot_mask_map_mode;
extern PropertyRNA &rna_BrushTextureSlot_use_rake;
extern PropertyRNA &rna_BrushTextureSlot_use_random;
extern PropertyRNA &rna_BrushTextureSlot_random_angle;
extern PropertyRNA &rna_BrushTextureSlot_has_texture_angle_source;
extern PropertyRNA &rna_BrushTextureSlot_has_random_texture_angle;
extern PropertyRNA &rna_BrushTextureSlot_has_texture_angle;


extern PropertyRNA &rna_PropertyGroup_rna_properties;
extern PropertyRNA &rna_PropertyGroup_rna_type;
extern PropertyRNA &rna_PropertyGroup_name;

extern PropertyRNA &rna_OperatorStrokeElement_location;
extern PropertyRNA &rna_OperatorStrokeElement_mouse;
extern PropertyRNA &rna_OperatorStrokeElement_mouse_event;
extern PropertyRNA &rna_OperatorStrokeElement_pressure;
extern PropertyRNA &rna_OperatorStrokeElement_size;
extern PropertyRNA &rna_OperatorStrokeElement_x_tilt;
extern PropertyRNA &rna_OperatorStrokeElement_y_tilt;
extern PropertyRNA &rna_OperatorStrokeElement_time;
extern PropertyRNA &rna_OperatorStrokeElement_is_start;

extern FunctionRNA *rna_PropertyGroup_bl_system_properties_get_func;
extern PropertyRNA &rna_PropertyGroup_bl_system_properties_get_do_create;
extern PropertyRNA &rna_PropertyGroup_bl_system_properties_get_system_properties;


bool Brush_has_unsaved_changes_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (bool)(data->has_unsaved_changes);
}

int Brush_blend_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->blend);
}

void Brush_blend_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->blend = (std::remove_reference_t<decltype(data->blend)>)value;
}

int Brush_sculpt_brush_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->sculpt_brush_type);
}

void Brush_sculpt_brush_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->sculpt_brush_type = (std::remove_reference_t<decltype(data->sculpt_brush_type)>)value;
}

int Brush_vertex_brush_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->vertex_brush_type);
}

void Brush_vertex_brush_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->vertex_brush_type = (std::remove_reference_t<decltype(data->vertex_brush_type)>)value;
}

int Brush_weight_brush_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->weight_brush_type);
}

void Brush_weight_brush_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->weight_brush_type = (std::remove_reference_t<decltype(data->weight_brush_type)>)value;
}

int Brush_image_brush_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->image_brush_type);
}

void Brush_image_brush_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->image_brush_type = (std::remove_reference_t<decltype(data->image_brush_type)>)value;
}

int Brush_gpencil_brush_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_brush_type);
}

void Brush_gpencil_brush_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gpencil_brush_type = (std::remove_reference_t<decltype(data->gpencil_brush_type)>)value;
}

int Brush_gpencil_vertex_brush_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_vertex_brush_type);
}

void Brush_gpencil_vertex_brush_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gpencil_vertex_brush_type = (std::remove_reference_t<decltype(data->gpencil_vertex_brush_type)>)value;
}

int Brush_gpencil_sculpt_brush_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_sculpt_brush_type);
}

void Brush_gpencil_sculpt_brush_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gpencil_sculpt_brush_type = (std::remove_reference_t<decltype(data->gpencil_sculpt_brush_type)>)value;
}

int Brush_gpencil_weight_brush_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_weight_brush_type);
}

void Brush_gpencil_weight_brush_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gpencil_weight_brush_type = (std::remove_reference_t<decltype(data->gpencil_weight_brush_type)>)value;
}

int Brush_curves_sculpt_brush_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->curves_sculpt_brush_type);
}

void Brush_curves_sculpt_brush_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->curves_sculpt_brush_type = (std::remove_reference_t<decltype(data->curves_sculpt_brush_type)>)value;
}

int Brush_direction_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (uint64_t(data->flag) & 512);
}

void Brush_direction_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

int Brush_stroke_method_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->stroke_method);
}

void Brush_stroke_method_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->stroke_method = (std::remove_reference_t<decltype(data->stroke_method)>)value;
}

int Brush_sculpt_plane_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->sculpt_plane);
}

void Brush_sculpt_plane_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->sculpt_plane = (std::remove_reference_t<decltype(data->sculpt_plane)>)value;
}

int Brush_mask_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->mask_tool);
}

void Brush_mask_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->mask_tool = (std::remove_reference_t<decltype(data->mask_tool)>)value;
}

int Brush_curve_distance_falloff_preset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->curve_distance_falloff_preset);
}

void Brush_curve_distance_falloff_preset_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->curve_distance_falloff_preset = (std::remove_reference_t<decltype(data->curve_distance_falloff_preset)>)value;
}

int Brush_deform_target_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->deform_target);
}

void Brush_deform_target_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->deform_target = (std::remove_reference_t<decltype(data->deform_target)>)value;
}

int Brush_elastic_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->elastic_deform_type);
}

void Brush_elastic_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->elastic_deform_type = (std::remove_reference_t<decltype(data->elastic_deform_type)>)value;
}

int Brush_snake_hook_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->snake_hook_deform_type);
}

void Brush_snake_hook_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->snake_hook_deform_type = (std::remove_reference_t<decltype(data->snake_hook_deform_type)>)value;
}

int Brush_plane_inversion_mode_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->plane_inversion_mode);
}

void Brush_plane_inversion_mode_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->plane_inversion_mode = (std::remove_reference_t<decltype(data->plane_inversion_mode)>)value;
}

int Brush_project_ray_direction_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->project_ray_direction_type);
}

void Brush_project_ray_direction_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->project_ray_direction_type = (std::remove_reference_t<decltype(data->project_ray_direction_type)>)value;
}

float Brush_minimum_distance_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->minimum_distance);
}

void Brush_minimum_distance_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->minimum_distance = (std::remove_reference_t<decltype(data->minimum_distance)>)std::clamp(value, 0.0f, 10.0f);
}

int Brush_cloth_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cloth_deform_type);
}

void Brush_cloth_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_deform_type = (std::remove_reference_t<decltype(data->cloth_deform_type)>)value;
}

int Brush_cloth_force_falloff_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cloth_force_falloff_type);
}

void Brush_cloth_force_falloff_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_force_falloff_type = (std::remove_reference_t<decltype(data->cloth_force_falloff_type)>)value;
}

int Brush_cloth_simulation_area_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cloth_simulation_area_type);
}

void Brush_cloth_simulation_area_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_simulation_area_type = (std::remove_reference_t<decltype(data->cloth_simulation_area_type)>)value;
}

int Brush_boundary_falloff_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->boundary_falloff_type);
}

void Brush_boundary_falloff_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->boundary_falloff_type = (std::remove_reference_t<decltype(data->boundary_falloff_type)>)value;
}

int Brush_smooth_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->smooth_deform_type);
}

void Brush_smooth_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->smooth_deform_type = (std::remove_reference_t<decltype(data->smooth_deform_type)>)value;
}

int Brush_smear_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->smear_deform_type);
}

void Brush_smear_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->smear_deform_type = (std::remove_reference_t<decltype(data->smear_deform_type)>)value;
}

int Brush_slide_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->slide_deform_type);
}

void Brush_slide_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->slide_deform_type = (std::remove_reference_t<decltype(data->slide_deform_type)>)value;
}

int Brush_boundary_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->boundary_deform_type);
}

void Brush_boundary_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->boundary_deform_type = (std::remove_reference_t<decltype(data->boundary_deform_type)>)value;
}

int Brush_pose_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_deform_type);
}

void Brush_pose_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->pose_deform_type = (std::remove_reference_t<decltype(data->pose_deform_type)>)value;
}

int Brush_pose_origin_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_origin_type);
}

void Brush_pose_origin_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->pose_origin_type = (std::remove_reference_t<decltype(data->pose_origin_type)>)value;
}

int Brush_jitter_unit_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (uint64_t(data->flag) & 1073741824);
}

void Brush_jitter_unit_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1073741824));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

int Brush_falloff_shape_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (uint64_t(data->falloff_shape) & 1);
}

void Brush_falloff_shape_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->falloff_shape = std::remove_reference_t<decltype(data->falloff_shape)>(uint64_t(data->falloff_shape) & ~uint64_t(1));
    data->falloff_shape = std::remove_reference_t<decltype(data->falloff_shape)>(uint64_t(data->falloff_shape) | uint64_t(value));
}

int Brush_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->size);
}

void Brush_size_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Brush_set_size;
    fn(ptr, value);
}

float Brush_unprojected_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->unprojected_size);
}

void Brush_unprojected_size_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Brush_set_unprojected_size;
    fn(ptr, value);
}

int Brush_input_samples_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->input_samples);
}

void Brush_input_samples_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->input_samples = (std::remove_reference_t<decltype(data->input_samples)>)std::clamp(value, 1, 64);
}

float Brush_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->jitter);
}

void Brush_jitter_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->jitter = (std::remove_reference_t<decltype(data->jitter)>)std::clamp(value, 0.0f, 1000.0f);
}

int Brush_jitter_absolute_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->jitter_absolute);
}

void Brush_jitter_absolute_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->jitter_absolute = (std::remove_reference_t<decltype(data->jitter_absolute)>)std::clamp(value, 0, 1000000);
}

int Brush_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->spacing);
}

void Brush_spacing_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->spacing = (std::remove_reference_t<decltype(data->spacing)>)std::clamp(value, 1, 1000);
}

int Brush_grad_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gradient_spacing);
}

void Brush_grad_spacing_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gradient_spacing = (std::remove_reference_t<decltype(data->gradient_spacing)>)std::clamp(value, 1, 10000);
}

bool Brush_use_color_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 1024) != 0);
}

void Brush_use_color_jitter_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 1024); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(1024)); }
}

float Brush_hue_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->hsv_jitter[0]);
}

void Brush_hue_jitter_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->hsv_jitter[0] = (std::remove_reference_t<decltype(data->hsv_jitter[0])>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_saturation_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->hsv_jitter[1]);
}

void Brush_saturation_jitter_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->hsv_jitter[1] = (std::remove_reference_t<decltype(data->hsv_jitter[1])>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_value_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->hsv_jitter[2]);
}

void Brush_value_jitter_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->hsv_jitter[2] = (std::remove_reference_t<decltype(data->hsv_jitter[2])>)std::clamp(value, 0.0f, 1.0f);
}

bool Brush_use_stroke_random_hue_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 1) != 0);
}

void Brush_use_stroke_random_hue_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 1); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(1)); }
}

bool Brush_use_stroke_random_sat_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 2) != 0);
}

void Brush_use_stroke_random_sat_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 2); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(2)); }
}

bool Brush_use_stroke_random_val_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 4) != 0);
}

void Brush_use_stroke_random_val_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 4); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(4)); }
}

bool Brush_use_random_press_hue_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 8) != 0);
}

void Brush_use_random_press_hue_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 8); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(8)); }
}

bool Brush_use_random_press_sat_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 16) != 0);
}

void Brush_use_random_press_sat_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 16); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(16)); }
}

bool Brush_use_random_press_val_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 32) != 0);
}

void Brush_use_random_press_val_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 32); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(32)); }
}

PointerRNA Brush_curve_random_hue_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_rand_hue);
}

PointerRNA Brush_curve_random_saturation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_rand_saturation);
}

PointerRNA Brush_curve_random_value_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_rand_value);
}

PointerRNA Brush_curve_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_size);
}

PointerRNA Brush_curve_strength_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_strength);
}

PointerRNA Brush_curve_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_jitter);
}

int Brush_smooth_stroke_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->smooth_stroke_radius);
}

void Brush_smooth_stroke_radius_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->smooth_stroke_radius = (std::remove_reference_t<decltype(data->smooth_stroke_radius)>)std::clamp(value, 10, 200);
}

float Brush_smooth_stroke_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->smooth_stroke_factor);
}

void Brush_smooth_stroke_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->smooth_stroke_factor = (std::remove_reference_t<decltype(data->smooth_stroke_factor)>)std::clamp(value, 0.5000000000f, 0.9900000095f);
}

float Brush_rate_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->rate);
}

void Brush_rate_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->rate = (std::remove_reference_t<decltype(data->rate)>)std::clamp(value, 0.0001000000f, 10000.0f);
}

void Brush_color_get(PointerRNA *ptr, float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void Brush_color_set(PointerRNA *ptr, const float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void Brush_secondary_color_get(PointerRNA *ptr, float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->secondary_color)[i]);
    }
}

void Brush_secondary_color_set(PointerRNA *ptr, const float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->secondary_color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float Brush_weight_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->weight);
}

void Brush_weight_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_strength_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->alpha);
}

void Brush_strength_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)std::clamp(value, 0.0f, 10.0f);
}

float Brush_flow_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->flow);
}

void Brush_flow_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flow = (std::remove_reference_t<decltype(data->flow)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_wet_mix_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->wet_mix);
}

void Brush_wet_mix_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->wet_mix = (std::remove_reference_t<decltype(data->wet_mix)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_wet_persistence_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->wet_persistence);
}

void Brush_wet_persistence_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->wet_persistence = (std::remove_reference_t<decltype(data->wet_persistence)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_density_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->density);
}

void Brush_density_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->density = (std::remove_reference_t<decltype(data->density)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_tip_scale_x_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->tip_scale_x);
}

void Brush_tip_scale_x_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->tip_scale_x = (std::remove_reference_t<decltype(data->tip_scale_x)>)std::clamp(value, 0.0001000000f, 1.0f);
}

bool Brush_use_hardness_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->paint_flags) & 1) != 0);
}

void Brush_use_hardness_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) | 1); }
    else { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) & ~uint64_t(1)); }
}

bool Brush_invert_hardness_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->paint_flags) & 2) != 0);
}

void Brush_invert_hardness_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) | 2); }
    else { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) & ~uint64_t(2)); }
}

bool Brush_use_flow_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->paint_flags) & 4) != 0);
}

void Brush_use_flow_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) | 4); }
    else { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) & ~uint64_t(4)); }
}

bool Brush_invert_flow_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->paint_flags) & 8) != 0);
}

void Brush_invert_flow_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) | 8); }
    else { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) & ~uint64_t(8)); }
}

bool Brush_use_wet_mix_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->paint_flags) & 16) != 0);
}

void Brush_use_wet_mix_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) | 16); }
    else { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) & ~uint64_t(16)); }
}

bool Brush_invert_wet_mix_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->paint_flags) & 32) != 0);
}

void Brush_invert_wet_mix_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) | 32); }
    else { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) & ~uint64_t(32)); }
}

bool Brush_use_wet_persistence_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->paint_flags) & 64) != 0);
}

void Brush_use_wet_persistence_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) | 64); }
    else { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) & ~uint64_t(64)); }
}

bool Brush_invert_wet_persistence_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->paint_flags) & 128) != 0);
}

void Brush_invert_wet_persistence_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) | 128); }
    else { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) & ~uint64_t(128)); }
}

bool Brush_use_density_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->paint_flags) & 256) != 0);
}

void Brush_use_density_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) | 256); }
    else { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) & ~uint64_t(256)); }
}

bool Brush_invert_density_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->paint_flags) & 512) != 0);
}

void Brush_invert_density_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) | 512); }
    else { data->paint_flags = std::remove_reference_t<decltype(data->paint_flags)>(uint64_t(data->paint_flags) & ~uint64_t(512)); }
}

float Brush_dash_ratio_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->dash_ratio);
}

void Brush_dash_ratio_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->dash_ratio = (std::remove_reference_t<decltype(data->dash_ratio)>)std::clamp(value, 0.0f, 1.0f);
}

int Brush_dash_samples_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->dash_samples);
}

void Brush_dash_samples_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->dash_samples = (std::remove_reference_t<decltype(data->dash_samples)>)std::clamp(value, 1, 10000);
}

float Brush_plane_offset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->plane_offset);
}

void Brush_plane_offset_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->plane_offset = (std::remove_reference_t<decltype(data->plane_offset)>)std::clamp(value, -2.0f, 2.0f);
}

float Brush_plane_trim_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->plane_trim);
}

void Brush_plane_trim_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->plane_trim = (std::remove_reference_t<decltype(data->plane_trim)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_height_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->height);
}

void Brush_height_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->height = (std::remove_reference_t<decltype(data->height)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_plane_depth_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->plane_depth);
}

void Brush_plane_depth_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->plane_depth = (std::remove_reference_t<decltype(data->plane_depth)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_plane_height_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->plane_height);
}

void Brush_plane_height_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->plane_height = (std::remove_reference_t<decltype(data->plane_height)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_stabilize_normal_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->stabilize_normal);
}

void Brush_stabilize_normal_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->stabilize_normal = (std::remove_reference_t<decltype(data->stabilize_normal)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_stabilize_plane_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->stabilize_plane);
}

void Brush_stabilize_plane_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->stabilize_plane = (std::remove_reference_t<decltype(data->stabilize_plane)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_texture_sample_bias_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->texture_sample_bias);
}

void Brush_texture_sample_bias_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->texture_sample_bias = (std::remove_reference_t<decltype(data->texture_sample_bias)>)std::clamp(value, -1.0f, 1.0f);
}

bool Brush_use_color_as_displacement_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 512) != 0);
}

void Brush_use_color_as_displacement_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 512); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(512)); }
}

float Brush_normal_weight_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->normal_weight);
}

void Brush_normal_weight_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->normal_weight = (std::remove_reference_t<decltype(data->normal_weight)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_elastic_deform_volume_preservation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->elastic_deform_volume_preservation);
}

void Brush_elastic_deform_volume_preservation_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->elastic_deform_volume_preservation = (std::remove_reference_t<decltype(data->elastic_deform_volume_preservation)>)std::clamp(value, 0.0f, 0.8999999762f);
}

float Brush_rake_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->rake_factor);
}

void Brush_rake_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->rake_factor = (std::remove_reference_t<decltype(data->rake_factor)>)std::clamp(value, 0.0f, 10.0f);
}

float Brush_crease_pinch_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->crease_pinch_factor);
}

void Brush_crease_pinch_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->crease_pinch_factor = (std::remove_reference_t<decltype(data->crease_pinch_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_pose_offset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->pose_offset);
}

void Brush_pose_offset_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->pose_offset = (std::remove_reference_t<decltype(data->pose_offset)>)std::clamp(value, 0.0f, 2.0f);
}

float Brush_disconnected_distance_max_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->disconnected_distance_max);
}

void Brush_disconnected_distance_max_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->disconnected_distance_max = (std::remove_reference_t<decltype(data->disconnected_distance_max)>)std::clamp(value, 0.0f, 10.0f);
}

float Brush_boundary_offset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->boundary_offset);
}

void Brush_boundary_offset_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->boundary_offset = (std::remove_reference_t<decltype(data->boundary_offset)>)std::clamp(value, 0.0f, 30.0f);
}

float Brush_surface_smooth_shape_preservation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->surface_smooth_shape_preservation);
}

void Brush_surface_smooth_shape_preservation_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->surface_smooth_shape_preservation = (std::remove_reference_t<decltype(data->surface_smooth_shape_preservation)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_surface_smooth_current_vertex_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->surface_smooth_current_vertex);
}

void Brush_surface_smooth_current_vertex_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->surface_smooth_current_vertex = (std::remove_reference_t<decltype(data->surface_smooth_current_vertex)>)std::clamp(value, 0.0f, 1.0f);
}

int Brush_surface_smooth_iterations_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->surface_smooth_iterations);
}

void Brush_surface_smooth_iterations_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->surface_smooth_iterations = (std::remove_reference_t<decltype(data->surface_smooth_iterations)>)std::clamp(value, 1, 10);
}

float Brush_multiplane_scrape_angle_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->multiplane_scrape_angle);
}

void Brush_multiplane_scrape_angle_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->multiplane_scrape_angle = (std::remove_reference_t<decltype(data->multiplane_scrape_angle)>)std::clamp(value, 0.0f, 160.0f);
}

int Brush_pose_smooth_iterations_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_smooth_iterations);
}

void Brush_pose_smooth_iterations_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->pose_smooth_iterations = (std::remove_reference_t<decltype(data->pose_smooth_iterations)>)std::clamp(value, 0, 100);
}

int Brush_pose_ik_segments_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_ik_segments);
}

void Brush_pose_ik_segments_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->pose_ik_segments = (std::remove_reference_t<decltype(data->pose_ik_segments)>)std::clamp(value, 1, 20);
}

float Brush_tip_roundness_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->tip_roundness);
}

void Brush_tip_roundness_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->tip_roundness = (std::remove_reference_t<decltype(data->tip_roundness)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_cloth_mass_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_mass);
}

void Brush_cloth_mass_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_mass = (std::remove_reference_t<decltype(data->cloth_mass)>)std::clamp(value, 0.0099999998f, 2.0f);
}

float Brush_cloth_damping_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_damping);
}

void Brush_cloth_damping_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_damping = (std::remove_reference_t<decltype(data->cloth_damping)>)std::clamp(value, 0.0099999998f, 1.0f);
}

float Brush_cloth_sim_limit_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_sim_limit);
}

void Brush_cloth_sim_limit_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_sim_limit = (std::remove_reference_t<decltype(data->cloth_sim_limit)>)std::clamp(value, 0.1000000015f, 10.0f);
}

float Brush_cloth_sim_falloff_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_sim_falloff);
}

void Brush_cloth_sim_falloff_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_sim_falloff = (std::remove_reference_t<decltype(data->cloth_sim_falloff)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_cloth_constraint_softbody_strength_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_constraint_softbody_strength);
}

void Brush_cloth_constraint_softbody_strength_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_constraint_softbody_strength = (std::remove_reference_t<decltype(data->cloth_constraint_softbody_strength)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_hardness_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->hardness);
}

void Brush_hardness_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->hardness = (std::remove_reference_t<decltype(data->hardness)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_auto_smooth_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->autosmooth_factor);
}

void Brush_auto_smooth_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->autosmooth_factor = (std::remove_reference_t<decltype(data->autosmooth_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_topology_rake_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->topology_rake_factor);
}

void Brush_topology_rake_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->topology_rake_factor = (std::remove_reference_t<decltype(data->topology_rake_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float Brush_tilt_strength_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->tilt_strength_factor);
}

void Brush_tilt_strength_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->tilt_strength_factor = (std::remove_reference_t<decltype(data->tilt_strength_factor)>)std::clamp(value, -1.0f, 1.0f);
}

float Brush_normal_radius_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->normal_radius_factor);
}

void Brush_normal_radius_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->normal_radius_factor = (std::remove_reference_t<decltype(data->normal_radius_factor)>)std::clamp(value, 0.0f, 2.0f);
}

float Brush_area_radius_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->area_radius_factor);
}

void Brush_area_radius_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->area_radius_factor = (std::remove_reference_t<decltype(data->area_radius_factor)>)std::clamp(value, 0.0f, 2.0f);
}

float Brush_wet_paint_radius_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->wet_paint_radius_factor);
}

void Brush_wet_paint_radius_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->wet_paint_radius_factor = (std::remove_reference_t<decltype(data->wet_paint_radius_factor)>)std::clamp(value, 0.0f, 2.0f);
}

void Brush_stencil_pos_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->stencil_pos)[i]);
    }
}

void Brush_stencil_pos_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->stencil_pos)[i] = values[i];
    }
}

void Brush_stencil_dimension_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->stencil_dimension)[i]);
    }
}

void Brush_stencil_dimension_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->stencil_dimension)[i] = values[i];
    }
}

void Brush_mask_stencil_pos_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->mask_stencil_pos)[i]);
    }
}

void Brush_mask_stencil_pos_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->mask_stencil_pos)[i] = values[i];
    }
}

void Brush_mask_stencil_dimension_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->mask_stencil_dimension)[i]);
    }
}

void Brush_mask_stencil_dimension_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->mask_stencil_dimension)[i] = values[i];
    }
}

float Brush_sharp_threshold_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->sharp_threshold);
}

void Brush_sharp_threshold_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->sharp_threshold = (std::remove_reference_t<decltype(data->sharp_threshold)>)std::clamp(value, 0.0f, 100.0f);
}

float Brush_fill_threshold_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->fill_threshold);
}

void Brush_fill_threshold_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->fill_threshold = (std::remove_reference_t<decltype(data->fill_threshold)>)std::clamp(value, 0.0f, 100.0f);
}

int Brush_blur_kernel_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->blur_kernel_radius);
}

void Brush_blur_kernel_radius_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->blur_kernel_radius = (std::remove_reference_t<decltype(data->blur_kernel_radius)>)std::clamp(value, 1, 10000);
}

int Brush_blur_mode_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->blur_mode);
}

void Brush_blur_mode_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->blur_mode = (std::remove_reference_t<decltype(data->blur_mode)>)value;
}

float Brush_falloff_angle_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->falloff_angle);
}

void Brush_falloff_angle_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->falloff_angle = (std::remove_reference_t<decltype(data->falloff_angle)>)std::clamp(value, 0.0f, 1.5707963705f);
}

bool Brush_use_original_normal_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 32768) != 0);
}

void Brush_use_original_normal_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32768); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32768)); }
}

bool Brush_use_original_plane_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void Brush_use_original_plane_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

int Brush_use_scene_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (uint64_t(data->flag) & 131072);
}

void Brush_use_scene_spacing_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(131072));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

bool Brush_use_grab_active_vertex_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void Brush_use_grab_active_vertex_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool Brush_use_grab_silhouette_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 256) != 0);
}

void Brush_use_grab_silhouette_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 256); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(256)); }
}

bool Brush_use_paint_antialiasing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->sampling_flag) & 1) != 0);
}

void Brush_use_paint_antialiasing_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->sampling_flag = std::remove_reference_t<decltype(data->sampling_flag)>(uint64_t(data->sampling_flag) | 1); }
    else { data->sampling_flag = std::remove_reference_t<decltype(data->sampling_flag)>(uint64_t(data->sampling_flag) & ~uint64_t(1)); }
}

bool Brush_use_multiplane_scrape_dynamic_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 1) != 0);
}

void Brush_use_multiplane_scrape_dynamic_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 1); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(1)); }
}

bool Brush_show_multiplane_scrape_planes_preview_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 2) != 0);
}

void Brush_show_multiplane_scrape_planes_preview_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 2); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(2)); }
}

bool Brush_use_pose_ik_anchored_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 4) != 0);
}

void Brush_use_pose_ik_anchored_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 4); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(4)); }
}

bool Brush_use_pose_lock_rotation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 32) != 0);
}

void Brush_use_pose_lock_rotation_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 32); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(32)); }
}

bool Brush_use_connected_only_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 8) != 0);
}

void Brush_use_connected_only_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 8); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(8)); }
}

bool Brush_use_cloth_pin_simulation_boundary_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 16) != 0);
}

void Brush_use_cloth_pin_simulation_boundary_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 16); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(16)); }
}

bool Brush_use_cloth_collision_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 64) != 0);
}

void Brush_use_cloth_collision_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 64); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(64)); }
}

bool Brush_invert_to_scrape_fill_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void Brush_invert_to_scrape_fill_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool Brush_use_pressure_strength_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void Brush_use_pressure_strength_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool Brush_use_offset_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 65536) != 0);
}

void Brush_use_offset_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 65536); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(65536)); }
}

bool Brush_use_pressure_area_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 128) != 0);
}

void Brush_use_pressure_area_radius_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 128); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(128)); }
}

bool Brush_use_pressure_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void Brush_use_pressure_size_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool Brush_use_pressure_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void Brush_use_pressure_jitter_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool Brush_use_pressure_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void Brush_use_pressure_spacing_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

int Brush_use_pressure_masking_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->mask_pressure);
}

void Brush_use_pressure_masking_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->mask_pressure = (std::remove_reference_t<decltype(data->mask_pressure)>)value;
}

bool Brush_use_inverse_smooth_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 16777216) != 0);
}

void Brush_use_inverse_smooth_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16777216); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16777216)); }
}

bool Brush_use_plane_trim_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 67108864) != 0);
}

void Brush_use_plane_trim_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 67108864); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(67108864)); }
}

bool Brush_use_frontface_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 134217728) != 0);
}

void Brush_use_frontface_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 134217728); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(134217728)); }
}

bool Brush_use_frontface_falloff_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 33554432) != 0);
}

void Brush_use_frontface_falloff_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 33554432); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(33554432)); }
}

bool Brush_use_smooth_stroke_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void Brush_use_smooth_stroke_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool Brush_use_persistent_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void Brush_use_persistent_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool Brush_use_bidirectional_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag2) & 2048) != 0);
}

void Brush_use_bidirectional_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 2048); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(2048)); }
}

bool Brush_use_accumulate_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void Brush_use_accumulate_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool Brush_use_space_attenuation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 262144) != 0);
}

void Brush_use_space_attenuation_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 262144); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(262144)); }
}

bool Brush_use_adaptive_space_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 524288) != 0);
}

void Brush_use_adaptive_space_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 524288); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(524288)); }
}

int Brush_use_locked_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (uint64_t(data->flag) & 1048576);
}

void Brush_use_locked_size_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1048576));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

int Brush_color_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (uint64_t(data->flag) & 2097152);
}

void Brush_color_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Brush_use_gradient_set;
    fn(ptr, value);
}

bool Brush_use_edge_to_edge_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->flag) & 4194304) != 0);
}

void Brush_use_edge_to_edge_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4194304); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4194304)); }
}

bool Brush_use_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return !((uint64_t(data->flag) & 16384) != 0);
}

void Brush_use_alpha_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16384); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16384)); }
}

PointerRNA Brush_curve_distance_falloff_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_distance_falloff);
}

PointerRNA Brush_paint_curve_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PaintCurve, data->paint_curve);
}

void Brush_paint_curve_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->paint_curve) {
        id_us_min((ID *)data->paint_curve);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->paint_curve = value.data;
}

PointerRNA Brush_gradient_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ColorRamp, data->gradient);
}

int Brush_gradient_stroke_mode_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gradient_stroke_mode);
}

void Brush_gradient_stroke_mode_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gradient_stroke_mode = (std::remove_reference_t<decltype(data->gradient_stroke_mode)>)value;
}

int Brush_gradient_fill_mode_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gradient_fill_mode);
}

void Brush_gradient_fill_mode_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gradient_fill_mode = (std::remove_reference_t<decltype(data->gradient_fill_mode)>)value;
}

bool Brush_use_primary_overlay_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->overlay_flags) & 2) != 0);
}

void Brush_use_primary_overlay_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) | 2); }
    else { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) & ~uint64_t(2)); }
}

bool Brush_use_secondary_overlay_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->overlay_flags) & 4) != 0);
}

void Brush_use_secondary_overlay_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) | 4); }
    else { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) & ~uint64_t(4)); }
}

bool Brush_use_cursor_overlay_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->overlay_flags) & 1) != 0);
}

void Brush_use_cursor_overlay_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) | 1); }
    else { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) & ~uint64_t(1)); }
}

bool Brush_use_cursor_overlay_override_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->overlay_flags) & 8) != 0);
}

void Brush_use_cursor_overlay_override_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) | 8); }
    else { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) & ~uint64_t(8)); }
}

bool Brush_use_primary_overlay_override_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->overlay_flags) & 16) != 0);
}

void Brush_use_primary_overlay_override_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) | 16); }
    else { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) & ~uint64_t(16)); }
}

bool Brush_use_secondary_overlay_override_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->overlay_flags) & 32) != 0);
}

void Brush_use_secondary_overlay_override_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) | 32); }
    else { data->overlay_flags = std::remove_reference_t<decltype(data->overlay_flags)>(uint64_t(data->overlay_flags) & ~uint64_t(32)); }
}

bool Brush_use_paint_sculpt_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->ob_mode) & 2) != 0);
}

void Brush_use_paint_sculpt_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) | 2); }
    else { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) & ~uint64_t(2)); }
}

bool Brush_use_paint_uv_sculpt_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->ob_mode) & 1) != 0);
}

void Brush_use_paint_uv_sculpt_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) | 1); }
    else { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) & ~uint64_t(1)); }
}

bool Brush_use_paint_vertex_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->ob_mode) & 4) != 0);
}

void Brush_use_paint_vertex_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) | 4); }
    else { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) & ~uint64_t(4)); }
}

bool Brush_use_paint_weight_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->ob_mode) & 8) != 0);
}

void Brush_use_paint_weight_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) | 8); }
    else { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) & ~uint64_t(8)); }
}

bool Brush_use_paint_image_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->ob_mode) & 16) != 0);
}

void Brush_use_paint_image_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) | 16); }
    else { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) & ~uint64_t(16)); }
}

bool Brush_use_paint_grease_pencil_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->ob_mode) & 256) != 0);
}

void Brush_use_paint_grease_pencil_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) | 256); }
    else { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) & ~uint64_t(256)); }
}

bool Brush_use_vertex_grease_pencil_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->ob_mode) & 2048) != 0);
}

void Brush_use_vertex_grease_pencil_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) | 2048); }
    else { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) & ~uint64_t(2048)); }
}

bool Brush_use_paint_sculpt_curves_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((uint64_t(data->ob_mode) & 4096) != 0);
}

void Brush_use_paint_sculpt_curves_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) | 4096); }
    else { data->ob_mode = std::remove_reference_t<decltype(data->ob_mode)>(uint64_t(data->ob_mode) & ~uint64_t(4096)); }
}

PointerRNA Brush_texture_slot_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_BrushTextureSlot, &data->mtex);
}

PointerRNA Brush_texture_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Texture, data->mtex.tex);
}

void Brush_texture_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->mtex.tex) {
        id_us_min((ID *)data->mtex.tex);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->mtex.tex = value.data;
}

PointerRNA Brush_mask_texture_slot_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_BrushTextureSlot, &data->mask_mtex);
}

PointerRNA Brush_mask_texture_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Texture, data->mask_mtex.tex);
}

void Brush_mask_texture_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->mask_mtex.tex) {
        id_us_min((ID *)data->mask_mtex.tex);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->mask_mtex.tex = value.data;
}

int Brush_texture_overlay_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->texture_overlay_alpha);
}

void Brush_texture_overlay_alpha_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->texture_overlay_alpha = (std::remove_reference_t<decltype(data->texture_overlay_alpha)>)std::clamp(value, 0, 100);
}

int Brush_mask_overlay_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->mask_overlay_alpha);
}

void Brush_mask_overlay_alpha_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->mask_overlay_alpha = (std::remove_reference_t<decltype(data->mask_overlay_alpha)>)std::clamp(value, 0, 100);
}

int Brush_cursor_overlay_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cursor_overlay_alpha);
}

void Brush_cursor_overlay_alpha_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cursor_overlay_alpha = (std::remove_reference_t<decltype(data->cursor_overlay_alpha)>)std::clamp(value, 0, 100);
}

void Brush_cursor_color_add_get(PointerRNA *ptr, float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->add_col)[i]);
    }
}

void Brush_cursor_color_add_set(PointerRNA *ptr, const float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->add_col)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void Brush_cursor_color_subtract_get(PointerRNA *ptr, float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->sub_col)[i]);
    }
}

void Brush_cursor_color_subtract_set(PointerRNA *ptr, const float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->sub_col)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

PointerRNA Brush_brush_capabilities_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Brush_capabilities_get;
    return fn(ptr);
}

PointerRNA Brush_sculpt_capabilities_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Sculpt_brush_capabilities_get;
    return fn(ptr);
}

PointerRNA Brush_image_paint_capabilities_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Imapaint_brush_capabilities_get;
    return fn(ptr);
}

PointerRNA Brush_vertex_paint_capabilities_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Vertexpaint_brush_capabilities_get;
    return fn(ptr);
}

PointerRNA Brush_weight_paint_capabilities_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Weightpaint_brush_capabilities_get;
    return fn(ptr);
}

PointerRNA Brush_gpencil_settings_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_BrushGpencilSettings, data->gpencil_settings);
}

PointerRNA Brush_curves_sculpt_settings_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_BrushCurvesSculptSettings, data->curves_sculpt_settings);
}

PointerRNA Brush_mesh_automasking_settings_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MeshAutomaskingSettings, data->mesh_automasking_settings);
}

static PointerRNA BrushCapabilities_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BrushCapabilities_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BrushCapabilities_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilities_rna_properties_get(iter);
    }
}

void BrushCapabilities_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilities_rna_properties_get(iter);
    }
}

void BrushCapabilities_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BrushCapabilities_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BrushCapabilities_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool BrushCapabilities_has_overlay_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilities_has_overlay_get;
    return fn(ptr);
}

bool BrushCapabilities_has_random_texture_angle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilities_has_random_texture_angle_get;
    return fn(ptr);
}

bool BrushCapabilities_has_spacing_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilities_has_spacing_get;
    return fn(ptr);
}

bool BrushCapabilities_has_smooth_stroke_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilities_has_smooth_stroke_get;
    return fn(ptr);
}

static PointerRNA BrushCapabilitiesSculpt_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BrushCapabilitiesSculpt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BrushCapabilitiesSculpt_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesSculpt_rna_properties_get(iter);
    }
}

void BrushCapabilitiesSculpt_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesSculpt_rna_properties_get(iter);
    }
}

void BrushCapabilitiesSculpt_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BrushCapabilitiesSculpt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BrushCapabilitiesSculpt_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_accumulate_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_accumulate_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_auto_smooth_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_auto_smooth_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_normal_radius_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_normal_radius_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_hardness_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_hardness_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_tip_roundness_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_tip_roundness_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_topology_rake_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_topology_rake_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_height_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_height_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_plane_depth_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_plane_depth_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_plane_height_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_plane_height_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_jitter_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_jitter_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_normal_weight_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_normal_weight_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_rake_factor_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_rake_factor_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_persistence_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_persistence_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_pinch_factor_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_pinch_factor_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_plane_offset_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_plane_offset_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_random_texture_angle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_random_texture_angle_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_sculpt_plane_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_sculpt_plane_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_color_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_color_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_secondary_color_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_secondary_color_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_smooth_stroke_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_smooth_stroke_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_space_attenuation_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_space_attenuation_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_strength_pressure_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_strength_pressure_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_size_pressure_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_size_pressure_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_auto_smooth_pressure_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_auto_smooth_pressure_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_hardness_pressure_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_hardness_pressure_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_direction_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_direction_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_gravity_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_gravity_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_tilt_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_tilt_get;
    return fn(ptr);
}

bool BrushCapabilitiesSculpt_has_dyntopo_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_dyntopo_get;
    return fn(ptr);
}

static PointerRNA BrushCapabilitiesImagePaint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BrushCapabilitiesImagePaint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BrushCapabilitiesImagePaint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesImagePaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesImagePaint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesImagePaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesImagePaint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BrushCapabilitiesImagePaint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BrushCapabilitiesImagePaint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool BrushCapabilitiesImagePaint_has_accumulate_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesImagePaint_has_accumulate_get;
    return fn(ptr);
}

bool BrushCapabilitiesImagePaint_has_space_attenuation_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesImagePaint_has_space_attenuation_get;
    return fn(ptr);
}

bool BrushCapabilitiesImagePaint_has_radius_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesImagePaint_has_radius_get;
    return fn(ptr);
}

bool BrushCapabilitiesImagePaint_has_color_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesImagePaint_has_color_get;
    return fn(ptr);
}

static PointerRNA BrushCapabilitiesVertexPaint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BrushCapabilitiesVertexPaint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BrushCapabilitiesVertexPaint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesVertexPaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesVertexPaint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesVertexPaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesVertexPaint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BrushCapabilitiesVertexPaint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BrushCapabilitiesVertexPaint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool BrushCapabilitiesVertexPaint_has_color_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesVertexPaint_has_color_get;
    return fn(ptr);
}

static PointerRNA BrushCapabilitiesWeightPaint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BrushCapabilitiesWeightPaint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BrushCapabilitiesWeightPaint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesWeightPaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesWeightPaint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesWeightPaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesWeightPaint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BrushCapabilitiesWeightPaint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BrushCapabilitiesWeightPaint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool BrushCapabilitiesWeightPaint_has_weight_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesWeightPaint_has_weight_get;
    return fn(ptr);
}

static PointerRNA BrushGpencilSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BrushGpencilSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BrushGpencilSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushGpencilSettings_rna_properties_get(iter);
    }
}

void BrushGpencilSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BrushGpencilSettings_rna_properties_get(iter);
    }
}

void BrushGpencilSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BrushGpencilSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BrushGpencilSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float BrushGpencilSettings_pen_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_strength);
}

void BrushGpencilSettings_pen_strength_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_strength = (std::remove_reference_t<decltype(data->draw_strength)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_pen_jitter_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_jitter);
}

void BrushGpencilSettings_pen_jitter_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_jitter = (std::remove_reference_t<decltype(data->draw_jitter)>)std::clamp(value, 0.0f, 100.0f);
}

float BrushGpencilSettings_random_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_random_press);
}

void BrushGpencilSettings_random_pressure_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_random_press = (std::remove_reference_t<decltype(data->draw_random_press)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_random_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_random_strength);
}

void BrushGpencilSettings_random_strength_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_random_strength = (std::remove_reference_t<decltype(data->draw_random_strength)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_angle_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_angle);
}

void BrushGpencilSettings_angle_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_angle = (std::remove_reference_t<decltype(data->draw_angle)>)std::clamp(value, -1.5707963705f, 1.5707963705f);
}

float BrushGpencilSettings_angle_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_angle_factor);
}

void BrushGpencilSettings_angle_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_angle_factor = (std::remove_reference_t<decltype(data->draw_angle_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_pen_smooth_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_smoothfac);
}

void BrushGpencilSettings_pen_smooth_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_smoothfac = (std::remove_reference_t<decltype(data->draw_smoothfac)>)std::clamp(value, 0.0f, 2.0f);
}

int BrushGpencilSettings_pen_smooth_steps_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->draw_smoothlvl);
}

void BrushGpencilSettings_pen_smooth_steps_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_smoothlvl = (std::remove_reference_t<decltype(data->draw_smoothlvl)>)std::clamp(value, 0, 100);
}

int BrushGpencilSettings_pen_subdivision_steps_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->draw_subdivide);
}

void BrushGpencilSettings_pen_subdivision_steps_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_subdivide = (std::remove_reference_t<decltype(data->draw_subdivide)>)std::clamp(value, 0, 3);
}

float BrushGpencilSettings_simplify_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->simplify_f);
}

void BrushGpencilSettings_simplify_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->simplify_f = (std::remove_reference_t<decltype(data->simplify_f)>)std::clamp(value, 0.0f, 100.0f);
}

float BrushGpencilSettings_simplify_pixel_threshold_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->simplify_px);
}

void BrushGpencilSettings_simplify_pixel_threshold_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->simplify_px = (std::remove_reference_t<decltype(data->simplify_px)>)std::clamp(value, 0.0f, 10.0f);
}

PointerRNA BrushGpencilSettings_curve_sensitivity_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_sensitivity);
}

PointerRNA BrushGpencilSettings_curve_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_strength);
}

PointerRNA BrushGpencilSettings_curve_jitter_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_jitter);
}

PointerRNA BrushGpencilSettings_curve_random_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_rand_pressure);
}

PointerRNA BrushGpencilSettings_curve_random_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_rand_strength);
}

PointerRNA BrushGpencilSettings_curve_random_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_rand_uv);
}

PointerRNA BrushGpencilSettings_curve_random_hue_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_rand_hue);
}

PointerRNA BrushGpencilSettings_curve_random_saturation_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_rand_saturation);
}

PointerRNA BrushGpencilSettings_curve_random_value_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_rand_value);
}

float BrushGpencilSettings_fill_threshold_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->fill_threshold);
}

void BrushGpencilSettings_fill_threshold_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_threshold = (std::remove_reference_t<decltype(data->fill_threshold)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_fill_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->fill_factor);
}

void BrushGpencilSettings_fill_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_factor = (std::remove_reference_t<decltype(data->fill_factor)>)std::clamp(value, 0.0500000007f, 8.0f);
}

int BrushGpencilSettings_fill_simplify_level_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_simplylvl);
}

void BrushGpencilSettings_fill_simplify_level_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_simplylvl = (std::remove_reference_t<decltype(data->fill_simplylvl)>)std::clamp(value, 0, 10);
}

float BrushGpencilSettings_uv_random_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->uv_random);
}

void BrushGpencilSettings_uv_random_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->uv_random = (std::remove_reference_t<decltype(data->uv_random)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_hardness_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->hardness);
}

void BrushGpencilSettings_hardness_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->hardness = (std::remove_reference_t<decltype(data->hardness)>)std::clamp(value, 0.0010000000f, 1.0f);
}

void BrushGpencilSettings_aspect_get(PointerRNA *ptr, float values[2])
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->aspect_ratio)[i]);
    }
}

void BrushGpencilSettings_aspect_set(PointerRNA *ptr, const float values[2])
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->aspect_ratio)[i] = std::clamp(values[i], 0.0099999998f, 1.0f);
    }
}

int BrushGpencilSettings_input_samples_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->input_samples);
}

void BrushGpencilSettings_input_samples_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->input_samples = (std::remove_reference_t<decltype(data->input_samples)>)std::clamp(value, 0, 10);
}

float BrushGpencilSettings_active_smooth_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->active_smooth);
}

void BrushGpencilSettings_active_smooth_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->active_smooth = (std::remove_reference_t<decltype(data->active_smooth)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_eraser_strength_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->era_strength_f);
}

void BrushGpencilSettings_eraser_strength_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->era_strength_f = (std::remove_reference_t<decltype(data->era_strength_f)>)std::clamp(value, 0.0f, 100.0f);
}

float BrushGpencilSettings_eraser_thickness_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->era_thickness_f);
}

void BrushGpencilSettings_eraser_thickness_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->era_thickness_f = (std::remove_reference_t<decltype(data->era_thickness_f)>)std::clamp(value, 0.0f, 100.0f);
}

int BrushGpencilSettings_vertex_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (uint64_t(data->vertex_mode) & 3);
}

void BrushGpencilSettings_vertex_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->vertex_mode = std::remove_reference_t<decltype(data->vertex_mode)>(uint64_t(data->vertex_mode) & ~uint64_t(3));
    data->vertex_mode = std::remove_reference_t<decltype(data->vertex_mode)>(uint64_t(data->vertex_mode) | uint64_t(value));
}

float BrushGpencilSettings_vertex_color_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->vertex_factor);
}

void BrushGpencilSettings_vertex_color_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->vertex_factor = (std::remove_reference_t<decltype(data->vertex_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_random_hue_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->random_hue);
}

void BrushGpencilSettings_random_hue_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->random_hue = (std::remove_reference_t<decltype(data->random_hue)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_random_saturation_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->random_saturation);
}

void BrushGpencilSettings_random_saturation_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->random_saturation = (std::remove_reference_t<decltype(data->random_saturation)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_random_value_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->random_value);
}

void BrushGpencilSettings_random_value_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->random_value = (std::remove_reference_t<decltype(data->random_value)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_extend_stroke_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->fill_extend_fac);
}

void BrushGpencilSettings_extend_stroke_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_extend_fac = (std::remove_reference_t<decltype(data->fill_extend_fac)>)std::clamp(value, 0.0f, FLT_MAX);
}

int BrushGpencilSettings_fill_extend_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_extend_mode);
}

void BrushGpencilSettings_fill_extend_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_extend_mode = (std::remove_reference_t<decltype(data->fill_extend_mode)>)value;
}

int BrushGpencilSettings_dilate_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->dilate_pixels);
}

void BrushGpencilSettings_dilate_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->dilate_pixels = (std::remove_reference_t<decltype(data->dilate_pixels)>)std::clamp(value, -40, 40);
}

float BrushGpencilSettings_outline_thickness_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->outline_fac);
}

void BrushGpencilSettings_outline_thickness_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->outline_fac = (std::remove_reference_t<decltype(data->outline_fac)>)std::clamp(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_conversion_threshold_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->conversion_threshold);
}

void BrushGpencilSettings_conversion_threshold_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->conversion_threshold = (std::remove_reference_t<decltype(data->conversion_threshold)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool BrushGpencilSettings_use_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void BrushGpencilSettings_use_pressure_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool BrushGpencilSettings_use_strength_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void BrushGpencilSettings_use_strength_pressure_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool BrushGpencilSettings_use_jitter_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void BrushGpencilSettings_use_jitter_pressure_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool BrushGpencilSettings_use_stroke_random_hue_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 1) != 0);
}

void BrushGpencilSettings_use_stroke_random_hue_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 1); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(1)); }
}

bool BrushGpencilSettings_use_stroke_random_sat_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 2) != 0);
}

void BrushGpencilSettings_use_stroke_random_sat_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 2); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(2)); }
}

bool BrushGpencilSettings_use_stroke_random_val_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 4) != 0);
}

void BrushGpencilSettings_use_stroke_random_val_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 4); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(4)); }
}

bool BrushGpencilSettings_use_stroke_random_radius_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 8) != 0);
}

void BrushGpencilSettings_use_stroke_random_radius_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 8); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(8)); }
}

bool BrushGpencilSettings_use_stroke_random_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 16) != 0);
}

void BrushGpencilSettings_use_stroke_random_strength_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 16); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(16)); }
}

bool BrushGpencilSettings_use_stroke_random_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 32) != 0);
}

void BrushGpencilSettings_use_stroke_random_uv_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 32); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(32)); }
}

bool BrushGpencilSettings_use_random_press_hue_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 64) != 0);
}

void BrushGpencilSettings_use_random_press_hue_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 64); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(64)); }
}

bool BrushGpencilSettings_use_random_press_sat_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 128) != 0);
}

void BrushGpencilSettings_use_random_press_sat_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 128); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(128)); }
}

bool BrushGpencilSettings_use_random_press_val_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 256) != 0);
}

void BrushGpencilSettings_use_random_press_val_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 256); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(256)); }
}

bool BrushGpencilSettings_use_random_press_radius_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 512) != 0);
}

void BrushGpencilSettings_use_random_press_radius_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 512); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(512)); }
}

bool BrushGpencilSettings_use_random_press_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 1024) != 0);
}

void BrushGpencilSettings_use_random_press_strength_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 1024); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(1024)); }
}

bool BrushGpencilSettings_use_random_press_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag2) & 2048) != 0);
}

void BrushGpencilSettings_use_random_press_uv_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 2048); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(2048)); }
}

int BrushGpencilSettings_stroke_type_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (uint64_t(data->flag2) & 12288);
}

void BrushGpencilSettings_stroke_type_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(12288));
    data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | uint64_t(value));
}

bool BrushGpencilSettings_use_settings_stabilizer_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void BrushGpencilSettings_use_settings_stabilizer_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

int BrushGpencilSettings_eraser_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->eraser_mode);
}

void BrushGpencilSettings_eraser_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->eraser_mode = (std::remove_reference_t<decltype(data->eraser_mode)>)value;
}

int BrushGpencilSettings_caps_type_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->caps_type);
}

void BrushGpencilSettings_caps_type_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->caps_type = (std::remove_reference_t<decltype(data->caps_type)>)value;
}

int BrushGpencilSettings_fill_draw_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_draw_mode);
}

void BrushGpencilSettings_fill_draw_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_draw_mode = (std::remove_reference_t<decltype(data->fill_draw_mode)>)value;
}

int BrushGpencilSettings_fill_layer_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_layer_mode);
}

void BrushGpencilSettings_fill_layer_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_layer_mode = (std::remove_reference_t<decltype(data->fill_layer_mode)>)value;
}

int BrushGpencilSettings_fill_direction_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_direction);
}

void BrushGpencilSettings_fill_direction_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_direction = (std::remove_reference_t<decltype(data->fill_direction)>)value;
}

int BrushGpencilSettings_fill_solver_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_solver);
}

void BrushGpencilSettings_fill_solver_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_solver = (std::remove_reference_t<decltype(data->fill_solver)>)value;
}

float BrushGpencilSettings_fill_gap_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->fill_gap_factor);
}

void BrushGpencilSettings_fill_gap_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_gap_factor = (std::remove_reference_t<decltype(data->fill_gap_factor)>)std::clamp(value, 0.0f, 1.0f);
}

bool BrushGpencilSettings_pin_draw_mode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GPencilBrush_pin_mode_get;
    return fn(ptr);
}

void BrushGpencilSettings_pin_draw_mode_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_GPencilBrush_pin_mode_set;
    fn(ptr, value);
}

int BrushGpencilSettings_brush_draw_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->brush_draw_mode);
}

void BrushGpencilSettings_brush_draw_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->brush_draw_mode = (std::remove_reference_t<decltype(data->brush_draw_mode)>)value;
}

bool BrushGpencilSettings_use_trim_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 65536) != 0);
}

void BrushGpencilSettings_use_trim_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 65536); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(65536)); }
}

bool BrushGpencilSettings_use_settings_outline_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 131072) != 0);
}

void BrushGpencilSettings_use_settings_outline_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 131072); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(131072)); }
}

bool BrushGpencilSettings_use_edit_position_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->sculpt_mode_flag) & 1) != 0);
}

void BrushGpencilSettings_use_edit_position_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag = std::remove_reference_t<decltype(data->sculpt_mode_flag)>(uint64_t(data->sculpt_mode_flag) | 1); }
    else { data->sculpt_mode_flag = std::remove_reference_t<decltype(data->sculpt_mode_flag)>(uint64_t(data->sculpt_mode_flag) & ~uint64_t(1)); }
}

bool BrushGpencilSettings_use_edit_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->sculpt_mode_flag) & 2) != 0);
}

void BrushGpencilSettings_use_edit_strength_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag = std::remove_reference_t<decltype(data->sculpt_mode_flag)>(uint64_t(data->sculpt_mode_flag) | 2); }
    else { data->sculpt_mode_flag = std::remove_reference_t<decltype(data->sculpt_mode_flag)>(uint64_t(data->sculpt_mode_flag) & ~uint64_t(2)); }
}

bool BrushGpencilSettings_use_edit_thickness_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->sculpt_mode_flag) & 4) != 0);
}

void BrushGpencilSettings_use_edit_thickness_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag = std::remove_reference_t<decltype(data->sculpt_mode_flag)>(uint64_t(data->sculpt_mode_flag) | 4); }
    else { data->sculpt_mode_flag = std::remove_reference_t<decltype(data->sculpt_mode_flag)>(uint64_t(data->sculpt_mode_flag) & ~uint64_t(4)); }
}

bool BrushGpencilSettings_use_edit_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->sculpt_mode_flag) & 8) != 0);
}

void BrushGpencilSettings_use_edit_uv_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag = std::remove_reference_t<decltype(data->sculpt_mode_flag)>(uint64_t(data->sculpt_mode_flag) | 8); }
    else { data->sculpt_mode_flag = std::remove_reference_t<decltype(data->sculpt_mode_flag)>(uint64_t(data->sculpt_mode_flag) & ~uint64_t(8)); }
}

PointerRNA BrushGpencilSettings_material_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Material, data->material);
}

void BrushGpencilSettings_material_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->material) {
        id_us_min((ID *)data->material);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->material = value.data;
}

PointerRNA BrushGpencilSettings_material_alt_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Material, data->material_alt);
}

void BrushGpencilSettings_material_alt_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->material_alt) {
        id_us_min((ID *)data->material_alt);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->material_alt = value.data;
}

bool BrushGpencilSettings_show_fill_boundary_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void BrushGpencilSettings_show_fill_boundary_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool BrushGpencilSettings_show_fill_extend_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void BrushGpencilSettings_show_fill_extend_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool BrushGpencilSettings_use_collide_strokes_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 262144) != 0);
}

void BrushGpencilSettings_use_collide_strokes_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 262144); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(262144)); }
}

bool BrushGpencilSettings_show_fill_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return !((uint64_t(data->flag) & 64) != 0);
}

void BrushGpencilSettings_show_fill_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool BrushGpencilSettings_use_auto_remove_fill_guides_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 2097152) != 0);
}

void BrushGpencilSettings_use_auto_remove_fill_guides_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2097152); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2097152)); }
}

bool BrushGpencilSettings_fill_internal_gaps_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 4194304) != 0);
}

void BrushGpencilSettings_fill_internal_gaps_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4194304); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4194304)); }
}

int BrushGpencilSettings_curve_type_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->curve_type);
}

void BrushGpencilSettings_curve_type_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->curve_type = (std::remove_reference_t<decltype(data->curve_type)>)value;
}

bool BrushGpencilSettings_use_fill_limit_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void BrushGpencilSettings_use_fill_limit_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool BrushGpencilSettings_use_settings_postprocess_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void BrushGpencilSettings_use_settings_postprocess_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool BrushGpencilSettings_use_settings_random_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void BrushGpencilSettings_use_settings_random_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool BrushGpencilSettings_use_material_pin_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void BrushGpencilSettings_use_material_pin_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool BrushGpencilSettings_show_lasso_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return !((uint64_t(data->flag) & 16384) != 0);
}

void BrushGpencilSettings_show_lasso_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16384); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16384)); }
}

bool BrushGpencilSettings_use_occlude_eraser_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 32768) != 0);
}

void BrushGpencilSettings_use_occlude_eraser_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32768); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32768)); }
}

bool BrushGpencilSettings_use_keep_caps_eraser_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 524288) != 0);
}

void BrushGpencilSettings_use_keep_caps_eraser_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 524288); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(524288)); }
}

bool BrushGpencilSettings_use_active_layer_only_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1048576) != 0);
}

void BrushGpencilSettings_use_active_layer_only_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1048576); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1048576)); }
}

static PointerRNA BrushCurvesSculptSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BrushCurvesSculptSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BrushCurvesSculptSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCurvesSculptSettings_rna_properties_get(iter);
    }
}

void BrushCurvesSculptSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BrushCurvesSculptSettings_rna_properties_get(iter);
    }
}

void BrushCurvesSculptSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BrushCurvesSculptSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BrushCurvesSculptSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int BrushCurvesSculptSettings_add_amount_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->add_amount);
}

void BrushCurvesSculptSettings_add_amount_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->add_amount = (std::remove_reference_t<decltype(data->add_amount)>)std::clamp(value, 1, INT_MAX);
}

int BrushCurvesSculptSettings_points_per_curve_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->points_per_curve);
}

void BrushCurvesSculptSettings_points_per_curve_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->points_per_curve = (std::remove_reference_t<decltype(data->points_per_curve)>)std::clamp(value, 2, INT_MAX);
}

bool BrushCurvesSculptSettings_use_uniform_scale_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void BrushCurvesSculptSettings_use_uniform_scale_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

float BrushCurvesSculptSettings_minimum_length_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (float)(data->minimum_length);
}

void BrushCurvesSculptSettings_minimum_length_set(PointerRNA *ptr, float value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->minimum_length = (std::remove_reference_t<decltype(data->minimum_length)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool BrushCurvesSculptSettings_use_length_interpolate_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void BrushCurvesSculptSettings_use_length_interpolate_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool BrushCurvesSculptSettings_use_radius_interpolate_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void BrushCurvesSculptSettings_use_radius_interpolate_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool BrushCurvesSculptSettings_use_point_count_interpolate_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void BrushCurvesSculptSettings_use_point_count_interpolate_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool BrushCurvesSculptSettings_use_shape_interpolate_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void BrushCurvesSculptSettings_use_shape_interpolate_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

float BrushCurvesSculptSettings_curve_length_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (float)(data->curve_length);
}

void BrushCurvesSculptSettings_curve_length_set(PointerRNA *ptr, float value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->curve_length = (std::remove_reference_t<decltype(data->curve_length)>)std::clamp(value, 0.0f, FLT_MAX);
}

float BrushCurvesSculptSettings_minimum_distance_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (float)(data->minimum_distance);
}

void BrushCurvesSculptSettings_minimum_distance_set(PointerRNA *ptr, float value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->minimum_distance = (std::remove_reference_t<decltype(data->minimum_distance)>)std::clamp(value, 0.0f, FLT_MAX);
}

float BrushCurvesSculptSettings_curve_radius_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (float)(data->curve_radius);
}

void BrushCurvesSculptSettings_curve_radius_set(PointerRNA *ptr, float value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->curve_radius = (std::remove_reference_t<decltype(data->curve_radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

int BrushCurvesSculptSettings_density_add_attempts_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->density_add_attempts);
}

void BrushCurvesSculptSettings_density_add_attempts_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->density_add_attempts = (std::remove_reference_t<decltype(data->density_add_attempts)>)std::clamp(value, 0, INT_MAX);
}

int BrushCurvesSculptSettings_density_mode_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->density_mode);
}

void BrushCurvesSculptSettings_density_mode_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->density_mode = (std::remove_reference_t<decltype(data->density_mode)>)value;
}

PointerRNA BrushCurvesSculptSettings_curve_parameter_falloff_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_parameter_falloff);
}

float BrushTextureSlot_angle_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->rot);
}

void BrushTextureSlot_angle_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->rot = (std::remove_reference_t<decltype(data->rot)>)std::clamp(value, 0.0f, 6.2831854820f);
}

int BrushTextureSlot_map_mode_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->brush_map_mode);
}

void BrushTextureSlot_map_mode_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->brush_map_mode = (std::remove_reference_t<decltype(data->brush_map_mode)>)value;
}

int BrushTextureSlot_mask_map_mode_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->brush_map_mode);
}

void BrushTextureSlot_mask_map_mode_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->brush_map_mode = (std::remove_reference_t<decltype(data->brush_map_mode)>)value;
}

bool BrushTextureSlot_use_rake_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->brush_angle_mode) & 2) != 0);
}

void BrushTextureSlot_use_rake_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->brush_angle_mode = std::remove_reference_t<decltype(data->brush_angle_mode)>(uint64_t(data->brush_angle_mode) | 2); }
    else { data->brush_angle_mode = std::remove_reference_t<decltype(data->brush_angle_mode)>(uint64_t(data->brush_angle_mode) & ~uint64_t(2)); }
}

bool BrushTextureSlot_use_random_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->brush_angle_mode) & 1) != 0);
}

void BrushTextureSlot_use_random_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->brush_angle_mode = std::remove_reference_t<decltype(data->brush_angle_mode)>(uint64_t(data->brush_angle_mode) | 1); }
    else { data->brush_angle_mode = std::remove_reference_t<decltype(data->brush_angle_mode)>(uint64_t(data->brush_angle_mode) & ~uint64_t(1)); }
}

float BrushTextureSlot_random_angle_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->random_angle);
}

void BrushTextureSlot_random_angle_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->random_angle = (std::remove_reference_t<decltype(data->random_angle)>)std::clamp(value, 0.0f, 6.2831854820f);
}

bool BrushTextureSlot_has_texture_angle_source_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextureCapabilities_has_texture_angle_source_get;
    return fn(ptr);
}

bool BrushTextureSlot_has_random_texture_angle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextureCapabilities_has_random_texture_angle_get;
    return fn(ptr);
}

bool BrushTextureSlot_has_texture_angle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextureCapabilities_has_texture_angle_get;
    return fn(ptr);
}











/* Brush */
static BoolPropertyRNA rna_Brush_has_unsaved_changes_;
PropertyRNA &rna_Brush_has_unsaved_changes = reinterpret_cast<PropertyRNA &>(rna_Brush_has_unsaved_changes_);

static EnumPropertyRNA rna_Brush_blend_;
PropertyRNA &rna_Brush_blend = reinterpret_cast<PropertyRNA &>(rna_Brush_blend_);

static EnumPropertyRNA rna_Brush_sculpt_brush_type_;
PropertyRNA &rna_Brush_sculpt_brush_type = reinterpret_cast<PropertyRNA &>(rna_Brush_sculpt_brush_type_);

static EnumPropertyRNA rna_Brush_vertex_brush_type_;
PropertyRNA &rna_Brush_vertex_brush_type = reinterpret_cast<PropertyRNA &>(rna_Brush_vertex_brush_type_);

static EnumPropertyRNA rna_Brush_weight_brush_type_;
PropertyRNA &rna_Brush_weight_brush_type = reinterpret_cast<PropertyRNA &>(rna_Brush_weight_brush_type_);

static EnumPropertyRNA rna_Brush_image_brush_type_;
PropertyRNA &rna_Brush_image_brush_type = reinterpret_cast<PropertyRNA &>(rna_Brush_image_brush_type_);

static EnumPropertyRNA rna_Brush_gpencil_brush_type_;
PropertyRNA &rna_Brush_gpencil_brush_type = reinterpret_cast<PropertyRNA &>(rna_Brush_gpencil_brush_type_);

static EnumPropertyRNA rna_Brush_gpencil_vertex_brush_type_;
PropertyRNA &rna_Brush_gpencil_vertex_brush_type = reinterpret_cast<PropertyRNA &>(rna_Brush_gpencil_vertex_brush_type_);

static EnumPropertyRNA rna_Brush_gpencil_sculpt_brush_type_;
PropertyRNA &rna_Brush_gpencil_sculpt_brush_type = reinterpret_cast<PropertyRNA &>(rna_Brush_gpencil_sculpt_brush_type_);

static EnumPropertyRNA rna_Brush_gpencil_weight_brush_type_;
PropertyRNA &rna_Brush_gpencil_weight_brush_type = reinterpret_cast<PropertyRNA &>(rna_Brush_gpencil_weight_brush_type_);

static EnumPropertyRNA rna_Brush_curves_sculpt_brush_type_;
PropertyRNA &rna_Brush_curves_sculpt_brush_type = reinterpret_cast<PropertyRNA &>(rna_Brush_curves_sculpt_brush_type_);

static EnumPropertyRNA rna_Brush_direction_;
PropertyRNA &rna_Brush_direction = reinterpret_cast<PropertyRNA &>(rna_Brush_direction_);

static EnumPropertyRNA rna_Brush_stroke_method_;
PropertyRNA &rna_Brush_stroke_method = reinterpret_cast<PropertyRNA &>(rna_Brush_stroke_method_);

static EnumPropertyRNA rna_Brush_sculpt_plane_;
PropertyRNA &rna_Brush_sculpt_plane = reinterpret_cast<PropertyRNA &>(rna_Brush_sculpt_plane_);

static EnumPropertyRNA rna_Brush_mask_tool_;
PropertyRNA &rna_Brush_mask_tool = reinterpret_cast<PropertyRNA &>(rna_Brush_mask_tool_);

static EnumPropertyRNA rna_Brush_curve_distance_falloff_preset_;
PropertyRNA &rna_Brush_curve_distance_falloff_preset = reinterpret_cast<PropertyRNA &>(rna_Brush_curve_distance_falloff_preset_);

static EnumPropertyRNA rna_Brush_deform_target_;
PropertyRNA &rna_Brush_deform_target = reinterpret_cast<PropertyRNA &>(rna_Brush_deform_target_);

static EnumPropertyRNA rna_Brush_elastic_deform_type_;
PropertyRNA &rna_Brush_elastic_deform_type = reinterpret_cast<PropertyRNA &>(rna_Brush_elastic_deform_type_);

static EnumPropertyRNA rna_Brush_snake_hook_deform_type_;
PropertyRNA &rna_Brush_snake_hook_deform_type = reinterpret_cast<PropertyRNA &>(rna_Brush_snake_hook_deform_type_);

static EnumPropertyRNA rna_Brush_plane_inversion_mode_;
PropertyRNA &rna_Brush_plane_inversion_mode = reinterpret_cast<PropertyRNA &>(rna_Brush_plane_inversion_mode_);

static EnumPropertyRNA rna_Brush_project_ray_direction_type_;
PropertyRNA &rna_Brush_project_ray_direction_type = reinterpret_cast<PropertyRNA &>(rna_Brush_project_ray_direction_type_);

static FloatPropertyRNA rna_Brush_minimum_distance_;
PropertyRNA &rna_Brush_minimum_distance = reinterpret_cast<PropertyRNA &>(rna_Brush_minimum_distance_);

static EnumPropertyRNA rna_Brush_cloth_deform_type_;
PropertyRNA &rna_Brush_cloth_deform_type = reinterpret_cast<PropertyRNA &>(rna_Brush_cloth_deform_type_);

static EnumPropertyRNA rna_Brush_cloth_force_falloff_type_;
PropertyRNA &rna_Brush_cloth_force_falloff_type = reinterpret_cast<PropertyRNA &>(rna_Brush_cloth_force_falloff_type_);

static EnumPropertyRNA rna_Brush_cloth_simulation_area_type_;
PropertyRNA &rna_Brush_cloth_simulation_area_type = reinterpret_cast<PropertyRNA &>(rna_Brush_cloth_simulation_area_type_);

static EnumPropertyRNA rna_Brush_boundary_falloff_type_;
PropertyRNA &rna_Brush_boundary_falloff_type = reinterpret_cast<PropertyRNA &>(rna_Brush_boundary_falloff_type_);

static EnumPropertyRNA rna_Brush_smooth_deform_type_;
PropertyRNA &rna_Brush_smooth_deform_type = reinterpret_cast<PropertyRNA &>(rna_Brush_smooth_deform_type_);

static EnumPropertyRNA rna_Brush_smear_deform_type_;
PropertyRNA &rna_Brush_smear_deform_type = reinterpret_cast<PropertyRNA &>(rna_Brush_smear_deform_type_);

static EnumPropertyRNA rna_Brush_slide_deform_type_;
PropertyRNA &rna_Brush_slide_deform_type = reinterpret_cast<PropertyRNA &>(rna_Brush_slide_deform_type_);

static EnumPropertyRNA rna_Brush_boundary_deform_type_;
PropertyRNA &rna_Brush_boundary_deform_type = reinterpret_cast<PropertyRNA &>(rna_Brush_boundary_deform_type_);

static EnumPropertyRNA rna_Brush_pose_deform_type_;
PropertyRNA &rna_Brush_pose_deform_type = reinterpret_cast<PropertyRNA &>(rna_Brush_pose_deform_type_);

static EnumPropertyRNA rna_Brush_pose_origin_type_;
PropertyRNA &rna_Brush_pose_origin_type = reinterpret_cast<PropertyRNA &>(rna_Brush_pose_origin_type_);

static EnumPropertyRNA rna_Brush_jitter_unit_;
PropertyRNA &rna_Brush_jitter_unit = reinterpret_cast<PropertyRNA &>(rna_Brush_jitter_unit_);

static EnumPropertyRNA rna_Brush_falloff_shape_;
PropertyRNA &rna_Brush_falloff_shape = reinterpret_cast<PropertyRNA &>(rna_Brush_falloff_shape_);

static IntPropertyRNA rna_Brush_size_;
PropertyRNA &rna_Brush_size = reinterpret_cast<PropertyRNA &>(rna_Brush_size_);

static FloatPropertyRNA rna_Brush_unprojected_size_;
PropertyRNA &rna_Brush_unprojected_size = reinterpret_cast<PropertyRNA &>(rna_Brush_unprojected_size_);

static IntPropertyRNA rna_Brush_input_samples_;
PropertyRNA &rna_Brush_input_samples = reinterpret_cast<PropertyRNA &>(rna_Brush_input_samples_);

static FloatPropertyRNA rna_Brush_jitter_;
PropertyRNA &rna_Brush_jitter = reinterpret_cast<PropertyRNA &>(rna_Brush_jitter_);

static IntPropertyRNA rna_Brush_jitter_absolute_;
PropertyRNA &rna_Brush_jitter_absolute = reinterpret_cast<PropertyRNA &>(rna_Brush_jitter_absolute_);

static IntPropertyRNA rna_Brush_spacing_;
PropertyRNA &rna_Brush_spacing = reinterpret_cast<PropertyRNA &>(rna_Brush_spacing_);

static IntPropertyRNA rna_Brush_grad_spacing_;
PropertyRNA &rna_Brush_grad_spacing = reinterpret_cast<PropertyRNA &>(rna_Brush_grad_spacing_);

static BoolPropertyRNA rna_Brush_use_color_jitter_;
PropertyRNA &rna_Brush_use_color_jitter = reinterpret_cast<PropertyRNA &>(rna_Brush_use_color_jitter_);

static FloatPropertyRNA rna_Brush_hue_jitter_;
PropertyRNA &rna_Brush_hue_jitter = reinterpret_cast<PropertyRNA &>(rna_Brush_hue_jitter_);

static FloatPropertyRNA rna_Brush_saturation_jitter_;
PropertyRNA &rna_Brush_saturation_jitter = reinterpret_cast<PropertyRNA &>(rna_Brush_saturation_jitter_);

static FloatPropertyRNA rna_Brush_value_jitter_;
PropertyRNA &rna_Brush_value_jitter = reinterpret_cast<PropertyRNA &>(rna_Brush_value_jitter_);

static BoolPropertyRNA rna_Brush_use_stroke_random_hue_;
PropertyRNA &rna_Brush_use_stroke_random_hue = reinterpret_cast<PropertyRNA &>(rna_Brush_use_stroke_random_hue_);

static BoolPropertyRNA rna_Brush_use_stroke_random_sat_;
PropertyRNA &rna_Brush_use_stroke_random_sat = reinterpret_cast<PropertyRNA &>(rna_Brush_use_stroke_random_sat_);

static BoolPropertyRNA rna_Brush_use_stroke_random_val_;
PropertyRNA &rna_Brush_use_stroke_random_val = reinterpret_cast<PropertyRNA &>(rna_Brush_use_stroke_random_val_);

static BoolPropertyRNA rna_Brush_use_random_press_hue_;
PropertyRNA &rna_Brush_use_random_press_hue = reinterpret_cast<PropertyRNA &>(rna_Brush_use_random_press_hue_);

static BoolPropertyRNA rna_Brush_use_random_press_sat_;
PropertyRNA &rna_Brush_use_random_press_sat = reinterpret_cast<PropertyRNA &>(rna_Brush_use_random_press_sat_);

static BoolPropertyRNA rna_Brush_use_random_press_val_;
PropertyRNA &rna_Brush_use_random_press_val = reinterpret_cast<PropertyRNA &>(rna_Brush_use_random_press_val_);

static PointerPropertyRNA rna_Brush_curve_random_hue_;
PropertyRNA &rna_Brush_curve_random_hue = reinterpret_cast<PropertyRNA &>(rna_Brush_curve_random_hue_);

static PointerPropertyRNA rna_Brush_curve_random_saturation_;
PropertyRNA &rna_Brush_curve_random_saturation = reinterpret_cast<PropertyRNA &>(rna_Brush_curve_random_saturation_);

static PointerPropertyRNA rna_Brush_curve_random_value_;
PropertyRNA &rna_Brush_curve_random_value = reinterpret_cast<PropertyRNA &>(rna_Brush_curve_random_value_);

static PointerPropertyRNA rna_Brush_curve_size_;
PropertyRNA &rna_Brush_curve_size = reinterpret_cast<PropertyRNA &>(rna_Brush_curve_size_);

static PointerPropertyRNA rna_Brush_curve_strength_;
PropertyRNA &rna_Brush_curve_strength = reinterpret_cast<PropertyRNA &>(rna_Brush_curve_strength_);

static PointerPropertyRNA rna_Brush_curve_jitter_;
PropertyRNA &rna_Brush_curve_jitter = reinterpret_cast<PropertyRNA &>(rna_Brush_curve_jitter_);

static IntPropertyRNA rna_Brush_smooth_stroke_radius_;
PropertyRNA &rna_Brush_smooth_stroke_radius = reinterpret_cast<PropertyRNA &>(rna_Brush_smooth_stroke_radius_);

static FloatPropertyRNA rna_Brush_smooth_stroke_factor_;
PropertyRNA &rna_Brush_smooth_stroke_factor = reinterpret_cast<PropertyRNA &>(rna_Brush_smooth_stroke_factor_);

static FloatPropertyRNA rna_Brush_rate_;
PropertyRNA &rna_Brush_rate = reinterpret_cast<PropertyRNA &>(rna_Brush_rate_);

static FloatPropertyRNA rna_Brush_color_;
PropertyRNA &rna_Brush_color = reinterpret_cast<PropertyRNA &>(rna_Brush_color_);

static FloatPropertyRNA rna_Brush_secondary_color_;
PropertyRNA &rna_Brush_secondary_color = reinterpret_cast<PropertyRNA &>(rna_Brush_secondary_color_);

static FloatPropertyRNA rna_Brush_weight_;
PropertyRNA &rna_Brush_weight = reinterpret_cast<PropertyRNA &>(rna_Brush_weight_);

static FloatPropertyRNA rna_Brush_strength_;
PropertyRNA &rna_Brush_strength = reinterpret_cast<PropertyRNA &>(rna_Brush_strength_);

static FloatPropertyRNA rna_Brush_flow_;
PropertyRNA &rna_Brush_flow = reinterpret_cast<PropertyRNA &>(rna_Brush_flow_);

static FloatPropertyRNA rna_Brush_wet_mix_;
PropertyRNA &rna_Brush_wet_mix = reinterpret_cast<PropertyRNA &>(rna_Brush_wet_mix_);

static FloatPropertyRNA rna_Brush_wet_persistence_;
PropertyRNA &rna_Brush_wet_persistence = reinterpret_cast<PropertyRNA &>(rna_Brush_wet_persistence_);

static FloatPropertyRNA rna_Brush_density_;
PropertyRNA &rna_Brush_density = reinterpret_cast<PropertyRNA &>(rna_Brush_density_);

static FloatPropertyRNA rna_Brush_tip_scale_x_;
PropertyRNA &rna_Brush_tip_scale_x = reinterpret_cast<PropertyRNA &>(rna_Brush_tip_scale_x_);

static BoolPropertyRNA rna_Brush_use_hardness_pressure_;
PropertyRNA &rna_Brush_use_hardness_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_use_hardness_pressure_);

static BoolPropertyRNA rna_Brush_invert_hardness_pressure_;
PropertyRNA &rna_Brush_invert_hardness_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_invert_hardness_pressure_);

static BoolPropertyRNA rna_Brush_use_flow_pressure_;
PropertyRNA &rna_Brush_use_flow_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_use_flow_pressure_);

static BoolPropertyRNA rna_Brush_invert_flow_pressure_;
PropertyRNA &rna_Brush_invert_flow_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_invert_flow_pressure_);

static BoolPropertyRNA rna_Brush_use_wet_mix_pressure_;
PropertyRNA &rna_Brush_use_wet_mix_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_use_wet_mix_pressure_);

static BoolPropertyRNA rna_Brush_invert_wet_mix_pressure_;
PropertyRNA &rna_Brush_invert_wet_mix_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_invert_wet_mix_pressure_);

static BoolPropertyRNA rna_Brush_use_wet_persistence_pressure_;
PropertyRNA &rna_Brush_use_wet_persistence_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_use_wet_persistence_pressure_);

static BoolPropertyRNA rna_Brush_invert_wet_persistence_pressure_;
PropertyRNA &rna_Brush_invert_wet_persistence_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_invert_wet_persistence_pressure_);

static BoolPropertyRNA rna_Brush_use_density_pressure_;
PropertyRNA &rna_Brush_use_density_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_use_density_pressure_);

static BoolPropertyRNA rna_Brush_invert_density_pressure_;
PropertyRNA &rna_Brush_invert_density_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_invert_density_pressure_);

static FloatPropertyRNA rna_Brush_dash_ratio_;
PropertyRNA &rna_Brush_dash_ratio = reinterpret_cast<PropertyRNA &>(rna_Brush_dash_ratio_);

static IntPropertyRNA rna_Brush_dash_samples_;
PropertyRNA &rna_Brush_dash_samples = reinterpret_cast<PropertyRNA &>(rna_Brush_dash_samples_);

static FloatPropertyRNA rna_Brush_plane_offset_;
PropertyRNA &rna_Brush_plane_offset = reinterpret_cast<PropertyRNA &>(rna_Brush_plane_offset_);

static FloatPropertyRNA rna_Brush_plane_trim_;
PropertyRNA &rna_Brush_plane_trim = reinterpret_cast<PropertyRNA &>(rna_Brush_plane_trim_);

static FloatPropertyRNA rna_Brush_height_;
PropertyRNA &rna_Brush_height = reinterpret_cast<PropertyRNA &>(rna_Brush_height_);

static FloatPropertyRNA rna_Brush_plane_depth_;
PropertyRNA &rna_Brush_plane_depth = reinterpret_cast<PropertyRNA &>(rna_Brush_plane_depth_);

static FloatPropertyRNA rna_Brush_plane_height_;
PropertyRNA &rna_Brush_plane_height = reinterpret_cast<PropertyRNA &>(rna_Brush_plane_height_);

static FloatPropertyRNA rna_Brush_stabilize_normal_;
PropertyRNA &rna_Brush_stabilize_normal = reinterpret_cast<PropertyRNA &>(rna_Brush_stabilize_normal_);

static FloatPropertyRNA rna_Brush_stabilize_plane_;
PropertyRNA &rna_Brush_stabilize_plane = reinterpret_cast<PropertyRNA &>(rna_Brush_stabilize_plane_);

static FloatPropertyRNA rna_Brush_texture_sample_bias_;
PropertyRNA &rna_Brush_texture_sample_bias = reinterpret_cast<PropertyRNA &>(rna_Brush_texture_sample_bias_);

static BoolPropertyRNA rna_Brush_use_color_as_displacement_;
PropertyRNA &rna_Brush_use_color_as_displacement = reinterpret_cast<PropertyRNA &>(rna_Brush_use_color_as_displacement_);

static FloatPropertyRNA rna_Brush_normal_weight_;
PropertyRNA &rna_Brush_normal_weight = reinterpret_cast<PropertyRNA &>(rna_Brush_normal_weight_);

static FloatPropertyRNA rna_Brush_elastic_deform_volume_preservation_;
PropertyRNA &rna_Brush_elastic_deform_volume_preservation = reinterpret_cast<PropertyRNA &>(rna_Brush_elastic_deform_volume_preservation_);

static FloatPropertyRNA rna_Brush_rake_factor_;
PropertyRNA &rna_Brush_rake_factor = reinterpret_cast<PropertyRNA &>(rna_Brush_rake_factor_);

static FloatPropertyRNA rna_Brush_crease_pinch_factor_;
PropertyRNA &rna_Brush_crease_pinch_factor = reinterpret_cast<PropertyRNA &>(rna_Brush_crease_pinch_factor_);

static FloatPropertyRNA rna_Brush_pose_offset_;
PropertyRNA &rna_Brush_pose_offset = reinterpret_cast<PropertyRNA &>(rna_Brush_pose_offset_);

static FloatPropertyRNA rna_Brush_disconnected_distance_max_;
PropertyRNA &rna_Brush_disconnected_distance_max = reinterpret_cast<PropertyRNA &>(rna_Brush_disconnected_distance_max_);

static FloatPropertyRNA rna_Brush_boundary_offset_;
PropertyRNA &rna_Brush_boundary_offset = reinterpret_cast<PropertyRNA &>(rna_Brush_boundary_offset_);

static FloatPropertyRNA rna_Brush_surface_smooth_shape_preservation_;
PropertyRNA &rna_Brush_surface_smooth_shape_preservation = reinterpret_cast<PropertyRNA &>(rna_Brush_surface_smooth_shape_preservation_);

static FloatPropertyRNA rna_Brush_surface_smooth_current_vertex_;
PropertyRNA &rna_Brush_surface_smooth_current_vertex = reinterpret_cast<PropertyRNA &>(rna_Brush_surface_smooth_current_vertex_);

static IntPropertyRNA rna_Brush_surface_smooth_iterations_;
PropertyRNA &rna_Brush_surface_smooth_iterations = reinterpret_cast<PropertyRNA &>(rna_Brush_surface_smooth_iterations_);

static FloatPropertyRNA rna_Brush_multiplane_scrape_angle_;
PropertyRNA &rna_Brush_multiplane_scrape_angle = reinterpret_cast<PropertyRNA &>(rna_Brush_multiplane_scrape_angle_);

static IntPropertyRNA rna_Brush_pose_smooth_iterations_;
PropertyRNA &rna_Brush_pose_smooth_iterations = reinterpret_cast<PropertyRNA &>(rna_Brush_pose_smooth_iterations_);

static IntPropertyRNA rna_Brush_pose_ik_segments_;
PropertyRNA &rna_Brush_pose_ik_segments = reinterpret_cast<PropertyRNA &>(rna_Brush_pose_ik_segments_);

static FloatPropertyRNA rna_Brush_tip_roundness_;
PropertyRNA &rna_Brush_tip_roundness = reinterpret_cast<PropertyRNA &>(rna_Brush_tip_roundness_);

static FloatPropertyRNA rna_Brush_cloth_mass_;
PropertyRNA &rna_Brush_cloth_mass = reinterpret_cast<PropertyRNA &>(rna_Brush_cloth_mass_);

static FloatPropertyRNA rna_Brush_cloth_damping_;
PropertyRNA &rna_Brush_cloth_damping = reinterpret_cast<PropertyRNA &>(rna_Brush_cloth_damping_);

static FloatPropertyRNA rna_Brush_cloth_sim_limit_;
PropertyRNA &rna_Brush_cloth_sim_limit = reinterpret_cast<PropertyRNA &>(rna_Brush_cloth_sim_limit_);

static FloatPropertyRNA rna_Brush_cloth_sim_falloff_;
PropertyRNA &rna_Brush_cloth_sim_falloff = reinterpret_cast<PropertyRNA &>(rna_Brush_cloth_sim_falloff_);

static FloatPropertyRNA rna_Brush_cloth_constraint_softbody_strength_;
PropertyRNA &rna_Brush_cloth_constraint_softbody_strength = reinterpret_cast<PropertyRNA &>(rna_Brush_cloth_constraint_softbody_strength_);

static FloatPropertyRNA rna_Brush_hardness_;
PropertyRNA &rna_Brush_hardness = reinterpret_cast<PropertyRNA &>(rna_Brush_hardness_);

static FloatPropertyRNA rna_Brush_auto_smooth_factor_;
PropertyRNA &rna_Brush_auto_smooth_factor = reinterpret_cast<PropertyRNA &>(rna_Brush_auto_smooth_factor_);

static FloatPropertyRNA rna_Brush_topology_rake_factor_;
PropertyRNA &rna_Brush_topology_rake_factor = reinterpret_cast<PropertyRNA &>(rna_Brush_topology_rake_factor_);

static FloatPropertyRNA rna_Brush_tilt_strength_factor_;
PropertyRNA &rna_Brush_tilt_strength_factor = reinterpret_cast<PropertyRNA &>(rna_Brush_tilt_strength_factor_);

static FloatPropertyRNA rna_Brush_normal_radius_factor_;
PropertyRNA &rna_Brush_normal_radius_factor = reinterpret_cast<PropertyRNA &>(rna_Brush_normal_radius_factor_);

static FloatPropertyRNA rna_Brush_area_radius_factor_;
PropertyRNA &rna_Brush_area_radius_factor = reinterpret_cast<PropertyRNA &>(rna_Brush_area_radius_factor_);

static FloatPropertyRNA rna_Brush_wet_paint_radius_factor_;
PropertyRNA &rna_Brush_wet_paint_radius_factor = reinterpret_cast<PropertyRNA &>(rna_Brush_wet_paint_radius_factor_);

static FloatPropertyRNA rna_Brush_stencil_pos_;
PropertyRNA &rna_Brush_stencil_pos = reinterpret_cast<PropertyRNA &>(rna_Brush_stencil_pos_);

static FloatPropertyRNA rna_Brush_stencil_dimension_;
PropertyRNA &rna_Brush_stencil_dimension = reinterpret_cast<PropertyRNA &>(rna_Brush_stencil_dimension_);

static FloatPropertyRNA rna_Brush_mask_stencil_pos_;
PropertyRNA &rna_Brush_mask_stencil_pos = reinterpret_cast<PropertyRNA &>(rna_Brush_mask_stencil_pos_);

static FloatPropertyRNA rna_Brush_mask_stencil_dimension_;
PropertyRNA &rna_Brush_mask_stencil_dimension = reinterpret_cast<PropertyRNA &>(rna_Brush_mask_stencil_dimension_);

static FloatPropertyRNA rna_Brush_sharp_threshold_;
PropertyRNA &rna_Brush_sharp_threshold = reinterpret_cast<PropertyRNA &>(rna_Brush_sharp_threshold_);

static FloatPropertyRNA rna_Brush_fill_threshold_;
PropertyRNA &rna_Brush_fill_threshold = reinterpret_cast<PropertyRNA &>(rna_Brush_fill_threshold_);

static IntPropertyRNA rna_Brush_blur_kernel_radius_;
PropertyRNA &rna_Brush_blur_kernel_radius = reinterpret_cast<PropertyRNA &>(rna_Brush_blur_kernel_radius_);

static EnumPropertyRNA rna_Brush_blur_mode_;
PropertyRNA &rna_Brush_blur_mode = reinterpret_cast<PropertyRNA &>(rna_Brush_blur_mode_);

static FloatPropertyRNA rna_Brush_falloff_angle_;
PropertyRNA &rna_Brush_falloff_angle = reinterpret_cast<PropertyRNA &>(rna_Brush_falloff_angle_);

static BoolPropertyRNA rna_Brush_use_original_normal_;
PropertyRNA &rna_Brush_use_original_normal = reinterpret_cast<PropertyRNA &>(rna_Brush_use_original_normal_);

static BoolPropertyRNA rna_Brush_use_original_plane_;
PropertyRNA &rna_Brush_use_original_plane = reinterpret_cast<PropertyRNA &>(rna_Brush_use_original_plane_);

static EnumPropertyRNA rna_Brush_use_scene_spacing_;
PropertyRNA &rna_Brush_use_scene_spacing = reinterpret_cast<PropertyRNA &>(rna_Brush_use_scene_spacing_);

static BoolPropertyRNA rna_Brush_use_grab_active_vertex_;
PropertyRNA &rna_Brush_use_grab_active_vertex = reinterpret_cast<PropertyRNA &>(rna_Brush_use_grab_active_vertex_);

static BoolPropertyRNA rna_Brush_use_grab_silhouette_;
PropertyRNA &rna_Brush_use_grab_silhouette = reinterpret_cast<PropertyRNA &>(rna_Brush_use_grab_silhouette_);

static BoolPropertyRNA rna_Brush_use_paint_antialiasing_;
PropertyRNA &rna_Brush_use_paint_antialiasing = reinterpret_cast<PropertyRNA &>(rna_Brush_use_paint_antialiasing_);

static BoolPropertyRNA rna_Brush_use_multiplane_scrape_dynamic_;
PropertyRNA &rna_Brush_use_multiplane_scrape_dynamic = reinterpret_cast<PropertyRNA &>(rna_Brush_use_multiplane_scrape_dynamic_);

static BoolPropertyRNA rna_Brush_show_multiplane_scrape_planes_preview_;
PropertyRNA &rna_Brush_show_multiplane_scrape_planes_preview = reinterpret_cast<PropertyRNA &>(rna_Brush_show_multiplane_scrape_planes_preview_);

static BoolPropertyRNA rna_Brush_use_pose_ik_anchored_;
PropertyRNA &rna_Brush_use_pose_ik_anchored = reinterpret_cast<PropertyRNA &>(rna_Brush_use_pose_ik_anchored_);

static BoolPropertyRNA rna_Brush_use_pose_lock_rotation_;
PropertyRNA &rna_Brush_use_pose_lock_rotation = reinterpret_cast<PropertyRNA &>(rna_Brush_use_pose_lock_rotation_);

static BoolPropertyRNA rna_Brush_use_connected_only_;
PropertyRNA &rna_Brush_use_connected_only = reinterpret_cast<PropertyRNA &>(rna_Brush_use_connected_only_);

static BoolPropertyRNA rna_Brush_use_cloth_pin_simulation_boundary_;
PropertyRNA &rna_Brush_use_cloth_pin_simulation_boundary = reinterpret_cast<PropertyRNA &>(rna_Brush_use_cloth_pin_simulation_boundary_);

static BoolPropertyRNA rna_Brush_use_cloth_collision_;
PropertyRNA &rna_Brush_use_cloth_collision = reinterpret_cast<PropertyRNA &>(rna_Brush_use_cloth_collision_);

static BoolPropertyRNA rna_Brush_invert_to_scrape_fill_;
PropertyRNA &rna_Brush_invert_to_scrape_fill = reinterpret_cast<PropertyRNA &>(rna_Brush_invert_to_scrape_fill_);

static BoolPropertyRNA rna_Brush_use_pressure_strength_;
PropertyRNA &rna_Brush_use_pressure_strength = reinterpret_cast<PropertyRNA &>(rna_Brush_use_pressure_strength_);

static BoolPropertyRNA rna_Brush_use_offset_pressure_;
PropertyRNA &rna_Brush_use_offset_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_use_offset_pressure_);

static BoolPropertyRNA rna_Brush_use_pressure_area_radius_;
PropertyRNA &rna_Brush_use_pressure_area_radius = reinterpret_cast<PropertyRNA &>(rna_Brush_use_pressure_area_radius_);

static BoolPropertyRNA rna_Brush_use_pressure_size_;
PropertyRNA &rna_Brush_use_pressure_size = reinterpret_cast<PropertyRNA &>(rna_Brush_use_pressure_size_);

static BoolPropertyRNA rna_Brush_use_pressure_jitter_;
PropertyRNA &rna_Brush_use_pressure_jitter = reinterpret_cast<PropertyRNA &>(rna_Brush_use_pressure_jitter_);

static BoolPropertyRNA rna_Brush_use_pressure_spacing_;
PropertyRNA &rna_Brush_use_pressure_spacing = reinterpret_cast<PropertyRNA &>(rna_Brush_use_pressure_spacing_);

static EnumPropertyRNA rna_Brush_use_pressure_masking_;
PropertyRNA &rna_Brush_use_pressure_masking = reinterpret_cast<PropertyRNA &>(rna_Brush_use_pressure_masking_);

static BoolPropertyRNA rna_Brush_use_inverse_smooth_pressure_;
PropertyRNA &rna_Brush_use_inverse_smooth_pressure = reinterpret_cast<PropertyRNA &>(rna_Brush_use_inverse_smooth_pressure_);

static BoolPropertyRNA rna_Brush_use_plane_trim_;
PropertyRNA &rna_Brush_use_plane_trim = reinterpret_cast<PropertyRNA &>(rna_Brush_use_plane_trim_);

static BoolPropertyRNA rna_Brush_use_frontface_;
PropertyRNA &rna_Brush_use_frontface = reinterpret_cast<PropertyRNA &>(rna_Brush_use_frontface_);

static BoolPropertyRNA rna_Brush_use_frontface_falloff_;
PropertyRNA &rna_Brush_use_frontface_falloff = reinterpret_cast<PropertyRNA &>(rna_Brush_use_frontface_falloff_);

static BoolPropertyRNA rna_Brush_use_smooth_stroke_;
PropertyRNA &rna_Brush_use_smooth_stroke = reinterpret_cast<PropertyRNA &>(rna_Brush_use_smooth_stroke_);

static BoolPropertyRNA rna_Brush_use_persistent_;
PropertyRNA &rna_Brush_use_persistent = reinterpret_cast<PropertyRNA &>(rna_Brush_use_persistent_);

static BoolPropertyRNA rna_Brush_use_bidirectional_;
PropertyRNA &rna_Brush_use_bidirectional = reinterpret_cast<PropertyRNA &>(rna_Brush_use_bidirectional_);

static BoolPropertyRNA rna_Brush_use_accumulate_;
PropertyRNA &rna_Brush_use_accumulate = reinterpret_cast<PropertyRNA &>(rna_Brush_use_accumulate_);

static BoolPropertyRNA rna_Brush_use_space_attenuation_;
PropertyRNA &rna_Brush_use_space_attenuation = reinterpret_cast<PropertyRNA &>(rna_Brush_use_space_attenuation_);

static BoolPropertyRNA rna_Brush_use_adaptive_space_;
PropertyRNA &rna_Brush_use_adaptive_space = reinterpret_cast<PropertyRNA &>(rna_Brush_use_adaptive_space_);

static EnumPropertyRNA rna_Brush_use_locked_size_;
PropertyRNA &rna_Brush_use_locked_size = reinterpret_cast<PropertyRNA &>(rna_Brush_use_locked_size_);

static EnumPropertyRNA rna_Brush_color_type_;
PropertyRNA &rna_Brush_color_type = reinterpret_cast<PropertyRNA &>(rna_Brush_color_type_);

static BoolPropertyRNA rna_Brush_use_edge_to_edge_;
PropertyRNA &rna_Brush_use_edge_to_edge = reinterpret_cast<PropertyRNA &>(rna_Brush_use_edge_to_edge_);

static BoolPropertyRNA rna_Brush_use_alpha_;
PropertyRNA &rna_Brush_use_alpha = reinterpret_cast<PropertyRNA &>(rna_Brush_use_alpha_);

static PointerPropertyRNA rna_Brush_curve_distance_falloff_;
PropertyRNA &rna_Brush_curve_distance_falloff = reinterpret_cast<PropertyRNA &>(rna_Brush_curve_distance_falloff_);

static PointerPropertyRNA rna_Brush_paint_curve_;
PropertyRNA &rna_Brush_paint_curve = reinterpret_cast<PropertyRNA &>(rna_Brush_paint_curve_);

static PointerPropertyRNA rna_Brush_gradient_;
PropertyRNA &rna_Brush_gradient = reinterpret_cast<PropertyRNA &>(rna_Brush_gradient_);

static EnumPropertyRNA rna_Brush_gradient_stroke_mode_;
PropertyRNA &rna_Brush_gradient_stroke_mode = reinterpret_cast<PropertyRNA &>(rna_Brush_gradient_stroke_mode_);

static EnumPropertyRNA rna_Brush_gradient_fill_mode_;
PropertyRNA &rna_Brush_gradient_fill_mode = reinterpret_cast<PropertyRNA &>(rna_Brush_gradient_fill_mode_);

static BoolPropertyRNA rna_Brush_use_primary_overlay_;
PropertyRNA &rna_Brush_use_primary_overlay = reinterpret_cast<PropertyRNA &>(rna_Brush_use_primary_overlay_);

static BoolPropertyRNA rna_Brush_use_secondary_overlay_;
PropertyRNA &rna_Brush_use_secondary_overlay = reinterpret_cast<PropertyRNA &>(rna_Brush_use_secondary_overlay_);

static BoolPropertyRNA rna_Brush_use_cursor_overlay_;
PropertyRNA &rna_Brush_use_cursor_overlay = reinterpret_cast<PropertyRNA &>(rna_Brush_use_cursor_overlay_);

static BoolPropertyRNA rna_Brush_use_cursor_overlay_override_;
PropertyRNA &rna_Brush_use_cursor_overlay_override = reinterpret_cast<PropertyRNA &>(rna_Brush_use_cursor_overlay_override_);

static BoolPropertyRNA rna_Brush_use_primary_overlay_override_;
PropertyRNA &rna_Brush_use_primary_overlay_override = reinterpret_cast<PropertyRNA &>(rna_Brush_use_primary_overlay_override_);

static BoolPropertyRNA rna_Brush_use_secondary_overlay_override_;
PropertyRNA &rna_Brush_use_secondary_overlay_override = reinterpret_cast<PropertyRNA &>(rna_Brush_use_secondary_overlay_override_);

static BoolPropertyRNA rna_Brush_use_paint_sculpt_;
PropertyRNA &rna_Brush_use_paint_sculpt = reinterpret_cast<PropertyRNA &>(rna_Brush_use_paint_sculpt_);

static BoolPropertyRNA rna_Brush_use_paint_uv_sculpt_;
PropertyRNA &rna_Brush_use_paint_uv_sculpt = reinterpret_cast<PropertyRNA &>(rna_Brush_use_paint_uv_sculpt_);

static BoolPropertyRNA rna_Brush_use_paint_vertex_;
PropertyRNA &rna_Brush_use_paint_vertex = reinterpret_cast<PropertyRNA &>(rna_Brush_use_paint_vertex_);

static BoolPropertyRNA rna_Brush_use_paint_weight_;
PropertyRNA &rna_Brush_use_paint_weight = reinterpret_cast<PropertyRNA &>(rna_Brush_use_paint_weight_);

static BoolPropertyRNA rna_Brush_use_paint_image_;
PropertyRNA &rna_Brush_use_paint_image = reinterpret_cast<PropertyRNA &>(rna_Brush_use_paint_image_);

static BoolPropertyRNA rna_Brush_use_paint_grease_pencil_;
PropertyRNA &rna_Brush_use_paint_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_Brush_use_paint_grease_pencil_);

static BoolPropertyRNA rna_Brush_use_vertex_grease_pencil_;
PropertyRNA &rna_Brush_use_vertex_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_Brush_use_vertex_grease_pencil_);

static BoolPropertyRNA rna_Brush_use_paint_sculpt_curves_;
PropertyRNA &rna_Brush_use_paint_sculpt_curves = reinterpret_cast<PropertyRNA &>(rna_Brush_use_paint_sculpt_curves_);

static PointerPropertyRNA rna_Brush_texture_slot_;
PropertyRNA &rna_Brush_texture_slot = reinterpret_cast<PropertyRNA &>(rna_Brush_texture_slot_);

static PointerPropertyRNA rna_Brush_texture_;
PropertyRNA &rna_Brush_texture = reinterpret_cast<PropertyRNA &>(rna_Brush_texture_);

static PointerPropertyRNA rna_Brush_mask_texture_slot_;
PropertyRNA &rna_Brush_mask_texture_slot = reinterpret_cast<PropertyRNA &>(rna_Brush_mask_texture_slot_);

static PointerPropertyRNA rna_Brush_mask_texture_;
PropertyRNA &rna_Brush_mask_texture = reinterpret_cast<PropertyRNA &>(rna_Brush_mask_texture_);

static IntPropertyRNA rna_Brush_texture_overlay_alpha_;
PropertyRNA &rna_Brush_texture_overlay_alpha = reinterpret_cast<PropertyRNA &>(rna_Brush_texture_overlay_alpha_);

static IntPropertyRNA rna_Brush_mask_overlay_alpha_;
PropertyRNA &rna_Brush_mask_overlay_alpha = reinterpret_cast<PropertyRNA &>(rna_Brush_mask_overlay_alpha_);

static IntPropertyRNA rna_Brush_cursor_overlay_alpha_;
PropertyRNA &rna_Brush_cursor_overlay_alpha = reinterpret_cast<PropertyRNA &>(rna_Brush_cursor_overlay_alpha_);

static FloatPropertyRNA rna_Brush_cursor_color_add_;
PropertyRNA &rna_Brush_cursor_color_add = reinterpret_cast<PropertyRNA &>(rna_Brush_cursor_color_add_);

static FloatPropertyRNA rna_Brush_cursor_color_subtract_;
PropertyRNA &rna_Brush_cursor_color_subtract = reinterpret_cast<PropertyRNA &>(rna_Brush_cursor_color_subtract_);

static PointerPropertyRNA rna_Brush_brush_capabilities_;
PropertyRNA &rna_Brush_brush_capabilities = reinterpret_cast<PropertyRNA &>(rna_Brush_brush_capabilities_);

static PointerPropertyRNA rna_Brush_sculpt_capabilities_;
PropertyRNA &rna_Brush_sculpt_capabilities = reinterpret_cast<PropertyRNA &>(rna_Brush_sculpt_capabilities_);

static PointerPropertyRNA rna_Brush_image_paint_capabilities_;
PropertyRNA &rna_Brush_image_paint_capabilities = reinterpret_cast<PropertyRNA &>(rna_Brush_image_paint_capabilities_);

static PointerPropertyRNA rna_Brush_vertex_paint_capabilities_;
PropertyRNA &rna_Brush_vertex_paint_capabilities = reinterpret_cast<PropertyRNA &>(rna_Brush_vertex_paint_capabilities_);

static PointerPropertyRNA rna_Brush_weight_paint_capabilities_;
PropertyRNA &rna_Brush_weight_paint_capabilities = reinterpret_cast<PropertyRNA &>(rna_Brush_weight_paint_capabilities_);

static PointerPropertyRNA rna_Brush_gpencil_settings_;
PropertyRNA &rna_Brush_gpencil_settings = reinterpret_cast<PropertyRNA &>(rna_Brush_gpencil_settings_);

static PointerPropertyRNA rna_Brush_curves_sculpt_settings_;
PropertyRNA &rna_Brush_curves_sculpt_settings = reinterpret_cast<PropertyRNA &>(rna_Brush_curves_sculpt_settings_);

static PointerPropertyRNA rna_Brush_mesh_automasking_settings_;
PropertyRNA &rna_Brush_mesh_automasking_settings = reinterpret_cast<PropertyRNA &>(rna_Brush_mesh_automasking_settings_);

StructRNA *RNA_Brush;
void register_struct_Brush(BlenderRNA &brna)
{
	rna_Brush_has_unsaved_changes_ = {
		{&rna_Brush_blend, 	nullptr,
		-1, "has_unsaved_changes", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Has unsaved changes",
		"Indicates that there are any user visible changes since the brush has been imported or read from the file",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, has_unsaved_changes), RawPropertyType(3), nullptr},
		Brush_has_unsaved_changes_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Brush_blend_items[31] = {
		{0, "MIX", 0, "Mix", "Use Mix blending mode while painting"	},
		{0, "", 0, nullptr, nullptr	},
		{5, "DARKEN", 0, "Darken", "Use Darken blending mode while painting"	},
		{3, "MUL", 0, "Multiply", "Use Multiply blending mode while painting"	},
		{10, "COLORBURN", 0, "Color Burn", "Use Color Burn blending mode while painting"	},
		{11, "LINEARBURN", 0, "Linear Burn", "Use Linear Burn blending mode while painting"	},
		{0, "", 0, nullptr, nullptr	},
		{4, "LIGHTEN", 0, "Lighten", "Use Lighten blending mode while painting"	},
		{13, "SCREEN", 0, "Screen", "Use Screen blending mode while painting"	},
		{12, "COLORDODGE", 0, "Color Dodge", "Use Color Dodge blending mode while painting"	},
		{1, "ADD", 0, "Add", "Use Add blending mode while painting"	},
		{0, "", 0, nullptr, nullptr	},
		{8, "OVERLAY", 0, "Overlay", "Use Overlay blending mode while painting"	},
		{14, "SOFTLIGHT", 0, "Soft Light", "Use Soft Light blending mode while painting"	},
		{9, "HARDLIGHT", 0, "Hard Light", "Use Hard Light blending mode while painting"	},
		{16, "VIVIDLIGHT", 0, "Vivid Light", "Use Vivid Light blending mode while painting"	},
		{17, "LINEARLIGHT", 0, "Linear Light", "Use Linear Light blending mode while painting"	},
		{15, "PINLIGHT", 0, "Pin Light", "Use Pin Light blending mode while painting"	},
		{0, "", 0, nullptr, nullptr	},
		{18, "DIFFERENCE", 0, "Difference", "Use Difference blending mode while painting"	},
		{19, "EXCLUSION", 0, "Exclusion", "Use Exclusion blending mode while painting"	},
		{2, "SUB", 0, "Subtract", "Use Subtract blending mode while painting"	},
		{0, "", 0, nullptr, nullptr	},
		{20, "HUE", 0, "Hue", "Use Hue blending mode while painting"	},
		{21, "SATURATION", 0, "Saturation", "Use Saturation blending mode while painting"	},
		{23, "COLOR", 0, "Color", "Use Color blending mode while painting"	},
		{22, "LUMINOSITY", 0, "Value", "Use Value blending mode while painting"	},
		{0, "", 0, nullptr, nullptr	},
		{6, "ERASE_ALPHA", 0, "Erase Alpha", "Erase alpha while painting"	},
		{7, "ADD_ALPHA", 0, "Add Alpha", "Add alpha while painting"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_blend_ = {
		{&rna_Brush_sculpt_brush_type, 	&rna_Brush_has_unsaved_changes,
		-1, "blend", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blending Mode",
		"Brush blending mode",
		0, "Color",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, blend), RawPropertyType(1), nullptr},
		Brush_blend_get, Brush_blend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_blend_items, 30, 0
	};

	rna_Brush_sculpt_brush_type_ = {
		{&rna_Brush_vertex_brush_type, 	&rna_Brush_blend,
		-1, "sculpt_brush_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brush Type",
		"",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, sculpt_brush_type), RawPropertyType(2), nullptr},
		Brush_sculpt_brush_type_get, Brush_sculpt_brush_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_sculpt_brush_type_items, 35, 1
	};

	rna_Brush_vertex_brush_type_ = {
		{&rna_Brush_weight_brush_type, 	&rna_Brush_sculpt_brush_type,
		-1, "vertex_brush_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brush Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, vertex_brush_type), RawPropertyType(2), nullptr},
		Brush_vertex_brush_type_get, Brush_vertex_brush_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_vertex_brush_type_items, 4, 0
	};

	rna_Brush_weight_brush_type_ = {
		{&rna_Brush_image_brush_type, 	&rna_Brush_vertex_brush_type,
		-1, "weight_brush_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brush Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, weight_brush_type), RawPropertyType(2), nullptr},
		Brush_weight_brush_type_get, Brush_weight_brush_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_weight_brush_type_items, 4, 0
	};

	rna_Brush_image_brush_type_ = {
		{&rna_Brush_gpencil_brush_type, 	&rna_Brush_weight_brush_type,
		-1, "image_brush_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brush Type",
		"",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 268697600, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, image_brush_type), RawPropertyType(2), nullptr},
		Brush_image_brush_type_get, Brush_image_brush_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_image_brush_type_items, 6, 0
	};

	rna_Brush_gpencil_brush_type_ = {
		{&rna_Brush_gpencil_vertex_brush_type, 	&rna_Brush_image_brush_type,
		-1, "gpencil_brush_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brush Type",
		"",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, gpencil_brush_type), RawPropertyType(2), nullptr},
		Brush_gpencil_brush_type_get, Brush_gpencil_brush_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_gpencil_types_items, 4, 0
	};

	rna_Brush_gpencil_vertex_brush_type_ = {
		{&rna_Brush_gpencil_sculpt_brush_type, 	&rna_Brush_gpencil_brush_type,
		-1, "gpencil_vertex_brush_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brush Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, gpencil_vertex_brush_type), RawPropertyType(2), nullptr},
		Brush_gpencil_vertex_brush_type_get, Brush_gpencil_vertex_brush_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_gpencil_vertex_types_items, 5, 0
	};

	rna_Brush_gpencil_sculpt_brush_type_ = {
		{&rna_Brush_gpencil_weight_brush_type, 	&rna_Brush_gpencil_vertex_brush_type,
		-1, "gpencil_sculpt_brush_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brush Type",
		"",
		0, "GPencil",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, gpencil_sculpt_brush_type), RawPropertyType(2), nullptr},
		Brush_gpencil_sculpt_brush_type_get, Brush_gpencil_sculpt_brush_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_gpencil_sculpt_types_items, 9, 0
	};

	rna_Brush_gpencil_weight_brush_type_ = {
		{&rna_Brush_curves_sculpt_brush_type, 	&rna_Brush_gpencil_sculpt_brush_type,
		-1, "gpencil_weight_brush_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brush Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, gpencil_weight_brush_type), RawPropertyType(2), nullptr},
		Brush_gpencil_weight_brush_type_get, Brush_gpencil_weight_brush_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_gpencil_weight_types_items, 4, 0
	};

	rna_Brush_curves_sculpt_brush_type_ = {
		{&rna_Brush_direction, 	&rna_Brush_gpencil_weight_brush_type,
		-1, "curves_sculpt_brush_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brush Type",
		"",
		0, "Curves",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, curves_sculpt_brush_type), RawPropertyType(2), nullptr},
		Brush_curves_sculpt_brush_type_get, Brush_curves_sculpt_brush_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_curves_sculpt_brush_type_items, 13, 0
	};

	static const EnumPropertyItem rna_Brush_direction_items[3] = {
		{0, "ADD", 50, "Add", "Add effect of brush"	},
		{512, "SUBTRACT", 95, "Subtract", "Subtract effect of brush"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_direction_ = {
		{&rna_Brush_stroke_method, 	&rna_Brush_curves_sculpt_brush_type,
		-1, "direction", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Direction",
		"",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, flag), RawPropertyType(0), nullptr},
		Brush_direction_get, Brush_direction_set, rna_Brush_direction_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_direction_items, 2, 0
	};

	static const EnumPropertyItem rna_Brush_stroke_method_items[8] = {
		{0, "DOTS", 0, "Dots", "Apply paint on each mouse move step"	},
		{4, "DRAG_DOT", 0, "Drag Dot", "Allows a single dot to be carefully positioned"	},
		{3, "SPACE", 0, "Space", "Limit brush application to the distance specified by spacing"	},
		{1, "AIRBRUSH", 0, "Airbrush", "Keep applying paint effect while holding mouse (spray)"	},
		{2, "ANCHORED", 0, "Anchored", "Keep the brush anchored to the initial location"	},
		{5, "LINE", 0, "Line", "Draw a line with dabs separated according to spacing"	},
		{6, "CURVE", 0, "Curve", "Define the stroke curve with a Bézier curve (dabs are separated according to spacing)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_stroke_method_ = {
		{&rna_Brush_sculpt_plane, 	&rna_Brush_direction,
		-1, "stroke_method", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stroke Method",
		"",
		0, "GPencil",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_stroke_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, stroke_method), RawPropertyType(10), nullptr},
		Brush_stroke_method_get, Brush_stroke_method_set, rna_Brush_stroke_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_stroke_method_items, 7, 0
	};

	static const EnumPropertyItem rna_Brush_sculpt_plane_items[6] = {
		{0, "AREA", 0, "Area Plane", ""	},
		{1, "VIEW", 0, "View Plane", ""	},
		{2, "X", 0, "X Plane", ""	},
		{3, "Y", 0, "Y Plane", ""	},
		{4, "Z", 0, "Z Plane", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_sculpt_plane_ = {
		{&rna_Brush_mask_tool, 	&rna_Brush_stroke_method,
		-1, "sculpt_plane", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sculpt Plane",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, sculpt_plane), RawPropertyType(0), nullptr},
		Brush_sculpt_plane_get, Brush_sculpt_plane_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_sculpt_plane_items, 5, 0
	};

	static const EnumPropertyItem rna_Brush_mask_tool_items[3] = {
		{0, "DRAW", 0, "Draw", ""	},
		{1, "SMOOTH", 0, "Smooth", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_mask_tool_ = {
		{&rna_Brush_curve_distance_falloff_preset, 	&rna_Brush_sculpt_plane,
		-1, "mask_tool", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mask Tool",
		"",
		0, "Mask",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, mask_tool), RawPropertyType(2), nullptr},
		Brush_mask_tool_get, Brush_mask_tool_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_mask_tool_items, 2, 0
	};

	rna_Brush_curve_distance_falloff_preset_ = {
		{&rna_Brush_deform_target, 	&rna_Brush_mask_tool,
		-1, "curve_distance_falloff_preset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Falloff Curve Preset",
		"",
		0, "Curve",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, curve_distance_falloff_preset), RawPropertyType(0), nullptr},
		Brush_curve_distance_falloff_preset_get, Brush_curve_distance_falloff_preset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_curve_preset_items, 10, 0
	};

	static const EnumPropertyItem rna_Brush_deform_target_items[3] = {
		{0, "GEOMETRY", 0, "Geometry", "Brush deformation displaces the vertices of the mesh"	},
		{1, "CLOTH_SIM", 0, "Cloth Simulation", "Brush deforms the mesh by deforming the constraints of a cloth simulation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_deform_target_ = {
		{&rna_Brush_elastic_deform_type, 	&rna_Brush_curve_distance_falloff_preset,
		-1, "deform_target", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Deformation Target",
		"How the deformation of the brush will affect the object",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, deform_target), RawPropertyType(0), nullptr},
		Brush_deform_target_get, Brush_deform_target_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_deform_target_items, 2, 0
	};

	static const EnumPropertyItem rna_Brush_elastic_deform_type_items[6] = {
		{0, "GRAB", 0, "Grab", ""	},
		{1, "GRAB_BISCALE", 0, "Bi-Scale Grab", ""	},
		{2, "GRAB_TRISCALE", 0, "Tri-Scale Grab", ""	},
		{3, "SCALE", 0, "Scale", ""	},
		{4, "TWIST", 0, "Twist", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_elastic_deform_type_ = {
		{&rna_Brush_snake_hook_deform_type, 	&rna_Brush_deform_target,
		-1, "elastic_deform_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Deformation",
		"Deformation type that is used in the brush",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, elastic_deform_type), RawPropertyType(0), nullptr},
		Brush_elastic_deform_type_get, Brush_elastic_deform_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_elastic_deform_type_items, 5, 0
	};

	static const EnumPropertyItem rna_Brush_snake_hook_deform_type_items[3] = {
		{0, "FALLOFF", 0, "Radius Falloff", "Applies the brush falloff in the tip of the brush"	},
		{1, "ELASTIC", 0, "Elastic", "Modifies the entire mesh using elastic deform"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_snake_hook_deform_type_ = {
		{&rna_Brush_plane_inversion_mode, 	&rna_Brush_elastic_deform_type,
		-1, "snake_hook_deform_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Deformation",
		"Deformation type that is used in the brush",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, snake_hook_deform_type), RawPropertyType(0), nullptr},
		Brush_snake_hook_deform_type_get, Brush_snake_hook_deform_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_snake_hook_deform_type_items, 2, 0
	};

	static const EnumPropertyItem rna_Brush_plane_inversion_mode_items[3] = {
		{0, "INVERT_DISPLACEMENT", 0, "Invert Displacement", "Displace the vertices away from the plane."	},
		{1, "SWAP_DEPTH_AND_HEIGHT", 0, "Swap Height and Depth", "Swap the roles of Height and Depth."	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_plane_inversion_mode_ = {
		{&rna_Brush_project_ray_direction_type, 	&rna_Brush_snake_hook_deform_type,
		-1, "plane_inversion_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Inversion Mode",
		"Inversion Mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, plane_inversion_mode), RawPropertyType(0), nullptr},
		Brush_plane_inversion_mode_get, Brush_plane_inversion_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_plane_inversion_mode_items, 2, 0
	};

	static const EnumPropertyItem rna_Brush_project_ray_direction_type_items[3] = {
		{0, "VIEW_NORMAL", 0, "View Normal", "Project the vertices along the view normal."	},
		{1, "PLANE_NORMAL", 0, "Plane Normal", "Project the vertices along the plane normal."	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_project_ray_direction_type_ = {
		{&rna_Brush_minimum_distance, 	&rna_Brush_plane_inversion_mode,
		-1, "project_ray_direction_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Ray Direction",
		"Ray Direction",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, project_ray_direction_type), RawPropertyType(10), nullptr},
		Brush_project_ray_direction_type_get, Brush_project_ray_direction_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_project_ray_direction_type_items, 2, 0
	};

	rna_Brush_minimum_distance_ = {
		{&rna_Brush_cloth_deform_type, 	&rna_Brush_project_ray_direction_type,
		-1, "minimum_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Distance",
		"Minimum distance to other scene objects after projecting onto them",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, minimum_distance), RawPropertyType(5), nullptr},
		Brush_minimum_distance_get, Brush_minimum_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_Brush_cloth_deform_type_items[9] = {
		{0, "DRAG", 0, "Drag", ""	},
		{1, "PUSH", 0, "Push", ""	},
		{3, "PINCH_POINT", 0, "Pinch Point", ""	},
		{4, "PINCH_PERPENDICULAR", 0, "Pinch Perpendicular", ""	},
		{5, "INFLATE", 0, "Inflate", ""	},
		{2, "GRAB", 0, "Grab", ""	},
		{6, "EXPAND", 0, "Expand", ""	},
		{7, "SNAKE_HOOK", 0, "Snake Hook", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_cloth_deform_type_ = {
		{&rna_Brush_cloth_force_falloff_type, 	&rna_Brush_minimum_distance,
		-1, "cloth_deform_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Deformation",
		"Deformation type that is used in the brush",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, cloth_deform_type), RawPropertyType(0), nullptr},
		Brush_cloth_deform_type_get, Brush_cloth_deform_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_cloth_deform_type_items, 8, 0
	};

	static const EnumPropertyItem rna_Brush_cloth_force_falloff_type_items[3] = {
		{0, "RADIAL", 0, "Radial", ""	},
		{1, "PLANE", 0, "Plane", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_cloth_force_falloff_type_ = {
		{&rna_Brush_cloth_simulation_area_type, 	&rna_Brush_cloth_deform_type,
		-1, "cloth_force_falloff_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Force Falloff",
		"Shape used in the brush to apply force to the cloth",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, cloth_force_falloff_type), RawPropertyType(0), nullptr},
		Brush_cloth_force_falloff_type_get, Brush_cloth_force_falloff_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_cloth_force_falloff_type_items, 2, 0
	};

	static const EnumPropertyItem rna_Brush_cloth_simulation_area_type_items[4] = {
		{0, "LOCAL", 0, "Local", "Simulates only a specific area around the brush limited by a fixed radius"	},
		{1, "GLOBAL", 0, "Global", "Simulates the entire mesh"	},
		{2, "DYNAMIC", 0, "Dynamic", "The active simulation area moves with the brush"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_cloth_simulation_area_type_ = {
		{&rna_Brush_boundary_falloff_type, 	&rna_Brush_cloth_force_falloff_type,
		-1, "cloth_simulation_area_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Simulation Area",
		"Part of the mesh that is going to be simulated when the stroke is active",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, cloth_simulation_area_type), RawPropertyType(0), nullptr},
		Brush_cloth_simulation_area_type_get, Brush_cloth_simulation_area_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_cloth_simulation_area_type_items, 3, 0
	};

	static const EnumPropertyItem rna_Brush_boundary_falloff_type_items[5] = {
		{0, "CONSTANT", 0, "Constant", "Applies the same deformation in the entire boundary"	},
		{1, "RADIUS", 0, "Brush Radius", "Applies the deformation in a localized area limited by the brush radius"	},
		{2, "LOOP", 0, "Loop", "Applies the brush falloff in a loop pattern"	},
		{3, "LOOP_INVERT", 0, "Loop and Invert", "Applies the falloff radius in a loop pattern, inverting the displacement direction in each pattern repetition"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_boundary_falloff_type_ = {
		{&rna_Brush_smooth_deform_type, 	&rna_Brush_cloth_simulation_area_type,
		-1, "boundary_falloff_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Boundary Falloff",
		"How the brush falloff is applied across the boundary",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, boundary_falloff_type), RawPropertyType(0), nullptr},
		Brush_boundary_falloff_type_get, Brush_boundary_falloff_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_boundary_falloff_type_items, 4, 0
	};

	static const EnumPropertyItem rna_Brush_smooth_deform_type_items[3] = {
		{0, "LAPLACIAN", 0, "Laplacian", "Smooths the surface and the volume"	},
		{1, "SURFACE", 0, "Surface", "Smooths the surface of the mesh, preserving the volume"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_smooth_deform_type_ = {
		{&rna_Brush_smear_deform_type, 	&rna_Brush_boundary_falloff_type,
		-1, "smooth_deform_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Deformation",
		"Deformation type that is used in the brush",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, smooth_deform_type), RawPropertyType(0), nullptr},
		Brush_smooth_deform_type_get, Brush_smooth_deform_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_smooth_deform_type_items, 2, 0
	};

	static const EnumPropertyItem rna_Brush_smear_deform_type_items[4] = {
		{0, "DRAG", 0, "Drag", ""	},
		{1, "PINCH", 0, "Pinch", ""	},
		{2, "EXPAND", 0, "Expand", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_smear_deform_type_ = {
		{&rna_Brush_slide_deform_type, 	&rna_Brush_smooth_deform_type,
		-1, "smear_deform_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Deformation",
		"Deformation type that is used in the brush",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, smear_deform_type), RawPropertyType(0), nullptr},
		Brush_smear_deform_type_get, Brush_smear_deform_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_smear_deform_type_items, 3, 0
	};

	static const EnumPropertyItem rna_Brush_slide_deform_type_items[4] = {
		{0, "DRAG", 0, "Drag", ""	},
		{1, "PINCH", 0, "Pinch", ""	},
		{2, "EXPAND", 0, "Expand", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_slide_deform_type_ = {
		{&rna_Brush_boundary_deform_type, 	&rna_Brush_smear_deform_type,
		-1, "slide_deform_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Deformation",
		"Deformation type that is used in the brush",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, slide_deform_type), RawPropertyType(0), nullptr},
		Brush_slide_deform_type_get, Brush_slide_deform_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_slide_deform_type_items, 3, 0
	};

	static const EnumPropertyItem rna_Brush_boundary_deform_type_items[7] = {
		{0, "BEND", 0, "Bend", ""	},
		{1, "EXPAND", 0, "Expand", ""	},
		{2, "INFLATE", 0, "Inflate", ""	},
		{3, "GRAB", 0, "Grab", ""	},
		{4, "TWIST", 0, "Twist", ""	},
		{5, "SMOOTH", 0, "Smooth", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_boundary_deform_type_ = {
		{&rna_Brush_pose_deform_type, 	&rna_Brush_slide_deform_type,
		-1, "boundary_deform_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Deformation",
		"Deformation type that is used in the brush",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, boundary_deform_type), RawPropertyType(0), nullptr},
		Brush_boundary_deform_type_get, Brush_boundary_deform_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_boundary_deform_type_items, 6, 0
	};

	static const EnumPropertyItem rna_Brush_pose_deform_type_items[4] = {
		{0, "ROTATE_TWIST", 0, "Rotate/Twist", ""	},
		{1, "SCALE_TRANSLATE", 0, "Scale/Translate", ""	},
		{2, "SQUASH_STRETCH", 0, "Squash & Stretch", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_pose_deform_type_ = {
		{&rna_Brush_pose_origin_type, 	&rna_Brush_boundary_deform_type,
		-1, "pose_deform_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Deformation",
		"Deformation type that is used in the brush",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, pose_deform_type), RawPropertyType(0), nullptr},
		Brush_pose_deform_type_get, Brush_pose_deform_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_pose_deform_type_items, 3, 0
	};

	static const EnumPropertyItem rna_Brush_pose_origin_type_items[4] = {
		{0, "TOPOLOGY", 0, "Topology", "Sets the rotation origin automatically using the topology and shape of the mesh as a guide"	},
		{1, "FACE_SETS", 0, "Face Sets", "Creates a pose segment per face set, starting from the active face set"	},
		{2, "FACE_SETS_FK", 0, "Face Sets FK", "Simulates an FK deformation using the face set under the cursor as control"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_pose_origin_type_ = {
		{&rna_Brush_jitter_unit, 	&rna_Brush_pose_deform_type,
		-1, "pose_origin_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation Origins",
		"Method to set the rotation origins for the segments of the brush",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, pose_origin_type), RawPropertyType(0), nullptr},
		Brush_pose_origin_type_get, Brush_pose_origin_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_pose_origin_type_items, 3, 0
	};

	static const EnumPropertyItem rna_Brush_jitter_unit_items[3] = {
		{1073741824, "VIEW", 0, "View", "Jittering happens in screen space, in pixels"	},
		{0, "BRUSH", 0, "Brush", "Jittering happens relative to the brush size"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_jitter_unit_ = {
		{&rna_Brush_falloff_shape, 	&rna_Brush_pose_origin_type,
		-1, "jitter_unit", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Jitter Unit",
		"Jitter in screen space or relative to brush size",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, flag), RawPropertyType(0), nullptr},
		Brush_jitter_unit_get, Brush_jitter_unit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_jitter_unit_items, 2, 1073741824
	};

	static const EnumPropertyItem rna_Brush_falloff_shape_items[3] = {
		{0, "SPHERE", 0, "Sphere", "Apply brush influence in a Sphere, outwards from the center"	},
		{1, "PROJECTED", 0, "Projected", "Apply brush influence in a 2D circle, projected from the view"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_falloff_shape_ = {
		{&rna_Brush_size, 	&rna_Brush_jitter_unit,
		-1, "falloff_shape", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Falloff Shape",
		"Use projected or spherical falloff",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, falloff_shape), RawPropertyType(2), nullptr},
		Brush_falloff_shape_get, Brush_falloff_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_falloff_shape_items, 2, 0
	};

	rna_Brush_size_ = {
		{&rna_Brush_unprojected_size, 	&rna_Brush_falloff_shape,
		-1, "size", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Size",
		"Diameter of the brush in pixels",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL_DIAMETER) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_size_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_size_get, Brush_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 1000, 1, 10000, 1, nullptr, nullptr, 70, nullptr
	};

	rna_Brush_unprojected_size_ = {
		{&rna_Brush_input_samples, 	&rna_Brush_size,
		-1, "unprojected_size", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Unprojected Size",
		"Diameter of brush in Blender units",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE_DIAMETER) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_size_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_unprojected_size_get, Brush_unprojected_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, FLT_MAX, 1.0f, -1, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_Brush_input_samples_ = {
		{&rna_Brush_jitter, 	&rna_Brush_unprojected_size,
		-1, "input_samples", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Input Samples",
		"Number of input samples to average together to smooth the brush stroke",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, input_samples), RawPropertyType(0), nullptr},
		Brush_input_samples_get, Brush_input_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 64, 1, 64, 1, nullptr, nullptr, 1, nullptr
	};

	rna_Brush_jitter_ = {
		{&rna_Brush_jitter_absolute, 	&rna_Brush_input_samples,
		-1, "jitter", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Jitter",
		"Jitter the position of the brush while painting",
		0, "Brush",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, jitter), RawPropertyType(5), nullptr},
		Brush_jitter_get, Brush_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 1000.0f, 0.1000000015f, 4, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_jitter_absolute_ = {
		{&rna_Brush_spacing, 	&rna_Brush_jitter,
		-1, "jitter_absolute", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Jitter",
		"Jitter the position of the brush in pixels while painting",
		0, "Brush",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, jitter_absolute), RawPropertyType(0), nullptr},
		Brush_jitter_absolute_get, Brush_jitter_absolute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1000000, 0, 1000000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_spacing_ = {
		{&rna_Brush_grad_spacing, 	&rna_Brush_jitter_absolute,
		-1, "spacing", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Spacing",
		"Spacing between brush daubs as a percentage of brush diameter",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, spacing), RawPropertyType(0), nullptr},
		Brush_spacing_get, Brush_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 500, 1, 1000, 5, nullptr, nullptr, 10, nullptr
	};

	rna_Brush_grad_spacing_ = {
		{&rna_Brush_use_color_jitter, 	&rna_Brush_spacing,
		-1, "grad_spacing", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gradient Spacing",
		"Spacing before brush gradient goes full circle",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, gradient_spacing), RawPropertyType(0), nullptr},
		Brush_grad_spacing_get, Brush_grad_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 5, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_color_jitter_ = {
		{&rna_Brush_hue_jitter, 	&rna_Brush_grad_spacing,
		-1, "use_color_jitter", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Color Jitter",
		"Jitter brush color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_color_jitter_get, Brush_use_color_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_hue_jitter_ = {
		{&rna_Brush_saturation_jitter, 	&rna_Brush_use_color_jitter,
		-1, "hue_jitter", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Hue Jitter",
		"Color jitter effect on hue",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, hsv_jitter[0]), RawPropertyType(5), nullptr},
		Brush_hue_jitter_get, Brush_hue_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_saturation_jitter_ = {
		{&rna_Brush_value_jitter, 	&rna_Brush_hue_jitter,
		-1, "saturation_jitter", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation Jitter",
		"Color jitter effect on saturation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, hsv_jitter[1]), RawPropertyType(5), nullptr},
		Brush_saturation_jitter_get, Brush_saturation_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_value_jitter_ = {
		{&rna_Brush_use_stroke_random_hue, 	&rna_Brush_saturation_jitter,
		-1, "value_jitter", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Value Jitter",
		"Color jitter effect on value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, hsv_jitter[2]), RawPropertyType(5), nullptr},
		Brush_value_jitter_get, Brush_value_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_use_stroke_random_hue_ = {
		{&rna_Brush_use_stroke_random_sat, 	&rna_Brush_value_jitter,
		-1, "use_stroke_random_hue", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_stroke_random_hue_get, Brush_use_stroke_random_hue_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_stroke_random_sat_ = {
		{&rna_Brush_use_stroke_random_val, 	&rna_Brush_use_stroke_random_hue,
		-1, "use_stroke_random_sat", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_stroke_random_sat_get, Brush_use_stroke_random_sat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_stroke_random_val_ = {
		{&rna_Brush_use_random_press_hue, 	&rna_Brush_use_stroke_random_sat,
		-1, "use_stroke_random_val", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_stroke_random_val_get, Brush_use_stroke_random_val_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_random_press_hue_ = {
		{&rna_Brush_use_random_press_sat, 	&rna_Brush_use_stroke_random_val,
		-1, "use_random_press_hue", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_random_press_hue_get, Brush_use_random_press_hue_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_random_press_sat_ = {
		{&rna_Brush_use_random_press_val, 	&rna_Brush_use_random_press_hue,
		-1, "use_random_press_sat", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_random_press_sat_get, Brush_use_random_press_sat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_random_press_val_ = {
		{&rna_Brush_curve_random_hue, 	&rna_Brush_use_random_press_sat,
		-1, "use_random_press_val", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_random_press_val_get, Brush_use_random_press_val_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_curve_random_hue_ = {
		{&rna_Brush_curve_random_saturation, 	&rna_Brush_use_random_press_val,
		-1, "curve_random_hue", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random Curve",
		"Curve used for modulating effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_curve_random_hue_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_Brush_curve_random_saturation_ = {
		{&rna_Brush_curve_random_value, 	&rna_Brush_curve_random_hue,
		-1, "curve_random_saturation", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random Curve",
		"Curve used for modulating effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_curve_random_saturation_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_Brush_curve_random_value_ = {
		{&rna_Brush_curve_size, 	&rna_Brush_curve_random_saturation,
		-1, "curve_random_value", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random Curve",
		"Curve used for modulating effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_curve_random_value_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_Brush_curve_size_ = {
		{&rna_Brush_curve_strength, 	&rna_Brush_curve_random_value,
		-1, "curve_size", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pressure Size Mapping",
		"Curve used to map pressure to brush size",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_curve_size_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_Brush_curve_strength_ = {
		{&rna_Brush_curve_jitter, 	&rna_Brush_curve_size,
		-1, "curve_strength", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pressure Strength Mapping",
		"Curve used to map pressure to brush strength",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_curve_strength_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_Brush_curve_jitter_ = {
		{&rna_Brush_smooth_stroke_radius, 	&rna_Brush_curve_strength,
		-1, "curve_jitter", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pressure Jitter Mapping",
		"Curve used to map pressure to brush jitter",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_curve_jitter_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_Brush_smooth_stroke_radius_ = {
		{&rna_Brush_smooth_stroke_factor, 	&rna_Brush_curve_jitter,
		-1, "smooth_stroke_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smooth Stroke Radius",
		"Minimum distance from last point before stroke continues",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, smooth_stroke_radius), RawPropertyType(0), nullptr},
		Brush_smooth_stroke_radius_get, Brush_smooth_stroke_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 10, 200, 10, 200, 1, nullptr, nullptr, 75, nullptr
	};

	rna_Brush_smooth_stroke_factor_ = {
		{&rna_Brush_rate, 	&rna_Brush_smooth_stroke_radius,
		-1, "smooth_stroke_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smooth Stroke Factor",
		"Higher values give a smoother stroke",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, smooth_stroke_factor), RawPropertyType(5), nullptr},
		Brush_smooth_stroke_factor_get, Brush_smooth_stroke_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.5000000000f, 0.9900000095f, 0.5000000000f, 0.9900000095f, 10.0f, 3, nullptr, nullptr, 0.8999999762f, nullptr
	};

	rna_Brush_rate_ = {
		{&rna_Brush_color, 	&rna_Brush_smooth_stroke_factor,
		-1, "rate", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rate",
		"Interval between paints for Airbrush",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, rate), RawPropertyType(5), nullptr},
		Brush_rate_get, Brush_rate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0001000000f, 10000.0f, 1.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	static float rna_Brush_color_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_Brush_color_ = {
		{&rna_Brush_secondary_color, 	&rna_Brush_rate,
		-1, "color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Brush_color_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, Brush_color_get, Brush_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0010000000f, 3, nullptr, nullptr, 0.0f, rna_Brush_color_default
	};

	static float rna_Brush_secondary_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Brush_secondary_color_ = {
		{&rna_Brush_weight, 	&rna_Brush_color,
		-1, "secondary_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Secondary Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Brush_color_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, secondary_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, Brush_secondary_color_get, Brush_secondary_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0010000000f, 3, nullptr, nullptr, 0.0f, rna_Brush_secondary_color_default
	};

	rna_Brush_weight_ = {
		{&rna_Brush_strength, 	&rna_Brush_secondary_color,
		-1, "weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Vertex weight when brush is applied",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, weight), RawPropertyType(5), nullptr},
		Brush_weight_get, Brush_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Brush_strength_ = {
		{&rna_Brush_flow, 	&rna_Brush_weight,
		-1, "strength", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"How powerful the effect of the brush is when applied",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, alpha), RawPropertyType(5), nullptr},
		Brush_strength_get, Brush_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 0.0010000000f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Brush_flow_ = {
		{&rna_Brush_wet_mix, 	&rna_Brush_strength,
		-1, "flow", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Flow",
		"Amount of paint that is applied per stroke sample",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, flow), RawPropertyType(5), nullptr},
		Brush_flow_get, Brush_flow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_wet_mix_ = {
		{&rna_Brush_wet_persistence, 	&rna_Brush_flow,
		-1, "wet_mix", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Wet Mix",
		"Amount of paint that is picked from the surface into the brush color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, wet_mix), RawPropertyType(5), nullptr},
		Brush_wet_mix_get, Brush_wet_mix_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_wet_persistence_ = {
		{&rna_Brush_density, 	&rna_Brush_wet_mix,
		-1, "wet_persistence", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Wet Persistence",
		"Amount of wet paint that stays in the brush after applying paint to the surface",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, wet_persistence), RawPropertyType(5), nullptr},
		Brush_wet_persistence_get, Brush_wet_persistence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_density_ = {
		{&rna_Brush_tip_scale_x, 	&rna_Brush_wet_persistence,
		-1, "density", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Density",
		"Amount of random elements that are going to be affected by the brush",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, density), RawPropertyType(5), nullptr},
		Brush_density_get, Brush_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_tip_scale_x_ = {
		{&rna_Brush_use_hardness_pressure, 	&rna_Brush_density,
		-1, "tip_scale_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tip Scale X",
		"Scale of the brush tip in the X axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, tip_scale_x), RawPropertyType(5), nullptr},
		Brush_tip_scale_x_get, Brush_tip_scale_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1.0f, 0.0001000000f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Brush_use_hardness_pressure_ = {
		{&rna_Brush_invert_hardness_pressure, 	&rna_Brush_tip_scale_x,
		-1, "use_hardness_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure for Hardness",
		"Use pressure to modulate hardness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_hardness_pressure_get, Brush_use_hardness_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_invert_hardness_pressure_ = {
		{&rna_Brush_use_flow_pressure, 	&rna_Brush_use_hardness_pressure,
		-1, "invert_hardness_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert Pressure for Hardness",
		"Invert the modulation of pressure in hardness",
		51, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_invert_hardness_pressure_get, Brush_invert_hardness_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_flow_pressure_ = {
		{&rna_Brush_invert_flow_pressure, 	&rna_Brush_invert_hardness_pressure,
		-1, "use_flow_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure for Flow",
		"Use pressure to modulate flow",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_flow_pressure_get, Brush_use_flow_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_invert_flow_pressure_ = {
		{&rna_Brush_use_wet_mix_pressure, 	&rna_Brush_use_flow_pressure,
		-1, "invert_flow_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert Pressure for Flow",
		"Invert the modulation of pressure in flow",
		51, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_invert_flow_pressure_get, Brush_invert_flow_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_wet_mix_pressure_ = {
		{&rna_Brush_invert_wet_mix_pressure, 	&rna_Brush_invert_flow_pressure,
		-1, "use_wet_mix_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure for Wet Mix",
		"Use pressure to modulate wet mix",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_wet_mix_pressure_get, Brush_use_wet_mix_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_invert_wet_mix_pressure_ = {
		{&rna_Brush_use_wet_persistence_pressure, 	&rna_Brush_use_wet_mix_pressure,
		-1, "invert_wet_mix_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert Pressure for Wet Mix",
		"Invert the modulation of pressure in wet mix",
		51, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_invert_wet_mix_pressure_get, Brush_invert_wet_mix_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_wet_persistence_pressure_ = {
		{&rna_Brush_invert_wet_persistence_pressure, 	&rna_Brush_invert_wet_mix_pressure,
		-1, "use_wet_persistence_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure for Wet Persistence",
		"Use pressure to modulate wet persistence",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_wet_persistence_pressure_get, Brush_use_wet_persistence_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_invert_wet_persistence_pressure_ = {
		{&rna_Brush_use_density_pressure, 	&rna_Brush_use_wet_persistence_pressure,
		-1, "invert_wet_persistence_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert Pressure for Wet Persistence",
		"Invert the modulation of pressure in wet persistence",
		51, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_invert_wet_persistence_pressure_get, Brush_invert_wet_persistence_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_density_pressure_ = {
		{&rna_Brush_invert_density_pressure, 	&rna_Brush_invert_wet_persistence_pressure,
		-1, "use_density_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure for Density",
		"Use pressure to modulate density",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_density_pressure_get, Brush_use_density_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_invert_density_pressure_ = {
		{&rna_Brush_dash_ratio, 	&rna_Brush_use_density_pressure,
		-1, "invert_density_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert Pressure for Density",
		"Invert the modulation of pressure in density",
		51, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_invert_density_pressure_get, Brush_invert_density_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_dash_ratio_ = {
		{&rna_Brush_dash_samples, 	&rna_Brush_invert_density_pressure,
		-1, "dash_ratio", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dash Ratio",
		"Ratio of samples in a cycle that the brush is enabled",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, dash_ratio), RawPropertyType(5), nullptr},
		Brush_dash_ratio_get, Brush_dash_ratio_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Brush_dash_samples_ = {
		{&rna_Brush_plane_offset, 	&rna_Brush_dash_ratio,
		-1, "dash_samples", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dash Length",
		"Length of a dash cycle measured in stroke samples",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, dash_samples), RawPropertyType(0), nullptr},
		Brush_dash_samples_get, Brush_dash_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 5, nullptr, nullptr, 20, nullptr
	};

	rna_Brush_plane_offset_ = {
		{&rna_Brush_plane_trim, 	&rna_Brush_dash_samples,
		-1, "plane_offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Plane Offset",
		"Adjust plane on which the brush acts towards or away from the object surface",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, plane_offset), RawPropertyType(5), nullptr},
		Brush_plane_offset_get, Brush_plane_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -0.5000000000f, 0.5000000000f, -2.0f, 2.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_plane_trim_ = {
		{&rna_Brush_height, 	&rna_Brush_plane_offset,
		-1, "plane_trim", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Plane Trim",
		"If a vertex is further away from offset plane than this, then it is not affected",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, plane_trim), RawPropertyType(5), nullptr},
		Brush_plane_trim_get, Brush_plane_trim_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_Brush_height_ = {
		{&rna_Brush_plane_depth, 	&rna_Brush_plane_trim,
		-1, "height", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brush Height",
		"Affectable height of brush (i.e. the layer height for the layer tool)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, height), RawPropertyType(5), nullptr},
		Brush_height_get, Brush_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.2000000030f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_Brush_plane_depth_ = {
		{&rna_Brush_plane_height, 	&rna_Brush_height,
		-1, "plane_depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Depth",
		"The maximum distance below the plane for affected vertices. Increasing the depth affects vertices farther below the plane.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, plane_depth), RawPropertyType(5), nullptr},
		Brush_plane_depth_get, Brush_plane_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_plane_height_ = {
		{&rna_Brush_stabilize_normal, 	&rna_Brush_plane_depth,
		-1, "plane_height", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Height",
		"The maximum distance above the plane for affected vertices. Increasing the height affects vertices farther above the plane.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, plane_height), RawPropertyType(5), nullptr},
		Brush_plane_height_get, Brush_plane_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Brush_stabilize_normal_ = {
		{&rna_Brush_stabilize_plane, 	&rna_Brush_plane_height,
		-1, "stabilize_normal", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stabilize Normal",
		"How stable the plane normal is over the course of the stroke. A value of 0 corresponds to using the current normal, and a value of 1 corresponds to using the initial normal.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, stabilize_normal), RawPropertyType(5), nullptr},
		Brush_stabilize_normal_get, Brush_stabilize_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_stabilize_plane_ = {
		{&rna_Brush_texture_sample_bias, 	&rna_Brush_stabilize_normal,
		-1, "stabilize_plane", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stabilize Center",
		"How stable the plane center is over the course of the stroke. A value of 0 corresponds to using the current center, and a value of 1 corresponds to using the initial center.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, stabilize_plane), RawPropertyType(5), nullptr},
		Brush_stabilize_plane_get, Brush_stabilize_plane_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_texture_sample_bias_ = {
		{&rna_Brush_use_color_as_displacement, 	&rna_Brush_stabilize_plane,
		-1, "texture_sample_bias", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Texture Sample Bias",
		"Value added to texture samples",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, texture_sample_bias), RawPropertyType(5), nullptr},
		Brush_texture_sample_bias_get, Brush_texture_sample_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_use_color_as_displacement_ = {
		{&rna_Brush_normal_weight, 	&rna_Brush_texture_sample_bias,
		-1, "use_color_as_displacement", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vector Displacement",
		"Handle each pixel color as individual vector for displacement (area plane mapping only)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_color_as_displacement_get, Brush_use_color_as_displacement_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_normal_weight_ = {
		{&rna_Brush_elastic_deform_volume_preservation, 	&rna_Brush_use_color_as_displacement,
		-1, "normal_weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Normal Weight",
		"How much grab will pull vertices out of surface during a grab",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, normal_weight), RawPropertyType(5), nullptr},
		Brush_normal_weight_get, Brush_normal_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_elastic_deform_volume_preservation_ = {
		{&rna_Brush_rake_factor, 	&rna_Brush_normal_weight,
		-1, "elastic_deform_volume_preservation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Volume Preservation",
		"Poisson ratio for elastic deformation. Higher values preserve volume more, but also lead to more bulging.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, elastic_deform_volume_preservation), RawPropertyType(5), nullptr},
		Brush_elastic_deform_volume_preservation_get, Brush_elastic_deform_volume_preservation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.8999999762f, 0.0f, 0.8999999762f, 0.0099999998f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_rake_factor_ = {
		{&rna_Brush_crease_pinch_factor, 	&rna_Brush_elastic_deform_volume_preservation,
		-1, "rake_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rake",
		"How much grab will follow cursor rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, rake_factor), RawPropertyType(5), nullptr},
		Brush_rake_factor_get, Brush_rake_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_crease_pinch_factor_ = {
		{&rna_Brush_pose_offset, 	&rna_Brush_rake_factor,
		-1, "crease_pinch_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Crease Brush Pinch Factor",
		"How much the crease brush pinches",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, crease_pinch_factor), RawPropertyType(5), nullptr},
		Brush_crease_pinch_factor_get, Brush_crease_pinch_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_Brush_pose_offset_ = {
		{&rna_Brush_disconnected_distance_max, 	&rna_Brush_crease_pinch_factor,
		-1, "pose_offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pose Origin Offset",
		"Offset of the pose origin in relation to the brush radius",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, pose_offset), RawPropertyType(5), nullptr},
		Brush_pose_offset_get, Brush_pose_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_disconnected_distance_max_ = {
		{&rna_Brush_boundary_offset, 	&rna_Brush_pose_offset,
		-1, "disconnected_distance_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Element Distance",
		"Maximum distance to search for disconnected loose parts in the mesh",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, disconnected_distance_max), RawPropertyType(5), nullptr},
		Brush_disconnected_distance_max_get, Brush_disconnected_distance_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_Brush_boundary_offset_ = {
		{&rna_Brush_surface_smooth_shape_preservation, 	&rna_Brush_disconnected_distance_max,
		-1, "boundary_offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Boundary Origin Offset",
		"Offset of the boundary origin in relation to the brush radius",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, boundary_offset), RawPropertyType(5), nullptr},
		Brush_boundary_offset_get, Brush_boundary_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 30.0f, 0.0f, 30.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_surface_smooth_shape_preservation_ = {
		{&rna_Brush_surface_smooth_current_vertex, 	&rna_Brush_boundary_offset,
		-1, "surface_smooth_shape_preservation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shape Preservation",
		"How much of the original shape is preserved when smoothing",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, surface_smooth_shape_preservation), RawPropertyType(5), nullptr},
		Brush_surface_smooth_shape_preservation_get, Brush_surface_smooth_shape_preservation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_surface_smooth_current_vertex_ = {
		{&rna_Brush_surface_smooth_iterations, 	&rna_Brush_surface_smooth_shape_preservation,
		-1, "surface_smooth_current_vertex", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Per Vertex Displacement",
		"How much the position of each individual vertex influences the final result",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, surface_smooth_current_vertex), RawPropertyType(5), nullptr},
		Brush_surface_smooth_current_vertex_get, Brush_surface_smooth_current_vertex_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_surface_smooth_iterations_ = {
		{&rna_Brush_multiplane_scrape_angle, 	&rna_Brush_surface_smooth_current_vertex,
		-1, "surface_smooth_iterations", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Iterations",
		"Number of smoothing iterations per brush step",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, surface_smooth_iterations), RawPropertyType(0), nullptr},
		Brush_surface_smooth_iterations_get, Brush_surface_smooth_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10, 1, 10, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_multiplane_scrape_angle_ = {
		{&rna_Brush_pose_smooth_iterations, 	&rna_Brush_surface_smooth_iterations,
		-1, "multiplane_scrape_angle", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Plane Angle",
		"Angle between the planes of the crease",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, multiplane_scrape_angle), RawPropertyType(5), nullptr},
		Brush_multiplane_scrape_angle_get, Brush_multiplane_scrape_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 160.0f, 0.0f, 160.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_pose_smooth_iterations_ = {
		{&rna_Brush_pose_ik_segments, 	&rna_Brush_multiplane_scrape_angle,
		-1, "pose_smooth_iterations", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smooth Iterations",
		"Smooth iterations applied after calculating the pose factor of each vertex",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, pose_smooth_iterations), RawPropertyType(0), nullptr},
		Brush_pose_smooth_iterations_get, Brush_pose_smooth_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 4, nullptr
	};

	rna_Brush_pose_ik_segments_ = {
		{&rna_Brush_tip_roundness, 	&rna_Brush_pose_smooth_iterations,
		-1, "pose_ik_segments", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pose IK Segments",
		"Number of segments of the inverse kinematics chain that will deform the mesh",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, pose_ik_segments), RawPropertyType(0), nullptr},
		Brush_pose_ik_segments_get, Brush_pose_ik_segments_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 20, 1, 20, 1, nullptr, nullptr, 1, nullptr
	};

	rna_Brush_tip_roundness_ = {
		{&rna_Brush_cloth_mass, 	&rna_Brush_pose_ik_segments,
		-1, "tip_roundness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tip Roundness",
		"Roundness of the brush tip",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, tip_roundness), RawPropertyType(5), nullptr},
		Brush_tip_roundness_get, Brush_tip_roundness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Brush_cloth_mass_ = {
		{&rna_Brush_cloth_damping, 	&rna_Brush_tip_roundness,
		-1, "cloth_mass", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Cloth Mass",
		"Mass of each simulation particle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, cloth_mass), RawPropertyType(5), nullptr},
		Brush_cloth_mass_get, Brush_cloth_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 2.0f, 0.0099999998f, 2.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Brush_cloth_damping_ = {
		{&rna_Brush_cloth_sim_limit, 	&rna_Brush_cloth_mass,
		-1, "cloth_damping", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Cloth Damping",
		"How much the applied forces are propagated through the cloth",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, cloth_damping), RawPropertyType(5), nullptr},
		Brush_cloth_damping_get, Brush_cloth_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0099999998f, nullptr
	};

	rna_Brush_cloth_sim_limit_ = {
		{&rna_Brush_cloth_sim_falloff, 	&rna_Brush_cloth_damping,
		-1, "cloth_sim_limit", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Simulation Limit",
		"Factor added relative to the size of the radius to limit the cloth simulation effects",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, cloth_sim_limit), RawPropertyType(5), nullptr},
		Brush_cloth_sim_limit_get, Brush_cloth_sim_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 10.0f, 0.1000000015f, 10.0f, 10.0f, 3, nullptr, nullptr, 2.5000000000f, nullptr
	};

	rna_Brush_cloth_sim_falloff_ = {
		{&rna_Brush_cloth_constraint_softbody_strength, 	&rna_Brush_cloth_sim_limit,
		-1, "cloth_sim_falloff", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Simulation Falloff",
		"Area to apply deformation falloff to the effects of the simulation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, cloth_sim_falloff), RawPropertyType(5), nullptr},
		Brush_cloth_sim_falloff_get, Brush_cloth_sim_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.7500000000f, nullptr
	};

	rna_Brush_cloth_constraint_softbody_strength_ = {
		{&rna_Brush_hardness, 	&rna_Brush_cloth_sim_falloff,
		-1, "cloth_constraint_softbody_strength", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Soft Body Plasticity",
		"How much the cloth preserves the original shape, acting as a soft body",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, cloth_constraint_softbody_strength), RawPropertyType(5), nullptr},
		Brush_cloth_constraint_softbody_strength_get, Brush_cloth_constraint_softbody_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_hardness_ = {
		{&rna_Brush_auto_smooth_factor, 	&rna_Brush_cloth_constraint_softbody_strength,
		-1, "hardness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Hardness",
		"How close the brush falloff starts from the edge of the brush",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, hardness), RawPropertyType(5), nullptr},
		Brush_hardness_get, Brush_hardness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_auto_smooth_factor_ = {
		{&rna_Brush_topology_rake_factor, 	&rna_Brush_hardness,
		-1, "auto_smooth_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Auto-Smooth",
		"Amount of smoothing to automatically apply to each stroke",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, autosmooth_factor), RawPropertyType(5), nullptr},
		Brush_auto_smooth_factor_get, Brush_auto_smooth_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_topology_rake_factor_ = {
		{&rna_Brush_tilt_strength_factor, 	&rna_Brush_auto_smooth_factor,
		-1, "topology_rake_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Topology Rake",
		"Automatically align edges to the brush direction to generate cleaner topology and define sharp features. Best used on low-poly meshes as it has a performance impact.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, topology_rake_factor), RawPropertyType(5), nullptr},
		Brush_topology_rake_factor_get, Brush_topology_rake_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_tilt_strength_factor_ = {
		{&rna_Brush_normal_radius_factor, 	&rna_Brush_topology_rake_factor,
		-1, "tilt_strength_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tilt Strength",
		"How much the tilt of the pen will affect the brush. Negative values indicate inverting the tilt directions.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, tilt_strength_factor), RawPropertyType(5), nullptr},
		Brush_tilt_strength_factor_get, Brush_tilt_strength_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_normal_radius_factor_ = {
		{&rna_Brush_area_radius_factor, 	&rna_Brush_tilt_strength_factor,
		-1, "normal_radius_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Normal Radius",
		"Ratio between the brush radius and the radius that is going to be used to sample the normal",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, normal_radius_factor), RawPropertyType(5), nullptr},
		Brush_normal_radius_factor_get, Brush_normal_radius_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 0.0010000000f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_Brush_area_radius_factor_ = {
		{&rna_Brush_wet_paint_radius_factor, 	&rna_Brush_normal_radius_factor,
		-1, "area_radius_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Area Radius",
		"Ratio between the brush radius and the radius that is going to be used to sample the area center",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, area_radius_factor), RawPropertyType(5), nullptr},
		Brush_area_radius_factor_get, Brush_area_radius_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 0.0010000000f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_Brush_wet_paint_radius_factor_ = {
		{&rna_Brush_stencil_pos, 	&rna_Brush_area_radius_factor,
		-1, "wet_paint_radius_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Wet Paint Radius",
		"Ratio between the brush radius and the radius that is going to be used to sample the color to blend in wet paint",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, wet_paint_radius_factor), RawPropertyType(5), nullptr},
		Brush_wet_paint_radius_factor_get, Brush_wet_paint_radius_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 0.0010000000f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	static float rna_Brush_stencil_pos_default[2] = {
		256.0f,
		256.0f
	};
	rna_Brush_stencil_pos_ = {
		{&rna_Brush_stencil_dimension, 	&rna_Brush_wet_paint_radius_factor,
		-1, "stencil_pos", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stencil Position",
		"Position of stencil in viewport",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, stencil_pos), RawPropertyType(5), nullptr},
		nullptr, nullptr, Brush_stencil_pos_get, Brush_stencil_pos_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Brush_stencil_pos_default
	};

	static float rna_Brush_stencil_dimension_default[2] = {
		256.0f,
		256.0f
	};
	rna_Brush_stencil_dimension_ = {
		{&rna_Brush_mask_stencil_pos, 	&rna_Brush_stencil_pos,
		-1, "stencil_dimension", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stencil Dimensions",
		"Dimensions of stencil in viewport",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, stencil_dimension), RawPropertyType(5), nullptr},
		nullptr, nullptr, Brush_stencil_dimension_get, Brush_stencil_dimension_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Brush_stencil_dimension_default
	};

	static float rna_Brush_mask_stencil_pos_default[2] = {
		256.0f,
		256.0f
	};
	rna_Brush_mask_stencil_pos_ = {
		{&rna_Brush_mask_stencil_dimension, 	&rna_Brush_stencil_dimension,
		-1, "mask_stencil_pos", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mask Stencil Position",
		"Position of mask stencil in viewport",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, mask_stencil_pos), RawPropertyType(5), nullptr},
		nullptr, nullptr, Brush_mask_stencil_pos_get, Brush_mask_stencil_pos_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Brush_mask_stencil_pos_default
	};

	static float rna_Brush_mask_stencil_dimension_default[2] = {
		256.0f,
		256.0f
	};
	rna_Brush_mask_stencil_dimension_ = {
		{&rna_Brush_sharp_threshold, 	&rna_Brush_mask_stencil_pos,
		-1, "mask_stencil_dimension", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mask Stencil Dimensions",
		"Dimensions of mask stencil in viewport",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, mask_stencil_dimension), RawPropertyType(5), nullptr},
		nullptr, nullptr, Brush_mask_stencil_dimension_get, Brush_mask_stencil_dimension_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Brush_mask_stencil_dimension_default
	};

	rna_Brush_sharp_threshold_ = {
		{&rna_Brush_fill_threshold, 	&rna_Brush_mask_stencil_dimension,
		-1, "sharp_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sharp Threshold",
		"Threshold below which, no sharpening is done",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, sharp_threshold), RawPropertyType(5), nullptr},
		Brush_sharp_threshold_get, Brush_sharp_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 100.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_fill_threshold_ = {
		{&rna_Brush_blur_kernel_radius, 	&rna_Brush_sharp_threshold,
		-1, "fill_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fill Threshold",
		"Threshold above which filling is not propagated",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, fill_threshold), RawPropertyType(5), nullptr},
		Brush_fill_threshold_get, Brush_fill_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 100.0f, 1.0f, 3, nullptr, nullptr, 0.2000000030f, nullptr
	};

	rna_Brush_blur_kernel_radius_ = {
		{&rna_Brush_blur_mode, 	&rna_Brush_fill_threshold,
		-1, "blur_kernel_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Kernel Radius",
		"Radius of kernel used for soften and sharpen in pixels",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, blur_kernel_radius), RawPropertyType(0), nullptr},
		Brush_blur_kernel_radius_get, Brush_blur_kernel_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 50, 1, 10000, 1, nullptr, nullptr, 2, nullptr
	};

	static const EnumPropertyItem rna_Brush_blur_mode_items[3] = {
		{1, "BOX", 0, "Box", ""	},
		{0, "GAUSSIAN", 0, "Gaussian", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_blur_mode_ = {
		{&rna_Brush_falloff_angle, 	&rna_Brush_blur_kernel_radius,
		-1, "blur_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blur Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, blur_mode), RawPropertyType(0), nullptr},
		Brush_blur_mode_get, Brush_blur_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_blur_mode_items, 2, 0
	};

	rna_Brush_falloff_angle_ = {
		{&rna_Brush_use_original_normal, 	&rna_Brush_blur_mode,
		-1, "falloff_angle", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Falloff Angle",
		"Paint most on faces pointing towards the view according to this angle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, falloff_angle), RawPropertyType(5), nullptr},
		Brush_falloff_angle_get, Brush_falloff_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.5707963705f, 0.0f, 1.5707963705f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Brush_use_original_normal_ = {
		{&rna_Brush_use_original_plane, 	&rna_Brush_falloff_angle,
		-1, "use_original_normal", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Original Normal",
		"When locked keep using normal of surface where stroke was initiated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_original_normal_get, Brush_use_original_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_original_plane_ = {
		{&rna_Brush_use_scene_spacing, 	&rna_Brush_use_original_normal,
		-1, "use_original_plane", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Original Plane",
		"When locked keep using the plane origin of surface where stroke was initiated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_original_plane_get, Brush_use_original_plane_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Brush_use_scene_spacing_items[3] = {
		{0, "VIEW", 0, "View", "Calculate brush spacing relative to the view"	},
		{131072, "SCENE", 0, "Scene", "Calculate brush spacing relative to the scene using the stroke location"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_use_scene_spacing_ = {
		{&rna_Brush_use_grab_active_vertex, 	&rna_Brush_use_original_plane,
		-1, "use_scene_spacing", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Spacing Distance",
		"Calculate the brush spacing using view or scene distance",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, flag), RawPropertyType(0), nullptr},
		Brush_use_scene_spacing_get, Brush_use_scene_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_use_scene_spacing_items, 2, 0
	};

	rna_Brush_use_grab_active_vertex_ = {
		{&rna_Brush_use_grab_silhouette, 	&rna_Brush_use_scene_spacing,
		-1, "use_grab_active_vertex", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grab Active Vertex",
		"Apply the maximum grab strength to the active vertex instead of the cursor location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_grab_active_vertex_get, Brush_use_grab_active_vertex_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_grab_silhouette_ = {
		{&rna_Brush_use_paint_antialiasing, 	&rna_Brush_use_grab_active_vertex,
		-1, "use_grab_silhouette", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grab Silhouette",
		"Grabs trying to automask the silhouette of the object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_grab_silhouette_get, Brush_use_grab_silhouette_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_paint_antialiasing_ = {
		{&rna_Brush_use_multiplane_scrape_dynamic, 	&rna_Brush_use_grab_silhouette,
		-1, "use_paint_antialiasing", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Anti-Aliasing",
		"Smooths the edges of the strokes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_paint_antialiasing_get, Brush_use_paint_antialiasing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Brush_use_multiplane_scrape_dynamic_ = {
		{&rna_Brush_show_multiplane_scrape_planes_preview, 	&rna_Brush_use_paint_antialiasing,
		-1, "use_multiplane_scrape_dynamic", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Dynamic Mode",
		"The angle between the planes changes during the stroke to fit the surface under the cursor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_multiplane_scrape_dynamic_get, Brush_use_multiplane_scrape_dynamic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_show_multiplane_scrape_planes_preview_ = {
		{&rna_Brush_use_pose_ik_anchored, 	&rna_Brush_use_multiplane_scrape_dynamic,
		-1, "show_multiplane_scrape_planes_preview", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Cursor Preview",
		"Preview the scrape planes in the cursor during the stroke",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_show_multiplane_scrape_planes_preview_get, Brush_show_multiplane_scrape_planes_preview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_pose_ik_anchored_ = {
		{&rna_Brush_use_pose_lock_rotation, 	&rna_Brush_show_multiplane_scrape_planes_preview,
		-1, "use_pose_ik_anchored", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Keep Anchor Point",
		"Keep the position of the last segment in the IK chain fixed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_pose_ik_anchored_get, Brush_use_pose_ik_anchored_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_pose_lock_rotation_ = {
		{&rna_Brush_use_connected_only, 	&rna_Brush_use_pose_ik_anchored,
		-1, "use_pose_lock_rotation", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock Rotation When Scaling",
		"Do not rotate the segment when using the scale deform mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_pose_lock_rotation_get, Brush_use_pose_lock_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_connected_only_ = {
		{&rna_Brush_use_cloth_pin_simulation_boundary, 	&rna_Brush_use_pose_lock_rotation,
		-1, "use_connected_only", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Connected Only",
		"Affect only topologically connected elements",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_connected_only_get, Brush_use_connected_only_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_cloth_pin_simulation_boundary_ = {
		{&rna_Brush_use_cloth_collision, 	&rna_Brush_use_connected_only,
		-1, "use_cloth_pin_simulation_boundary", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pin Simulation Boundary",
		"Lock the position of the vertices in the simulation falloff area to avoid artifacts and create a softer transition with unaffected areas",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_cloth_pin_simulation_boundary_get, Brush_use_cloth_pin_simulation_boundary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_cloth_collision_ = {
		{&rna_Brush_invert_to_scrape_fill, 	&rna_Brush_use_cloth_pin_simulation_boundary,
		-1, "use_cloth_collision", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Enable Collision",
		"Collide with objects during the simulation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_cloth_collision_get, Brush_use_cloth_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_invert_to_scrape_fill_ = {
		{&rna_Brush_use_pressure_strength, 	&rna_Brush_use_cloth_collision,
		-1, "invert_to_scrape_fill", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert to Scrape or Fill",
		"Use Scrape or Fill brush when inverting this brush instead of inverting its displacement direction",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_invert_to_scrape_fill_get, Brush_invert_to_scrape_fill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_pressure_strength_ = {
		{&rna_Brush_use_offset_pressure, 	&rna_Brush_invert_to_scrape_fill,
		-1, "use_pressure_strength", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strength Pressure",
		"Enable tablet pressure sensitivity for strength",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_pressure_strength_get, Brush_use_pressure_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Brush_use_offset_pressure_ = {
		{&rna_Brush_use_pressure_area_radius, 	&rna_Brush_use_pressure_strength,
		-1, "use_offset_pressure", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Plane Offset Pressure",
		"Enable tablet pressure sensitivity for offset",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_offset_pressure_get, Brush_use_offset_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_pressure_area_radius_ = {
		{&rna_Brush_use_pressure_size, 	&rna_Brush_use_offset_pressure,
		-1, "use_pressure_area_radius", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Area Radius Pressure",
		"Enable tablet pressure sensitivity for area radius",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_pressure_area_radius_get, Brush_use_pressure_area_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_pressure_size_ = {
		{&rna_Brush_use_pressure_jitter, 	&rna_Brush_use_pressure_area_radius,
		-1, "use_pressure_size", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Size Pressure",
		"Enable tablet pressure sensitivity for size",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_pressure_size_get, Brush_use_pressure_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_pressure_jitter_ = {
		{&rna_Brush_use_pressure_spacing, 	&rna_Brush_use_pressure_size,
		-1, "use_pressure_jitter", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Jitter Pressure",
		"Enable tablet pressure sensitivity for jitter",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_pressure_jitter_get, Brush_use_pressure_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_pressure_spacing_ = {
		{&rna_Brush_use_pressure_masking, 	&rna_Brush_use_pressure_jitter,
		-1, "use_pressure_spacing", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Spacing Pressure",
		"Enable tablet pressure sensitivity for spacing",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_pressure_spacing_get, Brush_use_pressure_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Brush_use_pressure_masking_items[4] = {
		{0, "NONE", 0, "Off", ""	},
		{2, "RAMP", 99, "Ramp", ""	},
		{4, "CUTOFF", 99, "Cutoff", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_use_pressure_masking_ = {
		{&rna_Brush_use_inverse_smooth_pressure, 	&rna_Brush_use_pressure_spacing,
		-1, "use_pressure_masking", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mask Pressure Mode",
		"Pen pressure makes texture influence smaller",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, mask_pressure), RawPropertyType(0), nullptr},
		Brush_use_pressure_masking_get, Brush_use_pressure_masking_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_use_pressure_masking_items, 3, 0
	};

	rna_Brush_use_inverse_smooth_pressure_ = {
		{&rna_Brush_use_plane_trim, 	&rna_Brush_use_pressure_masking,
		-1, "use_inverse_smooth_pressure", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inverse Smooth Pressure",
		"Lighter pressure causes more smoothing to be applied",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_inverse_smooth_pressure_get, Brush_use_inverse_smooth_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_plane_trim_ = {
		{&rna_Brush_use_frontface, 	&rna_Brush_use_inverse_smooth_pressure,
		-1, "use_plane_trim", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Plane Trim",
		"Limit the distance from the offset plane that a vertex can be affected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_plane_trim_get, Brush_use_plane_trim_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_frontface_ = {
		{&rna_Brush_use_frontface_falloff, 	&rna_Brush_use_plane_trim,
		-1, "use_frontface", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Front-Face",
		"Brush only affects vertices that face the viewer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_frontface_get, Brush_use_frontface_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_frontface_falloff_ = {
		{&rna_Brush_use_smooth_stroke, 	&rna_Brush_use_frontface,
		-1, "use_frontface_falloff", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Front-Face Falloff",
		"Blend brush influence by how much they face the front",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_frontface_falloff_get, Brush_use_frontface_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_smooth_stroke_ = {
		{&rna_Brush_use_persistent, 	&rna_Brush_use_frontface_falloff,
		-1, "use_smooth_stroke", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Smooth Stroke",
		"Brush lags behind mouse and follows a smoother path",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_smooth_stroke_get, Brush_use_smooth_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_persistent_ = {
		{&rna_Brush_use_bidirectional, 	&rna_Brush_use_smooth_stroke,
		-1, "use_persistent", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Persistent",
		"Sculpt on a persistent layer of the mesh",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_persistent_get, Brush_use_persistent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_bidirectional_ = {
		{&rna_Brush_use_accumulate, 	&rna_Brush_use_persistent,
		-1, "use_bidirectional", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bidirectional",
		"Project vertices both along the projection direction and its inverse, choosing the closest intersection.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_bidirectional_get, Brush_use_bidirectional_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_accumulate_ = {
		{&rna_Brush_use_space_attenuation, 	&rna_Brush_use_bidirectional,
		-1, "use_accumulate", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Accumulate",
		"Accumulate stroke daubs on top of each other",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_accumulate_get, Brush_use_accumulate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_space_attenuation_ = {
		{&rna_Brush_use_adaptive_space, 	&rna_Brush_use_accumulate,
		-1, "use_space_attenuation", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Adjust Strength for Spacing",
		"Automatically adjust strength to give consistent results for different spacings",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_space_attenuation_get, Brush_use_space_attenuation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Brush_use_adaptive_space_ = {
		{&rna_Brush_use_locked_size, 	&rna_Brush_use_space_attenuation,
		-1, "use_adaptive_space", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Adaptive Spacing",
		"Space daubs according to surface orientation instead of screen space",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_adaptive_space_get, Brush_use_adaptive_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Brush_use_locked_size_items[3] = {
		{0, "VIEW", 0, "View", "Measure brush size relative to the view"	},
		{1048576, "SCENE", 0, "Scene", "Measure brush size relative to the scene"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_use_locked_size_ = {
		{&rna_Brush_color_type, 	&rna_Brush_use_adaptive_space,
		-1, "use_locked_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size Unit",
		"Measure brush size relative to the view or the scene",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, flag), RawPropertyType(0), nullptr},
		Brush_use_locked_size_get, Brush_use_locked_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_use_locked_size_items, 2, 0
	};

	static const EnumPropertyItem rna_Brush_color_type_items[3] = {
		{0, "COLOR", 0, "Color", "Paint with a single color"	},
		{2097152, "GRADIENT", 0, "Gradient", "Paint with a gradient"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_color_type_ = {
		{&rna_Brush_use_edge_to_edge, 	&rna_Brush_use_locked_size,
		-1, "color_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Type",
		"Use single color or gradient when painting",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_color_type_get, Brush_color_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_color_type_items, 2, 0
	};

	rna_Brush_use_edge_to_edge_ = {
		{&rna_Brush_use_alpha, 	&rna_Brush_color_type,
		-1, "use_edge_to_edge", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Edge-to-Edge",
		"Drag anchor brush from edge-to-edge",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_edge_to_edge_get, Brush_use_edge_to_edge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_alpha_ = {
		{&rna_Brush_curve_distance_falloff, 	&rna_Brush_use_edge_to_edge,
		-1, "use_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Affect Alpha",
		"When this is disabled, lock alpha while painting",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_alpha_get, Brush_use_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Brush_curve_distance_falloff_ = {
		{&rna_Brush_paint_curve, 	&rna_Brush_use_alpha,
		-1, "curve_distance_falloff", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Falloff Curve",
		"Editable falloff curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_curve_distance_falloff_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_Brush_paint_curve_ = {
		{&rna_Brush_gradient, 	&rna_Brush_curve_distance_falloff,
		-1, "paint_curve", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Paint Curve",
		"Active paint curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_paint_curve_get, Brush_paint_curve_set, nullptr, nullptr,RNA_PaintCurve
	};

	rna_Brush_gradient_ = {
		{&rna_Brush_gradient_stroke_mode, 	&rna_Brush_paint_curve,
		-1, "gradient", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Gradient",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_gradient_get, nullptr, nullptr, nullptr,RNA_ColorRamp
	};

	static const EnumPropertyItem rna_Brush_gradient_stroke_mode_items[4] = {
		{0, "PRESSURE", 0, "Pressure", ""	},
		{1, "SPACING_REPEAT", 0, "Repeat", ""	},
		{2, "SPACING_CLAMP", 0, "Clamp", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_gradient_stroke_mode_ = {
		{&rna_Brush_gradient_fill_mode, 	&rna_Brush_gradient,
		-1, "gradient_stroke_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gradient Stroke Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, gradient_stroke_mode), RawPropertyType(2), nullptr},
		Brush_gradient_stroke_mode_get, Brush_gradient_stroke_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_gradient_stroke_mode_items, 3, 0
	};

	static const EnumPropertyItem rna_Brush_gradient_fill_mode_items[3] = {
		{0, "LINEAR", 0, "Linear", ""	},
		{1, "RADIAL", 0, "Radial", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Brush_gradient_fill_mode_ = {
		{&rna_Brush_use_primary_overlay, 	&rna_Brush_gradient_stroke_mode,
		-1, "gradient_fill_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gradient Fill Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, gradient_fill_mode), RawPropertyType(2), nullptr},
		Brush_gradient_fill_mode_get, Brush_gradient_fill_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Brush_gradient_fill_mode_items, 2, 0
	};

	rna_Brush_use_primary_overlay_ = {
		{&rna_Brush_use_secondary_overlay, 	&rna_Brush_gradient_fill_mode,
		-1, "use_primary_overlay", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Texture Overlay",
		"Show texture in viewport",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_primary_overlay_get, Brush_use_primary_overlay_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_secondary_overlay_ = {
		{&rna_Brush_use_cursor_overlay, 	&rna_Brush_use_primary_overlay,
		-1, "use_secondary_overlay", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Texture Overlay",
		"Show texture in viewport",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_secondary_overlay_get, Brush_use_secondary_overlay_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_cursor_overlay_ = {
		{&rna_Brush_use_cursor_overlay_override, 	&rna_Brush_use_secondary_overlay,
		-1, "use_cursor_overlay", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Cursor Overlay",
		"Show cursor in viewport",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_cursor_overlay_get, Brush_use_cursor_overlay_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_cursor_overlay_override_ = {
		{&rna_Brush_use_primary_overlay_override, 	&rna_Brush_use_cursor_overlay,
		-1, "use_cursor_overlay_override", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Overlay",
		"Don\'t show overlay during a stroke",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_cursor_overlay_override_get, Brush_use_cursor_overlay_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_primary_overlay_override_ = {
		{&rna_Brush_use_secondary_overlay_override, 	&rna_Brush_use_cursor_overlay_override,
		-1, "use_primary_overlay_override", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Overlay",
		"Don\'t show overlay during a stroke",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_primary_overlay_override_get, Brush_use_primary_overlay_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_secondary_overlay_override_ = {
		{&rna_Brush_use_paint_sculpt, 	&rna_Brush_use_primary_overlay_override,
		-1, "use_secondary_overlay_override", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Overlay",
		"Don\'t show overlay during a stroke",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_secondary_overlay_override_get, Brush_use_secondary_overlay_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_paint_sculpt_ = {
		{&rna_Brush_use_paint_uv_sculpt, 	&rna_Brush_use_secondary_overlay_override,
		-1, "use_paint_sculpt", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Sculpt",
		"Use this brush in sculpt mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_paint_sculpt_get, Brush_use_paint_sculpt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Brush_use_paint_uv_sculpt_ = {
		{&rna_Brush_use_paint_vertex, 	&rna_Brush_use_paint_sculpt,
		-1, "use_paint_uv_sculpt", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use UV Sculpt",
		"Use this brush in UV sculpt mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_paint_uv_sculpt_get, Brush_use_paint_uv_sculpt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_paint_vertex_ = {
		{&rna_Brush_use_paint_weight, 	&rna_Brush_use_paint_uv_sculpt,
		-1, "use_paint_vertex", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Vertex",
		"Use this brush in vertex paint mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_paint_vertex_get, Brush_use_paint_vertex_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Brush_use_paint_weight_ = {
		{&rna_Brush_use_paint_image, 	&rna_Brush_use_paint_vertex,
		-1, "use_paint_weight", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Weight",
		"Use this brush in weight paint mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_paint_weight_get, Brush_use_paint_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Brush_use_paint_image_ = {
		{&rna_Brush_use_paint_grease_pencil, 	&rna_Brush_use_paint_weight,
		-1, "use_paint_image", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Texture",
		"Use this brush in texture paint mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_paint_image_get, Brush_use_paint_image_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Brush_use_paint_grease_pencil_ = {
		{&rna_Brush_use_vertex_grease_pencil, 	&rna_Brush_use_paint_image,
		-1, "use_paint_grease_pencil", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Paint",
		"Use this brush in Grease Pencil drawing mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_paint_grease_pencil_get, Brush_use_paint_grease_pencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_vertex_grease_pencil_ = {
		{&rna_Brush_use_paint_sculpt_curves, 	&rna_Brush_use_paint_grease_pencil,
		-1, "use_vertex_grease_pencil", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Vertex",
		"Use this brush in Grease Pencil vertex color mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_vertex_grease_pencil_get, Brush_use_vertex_grease_pencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_use_paint_sculpt_curves_ = {
		{&rna_Brush_texture_slot, 	&rna_Brush_use_vertex_grease_pencil,
		-1, "use_paint_sculpt_curves", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Sculpt",
		"Use this brush in sculpt curves mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_use_paint_sculpt_curves_get, Brush_use_paint_sculpt_curves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Brush_texture_slot_ = {
		{&rna_Brush_texture, 	&rna_Brush_use_paint_sculpt_curves,
		-1, "texture_slot", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture Slot",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_texture_slot_get, nullptr, nullptr, nullptr,RNA_BrushTextureSlot
	};

	rna_Brush_texture_ = {
		{&rna_Brush_mask_texture_slot, 	&rna_Brush_texture_slot,
		-1, "texture", 12583105, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Brush_main_tex_update, 134217728, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_texture_get, Brush_texture_set, nullptr, nullptr,RNA_Texture
	};

	rna_Brush_mask_texture_slot_ = {
		{&rna_Brush_mask_texture, 	&rna_Brush_texture,
		-1, "mask_texture_slot", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mask Texture Slot",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_mask_texture_slot_get, nullptr, nullptr, nullptr,RNA_BrushTextureSlot
	};

	rna_Brush_mask_texture_ = {
		{&rna_Brush_texture_overlay_alpha, 	&rna_Brush_mask_texture_slot,
		-1, "mask_texture", 12583105, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mask Texture",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Brush_secondary_tex_update, 134217728, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_mask_texture_get, Brush_mask_texture_set, nullptr, nullptr,RNA_Texture
	};

	rna_Brush_texture_overlay_alpha_ = {
		{&rna_Brush_mask_overlay_alpha, 	&rna_Brush_mask_texture,
		-1, "texture_overlay_alpha", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Texture Overlay Alpha",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, texture_overlay_alpha), RawPropertyType(0), nullptr},
		Brush_texture_overlay_alpha_get, Brush_texture_overlay_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 33, nullptr
	};

	rna_Brush_mask_overlay_alpha_ = {
		{&rna_Brush_cursor_overlay_alpha, 	&rna_Brush_texture_overlay_alpha,
		-1, "mask_overlay_alpha", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mask Texture Overlay Alpha",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, mask_overlay_alpha), RawPropertyType(0), nullptr},
		Brush_mask_overlay_alpha_get, Brush_mask_overlay_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 33, nullptr
	};

	rna_Brush_cursor_overlay_alpha_ = {
		{&rna_Brush_cursor_color_add, 	&rna_Brush_mask_overlay_alpha,
		-1, "cursor_overlay_alpha", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mask Texture Overlay Alpha",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, cursor_overlay_alpha), RawPropertyType(0), nullptr},
		Brush_cursor_overlay_alpha_get, Brush_cursor_overlay_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 33, nullptr
	};

	static float rna_Brush_cursor_color_add_default[4] = {
		1.0f,
		0.3899999857f,
		0.3899999857f,
		0.8999999762f
	};
	rna_Brush_cursor_color_add_ = {
		{&rna_Brush_cursor_color_subtract, 	&rna_Brush_cursor_overlay_alpha,
		-1, "cursor_color_add", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Add Color",
		"Color of cursor when adding",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, add_col), RawPropertyType(5), nullptr},
		nullptr, nullptr, Brush_cursor_color_add_get, Brush_cursor_color_add_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Brush_cursor_color_add_default
	};

	static float rna_Brush_cursor_color_subtract_default[4] = {
		0.3899999857f,
		0.3899999857f,
		1.0f,
		0.8999999762f
	};
	rna_Brush_cursor_color_subtract_ = {
		{&rna_Brush_brush_capabilities, 	&rna_Brush_cursor_color_add,
		-1, "cursor_color_subtract", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Subtract Color",
		"Color of cursor when subtracting",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Brush_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Brush, sub_col), RawPropertyType(5), nullptr},
		nullptr, nullptr, Brush_cursor_color_subtract_get, Brush_cursor_color_subtract_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Brush_cursor_color_subtract_default
	};

	rna_Brush_brush_capabilities_ = {
		{&rna_Brush_sculpt_capabilities, 	&rna_Brush_cursor_color_subtract,
		-1, "brush_capabilities", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Brush Capabilities",
		"Brush\'s capabilities",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_brush_capabilities_get, nullptr, nullptr, nullptr,RNA_BrushCapabilities
	};

	rna_Brush_sculpt_capabilities_ = {
		{&rna_Brush_image_paint_capabilities, 	&rna_Brush_brush_capabilities,
		-1, "sculpt_capabilities", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sculpt Capabilities",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_sculpt_capabilities_get, nullptr, nullptr, nullptr,RNA_BrushCapabilitiesSculpt
	};

	rna_Brush_image_paint_capabilities_ = {
		{&rna_Brush_vertex_paint_capabilities, 	&rna_Brush_sculpt_capabilities,
		-1, "image_paint_capabilities", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image Paint Capabilities",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_image_paint_capabilities_get, nullptr, nullptr, nullptr,RNA_BrushCapabilitiesImagePaint
	};

	rna_Brush_vertex_paint_capabilities_ = {
		{&rna_Brush_weight_paint_capabilities, 	&rna_Brush_image_paint_capabilities,
		-1, "vertex_paint_capabilities", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Paint Capabilities",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_vertex_paint_capabilities_get, nullptr, nullptr, nullptr,RNA_BrushCapabilitiesVertexPaint
	};

	rna_Brush_weight_paint_capabilities_ = {
		{&rna_Brush_gpencil_settings, 	&rna_Brush_vertex_paint_capabilities,
		-1, "weight_paint_capabilities", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Weight Paint Capabilities",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_weight_paint_capabilities_get, nullptr, nullptr, nullptr,RNA_BrushCapabilitiesWeightPaint
	};

	rna_Brush_gpencil_settings_ = {
		{&rna_Brush_curves_sculpt_settings, 	&rna_Brush_weight_paint_capabilities,
		-1, "gpencil_settings", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Gpencil Settings",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_gpencil_settings_get, nullptr, nullptr, nullptr,RNA_BrushGpencilSettings
	};

	rna_Brush_curves_sculpt_settings_ = {
		{&rna_Brush_mesh_automasking_settings, 	&rna_Brush_gpencil_settings,
		-1, "curves_sculpt_settings", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curves Sculpt Settings",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_curves_sculpt_settings_get, nullptr, nullptr, nullptr,RNA_BrushCurvesSculptSettings
	};

	rna_Brush_mesh_automasking_settings_ = {
		{nullptr, 	&rna_Brush_curves_sculpt_settings,
		-1, "mesh_automasking_settings", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mesh Automasking Settings",
		nullptr,
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Brush_mesh_automasking_settings_get, nullptr, nullptr, nullptr,RNA_MeshAutomaskingSettings
	};

	StructRNA *srna = RNA_Brush;
	srna->cont.properties = {&rna_Brush_has_unsaved_changes, &rna_Brush_mesh_automasking_settings};
	srna->identifier = "Brush";
	srna->flag = 519;
	srna->name = "Brush";
	srna->description = "Brush data-block for storing brush settings for painting and sculpting";
	srna->translation_context = "*";
	srna->icon = 196;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Brush Capabilities */
static CollectionPropertyRNA rna_BrushCapabilities_rna_properties_;
PropertyRNA &rna_BrushCapabilities_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilities_rna_properties_);

static PointerPropertyRNA rna_BrushCapabilities_rna_type_;
PropertyRNA &rna_BrushCapabilities_rna_type = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilities_rna_type_);

static BoolPropertyRNA rna_BrushCapabilities_has_overlay_;
PropertyRNA &rna_BrushCapabilities_has_overlay = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilities_has_overlay_);

static BoolPropertyRNA rna_BrushCapabilities_has_random_texture_angle_;
PropertyRNA &rna_BrushCapabilities_has_random_texture_angle = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilities_has_random_texture_angle_);

static BoolPropertyRNA rna_BrushCapabilities_has_spacing_;
PropertyRNA &rna_BrushCapabilities_has_spacing = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilities_has_spacing_);

static BoolPropertyRNA rna_BrushCapabilities_has_smooth_stroke_;
PropertyRNA &rna_BrushCapabilities_has_smooth_stroke = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilities_has_smooth_stroke_);

StructRNA *RNA_BrushCapabilities;
void register_struct_BrushCapabilities(BlenderRNA &brna)
{
	rna_BrushCapabilities_rna_properties_ = {
		{&rna_BrushCapabilities_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilities_rna_properties_begin, BrushCapabilities_rna_properties_next, BrushCapabilities_rna_properties_end, BrushCapabilities_rna_properties_get, nullptr, nullptr, BrushCapabilities_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BrushCapabilities_rna_type_ = {
		{&rna_BrushCapabilities_has_overlay, 	&rna_BrushCapabilities_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilities_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BrushCapabilities_has_overlay_ = {
		{&rna_BrushCapabilities_has_random_texture_angle, 	&rna_BrushCapabilities_rna_type,
		-1, "has_overlay", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Overlay",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilities_has_overlay_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilities_has_random_texture_angle_ = {
		{&rna_BrushCapabilities_has_spacing, 	&rna_BrushCapabilities_has_overlay,
		-1, "has_random_texture_angle", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Random Texture Angle",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilities_has_random_texture_angle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilities_has_spacing_ = {
		{&rna_BrushCapabilities_has_smooth_stroke, 	&rna_BrushCapabilities_has_random_texture_angle,
		-1, "has_spacing", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Spacing",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilities_has_spacing_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilities_has_smooth_stroke_ = {
		{nullptr, 	&rna_BrushCapabilities_has_spacing,
		-1, "has_smooth_stroke", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Smooth Stroke",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilities_has_smooth_stroke_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BrushCapabilities;
	srna->cont.properties = {&rna_BrushCapabilities_rna_properties, &rna_BrushCapabilities_has_smooth_stroke};
	srna->identifier = "BrushCapabilities";
	srna->flag = 516;
	srna->name = "Brush Capabilities";
	srna->description = "Read-only indications of supported operations";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BrushCapabilities_rna_properties;
	srna->nested = RNA_Brush;
};

/* Sculpt Capabilities */
static CollectionPropertyRNA rna_BrushCapabilitiesSculpt_rna_properties_;
PropertyRNA &rna_BrushCapabilitiesSculpt_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_rna_properties_);

static PointerPropertyRNA rna_BrushCapabilitiesSculpt_rna_type_;
PropertyRNA &rna_BrushCapabilitiesSculpt_rna_type = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_rna_type_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_accumulate_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_accumulate = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_accumulate_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_auto_smooth_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_auto_smooth = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_auto_smooth_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_normal_radius_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_normal_radius = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_normal_radius_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_hardness_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_hardness = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_hardness_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_tip_roundness_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_tip_roundness = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_tip_roundness_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_topology_rake_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_topology_rake = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_topology_rake_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_height_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_height = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_height_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_plane_depth_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_plane_depth = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_plane_depth_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_plane_height_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_plane_height = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_plane_height_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_jitter_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_jitter = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_jitter_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_normal_weight_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_normal_weight = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_normal_weight_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_rake_factor_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_rake_factor = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_rake_factor_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_persistence_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_persistence = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_persistence_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_pinch_factor_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_pinch_factor = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_pinch_factor_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_plane_offset_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_plane_offset = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_plane_offset_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_random_texture_angle_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_random_texture_angle = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_random_texture_angle_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_sculpt_plane_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_sculpt_plane = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_sculpt_plane_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_color_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_color = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_color_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_secondary_color_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_secondary_color = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_secondary_color_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_smooth_stroke_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_smooth_stroke = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_smooth_stroke_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_space_attenuation_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_space_attenuation = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_space_attenuation_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_strength_pressure_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_strength_pressure = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_strength_pressure_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_size_pressure_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_size_pressure = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_size_pressure_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_auto_smooth_pressure_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_auto_smooth_pressure = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_auto_smooth_pressure_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_hardness_pressure_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_hardness_pressure = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_hardness_pressure_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_direction_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_direction = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_direction_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_gravity_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_gravity = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_gravity_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_tilt_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_tilt = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_tilt_);

static BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_dyntopo_;
PropertyRNA &rna_BrushCapabilitiesSculpt_has_dyntopo = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesSculpt_has_dyntopo_);

StructRNA *RNA_BrushCapabilitiesSculpt;
void register_struct_BrushCapabilitiesSculpt(BlenderRNA &brna)
{
	rna_BrushCapabilitiesSculpt_rna_properties_ = {
		{&rna_BrushCapabilitiesSculpt_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_rna_properties_begin, BrushCapabilitiesSculpt_rna_properties_next, BrushCapabilitiesSculpt_rna_properties_end, BrushCapabilitiesSculpt_rna_properties_get, nullptr, nullptr, BrushCapabilitiesSculpt_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BrushCapabilitiesSculpt_rna_type_ = {
		{&rna_BrushCapabilitiesSculpt_has_accumulate, 	&rna_BrushCapabilitiesSculpt_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BrushCapabilitiesSculpt_has_accumulate_ = {
		{&rna_BrushCapabilitiesSculpt_has_auto_smooth, 	&rna_BrushCapabilitiesSculpt_rna_type,
		-1, "has_accumulate", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Accumulate",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_accumulate_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_auto_smooth_ = {
		{&rna_BrushCapabilitiesSculpt_has_normal_radius, 	&rna_BrushCapabilitiesSculpt_has_accumulate,
		-1, "has_auto_smooth", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Auto Smooth",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_auto_smooth_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_normal_radius_ = {
		{&rna_BrushCapabilitiesSculpt_has_hardness, 	&rna_BrushCapabilitiesSculpt_has_auto_smooth,
		-1, "has_normal_radius", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Normal Radius",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_normal_radius_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_hardness_ = {
		{&rna_BrushCapabilitiesSculpt_has_tip_roundness, 	&rna_BrushCapabilitiesSculpt_has_normal_radius,
		-1, "has_hardness", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Hardness",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_hardness_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_tip_roundness_ = {
		{&rna_BrushCapabilitiesSculpt_has_topology_rake, 	&rna_BrushCapabilitiesSculpt_has_hardness,
		-1, "has_tip_roundness", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Tip Roundness",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_tip_roundness_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_topology_rake_ = {
		{&rna_BrushCapabilitiesSculpt_has_height, 	&rna_BrushCapabilitiesSculpt_has_tip_roundness,
		-1, "has_topology_rake", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Topology Rake",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_topology_rake_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_height_ = {
		{&rna_BrushCapabilitiesSculpt_has_plane_depth, 	&rna_BrushCapabilitiesSculpt_has_topology_rake,
		-1, "has_height", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Height",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_height_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_plane_depth_ = {
		{&rna_BrushCapabilitiesSculpt_has_plane_height, 	&rna_BrushCapabilitiesSculpt_has_height,
		-1, "has_plane_depth", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Plane Depth",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_plane_depth_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_plane_height_ = {
		{&rna_BrushCapabilitiesSculpt_has_jitter, 	&rna_BrushCapabilitiesSculpt_has_plane_depth,
		-1, "has_plane_height", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Plane Height",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_plane_height_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_jitter_ = {
		{&rna_BrushCapabilitiesSculpt_has_normal_weight, 	&rna_BrushCapabilitiesSculpt_has_plane_height,
		-1, "has_jitter", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Jitter",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_jitter_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_normal_weight_ = {
		{&rna_BrushCapabilitiesSculpt_has_rake_factor, 	&rna_BrushCapabilitiesSculpt_has_jitter,
		-1, "has_normal_weight", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Crease/Pinch Factor",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_normal_weight_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_rake_factor_ = {
		{&rna_BrushCapabilitiesSculpt_has_persistence, 	&rna_BrushCapabilitiesSculpt_has_normal_weight,
		-1, "has_rake_factor", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Rake Factor",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_rake_factor_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_persistence_ = {
		{&rna_BrushCapabilitiesSculpt_has_pinch_factor, 	&rna_BrushCapabilitiesSculpt_has_rake_factor,
		-1, "has_persistence", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Persistence",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_persistence_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_pinch_factor_ = {
		{&rna_BrushCapabilitiesSculpt_has_plane_offset, 	&rna_BrushCapabilitiesSculpt_has_persistence,
		-1, "has_pinch_factor", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Pinch Factor",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_pinch_factor_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_plane_offset_ = {
		{&rna_BrushCapabilitiesSculpt_has_random_texture_angle, 	&rna_BrushCapabilitiesSculpt_has_pinch_factor,
		-1, "has_plane_offset", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Plane Offset",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_plane_offset_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_random_texture_angle_ = {
		{&rna_BrushCapabilitiesSculpt_has_sculpt_plane, 	&rna_BrushCapabilitiesSculpt_has_plane_offset,
		-1, "has_random_texture_angle", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Random Texture Angle",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_random_texture_angle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_sculpt_plane_ = {
		{&rna_BrushCapabilitiesSculpt_has_color, 	&rna_BrushCapabilitiesSculpt_has_random_texture_angle,
		-1, "has_sculpt_plane", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Sculpt Plane",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_sculpt_plane_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_color_ = {
		{&rna_BrushCapabilitiesSculpt_has_secondary_color, 	&rna_BrushCapabilitiesSculpt_has_sculpt_plane,
		-1, "has_color", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Color",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_secondary_color_ = {
		{&rna_BrushCapabilitiesSculpt_has_smooth_stroke, 	&rna_BrushCapabilitiesSculpt_has_color,
		-1, "has_secondary_color", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Secondary Color",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_secondary_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_smooth_stroke_ = {
		{&rna_BrushCapabilitiesSculpt_has_space_attenuation, 	&rna_BrushCapabilitiesSculpt_has_secondary_color,
		-1, "has_smooth_stroke", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Smooth Stroke",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_smooth_stroke_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_space_attenuation_ = {
		{&rna_BrushCapabilitiesSculpt_has_strength_pressure, 	&rna_BrushCapabilitiesSculpt_has_smooth_stroke,
		-1, "has_space_attenuation", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Space Attenuation",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_space_attenuation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_strength_pressure_ = {
		{&rna_BrushCapabilitiesSculpt_has_size_pressure, 	&rna_BrushCapabilitiesSculpt_has_space_attenuation,
		-1, "has_strength_pressure", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Strength Pressure",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_strength_pressure_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_size_pressure_ = {
		{&rna_BrushCapabilitiesSculpt_has_auto_smooth_pressure, 	&rna_BrushCapabilitiesSculpt_has_strength_pressure,
		-1, "has_size_pressure", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Size Pressure",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_size_pressure_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_auto_smooth_pressure_ = {
		{&rna_BrushCapabilitiesSculpt_has_hardness_pressure, 	&rna_BrushCapabilitiesSculpt_has_size_pressure,
		-1, "has_auto_smooth_pressure", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Auto-Smooth Pressure",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_auto_smooth_pressure_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_hardness_pressure_ = {
		{&rna_BrushCapabilitiesSculpt_has_direction, 	&rna_BrushCapabilitiesSculpt_has_auto_smooth_pressure,
		-1, "has_hardness_pressure", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Hardness Pressure",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_hardness_pressure_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_direction_ = {
		{&rna_BrushCapabilitiesSculpt_has_gravity, 	&rna_BrushCapabilitiesSculpt_has_hardness_pressure,
		-1, "has_direction", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Direction",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_direction_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_gravity_ = {
		{&rna_BrushCapabilitiesSculpt_has_tilt, 	&rna_BrushCapabilitiesSculpt_has_direction,
		-1, "has_gravity", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Gravity",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_gravity_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_tilt_ = {
		{&rna_BrushCapabilitiesSculpt_has_dyntopo, 	&rna_BrushCapabilitiesSculpt_has_gravity,
		-1, "has_tilt", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Tilt",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_tilt_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesSculpt_has_dyntopo_ = {
		{nullptr, 	&rna_BrushCapabilitiesSculpt_has_tilt,
		-1, "has_dyntopo", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Dyntopo",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesSculpt_has_dyntopo_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BrushCapabilitiesSculpt;
	srna->cont.properties = {&rna_BrushCapabilitiesSculpt_rna_properties, &rna_BrushCapabilitiesSculpt_has_dyntopo};
	srna->identifier = "BrushCapabilitiesSculpt";
	srna->flag = 516;
	srna->name = "Sculpt Capabilities";
	srna->description = "Read-only indications of which brush operations are supported by the current sculpt tool";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BrushCapabilitiesSculpt_rna_properties;
	srna->nested = RNA_Brush;
};

/* Image Paint Capabilities */
static CollectionPropertyRNA rna_BrushCapabilitiesImagePaint_rna_properties_;
PropertyRNA &rna_BrushCapabilitiesImagePaint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesImagePaint_rna_properties_);

static PointerPropertyRNA rna_BrushCapabilitiesImagePaint_rna_type_;
PropertyRNA &rna_BrushCapabilitiesImagePaint_rna_type = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesImagePaint_rna_type_);

static BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_accumulate_;
PropertyRNA &rna_BrushCapabilitiesImagePaint_has_accumulate = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesImagePaint_has_accumulate_);

static BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_space_attenuation_;
PropertyRNA &rna_BrushCapabilitiesImagePaint_has_space_attenuation = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesImagePaint_has_space_attenuation_);

static BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_radius_;
PropertyRNA &rna_BrushCapabilitiesImagePaint_has_radius = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesImagePaint_has_radius_);

static BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_color_;
PropertyRNA &rna_BrushCapabilitiesImagePaint_has_color = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesImagePaint_has_color_);

StructRNA *RNA_BrushCapabilitiesImagePaint;
void register_struct_BrushCapabilitiesImagePaint(BlenderRNA &brna)
{
	rna_BrushCapabilitiesImagePaint_rna_properties_ = {
		{&rna_BrushCapabilitiesImagePaint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesImagePaint_rna_properties_begin, BrushCapabilitiesImagePaint_rna_properties_next, BrushCapabilitiesImagePaint_rna_properties_end, BrushCapabilitiesImagePaint_rna_properties_get, nullptr, nullptr, BrushCapabilitiesImagePaint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BrushCapabilitiesImagePaint_rna_type_ = {
		{&rna_BrushCapabilitiesImagePaint_has_accumulate, 	&rna_BrushCapabilitiesImagePaint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesImagePaint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BrushCapabilitiesImagePaint_has_accumulate_ = {
		{&rna_BrushCapabilitiesImagePaint_has_space_attenuation, 	&rna_BrushCapabilitiesImagePaint_rna_type,
		-1, "has_accumulate", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Accumulate",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesImagePaint_has_accumulate_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesImagePaint_has_space_attenuation_ = {
		{&rna_BrushCapabilitiesImagePaint_has_radius, 	&rna_BrushCapabilitiesImagePaint_has_accumulate,
		-1, "has_space_attenuation", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Space Attenuation",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesImagePaint_has_space_attenuation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesImagePaint_has_radius_ = {
		{&rna_BrushCapabilitiesImagePaint_has_color, 	&rna_BrushCapabilitiesImagePaint_has_space_attenuation,
		-1, "has_radius", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Radius",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesImagePaint_has_radius_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCapabilitiesImagePaint_has_color_ = {
		{nullptr, 	&rna_BrushCapabilitiesImagePaint_has_radius,
		-1, "has_color", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Color",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesImagePaint_has_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BrushCapabilitiesImagePaint;
	srna->cont.properties = {&rna_BrushCapabilitiesImagePaint_rna_properties, &rna_BrushCapabilitiesImagePaint_has_color};
	srna->identifier = "BrushCapabilitiesImagePaint";
	srna->flag = 516;
	srna->name = "Image Paint Capabilities";
	srna->description = "Read-only indications of supported operations";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BrushCapabilitiesImagePaint_rna_properties;
	srna->nested = RNA_Brush;
};

/* Vertex Paint Capabilities */
static CollectionPropertyRNA rna_BrushCapabilitiesVertexPaint_rna_properties_;
PropertyRNA &rna_BrushCapabilitiesVertexPaint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesVertexPaint_rna_properties_);

static PointerPropertyRNA rna_BrushCapabilitiesVertexPaint_rna_type_;
PropertyRNA &rna_BrushCapabilitiesVertexPaint_rna_type = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesVertexPaint_rna_type_);

static BoolPropertyRNA rna_BrushCapabilitiesVertexPaint_has_color_;
PropertyRNA &rna_BrushCapabilitiesVertexPaint_has_color = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesVertexPaint_has_color_);

StructRNA *RNA_BrushCapabilitiesVertexPaint;
void register_struct_BrushCapabilitiesVertexPaint(BlenderRNA &brna)
{
	rna_BrushCapabilitiesVertexPaint_rna_properties_ = {
		{&rna_BrushCapabilitiesVertexPaint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesVertexPaint_rna_properties_begin, BrushCapabilitiesVertexPaint_rna_properties_next, BrushCapabilitiesVertexPaint_rna_properties_end, BrushCapabilitiesVertexPaint_rna_properties_get, nullptr, nullptr, BrushCapabilitiesVertexPaint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BrushCapabilitiesVertexPaint_rna_type_ = {
		{&rna_BrushCapabilitiesVertexPaint_has_color, 	&rna_BrushCapabilitiesVertexPaint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesVertexPaint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BrushCapabilitiesVertexPaint_has_color_ = {
		{nullptr, 	&rna_BrushCapabilitiesVertexPaint_rna_type,
		-1, "has_color", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Color",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesVertexPaint_has_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BrushCapabilitiesVertexPaint;
	srna->cont.properties = {&rna_BrushCapabilitiesVertexPaint_rna_properties, &rna_BrushCapabilitiesVertexPaint_has_color};
	srna->identifier = "BrushCapabilitiesVertexPaint";
	srna->flag = 516;
	srna->name = "Vertex Paint Capabilities";
	srna->description = "Read-only indications of supported operations";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BrushCapabilitiesVertexPaint_rna_properties;
	srna->nested = RNA_Brush;
};

/* Weight Paint Capabilities */
static CollectionPropertyRNA rna_BrushCapabilitiesWeightPaint_rna_properties_;
PropertyRNA &rna_BrushCapabilitiesWeightPaint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesWeightPaint_rna_properties_);

static PointerPropertyRNA rna_BrushCapabilitiesWeightPaint_rna_type_;
PropertyRNA &rna_BrushCapabilitiesWeightPaint_rna_type = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesWeightPaint_rna_type_);

static BoolPropertyRNA rna_BrushCapabilitiesWeightPaint_has_weight_;
PropertyRNA &rna_BrushCapabilitiesWeightPaint_has_weight = reinterpret_cast<PropertyRNA &>(rna_BrushCapabilitiesWeightPaint_has_weight_);

StructRNA *RNA_BrushCapabilitiesWeightPaint;
void register_struct_BrushCapabilitiesWeightPaint(BlenderRNA &brna)
{
	rna_BrushCapabilitiesWeightPaint_rna_properties_ = {
		{&rna_BrushCapabilitiesWeightPaint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesWeightPaint_rna_properties_begin, BrushCapabilitiesWeightPaint_rna_properties_next, BrushCapabilitiesWeightPaint_rna_properties_end, BrushCapabilitiesWeightPaint_rna_properties_get, nullptr, nullptr, BrushCapabilitiesWeightPaint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BrushCapabilitiesWeightPaint_rna_type_ = {
		{&rna_BrushCapabilitiesWeightPaint_has_weight, 	&rna_BrushCapabilitiesWeightPaint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesWeightPaint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BrushCapabilitiesWeightPaint_has_weight_ = {
		{nullptr, 	&rna_BrushCapabilitiesWeightPaint_rna_type,
		-1, "has_weight", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Weight",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCapabilitiesWeightPaint_has_weight_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BrushCapabilitiesWeightPaint;
	srna->cont.properties = {&rna_BrushCapabilitiesWeightPaint_rna_properties, &rna_BrushCapabilitiesWeightPaint_has_weight};
	srna->identifier = "BrushCapabilitiesWeightPaint";
	srna->flag = 516;
	srna->name = "Weight Paint Capabilities";
	srna->description = "Read-only indications of supported operations";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BrushCapabilitiesWeightPaint_rna_properties;
	srna->nested = RNA_Brush;
};

/* Grease Pencil Brush Settings */
static CollectionPropertyRNA rna_BrushGpencilSettings_rna_properties_;
PropertyRNA &rna_BrushGpencilSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_rna_properties_);

static PointerPropertyRNA rna_BrushGpencilSettings_rna_type_;
PropertyRNA &rna_BrushGpencilSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_rna_type_);

static FloatPropertyRNA rna_BrushGpencilSettings_pen_strength_;
PropertyRNA &rna_BrushGpencilSettings_pen_strength = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_pen_strength_);

static FloatPropertyRNA rna_BrushGpencilSettings_pen_jitter_;
PropertyRNA &rna_BrushGpencilSettings_pen_jitter = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_pen_jitter_);

static FloatPropertyRNA rna_BrushGpencilSettings_random_pressure_;
PropertyRNA &rna_BrushGpencilSettings_random_pressure = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_random_pressure_);

static FloatPropertyRNA rna_BrushGpencilSettings_random_strength_;
PropertyRNA &rna_BrushGpencilSettings_random_strength = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_random_strength_);

static FloatPropertyRNA rna_BrushGpencilSettings_angle_;
PropertyRNA &rna_BrushGpencilSettings_angle = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_angle_);

static FloatPropertyRNA rna_BrushGpencilSettings_angle_factor_;
PropertyRNA &rna_BrushGpencilSettings_angle_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_angle_factor_);

static FloatPropertyRNA rna_BrushGpencilSettings_pen_smooth_factor_;
PropertyRNA &rna_BrushGpencilSettings_pen_smooth_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_pen_smooth_factor_);

static IntPropertyRNA rna_BrushGpencilSettings_pen_smooth_steps_;
PropertyRNA &rna_BrushGpencilSettings_pen_smooth_steps = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_pen_smooth_steps_);

static IntPropertyRNA rna_BrushGpencilSettings_pen_subdivision_steps_;
PropertyRNA &rna_BrushGpencilSettings_pen_subdivision_steps = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_pen_subdivision_steps_);

static FloatPropertyRNA rna_BrushGpencilSettings_simplify_factor_;
PropertyRNA &rna_BrushGpencilSettings_simplify_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_simplify_factor_);

static FloatPropertyRNA rna_BrushGpencilSettings_simplify_pixel_threshold_;
PropertyRNA &rna_BrushGpencilSettings_simplify_pixel_threshold = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_simplify_pixel_threshold_);

static PointerPropertyRNA rna_BrushGpencilSettings_curve_sensitivity_;
PropertyRNA &rna_BrushGpencilSettings_curve_sensitivity = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_curve_sensitivity_);

static PointerPropertyRNA rna_BrushGpencilSettings_curve_strength_;
PropertyRNA &rna_BrushGpencilSettings_curve_strength = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_curve_strength_);

static PointerPropertyRNA rna_BrushGpencilSettings_curve_jitter_;
PropertyRNA &rna_BrushGpencilSettings_curve_jitter = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_curve_jitter_);

static PointerPropertyRNA rna_BrushGpencilSettings_curve_random_pressure_;
PropertyRNA &rna_BrushGpencilSettings_curve_random_pressure = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_curve_random_pressure_);

static PointerPropertyRNA rna_BrushGpencilSettings_curve_random_strength_;
PropertyRNA &rna_BrushGpencilSettings_curve_random_strength = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_curve_random_strength_);

static PointerPropertyRNA rna_BrushGpencilSettings_curve_random_uv_;
PropertyRNA &rna_BrushGpencilSettings_curve_random_uv = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_curve_random_uv_);

static PointerPropertyRNA rna_BrushGpencilSettings_curve_random_hue_;
PropertyRNA &rna_BrushGpencilSettings_curve_random_hue = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_curve_random_hue_);

static PointerPropertyRNA rna_BrushGpencilSettings_curve_random_saturation_;
PropertyRNA &rna_BrushGpencilSettings_curve_random_saturation = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_curve_random_saturation_);

static PointerPropertyRNA rna_BrushGpencilSettings_curve_random_value_;
PropertyRNA &rna_BrushGpencilSettings_curve_random_value = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_curve_random_value_);

static FloatPropertyRNA rna_BrushGpencilSettings_fill_threshold_;
PropertyRNA &rna_BrushGpencilSettings_fill_threshold = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_fill_threshold_);

static FloatPropertyRNA rna_BrushGpencilSettings_fill_factor_;
PropertyRNA &rna_BrushGpencilSettings_fill_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_fill_factor_);

static IntPropertyRNA rna_BrushGpencilSettings_fill_simplify_level_;
PropertyRNA &rna_BrushGpencilSettings_fill_simplify_level = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_fill_simplify_level_);

static FloatPropertyRNA rna_BrushGpencilSettings_uv_random_;
PropertyRNA &rna_BrushGpencilSettings_uv_random = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_uv_random_);

static FloatPropertyRNA rna_BrushGpencilSettings_hardness_;
PropertyRNA &rna_BrushGpencilSettings_hardness = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_hardness_);

static FloatPropertyRNA rna_BrushGpencilSettings_aspect_;
PropertyRNA &rna_BrushGpencilSettings_aspect = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_aspect_);

static IntPropertyRNA rna_BrushGpencilSettings_input_samples_;
PropertyRNA &rna_BrushGpencilSettings_input_samples = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_input_samples_);

static FloatPropertyRNA rna_BrushGpencilSettings_active_smooth_factor_;
PropertyRNA &rna_BrushGpencilSettings_active_smooth_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_active_smooth_factor_);

static FloatPropertyRNA rna_BrushGpencilSettings_eraser_strength_factor_;
PropertyRNA &rna_BrushGpencilSettings_eraser_strength_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_eraser_strength_factor_);

static FloatPropertyRNA rna_BrushGpencilSettings_eraser_thickness_factor_;
PropertyRNA &rna_BrushGpencilSettings_eraser_thickness_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_eraser_thickness_factor_);

static EnumPropertyRNA rna_BrushGpencilSettings_vertex_mode_;
PropertyRNA &rna_BrushGpencilSettings_vertex_mode = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_vertex_mode_);

static FloatPropertyRNA rna_BrushGpencilSettings_vertex_color_factor_;
PropertyRNA &rna_BrushGpencilSettings_vertex_color_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_vertex_color_factor_);

static FloatPropertyRNA rna_BrushGpencilSettings_random_hue_factor_;
PropertyRNA &rna_BrushGpencilSettings_random_hue_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_random_hue_factor_);

static FloatPropertyRNA rna_BrushGpencilSettings_random_saturation_factor_;
PropertyRNA &rna_BrushGpencilSettings_random_saturation_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_random_saturation_factor_);

static FloatPropertyRNA rna_BrushGpencilSettings_random_value_factor_;
PropertyRNA &rna_BrushGpencilSettings_random_value_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_random_value_factor_);

static FloatPropertyRNA rna_BrushGpencilSettings_extend_stroke_factor_;
PropertyRNA &rna_BrushGpencilSettings_extend_stroke_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_extend_stroke_factor_);

static EnumPropertyRNA rna_BrushGpencilSettings_fill_extend_mode_;
PropertyRNA &rna_BrushGpencilSettings_fill_extend_mode = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_fill_extend_mode_);

static IntPropertyRNA rna_BrushGpencilSettings_dilate_;
PropertyRNA &rna_BrushGpencilSettings_dilate = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_dilate_);

static FloatPropertyRNA rna_BrushGpencilSettings_outline_thickness_factor_;
PropertyRNA &rna_BrushGpencilSettings_outline_thickness_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_outline_thickness_factor_);

static FloatPropertyRNA rna_BrushGpencilSettings_conversion_threshold_;
PropertyRNA &rna_BrushGpencilSettings_conversion_threshold = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_conversion_threshold_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_pressure_;
PropertyRNA &rna_BrushGpencilSettings_use_pressure = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_pressure_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_strength_pressure_;
PropertyRNA &rna_BrushGpencilSettings_use_strength_pressure = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_strength_pressure_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_jitter_pressure_;
PropertyRNA &rna_BrushGpencilSettings_use_jitter_pressure = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_jitter_pressure_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_hue_;
PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_hue = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_stroke_random_hue_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_sat_;
PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_sat = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_stroke_random_sat_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_val_;
PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_val = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_stroke_random_val_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_radius_;
PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_radius = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_stroke_random_radius_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_strength_;
PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_strength = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_stroke_random_strength_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_uv_;
PropertyRNA &rna_BrushGpencilSettings_use_stroke_random_uv = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_stroke_random_uv_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_hue_;
PropertyRNA &rna_BrushGpencilSettings_use_random_press_hue = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_random_press_hue_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_sat_;
PropertyRNA &rna_BrushGpencilSettings_use_random_press_sat = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_random_press_sat_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_val_;
PropertyRNA &rna_BrushGpencilSettings_use_random_press_val = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_random_press_val_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_radius_;
PropertyRNA &rna_BrushGpencilSettings_use_random_press_radius = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_random_press_radius_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_strength_;
PropertyRNA &rna_BrushGpencilSettings_use_random_press_strength = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_random_press_strength_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_uv_;
PropertyRNA &rna_BrushGpencilSettings_use_random_press_uv = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_random_press_uv_);

static EnumPropertyRNA rna_BrushGpencilSettings_stroke_type_;
PropertyRNA &rna_BrushGpencilSettings_stroke_type = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_stroke_type_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_settings_stabilizer_;
PropertyRNA &rna_BrushGpencilSettings_use_settings_stabilizer = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_settings_stabilizer_);

static EnumPropertyRNA rna_BrushGpencilSettings_eraser_mode_;
PropertyRNA &rna_BrushGpencilSettings_eraser_mode = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_eraser_mode_);

static EnumPropertyRNA rna_BrushGpencilSettings_caps_type_;
PropertyRNA &rna_BrushGpencilSettings_caps_type = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_caps_type_);

static EnumPropertyRNA rna_BrushGpencilSettings_fill_draw_mode_;
PropertyRNA &rna_BrushGpencilSettings_fill_draw_mode = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_fill_draw_mode_);

static EnumPropertyRNA rna_BrushGpencilSettings_fill_layer_mode_;
PropertyRNA &rna_BrushGpencilSettings_fill_layer_mode = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_fill_layer_mode_);

static EnumPropertyRNA rna_BrushGpencilSettings_fill_direction_;
PropertyRNA &rna_BrushGpencilSettings_fill_direction = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_fill_direction_);

static EnumPropertyRNA rna_BrushGpencilSettings_fill_solver_;
PropertyRNA &rna_BrushGpencilSettings_fill_solver = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_fill_solver_);

static FloatPropertyRNA rna_BrushGpencilSettings_fill_gap_factor_;
PropertyRNA &rna_BrushGpencilSettings_fill_gap_factor = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_fill_gap_factor_);

static BoolPropertyRNA rna_BrushGpencilSettings_pin_draw_mode_;
PropertyRNA &rna_BrushGpencilSettings_pin_draw_mode = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_pin_draw_mode_);

static EnumPropertyRNA rna_BrushGpencilSettings_brush_draw_mode_;
PropertyRNA &rna_BrushGpencilSettings_brush_draw_mode = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_brush_draw_mode_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_trim_;
PropertyRNA &rna_BrushGpencilSettings_use_trim = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_trim_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_settings_outline_;
PropertyRNA &rna_BrushGpencilSettings_use_settings_outline = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_settings_outline_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_edit_position_;
PropertyRNA &rna_BrushGpencilSettings_use_edit_position = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_edit_position_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_edit_strength_;
PropertyRNA &rna_BrushGpencilSettings_use_edit_strength = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_edit_strength_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_edit_thickness_;
PropertyRNA &rna_BrushGpencilSettings_use_edit_thickness = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_edit_thickness_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_edit_uv_;
PropertyRNA &rna_BrushGpencilSettings_use_edit_uv = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_edit_uv_);

static PointerPropertyRNA rna_BrushGpencilSettings_material_;
PropertyRNA &rna_BrushGpencilSettings_material = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_material_);

static PointerPropertyRNA rna_BrushGpencilSettings_material_alt_;
PropertyRNA &rna_BrushGpencilSettings_material_alt = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_material_alt_);

static BoolPropertyRNA rna_BrushGpencilSettings_show_fill_boundary_;
PropertyRNA &rna_BrushGpencilSettings_show_fill_boundary = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_show_fill_boundary_);

static BoolPropertyRNA rna_BrushGpencilSettings_show_fill_extend_;
PropertyRNA &rna_BrushGpencilSettings_show_fill_extend = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_show_fill_extend_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_collide_strokes_;
PropertyRNA &rna_BrushGpencilSettings_use_collide_strokes = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_collide_strokes_);

static BoolPropertyRNA rna_BrushGpencilSettings_show_fill_;
PropertyRNA &rna_BrushGpencilSettings_show_fill = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_show_fill_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_auto_remove_fill_guides_;
PropertyRNA &rna_BrushGpencilSettings_use_auto_remove_fill_guides = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_auto_remove_fill_guides_);

static BoolPropertyRNA rna_BrushGpencilSettings_fill_internal_gaps_;
PropertyRNA &rna_BrushGpencilSettings_fill_internal_gaps = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_fill_internal_gaps_);

static EnumPropertyRNA rna_BrushGpencilSettings_curve_type_;
PropertyRNA &rna_BrushGpencilSettings_curve_type = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_curve_type_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_fill_limit_;
PropertyRNA &rna_BrushGpencilSettings_use_fill_limit = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_fill_limit_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_settings_postprocess_;
PropertyRNA &rna_BrushGpencilSettings_use_settings_postprocess = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_settings_postprocess_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_settings_random_;
PropertyRNA &rna_BrushGpencilSettings_use_settings_random = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_settings_random_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_material_pin_;
PropertyRNA &rna_BrushGpencilSettings_use_material_pin = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_material_pin_);

static BoolPropertyRNA rna_BrushGpencilSettings_show_lasso_;
PropertyRNA &rna_BrushGpencilSettings_show_lasso = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_show_lasso_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_occlude_eraser_;
PropertyRNA &rna_BrushGpencilSettings_use_occlude_eraser = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_occlude_eraser_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_keep_caps_eraser_;
PropertyRNA &rna_BrushGpencilSettings_use_keep_caps_eraser = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_keep_caps_eraser_);

static BoolPropertyRNA rna_BrushGpencilSettings_use_active_layer_only_;
PropertyRNA &rna_BrushGpencilSettings_use_active_layer_only = reinterpret_cast<PropertyRNA &>(rna_BrushGpencilSettings_use_active_layer_only_);

StructRNA *RNA_BrushGpencilSettings;
void register_struct_BrushGpencilSettings(BlenderRNA &brna)
{
	rna_BrushGpencilSettings_rna_properties_ = {
		{&rna_BrushGpencilSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_rna_properties_begin, BrushGpencilSettings_rna_properties_next, BrushGpencilSettings_rna_properties_end, BrushGpencilSettings_rna_properties_get, nullptr, nullptr, BrushGpencilSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BrushGpencilSettings_rna_type_ = {
		{&rna_BrushGpencilSettings_pen_strength, 	&rna_BrushGpencilSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BrushGpencilSettings_pen_strength_ = {
		{&rna_BrushGpencilSettings_pen_jitter, 	&rna_BrushGpencilSettings_rna_type,
		-1, "pen_strength", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"Color strength for new strokes (affect alpha factor of color)",
		0, "GPencil",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, draw_strength), RawPropertyType(5), nullptr},
		BrushGpencilSettings_pen_strength_get, BrushGpencilSettings_pen_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_pen_jitter_ = {
		{&rna_BrushGpencilSettings_random_pressure, 	&rna_BrushGpencilSettings_pen_strength,
		-1, "pen_jitter", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Jitter",
		"Jitter factor of brush radius for new strokes",
		0, "Brush",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, draw_jitter), RawPropertyType(5), nullptr},
		BrushGpencilSettings_pen_jitter_get, BrushGpencilSettings_pen_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 100.0f, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_random_pressure_ = {
		{&rna_BrushGpencilSettings_random_strength, 	&rna_BrushGpencilSettings_pen_jitter,
		-1, "random_pressure", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pressure Randomness",
		"Randomness factor for pressure in new strokes",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, draw_random_press), RawPropertyType(5), nullptr},
		BrushGpencilSettings_random_pressure_get, BrushGpencilSettings_random_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_random_strength_ = {
		{&rna_BrushGpencilSettings_angle, 	&rna_BrushGpencilSettings_random_pressure,
		-1, "random_strength", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strength Randomness",
		"Randomness factor strength in new strokes",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, draw_random_strength), RawPropertyType(5), nullptr},
		BrushGpencilSettings_random_strength_get, BrushGpencilSettings_random_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_angle_ = {
		{&rna_BrushGpencilSettings_angle_factor, 	&rna_BrushGpencilSettings_random_strength,
		-1, "angle", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angle",
		"Direction of the stroke at which brush gives maximal thickness (0° for horizontal)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, draw_angle), RawPropertyType(5), nullptr},
		BrushGpencilSettings_angle_get, BrushGpencilSettings_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_angle_factor_ = {
		{&rna_BrushGpencilSettings_pen_smooth_factor, 	&rna_BrushGpencilSettings_angle,
		-1, "angle_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angle Factor",
		"Reduce brush thickness by this factor when stroke is perpendicular to \'Angle\' direction",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, draw_angle_factor), RawPropertyType(5), nullptr},
		BrushGpencilSettings_angle_factor_get, BrushGpencilSettings_angle_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_pen_smooth_factor_ = {
		{&rna_BrushGpencilSettings_pen_smooth_steps, 	&rna_BrushGpencilSettings_angle_factor,
		-1, "pen_smooth_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smooth",
		"Amount of smoothing to apply after finish newly created strokes, to reduce jitter/noise",
		0, "Amount",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, draw_smoothfac), RawPropertyType(5), nullptr},
		BrushGpencilSettings_pen_smooth_factor_get, BrushGpencilSettings_pen_smooth_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_pen_smooth_steps_ = {
		{&rna_BrushGpencilSettings_pen_subdivision_steps, 	&rna_BrushGpencilSettings_pen_smooth_factor,
		-1, "pen_smooth_steps", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Iterations",
		"Number of times to smooth newly created strokes",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, draw_smoothlvl), RawPropertyType(1), nullptr},
		BrushGpencilSettings_pen_smooth_steps_get, BrushGpencilSettings_pen_smooth_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_pen_subdivision_steps_ = {
		{&rna_BrushGpencilSettings_simplify_factor, 	&rna_BrushGpencilSettings_pen_smooth_steps,
		-1, "pen_subdivision_steps", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Subdivision Steps",
		"Number of times to subdivide newly created strokes, for less jagged strokes",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, draw_subdivide), RawPropertyType(1), nullptr},
		BrushGpencilSettings_pen_subdivision_steps_get, BrushGpencilSettings_pen_subdivision_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 3, 0, 3, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_simplify_factor_ = {
		{&rna_BrushGpencilSettings_simplify_pixel_threshold, 	&rna_BrushGpencilSettings_pen_subdivision_steps,
		-1, "simplify_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Simplify",
		"Factor of Simplify using adaptive algorithm",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, simplify_f), RawPropertyType(5), nullptr},
		BrushGpencilSettings_simplify_factor_get, BrushGpencilSettings_simplify_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_simplify_pixel_threshold_ = {
		{&rna_BrushGpencilSettings_curve_sensitivity, 	&rna_BrushGpencilSettings_simplify_factor,
		-1, "simplify_pixel_threshold", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Simplify",
		"Threshold in screen space used for the simplify algorithm. Points within this threshold are treated as if they were in a straight line.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, simplify_px), RawPropertyType(5), nullptr},
		BrushGpencilSettings_simplify_pixel_threshold_get, BrushGpencilSettings_simplify_pixel_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 1.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_curve_sensitivity_ = {
		{&rna_BrushGpencilSettings_curve_strength, 	&rna_BrushGpencilSettings_simplify_pixel_threshold,
		-1, "curve_sensitivity", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve Sensitivity",
		"Curve used for the sensitivity",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_curve_sensitivity_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_BrushGpencilSettings_curve_strength_ = {
		{&rna_BrushGpencilSettings_curve_jitter, 	&rna_BrushGpencilSettings_curve_sensitivity,
		-1, "curve_strength", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve Strength",
		"Curve used for the strength",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_curve_strength_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_BrushGpencilSettings_curve_jitter_ = {
		{&rna_BrushGpencilSettings_curve_random_pressure, 	&rna_BrushGpencilSettings_curve_strength,
		-1, "curve_jitter", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve Jitter",
		"Curve used for the jitter effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_curve_jitter_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_BrushGpencilSettings_curve_random_pressure_ = {
		{&rna_BrushGpencilSettings_curve_random_strength, 	&rna_BrushGpencilSettings_curve_jitter,
		-1, "curve_random_pressure", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random Curve",
		"Curve used for modulating effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_curve_random_pressure_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_BrushGpencilSettings_curve_random_strength_ = {
		{&rna_BrushGpencilSettings_curve_random_uv, 	&rna_BrushGpencilSettings_curve_random_pressure,
		-1, "curve_random_strength", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random Curve",
		"Curve used for modulating effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_curve_random_strength_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_BrushGpencilSettings_curve_random_uv_ = {
		{&rna_BrushGpencilSettings_curve_random_hue, 	&rna_BrushGpencilSettings_curve_random_strength,
		-1, "curve_random_uv", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random Curve",
		"Curve used for modulating effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_curve_random_uv_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_BrushGpencilSettings_curve_random_hue_ = {
		{&rna_BrushGpencilSettings_curve_random_saturation, 	&rna_BrushGpencilSettings_curve_random_uv,
		-1, "curve_random_hue", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random Curve",
		"Curve used for modulating effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_curve_random_hue_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_BrushGpencilSettings_curve_random_saturation_ = {
		{&rna_BrushGpencilSettings_curve_random_value, 	&rna_BrushGpencilSettings_curve_random_hue,
		-1, "curve_random_saturation", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random Curve",
		"Curve used for modulating effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_curve_random_saturation_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_BrushGpencilSettings_curve_random_value_ = {
		{&rna_BrushGpencilSettings_fill_threshold, 	&rna_BrushGpencilSettings_curve_random_saturation,
		-1, "curve_random_value", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random Curve",
		"Curve used for modulating effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_curve_random_value_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_BrushGpencilSettings_fill_threshold_ = {
		{&rna_BrushGpencilSettings_fill_factor, 	&rna_BrushGpencilSettings_curve_random_value,
		-1, "fill_threshold", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Threshold to consider color transparent for filling",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, fill_threshold), RawPropertyType(5), nullptr},
		BrushGpencilSettings_fill_threshold_get, BrushGpencilSettings_fill_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_fill_factor_ = {
		{&rna_BrushGpencilSettings_fill_simplify_level, 	&rna_BrushGpencilSettings_fill_threshold,
		-1, "fill_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Precision",
		"Factor for fill boundary accuracy, higher values are more accurate but slower",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, fill_factor), RawPropertyType(5), nullptr},
		BrushGpencilSettings_fill_factor_get, BrushGpencilSettings_fill_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0500000007f, 8.0f, 0.0500000007f, 8.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_fill_simplify_level_ = {
		{&rna_BrushGpencilSettings_uv_random, 	&rna_BrushGpencilSettings_fill_factor,
		-1, "fill_simplify_level", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Simplify",
		"Number of simplify steps (large values reduce fill accuracy)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, fill_simplylvl), RawPropertyType(0), nullptr},
		BrushGpencilSettings_fill_simplify_level_get, BrushGpencilSettings_fill_simplify_level_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10, 0, 10, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_uv_random_ = {
		{&rna_BrushGpencilSettings_hardness, 	&rna_BrushGpencilSettings_fill_simplify_level,
		-1, "uv_random", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "UV Random",
		"Random factor for auto-generated UV rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, uv_random), RawPropertyType(5), nullptr},
		BrushGpencilSettings_uv_random_get, BrushGpencilSettings_uv_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_hardness_ = {
		{&rna_BrushGpencilSettings_aspect, 	&rna_BrushGpencilSettings_uv_random,
		-1, "hardness", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Hardness",
		"Gradient from the center of Dot and Box strokes (set to 1 for a solid stroke)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, hardness), RawPropertyType(5), nullptr},
		BrushGpencilSettings_hardness_get, BrushGpencilSettings_hardness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	static float rna_BrushGpencilSettings_aspect_default[2] = {
		0.0f,
		0.0f
	};
	rna_BrushGpencilSettings_aspect_ = {
		{&rna_BrushGpencilSettings_input_samples, 	&rna_BrushGpencilSettings_hardness,
		-1, "aspect", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Aspect",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, aspect_ratio), RawPropertyType(5), nullptr},
		nullptr, nullptr, BrushGpencilSettings_aspect_get, BrushGpencilSettings_aspect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, rna_BrushGpencilSettings_aspect_default
	};

	rna_BrushGpencilSettings_input_samples_ = {
		{&rna_BrushGpencilSettings_active_smooth_factor, 	&rna_BrushGpencilSettings_aspect,
		-1, "input_samples", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Input Samples",
		"Generated intermediate points for very fast mouse movements (Set to 0 to disable)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, input_samples), RawPropertyType(0), nullptr},
		BrushGpencilSettings_input_samples_get, BrushGpencilSettings_input_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10, 0, 10, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_active_smooth_factor_ = {
		{&rna_BrushGpencilSettings_eraser_strength_factor, 	&rna_BrushGpencilSettings_input_samples,
		-1, "active_smooth_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Active Smooth",
		"Amount of smoothing while drawing",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, active_smooth), RawPropertyType(5), nullptr},
		BrushGpencilSettings_active_smooth_factor_get, BrushGpencilSettings_active_smooth_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_eraser_strength_factor_ = {
		{&rna_BrushGpencilSettings_eraser_thickness_factor, 	&rna_BrushGpencilSettings_active_smooth_factor,
		-1, "eraser_strength_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Affect Stroke Strength",
		"Amount of erasing for strength",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, era_strength_f), RawPropertyType(5), nullptr},
		BrushGpencilSettings_eraser_strength_factor_get, BrushGpencilSettings_eraser_strength_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_eraser_thickness_factor_ = {
		{&rna_BrushGpencilSettings_vertex_mode, 	&rna_BrushGpencilSettings_eraser_strength_factor,
		-1, "eraser_thickness_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Affect Stroke Thickness",
		"Amount of erasing for thickness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, era_thickness_f), RawPropertyType(5), nullptr},
		BrushGpencilSettings_eraser_thickness_factor_get, BrushGpencilSettings_eraser_thickness_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_BrushGpencilSettings_vertex_mode_items[4] = {
		{0, "STROKE", 226, "Stroke", "Painting affects only strokes, not fills"	},
		{1, "FILL", 227, "Fill", "Painting affects only fills, not strokes"	},
		{2, "BOTH", 228, "Both", "Painting affects both strokes and fills"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushGpencilSettings_vertex_mode_ = {
		{&rna_BrushGpencilSettings_vertex_color_factor, 	&rna_BrushGpencilSettings_eraser_thickness_factor,
		-1, "vertex_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode Type",
		"Defines how vertex color affect to the strokes",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, vertex_mode), RawPropertyType(0), nullptr},
		BrushGpencilSettings_vertex_mode_get, BrushGpencilSettings_vertex_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_vertex_mode_items, 3, 0
	};

	rna_BrushGpencilSettings_vertex_color_factor_ = {
		{&rna_BrushGpencilSettings_random_hue_factor, 	&rna_BrushGpencilSettings_vertex_mode,
		-1, "vertex_color_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vertex Color Factor",
		"Factor used to mix vertex color to get final color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, vertex_factor), RawPropertyType(5), nullptr},
		BrushGpencilSettings_vertex_color_factor_get, BrushGpencilSettings_vertex_color_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_random_hue_factor_ = {
		{&rna_BrushGpencilSettings_random_saturation_factor, 	&rna_BrushGpencilSettings_vertex_color_factor,
		-1, "random_hue_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Hue",
		"Random factor to modify original hue",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, random_hue), RawPropertyType(5), nullptr},
		BrushGpencilSettings_random_hue_factor_get, BrushGpencilSettings_random_hue_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_random_saturation_factor_ = {
		{&rna_BrushGpencilSettings_random_value_factor, 	&rna_BrushGpencilSettings_random_hue_factor,
		-1, "random_saturation_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Random factor to modify original saturation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, random_saturation), RawPropertyType(5), nullptr},
		BrushGpencilSettings_random_saturation_factor_get, BrushGpencilSettings_random_saturation_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_random_value_factor_ = {
		{&rna_BrushGpencilSettings_extend_stroke_factor, 	&rna_BrushGpencilSettings_random_saturation_factor,
		-1, "random_value_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Value",
		"Random factor to modify original value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, random_value), RawPropertyType(5), nullptr},
		BrushGpencilSettings_random_value_factor_get, BrushGpencilSettings_random_value_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_extend_stroke_factor_ = {
		{&rna_BrushGpencilSettings_fill_extend_mode, 	&rna_BrushGpencilSettings_random_value_factor,
		-1, "extend_stroke_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Closure Size",
		"Strokes end extension for closing gaps, use zero to disable",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, fill_extend_fac), RawPropertyType(5), nullptr},
		BrushGpencilSettings_extend_stroke_factor_get, BrushGpencilSettings_extend_stroke_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.1000000015f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_BrushGpencilSettings_fill_extend_mode_items[3] = {
		{0, "EXTEND", 0, "Extend", "Extend strokes in straight lines"	},
		{1, "RADIUS", 0, "Radius", "Connect endpoints that are close together"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushGpencilSettings_fill_extend_mode_ = {
		{&rna_BrushGpencilSettings_dilate, 	&rna_BrushGpencilSettings_extend_stroke_factor,
		-1, "fill_extend_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Closure Mode",
		"Types of stroke extensions used for closing gaps",
		0, "GPencil",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, fill_extend_mode), RawPropertyType(0), nullptr},
		BrushGpencilSettings_fill_extend_mode_get, BrushGpencilSettings_fill_extend_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_fill_extend_mode_items, 2, 0
	};

	rna_BrushGpencilSettings_dilate_ = {
		{&rna_BrushGpencilSettings_outline_thickness_factor, 	&rna_BrushGpencilSettings_fill_extend_mode,
		-1, "dilate", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dilate/Contract",
		"Number of pixels to expand or contract fill area",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, dilate_pixels), RawPropertyType(0), nullptr},
		BrushGpencilSettings_dilate_get, BrushGpencilSettings_dilate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -40, 40, -40, 40, 1, nullptr, nullptr, 1, nullptr
	};

	rna_BrushGpencilSettings_outline_thickness_factor_ = {
		{&rna_BrushGpencilSettings_conversion_threshold, 	&rna_BrushGpencilSettings_dilate,
		-1, "outline_thickness_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Thickness",
		"Thickness of the outline stroke relative to current brush thickness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, outline_fac), RawPropertyType(5), nullptr},
		BrushGpencilSettings_outline_thickness_factor_get, BrushGpencilSettings_outline_thickness_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_conversion_threshold_ = {
		{&rna_BrushGpencilSettings_use_pressure, 	&rna_BrushGpencilSettings_outline_thickness_factor,
		-1, "conversion_threshold", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Threshold distance between points for conversion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, conversion_threshold), RawPropertyType(5), nullptr},
		BrushGpencilSettings_conversion_threshold_get, BrushGpencilSettings_conversion_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0010000000f, nullptr
	};

	rna_BrushGpencilSettings_use_pressure_ = {
		{&rna_BrushGpencilSettings_use_strength_pressure, 	&rna_BrushGpencilSettings_conversion_threshold,
		-1, "use_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use tablet pressure",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_pressure_get, BrushGpencilSettings_use_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_strength_pressure_ = {
		{&rna_BrushGpencilSettings_use_jitter_pressure, 	&rna_BrushGpencilSettings_use_pressure,
		-1, "use_strength_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure Strength",
		"Use tablet pressure for color strength",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_strength_pressure_get, BrushGpencilSettings_use_strength_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_jitter_pressure_ = {
		{&rna_BrushGpencilSettings_use_stroke_random_hue, 	&rna_BrushGpencilSettings_use_strength_pressure,
		-1, "use_jitter_pressure", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure Jitter",
		"Use tablet pressure for jitter",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_jitter_pressure_get, BrushGpencilSettings_use_jitter_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_stroke_random_hue_ = {
		{&rna_BrushGpencilSettings_use_stroke_random_sat, 	&rna_BrushGpencilSettings_use_jitter_pressure,
		-1, "use_stroke_random_hue", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_stroke_random_hue_get, BrushGpencilSettings_use_stroke_random_hue_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_stroke_random_sat_ = {
		{&rna_BrushGpencilSettings_use_stroke_random_val, 	&rna_BrushGpencilSettings_use_stroke_random_hue,
		-1, "use_stroke_random_sat", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_stroke_random_sat_get, BrushGpencilSettings_use_stroke_random_sat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_stroke_random_val_ = {
		{&rna_BrushGpencilSettings_use_stroke_random_radius, 	&rna_BrushGpencilSettings_use_stroke_random_sat,
		-1, "use_stroke_random_val", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_stroke_random_val_get, BrushGpencilSettings_use_stroke_random_val_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_stroke_random_radius_ = {
		{&rna_BrushGpencilSettings_use_stroke_random_strength, 	&rna_BrushGpencilSettings_use_stroke_random_val,
		-1, "use_stroke_random_radius", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_stroke_random_radius_get, BrushGpencilSettings_use_stroke_random_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_stroke_random_strength_ = {
		{&rna_BrushGpencilSettings_use_stroke_random_uv, 	&rna_BrushGpencilSettings_use_stroke_random_radius,
		-1, "use_stroke_random_strength", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_stroke_random_strength_get, BrushGpencilSettings_use_stroke_random_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_stroke_random_uv_ = {
		{&rna_BrushGpencilSettings_use_random_press_hue, 	&rna_BrushGpencilSettings_use_stroke_random_strength,
		-1, "use_stroke_random_uv", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_stroke_random_uv_get, BrushGpencilSettings_use_stroke_random_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_random_press_hue_ = {
		{&rna_BrushGpencilSettings_use_random_press_sat, 	&rna_BrushGpencilSettings_use_stroke_random_uv,
		-1, "use_random_press_hue", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_random_press_hue_get, BrushGpencilSettings_use_random_press_hue_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_random_press_sat_ = {
		{&rna_BrushGpencilSettings_use_random_press_val, 	&rna_BrushGpencilSettings_use_random_press_hue,
		-1, "use_random_press_sat", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_random_press_sat_get, BrushGpencilSettings_use_random_press_sat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_random_press_val_ = {
		{&rna_BrushGpencilSettings_use_random_press_radius, 	&rna_BrushGpencilSettings_use_random_press_sat,
		-1, "use_random_press_val", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_random_press_val_get, BrushGpencilSettings_use_random_press_val_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_random_press_radius_ = {
		{&rna_BrushGpencilSettings_use_random_press_strength, 	&rna_BrushGpencilSettings_use_random_press_val,
		-1, "use_random_press_radius", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_random_press_radius_get, BrushGpencilSettings_use_random_press_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_random_press_strength_ = {
		{&rna_BrushGpencilSettings_use_random_press_uv, 	&rna_BrushGpencilSettings_use_random_press_radius,
		-1, "use_random_press_strength", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_random_press_strength_get, BrushGpencilSettings_use_random_press_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_random_press_uv_ = {
		{&rna_BrushGpencilSettings_stroke_type, 	&rna_BrushGpencilSettings_use_random_press_strength,
		-1, "use_random_press_uv", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_random_press_uv_get, BrushGpencilSettings_use_random_press_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_BrushGpencilSettings_stroke_type_items[4] = {
		{4096, "STROKE", 226, "Stroke", ""	},
		{8192, "FILL", 227, "Fill", ""	},
		{12288, "BOTH", 228, "Both", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushGpencilSettings_stroke_type_ = {
		{&rna_BrushGpencilSettings_use_settings_stabilizer, 	&rna_BrushGpencilSettings_use_random_press_uv,
		-1, "stroke_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stroke Mode",
		"Mode to use when creating strokes",
		0, "GPencil",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, flag2), RawPropertyType(0), nullptr},
		BrushGpencilSettings_stroke_type_get, BrushGpencilSettings_stroke_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_stroke_type_items, 3, 4096
	};

	rna_BrushGpencilSettings_use_settings_stabilizer_ = {
		{&rna_BrushGpencilSettings_eraser_mode, 	&rna_BrushGpencilSettings_stroke_type,
		-1, "use_settings_stabilizer", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Stabilizer",
		"Draw lines with a delay to allow smooth strokes (press Shift key to override while drawing)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_settings_stabilizer_get, BrushGpencilSettings_use_settings_stabilizer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_BrushGpencilSettings_eraser_mode_items[4] = {
		{0, "SOFT", 0, "Dissolve", "Erase strokes, fading their points strength and thickness"	},
		{1, "HARD", 0, "Point", "Erase stroke points"	},
		{2, "STROKE", 0, "Stroke", "Erase entire strokes"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushGpencilSettings_eraser_mode_ = {
		{&rna_BrushGpencilSettings_caps_type, 	&rna_BrushGpencilSettings_use_settings_stabilizer,
		-1, "eraser_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Eraser Mode",
		0, "GPencil",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, eraser_mode), RawPropertyType(0), nullptr},
		BrushGpencilSettings_eraser_mode_get, BrushGpencilSettings_eraser_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_eraser_mode_items, 3, 0
	};

	static const EnumPropertyItem rna_BrushGpencilSettings_caps_type_items[3] = {
		{0, "ROUND", 612, "Round", ""	},
		{1, "FLAT", 611, "Flat", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushGpencilSettings_caps_type_ = {
		{&rna_BrushGpencilSettings_fill_draw_mode, 	&rna_BrushGpencilSettings_eraser_mode,
		-1, "caps_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Caps Type",
		"The shape of the start and end of the stroke",
		0, "GPencil",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, caps_type), RawPropertyType(10), nullptr},
		BrushGpencilSettings_caps_type_get, BrushGpencilSettings_caps_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_caps_type_items, 2, 0
	};

	static const EnumPropertyItem rna_BrushGpencilSettings_fill_draw_mode_items[4] = {
		{0, "BOTH", 0, "All", "Use both visible strokes and edit lines as fill boundary limits"	},
		{1, "STROKE", 0, "Strokes", "Use visible strokes as fill boundary limits"	},
		{2, "CONTROL", 0, "Edit Lines", "Use edit lines as fill boundary limits"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushGpencilSettings_fill_draw_mode_ = {
		{&rna_BrushGpencilSettings_fill_layer_mode, 	&rna_BrushGpencilSettings_caps_type,
		-1, "fill_draw_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Mode to draw boundary limits",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, fill_draw_mode), RawPropertyType(0), nullptr},
		BrushGpencilSettings_fill_draw_mode_get, BrushGpencilSettings_fill_draw_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_fill_draw_mode_items, 3, 0
	};

	static const EnumPropertyItem rna_BrushGpencilSettings_fill_layer_mode_items[7] = {
		{0, "VISIBLE", 0, "Visible", "Visible layers"	},
		{1, "ACTIVE", 0, "Active", "Only active layer"	},
		{4, "ABOVE", 0, "Layer Above", "Layer above active"	},
		{5, "BELOW", 0, "Layer Below", "Layer below active"	},
		{2, "ALL_ABOVE", 0, "All Above", "All layers above active"	},
		{3, "ALL_BELOW", 0, "All Below", "All layers below active"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushGpencilSettings_fill_layer_mode_ = {
		{&rna_BrushGpencilSettings_fill_direction, 	&rna_BrushGpencilSettings_fill_draw_mode,
		-1, "fill_layer_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Layer Mode",
		"Layers used as boundaries",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, fill_layer_mode), RawPropertyType(1), nullptr},
		BrushGpencilSettings_fill_layer_mode_get, BrushGpencilSettings_fill_layer_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_fill_layer_mode_items, 6, 0
	};

	static const EnumPropertyItem rna_BrushGpencilSettings_fill_direction_items[3] = {
		{0, "NORMAL", 50, "Normal", "Fill internal area"	},
		{512, "INVERT", 95, "Inverted", "Fill inverted area"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushGpencilSettings_fill_direction_ = {
		{&rna_BrushGpencilSettings_fill_solver, 	&rna_BrushGpencilSettings_fill_layer_mode,
		-1, "fill_direction", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Direction",
		"Direction of the fill",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, fill_direction), RawPropertyType(1), nullptr},
		BrushGpencilSettings_fill_direction_get, BrushGpencilSettings_fill_direction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_fill_direction_items, 2, 0
	};

	static const EnumPropertyItem rna_BrushGpencilSettings_fill_solver_items[3] = {
		{0, "DELAUNAY", 0, "Delaunay", "Use the exact geometry to create fills"	},
		{1, "PIXEL", 0, "Pixel", "Use pixel based flooding to create fills"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushGpencilSettings_fill_solver_ = {
		{&rna_BrushGpencilSettings_fill_gap_factor, 	&rna_BrushGpencilSettings_fill_direction,
		-1, "fill_solver", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fill Solver",
		"Method used for when filling",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, fill_solver), RawPropertyType(1), nullptr},
		BrushGpencilSettings_fill_solver_get, BrushGpencilSettings_fill_solver_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_fill_solver_items, 2, 0
	};

	rna_BrushGpencilSettings_fill_gap_factor_ = {
		{&rna_BrushGpencilSettings_pin_draw_mode, 	&rna_BrushGpencilSettings_fill_solver,
		-1, "fill_gap_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gap Detection Factor",
		"The sensitivity of the gap detection. Higher values results in more gaps detected and as such can create smaller fills",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, fill_gap_factor), RawPropertyType(5), nullptr},
		BrushGpencilSettings_fill_gap_factor_get, BrushGpencilSettings_fill_gap_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushGpencilSettings_pin_draw_mode_ = {
		{&rna_BrushGpencilSettings_brush_draw_mode, 	&rna_BrushGpencilSettings_fill_gap_factor,
		-1, "pin_draw_mode", 4198401, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pin Mode",
		"Pin the mode to the brush",
		21, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_GPencilBrush_pin_mode_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_pin_draw_mode_get, BrushGpencilSettings_pin_draw_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_BrushGpencilSettings_brush_draw_mode_items[4] = {
		{0, "ACTIVE", 0, "Active", "Use current mode"	},
		{1, "MATERIAL", 0, "Material", "Use always material mode"	},
		{2, "VERTEXCOLOR", 0, "Vertex Color", "Use always Vertex Color mode"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushGpencilSettings_brush_draw_mode_ = {
		{&rna_BrushGpencilSettings_use_trim, 	&rna_BrushGpencilSettings_pin_draw_mode,
		-1, "brush_draw_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Preselected mode when using this brush",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, brush_draw_mode), RawPropertyType(1), nullptr},
		BrushGpencilSettings_brush_draw_mode_get, BrushGpencilSettings_brush_draw_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_brush_draw_mode_items, 3, 0
	};

	rna_BrushGpencilSettings_use_trim_ = {
		{&rna_BrushGpencilSettings_use_settings_outline, 	&rna_BrushGpencilSettings_brush_draw_mode,
		-1, "use_trim", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Trim Stroke Ends",
		"Trim intersecting stroke ends",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_trim_get, BrushGpencilSettings_use_trim_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_settings_outline_ = {
		{&rna_BrushGpencilSettings_use_edit_position, 	&rna_BrushGpencilSettings_use_trim,
		-1, "use_settings_outline", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Outline",
		"Convert stroke to outline",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_settings_outline_get, BrushGpencilSettings_use_settings_outline_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_edit_position_ = {
		{&rna_BrushGpencilSettings_use_edit_strength, 	&rna_BrushGpencilSettings_use_settings_outline,
		-1, "use_edit_position", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Affect Position",
		"The brush affects the position of the point",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_edit_position_get, BrushGpencilSettings_use_edit_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_edit_strength_ = {
		{&rna_BrushGpencilSettings_use_edit_thickness, 	&rna_BrushGpencilSettings_use_edit_position,
		-1, "use_edit_strength", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Affect Strength",
		"The brush affects the color strength of the point",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_edit_strength_get, BrushGpencilSettings_use_edit_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_edit_thickness_ = {
		{&rna_BrushGpencilSettings_use_edit_uv, 	&rna_BrushGpencilSettings_use_edit_strength,
		-1, "use_edit_thickness", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Affect Thickness",
		"The brush affects the thickness of the point",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_edit_thickness_get, BrushGpencilSettings_use_edit_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_edit_uv_ = {
		{&rna_BrushGpencilSettings_material, 	&rna_BrushGpencilSettings_use_edit_thickness,
		-1, "use_edit_uv", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Affect UV",
		"The brush affects the UV rotation of the point",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_edit_uv_get, BrushGpencilSettings_use_edit_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_material_ = {
		{&rna_BrushGpencilSettings_material_alt, 	&rna_BrushGpencilSettings_use_edit_uv,
		-1, "material", 13631681, 0, 0, 0, 0, PropertyPathTemplateType(0), "Material",
		"Material used for strokes drawn using this brush",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Brush_material_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_material_get, BrushGpencilSettings_material_set, nullptr, rna_BrushGpencilSettings_material_poll,RNA_Material
	};

	rna_BrushGpencilSettings_material_alt_ = {
		{&rna_BrushGpencilSettings_show_fill_boundary, 	&rna_BrushGpencilSettings_material,
		-1, "material_alt", 13631681, 0, 0, 0, 0, PropertyPathTemplateType(0), "Material",
		"Material used for secondary uses for this brush",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Brush_material_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_material_alt_get, BrushGpencilSettings_material_alt_set, nullptr, rna_BrushGpencilSettings_material_poll,RNA_Material
	};

	rna_BrushGpencilSettings_show_fill_boundary_ = {
		{&rna_BrushGpencilSettings_show_fill_extend, 	&rna_BrushGpencilSettings_material_alt,
		-1, "show_fill_boundary", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Lines",
		"Show help lines for filling to see boundaries",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_show_fill_boundary_get, BrushGpencilSettings_show_fill_boundary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_BrushGpencilSettings_show_fill_extend_ = {
		{&rna_BrushGpencilSettings_use_collide_strokes, 	&rna_BrushGpencilSettings_show_fill_boundary,
		-1, "show_fill_extend", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Visual Aids",
		"Show help lines for stroke extension",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_show_fill_extend_get, BrushGpencilSettings_show_fill_extend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_BrushGpencilSettings_use_collide_strokes_ = {
		{&rna_BrushGpencilSettings_show_fill, 	&rna_BrushGpencilSettings_show_fill_extend,
		-1, "use_collide_strokes", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strokes Collision",
		"Check if extend lines collide with strokes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_collide_strokes_get, BrushGpencilSettings_use_collide_strokes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_show_fill_ = {
		{&rna_BrushGpencilSettings_use_auto_remove_fill_guides, 	&rna_BrushGpencilSettings_use_collide_strokes,
		-1, "show_fill", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Fill",
		"Show transparent lines to use as boundary for filling",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_show_fill_get, BrushGpencilSettings_show_fill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_BrushGpencilSettings_use_auto_remove_fill_guides_ = {
		{&rna_BrushGpencilSettings_fill_internal_gaps, 	&rna_BrushGpencilSettings_show_fill,
		-1, "use_auto_remove_fill_guides", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto-Remove Fill Guides",
		"Automatically remove fill guide strokes after fill operation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_auto_remove_fill_guides_get, BrushGpencilSettings_use_auto_remove_fill_guides_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_BrushGpencilSettings_fill_internal_gaps_ = {
		{&rna_BrushGpencilSettings_curve_type, 	&rna_BrushGpencilSettings_use_auto_remove_fill_guides,
		-1, "fill_internal_gaps", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Internal Gaps",
		"Stop at internal gaps",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_fill_internal_gaps_get, BrushGpencilSettings_fill_internal_gaps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_curve_type_ = {
		{&rna_BrushGpencilSettings_use_fill_limit, 	&rna_BrushGpencilSettings_fill_internal_gaps,
		-1, "curve_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Curve Type",
		"Type of curves",
		0, "Operator",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushGpencilSettings, curve_type), RawPropertyType(10), nullptr},
		BrushGpencilSettings_curve_type_get, BrushGpencilSettings_curve_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_curves_type_items, 4, 0
	};

	rna_BrushGpencilSettings_use_fill_limit_ = {
		{&rna_BrushGpencilSettings_use_settings_postprocess, 	&rna_BrushGpencilSettings_curve_type,
		-1, "use_fill_limit", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Limit to Viewport",
		"Fill only visible areas in viewport",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_fill_limit_get, BrushGpencilSettings_use_fill_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_BrushGpencilSettings_use_settings_postprocess_ = {
		{&rna_BrushGpencilSettings_use_settings_random, 	&rna_BrushGpencilSettings_use_fill_limit,
		-1, "use_settings_postprocess", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Post-Process Settings",
		"Additional post processing options for new strokes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_settings_postprocess_get, BrushGpencilSettings_use_settings_postprocess_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_settings_random_ = {
		{&rna_BrushGpencilSettings_use_material_pin, 	&rna_BrushGpencilSettings_use_settings_postprocess,
		-1, "use_settings_random", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random Settings",
		"Random brush settings",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_settings_random_get, BrushGpencilSettings_use_settings_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_material_pin_ = {
		{&rna_BrushGpencilSettings_show_lasso, 	&rna_BrushGpencilSettings_use_settings_random,
		-1, "use_material_pin", 4198401, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pin Material",
		"Keep material assigned to brush",
		21, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_BrushGpencilSettings_use_material_pin_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_material_pin_get, BrushGpencilSettings_use_material_pin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_show_lasso_ = {
		{&rna_BrushGpencilSettings_use_occlude_eraser, 	&rna_BrushGpencilSettings_use_material_pin,
		-1, "show_lasso", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Lasso",
		"Display fill color while drawing the stroke",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_show_lasso_get, BrushGpencilSettings_show_lasso_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_BrushGpencilSettings_use_occlude_eraser_ = {
		{&rna_BrushGpencilSettings_use_keep_caps_eraser, 	&rna_BrushGpencilSettings_show_lasso,
		-1, "use_occlude_eraser", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Occlude Eraser",
		"Erase only strokes visible and not occluded",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_occlude_eraser_get, BrushGpencilSettings_use_occlude_eraser_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_keep_caps_eraser_ = {
		{&rna_BrushGpencilSettings_use_active_layer_only, 	&rna_BrushGpencilSettings_use_occlude_eraser,
		-1, "use_keep_caps_eraser", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Keep Caps",
		"Keep the caps as they are and don\'t flatten them when erasing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_keep_caps_eraser_get, BrushGpencilSettings_use_keep_caps_eraser_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushGpencilSettings_use_active_layer_only_ = {
		{nullptr, 	&rna_BrushGpencilSettings_use_keep_caps_eraser,
		-1, "use_active_layer_only", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Layer",
		"Only edit the active layer of the object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushGpencilSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushGpencilSettings_use_active_layer_only_get, BrushGpencilSettings_use_active_layer_only_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BrushGpencilSettings;
	srna->cont.properties = {&rna_BrushGpencilSettings_rna_properties, &rna_BrushGpencilSettings_use_active_layer_only};
	srna->identifier = "BrushGpencilSettings";
	srna->flag = 516;
	srna->name = "Grease Pencil Brush Settings";
	srna->description = "Settings for Grease Pencil brush";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BrushGpencilSettings_rna_properties;
	srna->path = rna_BrushGpencilSettings_path;
};

/* Curves Sculpt Brush Settings */
static CollectionPropertyRNA rna_BrushCurvesSculptSettings_rna_properties_;
PropertyRNA &rna_BrushCurvesSculptSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_rna_properties_);

static PointerPropertyRNA rna_BrushCurvesSculptSettings_rna_type_;
PropertyRNA &rna_BrushCurvesSculptSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_rna_type_);

static IntPropertyRNA rna_BrushCurvesSculptSettings_add_amount_;
PropertyRNA &rna_BrushCurvesSculptSettings_add_amount = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_add_amount_);

static IntPropertyRNA rna_BrushCurvesSculptSettings_points_per_curve_;
PropertyRNA &rna_BrushCurvesSculptSettings_points_per_curve = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_points_per_curve_);

static BoolPropertyRNA rna_BrushCurvesSculptSettings_use_uniform_scale_;
PropertyRNA &rna_BrushCurvesSculptSettings_use_uniform_scale = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_use_uniform_scale_);

static FloatPropertyRNA rna_BrushCurvesSculptSettings_minimum_length_;
PropertyRNA &rna_BrushCurvesSculptSettings_minimum_length = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_minimum_length_);

static BoolPropertyRNA rna_BrushCurvesSculptSettings_use_length_interpolate_;
PropertyRNA &rna_BrushCurvesSculptSettings_use_length_interpolate = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_use_length_interpolate_);

static BoolPropertyRNA rna_BrushCurvesSculptSettings_use_radius_interpolate_;
PropertyRNA &rna_BrushCurvesSculptSettings_use_radius_interpolate = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_use_radius_interpolate_);

static BoolPropertyRNA rna_BrushCurvesSculptSettings_use_point_count_interpolate_;
PropertyRNA &rna_BrushCurvesSculptSettings_use_point_count_interpolate = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_use_point_count_interpolate_);

static BoolPropertyRNA rna_BrushCurvesSculptSettings_use_shape_interpolate_;
PropertyRNA &rna_BrushCurvesSculptSettings_use_shape_interpolate = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_use_shape_interpolate_);

static FloatPropertyRNA rna_BrushCurvesSculptSettings_curve_length_;
PropertyRNA &rna_BrushCurvesSculptSettings_curve_length = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_curve_length_);

static FloatPropertyRNA rna_BrushCurvesSculptSettings_minimum_distance_;
PropertyRNA &rna_BrushCurvesSculptSettings_minimum_distance = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_minimum_distance_);

static FloatPropertyRNA rna_BrushCurvesSculptSettings_curve_radius_;
PropertyRNA &rna_BrushCurvesSculptSettings_curve_radius = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_curve_radius_);

static IntPropertyRNA rna_BrushCurvesSculptSettings_density_add_attempts_;
PropertyRNA &rna_BrushCurvesSculptSettings_density_add_attempts = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_density_add_attempts_);

static EnumPropertyRNA rna_BrushCurvesSculptSettings_density_mode_;
PropertyRNA &rna_BrushCurvesSculptSettings_density_mode = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_density_mode_);

static PointerPropertyRNA rna_BrushCurvesSculptSettings_curve_parameter_falloff_;
PropertyRNA &rna_BrushCurvesSculptSettings_curve_parameter_falloff = reinterpret_cast<PropertyRNA &>(rna_BrushCurvesSculptSettings_curve_parameter_falloff_);

StructRNA *RNA_BrushCurvesSculptSettings;
void register_struct_BrushCurvesSculptSettings(BlenderRNA &brna)
{
	rna_BrushCurvesSculptSettings_rna_properties_ = {
		{&rna_BrushCurvesSculptSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCurvesSculptSettings_rna_properties_begin, BrushCurvesSculptSettings_rna_properties_next, BrushCurvesSculptSettings_rna_properties_end, BrushCurvesSculptSettings_rna_properties_get, nullptr, nullptr, BrushCurvesSculptSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BrushCurvesSculptSettings_rna_type_ = {
		{&rna_BrushCurvesSculptSettings_add_amount, 	&rna_BrushCurvesSculptSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCurvesSculptSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BrushCurvesSculptSettings_add_amount_ = {
		{&rna_BrushCurvesSculptSettings_points_per_curve, 	&rna_BrushCurvesSculptSettings_rna_type,
		-1, "add_amount", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Count",
		"Number of curves added by the Add brush",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushCurvesSculptSettings, add_amount), RawPropertyType(0), nullptr},
		BrushCurvesSculptSettings_add_amount_get, BrushCurvesSculptSettings_add_amount_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCurvesSculptSettings_points_per_curve_ = {
		{&rna_BrushCurvesSculptSettings_use_uniform_scale, 	&rna_BrushCurvesSculptSettings_add_amount,
		-1, "points_per_curve", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Points per Curve",
		"Number of control points in a newly added curve",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushCurvesSculptSettings, points_per_curve), RawPropertyType(0), nullptr},
		BrushCurvesSculptSettings_points_per_curve_get, BrushCurvesSculptSettings_points_per_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 2, INT_MAX, 2, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCurvesSculptSettings_use_uniform_scale_ = {
		{&rna_BrushCurvesSculptSettings_minimum_length, 	&rna_BrushCurvesSculptSettings_points_per_curve,
		-1, "use_uniform_scale", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale Uniform",
		"Grow or shrink curves by changing their size uniformly instead of using trimming or extrapolation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCurvesSculptSettings_use_uniform_scale_get, BrushCurvesSculptSettings_use_uniform_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCurvesSculptSettings_minimum_length_ = {
		{&rna_BrushCurvesSculptSettings_use_length_interpolate, 	&rna_BrushCurvesSculptSettings_use_uniform_scale,
		-1, "minimum_length", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Length",
		"Avoid shrinking curves shorter than this length",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushCurvesSculptSettings, minimum_length), RawPropertyType(5), nullptr},
		BrushCurvesSculptSettings_minimum_length_get, BrushCurvesSculptSettings_minimum_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushCurvesSculptSettings_use_length_interpolate_ = {
		{&rna_BrushCurvesSculptSettings_use_radius_interpolate, 	&rna_BrushCurvesSculptSettings_minimum_length,
		-1, "use_length_interpolate", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Interpolate Length",
		"Use length of the curves in close proximity",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCurvesSculptSettings_use_length_interpolate_get, BrushCurvesSculptSettings_use_length_interpolate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCurvesSculptSettings_use_radius_interpolate_ = {
		{&rna_BrushCurvesSculptSettings_use_point_count_interpolate, 	&rna_BrushCurvesSculptSettings_use_length_interpolate,
		-1, "use_radius_interpolate", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Interpolate Radius",
		"Use radius of the curves in close proximity",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCurvesSculptSettings_use_radius_interpolate_get, BrushCurvesSculptSettings_use_radius_interpolate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_BrushCurvesSculptSettings_use_point_count_interpolate_ = {
		{&rna_BrushCurvesSculptSettings_use_shape_interpolate, 	&rna_BrushCurvesSculptSettings_use_radius_interpolate,
		-1, "use_point_count_interpolate", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Interpolate Point Count",
		"Use the number of points from the curves in close proximity",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCurvesSculptSettings_use_point_count_interpolate_get, BrushCurvesSculptSettings_use_point_count_interpolate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCurvesSculptSettings_use_shape_interpolate_ = {
		{&rna_BrushCurvesSculptSettings_curve_length, 	&rna_BrushCurvesSculptSettings_use_point_count_interpolate,
		-1, "use_shape_interpolate", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Interpolate Shape",
		"Use shape of the curves in close proximity",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCurvesSculptSettings_use_shape_interpolate_get, BrushCurvesSculptSettings_use_shape_interpolate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushCurvesSculptSettings_curve_length_ = {
		{&rna_BrushCurvesSculptSettings_minimum_distance, 	&rna_BrushCurvesSculptSettings_use_shape_interpolate,
		-1, "curve_length", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Curve Length",
		"Length of newly added curves when it is not interpolated from other curves",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushCurvesSculptSettings, curve_length), RawPropertyType(5), nullptr},
		BrushCurvesSculptSettings_curve_length_get, BrushCurvesSculptSettings_curve_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushCurvesSculptSettings_minimum_distance_ = {
		{&rna_BrushCurvesSculptSettings_curve_radius, 	&rna_BrushCurvesSculptSettings_curve_length,
		-1, "minimum_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Distance",
		"Goal distance between curve roots for the Density brush",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushCurvesSculptSettings, minimum_distance), RawPropertyType(5), nullptr},
		BrushCurvesSculptSettings_minimum_distance_get, BrushCurvesSculptSettings_minimum_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, FLT_MAX, 0.0010000000f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrushCurvesSculptSettings_curve_radius_ = {
		{&rna_BrushCurvesSculptSettings_density_add_attempts, 	&rna_BrushCurvesSculptSettings_minimum_distance,
		-1, "curve_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Curve Radius",
		"Radius of newly added curves when it is not interpolated from other curves",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushCurvesSculptSettings, curve_radius), RawPropertyType(5), nullptr},
		BrushCurvesSculptSettings_curve_radius_get, BrushCurvesSculptSettings_curve_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, FLT_MAX, 0.0010000000f, 2, nullptr, nullptr, 0.0099999998f, nullptr
	};

	rna_BrushCurvesSculptSettings_density_add_attempts_ = {
		{&rna_BrushCurvesSculptSettings_density_mode, 	&rna_BrushCurvesSculptSettings_curve_radius,
		-1, "density_add_attempts", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Density Add Attempts",
		"How many times the Density brush tries to add a new curve",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushCurvesSculptSettings, density_add_attempts), RawPropertyType(0), nullptr},
		BrushCurvesSculptSettings_density_add_attempts_get, BrushCurvesSculptSettings_density_add_attempts_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_BrushCurvesSculptSettings_density_mode_items[4] = {
		{0, "AUTO", 52, "Auto", "Either add or remove curves depending on the minimum distance of the curves under the cursor"	},
		{1, "ADD", 50, "Add", "Add new curves between existing curves, taking the minimum distance into account"	},
		{2, "REMOVE", 95, "Remove", "Remove curves whose root points are too close"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushCurvesSculptSettings_density_mode_ = {
		{&rna_BrushCurvesSculptSettings_curve_parameter_falloff, 	&rna_BrushCurvesSculptSettings_density_add_attempts,
		-1, "density_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Density Mode",
		"Determines whether the brush adds or removes curves",
		0, "Operator",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrushCurvesSculptSettings, density_mode), RawPropertyType(6), nullptr},
		BrushCurvesSculptSettings_density_mode_get, BrushCurvesSculptSettings_density_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushCurvesSculptSettings_density_mode_items, 3, 0
	};

	rna_BrushCurvesSculptSettings_curve_parameter_falloff_ = {
		{nullptr, 	&rna_BrushCurvesSculptSettings_density_mode,
		-1, "curve_parameter_falloff", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve Parameter Falloff",
		"Falloff that is applied from the tip to the root of each curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BrushCurvesSculptSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushCurvesSculptSettings_curve_parameter_falloff_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	StructRNA *srna = RNA_BrushCurvesSculptSettings;
	srna->cont.properties = {&rna_BrushCurvesSculptSettings_rna_properties, &rna_BrushCurvesSculptSettings_curve_parameter_falloff};
	srna->identifier = "BrushCurvesSculptSettings";
	srna->flag = 516;
	srna->name = "Curves Sculpt Brush Settings";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BrushCurvesSculptSettings_rna_properties;
	srna->path = rna_BrushCurvesSculptSettings_path;
};

/* Brush Texture Slot */
static FloatPropertyRNA rna_BrushTextureSlot_angle_;
PropertyRNA &rna_BrushTextureSlot_angle = reinterpret_cast<PropertyRNA &>(rna_BrushTextureSlot_angle_);

static EnumPropertyRNA rna_BrushTextureSlot_map_mode_;
PropertyRNA &rna_BrushTextureSlot_map_mode = reinterpret_cast<PropertyRNA &>(rna_BrushTextureSlot_map_mode_);

static EnumPropertyRNA rna_BrushTextureSlot_mask_map_mode_;
PropertyRNA &rna_BrushTextureSlot_mask_map_mode = reinterpret_cast<PropertyRNA &>(rna_BrushTextureSlot_mask_map_mode_);

static BoolPropertyRNA rna_BrushTextureSlot_use_rake_;
PropertyRNA &rna_BrushTextureSlot_use_rake = reinterpret_cast<PropertyRNA &>(rna_BrushTextureSlot_use_rake_);

static BoolPropertyRNA rna_BrushTextureSlot_use_random_;
PropertyRNA &rna_BrushTextureSlot_use_random = reinterpret_cast<PropertyRNA &>(rna_BrushTextureSlot_use_random_);

static FloatPropertyRNA rna_BrushTextureSlot_random_angle_;
PropertyRNA &rna_BrushTextureSlot_random_angle = reinterpret_cast<PropertyRNA &>(rna_BrushTextureSlot_random_angle_);

static BoolPropertyRNA rna_BrushTextureSlot_has_texture_angle_source_;
PropertyRNA &rna_BrushTextureSlot_has_texture_angle_source = reinterpret_cast<PropertyRNA &>(rna_BrushTextureSlot_has_texture_angle_source_);

static BoolPropertyRNA rna_BrushTextureSlot_has_random_texture_angle_;
PropertyRNA &rna_BrushTextureSlot_has_random_texture_angle = reinterpret_cast<PropertyRNA &>(rna_BrushTextureSlot_has_random_texture_angle_);

static BoolPropertyRNA rna_BrushTextureSlot_has_texture_angle_;
PropertyRNA &rna_BrushTextureSlot_has_texture_angle = reinterpret_cast<PropertyRNA &>(rna_BrushTextureSlot_has_texture_angle_);

StructRNA *RNA_BrushTextureSlot;
void register_struct_BrushTextureSlot(BlenderRNA &brna)
{
	rna_BrushTextureSlot_angle_ = {
		{&rna_BrushTextureSlot_map_mode, 	nullptr,
		-1, "angle", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angle",
		"Brush texture rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlot_brush_angle_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, rot), RawPropertyType(5), nullptr},
		BrushTextureSlot_angle_get, BrushTextureSlot_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 6.2831854820f, 0.0f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_BrushTextureSlot_map_mode_items[7] = {
		{0, "VIEW_PLANE", 0, "View Plane", ""	},
		{3, "AREA_PLANE", 0, "Area Plane", ""	},
		{1, "TILED", 0, "Tiled", ""	},
		{2, "3D", 0, "3D", ""	},
		{4, "RANDOM", 0, "Random", ""	},
		{5, "STENCIL", 0, "Stencil", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushTextureSlot_map_mode_ = {
		{&rna_BrushTextureSlot_mask_map_mode, 	&rna_BrushTextureSlot_angle,
		-1, "map_mode", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, brush_map_mode), RawPropertyType(2), nullptr},
		BrushTextureSlot_map_mode_get, BrushTextureSlot_map_mode_set, rna_BrushTextureSlot_map_mode_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushTextureSlot_map_mode_items, 6, 0
	};

	static const EnumPropertyItem rna_BrushTextureSlot_mask_map_mode_items[5] = {
		{0, "VIEW_PLANE", 0, "View Plane", ""	},
		{1, "TILED", 0, "Tiled", ""	},
		{4, "RANDOM", 0, "Random", ""	},
		{5, "STENCIL", 0, "Stencil", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BrushTextureSlot_mask_map_mode_ = {
		{&rna_BrushTextureSlot_use_rake, 	&rna_BrushTextureSlot_map_mode,
		-1, "mask_map_mode", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, brush_map_mode), RawPropertyType(2), nullptr},
		BrushTextureSlot_mask_map_mode_get, BrushTextureSlot_mask_map_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BrushTextureSlot_mask_map_mode_items, 4, 0
	};

	rna_BrushTextureSlot_use_rake_ = {
		{&rna_BrushTextureSlot_use_random, 	&rna_BrushTextureSlot_mask_map_mode,
		-1, "use_rake", 4194307, 0, 0, 0, 0, PropertyPathTemplateType(0), "Rake",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushTextureSlot_use_rake_get, BrushTextureSlot_use_rake_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushTextureSlot_use_random_ = {
		{&rna_BrushTextureSlot_random_angle, 	&rna_BrushTextureSlot_use_rake,
		-1, "use_random", 4194307, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushTextureSlot_use_random_get, BrushTextureSlot_use_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushTextureSlot_random_angle_ = {
		{&rna_BrushTextureSlot_has_texture_angle_source, 	&rna_BrushTextureSlot_use_random,
		-1, "random_angle", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "Random Angle",
		"Brush texture random angle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, random_angle), RawPropertyType(5), nullptr},
		BrushTextureSlot_random_angle_get, BrushTextureSlot_random_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 6.2831854820f, 0.0f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, 6.2831854820f, nullptr
	};

	rna_BrushTextureSlot_has_texture_angle_source_ = {
		{&rna_BrushTextureSlot_has_random_texture_angle, 	&rna_BrushTextureSlot_random_angle,
		-1, "has_texture_angle_source", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Texture Angle Source",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushTextureSlot_has_texture_angle_source_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushTextureSlot_has_random_texture_angle_ = {
		{&rna_BrushTextureSlot_has_texture_angle, 	&rna_BrushTextureSlot_has_texture_angle_source,
		-1, "has_random_texture_angle", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Random Texture Angle",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushTextureSlot_has_random_texture_angle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BrushTextureSlot_has_texture_angle_ = {
		{nullptr, 	&rna_BrushTextureSlot_has_random_texture_angle,
		-1, "has_texture_angle", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Texture Angle Source",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrushTextureSlot_has_texture_angle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BrushTextureSlot;
	srna->cont.properties = {&rna_BrushTextureSlot_angle, &rna_BrushTextureSlot_has_texture_angle};
	srna->identifier = "BrushTextureSlot";
	srna->flag = 516;
	srna->name = "Brush Texture Slot";
	srna->description = "Texture slot for textures in a Brush data-block";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_TextureSlot_name;
	srna->iteratorproperty = &rna_TextureSlot_rna_properties;
	srna->base = RNA_TextureSlot;
	srna->path = rna_TextureSlot_path;
};

/* Operator Stroke Element */
static FloatPropertyRNA rna_OperatorStrokeElement_location_;
PropertyRNA &rna_OperatorStrokeElement_location = reinterpret_cast<PropertyRNA &>(rna_OperatorStrokeElement_location_);

static FloatPropertyRNA rna_OperatorStrokeElement_mouse_;
PropertyRNA &rna_OperatorStrokeElement_mouse = reinterpret_cast<PropertyRNA &>(rna_OperatorStrokeElement_mouse_);

static FloatPropertyRNA rna_OperatorStrokeElement_mouse_event_;
PropertyRNA &rna_OperatorStrokeElement_mouse_event = reinterpret_cast<PropertyRNA &>(rna_OperatorStrokeElement_mouse_event_);

static FloatPropertyRNA rna_OperatorStrokeElement_pressure_;
PropertyRNA &rna_OperatorStrokeElement_pressure = reinterpret_cast<PropertyRNA &>(rna_OperatorStrokeElement_pressure_);

static FloatPropertyRNA rna_OperatorStrokeElement_size_;
PropertyRNA &rna_OperatorStrokeElement_size = reinterpret_cast<PropertyRNA &>(rna_OperatorStrokeElement_size_);

static FloatPropertyRNA rna_OperatorStrokeElement_x_tilt_;
PropertyRNA &rna_OperatorStrokeElement_x_tilt = reinterpret_cast<PropertyRNA &>(rna_OperatorStrokeElement_x_tilt_);

static FloatPropertyRNA rna_OperatorStrokeElement_y_tilt_;
PropertyRNA &rna_OperatorStrokeElement_y_tilt = reinterpret_cast<PropertyRNA &>(rna_OperatorStrokeElement_y_tilt_);

static FloatPropertyRNA rna_OperatorStrokeElement_time_;
PropertyRNA &rna_OperatorStrokeElement_time = reinterpret_cast<PropertyRNA &>(rna_OperatorStrokeElement_time_);

static BoolPropertyRNA rna_OperatorStrokeElement_is_start_;
PropertyRNA &rna_OperatorStrokeElement_is_start = reinterpret_cast<PropertyRNA &>(rna_OperatorStrokeElement_is_start_);

StructRNA *RNA_OperatorStrokeElement;
void register_struct_OperatorStrokeElement(BlenderRNA &brna)
{
	static float rna_OperatorStrokeElement_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_OperatorStrokeElement_location_ = {
		{&rna_OperatorStrokeElement_mouse, 	nullptr,
		-1, "location", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_OperatorStrokeElement_location_default
	};

	static float rna_OperatorStrokeElement_mouse_default[2] = {
		0.0f,
		0.0f
	};
	rna_OperatorStrokeElement_mouse_ = {
		{&rna_OperatorStrokeElement_mouse_event, 	&rna_OperatorStrokeElement_location,
		-1, "mouse", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mouse",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_OperatorStrokeElement_mouse_default
	};

	static float rna_OperatorStrokeElement_mouse_event_default[2] = {
		0.0f,
		0.0f
	};
	rna_OperatorStrokeElement_mouse_event_ = {
		{&rna_OperatorStrokeElement_pressure, 	&rna_OperatorStrokeElement_mouse,
		-1, "mouse_event", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mouse Event",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_OperatorStrokeElement_mouse_event_default
	};

	rna_OperatorStrokeElement_pressure_ = {
		{&rna_OperatorStrokeElement_size, 	&rna_OperatorStrokeElement_mouse_event,
		-1, "pressure", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pressure",
		"Tablet pressure",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_OperatorStrokeElement_size_ = {
		{&rna_OperatorStrokeElement_x_tilt, 	&rna_OperatorStrokeElement_pressure,
		-1, "size", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Brush Size",
		"Brush size in screen space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_OperatorStrokeElement_x_tilt_ = {
		{&rna_OperatorStrokeElement_y_tilt, 	&rna_OperatorStrokeElement_size,
		-1, "x_tilt", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tilt X",
		"Pen tilt from left (-1.0) to right (+1.0)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_OperatorStrokeElement_y_tilt_ = {
		{&rna_OperatorStrokeElement_time, 	&rna_OperatorStrokeElement_x_tilt,
		-1, "y_tilt", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tilt Y",
		"Pen tilt from backward (-1.0) to forward (+1.0)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_OperatorStrokeElement_time_ = {
		{&rna_OperatorStrokeElement_is_start, 	&rna_OperatorStrokeElement_y_tilt,
		-1, "time", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Time",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_OperatorStrokeElement_is_start_ = {
		{nullptr, 	&rna_OperatorStrokeElement_time,
		-1, "is_start", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Stroke Start",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_OperatorStrokeElement;
	srna->cont.properties = {&rna_OperatorStrokeElement_location, &rna_OperatorStrokeElement_is_start};
	srna->identifier = "OperatorStrokeElement";
	srna->flag = 516;
	srna->name = "Operator Stroke Element";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_PropertyGroup_name;
	srna->iteratorproperty = &rna_PropertyGroup_rna_properties;
	srna->base = RNA_PropertyGroup;
	srna->refine = rna_PropertyGroup_refine;
	srna->reg = rna_PropertyGroup_register;
	srna->unreg = rna_PropertyGroup_unregister;
	srna->idproperties = rna_PropertyGroup_idprops;
	srna->system_idproperties = rna_PropertyGroup_idprops;
};


}  // namespace blender
