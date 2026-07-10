
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

#include "rna_render.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_RenderEngine_rna_properties;
extern PropertyRNA &rna_RenderEngine_rna_type;
extern PropertyRNA &rna_RenderEngine_is_animation;
extern PropertyRNA &rna_RenderEngine_is_preview;
extern PropertyRNA &rna_RenderEngine_camera_override;
extern PropertyRNA &rna_RenderEngine_layer_override;
extern PropertyRNA &rna_RenderEngine_resolution_x;
extern PropertyRNA &rna_RenderEngine_resolution_y;
extern PropertyRNA &rna_RenderEngine_temporary_directory;
extern PropertyRNA &rna_RenderEngine_render;
extern PropertyRNA &rna_RenderEngine_use_highlight_tiles;
extern PropertyRNA &rna_RenderEngine_bl_idname;
extern PropertyRNA &rna_RenderEngine_bl_label;
extern PropertyRNA &rna_RenderEngine_bl_use_preview;
extern PropertyRNA &rna_RenderEngine_bl_use_postprocess;
extern PropertyRNA &rna_RenderEngine_bl_use_eevee_viewport;
extern PropertyRNA &rna_RenderEngine_bl_use_custom_freestyle;
extern PropertyRNA &rna_RenderEngine_bl_use_image_save;
extern PropertyRNA &rna_RenderEngine_bl_use_gpu_context;
extern PropertyRNA &rna_RenderEngine_bl_use_shading_nodes_custom;
extern PropertyRNA &rna_RenderEngine_bl_use_spherical_stereo;
extern PropertyRNA &rna_RenderEngine_bl_use_stereo_viewport;
extern PropertyRNA &rna_RenderEngine_bl_use_materialx;

extern FunctionRNA *rna_RenderEngine_update_func;
extern PropertyRNA &rna_RenderEngine_update_data;
extern PropertyRNA &rna_RenderEngine_update_depsgraph;

extern FunctionRNA *rna_RenderEngine_render_func;
extern PropertyRNA &rna_RenderEngine_render_depsgraph;

extern FunctionRNA *rna_RenderEngine_render_frame_finish_func;
extern FunctionRNA *rna_RenderEngine_draw_func;
extern PropertyRNA &rna_RenderEngine_draw_context;
extern PropertyRNA &rna_RenderEngine_draw_depsgraph;

extern FunctionRNA *rna_RenderEngine_bake_func;
extern PropertyRNA &rna_RenderEngine_bake_depsgraph;
extern PropertyRNA &rna_RenderEngine_bake_object;
extern PropertyRNA &rna_RenderEngine_bake_pass_type;
extern PropertyRNA &rna_RenderEngine_bake_pass_filter;
extern PropertyRNA &rna_RenderEngine_bake_width;
extern PropertyRNA &rna_RenderEngine_bake_height;

extern FunctionRNA *rna_RenderEngine_view_update_func;
extern PropertyRNA &rna_RenderEngine_view_update_context;
extern PropertyRNA &rna_RenderEngine_view_update_depsgraph;

extern FunctionRNA *rna_RenderEngine_view_draw_func;
extern PropertyRNA &rna_RenderEngine_view_draw_context;
extern PropertyRNA &rna_RenderEngine_view_draw_depsgraph;

extern FunctionRNA *rna_RenderEngine_update_script_node_func;
extern PropertyRNA &rna_RenderEngine_update_script_node_node;

extern FunctionRNA *rna_RenderEngine_update_render_passes_func;
extern PropertyRNA &rna_RenderEngine_update_render_passes_scene;
extern PropertyRNA &rna_RenderEngine_update_render_passes_renderlayer;

extern FunctionRNA *rna_RenderEngine_update_custom_camera_func;
extern PropertyRNA &rna_RenderEngine_update_custom_camera_cam;

extern FunctionRNA *rna_RenderEngine_tag_redraw_func;
extern FunctionRNA *rna_RenderEngine_tag_update_func;
extern FunctionRNA *rna_RenderEngine_begin_result_func;
extern PropertyRNA &rna_RenderEngine_begin_result_x;
extern PropertyRNA &rna_RenderEngine_begin_result_y;
extern PropertyRNA &rna_RenderEngine_begin_result_w;
extern PropertyRNA &rna_RenderEngine_begin_result_h;
extern PropertyRNA &rna_RenderEngine_begin_result_layer;
extern PropertyRNA &rna_RenderEngine_begin_result_view;
extern PropertyRNA &rna_RenderEngine_begin_result_result;

extern FunctionRNA *rna_RenderEngine_update_result_func;
extern PropertyRNA &rna_RenderEngine_update_result_result;

extern FunctionRNA *rna_RenderEngine_end_result_func;
extern PropertyRNA &rna_RenderEngine_end_result_result;
extern PropertyRNA &rna_RenderEngine_end_result_cancel;
extern PropertyRNA &rna_RenderEngine_end_result_highlight;
extern PropertyRNA &rna_RenderEngine_end_result_do_merge_results;

extern FunctionRNA *rna_RenderEngine_add_pass_func;
extern PropertyRNA &rna_RenderEngine_add_pass_name;
extern PropertyRNA &rna_RenderEngine_add_pass_channels;
extern PropertyRNA &rna_RenderEngine_add_pass_chan_id;
extern PropertyRNA &rna_RenderEngine_add_pass_layer;

extern FunctionRNA *rna_RenderEngine_get_result_func;
extern PropertyRNA &rna_RenderEngine_get_result_result;

extern FunctionRNA *rna_RenderEngine_test_break_func;
extern PropertyRNA &rna_RenderEngine_test_break_do_break;

extern FunctionRNA *rna_RenderEngine_pass_by_index_get_func;
extern PropertyRNA &rna_RenderEngine_pass_by_index_get_layer;
extern PropertyRNA &rna_RenderEngine_pass_by_index_get_index;
extern PropertyRNA &rna_RenderEngine_pass_by_index_get_render_pass;

extern FunctionRNA *rna_RenderEngine_active_view_get_func;
extern PropertyRNA &rna_RenderEngine_active_view_get_view;

extern FunctionRNA *rna_RenderEngine_active_view_set_func;
extern PropertyRNA &rna_RenderEngine_active_view_set_view;

extern FunctionRNA *rna_RenderEngine_camera_shift_x_func;
extern PropertyRNA &rna_RenderEngine_camera_shift_x_camera;
extern PropertyRNA &rna_RenderEngine_camera_shift_x_use_spherical_stereo;
extern PropertyRNA &rna_RenderEngine_camera_shift_x_shift_x;

extern FunctionRNA *rna_RenderEngine_camera_model_matrix_func;
extern PropertyRNA &rna_RenderEngine_camera_model_matrix_camera;
extern PropertyRNA &rna_RenderEngine_camera_model_matrix_use_spherical_stereo;
extern PropertyRNA &rna_RenderEngine_camera_model_matrix_r_model_matrix;

extern FunctionRNA *rna_RenderEngine_use_spherical_stereo_func;
extern PropertyRNA &rna_RenderEngine_use_spherical_stereo_camera;
extern PropertyRNA &rna_RenderEngine_use_spherical_stereo_use_spherical_stereo;

extern FunctionRNA *rna_RenderEngine_update_stats_func;
extern PropertyRNA &rna_RenderEngine_update_stats_stats;
extern PropertyRNA &rna_RenderEngine_update_stats_info;

extern FunctionRNA *rna_RenderEngine_frame_set_func;
extern PropertyRNA &rna_RenderEngine_frame_set_frame;
extern PropertyRNA &rna_RenderEngine_frame_set_subframe;

extern FunctionRNA *rna_RenderEngine_update_progress_func;
extern PropertyRNA &rna_RenderEngine_update_progress_progress;

extern FunctionRNA *rna_RenderEngine_update_memory_stats_func;
extern PropertyRNA &rna_RenderEngine_update_memory_stats_memory_used;
extern PropertyRNA &rna_RenderEngine_update_memory_stats_memory_peak;

extern FunctionRNA *rna_RenderEngine_report_func;
extern PropertyRNA &rna_RenderEngine_report_type;
extern PropertyRNA &rna_RenderEngine_report_message;

extern FunctionRNA *rna_RenderEngine_error_set_func;
extern PropertyRNA &rna_RenderEngine_error_set_message;

extern FunctionRNA *rna_RenderEngine_bind_display_space_shader_func;
extern PropertyRNA &rna_RenderEngine_bind_display_space_shader_scene;

extern FunctionRNA *rna_RenderEngine_unbind_display_space_shader_func;
extern FunctionRNA *rna_RenderEngine_support_display_space_shader_func;
extern PropertyRNA &rna_RenderEngine_support_display_space_shader_scene;
extern PropertyRNA &rna_RenderEngine_support_display_space_shader_supported;

extern FunctionRNA *rna_RenderEngine_get_preview_pixel_size_func;
extern PropertyRNA &rna_RenderEngine_get_preview_pixel_size_scene;
extern PropertyRNA &rna_RenderEngine_get_preview_pixel_size_pixel_size;

extern FunctionRNA *rna_RenderEngine_free_blender_memory_func;
extern FunctionRNA *rna_RenderEngine_tile_highlight_set_func;
extern PropertyRNA &rna_RenderEngine_tile_highlight_set_x;
extern PropertyRNA &rna_RenderEngine_tile_highlight_set_y;
extern PropertyRNA &rna_RenderEngine_tile_highlight_set_width;
extern PropertyRNA &rna_RenderEngine_tile_highlight_set_height;
extern PropertyRNA &rna_RenderEngine_tile_highlight_set_highlight;

extern FunctionRNA *rna_RenderEngine_tile_highlight_clear_all_func;
extern FunctionRNA *rna_RenderEngine_register_pass_func;
extern PropertyRNA &rna_RenderEngine_register_pass_scene;
extern PropertyRNA &rna_RenderEngine_register_pass_view_layer;
extern PropertyRNA &rna_RenderEngine_register_pass_name;
extern PropertyRNA &rna_RenderEngine_register_pass_channels;
extern PropertyRNA &rna_RenderEngine_register_pass_chanid;
extern PropertyRNA &rna_RenderEngine_register_pass_type;



extern PropertyRNA &rna_RenderEngine_rna_properties;
extern PropertyRNA &rna_RenderEngine_rna_type;
extern PropertyRNA &rna_RenderEngine_is_animation;
extern PropertyRNA &rna_RenderEngine_is_preview;
extern PropertyRNA &rna_RenderEngine_camera_override;
extern PropertyRNA &rna_RenderEngine_layer_override;
extern PropertyRNA &rna_RenderEngine_resolution_x;
extern PropertyRNA &rna_RenderEngine_resolution_y;
extern PropertyRNA &rna_RenderEngine_temporary_directory;
extern PropertyRNA &rna_RenderEngine_render;
extern PropertyRNA &rna_RenderEngine_use_highlight_tiles;
extern PropertyRNA &rna_RenderEngine_bl_idname;
extern PropertyRNA &rna_RenderEngine_bl_label;
extern PropertyRNA &rna_RenderEngine_bl_use_preview;
extern PropertyRNA &rna_RenderEngine_bl_use_postprocess;
extern PropertyRNA &rna_RenderEngine_bl_use_eevee_viewport;
extern PropertyRNA &rna_RenderEngine_bl_use_custom_freestyle;
extern PropertyRNA &rna_RenderEngine_bl_use_image_save;
extern PropertyRNA &rna_RenderEngine_bl_use_gpu_context;
extern PropertyRNA &rna_RenderEngine_bl_use_shading_nodes_custom;
extern PropertyRNA &rna_RenderEngine_bl_use_spherical_stereo;
extern PropertyRNA &rna_RenderEngine_bl_use_stereo_viewport;
extern PropertyRNA &rna_RenderEngine_bl_use_materialx;

extern FunctionRNA *rna_RenderEngine_update_func;
extern PropertyRNA &rna_RenderEngine_update_data;
extern PropertyRNA &rna_RenderEngine_update_depsgraph;

extern FunctionRNA *rna_RenderEngine_render_func;
extern PropertyRNA &rna_RenderEngine_render_depsgraph;

extern FunctionRNA *rna_RenderEngine_render_frame_finish_func;
extern FunctionRNA *rna_RenderEngine_draw_func;
extern PropertyRNA &rna_RenderEngine_draw_context;
extern PropertyRNA &rna_RenderEngine_draw_depsgraph;

extern FunctionRNA *rna_RenderEngine_bake_func;
extern PropertyRNA &rna_RenderEngine_bake_depsgraph;
extern PropertyRNA &rna_RenderEngine_bake_object;
extern PropertyRNA &rna_RenderEngine_bake_pass_type;
extern PropertyRNA &rna_RenderEngine_bake_pass_filter;
extern PropertyRNA &rna_RenderEngine_bake_width;
extern PropertyRNA &rna_RenderEngine_bake_height;

extern FunctionRNA *rna_RenderEngine_view_update_func;
extern PropertyRNA &rna_RenderEngine_view_update_context;
extern PropertyRNA &rna_RenderEngine_view_update_depsgraph;

extern FunctionRNA *rna_RenderEngine_view_draw_func;
extern PropertyRNA &rna_RenderEngine_view_draw_context;
extern PropertyRNA &rna_RenderEngine_view_draw_depsgraph;

extern FunctionRNA *rna_RenderEngine_update_script_node_func;
extern PropertyRNA &rna_RenderEngine_update_script_node_node;

extern FunctionRNA *rna_RenderEngine_update_render_passes_func;
extern PropertyRNA &rna_RenderEngine_update_render_passes_scene;
extern PropertyRNA &rna_RenderEngine_update_render_passes_renderlayer;

extern FunctionRNA *rna_RenderEngine_update_custom_camera_func;
extern PropertyRNA &rna_RenderEngine_update_custom_camera_cam;

extern FunctionRNA *rna_RenderEngine_tag_redraw_func;
extern FunctionRNA *rna_RenderEngine_tag_update_func;
extern FunctionRNA *rna_RenderEngine_begin_result_func;
extern PropertyRNA &rna_RenderEngine_begin_result_x;
extern PropertyRNA &rna_RenderEngine_begin_result_y;
extern PropertyRNA &rna_RenderEngine_begin_result_w;
extern PropertyRNA &rna_RenderEngine_begin_result_h;
extern PropertyRNA &rna_RenderEngine_begin_result_layer;
extern PropertyRNA &rna_RenderEngine_begin_result_view;
extern PropertyRNA &rna_RenderEngine_begin_result_result;

extern FunctionRNA *rna_RenderEngine_update_result_func;
extern PropertyRNA &rna_RenderEngine_update_result_result;

extern FunctionRNA *rna_RenderEngine_end_result_func;
extern PropertyRNA &rna_RenderEngine_end_result_result;
extern PropertyRNA &rna_RenderEngine_end_result_cancel;
extern PropertyRNA &rna_RenderEngine_end_result_highlight;
extern PropertyRNA &rna_RenderEngine_end_result_do_merge_results;

extern FunctionRNA *rna_RenderEngine_add_pass_func;
extern PropertyRNA &rna_RenderEngine_add_pass_name;
extern PropertyRNA &rna_RenderEngine_add_pass_channels;
extern PropertyRNA &rna_RenderEngine_add_pass_chan_id;
extern PropertyRNA &rna_RenderEngine_add_pass_layer;

extern FunctionRNA *rna_RenderEngine_get_result_func;
extern PropertyRNA &rna_RenderEngine_get_result_result;

extern FunctionRNA *rna_RenderEngine_test_break_func;
extern PropertyRNA &rna_RenderEngine_test_break_do_break;

extern FunctionRNA *rna_RenderEngine_pass_by_index_get_func;
extern PropertyRNA &rna_RenderEngine_pass_by_index_get_layer;
extern PropertyRNA &rna_RenderEngine_pass_by_index_get_index;
extern PropertyRNA &rna_RenderEngine_pass_by_index_get_render_pass;

extern FunctionRNA *rna_RenderEngine_active_view_get_func;
extern PropertyRNA &rna_RenderEngine_active_view_get_view;

extern FunctionRNA *rna_RenderEngine_active_view_set_func;
extern PropertyRNA &rna_RenderEngine_active_view_set_view;

extern FunctionRNA *rna_RenderEngine_camera_shift_x_func;
extern PropertyRNA &rna_RenderEngine_camera_shift_x_camera;
extern PropertyRNA &rna_RenderEngine_camera_shift_x_use_spherical_stereo;
extern PropertyRNA &rna_RenderEngine_camera_shift_x_shift_x;

extern FunctionRNA *rna_RenderEngine_camera_model_matrix_func;
extern PropertyRNA &rna_RenderEngine_camera_model_matrix_camera;
extern PropertyRNA &rna_RenderEngine_camera_model_matrix_use_spherical_stereo;
extern PropertyRNA &rna_RenderEngine_camera_model_matrix_r_model_matrix;

extern FunctionRNA *rna_RenderEngine_use_spherical_stereo_func;
extern PropertyRNA &rna_RenderEngine_use_spherical_stereo_camera;
extern PropertyRNA &rna_RenderEngine_use_spherical_stereo_use_spherical_stereo;

extern FunctionRNA *rna_RenderEngine_update_stats_func;
extern PropertyRNA &rna_RenderEngine_update_stats_stats;
extern PropertyRNA &rna_RenderEngine_update_stats_info;

extern FunctionRNA *rna_RenderEngine_frame_set_func;
extern PropertyRNA &rna_RenderEngine_frame_set_frame;
extern PropertyRNA &rna_RenderEngine_frame_set_subframe;

extern FunctionRNA *rna_RenderEngine_update_progress_func;
extern PropertyRNA &rna_RenderEngine_update_progress_progress;

extern FunctionRNA *rna_RenderEngine_update_memory_stats_func;
extern PropertyRNA &rna_RenderEngine_update_memory_stats_memory_used;
extern PropertyRNA &rna_RenderEngine_update_memory_stats_memory_peak;

extern FunctionRNA *rna_RenderEngine_report_func;
extern PropertyRNA &rna_RenderEngine_report_type;
extern PropertyRNA &rna_RenderEngine_report_message;

extern FunctionRNA *rna_RenderEngine_error_set_func;
extern PropertyRNA &rna_RenderEngine_error_set_message;

extern FunctionRNA *rna_RenderEngine_bind_display_space_shader_func;
extern PropertyRNA &rna_RenderEngine_bind_display_space_shader_scene;

extern FunctionRNA *rna_RenderEngine_unbind_display_space_shader_func;
extern FunctionRNA *rna_RenderEngine_support_display_space_shader_func;
extern PropertyRNA &rna_RenderEngine_support_display_space_shader_scene;
extern PropertyRNA &rna_RenderEngine_support_display_space_shader_supported;

extern FunctionRNA *rna_RenderEngine_get_preview_pixel_size_func;
extern PropertyRNA &rna_RenderEngine_get_preview_pixel_size_scene;
extern PropertyRNA &rna_RenderEngine_get_preview_pixel_size_pixel_size;

extern FunctionRNA *rna_RenderEngine_free_blender_memory_func;
extern FunctionRNA *rna_RenderEngine_tile_highlight_set_func;
extern PropertyRNA &rna_RenderEngine_tile_highlight_set_x;
extern PropertyRNA &rna_RenderEngine_tile_highlight_set_y;
extern PropertyRNA &rna_RenderEngine_tile_highlight_set_width;
extern PropertyRNA &rna_RenderEngine_tile_highlight_set_height;
extern PropertyRNA &rna_RenderEngine_tile_highlight_set_highlight;

extern FunctionRNA *rna_RenderEngine_tile_highlight_clear_all_func;
extern FunctionRNA *rna_RenderEngine_register_pass_func;
extern PropertyRNA &rna_RenderEngine_register_pass_scene;
extern PropertyRNA &rna_RenderEngine_register_pass_view_layer;
extern PropertyRNA &rna_RenderEngine_register_pass_name;
extern PropertyRNA &rna_RenderEngine_register_pass_channels;
extern PropertyRNA &rna_RenderEngine_register_pass_chanid;
extern PropertyRNA &rna_RenderEngine_register_pass_type;



extern PropertyRNA &rna_RenderResult_rna_properties;
extern PropertyRNA &rna_RenderResult_rna_type;
extern PropertyRNA &rna_RenderResult_resolution_x;
extern PropertyRNA &rna_RenderResult_resolution_y;
extern PropertyRNA &rna_RenderResult_layers;
extern PropertyRNA &rna_RenderResult_views;

extern FunctionRNA *rna_RenderResult_load_from_file_func;
extern PropertyRNA &rna_RenderResult_load_from_file_filepath;

extern FunctionRNA *rna_RenderResult_stamp_data_add_field_func;
extern PropertyRNA &rna_RenderResult_stamp_data_add_field_field;
extern PropertyRNA &rna_RenderResult_stamp_data_add_field_value;



extern PropertyRNA &rna_RenderView_rna_properties;
extern PropertyRNA &rna_RenderView_rna_type;
extern PropertyRNA &rna_RenderView_name;


extern PropertyRNA &rna_RenderLayer_rna_properties;
extern PropertyRNA &rna_RenderLayer_rna_type;
extern PropertyRNA &rna_RenderLayer_name;
extern PropertyRNA &rna_RenderLayer_use_solid;
extern PropertyRNA &rna_RenderLayer_use_sky;
extern PropertyRNA &rna_RenderLayer_use_ao;
extern PropertyRNA &rna_RenderLayer_use_strand;
extern PropertyRNA &rna_RenderLayer_use_volumes;
extern PropertyRNA &rna_RenderLayer_use_motion_blur;
extern PropertyRNA &rna_RenderLayer_use_grease_pencil;
extern PropertyRNA &rna_RenderLayer_use_pass_combined;
extern PropertyRNA &rna_RenderLayer_use_pass_z;
extern PropertyRNA &rna_RenderLayer_use_pass_vector;
extern PropertyRNA &rna_RenderLayer_use_pass_position;
extern PropertyRNA &rna_RenderLayer_use_pass_normal;
extern PropertyRNA &rna_RenderLayer_use_pass_uv;
extern PropertyRNA &rna_RenderLayer_use_pass_mist;
extern PropertyRNA &rna_RenderLayer_use_pass_object_index;
extern PropertyRNA &rna_RenderLayer_use_pass_material_index;
extern PropertyRNA &rna_RenderLayer_use_pass_shadow;
extern PropertyRNA &rna_RenderLayer_use_pass_ambient_occlusion;
extern PropertyRNA &rna_RenderLayer_use_pass_emit;
extern PropertyRNA &rna_RenderLayer_use_pass_environment;
extern PropertyRNA &rna_RenderLayer_use_pass_diffuse_direct;
extern PropertyRNA &rna_RenderLayer_use_pass_diffuse_indirect;
extern PropertyRNA &rna_RenderLayer_use_pass_diffuse_color;
extern PropertyRNA &rna_RenderLayer_use_pass_glossy_direct;
extern PropertyRNA &rna_RenderLayer_use_pass_glossy_indirect;
extern PropertyRNA &rna_RenderLayer_use_pass_glossy_color;
extern PropertyRNA &rna_RenderLayer_use_pass_transmission_direct;
extern PropertyRNA &rna_RenderLayer_use_pass_transmission_indirect;
extern PropertyRNA &rna_RenderLayer_use_pass_transmission_color;
extern PropertyRNA &rna_RenderLayer_use_pass_subsurface_direct;
extern PropertyRNA &rna_RenderLayer_use_pass_subsurface_indirect;
extern PropertyRNA &rna_RenderLayer_use_pass_subsurface_color;
extern PropertyRNA &rna_RenderLayer_passes;

extern FunctionRNA *rna_RenderLayer_load_from_file_func;
extern PropertyRNA &rna_RenderLayer_load_from_file_filepath;
extern PropertyRNA &rna_RenderLayer_load_from_file_x;
extern PropertyRNA &rna_RenderLayer_load_from_file_y;



extern PropertyRNA &rna_RenderPasses_rna_properties;
extern PropertyRNA &rna_RenderPasses_rna_type;

extern FunctionRNA *rna_RenderPasses_find_by_name_func;
extern PropertyRNA &rna_RenderPasses_find_by_name_name;
extern PropertyRNA &rna_RenderPasses_find_by_name_view;
extern PropertyRNA &rna_RenderPasses_find_by_name_render_pass;



extern PropertyRNA &rna_RenderPass_rna_properties;
extern PropertyRNA &rna_RenderPass_rna_type;
extern PropertyRNA &rna_RenderPass_fullname;
extern PropertyRNA &rna_RenderPass_name;
extern PropertyRNA &rna_RenderPass_channel_id;
extern PropertyRNA &rna_RenderPass_channels;
extern PropertyRNA &rna_RenderPass_rect;
extern PropertyRNA &rna_RenderPass_view_id;

static PointerRNA RenderEngine_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RenderEngine_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderEngine_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderEngine_rna_properties_get(iter);
    }
}

void RenderEngine_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderEngine_rna_properties_get(iter);
    }
}

void RenderEngine_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderEngine_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RenderEngine_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool RenderEngine_is_animation_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void RenderEngine_is_animation_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool RenderEngine_is_preview_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void RenderEngine_is_preview_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

PointerRNA RenderEngine_camera_override_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_RenderEngine_camera_override_get;
    return fn(ptr);
}

void RenderEngine_layer_override_get(PointerRNA *ptr, bool values[20])
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 20; i++) {
        values[i] = ((uint64_t(data->layer_override) & (uint64_t(1) << i)) != 0);
    }
}

void RenderEngine_layer_override_set(PointerRNA *ptr, const bool values[20])
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 20; i++) {
        if (values[i]) { data->layer_override = std::remove_reference_t<decltype(data->layer_override)>(uint64_t(data->layer_override) | (uint64_t(1) << i)); }
        else { data->layer_override = std::remove_reference_t<decltype(data->layer_override)>(uint64_t(data->layer_override) & ~(uint64_t(1) << i)); }
    }
}

int RenderEngine_resolution_x_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (int)(data->resolution_x);
}

int RenderEngine_resolution_y_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (int)(data->resolution_y);
}

void RenderEngine_temporary_directory_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_RenderEngine_tempdir_get;
    fn(ptr, value);
}

int RenderEngine_temporary_directory_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_RenderEngine_tempdir_length;
    return fn(ptr);
}

PointerRNA RenderEngine_render_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_RenderEngine_render_get;
    return fn(ptr);
}

bool RenderEngine_use_highlight_tiles_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void RenderEngine_use_highlight_tiles_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

void RenderEngine_bl_idname_get(PointerRNA *ptr, char *value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    BLI_assert(strlen(data->type->idname) < sizeof(data->type->idname));
    strcpy(value, data->type->idname);
}

int RenderEngine_bl_idname_length(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return strlen(data->type->idname);
}

void RenderEngine_bl_idname_set(PointerRNA *ptr, const char *value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

void RenderEngine_bl_label_get(PointerRNA *ptr, char *value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    BLI_assert(strlen(data->type->name) < sizeof(data->type->name));
    strcpy(value, data->type->name);
}

int RenderEngine_bl_label_length(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return strlen(data->type->name);
}

void RenderEngine_bl_label_set(PointerRNA *ptr, const char *value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    BLI_strncpy_utf8(data->type->name, value, sizeof(data->type->name));
}

bool RenderEngine_bl_use_preview_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->type->flag) & 2) != 0);
}

void RenderEngine_bl_use_preview_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) | 2); }
    else { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) & ~uint64_t(2)); }
}

bool RenderEngine_bl_use_postprocess_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return !((uint64_t(data->type->flag) & 4) != 0);
}

void RenderEngine_bl_use_postprocess_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (!value) { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) | 4); }
    else { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) & ~uint64_t(4)); }
}

bool RenderEngine_bl_use_eevee_viewport_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->type->flag) & 8) != 0);
}

void RenderEngine_bl_use_eevee_viewport_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) | 8); }
    else { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) & ~uint64_t(8)); }
}

bool RenderEngine_bl_use_custom_freestyle_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->type->flag) & 256) != 0);
}

void RenderEngine_bl_use_custom_freestyle_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) | 256); }
    else { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) & ~uint64_t(256)); }
}

bool RenderEngine_bl_use_image_save_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return !((uint64_t(data->type->flag) & 512) != 0);
}

void RenderEngine_bl_use_image_save_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (!value) { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) | 512); }
    else { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) & ~uint64_t(512)); }
}

bool RenderEngine_bl_use_gpu_context_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->type->flag) & 128) != 0);
}

void RenderEngine_bl_use_gpu_context_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) | 128); }
    else { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) & ~uint64_t(128)); }
}

bool RenderEngine_bl_use_shading_nodes_custom_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->type->flag) & 16) != 0);
}

void RenderEngine_bl_use_shading_nodes_custom_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) | 16); }
    else { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) & ~uint64_t(16)); }
}

bool RenderEngine_bl_use_spherical_stereo_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->type->flag) & 32) != 0);
}

void RenderEngine_bl_use_spherical_stereo_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) | 32); }
    else { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) & ~uint64_t(32)); }
}

bool RenderEngine_bl_use_stereo_viewport_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->type->flag) & 64) != 0);
}

void RenderEngine_bl_use_stereo_viewport_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) | 64); }
    else { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) & ~uint64_t(64)); }
}

bool RenderEngine_bl_use_materialx_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return ((uint64_t(data->type->flag) & 1024) != 0);
}

void RenderEngine_bl_use_materialx_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) | 1024); }
    else { data->type->flag = std::remove_reference_t<decltype(data->type->flag)>(uint64_t(data->type->flag) & ~uint64_t(1024)); }
}

static PointerRNA RenderResult_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RenderResult_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderResult_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderResult_rna_properties_get(iter);
    }
}

void RenderResult_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderResult_rna_properties_get(iter);
    }
}

void RenderResult_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderResult_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RenderResult_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int RenderResult_resolution_x_get(PointerRNA *ptr)
{
    RenderResult *data = (RenderResult *)(ptr->data);
    return (int)(data->rectx);
}

int RenderResult_resolution_y_get(PointerRNA *ptr)
{
    RenderResult *data = (RenderResult *)(ptr->data);
    return (int)(data->recty);
}

static PointerRNA RenderResult_layers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_RenderLayer, rna_iterator_listbase_get(iter));
}

void RenderResult_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderResult_layers;

    PropCollectionBeginFunc fn = rna_RenderResult_layers_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderResult_layers_get(iter);
    }
}

void RenderResult_layers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderResult_layers_get(iter);
    }
}

void RenderResult_layers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderResult_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    RenderResult_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = RenderResult_layers_get(&iter); }
    }

    RenderResult_layers_end(&iter);

    return found;
}

static PointerRNA RenderResult_views_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_RenderView, rna_iterator_listbase_get(iter));
}

void RenderResult_views_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderResult_views;

    PropCollectionBeginFunc fn = rna_RenderResult_views_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderResult_views_get(iter);
    }
}

void RenderResult_views_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderResult_views_get(iter);
    }
}

void RenderResult_views_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderResult_views_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    RenderResult_views_begin(&iter, ptr);

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
        if (found) { *r_ptr = RenderResult_views_get(&iter); }
    }

    RenderResult_views_end(&iter);

    return found;
}

static PointerRNA RenderView_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RenderView_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderView_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderView_rna_properties_get(iter);
    }
}

void RenderView_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderView_rna_properties_get(iter);
    }
}

void RenderView_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderView_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RenderView_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void RenderView_name_get(PointerRNA *ptr, char *value)
{
    RenderView *data = (RenderView *)(ptr->data);
    BLI_assert(strlen(data->name) < sizeof(data->name));
    strcpy(value, data->name);
}

int RenderView_name_length(PointerRNA *ptr)
{
    RenderView *data = (RenderView *)(ptr->data);
    return strlen(data->name);
}

static PointerRNA RenderLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RenderLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderLayer_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderLayer_rna_properties_get(iter);
    }
}

void RenderLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderLayer_rna_properties_get(iter);
    }
}

void RenderLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RenderLayer_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void RenderLayer_name_get(PointerRNA *ptr, char *value)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    BLI_assert(strlen(data->name) < sizeof(data->name));
    strcpy(value, data->name);
}

int RenderLayer_name_length(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return strlen(data->name);
}

bool RenderLayer_use_solid_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 1) != 0);
}

bool RenderLayer_use_sky_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 16) != 0);
}

bool RenderLayer_use_ao_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 128) != 0);
}

bool RenderLayer_use_strand_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 32) != 0);
}

bool RenderLayer_use_volumes_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 256) != 0);
}

bool RenderLayer_use_motion_blur_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 512) != 0);
}

bool RenderLayer_use_grease_pencil_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 1024) != 0);
}

bool RenderLayer_use_pass_combined_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 1) != 0);
}

bool RenderLayer_use_pass_z_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 2) != 0);
}

bool RenderLayer_use_pass_vector_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 512) != 0);
}

bool RenderLayer_use_pass_position_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 128) != 0);
}

bool RenderLayer_use_pass_normal_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 256) != 0);
}

bool RenderLayer_use_pass_uv_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 4096) != 0);
}

bool RenderLayer_use_pass_mist_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 16384) != 0);
}

bool RenderLayer_use_pass_object_index_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 2048) != 0);
}

bool RenderLayer_use_pass_material_index_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 262144) != 0);
}

bool RenderLayer_use_pass_shadow_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 32) != 0);
}

bool RenderLayer_use_pass_ambient_occlusion_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 64) != 0);
}

bool RenderLayer_use_pass_emit_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 65536) != 0);
}

bool RenderLayer_use_pass_environment_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 131072) != 0);
}

bool RenderLayer_use_pass_diffuse_direct_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 524288) != 0);
}

bool RenderLayer_use_pass_diffuse_indirect_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 1048576) != 0);
}

bool RenderLayer_use_pass_diffuse_color_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 2097152) != 0);
}

bool RenderLayer_use_pass_glossy_direct_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 4194304) != 0);
}

bool RenderLayer_use_pass_glossy_indirect_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 8388608) != 0);
}

bool RenderLayer_use_pass_glossy_color_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 16777216) != 0);
}

bool RenderLayer_use_pass_transmission_direct_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 33554432) != 0);
}

bool RenderLayer_use_pass_transmission_indirect_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 67108864) != 0);
}

bool RenderLayer_use_pass_transmission_color_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 134217728) != 0);
}

bool RenderLayer_use_pass_subsurface_direct_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 268435456) != 0);
}

bool RenderLayer_use_pass_subsurface_indirect_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 536870912) != 0);
}

bool RenderLayer_use_pass_subsurface_color_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 1073741824) != 0);
}

static PointerRNA RenderLayer_passes_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_RenderPass, rna_iterator_listbase_get(iter));
}

void RenderLayer_passes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderLayer_passes;

    PropCollectionBeginFunc fn = rna_RenderLayer_passes_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderLayer_passes_get(iter);
    }
}

void RenderLayer_passes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderLayer_passes_get(iter);
    }
}

void RenderLayer_passes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderLayer_passes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    RenderLayer_passes_begin(&iter, ptr);

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
        if (found) { *r_ptr = RenderLayer_passes_get(&iter); }
    }

    RenderLayer_passes_end(&iter);

    return found;
}

static PointerRNA RenderPasses_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RenderPasses_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderPasses_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderPasses_rna_properties_get(iter);
    }
}

void RenderPasses_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderPasses_rna_properties_get(iter);
    }
}

void RenderPasses_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderPasses_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RenderPasses_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA RenderPass_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RenderPass_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RenderPass_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderPass_rna_properties_get(iter);
    }
}

void RenderPass_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RenderPass_rna_properties_get(iter);
    }
}

void RenderPass_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RenderPass_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RenderPass_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void RenderPass_fullname_get(PointerRNA *ptr, char *value)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    BLI_assert(strlen(data->fullname) < sizeof(data->fullname));
    strcpy(value, data->fullname);
}

int RenderPass_fullname_length(PointerRNA *ptr)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    return strlen(data->fullname);
}

void RenderPass_name_get(PointerRNA *ptr, char *value)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    BLI_assert(strlen(data->name) < sizeof(data->name));
    strcpy(value, data->name);
}

int RenderPass_name_length(PointerRNA *ptr)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    return strlen(data->name);
}

void RenderPass_channel_id_get(PointerRNA *ptr, char *value)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    BLI_assert(strlen(data->chan_id) < sizeof(data->chan_id));
    strcpy(value, data->chan_id);
}

int RenderPass_channel_id_length(PointerRNA *ptr)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    return strlen(data->chan_id);
}

int RenderPass_channels_get(PointerRNA *ptr)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    return (int)(data->channels);
}

void RenderPass_rect_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_RenderPass_rect_get;
    fn(ptr, values);
}

void RenderPass_rect_set(PointerRNA *ptr, const float values[])
{
    PropFloatArraySetFunc fn = rna_RenderPass_rect_set;
    fn(ptr, values);
}

int RenderPass_view_id_get(PointerRNA *ptr)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    return (int)(data->view_id);
}

void RenderEngine_tag_redraw_func(RenderEngine *_self)
{
	engine_tag_redraw(_self);
}

static void RenderEngine_tag_redraw_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	_self = (RenderEngine *)_ptr->data;
	
	engine_tag_redraw(_self);
}

void RenderEngine_tag_update_func(RenderEngine *_self)
{
	engine_tag_update(_self);
}

static void RenderEngine_tag_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	_self = (RenderEngine *)_ptr->data;
	
	engine_tag_update(_self);
}

RenderResult *RenderEngine_begin_result_func(RenderEngine *_self, int x, int y, int w, int h, const char * layer, const char * view)
{
	return RE_engine_begin_result(_self, x, y, w, h, layer, view);
}

static void RenderEngine_begin_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	int x;
	int y;
	int w;
	int h;
	const char * layer;
	const char * view;
	RenderResult *result;
	char *_data, *_retdata;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	_data += 8;
	w = *((int *)_data);
	_data += 8;
	h = *((int *)_data);
	_data += 8;
	layer = *((const char * *)_data);
	_data += 8;
	view = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = RE_engine_begin_result(_self, x, y, w, h, layer, view);
	*((RenderResult **)_retdata) = result;
}

void RenderEngine_update_result_func(RenderEngine *_self, RenderResult *result)
{
	RE_engine_update_result(_self, result);
}

static void RenderEngine_update_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	RenderResult *result;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	result = *((RenderResult **)_data);
	
	RE_engine_update_result(_self, result);
}

void RenderEngine_end_result_func(RenderEngine *_self, RenderResult *result, bool cancel, bool highlight, bool do_merge_results)
{
	RE_engine_end_result(_self, result, cancel, highlight, do_merge_results);
}

static void RenderEngine_end_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	RenderResult *result;
	bool cancel;
	bool highlight;
	bool do_merge_results;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	result = *((RenderResult **)_data);
	_data += 8;
	cancel = *((bool *)_data);
	_data += 8;
	highlight = *((bool *)_data);
	_data += 8;
	do_merge_results = *((bool *)_data);
	
	RE_engine_end_result(_self, result, cancel, highlight, do_merge_results);
}

void RenderEngine_add_pass_func(RenderEngine *_self, const char * name, int channels, const char * chan_id, const char * layer)
{
	RE_engine_add_pass(_self, name, channels, chan_id, layer);
}

static void RenderEngine_add_pass_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	const char * name;
	int channels;
	const char * chan_id;
	const char * layer;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	channels = *((int *)_data);
	_data += 8;
	chan_id = *((const char * *)_data);
	_data += 8;
	layer = *((const char * *)_data);
	
	RE_engine_add_pass(_self, name, channels, chan_id, layer);
}

RenderResult *RenderEngine_get_result_func(RenderEngine *_self)
{
	return RE_engine_get_result(_self);
}

static void RenderEngine_get_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	RenderResult *result;
	char *_data, *_retdata;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = RE_engine_get_result(_self);
	*((RenderResult **)_retdata) = result;
}

bool RenderEngine_test_break_func(RenderEngine *_self)
{
	return RE_engine_test_break(_self);
}

static void RenderEngine_test_break_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	bool do_break;
	char *_data, *_retdata;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	do_break = RE_engine_test_break(_self);
	*((bool *)_retdata) = do_break;
}

RenderPass *RenderEngine_pass_by_index_get_func(RenderEngine *_self, const char * layer, int index)
{
	return RE_engine_pass_by_index_get(_self, layer, index);
}

static void RenderEngine_pass_by_index_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	const char * layer;
	int index;
	RenderPass *render_pass;
	char *_data, *_retdata;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	render_pass = RE_engine_pass_by_index_get(_self, layer, index);
	*((RenderPass **)_retdata) = render_pass;
}

const char * RenderEngine_active_view_get_func(RenderEngine *_self)
{
	return RE_engine_active_view_get(_self);
}

static void RenderEngine_active_view_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	const char * view;
	char *_data, *_retdata;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	view = RE_engine_active_view_get(_self);
	*((const char * *)_retdata) = view;
}

void RenderEngine_active_view_set_func(RenderEngine *_self, const char * view)
{
	RE_engine_active_view_set(_self, view);
}

static void RenderEngine_active_view_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	const char * view;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	view = *((const char * *)_data);
	
	RE_engine_active_view_set(_self, view);
}

float RenderEngine_camera_shift_x_func(RenderEngine *_self, Object *camera, bool use_spherical_stereo)
{
	return RE_engine_get_camera_shift_x(_self, camera, use_spherical_stereo);
}

static void RenderEngine_camera_shift_x_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	Object *camera;
	bool use_spherical_stereo;
	float shift_x;
	char *_data, *_retdata;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	camera = *((Object **)_data);
	_data += 8;
	use_spherical_stereo = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	shift_x = RE_engine_get_camera_shift_x(_self, camera, use_spherical_stereo);
	*((float *)_retdata) = shift_x;
}

void RenderEngine_camera_model_matrix_func(RenderEngine *_self, Object *camera, bool use_spherical_stereo, float r_model_matrix[16])
{
	RE_engine_get_camera_model_matrix(_self, camera, use_spherical_stereo, r_model_matrix);
}

static void RenderEngine_camera_model_matrix_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	Object *camera;
	bool use_spherical_stereo;
	float *r_model_matrix;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	camera = *((Object **)_data);
	_data += 8;
	use_spherical_stereo = *((bool *)_data);
	_data += 8;
	r_model_matrix = ((float *)_data);
	
	RE_engine_get_camera_model_matrix(_self, camera, use_spherical_stereo, r_model_matrix);
}

bool RenderEngine_use_spherical_stereo_func(RenderEngine *_self, Object *camera)
{
	return RE_engine_get_spherical_stereo(_self, camera);
}

static void RenderEngine_use_spherical_stereo_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	Object *camera;
	bool use_spherical_stereo;
	char *_data, *_retdata;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	camera = *((Object **)_data);
	_data += 8;
	_retdata = _data;
	
	use_spherical_stereo = RE_engine_get_spherical_stereo(_self, camera);
	*((bool *)_retdata) = use_spherical_stereo;
}

void RenderEngine_update_stats_func(RenderEngine *_self, const char * stats, const char * info)
{
	RE_engine_update_stats(_self, stats, info);
}

static void RenderEngine_update_stats_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	const char * stats;
	const char * info;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	stats = *((const char * *)_data);
	_data += 8;
	info = *((const char * *)_data);
	
	RE_engine_update_stats(_self, stats, info);
}

void RenderEngine_frame_set_func(RenderEngine *_self, int frame, float subframe)
{
	rna_RenderEngine_engine_frame_set(_self, frame, subframe);
}

static void RenderEngine_frame_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	int frame;
	float subframe;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	subframe = *((float *)_data);
	
	rna_RenderEngine_engine_frame_set(_self, frame, subframe);
}

void RenderEngine_update_progress_func(RenderEngine *_self, float progress)
{
	RE_engine_update_progress(_self, progress);
}

static void RenderEngine_update_progress_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	float progress;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	progress = *((float *)_data);
	
	RE_engine_update_progress(_self, progress);
}

void RenderEngine_update_memory_stats_func(RenderEngine *_self, float memory_used, float memory_peak)
{
	RE_engine_update_memory_stats(_self, memory_used, memory_peak);
}

static void RenderEngine_update_memory_stats_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	float memory_used;
	float memory_peak;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	memory_used = *((float *)_data);
	_data += 8;
	memory_peak = *((float *)_data);
	
	RE_engine_update_memory_stats(_self, memory_used, memory_peak);
}

void RenderEngine_report_func(RenderEngine *_self, int type, const char * message)
{
	RE_engine_report(_self, type, message);
}

static void RenderEngine_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	int type;
	const char * message;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	message = *((const char * *)_data);
	
	RE_engine_report(_self, type, message);
}

void RenderEngine_error_set_func(RenderEngine *_self, const char * message)
{
	RE_engine_set_error_message(_self, message);
}

static void RenderEngine_error_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	const char * message;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	message = *((const char * *)_data);
	
	RE_engine_set_error_message(_self, message);
}

void RenderEngine_bind_display_space_shader_func(RenderEngine *_self, Scene *scene)
{
	engine_bind_display_space_shader(_self, scene);
}

static void RenderEngine_bind_display_space_shader_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	Scene *scene;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((Scene **)_data);
	
	engine_bind_display_space_shader(_self, scene);
}

void RenderEngine_unbind_display_space_shader_func(RenderEngine *_self)
{
	engine_unbind_display_space_shader(_self);
}

static void RenderEngine_unbind_display_space_shader_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	_self = (RenderEngine *)_ptr->data;
	
	engine_unbind_display_space_shader(_self);
}

bool RenderEngine_support_display_space_shader_func(RenderEngine *_self, Scene *scene)
{
	return engine_support_display_space_shader(_self, scene);
}

static void RenderEngine_support_display_space_shader_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	Scene *scene;
	bool supported;
	char *_data, *_retdata;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((Scene **)_data);
	_data += 8;
	_retdata = _data;
	
	supported = engine_support_display_space_shader(_self, scene);
	*((bool *)_retdata) = supported;
}

int RenderEngine_get_preview_pixel_size_func(RenderEngine *_self, Scene *scene)
{
	return engine_get_preview_pixel_size(_self, scene);
}

static void RenderEngine_get_preview_pixel_size_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	Scene *scene;
	int pixel_size;
	char *_data, *_retdata;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((Scene **)_data);
	_data += 8;
	_retdata = _data;
	
	pixel_size = engine_get_preview_pixel_size(_self, scene);
	*((int *)_retdata) = pixel_size;
}

void RenderEngine_free_blender_memory_func(RenderEngine *_self)
{
	RE_engine_free_blender_memory(_self);
}

static void RenderEngine_free_blender_memory_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	_self = (RenderEngine *)_ptr->data;
	
	RE_engine_free_blender_memory(_self);
}

void RenderEngine_tile_highlight_set_func(RenderEngine *_self, int x, int y, int width, int height, bool highlight)
{
	RE_engine_tile_highlight_set(_self, x, y, width, height, highlight);
}

static void RenderEngine_tile_highlight_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	int x;
	int y;
	int width;
	int height;
	bool highlight;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	_data += 8;
	width = *((int *)_data);
	_data += 8;
	height = *((int *)_data);
	_data += 8;
	highlight = *((bool *)_data);
	
	RE_engine_tile_highlight_set(_self, x, y, width, height, highlight);
}

void RenderEngine_tile_highlight_clear_all_func(RenderEngine *_self)
{
	RE_engine_tile_highlight_clear_all(_self);
}

static void RenderEngine_tile_highlight_clear_all_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	_self = (RenderEngine *)_ptr->data;
	
	RE_engine_tile_highlight_clear_all(_self);
}

void RenderEngine_register_pass_func(RenderEngine *_self, Scene *scene, ViewLayer *view_layer, const char * name, int channels, const char * chanid, eNodeSocketDatatype type)
{
	RE_engine_register_pass(_self, scene, view_layer, name, channels, chanid, type);
}

static void RenderEngine_register_pass_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderEngine *_self;
	Scene *scene;
	ViewLayer *view_layer;
	const char * name;
	int channels;
	const char * chanid;
	eNodeSocketDatatype type;
	char *_data;
	
	_self = (RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((Scene **)_data);
	_data += 8;
	view_layer = *((ViewLayer **)_data);
	_data += 8;
	name = *((const char * *)_data);
	_data += 8;
	channels = *((int *)_data);
	_data += 8;
	chanid = *((const char * *)_data);
	_data += 8;
	type = *((eNodeSocketDatatype *)_data);
	
	RE_engine_register_pass(_self, scene, view_layer, name, channels, chanid, type);
}

/* Repeated prototypes to detect errors */

void engine_tag_redraw(RenderEngine *_self);
void engine_tag_update(RenderEngine *_self);
RenderResult *RE_engine_begin_result(RenderEngine *_self, int x, int y, int w, int h, const char * layer, const char * view);
void RE_engine_update_result(RenderEngine *_self, RenderResult *result);
void RE_engine_end_result(RenderEngine *_self, RenderResult *result, bool cancel, bool highlight, bool do_merge_results);
void RE_engine_add_pass(RenderEngine *_self, const char * name, int channels, const char * chan_id, const char * layer);
RenderResult *RE_engine_get_result(RenderEngine *_self);
bool RE_engine_test_break(RenderEngine *_self);
RenderPass *RE_engine_pass_by_index_get(RenderEngine *_self, const char * layer, int index);
const char * RE_engine_active_view_get(RenderEngine *_self);
void RE_engine_active_view_set(RenderEngine *_self, const char * view);
float RE_engine_get_camera_shift_x(RenderEngine *_self, Object *camera, bool use_spherical_stereo);
void RE_engine_get_camera_model_matrix(RenderEngine *_self, Object *camera, bool use_spherical_stereo, float r_model_matrix[16]);
bool RE_engine_get_spherical_stereo(RenderEngine *_self, Object *camera);
void RE_engine_update_stats(RenderEngine *_self, const char * stats, const char * info);
void rna_RenderEngine_engine_frame_set(RenderEngine *_self, int frame, float subframe);
void RE_engine_update_progress(RenderEngine *_self, float progress);
void RE_engine_update_memory_stats(RenderEngine *_self, float memory_used, float memory_peak);
void RE_engine_report(RenderEngine *_self, int type, const char * message);
void RE_engine_set_error_message(RenderEngine *_self, const char * message);
void engine_bind_display_space_shader(RenderEngine *_self, Scene *scene);
void engine_unbind_display_space_shader(RenderEngine *_self);
bool engine_support_display_space_shader(RenderEngine *_self, Scene *scene);
int engine_get_preview_pixel_size(RenderEngine *_self, Scene *scene);
void RE_engine_free_blender_memory(RenderEngine *_self);
void RE_engine_tile_highlight_set(RenderEngine *_self, int x, int y, int width, int height, bool highlight);
void RE_engine_tile_highlight_clear_all(RenderEngine *_self);
void RE_engine_register_pass(RenderEngine *_self, Scene *scene, ViewLayer *view_layer, const char * name, int channels, const char * chanid, eNodeSocketDatatype type);


void RenderResult_load_from_file_func(RenderResult *_self, ReportList *reports, const char * filepath)
{
	RE_result_load_from_file(_self, reports, filepath);
}

static void RenderResult_load_from_file_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderResult *_self;
	const char * filepath;
	char *_data;
	
	_self = (RenderResult *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	
	RE_result_load_from_file(_self, reports, filepath);
}

void RenderResult_stamp_data_add_field_func(RenderResult *_self, const char * field, const char * value)
{
	rna_RenderResult_stamp_data_add_field(_self, field, value);
}

static void RenderResult_stamp_data_add_field_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderResult *_self;
	const char * field;
	const char * value;
	char *_data;
	
	_self = (RenderResult *)_ptr->data;
	_data = (char *)_parms->data;
	field = *((const char * *)_data);
	_data += 8;
	value = *((const char * *)_data);
	
	rna_RenderResult_stamp_data_add_field(_self, field, value);
}

/* Repeated prototypes to detect errors */

void RE_result_load_from_file(RenderResult *_self, ReportList *reports, const char * filepath);
void rna_RenderResult_stamp_data_add_field(RenderResult *_self, const char * field, const char * value);


void RenderLayer_load_from_file_func(RenderLayer *_self, ReportList *reports, const char * filepath, int x, int y)
{
	RE_layer_load_from_file(_self, reports, filepath, x, y);
}

static void RenderLayer_load_from_file_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderLayer *_self;
	const char * filepath;
	int x;
	int y;
	char *_data;
	
	_self = (RenderLayer *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	
	RE_layer_load_from_file(_self, reports, filepath, x, y);
}

/* Repeated prototypes to detect errors */

void RE_layer_load_from_file(RenderLayer *_self, ReportList *reports, const char * filepath, int x, int y);

RenderPass *RenderPasses_find_by_name_func(RenderLayer *_self, const char * name, const char * view)
{
	return rna_RenderPass_find_by_name(_self, name, view);
}

static void RenderPasses_find_by_name_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RenderLayer *_self;
	const char * name;
	const char * view;
	RenderPass *render_pass;
	char *_data, *_retdata;
	
	_self = (RenderLayer *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	view = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	render_pass = rna_RenderPass_find_by_name(_self, name, view);
	*((RenderPass **)_retdata) = render_pass;
}

/* Repeated prototypes to detect errors */

RenderPass *rna_RenderPass_find_by_name(RenderLayer *_self, const char * name, const char * view);

int RenderPass_rect_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_RenderPass_rect_get_length(ptr, arraylen);
}


/* Render Engine */
static CollectionPropertyRNA rna_RenderEngine_rna_properties_;
PropertyRNA &rna_RenderEngine_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_rna_properties_);

static PointerPropertyRNA rna_RenderEngine_rna_type_;
PropertyRNA &rna_RenderEngine_rna_type = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_rna_type_);

static BoolPropertyRNA rna_RenderEngine_is_animation_;
PropertyRNA &rna_RenderEngine_is_animation = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_is_animation_);

static BoolPropertyRNA rna_RenderEngine_is_preview_;
PropertyRNA &rna_RenderEngine_is_preview = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_is_preview_);

static PointerPropertyRNA rna_RenderEngine_camera_override_;
PropertyRNA &rna_RenderEngine_camera_override = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_camera_override_);

static BoolPropertyRNA rna_RenderEngine_layer_override_;
PropertyRNA &rna_RenderEngine_layer_override = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_layer_override_);

static IntPropertyRNA rna_RenderEngine_resolution_x_;
PropertyRNA &rna_RenderEngine_resolution_x = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_resolution_x_);

static IntPropertyRNA rna_RenderEngine_resolution_y_;
PropertyRNA &rna_RenderEngine_resolution_y = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_resolution_y_);

static StringPropertyRNA rna_RenderEngine_temporary_directory_;
PropertyRNA &rna_RenderEngine_temporary_directory = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_temporary_directory_);

static PointerPropertyRNA rna_RenderEngine_render_;
PropertyRNA &rna_RenderEngine_render = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_render_);

static BoolPropertyRNA rna_RenderEngine_use_highlight_tiles_;
PropertyRNA &rna_RenderEngine_use_highlight_tiles = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_use_highlight_tiles_);

static StringPropertyRNA rna_RenderEngine_bl_idname_;
PropertyRNA &rna_RenderEngine_bl_idname = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_idname_);

static StringPropertyRNA rna_RenderEngine_bl_label_;
PropertyRNA &rna_RenderEngine_bl_label = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_label_);

static BoolPropertyRNA rna_RenderEngine_bl_use_preview_;
PropertyRNA &rna_RenderEngine_bl_use_preview = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_use_preview_);

static BoolPropertyRNA rna_RenderEngine_bl_use_postprocess_;
PropertyRNA &rna_RenderEngine_bl_use_postprocess = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_use_postprocess_);

static BoolPropertyRNA rna_RenderEngine_bl_use_eevee_viewport_;
PropertyRNA &rna_RenderEngine_bl_use_eevee_viewport = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_use_eevee_viewport_);

static BoolPropertyRNA rna_RenderEngine_bl_use_custom_freestyle_;
PropertyRNA &rna_RenderEngine_bl_use_custom_freestyle = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_use_custom_freestyle_);

static BoolPropertyRNA rna_RenderEngine_bl_use_image_save_;
PropertyRNA &rna_RenderEngine_bl_use_image_save = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_use_image_save_);

static BoolPropertyRNA rna_RenderEngine_bl_use_gpu_context_;
PropertyRNA &rna_RenderEngine_bl_use_gpu_context = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_use_gpu_context_);

static BoolPropertyRNA rna_RenderEngine_bl_use_shading_nodes_custom_;
PropertyRNA &rna_RenderEngine_bl_use_shading_nodes_custom = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_use_shading_nodes_custom_);

static BoolPropertyRNA rna_RenderEngine_bl_use_spherical_stereo_;
PropertyRNA &rna_RenderEngine_bl_use_spherical_stereo = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_use_spherical_stereo_);

static BoolPropertyRNA rna_RenderEngine_bl_use_stereo_viewport_;
PropertyRNA &rna_RenderEngine_bl_use_stereo_viewport = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_use_stereo_viewport_);

static BoolPropertyRNA rna_RenderEngine_bl_use_materialx_;
PropertyRNA &rna_RenderEngine_bl_use_materialx = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bl_use_materialx_);

static PointerPropertyRNA rna_RenderEngine_update_data_;
PropertyRNA &rna_RenderEngine_update_data = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_data_);

static PointerPropertyRNA rna_RenderEngine_update_depsgraph_;
PropertyRNA &rna_RenderEngine_update_depsgraph = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_depsgraph_);

FunctionRNA *rna_RenderEngine_update_func;
static PointerPropertyRNA rna_RenderEngine_render_depsgraph_;
PropertyRNA &rna_RenderEngine_render_depsgraph = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_render_depsgraph_);

FunctionRNA *rna_RenderEngine_render_func;
FunctionRNA *rna_RenderEngine_render_frame_finish_func;
static PointerPropertyRNA rna_RenderEngine_draw_context_;
PropertyRNA &rna_RenderEngine_draw_context = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_draw_context_);

static PointerPropertyRNA rna_RenderEngine_draw_depsgraph_;
PropertyRNA &rna_RenderEngine_draw_depsgraph = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_draw_depsgraph_);

FunctionRNA *rna_RenderEngine_draw_func;
static PointerPropertyRNA rna_RenderEngine_bake_depsgraph_;
PropertyRNA &rna_RenderEngine_bake_depsgraph = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bake_depsgraph_);

static PointerPropertyRNA rna_RenderEngine_bake_object_;
PropertyRNA &rna_RenderEngine_bake_object = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bake_object_);

static EnumPropertyRNA rna_RenderEngine_bake_pass_type_;
PropertyRNA &rna_RenderEngine_bake_pass_type = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bake_pass_type_);

static IntPropertyRNA rna_RenderEngine_bake_pass_filter_;
PropertyRNA &rna_RenderEngine_bake_pass_filter = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bake_pass_filter_);

static IntPropertyRNA rna_RenderEngine_bake_width_;
PropertyRNA &rna_RenderEngine_bake_width = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bake_width_);

static IntPropertyRNA rna_RenderEngine_bake_height_;
PropertyRNA &rna_RenderEngine_bake_height = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bake_height_);

FunctionRNA *rna_RenderEngine_bake_func;
static PointerPropertyRNA rna_RenderEngine_view_update_context_;
PropertyRNA &rna_RenderEngine_view_update_context = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_view_update_context_);

static PointerPropertyRNA rna_RenderEngine_view_update_depsgraph_;
PropertyRNA &rna_RenderEngine_view_update_depsgraph = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_view_update_depsgraph_);

FunctionRNA *rna_RenderEngine_view_update_func;
static PointerPropertyRNA rna_RenderEngine_view_draw_context_;
PropertyRNA &rna_RenderEngine_view_draw_context = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_view_draw_context_);

static PointerPropertyRNA rna_RenderEngine_view_draw_depsgraph_;
PropertyRNA &rna_RenderEngine_view_draw_depsgraph = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_view_draw_depsgraph_);

FunctionRNA *rna_RenderEngine_view_draw_func;
static PointerPropertyRNA rna_RenderEngine_update_script_node_node_;
PropertyRNA &rna_RenderEngine_update_script_node_node = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_script_node_node_);

FunctionRNA *rna_RenderEngine_update_script_node_func;
static PointerPropertyRNA rna_RenderEngine_update_render_passes_scene_;
PropertyRNA &rna_RenderEngine_update_render_passes_scene = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_render_passes_scene_);

static PointerPropertyRNA rna_RenderEngine_update_render_passes_renderlayer_;
PropertyRNA &rna_RenderEngine_update_render_passes_renderlayer = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_render_passes_renderlayer_);

FunctionRNA *rna_RenderEngine_update_render_passes_func;
static PointerPropertyRNA rna_RenderEngine_update_custom_camera_cam_;
PropertyRNA &rna_RenderEngine_update_custom_camera_cam = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_custom_camera_cam_);

FunctionRNA *rna_RenderEngine_update_custom_camera_func;
FunctionRNA *rna_RenderEngine_tag_redraw_func;
FunctionRNA *rna_RenderEngine_tag_update_func;
static IntPropertyRNA rna_RenderEngine_begin_result_x_;
PropertyRNA &rna_RenderEngine_begin_result_x = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_begin_result_x_);

static IntPropertyRNA rna_RenderEngine_begin_result_y_;
PropertyRNA &rna_RenderEngine_begin_result_y = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_begin_result_y_);

static IntPropertyRNA rna_RenderEngine_begin_result_w_;
PropertyRNA &rna_RenderEngine_begin_result_w = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_begin_result_w_);

static IntPropertyRNA rna_RenderEngine_begin_result_h_;
PropertyRNA &rna_RenderEngine_begin_result_h = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_begin_result_h_);

static StringPropertyRNA rna_RenderEngine_begin_result_layer_;
PropertyRNA &rna_RenderEngine_begin_result_layer = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_begin_result_layer_);

static StringPropertyRNA rna_RenderEngine_begin_result_view_;
PropertyRNA &rna_RenderEngine_begin_result_view = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_begin_result_view_);

static PointerPropertyRNA rna_RenderEngine_begin_result_result_;
PropertyRNA &rna_RenderEngine_begin_result_result = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_begin_result_result_);

FunctionRNA *rna_RenderEngine_begin_result_func;
static PointerPropertyRNA rna_RenderEngine_update_result_result_;
PropertyRNA &rna_RenderEngine_update_result_result = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_result_result_);

FunctionRNA *rna_RenderEngine_update_result_func;
static PointerPropertyRNA rna_RenderEngine_end_result_result_;
PropertyRNA &rna_RenderEngine_end_result_result = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_end_result_result_);

static BoolPropertyRNA rna_RenderEngine_end_result_cancel_;
PropertyRNA &rna_RenderEngine_end_result_cancel = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_end_result_cancel_);

static BoolPropertyRNA rna_RenderEngine_end_result_highlight_;
PropertyRNA &rna_RenderEngine_end_result_highlight = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_end_result_highlight_);

static BoolPropertyRNA rna_RenderEngine_end_result_do_merge_results_;
PropertyRNA &rna_RenderEngine_end_result_do_merge_results = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_end_result_do_merge_results_);

FunctionRNA *rna_RenderEngine_end_result_func;
static StringPropertyRNA rna_RenderEngine_add_pass_name_;
PropertyRNA &rna_RenderEngine_add_pass_name = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_add_pass_name_);

static IntPropertyRNA rna_RenderEngine_add_pass_channels_;
PropertyRNA &rna_RenderEngine_add_pass_channels = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_add_pass_channels_);

static StringPropertyRNA rna_RenderEngine_add_pass_chan_id_;
PropertyRNA &rna_RenderEngine_add_pass_chan_id = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_add_pass_chan_id_);

static StringPropertyRNA rna_RenderEngine_add_pass_layer_;
PropertyRNA &rna_RenderEngine_add_pass_layer = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_add_pass_layer_);

FunctionRNA *rna_RenderEngine_add_pass_func;
static PointerPropertyRNA rna_RenderEngine_get_result_result_;
PropertyRNA &rna_RenderEngine_get_result_result = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_get_result_result_);

FunctionRNA *rna_RenderEngine_get_result_func;
static BoolPropertyRNA rna_RenderEngine_test_break_do_break_;
PropertyRNA &rna_RenderEngine_test_break_do_break = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_test_break_do_break_);

FunctionRNA *rna_RenderEngine_test_break_func;
static StringPropertyRNA rna_RenderEngine_pass_by_index_get_layer_;
PropertyRNA &rna_RenderEngine_pass_by_index_get_layer = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_pass_by_index_get_layer_);

static IntPropertyRNA rna_RenderEngine_pass_by_index_get_index_;
PropertyRNA &rna_RenderEngine_pass_by_index_get_index = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_pass_by_index_get_index_);

static PointerPropertyRNA rna_RenderEngine_pass_by_index_get_render_pass_;
PropertyRNA &rna_RenderEngine_pass_by_index_get_render_pass = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_pass_by_index_get_render_pass_);

FunctionRNA *rna_RenderEngine_pass_by_index_get_func;
static StringPropertyRNA rna_RenderEngine_active_view_get_view_;
PropertyRNA &rna_RenderEngine_active_view_get_view = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_active_view_get_view_);

FunctionRNA *rna_RenderEngine_active_view_get_func;
static StringPropertyRNA rna_RenderEngine_active_view_set_view_;
PropertyRNA &rna_RenderEngine_active_view_set_view = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_active_view_set_view_);

FunctionRNA *rna_RenderEngine_active_view_set_func;
static PointerPropertyRNA rna_RenderEngine_camera_shift_x_camera_;
PropertyRNA &rna_RenderEngine_camera_shift_x_camera = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_camera_shift_x_camera_);

static BoolPropertyRNA rna_RenderEngine_camera_shift_x_use_spherical_stereo_;
PropertyRNA &rna_RenderEngine_camera_shift_x_use_spherical_stereo = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_camera_shift_x_use_spherical_stereo_);

static FloatPropertyRNA rna_RenderEngine_camera_shift_x_shift_x_;
PropertyRNA &rna_RenderEngine_camera_shift_x_shift_x = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_camera_shift_x_shift_x_);

FunctionRNA *rna_RenderEngine_camera_shift_x_func;
static PointerPropertyRNA rna_RenderEngine_camera_model_matrix_camera_;
PropertyRNA &rna_RenderEngine_camera_model_matrix_camera = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_camera_model_matrix_camera_);

static BoolPropertyRNA rna_RenderEngine_camera_model_matrix_use_spherical_stereo_;
PropertyRNA &rna_RenderEngine_camera_model_matrix_use_spherical_stereo = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_camera_model_matrix_use_spherical_stereo_);

static FloatPropertyRNA rna_RenderEngine_camera_model_matrix_r_model_matrix_;
PropertyRNA &rna_RenderEngine_camera_model_matrix_r_model_matrix = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_camera_model_matrix_r_model_matrix_);

FunctionRNA *rna_RenderEngine_camera_model_matrix_func;
static PointerPropertyRNA rna_RenderEngine_use_spherical_stereo_camera_;
PropertyRNA &rna_RenderEngine_use_spherical_stereo_camera = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_use_spherical_stereo_camera_);

static BoolPropertyRNA rna_RenderEngine_use_spherical_stereo_use_spherical_stereo_;
PropertyRNA &rna_RenderEngine_use_spherical_stereo_use_spherical_stereo = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_use_spherical_stereo_use_spherical_stereo_);

FunctionRNA *rna_RenderEngine_use_spherical_stereo_func;
static StringPropertyRNA rna_RenderEngine_update_stats_stats_;
PropertyRNA &rna_RenderEngine_update_stats_stats = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_stats_stats_);

static StringPropertyRNA rna_RenderEngine_update_stats_info_;
PropertyRNA &rna_RenderEngine_update_stats_info = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_stats_info_);

FunctionRNA *rna_RenderEngine_update_stats_func;
static IntPropertyRNA rna_RenderEngine_frame_set_frame_;
PropertyRNA &rna_RenderEngine_frame_set_frame = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_frame_set_frame_);

static FloatPropertyRNA rna_RenderEngine_frame_set_subframe_;
PropertyRNA &rna_RenderEngine_frame_set_subframe = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_frame_set_subframe_);

FunctionRNA *rna_RenderEngine_frame_set_func;
static FloatPropertyRNA rna_RenderEngine_update_progress_progress_;
PropertyRNA &rna_RenderEngine_update_progress_progress = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_progress_progress_);

FunctionRNA *rna_RenderEngine_update_progress_func;
static FloatPropertyRNA rna_RenderEngine_update_memory_stats_memory_used_;
PropertyRNA &rna_RenderEngine_update_memory_stats_memory_used = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_memory_stats_memory_used_);

static FloatPropertyRNA rna_RenderEngine_update_memory_stats_memory_peak_;
PropertyRNA &rna_RenderEngine_update_memory_stats_memory_peak = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_update_memory_stats_memory_peak_);

FunctionRNA *rna_RenderEngine_update_memory_stats_func;
static EnumPropertyRNA rna_RenderEngine_report_type_;
PropertyRNA &rna_RenderEngine_report_type = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_report_type_);

static StringPropertyRNA rna_RenderEngine_report_message_;
PropertyRNA &rna_RenderEngine_report_message = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_report_message_);

FunctionRNA *rna_RenderEngine_report_func;
static StringPropertyRNA rna_RenderEngine_error_set_message_;
PropertyRNA &rna_RenderEngine_error_set_message = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_error_set_message_);

FunctionRNA *rna_RenderEngine_error_set_func;
static PointerPropertyRNA rna_RenderEngine_bind_display_space_shader_scene_;
PropertyRNA &rna_RenderEngine_bind_display_space_shader_scene = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_bind_display_space_shader_scene_);

FunctionRNA *rna_RenderEngine_bind_display_space_shader_func;
FunctionRNA *rna_RenderEngine_unbind_display_space_shader_func;
static PointerPropertyRNA rna_RenderEngine_support_display_space_shader_scene_;
PropertyRNA &rna_RenderEngine_support_display_space_shader_scene = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_support_display_space_shader_scene_);

static BoolPropertyRNA rna_RenderEngine_support_display_space_shader_supported_;
PropertyRNA &rna_RenderEngine_support_display_space_shader_supported = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_support_display_space_shader_supported_);

FunctionRNA *rna_RenderEngine_support_display_space_shader_func;
static PointerPropertyRNA rna_RenderEngine_get_preview_pixel_size_scene_;
PropertyRNA &rna_RenderEngine_get_preview_pixel_size_scene = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_get_preview_pixel_size_scene_);

static IntPropertyRNA rna_RenderEngine_get_preview_pixel_size_pixel_size_;
PropertyRNA &rna_RenderEngine_get_preview_pixel_size_pixel_size = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_get_preview_pixel_size_pixel_size_);

FunctionRNA *rna_RenderEngine_get_preview_pixel_size_func;
FunctionRNA *rna_RenderEngine_free_blender_memory_func;
static IntPropertyRNA rna_RenderEngine_tile_highlight_set_x_;
PropertyRNA &rna_RenderEngine_tile_highlight_set_x = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_tile_highlight_set_x_);

static IntPropertyRNA rna_RenderEngine_tile_highlight_set_y_;
PropertyRNA &rna_RenderEngine_tile_highlight_set_y = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_tile_highlight_set_y_);

static IntPropertyRNA rna_RenderEngine_tile_highlight_set_width_;
PropertyRNA &rna_RenderEngine_tile_highlight_set_width = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_tile_highlight_set_width_);

static IntPropertyRNA rna_RenderEngine_tile_highlight_set_height_;
PropertyRNA &rna_RenderEngine_tile_highlight_set_height = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_tile_highlight_set_height_);

static BoolPropertyRNA rna_RenderEngine_tile_highlight_set_highlight_;
PropertyRNA &rna_RenderEngine_tile_highlight_set_highlight = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_tile_highlight_set_highlight_);

FunctionRNA *rna_RenderEngine_tile_highlight_set_func;
FunctionRNA *rna_RenderEngine_tile_highlight_clear_all_func;
static PointerPropertyRNA rna_RenderEngine_register_pass_scene_;
PropertyRNA &rna_RenderEngine_register_pass_scene = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_register_pass_scene_);

static PointerPropertyRNA rna_RenderEngine_register_pass_view_layer_;
PropertyRNA &rna_RenderEngine_register_pass_view_layer = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_register_pass_view_layer_);

static StringPropertyRNA rna_RenderEngine_register_pass_name_;
PropertyRNA &rna_RenderEngine_register_pass_name = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_register_pass_name_);

static IntPropertyRNA rna_RenderEngine_register_pass_channels_;
PropertyRNA &rna_RenderEngine_register_pass_channels = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_register_pass_channels_);

static StringPropertyRNA rna_RenderEngine_register_pass_chanid_;
PropertyRNA &rna_RenderEngine_register_pass_chanid = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_register_pass_chanid_);

static EnumPropertyRNA rna_RenderEngine_register_pass_type_;
PropertyRNA &rna_RenderEngine_register_pass_type = reinterpret_cast<PropertyRNA &>(rna_RenderEngine_register_pass_type_);

FunctionRNA *rna_RenderEngine_register_pass_func;
StructRNA *RNA_RenderEngine;
void register_struct_RenderEngine(BlenderRNA &brna)
{
	rna_RenderEngine_rna_properties_ = {
		{&rna_RenderEngine_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_rna_properties_begin, RenderEngine_rna_properties_next, RenderEngine_rna_properties_end, RenderEngine_rna_properties_get, nullptr, nullptr, RenderEngine_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RenderEngine_rna_type_ = {
		{&rna_RenderEngine_is_animation, 	&rna_RenderEngine_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RenderEngine_is_animation_ = {
		{&rna_RenderEngine_is_preview, 	&rna_RenderEngine_rna_type,
		-1, "is_animation", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "is_animation",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_is_animation_get, RenderEngine_is_animation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_is_preview_ = {
		{&rna_RenderEngine_camera_override, 	&rna_RenderEngine_is_animation,
		-1, "is_preview", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "is_preview",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_is_preview_get, RenderEngine_is_preview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_camera_override_ = {
		{&rna_RenderEngine_layer_override, 	&rna_RenderEngine_is_preview,
		-1, "camera_override", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "camera_override",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_camera_override_get, nullptr, nullptr, nullptr,RNA_Object
	};

	static bool rna_RenderEngine_layer_override_default[20] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	rna_RenderEngine_layer_override_ = {
		{&rna_RenderEngine_resolution_x, 	&rna_RenderEngine_camera_override,
		-1, "layer_override", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "layer_override",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_LAYER_MEMBER) | int(PROP_UNIT_NONE)), nullptr, 1, {20, 0, 0}, 20,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, RenderEngine_layer_override_get, RenderEngine_layer_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_RenderEngine_layer_override_default
	};

	rna_RenderEngine_resolution_x_ = {
		{&rna_RenderEngine_resolution_y, 	&rna_RenderEngine_layer_override,
		-1, "resolution_x", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "resolution_x",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_resolution_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_resolution_y_ = {
		{&rna_RenderEngine_temporary_directory, 	&rna_RenderEngine_resolution_x,
		-1, "resolution_y", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "resolution_y",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_resolution_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_temporary_directory_ = {
		{&rna_RenderEngine_render, 	&rna_RenderEngine_resolution_y,
		-1, "temporary_directory", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "temporary_directory",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_temporary_directory_get, RenderEngine_temporary_directory_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_RenderEngine_render_ = {
		{&rna_RenderEngine_use_highlight_tiles, 	&rna_RenderEngine_temporary_directory,
		-1, "render", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Render Data",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_render_get, nullptr, nullptr, nullptr,RNA_RenderSettings
	};

	rna_RenderEngine_use_highlight_tiles_ = {
		{&rna_RenderEngine_bl_idname, 	&rna_RenderEngine_render,
		-1, "use_highlight_tiles", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "use_highlight_tiles",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_use_highlight_tiles_get, RenderEngine_use_highlight_tiles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_bl_idname_ = {
		{&rna_RenderEngine_bl_label, 	&rna_RenderEngine_use_highlight_tiles,
		-1, "bl_idname", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_idname",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_idname_get, RenderEngine_bl_idname_length, RenderEngine_bl_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_RenderEngine_bl_label_ = {
		{&rna_RenderEngine_bl_use_preview, 	&rna_RenderEngine_bl_idname,
		-1, "bl_label", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_label",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_label_get, RenderEngine_bl_label_length, RenderEngine_bl_label_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_RenderEngine_bl_use_preview_ = {
		{&rna_RenderEngine_bl_use_postprocess, 	&rna_RenderEngine_bl_label,
		-1, "bl_use_preview", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Preview Render",
		"Render engine supports being used for rendering previews of materials, lights and worlds",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_use_preview_get, RenderEngine_bl_use_preview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_bl_use_postprocess_ = {
		{&rna_RenderEngine_bl_use_eevee_viewport, 	&rna_RenderEngine_bl_use_preview,
		-1, "bl_use_postprocess", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Post Processing",
		"Apply compositing on render results",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_use_postprocess_get, RenderEngine_bl_use_postprocess_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_bl_use_eevee_viewport_ = {
		{&rna_RenderEngine_bl_use_custom_freestyle, 	&rna_RenderEngine_bl_use_postprocess,
		-1, "bl_use_eevee_viewport", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use EEVEE Viewport",
		"Uses EEVEE for viewport shading in Material Preview shading mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_use_eevee_viewport_get, RenderEngine_bl_use_eevee_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_bl_use_custom_freestyle_ = {
		{&rna_RenderEngine_bl_use_image_save, 	&rna_RenderEngine_bl_use_eevee_viewport,
		-1, "bl_use_custom_freestyle", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Custom Freestyle",
		"Handles freestyle rendering on its own, instead of delegating it to EEVEE",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_use_custom_freestyle_get, RenderEngine_bl_use_custom_freestyle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_bl_use_image_save_ = {
		{&rna_RenderEngine_bl_use_gpu_context, 	&rna_RenderEngine_bl_use_custom_freestyle,
		-1, "bl_use_image_save", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Image Save",
		"Save images/movie to disk while rendering an animation. Disabling image saving is only supported when bl_use_postprocess is also disabled.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_use_image_save_get, RenderEngine_bl_use_image_save_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_RenderEngine_bl_use_gpu_context_ = {
		{&rna_RenderEngine_bl_use_shading_nodes_custom, 	&rna_RenderEngine_bl_use_image_save,
		-1, "bl_use_gpu_context", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use GPU Context",
		"Enable OpenGL context for the render method, for engines that render using OpenGL",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_use_gpu_context_get, RenderEngine_bl_use_gpu_context_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_bl_use_shading_nodes_custom_ = {
		{&rna_RenderEngine_bl_use_spherical_stereo, 	&rna_RenderEngine_bl_use_gpu_context,
		-1, "bl_use_shading_nodes_custom", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Custom Shading Nodes",
		"Don\'t expose Cycles and EEVEE shading nodes in the node editor user interface, so separate nodes can be used instead",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_use_shading_nodes_custom_get, RenderEngine_bl_use_shading_nodes_custom_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_RenderEngine_bl_use_spherical_stereo_ = {
		{&rna_RenderEngine_bl_use_stereo_viewport, 	&rna_RenderEngine_bl_use_shading_nodes_custom,
		-1, "bl_use_spherical_stereo", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Spherical Stereo",
		"Support spherical stereo camera models",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_use_spherical_stereo_get, RenderEngine_bl_use_spherical_stereo_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_bl_use_stereo_viewport_ = {
		{&rna_RenderEngine_bl_use_materialx, 	&rna_RenderEngine_bl_use_spherical_stereo,
		-1, "bl_use_stereo_viewport", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Stereo Viewport",
		"Support rendering stereo 3D viewport",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_use_stereo_viewport_get, RenderEngine_bl_use_stereo_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderEngine_bl_use_materialx_ = {
		{nullptr, 	&rna_RenderEngine_bl_use_stereo_viewport,
		-1, "bl_use_materialx", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use MaterialX",
		"Use MaterialX for exporting materials to Hydra",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderEngine_bl_use_materialx_get, RenderEngine_bl_use_materialx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_RenderEngine;
	srna->cont.properties = {&rna_RenderEngine_rna_properties, &rna_RenderEngine_bl_use_materialx};
	srna->identifier = "RenderEngine";
	srna->flag = 516;
	srna->name = "Render Engine";
	srna->description = "Render engine";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RenderEngine_rna_properties;
	srna->refine = rna_RenderEngine_refine;
	srna->reg = rna_RenderEngine_register;
	srna->unreg = rna_RenderEngine_unregister;
	srna->instance = rna_RenderEngine_instance;
	{
	rna_RenderEngine_update_data_ = {
		{&rna_RenderEngine_update_depsgraph, 	nullptr,
		-1, "data", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_BlendData
	};
	rna_RenderEngine_update_depsgraph_ = {
		{nullptr, 	&rna_RenderEngine_update_data,
		-1, "depsgraph", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_update_data, &rna_RenderEngine_update_depsgraph};
		func->identifier = "update";
		func->flag = 4192;
		func->description = "Export scene data for render";
		rna_RenderEngine_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_render_depsgraph_ = {
		{nullptr, 	nullptr,
		-1, "depsgraph", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Evaluated dependency graph",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_render_depsgraph, &rna_RenderEngine_render_depsgraph};
		func->identifier = "render";
		func->flag = 4192;
		func->description = "Render scene into an image";
		rna_RenderEngine_render_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "render_frame_finish";
		func->flag = 4192;
		func->description = "Perform finishing operations after all view layers in a frame were rendered";
		rna_RenderEngine_render_frame_finish_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_draw_context_ = {
		{&rna_RenderEngine_draw_depsgraph, 	nullptr,
		-1, "context", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The context",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_RenderEngine_draw_depsgraph_ = {
		{nullptr, 	&rna_RenderEngine_draw_context,
		-1, "depsgraph", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Evaluated dependency graph",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_draw_context, &rna_RenderEngine_draw_depsgraph};
		func->identifier = "draw";
		func->flag = 96;
		func->description = "Draw render image";
		rna_RenderEngine_draw_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_bake_depsgraph_ = {
		{&rna_RenderEngine_bake_object, 	nullptr,
		-1, "depsgraph", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Evaluated dependency graph",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	rna_RenderEngine_bake_object_ = {
		{&rna_RenderEngine_bake_pass_type, 	&rna_RenderEngine_bake_depsgraph,
		-1, "object", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Object to bake",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	rna_RenderEngine_bake_pass_type_ = {
		{&rna_RenderEngine_bake_pass_filter, 	&rna_RenderEngine_bake_object,
		-1, "pass_type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Pass",
		"Pass to bake",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_bake_pass_type_items, 12, 1
	};
	rna_RenderEngine_bake_pass_filter_ = {
		{&rna_RenderEngine_bake_width, 	&rna_RenderEngine_bake_pass_type,
		-1, "pass_filter", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Pass Filter",
		"Filter to combined, diffuse, glossy and transmission passes",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_bake_width_ = {
		{&rna_RenderEngine_bake_height, 	&rna_RenderEngine_bake_pass_filter,
		-1, "width", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Width",
		"Image width",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_bake_height_ = {
		{nullptr, 	&rna_RenderEngine_bake_width,
		-1, "height", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Height",
		"Image height",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_bake_depsgraph, &rna_RenderEngine_bake_height};
		func->identifier = "bake";
		func->flag = 4192;
		func->description = "Bake passes";
		rna_RenderEngine_bake_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_view_update_context_ = {
		{&rna_RenderEngine_view_update_depsgraph, 	nullptr,
		-1, "context", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The context",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_RenderEngine_view_update_depsgraph_ = {
		{nullptr, 	&rna_RenderEngine_view_update_context,
		-1, "depsgraph", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Evaluated dependency graph",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_view_update_context, &rna_RenderEngine_view_update_depsgraph};
		func->identifier = "view_update";
		func->flag = 4192;
		func->description = "Update on data changes for viewport render";
		rna_RenderEngine_view_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_view_draw_context_ = {
		{&rna_RenderEngine_view_draw_depsgraph, 	nullptr,
		-1, "context", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The context",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_RenderEngine_view_draw_depsgraph_ = {
		{nullptr, 	&rna_RenderEngine_view_draw_context,
		-1, "depsgraph", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Evaluated dependency graph",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_view_draw_context, &rna_RenderEngine_view_draw_depsgraph};
		func->identifier = "view_draw";
		func->flag = 96;
		func->description = "Draw viewport render";
		rna_RenderEngine_view_draw_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_update_script_node_node_ = {
		{nullptr, 	nullptr,
		-1, "node", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Node
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_update_script_node_node, &rna_RenderEngine_update_script_node_node};
		func->identifier = "update_script_node";
		func->flag = 4192;
		func->description = "Compile shader script node";
		rna_RenderEngine_update_script_node_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_update_render_passes_scene_ = {
		{&rna_RenderEngine_update_render_passes_renderlayer, 	nullptr,
		-1, "scene", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	rna_RenderEngine_update_render_passes_renderlayer_ = {
		{nullptr, 	&rna_RenderEngine_update_render_passes_scene,
		-1, "renderlayer", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_update_render_passes_scene, &rna_RenderEngine_update_render_passes_renderlayer};
		func->identifier = "update_render_passes";
		func->flag = 4192;
		func->description = "Update the render passes that will be generated";
		rna_RenderEngine_update_render_passes_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_update_custom_camera_cam_ = {
		{nullptr, 	nullptr,
		-1, "cam", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Camera
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_update_custom_camera_cam, &rna_RenderEngine_update_custom_camera_cam};
		func->identifier = "update_custom_camera";
		func->flag = 4192;
		func->description = "Compile custom camera";
		rna_RenderEngine_update_custom_camera_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "tag_redraw";
		func->description = "Request redraw for viewport rendering";
		func->call = RenderEngine_tag_redraw_call;
		rna_RenderEngine_tag_redraw_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "tag_update";
		func->description = "Request update call for viewport rendering";
		func->call = RenderEngine_tag_update_call;
		rna_RenderEngine_tag_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_begin_result_x_ = {
		{&rna_RenderEngine_begin_result_y, 	nullptr,
		-1, "x", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "X",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_begin_result_y_ = {
		{&rna_RenderEngine_begin_result_w, 	&rna_RenderEngine_begin_result_x,
		-1, "y", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Y",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_begin_result_w_ = {
		{&rna_RenderEngine_begin_result_h, 	&rna_RenderEngine_begin_result_y,
		-1, "w", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Width",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_begin_result_h_ = {
		{&rna_RenderEngine_begin_result_layer, 	&rna_RenderEngine_begin_result_w,
		-1, "h", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Height",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_begin_result_layer_ = {
		{&rna_RenderEngine_begin_result_view, 	&rna_RenderEngine_begin_result_h,
		-1, "layer", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layer",
		"Single layer to get render result for",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_RenderEngine_begin_result_view_ = {
		{&rna_RenderEngine_begin_result_result, 	&rna_RenderEngine_begin_result_layer,
		-1, "view", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "View",
		"Single view to get render result for",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_RenderEngine_begin_result_result_ = {
		{nullptr, 	&rna_RenderEngine_begin_result_view,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_RenderResult
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_begin_result_x, &rna_RenderEngine_begin_result_result};
		func->identifier = "begin_result";
		func->description = "Create render result to write linear floating-point render layers and passes";
		func->call = RenderEngine_begin_result_call;
		func->c_ret = &rna_RenderEngine_begin_result_result;
		rna_RenderEngine_begin_result_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_update_result_result_ = {
		{nullptr, 	nullptr,
		-1, "result", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_RenderResult
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_update_result_result, &rna_RenderEngine_update_result_result};
		func->identifier = "update_result";
		func->description = "Signal that pixels have been updated and can be redrawn in the user interface";
		func->call = RenderEngine_update_result_call;
		rna_RenderEngine_update_result_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_end_result_result_ = {
		{&rna_RenderEngine_end_result_cancel, 	nullptr,
		-1, "result", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_RenderResult
	};
	rna_RenderEngine_end_result_cancel_ = {
		{&rna_RenderEngine_end_result_highlight, 	&rna_RenderEngine_end_result_result,
		-1, "cancel", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cancel",
		"Don\'t mark tile as done, don\'t merge results unless forced",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_end_result_highlight_ = {
		{&rna_RenderEngine_end_result_do_merge_results, 	&rna_RenderEngine_end_result_cancel,
		-1, "highlight", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Highlight",
		"Don\'t mark tile as done yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_end_result_do_merge_results_ = {
		{nullptr, 	&rna_RenderEngine_end_result_highlight,
		-1, "do_merge_results", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Merge Results",
		"Merge results even if cancel=true",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_end_result_result, &rna_RenderEngine_end_result_do_merge_results};
		func->identifier = "end_result";
		func->description = "All pixels in the render result have been set and are final";
		func->call = RenderEngine_end_result_call;
		rna_RenderEngine_end_result_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_add_pass_name_ = {
		{&rna_RenderEngine_add_pass_channels, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the Pass, without view or channel tag",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_RenderEngine_add_pass_channels_ = {
		{&rna_RenderEngine_add_pass_chan_id, 	&rna_RenderEngine_add_pass_name,
		-1, "channels", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channels",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_add_pass_chan_id_ = {
		{&rna_RenderEngine_add_pass_layer, 	&rna_RenderEngine_add_pass_channels,
		-1, "chan_id", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel IDs",
		"Channel names, one character per channel",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_RenderEngine_add_pass_layer_ = {
		{nullptr, 	&rna_RenderEngine_add_pass_chan_id,
		-1, "layer", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layer",
		"Single layer to add render pass to",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_add_pass_name, &rna_RenderEngine_add_pass_layer};
		func->identifier = "add_pass";
		func->description = "Add a pass to the render layer";
		func->call = RenderEngine_add_pass_call;
		rna_RenderEngine_add_pass_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_get_result_result_ = {
		{nullptr, 	nullptr,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_RenderResult
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_get_result_result, &rna_RenderEngine_get_result_result};
		func->identifier = "get_result";
		func->description = "Get final result for non-pixel operations";
		func->call = RenderEngine_get_result_call;
		func->c_ret = &rna_RenderEngine_get_result_result;
		rna_RenderEngine_get_result_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_test_break_do_break_ = {
		{nullptr, 	nullptr,
		-1, "do_break", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Break",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_test_break_do_break, &rna_RenderEngine_test_break_do_break};
		func->identifier = "test_break";
		func->description = "Test if the render operation should been canceled, this is a fast call that should be used regularly for responsiveness";
		func->call = RenderEngine_test_break_call;
		func->c_ret = &rna_RenderEngine_test_break_do_break;
		rna_RenderEngine_test_break_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_pass_by_index_get_layer_ = {
		{&rna_RenderEngine_pass_by_index_get_index, 	nullptr,
		-1, "layer", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Layer",
		"Name of render layer to get pass for",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_RenderEngine_pass_by_index_get_index_ = {
		{&rna_RenderEngine_pass_by_index_get_render_pass, 	&rna_RenderEngine_pass_by_index_get_layer,
		-1, "index", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of pass to get",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_pass_by_index_get_render_pass_ = {
		{nullptr, 	&rna_RenderEngine_pass_by_index_get_index,
		-1, "render_pass", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of pass to get",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_RenderPass
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_pass_by_index_get_layer, &rna_RenderEngine_pass_by_index_get_render_pass};
		func->identifier = "pass_by_index_get";
		func->description = "pass_by_index_get";
		func->call = RenderEngine_pass_by_index_get_call;
		func->c_ret = &rna_RenderEngine_pass_by_index_get_render_pass;
		rna_RenderEngine_pass_by_index_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_active_view_get_view_ = {
		{nullptr, 	nullptr,
		-1, "view", 262145, 0, 2, 0, 0, PropertyPathTemplateType(0), "View",
		"Single view active",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_active_view_get_view, &rna_RenderEngine_active_view_get_view};
		func->identifier = "active_view_get";
		func->description = "active_view_get";
		func->call = RenderEngine_active_view_get_call;
		func->c_ret = &rna_RenderEngine_active_view_get_view;
		rna_RenderEngine_active_view_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_active_view_set_view_ = {
		{nullptr, 	nullptr,
		-1, "view", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "View",
		"Single view to set as active",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_active_view_set_view, &rna_RenderEngine_active_view_set_view};
		func->identifier = "active_view_set";
		func->description = "active_view_set";
		func->call = RenderEngine_active_view_set_call;
		rna_RenderEngine_active_view_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_camera_shift_x_camera_ = {
		{&rna_RenderEngine_camera_shift_x_use_spherical_stereo, 	nullptr,
		-1, "camera", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Camera object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	rna_RenderEngine_camera_shift_x_use_spherical_stereo_ = {
		{&rna_RenderEngine_camera_shift_x_shift_x, 	&rna_RenderEngine_camera_shift_x_camera,
		-1, "use_spherical_stereo", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Spherical Stereo",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_camera_shift_x_shift_x_ = {
		{nullptr, 	&rna_RenderEngine_camera_shift_x_use_spherical_stereo,
		-1, "shift_x", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Shift X",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_camera_shift_x_camera, &rna_RenderEngine_camera_shift_x_shift_x};
		func->identifier = "camera_shift_x";
		func->description = "camera_shift_x";
		func->call = RenderEngine_camera_shift_x_call;
		func->c_ret = &rna_RenderEngine_camera_shift_x_shift_x;
		rna_RenderEngine_camera_shift_x_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_camera_model_matrix_camera_ = {
		{&rna_RenderEngine_camera_model_matrix_use_spherical_stereo, 	nullptr,
		-1, "camera", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Camera object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	rna_RenderEngine_camera_model_matrix_use_spherical_stereo_ = {
		{&rna_RenderEngine_camera_model_matrix_r_model_matrix, 	&rna_RenderEngine_camera_model_matrix_camera,
		-1, "use_spherical_stereo", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Spherical Stereo",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	static float rna_RenderEngine_camera_model_matrix_r_model_matrix_default[16] = {
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
	rna_RenderEngine_camera_model_matrix_r_model_matrix_ = {
		{nullptr, 	&rna_RenderEngine_camera_model_matrix_use_spherical_stereo,
		-1, "r_model_matrix", 3, 0, 3, 0, 0, PropertyPathTemplateType(0), "Model Matrix",
		"Normalized camera model matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_RenderEngine_camera_model_matrix_r_model_matrix_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_camera_model_matrix_camera, &rna_RenderEngine_camera_model_matrix_r_model_matrix};
		func->identifier = "camera_model_matrix";
		func->description = "camera_model_matrix";
		func->call = RenderEngine_camera_model_matrix_call;
		rna_RenderEngine_camera_model_matrix_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_use_spherical_stereo_camera_ = {
		{&rna_RenderEngine_use_spherical_stereo_use_spherical_stereo, 	nullptr,
		-1, "camera", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Camera object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	rna_RenderEngine_use_spherical_stereo_use_spherical_stereo_ = {
		{nullptr, 	&rna_RenderEngine_use_spherical_stereo_camera,
		-1, "use_spherical_stereo", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Spherical Stereo",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_use_spherical_stereo_camera, &rna_RenderEngine_use_spherical_stereo_use_spherical_stereo};
		func->identifier = "use_spherical_stereo";
		func->description = "use_spherical_stereo";
		func->call = RenderEngine_use_spherical_stereo_call;
		func->c_ret = &rna_RenderEngine_use_spherical_stereo_use_spherical_stereo;
		rna_RenderEngine_use_spherical_stereo_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_update_stats_stats_ = {
		{&rna_RenderEngine_update_stats_info, 	nullptr,
		-1, "stats", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Stats",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_RenderEngine_update_stats_info_ = {
		{nullptr, 	&rna_RenderEngine_update_stats_stats,
		-1, "info", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Info",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_update_stats_stats, &rna_RenderEngine_update_stats_info};
		func->identifier = "update_stats";
		func->description = "Update and signal to redraw render status text";
		func->call = RenderEngine_update_stats_call;
		rna_RenderEngine_update_stats_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_frame_set_frame_ = {
		{&rna_RenderEngine_frame_set_subframe, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_frame_set_subframe_ = {
		{nullptr, 	&rna_RenderEngine_frame_set_frame,
		-1, "subframe", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Subframe",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_frame_set_frame, &rna_RenderEngine_frame_set_subframe};
		func->identifier = "frame_set";
		func->description = "Evaluate scene at a different frame (for motion blur)";
		func->call = RenderEngine_frame_set_call;
		rna_RenderEngine_frame_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_update_progress_progress_ = {
		{nullptr, 	nullptr,
		-1, "progress", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Percentage of render that\'s done",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_update_progress_progress, &rna_RenderEngine_update_progress_progress};
		func->identifier = "update_progress";
		func->description = "Update progress percentage of render";
		func->call = RenderEngine_update_progress_call;
		rna_RenderEngine_update_progress_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_update_memory_stats_memory_used_ = {
		{&rna_RenderEngine_update_memory_stats_memory_peak, 	nullptr,
		-1, "memory_used", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Current memory usage in megabytes",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_RenderEngine_update_memory_stats_memory_peak_ = {
		{nullptr, 	&rna_RenderEngine_update_memory_stats_memory_used,
		-1, "memory_peak", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Peak memory usage in megabytes",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_update_memory_stats_memory_used, &rna_RenderEngine_update_memory_stats_memory_peak};
		func->identifier = "update_memory_stats";
		func->description = "Update memory usage statistics";
		func->call = RenderEngine_update_memory_stats_call;
		rna_RenderEngine_update_memory_stats_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_report_type_ = {
		{&rna_RenderEngine_report_message, 	nullptr,
		-1, "type", 2097155, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_wm_report_items, 9, 0
	};
	rna_RenderEngine_report_message_ = {
		{nullptr, 	&rna_RenderEngine_report_type,
		-1, "message", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Report Message",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_report_type, &rna_RenderEngine_report_message};
		func->identifier = "report";
		func->description = "Report info, warning or error messages";
		func->call = RenderEngine_report_call;
		rna_RenderEngine_report_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_error_set_message_ = {
		{nullptr, 	nullptr,
		-1, "message", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Report Message",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_error_set_message, &rna_RenderEngine_error_set_message};
		func->identifier = "error_set";
		func->description = "Set error message displaying after the render is finished";
		func->call = RenderEngine_error_set_call;
		rna_RenderEngine_error_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_bind_display_space_shader_scene_ = {
		{nullptr, 	nullptr,
		-1, "scene", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Scene whose color management is used",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_bind_display_space_shader_scene, &rna_RenderEngine_bind_display_space_shader_scene};
		func->identifier = "bind_display_space_shader";
		func->description = "Bind GLSL fragment shader that converts linear colors to display space colors using scene color management settings";
		func->call = RenderEngine_bind_display_space_shader_call;
		rna_RenderEngine_bind_display_space_shader_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "unbind_display_space_shader";
		func->description = "Unbind GLSL display space shader, must always be called after binding the shader";
		func->call = RenderEngine_unbind_display_space_shader_call;
		rna_RenderEngine_unbind_display_space_shader_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_support_display_space_shader_scene_ = {
		{&rna_RenderEngine_support_display_space_shader_supported, 	nullptr,
		-1, "scene", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Scene whose color management is used",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	rna_RenderEngine_support_display_space_shader_supported_ = {
		{nullptr, 	&rna_RenderEngine_support_display_space_shader_scene,
		-1, "supported", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Supported",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_support_display_space_shader_scene, &rna_RenderEngine_support_display_space_shader_supported};
		func->identifier = "support_display_space_shader";
		func->description = "Test if GLSL display space shader is supported for the combination of graphics card and scene settings";
		func->call = RenderEngine_support_display_space_shader_call;
		func->c_ret = &rna_RenderEngine_support_display_space_shader_supported;
		rna_RenderEngine_support_display_space_shader_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_get_preview_pixel_size_scene_ = {
		{&rna_RenderEngine_get_preview_pixel_size_pixel_size, 	nullptr,
		-1, "scene", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Scene whose preview settings are used",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	rna_RenderEngine_get_preview_pixel_size_pixel_size_ = {
		{nullptr, 	&rna_RenderEngine_get_preview_pixel_size_scene,
		-1, "pixel_size", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Pixel Size",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 8, 1, 8, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_get_preview_pixel_size_scene, &rna_RenderEngine_get_preview_pixel_size_pixel_size};
		func->identifier = "get_preview_pixel_size";
		func->description = "Get the pixel size that should be used for preview rendering";
		func->call = RenderEngine_get_preview_pixel_size_call;
		func->c_ret = &rna_RenderEngine_get_preview_pixel_size_pixel_size;
		rna_RenderEngine_get_preview_pixel_size_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "free_blender_memory";
		func->description = "Free Blender side memory of render engine";
		func->call = RenderEngine_free_blender_memory_call;
		rna_RenderEngine_free_blender_memory_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_tile_highlight_set_x_ = {
		{&rna_RenderEngine_tile_highlight_set_y, 	nullptr,
		-1, "x", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "X",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_tile_highlight_set_y_ = {
		{&rna_RenderEngine_tile_highlight_set_width, 	&rna_RenderEngine_tile_highlight_set_x,
		-1, "y", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Y",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_tile_highlight_set_width_ = {
		{&rna_RenderEngine_tile_highlight_set_height, 	&rna_RenderEngine_tile_highlight_set_y,
		-1, "width", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Width",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_tile_highlight_set_height_ = {
		{&rna_RenderEngine_tile_highlight_set_highlight, 	&rna_RenderEngine_tile_highlight_set_width,
		-1, "height", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Height",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderEngine_tile_highlight_set_highlight_ = {
		{nullptr, 	&rna_RenderEngine_tile_highlight_set_height,
		-1, "highlight", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Highlight",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_tile_highlight_set_x, &rna_RenderEngine_tile_highlight_set_highlight};
		func->identifier = "tile_highlight_set";
		func->description = "Set highlighted state of the given tile";
		func->call = RenderEngine_tile_highlight_set_call;
		rna_RenderEngine_tile_highlight_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "tile_highlight_clear_all";
		func->description = "The temp directory used by Blender";
		func->call = RenderEngine_tile_highlight_clear_all_call;
		rna_RenderEngine_tile_highlight_clear_all_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderEngine_register_pass_scene_ = {
		{&rna_RenderEngine_register_pass_view_layer, 	nullptr,
		-1, "scene", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Scene the pass is registered for",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	rna_RenderEngine_register_pass_view_layer_ = {
		{&rna_RenderEngine_register_pass_name, 	&rna_RenderEngine_register_pass_scene,
		-1, "view_layer", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"View layer the pass belongs to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
	rna_RenderEngine_register_pass_name_ = {
		{&rna_RenderEngine_register_pass_channels, 	&rna_RenderEngine_register_pass_view_layer,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_RenderEngine_register_pass_channels_ = {
		{&rna_RenderEngine_register_pass_chanid, 	&rna_RenderEngine_register_pass_name,
		-1, "channels", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channels",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 4, 1, 8, 1, nullptr, nullptr, 1, nullptr
	};
	rna_RenderEngine_register_pass_chanid_ = {
		{&rna_RenderEngine_register_pass_type, 	&rna_RenderEngine_register_pass_channels,
		-1, "chanid", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel IDs",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 8, ""
	};
	static const EnumPropertyItem rna_RenderEngine_register_pass_type_items[4] = {
		{0, "VALUE", 0, "Value", ""	},
		{1, "VECTOR", 0, "Vector", ""	},
		{2, "COLOR", 0, "Color", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_RenderEngine_register_pass_type_ = {
		{nullptr, 	&rna_RenderEngine_register_pass_chanid,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_RenderEngine_register_pass_type_items, 3, 0
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderEngine_register_pass_scene, &rna_RenderEngine_register_pass_type};
		func->identifier = "register_pass";
		func->description = "Register a render pass that will be part of the render with the current settings";
		func->call = RenderEngine_register_pass_call;
		rna_RenderEngine_register_pass_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Hydra Render Engine */
StructRNA *RNA_HydraRenderEngine;
void register_struct_HydraRenderEngine(BlenderRNA &brna)
{

	StructRNA *srna = RNA_HydraRenderEngine;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "HydraRenderEngine";
	srna->flag = 516;
	srna->name = "Hydra Render Engine";
	srna->description = "Base class from USD Hydra based renderers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RenderEngine_rna_properties;
	srna->base = RNA_RenderEngine;
	srna->refine = rna_RenderEngine_refine;
	srna->reg = rna_RenderEngine_register;
	srna->unreg = rna_RenderEngine_unregister;
	srna->instance = rna_RenderEngine_instance;
};

/* Render Result */
static CollectionPropertyRNA rna_RenderResult_rna_properties_;
PropertyRNA &rna_RenderResult_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RenderResult_rna_properties_);

static PointerPropertyRNA rna_RenderResult_rna_type_;
PropertyRNA &rna_RenderResult_rna_type = reinterpret_cast<PropertyRNA &>(rna_RenderResult_rna_type_);

static IntPropertyRNA rna_RenderResult_resolution_x_;
PropertyRNA &rna_RenderResult_resolution_x = reinterpret_cast<PropertyRNA &>(rna_RenderResult_resolution_x_);

static IntPropertyRNA rna_RenderResult_resolution_y_;
PropertyRNA &rna_RenderResult_resolution_y = reinterpret_cast<PropertyRNA &>(rna_RenderResult_resolution_y_);

static CollectionPropertyRNA rna_RenderResult_layers_;
PropertyRNA &rna_RenderResult_layers = reinterpret_cast<PropertyRNA &>(rna_RenderResult_layers_);

static CollectionPropertyRNA rna_RenderResult_views_;
PropertyRNA &rna_RenderResult_views = reinterpret_cast<PropertyRNA &>(rna_RenderResult_views_);

static StringPropertyRNA rna_RenderResult_load_from_file_filepath_;
PropertyRNA &rna_RenderResult_load_from_file_filepath = reinterpret_cast<PropertyRNA &>(rna_RenderResult_load_from_file_filepath_);

FunctionRNA *rna_RenderResult_load_from_file_func;
static StringPropertyRNA rna_RenderResult_stamp_data_add_field_field_;
PropertyRNA &rna_RenderResult_stamp_data_add_field_field = reinterpret_cast<PropertyRNA &>(rna_RenderResult_stamp_data_add_field_field_);

static StringPropertyRNA rna_RenderResult_stamp_data_add_field_value_;
PropertyRNA &rna_RenderResult_stamp_data_add_field_value = reinterpret_cast<PropertyRNA &>(rna_RenderResult_stamp_data_add_field_value_);

FunctionRNA *rna_RenderResult_stamp_data_add_field_func;
StructRNA *RNA_RenderResult;
void register_struct_RenderResult(BlenderRNA &brna)
{
	rna_RenderResult_rna_properties_ = {
		{&rna_RenderResult_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderResult_rna_properties_begin, RenderResult_rna_properties_next, RenderResult_rna_properties_end, RenderResult_rna_properties_get, nullptr, nullptr, RenderResult_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RenderResult_rna_type_ = {
		{&rna_RenderResult_resolution_x, 	&rna_RenderResult_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderResult_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RenderResult_resolution_x_ = {
		{&rna_RenderResult_resolution_y, 	&rna_RenderResult_rna_type,
		-1, "resolution_x", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "resolution_x",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderResult_resolution_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_RenderResult_resolution_y_ = {
		{&rna_RenderResult_layers, 	&rna_RenderResult_resolution_x,
		-1, "resolution_y", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "resolution_y",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderResult_resolution_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_RenderResult_layers_ = {
		{&rna_RenderResult_views, 	&rna_RenderResult_resolution_y,
		-1, "layers", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "layers",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderResult_layers_begin, RenderResult_layers_next, RenderResult_layers_end, RenderResult_layers_get, nullptr, RenderResult_layers_lookup_int, nullptr, nullptr, RNA_RenderLayer
	};

	rna_RenderResult_views_ = {
		{nullptr, 	&rna_RenderResult_layers,
		-1, "views", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "views",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderResult_views_begin, RenderResult_views_next, RenderResult_views_end, RenderResult_views_get, nullptr, RenderResult_views_lookup_int, nullptr, nullptr, RNA_RenderView
	};

	StructRNA *srna = RNA_RenderResult;
	srna->cont.properties = {&rna_RenderResult_rna_properties, &rna_RenderResult_views};
	srna->identifier = "RenderResult";
	srna->flag = 516;
	srna->name = "Render Result";
	srna->description = "Result of rendering, including all layers and passes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RenderResult_rna_properties;
	{
	rna_RenderResult_load_from_file_filepath_ = {
		{nullptr, 	nullptr,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "File Name",
		"Filename to load into this render tile, must be no smaller than the render result",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILENAME) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderResult_load_from_file_filepath, &rna_RenderResult_load_from_file_filepath};
		func->identifier = "load_from_file";
		func->flag = 16;
		func->description = "Copies the pixels of this render result from an image file";
		func->call = RenderResult_load_from_file_call;
		rna_RenderResult_load_from_file_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_RenderResult_stamp_data_add_field_field_ = {
		{&rna_RenderResult_stamp_data_add_field_value, 	nullptr,
		-1, "field", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Field",
		"Name of the stamp field to add",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};
	rna_RenderResult_stamp_data_add_field_value_ = {
		{nullptr, 	&rna_RenderResult_stamp_data_add_field_field,
		-1, "value", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"Value of the stamp data",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderResult_stamp_data_add_field_field, &rna_RenderResult_stamp_data_add_field_value};
		func->identifier = "stamp_data_add_field";
		func->description = "Add engine-specific stamp data to the result";
		func->call = RenderResult_stamp_data_add_field_call;
		rna_RenderResult_stamp_data_add_field_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Render View */
static CollectionPropertyRNA rna_RenderView_rna_properties_;
PropertyRNA &rna_RenderView_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RenderView_rna_properties_);

static PointerPropertyRNA rna_RenderView_rna_type_;
PropertyRNA &rna_RenderView_rna_type = reinterpret_cast<PropertyRNA &>(rna_RenderView_rna_type_);

static StringPropertyRNA rna_RenderView_name_;
PropertyRNA &rna_RenderView_name = reinterpret_cast<PropertyRNA &>(rna_RenderView_name_);

StructRNA *RNA_RenderView;
void register_struct_RenderView(BlenderRNA &brna)
{
	rna_RenderView_rna_properties_ = {
		{&rna_RenderView_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderView_rna_properties_begin, RenderView_rna_properties_next, RenderView_rna_properties_end, RenderView_rna_properties_get, nullptr, nullptr, RenderView_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RenderView_rna_type_ = {
		{&rna_RenderView_name, 	&rna_RenderView_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderView_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RenderView_name_ = {
		{nullptr, 	&rna_RenderView_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderView_name_get, RenderView_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_RenderView;
	srna->cont.properties = {&rna_RenderView_rna_properties, &rna_RenderView_name};
	srna->identifier = "RenderView";
	srna->flag = 516;
	srna->name = "Render View";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_RenderView_name;
	srna->iteratorproperty = &rna_RenderView_rna_properties;
};

/* Render Layer */
static CollectionPropertyRNA rna_RenderLayer_rna_properties_;
PropertyRNA &rna_RenderLayer_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_rna_properties_);

static PointerPropertyRNA rna_RenderLayer_rna_type_;
PropertyRNA &rna_RenderLayer_rna_type = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_rna_type_);

static StringPropertyRNA rna_RenderLayer_name_;
PropertyRNA &rna_RenderLayer_name = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_name_);

static BoolPropertyRNA rna_RenderLayer_use_solid_;
PropertyRNA &rna_RenderLayer_use_solid = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_solid_);

static BoolPropertyRNA rna_RenderLayer_use_sky_;
PropertyRNA &rna_RenderLayer_use_sky = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_sky_);

static BoolPropertyRNA rna_RenderLayer_use_ao_;
PropertyRNA &rna_RenderLayer_use_ao = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_ao_);

static BoolPropertyRNA rna_RenderLayer_use_strand_;
PropertyRNA &rna_RenderLayer_use_strand = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_strand_);

static BoolPropertyRNA rna_RenderLayer_use_volumes_;
PropertyRNA &rna_RenderLayer_use_volumes = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_volumes_);

static BoolPropertyRNA rna_RenderLayer_use_motion_blur_;
PropertyRNA &rna_RenderLayer_use_motion_blur = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_motion_blur_);

static BoolPropertyRNA rna_RenderLayer_use_grease_pencil_;
PropertyRNA &rna_RenderLayer_use_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_grease_pencil_);

static BoolPropertyRNA rna_RenderLayer_use_pass_combined_;
PropertyRNA &rna_RenderLayer_use_pass_combined = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_combined_);

static BoolPropertyRNA rna_RenderLayer_use_pass_z_;
PropertyRNA &rna_RenderLayer_use_pass_z = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_z_);

static BoolPropertyRNA rna_RenderLayer_use_pass_vector_;
PropertyRNA &rna_RenderLayer_use_pass_vector = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_vector_);

static BoolPropertyRNA rna_RenderLayer_use_pass_position_;
PropertyRNA &rna_RenderLayer_use_pass_position = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_position_);

static BoolPropertyRNA rna_RenderLayer_use_pass_normal_;
PropertyRNA &rna_RenderLayer_use_pass_normal = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_normal_);

static BoolPropertyRNA rna_RenderLayer_use_pass_uv_;
PropertyRNA &rna_RenderLayer_use_pass_uv = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_uv_);

static BoolPropertyRNA rna_RenderLayer_use_pass_mist_;
PropertyRNA &rna_RenderLayer_use_pass_mist = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_mist_);

static BoolPropertyRNA rna_RenderLayer_use_pass_object_index_;
PropertyRNA &rna_RenderLayer_use_pass_object_index = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_object_index_);

static BoolPropertyRNA rna_RenderLayer_use_pass_material_index_;
PropertyRNA &rna_RenderLayer_use_pass_material_index = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_material_index_);

static BoolPropertyRNA rna_RenderLayer_use_pass_shadow_;
PropertyRNA &rna_RenderLayer_use_pass_shadow = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_shadow_);

static BoolPropertyRNA rna_RenderLayer_use_pass_ambient_occlusion_;
PropertyRNA &rna_RenderLayer_use_pass_ambient_occlusion = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_ambient_occlusion_);

static BoolPropertyRNA rna_RenderLayer_use_pass_emit_;
PropertyRNA &rna_RenderLayer_use_pass_emit = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_emit_);

static BoolPropertyRNA rna_RenderLayer_use_pass_environment_;
PropertyRNA &rna_RenderLayer_use_pass_environment = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_environment_);

static BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_direct_;
PropertyRNA &rna_RenderLayer_use_pass_diffuse_direct = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_diffuse_direct_);

static BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_indirect_;
PropertyRNA &rna_RenderLayer_use_pass_diffuse_indirect = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_diffuse_indirect_);

static BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_color_;
PropertyRNA &rna_RenderLayer_use_pass_diffuse_color = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_diffuse_color_);

static BoolPropertyRNA rna_RenderLayer_use_pass_glossy_direct_;
PropertyRNA &rna_RenderLayer_use_pass_glossy_direct = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_glossy_direct_);

static BoolPropertyRNA rna_RenderLayer_use_pass_glossy_indirect_;
PropertyRNA &rna_RenderLayer_use_pass_glossy_indirect = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_glossy_indirect_);

static BoolPropertyRNA rna_RenderLayer_use_pass_glossy_color_;
PropertyRNA &rna_RenderLayer_use_pass_glossy_color = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_glossy_color_);

static BoolPropertyRNA rna_RenderLayer_use_pass_transmission_direct_;
PropertyRNA &rna_RenderLayer_use_pass_transmission_direct = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_transmission_direct_);

static BoolPropertyRNA rna_RenderLayer_use_pass_transmission_indirect_;
PropertyRNA &rna_RenderLayer_use_pass_transmission_indirect = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_transmission_indirect_);

static BoolPropertyRNA rna_RenderLayer_use_pass_transmission_color_;
PropertyRNA &rna_RenderLayer_use_pass_transmission_color = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_transmission_color_);

static BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_direct_;
PropertyRNA &rna_RenderLayer_use_pass_subsurface_direct = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_subsurface_direct_);

static BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_indirect_;
PropertyRNA &rna_RenderLayer_use_pass_subsurface_indirect = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_subsurface_indirect_);

static BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_color_;
PropertyRNA &rna_RenderLayer_use_pass_subsurface_color = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_use_pass_subsurface_color_);

static CollectionPropertyRNA rna_RenderLayer_passes_;
PropertyRNA &rna_RenderLayer_passes = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_passes_);

static StringPropertyRNA rna_RenderLayer_load_from_file_filepath_;
PropertyRNA &rna_RenderLayer_load_from_file_filepath = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_load_from_file_filepath_);

static IntPropertyRNA rna_RenderLayer_load_from_file_x_;
PropertyRNA &rna_RenderLayer_load_from_file_x = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_load_from_file_x_);

static IntPropertyRNA rna_RenderLayer_load_from_file_y_;
PropertyRNA &rna_RenderLayer_load_from_file_y = reinterpret_cast<PropertyRNA &>(rna_RenderLayer_load_from_file_y_);

FunctionRNA *rna_RenderLayer_load_from_file_func;
StructRNA *RNA_RenderLayer;
void register_struct_RenderLayer(BlenderRNA &brna)
{
	rna_RenderLayer_rna_properties_ = {
		{&rna_RenderLayer_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_rna_properties_begin, RenderLayer_rna_properties_next, RenderLayer_rna_properties_end, RenderLayer_rna_properties_get, nullptr, nullptr, RenderLayer_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RenderLayer_rna_type_ = {
		{&rna_RenderLayer_name, 	&rna_RenderLayer_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RenderLayer_name_ = {
		{&rna_RenderLayer_use_solid, 	&rna_RenderLayer_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"View layer name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_name_get, RenderLayer_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_RenderLayer_use_solid_ = {
		{&rna_RenderLayer_use_sky, 	&rna_RenderLayer_name,
		-1, "use_solid", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Solid",
		"Render Solid faces in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_solid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_sky_ = {
		{&rna_RenderLayer_use_ao, 	&rna_RenderLayer_use_solid,
		-1, "use_sky", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sky",
		"Render Sky in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_sky_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_ao_ = {
		{&rna_RenderLayer_use_strand, 	&rna_RenderLayer_use_sky,
		-1, "use_ao", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ambient Occlusion",
		"Render Ambient Occlusion in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_ao_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_strand_ = {
		{&rna_RenderLayer_use_volumes, 	&rna_RenderLayer_use_ao,
		-1, "use_strand", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strand",
		"Render Strands in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_strand_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_volumes_ = {
		{&rna_RenderLayer_use_motion_blur, 	&rna_RenderLayer_use_strand,
		-1, "use_volumes", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Volumes",
		"Render volumes in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_volumes_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_motion_blur_ = {
		{&rna_RenderLayer_use_grease_pencil, 	&rna_RenderLayer_use_volumes,
		-1, "use_motion_blur", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Motion Blur",
		"Render motion blur in this Layer, if enabled in the scene",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_motion_blur_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_grease_pencil_ = {
		{&rna_RenderLayer_use_pass_combined, 	&rna_RenderLayer_use_motion_blur,
		-1, "use_grease_pencil", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grease Pencil",
		"Render Grease Pencil on this layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_grease_pencil_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_combined_ = {
		{&rna_RenderLayer_use_pass_z, 	&rna_RenderLayer_use_grease_pencil,
		-1, "use_pass_combined", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Combined",
		"Deliver full combined RGBA buffer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_combined_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_z_ = {
		{&rna_RenderLayer_use_pass_vector, 	&rna_RenderLayer_use_pass_combined,
		-1, "use_pass_z", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Depth",
		"Deliver depth values pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_z_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_vector_ = {
		{&rna_RenderLayer_use_pass_position, 	&rna_RenderLayer_use_pass_z,
		-1, "use_pass_vector", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vector",
		"Deliver speed vector pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_vector_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_position_ = {
		{&rna_RenderLayer_use_pass_normal, 	&rna_RenderLayer_use_pass_vector,
		-1, "use_pass_position", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Position",
		"Deliver position pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_position_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_normal_ = {
		{&rna_RenderLayer_use_pass_uv, 	&rna_RenderLayer_use_pass_position,
		-1, "use_pass_normal", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Normal",
		"Deliver normal pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_normal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_uv_ = {
		{&rna_RenderLayer_use_pass_mist, 	&rna_RenderLayer_use_pass_normal,
		-1, "use_pass_uv", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "UV",
		"Deliver texture UV pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_uv_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_mist_ = {
		{&rna_RenderLayer_use_pass_object_index, 	&rna_RenderLayer_use_pass_uv,
		-1, "use_pass_mist", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mist",
		"Deliver mist factor pass (0.0 to 1.0)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_mist_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_object_index_ = {
		{&rna_RenderLayer_use_pass_material_index, 	&rna_RenderLayer_use_pass_mist,
		-1, "use_pass_object_index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object Index",
		"Deliver object index pass",
		0, "Scene",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_object_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_material_index_ = {
		{&rna_RenderLayer_use_pass_shadow, 	&rna_RenderLayer_use_pass_object_index,
		-1, "use_pass_material_index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Material Index",
		"Deliver material index pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_material_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_shadow_ = {
		{&rna_RenderLayer_use_pass_ambient_occlusion, 	&rna_RenderLayer_use_pass_material_index,
		-1, "use_pass_shadow", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shadow",
		"Deliver shadow pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_shadow_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_ambient_occlusion_ = {
		{&rna_RenderLayer_use_pass_emit, 	&rna_RenderLayer_use_pass_shadow,
		-1, "use_pass_ambient_occlusion", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ambient Occlusion",
		"Deliver Ambient Occlusion pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_ambient_occlusion_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_emit_ = {
		{&rna_RenderLayer_use_pass_environment, 	&rna_RenderLayer_use_pass_ambient_occlusion,
		-1, "use_pass_emit", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Emission",
		"Deliver emission pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_emit_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_environment_ = {
		{&rna_RenderLayer_use_pass_diffuse_direct, 	&rna_RenderLayer_use_pass_emit,
		-1, "use_pass_environment", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Environment",
		"Deliver environment lighting pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_environment_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_diffuse_direct_ = {
		{&rna_RenderLayer_use_pass_diffuse_indirect, 	&rna_RenderLayer_use_pass_environment,
		-1, "use_pass_diffuse_direct", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Diffuse Direct",
		"Deliver diffuse direct pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_diffuse_direct_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_diffuse_indirect_ = {
		{&rna_RenderLayer_use_pass_diffuse_color, 	&rna_RenderLayer_use_pass_diffuse_direct,
		-1, "use_pass_diffuse_indirect", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Diffuse Indirect",
		"Deliver diffuse indirect pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_diffuse_indirect_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_diffuse_color_ = {
		{&rna_RenderLayer_use_pass_glossy_direct, 	&rna_RenderLayer_use_pass_diffuse_indirect,
		-1, "use_pass_diffuse_color", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Diffuse Color",
		"Deliver diffuse color pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_diffuse_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_glossy_direct_ = {
		{&rna_RenderLayer_use_pass_glossy_indirect, 	&rna_RenderLayer_use_pass_diffuse_color,
		-1, "use_pass_glossy_direct", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Glossy Direct",
		"Deliver glossy direct pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_glossy_direct_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_glossy_indirect_ = {
		{&rna_RenderLayer_use_pass_glossy_color, 	&rna_RenderLayer_use_pass_glossy_direct,
		-1, "use_pass_glossy_indirect", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Glossy Indirect",
		"Deliver glossy indirect pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_glossy_indirect_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_glossy_color_ = {
		{&rna_RenderLayer_use_pass_transmission_direct, 	&rna_RenderLayer_use_pass_glossy_indirect,
		-1, "use_pass_glossy_color", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Glossy Color",
		"Deliver glossy color pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_glossy_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_transmission_direct_ = {
		{&rna_RenderLayer_use_pass_transmission_indirect, 	&rna_RenderLayer_use_pass_glossy_color,
		-1, "use_pass_transmission_direct", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transmission Direct",
		"Deliver transmission direct pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_transmission_direct_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_transmission_indirect_ = {
		{&rna_RenderLayer_use_pass_transmission_color, 	&rna_RenderLayer_use_pass_transmission_direct,
		-1, "use_pass_transmission_indirect", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transmission Indirect",
		"Deliver transmission indirect pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_transmission_indirect_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_transmission_color_ = {
		{&rna_RenderLayer_use_pass_subsurface_direct, 	&rna_RenderLayer_use_pass_transmission_indirect,
		-1, "use_pass_transmission_color", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transmission Color",
		"Deliver transmission color pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_transmission_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_subsurface_direct_ = {
		{&rna_RenderLayer_use_pass_subsurface_indirect, 	&rna_RenderLayer_use_pass_transmission_color,
		-1, "use_pass_subsurface_direct", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subsurface Direct",
		"Deliver subsurface direct pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_subsurface_direct_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_subsurface_indirect_ = {
		{&rna_RenderLayer_use_pass_subsurface_color, 	&rna_RenderLayer_use_pass_subsurface_direct,
		-1, "use_pass_subsurface_indirect", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subsurface Indirect",
		"Deliver subsurface indirect pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_subsurface_indirect_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_use_pass_subsurface_color_ = {
		{&rna_RenderLayer_passes, 	&rna_RenderLayer_use_pass_subsurface_indirect,
		-1, "use_pass_subsurface_color", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subsurface Color",
		"Deliver subsurface color pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderLayer_use_pass_subsurface_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RenderLayer_passes_ = {
		{nullptr, 	&rna_RenderLayer_use_pass_subsurface_color,
		-1, "passes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "passes",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_RenderPasses},
		RenderLayer_passes_begin, RenderLayer_passes_next, RenderLayer_passes_end, RenderLayer_passes_get, nullptr, RenderLayer_passes_lookup_int, nullptr, nullptr, RNA_RenderPass
	};

	StructRNA *srna = RNA_RenderLayer;
	srna->cont.properties = {&rna_RenderLayer_rna_properties, &rna_RenderLayer_passes};
	srna->identifier = "RenderLayer";
	srna->flag = 516;
	srna->name = "Render Layer";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_RenderLayer_name;
	srna->iteratorproperty = &rna_RenderLayer_rna_properties;
	{
	rna_RenderLayer_load_from_file_filepath_ = {
		{&rna_RenderLayer_load_from_file_x, 	nullptr,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "File Path",
		"File path to load into this render tile, must be no smaller than the renderlayer",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_RenderLayer_load_from_file_x_ = {
		{&rna_RenderLayer_load_from_file_y, 	&rna_RenderLayer_load_from_file_filepath,
		-1, "x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Offset X",
		"Offset the position to copy from if the image is larger than the render layer",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RenderLayer_load_from_file_y_ = {
		{nullptr, 	&rna_RenderLayer_load_from_file_x,
		-1, "y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Offset Y",
		"Offset the position to copy from if the image is larger than the render layer",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderLayer_load_from_file_filepath, &rna_RenderLayer_load_from_file_y};
		func->identifier = "load_from_file";
		func->flag = 16;
		func->description = "Copies the pixels of this renderlayer from an image file";
		func->call = RenderLayer_load_from_file_call;
		rna_RenderLayer_load_from_file_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Render Passes */
static CollectionPropertyRNA rna_RenderPasses_rna_properties_;
PropertyRNA &rna_RenderPasses_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RenderPasses_rna_properties_);

static PointerPropertyRNA rna_RenderPasses_rna_type_;
PropertyRNA &rna_RenderPasses_rna_type = reinterpret_cast<PropertyRNA &>(rna_RenderPasses_rna_type_);

static StringPropertyRNA rna_RenderPasses_find_by_name_name_;
PropertyRNA &rna_RenderPasses_find_by_name_name = reinterpret_cast<PropertyRNA &>(rna_RenderPasses_find_by_name_name_);

static StringPropertyRNA rna_RenderPasses_find_by_name_view_;
PropertyRNA &rna_RenderPasses_find_by_name_view = reinterpret_cast<PropertyRNA &>(rna_RenderPasses_find_by_name_view_);

static PointerPropertyRNA rna_RenderPasses_find_by_name_render_pass_;
PropertyRNA &rna_RenderPasses_find_by_name_render_pass = reinterpret_cast<PropertyRNA &>(rna_RenderPasses_find_by_name_render_pass_);

FunctionRNA *rna_RenderPasses_find_by_name_func;
StructRNA *RNA_RenderPasses;
void register_struct_RenderPasses(BlenderRNA &brna)
{
	rna_RenderPasses_rna_properties_ = {
		{&rna_RenderPasses_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderPasses_rna_properties_begin, RenderPasses_rna_properties_next, RenderPasses_rna_properties_end, RenderPasses_rna_properties_get, nullptr, nullptr, RenderPasses_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RenderPasses_rna_type_ = {
		{nullptr, 	&rna_RenderPasses_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderPasses_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_RenderPasses;
	srna->cont.properties = {&rna_RenderPasses_rna_properties, &rna_RenderPasses_rna_type};
	srna->identifier = "RenderPasses";
	srna->flag = 516;
	srna->name = "Render Passes";
	srna->description = "Collection of render passes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RenderPasses_rna_properties;
	{
	rna_RenderPasses_find_by_name_name_ = {
		{&rna_RenderPasses_find_by_name_view, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Pass",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Combined"
	};
	rna_RenderPasses_find_by_name_view_ = {
		{&rna_RenderPasses_find_by_name_render_pass, 	&rna_RenderPasses_find_by_name_name,
		-1, "view", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "View",
		"Render view to get pass from",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_RenderPasses_find_by_name_render_pass_ = {
		{nullptr, 	&rna_RenderPasses_find_by_name_view,
		-1, "render_pass", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The matching render pass",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_RenderPass
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RenderPasses_find_by_name_name, &rna_RenderPasses_find_by_name_render_pass};
		func->identifier = "find_by_name";
		func->description = "Get the render pass for a given name and view";
		func->call = RenderPasses_find_by_name_call;
		func->c_ret = &rna_RenderPasses_find_by_name_render_pass;
		rna_RenderPasses_find_by_name_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Render Pass */
static CollectionPropertyRNA rna_RenderPass_rna_properties_;
PropertyRNA &rna_RenderPass_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RenderPass_rna_properties_);

static PointerPropertyRNA rna_RenderPass_rna_type_;
PropertyRNA &rna_RenderPass_rna_type = reinterpret_cast<PropertyRNA &>(rna_RenderPass_rna_type_);

static StringPropertyRNA rna_RenderPass_fullname_;
PropertyRNA &rna_RenderPass_fullname = reinterpret_cast<PropertyRNA &>(rna_RenderPass_fullname_);

static StringPropertyRNA rna_RenderPass_name_;
PropertyRNA &rna_RenderPass_name = reinterpret_cast<PropertyRNA &>(rna_RenderPass_name_);

static StringPropertyRNA rna_RenderPass_channel_id_;
PropertyRNA &rna_RenderPass_channel_id = reinterpret_cast<PropertyRNA &>(rna_RenderPass_channel_id_);

static IntPropertyRNA rna_RenderPass_channels_;
PropertyRNA &rna_RenderPass_channels = reinterpret_cast<PropertyRNA &>(rna_RenderPass_channels_);

static FloatPropertyRNA rna_RenderPass_rect_;
PropertyRNA &rna_RenderPass_rect = reinterpret_cast<PropertyRNA &>(rna_RenderPass_rect_);

static IntPropertyRNA rna_RenderPass_view_id_;
PropertyRNA &rna_RenderPass_view_id = reinterpret_cast<PropertyRNA &>(rna_RenderPass_view_id_);

StructRNA *RNA_RenderPass;
void register_struct_RenderPass(BlenderRNA &brna)
{
	rna_RenderPass_rna_properties_ = {
		{&rna_RenderPass_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderPass_rna_properties_begin, RenderPass_rna_properties_next, RenderPass_rna_properties_end, RenderPass_rna_properties_get, nullptr, nullptr, RenderPass_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RenderPass_rna_type_ = {
		{&rna_RenderPass_fullname, 	&rna_RenderPass_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderPass_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RenderPass_fullname_ = {
		{&rna_RenderPass_name, 	&rna_RenderPass_rna_type,
		-1, "fullname", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "fullname",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderPass_fullname_get, RenderPass_fullname_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_RenderPass_name_ = {
		{&rna_RenderPass_channel_id, 	&rna_RenderPass_fullname,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderPass_name_get, RenderPass_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_RenderPass_channel_id_ = {
		{&rna_RenderPass_channels, 	&rna_RenderPass_name,
		-1, "channel_id", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "channel_id",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderPass_channel_id_get, RenderPass_channel_id_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_RenderPass_channels_ = {
		{&rna_RenderPass_rect, 	&rna_RenderPass_channel_id,
		-1, "channels", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "channels",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderPass_channels_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_RenderPass_rect_ = {
		{&rna_RenderPass_view_id, 	&rna_RenderPass_channels,
		-1, "rect", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "rect",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_RenderPass_rect_get_length, 2, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, RenderPass_rect_get, RenderPass_rect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_RenderPass_view_id_ = {
		{nullptr, 	&rna_RenderPass_rect,
		-1, "view_id", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "view_id",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RenderPass_view_id_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_RenderPass;
	srna->cont.properties = {&rna_RenderPass_rna_properties, &rna_RenderPass_view_id};
	srna->identifier = "RenderPass";
	srna->flag = 516;
	srna->name = "Render Pass";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_RenderPass_name;
	srna->iteratorproperty = &rna_RenderPass_rna_properties;
};


}  // namespace blender
