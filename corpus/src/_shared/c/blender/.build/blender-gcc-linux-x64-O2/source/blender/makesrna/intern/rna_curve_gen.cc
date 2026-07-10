
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

#include "rna_curve.cc"
#include "rna_curve_api.cc"

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

extern PropertyRNA &rna_Curve_shape_keys;
extern PropertyRNA &rna_Curve_splines;
extern PropertyRNA &rna_Curve_path_duration;
extern PropertyRNA &rna_Curve_use_path;
extern PropertyRNA &rna_Curve_use_path_follow;
extern PropertyRNA &rna_Curve_use_path_clamp;
extern PropertyRNA &rna_Curve_use_stretch;
extern PropertyRNA &rna_Curve_use_deform_bounds;
extern PropertyRNA &rna_Curve_use_radius;
extern PropertyRNA &rna_Curve_bevel_mode;
extern PropertyRNA &rna_Curve_bevel_profile;
extern PropertyRNA &rna_Curve_bevel_resolution;
extern PropertyRNA &rna_Curve_offset;
extern PropertyRNA &rna_Curve_extrude;
extern PropertyRNA &rna_Curve_bevel_depth;
extern PropertyRNA &rna_Curve_resolution_u;
extern PropertyRNA &rna_Curve_resolution_v;
extern PropertyRNA &rna_Curve_render_resolution_u;
extern PropertyRNA &rna_Curve_render_resolution_v;
extern PropertyRNA &rna_Curve_eval_time;
extern PropertyRNA &rna_Curve_bevel_object;
extern PropertyRNA &rna_Curve_taper_object;
extern PropertyRNA &rna_Curve_dimensions;
extern PropertyRNA &rna_Curve_fill_mode;
extern PropertyRNA &rna_Curve_fill_solver;
extern PropertyRNA &rna_Curve_fill_rule;
extern PropertyRNA &rna_Curve_twist_mode;
extern PropertyRNA &rna_Curve_taper_radius_mode;
extern PropertyRNA &rna_Curve_bevel_factor_mapping_start;
extern PropertyRNA &rna_Curve_bevel_factor_mapping_end;
extern PropertyRNA &rna_Curve_twist_smooth;
extern PropertyRNA &rna_Curve_use_fill_caps;
extern PropertyRNA &rna_Curve_use_map_taper;
extern PropertyRNA &rna_Curve_use_auto_texspace;
extern PropertyRNA &rna_Curve_texspace_location;
extern PropertyRNA &rna_Curve_texspace_size;
extern PropertyRNA &rna_Curve_materials;
extern PropertyRNA &rna_Curve_bevel_factor_start;
extern PropertyRNA &rna_Curve_bevel_factor_end;
extern PropertyRNA &rna_Curve_is_editmode;
extern PropertyRNA &rna_Curve_animation_data;

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


extern FunctionRNA *rna_Curve_transform_func;
extern PropertyRNA &rna_Curve_transform_matrix;
extern PropertyRNA &rna_Curve_transform_shape_keys;

extern FunctionRNA *rna_Curve_validate_material_indices_func;
extern PropertyRNA &rna_Curve_validate_material_indices_result;

extern FunctionRNA *rna_Curve_update_gpu_tag_func;


extern PropertyRNA &rna_CurveSplines_rna_properties;
extern PropertyRNA &rna_CurveSplines_rna_type;
extern PropertyRNA &rna_CurveSplines_active;

extern FunctionRNA *rna_CurveSplines_new_func;
extern PropertyRNA &rna_CurveSplines_new_type;
extern PropertyRNA &rna_CurveSplines_new_spline;

extern FunctionRNA *rna_CurveSplines_remove_func;
extern PropertyRNA &rna_CurveSplines_remove_spline;

extern FunctionRNA *rna_CurveSplines_clear_func;


extern PropertyRNA &rna_Curve_shape_keys;
extern PropertyRNA &rna_Curve_splines;
extern PropertyRNA &rna_Curve_path_duration;
extern PropertyRNA &rna_Curve_use_path;
extern PropertyRNA &rna_Curve_use_path_follow;
extern PropertyRNA &rna_Curve_use_path_clamp;
extern PropertyRNA &rna_Curve_use_stretch;
extern PropertyRNA &rna_Curve_use_deform_bounds;
extern PropertyRNA &rna_Curve_use_radius;
extern PropertyRNA &rna_Curve_bevel_mode;
extern PropertyRNA &rna_Curve_bevel_profile;
extern PropertyRNA &rna_Curve_bevel_resolution;
extern PropertyRNA &rna_Curve_offset;
extern PropertyRNA &rna_Curve_extrude;
extern PropertyRNA &rna_Curve_bevel_depth;
extern PropertyRNA &rna_Curve_resolution_u;
extern PropertyRNA &rna_Curve_resolution_v;
extern PropertyRNA &rna_Curve_render_resolution_u;
extern PropertyRNA &rna_Curve_render_resolution_v;
extern PropertyRNA &rna_Curve_eval_time;
extern PropertyRNA &rna_Curve_bevel_object;
extern PropertyRNA &rna_Curve_taper_object;
extern PropertyRNA &rna_Curve_dimensions;
extern PropertyRNA &rna_Curve_fill_mode;
extern PropertyRNA &rna_Curve_fill_solver;
extern PropertyRNA &rna_Curve_fill_rule;
extern PropertyRNA &rna_Curve_twist_mode;
extern PropertyRNA &rna_Curve_taper_radius_mode;
extern PropertyRNA &rna_Curve_bevel_factor_mapping_start;
extern PropertyRNA &rna_Curve_bevel_factor_mapping_end;
extern PropertyRNA &rna_Curve_twist_smooth;
extern PropertyRNA &rna_Curve_use_fill_caps;
extern PropertyRNA &rna_Curve_use_map_taper;
extern PropertyRNA &rna_Curve_use_auto_texspace;
extern PropertyRNA &rna_Curve_texspace_location;
extern PropertyRNA &rna_Curve_texspace_size;
extern PropertyRNA &rna_Curve_materials;
extern PropertyRNA &rna_Curve_bevel_factor_start;
extern PropertyRNA &rna_Curve_bevel_factor_end;
extern PropertyRNA &rna_Curve_is_editmode;
extern PropertyRNA &rna_Curve_animation_data;

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

extern FunctionRNA *rna_Curve_transform_func;
extern PropertyRNA &rna_Curve_transform_matrix;
extern PropertyRNA &rna_Curve_transform_shape_keys;

extern FunctionRNA *rna_Curve_validate_material_indices_func;
extern PropertyRNA &rna_Curve_validate_material_indices_result;

extern FunctionRNA *rna_Curve_update_gpu_tag_func;

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



extern PropertyRNA &rna_Curve_shape_keys;
extern PropertyRNA &rna_Curve_splines;
extern PropertyRNA &rna_Curve_path_duration;
extern PropertyRNA &rna_Curve_use_path;
extern PropertyRNA &rna_Curve_use_path_follow;
extern PropertyRNA &rna_Curve_use_path_clamp;
extern PropertyRNA &rna_Curve_use_stretch;
extern PropertyRNA &rna_Curve_use_deform_bounds;
extern PropertyRNA &rna_Curve_use_radius;
extern PropertyRNA &rna_Curve_bevel_mode;
extern PropertyRNA &rna_Curve_bevel_profile;
extern PropertyRNA &rna_Curve_bevel_resolution;
extern PropertyRNA &rna_Curve_offset;
extern PropertyRNA &rna_Curve_extrude;
extern PropertyRNA &rna_Curve_bevel_depth;
extern PropertyRNA &rna_Curve_resolution_u;
extern PropertyRNA &rna_Curve_resolution_v;
extern PropertyRNA &rna_Curve_render_resolution_u;
extern PropertyRNA &rna_Curve_render_resolution_v;
extern PropertyRNA &rna_Curve_eval_time;
extern PropertyRNA &rna_Curve_bevel_object;
extern PropertyRNA &rna_Curve_taper_object;
extern PropertyRNA &rna_Curve_dimensions;
extern PropertyRNA &rna_Curve_fill_mode;
extern PropertyRNA &rna_Curve_fill_solver;
extern PropertyRNA &rna_Curve_fill_rule;
extern PropertyRNA &rna_Curve_twist_mode;
extern PropertyRNA &rna_Curve_taper_radius_mode;
extern PropertyRNA &rna_Curve_bevel_factor_mapping_start;
extern PropertyRNA &rna_Curve_bevel_factor_mapping_end;
extern PropertyRNA &rna_Curve_twist_smooth;
extern PropertyRNA &rna_Curve_use_fill_caps;
extern PropertyRNA &rna_Curve_use_map_taper;
extern PropertyRNA &rna_Curve_use_auto_texspace;
extern PropertyRNA &rna_Curve_texspace_location;
extern PropertyRNA &rna_Curve_texspace_size;
extern PropertyRNA &rna_Curve_materials;
extern PropertyRNA &rna_Curve_bevel_factor_start;
extern PropertyRNA &rna_Curve_bevel_factor_end;
extern PropertyRNA &rna_Curve_is_editmode;
extern PropertyRNA &rna_Curve_animation_data;

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

extern PropertyRNA &rna_TextCurve_align_x;
extern PropertyRNA &rna_TextCurve_align_y;
extern PropertyRNA &rna_TextCurve_overflow;
extern PropertyRNA &rna_TextCurve_size;
extern PropertyRNA &rna_TextCurve_small_caps_scale;
extern PropertyRNA &rna_TextCurve_space_line;
extern PropertyRNA &rna_TextCurve_space_word;
extern PropertyRNA &rna_TextCurve_space_character;
extern PropertyRNA &rna_TextCurve_shear;
extern PropertyRNA &rna_TextCurve_offset_x;
extern PropertyRNA &rna_TextCurve_offset_y;
extern PropertyRNA &rna_TextCurve_underline_position;
extern PropertyRNA &rna_TextCurve_underline_height;
extern PropertyRNA &rna_TextCurve_text_boxes;
extern PropertyRNA &rna_TextCurve_active_textbox;
extern PropertyRNA &rna_TextCurve_family;
extern PropertyRNA &rna_TextCurve_body;
extern PropertyRNA &rna_TextCurve_body_format;
extern PropertyRNA &rna_TextCurve_follow_curve;
extern PropertyRNA &rna_TextCurve_font;
extern PropertyRNA &rna_TextCurve_font_bold;
extern PropertyRNA &rna_TextCurve_font_italic;
extern PropertyRNA &rna_TextCurve_font_bold_italic;
extern PropertyRNA &rna_TextCurve_edit_format;
extern PropertyRNA &rna_TextCurve_use_fast_edit;
extern PropertyRNA &rna_TextCurve_is_select_bold;
extern PropertyRNA &rna_TextCurve_is_select_italic;
extern PropertyRNA &rna_TextCurve_is_select_underline;
extern PropertyRNA &rna_TextCurve_is_select_smallcaps;
extern PropertyRNA &rna_TextCurve_has_selection;

extern FunctionRNA *rna_Curve_transform_func;
extern PropertyRNA &rna_Curve_transform_matrix;
extern PropertyRNA &rna_Curve_transform_shape_keys;

extern FunctionRNA *rna_Curve_validate_material_indices_func;
extern PropertyRNA &rna_Curve_validate_material_indices_result;

extern FunctionRNA *rna_Curve_update_gpu_tag_func;

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



extern PropertyRNA &rna_TextBox_rna_properties;
extern PropertyRNA &rna_TextBox_rna_type;
extern PropertyRNA &rna_TextBox_x;
extern PropertyRNA &rna_TextBox_y;
extern PropertyRNA &rna_TextBox_width;
extern PropertyRNA &rna_TextBox_height;


extern PropertyRNA &rna_TextCharacterFormat_rna_properties;
extern PropertyRNA &rna_TextCharacterFormat_rna_type;
extern PropertyRNA &rna_TextCharacterFormat_use_bold;
extern PropertyRNA &rna_TextCharacterFormat_use_italic;
extern PropertyRNA &rna_TextCharacterFormat_use_underline;
extern PropertyRNA &rna_TextCharacterFormat_use_small_caps;
extern PropertyRNA &rna_TextCharacterFormat_material_index;
extern PropertyRNA &rna_TextCharacterFormat_kerning;


extern PropertyRNA &rna_SplinePoint_rna_properties;
extern PropertyRNA &rna_SplinePoint_rna_type;
extern PropertyRNA &rna_SplinePoint_select;
extern PropertyRNA &rna_SplinePoint_hide;
extern PropertyRNA &rna_SplinePoint_co;
extern PropertyRNA &rna_SplinePoint_weight;
extern PropertyRNA &rna_SplinePoint_tilt;
extern PropertyRNA &rna_SplinePoint_weight_softbody;
extern PropertyRNA &rna_SplinePoint_radius;


extern PropertyRNA &rna_BezierSplinePoint_rna_properties;
extern PropertyRNA &rna_BezierSplinePoint_rna_type;
extern PropertyRNA &rna_BezierSplinePoint_select_left_handle;
extern PropertyRNA &rna_BezierSplinePoint_select_right_handle;
extern PropertyRNA &rna_BezierSplinePoint_select_control_point;
extern PropertyRNA &rna_BezierSplinePoint_hide;
extern PropertyRNA &rna_BezierSplinePoint_handle_left_type;
extern PropertyRNA &rna_BezierSplinePoint_handle_right_type;
extern PropertyRNA &rna_BezierSplinePoint_handle_left;
extern PropertyRNA &rna_BezierSplinePoint_co;
extern PropertyRNA &rna_BezierSplinePoint_handle_right;
extern PropertyRNA &rna_BezierSplinePoint_tilt;
extern PropertyRNA &rna_BezierSplinePoint_weight_softbody;
extern PropertyRNA &rna_BezierSplinePoint_radius;


extern PropertyRNA &rna_Spline_rna_properties;
extern PropertyRNA &rna_Spline_rna_type;
extern PropertyRNA &rna_Spline_points;
extern PropertyRNA &rna_Spline_bezier_points;
extern PropertyRNA &rna_Spline_tilt_interpolation;
extern PropertyRNA &rna_Spline_radius_interpolation;
extern PropertyRNA &rna_Spline_type;
extern PropertyRNA &rna_Spline_point_count_u;
extern PropertyRNA &rna_Spline_point_count_v;
extern PropertyRNA &rna_Spline_order_u;
extern PropertyRNA &rna_Spline_order_v;
extern PropertyRNA &rna_Spline_resolution_u;
extern PropertyRNA &rna_Spline_resolution_v;
extern PropertyRNA &rna_Spline_use_cyclic_u;
extern PropertyRNA &rna_Spline_use_cyclic_v;
extern PropertyRNA &rna_Spline_use_endpoint_u;
extern PropertyRNA &rna_Spline_use_endpoint_v;
extern PropertyRNA &rna_Spline_use_bezier_u;
extern PropertyRNA &rna_Spline_use_bezier_v;
extern PropertyRNA &rna_Spline_use_smooth;
extern PropertyRNA &rna_Spline_hide;
extern PropertyRNA &rna_Spline_material_index;
extern PropertyRNA &rna_Spline_character_index;

extern FunctionRNA *rna_Spline_calc_length_func;
extern PropertyRNA &rna_Spline_calc_length_resolution;
extern PropertyRNA &rna_Spline_calc_length_length;

extern FunctionRNA *rna_Spline_valid_message_func;
extern PropertyRNA &rna_Spline_valid_message_direction;
extern PropertyRNA &rna_Spline_valid_message_result;



extern PropertyRNA &rna_SplinePoints_rna_properties;
extern PropertyRNA &rna_SplinePoints_rna_type;

extern FunctionRNA *rna_SplinePoints_add_func;
extern PropertyRNA &rna_SplinePoints_add_count;



extern PropertyRNA &rna_SplineBezierPoints_rna_properties;
extern PropertyRNA &rna_SplineBezierPoints_rna_type;

extern FunctionRNA *rna_SplineBezierPoints_add_func;
extern PropertyRNA &rna_SplineBezierPoints_add_count;


PointerRNA Curve_shape_keys_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Key, data->key);
}

static PointerRNA Curve_splines_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Spline, rna_iterator_listbase_get(iter));
}

void Curve_splines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Curve_splines;

    PropCollectionBeginFunc fn = rna_Curve_splines_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curve_splines_get(iter);
    }
}

void Curve_splines_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Curve_splines_get(iter);
    }
}

void Curve_splines_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Curve_splines_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Curve_splines_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curve_splines_get(&iter); }
    }

    Curve_splines_end(&iter);

    return found;
}

int Curve_path_duration_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->pathlen);
}

void Curve_path_duration_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->pathlen = (std::remove_reference_t<decltype(data->pathlen)>)std::clamp(value, 1, 1048574);
}

bool Curve_use_path_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void Curve_use_path_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool Curve_use_path_follow_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void Curve_use_path_follow_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool Curve_use_path_clamp_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void Curve_use_path_clamp_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool Curve_use_stretch_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void Curve_use_stretch_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool Curve_use_deform_bounds_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return !((uint64_t(data->flag) & 64) != 0);
}

void Curve_use_deform_bounds_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool Curve_use_radius_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void Curve_use_radius_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

int Curve_bevel_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevel_mode);
}

void Curve_bevel_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Curve_bevel_mode_set;
    fn(ptr, value);
}

PointerRNA Curve_bevel_profile_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveProfile, data->bevel_profile);
}

int Curve_bevel_resolution_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevresol);
}

void Curve_bevel_resolution_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevresol = (std::remove_reference_t<decltype(data->bevresol)>)std::clamp(value, 0, 32);
}

float Curve_offset_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Curve_offset_get;
    return fn(ptr);
}

void Curve_offset_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Curve_offset_set;
    fn(ptr, value);
}

float Curve_extrude_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->extrude);
}

void Curve_extrude_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->extrude = (std::remove_reference_t<decltype(data->extrude)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Curve_bevel_depth_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->bevel_radius);
}

void Curve_bevel_depth_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevel_radius = (std::remove_reference_t<decltype(data->bevel_radius)>)value;
}

int Curve_resolution_u_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolu);
}

void Curve_resolution_u_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->resolu = (std::remove_reference_t<decltype(data->resolu)>)std::clamp(value, 1, 1024);
}

int Curve_resolution_v_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolv);
}

void Curve_resolution_v_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->resolv = (std::remove_reference_t<decltype(data->resolv)>)std::clamp(value, 1, 1024);
}

int Curve_render_resolution_u_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolu_ren);
}

void Curve_render_resolution_u_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->resolu_ren = (std::remove_reference_t<decltype(data->resolu_ren)>)std::clamp(value, 0, 1024);
}

int Curve_render_resolution_v_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolv_ren);
}

void Curve_render_resolution_v_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->resolv_ren = (std::remove_reference_t<decltype(data->resolv_ren)>)std::clamp(value, 0, 1024);
}

float Curve_eval_time_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->ctime);
}

void Curve_eval_time_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->ctime = (std::remove_reference_t<decltype(data->ctime)>)value;
}

PointerRNA Curve_bevel_object_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Curve_bevelObject_get;
    return fn(ptr);
}

void Curve_bevel_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Curve_bevelObject_set;
    fn(ptr, value, reports);
}

PointerRNA Curve_taper_object_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Curve_taperObject_get;
    return fn(ptr);
}

void Curve_taper_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Curve_taperObject_set;
    fn(ptr, value, reports);
}

int Curve_dimensions_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (uint64_t(data->flag) & 1);
}

void Curve_dimensions_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Curve_dimension_set;
    fn(ptr, value);
}

int Curve_fill_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (uint64_t(data->flag) & 6);
}

void Curve_fill_mode_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(6));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

int Curve_fill_solver_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->fill_solver);
}

void Curve_fill_solver_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->fill_solver = (std::remove_reference_t<decltype(data->fill_solver)>)value;
}

int Curve_fill_rule_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->fill_rule);
}

void Curve_fill_rule_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->fill_rule = (std::remove_reference_t<decltype(data->fill_rule)>)value;
}

int Curve_twist_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->twist_mode);
}

void Curve_twist_mode_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->twist_mode = (std::remove_reference_t<decltype(data->twist_mode)>)value;
}

int Curve_taper_radius_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->taper_radius_mode);
}

void Curve_taper_radius_mode_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->taper_radius_mode = (std::remove_reference_t<decltype(data->taper_radius_mode)>)value;
}

int Curve_bevel_factor_mapping_start_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevfac1_mapping);
}

void Curve_bevel_factor_mapping_start_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevfac1_mapping = (std::remove_reference_t<decltype(data->bevfac1_mapping)>)value;
}

int Curve_bevel_factor_mapping_end_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevfac2_mapping);
}

void Curve_bevel_factor_mapping_end_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevfac2_mapping = (std::remove_reference_t<decltype(data->bevfac2_mapping)>)value;
}

float Curve_twist_smooth_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->twist_smooth);
}

void Curve_twist_smooth_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->twist_smooth = (std::remove_reference_t<decltype(data->twist_smooth)>)value;
}

bool Curve_use_fill_caps_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((uint64_t(data->flag) & 16384) != 0);
}

void Curve_use_fill_caps_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16384); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16384)); }
}

bool Curve_use_map_taper_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((uint64_t(data->flag) & 32768) != 0);
}

void Curve_use_map_taper_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32768); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32768)); }
}

bool Curve_use_auto_texspace_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((uint64_t(data->texspace_flag) & 1) != 0);
}

void Curve_use_auto_texspace_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->texspace_flag = std::remove_reference_t<decltype(data->texspace_flag)>(uint64_t(data->texspace_flag) | 1); }
    else { data->texspace_flag = std::remove_reference_t<decltype(data->texspace_flag)>(uint64_t(data->texspace_flag) & ~uint64_t(1)); }
}

void Curve_texspace_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Curve_texspace_location_get;
    fn(ptr, values);
}

void Curve_texspace_location_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Curve_texspace_location_set;
    fn(ptr, values);
}

void Curve_texspace_size_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Curve_texspace_size_get;
    fn(ptr, values);
}

void Curve_texspace_size_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Curve_texspace_size_set;
    fn(ptr, values);
}

int Curve_materials_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA Curve_materials_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Material, rna_iterator_array_dereference_get(iter));
}

void Curve_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Curve_materials;

    rna_iterator_array_begin(iter, ptr, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Curve_materials_get(iter);
    }
}

void Curve_materials_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Curve_materials_get(iter);
    }
}

void Curve_materials_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Curve_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Curve_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curve_materials_get(&iter); }
    }

    Curve_materials_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool Curve_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Curve_materials_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ID_name_length(&iter.ptr);
            if (namelen < 1024) {
                ID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                ID_name_get(&iter.ptr, name);
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
        Curve_materials_next(&iter);
    }
    Curve_materials_end(&iter);

    return found;
}

float Curve_bevel_factor_start_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->bevfac1);
}

void Curve_bevel_factor_start_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevfac1 = (std::remove_reference_t<decltype(data->bevfac1)>)std::clamp(value, 0.0f, 1.0f);
}

float Curve_bevel_factor_end_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->bevfac2);
}

void Curve_bevel_factor_end_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevfac2 = (std::remove_reference_t<decltype(data->bevfac2)>)std::clamp(value, 0.0f, 1.0f);
}

bool Curve_is_editmode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Curve_is_editmode_get;
    return fn(ptr);
}

PointerRNA Curve_animation_data_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA CurveSplines_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CurveSplines_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveSplines_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveSplines_rna_properties_get(iter);
    }
}

void CurveSplines_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveSplines_rna_properties_get(iter);
    }
}

void CurveSplines_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CurveSplines_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CurveSplines_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA CurveSplines_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Curve_active_spline_get;
    return fn(ptr);
}

void CurveSplines_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Curve_active_spline_set;
    fn(ptr, value, reports);
}

int TextCurve_align_x_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->spacemode);
}

void TextCurve_align_x_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->spacemode = (std::remove_reference_t<decltype(data->spacemode)>)value;
}

int TextCurve_align_y_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->align_y);
}

void TextCurve_align_y_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->align_y = (std::remove_reference_t<decltype(data->align_y)>)value;
}

int TextCurve_overflow_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->overflow);
}

void TextCurve_overflow_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->overflow = (std::remove_reference_t<decltype(data->overflow)>)value;
}

float TextCurve_size_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->fsize);
}

void TextCurve_size_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->fsize = (std::remove_reference_t<decltype(data->fsize)>)std::clamp(value, 0.0001000000f, 10000.0f);
}

float TextCurve_small_caps_scale_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->smallcaps_scale);
}

void TextCurve_small_caps_scale_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->smallcaps_scale = (std::remove_reference_t<decltype(data->smallcaps_scale)>)value;
}

float TextCurve_space_line_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->linedist);
}

void TextCurve_space_line_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->linedist = (std::remove_reference_t<decltype(data->linedist)>)std::clamp(value, 0.0f, 10.0f);
}

float TextCurve_space_word_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->wordspace);
}

void TextCurve_space_word_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->wordspace = (std::remove_reference_t<decltype(data->wordspace)>)std::clamp(value, 0.0f, 10.0f);
}

float TextCurve_space_character_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->spacing);
}

void TextCurve_space_character_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->spacing = (std::remove_reference_t<decltype(data->spacing)>)std::clamp(value, 0.0f, 10.0f);
}

float TextCurve_shear_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->shear);
}

void TextCurve_shear_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->shear = (std::remove_reference_t<decltype(data->shear)>)std::clamp(value, -1.0f, 1.0f);
}

float TextCurve_offset_x_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->xof);
}

void TextCurve_offset_x_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->xof = (std::remove_reference_t<decltype(data->xof)>)value;
}

float TextCurve_offset_y_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->yof);
}

void TextCurve_offset_y_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->yof = (std::remove_reference_t<decltype(data->yof)>)value;
}

float TextCurve_underline_position_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->ulpos);
}

void TextCurve_underline_position_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->ulpos = (std::remove_reference_t<decltype(data->ulpos)>)std::clamp(value, -0.2000000030f, 0.8000000119f);
}

float TextCurve_underline_height_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->ulheight);
}

void TextCurve_underline_height_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->ulheight = (std::remove_reference_t<decltype(data->ulheight)>)std::clamp(value, 0.0f, 0.8000000119f);
}

int TextCurve_text_boxes_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (data->tb == nullptr) ? 0 : data->totbox;
}

static PointerRNA TextCurve_text_boxes_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_TextBox, rna_iterator_array_get(iter));
}

void TextCurve_text_boxes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_TextCurve_text_boxes;

    rna_iterator_array_begin(iter, ptr, data->tb, sizeof(data->tb[0]), data->totbox, 0, nullptr);

    if (iter->valid) {
        iter->ptr = TextCurve_text_boxes_get(iter);
    }
}

void TextCurve_text_boxes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = TextCurve_text_boxes_get(iter);
    }
}

void TextCurve_text_boxes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool TextCurve_text_boxes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    TextCurve_text_boxes_begin(&iter, ptr);

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
        if (found) { *r_ptr = TextCurve_text_boxes_get(&iter); }
    }

    TextCurve_text_boxes_end(&iter);

    return found;
}

int TextCurve_active_textbox_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->actbox);
}

void TextCurve_active_textbox_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_Curve_active_textbox_index_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->actbox = (std::remove_reference_t<decltype(data->actbox)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

void TextCurve_family_get(PointerRNA *ptr, char *value)
{
    Curve *data = (Curve *)(ptr->data);
    BLI_assert(strlen(data->family) < 256);
    strcpy(value, data->family);
}

int TextCurve_family_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return strlen(data->family);
}

void TextCurve_family_set(PointerRNA *ptr, const char *value)
{
    Curve *data = (Curve *)(ptr->data);
    BLI_strncpy_utf8(data->family, value, 256);
}

void TextCurve_body_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Curve_body_get;
    fn(ptr, value);
}

int TextCurve_body_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Curve_body_length;
    return fn(ptr);
}

void TextCurve_body_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Curve_body_set;
    fn(ptr, value);
}

int TextCurve_body_format_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (data->strinfo == nullptr) ? 0 : data->len_char32;
}

static PointerRNA TextCurve_body_format_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_TextCharacterFormat, rna_iterator_array_get(iter));
}

void TextCurve_body_format_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_TextCurve_body_format;

    rna_iterator_array_begin(iter, ptr, data->strinfo, sizeof(data->strinfo[0]), data->len_char32, 0, nullptr);

    if (iter->valid) {
        iter->ptr = TextCurve_body_format_get(iter);
    }
}

void TextCurve_body_format_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = TextCurve_body_format_get(iter);
    }
}

void TextCurve_body_format_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool TextCurve_body_format_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    TextCurve_body_format_begin(&iter, ptr);

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
        if (found) { *r_ptr = TextCurve_body_format_get(&iter); }
    }

    TextCurve_body_format_end(&iter);

    return found;
}

PointerRNA TextCurve_follow_curve_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->textoncurve);
}

void TextCurve_follow_curve_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->textoncurve = value.data;
}

PointerRNA TextCurve_font_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_VectorFont, data->vfont);
}

void TextCurve_font_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->vfont) {
        id_us_min((ID *)data->vfont);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->vfont = value.data;
}

PointerRNA TextCurve_font_bold_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_VectorFont, data->vfontb);
}

void TextCurve_font_bold_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->vfontb) {
        id_us_min((ID *)data->vfontb);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->vfontb = value.data;
}

PointerRNA TextCurve_font_italic_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_VectorFont, data->vfonti);
}

void TextCurve_font_italic_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->vfonti) {
        id_us_min((ID *)data->vfonti);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->vfonti = value.data;
}

PointerRNA TextCurve_font_bold_italic_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_VectorFont, data->vfontbi);
}

void TextCurve_font_bold_italic_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->vfontbi) {
        id_us_min((ID *)data->vfontbi);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->vfontbi = value.data;
}

PointerRNA TextCurve_edit_format_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_TextCharacterFormat, &data->curinfo);
}

bool TextCurve_use_fast_edit_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void TextCurve_use_fast_edit_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool TextCurve_is_select_bold_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextCurve_is_select_bold_get;
    return fn(ptr);
}

bool TextCurve_is_select_italic_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextCurve_is_select_italic_get;
    return fn(ptr);
}

bool TextCurve_is_select_underline_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextCurve_is_select_underline_get;
    return fn(ptr);
}

bool TextCurve_is_select_smallcaps_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextCurve_is_select_smallcaps_get;
    return fn(ptr);
}

bool TextCurve_has_selection_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextCurve_has_selection_get;
    return fn(ptr);
}

static PointerRNA TextBox_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void TextBox_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_TextBox_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = TextBox_rna_properties_get(iter);
    }
}

void TextBox_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = TextBox_rna_properties_get(iter);
    }
}

void TextBox_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool TextBox_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA TextBox_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float TextBox_x_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->x);
}

void TextBox_x_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
    data->x = (std::remove_reference_t<decltype(data->x)>)value;
}

float TextBox_y_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->y);
}

void TextBox_y_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
    data->y = (std::remove_reference_t<decltype(data->y)>)value;
}

float TextBox_width_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->w);
}

void TextBox_width_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
    data->w = (std::remove_reference_t<decltype(data->w)>)std::clamp(value, 0.0f, FLT_MAX);
}

float TextBox_height_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->h);
}

void TextBox_height_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
    data->h = (std::remove_reference_t<decltype(data->h)>)std::clamp(value, 0.0f, FLT_MAX);
}

static PointerRNA TextCharacterFormat_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void TextCharacterFormat_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_TextCharacterFormat_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = TextCharacterFormat_rna_properties_get(iter);
    }
}

void TextCharacterFormat_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = TextCharacterFormat_rna_properties_get(iter);
    }
}

void TextCharacterFormat_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool TextCharacterFormat_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA TextCharacterFormat_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool TextCharacterFormat_use_bold_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void TextCharacterFormat_use_bold_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool TextCharacterFormat_use_italic_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void TextCharacterFormat_use_italic_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool TextCharacterFormat_use_underline_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void TextCharacterFormat_use_underline_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool TextCharacterFormat_use_small_caps_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void TextCharacterFormat_use_small_caps_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int TextCharacterFormat_material_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ChariInfo_material_index_get;
    return fn(ptr);
}

void TextCharacterFormat_material_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_ChariInfo_material_index_set;
    fn(ptr, value);
}

float TextCharacterFormat_kerning_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (float)(data->kern);
}

void TextCharacterFormat_kerning_set(PointerRNA *ptr, float value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    data->kern = (std::remove_reference_t<decltype(data->kern)>)value;
}

static PointerRNA SplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void SplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SplinePoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SplinePoint_rna_properties_get(iter);
    }
}

void SplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SplinePoint_rna_properties_get(iter);
    }
}

void SplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SplinePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA SplinePoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool SplinePoint_select_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return ((uint64_t(data->f1) & 1) != 0);
}

void SplinePoint_select_set(PointerRNA *ptr, bool value)
{
    BPoint *data = (BPoint *)(ptr->data);
    if (value) { data->f1 = std::remove_reference_t<decltype(data->f1)>(uint64_t(data->f1) | 1); }
    else { data->f1 = std::remove_reference_t<decltype(data->f1)>(uint64_t(data->f1) & ~uint64_t(1)); }
}

bool SplinePoint_hide_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (bool)(data->hide);
}

void SplinePoint_hide_set(PointerRNA *ptr, bool value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->hide = (std::remove_reference_t<decltype(data->hide)>)value;
}

void SplinePoint_co_get(PointerRNA *ptr, float values[4])
{
    BPoint *data = (BPoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->vec)[i]);
    }
}

void SplinePoint_co_set(PointerRNA *ptr, const float values[4])
{
    BPoint *data = (BPoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->vec)[i] = values[i];
    }
}

float SplinePoint_weight_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->vec[3]);
}

void SplinePoint_weight_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->vec[3] = (std::remove_reference_t<decltype(data->vec[3])>)value;
}

float SplinePoint_tilt_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->tilt);
}

void SplinePoint_tilt_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->tilt = (std::remove_reference_t<decltype(data->tilt)>)std::clamp(value, -376.9911193848f, 376.9911193848f);
}

float SplinePoint_weight_softbody_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->weight);
}

void SplinePoint_weight_softbody_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0099999998f, 100.0f);
}

float SplinePoint_radius_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->radius);
}

void SplinePoint_radius_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->radius = (std::remove_reference_t<decltype(data->radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

static PointerRNA BezierSplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BezierSplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BezierSplinePoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BezierSplinePoint_rna_properties_get(iter);
    }
}

void BezierSplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BezierSplinePoint_rna_properties_get(iter);
    }
}

void BezierSplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BezierSplinePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BezierSplinePoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool BezierSplinePoint_select_left_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return ((uint64_t(data->f1) & 1) != 0);
}

void BezierSplinePoint_select_left_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f1 = std::remove_reference_t<decltype(data->f1)>(uint64_t(data->f1) | 1); }
    else { data->f1 = std::remove_reference_t<decltype(data->f1)>(uint64_t(data->f1) & ~uint64_t(1)); }
}

bool BezierSplinePoint_select_right_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return ((uint64_t(data->f3) & 1) != 0);
}

void BezierSplinePoint_select_right_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f3 = std::remove_reference_t<decltype(data->f3)>(uint64_t(data->f3) | 1); }
    else { data->f3 = std::remove_reference_t<decltype(data->f3)>(uint64_t(data->f3) & ~uint64_t(1)); }
}

bool BezierSplinePoint_select_control_point_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return ((uint64_t(data->f2) & 1) != 0);
}

void BezierSplinePoint_select_control_point_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f2 = std::remove_reference_t<decltype(data->f2)>(uint64_t(data->f2) | 1); }
    else { data->f2 = std::remove_reference_t<decltype(data->f2)>(uint64_t(data->f2) & ~uint64_t(1)); }
}

bool BezierSplinePoint_hide_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (bool)(data->hide);
}

void BezierSplinePoint_hide_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->hide = (std::remove_reference_t<decltype(data->hide)>)value;
}

int BezierSplinePoint_handle_left_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h1);
}

void BezierSplinePoint_handle_left_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->h1 = (std::remove_reference_t<decltype(data->h1)>)value;
}

int BezierSplinePoint_handle_right_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h2);
}

void BezierSplinePoint_handle_right_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->h2 = (std::remove_reference_t<decltype(data->h2)>)value;
}

void BezierSplinePoint_handle_left_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_BezTriple_handle1_get;
    fn(ptr, values);
}

void BezierSplinePoint_handle_left_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_BezTriple_handle1_set;
    fn(ptr, values);
}

void BezierSplinePoint_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_BezTriple_ctrlpoint_get;
    fn(ptr, values);
}

void BezierSplinePoint_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_BezTriple_ctrlpoint_set;
    fn(ptr, values);
}

void BezierSplinePoint_handle_right_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_BezTriple_handle2_get;
    fn(ptr, values);
}

void BezierSplinePoint_handle_right_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_BezTriple_handle2_set;
    fn(ptr, values);
}

float BezierSplinePoint_tilt_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->tilt);
}

void BezierSplinePoint_tilt_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->tilt = (std::remove_reference_t<decltype(data->tilt)>)std::clamp(value, -376.9911193848f, 376.9911193848f);
}

float BezierSplinePoint_weight_softbody_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->weight);
}

void BezierSplinePoint_weight_softbody_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0099999998f, 100.0f);
}

float BezierSplinePoint_radius_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->radius);
}

void BezierSplinePoint_radius_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->radius = (std::remove_reference_t<decltype(data->radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

static PointerRNA Spline_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Spline_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Spline_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Spline_rna_properties_get(iter);
    }
}

void Spline_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Spline_rna_properties_get(iter);
    }
}

void Spline_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Spline_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Spline_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int Spline_points_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Nurb_length;
    return fn(ptr);
}

static PointerRNA Spline_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_SplinePoint, rna_iterator_array_get(iter));
}

void Spline_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Spline_points;

    PropCollectionBeginFunc fn = rna_BPoint_array_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Spline_points_get(iter);
    }
}

void Spline_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Spline_points_get(iter);
    }
}

void Spline_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Spline_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Spline_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = Spline_points_get(&iter); }
    }

    Spline_points_end(&iter);

    return found;
}

int Spline_bezier_points_length(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (data->bezt == nullptr) ? 0 : data->pntsu;
}

static PointerRNA Spline_bezier_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_BezierSplinePoint, rna_iterator_array_get(iter));
}

void Spline_bezier_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Spline_bezier_points;

    rna_iterator_array_begin(iter, ptr, data->bezt, sizeof(data->bezt[0]), data->pntsu, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Spline_bezier_points_get(iter);
    }
}

void Spline_bezier_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Spline_bezier_points_get(iter);
    }
}

void Spline_bezier_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Spline_bezier_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Spline_bezier_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = Spline_bezier_points_get(&iter); }
    }

    Spline_bezier_points_end(&iter);

    return found;
}

int Spline_tilt_interpolation_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->tilt_interp);
}

void Spline_tilt_interpolation_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->tilt_interp = (std::remove_reference_t<decltype(data->tilt_interp)>)value;
}

int Spline_radius_interpolation_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->radius_interp);
}

void Spline_radius_interpolation_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->radius_interp = (std::remove_reference_t<decltype(data->radius_interp)>)value;
}

int Spline_type_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->type);
}

void Spline_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Nurb_type_set;
    fn(ptr, value);
}

int Spline_point_count_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->pntsu);
}

int Spline_point_count_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->pntsv);
}

int Spline_order_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->orderu);
}

void Spline_order_u_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->orderu = (std::remove_reference_t<decltype(data->orderu)>)std::clamp(value, 2, 64);
}

int Spline_order_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->orderv);
}

void Spline_order_v_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->orderv = (std::remove_reference_t<decltype(data->orderv)>)std::clamp(value, 2, 64);
}

int Spline_resolution_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->resolu);
}

void Spline_resolution_u_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->resolu = (std::remove_reference_t<decltype(data->resolu)>)std::clamp(value, 1, 1024);
}

int Spline_resolution_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->resolv);
}

void Spline_resolution_v_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->resolv = (std::remove_reference_t<decltype(data->resolv)>)std::clamp(value, 1, 1024);
}

bool Spline_use_cyclic_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return ((uint64_t(data->flagu) & 1) != 0);
}

void Spline_use_cyclic_u_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagu = std::remove_reference_t<decltype(data->flagu)>(uint64_t(data->flagu) | 1); }
    else { data->flagu = std::remove_reference_t<decltype(data->flagu)>(uint64_t(data->flagu) & ~uint64_t(1)); }
}

bool Spline_use_cyclic_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return ((uint64_t(data->flagv) & 1) != 0);
}

void Spline_use_cyclic_v_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagv = std::remove_reference_t<decltype(data->flagv)>(uint64_t(data->flagv) | 1); }
    else { data->flagv = std::remove_reference_t<decltype(data->flagv)>(uint64_t(data->flagv) & ~uint64_t(1)); }
}

bool Spline_use_endpoint_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return ((uint64_t(data->flagu) & 2) != 0);
}

void Spline_use_endpoint_u_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagu = std::remove_reference_t<decltype(data->flagu)>(uint64_t(data->flagu) | 2); }
    else { data->flagu = std::remove_reference_t<decltype(data->flagu)>(uint64_t(data->flagu) & ~uint64_t(2)); }
}

bool Spline_use_endpoint_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return ((uint64_t(data->flagv) & 2) != 0);
}

void Spline_use_endpoint_v_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagv = std::remove_reference_t<decltype(data->flagv)>(uint64_t(data->flagv) | 2); }
    else { data->flagv = std::remove_reference_t<decltype(data->flagv)>(uint64_t(data->flagv) & ~uint64_t(2)); }
}

bool Spline_use_bezier_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return ((uint64_t(data->flagu) & 4) != 0);
}

void Spline_use_bezier_u_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagu = std::remove_reference_t<decltype(data->flagu)>(uint64_t(data->flagu) | 4); }
    else { data->flagu = std::remove_reference_t<decltype(data->flagu)>(uint64_t(data->flagu) & ~uint64_t(4)); }
}

bool Spline_use_bezier_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return ((uint64_t(data->flagv) & 4) != 0);
}

void Spline_use_bezier_v_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagv = std::remove_reference_t<decltype(data->flagv)>(uint64_t(data->flagv) | 4); }
    else { data->flagv = std::remove_reference_t<decltype(data->flagv)>(uint64_t(data->flagv) & ~uint64_t(4)); }
}

bool Spline_use_smooth_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void Spline_use_smooth_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool Spline_hide_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return ((uint64_t(data->hide) & 1) != 0);
}

void Spline_hide_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->hide = std::remove_reference_t<decltype(data->hide)>(uint64_t(data->hide) | 1); }
    else { data->hide = std::remove_reference_t<decltype(data->hide)>(uint64_t(data->hide) & ~uint64_t(1)); }
}

int Spline_material_index_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->mat_nr);
}

void Spline_material_index_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_Curve_material_index_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->mat_nr = (std::remove_reference_t<decltype(data->mat_nr)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

int Spline_character_index_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->charidx);
}

static PointerRNA SplinePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void SplinePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SplinePoints_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SplinePoints_rna_properties_get(iter);
    }
}

void SplinePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SplinePoints_rna_properties_get(iter);
    }
}

void SplinePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SplinePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA SplinePoints_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA SplineBezierPoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void SplineBezierPoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SplineBezierPoints_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SplineBezierPoints_rna_properties_get(iter);
    }
}

void SplineBezierPoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SplineBezierPoints_rna_properties_get(iter);
    }
}

void SplineBezierPoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SplineBezierPoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA SplineBezierPoints_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Curve_transform_func(Curve *_self, float matrix[16], bool shape_keys)
{
	rna_Curve_transform(_self, matrix, shape_keys);
}

static void Curve_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curve *_self;
	const float *matrix;
	bool shape_keys;
	char *_data;
	
	_self = (Curve *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	shape_keys = *((bool *)_data);
	
	rna_Curve_transform(_self, matrix, shape_keys);
}

bool Curve_validate_material_indices_func(Curve *_self)
{
	return BKE_curve_material_index_validate(_self);
}

static void Curve_validate_material_indices_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curve *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (Curve *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = BKE_curve_material_index_validate(_self);
	*((bool *)_retdata) = result;
}

void Curve_update_gpu_tag_func(Curve *_self)
{
	rna_Curve_update_gpu_tag(_self);
}

static void Curve_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curve *_self;
	_self = (Curve *)_ptr->data;
	
	rna_Curve_update_gpu_tag(_self);
}

/* Repeated prototypes to detect errors */

void rna_Curve_transform(Curve *_self, float matrix[16], bool shape_keys);
bool BKE_curve_material_index_validate(Curve *_self);
void rna_Curve_update_gpu_tag(Curve *_self);

Nurb *CurveSplines_new_func(Curve *_self, int type)
{
	return rna_Curve_spline_new(_self, type);
}

static void CurveSplines_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curve *_self;
	int type;
	Nurb *spline;
	char *_data, *_retdata;
	
	_self = (Curve *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	spline = rna_Curve_spline_new(_self, type);
	*((Nurb **)_retdata) = spline;
}

void CurveSplines_remove_func(Curve *_self, ReportList *reports, PointerRNA *spline)
{
	rna_Curve_spline_remove(_self, reports, spline);
}

static void CurveSplines_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curve *_self;
	PointerRNA *spline;
	char *_data;
	
	_self = (Curve *)_ptr->data;
	_data = (char *)_parms->data;
	spline = *((PointerRNA **)_data);
	
	rna_Curve_spline_remove(_self, reports, spline);
}

void CurveSplines_clear_func(Curve *_self)
{
	rna_Curve_spline_clear(_self);
}

static void CurveSplines_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Curve *_self;
	_self = (Curve *)_ptr->data;
	
	rna_Curve_spline_clear(_self);
}

/* Repeated prototypes to detect errors */

Nurb *rna_Curve_spline_new(Curve *_self, int type);
void rna_Curve_spline_remove(Curve *_self, ReportList *reports, PointerRNA *spline);
void rna_Curve_spline_clear(Curve *_self);







float Spline_calc_length_func(Nurb *_self, int resolution)
{
	return rna_Nurb_calc_length(_self, resolution);
}

static void Spline_calc_length_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Nurb *_self;
	int resolution;
	float length;
	char *_data, *_retdata;
	
	_self = (Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	resolution = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	length = rna_Nurb_calc_length(_self, resolution);
	*((float *)_retdata) = length;
}

void Spline_valid_message_func(Nurb *_self, int direction, int *result_num, const char * *result)
{
	rna_Nurb_valid_message(_self, direction, result, result_num);
}

static void Spline_valid_message_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Nurb *_self;
	int direction;
	int *result_num;
	const char * *result;
	char *_data;
	
	_self = (Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	direction = *((int *)_data);
	_data += 8;
	result_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	result = ((const char * *)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Nurb_valid_message(_self, direction, result, result_num);
}

/* Repeated prototypes to detect errors */

float rna_Nurb_calc_length(Nurb *_self, int resolution);
void rna_Nurb_valid_message(Nurb *_self, int direction, int *result_num, const char * *result);

void SplinePoints_add_func(ID *_selfid, Nurb *_self, ReportList *reports, int count)
{
	rna_Curve_spline_points_add(_selfid, _self, reports, count);
}

static void SplinePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Nurb *_self;
	int count;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_Curve_spline_points_add(_selfid, _self, reports, count);
}

/* Repeated prototypes to detect errors */

void rna_Curve_spline_points_add(ID *_selfid, Nurb *_self, ReportList *reports, int count);

void SplineBezierPoints_add_func(ID *_selfid, Nurb *_self, ReportList *reports, int count)
{
	rna_Curve_spline_bezpoints_add(_selfid, _self, reports, count);
}

static void SplineBezierPoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Nurb *_self;
	int count;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_Curve_spline_bezpoints_add(_selfid, _self, reports, count);
}

/* Repeated prototypes to detect errors */

void rna_Curve_spline_bezpoints_add(ID *_selfid, Nurb *_self, ReportList *reports, int count);

/* Curve */
static PointerPropertyRNA rna_Curve_shape_keys_;
PropertyRNA &rna_Curve_shape_keys = reinterpret_cast<PropertyRNA &>(rna_Curve_shape_keys_);

static CollectionPropertyRNA rna_Curve_splines_;
PropertyRNA &rna_Curve_splines = reinterpret_cast<PropertyRNA &>(rna_Curve_splines_);

static IntPropertyRNA rna_Curve_path_duration_;
PropertyRNA &rna_Curve_path_duration = reinterpret_cast<PropertyRNA &>(rna_Curve_path_duration_);

static BoolPropertyRNA rna_Curve_use_path_;
PropertyRNA &rna_Curve_use_path = reinterpret_cast<PropertyRNA &>(rna_Curve_use_path_);

static BoolPropertyRNA rna_Curve_use_path_follow_;
PropertyRNA &rna_Curve_use_path_follow = reinterpret_cast<PropertyRNA &>(rna_Curve_use_path_follow_);

static BoolPropertyRNA rna_Curve_use_path_clamp_;
PropertyRNA &rna_Curve_use_path_clamp = reinterpret_cast<PropertyRNA &>(rna_Curve_use_path_clamp_);

static BoolPropertyRNA rna_Curve_use_stretch_;
PropertyRNA &rna_Curve_use_stretch = reinterpret_cast<PropertyRNA &>(rna_Curve_use_stretch_);

static BoolPropertyRNA rna_Curve_use_deform_bounds_;
PropertyRNA &rna_Curve_use_deform_bounds = reinterpret_cast<PropertyRNA &>(rna_Curve_use_deform_bounds_);

static BoolPropertyRNA rna_Curve_use_radius_;
PropertyRNA &rna_Curve_use_radius = reinterpret_cast<PropertyRNA &>(rna_Curve_use_radius_);

static EnumPropertyRNA rna_Curve_bevel_mode_;
PropertyRNA &rna_Curve_bevel_mode = reinterpret_cast<PropertyRNA &>(rna_Curve_bevel_mode_);

static PointerPropertyRNA rna_Curve_bevel_profile_;
PropertyRNA &rna_Curve_bevel_profile = reinterpret_cast<PropertyRNA &>(rna_Curve_bevel_profile_);

static IntPropertyRNA rna_Curve_bevel_resolution_;
PropertyRNA &rna_Curve_bevel_resolution = reinterpret_cast<PropertyRNA &>(rna_Curve_bevel_resolution_);

static FloatPropertyRNA rna_Curve_offset_;
PropertyRNA &rna_Curve_offset = reinterpret_cast<PropertyRNA &>(rna_Curve_offset_);

static FloatPropertyRNA rna_Curve_extrude_;
PropertyRNA &rna_Curve_extrude = reinterpret_cast<PropertyRNA &>(rna_Curve_extrude_);

static FloatPropertyRNA rna_Curve_bevel_depth_;
PropertyRNA &rna_Curve_bevel_depth = reinterpret_cast<PropertyRNA &>(rna_Curve_bevel_depth_);

static IntPropertyRNA rna_Curve_resolution_u_;
PropertyRNA &rna_Curve_resolution_u = reinterpret_cast<PropertyRNA &>(rna_Curve_resolution_u_);

static IntPropertyRNA rna_Curve_resolution_v_;
PropertyRNA &rna_Curve_resolution_v = reinterpret_cast<PropertyRNA &>(rna_Curve_resolution_v_);

static IntPropertyRNA rna_Curve_render_resolution_u_;
PropertyRNA &rna_Curve_render_resolution_u = reinterpret_cast<PropertyRNA &>(rna_Curve_render_resolution_u_);

static IntPropertyRNA rna_Curve_render_resolution_v_;
PropertyRNA &rna_Curve_render_resolution_v = reinterpret_cast<PropertyRNA &>(rna_Curve_render_resolution_v_);

static FloatPropertyRNA rna_Curve_eval_time_;
PropertyRNA &rna_Curve_eval_time = reinterpret_cast<PropertyRNA &>(rna_Curve_eval_time_);

static PointerPropertyRNA rna_Curve_bevel_object_;
PropertyRNA &rna_Curve_bevel_object = reinterpret_cast<PropertyRNA &>(rna_Curve_bevel_object_);

static PointerPropertyRNA rna_Curve_taper_object_;
PropertyRNA &rna_Curve_taper_object = reinterpret_cast<PropertyRNA &>(rna_Curve_taper_object_);

static EnumPropertyRNA rna_Curve_dimensions_;
PropertyRNA &rna_Curve_dimensions = reinterpret_cast<PropertyRNA &>(rna_Curve_dimensions_);

static EnumPropertyRNA rna_Curve_fill_mode_;
PropertyRNA &rna_Curve_fill_mode = reinterpret_cast<PropertyRNA &>(rna_Curve_fill_mode_);

static EnumPropertyRNA rna_Curve_fill_solver_;
PropertyRNA &rna_Curve_fill_solver = reinterpret_cast<PropertyRNA &>(rna_Curve_fill_solver_);

static EnumPropertyRNA rna_Curve_fill_rule_;
PropertyRNA &rna_Curve_fill_rule = reinterpret_cast<PropertyRNA &>(rna_Curve_fill_rule_);

static EnumPropertyRNA rna_Curve_twist_mode_;
PropertyRNA &rna_Curve_twist_mode = reinterpret_cast<PropertyRNA &>(rna_Curve_twist_mode_);

static EnumPropertyRNA rna_Curve_taper_radius_mode_;
PropertyRNA &rna_Curve_taper_radius_mode = reinterpret_cast<PropertyRNA &>(rna_Curve_taper_radius_mode_);

static EnumPropertyRNA rna_Curve_bevel_factor_mapping_start_;
PropertyRNA &rna_Curve_bevel_factor_mapping_start = reinterpret_cast<PropertyRNA &>(rna_Curve_bevel_factor_mapping_start_);

static EnumPropertyRNA rna_Curve_bevel_factor_mapping_end_;
PropertyRNA &rna_Curve_bevel_factor_mapping_end = reinterpret_cast<PropertyRNA &>(rna_Curve_bevel_factor_mapping_end_);

static FloatPropertyRNA rna_Curve_twist_smooth_;
PropertyRNA &rna_Curve_twist_smooth = reinterpret_cast<PropertyRNA &>(rna_Curve_twist_smooth_);

static BoolPropertyRNA rna_Curve_use_fill_caps_;
PropertyRNA &rna_Curve_use_fill_caps = reinterpret_cast<PropertyRNA &>(rna_Curve_use_fill_caps_);

static BoolPropertyRNA rna_Curve_use_map_taper_;
PropertyRNA &rna_Curve_use_map_taper = reinterpret_cast<PropertyRNA &>(rna_Curve_use_map_taper_);

static BoolPropertyRNA rna_Curve_use_auto_texspace_;
PropertyRNA &rna_Curve_use_auto_texspace = reinterpret_cast<PropertyRNA &>(rna_Curve_use_auto_texspace_);

static FloatPropertyRNA rna_Curve_texspace_location_;
PropertyRNA &rna_Curve_texspace_location = reinterpret_cast<PropertyRNA &>(rna_Curve_texspace_location_);

static FloatPropertyRNA rna_Curve_texspace_size_;
PropertyRNA &rna_Curve_texspace_size = reinterpret_cast<PropertyRNA &>(rna_Curve_texspace_size_);

static CollectionPropertyRNA rna_Curve_materials_;
PropertyRNA &rna_Curve_materials = reinterpret_cast<PropertyRNA &>(rna_Curve_materials_);

static FloatPropertyRNA rna_Curve_bevel_factor_start_;
PropertyRNA &rna_Curve_bevel_factor_start = reinterpret_cast<PropertyRNA &>(rna_Curve_bevel_factor_start_);

static FloatPropertyRNA rna_Curve_bevel_factor_end_;
PropertyRNA &rna_Curve_bevel_factor_end = reinterpret_cast<PropertyRNA &>(rna_Curve_bevel_factor_end_);

static BoolPropertyRNA rna_Curve_is_editmode_;
PropertyRNA &rna_Curve_is_editmode = reinterpret_cast<PropertyRNA &>(rna_Curve_is_editmode_);

static PointerPropertyRNA rna_Curve_animation_data_;
PropertyRNA &rna_Curve_animation_data = reinterpret_cast<PropertyRNA &>(rna_Curve_animation_data_);

static FloatPropertyRNA rna_Curve_transform_matrix_;
PropertyRNA &rna_Curve_transform_matrix = reinterpret_cast<PropertyRNA &>(rna_Curve_transform_matrix_);

static BoolPropertyRNA rna_Curve_transform_shape_keys_;
PropertyRNA &rna_Curve_transform_shape_keys = reinterpret_cast<PropertyRNA &>(rna_Curve_transform_shape_keys_);

FunctionRNA *rna_Curve_transform_func;
static BoolPropertyRNA rna_Curve_validate_material_indices_result_;
PropertyRNA &rna_Curve_validate_material_indices_result = reinterpret_cast<PropertyRNA &>(rna_Curve_validate_material_indices_result_);

FunctionRNA *rna_Curve_validate_material_indices_func;
FunctionRNA *rna_Curve_update_gpu_tag_func;
StructRNA *RNA_Curve;
void register_struct_Curve(BlenderRNA &brna)
{
	rna_Curve_shape_keys_ = {
		{&rna_Curve_splines, 	nullptr,
		-1, "shape_keys", 8388672, 1, 0, 32, 0, PropertyPathTemplateType(0), "Shape Keys",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_shape_keys_get, nullptr, nullptr, nullptr,RNA_Key
	};

	rna_Curve_splines_ = {
		{&rna_Curve_path_duration, 	&rna_Curve_shape_keys,
		-1, "splines", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Splines",
		"Collection of splines in this curve data object",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_CurveSplines},
		Curve_splines_begin, Curve_splines_next, Curve_splines_end, Curve_splines_get, nullptr, Curve_splines_lookup_int, nullptr, nullptr, RNA_Spline
	};

	rna_Curve_path_duration_ = {
		{&rna_Curve_use_path, 	&rna_Curve_splines,
		-1, "path_duration", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Path Duration",
		"The number of frames that are needed to traverse the path, defining the maximum value for the \'Evaluation Time\' setting",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, pathlen), RawPropertyType(0), nullptr},
		Curve_path_duration_get, Curve_path_duration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 1048574, 1, 1048574, 1, nullptr, nullptr, 100, nullptr
	};

	rna_Curve_use_path_ = {
		{&rna_Curve_use_path_follow, 	&rna_Curve_path_duration,
		-1, "use_path", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Path",
		"Enable the curve to become a translation path",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_use_path_get, Curve_use_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curve_use_path_follow_ = {
		{&rna_Curve_use_path_clamp, 	&rna_Curve_use_path,
		-1, "use_path_follow", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Follow",
		"Make curve path children rotate along the path",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_use_path_follow_get, Curve_use_path_follow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curve_use_path_clamp_ = {
		{&rna_Curve_use_stretch, 	&rna_Curve_use_path_follow,
		-1, "use_path_clamp", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clamp",
		"Clamp the curve path children so they cannot travel past the start/end point of the curve",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_use_path_clamp_get, Curve_use_path_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curve_use_stretch_ = {
		{&rna_Curve_use_deform_bounds, 	&rna_Curve_use_path_clamp,
		-1, "use_stretch", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stretch",
		"Option for curve-deform: make deformed child stretch along entire path",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_use_stretch_get, Curve_use_stretch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curve_use_deform_bounds_ = {
		{&rna_Curve_use_radius, 	&rna_Curve_use_stretch,
		-1, "use_deform_bounds", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bounds Clamp",
		"Option for curve-deform: Use the mesh bounds to clamp the deformation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_use_deform_bounds_get, Curve_use_deform_bounds_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curve_use_radius_ = {
		{&rna_Curve_bevel_mode, 	&rna_Curve_use_deform_bounds,
		-1, "use_radius", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Radius",
		"Option for paths and curve-deform: apply the curve radius to objects following it and to deformed objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_use_radius_get, Curve_use_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_Curve_bevel_mode_items[4] = {
		{0, "ROUND", 0, "Round", "Use circle for the section of the curve\'s bevel geometry"	},
		{1, "OBJECT", 0, "Object", "Use an object for the section of the curve\'s bevel geometry segment"	},
		{2, "PROFILE", 0, "Profile", "Use a custom profile for each quarter of curve\'s bevel geometry"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Curve_bevel_mode_ = {
		{&rna_Curve_bevel_profile, 	&rna_Curve_use_radius,
		-1, "bevel_mode", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bevel Mode",
		"Determine how to build the curve\'s bevel geometry",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_bevel_resolution_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_bevel_mode_get, Curve_bevel_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Curve_bevel_mode_items, 3, 0
	};

	rna_Curve_bevel_profile_ = {
		{&rna_Curve_bevel_resolution, 	&rna_Curve_bevel_mode,
		-1, "bevel_profile", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Custom Profile Path",
		"The path for the curve\'s custom profile",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_bevel_profile_get, nullptr, nullptr, nullptr,RNA_CurveProfile
	};

	rna_Curve_bevel_resolution_ = {
		{&rna_Curve_offset, 	&rna_Curve_bevel_profile,
		-1, "bevel_resolution", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bevel Resolution",
		"The number of segments in each quarter-circle of the bevel",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_bevel_resolution_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, bevresol), RawPropertyType(1), nullptr},
		Curve_bevel_resolution_get, Curve_bevel_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32, 0, 32, 1, nullptr, nullptr, 4, nullptr
	};

	rna_Curve_offset_ = {
		{&rna_Curve_extrude, 	&rna_Curve_bevel_resolution,
		-1, "offset", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Offset",
		"Distance to move the curve parallel to its normals",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_offset_get, Curve_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Curve_extrude_ = {
		{&rna_Curve_bevel_depth, 	&rna_Curve_offset,
		-1, "extrude", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Extrude",
		"Length of the depth added in the local Z direction along the curve, perpendicular to its normals",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, extrude), RawPropertyType(5), nullptr},
		Curve_extrude_get, Curve_extrude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Curve_bevel_depth_ = {
		{&rna_Curve_resolution_u, 	&rna_Curve_extrude,
		-1, "bevel_depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bevel Depth",
		"Radius of the bevel geometry, not including extrusion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, bevel_radius), RawPropertyType(5), nullptr},
		Curve_bevel_depth_get, Curve_bevel_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Curve_resolution_u_ = {
		{&rna_Curve_resolution_v, 	&rna_Curve_bevel_depth,
		-1, "resolution_u", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution U",
		"Number of computed points in the U direction between every pair of control points",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_resolution_u_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, resolu), RawPropertyType(1), nullptr},
		Curve_resolution_u_get, Curve_resolution_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 64, 1, 1024, 1, nullptr, nullptr, 12, nullptr
	};

	rna_Curve_resolution_v_ = {
		{&rna_Curve_render_resolution_u, 	&rna_Curve_resolution_u,
		-1, "resolution_v", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution V",
		"The number of computed points in the V direction between every pair of control points",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_resolution_v_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, resolv), RawPropertyType(1), nullptr},
		Curve_resolution_v_get, Curve_resolution_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 1024, 1, 1024, 1, nullptr, nullptr, 12, nullptr
	};

	rna_Curve_render_resolution_u_ = {
		{&rna_Curve_render_resolution_v, 	&rna_Curve_resolution_v,
		-1, "render_resolution_u", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Render Resolution U",
		"Surface resolution in U direction used while rendering (zero uses preview resolution)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, resolu_ren), RawPropertyType(1), nullptr},
		Curve_render_resolution_u_get, Curve_render_resolution_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 64, 0, 1024, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Curve_render_resolution_v_ = {
		{&rna_Curve_eval_time, 	&rna_Curve_render_resolution_u,
		-1, "render_resolution_v", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Render Resolution V",
		"Surface resolution in V direction used while rendering (zero uses preview resolution)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, resolv_ren), RawPropertyType(1), nullptr},
		Curve_render_resolution_v_get, Curve_render_resolution_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1024, 0, 1024, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Curve_eval_time_ = {
		{&rna_Curve_bevel_object, 	&rna_Curve_render_resolution_v,
		-1, "eval_time", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Evaluation Time",
		"Parametric position along the length of the curve that Objects \'following\' it should be at (position is evaluated by dividing by the \'Path Length\' value)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, ctime), RawPropertyType(5), nullptr},
		Curve_eval_time_get, Curve_eval_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Curve_bevel_object_ = {
		{&rna_Curve_taper_object, 	&rna_Curve_eval_time,
		-1, "bevel_object", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Bevel Object",
		"The name of the Curve object that defines the bevel shape",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_deps, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_bevel_object_get, Curve_bevel_object_set, nullptr, rna_Curve_otherObject_poll,RNA_Object
	};

	rna_Curve_taper_object_ = {
		{&rna_Curve_dimensions, 	&rna_Curve_bevel_object,
		-1, "taper_object", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Taper Object",
		"Curve object name that defines the taper (width)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_deps, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_taper_object_get, Curve_taper_object_set, nullptr, rna_Curve_otherObject_poll,RNA_Object
	};

	static const EnumPropertyItem rna_Curve_dimensions_items[3] = {
		{0, "2D", 0, "2D", "Clamp the Z axis of the curve"	},
		{1, "3D", 0, "3D", "Allow editing on the Z axis of this curve, also allows tilt and curve radius to be used"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Curve_dimensions_ = {
		{&rna_Curve_fill_mode, 	&rna_Curve_taper_object,
		-1, "dimensions", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Dimensions",
		"Select 2D or 3D curve type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_dimensions_get, Curve_dimensions_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Curve_dimensions_items, 2, 0
	};

	static const EnumPropertyItem rna_Curve_fill_mode_items[5] = {
		{0, "FULL", 0, "Full", ""	},
		{4, "BACK", 0, "Back", ""	},
		{2, "FRONT", 0, "Front", ""	},
		{6, "HALF", 0, "Half", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Curve_fill_mode_ = {
		{&rna_Curve_fill_solver, 	&rna_Curve_dimensions,
		-1, "fill_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fill Mode",
		"Mode of filling curve",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, flag), RawPropertyType(0), nullptr},
		Curve_fill_mode_get, Curve_fill_mode_set, rna_Curve_fill_mode_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Curve_fill_mode_items, 4, 0
	};

	static const EnumPropertyItem rna_Curve_fill_solver_items[3] = {
		{0, "SWEEP_LINE", 0, "Sweep Line", "Fast without support for self-intersection"	},
		{1, "CDT", 0, "Delaunay", "Constrained Delaunay Triangulation (CDT), robust with support for self-intersections"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Curve_fill_solver_ = {
		{&rna_Curve_fill_rule, 	&rna_Curve_fill_mode,
		-1, "fill_solver", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fill Solver",
		"Triangulation solver for filling 2D curves",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, fill_solver), RawPropertyType(2), nullptr},
		Curve_fill_solver_get, Curve_fill_solver_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Curve_fill_solver_items, 2, 0
	};

	static const EnumPropertyItem rna_Curve_fill_rule_items[3] = {
		{0, "EVEN_ODD", 0, "Even-Odd", "Alternate inside/outside based on crossing count"	},
		{1, "NONZERO", 0, "Non-Zero", "Overlapping curves with the same winding direction are filled as a union"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Curve_fill_rule_ = {
		{&rna_Curve_twist_mode, 	&rna_Curve_fill_solver,
		-1, "fill_rule", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fill Rule",
		"Fill rule for Delaunay fill solver",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, fill_rule), RawPropertyType(2), nullptr},
		Curve_fill_rule_get, Curve_fill_rule_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Curve_fill_rule_items, 2, 0
	};

	static const EnumPropertyItem rna_Curve_twist_mode_items[4] = {
		{0, "Z_UP", 0, "Z-Up", "Use Z-Up axis to calculate the curve twist at each point"	},
		{3, "MINIMUM", 0, "Minimum", "Use the least twist over the entire curve"	},
		{4, "TANGENT", 0, "Tangent", "Use the tangent to calculate twist"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Curve_twist_mode_ = {
		{&rna_Curve_taper_radius_mode, 	&rna_Curve_fill_rule,
		-1, "twist_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Twist Method",
		"The type of tilt calculation for 3D Curves",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, twist_mode), RawPropertyType(1), nullptr},
		Curve_twist_mode_get, Curve_twist_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Curve_twist_mode_items, 3, 3
	};

	static const EnumPropertyItem rna_Curve_taper_radius_mode_items[4] = {
		{0, "OVERRIDE", 0, "Override", "Override the radius of the spline point with the taper radius"	},
		{1, "MULTIPLY", 0, "Multiply", "Multiply the radius of the spline point by the taper radius"	},
		{2, "ADD", 0, "Add", "Add the radius of the bevel point to the taper radius"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Curve_taper_radius_mode_ = {
		{&rna_Curve_bevel_factor_mapping_start, 	&rna_Curve_twist_mode,
		-1, "taper_radius_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Taper Radius",
		"Determine how the effective radius of the spline point is computed when a taper object is specified",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, taper_radius_mode), RawPropertyType(2), nullptr},
		Curve_taper_radius_mode_get, Curve_taper_radius_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Curve_taper_radius_mode_items, 3, 0
	};

	static const EnumPropertyItem rna_Curve_bevel_factor_mapping_start_items[4] = {
		{0, "RESOLUTION", 0, "Resolution", "Map the geometry factor to the number of subdivisions of a spline (U resolution)"	},
		{1, "SEGMENTS", 0, "Segments", "Map the geometry factor to the length of a segment and to the number of subdivisions of a segment"	},
		{2, "SPLINE", 0, "Spline", "Map the geometry factor to the length of a spline"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Curve_bevel_factor_mapping_start_ = {
		{&rna_Curve_bevel_factor_mapping_end, 	&rna_Curve_taper_radius_mode,
		-1, "bevel_factor_mapping_start", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Start Mapping Type",
		"Determine how the geometry start factor is mapped to a spline",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, bevfac1_mapping), RawPropertyType(2), nullptr},
		Curve_bevel_factor_mapping_start_get, Curve_bevel_factor_mapping_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Curve_bevel_factor_mapping_start_items, 3, 0
	};

	static const EnumPropertyItem rna_Curve_bevel_factor_mapping_end_items[4] = {
		{0, "RESOLUTION", 0, "Resolution", "Map the geometry factor to the number of subdivisions of a spline (U resolution)"	},
		{1, "SEGMENTS", 0, "Segments", "Map the geometry factor to the length of a segment and to the number of subdivisions of a segment"	},
		{2, "SPLINE", 0, "Spline", "Map the geometry factor to the length of a spline"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Curve_bevel_factor_mapping_end_ = {
		{&rna_Curve_twist_smooth, 	&rna_Curve_bevel_factor_mapping_start,
		-1, "bevel_factor_mapping_end", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "End Mapping Type",
		"Determine how the geometry end factor is mapped to a spline",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, bevfac2_mapping), RawPropertyType(2), nullptr},
		Curve_bevel_factor_mapping_end_get, Curve_bevel_factor_mapping_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Curve_bevel_factor_mapping_end_items, 3, 0
	};

	rna_Curve_twist_smooth_ = {
		{&rna_Curve_use_fill_caps, 	&rna_Curve_bevel_factor_mapping_end,
		-1, "twist_smooth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Twist Smooth",
		"Smoothing iteration for tangents",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, twist_smooth), RawPropertyType(5), nullptr},
		Curve_twist_smooth_get, Curve_twist_smooth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Curve_use_fill_caps_ = {
		{&rna_Curve_use_map_taper, 	&rna_Curve_twist_smooth,
		-1, "use_fill_caps", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fill Caps",
		"Fill caps for beveled curves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_use_fill_caps_get, Curve_use_fill_caps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curve_use_map_taper_ = {
		{&rna_Curve_use_auto_texspace, 	&rna_Curve_use_fill_caps,
		-1, "use_map_taper", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Map Taper",
		"Map effect of the taper object to the beveled part of the curve",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_use_map_taper_get, Curve_use_map_taper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curve_use_auto_texspace_ = {
		{&rna_Curve_texspace_location, 	&rna_Curve_use_map_taper,
		-1, "use_auto_texspace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto Texture Space",
		"Adjust active object\'s texture space automatically when transforming object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_texspace_set, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_use_auto_texspace_get, Curve_use_auto_texspace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static float rna_Curve_texspace_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Curve_texspace_location_ = {
		{&rna_Curve_texspace_size, 	&rna_Curve_use_auto_texspace,
		-1, "texspace_location", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture Space Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Curve_update_data, 0, rna_Curve_texspace_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Curve_texspace_location_get, Curve_texspace_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_Curve_texspace_location_default
	};

	static float rna_Curve_texspace_size_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_Curve_texspace_size_ = {
		{&rna_Curve_materials, 	&rna_Curve_texspace_location,
		-1, "texspace_size", 67108867, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture Space Size",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Curve_update_data, 0, rna_Curve_texspace_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Curve_texspace_size_get, Curve_texspace_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Curve_texspace_size_default
	};

	rna_Curve_materials_ = {
		{&rna_Curve_bevel_factor_start, 	&rna_Curve_texspace_size,
		-1, "materials", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Materials",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_IDMaterials},
		Curve_materials_begin, Curve_materials_next, Curve_materials_end, Curve_materials_get, Curve_materials_length, Curve_materials_lookup_int, Curve_materials_lookup_string, rna_IDMaterials_assign_int, RNA_Material
	};

	rna_Curve_bevel_factor_start_ = {
		{&rna_Curve_bevel_factor_end, 	&rna_Curve_materials,
		-1, "bevel_factor_start", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Geometry Start Factor",
		"Define where along the spline the curve geometry starts (0 for the beginning, 1 for the end)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, bevfac1), RawPropertyType(5), nullptr},
		Curve_bevel_factor_start_get, Curve_bevel_factor_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Curve_bevel_factor_end_ = {
		{&rna_Curve_is_editmode, 	&rna_Curve_bevel_factor_start,
		-1, "bevel_factor_end", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Geometry End Factor",
		"Define where along the spline the curve geometry ends (0 for the beginning, 1 for the end)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, bevfac2), RawPropertyType(5), nullptr},
		Curve_bevel_factor_end_get, Curve_bevel_factor_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Curve_is_editmode_ = {
		{&rna_Curve_animation_data, 	&rna_Curve_bevel_factor_end,
		-1, "is_editmode", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Editmode",
		"True when used in editmode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Curve_is_editmode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Curve_animation_data_ = {
		{nullptr, 	&rna_Curve_is_editmode,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Curve_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_Curve;
	srna->cont.properties = {&rna_Curve_shape_keys, &rna_Curve_animation_data};
	srna->identifier = "Curve";
	srna->flag = 519;
	srna->name = "Curve";
	srna->description = "Curve data-block storing curves, splines and NURBS";
	srna->translation_context = "*";
	srna->icon = 182;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_Curve_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	static float rna_Curve_transform_matrix_default[16] = {
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
	rna_Curve_transform_matrix_ = {
		{&rna_Curve_transform_shape_keys, 	nullptr,
		-1, "matrix", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Curve_transform_matrix_default
	};
	rna_Curve_transform_shape_keys_ = {
		{nullptr, 	&rna_Curve_transform_matrix,
		-1, "shape_keys", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Transform Shape Keys",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Curve_transform_matrix, &rna_Curve_transform_shape_keys};
		func->identifier = "transform";
		func->description = "Transform curve by a matrix";
		func->call = Curve_transform_call;
		rna_Curve_transform_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Curve_validate_material_indices_result_ = {
		{nullptr, 	nullptr,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Curve_validate_material_indices_result, &rna_Curve_validate_material_indices_result};
		func->identifier = "validate_material_indices";
		func->description = "Validate material indices of splines or letters, return True when the curve has had invalid indices corrected (to default 0)";
		func->call = Curve_validate_material_indices_call;
		func->c_ret = &rna_Curve_validate_material_indices_result;
		rna_Curve_validate_material_indices_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update_gpu_tag";
		func->description = "update_gpu_tag";
		func->call = Curve_update_gpu_tag_call;
		rna_Curve_update_gpu_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Curve Splines */
static CollectionPropertyRNA rna_CurveSplines_rna_properties_;
PropertyRNA &rna_CurveSplines_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CurveSplines_rna_properties_);

static PointerPropertyRNA rna_CurveSplines_rna_type_;
PropertyRNA &rna_CurveSplines_rna_type = reinterpret_cast<PropertyRNA &>(rna_CurveSplines_rna_type_);

static PointerPropertyRNA rna_CurveSplines_active_;
PropertyRNA &rna_CurveSplines_active = reinterpret_cast<PropertyRNA &>(rna_CurveSplines_active_);

static EnumPropertyRNA rna_CurveSplines_new_type_;
PropertyRNA &rna_CurveSplines_new_type = reinterpret_cast<PropertyRNA &>(rna_CurveSplines_new_type_);

static PointerPropertyRNA rna_CurveSplines_new_spline_;
PropertyRNA &rna_CurveSplines_new_spline = reinterpret_cast<PropertyRNA &>(rna_CurveSplines_new_spline_);

FunctionRNA *rna_CurveSplines_new_func;
static PointerPropertyRNA rna_CurveSplines_remove_spline_;
PropertyRNA &rna_CurveSplines_remove_spline = reinterpret_cast<PropertyRNA &>(rna_CurveSplines_remove_spline_);

FunctionRNA *rna_CurveSplines_remove_func;
FunctionRNA *rna_CurveSplines_clear_func;
StructRNA *RNA_CurveSplines;
void register_struct_CurveSplines(BlenderRNA &brna)
{
	rna_CurveSplines_rna_properties_ = {
		{&rna_CurveSplines_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveSplines_rna_properties_begin, CurveSplines_rna_properties_next, CurveSplines_rna_properties_end, CurveSplines_rna_properties_get, nullptr, nullptr, CurveSplines_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CurveSplines_rna_type_ = {
		{&rna_CurveSplines_active, 	&rna_CurveSplines_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveSplines_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CurveSplines_active_ = {
		{nullptr, 	&rna_CurveSplines_rna_type,
		-1, "active", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Spline",
		"Active curve spline",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveSplines_active_get, CurveSplines_active_set, nullptr, nullptr,RNA_Spline
	};

	StructRNA *srna = RNA_CurveSplines;
	srna->cont.properties = {&rna_CurveSplines_rna_properties, &rna_CurveSplines_active};
	srna->identifier = "CurveSplines";
	srna->flag = 516;
	srna->name = "Curve Splines";
	srna->description = "Collection of curve splines";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CurveSplines_rna_properties;
	{
	static const EnumPropertyItem rna_CurveSplines_new_type_items[4] = {
		{0, "POLY", 0, "Poly", ""	},
		{1, "BEZIER", 0, "Bézier", ""	},
		{4, "NURBS", 0, "Ease", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CurveSplines_new_type_ = {
		{&rna_CurveSplines_new_spline, 	nullptr,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"type for the new spline",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CurveSplines_new_type_items, 3, 0
	};
	rna_CurveSplines_new_spline_ = {
		{nullptr, 	&rna_CurveSplines_new_type,
		-1, "spline", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created spline",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Spline
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CurveSplines_new_type, &rna_CurveSplines_new_spline};
		func->identifier = "new";
		func->description = "Add a new spline to the curve";
		func->call = CurveSplines_new_call;
		func->c_ret = &rna_CurveSplines_new_spline;
		rna_CurveSplines_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CurveSplines_remove_spline_ = {
		{nullptr, 	nullptr,
		-1, "spline", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The spline to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Spline
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CurveSplines_remove_spline, &rna_CurveSplines_remove_spline};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a spline from a curve";
		func->call = CurveSplines_remove_call;
		rna_CurveSplines_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->description = "Remove all splines from a curve";
		func->call = CurveSplines_clear_call;
		rna_CurveSplines_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Surface Curve */
StructRNA *RNA_SurfaceCurve;
void register_struct_SurfaceCurve(BlenderRNA &brna)
{

	StructRNA *srna = RNA_SurfaceCurve;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "SurfaceCurve";
	srna->flag = 519;
	srna->name = "Surface Curve";
	srna->description = "Curve data-block used for storing surfaces";
	srna->translation_context = "*";
	srna->icon = 191;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Curve;
	srna->refine = rna_Curve_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Text Curve */
static EnumPropertyRNA rna_TextCurve_align_x_;
PropertyRNA &rna_TextCurve_align_x = reinterpret_cast<PropertyRNA &>(rna_TextCurve_align_x_);

static EnumPropertyRNA rna_TextCurve_align_y_;
PropertyRNA &rna_TextCurve_align_y = reinterpret_cast<PropertyRNA &>(rna_TextCurve_align_y_);

static EnumPropertyRNA rna_TextCurve_overflow_;
PropertyRNA &rna_TextCurve_overflow = reinterpret_cast<PropertyRNA &>(rna_TextCurve_overflow_);

static FloatPropertyRNA rna_TextCurve_size_;
PropertyRNA &rna_TextCurve_size = reinterpret_cast<PropertyRNA &>(rna_TextCurve_size_);

static FloatPropertyRNA rna_TextCurve_small_caps_scale_;
PropertyRNA &rna_TextCurve_small_caps_scale = reinterpret_cast<PropertyRNA &>(rna_TextCurve_small_caps_scale_);

static FloatPropertyRNA rna_TextCurve_space_line_;
PropertyRNA &rna_TextCurve_space_line = reinterpret_cast<PropertyRNA &>(rna_TextCurve_space_line_);

static FloatPropertyRNA rna_TextCurve_space_word_;
PropertyRNA &rna_TextCurve_space_word = reinterpret_cast<PropertyRNA &>(rna_TextCurve_space_word_);

static FloatPropertyRNA rna_TextCurve_space_character_;
PropertyRNA &rna_TextCurve_space_character = reinterpret_cast<PropertyRNA &>(rna_TextCurve_space_character_);

static FloatPropertyRNA rna_TextCurve_shear_;
PropertyRNA &rna_TextCurve_shear = reinterpret_cast<PropertyRNA &>(rna_TextCurve_shear_);

static FloatPropertyRNA rna_TextCurve_offset_x_;
PropertyRNA &rna_TextCurve_offset_x = reinterpret_cast<PropertyRNA &>(rna_TextCurve_offset_x_);

static FloatPropertyRNA rna_TextCurve_offset_y_;
PropertyRNA &rna_TextCurve_offset_y = reinterpret_cast<PropertyRNA &>(rna_TextCurve_offset_y_);

static FloatPropertyRNA rna_TextCurve_underline_position_;
PropertyRNA &rna_TextCurve_underline_position = reinterpret_cast<PropertyRNA &>(rna_TextCurve_underline_position_);

static FloatPropertyRNA rna_TextCurve_underline_height_;
PropertyRNA &rna_TextCurve_underline_height = reinterpret_cast<PropertyRNA &>(rna_TextCurve_underline_height_);

static CollectionPropertyRNA rna_TextCurve_text_boxes_;
PropertyRNA &rna_TextCurve_text_boxes = reinterpret_cast<PropertyRNA &>(rna_TextCurve_text_boxes_);

static IntPropertyRNA rna_TextCurve_active_textbox_;
PropertyRNA &rna_TextCurve_active_textbox = reinterpret_cast<PropertyRNA &>(rna_TextCurve_active_textbox_);

static StringPropertyRNA rna_TextCurve_family_;
PropertyRNA &rna_TextCurve_family = reinterpret_cast<PropertyRNA &>(rna_TextCurve_family_);

static StringPropertyRNA rna_TextCurve_body_;
PropertyRNA &rna_TextCurve_body = reinterpret_cast<PropertyRNA &>(rna_TextCurve_body_);

static CollectionPropertyRNA rna_TextCurve_body_format_;
PropertyRNA &rna_TextCurve_body_format = reinterpret_cast<PropertyRNA &>(rna_TextCurve_body_format_);

static PointerPropertyRNA rna_TextCurve_follow_curve_;
PropertyRNA &rna_TextCurve_follow_curve = reinterpret_cast<PropertyRNA &>(rna_TextCurve_follow_curve_);

static PointerPropertyRNA rna_TextCurve_font_;
PropertyRNA &rna_TextCurve_font = reinterpret_cast<PropertyRNA &>(rna_TextCurve_font_);

static PointerPropertyRNA rna_TextCurve_font_bold_;
PropertyRNA &rna_TextCurve_font_bold = reinterpret_cast<PropertyRNA &>(rna_TextCurve_font_bold_);

static PointerPropertyRNA rna_TextCurve_font_italic_;
PropertyRNA &rna_TextCurve_font_italic = reinterpret_cast<PropertyRNA &>(rna_TextCurve_font_italic_);

static PointerPropertyRNA rna_TextCurve_font_bold_italic_;
PropertyRNA &rna_TextCurve_font_bold_italic = reinterpret_cast<PropertyRNA &>(rna_TextCurve_font_bold_italic_);

static PointerPropertyRNA rna_TextCurve_edit_format_;
PropertyRNA &rna_TextCurve_edit_format = reinterpret_cast<PropertyRNA &>(rna_TextCurve_edit_format_);

static BoolPropertyRNA rna_TextCurve_use_fast_edit_;
PropertyRNA &rna_TextCurve_use_fast_edit = reinterpret_cast<PropertyRNA &>(rna_TextCurve_use_fast_edit_);

static BoolPropertyRNA rna_TextCurve_is_select_bold_;
PropertyRNA &rna_TextCurve_is_select_bold = reinterpret_cast<PropertyRNA &>(rna_TextCurve_is_select_bold_);

static BoolPropertyRNA rna_TextCurve_is_select_italic_;
PropertyRNA &rna_TextCurve_is_select_italic = reinterpret_cast<PropertyRNA &>(rna_TextCurve_is_select_italic_);

static BoolPropertyRNA rna_TextCurve_is_select_underline_;
PropertyRNA &rna_TextCurve_is_select_underline = reinterpret_cast<PropertyRNA &>(rna_TextCurve_is_select_underline_);

static BoolPropertyRNA rna_TextCurve_is_select_smallcaps_;
PropertyRNA &rna_TextCurve_is_select_smallcaps = reinterpret_cast<PropertyRNA &>(rna_TextCurve_is_select_smallcaps_);

static BoolPropertyRNA rna_TextCurve_has_selection_;
PropertyRNA &rna_TextCurve_has_selection = reinterpret_cast<PropertyRNA &>(rna_TextCurve_has_selection_);

StructRNA *RNA_TextCurve;
void register_struct_TextCurve(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_TextCurve_align_x_items[6] = {
		{0, "LEFT", 402, "Left", "Align text to the left"	},
		{1, "CENTER", 399, "Center", "Center text"	},
		{2, "RIGHT", 404, "Right", "Align text to the right"	},
		{3, "JUSTIFY", 401, "Justify", "Align to the left and the right"	},
		{4, "FLUSH", 400, "Flush", "Align to the left and the right, with equal character spacing"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TextCurve_align_x_ = {
		{&rna_TextCurve_align_y, 	nullptr,
		-1, "align_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Horizontal Alignment",
		"Text horizontal alignment from the object or text box center",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, spacemode), RawPropertyType(2), nullptr},
		TextCurve_align_x_get, TextCurve_align_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TextCurve_align_x_items, 5, 0
	};

	static const EnumPropertyItem rna_TextCurve_align_y_items[6] = {
		{1, "TOP", 405, "Top", "Align text to the top"	},
		{0, "TOP_BASELINE", 405, "Top Baseline", "Align text to the top line\'s baseline"	},
		{2, "CENTER", 403, "Middle", "Align text to the middle"	},
		{3, "BOTTOM_BASELINE", 398, "Bottom Baseline", "Align text to the bottom line\'s baseline"	},
		{4, "BOTTOM", 398, "Bottom", "Align text to the bottom"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TextCurve_align_y_ = {
		{&rna_TextCurve_overflow, 	&rna_TextCurve_align_x,
		-1, "align_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vertical Alignment",
		"Text vertical alignment from the object center",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, align_y), RawPropertyType(2), nullptr},
		TextCurve_align_y_get, TextCurve_align_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TextCurve_align_y_items, 5, 0
	};

	static const EnumPropertyItem rna_TextCurve_overflow_items[4] = {
		{0, "NONE", 0, "Overflow", "Let the text overflow outside the text boxes"	},
		{1, "SCALE", 0, "Scale to Fit", "Scale down the text to fit inside the text boxes"	},
		{2, "TRUNCATE", 0, "Truncate", "Truncate the text that would go outside the text boxes"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TextCurve_overflow_ = {
		{&rna_TextCurve_size, 	&rna_TextCurve_align_y,
		-1, "overflow", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "TextBox Overflow",
		"Handle the text behavior when it does not fit in the text boxes",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, overflow), RawPropertyType(2), nullptr},
		TextCurve_overflow_get, TextCurve_overflow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TextCurve_overflow_items, 3, 0
	};

	rna_TextCurve_size_ = {
		{&rna_TextCurve_small_caps_scale, 	&rna_TextCurve_overflow,
		-1, "size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Font Size",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, fsize), RawPropertyType(5), nullptr},
		TextCurve_size_get, TextCurve_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 10.0f, 0.0001000000f, 10000.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_TextCurve_small_caps_scale_ = {
		{&rna_TextCurve_space_line, 	&rna_TextCurve_size,
		-1, "small_caps_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Small Caps",
		"Scale of small capitals",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, smallcaps_scale), RawPropertyType(5), nullptr},
		TextCurve_small_caps_scale_get, TextCurve_small_caps_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.7500000000f, nullptr
	};

	rna_TextCurve_space_line_ = {
		{&rna_TextCurve_space_word, 	&rna_TextCurve_small_caps_scale,
		-1, "space_line", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Distance between lines of text",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, linedist), RawPropertyType(5), nullptr},
		TextCurve_space_line_get, TextCurve_space_line_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_TextCurve_space_word_ = {
		{&rna_TextCurve_space_character, 	&rna_TextCurve_space_line,
		-1, "space_word", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Spacing between words",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, wordspace), RawPropertyType(5), nullptr},
		TextCurve_space_word_get, TextCurve_space_word_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_TextCurve_space_character_ = {
		{&rna_TextCurve_shear, 	&rna_TextCurve_space_word,
		-1, "space_character", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Global spacing between characters",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, spacing), RawPropertyType(5), nullptr},
		TextCurve_space_character_get, TextCurve_space_character_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_TextCurve_shear_ = {
		{&rna_TextCurve_offset_x, 	&rna_TextCurve_space_character,
		-1, "shear", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shear",
		"Italic angle of the characters",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, shear), RawPropertyType(5), nullptr},
		TextCurve_shear_get, TextCurve_shear_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TextCurve_offset_x_ = {
		{&rna_TextCurve_offset_y, 	&rna_TextCurve_shear,
		-1, "offset_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "X Offset",
		"Horizontal offset from the object origin",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, xof), RawPropertyType(5), nullptr},
		TextCurve_offset_x_get, TextCurve_offset_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TextCurve_offset_y_ = {
		{&rna_TextCurve_underline_position, 	&rna_TextCurve_offset_x,
		-1, "offset_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Y Offset",
		"Vertical offset from the object origin",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, yof), RawPropertyType(5), nullptr},
		TextCurve_offset_y_get, TextCurve_offset_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TextCurve_underline_position_ = {
		{&rna_TextCurve_underline_height, 	&rna_TextCurve_offset_y,
		-1, "underline_position", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Underline Position",
		"Vertical position of underline",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, ulpos), RawPropertyType(5), nullptr},
		TextCurve_underline_position_get, TextCurve_underline_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -0.2000000030f, 0.8000000119f, -0.2000000030f, 0.8000000119f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TextCurve_underline_height_ = {
		{&rna_TextCurve_text_boxes, 	&rna_TextCurve_underline_position,
		-1, "underline_height", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Underline Thickness",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, ulheight), RawPropertyType(5), nullptr},
		TextCurve_underline_height_get, TextCurve_underline_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.8000000119f, 0.0f, 0.8000000119f, 10.0f, 3, nullptr, nullptr, 0.0500000007f, nullptr
	};

	rna_TextCurve_text_boxes_ = {
		{&rna_TextCurve_active_textbox, 	&rna_TextCurve_underline_height,
		-1, "text_boxes", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "TextBoxes",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_text_boxes_begin, TextCurve_text_boxes_next, TextCurve_text_boxes_end, TextCurve_text_boxes_get, TextCurve_text_boxes_length, TextCurve_text_boxes_lookup_int, nullptr, nullptr, RNA_TextBox
	};

	rna_TextCurve_active_textbox_ = {
		{&rna_TextCurve_family, 	&rna_TextCurve_text_boxes,
		-1, "active_textbox", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Active Text Box",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Curve, actbox), RawPropertyType(0), nullptr},
		TextCurve_active_textbox_get, TextCurve_active_textbox_set, nullptr, nullptr, rna_Curve_active_textbox_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_TextCurve_family_ = {
		{&rna_TextCurve_body, 	&rna_TextCurve_active_textbox,
		-1, "family", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object Font",
		"Use objects as font characters (give font objects a common name followed by the character they represent, eg. \'family-a\', \'family-b\', etc, set this setting to \'family-\', and turn on Vertex Instancing)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_family_get, TextCurve_family_length, TextCurve_family_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_TextCurve_body_ = {
		{&rna_TextCurve_body_format, 	&rna_TextCurve_family,
		-1, "body", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Body Text",
		"Content of this text object",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_body_get, TextCurve_body_length, TextCurve_body_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 8192, ""
	};

	rna_TextCurve_body_format_ = {
		{&rna_TextCurve_follow_curve, 	&rna_TextCurve_body,
		-1, "body_format", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Character Info",
		"Stores the style of each character",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_body_format_begin, TextCurve_body_format_next, TextCurve_body_format_end, TextCurve_body_format_get, TextCurve_body_format_length, TextCurve_body_format_lookup_int, nullptr, nullptr, RNA_TextCharacterFormat
	};

	rna_TextCurve_follow_curve_ = {
		{&rna_TextCurve_font, 	&rna_TextCurve_body_format,
		-1, "follow_curve", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Text on Curve",
		"Curve deforming text object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_deps, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_follow_curve_get, TextCurve_follow_curve_set, nullptr, rna_Curve_otherObject_poll,RNA_Object
	};

	rna_TextCurve_font_ = {
		{&rna_TextCurve_font_bold, 	&rna_TextCurve_follow_curve,
		-1, "font", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Font",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_font_get, TextCurve_font_set, nullptr, nullptr,RNA_VectorFont
	};

	rna_TextCurve_font_bold_ = {
		{&rna_TextCurve_font_italic, 	&rna_TextCurve_font,
		-1, "font_bold", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Font Bold",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_font_bold_get, TextCurve_font_bold_set, nullptr, nullptr,RNA_VectorFont
	};

	rna_TextCurve_font_italic_ = {
		{&rna_TextCurve_font_bold_italic, 	&rna_TextCurve_font_bold,
		-1, "font_italic", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Font Italic",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_font_italic_get, TextCurve_font_italic_set, nullptr, nullptr,RNA_VectorFont
	};

	rna_TextCurve_font_bold_italic_ = {
		{&rna_TextCurve_edit_format, 	&rna_TextCurve_font_italic,
		-1, "font_bold_italic", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Font Bold Italic",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_font_bold_italic_get, TextCurve_font_bold_italic_set, nullptr, nullptr,RNA_VectorFont
	};

	rna_TextCurve_edit_format_ = {
		{&rna_TextCurve_use_fast_edit, 	&rna_TextCurve_font_bold_italic,
		-1, "edit_format", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Edit Format",
		"Editing settings character formatting",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_edit_format_get, nullptr, nullptr, nullptr,RNA_TextCharacterFormat
	};

	rna_TextCurve_use_fast_edit_ = {
		{&rna_TextCurve_is_select_bold, 	&rna_TextCurve_edit_format,
		-1, "use_fast_edit", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fast Editing",
		"Don\'t fill polygons while editing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_use_fast_edit_get, TextCurve_use_fast_edit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextCurve_is_select_bold_ = {
		{&rna_TextCurve_is_select_italic, 	&rna_TextCurve_use_fast_edit,
		-1, "is_select_bold", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selected Bold",
		"Whether the selected text is bold",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_is_select_bold_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextCurve_is_select_italic_ = {
		{&rna_TextCurve_is_select_underline, 	&rna_TextCurve_is_select_bold,
		-1, "is_select_italic", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selected Italic",
		"Whether the selected text is italics",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_is_select_italic_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextCurve_is_select_underline_ = {
		{&rna_TextCurve_is_select_smallcaps, 	&rna_TextCurve_is_select_italic,
		-1, "is_select_underline", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selected Underline",
		"Whether the selected text is underlined",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_is_select_underline_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextCurve_is_select_smallcaps_ = {
		{&rna_TextCurve_has_selection, 	&rna_TextCurve_is_select_underline,
		-1, "is_select_smallcaps", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selected Small Caps",
		"Whether the selected text is small caps",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_is_select_smallcaps_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextCurve_has_selection_ = {
		{nullptr, 	&rna_TextCurve_is_select_smallcaps,
		-1, "has_selection", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Text Selected",
		"Whether there is any text selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCurve_has_selection_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_TextCurve;
	srna->cont.properties = {&rna_TextCurve_align_x, &rna_TextCurve_has_selection};
	srna->identifier = "TextCurve";
	srna->flag = 519;
	srna->name = "Text Curve";
	srna->description = "Curve data-block used for storing text";
	srna->translation_context = "*";
	srna->icon = 184;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_Curve;
	srna->refine = rna_Curve_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Text Box */
static CollectionPropertyRNA rna_TextBox_rna_properties_;
PropertyRNA &rna_TextBox_rna_properties = reinterpret_cast<PropertyRNA &>(rna_TextBox_rna_properties_);

static PointerPropertyRNA rna_TextBox_rna_type_;
PropertyRNA &rna_TextBox_rna_type = reinterpret_cast<PropertyRNA &>(rna_TextBox_rna_type_);

static FloatPropertyRNA rna_TextBox_x_;
PropertyRNA &rna_TextBox_x = reinterpret_cast<PropertyRNA &>(rna_TextBox_x_);

static FloatPropertyRNA rna_TextBox_y_;
PropertyRNA &rna_TextBox_y = reinterpret_cast<PropertyRNA &>(rna_TextBox_y_);

static FloatPropertyRNA rna_TextBox_width_;
PropertyRNA &rna_TextBox_width = reinterpret_cast<PropertyRNA &>(rna_TextBox_width_);

static FloatPropertyRNA rna_TextBox_height_;
PropertyRNA &rna_TextBox_height = reinterpret_cast<PropertyRNA &>(rna_TextBox_height_);

StructRNA *RNA_TextBox;
void register_struct_TextBox(BlenderRNA &brna)
{
	rna_TextBox_rna_properties_ = {
		{&rna_TextBox_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextBox_rna_properties_begin, TextBox_rna_properties_next, TextBox_rna_properties_end, TextBox_rna_properties_get, nullptr, nullptr, TextBox_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_TextBox_rna_type_ = {
		{&rna_TextBox_x, 	&rna_TextBox_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextBox_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_TextBox_x_ = {
		{&rna_TextBox_y, 	&rna_TextBox_rna_type,
		-1, "x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "TextBox X Offset",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextBox, x), RawPropertyType(5), nullptr},
		TextBox_x_get, TextBox_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TextBox_y_ = {
		{&rna_TextBox_width, 	&rna_TextBox_x,
		-1, "y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "TextBox Y Offset",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextBox, y), RawPropertyType(5), nullptr},
		TextBox_y_get, TextBox_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TextBox_width_ = {
		{&rna_TextBox_height, 	&rna_TextBox_y,
		-1, "width", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "TextBox Width",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextBox, w), RawPropertyType(5), nullptr},
		TextBox_width_get, TextBox_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TextBox_height_ = {
		{nullptr, 	&rna_TextBox_width,
		-1, "height", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "TextBox Height",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextBox, h), RawPropertyType(5), nullptr},
		TextBox_height_get, TextBox_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_TextBox;
	srna->cont.properties = {&rna_TextBox_rna_properties, &rna_TextBox_height};
	srna->identifier = "TextBox";
	srna->flag = 516;
	srna->name = "Text Box";
	srna->description = "Text bounding box for layout";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_TextBox_rna_properties;
	srna->path = rna_TextBox_path;
};

/* Text Character Format */
static CollectionPropertyRNA rna_TextCharacterFormat_rna_properties_;
PropertyRNA &rna_TextCharacterFormat_rna_properties = reinterpret_cast<PropertyRNA &>(rna_TextCharacterFormat_rna_properties_);

static PointerPropertyRNA rna_TextCharacterFormat_rna_type_;
PropertyRNA &rna_TextCharacterFormat_rna_type = reinterpret_cast<PropertyRNA &>(rna_TextCharacterFormat_rna_type_);

static BoolPropertyRNA rna_TextCharacterFormat_use_bold_;
PropertyRNA &rna_TextCharacterFormat_use_bold = reinterpret_cast<PropertyRNA &>(rna_TextCharacterFormat_use_bold_);

static BoolPropertyRNA rna_TextCharacterFormat_use_italic_;
PropertyRNA &rna_TextCharacterFormat_use_italic = reinterpret_cast<PropertyRNA &>(rna_TextCharacterFormat_use_italic_);

static BoolPropertyRNA rna_TextCharacterFormat_use_underline_;
PropertyRNA &rna_TextCharacterFormat_use_underline = reinterpret_cast<PropertyRNA &>(rna_TextCharacterFormat_use_underline_);

static BoolPropertyRNA rna_TextCharacterFormat_use_small_caps_;
PropertyRNA &rna_TextCharacterFormat_use_small_caps = reinterpret_cast<PropertyRNA &>(rna_TextCharacterFormat_use_small_caps_);

static IntPropertyRNA rna_TextCharacterFormat_material_index_;
PropertyRNA &rna_TextCharacterFormat_material_index = reinterpret_cast<PropertyRNA &>(rna_TextCharacterFormat_material_index_);

static FloatPropertyRNA rna_TextCharacterFormat_kerning_;
PropertyRNA &rna_TextCharacterFormat_kerning = reinterpret_cast<PropertyRNA &>(rna_TextCharacterFormat_kerning_);

StructRNA *RNA_TextCharacterFormat;
void register_struct_TextCharacterFormat(BlenderRNA &brna)
{
	rna_TextCharacterFormat_rna_properties_ = {
		{&rna_TextCharacterFormat_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCharacterFormat_rna_properties_begin, TextCharacterFormat_rna_properties_next, TextCharacterFormat_rna_properties_end, TextCharacterFormat_rna_properties_get, nullptr, nullptr, TextCharacterFormat_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_TextCharacterFormat_rna_type_ = {
		{&rna_TextCharacterFormat_use_bold, 	&rna_TextCharacterFormat_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCharacterFormat_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_TextCharacterFormat_use_bold_ = {
		{&rna_TextCharacterFormat_use_italic, 	&rna_TextCharacterFormat_rna_type,
		-1, "use_bold", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bold",
		"",
		406, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCharacterFormat_use_bold_get, TextCharacterFormat_use_bold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextCharacterFormat_use_italic_ = {
		{&rna_TextCharacterFormat_use_underline, 	&rna_TextCharacterFormat_use_bold,
		-1, "use_italic", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Italic",
		"",
		407, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCharacterFormat_use_italic_get, TextCharacterFormat_use_italic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextCharacterFormat_use_underline_ = {
		{&rna_TextCharacterFormat_use_small_caps, 	&rna_TextCharacterFormat_use_italic,
		-1, "use_underline", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Underline",
		"",
		414, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCharacterFormat_use_underline_get, TextCharacterFormat_use_underline_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextCharacterFormat_use_small_caps_ = {
		{&rna_TextCharacterFormat_material_index, 	&rna_TextCharacterFormat_use_underline,
		-1, "use_small_caps", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Small Caps",
		"",
		411, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCharacterFormat_use_small_caps_get, TextCharacterFormat_use_small_caps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextCharacterFormat_material_index_ = {
		{&rna_TextCharacterFormat_kerning, 	&rna_TextCharacterFormat_use_small_caps,
		-1, "material_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Material Index",
		"Material slot index of this character",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextCharacterFormat_material_index_get, TextCharacterFormat_material_index_set, nullptr, nullptr, rna_Curve_material_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_TextCharacterFormat_kerning_ = {
		{nullptr, 	&rna_TextCharacterFormat_material_index,
		-1, "kerning", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Kerning",
		"Spacing between characters",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CharInfo, kern), RawPropertyType(5), nullptr},
		TextCharacterFormat_kerning_get, TextCharacterFormat_kerning_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_TextCharacterFormat;
	srna->cont.properties = {&rna_TextCharacterFormat_rna_properties, &rna_TextCharacterFormat_kerning};
	srna->identifier = "TextCharacterFormat";
	srna->flag = 516;
	srna->name = "Text Character Format";
	srna->description = "Text character formatting settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_TextCharacterFormat_rna_properties;
};

/* SplinePoint */
static CollectionPropertyRNA rna_SplinePoint_rna_properties_;
PropertyRNA &rna_SplinePoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_SplinePoint_rna_properties_);

static PointerPropertyRNA rna_SplinePoint_rna_type_;
PropertyRNA &rna_SplinePoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_SplinePoint_rna_type_);

static BoolPropertyRNA rna_SplinePoint_select_;
PropertyRNA &rna_SplinePoint_select = reinterpret_cast<PropertyRNA &>(rna_SplinePoint_select_);

static BoolPropertyRNA rna_SplinePoint_hide_;
PropertyRNA &rna_SplinePoint_hide = reinterpret_cast<PropertyRNA &>(rna_SplinePoint_hide_);

static FloatPropertyRNA rna_SplinePoint_co_;
PropertyRNA &rna_SplinePoint_co = reinterpret_cast<PropertyRNA &>(rna_SplinePoint_co_);

static FloatPropertyRNA rna_SplinePoint_weight_;
PropertyRNA &rna_SplinePoint_weight = reinterpret_cast<PropertyRNA &>(rna_SplinePoint_weight_);

static FloatPropertyRNA rna_SplinePoint_tilt_;
PropertyRNA &rna_SplinePoint_tilt = reinterpret_cast<PropertyRNA &>(rna_SplinePoint_tilt_);

static FloatPropertyRNA rna_SplinePoint_weight_softbody_;
PropertyRNA &rna_SplinePoint_weight_softbody = reinterpret_cast<PropertyRNA &>(rna_SplinePoint_weight_softbody_);

static FloatPropertyRNA rna_SplinePoint_radius_;
PropertyRNA &rna_SplinePoint_radius = reinterpret_cast<PropertyRNA &>(rna_SplinePoint_radius_);

StructRNA *RNA_SplinePoint;
void register_struct_SplinePoint(BlenderRNA &brna)
{
	rna_SplinePoint_rna_properties_ = {
		{&rna_SplinePoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplinePoint_rna_properties_begin, SplinePoint_rna_properties_next, SplinePoint_rna_properties_end, SplinePoint_rna_properties_get, nullptr, nullptr, SplinePoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_SplinePoint_rna_type_ = {
		{&rna_SplinePoint_select, 	&rna_SplinePoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplinePoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_SplinePoint_select_ = {
		{&rna_SplinePoint_hide, 	&rna_SplinePoint_rna_type,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Selection status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplinePoint_select_get, SplinePoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SplinePoint_hide_ = {
		{&rna_SplinePoint_co, 	&rna_SplinePoint_select,
		-1, "hide", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Hide",
		"Visibility status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BPoint, hide), RawPropertyType(1), nullptr},
		SplinePoint_hide_get, SplinePoint_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_SplinePoint_co_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_SplinePoint_co_ = {
		{&rna_SplinePoint_weight, 	&rna_SplinePoint_hide,
		-1, "co", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Point",
		"Point coordinates",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {4, 0, 0}, 4,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BPoint, vec), RawPropertyType(5), nullptr},
		nullptr, nullptr, SplinePoint_co_get, SplinePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_SplinePoint_co_default
	};

	rna_SplinePoint_weight_ = {
		{&rna_SplinePoint_tilt, 	&rna_SplinePoint_co,
		-1, "weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"NURBS weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BPoint, vec[3]), RawPropertyType(5), nullptr},
		SplinePoint_weight_get, SplinePoint_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SplinePoint_tilt_ = {
		{&rna_SplinePoint_weight_softbody, 	&rna_SplinePoint_weight,
		-1, "tilt", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tilt",
		"Tilt in 3D View",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BPoint, tilt), RawPropertyType(5), nullptr},
		SplinePoint_tilt_get, SplinePoint_tilt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SplinePoint_weight_softbody_ = {
		{&rna_SplinePoint_radius, 	&rna_SplinePoint_tilt,
		-1, "weight_softbody", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Softbody goal weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BPoint, weight), RawPropertyType(5), nullptr},
		SplinePoint_weight_softbody_get, SplinePoint_weight_softbody_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SplinePoint_radius_ = {
		{nullptr, 	&rna_SplinePoint_weight_softbody,
		-1, "radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bevel Radius",
		"Radius for beveling",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BPoint, radius), RawPropertyType(5), nullptr},
		SplinePoint_radius_get, SplinePoint_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_SplinePoint;
	srna->cont.properties = {&rna_SplinePoint_rna_properties, &rna_SplinePoint_radius};
	srna->identifier = "SplinePoint";
	srna->flag = 516;
	srna->name = "SplinePoint";
	srna->description = "Spline point without handles";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_SplinePoint_rna_properties;
	srna->path = rna_Curve_spline_point_path;
};

/* Bézier Curve Point */
static CollectionPropertyRNA rna_BezierSplinePoint_rna_properties_;
PropertyRNA &rna_BezierSplinePoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_rna_properties_);

static PointerPropertyRNA rna_BezierSplinePoint_rna_type_;
PropertyRNA &rna_BezierSplinePoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_rna_type_);

static BoolPropertyRNA rna_BezierSplinePoint_select_left_handle_;
PropertyRNA &rna_BezierSplinePoint_select_left_handle = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_select_left_handle_);

static BoolPropertyRNA rna_BezierSplinePoint_select_right_handle_;
PropertyRNA &rna_BezierSplinePoint_select_right_handle = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_select_right_handle_);

static BoolPropertyRNA rna_BezierSplinePoint_select_control_point_;
PropertyRNA &rna_BezierSplinePoint_select_control_point = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_select_control_point_);

static BoolPropertyRNA rna_BezierSplinePoint_hide_;
PropertyRNA &rna_BezierSplinePoint_hide = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_hide_);

static EnumPropertyRNA rna_BezierSplinePoint_handle_left_type_;
PropertyRNA &rna_BezierSplinePoint_handle_left_type = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_handle_left_type_);

static EnumPropertyRNA rna_BezierSplinePoint_handle_right_type_;
PropertyRNA &rna_BezierSplinePoint_handle_right_type = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_handle_right_type_);

static FloatPropertyRNA rna_BezierSplinePoint_handle_left_;
PropertyRNA &rna_BezierSplinePoint_handle_left = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_handle_left_);

static FloatPropertyRNA rna_BezierSplinePoint_co_;
PropertyRNA &rna_BezierSplinePoint_co = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_co_);

static FloatPropertyRNA rna_BezierSplinePoint_handle_right_;
PropertyRNA &rna_BezierSplinePoint_handle_right = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_handle_right_);

static FloatPropertyRNA rna_BezierSplinePoint_tilt_;
PropertyRNA &rna_BezierSplinePoint_tilt = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_tilt_);

static FloatPropertyRNA rna_BezierSplinePoint_weight_softbody_;
PropertyRNA &rna_BezierSplinePoint_weight_softbody = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_weight_softbody_);

static FloatPropertyRNA rna_BezierSplinePoint_radius_;
PropertyRNA &rna_BezierSplinePoint_radius = reinterpret_cast<PropertyRNA &>(rna_BezierSplinePoint_radius_);

StructRNA *RNA_BezierSplinePoint;
void register_struct_BezierSplinePoint(BlenderRNA &brna)
{
	rna_BezierSplinePoint_rna_properties_ = {
		{&rna_BezierSplinePoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BezierSplinePoint_rna_properties_begin, BezierSplinePoint_rna_properties_next, BezierSplinePoint_rna_properties_end, BezierSplinePoint_rna_properties_get, nullptr, nullptr, BezierSplinePoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BezierSplinePoint_rna_type_ = {
		{&rna_BezierSplinePoint_select_left_handle, 	&rna_BezierSplinePoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BezierSplinePoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BezierSplinePoint_select_left_handle_ = {
		{&rna_BezierSplinePoint_select_right_handle, 	&rna_BezierSplinePoint_rna_type,
		-1, "select_left_handle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 1 selected",
		"Handle 1 selection status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BezierSplinePoint_select_left_handle_get, BezierSplinePoint_select_left_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BezierSplinePoint_select_right_handle_ = {
		{&rna_BezierSplinePoint_select_control_point, 	&rna_BezierSplinePoint_select_left_handle,
		-1, "select_right_handle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 2 selected",
		"Handle 2 selection status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BezierSplinePoint_select_right_handle_get, BezierSplinePoint_select_right_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BezierSplinePoint_select_control_point_ = {
		{&rna_BezierSplinePoint_hide, 	&rna_BezierSplinePoint_select_right_handle,
		-1, "select_control_point", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Control Point selected",
		"Control point selection status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BezierSplinePoint_select_control_point_get, BezierSplinePoint_select_control_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BezierSplinePoint_hide_ = {
		{&rna_BezierSplinePoint_handle_left_type, 	&rna_BezierSplinePoint_select_control_point,
		-1, "hide", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Hide",
		"Visibility status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, hide), RawPropertyType(3), nullptr},
		BezierSplinePoint_hide_get, BezierSplinePoint_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_BezierSplinePoint_handle_left_type_items[5] = {
		{0, "FREE", 0, "Free", ""	},
		{2, "VECTOR", 0, "Vector", ""	},
		{3, "ALIGNED", 0, "Aligned", ""	},
		{1, "AUTO", 0, "Auto", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BezierSplinePoint_handle_left_type_ = {
		{&rna_BezierSplinePoint_handle_right_type, 	&rna_BezierSplinePoint_hide,
		-1, "handle_left_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Handle 1 Type",
		"Handle types",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_points, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, h1), RawPropertyType(6), nullptr},
		BezierSplinePoint_handle_left_type_get, BezierSplinePoint_handle_left_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BezierSplinePoint_handle_left_type_items, 4, 0
	};

	static const EnumPropertyItem rna_BezierSplinePoint_handle_right_type_items[5] = {
		{0, "FREE", 0, "Free", ""	},
		{2, "VECTOR", 0, "Vector", ""	},
		{3, "ALIGNED", 0, "Aligned", ""	},
		{1, "AUTO", 0, "Auto", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BezierSplinePoint_handle_right_type_ = {
		{&rna_BezierSplinePoint_handle_left, 	&rna_BezierSplinePoint_handle_left_type,
		-1, "handle_right_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Handle 2 Type",
		"Handle types",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_points, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, h2), RawPropertyType(6), nullptr},
		BezierSplinePoint_handle_right_type_get, BezierSplinePoint_handle_right_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BezierSplinePoint_handle_right_type_items, 4, 0
	};

	static float rna_BezierSplinePoint_handle_left_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_BezierSplinePoint_handle_left_ = {
		{&rna_BezierSplinePoint_co, 	&rna_BezierSplinePoint_handle_right_type,
		-1, "handle_left", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 1",
		"Coordinates of the first handle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Curve_update_points, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, BezierSplinePoint_handle_left_get, BezierSplinePoint_handle_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_BezierSplinePoint_handle_left_default
	};

	static float rna_BezierSplinePoint_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_BezierSplinePoint_co_ = {
		{&rna_BezierSplinePoint_handle_right, 	&rna_BezierSplinePoint_handle_left,
		-1, "co", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Control Point",
		"Coordinates of the control point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Curve_update_points, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, BezierSplinePoint_co_get, BezierSplinePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_BezierSplinePoint_co_default
	};

	static float rna_BezierSplinePoint_handle_right_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_BezierSplinePoint_handle_right_ = {
		{&rna_BezierSplinePoint_tilt, 	&rna_BezierSplinePoint_co,
		-1, "handle_right", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 2",
		"Coordinates of the second handle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Curve_update_points, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, BezierSplinePoint_handle_right_get, BezierSplinePoint_handle_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_BezierSplinePoint_handle_right_default
	};

	rna_BezierSplinePoint_tilt_ = {
		{&rna_BezierSplinePoint_weight_softbody, 	&rna_BezierSplinePoint_handle_right,
		-1, "tilt", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tilt",
		"Tilt in 3D View",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, tilt), RawPropertyType(5), nullptr},
		BezierSplinePoint_tilt_get, BezierSplinePoint_tilt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BezierSplinePoint_weight_softbody_ = {
		{&rna_BezierSplinePoint_radius, 	&rna_BezierSplinePoint_tilt,
		-1, "weight_softbody", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Softbody goal weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, weight), RawPropertyType(5), nullptr},
		BezierSplinePoint_weight_softbody_get, BezierSplinePoint_weight_softbody_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BezierSplinePoint_radius_ = {
		{nullptr, 	&rna_BezierSplinePoint_weight_softbody,
		-1, "radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bevel Radius",
		"Radius for beveling",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, radius), RawPropertyType(5), nullptr},
		BezierSplinePoint_radius_get, BezierSplinePoint_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_BezierSplinePoint;
	srna->cont.properties = {&rna_BezierSplinePoint_rna_properties, &rna_BezierSplinePoint_radius};
	srna->identifier = "BezierSplinePoint";
	srna->flag = 516;
	srna->name = "Bézier Curve Point";
	srna->description = "Bézier curve point with two handles";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BezierSplinePoint_rna_properties;
	srna->path = rna_Curve_spline_point_path;
};

/* Spline */
static CollectionPropertyRNA rna_Spline_rna_properties_;
PropertyRNA &rna_Spline_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Spline_rna_properties_);

static PointerPropertyRNA rna_Spline_rna_type_;
PropertyRNA &rna_Spline_rna_type = reinterpret_cast<PropertyRNA &>(rna_Spline_rna_type_);

static CollectionPropertyRNA rna_Spline_points_;
PropertyRNA &rna_Spline_points = reinterpret_cast<PropertyRNA &>(rna_Spline_points_);

static CollectionPropertyRNA rna_Spline_bezier_points_;
PropertyRNA &rna_Spline_bezier_points = reinterpret_cast<PropertyRNA &>(rna_Spline_bezier_points_);

static EnumPropertyRNA rna_Spline_tilt_interpolation_;
PropertyRNA &rna_Spline_tilt_interpolation = reinterpret_cast<PropertyRNA &>(rna_Spline_tilt_interpolation_);

static EnumPropertyRNA rna_Spline_radius_interpolation_;
PropertyRNA &rna_Spline_radius_interpolation = reinterpret_cast<PropertyRNA &>(rna_Spline_radius_interpolation_);

static EnumPropertyRNA rna_Spline_type_;
PropertyRNA &rna_Spline_type = reinterpret_cast<PropertyRNA &>(rna_Spline_type_);

static IntPropertyRNA rna_Spline_point_count_u_;
PropertyRNA &rna_Spline_point_count_u = reinterpret_cast<PropertyRNA &>(rna_Spline_point_count_u_);

static IntPropertyRNA rna_Spline_point_count_v_;
PropertyRNA &rna_Spline_point_count_v = reinterpret_cast<PropertyRNA &>(rna_Spline_point_count_v_);

static IntPropertyRNA rna_Spline_order_u_;
PropertyRNA &rna_Spline_order_u = reinterpret_cast<PropertyRNA &>(rna_Spline_order_u_);

static IntPropertyRNA rna_Spline_order_v_;
PropertyRNA &rna_Spline_order_v = reinterpret_cast<PropertyRNA &>(rna_Spline_order_v_);

static IntPropertyRNA rna_Spline_resolution_u_;
PropertyRNA &rna_Spline_resolution_u = reinterpret_cast<PropertyRNA &>(rna_Spline_resolution_u_);

static IntPropertyRNA rna_Spline_resolution_v_;
PropertyRNA &rna_Spline_resolution_v = reinterpret_cast<PropertyRNA &>(rna_Spline_resolution_v_);

static BoolPropertyRNA rna_Spline_use_cyclic_u_;
PropertyRNA &rna_Spline_use_cyclic_u = reinterpret_cast<PropertyRNA &>(rna_Spline_use_cyclic_u_);

static BoolPropertyRNA rna_Spline_use_cyclic_v_;
PropertyRNA &rna_Spline_use_cyclic_v = reinterpret_cast<PropertyRNA &>(rna_Spline_use_cyclic_v_);

static BoolPropertyRNA rna_Spline_use_endpoint_u_;
PropertyRNA &rna_Spline_use_endpoint_u = reinterpret_cast<PropertyRNA &>(rna_Spline_use_endpoint_u_);

static BoolPropertyRNA rna_Spline_use_endpoint_v_;
PropertyRNA &rna_Spline_use_endpoint_v = reinterpret_cast<PropertyRNA &>(rna_Spline_use_endpoint_v_);

static BoolPropertyRNA rna_Spline_use_bezier_u_;
PropertyRNA &rna_Spline_use_bezier_u = reinterpret_cast<PropertyRNA &>(rna_Spline_use_bezier_u_);

static BoolPropertyRNA rna_Spline_use_bezier_v_;
PropertyRNA &rna_Spline_use_bezier_v = reinterpret_cast<PropertyRNA &>(rna_Spline_use_bezier_v_);

static BoolPropertyRNA rna_Spline_use_smooth_;
PropertyRNA &rna_Spline_use_smooth = reinterpret_cast<PropertyRNA &>(rna_Spline_use_smooth_);

static BoolPropertyRNA rna_Spline_hide_;
PropertyRNA &rna_Spline_hide = reinterpret_cast<PropertyRNA &>(rna_Spline_hide_);

static IntPropertyRNA rna_Spline_material_index_;
PropertyRNA &rna_Spline_material_index = reinterpret_cast<PropertyRNA &>(rna_Spline_material_index_);

static IntPropertyRNA rna_Spline_character_index_;
PropertyRNA &rna_Spline_character_index = reinterpret_cast<PropertyRNA &>(rna_Spline_character_index_);

static IntPropertyRNA rna_Spline_calc_length_resolution_;
PropertyRNA &rna_Spline_calc_length_resolution = reinterpret_cast<PropertyRNA &>(rna_Spline_calc_length_resolution_);

static FloatPropertyRNA rna_Spline_calc_length_length_;
PropertyRNA &rna_Spline_calc_length_length = reinterpret_cast<PropertyRNA &>(rna_Spline_calc_length_length_);

FunctionRNA *rna_Spline_calc_length_func;
static IntPropertyRNA rna_Spline_valid_message_direction_;
PropertyRNA &rna_Spline_valid_message_direction = reinterpret_cast<PropertyRNA &>(rna_Spline_valid_message_direction_);

static StringPropertyRNA rna_Spline_valid_message_result_;
PropertyRNA &rna_Spline_valid_message_result = reinterpret_cast<PropertyRNA &>(rna_Spline_valid_message_result_);

FunctionRNA *rna_Spline_valid_message_func;
StructRNA *RNA_Spline;
void register_struct_Spline(BlenderRNA &brna)
{
	rna_Spline_rna_properties_ = {
		{&rna_Spline_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_rna_properties_begin, Spline_rna_properties_next, Spline_rna_properties_end, Spline_rna_properties_get, nullptr, nullptr, Spline_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Spline_rna_type_ = {
		{&rna_Spline_points, 	&rna_Spline_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Spline_points_ = {
		{&rna_Spline_bezier_points, 	&rna_Spline_rna_type,
		-1, "points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Points",
		"Collection of points that make up this poly or nurbs spline",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_SplinePoints},
		Spline_points_begin, Spline_points_next, Spline_points_end, Spline_points_get, Spline_points_length, Spline_points_lookup_int, nullptr, nullptr, RNA_SplinePoint
	};

	rna_Spline_bezier_points_ = {
		{&rna_Spline_tilt_interpolation, 	&rna_Spline_points,
		-1, "bezier_points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Bézier Points",
		"Collection of points for Bézier curves only",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_SplineBezierPoints},
		Spline_bezier_points_begin, Spline_bezier_points_next, Spline_bezier_points_end, Spline_bezier_points_get, Spline_bezier_points_length, Spline_bezier_points_lookup_int, nullptr, nullptr, RNA_BezierSplinePoint
	};

	static const EnumPropertyItem rna_Spline_tilt_interpolation_items[5] = {
		{0, "LINEAR", 0, "Linear", ""	},
		{1, "CARDINAL", 0, "Cardinal", ""	},
		{2, "BSPLINE", 0, "BSpline", ""	},
		{3, "EASE", 0, "Ease", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Spline_tilt_interpolation_ = {
		{&rna_Spline_radius_interpolation, 	&rna_Spline_bezier_points,
		-1, "tilt_interpolation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tilt Interpolation",
		"The type of tilt interpolation for 3D, Bézier curves",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Nurb, tilt_interp), RawPropertyType(1), nullptr},
		Spline_tilt_interpolation_get, Spline_tilt_interpolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Spline_tilt_interpolation_items, 4, 0
	};

	static const EnumPropertyItem rna_Spline_radius_interpolation_items[5] = {
		{0, "LINEAR", 0, "Linear", ""	},
		{1, "CARDINAL", 0, "Cardinal", ""	},
		{2, "BSPLINE", 0, "BSpline", ""	},
		{3, "EASE", 0, "Ease", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Spline_radius_interpolation_ = {
		{&rna_Spline_type, 	&rna_Spline_tilt_interpolation,
		-1, "radius_interpolation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Radius Interpolation",
		"The type of radius interpolation for Bézier curves",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Nurb, radius_interp), RawPropertyType(1), nullptr},
		Spline_radius_interpolation_get, Spline_radius_interpolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Spline_radius_interpolation_items, 4, 0
	};

	static const EnumPropertyItem rna_Spline_type_items[4] = {
		{0, "POLY", 0, "Poly", ""	},
		{1, "BEZIER", 0, "Bézier", ""	},
		{4, "NURBS", 0, "Ease", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Spline_type_ = {
		{&rna_Spline_point_count_u, 	&rna_Spline_radius_interpolation,
		-1, "type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"The interpolation type for this curve element",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_type_get, Spline_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Spline_type_items, 3, 0
	};

	rna_Spline_point_count_u_ = {
		{&rna_Spline_point_count_v, 	&rna_Spline_type,
		-1, "point_count_u", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Points U",
		"Total number points for the curve or surface in the U direction",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Nurb, pntsu), RawPropertyType(0), nullptr},
		Spline_point_count_u_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_point_count_v_ = {
		{&rna_Spline_order_u, 	&rna_Spline_point_count_u,
		-1, "point_count_v", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Points V",
		"Total number points for the surface on the V direction",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Nurb, pntsv), RawPropertyType(0), nullptr},
		Spline_point_count_v_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_order_u_ = {
		{&rna_Spline_order_v, 	&rna_Spline_point_count_v,
		-1, "order_u", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Order U",
		"NURBS order in the U direction. Higher values make each point influence a greater area, but have worse performance.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Nurb_update_knot_u, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Nurb, orderu), RawPropertyType(1), nullptr},
		Spline_order_u_get, Spline_order_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 2, 6, 2, 64, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_order_v_ = {
		{&rna_Spline_resolution_u, 	&rna_Spline_order_u,
		-1, "order_v", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Order V",
		"NURBS order in the V direction. Higher values make each point influence a greater area, but have worse performance.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Nurb_update_knot_v, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Nurb, orderv), RawPropertyType(1), nullptr},
		Spline_order_v_get, Spline_order_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 2, 6, 2, 64, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_resolution_u_ = {
		{&rna_Spline_resolution_v, 	&rna_Spline_order_v,
		-1, "resolution_u", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution U",
		"Curve or Surface subdivisions per segment",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Nurb, resolu), RawPropertyType(1), nullptr},
		Spline_resolution_u_get, Spline_resolution_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 64, 1, 1024, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_resolution_v_ = {
		{&rna_Spline_use_cyclic_u, 	&rna_Spline_resolution_u,
		-1, "resolution_v", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution V",
		"Surface subdivisions per segment",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Nurb, resolv), RawPropertyType(1), nullptr},
		Spline_resolution_v_get, Spline_resolution_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 64, 1, 1024, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_use_cyclic_u_ = {
		{&rna_Spline_use_cyclic_v, 	&rna_Spline_resolution_v,
		-1, "use_cyclic_u", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cyclic U",
		"Make this curve or surface a closed loop in the U direction",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Nurb_update_cyclic_u, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_use_cyclic_u_get, Spline_use_cyclic_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_use_cyclic_v_ = {
		{&rna_Spline_use_endpoint_u, 	&rna_Spline_use_cyclic_u,
		-1, "use_cyclic_v", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cyclic V",
		"Make this surface a closed loop in the V direction",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Nurb_update_cyclic_v, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_use_cyclic_v_get, Spline_use_cyclic_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_use_endpoint_u_ = {
		{&rna_Spline_use_endpoint_v, 	&rna_Spline_use_cyclic_v,
		-1, "use_endpoint_u", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Endpoint U",
		"Make this nurbs curve or surface meet the endpoints in the U direction",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Nurb_update_knot_u, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_use_endpoint_u_get, Spline_use_endpoint_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_use_endpoint_v_ = {
		{&rna_Spline_use_bezier_u, 	&rna_Spline_use_endpoint_u,
		-1, "use_endpoint_v", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Endpoint V",
		"Make this nurbs surface meet the endpoints in the V direction",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Nurb_update_knot_v, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_use_endpoint_v_get, Spline_use_endpoint_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_use_bezier_u_ = {
		{&rna_Spline_use_bezier_v, 	&rna_Spline_use_endpoint_v,
		-1, "use_bezier_u", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bézier U",
		"Make this nurbs curve or surface act like a Bézier spline in the U direction",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Nurb_update_knot_u, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_use_bezier_u_get, Spline_use_bezier_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_use_bezier_v_ = {
		{&rna_Spline_use_smooth, 	&rna_Spline_use_bezier_u,
		-1, "use_bezier_v", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bézier V",
		"Make this nurbs surface act like a Bézier spline in the V direction",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Nurb_update_knot_v, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_use_bezier_v_get, Spline_use_bezier_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_use_smooth_ = {
		{&rna_Spline_hide, 	&rna_Spline_use_bezier_v,
		-1, "use_smooth", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Smooth",
		"Smooth the normals of the surface or beveled curve",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_use_smooth_get, Spline_use_smooth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_hide_ = {
		{&rna_Spline_material_index, 	&rna_Spline_use_smooth,
		-1, "hide", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Hide this curve in Edit mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Spline_hide_get, Spline_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_material_index_ = {
		{&rna_Spline_character_index, 	&rna_Spline_hide,
		-1, "material_index", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Material Index",
		"Material slot index of this curve",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Nurb, mat_nr), RawPropertyType(1), nullptr},
		Spline_material_index_get, Spline_material_index_set, nullptr, nullptr, rna_Curve_material_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Spline_character_index_ = {
		{nullptr, 	&rna_Spline_material_index,
		-1, "character_index", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Character Index",
		"Location of this character in the text data (only for text curves)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Curve_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Nurb, charidx), RawPropertyType(0), nullptr},
		Spline_character_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Spline;
	srna->cont.properties = {&rna_Spline_rna_properties, &rna_Spline_character_index};
	srna->identifier = "Spline";
	srna->flag = 516;
	srna->name = "Spline";
	srna->description = "Element of a curve, either NURBS, Bézier or Polyline or a character with text objects";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Spline_rna_properties;
	srna->path = rna_Curve_spline_path;
	{
	rna_Spline_calc_length_resolution_ = {
		{&rna_Spline_calc_length_length, 	nullptr,
		-1, "resolution", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Resolution",
		"Spline resolution to be used, 0 defaults to the resolution_u",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 64, 0, 1024, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Spline_calc_length_length_ = {
		{nullptr, 	&rna_Spline_calc_length_resolution,
		-1, "length", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Length",
		"Length of the polygonaly approximated spline",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Spline_calc_length_resolution, &rna_Spline_calc_length_length};
		func->identifier = "calc_length";
		func->description = "Calculate spline length";
		func->call = Spline_calc_length_call;
		func->c_ret = &rna_Spline_calc_length_length;
		rna_Spline_calc_length_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Spline_valid_message_direction_ = {
		{&rna_Spline_valid_message_result, 	nullptr,
		-1, "direction", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Direction",
		"The direction where 0-1 maps to U-V",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1, 0, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Spline_valid_message_result_ = {
		{nullptr, 	&rna_Spline_valid_message_direction,
		-1, "result", 131073, 0, 2, 0, 0, PropertyPathTemplateType(0), "Return value",
		"The message or an empty string when there is no error",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "nothing"
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Spline_valid_message_direction, &rna_Spline_valid_message_result};
		func->identifier = "valid_message";
		func->description = "Return the message";
		func->call = Spline_valid_message_call;
		rna_Spline_valid_message_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Spline Points */
static CollectionPropertyRNA rna_SplinePoints_rna_properties_;
PropertyRNA &rna_SplinePoints_rna_properties = reinterpret_cast<PropertyRNA &>(rna_SplinePoints_rna_properties_);

static PointerPropertyRNA rna_SplinePoints_rna_type_;
PropertyRNA &rna_SplinePoints_rna_type = reinterpret_cast<PropertyRNA &>(rna_SplinePoints_rna_type_);

static IntPropertyRNA rna_SplinePoints_add_count_;
PropertyRNA &rna_SplinePoints_add_count = reinterpret_cast<PropertyRNA &>(rna_SplinePoints_add_count_);

FunctionRNA *rna_SplinePoints_add_func;
StructRNA *RNA_SplinePoints;
void register_struct_SplinePoints(BlenderRNA &brna)
{
	rna_SplinePoints_rna_properties_ = {
		{&rna_SplinePoints_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplinePoints_rna_properties_begin, SplinePoints_rna_properties_next, SplinePoints_rna_properties_end, SplinePoints_rna_properties_get, nullptr, nullptr, SplinePoints_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_SplinePoints_rna_type_ = {
		{nullptr, 	&rna_SplinePoints_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplinePoints_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_SplinePoints;
	srna->cont.properties = {&rna_SplinePoints_rna_properties, &rna_SplinePoints_rna_type};
	srna->identifier = "SplinePoints";
	srna->flag = 516;
	srna->name = "Spline Points";
	srna->description = "Collection of spline points";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_SplinePoints_rna_properties;
	{
	rna_SplinePoints_add_count_ = {
		{nullptr, 	nullptr,
		-1, "count", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Number",
		"Number of points to add to the spline",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_SplinePoints_add_count, &rna_SplinePoints_add_count};
		func->identifier = "add";
		func->flag = 2064;
		func->description = "Add a number of points to this spline";
		func->call = SplinePoints_add_call;
		rna_SplinePoints_add_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Spline Bézier Points */
static CollectionPropertyRNA rna_SplineBezierPoints_rna_properties_;
PropertyRNA &rna_SplineBezierPoints_rna_properties = reinterpret_cast<PropertyRNA &>(rna_SplineBezierPoints_rna_properties_);

static PointerPropertyRNA rna_SplineBezierPoints_rna_type_;
PropertyRNA &rna_SplineBezierPoints_rna_type = reinterpret_cast<PropertyRNA &>(rna_SplineBezierPoints_rna_type_);

static IntPropertyRNA rna_SplineBezierPoints_add_count_;
PropertyRNA &rna_SplineBezierPoints_add_count = reinterpret_cast<PropertyRNA &>(rna_SplineBezierPoints_add_count_);

FunctionRNA *rna_SplineBezierPoints_add_func;
StructRNA *RNA_SplineBezierPoints;
void register_struct_SplineBezierPoints(BlenderRNA &brna)
{
	rna_SplineBezierPoints_rna_properties_ = {
		{&rna_SplineBezierPoints_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplineBezierPoints_rna_properties_begin, SplineBezierPoints_rna_properties_next, SplineBezierPoints_rna_properties_end, SplineBezierPoints_rna_properties_get, nullptr, nullptr, SplineBezierPoints_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_SplineBezierPoints_rna_type_ = {
		{nullptr, 	&rna_SplineBezierPoints_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplineBezierPoints_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_SplineBezierPoints;
	srna->cont.properties = {&rna_SplineBezierPoints_rna_properties, &rna_SplineBezierPoints_rna_type};
	srna->identifier = "SplineBezierPoints";
	srna->flag = 516;
	srna->name = "Spline Bézier Points";
	srna->description = "Collection of spline Bézier points";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_SplineBezierPoints_rna_properties;
	{
	rna_SplineBezierPoints_add_count_ = {
		{nullptr, 	nullptr,
		-1, "count", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Number",
		"Number of points to add to the spline",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_SplineBezierPoints_add_count, &rna_SplineBezierPoints_add_count};
		func->identifier = "add";
		func->flag = 2064;
		func->description = "Add a number of points to this spline";
		func->call = SplineBezierPoints_add_call;
		rna_SplineBezierPoints_add_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
