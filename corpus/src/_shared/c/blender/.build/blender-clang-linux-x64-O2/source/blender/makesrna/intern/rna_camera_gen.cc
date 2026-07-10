
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

#include "rna_camera.cc"
#include "rna_camera_api.cc"

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

extern PropertyRNA &rna_Camera_type;
extern PropertyRNA &rna_Camera_sensor_fit;
extern PropertyRNA &rna_Camera_passepartout_alpha;
extern PropertyRNA &rna_Camera_angle_x;
extern PropertyRNA &rna_Camera_angle_y;
extern PropertyRNA &rna_Camera_angle;
extern PropertyRNA &rna_Camera_clip_start;
extern PropertyRNA &rna_Camera_clip_end;
extern PropertyRNA &rna_Camera_lens;
extern PropertyRNA &rna_Camera_sensor_width;
extern PropertyRNA &rna_Camera_sensor_height;
extern PropertyRNA &rna_Camera_ortho_scale;
extern PropertyRNA &rna_Camera_display_size;
extern PropertyRNA &rna_Camera_shift_x;
extern PropertyRNA &rna_Camera_shift_y;
extern PropertyRNA &rna_Camera_stereo;
extern PropertyRNA &rna_Camera_show_limits;
extern PropertyRNA &rna_Camera_show_mist;
extern PropertyRNA &rna_Camera_show_passepartout;
extern PropertyRNA &rna_Camera_show_safe_areas;
extern PropertyRNA &rna_Camera_show_safe_center;
extern PropertyRNA &rna_Camera_show_name;
extern PropertyRNA &rna_Camera_show_sensor;
extern PropertyRNA &rna_Camera_show_background_images;
extern PropertyRNA &rna_Camera_lens_unit;
extern PropertyRNA &rna_Camera_composition_guide_color;
extern PropertyRNA &rna_Camera_show_composition_center;
extern PropertyRNA &rna_Camera_show_composition_center_diagonal;
extern PropertyRNA &rna_Camera_show_composition_thirds;
extern PropertyRNA &rna_Camera_show_composition_golden;
extern PropertyRNA &rna_Camera_show_composition_golden_tria_a;
extern PropertyRNA &rna_Camera_show_composition_golden_tria_b;
extern PropertyRNA &rna_Camera_show_composition_harmony_tri_a;
extern PropertyRNA &rna_Camera_show_composition_harmony_tri_b;
extern PropertyRNA &rna_Camera_panorama_type;
extern PropertyRNA &rna_Camera_fisheye_fov;
extern PropertyRNA &rna_Camera_fisheye_lens;
extern PropertyRNA &rna_Camera_latitude_min;
extern PropertyRNA &rna_Camera_latitude_max;
extern PropertyRNA &rna_Camera_longitude_min;
extern PropertyRNA &rna_Camera_longitude_max;
extern PropertyRNA &rna_Camera_fisheye_polynomial_k0;
extern PropertyRNA &rna_Camera_fisheye_polynomial_k1;
extern PropertyRNA &rna_Camera_fisheye_polynomial_k2;
extern PropertyRNA &rna_Camera_fisheye_polynomial_k3;
extern PropertyRNA &rna_Camera_fisheye_polynomial_k4;
extern PropertyRNA &rna_Camera_central_cylindrical_range_u_min;
extern PropertyRNA &rna_Camera_central_cylindrical_range_u_max;
extern PropertyRNA &rna_Camera_central_cylindrical_range_v_min;
extern PropertyRNA &rna_Camera_central_cylindrical_range_v_max;
extern PropertyRNA &rna_Camera_central_cylindrical_radius;
extern PropertyRNA &rna_Camera_custom_filepath;
extern PropertyRNA &rna_Camera_custom_shader;
extern PropertyRNA &rna_Camera_custom_mode;
extern PropertyRNA &rna_Camera_custom_bytecode;
extern PropertyRNA &rna_Camera_custom_bytecode_hash;
extern PropertyRNA &rna_Camera_dof;
extern PropertyRNA &rna_Camera_background_images;
extern PropertyRNA &rna_Camera_animation_data;

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


extern FunctionRNA *rna_Camera_view_frame_func;
extern PropertyRNA &rna_Camera_view_frame_scene;
extern PropertyRNA &rna_Camera_view_frame_result_1;
extern PropertyRNA &rna_Camera_view_frame_result_2;
extern PropertyRNA &rna_Camera_view_frame_result_3;
extern PropertyRNA &rna_Camera_view_frame_result_4;



extern PropertyRNA &rna_CameraBackgroundImage_rna_properties;
extern PropertyRNA &rna_CameraBackgroundImage_rna_type;
extern PropertyRNA &rna_CameraBackgroundImage_is_override_data;
extern PropertyRNA &rna_CameraBackgroundImage_source;
extern PropertyRNA &rna_CameraBackgroundImage_image;
extern PropertyRNA &rna_CameraBackgroundImage_clip;
extern PropertyRNA &rna_CameraBackgroundImage_image_user;
extern PropertyRNA &rna_CameraBackgroundImage_clip_user;
extern PropertyRNA &rna_CameraBackgroundImage_offset;
extern PropertyRNA &rna_CameraBackgroundImage_scale;
extern PropertyRNA &rna_CameraBackgroundImage_rotation;
extern PropertyRNA &rna_CameraBackgroundImage_use_flip_x;
extern PropertyRNA &rna_CameraBackgroundImage_use_flip_y;
extern PropertyRNA &rna_CameraBackgroundImage_alpha;
extern PropertyRNA &rna_CameraBackgroundImage_show_expanded;
extern PropertyRNA &rna_CameraBackgroundImage_use_camera_clip;
extern PropertyRNA &rna_CameraBackgroundImage_show_background_image;
extern PropertyRNA &rna_CameraBackgroundImage_show_on_foreground;
extern PropertyRNA &rna_CameraBackgroundImage_display_depth;
extern PropertyRNA &rna_CameraBackgroundImage_frame_method;


extern PropertyRNA &rna_CameraBackgroundImages_rna_properties;
extern PropertyRNA &rna_CameraBackgroundImages_rna_type;

extern FunctionRNA *rna_CameraBackgroundImages_new_func;
extern PropertyRNA &rna_CameraBackgroundImages_new_image;

extern FunctionRNA *rna_CameraBackgroundImages_remove_func;
extern PropertyRNA &rna_CameraBackgroundImages_remove_image;

extern FunctionRNA *rna_CameraBackgroundImages_clear_func;


extern PropertyRNA &rna_CameraStereoData_rna_properties;
extern PropertyRNA &rna_CameraStereoData_rna_type;
extern PropertyRNA &rna_CameraStereoData_convergence_mode;
extern PropertyRNA &rna_CameraStereoData_pivot;
extern PropertyRNA &rna_CameraStereoData_interocular_distance;
extern PropertyRNA &rna_CameraStereoData_convergence_distance;
extern PropertyRNA &rna_CameraStereoData_use_spherical_stereo;
extern PropertyRNA &rna_CameraStereoData_use_pole_merge;
extern PropertyRNA &rna_CameraStereoData_pole_merge_angle_from;
extern PropertyRNA &rna_CameraStereoData_pole_merge_angle_to;


extern PropertyRNA &rna_CameraDOFSettings_rna_properties;
extern PropertyRNA &rna_CameraDOFSettings_rna_type;
extern PropertyRNA &rna_CameraDOFSettings_use_dof;
extern PropertyRNA &rna_CameraDOFSettings_focus_object;
extern PropertyRNA &rna_CameraDOFSettings_focus_subtarget;
extern PropertyRNA &rna_CameraDOFSettings_focus_distance;
extern PropertyRNA &rna_CameraDOFSettings_aperture_fstop;
extern PropertyRNA &rna_CameraDOFSettings_aperture_blades;
extern PropertyRNA &rna_CameraDOFSettings_aperture_rotation;
extern PropertyRNA &rna_CameraDOFSettings_aperture_ratio;

int Camera_type_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (int)(data->type);
}

void Camera_type_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

int Camera_sensor_fit_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (int)(data->sensor_fit);
}

void Camera_sensor_fit_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
    data->sensor_fit = (std::remove_reference_t<decltype(data->sensor_fit)>)value;
}

float Camera_passepartout_alpha_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->passepartalpha);
}

void Camera_passepartout_alpha_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->passepartalpha = (std::remove_reference_t<decltype(data->passepartalpha)>)std::clamp(value, 0.0f, 1.0f);
}

float Camera_angle_x_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Camera_angle_x_get;
    return fn(ptr);
}

void Camera_angle_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Camera_angle_x_set;
    fn(ptr, value);
}

float Camera_angle_y_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Camera_angle_y_get;
    return fn(ptr);
}

void Camera_angle_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Camera_angle_y_set;
    fn(ptr, value);
}

float Camera_angle_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Camera_angle_get;
    return fn(ptr);
}

void Camera_angle_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Camera_angle_set;
    fn(ptr, value);
}

float Camera_clip_start_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->clip_start);
}

void Camera_clip_start_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->clip_start = (std::remove_reference_t<decltype(data->clip_start)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

float Camera_clip_end_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->clip_end);
}

void Camera_clip_end_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->clip_end = (std::remove_reference_t<decltype(data->clip_end)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

float Camera_lens_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->lens);
}

void Camera_lens_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->lens = (std::remove_reference_t<decltype(data->lens)>)std::clamp(value, 1.0f, FLT_MAX);
}

float Camera_sensor_width_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->sensor_x);
}

void Camera_sensor_width_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->sensor_x = (std::remove_reference_t<decltype(data->sensor_x)>)std::clamp(value, 1.0f, FLT_MAX);
}

float Camera_sensor_height_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->sensor_y);
}

void Camera_sensor_height_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->sensor_y = (std::remove_reference_t<decltype(data->sensor_y)>)std::clamp(value, 1.0f, FLT_MAX);
}

float Camera_ortho_scale_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->ortho_scale);
}

void Camera_ortho_scale_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->ortho_scale = (std::remove_reference_t<decltype(data->ortho_scale)>)std::clamp(value, 0.0000000000f, FLT_MAX);
}

float Camera_display_size_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->drawsize);
}

void Camera_display_size_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->drawsize = (std::remove_reference_t<decltype(data->drawsize)>)std::clamp(value, 0.0099999998f, 1000.0f);
}

float Camera_shift_x_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->shiftx);
}

void Camera_shift_x_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->shiftx = (std::remove_reference_t<decltype(data->shiftx)>)value;
}

float Camera_shift_y_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->shifty);
}

void Camera_shift_y_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->shifty = (std::remove_reference_t<decltype(data->shifty)>)value;
}

PointerRNA Camera_stereo_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CameraStereoData, &data->stereo);
}

bool Camera_show_limits_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void Camera_show_limits_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool Camera_show_mist_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void Camera_show_mist_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool Camera_show_passepartout_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void Camera_show_passepartout_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool Camera_show_safe_areas_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void Camera_show_safe_areas_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool Camera_show_safe_center_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void Camera_show_safe_center_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool Camera_show_name_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void Camera_show_name_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool Camera_show_sensor_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void Camera_show_sensor_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool Camera_show_background_images_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void Camera_show_background_images_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

int Camera_lens_unit_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (uint64_t(data->flag) & 32);
}

void Camera_lens_unit_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

void Camera_composition_guide_color_get(PointerRNA *ptr, float values[4])
{
    Camera *data = (Camera *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->composition_guide_color)[i]);
    }
}

void Camera_composition_guide_color_set(PointerRNA *ptr, const float values[4])
{
    Camera *data = (Camera *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->composition_guide_color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

bool Camera_show_composition_center_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->composition_guide_flags) & 1) != 0);
}

void Camera_show_composition_center_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) | 1); }
    else { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) & ~uint64_t(1)); }
}

bool Camera_show_composition_center_diagonal_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->composition_guide_flags) & 2) != 0);
}

void Camera_show_composition_center_diagonal_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) | 2); }
    else { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) & ~uint64_t(2)); }
}

bool Camera_show_composition_thirds_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->composition_guide_flags) & 4) != 0);
}

void Camera_show_composition_thirds_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) | 4); }
    else { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) & ~uint64_t(4)); }
}

bool Camera_show_composition_golden_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->composition_guide_flags) & 8) != 0);
}

void Camera_show_composition_golden_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) | 8); }
    else { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) & ~uint64_t(8)); }
}

bool Camera_show_composition_golden_tria_a_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->composition_guide_flags) & 16) != 0);
}

void Camera_show_composition_golden_tria_a_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) | 16); }
    else { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) & ~uint64_t(16)); }
}

bool Camera_show_composition_golden_tria_b_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->composition_guide_flags) & 32) != 0);
}

void Camera_show_composition_golden_tria_b_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) | 32); }
    else { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) & ~uint64_t(32)); }
}

bool Camera_show_composition_harmony_tri_a_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->composition_guide_flags) & 64) != 0);
}

void Camera_show_composition_harmony_tri_a_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) | 64); }
    else { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) & ~uint64_t(64)); }
}

bool Camera_show_composition_harmony_tri_b_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((uint64_t(data->composition_guide_flags) & 128) != 0);
}

void Camera_show_composition_harmony_tri_b_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) | 128); }
    else { data->composition_guide_flags = std::remove_reference_t<decltype(data->composition_guide_flags)>(uint64_t(data->composition_guide_flags) & ~uint64_t(128)); }
}

int Camera_panorama_type_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (int)(data->panorama_type);
}

void Camera_panorama_type_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
    data->panorama_type = (std::remove_reference_t<decltype(data->panorama_type)>)value;
}

float Camera_fisheye_fov_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_fov);
}

void Camera_fisheye_fov_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->fisheye_fov = (std::remove_reference_t<decltype(data->fisheye_fov)>)std::clamp(value, 0.1745000035f, 31.4159259796f);
}

float Camera_fisheye_lens_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_lens);
}

void Camera_fisheye_lens_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->fisheye_lens = (std::remove_reference_t<decltype(data->fisheye_lens)>)std::clamp(value, 0.0099999998f, 100.0f);
}

float Camera_latitude_min_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->latitude_min);
}

void Camera_latitude_min_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->latitude_min = (std::remove_reference_t<decltype(data->latitude_min)>)std::clamp(value, -1.5707963705f, 1.5707963705f);
}

float Camera_latitude_max_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->latitude_max);
}

void Camera_latitude_max_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->latitude_max = (std::remove_reference_t<decltype(data->latitude_max)>)std::clamp(value, -1.5707963705f, 1.5707963705f);
}

float Camera_longitude_min_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->longitude_min);
}

void Camera_longitude_min_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->longitude_min = (std::remove_reference_t<decltype(data->longitude_min)>)value;
}

float Camera_longitude_max_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->longitude_max);
}

void Camera_longitude_max_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->longitude_max = (std::remove_reference_t<decltype(data->longitude_max)>)value;
}

float Camera_fisheye_polynomial_k0_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_polynomial_k0);
}

void Camera_fisheye_polynomial_k0_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->fisheye_polynomial_k0 = (std::remove_reference_t<decltype(data->fisheye_polynomial_k0)>)value;
}

float Camera_fisheye_polynomial_k1_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_polynomial_k1);
}

void Camera_fisheye_polynomial_k1_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->fisheye_polynomial_k1 = (std::remove_reference_t<decltype(data->fisheye_polynomial_k1)>)value;
}

float Camera_fisheye_polynomial_k2_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_polynomial_k2);
}

void Camera_fisheye_polynomial_k2_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->fisheye_polynomial_k2 = (std::remove_reference_t<decltype(data->fisheye_polynomial_k2)>)value;
}

float Camera_fisheye_polynomial_k3_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_polynomial_k3);
}

void Camera_fisheye_polynomial_k3_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->fisheye_polynomial_k3 = (std::remove_reference_t<decltype(data->fisheye_polynomial_k3)>)value;
}

float Camera_fisheye_polynomial_k4_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_polynomial_k4);
}

void Camera_fisheye_polynomial_k4_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->fisheye_polynomial_k4 = (std::remove_reference_t<decltype(data->fisheye_polynomial_k4)>)value;
}

float Camera_central_cylindrical_range_u_min_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->central_cylindrical_range_u_min);
}

void Camera_central_cylindrical_range_u_min_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->central_cylindrical_range_u_min = (std::remove_reference_t<decltype(data->central_cylindrical_range_u_min)>)value;
}

float Camera_central_cylindrical_range_u_max_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->central_cylindrical_range_u_max);
}

void Camera_central_cylindrical_range_u_max_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->central_cylindrical_range_u_max = (std::remove_reference_t<decltype(data->central_cylindrical_range_u_max)>)value;
}

float Camera_central_cylindrical_range_v_min_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->central_cylindrical_range_v_min);
}

void Camera_central_cylindrical_range_v_min_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->central_cylindrical_range_v_min = (std::remove_reference_t<decltype(data->central_cylindrical_range_v_min)>)value;
}

float Camera_central_cylindrical_range_v_max_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->central_cylindrical_range_v_max);
}

void Camera_central_cylindrical_range_v_max_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->central_cylindrical_range_v_max = (std::remove_reference_t<decltype(data->central_cylindrical_range_v_max)>)value;
}

float Camera_central_cylindrical_radius_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->central_cylindrical_radius);
}

void Camera_central_cylindrical_radius_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->central_cylindrical_radius = (std::remove_reference_t<decltype(data->central_cylindrical_radius)>)std::clamp(value, 0.0000100000f, FLT_MAX);
}

void Camera_custom_filepath_get(PointerRNA *ptr, char *value)
{
    Camera *data = (Camera *)(ptr->data);
    BLI_assert(strlen(data->custom_filepath) < 1024);
    strcpy(value, data->custom_filepath);
}

int Camera_custom_filepath_length(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return strlen(data->custom_filepath);
}

void Camera_custom_filepath_set(PointerRNA *ptr, const char *value)
{
    Camera *data = (Camera *)(ptr->data);
    BLI_strncpy(data->custom_filepath, value, 1024);
}

PointerRNA Camera_custom_shader_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Text, data->custom_shader);
}

void Camera_custom_shader_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Camera *data = (Camera *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->custom_shader) {
        id_us_min((ID *)data->custom_shader);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->custom_shader = value.data;
}

int Camera_custom_mode_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (int)(data->custom_mode);
}

void Camera_custom_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Camera_custom_mode_set;
    fn(ptr, value);
}

void Camera_custom_bytecode_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Camera_custom_bytecode_get;
    fn(ptr, value);
}

int Camera_custom_bytecode_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Camera_custom_bytecode_length;
    return fn(ptr);
}

void Camera_custom_bytecode_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Camera_custom_bytecode_set;
    fn(ptr, value);
}

void Camera_custom_bytecode_hash_get(PointerRNA *ptr, char *value)
{
    Camera *data = (Camera *)(ptr->data);
    BLI_assert(strlen(data->custom_bytecode_hash) < 64);
    strcpy(value, data->custom_bytecode_hash);
}

int Camera_custom_bytecode_hash_length(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return strlen(data->custom_bytecode_hash);
}

void Camera_custom_bytecode_hash_set(PointerRNA *ptr, const char *value)
{
    Camera *data = (Camera *)(ptr->data);
    BLI_strncpy_utf8(data->custom_bytecode_hash, value, 64);
}

PointerRNA Camera_dof_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CameraDOFSettings, &data->dof);
}

static PointerRNA Camera_background_images_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CameraBackgroundImage, rna_iterator_listbase_get(iter));
}

void Camera_background_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Camera_background_images;

    rna_iterator_listbase_begin(iter, ptr, &data->bg_images, nullptr);

    if (iter->valid) {
        iter->ptr = Camera_background_images_get(iter);
    }
}

void Camera_background_images_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Camera_background_images_get(iter);
    }
}

void Camera_background_images_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Camera_background_images_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Camera_background_images_begin(&iter, ptr);

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
        if (found) { *r_ptr = Camera_background_images_get(&iter); }
    }

    Camera_background_images_end(&iter);

    return found;
}

PointerRNA Camera_animation_data_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA CameraBackgroundImage_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CameraBackgroundImage_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CameraBackgroundImage_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImage_rna_properties_get(iter);
    }
}

void CameraBackgroundImage_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImage_rna_properties_get(iter);
    }
}

void CameraBackgroundImage_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CameraBackgroundImage_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CameraBackgroundImage_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool CameraBackgroundImage_is_override_data_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return !((uint64_t(data->flag) & 512) != 0);
}

int CameraBackgroundImage_source_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (int)(data->source);
}

void CameraBackgroundImage_source_set(PointerRNA *ptr, int value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->source = (std::remove_reference_t<decltype(data->source)>)value;
}

PointerRNA CameraBackgroundImage_image_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Image, data->ima);
}

void CameraBackgroundImage_image_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
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

PointerRNA CameraBackgroundImage_clip_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieClip, data->clip);
}

void CameraBackgroundImage_clip_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->clip) {
        id_us_min((ID *)data->clip);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->clip = value.data;
}

PointerRNA CameraBackgroundImage_image_user_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ImageUser, &data->iuser);
}

PointerRNA CameraBackgroundImage_clip_user_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieClipUser, &data->cuser);
}

void CameraBackgroundImage_offset_get(PointerRNA *ptr, float values[2])
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->offset)[i]);
    }
}

void CameraBackgroundImage_offset_set(PointerRNA *ptr, const float values[2])
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->offset)[i] = values[i];
    }
}

float CameraBackgroundImage_scale_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (float)(data->scale);
}

void CameraBackgroundImage_scale_set(PointerRNA *ptr, float value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->scale = (std::remove_reference_t<decltype(data->scale)>)std::clamp(value, 0.0f, FLT_MAX);
}

float CameraBackgroundImage_rotation_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (float)(data->rotation);
}

void CameraBackgroundImage_rotation_set(PointerRNA *ptr, float value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->rotation = (std::remove_reference_t<decltype(data->rotation)>)value;
}

bool CameraBackgroundImage_use_flip_x_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void CameraBackgroundImage_use_flip_x_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool CameraBackgroundImage_use_flip_y_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void CameraBackgroundImage_use_flip_y_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

float CameraBackgroundImage_alpha_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (float)(data->alpha);
}

void CameraBackgroundImage_alpha_set(PointerRNA *ptr, float value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)std::clamp(value, 0.0f, 1.0f);
}

bool CameraBackgroundImage_show_expanded_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void CameraBackgroundImage_show_expanded_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool CameraBackgroundImage_use_camera_clip_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void CameraBackgroundImage_use_camera_clip_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool CameraBackgroundImage_show_background_image_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return !((uint64_t(data->flag) & 8) != 0);
}

void CameraBackgroundImage_show_background_image_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool CameraBackgroundImage_show_on_foreground_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void CameraBackgroundImage_show_on_foreground_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int CameraBackgroundImage_display_depth_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (uint64_t(data->flag) & 16);
}

void CameraBackgroundImage_display_depth_set(PointerRNA *ptr, int value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

int CameraBackgroundImage_frame_method_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (uint64_t(data->flag) & 96);
}

void CameraBackgroundImage_frame_method_set(PointerRNA *ptr, int value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(96));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

static PointerRNA CameraBackgroundImages_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CameraBackgroundImages_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CameraBackgroundImages_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImages_rna_properties_get(iter);
    }
}

void CameraBackgroundImages_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImages_rna_properties_get(iter);
    }
}

void CameraBackgroundImages_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CameraBackgroundImages_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CameraBackgroundImages_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA CameraStereoData_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CameraStereoData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CameraStereoData_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraStereoData_rna_properties_get(iter);
    }
}

void CameraStereoData_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CameraStereoData_rna_properties_get(iter);
    }
}

void CameraStereoData_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CameraStereoData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CameraStereoData_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int CameraStereoData_convergence_mode_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (int)(data->convergence_mode);
}

void CameraStereoData_convergence_mode_set(PointerRNA *ptr, int value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->convergence_mode = (std::remove_reference_t<decltype(data->convergence_mode)>)value;
}

int CameraStereoData_pivot_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (int)(data->pivot);
}

void CameraStereoData_pivot_set(PointerRNA *ptr, int value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->pivot = (std::remove_reference_t<decltype(data->pivot)>)value;
}

float CameraStereoData_interocular_distance_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->interocular_distance);
}

void CameraStereoData_interocular_distance_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->interocular_distance = (std::remove_reference_t<decltype(data->interocular_distance)>)std::clamp(value, 0.0f, FLT_MAX);
}

float CameraStereoData_convergence_distance_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->convergence_distance);
}

void CameraStereoData_convergence_distance_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->convergence_distance = (std::remove_reference_t<decltype(data->convergence_distance)>)std::clamp(value, 0.0000100000f, FLT_MAX);
}

bool CameraStereoData_use_spherical_stereo_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CameraStereoData_use_spherical_stereo_set(PointerRNA *ptr, bool value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool CameraStereoData_use_pole_merge_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void CameraStereoData_use_pole_merge_set(PointerRNA *ptr, bool value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

float CameraStereoData_pole_merge_angle_from_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->pole_merge_angle_from);
}

void CameraStereoData_pole_merge_angle_from_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->pole_merge_angle_from = (std::remove_reference_t<decltype(data->pole_merge_angle_from)>)std::clamp(value, 0.0f, 1.5707963705f);
}

float CameraStereoData_pole_merge_angle_to_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->pole_merge_angle_to);
}

void CameraStereoData_pole_merge_angle_to_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->pole_merge_angle_to = (std::remove_reference_t<decltype(data->pole_merge_angle_to)>)std::clamp(value, 0.0f, 1.5707963705f);
}

static PointerRNA CameraDOFSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CameraDOFSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CameraDOFSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraDOFSettings_rna_properties_get(iter);
    }
}

void CameraDOFSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CameraDOFSettings_rna_properties_get(iter);
    }
}

void CameraDOFSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CameraDOFSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CameraDOFSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool CameraDOFSettings_use_dof_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CameraDOFSettings_use_dof_set(PointerRNA *ptr, bool value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

PointerRNA CameraDOFSettings_focus_object_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->focus_object);
}

void CameraDOFSettings_focus_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->focus_object = value.data;
}

void CameraDOFSettings_focus_subtarget_get(PointerRNA *ptr, char *value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    BLI_assert(strlen(data->focus_subtarget) < 64);
    strcpy(value, data->focus_subtarget);
}

int CameraDOFSettings_focus_subtarget_length(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return strlen(data->focus_subtarget);
}

void CameraDOFSettings_focus_subtarget_set(PointerRNA *ptr, const char *value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    BLI_strncpy_utf8(data->focus_subtarget, value, 64);
}

float CameraDOFSettings_focus_distance_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->focus_distance);
}

void CameraDOFSettings_focus_distance_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    data->focus_distance = (std::remove_reference_t<decltype(data->focus_distance)>)std::clamp(value, 0.0f, FLT_MAX);
}

float CameraDOFSettings_aperture_fstop_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->aperture_fstop);
}

void CameraDOFSettings_aperture_fstop_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    data->aperture_fstop = (std::remove_reference_t<decltype(data->aperture_fstop)>)std::clamp(value, 0.0f, FLT_MAX);
}

int CameraDOFSettings_aperture_blades_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (int)(data->aperture_blades);
}

void CameraDOFSettings_aperture_blades_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_CameraDOFSettings_aperture_blades_set;
    fn(ptr, value);
}

float CameraDOFSettings_aperture_rotation_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->aperture_rotation);
}

void CameraDOFSettings_aperture_rotation_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    data->aperture_rotation = (std::remove_reference_t<decltype(data->aperture_rotation)>)std::clamp(value, -3.1415927410f, 3.1415927410f);
}

float CameraDOFSettings_aperture_ratio_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->aperture_ratio);
}

void CameraDOFSettings_aperture_ratio_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    data->aperture_ratio = (std::remove_reference_t<decltype(data->aperture_ratio)>)std::clamp(value, 0.0099999998f, FLT_MAX);
}

void Camera_view_frame_func(Camera *_self, Scene *scene, float result_1[3], float result_2[3], float result_3[3], float result_4[3])
{
	rna_camera_view_frame(_self, scene, result_1, result_2, result_3, result_4);
}

static void Camera_view_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Camera *_self;
	Scene *scene;
	float *result_1;
	float *result_2;
	float *result_3;
	float *result_4;
	char *_data;
	
	_self = (Camera *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((Scene **)_data);
	_data += 8;
	result_1 = ((float *)_data);
	_data += 16;
	result_2 = ((float *)_data);
	_data += 16;
	result_3 = ((float *)_data);
	_data += 16;
	result_4 = ((float *)_data);
	
	rna_camera_view_frame(_self, scene, result_1, result_2, result_3, result_4);
}

/* Repeated prototypes to detect errors */

void rna_camera_view_frame(Camera *_self, Scene *scene, float result_1[3], float result_2[3], float result_3[3], float result_4[3]);


CameraBGImage *CameraBackgroundImages_new_func(Camera *_self)
{
	return rna_Camera_background_images_new(_self);
}

static void CameraBackgroundImages_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Camera *_self;
	CameraBGImage *image;
	char *_data, *_retdata;
	
	_self = (Camera *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	image = rna_Camera_background_images_new(_self);
	*((CameraBGImage **)_retdata) = image;
}

void CameraBackgroundImages_remove_func(Camera *_self, ReportList *reports, PointerRNA *image)
{
	rna_Camera_background_images_remove(_self, reports, image);
}

static void CameraBackgroundImages_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Camera *_self;
	PointerRNA *image;
	char *_data;
	
	_self = (Camera *)_ptr->data;
	_data = (char *)_parms->data;
	image = *((PointerRNA **)_data);
	
	rna_Camera_background_images_remove(_self, reports, image);
}

void CameraBackgroundImages_clear_func(Camera *_self)
{
	rna_Camera_background_images_clear(_self);
}

static void CameraBackgroundImages_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Camera *_self;
	_self = (Camera *)_ptr->data;
	
	rna_Camera_background_images_clear(_self);
}

/* Repeated prototypes to detect errors */

CameraBGImage *rna_Camera_background_images_new(Camera *_self);
void rna_Camera_background_images_remove(Camera *_self, ReportList *reports, PointerRNA *image);
void rna_Camera_background_images_clear(Camera *_self);



/* Camera */
static EnumPropertyRNA rna_Camera_type_;
PropertyRNA &rna_Camera_type = reinterpret_cast<PropertyRNA &>(rna_Camera_type_);

static EnumPropertyRNA rna_Camera_sensor_fit_;
PropertyRNA &rna_Camera_sensor_fit = reinterpret_cast<PropertyRNA &>(rna_Camera_sensor_fit_);

static FloatPropertyRNA rna_Camera_passepartout_alpha_;
PropertyRNA &rna_Camera_passepartout_alpha = reinterpret_cast<PropertyRNA &>(rna_Camera_passepartout_alpha_);

static FloatPropertyRNA rna_Camera_angle_x_;
PropertyRNA &rna_Camera_angle_x = reinterpret_cast<PropertyRNA &>(rna_Camera_angle_x_);

static FloatPropertyRNA rna_Camera_angle_y_;
PropertyRNA &rna_Camera_angle_y = reinterpret_cast<PropertyRNA &>(rna_Camera_angle_y_);

static FloatPropertyRNA rna_Camera_angle_;
PropertyRNA &rna_Camera_angle = reinterpret_cast<PropertyRNA &>(rna_Camera_angle_);

static FloatPropertyRNA rna_Camera_clip_start_;
PropertyRNA &rna_Camera_clip_start = reinterpret_cast<PropertyRNA &>(rna_Camera_clip_start_);

static FloatPropertyRNA rna_Camera_clip_end_;
PropertyRNA &rna_Camera_clip_end = reinterpret_cast<PropertyRNA &>(rna_Camera_clip_end_);

static FloatPropertyRNA rna_Camera_lens_;
PropertyRNA &rna_Camera_lens = reinterpret_cast<PropertyRNA &>(rna_Camera_lens_);

static FloatPropertyRNA rna_Camera_sensor_width_;
PropertyRNA &rna_Camera_sensor_width = reinterpret_cast<PropertyRNA &>(rna_Camera_sensor_width_);

static FloatPropertyRNA rna_Camera_sensor_height_;
PropertyRNA &rna_Camera_sensor_height = reinterpret_cast<PropertyRNA &>(rna_Camera_sensor_height_);

static FloatPropertyRNA rna_Camera_ortho_scale_;
PropertyRNA &rna_Camera_ortho_scale = reinterpret_cast<PropertyRNA &>(rna_Camera_ortho_scale_);

static FloatPropertyRNA rna_Camera_display_size_;
PropertyRNA &rna_Camera_display_size = reinterpret_cast<PropertyRNA &>(rna_Camera_display_size_);

static FloatPropertyRNA rna_Camera_shift_x_;
PropertyRNA &rna_Camera_shift_x = reinterpret_cast<PropertyRNA &>(rna_Camera_shift_x_);

static FloatPropertyRNA rna_Camera_shift_y_;
PropertyRNA &rna_Camera_shift_y = reinterpret_cast<PropertyRNA &>(rna_Camera_shift_y_);

static PointerPropertyRNA rna_Camera_stereo_;
PropertyRNA &rna_Camera_stereo = reinterpret_cast<PropertyRNA &>(rna_Camera_stereo_);

static BoolPropertyRNA rna_Camera_show_limits_;
PropertyRNA &rna_Camera_show_limits = reinterpret_cast<PropertyRNA &>(rna_Camera_show_limits_);

static BoolPropertyRNA rna_Camera_show_mist_;
PropertyRNA &rna_Camera_show_mist = reinterpret_cast<PropertyRNA &>(rna_Camera_show_mist_);

static BoolPropertyRNA rna_Camera_show_passepartout_;
PropertyRNA &rna_Camera_show_passepartout = reinterpret_cast<PropertyRNA &>(rna_Camera_show_passepartout_);

static BoolPropertyRNA rna_Camera_show_safe_areas_;
PropertyRNA &rna_Camera_show_safe_areas = reinterpret_cast<PropertyRNA &>(rna_Camera_show_safe_areas_);

static BoolPropertyRNA rna_Camera_show_safe_center_;
PropertyRNA &rna_Camera_show_safe_center = reinterpret_cast<PropertyRNA &>(rna_Camera_show_safe_center_);

static BoolPropertyRNA rna_Camera_show_name_;
PropertyRNA &rna_Camera_show_name = reinterpret_cast<PropertyRNA &>(rna_Camera_show_name_);

static BoolPropertyRNA rna_Camera_show_sensor_;
PropertyRNA &rna_Camera_show_sensor = reinterpret_cast<PropertyRNA &>(rna_Camera_show_sensor_);

static BoolPropertyRNA rna_Camera_show_background_images_;
PropertyRNA &rna_Camera_show_background_images = reinterpret_cast<PropertyRNA &>(rna_Camera_show_background_images_);

static EnumPropertyRNA rna_Camera_lens_unit_;
PropertyRNA &rna_Camera_lens_unit = reinterpret_cast<PropertyRNA &>(rna_Camera_lens_unit_);

static FloatPropertyRNA rna_Camera_composition_guide_color_;
PropertyRNA &rna_Camera_composition_guide_color = reinterpret_cast<PropertyRNA &>(rna_Camera_composition_guide_color_);

static BoolPropertyRNA rna_Camera_show_composition_center_;
PropertyRNA &rna_Camera_show_composition_center = reinterpret_cast<PropertyRNA &>(rna_Camera_show_composition_center_);

static BoolPropertyRNA rna_Camera_show_composition_center_diagonal_;
PropertyRNA &rna_Camera_show_composition_center_diagonal = reinterpret_cast<PropertyRNA &>(rna_Camera_show_composition_center_diagonal_);

static BoolPropertyRNA rna_Camera_show_composition_thirds_;
PropertyRNA &rna_Camera_show_composition_thirds = reinterpret_cast<PropertyRNA &>(rna_Camera_show_composition_thirds_);

static BoolPropertyRNA rna_Camera_show_composition_golden_;
PropertyRNA &rna_Camera_show_composition_golden = reinterpret_cast<PropertyRNA &>(rna_Camera_show_composition_golden_);

static BoolPropertyRNA rna_Camera_show_composition_golden_tria_a_;
PropertyRNA &rna_Camera_show_composition_golden_tria_a = reinterpret_cast<PropertyRNA &>(rna_Camera_show_composition_golden_tria_a_);

static BoolPropertyRNA rna_Camera_show_composition_golden_tria_b_;
PropertyRNA &rna_Camera_show_composition_golden_tria_b = reinterpret_cast<PropertyRNA &>(rna_Camera_show_composition_golden_tria_b_);

static BoolPropertyRNA rna_Camera_show_composition_harmony_tri_a_;
PropertyRNA &rna_Camera_show_composition_harmony_tri_a = reinterpret_cast<PropertyRNA &>(rna_Camera_show_composition_harmony_tri_a_);

static BoolPropertyRNA rna_Camera_show_composition_harmony_tri_b_;
PropertyRNA &rna_Camera_show_composition_harmony_tri_b = reinterpret_cast<PropertyRNA &>(rna_Camera_show_composition_harmony_tri_b_);

static EnumPropertyRNA rna_Camera_panorama_type_;
PropertyRNA &rna_Camera_panorama_type = reinterpret_cast<PropertyRNA &>(rna_Camera_panorama_type_);

static FloatPropertyRNA rna_Camera_fisheye_fov_;
PropertyRNA &rna_Camera_fisheye_fov = reinterpret_cast<PropertyRNA &>(rna_Camera_fisheye_fov_);

static FloatPropertyRNA rna_Camera_fisheye_lens_;
PropertyRNA &rna_Camera_fisheye_lens = reinterpret_cast<PropertyRNA &>(rna_Camera_fisheye_lens_);

static FloatPropertyRNA rna_Camera_latitude_min_;
PropertyRNA &rna_Camera_latitude_min = reinterpret_cast<PropertyRNA &>(rna_Camera_latitude_min_);

static FloatPropertyRNA rna_Camera_latitude_max_;
PropertyRNA &rna_Camera_latitude_max = reinterpret_cast<PropertyRNA &>(rna_Camera_latitude_max_);

static FloatPropertyRNA rna_Camera_longitude_min_;
PropertyRNA &rna_Camera_longitude_min = reinterpret_cast<PropertyRNA &>(rna_Camera_longitude_min_);

static FloatPropertyRNA rna_Camera_longitude_max_;
PropertyRNA &rna_Camera_longitude_max = reinterpret_cast<PropertyRNA &>(rna_Camera_longitude_max_);

static FloatPropertyRNA rna_Camera_fisheye_polynomial_k0_;
PropertyRNA &rna_Camera_fisheye_polynomial_k0 = reinterpret_cast<PropertyRNA &>(rna_Camera_fisheye_polynomial_k0_);

static FloatPropertyRNA rna_Camera_fisheye_polynomial_k1_;
PropertyRNA &rna_Camera_fisheye_polynomial_k1 = reinterpret_cast<PropertyRNA &>(rna_Camera_fisheye_polynomial_k1_);

static FloatPropertyRNA rna_Camera_fisheye_polynomial_k2_;
PropertyRNA &rna_Camera_fisheye_polynomial_k2 = reinterpret_cast<PropertyRNA &>(rna_Camera_fisheye_polynomial_k2_);

static FloatPropertyRNA rna_Camera_fisheye_polynomial_k3_;
PropertyRNA &rna_Camera_fisheye_polynomial_k3 = reinterpret_cast<PropertyRNA &>(rna_Camera_fisheye_polynomial_k3_);

static FloatPropertyRNA rna_Camera_fisheye_polynomial_k4_;
PropertyRNA &rna_Camera_fisheye_polynomial_k4 = reinterpret_cast<PropertyRNA &>(rna_Camera_fisheye_polynomial_k4_);

static FloatPropertyRNA rna_Camera_central_cylindrical_range_u_min_;
PropertyRNA &rna_Camera_central_cylindrical_range_u_min = reinterpret_cast<PropertyRNA &>(rna_Camera_central_cylindrical_range_u_min_);

static FloatPropertyRNA rna_Camera_central_cylindrical_range_u_max_;
PropertyRNA &rna_Camera_central_cylindrical_range_u_max = reinterpret_cast<PropertyRNA &>(rna_Camera_central_cylindrical_range_u_max_);

static FloatPropertyRNA rna_Camera_central_cylindrical_range_v_min_;
PropertyRNA &rna_Camera_central_cylindrical_range_v_min = reinterpret_cast<PropertyRNA &>(rna_Camera_central_cylindrical_range_v_min_);

static FloatPropertyRNA rna_Camera_central_cylindrical_range_v_max_;
PropertyRNA &rna_Camera_central_cylindrical_range_v_max = reinterpret_cast<PropertyRNA &>(rna_Camera_central_cylindrical_range_v_max_);

static FloatPropertyRNA rna_Camera_central_cylindrical_radius_;
PropertyRNA &rna_Camera_central_cylindrical_radius = reinterpret_cast<PropertyRNA &>(rna_Camera_central_cylindrical_radius_);

static StringPropertyRNA rna_Camera_custom_filepath_;
PropertyRNA &rna_Camera_custom_filepath = reinterpret_cast<PropertyRNA &>(rna_Camera_custom_filepath_);

static PointerPropertyRNA rna_Camera_custom_shader_;
PropertyRNA &rna_Camera_custom_shader = reinterpret_cast<PropertyRNA &>(rna_Camera_custom_shader_);

static EnumPropertyRNA rna_Camera_custom_mode_;
PropertyRNA &rna_Camera_custom_mode = reinterpret_cast<PropertyRNA &>(rna_Camera_custom_mode_);

static StringPropertyRNA rna_Camera_custom_bytecode_;
PropertyRNA &rna_Camera_custom_bytecode = reinterpret_cast<PropertyRNA &>(rna_Camera_custom_bytecode_);

static StringPropertyRNA rna_Camera_custom_bytecode_hash_;
PropertyRNA &rna_Camera_custom_bytecode_hash = reinterpret_cast<PropertyRNA &>(rna_Camera_custom_bytecode_hash_);

static PointerPropertyRNA rna_Camera_dof_;
PropertyRNA &rna_Camera_dof = reinterpret_cast<PropertyRNA &>(rna_Camera_dof_);

static CollectionPropertyRNA rna_Camera_background_images_;
PropertyRNA &rna_Camera_background_images = reinterpret_cast<PropertyRNA &>(rna_Camera_background_images_);

static PointerPropertyRNA rna_Camera_animation_data_;
PropertyRNA &rna_Camera_animation_data = reinterpret_cast<PropertyRNA &>(rna_Camera_animation_data_);

static PointerPropertyRNA rna_Camera_view_frame_scene_;
PropertyRNA &rna_Camera_view_frame_scene = reinterpret_cast<PropertyRNA &>(rna_Camera_view_frame_scene_);

static FloatPropertyRNA rna_Camera_view_frame_result_1_;
PropertyRNA &rna_Camera_view_frame_result_1 = reinterpret_cast<PropertyRNA &>(rna_Camera_view_frame_result_1_);

static FloatPropertyRNA rna_Camera_view_frame_result_2_;
PropertyRNA &rna_Camera_view_frame_result_2 = reinterpret_cast<PropertyRNA &>(rna_Camera_view_frame_result_2_);

static FloatPropertyRNA rna_Camera_view_frame_result_3_;
PropertyRNA &rna_Camera_view_frame_result_3 = reinterpret_cast<PropertyRNA &>(rna_Camera_view_frame_result_3_);

static FloatPropertyRNA rna_Camera_view_frame_result_4_;
PropertyRNA &rna_Camera_view_frame_result_4 = reinterpret_cast<PropertyRNA &>(rna_Camera_view_frame_result_4_);

FunctionRNA *rna_Camera_view_frame_func;
StructRNA *RNA_Camera;
void register_struct_Camera(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_Camera_type_items[5] = {
		{0, "PERSP", 0, "Perspective", ""	},
		{1, "ORTHO", 0, "Orthographic", ""	},
		{2, "PANO", 0, "Panoramic", ""	},
		{3, "CUSTOM", 0, "Custom", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Camera_type_ = {
		{&rna_Camera_sensor_fit, 	nullptr,
		-1, "type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Camera types",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, type), RawPropertyType(2), nullptr},
		Camera_type_get, Camera_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Camera_type_items, 4, 0
	};

	static const EnumPropertyItem rna_Camera_sensor_fit_items[4] = {
		{0, "AUTO", 0, "Auto", "Fit to the sensor width or height depending on image resolution"	},
		{1, "HORIZONTAL", 0, "Horizontal", "Fit to the sensor width"	},
		{2, "VERTICAL", 0, "Vertical", "Fit to the sensor height"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Camera_sensor_fit_ = {
		{&rna_Camera_passepartout_alpha, 	&rna_Camera_type,
		-1, "sensor_fit", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Sensor Fit",
		"Method to fit image and field of view angle inside the sensor",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, sensor_fit), RawPropertyType(2), nullptr},
		Camera_sensor_fit_get, Camera_sensor_fit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Camera_sensor_fit_items, 3, 0
	};

	rna_Camera_passepartout_alpha_ = {
		{&rna_Camera_angle_x, 	&rna_Camera_sensor_fit,
		-1, "passepartout_alpha", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Passepartout Alpha",
		"Opacity (alpha) of the darkened overlay in Camera view",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, passepartalpha), RawPropertyType(5), nullptr},
		Camera_passepartout_alpha_get, Camera_passepartout_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_Camera_angle_x_ = {
		{&rna_Camera_angle_y, 	&rna_Camera_passepartout_alpha,
		-1, "angle_x", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Horizontal FOV",
		"Camera lens horizontal field of view",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_angle_x_get, Camera_angle_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0064053582f, 3.0167491436f, 0.0064053582f, 3.0167491436f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Camera_angle_y_ = {
		{&rna_Camera_angle, 	&rna_Camera_angle_x,
		-1, "angle_y", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertical FOV",
		"Camera lens vertical field of view",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_angle_y_get, Camera_angle_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0064053582f, 3.0167491436f, 0.0064053582f, 3.0167491436f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Camera_angle_ = {
		{&rna_Camera_clip_start, 	&rna_Camera_angle_y,
		-1, "angle", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Field of View",
		"Camera lens field of view",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_angle_get, Camera_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0064053582f, 3.0167491436f, 0.0064053582f, 3.0167491436f, 10.0f, 3, nullptr, nullptr, 0.6911504269f, nullptr
	};

	rna_Camera_clip_start_ = {
		{&rna_Camera_clip_end, 	&rna_Camera_angle,
		-1, "clip_start", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Clip Start",
		"Camera near clipping distance",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, clip_start), RawPropertyType(5), nullptr},
		Camera_clip_start_get, Camera_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_Camera_clip_end_ = {
		{&rna_Camera_lens, 	&rna_Camera_clip_start,
		-1, "clip_end", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Clip End",
		"Camera far clipping distance",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, clip_end), RawPropertyType(5), nullptr},
		Camera_clip_end_get, Camera_clip_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1000.0f, nullptr
	};

	rna_Camera_lens_ = {
		{&rna_Camera_sensor_width, 	&rna_Camera_clip_end,
		-1, "lens", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Focal Length",
		"Perspective Camera focal length value in millimeters",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE_CAMERA) | int(PROP_UNIT_CAMERA)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, lens), RawPropertyType(5), nullptr},
		Camera_lens_get, Camera_lens_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 5000.0f, 1.0f, FLT_MAX, 100.0f, 4, nullptr, nullptr, 50.0f, nullptr
	};

	rna_Camera_sensor_width_ = {
		{&rna_Camera_sensor_height, 	&rna_Camera_lens,
		-1, "sensor_width", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Sensor Width",
		"Horizontal size of the image sensor area in millimeters",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE_CAMERA) | int(PROP_UNIT_CAMERA)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, sensor_x), RawPropertyType(5), nullptr},
		Camera_sensor_width_get, Camera_sensor_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 100.0f, 1.0f, FLT_MAX, 100.0f, 4, nullptr, nullptr, 36.0f, nullptr
	};

	rna_Camera_sensor_height_ = {
		{&rna_Camera_ortho_scale, 	&rna_Camera_sensor_width,
		-1, "sensor_height", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Sensor Height",
		"Vertical size of the image sensor area in millimeters",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE_CAMERA) | int(PROP_UNIT_CAMERA)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, sensor_y), RawPropertyType(5), nullptr},
		Camera_sensor_height_get, Camera_sensor_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 100.0f, 1.0f, FLT_MAX, 100.0f, 4, nullptr, nullptr, 24.0f, nullptr
	};

	rna_Camera_ortho_scale_ = {
		{&rna_Camera_display_size, 	&rna_Camera_sensor_height,
		-1, "ortho_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Orthographic Scale",
		"Orthographic Camera scale (similar to zoom)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, ortho_scale), RawPropertyType(5), nullptr},
		Camera_ortho_scale_get, Camera_ortho_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 10000.0f, 0.0000000000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 6.0f, nullptr
	};

	rna_Camera_display_size_ = {
		{&rna_Camera_shift_x, 	&rna_Camera_ortho_scale,
		-1, "display_size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Display Size",
		"Apparent size of the Camera object in the 3D View",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, drawsize), RawPropertyType(5), nullptr},
		Camera_display_size_get, Camera_display_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 1000.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Camera_shift_x_ = {
		{&rna_Camera_shift_y, 	&rna_Camera_display_size,
		-1, "shift_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shift X",
		"Camera horizontal shift",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, shiftx), RawPropertyType(5), nullptr},
		Camera_shift_x_get, Camera_shift_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Camera_shift_y_ = {
		{&rna_Camera_stereo, 	&rna_Camera_shift_x,
		-1, "shift_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shift Y",
		"Camera vertical shift",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, shifty), RawPropertyType(5), nullptr},
		Camera_shift_y_get, Camera_shift_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Camera_stereo_ = {
		{&rna_Camera_show_limits, 	&rna_Camera_shift_y,
		-1, "stereo", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Stereo",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_stereo_get, nullptr, nullptr, nullptr,RNA_CameraStereoData
	};

	rna_Camera_show_limits_ = {
		{&rna_Camera_show_mist, 	&rna_Camera_stereo,
		-1, "show_limits", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Limits",
		"Display the clipping range and focus point on the camera",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_limits_get, Camera_show_limits_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_mist_ = {
		{&rna_Camera_show_passepartout, 	&rna_Camera_show_limits,
		-1, "show_mist", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Mist",
		"Display a line from the Camera to indicate the mist area",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_mist_get, Camera_show_mist_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_passepartout_ = {
		{&rna_Camera_show_safe_areas, 	&rna_Camera_show_mist,
		-1, "show_passepartout", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Passepartout",
		"Show a darkened overlay outside the image area in Camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_passepartout_get, Camera_show_passepartout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Camera_show_safe_areas_ = {
		{&rna_Camera_show_safe_center, 	&rna_Camera_show_passepartout,
		-1, "show_safe_areas", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Safe Areas",
		"Show TV title safe and action safe areas in Camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_safe_areas_get, Camera_show_safe_areas_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_safe_center_ = {
		{&rna_Camera_show_name, 	&rna_Camera_show_safe_areas,
		-1, "show_safe_center", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Center-Cut Safe Areas",
		"Show safe areas to fit content in a different aspect ratio",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_safe_center_get, Camera_show_safe_center_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_name_ = {
		{&rna_Camera_show_sensor, 	&rna_Camera_show_safe_center,
		-1, "show_name", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Name",
		"Show the active Camera\'s name in Camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_name_get, Camera_show_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_sensor_ = {
		{&rna_Camera_show_background_images, 	&rna_Camera_show_name,
		-1, "show_sensor", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Sensor Size",
		"Show sensor size (film gate) in Camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_sensor_get, Camera_show_sensor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_background_images_ = {
		{&rna_Camera_lens_unit, 	&rna_Camera_show_sensor,
		-1, "show_background_images", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Background Images",
		"Display reference images behind objects in the 3D View",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_background_images_get, Camera_show_background_images_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Camera_lens_unit_items[3] = {
		{0, "MILLIMETERS", 0, "Millimeters", "Specify focal length of the lens in millimeters"	},
		{32, "FOV", 0, "Field of View", "Specify the lens as the field of view\'s angle"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Camera_lens_unit_ = {
		{&rna_Camera_composition_guide_color, 	&rna_Camera_show_background_images,
		-1, "lens_unit", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Lens Unit",
		"Unit to edit lens in for the user interface",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, flag), RawPropertyType(1), nullptr},
		Camera_lens_unit_get, Camera_lens_unit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Camera_lens_unit_items, 2, 0
	};

	static float rna_Camera_composition_guide_color_default[4] = {
		0.5000000000f,
		0.5000000000f,
		0.5000000000f,
		1.0f
	};
	rna_Camera_composition_guide_color_ = {
		{&rna_Camera_show_composition_center, 	&rna_Camera_lens_unit,
		-1, "composition_guide_color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Composition Guide Color",
		"Color and alpha for compositional guide overlays",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, composition_guide_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, Camera_composition_guide_color_get, Camera_composition_guide_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Camera_composition_guide_color_default
	};

	rna_Camera_show_composition_center_ = {
		{&rna_Camera_show_composition_center_diagonal, 	&rna_Camera_composition_guide_color,
		-1, "show_composition_center", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Center",
		"Display center composition guide inside the camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_composition_center_get, Camera_show_composition_center_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_composition_center_diagonal_ = {
		{&rna_Camera_show_composition_thirds, 	&rna_Camera_show_composition_center,
		-1, "show_composition_center_diagonal", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Center Diagonal",
		"Display diagonal center composition guide inside the camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_composition_center_diagonal_get, Camera_show_composition_center_diagonal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_composition_thirds_ = {
		{&rna_Camera_show_composition_golden, 	&rna_Camera_show_composition_center_diagonal,
		-1, "show_composition_thirds", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Thirds",
		"Display rule of thirds composition guide inside the camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_composition_thirds_get, Camera_show_composition_thirds_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_composition_golden_ = {
		{&rna_Camera_show_composition_golden_tria_a, 	&rna_Camera_show_composition_thirds,
		-1, "show_composition_golden", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Golden Ratio",
		"Display golden ratio composition guide inside the camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_composition_golden_get, Camera_show_composition_golden_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_composition_golden_tria_a_ = {
		{&rna_Camera_show_composition_golden_tria_b, 	&rna_Camera_show_composition_golden,
		-1, "show_composition_golden_tria_a", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Golden Triangle A",
		"Display golden triangle A composition guide inside the camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_composition_golden_tria_a_get, Camera_show_composition_golden_tria_a_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_composition_golden_tria_b_ = {
		{&rna_Camera_show_composition_harmony_tri_a, 	&rna_Camera_show_composition_golden_tria_a,
		-1, "show_composition_golden_tria_b", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Golden Triangle B",
		"Display golden triangle B composition guide inside the camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_composition_golden_tria_b_get, Camera_show_composition_golden_tria_b_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_composition_harmony_tri_a_ = {
		{&rna_Camera_show_composition_harmony_tri_b, 	&rna_Camera_show_composition_golden_tria_b,
		-1, "show_composition_harmony_tri_a", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Harmonious Triangle A",
		"Display harmony A composition guide inside the camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_composition_harmony_tri_a_get, Camera_show_composition_harmony_tri_a_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Camera_show_composition_harmony_tri_b_ = {
		{&rna_Camera_panorama_type, 	&rna_Camera_show_composition_harmony_tri_a,
		-1, "show_composition_harmony_tri_b", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Harmonious Triangle B",
		"Display harmony B composition guide inside the camera view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_show_composition_harmony_tri_b_get, Camera_show_composition_harmony_tri_b_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Camera_panorama_type_items[8] = {
		{0, "EQUIRECTANGULAR", 0, "Equirectangular", "Spherical camera for environment maps, also known as Lat Long panorama"	},
		{5, "EQUIANGULAR_CUBEMAP_FACE", 0, "Equiangular Cubemap Face", "Single face of an equiangular cubemap"	},
		{3, "MIRRORBALL", 0, "Mirror Ball", "Mirror ball mapping for environment maps"	},
		{1, "FISHEYE_EQUIDISTANT", 0, "Fisheye Equidistant", "Ideal for fulldomes, ignore the sensor dimensions"	},
		{2, "FISHEYE_EQUISOLID", 0, "Fisheye Equisolid", "Similar to most fisheye modern lens, takes sensor dimensions into consideration"	},
		{4, "FISHEYE_LENS_POLYNOMIAL", 0, "Fisheye Lens Polynomial", "Defines the lens projection as polynomial to allow real world camera lenses to be mimicked"	},
		{6, "CENTRAL_CYLINDRICAL", 0, "Central Cylindrical", "Projection onto a virtual cylinder from its center, similar as a rotating panoramic camera"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Camera_panorama_type_ = {
		{&rna_Camera_fisheye_fov, 	&rna_Camera_show_composition_harmony_tri_b,
		-1, "panorama_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Panorama Type",
		"Distortion to use for the calculation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, panorama_type), RawPropertyType(2), nullptr},
		Camera_panorama_type_get, Camera_panorama_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Camera_panorama_type_items, 7, 2
	};

	rna_Camera_fisheye_fov_ = {
		{&rna_Camera_fisheye_lens, 	&rna_Camera_panorama_type,
		-1, "fisheye_fov", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Field of View",
		"Field of view for the fisheye lens",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, fisheye_fov), RawPropertyType(5), nullptr},
		Camera_fisheye_fov_get, Camera_fisheye_fov_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1745000035f, 6.2831854820f, 0.1745000035f, 31.4159259796f, 3.0f, 2, nullptr, nullptr, 3.1415927410f, nullptr
	};

	rna_Camera_fisheye_lens_ = {
		{&rna_Camera_latitude_min, 	&rna_Camera_fisheye_fov,
		-1, "fisheye_lens", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Fisheye Lens",
		"Lens focal length (mm)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, fisheye_lens), RawPropertyType(5), nullptr},
		Camera_fisheye_lens_get, Camera_fisheye_lens_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 15.0f, 0.0099999998f, 100.0f, 3.0f, 2, nullptr, nullptr, 10.5000000000f, nullptr
	};

	rna_Camera_latitude_min_ = {
		{&rna_Camera_latitude_max, 	&rna_Camera_fisheye_lens,
		-1, "latitude_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Min Latitude",
		"Minimum latitude (vertical angle) for the equirectangular lens",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, latitude_min), RawPropertyType(5), nullptr},
		Camera_latitude_min_get, Camera_latitude_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 3.0f, 2, nullptr, nullptr, -1.5707963705f, nullptr
	};

	rna_Camera_latitude_max_ = {
		{&rna_Camera_longitude_min, 	&rna_Camera_latitude_min,
		-1, "latitude_max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Max Latitude",
		"Maximum latitude (vertical angle) for the equirectangular lens",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, latitude_max), RawPropertyType(5), nullptr},
		Camera_latitude_max_get, Camera_latitude_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 3.0f, 2, nullptr, nullptr, 1.5707963705f, nullptr
	};

	rna_Camera_longitude_min_ = {
		{&rna_Camera_longitude_max, 	&rna_Camera_latitude_max,
		-1, "longitude_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Min Longitude",
		"Minimum longitude (horizontal angle) for the equirectangular lens",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, longitude_min), RawPropertyType(5), nullptr},
		Camera_longitude_min_get, Camera_longitude_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 3.0f, 2, nullptr, nullptr, -3.1415927410f, nullptr
	};

	rna_Camera_longitude_max_ = {
		{&rna_Camera_fisheye_polynomial_k0, 	&rna_Camera_longitude_min,
		-1, "longitude_max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Max Longitude",
		"Maximum longitude (horizontal angle) for the equirectangular lens",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, longitude_max), RawPropertyType(5), nullptr},
		Camera_longitude_max_get, Camera_longitude_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 3.0f, 2, nullptr, nullptr, 3.1415927410f, nullptr
	};

	rna_Camera_fisheye_polynomial_k0_ = {
		{&rna_Camera_fisheye_polynomial_k1, 	&rna_Camera_longitude_max,
		-1, "fisheye_polynomial_k0", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Fisheye Polynomial K0",
		"Coefficient K0 of the lens polynomial",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, fisheye_polynomial_k0), RawPropertyType(5), nullptr},
		Camera_fisheye_polynomial_k0_get, Camera_fisheye_polynomial_k0_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, nullptr, nullptr, -0.0000117351f, nullptr
	};

	rna_Camera_fisheye_polynomial_k1_ = {
		{&rna_Camera_fisheye_polynomial_k2, 	&rna_Camera_fisheye_polynomial_k0,
		-1, "fisheye_polynomial_k1", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Fisheye Polynomial K1",
		"Coefficient K1 of the lens polynomial",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, fisheye_polynomial_k1), RawPropertyType(5), nullptr},
		Camera_fisheye_polynomial_k1_get, Camera_fisheye_polynomial_k1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, nullptr, nullptr, -0.0199887361f, nullptr
	};

	rna_Camera_fisheye_polynomial_k2_ = {
		{&rna_Camera_fisheye_polynomial_k3, 	&rna_Camera_fisheye_polynomial_k1,
		-1, "fisheye_polynomial_k2", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Fisheye Polynomial K2",
		"Coefficient K2 of the lens polynomial",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, fisheye_polynomial_k2), RawPropertyType(5), nullptr},
		Camera_fisheye_polynomial_k2_get, Camera_fisheye_polynomial_k2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, nullptr, nullptr, -0.0000033525f, nullptr
	};

	rna_Camera_fisheye_polynomial_k3_ = {
		{&rna_Camera_fisheye_polynomial_k4, 	&rna_Camera_fisheye_polynomial_k2,
		-1, "fisheye_polynomial_k3", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Fisheye Polynomial K3",
		"Coefficient K3 of the lens polynomial",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, fisheye_polynomial_k3), RawPropertyType(5), nullptr},
		Camera_fisheye_polynomial_k3_get, Camera_fisheye_polynomial_k3_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, nullptr, nullptr, 0.0000030993f, nullptr
	};

	rna_Camera_fisheye_polynomial_k4_ = {
		{&rna_Camera_central_cylindrical_range_u_min, 	&rna_Camera_fisheye_polynomial_k3,
		-1, "fisheye_polynomial_k4", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Fisheye Polynomial K4",
		"Coefficient K4 of the lens polynomial",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, fisheye_polynomial_k4), RawPropertyType(5), nullptr},
		Camera_fisheye_polynomial_k4_get, Camera_fisheye_polynomial_k4_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, nullptr, nullptr, -0.0000000261f, nullptr
	};

	rna_Camera_central_cylindrical_range_u_min_ = {
		{&rna_Camera_central_cylindrical_range_u_max, 	&rna_Camera_fisheye_polynomial_k4,
		-1, "central_cylindrical_range_u_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Min Longitude",
		"Minimum Longitude value for the central cylindrical lens",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, central_cylindrical_range_u_min), RawPropertyType(5), nullptr},
		Camera_central_cylindrical_range_u_min_get, Camera_central_cylindrical_range_u_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 3.0f, 2, nullptr, nullptr, -3.1415927410f, nullptr
	};

	rna_Camera_central_cylindrical_range_u_max_ = {
		{&rna_Camera_central_cylindrical_range_v_min, 	&rna_Camera_central_cylindrical_range_u_min,
		-1, "central_cylindrical_range_u_max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Max Longitude",
		"Maximum Longitude value for the central cylindrical lens",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, central_cylindrical_range_u_max), RawPropertyType(5), nullptr},
		Camera_central_cylindrical_range_u_max_get, Camera_central_cylindrical_range_u_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 3.0f, 2, nullptr, nullptr, 3.1415927410f, nullptr
	};

	rna_Camera_central_cylindrical_range_v_min_ = {
		{&rna_Camera_central_cylindrical_range_v_max, 	&rna_Camera_central_cylindrical_range_u_max,
		-1, "central_cylindrical_range_v_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Min Height",
		"Minimum Height value for the central cylindrical lens",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, central_cylindrical_range_v_min), RawPropertyType(5), nullptr},
		Camera_central_cylindrical_range_v_min_get, Camera_central_cylindrical_range_v_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, -1.0f, nullptr
	};

	rna_Camera_central_cylindrical_range_v_max_ = {
		{&rna_Camera_central_cylindrical_radius, 	&rna_Camera_central_cylindrical_range_v_min,
		-1, "central_cylindrical_range_v_max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Max Height",
		"Maximum Height value for the central cylindrical lens",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, central_cylindrical_range_v_max), RawPropertyType(5), nullptr},
		Camera_central_cylindrical_range_v_max_get, Camera_central_cylindrical_range_v_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Camera_central_cylindrical_radius_ = {
		{&rna_Camera_custom_filepath, 	&rna_Camera_central_cylindrical_range_v_max,
		-1, "central_cylindrical_radius", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Cylinder Radius",
		"Radius of the virtual cylinder",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Camera, central_cylindrical_radius), RawPropertyType(5), nullptr},
		Camera_central_cylindrical_radius_get, Camera_central_cylindrical_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0000100000f, 10.0f, 0.0000100000f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Camera_custom_filepath_ = {
		{&rna_Camera_custom_shader, 	&rna_Camera_central_cylindrical_radius,
		-1, "custom_filepath", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Custom File Path",
		"Path to the shader defining the custom camera",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_Camera_custom_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_custom_filepath_get, Camera_custom_filepath_length, Camera_custom_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_Camera_custom_shader_ = {
		{&rna_Camera_custom_mode, 	&rna_Camera_custom_filepath,
		-1, "custom_shader", 8388801, 1, 0, 64, 0, PropertyPathTemplateType(0), "Custom Shader",
		"Shader defining the custom camera",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_custom_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_custom_shader_get, Camera_custom_shader_set, nullptr, nullptr,RNA_Text
	};

	static const EnumPropertyItem rna_Camera_custom_mode_items[3] = {
		{0, "INTERNAL", 0, "Internal", "Use internal text data-block"	},
		{1, "EXTERNAL", 0, "External", "Use external file"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Camera_custom_mode_ = {
		{&rna_Camera_custom_bytecode, 	&rna_Camera_custom_shader,
		-1, "custom_mode", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Custom shader source",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_custom_mode_get, Camera_custom_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Camera_custom_mode_items, 2, 0
	};

	rna_Camera_custom_bytecode_ = {
		{&rna_Camera_custom_bytecode_hash, 	&rna_Camera_custom_mode,
		-1, "custom_bytecode", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Custom Bytecode",
		"Compiled bytecode of the custom shader",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_custom_bytecode_get, Camera_custom_bytecode_length, Camera_custom_bytecode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Camera_custom_bytecode_hash_ = {
		{&rna_Camera_dof, 	&rna_Camera_custom_bytecode,
		-1, "custom_bytecode_hash", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Custom Bytecode Hash",
		"Hash of the compiled bytecode of the custom shader, for quick equality checking",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Camera_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_custom_bytecode_hash_get, Camera_custom_bytecode_hash_length, Camera_custom_bytecode_hash_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Camera_dof_ = {
		{&rna_Camera_background_images, 	&rna_Camera_custom_bytecode_hash,
		-1, "dof", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Depth Of Field",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Camera_dof_get, nullptr, nullptr, nullptr,RNA_CameraDOFSettings
	};

	rna_Camera_background_images_ = {
		{&rna_Camera_animation_data, 	&rna_Camera_dof,
		-1, "background_images", 0, 3073, 0, 0, 0, PropertyPathTemplateType(0), "Background Images",
		"List of background images",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Camera_background_images_override_apply,
			0, PROP_RAW_UNSET, RNA_CameraBackgroundImages},
		Camera_background_images_begin, Camera_background_images_next, Camera_background_images_end, Camera_background_images_get, nullptr, Camera_background_images_lookup_int, nullptr, nullptr, RNA_CameraBackgroundImage
	};

	rna_Camera_animation_data_ = {
		{nullptr, 	&rna_Camera_background_images,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Camera_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_Camera;
	srna->cont.properties = {&rna_Camera_type, &rna_Camera_animation_data};
	srna->identifier = "Camera";
	srna->flag = 519;
	srna->name = "Camera";
	srna->description = "Camera data-block for storing camera settings";
	srna->translation_context = "*";
	srna->icon = 181;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	rna_Camera_view_frame_scene_ = {
		{&rna_Camera_view_frame_result_1, 	nullptr,
		-1, "scene", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Scene to use for aspect calculation, when omitted 1:1 aspect is used",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	static float rna_Camera_view_frame_result_1_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Camera_view_frame_result_1_ = {
		{&rna_Camera_view_frame_result_2, 	&rna_Camera_view_frame_scene,
		-1, "result_1", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		nullptr,
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Camera_view_frame_result_1_default
	};
	static float rna_Camera_view_frame_result_2_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Camera_view_frame_result_2_ = {
		{&rna_Camera_view_frame_result_3, 	&rna_Camera_view_frame_result_1,
		-1, "result_2", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		nullptr,
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Camera_view_frame_result_2_default
	};
	static float rna_Camera_view_frame_result_3_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Camera_view_frame_result_3_ = {
		{&rna_Camera_view_frame_result_4, 	&rna_Camera_view_frame_result_2,
		-1, "result_3", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		nullptr,
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Camera_view_frame_result_3_default
	};
	static float rna_Camera_view_frame_result_4_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Camera_view_frame_result_4_ = {
		{nullptr, 	&rna_Camera_view_frame_result_3,
		-1, "result_4", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		nullptr,
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Camera_view_frame_result_4_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Camera_view_frame_scene, &rna_Camera_view_frame_result_4};
		func->identifier = "view_frame";
		func->description = "Return 4 points for the cameras frame (before object transformation)";
		func->call = Camera_view_frame_call;
		rna_Camera_view_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Background Image */
static CollectionPropertyRNA rna_CameraBackgroundImage_rna_properties_;
PropertyRNA &rna_CameraBackgroundImage_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_rna_properties_);

static PointerPropertyRNA rna_CameraBackgroundImage_rna_type_;
PropertyRNA &rna_CameraBackgroundImage_rna_type = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_rna_type_);

static BoolPropertyRNA rna_CameraBackgroundImage_is_override_data_;
PropertyRNA &rna_CameraBackgroundImage_is_override_data = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_is_override_data_);

static EnumPropertyRNA rna_CameraBackgroundImage_source_;
PropertyRNA &rna_CameraBackgroundImage_source = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_source_);

static PointerPropertyRNA rna_CameraBackgroundImage_image_;
PropertyRNA &rna_CameraBackgroundImage_image = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_image_);

static PointerPropertyRNA rna_CameraBackgroundImage_clip_;
PropertyRNA &rna_CameraBackgroundImage_clip = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_clip_);

static PointerPropertyRNA rna_CameraBackgroundImage_image_user_;
PropertyRNA &rna_CameraBackgroundImage_image_user = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_image_user_);

static PointerPropertyRNA rna_CameraBackgroundImage_clip_user_;
PropertyRNA &rna_CameraBackgroundImage_clip_user = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_clip_user_);

static FloatPropertyRNA rna_CameraBackgroundImage_offset_;
PropertyRNA &rna_CameraBackgroundImage_offset = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_offset_);

static FloatPropertyRNA rna_CameraBackgroundImage_scale_;
PropertyRNA &rna_CameraBackgroundImage_scale = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_scale_);

static FloatPropertyRNA rna_CameraBackgroundImage_rotation_;
PropertyRNA &rna_CameraBackgroundImage_rotation = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_rotation_);

static BoolPropertyRNA rna_CameraBackgroundImage_use_flip_x_;
PropertyRNA &rna_CameraBackgroundImage_use_flip_x = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_use_flip_x_);

static BoolPropertyRNA rna_CameraBackgroundImage_use_flip_y_;
PropertyRNA &rna_CameraBackgroundImage_use_flip_y = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_use_flip_y_);

static FloatPropertyRNA rna_CameraBackgroundImage_alpha_;
PropertyRNA &rna_CameraBackgroundImage_alpha = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_alpha_);

static BoolPropertyRNA rna_CameraBackgroundImage_show_expanded_;
PropertyRNA &rna_CameraBackgroundImage_show_expanded = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_show_expanded_);

static BoolPropertyRNA rna_CameraBackgroundImage_use_camera_clip_;
PropertyRNA &rna_CameraBackgroundImage_use_camera_clip = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_use_camera_clip_);

static BoolPropertyRNA rna_CameraBackgroundImage_show_background_image_;
PropertyRNA &rna_CameraBackgroundImage_show_background_image = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_show_background_image_);

static BoolPropertyRNA rna_CameraBackgroundImage_show_on_foreground_;
PropertyRNA &rna_CameraBackgroundImage_show_on_foreground = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_show_on_foreground_);

static EnumPropertyRNA rna_CameraBackgroundImage_display_depth_;
PropertyRNA &rna_CameraBackgroundImage_display_depth = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_display_depth_);

static EnumPropertyRNA rna_CameraBackgroundImage_frame_method_;
PropertyRNA &rna_CameraBackgroundImage_frame_method = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImage_frame_method_);

StructRNA *RNA_CameraBackgroundImage;
void register_struct_CameraBackgroundImage(BlenderRNA &brna)
{
	rna_CameraBackgroundImage_rna_properties_ = {
		{&rna_CameraBackgroundImage_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_rna_properties_begin, CameraBackgroundImage_rna_properties_next, CameraBackgroundImage_rna_properties_end, CameraBackgroundImage_rna_properties_get, nullptr, nullptr, CameraBackgroundImage_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CameraBackgroundImage_rna_type_ = {
		{&rna_CameraBackgroundImage_is_override_data, 	&rna_CameraBackgroundImage_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CameraBackgroundImage_is_override_data_ = {
		{&rna_CameraBackgroundImage_source, 	&rna_CameraBackgroundImage_rna_type,
		-1, "is_override_data", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Background Image",
		"In a local override camera, whether this background image comes from the linked reference camera, or is local to the override",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_is_override_data_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_CameraBackgroundImage_source_items[3] = {
		{0, "IMAGE", 0, "Image", ""	},
		{1, "MOVIE_CLIP", 0, "Movie Clip", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CameraBackgroundImage_source_ = {
		{&rna_CameraBackgroundImage_image, 	&rna_CameraBackgroundImage_is_override_data,
		-1, "source", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Background Source",
		"Data source used for background",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraBGImage, source), RawPropertyType(1), nullptr},
		CameraBackgroundImage_source_get, CameraBackgroundImage_source_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CameraBackgroundImage_source_items, 2, 0
	};

	rna_CameraBackgroundImage_image_ = {
		{&rna_CameraBackgroundImage_clip, 	&rna_CameraBackgroundImage_source,
		-1, "image", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Image",
		"Image displayed and edited in this space",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_image_get, CameraBackgroundImage_image_set, nullptr, nullptr,RNA_Image
	};

	rna_CameraBackgroundImage_clip_ = {
		{&rna_CameraBackgroundImage_image_user, 	&rna_CameraBackgroundImage_image,
		-1, "clip", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "MovieClip",
		"Movie clip displayed and edited in this space",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_clip_get, CameraBackgroundImage_clip_set, nullptr, nullptr,RNA_MovieClip
	};

	rna_CameraBackgroundImage_image_user_ = {
		{&rna_CameraBackgroundImage_clip_user, 	&rna_CameraBackgroundImage_clip,
		-1, "image_user", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Image User",
		"Parameters defining which layer, pass and frame of the image is displayed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_image_user_get, nullptr, nullptr, nullptr,RNA_ImageUser
	};

	rna_CameraBackgroundImage_clip_user_ = {
		{&rna_CameraBackgroundImage_offset, 	&rna_CameraBackgroundImage_image_user,
		-1, "clip_user", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Clip User",
		"Parameters defining which frame of the movie clip is displayed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_clip_user_get, nullptr, nullptr, nullptr,RNA_MovieClipUser
	};

	static float rna_CameraBackgroundImage_offset_default[2] = {
		0.0f,
		0.0f
	};
	rna_CameraBackgroundImage_offset_ = {
		{&rna_CameraBackgroundImage_scale, 	&rna_CameraBackgroundImage_clip_user,
		-1, "offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraBGImage, offset), RawPropertyType(5), nullptr},
		nullptr, nullptr, CameraBackgroundImage_offset_get, CameraBackgroundImage_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 5, nullptr, nullptr, 0.0f, rna_CameraBackgroundImage_offset_default
	};

	rna_CameraBackgroundImage_scale_ = {
		{&rna_CameraBackgroundImage_rotation, 	&rna_CameraBackgroundImage_offset,
		-1, "scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Scale the background image",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraBGImage, scale), RawPropertyType(5), nullptr},
		CameraBackgroundImage_scale_get, CameraBackgroundImage_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.1000000015f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CameraBackgroundImage_rotation_ = {
		{&rna_CameraBackgroundImage_use_flip_x, 	&rna_CameraBackgroundImage_scale,
		-1, "rotation", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Rotation for the background image (ortho view only)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraBGImage, rotation), RawPropertyType(5), nullptr},
		CameraBackgroundImage_rotation_get, CameraBackgroundImage_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CameraBackgroundImage_use_flip_x_ = {
		{&rna_CameraBackgroundImage_use_flip_y, 	&rna_CameraBackgroundImage_rotation,
		-1, "use_flip_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Flip Horizontally",
		"Flip the background image horizontally",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_use_flip_x_get, CameraBackgroundImage_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CameraBackgroundImage_use_flip_y_ = {
		{&rna_CameraBackgroundImage_alpha, 	&rna_CameraBackgroundImage_use_flip_x,
		-1, "use_flip_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Flip Vertically",
		"Flip the background image vertically",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_use_flip_y_get, CameraBackgroundImage_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CameraBackgroundImage_alpha_ = {
		{&rna_CameraBackgroundImage_show_expanded, 	&rna_CameraBackgroundImage_use_flip_y,
		-1, "alpha", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Opacity",
		"Image opacity to blend the image against the background color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraBGImage, alpha), RawPropertyType(5), nullptr},
		CameraBackgroundImage_alpha_get, CameraBackgroundImage_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CameraBackgroundImage_show_expanded_ = {
		{&rna_CameraBackgroundImage_use_camera_clip, 	&rna_CameraBackgroundImage_alpha,
		-1, "show_expanded", 1073745923, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Expanded",
		"Show the details in the user interface",
		33, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_show_expanded_get, CameraBackgroundImage_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CameraBackgroundImage_use_camera_clip_ = {
		{&rna_CameraBackgroundImage_show_background_image, 	&rna_CameraBackgroundImage_show_expanded,
		-1, "use_camera_clip", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Camera Clip",
		"Use movie clip from active scene camera",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_use_camera_clip_get, CameraBackgroundImage_use_camera_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CameraBackgroundImage_show_background_image_ = {
		{&rna_CameraBackgroundImage_show_on_foreground, 	&rna_CameraBackgroundImage_use_camera_clip,
		-1, "show_background_image", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Background Image",
		"Show this image as background",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_show_background_image_get, CameraBackgroundImage_show_background_image_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_CameraBackgroundImage_show_on_foreground_ = {
		{&rna_CameraBackgroundImage_display_depth, 	&rna_CameraBackgroundImage_show_background_image,
		-1, "show_on_foreground", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show On Foreground",
		"Show this image in front of objects in viewport",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImage_show_on_foreground_get, CameraBackgroundImage_show_on_foreground_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_CameraBackgroundImage_display_depth_items[3] = {
		{0, "BACK", 0, "Back", ""	},
		{16, "FRONT", 0, "Front", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CameraBackgroundImage_display_depth_ = {
		{&rna_CameraBackgroundImage_frame_method, 	&rna_CameraBackgroundImage_show_on_foreground,
		-1, "display_depth", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Depth",
		"Display under or over everything",
		0, "Camera",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraBGImage, flag), RawPropertyType(1), nullptr},
		CameraBackgroundImage_display_depth_get, CameraBackgroundImage_display_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CameraBackgroundImage_display_depth_items, 2, 0
	};

	static const EnumPropertyItem rna_CameraBackgroundImage_frame_method_items[4] = {
		{0, "STRETCH", 0, "Stretch", ""	},
		{32, "FIT", 0, "Fit", ""	},
		{96, "CROP", 0, "Crop", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CameraBackgroundImage_frame_method_ = {
		{nullptr, 	&rna_CameraBackgroundImage_display_depth,
		-1, "frame_method", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Frame Method",
		"How the image fits in the camera frame",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 421462016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraBGImage, flag), RawPropertyType(1), nullptr},
		CameraBackgroundImage_frame_method_get, CameraBackgroundImage_frame_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CameraBackgroundImage_frame_method_items, 3, 32
	};

	StructRNA *srna = RNA_CameraBackgroundImage;
	srna->cont.properties = {&rna_CameraBackgroundImage_rna_properties, &rna_CameraBackgroundImage_frame_method};
	srna->identifier = "CameraBackgroundImage";
	srna->flag = 516;
	srna->name = "Background Image";
	srna->description = "Image and settings for display in the 3D View background";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CameraBackgroundImage_rna_properties;
	srna->path = rna_Camera_background_image_path;
};

/* Background Images */
static CollectionPropertyRNA rna_CameraBackgroundImages_rna_properties_;
PropertyRNA &rna_CameraBackgroundImages_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImages_rna_properties_);

static PointerPropertyRNA rna_CameraBackgroundImages_rna_type_;
PropertyRNA &rna_CameraBackgroundImages_rna_type = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImages_rna_type_);

static PointerPropertyRNA rna_CameraBackgroundImages_new_image_;
PropertyRNA &rna_CameraBackgroundImages_new_image = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImages_new_image_);

FunctionRNA *rna_CameraBackgroundImages_new_func;
static PointerPropertyRNA rna_CameraBackgroundImages_remove_image_;
PropertyRNA &rna_CameraBackgroundImages_remove_image = reinterpret_cast<PropertyRNA &>(rna_CameraBackgroundImages_remove_image_);

FunctionRNA *rna_CameraBackgroundImages_remove_func;
FunctionRNA *rna_CameraBackgroundImages_clear_func;
StructRNA *RNA_CameraBackgroundImages;
void register_struct_CameraBackgroundImages(BlenderRNA &brna)
{
	rna_CameraBackgroundImages_rna_properties_ = {
		{&rna_CameraBackgroundImages_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImages_rna_properties_begin, CameraBackgroundImages_rna_properties_next, CameraBackgroundImages_rna_properties_end, CameraBackgroundImages_rna_properties_get, nullptr, nullptr, CameraBackgroundImages_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CameraBackgroundImages_rna_type_ = {
		{nullptr, 	&rna_CameraBackgroundImages_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraBackgroundImages_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_CameraBackgroundImages;
	srna->cont.properties = {&rna_CameraBackgroundImages_rna_properties, &rna_CameraBackgroundImages_rna_type};
	srna->identifier = "CameraBackgroundImages";
	srna->flag = 516;
	srna->name = "Background Images";
	srna->description = "Collection of background images";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CameraBackgroundImages_rna_properties;
	{
	rna_CameraBackgroundImages_new_image_ = {
		{nullptr, 	nullptr,
		-1, "image", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Image displayed as viewport background",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CameraBackgroundImage
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CameraBackgroundImages_new_image, &rna_CameraBackgroundImages_new_image};
		func->identifier = "new";
		func->description = "Add new background image";
		func->call = CameraBackgroundImages_new_call;
		func->c_ret = &rna_CameraBackgroundImages_new_image;
		rna_CameraBackgroundImages_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CameraBackgroundImages_remove_image_ = {
		{nullptr, 	nullptr,
		-1, "image", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Image displayed as viewport background",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CameraBackgroundImage
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CameraBackgroundImages_remove_image, &rna_CameraBackgroundImages_remove_image};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove background image";
		func->call = CameraBackgroundImages_remove_call;
		rna_CameraBackgroundImages_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->description = "Remove all background images";
		func->call = CameraBackgroundImages_clear_call;
		rna_CameraBackgroundImages_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Stereo */
static CollectionPropertyRNA rna_CameraStereoData_rna_properties_;
PropertyRNA &rna_CameraStereoData_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CameraStereoData_rna_properties_);

static PointerPropertyRNA rna_CameraStereoData_rna_type_;
PropertyRNA &rna_CameraStereoData_rna_type = reinterpret_cast<PropertyRNA &>(rna_CameraStereoData_rna_type_);

static EnumPropertyRNA rna_CameraStereoData_convergence_mode_;
PropertyRNA &rna_CameraStereoData_convergence_mode = reinterpret_cast<PropertyRNA &>(rna_CameraStereoData_convergence_mode_);

static EnumPropertyRNA rna_CameraStereoData_pivot_;
PropertyRNA &rna_CameraStereoData_pivot = reinterpret_cast<PropertyRNA &>(rna_CameraStereoData_pivot_);

static FloatPropertyRNA rna_CameraStereoData_interocular_distance_;
PropertyRNA &rna_CameraStereoData_interocular_distance = reinterpret_cast<PropertyRNA &>(rna_CameraStereoData_interocular_distance_);

static FloatPropertyRNA rna_CameraStereoData_convergence_distance_;
PropertyRNA &rna_CameraStereoData_convergence_distance = reinterpret_cast<PropertyRNA &>(rna_CameraStereoData_convergence_distance_);

static BoolPropertyRNA rna_CameraStereoData_use_spherical_stereo_;
PropertyRNA &rna_CameraStereoData_use_spherical_stereo = reinterpret_cast<PropertyRNA &>(rna_CameraStereoData_use_spherical_stereo_);

static BoolPropertyRNA rna_CameraStereoData_use_pole_merge_;
PropertyRNA &rna_CameraStereoData_use_pole_merge = reinterpret_cast<PropertyRNA &>(rna_CameraStereoData_use_pole_merge_);

static FloatPropertyRNA rna_CameraStereoData_pole_merge_angle_from_;
PropertyRNA &rna_CameraStereoData_pole_merge_angle_from = reinterpret_cast<PropertyRNA &>(rna_CameraStereoData_pole_merge_angle_from_);

static FloatPropertyRNA rna_CameraStereoData_pole_merge_angle_to_;
PropertyRNA &rna_CameraStereoData_pole_merge_angle_to = reinterpret_cast<PropertyRNA &>(rna_CameraStereoData_pole_merge_angle_to_);

StructRNA *RNA_CameraStereoData;
void register_struct_CameraStereoData(BlenderRNA &brna)
{
	rna_CameraStereoData_rna_properties_ = {
		{&rna_CameraStereoData_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraStereoData_rna_properties_begin, CameraStereoData_rna_properties_next, CameraStereoData_rna_properties_end, CameraStereoData_rna_properties_get, nullptr, nullptr, CameraStereoData_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CameraStereoData_rna_type_ = {
		{&rna_CameraStereoData_convergence_mode, 	&rna_CameraStereoData_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraStereoData_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_CameraStereoData_convergence_mode_items[4] = {
		{0, "OFFAXIS", 0, "Off-Axis", "Off-axis frustums converging in a plane"	},
		{1, "PARALLEL", 0, "Parallel", "Parallel cameras with no convergence"	},
		{2, "TOE", 0, "Toe-in", "Rotated cameras, looking at the same point at the convergence distance"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CameraStereoData_convergence_mode_ = {
		{&rna_CameraStereoData_pivot, 	&rna_CameraStereoData_rna_type,
		-1, "convergence_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraStereoSettings, convergence_mode), RawPropertyType(1), nullptr},
		CameraStereoData_convergence_mode_get, CameraStereoData_convergence_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CameraStereoData_convergence_mode_items, 3, 0
	};

	static const EnumPropertyItem rna_CameraStereoData_pivot_items[4] = {
		{0, "LEFT", 0, "Left", ""	},
		{1, "RIGHT", 0, "Right", ""	},
		{2, "CENTER", 0, "Center", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CameraStereoData_pivot_ = {
		{&rna_CameraStereoData_interocular_distance, 	&rna_CameraStereoData_convergence_mode,
		-1, "pivot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Pivot",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraStereoSettings, pivot), RawPropertyType(1), nullptr},
		CameraStereoData_pivot_get, CameraStereoData_pivot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CameraStereoData_pivot_items, 3, 0
	};

	rna_CameraStereoData_interocular_distance_ = {
		{&rna_CameraStereoData_convergence_distance, 	&rna_CameraStereoData_pivot,
		-1, "interocular_distance", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Interocular Distance",
		"Set the distance between the eyes - the stereo plane distance / 30 should be fine",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraStereoSettings, interocular_distance), RawPropertyType(5), nullptr},
		CameraStereoData_interocular_distance_get, CameraStereoData_interocular_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0649999976f, nullptr
	};

	rna_CameraStereoData_convergence_distance_ = {
		{&rna_CameraStereoData_use_spherical_stereo, 	&rna_CameraStereoData_interocular_distance,
		-1, "convergence_distance", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Convergence Plane Distance",
		"The converge point for the stereo cameras (often the distance between a projector and the projection screen)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraStereoSettings, convergence_distance), RawPropertyType(5), nullptr},
		CameraStereoData_convergence_distance_get, CameraStereoData_convergence_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0000100000f, 15.0f, 0.0000100000f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.9499999285f, nullptr
	};

	rna_CameraStereoData_use_spherical_stereo_ = {
		{&rna_CameraStereoData_use_pole_merge, 	&rna_CameraStereoData_convergence_distance,
		-1, "use_spherical_stereo", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Spherical Stereo",
		"Render every pixel rotating the camera around the middle of the interocular distance",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraStereoData_use_spherical_stereo_get, CameraStereoData_use_spherical_stereo_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CameraStereoData_use_pole_merge_ = {
		{&rna_CameraStereoData_pole_merge_angle_from, 	&rna_CameraStereoData_use_spherical_stereo,
		-1, "use_pole_merge", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Pole Merge",
		"Fade interocular distance to 0 after the given cutoff angle",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraStereoData_use_pole_merge_get, CameraStereoData_use_pole_merge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CameraStereoData_pole_merge_angle_from_ = {
		{&rna_CameraStereoData_pole_merge_angle_to, 	&rna_CameraStereoData_use_pole_merge,
		-1, "pole_merge_angle_from", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Pole Merge Start Angle",
		"Angle at which interocular distance starts to fade to 0",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraStereoSettings, pole_merge_angle_from), RawPropertyType(5), nullptr},
		CameraStereoData_pole_merge_angle_from_get, CameraStereoData_pole_merge_angle_from_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.5707963705f, 0.0f, 1.5707963705f, 10.0f, 3, nullptr, nullptr, 1.0471975803f, nullptr
	};

	rna_CameraStereoData_pole_merge_angle_to_ = {
		{nullptr, 	&rna_CameraStereoData_pole_merge_angle_from,
		-1, "pole_merge_angle_to", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Pole Merge End Angle",
		"Angle at which interocular distance is 0",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraStereoSettings, pole_merge_angle_to), RawPropertyType(5), nullptr},
		CameraStereoData_pole_merge_angle_to_get, CameraStereoData_pole_merge_angle_to_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.5707963705f, 0.0f, 1.5707963705f, 10.0f, 3, nullptr, nullptr, 1.3089969158f, nullptr
	};

	StructRNA *srna = RNA_CameraStereoData;
	srna->cont.properties = {&rna_CameraStereoData_rna_properties, &rna_CameraStereoData_pole_merge_angle_to};
	srna->identifier = "CameraStereoData";
	srna->flag = 516;
	srna->name = "Stereo";
	srna->description = "Stereoscopy settings for a Camera data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CameraStereoData_rna_properties;
	srna->nested = RNA_Camera;
};

/* Depth of Field */
static CollectionPropertyRNA rna_CameraDOFSettings_rna_properties_;
PropertyRNA &rna_CameraDOFSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CameraDOFSettings_rna_properties_);

static PointerPropertyRNA rna_CameraDOFSettings_rna_type_;
PropertyRNA &rna_CameraDOFSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_CameraDOFSettings_rna_type_);

static BoolPropertyRNA rna_CameraDOFSettings_use_dof_;
PropertyRNA &rna_CameraDOFSettings_use_dof = reinterpret_cast<PropertyRNA &>(rna_CameraDOFSettings_use_dof_);

static PointerPropertyRNA rna_CameraDOFSettings_focus_object_;
PropertyRNA &rna_CameraDOFSettings_focus_object = reinterpret_cast<PropertyRNA &>(rna_CameraDOFSettings_focus_object_);

static StringPropertyRNA rna_CameraDOFSettings_focus_subtarget_;
PropertyRNA &rna_CameraDOFSettings_focus_subtarget = reinterpret_cast<PropertyRNA &>(rna_CameraDOFSettings_focus_subtarget_);

static FloatPropertyRNA rna_CameraDOFSettings_focus_distance_;
PropertyRNA &rna_CameraDOFSettings_focus_distance = reinterpret_cast<PropertyRNA &>(rna_CameraDOFSettings_focus_distance_);

static FloatPropertyRNA rna_CameraDOFSettings_aperture_fstop_;
PropertyRNA &rna_CameraDOFSettings_aperture_fstop = reinterpret_cast<PropertyRNA &>(rna_CameraDOFSettings_aperture_fstop_);

static IntPropertyRNA rna_CameraDOFSettings_aperture_blades_;
PropertyRNA &rna_CameraDOFSettings_aperture_blades = reinterpret_cast<PropertyRNA &>(rna_CameraDOFSettings_aperture_blades_);

static FloatPropertyRNA rna_CameraDOFSettings_aperture_rotation_;
PropertyRNA &rna_CameraDOFSettings_aperture_rotation = reinterpret_cast<PropertyRNA &>(rna_CameraDOFSettings_aperture_rotation_);

static FloatPropertyRNA rna_CameraDOFSettings_aperture_ratio_;
PropertyRNA &rna_CameraDOFSettings_aperture_ratio = reinterpret_cast<PropertyRNA &>(rna_CameraDOFSettings_aperture_ratio_);

StructRNA *RNA_CameraDOFSettings;
void register_struct_CameraDOFSettings(BlenderRNA &brna)
{
	rna_CameraDOFSettings_rna_properties_ = {
		{&rna_CameraDOFSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraDOFSettings_rna_properties_begin, CameraDOFSettings_rna_properties_next, CameraDOFSettings_rna_properties_end, CameraDOFSettings_rna_properties_get, nullptr, nullptr, CameraDOFSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CameraDOFSettings_rna_type_ = {
		{&rna_CameraDOFSettings_use_dof, 	&rna_CameraDOFSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraDOFSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CameraDOFSettings_use_dof_ = {
		{&rna_CameraDOFSettings_focus_object, 	&rna_CameraDOFSettings_rna_type,
		-1, "use_dof", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Depth of Field",
		"Use Depth of Field",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_dof_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraDOFSettings_use_dof_get, CameraDOFSettings_use_dof_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CameraDOFSettings_focus_object_ = {
		{&rna_CameraDOFSettings_focus_subtarget, 	&rna_CameraDOFSettings_use_dof,
		-1, "focus_object", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Focus Object",
		"Use this object to define the depth of field focal point",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_dependency_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraDOFSettings_focus_object_get, CameraDOFSettings_focus_object_set, nullptr, nullptr,RNA_Object
	};

	rna_CameraDOFSettings_focus_subtarget_ = {
		{&rna_CameraDOFSettings_focus_distance, 	&rna_CameraDOFSettings_focus_object,
		-1, "focus_subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Focus Bone",
		"Use this armature bone to define the depth of field focal point",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Camera_dependency_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraDOFSettings_focus_subtarget_get, CameraDOFSettings_focus_subtarget_length, CameraDOFSettings_focus_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_CameraDOFSettings_focus_distance_ = {
		{&rna_CameraDOFSettings_aperture_fstop, 	&rna_CameraDOFSettings_focus_subtarget,
		-1, "focus_distance", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Focus Distance",
		"Distance to the focus point for depth of field",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_dof_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraDOFSettings, focus_distance), RawPropertyType(5), nullptr},
		CameraDOFSettings_focus_distance_get, CameraDOFSettings_focus_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5000.0f, 0.0f, FLT_MAX, 1.0f, 4, nullptr, nullptr, 10.0f, nullptr
	};

	rna_CameraDOFSettings_aperture_fstop_ = {
		{&rna_CameraDOFSettings_aperture_blades, 	&rna_CameraDOFSettings_focus_distance,
		-1, "aperture_fstop", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "F-Stop",
		"F-Stop ratio (lower numbers give more defocus, higher numbers give a sharper image)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_dof_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraDOFSettings, aperture_fstop), RawPropertyType(5), nullptr},
		CameraDOFSettings_aperture_fstop_get, CameraDOFSettings_aperture_fstop_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 128.0f, 0.0f, FLT_MAX, 10.0f, 1, nullptr, nullptr, 2.7999999523f, nullptr
	};

	rna_CameraDOFSettings_aperture_blades_ = {
		{&rna_CameraDOFSettings_aperture_rotation, 	&rna_CameraDOFSettings_aperture_fstop,
		-1, "aperture_blades", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Blades",
		"Number of blades in aperture for polygonal bokeh (at least 3)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_dof_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraDOFSettings_aperture_blades_get, CameraDOFSettings_aperture_blades_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 16, 0, 16, 1, nullptr, nullptr, 0, nullptr
	};

	rna_CameraDOFSettings_aperture_rotation_ = {
		{&rna_CameraDOFSettings_aperture_ratio, 	&rna_CameraDOFSettings_aperture_blades,
		-1, "aperture_rotation", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Rotation of blades in aperture",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_dof_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraDOFSettings, aperture_rotation), RawPropertyType(5), nullptr},
		CameraDOFSettings_aperture_rotation_get, CameraDOFSettings_aperture_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -3.1415927410f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CameraDOFSettings_aperture_ratio_ = {
		{nullptr, 	&rna_CameraDOFSettings_aperture_rotation,
		-1, "aperture_ratio", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Ratio",
		"Distortion to simulate anamorphic lens bokeh",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Camera_dof_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CameraDOFSettings, aperture_ratio), RawPropertyType(5), nullptr},
		CameraDOFSettings_aperture_ratio_get, CameraDOFSettings_aperture_ratio_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 2.0f, 0.0099999998f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	StructRNA *srna = RNA_CameraDOFSettings;
	srna->cont.properties = {&rna_CameraDOFSettings_rna_properties, &rna_CameraDOFSettings_aperture_ratio};
	srna->identifier = "CameraDOFSettings";
	srna->flag = 516;
	srna->name = "Depth of Field";
	srna->description = "Depth of Field settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CameraDOFSettings_rna_properties;
	srna->path = rna_CameraDOFSettings_path;
};


}  // namespace blender
