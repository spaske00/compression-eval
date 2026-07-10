
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

#include "rna_sculpt_paint.cc"

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



extern PropertyRNA &rna_Paint_rna_properties;
extern PropertyRNA &rna_Paint_rna_type;
extern PropertyRNA &rna_Paint_brush;
extern PropertyRNA &rna_Paint_brush_asset_reference;
extern PropertyRNA &rna_Paint_palette;
extern PropertyRNA &rna_Paint_show_brush;
extern PropertyRNA &rna_Paint_show_brush_on_surface;
extern PropertyRNA &rna_Paint_show_low_resolution;
extern PropertyRNA &rna_Paint_use_sculpt_delay_updates;
extern PropertyRNA &rna_Paint_show_bvh_nodes;
extern PropertyRNA &rna_Paint_use_symmetry_x;
extern PropertyRNA &rna_Paint_use_symmetry_y;
extern PropertyRNA &rna_Paint_use_symmetry_z;
extern PropertyRNA &rna_Paint_use_symmetry_feather;
extern PropertyRNA &rna_Paint_cavity_curve;
extern PropertyRNA &rna_Paint_use_cavity;
extern PropertyRNA &rna_Paint_tile_offset;
extern PropertyRNA &rna_Paint_tile_x;
extern PropertyRNA &rna_Paint_tile_y;
extern PropertyRNA &rna_Paint_tile_z;
extern PropertyRNA &rna_Paint_show_strength_curve;
extern PropertyRNA &rna_Paint_show_size_curve;
extern PropertyRNA &rna_Paint_show_jitter_curve;
extern PropertyRNA &rna_Paint_unified_paint_settings;
extern PropertyRNA &rna_Paint_mesh_automasking_settings;


extern PropertyRNA &rna_UnifiedPaintSettings_rna_properties;
extern PropertyRNA &rna_UnifiedPaintSettings_rna_type;
extern PropertyRNA &rna_UnifiedPaintSettings_use_unified_size;
extern PropertyRNA &rna_UnifiedPaintSettings_use_unified_strength;
extern PropertyRNA &rna_UnifiedPaintSettings_use_unified_weight;
extern PropertyRNA &rna_UnifiedPaintSettings_use_unified_color;
extern PropertyRNA &rna_UnifiedPaintSettings_use_unified_input_samples;
extern PropertyRNA &rna_UnifiedPaintSettings_size;
extern PropertyRNA &rna_UnifiedPaintSettings_unprojected_size;
extern PropertyRNA &rna_UnifiedPaintSettings_strength;
extern PropertyRNA &rna_UnifiedPaintSettings_weight;
extern PropertyRNA &rna_UnifiedPaintSettings_color;
extern PropertyRNA &rna_UnifiedPaintSettings_secondary_color;
extern PropertyRNA &rna_UnifiedPaintSettings_use_color_jitter;
extern PropertyRNA &rna_UnifiedPaintSettings_hue_jitter;
extern PropertyRNA &rna_UnifiedPaintSettings_saturation_jitter;
extern PropertyRNA &rna_UnifiedPaintSettings_value_jitter;
extern PropertyRNA &rna_UnifiedPaintSettings_use_stroke_random_hue;
extern PropertyRNA &rna_UnifiedPaintSettings_use_stroke_random_sat;
extern PropertyRNA &rna_UnifiedPaintSettings_use_stroke_random_val;
extern PropertyRNA &rna_UnifiedPaintSettings_use_random_press_hue;
extern PropertyRNA &rna_UnifiedPaintSettings_use_random_press_sat;
extern PropertyRNA &rna_UnifiedPaintSettings_use_random_press_val;
extern PropertyRNA &rna_UnifiedPaintSettings_input_samples;
extern PropertyRNA &rna_UnifiedPaintSettings_use_locked_size;


extern PropertyRNA &rna_MeshAutomaskingSettings_rna_properties;
extern PropertyRNA &rna_MeshAutomaskingSettings_rna_type;
extern PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_topology;
extern PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_face_sets;
extern PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_boundary_edges;
extern PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_boundary_face_sets;
extern PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_cavity;
extern PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_cavity_inverted;
extern PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_custom_cavity_curve;
extern PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_start_normal;
extern PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_view_normal;
extern PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_view_occlusion;
extern PropertyRNA &rna_MeshAutomaskingSettings_boundary_edges_propagation_steps;
extern PropertyRNA &rna_MeshAutomaskingSettings_cavity_factor;
extern PropertyRNA &rna_MeshAutomaskingSettings_cavity_blur_steps;
extern PropertyRNA &rna_MeshAutomaskingSettings_cavity_curve;
extern PropertyRNA &rna_MeshAutomaskingSettings_cavity_curve_op;
extern PropertyRNA &rna_MeshAutomaskingSettings_start_normal_limit;
extern PropertyRNA &rna_MeshAutomaskingSettings_start_normal_falloff;
extern PropertyRNA &rna_MeshAutomaskingSettings_view_normal_limit;
extern PropertyRNA &rna_MeshAutomaskingSettings_view_normal_falloff;


extern PropertyRNA &rna_Paint_rna_properties;
extern PropertyRNA &rna_Paint_rna_type;
extern PropertyRNA &rna_Paint_brush;
extern PropertyRNA &rna_Paint_brush_asset_reference;
extern PropertyRNA &rna_Paint_palette;
extern PropertyRNA &rna_Paint_show_brush;
extern PropertyRNA &rna_Paint_show_brush_on_surface;
extern PropertyRNA &rna_Paint_show_low_resolution;
extern PropertyRNA &rna_Paint_use_sculpt_delay_updates;
extern PropertyRNA &rna_Paint_show_bvh_nodes;
extern PropertyRNA &rna_Paint_use_symmetry_x;
extern PropertyRNA &rna_Paint_use_symmetry_y;
extern PropertyRNA &rna_Paint_use_symmetry_z;
extern PropertyRNA &rna_Paint_use_symmetry_feather;
extern PropertyRNA &rna_Paint_cavity_curve;
extern PropertyRNA &rna_Paint_use_cavity;
extern PropertyRNA &rna_Paint_tile_offset;
extern PropertyRNA &rna_Paint_tile_x;
extern PropertyRNA &rna_Paint_tile_y;
extern PropertyRNA &rna_Paint_tile_z;
extern PropertyRNA &rna_Paint_show_strength_curve;
extern PropertyRNA &rna_Paint_show_size_curve;
extern PropertyRNA &rna_Paint_show_jitter_curve;
extern PropertyRNA &rna_Paint_unified_paint_settings;
extern PropertyRNA &rna_Paint_mesh_automasking_settings;

extern PropertyRNA &rna_Sculpt_lock_x;
extern PropertyRNA &rna_Sculpt_lock_y;
extern PropertyRNA &rna_Sculpt_lock_z;
extern PropertyRNA &rna_Sculpt_use_deform_only;
extern PropertyRNA &rna_Sculpt_detail_size;
extern PropertyRNA &rna_Sculpt_detail_percent;
extern PropertyRNA &rna_Sculpt_constant_detail_resolution;
extern PropertyRNA &rna_Sculpt_symmetrize_direction;
extern PropertyRNA &rna_Sculpt_detail_refine_method;
extern PropertyRNA &rna_Sculpt_detail_type_method;
extern PropertyRNA &rna_Sculpt_gravity;
extern PropertyRNA &rna_Sculpt_transform_mode;
extern PropertyRNA &rna_Sculpt_gravity_object;


extern PropertyRNA &rna_UvSculpt_rna_properties;
extern PropertyRNA &rna_UvSculpt_rna_type;
extern PropertyRNA &rna_UvSculpt_size;
extern PropertyRNA &rna_UvSculpt_strength;
extern PropertyRNA &rna_UvSculpt_curve_distance_falloff;
extern PropertyRNA &rna_UvSculpt_curve_distance_falloff_preset;


extern PropertyRNA &rna_Paint_rna_properties;
extern PropertyRNA &rna_Paint_rna_type;
extern PropertyRNA &rna_Paint_brush;
extern PropertyRNA &rna_Paint_brush_asset_reference;
extern PropertyRNA &rna_Paint_palette;
extern PropertyRNA &rna_Paint_show_brush;
extern PropertyRNA &rna_Paint_show_brush_on_surface;
extern PropertyRNA &rna_Paint_show_low_resolution;
extern PropertyRNA &rna_Paint_use_sculpt_delay_updates;
extern PropertyRNA &rna_Paint_show_bvh_nodes;
extern PropertyRNA &rna_Paint_use_symmetry_x;
extern PropertyRNA &rna_Paint_use_symmetry_y;
extern PropertyRNA &rna_Paint_use_symmetry_z;
extern PropertyRNA &rna_Paint_use_symmetry_feather;
extern PropertyRNA &rna_Paint_cavity_curve;
extern PropertyRNA &rna_Paint_use_cavity;
extern PropertyRNA &rna_Paint_tile_offset;
extern PropertyRNA &rna_Paint_tile_x;
extern PropertyRNA &rna_Paint_tile_y;
extern PropertyRNA &rna_Paint_tile_z;
extern PropertyRNA &rna_Paint_show_strength_curve;
extern PropertyRNA &rna_Paint_show_size_curve;
extern PropertyRNA &rna_Paint_show_jitter_curve;
extern PropertyRNA &rna_Paint_unified_paint_settings;
extern PropertyRNA &rna_Paint_mesh_automasking_settings;

extern PropertyRNA &rna_GpPaint_color_mode;


extern PropertyRNA &rna_Paint_rna_properties;
extern PropertyRNA &rna_Paint_rna_type;
extern PropertyRNA &rna_Paint_brush;
extern PropertyRNA &rna_Paint_brush_asset_reference;
extern PropertyRNA &rna_Paint_palette;
extern PropertyRNA &rna_Paint_show_brush;
extern PropertyRNA &rna_Paint_show_brush_on_surface;
extern PropertyRNA &rna_Paint_show_low_resolution;
extern PropertyRNA &rna_Paint_use_sculpt_delay_updates;
extern PropertyRNA &rna_Paint_show_bvh_nodes;
extern PropertyRNA &rna_Paint_use_symmetry_x;
extern PropertyRNA &rna_Paint_use_symmetry_y;
extern PropertyRNA &rna_Paint_use_symmetry_z;
extern PropertyRNA &rna_Paint_use_symmetry_feather;
extern PropertyRNA &rna_Paint_cavity_curve;
extern PropertyRNA &rna_Paint_use_cavity;
extern PropertyRNA &rna_Paint_tile_offset;
extern PropertyRNA &rna_Paint_tile_x;
extern PropertyRNA &rna_Paint_tile_y;
extern PropertyRNA &rna_Paint_tile_z;
extern PropertyRNA &rna_Paint_show_strength_curve;
extern PropertyRNA &rna_Paint_show_size_curve;
extern PropertyRNA &rna_Paint_show_jitter_curve;
extern PropertyRNA &rna_Paint_unified_paint_settings;
extern PropertyRNA &rna_Paint_mesh_automasking_settings;


extern PropertyRNA &rna_Paint_rna_properties;
extern PropertyRNA &rna_Paint_rna_type;
extern PropertyRNA &rna_Paint_brush;
extern PropertyRNA &rna_Paint_brush_asset_reference;
extern PropertyRNA &rna_Paint_palette;
extern PropertyRNA &rna_Paint_show_brush;
extern PropertyRNA &rna_Paint_show_brush_on_surface;
extern PropertyRNA &rna_Paint_show_low_resolution;
extern PropertyRNA &rna_Paint_use_sculpt_delay_updates;
extern PropertyRNA &rna_Paint_show_bvh_nodes;
extern PropertyRNA &rna_Paint_use_symmetry_x;
extern PropertyRNA &rna_Paint_use_symmetry_y;
extern PropertyRNA &rna_Paint_use_symmetry_z;
extern PropertyRNA &rna_Paint_use_symmetry_feather;
extern PropertyRNA &rna_Paint_cavity_curve;
extern PropertyRNA &rna_Paint_use_cavity;
extern PropertyRNA &rna_Paint_tile_offset;
extern PropertyRNA &rna_Paint_tile_x;
extern PropertyRNA &rna_Paint_tile_y;
extern PropertyRNA &rna_Paint_tile_z;
extern PropertyRNA &rna_Paint_show_strength_curve;
extern PropertyRNA &rna_Paint_show_size_curve;
extern PropertyRNA &rna_Paint_show_jitter_curve;
extern PropertyRNA &rna_Paint_unified_paint_settings;
extern PropertyRNA &rna_Paint_mesh_automasking_settings;


extern PropertyRNA &rna_Paint_rna_properties;
extern PropertyRNA &rna_Paint_rna_type;
extern PropertyRNA &rna_Paint_brush;
extern PropertyRNA &rna_Paint_brush_asset_reference;
extern PropertyRNA &rna_Paint_palette;
extern PropertyRNA &rna_Paint_show_brush;
extern PropertyRNA &rna_Paint_show_brush_on_surface;
extern PropertyRNA &rna_Paint_show_low_resolution;
extern PropertyRNA &rna_Paint_use_sculpt_delay_updates;
extern PropertyRNA &rna_Paint_show_bvh_nodes;
extern PropertyRNA &rna_Paint_use_symmetry_x;
extern PropertyRNA &rna_Paint_use_symmetry_y;
extern PropertyRNA &rna_Paint_use_symmetry_z;
extern PropertyRNA &rna_Paint_use_symmetry_feather;
extern PropertyRNA &rna_Paint_cavity_curve;
extern PropertyRNA &rna_Paint_use_cavity;
extern PropertyRNA &rna_Paint_tile_offset;
extern PropertyRNA &rna_Paint_tile_x;
extern PropertyRNA &rna_Paint_tile_y;
extern PropertyRNA &rna_Paint_tile_z;
extern PropertyRNA &rna_Paint_show_strength_curve;
extern PropertyRNA &rna_Paint_show_size_curve;
extern PropertyRNA &rna_Paint_show_jitter_curve;
extern PropertyRNA &rna_Paint_unified_paint_settings;
extern PropertyRNA &rna_Paint_mesh_automasking_settings;


extern PropertyRNA &rna_Paint_rna_properties;
extern PropertyRNA &rna_Paint_rna_type;
extern PropertyRNA &rna_Paint_brush;
extern PropertyRNA &rna_Paint_brush_asset_reference;
extern PropertyRNA &rna_Paint_palette;
extern PropertyRNA &rna_Paint_show_brush;
extern PropertyRNA &rna_Paint_show_brush_on_surface;
extern PropertyRNA &rna_Paint_show_low_resolution;
extern PropertyRNA &rna_Paint_use_sculpt_delay_updates;
extern PropertyRNA &rna_Paint_show_bvh_nodes;
extern PropertyRNA &rna_Paint_use_symmetry_x;
extern PropertyRNA &rna_Paint_use_symmetry_y;
extern PropertyRNA &rna_Paint_use_symmetry_z;
extern PropertyRNA &rna_Paint_use_symmetry_feather;
extern PropertyRNA &rna_Paint_cavity_curve;
extern PropertyRNA &rna_Paint_use_cavity;
extern PropertyRNA &rna_Paint_tile_offset;
extern PropertyRNA &rna_Paint_tile_x;
extern PropertyRNA &rna_Paint_tile_y;
extern PropertyRNA &rna_Paint_tile_z;
extern PropertyRNA &rna_Paint_show_strength_curve;
extern PropertyRNA &rna_Paint_show_size_curve;
extern PropertyRNA &rna_Paint_show_jitter_curve;
extern PropertyRNA &rna_Paint_unified_paint_settings;
extern PropertyRNA &rna_Paint_mesh_automasking_settings;

extern PropertyRNA &rna_VertexPaint_use_group_restrict;


extern PropertyRNA &rna_PaintModeSettings_rna_properties;
extern PropertyRNA &rna_PaintModeSettings_rna_type;
extern PropertyRNA &rna_PaintModeSettings_canvas_source;
extern PropertyRNA &rna_PaintModeSettings_canvas_image;


extern PropertyRNA &rna_Paint_rna_properties;
extern PropertyRNA &rna_Paint_rna_type;
extern PropertyRNA &rna_Paint_brush;
extern PropertyRNA &rna_Paint_brush_asset_reference;
extern PropertyRNA &rna_Paint_palette;
extern PropertyRNA &rna_Paint_show_brush;
extern PropertyRNA &rna_Paint_show_brush_on_surface;
extern PropertyRNA &rna_Paint_show_low_resolution;
extern PropertyRNA &rna_Paint_use_sculpt_delay_updates;
extern PropertyRNA &rna_Paint_show_bvh_nodes;
extern PropertyRNA &rna_Paint_use_symmetry_x;
extern PropertyRNA &rna_Paint_use_symmetry_y;
extern PropertyRNA &rna_Paint_use_symmetry_z;
extern PropertyRNA &rna_Paint_use_symmetry_feather;
extern PropertyRNA &rna_Paint_cavity_curve;
extern PropertyRNA &rna_Paint_use_cavity;
extern PropertyRNA &rna_Paint_tile_offset;
extern PropertyRNA &rna_Paint_tile_x;
extern PropertyRNA &rna_Paint_tile_y;
extern PropertyRNA &rna_Paint_tile_z;
extern PropertyRNA &rna_Paint_show_strength_curve;
extern PropertyRNA &rna_Paint_show_size_curve;
extern PropertyRNA &rna_Paint_show_jitter_curve;
extern PropertyRNA &rna_Paint_unified_paint_settings;
extern PropertyRNA &rna_Paint_mesh_automasking_settings;

extern PropertyRNA &rna_ImagePaint_use_occlude;
extern PropertyRNA &rna_ImagePaint_use_backface_culling;
extern PropertyRNA &rna_ImagePaint_use_normal_falloff;
extern PropertyRNA &rna_ImagePaint_use_stencil_layer;
extern PropertyRNA &rna_ImagePaint_invert_stencil;
extern PropertyRNA &rna_ImagePaint_stencil_image;
extern PropertyRNA &rna_ImagePaint_canvas;
extern PropertyRNA &rna_ImagePaint_clone_image;
extern PropertyRNA &rna_ImagePaint_stencil_color;
extern PropertyRNA &rna_ImagePaint_dither;
extern PropertyRNA &rna_ImagePaint_use_clone_layer;
extern PropertyRNA &rna_ImagePaint_seam_bleed;
extern PropertyRNA &rna_ImagePaint_normal_angle;
extern PropertyRNA &rna_ImagePaint_screen_grab_size;
extern PropertyRNA &rna_ImagePaint_mode;
extern PropertyRNA &rna_ImagePaint_interpolation;
extern PropertyRNA &rna_ImagePaint_missing_uvs;
extern PropertyRNA &rna_ImagePaint_missing_materials;
extern PropertyRNA &rna_ImagePaint_missing_stencil;
extern PropertyRNA &rna_ImagePaint_missing_texture;
extern PropertyRNA &rna_ImagePaint_clone_alpha;
extern PropertyRNA &rna_ImagePaint_clone_offset;

extern FunctionRNA *rna_ImagePaint_detect_data_func;
extern PropertyRNA &rna_ImagePaint_detect_data_ok;



extern PropertyRNA &rna_ParticleEdit_rna_properties;
extern PropertyRNA &rna_ParticleEdit_rna_type;
extern PropertyRNA &rna_ParticleEdit_tool;
extern PropertyRNA &rna_ParticleEdit_select_mode;
extern PropertyRNA &rna_ParticleEdit_use_preserve_length;
extern PropertyRNA &rna_ParticleEdit_use_preserve_root;
extern PropertyRNA &rna_ParticleEdit_use_emitter_deflect;
extern PropertyRNA &rna_ParticleEdit_emitter_distance;
extern PropertyRNA &rna_ParticleEdit_use_fade_time;
extern PropertyRNA &rna_ParticleEdit_use_auto_velocity;
extern PropertyRNA &rna_ParticleEdit_show_particles;
extern PropertyRNA &rna_ParticleEdit_use_default_interpolate;
extern PropertyRNA &rna_ParticleEdit_default_key_count;
extern PropertyRNA &rna_ParticleEdit_brush;
extern PropertyRNA &rna_ParticleEdit_display_step;
extern PropertyRNA &rna_ParticleEdit_fade_frames;
extern PropertyRNA &rna_ParticleEdit_type;
extern PropertyRNA &rna_ParticleEdit_is_editable;
extern PropertyRNA &rna_ParticleEdit_is_hair;
extern PropertyRNA &rna_ParticleEdit_object;
extern PropertyRNA &rna_ParticleEdit_shape_object;


extern PropertyRNA &rna_ParticleBrush_rna_properties;
extern PropertyRNA &rna_ParticleBrush_rna_type;
extern PropertyRNA &rna_ParticleBrush_size;
extern PropertyRNA &rna_ParticleBrush_strength;
extern PropertyRNA &rna_ParticleBrush_count;
extern PropertyRNA &rna_ParticleBrush_steps;
extern PropertyRNA &rna_ParticleBrush_puff_mode;
extern PropertyRNA &rna_ParticleBrush_use_puff_volume;
extern PropertyRNA &rna_ParticleBrush_length_mode;
extern PropertyRNA &rna_ParticleBrush_curve;


extern PropertyRNA &rna_GPencilSculptGuide_rna_properties;
extern PropertyRNA &rna_GPencilSculptGuide_rna_type;
extern PropertyRNA &rna_GPencilSculptGuide_use_guide;
extern PropertyRNA &rna_GPencilSculptGuide_use_snapping;
extern PropertyRNA &rna_GPencilSculptGuide_reference_object;
extern PropertyRNA &rna_GPencilSculptGuide_reference_point;
extern PropertyRNA &rna_GPencilSculptGuide_type;
extern PropertyRNA &rna_GPencilSculptGuide_angle;
extern PropertyRNA &rna_GPencilSculptGuide_angle_snap;
extern PropertyRNA &rna_GPencilSculptGuide_spacing;
extern PropertyRNA &rna_GPencilSculptGuide_location;


extern PropertyRNA &rna_GPencilSculptSettings_rna_properties;
extern PropertyRNA &rna_GPencilSculptSettings_rna_type;
extern PropertyRNA &rna_GPencilSculptSettings_guide;
extern PropertyRNA &rna_GPencilSculptSettings_use_multiframe_falloff;
extern PropertyRNA &rna_GPencilSculptSettings_use_thickness_curve;
extern PropertyRNA &rna_GPencilSculptSettings_use_scale_thickness;
extern PropertyRNA &rna_GPencilSculptSettings_use_automasking_stroke;
extern PropertyRNA &rna_GPencilSculptSettings_use_automasking_layer_stroke;
extern PropertyRNA &rna_GPencilSculptSettings_use_automasking_material_stroke;
extern PropertyRNA &rna_GPencilSculptSettings_use_automasking_layer_active;
extern PropertyRNA &rna_GPencilSculptSettings_use_automasking_material_active;
extern PropertyRNA &rna_GPencilSculptSettings_multiframe_falloff_curve;
extern PropertyRNA &rna_GPencilSculptSettings_thickness_primitive_curve;
extern PropertyRNA &rna_GPencilSculptSettings_lock_axis;
extern PropertyRNA &rna_GPencilSculptSettings_intersection_threshold;


extern PropertyRNA &rna_Paint_rna_properties;
extern PropertyRNA &rna_Paint_rna_type;
extern PropertyRNA &rna_Paint_brush;
extern PropertyRNA &rna_Paint_brush_asset_reference;
extern PropertyRNA &rna_Paint_palette;
extern PropertyRNA &rna_Paint_show_brush;
extern PropertyRNA &rna_Paint_show_brush_on_surface;
extern PropertyRNA &rna_Paint_show_low_resolution;
extern PropertyRNA &rna_Paint_use_sculpt_delay_updates;
extern PropertyRNA &rna_Paint_show_bvh_nodes;
extern PropertyRNA &rna_Paint_use_symmetry_x;
extern PropertyRNA &rna_Paint_use_symmetry_y;
extern PropertyRNA &rna_Paint_use_symmetry_z;
extern PropertyRNA &rna_Paint_use_symmetry_feather;
extern PropertyRNA &rna_Paint_cavity_curve;
extern PropertyRNA &rna_Paint_use_cavity;
extern PropertyRNA &rna_Paint_tile_offset;
extern PropertyRNA &rna_Paint_tile_x;
extern PropertyRNA &rna_Paint_tile_y;
extern PropertyRNA &rna_Paint_tile_z;
extern PropertyRNA &rna_Paint_show_strength_curve;
extern PropertyRNA &rna_Paint_show_size_curve;
extern PropertyRNA &rna_Paint_show_jitter_curve;
extern PropertyRNA &rna_Paint_unified_paint_settings;
extern PropertyRNA &rna_Paint_mesh_automasking_settings;

static PointerRNA Paint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Paint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Paint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Paint_rna_properties_get(iter);
    }
}

void Paint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Paint_rna_properties_get(iter);
    }
}

void Paint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Paint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Paint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA Paint_brush_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Paint_brush_get;
    return fn(ptr);
}

PointerRNA Paint_brush_asset_reference_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AssetWeakReference, data->brush_asset_reference);
}

PointerRNA Paint_palette_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Palette, data->palette);
}

void Paint_palette_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Paint *data = (Paint *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->palette) {
        id_us_min((ID *)data->palette);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->palette = value.data;
}

bool Paint_show_brush_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->flags) & 1) != 0);
}

void Paint_show_brush_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1)); }
}

bool Paint_show_brush_on_surface_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void Paint_show_brush_on_surface_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

bool Paint_show_low_resolution_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void Paint_show_low_resolution_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

bool Paint_use_sculpt_delay_updates_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->flags) & 16) != 0);
}

void Paint_use_sculpt_delay_updates_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 16); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(16)); }
}

bool Paint_show_bvh_nodes_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->debug_flags) & 1) != 0);
}

void Paint_show_bvh_nodes_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->debug_flags = std::remove_reference_t<decltype(data->debug_flags)>(uint64_t(data->debug_flags) | 1); }
    else { data->debug_flags = std::remove_reference_t<decltype(data->debug_flags)>(uint64_t(data->debug_flags) & ~uint64_t(1)); }
}

bool Paint_use_symmetry_x_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->symmetry_flags) & 1) != 0);
}

void Paint_use_symmetry_x_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) | 1); }
    else { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) & ~uint64_t(1)); }
}

bool Paint_use_symmetry_y_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->symmetry_flags) & 2) != 0);
}

void Paint_use_symmetry_y_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) | 2); }
    else { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) & ~uint64_t(2)); }
}

bool Paint_use_symmetry_z_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->symmetry_flags) & 4) != 0);
}

void Paint_use_symmetry_z_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) | 4); }
    else { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) & ~uint64_t(4)); }
}

bool Paint_use_symmetry_feather_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->symmetry_flags) & 8) != 0);
}

void Paint_use_symmetry_feather_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) | 8); }
    else { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) & ~uint64_t(8)); }
}

PointerRNA Paint_cavity_curve_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->cavity_curve);
}

bool Paint_use_cavity_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

void Paint_use_cavity_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

void Paint_tile_offset_get(PointerRNA *ptr, float values[3])
{
    Paint *data = (Paint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->tile_offset)[i]);
    }
}

void Paint_tile_offset_set(PointerRNA *ptr, const float values[3])
{
    Paint *data = (Paint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->tile_offset)[i] = std::clamp(values[i], 0.0099999998f, FLT_MAX);
    }
}

bool Paint_tile_x_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->symmetry_flags) & 16) != 0);
}

void Paint_tile_x_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) | 16); }
    else { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) & ~uint64_t(16)); }
}

bool Paint_tile_y_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->symmetry_flags) & 32) != 0);
}

void Paint_tile_y_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) | 32); }
    else { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) & ~uint64_t(32)); }
}

bool Paint_tile_z_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->symmetry_flags) & 64) != 0);
}

void Paint_tile_z_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) | 64); }
    else { data->symmetry_flags = std::remove_reference_t<decltype(data->symmetry_flags)>(uint64_t(data->symmetry_flags) & ~uint64_t(64)); }
}

bool Paint_show_strength_curve_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->curve_visibility_flags) & 1) != 0);
}

void Paint_show_strength_curve_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->curve_visibility_flags = std::remove_reference_t<decltype(data->curve_visibility_flags)>(uint64_t(data->curve_visibility_flags) | 1); }
    else { data->curve_visibility_flags = std::remove_reference_t<decltype(data->curve_visibility_flags)>(uint64_t(data->curve_visibility_flags) & ~uint64_t(1)); }
}

bool Paint_show_size_curve_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->curve_visibility_flags) & 2) != 0);
}

void Paint_show_size_curve_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->curve_visibility_flags = std::remove_reference_t<decltype(data->curve_visibility_flags)>(uint64_t(data->curve_visibility_flags) | 2); }
    else { data->curve_visibility_flags = std::remove_reference_t<decltype(data->curve_visibility_flags)>(uint64_t(data->curve_visibility_flags) & ~uint64_t(2)); }
}

bool Paint_show_jitter_curve_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return ((uint64_t(data->curve_visibility_flags) & 4) != 0);
}

void Paint_show_jitter_curve_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->curve_visibility_flags = std::remove_reference_t<decltype(data->curve_visibility_flags)>(uint64_t(data->curve_visibility_flags) | 4); }
    else { data->curve_visibility_flags = std::remove_reference_t<decltype(data->curve_visibility_flags)>(uint64_t(data->curve_visibility_flags) & ~uint64_t(4)); }
}

PointerRNA Paint_unified_paint_settings_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_UnifiedPaintSettings, &data->unified_paint_settings);
}

PointerRNA Paint_mesh_automasking_settings_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MeshAutomaskingSettings, data->mesh_automasking_settings);
}

static PointerRNA UnifiedPaintSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UnifiedPaintSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UnifiedPaintSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UnifiedPaintSettings_rna_properties_get(iter);
    }
}

void UnifiedPaintSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UnifiedPaintSettings_rna_properties_get(iter);
    }
}

void UnifiedPaintSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UnifiedPaintSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UnifiedPaintSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool UnifiedPaintSettings_use_unified_size_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void UnifiedPaintSettings_use_unified_size_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool UnifiedPaintSettings_use_unified_strength_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void UnifiedPaintSettings_use_unified_strength_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool UnifiedPaintSettings_use_unified_weight_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void UnifiedPaintSettings_use_unified_weight_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool UnifiedPaintSettings_use_unified_color_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void UnifiedPaintSettings_use_unified_color_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool UnifiedPaintSettings_use_unified_input_samples_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void UnifiedPaintSettings_use_unified_input_samples_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

int UnifiedPaintSettings_size_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return (int)(data->size);
}

void UnifiedPaintSettings_size_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_UnifiedPaintSettings_size_set;
    fn(ptr, value);
}

float UnifiedPaintSettings_unprojected_size_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return (float)(data->unprojected_size);
}

void UnifiedPaintSettings_unprojected_size_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_UnifiedPaintSettings_unprojected_size_set;
    fn(ptr, value);
}

float UnifiedPaintSettings_strength_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return (float)(data->alpha);
}

void UnifiedPaintSettings_strength_set(PointerRNA *ptr, float value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)std::clamp(value, 0.0f, 10.0f);
}

float UnifiedPaintSettings_weight_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return (float)(data->weight);
}

void UnifiedPaintSettings_weight_set(PointerRNA *ptr, float value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0f, 1.0f);
}

void UnifiedPaintSettings_color_get(PointerRNA *ptr, float values[3])
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void UnifiedPaintSettings_color_set(PointerRNA *ptr, const float values[3])
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

void UnifiedPaintSettings_secondary_color_get(PointerRNA *ptr, float values[3])
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->secondary_color)[i]);
    }
}

void UnifiedPaintSettings_secondary_color_set(PointerRNA *ptr, const float values[3])
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->secondary_color)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

bool UnifiedPaintSettings_use_color_jitter_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void UnifiedPaintSettings_use_color_jitter_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

float UnifiedPaintSettings_hue_jitter_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return (float)(data->hsv_jitter[0]);
}

void UnifiedPaintSettings_hue_jitter_set(PointerRNA *ptr, float value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    data->hsv_jitter[0] = (std::remove_reference_t<decltype(data->hsv_jitter[0])>)std::clamp(value, 0.0f, 1.0f);
}

float UnifiedPaintSettings_saturation_jitter_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return (float)(data->hsv_jitter[1]);
}

void UnifiedPaintSettings_saturation_jitter_set(PointerRNA *ptr, float value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    data->hsv_jitter[1] = (std::remove_reference_t<decltype(data->hsv_jitter[1])>)std::clamp(value, 0.0f, 1.0f);
}

float UnifiedPaintSettings_value_jitter_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return (float)(data->hsv_jitter[2]);
}

void UnifiedPaintSettings_value_jitter_set(PointerRNA *ptr, float value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    data->hsv_jitter[2] = (std::remove_reference_t<decltype(data->hsv_jitter[2])>)std::clamp(value, 0.0f, 1.0f);
}

bool UnifiedPaintSettings_use_stroke_random_hue_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 1) != 0);
}

void UnifiedPaintSettings_use_stroke_random_hue_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 1); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(1)); }
}

bool UnifiedPaintSettings_use_stroke_random_sat_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 2) != 0);
}

void UnifiedPaintSettings_use_stroke_random_sat_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 2); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(2)); }
}

bool UnifiedPaintSettings_use_stroke_random_val_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 4) != 0);
}

void UnifiedPaintSettings_use_stroke_random_val_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 4); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(4)); }
}

bool UnifiedPaintSettings_use_random_press_hue_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 8) != 0);
}

void UnifiedPaintSettings_use_random_press_hue_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 8); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(8)); }
}

bool UnifiedPaintSettings_use_random_press_sat_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 16) != 0);
}

void UnifiedPaintSettings_use_random_press_sat_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 16); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(16)); }
}

bool UnifiedPaintSettings_use_random_press_val_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return ((uint64_t(data->color_jitter_flag) & 32) != 0);
}

void UnifiedPaintSettings_use_random_press_val_set(PointerRNA *ptr, bool value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    if (value) { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) | 32); }
    else { data->color_jitter_flag = std::remove_reference_t<decltype(data->color_jitter_flag)>(uint64_t(data->color_jitter_flag) & ~uint64_t(32)); }
}

int UnifiedPaintSettings_input_samples_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return (int)(data->input_samples);
}

void UnifiedPaintSettings_input_samples_set(PointerRNA *ptr, int value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    data->input_samples = (std::remove_reference_t<decltype(data->input_samples)>)std::clamp(value, 1, 64);
}

int UnifiedPaintSettings_use_locked_size_get(PointerRNA *ptr)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    return (uint64_t(data->flag) & 4);
}

void UnifiedPaintSettings_use_locked_size_set(PointerRNA *ptr, int value)
{
    UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

static PointerRNA MeshAutomaskingSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshAutomaskingSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshAutomaskingSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshAutomaskingSettings_rna_properties_get(iter);
    }
}

void MeshAutomaskingSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshAutomaskingSettings_rna_properties_get(iter);
    }
}

void MeshAutomaskingSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshAutomaskingSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshAutomaskingSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool MeshAutomaskingSettings_use_automasking_topology_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 1) != 0);
}

void MeshAutomaskingSettings_use_automasking_topology_set(PointerRNA *ptr, bool value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1)); }
}

bool MeshAutomaskingSettings_use_automasking_face_sets_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void MeshAutomaskingSettings_use_automasking_face_sets_set(PointerRNA *ptr, bool value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

bool MeshAutomaskingSettings_use_automasking_boundary_edges_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void MeshAutomaskingSettings_use_automasking_boundary_edges_set(PointerRNA *ptr, bool value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

bool MeshAutomaskingSettings_use_automasking_boundary_face_sets_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

void MeshAutomaskingSettings_use_automasking_boundary_face_sets_set(PointerRNA *ptr, bool value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

bool MeshAutomaskingSettings_use_automasking_cavity_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 16) != 0);
}

void MeshAutomaskingSettings_use_automasking_cavity_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshAutomaskingSettings_cavity_set;
    fn(ptr, value);
}

bool MeshAutomaskingSettings_use_automasking_cavity_inverted_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 32) != 0);
}

void MeshAutomaskingSettings_use_automasking_cavity_inverted_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshAutomaskingSettings_invert_cavity_set;
    fn(ptr, value);
}

bool MeshAutomaskingSettings_use_automasking_custom_cavity_curve_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 64) != 0);
}

void MeshAutomaskingSettings_use_automasking_custom_cavity_curve_set(PointerRNA *ptr, bool value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 64); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(64)); }
}

bool MeshAutomaskingSettings_use_automasking_start_normal_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 256) != 0);
}

void MeshAutomaskingSettings_use_automasking_start_normal_set(PointerRNA *ptr, bool value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 256); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(256)); }
}

bool MeshAutomaskingSettings_use_automasking_view_normal_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 512) != 0);
}

void MeshAutomaskingSettings_use_automasking_view_normal_set(PointerRNA *ptr, bool value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 512); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(512)); }
}

bool MeshAutomaskingSettings_use_automasking_view_occlusion_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 1024) != 0);
}

void MeshAutomaskingSettings_use_automasking_view_occlusion_set(PointerRNA *ptr, bool value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1024); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1024)); }
}

int MeshAutomaskingSettings_boundary_edges_propagation_steps_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return (int)(data->boundary_edges_propagation_steps);
}

void MeshAutomaskingSettings_boundary_edges_propagation_steps_set(PointerRNA *ptr, int value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    data->boundary_edges_propagation_steps = (std::remove_reference_t<decltype(data->boundary_edges_propagation_steps)>)std::clamp(value, 1, 20);
}

float MeshAutomaskingSettings_cavity_factor_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return (float)(data->cavity_factor);
}

void MeshAutomaskingSettings_cavity_factor_set(PointerRNA *ptr, float value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    data->cavity_factor = (std::remove_reference_t<decltype(data->cavity_factor)>)std::clamp(value, 0.0f, 5.0f);
}

int MeshAutomaskingSettings_cavity_blur_steps_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return (int)(data->cavity_blur_steps);
}

void MeshAutomaskingSettings_cavity_blur_steps_set(PointerRNA *ptr, int value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    data->cavity_blur_steps = (std::remove_reference_t<decltype(data->cavity_blur_steps)>)std::clamp(value, 0, 25);
}

PointerRNA MeshAutomaskingSettings_cavity_curve_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->cavity_curve);
}

PointerRNA MeshAutomaskingSettings_cavity_curve_op_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->cavity_curve_op);
}

float MeshAutomaskingSettings_start_normal_limit_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return (float)(data->start_normal_limit);
}

void MeshAutomaskingSettings_start_normal_limit_set(PointerRNA *ptr, float value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    data->start_normal_limit = (std::remove_reference_t<decltype(data->start_normal_limit)>)std::clamp(value, 0.0001000000f, 3.1415927410f);
}

float MeshAutomaskingSettings_start_normal_falloff_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return (float)(data->start_normal_falloff);
}

void MeshAutomaskingSettings_start_normal_falloff_set(PointerRNA *ptr, float value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    data->start_normal_falloff = (std::remove_reference_t<decltype(data->start_normal_falloff)>)std::clamp(value, 0.0001000000f, 1.0f);
}

float MeshAutomaskingSettings_view_normal_limit_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return (float)(data->view_normal_limit);
}

void MeshAutomaskingSettings_view_normal_limit_set(PointerRNA *ptr, float value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    data->view_normal_limit = (std::remove_reference_t<decltype(data->view_normal_limit)>)std::clamp(value, 0.0001000000f, 3.1415927410f);
}

float MeshAutomaskingSettings_view_normal_falloff_get(PointerRNA *ptr)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    return (float)(data->view_normal_falloff);
}

void MeshAutomaskingSettings_view_normal_falloff_set(PointerRNA *ptr, float value)
{
    MeshAutomaskingSettings *data = (MeshAutomaskingSettings *)(ptr->data);
    data->view_normal_falloff = (std::remove_reference_t<decltype(data->view_normal_falloff)>)std::clamp(value, 0.0001000000f, 1.0f);
}

bool Sculpt_lock_x_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

void Sculpt_lock_x_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

bool Sculpt_lock_y_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return ((uint64_t(data->flags) & 16) != 0);
}

void Sculpt_lock_y_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 16); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(16)); }
}

bool Sculpt_lock_z_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return ((uint64_t(data->flags) & 32) != 0);
}

void Sculpt_lock_z_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 32); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(32)); }
}

bool Sculpt_use_deform_only_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return ((uint64_t(data->flags) & 256) != 0);
}

void Sculpt_use_deform_only_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 256); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(256)); }
}

float Sculpt_detail_size_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->detail_size);
}

void Sculpt_detail_size_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->detail_size = (std::remove_reference_t<decltype(data->detail_size)>)std::clamp(value, 0.5000000000f, 40.0f);
}

float Sculpt_detail_percent_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->detail_percent);
}

void Sculpt_detail_percent_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->detail_percent = (std::remove_reference_t<decltype(data->detail_percent)>)std::clamp(value, 0.5000000000f, 100.0f);
}

float Sculpt_constant_detail_resolution_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->constant_detail);
}

void Sculpt_constant_detail_resolution_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->constant_detail = (std::remove_reference_t<decltype(data->constant_detail)>)std::clamp(value, 0.0001000000f, FLT_MAX);
}

int Sculpt_symmetrize_direction_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (int)(data->symmetrize_direction);
}

void Sculpt_symmetrize_direction_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->symmetrize_direction = (std::remove_reference_t<decltype(data->symmetrize_direction)>)value;
}

int Sculpt_detail_refine_method_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (uint64_t(data->flags) & 6144);
}

void Sculpt_detail_refine_method_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(6144));
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | uint64_t(value));
}

int Sculpt_detail_type_method_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (uint64_t(data->flags) & 90112);
}

void Sculpt_detail_type_method_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(90112));
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | uint64_t(value));
}

float Sculpt_gravity_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->gravity_factor);
}

void Sculpt_gravity_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->gravity_factor = (std::remove_reference_t<decltype(data->gravity_factor)>)std::clamp(value, 0.0f, 1.0f);
}

int Sculpt_transform_mode_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (int)(data->transform_mode);
}

void Sculpt_transform_mode_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->transform_mode = (std::remove_reference_t<decltype(data->transform_mode)>)value;
}

PointerRNA Sculpt_gravity_object_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->gravity_object);
}

void Sculpt_gravity_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->gravity_object = value.data;
}

static PointerRNA UvSculpt_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UvSculpt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UvSculpt_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UvSculpt_rna_properties_get(iter);
    }
}

void UvSculpt_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UvSculpt_rna_properties_get(iter);
    }
}

void UvSculpt_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UvSculpt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UvSculpt_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int UvSculpt_size_get(PointerRNA *ptr)
{
    UvSculpt *data = (UvSculpt *)(ptr->data);
    return (int)(data->size);
}

void UvSculpt_size_set(PointerRNA *ptr, int value)
{
    UvSculpt *data = (UvSculpt *)(ptr->data);
    data->size = (std::remove_reference_t<decltype(data->size)>)std::clamp(value, 1, 10000);
}

float UvSculpt_strength_get(PointerRNA *ptr)
{
    UvSculpt *data = (UvSculpt *)(ptr->data);
    return (float)(data->strength);
}

void UvSculpt_strength_set(PointerRNA *ptr, float value)
{
    UvSculpt *data = (UvSculpt *)(ptr->data);
    data->strength = (std::remove_reference_t<decltype(data->strength)>)std::clamp(value, 0.0f, 1.0f);
}

PointerRNA UvSculpt_curve_distance_falloff_get(PointerRNA *ptr)
{
    UvSculpt *data = (UvSculpt *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_distance_falloff);
}

int UvSculpt_curve_distance_falloff_preset_get(PointerRNA *ptr)
{
    UvSculpt *data = (UvSculpt *)(ptr->data);
    return (int)(data->curve_distance_falloff_preset);
}

void UvSculpt_curve_distance_falloff_preset_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_UvSculpt_curve_preset_set;
    fn(ptr, value);
}

int GpPaint_color_mode_get(PointerRNA *ptr)
{
    GpPaint *data = (GpPaint *)(ptr->data);
    return (int)(data->mode);
}

void GpPaint_color_mode_set(PointerRNA *ptr, int value)
{
    GpPaint *data = (GpPaint *)(ptr->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

bool VertexPaint_use_group_restrict_get(PointerRNA *ptr)
{
    VPaint *data = (VPaint *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void VertexPaint_use_group_restrict_set(PointerRNA *ptr, bool value)
{
    VPaint *data = (VPaint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

static PointerRNA PaintModeSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PaintModeSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PaintModeSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaintModeSettings_rna_properties_get(iter);
    }
}

void PaintModeSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PaintModeSettings_rna_properties_get(iter);
    }
}

void PaintModeSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PaintModeSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PaintModeSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int PaintModeSettings_canvas_source_get(PointerRNA *ptr)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);
    return (int)(data->canvas_source);
}

void PaintModeSettings_canvas_source_set(PointerRNA *ptr, int value)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);
    data->canvas_source = (std::remove_reference_t<decltype(data->canvas_source)>)value;
}

PointerRNA PaintModeSettings_canvas_image_get(PointerRNA *ptr)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Image, data->canvas_image);
}

void PaintModeSettings_canvas_image_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->canvas_image) {
        id_us_min((ID *)data->canvas_image);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->canvas_image = value.data;
}

bool ImagePaint_use_occlude_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return !((uint64_t(data->flag) & 16) != 0);
}

void ImagePaint_use_occlude_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool ImagePaint_use_backface_culling_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return !((uint64_t(data->flag) & 32) != 0);
}

void ImagePaint_use_backface_culling_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool ImagePaint_use_normal_falloff_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return !((uint64_t(data->flag) & 64) != 0);
}

void ImagePaint_use_normal_falloff_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool ImagePaint_use_stencil_layer_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void ImagePaint_use_stencil_layer_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool ImagePaint_invert_stencil_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void ImagePaint_invert_stencil_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

PointerRNA ImagePaint_stencil_image_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Image, data->stencil);
}

void ImagePaint_stencil_image_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->stencil) {
        id_us_min((ID *)data->stencil);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->stencil = value.data;
}

PointerRNA ImagePaint_canvas_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Image, data->canvas);
}

void ImagePaint_canvas_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->canvas) {
        id_us_min((ID *)data->canvas);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->canvas = value.data;
}

PointerRNA ImagePaint_clone_image_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Image, data->clone);
}

void ImagePaint_clone_image_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->clone) {
        id_us_min((ID *)data->clone);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->clone = value.data;
}

void ImagePaint_stencil_color_get(PointerRNA *ptr, float values[3])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->stencil_col)[i]);
    }
}

void ImagePaint_stencil_color_set(PointerRNA *ptr, const float values[3])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->stencil_col)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

float ImagePaint_dither_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (float)(data->dither);
}

void ImagePaint_dither_set(PointerRNA *ptr, float value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->dither = (std::remove_reference_t<decltype(data->dither)>)std::clamp(value, 0.0f, 2.0f);
}

bool ImagePaint_use_clone_layer_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void ImagePaint_use_clone_layer_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

int ImagePaint_seam_bleed_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->seam_bleed);
}

void ImagePaint_seam_bleed_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->seam_bleed = (std::remove_reference_t<decltype(data->seam_bleed)>)std::clamp(value, -32768, 32767);
}

int ImagePaint_normal_angle_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->normal_angle);
}

void ImagePaint_normal_angle_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->normal_angle = (std::remove_reference_t<decltype(data->normal_angle)>)std::clamp(value, 0, 90);
}

void ImagePaint_screen_grab_size_get(PointerRNA *ptr, int values[2])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((short *)data->screen_grab_size)[i]);
    }
}

void ImagePaint_screen_grab_size_set(PointerRNA *ptr, const int values[2])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((short *)data->screen_grab_size)[i] = std::clamp(values[i], 512, 16384);
    }
}

int ImagePaint_mode_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->mode);
}

void ImagePaint_mode_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

int ImagePaint_interpolation_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->interp);
}

void ImagePaint_interpolation_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->interp = (std::remove_reference_t<decltype(data->interp)>)value;
}

bool ImagePaint_missing_uvs_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return ((uint64_t(data->missing_data) & 1) != 0);
}

bool ImagePaint_missing_materials_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return ((uint64_t(data->missing_data) & 2) != 0);
}

bool ImagePaint_missing_stencil_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return ((uint64_t(data->missing_data) & 8) != 0);
}

bool ImagePaint_missing_texture_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return ((uint64_t(data->missing_data) & 4) != 0);
}

float ImagePaint_clone_alpha_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (float)(data->clone_alpha);
}

void ImagePaint_clone_alpha_set(PointerRNA *ptr, float value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->clone_alpha = (std::remove_reference_t<decltype(data->clone_alpha)>)std::clamp(value, 0.0f, 1.0f);
}

void ImagePaint_clone_offset_get(PointerRNA *ptr, float values[2])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->clone_offset)[i]);
    }
}

void ImagePaint_clone_offset_set(PointerRNA *ptr, const float values[2])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->clone_offset)[i] = values[i];
    }
}

static PointerRNA ParticleEdit_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ParticleEdit_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleEdit_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleEdit_rna_properties_get(iter);
    }
}

void ParticleEdit_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleEdit_rna_properties_get(iter);
    }
}

void ParticleEdit_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleEdit_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ParticleEdit_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ParticleEdit_tool_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->brushtype);
}

void ParticleEdit_tool_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ParticleEdit_tool_set;
    fn(ptr, value);
}

int ParticleEdit_select_mode_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (uint64_t(data->selectmode) & 7);
}

void ParticleEdit_select_mode_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->selectmode = std::remove_reference_t<decltype(data->selectmode)>(uint64_t(data->selectmode) & ~uint64_t(7));
    data->selectmode = std::remove_reference_t<decltype(data->selectmode)>(uint64_t(data->selectmode) | uint64_t(value));
}

bool ParticleEdit_use_preserve_length_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ParticleEdit_use_preserve_length_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ParticleEdit_use_preserve_root_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ParticleEdit_use_preserve_root_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool ParticleEdit_use_emitter_deflect_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void ParticleEdit_use_emitter_deflect_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

float ParticleEdit_emitter_distance_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (float)(data->emitterdist);
}

void ParticleEdit_emitter_distance_set(PointerRNA *ptr, float value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->emitterdist = (std::remove_reference_t<decltype(data->emitterdist)>)value;
}

bool ParticleEdit_use_fade_time_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void ParticleEdit_use_fade_time_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool ParticleEdit_use_auto_velocity_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void ParticleEdit_use_auto_velocity_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool ParticleEdit_show_particles_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void ParticleEdit_show_particles_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool ParticleEdit_use_default_interpolate_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void ParticleEdit_use_default_interpolate_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

int ParticleEdit_default_key_count_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->totaddkey);
}

void ParticleEdit_default_key_count_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->totaddkey = (std::remove_reference_t<decltype(data->totaddkey)>)std::clamp(value, 2, 32767);
}

PointerRNA ParticleEdit_brush_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ParticleEdit_brush_get;
    return fn(ptr);
}

int ParticleEdit_display_step_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->draw_step);
}

void ParticleEdit_display_step_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->draw_step = (std::remove_reference_t<decltype(data->draw_step)>)std::clamp(value, 1, 10);
}

int ParticleEdit_fade_frames_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->fade_frames);
}

void ParticleEdit_fade_frames_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->fade_frames = (std::remove_reference_t<decltype(data->fade_frames)>)std::clamp(value, 1, 100);
}

int ParticleEdit_type_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->edittype);
}

void ParticleEdit_type_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->edittype = (std::remove_reference_t<decltype(data->edittype)>)value;
}

bool ParticleEdit_is_editable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ParticleEdit_editable_get;
    return fn(ptr);
}

bool ParticleEdit_is_hair_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ParticleEdit_hair_get;
    return fn(ptr);
}

PointerRNA ParticleEdit_object_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->object);
}

PointerRNA ParticleEdit_shape_object_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->shape_object);
}

void ParticleEdit_shape_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->shape_object = value.data;
}

static PointerRNA ParticleBrush_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ParticleBrush_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleBrush_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleBrush_rna_properties_get(iter);
    }
}

void ParticleBrush_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleBrush_rna_properties_get(iter);
    }
}

void ParticleBrush_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleBrush_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ParticleBrush_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ParticleBrush_size_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->size);
}

void ParticleBrush_size_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->size = (std::remove_reference_t<decltype(data->size)>)std::clamp(value, 1, 32767);
}

float ParticleBrush_strength_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (float)(data->strength);
}

void ParticleBrush_strength_set(PointerRNA *ptr, float value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->strength = (std::remove_reference_t<decltype(data->strength)>)std::clamp(value, 0.0010000000f, 1.0f);
}

int ParticleBrush_count_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->count);
}

void ParticleBrush_count_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->count = (std::remove_reference_t<decltype(data->count)>)std::clamp(value, 1, 1000);
}

int ParticleBrush_steps_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->step);
}

void ParticleBrush_steps_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->step = (std::remove_reference_t<decltype(data->step)>)std::clamp(value, 1, 32767);
}

int ParticleBrush_puff_mode_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->invert);
}

void ParticleBrush_puff_mode_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->invert = (std::remove_reference_t<decltype(data->invert)>)value;
}

bool ParticleBrush_use_puff_volume_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ParticleBrush_use_puff_volume_set(PointerRNA *ptr, bool value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int ParticleBrush_length_mode_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->invert);
}

void ParticleBrush_length_mode_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->invert = (std::remove_reference_t<decltype(data->invert)>)value;
}

PointerRNA ParticleBrush_curve_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ParticleBrush_curve_get;
    return fn(ptr);
}

static PointerRNA GPencilSculptGuide_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GPencilSculptGuide_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GPencilSculptGuide_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilSculptGuide_rna_properties_get(iter);
    }
}

void GPencilSculptGuide_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GPencilSculptGuide_rna_properties_get(iter);
    }
}

void GPencilSculptGuide_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GPencilSculptGuide_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GPencilSculptGuide_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool GPencilSculptGuide_use_guide_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (bool)(data->use_guide);
}

void GPencilSculptGuide_use_guide_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->use_guide = (std::remove_reference_t<decltype(data->use_guide)>)value;
}

bool GPencilSculptGuide_use_snapping_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (bool)(data->use_snapping);
}

void GPencilSculptGuide_use_snapping_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->use_snapping = (std::remove_reference_t<decltype(data->use_snapping)>)value;
}

PointerRNA GPencilSculptGuide_reference_object_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->reference_object);
}

void GPencilSculptGuide_reference_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->reference_object = value.data;
}

int GPencilSculptGuide_reference_point_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (int)(data->reference_point);
}

void GPencilSculptGuide_reference_point_set(PointerRNA *ptr, int value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->reference_point = (std::remove_reference_t<decltype(data->reference_point)>)value;
}

int GPencilSculptGuide_type_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (int)(data->type);
}

void GPencilSculptGuide_type_set(PointerRNA *ptr, int value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

float GPencilSculptGuide_angle_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (float)(data->angle);
}

void GPencilSculptGuide_angle_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->angle = (std::remove_reference_t<decltype(data->angle)>)std::clamp(value, -6.2831854820f, 6.2831854820f);
}

float GPencilSculptGuide_angle_snap_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (float)(data->angle_snap);
}

void GPencilSculptGuide_angle_snap_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->angle_snap = (std::remove_reference_t<decltype(data->angle_snap)>)std::clamp(value, -6.2831854820f, 6.2831854820f);
}

float GPencilSculptGuide_spacing_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (float)(data->spacing);
}

void GPencilSculptGuide_spacing_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->spacing = (std::remove_reference_t<decltype(data->spacing)>)std::clamp(value, 0.0f, FLT_MAX);
}

void GPencilSculptGuide_location_get(PointerRNA *ptr, float values[3])
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->location)[i]);
    }
}

void GPencilSculptGuide_location_set(PointerRNA *ptr, const float values[3])
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->location)[i] = values[i];
    }
}

static PointerRNA GPencilSculptSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GPencilSculptSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GPencilSculptSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilSculptSettings_rna_properties_get(iter);
    }
}

void GPencilSculptSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GPencilSculptSettings_rna_properties_get(iter);
    }
}

void GPencilSculptSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GPencilSculptSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GPencilSculptSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA GPencilSculptSettings_guide_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_GPencilSculptGuide, &data->guide);
}

bool GPencilSculptSettings_use_multiframe_falloff_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void GPencilSculptSettings_use_multiframe_falloff_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool GPencilSculptSettings_use_thickness_curve_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void GPencilSculptSettings_use_thickness_curve_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool GPencilSculptSettings_use_scale_thickness_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void GPencilSculptSettings_use_scale_thickness_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool GPencilSculptSettings_use_automasking_stroke_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void GPencilSculptSettings_use_automasking_stroke_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool GPencilSculptSettings_use_automasking_layer_stroke_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void GPencilSculptSettings_use_automasking_layer_stroke_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool GPencilSculptSettings_use_automasking_material_stroke_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void GPencilSculptSettings_use_automasking_material_stroke_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool GPencilSculptSettings_use_automasking_layer_active_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void GPencilSculptSettings_use_automasking_layer_active_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool GPencilSculptSettings_use_automasking_material_active_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void GPencilSculptSettings_use_automasking_material_active_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

PointerRNA GPencilSculptSettings_multiframe_falloff_curve_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->cur_falloff);
}

PointerRNA GPencilSculptSettings_thickness_primitive_curve_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->cur_primitive);
}

int GPencilSculptSettings_lock_axis_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (int)(data->lock_axis);
}

void GPencilSculptSettings_lock_axis_set(PointerRNA *ptr, int value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    data->lock_axis = (std::remove_reference_t<decltype(data->lock_axis)>)value;
}

float GPencilSculptSettings_intersection_threshold_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (float)(data->isect_threshold);
}

void GPencilSculptSettings_intersection_threshold_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    data->isect_threshold = (std::remove_reference_t<decltype(data->isect_threshold)>)std::clamp(value, 0.0f, 10.0f);
}













bool ImagePaint_detect_data_func(ImagePaintSettings *_self)
{
	return rna_ImaPaint_detect_data(_self);
}

static void ImagePaint_detect_data_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ImagePaintSettings *_self;
	bool ok;
	char *_data, *_retdata;
	
	_self = (ImagePaintSettings *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	ok = rna_ImaPaint_detect_data(_self);
	*((bool *)_retdata) = ok;
}

/* Repeated prototypes to detect errors */

bool rna_ImaPaint_detect_data(ImagePaintSettings *_self);






/* Paint Curve */
StructRNA *RNA_PaintCurve;
void register_struct_PaintCurve(BlenderRNA &brna)
{

	StructRNA *srna = RNA_PaintCurve;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "PaintCurve";
	srna->flag = 519;
	srna->name = "Paint Curve";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 321;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Paint */
static CollectionPropertyRNA rna_Paint_rna_properties_;
PropertyRNA &rna_Paint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Paint_rna_properties_);

static PointerPropertyRNA rna_Paint_rna_type_;
PropertyRNA &rna_Paint_rna_type = reinterpret_cast<PropertyRNA &>(rna_Paint_rna_type_);

static PointerPropertyRNA rna_Paint_brush_;
PropertyRNA &rna_Paint_brush = reinterpret_cast<PropertyRNA &>(rna_Paint_brush_);

static PointerPropertyRNA rna_Paint_brush_asset_reference_;
PropertyRNA &rna_Paint_brush_asset_reference = reinterpret_cast<PropertyRNA &>(rna_Paint_brush_asset_reference_);

static PointerPropertyRNA rna_Paint_palette_;
PropertyRNA &rna_Paint_palette = reinterpret_cast<PropertyRNA &>(rna_Paint_palette_);

static BoolPropertyRNA rna_Paint_show_brush_;
PropertyRNA &rna_Paint_show_brush = reinterpret_cast<PropertyRNA &>(rna_Paint_show_brush_);

static BoolPropertyRNA rna_Paint_show_brush_on_surface_;
PropertyRNA &rna_Paint_show_brush_on_surface = reinterpret_cast<PropertyRNA &>(rna_Paint_show_brush_on_surface_);

static BoolPropertyRNA rna_Paint_show_low_resolution_;
PropertyRNA &rna_Paint_show_low_resolution = reinterpret_cast<PropertyRNA &>(rna_Paint_show_low_resolution_);

static BoolPropertyRNA rna_Paint_use_sculpt_delay_updates_;
PropertyRNA &rna_Paint_use_sculpt_delay_updates = reinterpret_cast<PropertyRNA &>(rna_Paint_use_sculpt_delay_updates_);

static BoolPropertyRNA rna_Paint_show_bvh_nodes_;
PropertyRNA &rna_Paint_show_bvh_nodes = reinterpret_cast<PropertyRNA &>(rna_Paint_show_bvh_nodes_);

static BoolPropertyRNA rna_Paint_use_symmetry_x_;
PropertyRNA &rna_Paint_use_symmetry_x = reinterpret_cast<PropertyRNA &>(rna_Paint_use_symmetry_x_);

static BoolPropertyRNA rna_Paint_use_symmetry_y_;
PropertyRNA &rna_Paint_use_symmetry_y = reinterpret_cast<PropertyRNA &>(rna_Paint_use_symmetry_y_);

static BoolPropertyRNA rna_Paint_use_symmetry_z_;
PropertyRNA &rna_Paint_use_symmetry_z = reinterpret_cast<PropertyRNA &>(rna_Paint_use_symmetry_z_);

static BoolPropertyRNA rna_Paint_use_symmetry_feather_;
PropertyRNA &rna_Paint_use_symmetry_feather = reinterpret_cast<PropertyRNA &>(rna_Paint_use_symmetry_feather_);

static PointerPropertyRNA rna_Paint_cavity_curve_;
PropertyRNA &rna_Paint_cavity_curve = reinterpret_cast<PropertyRNA &>(rna_Paint_cavity_curve_);

static BoolPropertyRNA rna_Paint_use_cavity_;
PropertyRNA &rna_Paint_use_cavity = reinterpret_cast<PropertyRNA &>(rna_Paint_use_cavity_);

static FloatPropertyRNA rna_Paint_tile_offset_;
PropertyRNA &rna_Paint_tile_offset = reinterpret_cast<PropertyRNA &>(rna_Paint_tile_offset_);

static BoolPropertyRNA rna_Paint_tile_x_;
PropertyRNA &rna_Paint_tile_x = reinterpret_cast<PropertyRNA &>(rna_Paint_tile_x_);

static BoolPropertyRNA rna_Paint_tile_y_;
PropertyRNA &rna_Paint_tile_y = reinterpret_cast<PropertyRNA &>(rna_Paint_tile_y_);

static BoolPropertyRNA rna_Paint_tile_z_;
PropertyRNA &rna_Paint_tile_z = reinterpret_cast<PropertyRNA &>(rna_Paint_tile_z_);

static BoolPropertyRNA rna_Paint_show_strength_curve_;
PropertyRNA &rna_Paint_show_strength_curve = reinterpret_cast<PropertyRNA &>(rna_Paint_show_strength_curve_);

static BoolPropertyRNA rna_Paint_show_size_curve_;
PropertyRNA &rna_Paint_show_size_curve = reinterpret_cast<PropertyRNA &>(rna_Paint_show_size_curve_);

static BoolPropertyRNA rna_Paint_show_jitter_curve_;
PropertyRNA &rna_Paint_show_jitter_curve = reinterpret_cast<PropertyRNA &>(rna_Paint_show_jitter_curve_);

static PointerPropertyRNA rna_Paint_unified_paint_settings_;
PropertyRNA &rna_Paint_unified_paint_settings = reinterpret_cast<PropertyRNA &>(rna_Paint_unified_paint_settings_);

static PointerPropertyRNA rna_Paint_mesh_automasking_settings_;
PropertyRNA &rna_Paint_mesh_automasking_settings = reinterpret_cast<PropertyRNA &>(rna_Paint_mesh_automasking_settings_);

StructRNA *RNA_Paint;
void register_struct_Paint(BlenderRNA &brna)
{
	rna_Paint_rna_properties_ = {
		{&rna_Paint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_rna_properties_begin, Paint_rna_properties_next, Paint_rna_properties_end, Paint_rna_properties_get, nullptr, nullptr, Paint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Paint_rna_type_ = {
		{&rna_Paint_brush, 	&rna_Paint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Paint_brush_ = {
		{&rna_Paint_brush_asset_reference, 	&rna_Paint_rna_type,
		-1, "brush", 8388800, 0, 0, 0, 0, PropertyPathTemplateType(0), "Brush",
		"Active brush",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 201326598, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_brush_get, nullptr, nullptr, rna_Paint_brush_poll,RNA_Brush
	};

	rna_Paint_brush_asset_reference_ = {
		{&rna_Paint_palette, 	&rna_Paint_brush,
		-1, "brush_asset_reference", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Brush Asset Reference",
		"A weak reference to the matching brush asset, used e.g. to restore the last used brush on file load",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_brush_asset_reference_get, nullptr, nullptr, nullptr,RNA_AssetWeakReference
	};

	rna_Paint_palette_ = {
		{&rna_Paint_show_brush, 	&rna_Paint_brush_asset_reference,
		-1, "palette", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Palette",
		"Active Palette",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_palette_get, Paint_palette_set, nullptr, nullptr,RNA_Palette
	};

	rna_Paint_show_brush_ = {
		{&rna_Paint_show_brush_on_surface, 	&rna_Paint_palette,
		-1, "show_brush", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Brush",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_show_brush_get, Paint_show_brush_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Paint_show_brush_on_surface_ = {
		{&rna_Paint_show_low_resolution, 	&rna_Paint_show_brush,
		-1, "show_brush_on_surface", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Brush On Surface",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_show_brush_on_surface_get, Paint_show_brush_on_surface_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_show_low_resolution_ = {
		{&rna_Paint_use_sculpt_delay_updates, 	&rna_Paint_show_brush_on_surface,
		-1, "show_low_resolution", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fast Navigate",
		"For multires, show low resolution while navigating the view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_show_low_resolution_get, Paint_show_low_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_use_sculpt_delay_updates_ = {
		{&rna_Paint_show_bvh_nodes, 	&rna_Paint_show_low_resolution,
		-1, "use_sculpt_delay_updates", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Delay Viewport Updates",
		"Update the geometry when it enters the view, providing faster view navigation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_use_sculpt_delay_updates_get, Paint_use_sculpt_delay_updates_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_show_bvh_nodes_ = {
		{&rna_Paint_use_symmetry_x, 	&rna_Paint_use_sculpt_delay_updates,
		-1, "show_bvh_nodes", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show BVH Nodes",
		"Show the underlying BVH nodes as differently colored faces",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Paint_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_show_bvh_nodes_get, Paint_show_bvh_nodes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_use_symmetry_x_ = {
		{&rna_Paint_use_symmetry_y, 	&rna_Paint_show_bvh_nodes,
		-1, "use_symmetry_x", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Symmetry X",
		"Mirror brush across the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_use_symmetry_x_get, Paint_use_symmetry_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_use_symmetry_y_ = {
		{&rna_Paint_use_symmetry_z, 	&rna_Paint_use_symmetry_x,
		-1, "use_symmetry_y", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Symmetry Y",
		"Mirror brush across the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_use_symmetry_y_get, Paint_use_symmetry_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_use_symmetry_z_ = {
		{&rna_Paint_use_symmetry_feather, 	&rna_Paint_use_symmetry_y,
		-1, "use_symmetry_z", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Symmetry Z",
		"Mirror brush across the Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_use_symmetry_z_get, Paint_use_symmetry_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_use_symmetry_feather_ = {
		{&rna_Paint_cavity_curve, 	&rna_Paint_use_symmetry_z,
		-1, "use_symmetry_feather", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Symmetry Feathering",
		"Reduce the strength of the brush where it overlaps symmetrical daubs",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_use_symmetry_feather_get, Paint_use_symmetry_feather_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Paint_cavity_curve_ = {
		{&rna_Paint_use_cavity, 	&rna_Paint_use_symmetry_feather,
		-1, "cavity_curve", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve",
		"Editable cavity curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_cavity_curve_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_Paint_use_cavity_ = {
		{&rna_Paint_tile_offset, 	&rna_Paint_cavity_curve,
		-1, "use_cavity", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cavity Mask",
		"Mask painting according to mesh geometry cavity",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_use_cavity_get, Paint_use_cavity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_Paint_tile_offset_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_Paint_tile_offset_ = {
		{&rna_Paint_tile_x, 	&rna_Paint_use_cavity,
		-1, "tile_offset", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tiling offset for the X Axis",
		"Stride at which tiled strokes are copied",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Paint, tile_offset), RawPropertyType(5), nullptr},
		nullptr, nullptr, Paint_tile_offset_get, Paint_tile_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, FLT_MAX, 100.0f, 2, nullptr, nullptr, 0.0f, rna_Paint_tile_offset_default
	};

	rna_Paint_tile_x_ = {
		{&rna_Paint_tile_y, 	&rna_Paint_tile_offset,
		-1, "tile_x", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tile X",
		"Tile along X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_tile_x_get, Paint_tile_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_tile_y_ = {
		{&rna_Paint_tile_z, 	&rna_Paint_tile_x,
		-1, "tile_y", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tile Y",
		"Tile along Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_tile_y_get, Paint_tile_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_tile_z_ = {
		{&rna_Paint_show_strength_curve, 	&rna_Paint_tile_y,
		-1, "tile_z", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tile Z",
		"Tile along Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_tile_z_get, Paint_tile_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_show_strength_curve_ = {
		{&rna_Paint_show_size_curve, 	&rna_Paint_tile_z,
		-1, "show_strength_curve", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Strength Curve",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_show_strength_curve_get, Paint_show_strength_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_show_size_curve_ = {
		{&rna_Paint_show_jitter_curve, 	&rna_Paint_show_strength_curve,
		-1, "show_size_curve", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Size Curve",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_show_size_curve_get, Paint_show_size_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_show_jitter_curve_ = {
		{&rna_Paint_unified_paint_settings, 	&rna_Paint_show_size_curve,
		-1, "show_jitter_curve", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Jitter Curve",
		nullptr,
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_show_jitter_curve_get, Paint_show_jitter_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Paint_unified_paint_settings_ = {
		{&rna_Paint_mesh_automasking_settings, 	&rna_Paint_show_jitter_curve,
		-1, "unified_paint_settings", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Unified Paint Settings",
		nullptr,
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_unified_paint_settings_get, nullptr, nullptr, nullptr,RNA_UnifiedPaintSettings
	};

	rna_Paint_mesh_automasking_settings_ = {
		{nullptr, 	&rna_Paint_unified_paint_settings,
		-1, "mesh_automasking_settings", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mesh Automasking Settings",
		nullptr,
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Paint_mesh_automasking_settings_get, nullptr, nullptr, nullptr,RNA_MeshAutomaskingSettings
	};

	StructRNA *srna = RNA_Paint;
	srna->cont.properties = {&rna_Paint_rna_properties, &rna_Paint_mesh_automasking_settings};
	srna->identifier = "Paint";
	srna->flag = 516;
	srna->name = "Paint";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Paint_rna_properties;
};

/* Unified Paint Settings */
static CollectionPropertyRNA rna_UnifiedPaintSettings_rna_properties_;
PropertyRNA &rna_UnifiedPaintSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_rna_properties_);

static PointerPropertyRNA rna_UnifiedPaintSettings_rna_type_;
PropertyRNA &rna_UnifiedPaintSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_rna_type_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_size_;
PropertyRNA &rna_UnifiedPaintSettings_use_unified_size = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_unified_size_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_strength_;
PropertyRNA &rna_UnifiedPaintSettings_use_unified_strength = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_unified_strength_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_weight_;
PropertyRNA &rna_UnifiedPaintSettings_use_unified_weight = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_unified_weight_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_color_;
PropertyRNA &rna_UnifiedPaintSettings_use_unified_color = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_unified_color_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_input_samples_;
PropertyRNA &rna_UnifiedPaintSettings_use_unified_input_samples = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_unified_input_samples_);

static IntPropertyRNA rna_UnifiedPaintSettings_size_;
PropertyRNA &rna_UnifiedPaintSettings_size = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_size_);

static FloatPropertyRNA rna_UnifiedPaintSettings_unprojected_size_;
PropertyRNA &rna_UnifiedPaintSettings_unprojected_size = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_unprojected_size_);

static FloatPropertyRNA rna_UnifiedPaintSettings_strength_;
PropertyRNA &rna_UnifiedPaintSettings_strength = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_strength_);

static FloatPropertyRNA rna_UnifiedPaintSettings_weight_;
PropertyRNA &rna_UnifiedPaintSettings_weight = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_weight_);

static FloatPropertyRNA rna_UnifiedPaintSettings_color_;
PropertyRNA &rna_UnifiedPaintSettings_color = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_color_);

static FloatPropertyRNA rna_UnifiedPaintSettings_secondary_color_;
PropertyRNA &rna_UnifiedPaintSettings_secondary_color = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_secondary_color_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_color_jitter_;
PropertyRNA &rna_UnifiedPaintSettings_use_color_jitter = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_color_jitter_);

static FloatPropertyRNA rna_UnifiedPaintSettings_hue_jitter_;
PropertyRNA &rna_UnifiedPaintSettings_hue_jitter = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_hue_jitter_);

static FloatPropertyRNA rna_UnifiedPaintSettings_saturation_jitter_;
PropertyRNA &rna_UnifiedPaintSettings_saturation_jitter = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_saturation_jitter_);

static FloatPropertyRNA rna_UnifiedPaintSettings_value_jitter_;
PropertyRNA &rna_UnifiedPaintSettings_value_jitter = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_value_jitter_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_stroke_random_hue_;
PropertyRNA &rna_UnifiedPaintSettings_use_stroke_random_hue = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_stroke_random_hue_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_stroke_random_sat_;
PropertyRNA &rna_UnifiedPaintSettings_use_stroke_random_sat = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_stroke_random_sat_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_stroke_random_val_;
PropertyRNA &rna_UnifiedPaintSettings_use_stroke_random_val = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_stroke_random_val_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_random_press_hue_;
PropertyRNA &rna_UnifiedPaintSettings_use_random_press_hue = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_random_press_hue_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_random_press_sat_;
PropertyRNA &rna_UnifiedPaintSettings_use_random_press_sat = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_random_press_sat_);

static BoolPropertyRNA rna_UnifiedPaintSettings_use_random_press_val_;
PropertyRNA &rna_UnifiedPaintSettings_use_random_press_val = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_random_press_val_);

static IntPropertyRNA rna_UnifiedPaintSettings_input_samples_;
PropertyRNA &rna_UnifiedPaintSettings_input_samples = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_input_samples_);

static EnumPropertyRNA rna_UnifiedPaintSettings_use_locked_size_;
PropertyRNA &rna_UnifiedPaintSettings_use_locked_size = reinterpret_cast<PropertyRNA &>(rna_UnifiedPaintSettings_use_locked_size_);

StructRNA *RNA_UnifiedPaintSettings;
void register_struct_UnifiedPaintSettings(BlenderRNA &brna)
{
	rna_UnifiedPaintSettings_rna_properties_ = {
		{&rna_UnifiedPaintSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_rna_properties_begin, UnifiedPaintSettings_rna_properties_next, UnifiedPaintSettings_rna_properties_end, UnifiedPaintSettings_rna_properties_get, nullptr, nullptr, UnifiedPaintSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UnifiedPaintSettings_rna_type_ = {
		{&rna_UnifiedPaintSettings_use_unified_size, 	&rna_UnifiedPaintSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_UnifiedPaintSettings_use_unified_size_ = {
		{&rna_UnifiedPaintSettings_use_unified_strength, 	&rna_UnifiedPaintSettings_rna_type,
		-1, "use_unified_size", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Unified Size",
		"Instead of per-brush size, the size is shared across brushes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_unified_size_get, UnifiedPaintSettings_use_unified_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_UnifiedPaintSettings_use_unified_strength_ = {
		{&rna_UnifiedPaintSettings_use_unified_weight, 	&rna_UnifiedPaintSettings_use_unified_size,
		-1, "use_unified_strength", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Unified Strength",
		"Instead of per-brush strength, the strength is shared across brushes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_unified_strength_get, UnifiedPaintSettings_use_unified_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UnifiedPaintSettings_use_unified_weight_ = {
		{&rna_UnifiedPaintSettings_use_unified_color, 	&rna_UnifiedPaintSettings_use_unified_strength,
		-1, "use_unified_weight", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Unified Weight",
		"Instead of per-brush weight, the weight is shared across brushes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_unified_weight_get, UnifiedPaintSettings_use_unified_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UnifiedPaintSettings_use_unified_color_ = {
		{&rna_UnifiedPaintSettings_use_unified_input_samples, 	&rna_UnifiedPaintSettings_use_unified_weight,
		-1, "use_unified_color", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Unified Color",
		"Instead of per-brush color, the color is shared across brushes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_unified_color_get, UnifiedPaintSettings_use_unified_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_UnifiedPaintSettings_use_unified_input_samples_ = {
		{&rna_UnifiedPaintSettings_size, 	&rna_UnifiedPaintSettings_use_unified_color,
		-1, "use_unified_input_samples", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Unified Input Samples",
		"Instead of per-brush input samples, the value is shared across brushes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_unified_input_samples_get, UnifiedPaintSettings_use_unified_input_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UnifiedPaintSettings_size_ = {
		{&rna_UnifiedPaintSettings_unprojected_size, 	&rna_UnifiedPaintSettings_use_unified_input_samples,
		-1, "size", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Size",
		"Diameter of the brush",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL_DIAMETER) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_size_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_size_get, UnifiedPaintSettings_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 1000, 1, 10000, 1, nullptr, nullptr, 100, nullptr
	};

	rna_UnifiedPaintSettings_unprojected_size_ = {
		{&rna_UnifiedPaintSettings_strength, 	&rna_UnifiedPaintSettings_size,
		-1, "unprojected_size", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Unprojected Size",
		"Diameter of brush in Blender units",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE_DIAMETER) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_size_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_unprojected_size_get, UnifiedPaintSettings_unprojected_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, FLT_MAX, 1.0f, -1, nullptr, nullptr, 0.5799999833f, nullptr
	};

	rna_UnifiedPaintSettings_strength_ = {
		{&rna_UnifiedPaintSettings_weight, 	&rna_UnifiedPaintSettings_unprojected_size,
		-1, "strength", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"How powerful the effect of the brush is when applied",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UnifiedPaintSettings, alpha), RawPropertyType(5), nullptr},
		UnifiedPaintSettings_strength_get, UnifiedPaintSettings_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 0.0010000000f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_UnifiedPaintSettings_weight_ = {
		{&rna_UnifiedPaintSettings_color, 	&rna_UnifiedPaintSettings_strength,
		-1, "weight", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Weight to assign in vertex groups",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UnifiedPaintSettings, weight), RawPropertyType(5), nullptr},
		UnifiedPaintSettings_weight_get, UnifiedPaintSettings_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	static float rna_UnifiedPaintSettings_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_UnifiedPaintSettings_color_ = {
		{&rna_UnifiedPaintSettings_secondary_color, 	&rna_UnifiedPaintSettings_weight,
		-1, "color", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_color_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UnifiedPaintSettings, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, UnifiedPaintSettings_color_get, UnifiedPaintSettings_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_UnifiedPaintSettings_color_default
	};

	static float rna_UnifiedPaintSettings_secondary_color_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_UnifiedPaintSettings_secondary_color_ = {
		{&rna_UnifiedPaintSettings_use_color_jitter, 	&rna_UnifiedPaintSettings_color,
		-1, "secondary_color", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Secondary Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_color_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UnifiedPaintSettings, secondary_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, UnifiedPaintSettings_secondary_color_get, UnifiedPaintSettings_secondary_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_UnifiedPaintSettings_secondary_color_default
	};

	rna_UnifiedPaintSettings_use_color_jitter_ = {
		{&rna_UnifiedPaintSettings_hue_jitter, 	&rna_UnifiedPaintSettings_secondary_color,
		-1, "use_color_jitter", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Color Jitter",
		"Jitter brush color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_color_jitter_get, UnifiedPaintSettings_use_color_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UnifiedPaintSettings_hue_jitter_ = {
		{&rna_UnifiedPaintSettings_saturation_jitter, 	&rna_UnifiedPaintSettings_use_color_jitter,
		-1, "hue_jitter", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Hue Jitter",
		"Color jitter effect on hue",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UnifiedPaintSettings, hsv_jitter[0]), RawPropertyType(5), nullptr},
		UnifiedPaintSettings_hue_jitter_get, UnifiedPaintSettings_hue_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_UnifiedPaintSettings_saturation_jitter_ = {
		{&rna_UnifiedPaintSettings_value_jitter, 	&rna_UnifiedPaintSettings_hue_jitter,
		-1, "saturation_jitter", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation Jitter",
		"Color jitter effect on saturation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UnifiedPaintSettings, hsv_jitter[1]), RawPropertyType(5), nullptr},
		UnifiedPaintSettings_saturation_jitter_get, UnifiedPaintSettings_saturation_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_UnifiedPaintSettings_value_jitter_ = {
		{&rna_UnifiedPaintSettings_use_stroke_random_hue, 	&rna_UnifiedPaintSettings_saturation_jitter,
		-1, "value_jitter", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Value Jitter",
		"Color jitter effect on value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UnifiedPaintSettings, hsv_jitter[2]), RawPropertyType(5), nullptr},
		UnifiedPaintSettings_value_jitter_get, UnifiedPaintSettings_value_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_UnifiedPaintSettings_use_stroke_random_hue_ = {
		{&rna_UnifiedPaintSettings_use_stroke_random_sat, 	&rna_UnifiedPaintSettings_value_jitter,
		-1, "use_stroke_random_hue", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_stroke_random_hue_get, UnifiedPaintSettings_use_stroke_random_hue_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UnifiedPaintSettings_use_stroke_random_sat_ = {
		{&rna_UnifiedPaintSettings_use_stroke_random_val, 	&rna_UnifiedPaintSettings_use_stroke_random_hue,
		-1, "use_stroke_random_sat", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_stroke_random_sat_get, UnifiedPaintSettings_use_stroke_random_sat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UnifiedPaintSettings_use_stroke_random_val_ = {
		{&rna_UnifiedPaintSettings_use_random_press_hue, 	&rna_UnifiedPaintSettings_use_stroke_random_sat,
		-1, "use_stroke_random_val", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stroke Random",
		"Use randomness at stroke level",
		298, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_stroke_random_val_get, UnifiedPaintSettings_use_stroke_random_val_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UnifiedPaintSettings_use_random_press_hue_ = {
		{&rna_UnifiedPaintSettings_use_random_press_sat, 	&rna_UnifiedPaintSettings_use_stroke_random_val,
		-1, "use_random_press_hue", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_random_press_hue_get, UnifiedPaintSettings_use_random_press_hue_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UnifiedPaintSettings_use_random_press_sat_ = {
		{&rna_UnifiedPaintSettings_use_random_press_val, 	&rna_UnifiedPaintSettings_use_random_press_hue,
		-1, "use_random_press_sat", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_random_press_sat_get, UnifiedPaintSettings_use_random_press_sat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UnifiedPaintSettings_use_random_press_val_ = {
		{&rna_UnifiedPaintSettings_input_samples, 	&rna_UnifiedPaintSettings_use_random_press_sat,
		-1, "use_random_press_val", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Use pressure to modulate randomness",
		99, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnifiedPaintSettings_use_random_press_val_get, UnifiedPaintSettings_use_random_press_val_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_UnifiedPaintSettings_input_samples_ = {
		{&rna_UnifiedPaintSettings_use_locked_size, 	&rna_UnifiedPaintSettings_use_random_press_val,
		-1, "input_samples", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Input Samples",
		"Number of input samples to average together to smooth the brush stroke",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UnifiedPaintSettings, input_samples), RawPropertyType(0), nullptr},
		UnifiedPaintSettings_input_samples_get, UnifiedPaintSettings_input_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 64, 1, 64, 1, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_UnifiedPaintSettings_use_locked_size_items[3] = {
		{0, "VIEW", 0, "View", "Measure brush size relative to the view"	},
		{4, "SCENE", 0, "Scene", "Measure brush size relative to the scene"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_UnifiedPaintSettings_use_locked_size_ = {
		{nullptr, 	&rna_UnifiedPaintSettings_input_samples,
		-1, "use_locked_size", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size Unit",
		"Measure brush size relative to the view or the scene",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_UnifiedPaintSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UnifiedPaintSettings, flag), RawPropertyType(0), nullptr},
		UnifiedPaintSettings_use_locked_size_get, UnifiedPaintSettings_use_locked_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_UnifiedPaintSettings_use_locked_size_items, 2, 0
	};

	StructRNA *srna = RNA_UnifiedPaintSettings;
	srna->cont.properties = {&rna_UnifiedPaintSettings_rna_properties, &rna_UnifiedPaintSettings_use_locked_size};
	srna->identifier = "UnifiedPaintSettings";
	srna->flag = 512;
	srna->name = "Unified Paint Settings";
	srna->description = "Overrides for some of the active brush\'s settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UnifiedPaintSettings_rna_properties;
	srna->path = rna_UnifiedPaintSettings_path;
};

/* Automasking Settings */
static CollectionPropertyRNA rna_MeshAutomaskingSettings_rna_properties_;
PropertyRNA &rna_MeshAutomaskingSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_rna_properties_);

static PointerPropertyRNA rna_MeshAutomaskingSettings_rna_type_;
PropertyRNA &rna_MeshAutomaskingSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_rna_type_);

static BoolPropertyRNA rna_MeshAutomaskingSettings_use_automasking_topology_;
PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_topology = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_use_automasking_topology_);

static BoolPropertyRNA rna_MeshAutomaskingSettings_use_automasking_face_sets_;
PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_face_sets = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_use_automasking_face_sets_);

static BoolPropertyRNA rna_MeshAutomaskingSettings_use_automasking_boundary_edges_;
PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_boundary_edges = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_use_automasking_boundary_edges_);

static BoolPropertyRNA rna_MeshAutomaskingSettings_use_automasking_boundary_face_sets_;
PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_boundary_face_sets = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_use_automasking_boundary_face_sets_);

static BoolPropertyRNA rna_MeshAutomaskingSettings_use_automasking_cavity_;
PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_cavity = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_use_automasking_cavity_);

static BoolPropertyRNA rna_MeshAutomaskingSettings_use_automasking_cavity_inverted_;
PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_cavity_inverted = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_use_automasking_cavity_inverted_);

static BoolPropertyRNA rna_MeshAutomaskingSettings_use_automasking_custom_cavity_curve_;
PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_custom_cavity_curve = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_use_automasking_custom_cavity_curve_);

static BoolPropertyRNA rna_MeshAutomaskingSettings_use_automasking_start_normal_;
PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_start_normal = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_use_automasking_start_normal_);

static BoolPropertyRNA rna_MeshAutomaskingSettings_use_automasking_view_normal_;
PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_view_normal = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_use_automasking_view_normal_);

static BoolPropertyRNA rna_MeshAutomaskingSettings_use_automasking_view_occlusion_;
PropertyRNA &rna_MeshAutomaskingSettings_use_automasking_view_occlusion = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_use_automasking_view_occlusion_);

static IntPropertyRNA rna_MeshAutomaskingSettings_boundary_edges_propagation_steps_;
PropertyRNA &rna_MeshAutomaskingSettings_boundary_edges_propagation_steps = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_boundary_edges_propagation_steps_);

static FloatPropertyRNA rna_MeshAutomaskingSettings_cavity_factor_;
PropertyRNA &rna_MeshAutomaskingSettings_cavity_factor = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_cavity_factor_);

static IntPropertyRNA rna_MeshAutomaskingSettings_cavity_blur_steps_;
PropertyRNA &rna_MeshAutomaskingSettings_cavity_blur_steps = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_cavity_blur_steps_);

static PointerPropertyRNA rna_MeshAutomaskingSettings_cavity_curve_;
PropertyRNA &rna_MeshAutomaskingSettings_cavity_curve = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_cavity_curve_);

static PointerPropertyRNA rna_MeshAutomaskingSettings_cavity_curve_op_;
PropertyRNA &rna_MeshAutomaskingSettings_cavity_curve_op = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_cavity_curve_op_);

static FloatPropertyRNA rna_MeshAutomaskingSettings_start_normal_limit_;
PropertyRNA &rna_MeshAutomaskingSettings_start_normal_limit = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_start_normal_limit_);

static FloatPropertyRNA rna_MeshAutomaskingSettings_start_normal_falloff_;
PropertyRNA &rna_MeshAutomaskingSettings_start_normal_falloff = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_start_normal_falloff_);

static FloatPropertyRNA rna_MeshAutomaskingSettings_view_normal_limit_;
PropertyRNA &rna_MeshAutomaskingSettings_view_normal_limit = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_view_normal_limit_);

static FloatPropertyRNA rna_MeshAutomaskingSettings_view_normal_falloff_;
PropertyRNA &rna_MeshAutomaskingSettings_view_normal_falloff = reinterpret_cast<PropertyRNA &>(rna_MeshAutomaskingSettings_view_normal_falloff_);

StructRNA *RNA_MeshAutomaskingSettings;
void register_struct_MeshAutomaskingSettings(BlenderRNA &brna)
{
	rna_MeshAutomaskingSettings_rna_properties_ = {
		{&rna_MeshAutomaskingSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_rna_properties_begin, MeshAutomaskingSettings_rna_properties_next, MeshAutomaskingSettings_rna_properties_end, MeshAutomaskingSettings_rna_properties_get, nullptr, nullptr, MeshAutomaskingSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshAutomaskingSettings_rna_type_ = {
		{&rna_MeshAutomaskingSettings_use_automasking_topology, 	&rna_MeshAutomaskingSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MeshAutomaskingSettings_use_automasking_topology_ = {
		{&rna_MeshAutomaskingSettings_use_automasking_face_sets, 	&rna_MeshAutomaskingSettings_rna_type,
		-1, "use_automasking_topology", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Topology",
		"Affect only vertices connected to the active vertex under the brush",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_use_automasking_topology_get, MeshAutomaskingSettings_use_automasking_topology_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_use_automasking_face_sets_ = {
		{&rna_MeshAutomaskingSettings_use_automasking_boundary_edges, 	&rna_MeshAutomaskingSettings_use_automasking_topology,
		-1, "use_automasking_face_sets", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Face Sets",
		"Affect only vertices that share face sets with the active vertex",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_use_automasking_face_sets_get, MeshAutomaskingSettings_use_automasking_face_sets_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_use_automasking_boundary_edges_ = {
		{&rna_MeshAutomaskingSettings_use_automasking_boundary_face_sets, 	&rna_MeshAutomaskingSettings_use_automasking_face_sets,
		-1, "use_automasking_boundary_edges", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mesh Boundary Auto-Masking",
		"Do not affect non manifold boundary edges",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_use_automasking_boundary_edges_get, MeshAutomaskingSettings_use_automasking_boundary_edges_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_use_automasking_boundary_face_sets_ = {
		{&rna_MeshAutomaskingSettings_use_automasking_cavity, 	&rna_MeshAutomaskingSettings_use_automasking_boundary_edges,
		-1, "use_automasking_boundary_face_sets", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Face Sets Boundary Automasking",
		"Do not affect vertices that belong to a face set boundary",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_use_automasking_boundary_face_sets_get, MeshAutomaskingSettings_use_automasking_boundary_face_sets_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_use_automasking_cavity_ = {
		{&rna_MeshAutomaskingSettings_use_automasking_cavity_inverted, 	&rna_MeshAutomaskingSettings_use_automasking_boundary_face_sets,
		-1, "use_automasking_cavity", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cavity Mask",
		"Do not affect vertices on peaks, based on the surface curvature",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_use_automasking_cavity_get, MeshAutomaskingSettings_use_automasking_cavity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_use_automasking_cavity_inverted_ = {
		{&rna_MeshAutomaskingSettings_use_automasking_custom_cavity_curve, 	&rna_MeshAutomaskingSettings_use_automasking_cavity,
		-1, "use_automasking_cavity_inverted", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inverted Cavity Mask",
		"Do not affect vertices within crevices, based on the surface curvature",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_use_automasking_cavity_inverted_get, MeshAutomaskingSettings_use_automasking_cavity_inverted_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_use_automasking_custom_cavity_curve_ = {
		{&rna_MeshAutomaskingSettings_use_automasking_start_normal, 	&rna_MeshAutomaskingSettings_use_automasking_cavity_inverted,
		-1, "use_automasking_custom_cavity_curve", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Custom Cavity Curve",
		"Use custom curve",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_use_automasking_custom_cavity_curve_get, MeshAutomaskingSettings_use_automasking_custom_cavity_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_use_automasking_start_normal_ = {
		{&rna_MeshAutomaskingSettings_use_automasking_view_normal, 	&rna_MeshAutomaskingSettings_use_automasking_custom_cavity_curve,
		-1, "use_automasking_start_normal", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Area Normal",
		"Affect only vertices with a similar normal to where the stroke starts",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_use_automasking_start_normal_get, MeshAutomaskingSettings_use_automasking_start_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_use_automasking_view_normal_ = {
		{&rna_MeshAutomaskingSettings_use_automasking_view_occlusion, 	&rna_MeshAutomaskingSettings_use_automasking_start_normal,
		-1, "use_automasking_view_normal", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "View Normal",
		"Affect only vertices with a normal that faces the viewer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_use_automasking_view_normal_get, MeshAutomaskingSettings_use_automasking_view_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_use_automasking_view_occlusion_ = {
		{&rna_MeshAutomaskingSettings_boundary_edges_propagation_steps, 	&rna_MeshAutomaskingSettings_use_automasking_view_normal,
		-1, "use_automasking_view_occlusion", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Occlusion",
		"Only affect vertices that are not occluded by other faces (slower performance)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_use_automasking_view_occlusion_get, MeshAutomaskingSettings_use_automasking_view_occlusion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_boundary_edges_propagation_steps_ = {
		{&rna_MeshAutomaskingSettings_cavity_factor, 	&rna_MeshAutomaskingSettings_use_automasking_view_occlusion,
		-1, "boundary_edges_propagation_steps", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Propagation Steps",
		"Distance where boundary edge automasking is going to protect vertices from the fully masked edge",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MeshAutomaskingSettings, boundary_edges_propagation_steps), RawPropertyType(0), nullptr},
		MeshAutomaskingSettings_boundary_edges_propagation_steps_get, MeshAutomaskingSettings_boundary_edges_propagation_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 20, 1, 20, 1, nullptr, nullptr, 1, nullptr
	};

	rna_MeshAutomaskingSettings_cavity_factor_ = {
		{&rna_MeshAutomaskingSettings_cavity_blur_steps, 	&rna_MeshAutomaskingSettings_boundary_edges_propagation_steps,
		-1, "cavity_factor", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Cavity Factor",
		"The contrast of the cavity mask",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MeshAutomaskingSettings, cavity_factor), RawPropertyType(5), nullptr},
		MeshAutomaskingSettings_cavity_factor_get, MeshAutomaskingSettings_cavity_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 5.0f, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MeshAutomaskingSettings_cavity_blur_steps_ = {
		{&rna_MeshAutomaskingSettings_cavity_curve, 	&rna_MeshAutomaskingSettings_cavity_factor,
		-1, "cavity_blur_steps", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blur Steps",
		"The number of times the cavity mask is blurred",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MeshAutomaskingSettings, cavity_blur_steps), RawPropertyType(0), nullptr},
		MeshAutomaskingSettings_cavity_blur_steps_get, MeshAutomaskingSettings_cavity_blur_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10, 0, 25, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MeshAutomaskingSettings_cavity_curve_ = {
		{&rna_MeshAutomaskingSettings_cavity_curve_op, 	&rna_MeshAutomaskingSettings_cavity_blur_steps,
		-1, "cavity_curve", 12582912, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cavity Curve",
		"Curve used for the sensitivity",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_cavity_curve_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_MeshAutomaskingSettings_cavity_curve_op_ = {
		{&rna_MeshAutomaskingSettings_start_normal_limit, 	&rna_MeshAutomaskingSettings_cavity_curve,
		-1, "cavity_curve_op", 12582912, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cavity Curve",
		"Curve used for the sensitivity",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshAutomaskingSettings_cavity_curve_op_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_MeshAutomaskingSettings_start_normal_limit_ = {
		{&rna_MeshAutomaskingSettings_start_normal_falloff, 	&rna_MeshAutomaskingSettings_cavity_curve_op,
		-1, "start_normal_limit", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Area Normal Limit",
		"The range of angles that will be affected",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MeshAutomaskingSettings, start_normal_limit), RawPropertyType(5), nullptr},
		MeshAutomaskingSettings_start_normal_limit_get, MeshAutomaskingSettings_start_normal_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 3.1415927410f, 0.0001000000f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 0.3490658402f, nullptr
	};

	rna_MeshAutomaskingSettings_start_normal_falloff_ = {
		{&rna_MeshAutomaskingSettings_view_normal_limit, 	&rna_MeshAutomaskingSettings_start_normal_limit,
		-1, "start_normal_falloff", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Area Normal Falloff",
		"Extend the angular range with a falloff gradient",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MeshAutomaskingSettings, start_normal_falloff), RawPropertyType(5), nullptr},
		MeshAutomaskingSettings_start_normal_falloff_get, MeshAutomaskingSettings_start_normal_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1.0f, 0.0001000000f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.2500000000f, nullptr
	};

	rna_MeshAutomaskingSettings_view_normal_limit_ = {
		{&rna_MeshAutomaskingSettings_view_normal_falloff, 	&rna_MeshAutomaskingSettings_start_normal_falloff,
		-1, "view_normal_limit", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "View Normal Limit",
		"The range of angles that will be affected",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MeshAutomaskingSettings, view_normal_limit), RawPropertyType(5), nullptr},
		MeshAutomaskingSettings_view_normal_limit_get, MeshAutomaskingSettings_view_normal_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 3.1415927410f, 0.0001000000f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 1.5707960129f, nullptr
	};

	rna_MeshAutomaskingSettings_view_normal_falloff_ = {
		{nullptr, 	&rna_MeshAutomaskingSettings_view_normal_limit,
		-1, "view_normal_falloff", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "View Normal Falloff",
		"Extend the angular range with a falloff gradient",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_MeshAutomaskingSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MeshAutomaskingSettings, view_normal_falloff), RawPropertyType(5), nullptr},
		MeshAutomaskingSettings_view_normal_falloff_get, MeshAutomaskingSettings_view_normal_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1.0f, 0.0001000000f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.2500000000f, nullptr
	};

	StructRNA *srna = RNA_MeshAutomaskingSettings;
	srna->cont.properties = {&rna_MeshAutomaskingSettings_rna_properties, &rna_MeshAutomaskingSettings_view_normal_falloff};
	srna->identifier = "MeshAutomaskingSettings";
	srna->flag = 512;
	srna->name = "Automasking Settings";
	srna->description = "Automasking settings for mesh painting & sculpting.";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MeshAutomaskingSettings_rna_properties;
	srna->path = rna_MeshAutomaskingSettings_path;
};

/* Sculpt */
static BoolPropertyRNA rna_Sculpt_lock_x_;
PropertyRNA &rna_Sculpt_lock_x = reinterpret_cast<PropertyRNA &>(rna_Sculpt_lock_x_);

static BoolPropertyRNA rna_Sculpt_lock_y_;
PropertyRNA &rna_Sculpt_lock_y = reinterpret_cast<PropertyRNA &>(rna_Sculpt_lock_y_);

static BoolPropertyRNA rna_Sculpt_lock_z_;
PropertyRNA &rna_Sculpt_lock_z = reinterpret_cast<PropertyRNA &>(rna_Sculpt_lock_z_);

static BoolPropertyRNA rna_Sculpt_use_deform_only_;
PropertyRNA &rna_Sculpt_use_deform_only = reinterpret_cast<PropertyRNA &>(rna_Sculpt_use_deform_only_);

static FloatPropertyRNA rna_Sculpt_detail_size_;
PropertyRNA &rna_Sculpt_detail_size = reinterpret_cast<PropertyRNA &>(rna_Sculpt_detail_size_);

static FloatPropertyRNA rna_Sculpt_detail_percent_;
PropertyRNA &rna_Sculpt_detail_percent = reinterpret_cast<PropertyRNA &>(rna_Sculpt_detail_percent_);

static FloatPropertyRNA rna_Sculpt_constant_detail_resolution_;
PropertyRNA &rna_Sculpt_constant_detail_resolution = reinterpret_cast<PropertyRNA &>(rna_Sculpt_constant_detail_resolution_);

static EnumPropertyRNA rna_Sculpt_symmetrize_direction_;
PropertyRNA &rna_Sculpt_symmetrize_direction = reinterpret_cast<PropertyRNA &>(rna_Sculpt_symmetrize_direction_);

static EnumPropertyRNA rna_Sculpt_detail_refine_method_;
PropertyRNA &rna_Sculpt_detail_refine_method = reinterpret_cast<PropertyRNA &>(rna_Sculpt_detail_refine_method_);

static EnumPropertyRNA rna_Sculpt_detail_type_method_;
PropertyRNA &rna_Sculpt_detail_type_method = reinterpret_cast<PropertyRNA &>(rna_Sculpt_detail_type_method_);

static FloatPropertyRNA rna_Sculpt_gravity_;
PropertyRNA &rna_Sculpt_gravity = reinterpret_cast<PropertyRNA &>(rna_Sculpt_gravity_);

static EnumPropertyRNA rna_Sculpt_transform_mode_;
PropertyRNA &rna_Sculpt_transform_mode = reinterpret_cast<PropertyRNA &>(rna_Sculpt_transform_mode_);

static PointerPropertyRNA rna_Sculpt_gravity_object_;
PropertyRNA &rna_Sculpt_gravity_object = reinterpret_cast<PropertyRNA &>(rna_Sculpt_gravity_object_);

StructRNA *RNA_Sculpt;
void register_struct_Sculpt(BlenderRNA &brna)
{
	rna_Sculpt_lock_x_ = {
		{&rna_Sculpt_lock_y, 	nullptr,
		-1, "lock_x", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock X",
		"Disallow changes to the X axis of vertices",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Sculpt_lock_x_get, Sculpt_lock_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Sculpt_lock_y_ = {
		{&rna_Sculpt_lock_z, 	&rna_Sculpt_lock_x,
		-1, "lock_y", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock Y",
		"Disallow changes to the Y axis of vertices",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Sculpt_lock_y_get, Sculpt_lock_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Sculpt_lock_z_ = {
		{&rna_Sculpt_use_deform_only, 	&rna_Sculpt_lock_y,
		-1, "lock_z", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock Z",
		"Disallow changes to the Z axis of vertices",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Sculpt_lock_z_get, Sculpt_lock_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Sculpt_use_deform_only_ = {
		{&rna_Sculpt_detail_size, 	&rna_Sculpt_lock_z,
		-1, "use_deform_only", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Deform Only",
		"Use only deformation modifiers (temporary disable all constructive modifiers except multi-resolution)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Sculpt_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Sculpt_use_deform_only_get, Sculpt_use_deform_only_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Sculpt_detail_size_ = {
		{&rna_Sculpt_detail_percent, 	&rna_Sculpt_use_deform_only,
		-1, "detail_size", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Detail Size",
		"Maximum edge length for dynamic topology sculpting (in pixels)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Sculpt, detail_size), RawPropertyType(5), nullptr},
		Sculpt_detail_size_get, Sculpt_detail_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_CUBIC, 0.5000000000f, 40.0f, 0.5000000000f, 40.0f, 0.1000000015f, 2, nullptr, nullptr, 12.0f, nullptr
	};

	rna_Sculpt_detail_percent_ = {
		{&rna_Sculpt_constant_detail_resolution, 	&rna_Sculpt_detail_size,
		-1, "detail_percent", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Detail Percentage",
		"Maximum edge length for dynamic topology sculpting (in brush percentage)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Sculpt, detail_percent), RawPropertyType(5), nullptr},
		Sculpt_detail_percent_get, Sculpt_detail_percent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.5000000000f, 100.0f, 0.5000000000f, 100.0f, 10.0f, 2, nullptr, nullptr, 25.0f, nullptr
	};

	rna_Sculpt_constant_detail_resolution_ = {
		{&rna_Sculpt_symmetrize_direction, 	&rna_Sculpt_detail_percent,
		-1, "constant_detail_resolution", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution",
		"Maximum edge length for dynamic topology sculpting (as divisor of Blender unit - higher value means smaller edge length)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Sculpt, constant_detail), RawPropertyType(5), nullptr},
		Sculpt_constant_detail_resolution_get, Sculpt_constant_detail_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1000.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, nullptr, nullptr, 3.0f, nullptr
	};

	rna_Sculpt_symmetrize_direction_ = {
		{&rna_Sculpt_detail_refine_method, 	&rna_Sculpt_constant_detail_resolution,
		-1, "symmetrize_direction", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Direction",
		"Source and destination for symmetrize operator",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Sculpt, symmetrize_direction), RawPropertyType(0), nullptr},
		Sculpt_symmetrize_direction_get, Sculpt_symmetrize_direction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_symmetrize_direction_items, 6, 0
	};

	static const EnumPropertyItem rna_Sculpt_detail_refine_method_items[4] = {
		{4096, "SUBDIVIDE", 0, "Subdivide Edges", "Subdivide long edges to add mesh detail where needed"	},
		{2048, "COLLAPSE", 0, "Collapse Edges", "Collapse short edges to remove mesh detail where possible"	},
		{6144, "SUBDIVIDE_COLLAPSE", 0, "Subdivide Collapse", "Both subdivide long edges and collapse short edges to refine mesh detail"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Sculpt_detail_refine_method_ = {
		{&rna_Sculpt_detail_type_method, 	&rna_Sculpt_symmetrize_direction,
		-1, "detail_refine_method", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Detail Refine Method",
		"In dynamic-topology mode, how to add or remove mesh detail",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Sculpt, flags), RawPropertyType(0), nullptr},
		Sculpt_detail_refine_method_get, Sculpt_detail_refine_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Sculpt_detail_refine_method_items, 3, 6144
	};

	static const EnumPropertyItem rna_Sculpt_detail_type_method_items[5] = {
		{0, "RELATIVE", 0, "Relative Detail", "Mesh detail is relative to the brush size and detail size"	},
		{8192, "CONSTANT", 0, "Constant Detail", "Mesh detail is constant in world space according to detail size"	},
		{16384, "BRUSH", 0, "Brush Detail", "Mesh detail is relative to brush size"	},
		{65536, "MANUAL", 0, "Manual Detail", "Mesh detail does not change on each stroke, only when using Flood Fill"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Sculpt_detail_type_method_ = {
		{&rna_Sculpt_gravity, 	&rna_Sculpt_detail_refine_method,
		-1, "detail_type_method", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Detail Type Method",
		"In dynamic-topology mode, how mesh detail size is calculated",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Sculpt, flags), RawPropertyType(0), nullptr},
		Sculpt_detail_type_method_get, Sculpt_detail_type_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Sculpt_detail_type_method_items, 4, 0
	};

	rna_Sculpt_gravity_ = {
		{&rna_Sculpt_transform_mode, 	&rna_Sculpt_detail_type_method,
		-1, "gravity", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gravity",
		"Amount of gravity after each dab",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Sculpt, gravity_factor), RawPropertyType(5), nullptr},
		Sculpt_gravity_get, Sculpt_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_Sculpt_transform_mode_items[3] = {
		{0, "ALL_VERTICES", 0, "All Vertices", "Applies the transformation to all vertices in the mesh"	},
		{1, "RADIUS_ELASTIC", 0, "Elastic", "Applies the transformation simulating elasticity using the radius of the cursor"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Sculpt_transform_mode_ = {
		{&rna_Sculpt_gravity_object, 	&rna_Sculpt_gravity,
		-1, "transform_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Transform Mode",
		"How the transformation is going to be applied to the target",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Sculpt, transform_mode), RawPropertyType(0), nullptr},
		Sculpt_transform_mode_get, Sculpt_transform_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Sculpt_transform_mode_items, 2, 0
	};

	rna_Sculpt_gravity_object_ = {
		{nullptr, 	&rna_Sculpt_transform_mode,
		-1, "gravity_object", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Orientation",
		"Object whose Z axis defines orientation of gravity",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Sculpt_gravity_object_get, Sculpt_gravity_object_set, nullptr, nullptr,RNA_Object
	};

	StructRNA *srna = RNA_Sculpt;
	srna->cont.properties = {&rna_Sculpt_lock_x, &rna_Sculpt_gravity_object};
	srna->identifier = "Sculpt";
	srna->flag = 512;
	srna->name = "Sculpt";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Paint_rna_properties;
	srna->base = RNA_Paint;
	srna->path = rna_Sculpt_path;
};

/* UV Sculpting */
static CollectionPropertyRNA rna_UvSculpt_rna_properties_;
PropertyRNA &rna_UvSculpt_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UvSculpt_rna_properties_);

static PointerPropertyRNA rna_UvSculpt_rna_type_;
PropertyRNA &rna_UvSculpt_rna_type = reinterpret_cast<PropertyRNA &>(rna_UvSculpt_rna_type_);

static IntPropertyRNA rna_UvSculpt_size_;
PropertyRNA &rna_UvSculpt_size = reinterpret_cast<PropertyRNA &>(rna_UvSculpt_size_);

static FloatPropertyRNA rna_UvSculpt_strength_;
PropertyRNA &rna_UvSculpt_strength = reinterpret_cast<PropertyRNA &>(rna_UvSculpt_strength_);

static PointerPropertyRNA rna_UvSculpt_curve_distance_falloff_;
PropertyRNA &rna_UvSculpt_curve_distance_falloff = reinterpret_cast<PropertyRNA &>(rna_UvSculpt_curve_distance_falloff_);

static EnumPropertyRNA rna_UvSculpt_curve_distance_falloff_preset_;
PropertyRNA &rna_UvSculpt_curve_distance_falloff_preset = reinterpret_cast<PropertyRNA &>(rna_UvSculpt_curve_distance_falloff_preset_);

StructRNA *RNA_UvSculpt;
void register_struct_UvSculpt(BlenderRNA &brna)
{
	rna_UvSculpt_rna_properties_ = {
		{&rna_UvSculpt_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UvSculpt_rna_properties_begin, UvSculpt_rna_properties_next, UvSculpt_rna_properties_end, UvSculpt_rna_properties_get, nullptr, nullptr, UvSculpt_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UvSculpt_rna_type_ = {
		{&rna_UvSculpt_size, 	&rna_UvSculpt_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UvSculpt_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_UvSculpt_size_ = {
		{&rna_UvSculpt_strength, 	&rna_UvSculpt_rna_type,
		-1, "size", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL_DIAMETER) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UvSculpt, size), RawPropertyType(0), nullptr},
		UvSculpt_size_get, UvSculpt_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 1, nullptr, nullptr, 100, nullptr
	};

	rna_UvSculpt_strength_ = {
		{&rna_UvSculpt_curve_distance_falloff, 	&rna_UvSculpt_size,
		-1, "strength", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"",
		0, "Amount",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(UvSculpt, strength), RawPropertyType(5), nullptr},
		UvSculpt_strength_get, UvSculpt_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_UvSculpt_curve_distance_falloff_ = {
		{&rna_UvSculpt_curve_distance_falloff_preset, 	&rna_UvSculpt_strength,
		-1, "curve_distance_falloff", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Falloff Curve",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UvSculpt_curve_distance_falloff_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_UvSculpt_curve_distance_falloff_preset_ = {
		{nullptr, 	&rna_UvSculpt_curve_distance_falloff,
		-1, "curve_distance_falloff_preset", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Falloff Curve Preset",
		"",
		0, "Curve",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UvSculpt_curve_distance_falloff_preset_get, UvSculpt_curve_distance_falloff_preset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_brush_curve_preset_items, 10, 0
	};

	StructRNA *srna = RNA_UvSculpt;
	srna->cont.properties = {&rna_UvSculpt_rna_properties, &rna_UvSculpt_curve_distance_falloff_preset};
	srna->identifier = "UvSculpt";
	srna->flag = 512;
	srna->name = "UV Sculpting";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UvSculpt_rna_properties;
	srna->path = rna_UvSculpt_path;
};

/* Grease Pencil Paint */
static EnumPropertyRNA rna_GpPaint_color_mode_;
PropertyRNA &rna_GpPaint_color_mode = reinterpret_cast<PropertyRNA &>(rna_GpPaint_color_mode_);

StructRNA *RNA_GpPaint;
void register_struct_GpPaint(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_GpPaint_color_mode_items[3] = {
		{0, "MATERIAL", 0, "Material", "Paint using the active material base color"	},
		{1, "VERTEXCOLOR", 0, "Color Attribute", "Paint the material with a color attribute"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GpPaint_color_mode_ = {
		{nullptr, 	nullptr,
		-1, "color_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Paint Mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GpPaint, mode), RawPropertyType(0), nullptr},
		GpPaint_color_mode_get, GpPaint_color_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GpPaint_color_mode_items, 2, 0
	};

	StructRNA *srna = RNA_GpPaint;
	srna->cont.properties = {&rna_GpPaint_color_mode, &rna_GpPaint_color_mode};
	srna->identifier = "GpPaint";
	srna->flag = 512;
	srna->name = "Grease Pencil Paint";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Paint_rna_properties;
	srna->base = RNA_Paint;
	srna->path = rna_GpPaint_path;
};

/* Grease Pencil Vertex Paint */
StructRNA *RNA_GpVertexPaint;
void register_struct_GpVertexPaint(BlenderRNA &brna)
{

	StructRNA *srna = RNA_GpVertexPaint;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "GpVertexPaint";
	srna->flag = 512;
	srna->name = "Grease Pencil Vertex Paint";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Paint_rna_properties;
	srna->base = RNA_Paint;
	srna->path = rna_GpVertexPaint_path;
};

/* Grease Pencil Sculpt Paint */
StructRNA *RNA_GpSculptPaint;
void register_struct_GpSculptPaint(BlenderRNA &brna)
{

	StructRNA *srna = RNA_GpSculptPaint;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "GpSculptPaint";
	srna->flag = 512;
	srna->name = "Grease Pencil Sculpt Paint";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Paint_rna_properties;
	srna->base = RNA_Paint;
	srna->path = rna_GpSculptPaint_path;
};

/* Grease Pencil Weight Paint */
StructRNA *RNA_GpWeightPaint;
void register_struct_GpWeightPaint(BlenderRNA &brna)
{

	StructRNA *srna = RNA_GpWeightPaint;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "GpWeightPaint";
	srna->flag = 512;
	srna->name = "Grease Pencil Weight Paint";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Paint_rna_properties;
	srna->base = RNA_Paint;
	srna->path = rna_GpWeightPaint_path;
};

/* Vertex Paint */
static BoolPropertyRNA rna_VertexPaint_use_group_restrict_;
PropertyRNA &rna_VertexPaint_use_group_restrict = reinterpret_cast<PropertyRNA &>(rna_VertexPaint_use_group_restrict_);

StructRNA *RNA_VertexPaint;
void register_struct_VertexPaint(BlenderRNA &brna)
{
	rna_VertexPaint_use_group_restrict_ = {
		{nullptr, 	nullptr,
		-1, "use_group_restrict", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Restrict",
		"Restrict painting to vertices in the group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexPaint_use_group_restrict_get, VertexPaint_use_group_restrict_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_VertexPaint;
	srna->cont.properties = {&rna_VertexPaint_use_group_restrict, &rna_VertexPaint_use_group_restrict};
	srna->identifier = "VertexPaint";
	srna->flag = 512;
	srna->name = "Vertex Paint";
	srna->description = "Properties of vertex and weight paint mode";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Paint_rna_properties;
	srna->base = RNA_Paint;
	srna->path = rna_VertexPaint_path;
};

/* Paint Mode */
static CollectionPropertyRNA rna_PaintModeSettings_rna_properties_;
PropertyRNA &rna_PaintModeSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PaintModeSettings_rna_properties_);

static PointerPropertyRNA rna_PaintModeSettings_rna_type_;
PropertyRNA &rna_PaintModeSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_PaintModeSettings_rna_type_);

static EnumPropertyRNA rna_PaintModeSettings_canvas_source_;
PropertyRNA &rna_PaintModeSettings_canvas_source = reinterpret_cast<PropertyRNA &>(rna_PaintModeSettings_canvas_source_);

static PointerPropertyRNA rna_PaintModeSettings_canvas_image_;
PropertyRNA &rna_PaintModeSettings_canvas_image = reinterpret_cast<PropertyRNA &>(rna_PaintModeSettings_canvas_image_);

StructRNA *RNA_PaintModeSettings;
void register_struct_PaintModeSettings(BlenderRNA &brna)
{
	rna_PaintModeSettings_rna_properties_ = {
		{&rna_PaintModeSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PaintModeSettings_rna_properties_begin, PaintModeSettings_rna_properties_next, PaintModeSettings_rna_properties_end, PaintModeSettings_rna_properties_get, nullptr, nullptr, PaintModeSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PaintModeSettings_rna_type_ = {
		{&rna_PaintModeSettings_canvas_source, 	&rna_PaintModeSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PaintModeSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_PaintModeSettings_canvas_source_items[4] = {
		{2, "COLOR_ATTRIBUTE", 0, "Color Attribute", ""	},
		{0, "MATERIAL", 0, "Material", ""	},
		{1, "IMAGE", 0, "Image", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_PaintModeSettings_canvas_source_ = {
		{&rna_PaintModeSettings_canvas_image, 	&rna_PaintModeSettings_rna_type,
		-1, "canvas_source", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Source",
		"Source to select canvas from",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_PaintModeSettings_canvas_source_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PaintModeSettings, canvas_source), RawPropertyType(2), nullptr},
		PaintModeSettings_canvas_source_get, PaintModeSettings_canvas_source_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_PaintModeSettings_canvas_source_items, 3, 0
	};

	rna_PaintModeSettings_canvas_image_ = {
		{nullptr, 	&rna_PaintModeSettings_canvas_source,
		-1, "canvas_image", 12583105, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture",
		"Image used as painting target",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PaintModeSettings_canvas_image_get, PaintModeSettings_canvas_image_set, nullptr, rna_Image_no_renderresult_or_viewer_poll,RNA_Image
	};

	StructRNA *srna = RNA_PaintModeSettings;
	srna->cont.properties = {&rna_PaintModeSettings_rna_properties, &rna_PaintModeSettings_canvas_image};
	srna->identifier = "PaintModeSettings";
	srna->flag = 512;
	srna->name = "Paint Mode";
	srna->description = "Properties of paint mode";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PaintModeSettings_rna_properties;
	srna->path = rna_PaintModeSettings_path;
};

/* Image Paint */
static BoolPropertyRNA rna_ImagePaint_use_occlude_;
PropertyRNA &rna_ImagePaint_use_occlude = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_use_occlude_);

static BoolPropertyRNA rna_ImagePaint_use_backface_culling_;
PropertyRNA &rna_ImagePaint_use_backface_culling = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_use_backface_culling_);

static BoolPropertyRNA rna_ImagePaint_use_normal_falloff_;
PropertyRNA &rna_ImagePaint_use_normal_falloff = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_use_normal_falloff_);

static BoolPropertyRNA rna_ImagePaint_use_stencil_layer_;
PropertyRNA &rna_ImagePaint_use_stencil_layer = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_use_stencil_layer_);

static BoolPropertyRNA rna_ImagePaint_invert_stencil_;
PropertyRNA &rna_ImagePaint_invert_stencil = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_invert_stencil_);

static PointerPropertyRNA rna_ImagePaint_stencil_image_;
PropertyRNA &rna_ImagePaint_stencil_image = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_stencil_image_);

static PointerPropertyRNA rna_ImagePaint_canvas_;
PropertyRNA &rna_ImagePaint_canvas = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_canvas_);

static PointerPropertyRNA rna_ImagePaint_clone_image_;
PropertyRNA &rna_ImagePaint_clone_image = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_clone_image_);

static FloatPropertyRNA rna_ImagePaint_stencil_color_;
PropertyRNA &rna_ImagePaint_stencil_color = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_stencil_color_);

static FloatPropertyRNA rna_ImagePaint_dither_;
PropertyRNA &rna_ImagePaint_dither = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_dither_);

static BoolPropertyRNA rna_ImagePaint_use_clone_layer_;
PropertyRNA &rna_ImagePaint_use_clone_layer = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_use_clone_layer_);

static IntPropertyRNA rna_ImagePaint_seam_bleed_;
PropertyRNA &rna_ImagePaint_seam_bleed = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_seam_bleed_);

static IntPropertyRNA rna_ImagePaint_normal_angle_;
PropertyRNA &rna_ImagePaint_normal_angle = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_normal_angle_);

static IntPropertyRNA rna_ImagePaint_screen_grab_size_;
PropertyRNA &rna_ImagePaint_screen_grab_size = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_screen_grab_size_);

static EnumPropertyRNA rna_ImagePaint_mode_;
PropertyRNA &rna_ImagePaint_mode = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_mode_);

static EnumPropertyRNA rna_ImagePaint_interpolation_;
PropertyRNA &rna_ImagePaint_interpolation = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_interpolation_);

static BoolPropertyRNA rna_ImagePaint_missing_uvs_;
PropertyRNA &rna_ImagePaint_missing_uvs = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_missing_uvs_);

static BoolPropertyRNA rna_ImagePaint_missing_materials_;
PropertyRNA &rna_ImagePaint_missing_materials = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_missing_materials_);

static BoolPropertyRNA rna_ImagePaint_missing_stencil_;
PropertyRNA &rna_ImagePaint_missing_stencil = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_missing_stencil_);

static BoolPropertyRNA rna_ImagePaint_missing_texture_;
PropertyRNA &rna_ImagePaint_missing_texture = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_missing_texture_);

static FloatPropertyRNA rna_ImagePaint_clone_alpha_;
PropertyRNA &rna_ImagePaint_clone_alpha = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_clone_alpha_);

static FloatPropertyRNA rna_ImagePaint_clone_offset_;
PropertyRNA &rna_ImagePaint_clone_offset = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_clone_offset_);

static BoolPropertyRNA rna_ImagePaint_detect_data_ok_;
PropertyRNA &rna_ImagePaint_detect_data_ok = reinterpret_cast<PropertyRNA &>(rna_ImagePaint_detect_data_ok_);

FunctionRNA *rna_ImagePaint_detect_data_func;
StructRNA *RNA_ImagePaint;
void register_struct_ImagePaint(BlenderRNA &brna)
{
	rna_ImagePaint_use_occlude_ = {
		{&rna_ImagePaint_use_backface_culling, 	nullptr,
		-1, "use_occlude", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Occlude",
		"Only paint onto the faces directly under the brush (slower)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_use_occlude_get, ImagePaint_use_occlude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ImagePaint_use_backface_culling_ = {
		{&rna_ImagePaint_use_normal_falloff, 	&rna_ImagePaint_use_occlude,
		-1, "use_backface_culling", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cull",
		"Ignore faces pointing away from the view (faster)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_use_backface_culling_get, ImagePaint_use_backface_culling_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ImagePaint_use_normal_falloff_ = {
		{&rna_ImagePaint_use_stencil_layer, 	&rna_ImagePaint_use_backface_culling,
		-1, "use_normal_falloff", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Normal",
		"Paint most on faces pointing towards the view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_use_normal_falloff_get, ImagePaint_use_normal_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ImagePaint_use_stencil_layer_ = {
		{&rna_ImagePaint_invert_stencil, 	&rna_ImagePaint_use_normal_falloff,
		-1, "use_stencil_layer", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stencil Layer",
		"Set the mask layer from the UV map buttons",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_use_stencil_layer_get, ImagePaint_use_stencil_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImagePaint_invert_stencil_ = {
		{&rna_ImagePaint_stencil_image, 	&rna_ImagePaint_use_stencil_layer,
		-1, "invert_stencil", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert",
		"Invert the stencil layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_invert_stencil_get, ImagePaint_invert_stencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImagePaint_stencil_image_ = {
		{&rna_ImagePaint_canvas, 	&rna_ImagePaint_invert_stencil,
		-1, "stencil_image", 12583105, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stencil Image",
		"Image used as stencil",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ImaPaint_stencil_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_stencil_image_get, ImagePaint_stencil_image_set, nullptr, rna_Image_no_renderresult_or_viewer_poll,RNA_Image
	};

	rna_ImagePaint_canvas_ = {
		{&rna_ImagePaint_clone_image, 	&rna_ImagePaint_stencil_image,
		-1, "canvas", 12583105, 0, 0, 0, 0, PropertyPathTemplateType(0), "Canvas",
		"Image used as canvas",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ImaPaint_canvas_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_canvas_get, ImagePaint_canvas_set, nullptr, rna_Image_no_renderresult_or_viewer_poll,RNA_Image
	};

	rna_ImagePaint_clone_image_ = {
		{&rna_ImagePaint_stencil_color, 	&rna_ImagePaint_canvas,
		-1, "clone_image", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clone Image",
		"Image used as clone source",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_clone_image_get, ImagePaint_clone_image_set, nullptr, rna_Image_no_renderresult_or_viewer_poll,RNA_Image
	};

	static float rna_ImagePaint_stencil_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ImagePaint_stencil_color_ = {
		{&rna_ImagePaint_dither, 	&rna_ImagePaint_clone_image,
		-1, "stencil_color", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stencil Color",
		"Stencil color in the viewport",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePaintSettings, stencil_col), RawPropertyType(5), nullptr},
		nullptr, nullptr, ImagePaint_stencil_color_get, ImagePaint_stencil_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ImagePaint_stencil_color_default
	};

	rna_ImagePaint_dither_ = {
		{&rna_ImagePaint_use_clone_layer, 	&rna_ImagePaint_stencil_color,
		-1, "dither", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dither",
		"Amount of dithering when painting on byte images",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePaintSettings, dither), RawPropertyType(5), nullptr},
		ImagePaint_dither_get, ImagePaint_dither_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ImagePaint_use_clone_layer_ = {
		{&rna_ImagePaint_seam_bleed, 	&rna_ImagePaint_dither,
		-1, "use_clone_layer", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clone Map",
		"Use another UV map as clone source, otherwise use the 3D cursor as the source",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_use_clone_layer_get, ImagePaint_use_clone_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImagePaint_seam_bleed_ = {
		{&rna_ImagePaint_normal_angle, 	&rna_ImagePaint_use_clone_layer,
		-1, "seam_bleed", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bleed",
		"Extend paint beyond the faces\' UVs to reduce seams (in pixels, slower)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePaintSettings, seam_bleed), RawPropertyType(1), nullptr},
		ImagePaint_seam_bleed_get, ImagePaint_seam_bleed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 8, -32768, 32767, 1, nullptr, nullptr, 2, nullptr
	};

	rna_ImagePaint_normal_angle_ = {
		{&rna_ImagePaint_screen_grab_size, 	&rna_ImagePaint_seam_bleed,
		-1, "normal_angle", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angle",
		"Paint most on faces pointing towards the view according to this angle",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePaintSettings, normal_angle), RawPropertyType(1), nullptr},
		ImagePaint_normal_angle_get, ImagePaint_normal_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 90, 0, 90, 1, nullptr, nullptr, 80, nullptr
	};

	static int rna_ImagePaint_screen_grab_size_default[2] = {
		0,
		0
	};
	rna_ImagePaint_screen_grab_size_ = {
		{&rna_ImagePaint_mode, 	&rna_ImagePaint_normal_angle,
		-1, "screen_grab_size", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Screen Grab Size",
		"Size to capture the image for re-projecting",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePaintSettings, screen_grab_size), RawPropertyType(1), nullptr},
		nullptr, nullptr, ImagePaint_screen_grab_size_get, ImagePaint_screen_grab_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 512, 16384, 512, 16384, 1, nullptr, nullptr, 0, rna_ImagePaint_screen_grab_size_default
	};

	static const EnumPropertyItem rna_ImagePaint_mode_items[3] = {
		{0, "MATERIAL", 0, "Material", "Detect image slots from the material"	},
		{1, "IMAGE", 0, "Single Image", "Set image for texture painting directly"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ImagePaint_mode_ = {
		{&rna_ImagePaint_interpolation, 	&rna_ImagePaint_screen_grab_size,
		-1, "mode", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Mode of operation for projection painting",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ImaPaint_mode_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePaintSettings, mode), RawPropertyType(0), nullptr},
		ImagePaint_mode_get, ImagePaint_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ImagePaint_mode_items, 2, 0
	};

	static const EnumPropertyItem rna_ImagePaint_interpolation_items[3] = {
		{0, "LINEAR", 0, "Linear", "Linear interpolation"	},
		{1, "CLOSEST", 0, "Closest", "No interpolation (sample closest texel)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ImagePaint_interpolation_ = {
		{&rna_ImagePaint_missing_uvs, 	&rna_ImagePaint_mode,
		-1, "interpolation", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interpolation",
		"Texture filtering type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ImaPaint_mode_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePaintSettings, interp), RawPropertyType(0), nullptr},
		ImagePaint_interpolation_get, ImagePaint_interpolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ImagePaint_interpolation_items, 2, 0
	};

	rna_ImagePaint_missing_uvs_ = {
		{&rna_ImagePaint_missing_materials, 	&rna_ImagePaint_interpolation,
		-1, "missing_uvs", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Missing UVs",
		"A UV layer is missing on the mesh",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_missing_uvs_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImagePaint_missing_materials_ = {
		{&rna_ImagePaint_missing_stencil, 	&rna_ImagePaint_missing_uvs,
		-1, "missing_materials", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Missing Materials",
		"The mesh is missing materials",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_missing_materials_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImagePaint_missing_stencil_ = {
		{&rna_ImagePaint_missing_texture, 	&rna_ImagePaint_missing_materials,
		-1, "missing_stencil", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Missing Stencil",
		"Image Painting does not have a stencil",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_missing_stencil_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImagePaint_missing_texture_ = {
		{&rna_ImagePaint_clone_alpha, 	&rna_ImagePaint_missing_stencil,
		-1, "missing_texture", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Missing Texture",
		"Image Painting does not have a texture to paint on",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePaint_missing_texture_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImagePaint_clone_alpha_ = {
		{&rna_ImagePaint_clone_offset, 	&rna_ImagePaint_missing_texture,
		-1, "clone_alpha", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clone Alpha",
		"Opacity of clone image display",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePaintSettings, clone_alpha), RawPropertyType(5), nullptr},
		ImagePaint_clone_alpha_get, ImagePaint_clone_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	static float rna_ImagePaint_clone_offset_default[2] = {
		0.0f,
		0.0f
	};
	rna_ImagePaint_clone_offset_ = {
		{nullptr, 	&rna_ImagePaint_clone_alpha,
		-1, "clone_offset", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clone Offset",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ImagePaintSettings, clone_offset), RawPropertyType(5), nullptr},
		nullptr, nullptr, ImagePaint_clone_offset_get, ImagePaint_clone_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ImagePaint_clone_offset_default
	};

	StructRNA *srna = RNA_ImagePaint;
	srna->cont.properties = {&rna_ImagePaint_use_occlude, &rna_ImagePaint_clone_offset};
	srna->identifier = "ImagePaint";
	srna->flag = 512;
	srna->name = "Image Paint";
	srna->description = "Properties of image and texture painting mode";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Paint_rna_properties;
	srna->base = RNA_Paint;
	srna->path = rna_ImagePaintSettings_path;
	{
	rna_ImagePaint_detect_data_ok_ = {
		{nullptr, 	nullptr,
		-1, "ok", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ImagePaint_detect_data_ok, &rna_ImagePaint_detect_data_ok};
		func->identifier = "detect_data";
		func->description = "Check if required texpaint data exist";
		func->call = ImagePaint_detect_data_call;
		func->c_ret = &rna_ImagePaint_detect_data_ok;
		rna_ImagePaint_detect_data_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Particle Edit */
static CollectionPropertyRNA rna_ParticleEdit_rna_properties_;
PropertyRNA &rna_ParticleEdit_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_rna_properties_);

static PointerPropertyRNA rna_ParticleEdit_rna_type_;
PropertyRNA &rna_ParticleEdit_rna_type = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_rna_type_);

static EnumPropertyRNA rna_ParticleEdit_tool_;
PropertyRNA &rna_ParticleEdit_tool = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_tool_);

static EnumPropertyRNA rna_ParticleEdit_select_mode_;
PropertyRNA &rna_ParticleEdit_select_mode = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_select_mode_);

static BoolPropertyRNA rna_ParticleEdit_use_preserve_length_;
PropertyRNA &rna_ParticleEdit_use_preserve_length = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_use_preserve_length_);

static BoolPropertyRNA rna_ParticleEdit_use_preserve_root_;
PropertyRNA &rna_ParticleEdit_use_preserve_root = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_use_preserve_root_);

static BoolPropertyRNA rna_ParticleEdit_use_emitter_deflect_;
PropertyRNA &rna_ParticleEdit_use_emitter_deflect = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_use_emitter_deflect_);

static FloatPropertyRNA rna_ParticleEdit_emitter_distance_;
PropertyRNA &rna_ParticleEdit_emitter_distance = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_emitter_distance_);

static BoolPropertyRNA rna_ParticleEdit_use_fade_time_;
PropertyRNA &rna_ParticleEdit_use_fade_time = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_use_fade_time_);

static BoolPropertyRNA rna_ParticleEdit_use_auto_velocity_;
PropertyRNA &rna_ParticleEdit_use_auto_velocity = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_use_auto_velocity_);

static BoolPropertyRNA rna_ParticleEdit_show_particles_;
PropertyRNA &rna_ParticleEdit_show_particles = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_show_particles_);

static BoolPropertyRNA rna_ParticleEdit_use_default_interpolate_;
PropertyRNA &rna_ParticleEdit_use_default_interpolate = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_use_default_interpolate_);

static IntPropertyRNA rna_ParticleEdit_default_key_count_;
PropertyRNA &rna_ParticleEdit_default_key_count = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_default_key_count_);

static PointerPropertyRNA rna_ParticleEdit_brush_;
PropertyRNA &rna_ParticleEdit_brush = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_brush_);

static IntPropertyRNA rna_ParticleEdit_display_step_;
PropertyRNA &rna_ParticleEdit_display_step = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_display_step_);

static IntPropertyRNA rna_ParticleEdit_fade_frames_;
PropertyRNA &rna_ParticleEdit_fade_frames = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_fade_frames_);

static EnumPropertyRNA rna_ParticleEdit_type_;
PropertyRNA &rna_ParticleEdit_type = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_type_);

static BoolPropertyRNA rna_ParticleEdit_is_editable_;
PropertyRNA &rna_ParticleEdit_is_editable = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_is_editable_);

static BoolPropertyRNA rna_ParticleEdit_is_hair_;
PropertyRNA &rna_ParticleEdit_is_hair = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_is_hair_);

static PointerPropertyRNA rna_ParticleEdit_object_;
PropertyRNA &rna_ParticleEdit_object = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_object_);

static PointerPropertyRNA rna_ParticleEdit_shape_object_;
PropertyRNA &rna_ParticleEdit_shape_object = reinterpret_cast<PropertyRNA &>(rna_ParticleEdit_shape_object_);

StructRNA *RNA_ParticleEdit;
void register_struct_ParticleEdit(BlenderRNA &brna)
{
	rna_ParticleEdit_rna_properties_ = {
		{&rna_ParticleEdit_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_rna_properties_begin, ParticleEdit_rna_properties_next, ParticleEdit_rna_properties_end, ParticleEdit_rna_properties_get, nullptr, nullptr, ParticleEdit_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ParticleEdit_rna_type_ = {
		{&rna_ParticleEdit_tool, 	&rna_ParticleEdit_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_ParticleEdit_tool_items[8] = {
		{0, "COMB", 0, "Comb", "Comb hairs"	},
		{5, "SMOOTH", 0, "Smooth", "Smooth hairs"	},
		{4, "ADD", 0, "Add", "Add hairs"	},
		{2, "LENGTH", 0, "Length", "Make hairs longer or shorter"	},
		{3, "PUFF", 0, "Puff", "Make hairs stand up"	},
		{1, "CUT", 0, "Cut", "Cut hairs"	},
		{6, "WEIGHT", 0, "Weight", "Weight hair particles"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleEdit_tool_ = {
		{&rna_ParticleEdit_select_mode, 	&rna_ParticleEdit_rna_type,
		-1, "tool", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tool",
		"",
		0, "Operator",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_tool_get, ParticleEdit_tool_set, rna_ParticleEdit_tool_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleEdit_tool_items, 7, 0
	};

	static const EnumPropertyItem rna_ParticleEdit_select_mode_items[4] = {
		{1, "PATH", 569, "Path", "Path edit mode"	},
		{2, "POINT", 570, "Point", "Point select mode"	},
		{4, "TIP", 571, "Tip", "Tip select mode"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleEdit_select_mode_ = {
		{&rna_ParticleEdit_use_preserve_length, 	&rna_ParticleEdit_tool,
		-1, "select_mode", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Selection Mode",
		"Particle select and display mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ParticleEdit_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleEditSettings, selectmode), RawPropertyType(0), nullptr},
		ParticleEdit_select_mode_get, ParticleEdit_select_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleEdit_select_mode_items, 3, 1
	};

	rna_ParticleEdit_use_preserve_length_ = {
		{&rna_ParticleEdit_use_preserve_root, 	&rna_ParticleEdit_select_mode,
		-1, "use_preserve_length", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Keep Lengths",
		"Keep path lengths constant",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_use_preserve_length_get, ParticleEdit_use_preserve_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleEdit_use_preserve_root_ = {
		{&rna_ParticleEdit_use_emitter_deflect, 	&rna_ParticleEdit_use_preserve_length,
		-1, "use_preserve_root", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Keep Root",
		"Keep root keys unmodified",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_use_preserve_root_get, ParticleEdit_use_preserve_root_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleEdit_use_emitter_deflect_ = {
		{&rna_ParticleEdit_emitter_distance, 	&rna_ParticleEdit_use_preserve_root,
		-1, "use_emitter_deflect", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deflect Emitter",
		"Keep paths from intersecting the emitter",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_use_emitter_deflect_get, ParticleEdit_use_emitter_deflect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleEdit_emitter_distance_ = {
		{&rna_ParticleEdit_use_fade_time, 	&rna_ParticleEdit_use_emitter_deflect,
		-1, "emitter_distance", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Emitter Distance",
		"Distance to keep particles away from the emitter",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleEditSettings, emitterdist), RawPropertyType(5), nullptr},
		ParticleEdit_emitter_distance_get, ParticleEdit_emitter_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.2500000000f, nullptr
	};

	rna_ParticleEdit_use_fade_time_ = {
		{&rna_ParticleEdit_use_auto_velocity, 	&rna_ParticleEdit_emitter_distance,
		-1, "use_fade_time", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fade Time",
		"Fade paths and keys further away from current frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ParticleEdit_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_use_fade_time_get, ParticleEdit_use_fade_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleEdit_use_auto_velocity_ = {
		{&rna_ParticleEdit_show_particles, 	&rna_ParticleEdit_use_fade_time,
		-1, "use_auto_velocity", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto Velocity",
		"Calculate point velocities automatically",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_use_auto_velocity_get, ParticleEdit_use_auto_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleEdit_show_particles_ = {
		{&rna_ParticleEdit_use_default_interpolate, 	&rna_ParticleEdit_use_auto_velocity,
		-1, "show_particles", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Particles",
		"Display actual particles",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ParticleEdit_redo, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_show_particles_get, ParticleEdit_show_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleEdit_use_default_interpolate_ = {
		{&rna_ParticleEdit_default_key_count, 	&rna_ParticleEdit_show_particles,
		-1, "use_default_interpolate", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Interpolate",
		"Interpolate new particles from the existing ones",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_use_default_interpolate_get, ParticleEdit_use_default_interpolate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleEdit_default_key_count_ = {
		{&rna_ParticleEdit_brush, 	&rna_ParticleEdit_use_default_interpolate,
		-1, "default_key_count", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Keys",
		"How many keys to make new particles with",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleEditSettings, totaddkey), RawPropertyType(1), nullptr},
		ParticleEdit_default_key_count_get, ParticleEdit_default_key_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 2, 20, 2, 32767, 10, nullptr, nullptr, 5, nullptr
	};

	rna_ParticleEdit_brush_ = {
		{&rna_ParticleEdit_display_step, 	&rna_ParticleEdit_default_key_count,
		-1, "brush", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Brush",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {7, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_brush_get, nullptr, nullptr, nullptr,RNA_ParticleBrush
	};

	rna_ParticleEdit_display_step_ = {
		{&rna_ParticleEdit_fade_frames, 	&rna_ParticleEdit_brush,
		-1, "display_step", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Steps",
		"How many steps to display the path with",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ParticleEdit_redo, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleEditSettings, draw_step), RawPropertyType(0), nullptr},
		ParticleEdit_display_step_get, ParticleEdit_display_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10, 1, 10, 1, nullptr, nullptr, 2, nullptr
	};

	rna_ParticleEdit_fade_frames_ = {
		{&rna_ParticleEdit_type, 	&rna_ParticleEdit_display_step,
		-1, "fade_frames", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frames",
		"How many frames to fade",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ParticleEdit_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleEditSettings, fade_frames), RawPropertyType(0), nullptr},
		ParticleEdit_fade_frames_get, ParticleEdit_fade_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, 100, 1, nullptr, nullptr, 2, nullptr
	};

	static const EnumPropertyItem rna_ParticleEdit_type_items[4] = {
		{0, "PARTICLES", 0, "Particles", ""	},
		{1, "SOFT_BODY", 0, "Soft Body", ""	},
		{2, "CLOTH", 0, "Cloth", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleEdit_type_ = {
		{&rna_ParticleEdit_is_editable, 	&rna_ParticleEdit_fade_frames,
		-1, "type", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ParticleEdit_redo, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleEditSettings, edittype), RawPropertyType(0), nullptr},
		ParticleEdit_type_get, ParticleEdit_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleEdit_type_items, 3, 0
	};

	rna_ParticleEdit_is_editable_ = {
		{&rna_ParticleEdit_is_hair, 	&rna_ParticleEdit_type,
		-1, "is_editable", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Editable",
		"A valid edit mode exists",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_is_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleEdit_is_hair_ = {
		{&rna_ParticleEdit_object, 	&rna_ParticleEdit_is_editable,
		-1, "is_hair", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hair",
		"Editing hair",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_is_hair_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleEdit_object_ = {
		{&rna_ParticleEdit_shape_object, 	&rna_ParticleEdit_is_hair,
		-1, "object", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"The edited object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_object_get, nullptr, nullptr, nullptr,RNA_Object
	};

	rna_ParticleEdit_shape_object_ = {
		{nullptr, 	&rna_ParticleEdit_object,
		-1, "shape_object", 12583041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shape Object",
		"Outer shape to use for tools",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ParticleEdit_redo, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleEdit_shape_object_get, ParticleEdit_shape_object_set, nullptr, rna_Mesh_object_poll,RNA_Object
	};

	StructRNA *srna = RNA_ParticleEdit;
	srna->cont.properties = {&rna_ParticleEdit_rna_properties, &rna_ParticleEdit_shape_object};
	srna->identifier = "ParticleEdit";
	srna->flag = 512;
	srna->name = "Particle Edit";
	srna->description = "Properties of particle editing mode";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ParticleEdit_rna_properties;
	srna->path = rna_ParticleEdit_path;
};

/* Particle Brush */
static CollectionPropertyRNA rna_ParticleBrush_rna_properties_;
PropertyRNA &rna_ParticleBrush_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ParticleBrush_rna_properties_);

static PointerPropertyRNA rna_ParticleBrush_rna_type_;
PropertyRNA &rna_ParticleBrush_rna_type = reinterpret_cast<PropertyRNA &>(rna_ParticleBrush_rna_type_);

static IntPropertyRNA rna_ParticleBrush_size_;
PropertyRNA &rna_ParticleBrush_size = reinterpret_cast<PropertyRNA &>(rna_ParticleBrush_size_);

static FloatPropertyRNA rna_ParticleBrush_strength_;
PropertyRNA &rna_ParticleBrush_strength = reinterpret_cast<PropertyRNA &>(rna_ParticleBrush_strength_);

static IntPropertyRNA rna_ParticleBrush_count_;
PropertyRNA &rna_ParticleBrush_count = reinterpret_cast<PropertyRNA &>(rna_ParticleBrush_count_);

static IntPropertyRNA rna_ParticleBrush_steps_;
PropertyRNA &rna_ParticleBrush_steps = reinterpret_cast<PropertyRNA &>(rna_ParticleBrush_steps_);

static EnumPropertyRNA rna_ParticleBrush_puff_mode_;
PropertyRNA &rna_ParticleBrush_puff_mode = reinterpret_cast<PropertyRNA &>(rna_ParticleBrush_puff_mode_);

static BoolPropertyRNA rna_ParticleBrush_use_puff_volume_;
PropertyRNA &rna_ParticleBrush_use_puff_volume = reinterpret_cast<PropertyRNA &>(rna_ParticleBrush_use_puff_volume_);

static EnumPropertyRNA rna_ParticleBrush_length_mode_;
PropertyRNA &rna_ParticleBrush_length_mode = reinterpret_cast<PropertyRNA &>(rna_ParticleBrush_length_mode_);

static PointerPropertyRNA rna_ParticleBrush_curve_;
PropertyRNA &rna_ParticleBrush_curve = reinterpret_cast<PropertyRNA &>(rna_ParticleBrush_curve_);

StructRNA *RNA_ParticleBrush;
void register_struct_ParticleBrush(BlenderRNA &brna)
{
	rna_ParticleBrush_rna_properties_ = {
		{&rna_ParticleBrush_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleBrush_rna_properties_begin, ParticleBrush_rna_properties_next, ParticleBrush_rna_properties_end, ParticleBrush_rna_properties_get, nullptr, nullptr, ParticleBrush_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ParticleBrush_rna_type_ = {
		{&rna_ParticleBrush_size, 	&rna_ParticleBrush_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleBrush_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ParticleBrush_size_ = {
		{&rna_ParticleBrush_strength, 	&rna_ParticleBrush_rna_type,
		-1, "size", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Radius",
		"Radius of the brush in pixels",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleBrushData, size), RawPropertyType(1), nullptr},
		ParticleBrush_size_get, ParticleBrush_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 500, 1, 32767, 10, nullptr, nullptr, 50, nullptr
	};

	rna_ParticleBrush_strength_ = {
		{&rna_ParticleBrush_count, 	&rna_ParticleBrush_size,
		-1, "strength", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"Brush strength",
		0, "Amount",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleBrushData, strength), RawPropertyType(5), nullptr},
		ParticleBrush_strength_get, ParticleBrush_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_ParticleBrush_count_ = {
		{&rna_ParticleBrush_steps, 	&rna_ParticleBrush_strength,
		-1, "count", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Count",
		"Particle count",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleBrushData, count), RawPropertyType(1), nullptr},
		ParticleBrush_count_get, ParticleBrush_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, 1000, 10, nullptr, nullptr, 10, nullptr
	};

	rna_ParticleBrush_steps_ = {
		{&rna_ParticleBrush_puff_mode, 	&rna_ParticleBrush_count,
		-1, "steps", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Steps",
		"Brush steps",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleBrushData, step), RawPropertyType(1), nullptr},
		ParticleBrush_steps_get, ParticleBrush_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 50, 1, 32767, 10, nullptr, nullptr, 10, nullptr
	};

	static const EnumPropertyItem rna_ParticleBrush_puff_mode_items[3] = {
		{0, "ADD", 0, "Add", "Make hairs more puffy"	},
		{1, "SUB", 0, "Sub", "Make hairs less puffy"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleBrush_puff_mode_ = {
		{&rna_ParticleBrush_use_puff_volume, 	&rna_ParticleBrush_steps,
		-1, "puff_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Puff Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleBrushData, invert), RawPropertyType(1), nullptr},
		ParticleBrush_puff_mode_get, ParticleBrush_puff_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleBrush_puff_mode_items, 2, 0
	};

	rna_ParticleBrush_use_puff_volume_ = {
		{&rna_ParticleBrush_length_mode, 	&rna_ParticleBrush_puff_mode,
		-1, "use_puff_volume", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Puff Volume",
		"Apply puff to unselected end-points (helps maintain hair volume when puffing root)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleBrush_use_puff_volume_get, ParticleBrush_use_puff_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_ParticleBrush_length_mode_items[3] = {
		{0, "GROW", 0, "Grow", "Make hairs longer"	},
		{1, "SHRINK", 0, "Shrink", "Make hairs shorter"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleBrush_length_mode_ = {
		{&rna_ParticleBrush_curve, 	&rna_ParticleBrush_use_puff_volume,
		-1, "length_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Length Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleBrushData, invert), RawPropertyType(1), nullptr},
		ParticleBrush_length_mode_get, ParticleBrush_length_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleBrush_length_mode_items, 2, 0
	};

	rna_ParticleBrush_curve_ = {
		{nullptr, 	&rna_ParticleBrush_length_mode,
		-1, "curve", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleBrush_curve_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	StructRNA *srna = RNA_ParticleBrush;
	srna->cont.properties = {&rna_ParticleBrush_rna_properties, &rna_ParticleBrush_curve};
	srna->identifier = "ParticleBrush";
	srna->flag = 516;
	srna->name = "Particle Brush";
	srna->description = "Particle editing brush";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ParticleBrush_rna_properties;
	srna->path = rna_ParticleBrush_path;
};

/* Grease Pencil Sculpt Guide */
static CollectionPropertyRNA rna_GPencilSculptGuide_rna_properties_;
PropertyRNA &rna_GPencilSculptGuide_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_rna_properties_);

static PointerPropertyRNA rna_GPencilSculptGuide_rna_type_;
PropertyRNA &rna_GPencilSculptGuide_rna_type = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_rna_type_);

static BoolPropertyRNA rna_GPencilSculptGuide_use_guide_;
PropertyRNA &rna_GPencilSculptGuide_use_guide = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_use_guide_);

static BoolPropertyRNA rna_GPencilSculptGuide_use_snapping_;
PropertyRNA &rna_GPencilSculptGuide_use_snapping = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_use_snapping_);

static PointerPropertyRNA rna_GPencilSculptGuide_reference_object_;
PropertyRNA &rna_GPencilSculptGuide_reference_object = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_reference_object_);

static EnumPropertyRNA rna_GPencilSculptGuide_reference_point_;
PropertyRNA &rna_GPencilSculptGuide_reference_point = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_reference_point_);

static EnumPropertyRNA rna_GPencilSculptGuide_type_;
PropertyRNA &rna_GPencilSculptGuide_type = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_type_);

static FloatPropertyRNA rna_GPencilSculptGuide_angle_;
PropertyRNA &rna_GPencilSculptGuide_angle = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_angle_);

static FloatPropertyRNA rna_GPencilSculptGuide_angle_snap_;
PropertyRNA &rna_GPencilSculptGuide_angle_snap = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_angle_snap_);

static FloatPropertyRNA rna_GPencilSculptGuide_spacing_;
PropertyRNA &rna_GPencilSculptGuide_spacing = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_spacing_);

static FloatPropertyRNA rna_GPencilSculptGuide_location_;
PropertyRNA &rna_GPencilSculptGuide_location = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptGuide_location_);

StructRNA *RNA_GPencilSculptGuide;
void register_struct_GPencilSculptGuide(BlenderRNA &brna)
{
	rna_GPencilSculptGuide_rna_properties_ = {
		{&rna_GPencilSculptGuide_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptGuide_rna_properties_begin, GPencilSculptGuide_rna_properties_next, GPencilSculptGuide_rna_properties_end, GPencilSculptGuide_rna_properties_get, nullptr, nullptr, GPencilSculptGuide_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GPencilSculptGuide_rna_type_ = {
		{&rna_GPencilSculptGuide_use_guide, 	&rna_GPencilSculptGuide_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptGuide_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_GPencilSculptGuide_use_guide_ = {
		{&rna_GPencilSculptGuide_use_snapping, 	&rna_GPencilSculptGuide_rna_type,
		-1, "use_guide", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Use Guides",
		"Enable speed guides",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GP_Sculpt_Guide, use_guide), RawPropertyType(3), nullptr},
		GPencilSculptGuide_use_guide_get, GPencilSculptGuide_use_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GPencilSculptGuide_use_snapping_ = {
		{&rna_GPencilSculptGuide_reference_object, 	&rna_GPencilSculptGuide_use_guide,
		-1, "use_snapping", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Use Snapping",
		"Enable snapping to guides angle or spacing options",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GP_Sculpt_Guide, use_snapping), RawPropertyType(3), nullptr},
		GPencilSculptGuide_use_snapping_get, GPencilSculptGuide_use_snapping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GPencilSculptGuide_reference_object_ = {
		{&rna_GPencilSculptGuide_reference_point, 	&rna_GPencilSculptGuide_use_snapping,
		-1, "reference_object", 9437313, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Object used for reference point",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptGuide_reference_object_get, GPencilSculptGuide_reference_object_set, nullptr, nullptr,RNA_Object
	};

	static const EnumPropertyItem rna_GPencilSculptGuide_reference_point_items[4] = {
		{0, "CURSOR", 0, "Cursor", "Use cursor as reference point"	},
		{1, "CUSTOM", 0, "Custom", "Use custom reference point"	},
		{2, "OBJECT", 0, "Object", "Use object as reference point"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GPencilSculptGuide_reference_point_ = {
		{&rna_GPencilSculptGuide_type, 	&rna_GPencilSculptGuide_reference_object,
		-1, "reference_point", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of speed guide",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GP_Sculpt_Guide, reference_point), RawPropertyType(2), nullptr},
		GPencilSculptGuide_reference_point_get, GPencilSculptGuide_reference_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GPencilSculptGuide_reference_point_items, 3, 0
	};

	static const EnumPropertyItem rna_GPencilSculptGuide_type_items[6] = {
		{0, "CIRCULAR", 0, "Circular", "Use single point to create rings"	},
		{1, "RADIAL", 0, "Radial", "Use single point as direction"	},
		{2, "PARALLEL", 0, "Parallel", "Parallel lines"	},
		{3, "GRID", 0, "Grid", "Grid allows horizontal and vertical lines"	},
		{4, "ISO", 0, "Isometric", "Grid allows isometric and vertical lines"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GPencilSculptGuide_type_ = {
		{&rna_GPencilSculptGuide_angle, 	&rna_GPencilSculptGuide_reference_point,
		-1, "type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of speed guide",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GP_Sculpt_Guide, type), RawPropertyType(2), nullptr},
		GPencilSculptGuide_type_get, GPencilSculptGuide_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GPencilSculptGuide_type_items, 5, 0
	};

	rna_GPencilSculptGuide_angle_ = {
		{&rna_GPencilSculptGuide_angle_snap, 	&rna_GPencilSculptGuide_type,
		-1, "angle", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angle",
		"Direction of lines",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GP_Sculpt_Guide, angle), RawPropertyType(5), nullptr},
		GPencilSculptGuide_angle_get, GPencilSculptGuide_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_GPencilSculptGuide_angle_snap_ = {
		{&rna_GPencilSculptGuide_spacing, 	&rna_GPencilSculptGuide_angle,
		-1, "angle_snap", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angle Snap",
		"Angle snapping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GP_Sculpt_Guide, angle_snap), RawPropertyType(5), nullptr},
		GPencilSculptGuide_angle_snap_get, GPencilSculptGuide_angle_snap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_GPencilSculptGuide_spacing_ = {
		{&rna_GPencilSculptGuide_location, 	&rna_GPencilSculptGuide_angle_snap,
		-1, "spacing", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Spacing",
		"Guide spacing",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GP_Sculpt_Guide, spacing), RawPropertyType(5), nullptr},
		GPencilSculptGuide_spacing_get, GPencilSculptGuide_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 20.0f, nullptr
	};

	static float rna_GPencilSculptGuide_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_GPencilSculptGuide_location_ = {
		{nullptr, 	&rna_GPencilSculptGuide_spacing,
		-1, "location", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"Custom reference point for guides",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GP_Sculpt_Guide, location), RawPropertyType(5), nullptr},
		nullptr, nullptr, GPencilSculptGuide_location_get, GPencilSculptGuide_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_GPencilSculptGuide_location_default
	};

	StructRNA *srna = RNA_GPencilSculptGuide;
	srna->cont.properties = {&rna_GPencilSculptGuide_rna_properties, &rna_GPencilSculptGuide_location};
	srna->identifier = "GPencilSculptGuide";
	srna->flag = 516;
	srna->name = "Grease Pencil Sculpt Guide";
	srna->description = "Guides for drawing";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_GPencilSculptGuide_rna_properties;
	srna->path = rna_GPencilSculptGuide_path;
};

/* GPencil Sculpt Settings */
static CollectionPropertyRNA rna_GPencilSculptSettings_rna_properties_;
PropertyRNA &rna_GPencilSculptSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_rna_properties_);

static PointerPropertyRNA rna_GPencilSculptSettings_rna_type_;
PropertyRNA &rna_GPencilSculptSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_rna_type_);

static PointerPropertyRNA rna_GPencilSculptSettings_guide_;
PropertyRNA &rna_GPencilSculptSettings_guide = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_guide_);

static BoolPropertyRNA rna_GPencilSculptSettings_use_multiframe_falloff_;
PropertyRNA &rna_GPencilSculptSettings_use_multiframe_falloff = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_use_multiframe_falloff_);

static BoolPropertyRNA rna_GPencilSculptSettings_use_thickness_curve_;
PropertyRNA &rna_GPencilSculptSettings_use_thickness_curve = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_use_thickness_curve_);

static BoolPropertyRNA rna_GPencilSculptSettings_use_scale_thickness_;
PropertyRNA &rna_GPencilSculptSettings_use_scale_thickness = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_use_scale_thickness_);

static BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_stroke_;
PropertyRNA &rna_GPencilSculptSettings_use_automasking_stroke = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_use_automasking_stroke_);

static BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_layer_stroke_;
PropertyRNA &rna_GPencilSculptSettings_use_automasking_layer_stroke = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_use_automasking_layer_stroke_);

static BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_material_stroke_;
PropertyRNA &rna_GPencilSculptSettings_use_automasking_material_stroke = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_use_automasking_material_stroke_);

static BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_layer_active_;
PropertyRNA &rna_GPencilSculptSettings_use_automasking_layer_active = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_use_automasking_layer_active_);

static BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_material_active_;
PropertyRNA &rna_GPencilSculptSettings_use_automasking_material_active = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_use_automasking_material_active_);

static PointerPropertyRNA rna_GPencilSculptSettings_multiframe_falloff_curve_;
PropertyRNA &rna_GPencilSculptSettings_multiframe_falloff_curve = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_multiframe_falloff_curve_);

static PointerPropertyRNA rna_GPencilSculptSettings_thickness_primitive_curve_;
PropertyRNA &rna_GPencilSculptSettings_thickness_primitive_curve = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_thickness_primitive_curve_);

static EnumPropertyRNA rna_GPencilSculptSettings_lock_axis_;
PropertyRNA &rna_GPencilSculptSettings_lock_axis = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_lock_axis_);

static FloatPropertyRNA rna_GPencilSculptSettings_intersection_threshold_;
PropertyRNA &rna_GPencilSculptSettings_intersection_threshold = reinterpret_cast<PropertyRNA &>(rna_GPencilSculptSettings_intersection_threshold_);

StructRNA *RNA_GPencilSculptSettings;
void register_struct_GPencilSculptSettings(BlenderRNA &brna)
{
	rna_GPencilSculptSettings_rna_properties_ = {
		{&rna_GPencilSculptSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_rna_properties_begin, GPencilSculptSettings_rna_properties_next, GPencilSculptSettings_rna_properties_end, GPencilSculptSettings_rna_properties_get, nullptr, nullptr, GPencilSculptSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GPencilSculptSettings_rna_type_ = {
		{&rna_GPencilSculptSettings_guide, 	&rna_GPencilSculptSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_GPencilSculptSettings_guide_ = {
		{&rna_GPencilSculptSettings_use_multiframe_falloff, 	&rna_GPencilSculptSettings_rna_type,
		-1, "guide", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Guide",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_guide_get, nullptr, nullptr, nullptr,RNA_GPencilSculptGuide
	};

	rna_GPencilSculptSettings_use_multiframe_falloff_ = {
		{&rna_GPencilSculptSettings_use_thickness_curve, 	&rna_GPencilSculptSettings_guide,
		-1, "use_multiframe_falloff", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Falloff",
		"Use falloff effect when edit in multiframe mode to compute brush effect by frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_use_multiframe_falloff_get, GPencilSculptSettings_use_multiframe_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GPencilSculptSettings_use_thickness_curve_ = {
		{&rna_GPencilSculptSettings_use_scale_thickness, 	&rna_GPencilSculptSettings_use_multiframe_falloff,
		-1, "use_thickness_curve", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Curve",
		"Use curve to define primitive stroke thickness",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_use_thickness_curve_get, GPencilSculptSettings_use_thickness_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GPencilSculptSettings_use_scale_thickness_ = {
		{&rna_GPencilSculptSettings_use_automasking_stroke, 	&rna_GPencilSculptSettings_use_thickness_curve,
		-1, "use_scale_thickness", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale Stroke Thickness",
		"Scale the stroke thickness when transforming strokes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_use_scale_thickness_get, GPencilSculptSettings_use_scale_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GPencilSculptSettings_use_automasking_stroke_ = {
		{&rna_GPencilSculptSettings_use_automasking_layer_stroke, 	&rna_GPencilSculptSettings_use_scale_thickness,
		-1, "use_automasking_stroke", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto-Masking Strokes",
		"Affect only strokes below the cursor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_use_automasking_stroke_get, GPencilSculptSettings_use_automasking_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GPencilSculptSettings_use_automasking_layer_stroke_ = {
		{&rna_GPencilSculptSettings_use_automasking_material_stroke, 	&rna_GPencilSculptSettings_use_automasking_stroke,
		-1, "use_automasking_layer_stroke", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto-Masking Layer",
		"Affect only strokes below the cursor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_use_automasking_layer_stroke_get, GPencilSculptSettings_use_automasking_layer_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GPencilSculptSettings_use_automasking_material_stroke_ = {
		{&rna_GPencilSculptSettings_use_automasking_layer_active, 	&rna_GPencilSculptSettings_use_automasking_layer_stroke,
		-1, "use_automasking_material_stroke", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto-Masking Material",
		"Affect only strokes below the cursor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_use_automasking_material_stroke_get, GPencilSculptSettings_use_automasking_material_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GPencilSculptSettings_use_automasking_layer_active_ = {
		{&rna_GPencilSculptSettings_use_automasking_material_active, 	&rna_GPencilSculptSettings_use_automasking_material_stroke,
		-1, "use_automasking_layer_active", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto-Masking Layer",
		"Affect only the Active Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_use_automasking_layer_active_get, GPencilSculptSettings_use_automasking_layer_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GPencilSculptSettings_use_automasking_material_active_ = {
		{&rna_GPencilSculptSettings_multiframe_falloff_curve, 	&rna_GPencilSculptSettings_use_automasking_layer_active,
		-1, "use_automasking_material_active", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto-Masking Material",
		"Affect only the Active Material",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_use_automasking_material_active_get, GPencilSculptSettings_use_automasking_material_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GPencilSculptSettings_multiframe_falloff_curve_ = {
		{&rna_GPencilSculptSettings_thickness_primitive_curve, 	&rna_GPencilSculptSettings_use_automasking_material_active,
		-1, "multiframe_falloff_curve", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve",
		"Custom curve to control falloff of brush effect by Grease Pencil frames",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_multiframe_falloff_curve_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_GPencilSculptSettings_thickness_primitive_curve_ = {
		{&rna_GPencilSculptSettings_lock_axis, 	&rna_GPencilSculptSettings_multiframe_falloff_curve,
		-1, "thickness_primitive_curve", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve",
		"Custom curve to control primitive thickness",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GPencilSculptSettings_thickness_primitive_curve_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	static const EnumPropertyItem rna_GPencilSculptSettings_lock_axis_items[6] = {
		{0, "VIEW", 31, "View", "Align strokes to current view plane"	},
		{2, "AXIS_Y", 627, "Front (X-Z)", "Project strokes to plane locked to Y"	},
		{1, "AXIS_X", 628, "Side (Y-Z)", "Project strokes to plane locked to X"	},
		{3, "AXIS_Z", 629, "Top (X-Y)", "Project strokes to plane locked to Z"	},
		{4, "CURSOR", 574, "Cursor", "Align strokes to current 3D cursor orientation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GPencilSculptSettings_lock_axis_ = {
		{&rna_GPencilSculptSettings_intersection_threshold, 	&rna_GPencilSculptSettings_thickness_primitive_curve,
		-1, "lock_axis", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lock Axis",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GP_Sculpt_Settings, lock_axis), RawPropertyType(0), nullptr},
		GPencilSculptSettings_lock_axis_get, GPencilSculptSettings_lock_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GPencilSculptSettings_lock_axis_items, 5, 0
	};

	rna_GPencilSculptSettings_intersection_threshold_ = {
		{nullptr, 	&rna_GPencilSculptSettings_lock_axis,
		-1, "intersection_threshold", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Threshold for stroke intersections",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GP_Sculpt_Settings, isect_threshold), RawPropertyType(5), nullptr},
		GPencilSculptSettings_intersection_threshold_get, GPencilSculptSettings_intersection_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	StructRNA *srna = RNA_GPencilSculptSettings;
	srna->cont.properties = {&rna_GPencilSculptSettings_rna_properties, &rna_GPencilSculptSettings_intersection_threshold};
	srna->identifier = "GPencilSculptSettings";
	srna->flag = 512;
	srna->name = "GPencil Sculpt Settings";
	srna->description = "General properties for Grease Pencil stroke sculpting tools";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_GPencilSculptSettings_rna_properties;
	srna->path = rna_GPencilSculptSettings_path;
};

/* Curves Sculpt Paint */
StructRNA *RNA_CurvesSculpt;
void register_struct_CurvesSculpt(BlenderRNA &brna)
{

	StructRNA *srna = RNA_CurvesSculpt;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "CurvesSculpt";
	srna->flag = 512;
	srna->name = "Curves Sculpt Paint";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Paint_rna_properties;
	srna->base = RNA_Paint;
	srna->path = rna_CurvesSculpt_path;
};


}  // namespace blender
