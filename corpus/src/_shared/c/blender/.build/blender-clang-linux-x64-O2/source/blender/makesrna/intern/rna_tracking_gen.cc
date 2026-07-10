
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

#include "rna_tracking.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_MovieTrackingSettings_rna_properties;
extern PropertyRNA &rna_MovieTrackingSettings_rna_type;
extern PropertyRNA &rna_MovieTrackingSettings_speed;
extern PropertyRNA &rna_MovieTrackingSettings_use_keyframe_selection;
extern PropertyRNA &rna_MovieTrackingSettings_refine_intrinsics_focal_length;
extern PropertyRNA &rna_MovieTrackingSettings_refine_intrinsics_principal_point;
extern PropertyRNA &rna_MovieTrackingSettings_refine_intrinsics_radial_distortion;
extern PropertyRNA &rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion;
extern PropertyRNA &rna_MovieTrackingSettings_distance;
extern PropertyRNA &rna_MovieTrackingSettings_clean_frames;
extern PropertyRNA &rna_MovieTrackingSettings_clean_error;
extern PropertyRNA &rna_MovieTrackingSettings_clean_action;
extern PropertyRNA &rna_MovieTrackingSettings_use_tripod_solver;
extern PropertyRNA &rna_MovieTrackingSettings_default_frames_limit;
extern PropertyRNA &rna_MovieTrackingSettings_default_pattern_match;
extern PropertyRNA &rna_MovieTrackingSettings_default_margin;
extern PropertyRNA &rna_MovieTrackingSettings_default_motion_model;
extern PropertyRNA &rna_MovieTrackingSettings_use_default_brute;
extern PropertyRNA &rna_MovieTrackingSettings_use_default_mask;
extern PropertyRNA &rna_MovieTrackingSettings_use_default_normalization;
extern PropertyRNA &rna_MovieTrackingSettings_default_correlation_min;
extern PropertyRNA &rna_MovieTrackingSettings_default_pattern_size;
extern PropertyRNA &rna_MovieTrackingSettings_default_search_size;
extern PropertyRNA &rna_MovieTrackingSettings_use_default_red_channel;
extern PropertyRNA &rna_MovieTrackingSettings_use_default_green_channel;
extern PropertyRNA &rna_MovieTrackingSettings_use_default_blue_channel;
extern PropertyRNA &rna_MovieTrackingSettings_default_weight;
extern PropertyRNA &rna_MovieTrackingSettings_object_distance;


extern PropertyRNA &rna_MovieTrackingCamera_rna_properties;
extern PropertyRNA &rna_MovieTrackingCamera_rna_type;
extern PropertyRNA &rna_MovieTrackingCamera_distortion_model;
extern PropertyRNA &rna_MovieTrackingCamera_sensor_width;
extern PropertyRNA &rna_MovieTrackingCamera_focal_length;
extern PropertyRNA &rna_MovieTrackingCamera_focal_length_pixels;
extern PropertyRNA &rna_MovieTrackingCamera_units;
extern PropertyRNA &rna_MovieTrackingCamera_principal_point;
extern PropertyRNA &rna_MovieTrackingCamera_principal_point_pixels;
extern PropertyRNA &rna_MovieTrackingCamera_k1;
extern PropertyRNA &rna_MovieTrackingCamera_k2;
extern PropertyRNA &rna_MovieTrackingCamera_k3;
extern PropertyRNA &rna_MovieTrackingCamera_division_k1;
extern PropertyRNA &rna_MovieTrackingCamera_division_k2;
extern PropertyRNA &rna_MovieTrackingCamera_nuke_k1;
extern PropertyRNA &rna_MovieTrackingCamera_nuke_k2;
extern PropertyRNA &rna_MovieTrackingCamera_nuke_p1;
extern PropertyRNA &rna_MovieTrackingCamera_nuke_p2;
extern PropertyRNA &rna_MovieTrackingCamera_brown_k1;
extern PropertyRNA &rna_MovieTrackingCamera_brown_k2;
extern PropertyRNA &rna_MovieTrackingCamera_brown_k3;
extern PropertyRNA &rna_MovieTrackingCamera_brown_k4;
extern PropertyRNA &rna_MovieTrackingCamera_brown_p1;
extern PropertyRNA &rna_MovieTrackingCamera_brown_p2;
extern PropertyRNA &rna_MovieTrackingCamera_pixel_aspect;


extern PropertyRNA &rna_MovieTrackingMarker_rna_properties;
extern PropertyRNA &rna_MovieTrackingMarker_rna_type;
extern PropertyRNA &rna_MovieTrackingMarker_co;
extern PropertyRNA &rna_MovieTrackingMarker_frame;
extern PropertyRNA &rna_MovieTrackingMarker_mute;
extern PropertyRNA &rna_MovieTrackingMarker_pattern_corners;
extern PropertyRNA &rna_MovieTrackingMarker_pattern_bound_box;
extern PropertyRNA &rna_MovieTrackingMarker_search_min;
extern PropertyRNA &rna_MovieTrackingMarker_search_max;
extern PropertyRNA &rna_MovieTrackingMarker_is_keyed;


extern PropertyRNA &rna_MovieTrackingTrack_rna_properties;
extern PropertyRNA &rna_MovieTrackingTrack_rna_type;
extern PropertyRNA &rna_MovieTrackingTrack_name;
extern PropertyRNA &rna_MovieTrackingTrack_frames_limit;
extern PropertyRNA &rna_MovieTrackingTrack_pattern_match;
extern PropertyRNA &rna_MovieTrackingTrack_margin;
extern PropertyRNA &rna_MovieTrackingTrack_motion_model;
extern PropertyRNA &rna_MovieTrackingTrack_correlation_min;
extern PropertyRNA &rna_MovieTrackingTrack_use_brute;
extern PropertyRNA &rna_MovieTrackingTrack_use_mask;
extern PropertyRNA &rna_MovieTrackingTrack_use_normalization;
extern PropertyRNA &rna_MovieTrackingTrack_markers;
extern PropertyRNA &rna_MovieTrackingTrack_use_red_channel;
extern PropertyRNA &rna_MovieTrackingTrack_use_green_channel;
extern PropertyRNA &rna_MovieTrackingTrack_use_blue_channel;
extern PropertyRNA &rna_MovieTrackingTrack_use_grayscale_preview;
extern PropertyRNA &rna_MovieTrackingTrack_use_alpha_preview;
extern PropertyRNA &rna_MovieTrackingTrack_has_bundle;
extern PropertyRNA &rna_MovieTrackingTrack_bundle;
extern PropertyRNA &rna_MovieTrackingTrack_hide;
extern PropertyRNA &rna_MovieTrackingTrack_select;
extern PropertyRNA &rna_MovieTrackingTrack_select_anchor;
extern PropertyRNA &rna_MovieTrackingTrack_select_pattern;
extern PropertyRNA &rna_MovieTrackingTrack_select_search;
extern PropertyRNA &rna_MovieTrackingTrack_lock;
extern PropertyRNA &rna_MovieTrackingTrack_use_custom_color;
extern PropertyRNA &rna_MovieTrackingTrack_color;
extern PropertyRNA &rna_MovieTrackingTrack_average_error;
extern PropertyRNA &rna_MovieTrackingTrack_annotation;
extern PropertyRNA &rna_MovieTrackingTrack_weight;
extern PropertyRNA &rna_MovieTrackingTrack_weight_stab;
extern PropertyRNA &rna_MovieTrackingTrack_offset;


extern PropertyRNA &rna_MovieTrackingMarkers_rna_properties;
extern PropertyRNA &rna_MovieTrackingMarkers_rna_type;

extern FunctionRNA *rna_MovieTrackingMarkers_find_frame_func;
extern PropertyRNA &rna_MovieTrackingMarkers_find_frame_frame;
extern PropertyRNA &rna_MovieTrackingMarkers_find_frame_exact;
extern PropertyRNA &rna_MovieTrackingMarkers_find_frame_marker;

extern FunctionRNA *rna_MovieTrackingMarkers_insert_frame_func;
extern PropertyRNA &rna_MovieTrackingMarkers_insert_frame_frame;
extern PropertyRNA &rna_MovieTrackingMarkers_insert_frame_co;
extern PropertyRNA &rna_MovieTrackingMarkers_insert_frame_marker;

extern FunctionRNA *rna_MovieTrackingMarkers_delete_frame_func;
extern PropertyRNA &rna_MovieTrackingMarkers_delete_frame_frame;



extern PropertyRNA &rna_MovieTrackingPlaneMarker_rna_properties;
extern PropertyRNA &rna_MovieTrackingPlaneMarker_rna_type;
extern PropertyRNA &rna_MovieTrackingPlaneMarker_frame;
extern PropertyRNA &rna_MovieTrackingPlaneMarker_corners;
extern PropertyRNA &rna_MovieTrackingPlaneMarker_mute;


extern PropertyRNA &rna_MovieTrackingPlaneTrack_rna_properties;
extern PropertyRNA &rna_MovieTrackingPlaneTrack_rna_type;
extern PropertyRNA &rna_MovieTrackingPlaneTrack_name;
extern PropertyRNA &rna_MovieTrackingPlaneTrack_markers;
extern PropertyRNA &rna_MovieTrackingPlaneTrack_select;
extern PropertyRNA &rna_MovieTrackingPlaneTrack_use_auto_keying;
extern PropertyRNA &rna_MovieTrackingPlaneTrack_image;
extern PropertyRNA &rna_MovieTrackingPlaneTrack_image_opacity;


extern PropertyRNA &rna_MovieTrackingPlaneMarkers_rna_properties;
extern PropertyRNA &rna_MovieTrackingPlaneMarkers_rna_type;

extern FunctionRNA *rna_MovieTrackingPlaneMarkers_find_frame_func;
extern PropertyRNA &rna_MovieTrackingPlaneMarkers_find_frame_frame;
extern PropertyRNA &rna_MovieTrackingPlaneMarkers_find_frame_exact;
extern PropertyRNA &rna_MovieTrackingPlaneMarkers_find_frame_plane_marker;

extern FunctionRNA *rna_MovieTrackingPlaneMarkers_insert_frame_func;
extern PropertyRNA &rna_MovieTrackingPlaneMarkers_insert_frame_frame;
extern PropertyRNA &rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker;

extern FunctionRNA *rna_MovieTrackingPlaneMarkers_delete_frame_func;
extern PropertyRNA &rna_MovieTrackingPlaneMarkers_delete_frame_frame;



extern PropertyRNA &rna_MovieTrackingTracks_rna_properties;
extern PropertyRNA &rna_MovieTrackingTracks_rna_type;
extern PropertyRNA &rna_MovieTrackingTracks_active;

extern FunctionRNA *rna_MovieTrackingTracks_new_func;
extern PropertyRNA &rna_MovieTrackingTracks_new_name;
extern PropertyRNA &rna_MovieTrackingTracks_new_frame;
extern PropertyRNA &rna_MovieTrackingTracks_new_track;



extern PropertyRNA &rna_MovieTrackingPlaneTracks_rna_properties;
extern PropertyRNA &rna_MovieTrackingPlaneTracks_rna_type;
extern PropertyRNA &rna_MovieTrackingPlaneTracks_active;


extern PropertyRNA &rna_MovieTrackingObjectTracks_rna_properties;
extern PropertyRNA &rna_MovieTrackingObjectTracks_rna_type;
extern PropertyRNA &rna_MovieTrackingObjectTracks_active;

extern FunctionRNA *rna_MovieTrackingObjectTracks_new_func;
extern PropertyRNA &rna_MovieTrackingObjectTracks_new_name;
extern PropertyRNA &rna_MovieTrackingObjectTracks_new_frame;
extern PropertyRNA &rna_MovieTrackingObjectTracks_new_track;



extern PropertyRNA &rna_MovieTrackingObjectPlaneTracks_rna_properties;
extern PropertyRNA &rna_MovieTrackingObjectPlaneTracks_rna_type;
extern PropertyRNA &rna_MovieTrackingObjectPlaneTracks_active;


extern PropertyRNA &rna_MovieTrackingStabilization_rna_properties;
extern PropertyRNA &rna_MovieTrackingStabilization_rna_type;
extern PropertyRNA &rna_MovieTrackingStabilization_use_2d_stabilization;
extern PropertyRNA &rna_MovieTrackingStabilization_use_stabilize_rotation;
extern PropertyRNA &rna_MovieTrackingStabilization_use_stabilize_scale;
extern PropertyRNA &rna_MovieTrackingStabilization_tracks;
extern PropertyRNA &rna_MovieTrackingStabilization_active_track_index;
extern PropertyRNA &rna_MovieTrackingStabilization_rotation_tracks;
extern PropertyRNA &rna_MovieTrackingStabilization_active_rotation_track_index;
extern PropertyRNA &rna_MovieTrackingStabilization_anchor_frame;
extern PropertyRNA &rna_MovieTrackingStabilization_target_position;
extern PropertyRNA &rna_MovieTrackingStabilization_target_rotation;
extern PropertyRNA &rna_MovieTrackingStabilization_target_scale;
extern PropertyRNA &rna_MovieTrackingStabilization_use_autoscale;
extern PropertyRNA &rna_MovieTrackingStabilization_scale_max;
extern PropertyRNA &rna_MovieTrackingStabilization_influence_location;
extern PropertyRNA &rna_MovieTrackingStabilization_influence_scale;
extern PropertyRNA &rna_MovieTrackingStabilization_influence_rotation;
extern PropertyRNA &rna_MovieTrackingStabilization_filter_type;
extern PropertyRNA &rna_MovieTrackingStabilization_show_tracks_expanded;


extern PropertyRNA &rna_MovieTrackingReconstructedCameras_rna_properties;
extern PropertyRNA &rna_MovieTrackingReconstructedCameras_rna_type;

extern FunctionRNA *rna_MovieTrackingReconstructedCameras_find_frame_func;
extern PropertyRNA &rna_MovieTrackingReconstructedCameras_find_frame_frame;
extern PropertyRNA &rna_MovieTrackingReconstructedCameras_find_frame_camera;

extern FunctionRNA *rna_MovieTrackingReconstructedCameras_matrix_from_frame_func;
extern PropertyRNA &rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame;
extern PropertyRNA &rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix;



extern PropertyRNA &rna_MovieReconstructedCamera_rna_properties;
extern PropertyRNA &rna_MovieReconstructedCamera_rna_type;
extern PropertyRNA &rna_MovieReconstructedCamera_frame;
extern PropertyRNA &rna_MovieReconstructedCamera_matrix;
extern PropertyRNA &rna_MovieReconstructedCamera_average_error;


extern PropertyRNA &rna_MovieTrackingReconstruction_rna_properties;
extern PropertyRNA &rna_MovieTrackingReconstruction_rna_type;
extern PropertyRNA &rna_MovieTrackingReconstruction_is_valid;
extern PropertyRNA &rna_MovieTrackingReconstruction_average_error;
extern PropertyRNA &rna_MovieTrackingReconstruction_cameras;


extern PropertyRNA &rna_MovieTrackingObject_rna_properties;
extern PropertyRNA &rna_MovieTrackingObject_rna_type;
extern PropertyRNA &rna_MovieTrackingObject_name;
extern PropertyRNA &rna_MovieTrackingObject_is_camera;
extern PropertyRNA &rna_MovieTrackingObject_tracks;
extern PropertyRNA &rna_MovieTrackingObject_plane_tracks;
extern PropertyRNA &rna_MovieTrackingObject_reconstruction;
extern PropertyRNA &rna_MovieTrackingObject_scale;
extern PropertyRNA &rna_MovieTrackingObject_keyframe_a;
extern PropertyRNA &rna_MovieTrackingObject_keyframe_b;


extern PropertyRNA &rna_MovieTrackingDopesheet_rna_properties;
extern PropertyRNA &rna_MovieTrackingDopesheet_rna_type;
extern PropertyRNA &rna_MovieTrackingDopesheet_sort_method;
extern PropertyRNA &rna_MovieTrackingDopesheet_use_invert_sort;
extern PropertyRNA &rna_MovieTrackingDopesheet_show_only_selected;
extern PropertyRNA &rna_MovieTrackingDopesheet_show_hidden;


extern PropertyRNA &rna_MovieTracking_rna_properties;
extern PropertyRNA &rna_MovieTracking_rna_type;
extern PropertyRNA &rna_MovieTracking_settings;
extern PropertyRNA &rna_MovieTracking_camera;
extern PropertyRNA &rna_MovieTracking_tracks;
extern PropertyRNA &rna_MovieTracking_plane_tracks;
extern PropertyRNA &rna_MovieTracking_stabilization;
extern PropertyRNA &rna_MovieTracking_reconstruction;
extern PropertyRNA &rna_MovieTracking_objects;
extern PropertyRNA &rna_MovieTracking_active_object_index;
extern PropertyRNA &rna_MovieTracking_dopesheet;


extern PropertyRNA &rna_MovieTrackingObjects_rna_properties;
extern PropertyRNA &rna_MovieTrackingObjects_rna_type;
extern PropertyRNA &rna_MovieTrackingObjects_active;

extern FunctionRNA *rna_MovieTrackingObjects_new_func;
extern PropertyRNA &rna_MovieTrackingObjects_new_name;
extern PropertyRNA &rna_MovieTrackingObjects_new_object;

extern FunctionRNA *rna_MovieTrackingObjects_remove_func;
extern PropertyRNA &rna_MovieTrackingObjects_remove_object;


static PointerRNA MovieTrackingSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingSettings_rna_properties_get(iter);
    }
}

void MovieTrackingSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingSettings_rna_properties_get(iter);
    }
}

void MovieTrackingSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MovieTrackingSettings_speed_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->speed);
}

void MovieTrackingSettings_speed_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->speed = (std::remove_reference_t<decltype(data->speed)>)value;
}

bool MovieTrackingSettings_use_keyframe_selection_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return ((uint64_t(data->reconstruction_flag) & 2) != 0);
}

void MovieTrackingSettings_use_keyframe_selection_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->reconstruction_flag = std::remove_reference_t<decltype(data->reconstruction_flag)>(uint64_t(data->reconstruction_flag) | 2); }
    else { data->reconstruction_flag = std::remove_reference_t<decltype(data->reconstruction_flag)>(uint64_t(data->reconstruction_flag) & ~uint64_t(2)); }
}

bool MovieTrackingSettings_refine_intrinsics_focal_length_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return ((uint64_t(data->refine_camera_intrinsics) & 1) != 0);
}

void MovieTrackingSettings_refine_intrinsics_focal_length_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->refine_camera_intrinsics = std::remove_reference_t<decltype(data->refine_camera_intrinsics)>(uint64_t(data->refine_camera_intrinsics) | 1); }
    else { data->refine_camera_intrinsics = std::remove_reference_t<decltype(data->refine_camera_intrinsics)>(uint64_t(data->refine_camera_intrinsics) & ~uint64_t(1)); }
}

bool MovieTrackingSettings_refine_intrinsics_principal_point_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return ((uint64_t(data->refine_camera_intrinsics) & 2) != 0);
}

void MovieTrackingSettings_refine_intrinsics_principal_point_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->refine_camera_intrinsics = std::remove_reference_t<decltype(data->refine_camera_intrinsics)>(uint64_t(data->refine_camera_intrinsics) | 2); }
    else { data->refine_camera_intrinsics = std::remove_reference_t<decltype(data->refine_camera_intrinsics)>(uint64_t(data->refine_camera_intrinsics) & ~uint64_t(2)); }
}

bool MovieTrackingSettings_refine_intrinsics_radial_distortion_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return ((uint64_t(data->refine_camera_intrinsics) & 4) != 0);
}

void MovieTrackingSettings_refine_intrinsics_radial_distortion_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->refine_camera_intrinsics = std::remove_reference_t<decltype(data->refine_camera_intrinsics)>(uint64_t(data->refine_camera_intrinsics) | 4); }
    else { data->refine_camera_intrinsics = std::remove_reference_t<decltype(data->refine_camera_intrinsics)>(uint64_t(data->refine_camera_intrinsics) & ~uint64_t(4)); }
}

bool MovieTrackingSettings_refine_intrinsics_tangential_distortion_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return ((uint64_t(data->refine_camera_intrinsics) & 8) != 0);
}

void MovieTrackingSettings_refine_intrinsics_tangential_distortion_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->refine_camera_intrinsics = std::remove_reference_t<decltype(data->refine_camera_intrinsics)>(uint64_t(data->refine_camera_intrinsics) | 8); }
    else { data->refine_camera_intrinsics = std::remove_reference_t<decltype(data->refine_camera_intrinsics)>(uint64_t(data->refine_camera_intrinsics) & ~uint64_t(8)); }
}

float MovieTrackingSettings_distance_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (float)(data->dist);
}

void MovieTrackingSettings_distance_set(PointerRNA *ptr, float value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->dist = (std::remove_reference_t<decltype(data->dist)>)value;
}

int MovieTrackingSettings_clean_frames_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->clean_frames);
}

void MovieTrackingSettings_clean_frames_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->clean_frames = (std::remove_reference_t<decltype(data->clean_frames)>)std::clamp(value, 0, INT_MAX);
}

float MovieTrackingSettings_clean_error_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (float)(data->clean_error);
}

void MovieTrackingSettings_clean_error_set(PointerRNA *ptr, float value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->clean_error = (std::remove_reference_t<decltype(data->clean_error)>)std::clamp(value, 0.0f, FLT_MAX);
}

int MovieTrackingSettings_clean_action_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->clean_action);
}

void MovieTrackingSettings_clean_action_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->clean_action = (std::remove_reference_t<decltype(data->clean_action)>)value;
}

bool MovieTrackingSettings_use_tripod_solver_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return ((uint64_t(data->motion_flag) & 1) != 0);
}

void MovieTrackingSettings_use_tripod_solver_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->motion_flag = std::remove_reference_t<decltype(data->motion_flag)>(uint64_t(data->motion_flag) | 1); }
    else { data->motion_flag = std::remove_reference_t<decltype(data->motion_flag)>(uint64_t(data->motion_flag) & ~uint64_t(1)); }
}

int MovieTrackingSettings_default_frames_limit_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_frames_limit);
}

void MovieTrackingSettings_default_frames_limit_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->default_frames_limit = (std::remove_reference_t<decltype(data->default_frames_limit)>)std::clamp(value, 0, 32767);
}

int MovieTrackingSettings_default_pattern_match_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_pattern_match);
}

void MovieTrackingSettings_default_pattern_match_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->default_pattern_match = (std::remove_reference_t<decltype(data->default_pattern_match)>)value;
}

int MovieTrackingSettings_default_margin_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_margin);
}

void MovieTrackingSettings_default_margin_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->default_margin = (std::remove_reference_t<decltype(data->default_margin)>)std::clamp(value, 0, 300);
}

int MovieTrackingSettings_default_motion_model_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_motion_model);
}

void MovieTrackingSettings_default_motion_model_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->default_motion_model = (std::remove_reference_t<decltype(data->default_motion_model)>)value;
}

bool MovieTrackingSettings_use_default_brute_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return ((uint64_t(data->default_algorithm_flag) & 1) != 0);
}

void MovieTrackingSettings_use_default_brute_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->default_algorithm_flag = std::remove_reference_t<decltype(data->default_algorithm_flag)>(uint64_t(data->default_algorithm_flag) | 1); }
    else { data->default_algorithm_flag = std::remove_reference_t<decltype(data->default_algorithm_flag)>(uint64_t(data->default_algorithm_flag) & ~uint64_t(1)); }
}

bool MovieTrackingSettings_use_default_mask_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return ((uint64_t(data->default_algorithm_flag) & 8) != 0);
}

void MovieTrackingSettings_use_default_mask_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->default_algorithm_flag = std::remove_reference_t<decltype(data->default_algorithm_flag)>(uint64_t(data->default_algorithm_flag) | 8); }
    else { data->default_algorithm_flag = std::remove_reference_t<decltype(data->default_algorithm_flag)>(uint64_t(data->default_algorithm_flag) & ~uint64_t(8)); }
}

bool MovieTrackingSettings_use_default_normalization_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return ((uint64_t(data->default_algorithm_flag) & 4) != 0);
}

void MovieTrackingSettings_use_default_normalization_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->default_algorithm_flag = std::remove_reference_t<decltype(data->default_algorithm_flag)>(uint64_t(data->default_algorithm_flag) | 4); }
    else { data->default_algorithm_flag = std::remove_reference_t<decltype(data->default_algorithm_flag)>(uint64_t(data->default_algorithm_flag) & ~uint64_t(4)); }
}

float MovieTrackingSettings_default_correlation_min_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (float)(data->default_minimum_correlation);
}

void MovieTrackingSettings_default_correlation_min_set(PointerRNA *ptr, float value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->default_minimum_correlation = (std::remove_reference_t<decltype(data->default_minimum_correlation)>)std::clamp(value, 0.0f, 1.0f);
}

int MovieTrackingSettings_default_pattern_size_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_pattern_size);
}

void MovieTrackingSettings_default_pattern_size_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->default_pattern_size = (std::remove_reference_t<decltype(data->default_pattern_size)>)std::clamp(value, 5, 1000);
}

int MovieTrackingSettings_default_search_size_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_search_size);
}

void MovieTrackingSettings_default_search_size_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->default_search_size = (std::remove_reference_t<decltype(data->default_search_size)>)std::clamp(value, 5, 1000);
}

bool MovieTrackingSettings_use_default_red_channel_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return !((uint64_t(data->default_flag) & 4) != 0);
}

void MovieTrackingSettings_use_default_red_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (!value) { data->default_flag = std::remove_reference_t<decltype(data->default_flag)>(uint64_t(data->default_flag) | 4); }
    else { data->default_flag = std::remove_reference_t<decltype(data->default_flag)>(uint64_t(data->default_flag) & ~uint64_t(4)); }
}

bool MovieTrackingSettings_use_default_green_channel_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return !((uint64_t(data->default_flag) & 8) != 0);
}

void MovieTrackingSettings_use_default_green_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (!value) { data->default_flag = std::remove_reference_t<decltype(data->default_flag)>(uint64_t(data->default_flag) | 8); }
    else { data->default_flag = std::remove_reference_t<decltype(data->default_flag)>(uint64_t(data->default_flag) & ~uint64_t(8)); }
}

bool MovieTrackingSettings_use_default_blue_channel_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return !((uint64_t(data->default_flag) & 16) != 0);
}

void MovieTrackingSettings_use_default_blue_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (!value) { data->default_flag = std::remove_reference_t<decltype(data->default_flag)>(uint64_t(data->default_flag) | 16); }
    else { data->default_flag = std::remove_reference_t<decltype(data->default_flag)>(uint64_t(data->default_flag) & ~uint64_t(16)); }
}

float MovieTrackingSettings_default_weight_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (float)(data->default_weight);
}

void MovieTrackingSettings_default_weight_set(PointerRNA *ptr, float value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->default_weight = (std::remove_reference_t<decltype(data->default_weight)>)std::clamp(value, 0.0f, 1.0f);
}

float MovieTrackingSettings_object_distance_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (float)(data->object_distance);
}

void MovieTrackingSettings_object_distance_set(PointerRNA *ptr, float value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    data->object_distance = (std::remove_reference_t<decltype(data->object_distance)>)std::clamp(value, 0.0010000000f, 10000.0f);
}

static PointerRNA MovieTrackingCamera_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingCamera_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingCamera_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingCamera_rna_properties_get(iter);
    }
}

void MovieTrackingCamera_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingCamera_rna_properties_get(iter);
    }
}

void MovieTrackingCamera_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingCamera_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingCamera_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MovieTrackingCamera_distortion_model_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (int)(data->distortion_model);
}

void MovieTrackingCamera_distortion_model_set(PointerRNA *ptr, int value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->distortion_model = (std::remove_reference_t<decltype(data->distortion_model)>)value;
}

float MovieTrackingCamera_sensor_width_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->sensor_width);
}

void MovieTrackingCamera_sensor_width_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->sensor_width = (std::remove_reference_t<decltype(data->sensor_width)>)std::clamp(value, 0.0f, 500.0f);
}

float MovieTrackingCamera_focal_length_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_trackingCamera_focal_mm_get;
    return fn(ptr);
}

void MovieTrackingCamera_focal_length_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_trackingCamera_focal_mm_set;
    fn(ptr, value);
}

float MovieTrackingCamera_focal_length_pixels_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->focal);
}

void MovieTrackingCamera_focal_length_pixels_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->focal = (std::remove_reference_t<decltype(data->focal)>)std::clamp(value, 0.0f, FLT_MAX);
}

int MovieTrackingCamera_units_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (int)(data->units);
}

void MovieTrackingCamera_units_set(PointerRNA *ptr, int value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->units = (std::remove_reference_t<decltype(data->units)>)value;
}

void MovieTrackingCamera_principal_point_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->principal_point)[i]);
    }
}

void MovieTrackingCamera_principal_point_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->principal_point)[i] = std::clamp(values[i], -1.0f, 1.0f);
    }
}

void MovieTrackingCamera_principal_point_pixels_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_trackingCamera_principal_point_pixels_get;
    fn(ptr, values);
}

void MovieTrackingCamera_principal_point_pixels_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_trackingCamera_principal_point_pixels_set;
    fn(ptr, values);
}

float MovieTrackingCamera_k1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->k1);
}

void MovieTrackingCamera_k1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->k1 = (std::remove_reference_t<decltype(data->k1)>)value;
}

float MovieTrackingCamera_k2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->k2);
}

void MovieTrackingCamera_k2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->k2 = (std::remove_reference_t<decltype(data->k2)>)value;
}

float MovieTrackingCamera_k3_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->k3);
}

void MovieTrackingCamera_k3_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->k3 = (std::remove_reference_t<decltype(data->k3)>)value;
}

float MovieTrackingCamera_division_k1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->division_k1);
}

void MovieTrackingCamera_division_k1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->division_k1 = (std::remove_reference_t<decltype(data->division_k1)>)value;
}

float MovieTrackingCamera_division_k2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->division_k2);
}

void MovieTrackingCamera_division_k2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->division_k2 = (std::remove_reference_t<decltype(data->division_k2)>)value;
}

float MovieTrackingCamera_nuke_k1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->nuke_k1);
}

void MovieTrackingCamera_nuke_k1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->nuke_k1 = (std::remove_reference_t<decltype(data->nuke_k1)>)value;
}

float MovieTrackingCamera_nuke_k2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->nuke_k2);
}

void MovieTrackingCamera_nuke_k2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->nuke_k2 = (std::remove_reference_t<decltype(data->nuke_k2)>)value;
}

float MovieTrackingCamera_nuke_p1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->nuke_p1);
}

void MovieTrackingCamera_nuke_p1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->nuke_p1 = (std::remove_reference_t<decltype(data->nuke_p1)>)value;
}

float MovieTrackingCamera_nuke_p2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->nuke_p2);
}

void MovieTrackingCamera_nuke_p2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->nuke_p2 = (std::remove_reference_t<decltype(data->nuke_p2)>)value;
}

float MovieTrackingCamera_brown_k1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_k1);
}

void MovieTrackingCamera_brown_k1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->brown_k1 = (std::remove_reference_t<decltype(data->brown_k1)>)value;
}

float MovieTrackingCamera_brown_k2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_k2);
}

void MovieTrackingCamera_brown_k2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->brown_k2 = (std::remove_reference_t<decltype(data->brown_k2)>)value;
}

float MovieTrackingCamera_brown_k3_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_k3);
}

void MovieTrackingCamera_brown_k3_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->brown_k3 = (std::remove_reference_t<decltype(data->brown_k3)>)value;
}

float MovieTrackingCamera_brown_k4_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_k4);
}

void MovieTrackingCamera_brown_k4_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->brown_k4 = (std::remove_reference_t<decltype(data->brown_k4)>)value;
}

float MovieTrackingCamera_brown_p1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_p1);
}

void MovieTrackingCamera_brown_p1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->brown_p1 = (std::remove_reference_t<decltype(data->brown_p1)>)value;
}

float MovieTrackingCamera_brown_p2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_p2);
}

void MovieTrackingCamera_brown_p2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->brown_p2 = (std::remove_reference_t<decltype(data->brown_p2)>)value;
}

float MovieTrackingCamera_pixel_aspect_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->pixel_aspect);
}

void MovieTrackingCamera_pixel_aspect_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    data->pixel_aspect = (std::remove_reference_t<decltype(data->pixel_aspect)>)std::clamp(value, 0.1000000015f, FLT_MAX);
}

static PointerRNA MovieTrackingMarker_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingMarker_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingMarker_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingMarker_rna_properties_get(iter);
    }
}

void MovieTrackingMarker_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingMarker_rna_properties_get(iter);
    }
}

void MovieTrackingMarker_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingMarker_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingMarker_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MovieTrackingMarker_co_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->pos)[i]);
    }
}

void MovieTrackingMarker_co_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->pos)[i] = values[i];
    }
}

int MovieTrackingMarker_frame_get(PointerRNA *ptr)
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    return (int)(data->framenr);
}

void MovieTrackingMarker_frame_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_trackingMarker_frame_set;
    fn(ptr, value);
}

bool MovieTrackingMarker_mute_get(PointerRNA *ptr)
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MovieTrackingMarker_mute_set(PointerRNA *ptr, bool value)
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

void MovieTrackingMarker_pattern_corners_get(PointerRNA *ptr, float values[8])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 8; i++) {
        values[i] = (float)(((float *)data->pattern_corners)[i]);
    }
}

void MovieTrackingMarker_pattern_corners_set(PointerRNA *ptr, const float values[8])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 8; i++) {
        ((float *)data->pattern_corners)[i] = values[i];
    }
}

void MovieTrackingMarker_pattern_bound_box_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_tracking_markerPattern_boundbox_get;
    fn(ptr, values);
}

void MovieTrackingMarker_search_min_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->search_min)[i]);
    }
}

void MovieTrackingMarker_search_min_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->search_min)[i] = values[i];
    }
}

void MovieTrackingMarker_search_max_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->search_max)[i]);
    }
}

void MovieTrackingMarker_search_max_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->search_max)[i] = values[i];
    }
}

bool MovieTrackingMarker_is_keyed_get(PointerRNA *ptr)
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    return !((uint64_t(data->flag) & 2) != 0);
}

void MovieTrackingMarker_is_keyed_set(PointerRNA *ptr, bool value)
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

static PointerRNA MovieTrackingTrack_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingTrack_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingTrack_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingTrack_rna_properties_get(iter);
    }
}

void MovieTrackingTrack_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingTrack_rna_properties_get(iter);
    }
}

void MovieTrackingTrack_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingTrack_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingTrack_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MovieTrackingTrack_name_get(PointerRNA *ptr, char *value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    BLI_assert(strlen(data->name) < 256);
    strcpy(value, data->name);
}

int MovieTrackingTrack_name_length(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return strlen(data->name);
}

void MovieTrackingTrack_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_trackingTrack_name_set;
    fn(ptr, value);
}

int MovieTrackingTrack_frames_limit_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (int)(data->frames_limit);
}

void MovieTrackingTrack_frames_limit_set(PointerRNA *ptr, int value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    data->frames_limit = (std::remove_reference_t<decltype(data->frames_limit)>)std::clamp(value, 0, 32767);
}

int MovieTrackingTrack_pattern_match_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (int)(data->pattern_match);
}

void MovieTrackingTrack_pattern_match_set(PointerRNA *ptr, int value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    data->pattern_match = (std::remove_reference_t<decltype(data->pattern_match)>)value;
}

int MovieTrackingTrack_margin_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (int)(data->margin);
}

void MovieTrackingTrack_margin_set(PointerRNA *ptr, int value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    data->margin = (std::remove_reference_t<decltype(data->margin)>)std::clamp(value, 0, 300);
}

int MovieTrackingTrack_motion_model_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (int)(data->motion_model);
}

void MovieTrackingTrack_motion_model_set(PointerRNA *ptr, int value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    data->motion_model = (std::remove_reference_t<decltype(data->motion_model)>)value;
}

float MovieTrackingTrack_correlation_min_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (float)(data->minimum_correlation);
}

void MovieTrackingTrack_correlation_min_set(PointerRNA *ptr, float value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    data->minimum_correlation = (std::remove_reference_t<decltype(data->minimum_correlation)>)std::clamp(value, 0.0f, 1.0f);
}

bool MovieTrackingTrack_use_brute_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->algorithm_flag) & 1) != 0);
}

void MovieTrackingTrack_use_brute_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->algorithm_flag = std::remove_reference_t<decltype(data->algorithm_flag)>(uint64_t(data->algorithm_flag) | 1); }
    else { data->algorithm_flag = std::remove_reference_t<decltype(data->algorithm_flag)>(uint64_t(data->algorithm_flag) & ~uint64_t(1)); }
}

bool MovieTrackingTrack_use_mask_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->algorithm_flag) & 8) != 0);
}

void MovieTrackingTrack_use_mask_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->algorithm_flag = std::remove_reference_t<decltype(data->algorithm_flag)>(uint64_t(data->algorithm_flag) | 8); }
    else { data->algorithm_flag = std::remove_reference_t<decltype(data->algorithm_flag)>(uint64_t(data->algorithm_flag) & ~uint64_t(8)); }
}

bool MovieTrackingTrack_use_normalization_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->algorithm_flag) & 4) != 0);
}

void MovieTrackingTrack_use_normalization_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->algorithm_flag = std::remove_reference_t<decltype(data->algorithm_flag)>(uint64_t(data->algorithm_flag) | 4); }
    else { data->algorithm_flag = std::remove_reference_t<decltype(data->algorithm_flag)>(uint64_t(data->algorithm_flag) & ~uint64_t(4)); }
}

int MovieTrackingTrack_markers_length(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (data->markers == nullptr) ? 0 : data->markersnr;
}

static PointerRNA MovieTrackingTrack_markers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieTrackingMarker, rna_iterator_array_get(iter));
}

void MovieTrackingTrack_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingTrack_markers;

    rna_iterator_array_begin(iter, ptr, data->markers, sizeof(data->markers[0]), data->markersnr, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingTrack_markers_get(iter);
    }
}

void MovieTrackingTrack_markers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingTrack_markers_get(iter);
    }
}

void MovieTrackingTrack_markers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MovieTrackingTrack_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieTrackingTrack_markers_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieTrackingTrack_markers_get(&iter); }
    }

    MovieTrackingTrack_markers_end(&iter);

    return found;
}

bool MovieTrackingTrack_use_red_channel_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return !((uint64_t(data->flag) & 4) != 0);
}

void MovieTrackingTrack_use_red_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool MovieTrackingTrack_use_green_channel_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return !((uint64_t(data->flag) & 8) != 0);
}

void MovieTrackingTrack_use_green_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool MovieTrackingTrack_use_blue_channel_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return !((uint64_t(data->flag) & 16) != 0);
}

void MovieTrackingTrack_use_blue_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool MovieTrackingTrack_use_grayscale_preview_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void MovieTrackingTrack_use_grayscale_preview_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool MovieTrackingTrack_use_alpha_preview_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void MovieTrackingTrack_use_alpha_preview_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool MovieTrackingTrack_has_bundle_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void MovieTrackingTrack_bundle_get(PointerRNA *ptr, float values[3])
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->bundle_pos)[i]);
    }
}

bool MovieTrackingTrack_hide_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void MovieTrackingTrack_hide_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool MovieTrackingTrack_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_trackingTrack_select_get;
    return fn(ptr);
}

void MovieTrackingTrack_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_trackingTrack_select_set;
    fn(ptr, value);
}

bool MovieTrackingTrack_select_anchor_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MovieTrackingTrack_select_anchor_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool MovieTrackingTrack_select_pattern_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->pat_flag) & 1) != 0);
}

void MovieTrackingTrack_select_pattern_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->pat_flag = std::remove_reference_t<decltype(data->pat_flag)>(uint64_t(data->pat_flag) | 1); }
    else { data->pat_flag = std::remove_reference_t<decltype(data->pat_flag)>(uint64_t(data->pat_flag) & ~uint64_t(1)); }
}

bool MovieTrackingTrack_select_search_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->search_flag) & 1) != 0);
}

void MovieTrackingTrack_select_search_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->search_flag = std::remove_reference_t<decltype(data->search_flag)>(uint64_t(data->search_flag) | 1); }
    else { data->search_flag = std::remove_reference_t<decltype(data->search_flag)>(uint64_t(data->search_flag) & ~uint64_t(1)); }
}

bool MovieTrackingTrack_lock_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void MovieTrackingTrack_lock_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool MovieTrackingTrack_use_custom_color_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void MovieTrackingTrack_use_custom_color_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

void MovieTrackingTrack_color_get(PointerRNA *ptr, float values[3])
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void MovieTrackingTrack_color_set(PointerRNA *ptr, const float values[3])
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

float MovieTrackingTrack_average_error_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (float)(data->error);
}

PointerRNA MovieTrackingTrack_annotation_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Annotation, data->gpd);
}

void MovieTrackingTrack_annotation_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
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

float MovieTrackingTrack_weight_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (float)(data->weight);
}

void MovieTrackingTrack_weight_set(PointerRNA *ptr, float value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0f, 1.0f);
}

float MovieTrackingTrack_weight_stab_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (float)(data->weight_stab);
}

void MovieTrackingTrack_weight_stab_set(PointerRNA *ptr, float value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    data->weight_stab = (std::remove_reference_t<decltype(data->weight_stab)>)std::clamp(value, 0.0f, 1.0f);
}

void MovieTrackingTrack_offset_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->offset)[i]);
    }
}

void MovieTrackingTrack_offset_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->offset)[i] = values[i];
    }
}

static PointerRNA MovieTrackingMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingMarkers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingMarkers_rna_properties_get(iter);
    }
}

void MovieTrackingMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingMarkers_rna_properties_get(iter);
    }
}

void MovieTrackingMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingMarkers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA MovieTrackingPlaneMarker_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingPlaneMarker_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingPlaneMarker_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneMarker_rna_properties_get(iter);
    }
}

void MovieTrackingPlaneMarker_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneMarker_rna_properties_get(iter);
    }
}

void MovieTrackingPlaneMarker_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingPlaneMarker_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingPlaneMarker_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MovieTrackingPlaneMarker_frame_get(PointerRNA *ptr)
{
    MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
    return (int)(data->framenr);
}

void MovieTrackingPlaneMarker_frame_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_trackingPlaneMarker_frame_set;
    fn(ptr, value);
}

void MovieTrackingPlaneMarker_corners_get(PointerRNA *ptr, float values[8])
{
    MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 8; i++) {
        values[i] = (float)(((float *)data->corners)[i]);
    }
}

void MovieTrackingPlaneMarker_corners_set(PointerRNA *ptr, const float values[8])
{
    MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 8; i++) {
        ((float *)data->corners)[i] = values[i];
    }
}

bool MovieTrackingPlaneMarker_mute_get(PointerRNA *ptr)
{
    MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MovieTrackingPlaneMarker_mute_set(PointerRNA *ptr, bool value)
{
    MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

static PointerRNA MovieTrackingPlaneTrack_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingPlaneTrack_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingPlaneTrack_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTrack_rna_properties_get(iter);
    }
}

void MovieTrackingPlaneTrack_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTrack_rna_properties_get(iter);
    }
}

void MovieTrackingPlaneTrack_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingPlaneTrack_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingPlaneTrack_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MovieTrackingPlaneTrack_name_get(PointerRNA *ptr, char *value)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    BLI_assert(strlen(data->name) < 256);
    strcpy(value, data->name);
}

int MovieTrackingPlaneTrack_name_length(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return strlen(data->name);
}

void MovieTrackingPlaneTrack_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_trackingPlaneTrack_name_set;
    fn(ptr, value);
}

int MovieTrackingPlaneTrack_markers_length(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return (data->markers == nullptr) ? 0 : data->markersnr;
}

static PointerRNA MovieTrackingPlaneTrack_markers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieTrackingPlaneMarker, rna_iterator_array_get(iter));
}

void MovieTrackingPlaneTrack_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingPlaneTrack_markers;

    rna_iterator_array_begin(iter, ptr, data->markers, sizeof(data->markers[0]), data->markersnr, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTrack_markers_get(iter);
    }
}

void MovieTrackingPlaneTrack_markers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTrack_markers_get(iter);
    }
}

void MovieTrackingPlaneTrack_markers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MovieTrackingPlaneTrack_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieTrackingPlaneTrack_markers_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieTrackingPlaneTrack_markers_get(&iter); }
    }

    MovieTrackingPlaneTrack_markers_end(&iter);

    return found;
}

bool MovieTrackingPlaneTrack_select_get(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MovieTrackingPlaneTrack_select_set(PointerRNA *ptr, bool value)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool MovieTrackingPlaneTrack_use_auto_keying_get(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void MovieTrackingPlaneTrack_use_auto_keying_set(PointerRNA *ptr, bool value)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

PointerRNA MovieTrackingPlaneTrack_image_get(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Image, data->image);
}

void MovieTrackingPlaneTrack_image_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->image) {
        id_us_min((ID *)data->image);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->image = value.data;
}

float MovieTrackingPlaneTrack_image_opacity_get(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return (float)(data->image_opacity);
}

void MovieTrackingPlaneTrack_image_opacity_set(PointerRNA *ptr, float value)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    data->image_opacity = (std::remove_reference_t<decltype(data->image_opacity)>)std::clamp(value, 0.0f, 1.0f);
}

static PointerRNA MovieTrackingPlaneMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingPlaneMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingPlaneMarkers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneMarkers_rna_properties_get(iter);
    }
}

void MovieTrackingPlaneMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneMarkers_rna_properties_get(iter);
    }
}

void MovieTrackingPlaneMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingPlaneMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingPlaneMarkers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA MovieTrackingTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingTracks_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingTracks_rna_properties_get(iter);
    }
}

void MovieTrackingTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingTracks_rna_properties_get(iter);
    }
}

void MovieTrackingTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingTracks_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MovieTrackingTracks_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_tracking_active_track_get;
    return fn(ptr);
}

void MovieTrackingTracks_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_tracking_active_track_set;
    fn(ptr, value, reports);
}

static PointerRNA MovieTrackingPlaneTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingPlaneTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingPlaneTracks_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTracks_rna_properties_get(iter);
    }
}

void MovieTrackingPlaneTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTracks_rna_properties_get(iter);
    }
}

void MovieTrackingPlaneTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingPlaneTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingPlaneTracks_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MovieTrackingPlaneTracks_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_tracking_active_plane_track_get;
    return fn(ptr);
}

void MovieTrackingPlaneTracks_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_tracking_active_plane_track_set;
    fn(ptr, value, reports);
}

static PointerRNA MovieTrackingObjectTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingObjectTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingObjectTracks_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjectTracks_rna_properties_get(iter);
    }
}

void MovieTrackingObjectTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjectTracks_rna_properties_get(iter);
    }
}

void MovieTrackingObjectTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingObjectTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingObjectTracks_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MovieTrackingObjectTracks_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_tracking_object_active_track_get;
    return fn(ptr);
}

void MovieTrackingObjectTracks_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_tracking_object_active_track_set;
    fn(ptr, value, reports);
}

static PointerRNA MovieTrackingObjectPlaneTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingObjectPlaneTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingObjectPlaneTracks_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjectPlaneTracks_rna_properties_get(iter);
    }
}

void MovieTrackingObjectPlaneTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjectPlaneTracks_rna_properties_get(iter);
    }
}

void MovieTrackingObjectPlaneTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingObjectPlaneTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingObjectPlaneTracks_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MovieTrackingObjectPlaneTracks_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_tracking_object_active_plane_track_get;
    return fn(ptr);
}

void MovieTrackingObjectPlaneTracks_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_tracking_object_active_plane_track_set;
    fn(ptr, value, reports);
}

static PointerRNA MovieTrackingStabilization_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingStabilization_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingStabilization_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_rna_properties_get(iter);
    }
}

void MovieTrackingStabilization_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_rna_properties_get(iter);
    }
}

void MovieTrackingStabilization_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingStabilization_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingStabilization_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool MovieTrackingStabilization_use_2d_stabilization_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MovieTrackingStabilization_use_2d_stabilization_set(PointerRNA *ptr, bool value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool MovieTrackingStabilization_use_stabilize_rotation_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void MovieTrackingStabilization_use_stabilize_rotation_set(PointerRNA *ptr, bool value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool MovieTrackingStabilization_use_stabilize_scale_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void MovieTrackingStabilization_use_stabilize_scale_set(PointerRNA *ptr, bool value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

static PointerRNA MovieTrackingStabilization_tracks_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

void MovieTrackingStabilization_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingStabilization_tracks;

    PropCollectionBeginFunc fn = rna_tracking_stabTracks_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_tracks_get(iter);
    }
}

void MovieTrackingStabilization_tracks_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_tracks_get(iter);
    }
}

void MovieTrackingStabilization_tracks_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingStabilization_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieTrackingStabilization_tracks_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieTrackingStabilization_tracks_get(&iter); }
    }

    MovieTrackingStabilization_tracks_end(&iter);

    return found;
}

int MovieTrackingStabilization_active_track_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_tracking_stabTracks_active_index_get;
    return fn(ptr);
}

void MovieTrackingStabilization_active_track_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_tracking_stabTracks_active_index_set;
    fn(ptr, value);
}

static PointerRNA MovieTrackingStabilization_rotation_tracks_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

void MovieTrackingStabilization_rotation_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingStabilization_rotation_tracks;

    PropCollectionBeginFunc fn = rna_tracking_stabRotTracks_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_rotation_tracks_get(iter);
    }
}

void MovieTrackingStabilization_rotation_tracks_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_rotation_tracks_get(iter);
    }
}

void MovieTrackingStabilization_rotation_tracks_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingStabilization_rotation_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieTrackingStabilization_rotation_tracks_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieTrackingStabilization_rotation_tracks_get(&iter); }
    }

    MovieTrackingStabilization_rotation_tracks_end(&iter);

    return found;
}

int MovieTrackingStabilization_active_rotation_track_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_tracking_stabRotTracks_active_index_get;
    return fn(ptr);
}

void MovieTrackingStabilization_active_rotation_track_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_tracking_stabRotTracks_active_index_set;
    fn(ptr, value);
}

int MovieTrackingStabilization_anchor_frame_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (int)(data->anchor_frame);
}

void MovieTrackingStabilization_anchor_frame_set(PointerRNA *ptr, int value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    data->anchor_frame = (std::remove_reference_t<decltype(data->anchor_frame)>)std::clamp(value, 0, 1048574);
}

void MovieTrackingStabilization_target_position_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->target_pos)[i]);
    }
}

void MovieTrackingStabilization_target_position_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->target_pos)[i] = values[i];
    }
}

float MovieTrackingStabilization_target_rotation_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->target_rot);
}

void MovieTrackingStabilization_target_rotation_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    data->target_rot = (std::remove_reference_t<decltype(data->target_rot)>)value;
}

float MovieTrackingStabilization_target_scale_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->scale);
}

void MovieTrackingStabilization_target_scale_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    data->scale = (std::remove_reference_t<decltype(data->scale)>)std::clamp(value, 0.0000001192f, FLT_MAX);
}

bool MovieTrackingStabilization_use_autoscale_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void MovieTrackingStabilization_use_autoscale_set(PointerRNA *ptr, bool value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

float MovieTrackingStabilization_scale_max_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->maxscale);
}

void MovieTrackingStabilization_scale_max_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    data->maxscale = (std::remove_reference_t<decltype(data->maxscale)>)std::clamp(value, 0.0f, 10.0f);
}

float MovieTrackingStabilization_influence_location_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->locinf);
}

void MovieTrackingStabilization_influence_location_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    data->locinf = (std::remove_reference_t<decltype(data->locinf)>)std::clamp(value, 0.0f, 1.0f);
}

float MovieTrackingStabilization_influence_scale_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->scaleinf);
}

void MovieTrackingStabilization_influence_scale_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    data->scaleinf = (std::remove_reference_t<decltype(data->scaleinf)>)std::clamp(value, 0.0f, 1.0f);
}

float MovieTrackingStabilization_influence_rotation_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->rotinf);
}

void MovieTrackingStabilization_influence_rotation_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    data->rotinf = (std::remove_reference_t<decltype(data->rotinf)>)std::clamp(value, 0.0f, 1.0f);
}

int MovieTrackingStabilization_filter_type_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (int)(data->filter);
}

void MovieTrackingStabilization_filter_type_set(PointerRNA *ptr, int value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    data->filter = (std::remove_reference_t<decltype(data->filter)>)value;
}

bool MovieTrackingStabilization_show_tracks_expanded_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void MovieTrackingStabilization_show_tracks_expanded_set(PointerRNA *ptr, bool value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

static PointerRNA MovieTrackingReconstructedCameras_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingReconstructedCameras_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingReconstructedCameras_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstructedCameras_rna_properties_get(iter);
    }
}

void MovieTrackingReconstructedCameras_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstructedCameras_rna_properties_get(iter);
    }
}

void MovieTrackingReconstructedCameras_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingReconstructedCameras_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingReconstructedCameras_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA MovieReconstructedCamera_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieReconstructedCamera_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieReconstructedCamera_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieReconstructedCamera_rna_properties_get(iter);
    }
}

void MovieReconstructedCamera_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieReconstructedCamera_rna_properties_get(iter);
    }
}

void MovieReconstructedCamera_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieReconstructedCamera_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieReconstructedCamera_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MovieReconstructedCamera_frame_get(PointerRNA *ptr)
{
    MovieReconstructedCamera *data = (MovieReconstructedCamera *)(ptr->data);
    return (int)(data->framenr);
}

void MovieReconstructedCamera_matrix_get(PointerRNA *ptr, float values[16])
{
    MovieReconstructedCamera *data = (MovieReconstructedCamera *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->mat)[i]);
    }
}

float MovieReconstructedCamera_average_error_get(PointerRNA *ptr)
{
    MovieReconstructedCamera *data = (MovieReconstructedCamera *)(ptr->data);
    return (float)(data->error);
}

static PointerRNA MovieTrackingReconstruction_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingReconstruction_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingReconstruction_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstruction_rna_properties_get(iter);
    }
}

void MovieTrackingReconstruction_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstruction_rna_properties_get(iter);
    }
}

void MovieTrackingReconstruction_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingReconstruction_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingReconstruction_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool MovieTrackingReconstruction_is_valid_get(PointerRNA *ptr)
{
    MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

float MovieTrackingReconstruction_average_error_get(PointerRNA *ptr)
{
    MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);
    return (float)(data->error);
}

int MovieTrackingReconstruction_cameras_length(PointerRNA *ptr)
{
    MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);
    return (data->cameras == nullptr) ? 0 : data->camnr;
}

static PointerRNA MovieTrackingReconstruction_cameras_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieReconstructedCamera, rna_iterator_array_get(iter));
}

void MovieTrackingReconstruction_cameras_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingReconstruction_cameras;

    rna_iterator_array_begin(iter, ptr, data->cameras, sizeof(data->cameras[0]), data->camnr, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstruction_cameras_get(iter);
    }
}

void MovieTrackingReconstruction_cameras_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstruction_cameras_get(iter);
    }
}

void MovieTrackingReconstruction_cameras_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MovieTrackingReconstruction_cameras_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieTrackingReconstruction_cameras_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieTrackingReconstruction_cameras_get(&iter); }
    }

    MovieTrackingReconstruction_cameras_end(&iter);

    return found;
}

static PointerRNA MovieTrackingObject_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingObject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingObject_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_rna_properties_get(iter);
    }
}

void MovieTrackingObject_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_rna_properties_get(iter);
    }
}

void MovieTrackingObject_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingObject_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingObject_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MovieTrackingObject_name_get(PointerRNA *ptr, char *value)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    BLI_assert(strlen(data->name) < 256);
    strcpy(value, data->name);
}

int MovieTrackingObject_name_length(PointerRNA *ptr)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    return strlen(data->name);
}

void MovieTrackingObject_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_trackingObject_name_set;
    fn(ptr, value);
}

bool MovieTrackingObject_is_camera_get(PointerRNA *ptr)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

static PointerRNA MovieTrackingObject_tracks_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

void MovieTrackingObject_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingObject_tracks;

    PropCollectionBeginFunc fn = rna_trackingObject_tracks_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_tracks_get(iter);
    }
}

void MovieTrackingObject_tracks_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_tracks_get(iter);
    }
}

void MovieTrackingObject_tracks_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingObject_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieTrackingObject_tracks_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieTrackingObject_tracks_get(&iter); }
    }

    MovieTrackingObject_tracks_end(&iter);

    return found;
}

int MovieTrackingTrack_name_length(PointerRNA *);
void MovieTrackingTrack_name_get(PointerRNA *, char *);

bool MovieTrackingObject_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MovieTrackingObject_tracks_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MovieTrackingTrack_name_length(&iter.ptr);
            if (namelen < 1024) {
                MovieTrackingTrack_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                MovieTrackingTrack_name_get(&iter.ptr, name);
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
        MovieTrackingObject_tracks_next(&iter);
    }
    MovieTrackingObject_tracks_end(&iter);

    return found;
}

static PointerRNA MovieTrackingObject_plane_tracks_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieTrackingPlaneTrack, rna_iterator_listbase_get(iter));
}

void MovieTrackingObject_plane_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingObject_plane_tracks;

    PropCollectionBeginFunc fn = rna_trackingObject_plane_tracks_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_plane_tracks_get(iter);
    }
}

void MovieTrackingObject_plane_tracks_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_plane_tracks_get(iter);
    }
}

void MovieTrackingObject_plane_tracks_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingObject_plane_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieTrackingObject_plane_tracks_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieTrackingObject_plane_tracks_get(&iter); }
    }

    MovieTrackingObject_plane_tracks_end(&iter);

    return found;
}

int MovieTrackingPlaneTrack_name_length(PointerRNA *);
void MovieTrackingPlaneTrack_name_get(PointerRNA *, char *);

bool MovieTrackingObject_plane_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MovieTrackingObject_plane_tracks_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MovieTrackingPlaneTrack_name_length(&iter.ptr);
            if (namelen < 1024) {
                MovieTrackingPlaneTrack_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                MovieTrackingPlaneTrack_name_get(&iter.ptr, name);
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
        MovieTrackingObject_plane_tracks_next(&iter);
    }
    MovieTrackingObject_plane_tracks_end(&iter);

    return found;
}

PointerRNA MovieTrackingObject_reconstruction_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_trackingObject_reconstruction_get;
    return fn(ptr);
}

float MovieTrackingObject_scale_get(PointerRNA *ptr)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    return (float)(data->scale);
}

void MovieTrackingObject_scale_set(PointerRNA *ptr, float value)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    data->scale = (std::remove_reference_t<decltype(data->scale)>)std::clamp(value, 0.0001000000f, 10000.0f);
}

int MovieTrackingObject_keyframe_a_get(PointerRNA *ptr)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    return (int)(data->keyframe1);
}

void MovieTrackingObject_keyframe_a_set(PointerRNA *ptr, int value)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    data->keyframe1 = (std::remove_reference_t<decltype(data->keyframe1)>)value;
}

int MovieTrackingObject_keyframe_b_get(PointerRNA *ptr)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    return (int)(data->keyframe2);
}

void MovieTrackingObject_keyframe_b_set(PointerRNA *ptr, int value)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    data->keyframe2 = (std::remove_reference_t<decltype(data->keyframe2)>)value;
}

static PointerRNA MovieTrackingDopesheet_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingDopesheet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingDopesheet_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingDopesheet_rna_properties_get(iter);
    }
}

void MovieTrackingDopesheet_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingDopesheet_rna_properties_get(iter);
    }
}

void MovieTrackingDopesheet_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingDopesheet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingDopesheet_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MovieTrackingDopesheet_sort_method_get(PointerRNA *ptr)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    return (int)(data->sort_method);
}

void MovieTrackingDopesheet_sort_method_set(PointerRNA *ptr, int value)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    data->sort_method = (std::remove_reference_t<decltype(data->sort_method)>)value;
}

bool MovieTrackingDopesheet_use_invert_sort_get(PointerRNA *ptr)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MovieTrackingDopesheet_use_invert_sort_set(PointerRNA *ptr, bool value)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool MovieTrackingDopesheet_show_only_selected_get(PointerRNA *ptr)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void MovieTrackingDopesheet_show_only_selected_set(PointerRNA *ptr, bool value)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool MovieTrackingDopesheet_show_hidden_get(PointerRNA *ptr)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void MovieTrackingDopesheet_show_hidden_set(PointerRNA *ptr, bool value)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

static PointerRNA MovieTracking_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTracking_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTracking_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTracking_rna_properties_get(iter);
    }
}

void MovieTracking_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTracking_rna_properties_get(iter);
    }
}

void MovieTracking_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTracking_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTracking_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MovieTracking_settings_get(PointerRNA *ptr)
{
    MovieTracking *data = (MovieTracking *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieTrackingSettings, &data->settings);
}

PointerRNA MovieTracking_camera_get(PointerRNA *ptr)
{
    MovieTracking *data = (MovieTracking *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieTrackingCamera, &data->camera);
}

static PointerRNA MovieTracking_tracks_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

void MovieTracking_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTracking_tracks;

    PropCollectionBeginFunc fn = rna_trackingTracks_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTracking_tracks_get(iter);
    }
}

void MovieTracking_tracks_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTracking_tracks_get(iter);
    }
}

void MovieTracking_tracks_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTracking_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieTracking_tracks_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieTracking_tracks_get(&iter); }
    }

    MovieTracking_tracks_end(&iter);

    return found;
}

static PointerRNA MovieTracking_plane_tracks_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieTrackingPlaneTrack, rna_iterator_listbase_get(iter));
}

void MovieTracking_plane_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTracking_plane_tracks;

    PropCollectionBeginFunc fn = rna_trackingPlaneTracks_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTracking_plane_tracks_get(iter);
    }
}

void MovieTracking_plane_tracks_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTracking_plane_tracks_get(iter);
    }
}

void MovieTracking_plane_tracks_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTracking_plane_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieTracking_plane_tracks_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieTracking_plane_tracks_get(&iter); }
    }

    MovieTracking_plane_tracks_end(&iter);

    return found;
}

PointerRNA MovieTracking_stabilization_get(PointerRNA *ptr)
{
    MovieTracking *data = (MovieTracking *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieTrackingStabilization, &data->stabilization);
}

PointerRNA MovieTracking_reconstruction_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_trackingReconstruction_get;
    return fn(ptr);
}

static PointerRNA MovieTracking_objects_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieTrackingObject, rna_iterator_listbase_get(iter));
}

void MovieTracking_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTracking_objects;

    PropCollectionBeginFunc fn = rna_trackingObjects_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTracking_objects_get(iter);
    }
}

void MovieTracking_objects_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTracking_objects_get(iter);
    }
}

void MovieTracking_objects_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTracking_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieTracking_objects_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieTracking_objects_get(&iter); }
    }

    MovieTracking_objects_end(&iter);

    return found;
}

int MovieTrackingObject_name_length(PointerRNA *);
void MovieTrackingObject_name_get(PointerRNA *, char *);

bool MovieTracking_objects_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MovieTracking_objects_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MovieTrackingObject_name_length(&iter.ptr);
            if (namelen < 1024) {
                MovieTrackingObject_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                MovieTrackingObject_name_get(&iter.ptr, name);
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
        MovieTracking_objects_next(&iter);
    }
    MovieTracking_objects_end(&iter);

    return found;
}

int MovieTracking_active_object_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_tracking_active_object_index_get;
    return fn(ptr);
}

void MovieTracking_active_object_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_tracking_active_object_index_set;
    fn(ptr, value);
}

PointerRNA MovieTracking_dopesheet_get(PointerRNA *ptr)
{
    MovieTracking *data = (MovieTracking *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieTrackingDopesheet, &data->dopesheet);
}

static PointerRNA MovieTrackingObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MovieTrackingObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieTrackingObjects_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjects_rna_properties_get(iter);
    }
}

void MovieTrackingObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjects_rna_properties_get(iter);
    }
}

void MovieTrackingObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MovieTrackingObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MovieTrackingObjects_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MovieTrackingObjects_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_tracking_active_object_get;
    return fn(ptr);
}

void MovieTrackingObjects_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_tracking_active_object_set;
    fn(ptr, value, reports);
}





MovieTrackingMarker *MovieTrackingMarkers_find_frame_func(MovieTrackingTrack *_self, int frame, bool exact)
{
	return rna_trackingMarkers_find_frame(_self, frame, exact);
}

static void MovieTrackingMarkers_find_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MovieTrackingTrack *_self;
	int frame;
	bool exact;
	MovieTrackingMarker *marker;
	char *_data, *_retdata;
	
	_self = (MovieTrackingTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	exact = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	marker = rna_trackingMarkers_find_frame(_self, frame, exact);
	*((MovieTrackingMarker **)_retdata) = marker;
}

MovieTrackingMarker *MovieTrackingMarkers_insert_frame_func(MovieTrackingTrack *_self, int frame, float co[2])
{
	return rna_trackingMarkers_insert_frame(_self, frame, co);
}

static void MovieTrackingMarkers_insert_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MovieTrackingTrack *_self;
	int frame;
	const float *co;
	MovieTrackingMarker *marker;
	char *_data, *_retdata;
	
	_self = (MovieTrackingTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	co = ((const float *)_data);
	_data += 8;
	_retdata = _data;
	
	marker = rna_trackingMarkers_insert_frame(_self, frame, co);
	*((MovieTrackingMarker **)_retdata) = marker;
}

void MovieTrackingMarkers_delete_frame_func(MovieTrackingTrack *_self, int frame)
{
	rna_trackingMarkers_delete_frame(_self, frame);
}

static void MovieTrackingMarkers_delete_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MovieTrackingTrack *_self;
	int frame;
	char *_data;
	
	_self = (MovieTrackingTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	
	rna_trackingMarkers_delete_frame(_self, frame);
}

/* Repeated prototypes to detect errors */

MovieTrackingMarker *rna_trackingMarkers_find_frame(MovieTrackingTrack *_self, int frame, bool exact);
MovieTrackingMarker *rna_trackingMarkers_insert_frame(MovieTrackingTrack *_self, int frame, float co[2]);
void rna_trackingMarkers_delete_frame(MovieTrackingTrack *_self, int frame);



MovieTrackingPlaneMarker *MovieTrackingPlaneMarkers_find_frame_func(MovieTrackingPlaneTrack *_self, int frame, bool exact)
{
	return rna_trackingPlaneMarkers_find_frame(_self, frame, exact);
}

static void MovieTrackingPlaneMarkers_find_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MovieTrackingPlaneTrack *_self;
	int frame;
	bool exact;
	MovieTrackingPlaneMarker *plane_marker;
	char *_data, *_retdata;
	
	_self = (MovieTrackingPlaneTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	exact = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	plane_marker = rna_trackingPlaneMarkers_find_frame(_self, frame, exact);
	*((MovieTrackingPlaneMarker **)_retdata) = plane_marker;
}

MovieTrackingPlaneMarker *MovieTrackingPlaneMarkers_insert_frame_func(MovieTrackingPlaneTrack *_self, int frame)
{
	return rna_trackingPlaneMarkers_insert_frame(_self, frame);
}

static void MovieTrackingPlaneMarkers_insert_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MovieTrackingPlaneTrack *_self;
	int frame;
	MovieTrackingPlaneMarker *plane_marker;
	char *_data, *_retdata;
	
	_self = (MovieTrackingPlaneTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	plane_marker = rna_trackingPlaneMarkers_insert_frame(_self, frame);
	*((MovieTrackingPlaneMarker **)_retdata) = plane_marker;
}

void MovieTrackingPlaneMarkers_delete_frame_func(MovieTrackingPlaneTrack *_self, int frame)
{
	rna_trackingPlaneMarkers_delete_frame(_self, frame);
}

static void MovieTrackingPlaneMarkers_delete_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MovieTrackingPlaneTrack *_self;
	int frame;
	char *_data;
	
	_self = (MovieTrackingPlaneTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	
	rna_trackingPlaneMarkers_delete_frame(_self, frame);
}

/* Repeated prototypes to detect errors */

MovieTrackingPlaneMarker *rna_trackingPlaneMarkers_find_frame(MovieTrackingPlaneTrack *_self, int frame, bool exact);
MovieTrackingPlaneMarker *rna_trackingPlaneMarkers_insert_frame(MovieTrackingPlaneTrack *_self, int frame);
void rna_trackingPlaneMarkers_delete_frame(MovieTrackingPlaneTrack *_self, int frame);

MovieTrackingTrack *MovieTrackingTracks_new_func(ID *_selfid, MovieTracking *_self, const char * name, int frame)
{
	return rna_trackingTracks_new(_selfid, _self, name, frame);
}

static void MovieTrackingTracks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	MovieTracking *_self;
	const char * name;
	int frame;
	MovieTrackingTrack *track;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (MovieTracking *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	frame = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	track = rna_trackingTracks_new(_selfid, _self, name, frame);
	*((MovieTrackingTrack **)_retdata) = track;
}

/* Repeated prototypes to detect errors */

MovieTrackingTrack *rna_trackingTracks_new(ID *_selfid, MovieTracking *_self, const char * name, int frame);


MovieTrackingTrack *MovieTrackingObjectTracks_new_func(ID *_selfid, MovieTrackingObject *_self, const char * name, int frame)
{
	return rna_trackingObject_tracks_new(_selfid, _self, name, frame);
}

static void MovieTrackingObjectTracks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	MovieTrackingObject *_self;
	const char * name;
	int frame;
	MovieTrackingTrack *track;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (MovieTrackingObject *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	frame = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	track = rna_trackingObject_tracks_new(_selfid, _self, name, frame);
	*((MovieTrackingTrack **)_retdata) = track;
}

/* Repeated prototypes to detect errors */

MovieTrackingTrack *rna_trackingObject_tracks_new(ID *_selfid, MovieTrackingObject *_self, const char * name, int frame);



MovieReconstructedCamera *MovieTrackingReconstructedCameras_find_frame_func(ID *_selfid, MovieTrackingReconstruction *_self, int frame)
{
	return rna_trackingCameras_find_frame(_selfid, _self, frame);
}

static void MovieTrackingReconstructedCameras_find_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	MovieTrackingReconstruction *_self;
	int frame;
	MovieReconstructedCamera *camera;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (MovieTrackingReconstruction *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	camera = rna_trackingCameras_find_frame(_selfid, _self, frame);
	*((MovieReconstructedCamera **)_retdata) = camera;
}

void MovieTrackingReconstructedCameras_matrix_from_frame_func(ID *_selfid, MovieTrackingReconstruction *_self, int frame, float matrix[16])
{
	rna_trackingCameras_matrix_from_frame(_selfid, _self, frame, matrix);
}

static void MovieTrackingReconstructedCameras_matrix_from_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	MovieTrackingReconstruction *_self;
	int frame;
	float *matrix;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (MovieTrackingReconstruction *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	matrix = ((float *)_data);
	
	rna_trackingCameras_matrix_from_frame(_selfid, _self, frame, matrix);
}

/* Repeated prototypes to detect errors */

MovieReconstructedCamera *rna_trackingCameras_find_frame(ID *_selfid, MovieTrackingReconstruction *_self, int frame);
void rna_trackingCameras_matrix_from_frame(ID *_selfid, MovieTrackingReconstruction *_self, int frame, float matrix[16]);






MovieTrackingObject *MovieTrackingObjects_new_func(MovieTracking *_self, const char * name)
{
	return rna_trackingObject_new(_self, name);
}

static void MovieTrackingObjects_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MovieTracking *_self;
	const char * name;
	MovieTrackingObject *object;
	char *_data, *_retdata;
	
	_self = (MovieTracking *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	object = rna_trackingObject_new(_self, name);
	*((MovieTrackingObject **)_retdata) = object;
}

void MovieTrackingObjects_remove_func(MovieTracking *_self, ReportList *reports, PointerRNA *object)
{
	rna_trackingObject_remove(_self, reports, object);
}

static void MovieTrackingObjects_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MovieTracking *_self;
	PointerRNA *object;
	char *_data;
	
	_self = (MovieTracking *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((PointerRNA **)_data);
	
	rna_trackingObject_remove(_self, reports, object);
}

/* Repeated prototypes to detect errors */

MovieTrackingObject *rna_trackingObject_new(MovieTracking *_self, const char * name);
void rna_trackingObject_remove(MovieTracking *_self, ReportList *reports, PointerRNA *object);

/* Movie tracking settings */
static CollectionPropertyRNA rna_MovieTrackingSettings_rna_properties_;
PropertyRNA &rna_MovieTrackingSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingSettings_rna_type_;
PropertyRNA &rna_MovieTrackingSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_rna_type_);

static EnumPropertyRNA rna_MovieTrackingSettings_speed_;
PropertyRNA &rna_MovieTrackingSettings_speed = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_speed_);

static BoolPropertyRNA rna_MovieTrackingSettings_use_keyframe_selection_;
PropertyRNA &rna_MovieTrackingSettings_use_keyframe_selection = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_use_keyframe_selection_);

static BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_focal_length_;
PropertyRNA &rna_MovieTrackingSettings_refine_intrinsics_focal_length = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_refine_intrinsics_focal_length_);

static BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_principal_point_;
PropertyRNA &rna_MovieTrackingSettings_refine_intrinsics_principal_point = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_refine_intrinsics_principal_point_);

static BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_radial_distortion_;
PropertyRNA &rna_MovieTrackingSettings_refine_intrinsics_radial_distortion = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_refine_intrinsics_radial_distortion_);

static BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion_;
PropertyRNA &rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion_);

static FloatPropertyRNA rna_MovieTrackingSettings_distance_;
PropertyRNA &rna_MovieTrackingSettings_distance = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_distance_);

static IntPropertyRNA rna_MovieTrackingSettings_clean_frames_;
PropertyRNA &rna_MovieTrackingSettings_clean_frames = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_clean_frames_);

static FloatPropertyRNA rna_MovieTrackingSettings_clean_error_;
PropertyRNA &rna_MovieTrackingSettings_clean_error = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_clean_error_);

static EnumPropertyRNA rna_MovieTrackingSettings_clean_action_;
PropertyRNA &rna_MovieTrackingSettings_clean_action = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_clean_action_);

static BoolPropertyRNA rna_MovieTrackingSettings_use_tripod_solver_;
PropertyRNA &rna_MovieTrackingSettings_use_tripod_solver = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_use_tripod_solver_);

static IntPropertyRNA rna_MovieTrackingSettings_default_frames_limit_;
PropertyRNA &rna_MovieTrackingSettings_default_frames_limit = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_default_frames_limit_);

static EnumPropertyRNA rna_MovieTrackingSettings_default_pattern_match_;
PropertyRNA &rna_MovieTrackingSettings_default_pattern_match = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_default_pattern_match_);

static IntPropertyRNA rna_MovieTrackingSettings_default_margin_;
PropertyRNA &rna_MovieTrackingSettings_default_margin = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_default_margin_);

static EnumPropertyRNA rna_MovieTrackingSettings_default_motion_model_;
PropertyRNA &rna_MovieTrackingSettings_default_motion_model = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_default_motion_model_);

static BoolPropertyRNA rna_MovieTrackingSettings_use_default_brute_;
PropertyRNA &rna_MovieTrackingSettings_use_default_brute = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_use_default_brute_);

static BoolPropertyRNA rna_MovieTrackingSettings_use_default_mask_;
PropertyRNA &rna_MovieTrackingSettings_use_default_mask = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_use_default_mask_);

static BoolPropertyRNA rna_MovieTrackingSettings_use_default_normalization_;
PropertyRNA &rna_MovieTrackingSettings_use_default_normalization = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_use_default_normalization_);

static FloatPropertyRNA rna_MovieTrackingSettings_default_correlation_min_;
PropertyRNA &rna_MovieTrackingSettings_default_correlation_min = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_default_correlation_min_);

static IntPropertyRNA rna_MovieTrackingSettings_default_pattern_size_;
PropertyRNA &rna_MovieTrackingSettings_default_pattern_size = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_default_pattern_size_);

static IntPropertyRNA rna_MovieTrackingSettings_default_search_size_;
PropertyRNA &rna_MovieTrackingSettings_default_search_size = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_default_search_size_);

static BoolPropertyRNA rna_MovieTrackingSettings_use_default_red_channel_;
PropertyRNA &rna_MovieTrackingSettings_use_default_red_channel = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_use_default_red_channel_);

static BoolPropertyRNA rna_MovieTrackingSettings_use_default_green_channel_;
PropertyRNA &rna_MovieTrackingSettings_use_default_green_channel = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_use_default_green_channel_);

static BoolPropertyRNA rna_MovieTrackingSettings_use_default_blue_channel_;
PropertyRNA &rna_MovieTrackingSettings_use_default_blue_channel = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_use_default_blue_channel_);

static FloatPropertyRNA rna_MovieTrackingSettings_default_weight_;
PropertyRNA &rna_MovieTrackingSettings_default_weight = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_default_weight_);

static FloatPropertyRNA rna_MovieTrackingSettings_object_distance_;
PropertyRNA &rna_MovieTrackingSettings_object_distance = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingSettings_object_distance_);

StructRNA *RNA_MovieTrackingSettings;
void register_struct_MovieTrackingSettings(BlenderRNA &brna)
{
	rna_MovieTrackingSettings_rna_properties_ = {
		{&rna_MovieTrackingSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_rna_properties_begin, MovieTrackingSettings_rna_properties_next, MovieTrackingSettings_rna_properties_end, MovieTrackingSettings_rna_properties_get, nullptr, nullptr, MovieTrackingSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingSettings_rna_type_ = {
		{&rna_MovieTrackingSettings_speed, 	&rna_MovieTrackingSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_MovieTrackingSettings_speed_items[6] = {
		{0, "FASTEST", 0, "Fastest", "Track as fast as possible"	},
		{5, "DOUBLE", 0, "Double", "Track with double speed"	},
		{1, "REALTIME", 0, "Realtime", "Track with realtime speed"	},
		{2, "HALF", 0, "Half", "Track with half of realtime speed"	},
		{4, "QUARTER", 0, "Quarter", "Track with quarter of realtime speed"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieTrackingSettings_speed_ = {
		{&rna_MovieTrackingSettings_use_keyframe_selection, 	&rna_MovieTrackingSettings_rna_type,
		-1, "speed", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Speed",
		"Limit speed of tracking to make visual feedback easier (this does not affect the tracking quality)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, speed), RawPropertyType(1), nullptr},
		MovieTrackingSettings_speed_get, MovieTrackingSettings_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieTrackingSettings_speed_items, 5, 0
	};

	rna_MovieTrackingSettings_use_keyframe_selection_ = {
		{&rna_MovieTrackingSettings_refine_intrinsics_focal_length, 	&rna_MovieTrackingSettings_speed,
		-1, "use_keyframe_selection", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Keyframe Selection",
		"Automatically select keyframes when solving camera/object motion",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_use_keyframe_selection_get, MovieTrackingSettings_use_keyframe_selection_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_refine_intrinsics_focal_length_ = {
		{&rna_MovieTrackingSettings_refine_intrinsics_principal_point, 	&rna_MovieTrackingSettings_use_keyframe_selection,
		-1, "refine_intrinsics_focal_length", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Refine Focal Length",
		"Refine focal length during camera solving",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_refine_intrinsics_focal_length_get, MovieTrackingSettings_refine_intrinsics_focal_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_refine_intrinsics_principal_point_ = {
		{&rna_MovieTrackingSettings_refine_intrinsics_radial_distortion, 	&rna_MovieTrackingSettings_refine_intrinsics_focal_length,
		-1, "refine_intrinsics_principal_point", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Refine Principal Point",
		"Refine principal point during camera solving",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_refine_intrinsics_principal_point_get, MovieTrackingSettings_refine_intrinsics_principal_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_refine_intrinsics_radial_distortion_ = {
		{&rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion, 	&rna_MovieTrackingSettings_refine_intrinsics_principal_point,
		-1, "refine_intrinsics_radial_distortion", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Refine Radial",
		"Refine radial coefficients of distortion model during camera solving",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_refine_intrinsics_radial_distortion_get, MovieTrackingSettings_refine_intrinsics_radial_distortion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion_ = {
		{&rna_MovieTrackingSettings_distance, 	&rna_MovieTrackingSettings_refine_intrinsics_radial_distortion,
		-1, "refine_intrinsics_tangential_distortion", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Refine Tangential",
		"Refine tangential coefficients of distortion model during camera solving",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_refine_intrinsics_tangential_distortion_get, MovieTrackingSettings_refine_intrinsics_tangential_distortion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_distance_ = {
		{&rna_MovieTrackingSettings_clean_frames, 	&rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion,
		-1, "distance", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Distance",
		"Distance between two bundles used for scene scaling",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, dist), RawPropertyType(5), nullptr},
		MovieTrackingSettings_distance_get, MovieTrackingSettings_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MovieTrackingSettings_clean_frames_ = {
		{&rna_MovieTrackingSettings_clean_error, 	&rna_MovieTrackingSettings_distance,
		-1, "clean_frames", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tracked Frames",
		"Effect on tracks which are tracked less than the specified amount of frames",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, clean_frames), RawPropertyType(0), nullptr},
		MovieTrackingSettings_clean_frames_get, MovieTrackingSettings_clean_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_clean_error_ = {
		{&rna_MovieTrackingSettings_clean_action, 	&rna_MovieTrackingSettings_clean_frames,
		-1, "clean_error", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Reprojection Error",
		"Effect on tracks which have a larger re-projection error",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, clean_error), RawPropertyType(5), nullptr},
		MovieTrackingSettings_clean_error_get, MovieTrackingSettings_clean_error_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_MovieTrackingSettings_clean_action_items[4] = {
		{0, "SELECT", 0, "Select", "Select unclean tracks"	},
		{1, "DELETE_TRACK", 0, "Delete Track", "Delete unclean tracks"	},
		{2, "DELETE_SEGMENTS", 0, "Delete Segments", "Delete unclean segments of tracks"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieTrackingSettings_clean_action_ = {
		{&rna_MovieTrackingSettings_use_tripod_solver, 	&rna_MovieTrackingSettings_clean_error,
		-1, "clean_action", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Action",
		"Cleanup action to execute",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, clean_action), RawPropertyType(0), nullptr},
		MovieTrackingSettings_clean_action_get, MovieTrackingSettings_clean_action_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieTrackingSettings_clean_action_items, 3, 0
	};

	rna_MovieTrackingSettings_use_tripod_solver_ = {
		{&rna_MovieTrackingSettings_default_frames_limit, 	&rna_MovieTrackingSettings_clean_action,
		-1, "use_tripod_solver", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tripod Motion",
		"Use special solver to track a stable camera position, such as a tripod",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_use_tripod_solver_get, MovieTrackingSettings_use_tripod_solver_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_default_frames_limit_ = {
		{&rna_MovieTrackingSettings_default_pattern_match, 	&rna_MovieTrackingSettings_use_tripod_solver,
		-1, "default_frames_limit", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frames Limit",
		"Every tracking cycle, this number of frames are tracked",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, default_frames_limit), RawPropertyType(1), nullptr},
		MovieTrackingSettings_default_frames_limit_get, MovieTrackingSettings_default_frames_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_MovieTrackingSettings_default_pattern_match_items[3] = {
		{0, "KEYFRAME", 0, "Keyframe", "Track pattern from keyframe to next frame"	},
		{1, "PREV_FRAME", 0, "Previous frame", "Track pattern from current frame to next frame"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieTrackingSettings_default_pattern_match_ = {
		{&rna_MovieTrackingSettings_default_margin, 	&rna_MovieTrackingSettings_default_frames_limit,
		-1, "default_pattern_match", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pattern Match",
		"Track pattern from given frame when tracking marker to next frame",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, default_pattern_match), RawPropertyType(1), nullptr},
		MovieTrackingSettings_default_pattern_match_get, MovieTrackingSettings_default_pattern_match_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieTrackingSettings_default_pattern_match_items, 2, 0
	};

	rna_MovieTrackingSettings_default_margin_ = {
		{&rna_MovieTrackingSettings_default_motion_model, 	&rna_MovieTrackingSettings_default_pattern_match,
		-1, "default_margin", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Margin",
		"Default distance from image boundary at which marker stops tracking",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, default_margin), RawPropertyType(1), nullptr},
		MovieTrackingSettings_default_margin_get, MovieTrackingSettings_default_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 300, 0, 300, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_MovieTrackingSettings_default_motion_model_items[7] = {
		{5, "Perspective", 0, "Perspective", "Search for markers that are perspectively deformed (homography) between frames"	},
		{4, "Affine", 0, "Affine", "Search for markers that are affine-deformed (t, r, k, and skew) between frames"	},
		{3, "LocRotScale", 0, "Location, Rotation & Scale", "Search for markers that are translated, rotated, and scaled between frames"	},
		{2, "LocScale", 0, "Location & Scale", "Search for markers that are translated and scaled between frames"	},
		{1, "LocRot", 0, "Location & Rotation", "Search for markers that are translated and rotated between frames"	},
		{0, "Loc", 0, "Location", "Search for markers that are translated between frames"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieTrackingSettings_default_motion_model_ = {
		{&rna_MovieTrackingSettings_use_default_brute, 	&rna_MovieTrackingSettings_default_margin,
		-1, "default_motion_model", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Motion Model",
		"Default motion model to use for tracking",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, default_motion_model), RawPropertyType(1), nullptr},
		MovieTrackingSettings_default_motion_model_get, MovieTrackingSettings_default_motion_model_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieTrackingSettings_default_motion_model_items, 6, 0
	};

	rna_MovieTrackingSettings_use_default_brute_ = {
		{&rna_MovieTrackingSettings_use_default_mask, 	&rna_MovieTrackingSettings_default_motion_model,
		-1, "use_default_brute", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Prepass",
		"Use a brute-force translation-only initialization when tracking",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_use_default_brute_get, MovieTrackingSettings_use_default_brute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_use_default_mask_ = {
		{&rna_MovieTrackingSettings_use_default_normalization, 	&rna_MovieTrackingSettings_use_default_brute,
		-1, "use_default_mask", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Mask",
		"Use a Grease Pencil data-block as a mask to use only specified areas of pattern when tracking",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_use_default_mask_get, MovieTrackingSettings_use_default_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_use_default_normalization_ = {
		{&rna_MovieTrackingSettings_default_correlation_min, 	&rna_MovieTrackingSettings_use_default_mask,
		-1, "use_default_normalization", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Normalize",
		"Normalize light intensities while tracking (slower)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_use_default_normalization_get, MovieTrackingSettings_use_default_normalization_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_default_correlation_min_ = {
		{&rna_MovieTrackingSettings_default_pattern_size, 	&rna_MovieTrackingSettings_use_default_normalization,
		-1, "default_correlation_min", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Correlation",
		"Default minimum value of correlation between matched pattern and reference that is still treated as successful tracking",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, default_minimum_correlation), RawPropertyType(5), nullptr},
		MovieTrackingSettings_default_correlation_min_get, MovieTrackingSettings_default_correlation_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingSettings_default_pattern_size_ = {
		{&rna_MovieTrackingSettings_default_search_size, 	&rna_MovieTrackingSettings_default_correlation_min,
		-1, "default_pattern_size", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pattern Size",
		"Size of pattern area for newly created tracks",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_defaultSettings_patternUpdate, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, default_pattern_size), RawPropertyType(1), nullptr},
		MovieTrackingSettings_default_pattern_size_get, MovieTrackingSettings_default_pattern_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 5, 1000, 5, 1000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_default_search_size_ = {
		{&rna_MovieTrackingSettings_use_default_red_channel, 	&rna_MovieTrackingSettings_default_pattern_size,
		-1, "default_search_size", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Search Size",
		"Size of search area for newly created tracks",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_defaultSettings_searchUpdate, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, default_search_size), RawPropertyType(1), nullptr},
		MovieTrackingSettings_default_search_size_get, MovieTrackingSettings_default_search_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 5, 1000, 5, 1000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingSettings_use_default_red_channel_ = {
		{&rna_MovieTrackingSettings_use_default_green_channel, 	&rna_MovieTrackingSettings_default_search_size,
		-1, "use_default_red_channel", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Red Channel",
		"Use red channel from footage for tracking",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_use_default_red_channel_get, MovieTrackingSettings_use_default_red_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_MovieTrackingSettings_use_default_green_channel_ = {
		{&rna_MovieTrackingSettings_use_default_blue_channel, 	&rna_MovieTrackingSettings_use_default_red_channel,
		-1, "use_default_green_channel", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Green Channel",
		"Use green channel from footage for tracking",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_use_default_green_channel_get, MovieTrackingSettings_use_default_green_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_MovieTrackingSettings_use_default_blue_channel_ = {
		{&rna_MovieTrackingSettings_default_weight, 	&rna_MovieTrackingSettings_use_default_green_channel,
		-1, "use_default_blue_channel", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Blue Channel",
		"Use blue channel from footage for tracking",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingSettings_use_default_blue_channel_get, MovieTrackingSettings_use_default_blue_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_MovieTrackingSettings_default_weight_ = {
		{&rna_MovieTrackingSettings_object_distance, 	&rna_MovieTrackingSettings_use_default_blue_channel,
		-1, "default_weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Influence of newly created track on a final solution",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, default_weight), RawPropertyType(5), nullptr},
		MovieTrackingSettings_default_weight_get, MovieTrackingSettings_default_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingSettings_object_distance_ = {
		{nullptr, 	&rna_MovieTrackingSettings_default_weight,
		-1, "object_distance", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Distance",
		"Distance between two bundles used for object scaling",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingSettings, object_distance), RawPropertyType(5), nullptr},
		MovieTrackingSettings_object_distance_get, MovieTrackingSettings_object_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 10000.0f, 0.0010000000f, 10000.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	StructRNA *srna = RNA_MovieTrackingSettings;
	srna->cont.properties = {&rna_MovieTrackingSettings_rna_properties, &rna_MovieTrackingSettings_object_distance};
	srna->identifier = "MovieTrackingSettings";
	srna->flag = 516;
	srna->name = "Movie tracking settings";
	srna->description = "Match moving settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingSettings_rna_properties;
	srna->path = rna_trackingSettings_path;
};

/* Movie tracking camera data */
static CollectionPropertyRNA rna_MovieTrackingCamera_rna_properties_;
PropertyRNA &rna_MovieTrackingCamera_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingCamera_rna_type_;
PropertyRNA &rna_MovieTrackingCamera_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_rna_type_);

static EnumPropertyRNA rna_MovieTrackingCamera_distortion_model_;
PropertyRNA &rna_MovieTrackingCamera_distortion_model = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_distortion_model_);

static FloatPropertyRNA rna_MovieTrackingCamera_sensor_width_;
PropertyRNA &rna_MovieTrackingCamera_sensor_width = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_sensor_width_);

static FloatPropertyRNA rna_MovieTrackingCamera_focal_length_;
PropertyRNA &rna_MovieTrackingCamera_focal_length = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_focal_length_);

static FloatPropertyRNA rna_MovieTrackingCamera_focal_length_pixels_;
PropertyRNA &rna_MovieTrackingCamera_focal_length_pixels = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_focal_length_pixels_);

static EnumPropertyRNA rna_MovieTrackingCamera_units_;
PropertyRNA &rna_MovieTrackingCamera_units = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_units_);

static FloatPropertyRNA rna_MovieTrackingCamera_principal_point_;
PropertyRNA &rna_MovieTrackingCamera_principal_point = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_principal_point_);

static FloatPropertyRNA rna_MovieTrackingCamera_principal_point_pixels_;
PropertyRNA &rna_MovieTrackingCamera_principal_point_pixels = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_principal_point_pixels_);

static FloatPropertyRNA rna_MovieTrackingCamera_k1_;
PropertyRNA &rna_MovieTrackingCamera_k1 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_k1_);

static FloatPropertyRNA rna_MovieTrackingCamera_k2_;
PropertyRNA &rna_MovieTrackingCamera_k2 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_k2_);

static FloatPropertyRNA rna_MovieTrackingCamera_k3_;
PropertyRNA &rna_MovieTrackingCamera_k3 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_k3_);

static FloatPropertyRNA rna_MovieTrackingCamera_division_k1_;
PropertyRNA &rna_MovieTrackingCamera_division_k1 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_division_k1_);

static FloatPropertyRNA rna_MovieTrackingCamera_division_k2_;
PropertyRNA &rna_MovieTrackingCamera_division_k2 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_division_k2_);

static FloatPropertyRNA rna_MovieTrackingCamera_nuke_k1_;
PropertyRNA &rna_MovieTrackingCamera_nuke_k1 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_nuke_k1_);

static FloatPropertyRNA rna_MovieTrackingCamera_nuke_k2_;
PropertyRNA &rna_MovieTrackingCamera_nuke_k2 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_nuke_k2_);

static FloatPropertyRNA rna_MovieTrackingCamera_nuke_p1_;
PropertyRNA &rna_MovieTrackingCamera_nuke_p1 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_nuke_p1_);

static FloatPropertyRNA rna_MovieTrackingCamera_nuke_p2_;
PropertyRNA &rna_MovieTrackingCamera_nuke_p2 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_nuke_p2_);

static FloatPropertyRNA rna_MovieTrackingCamera_brown_k1_;
PropertyRNA &rna_MovieTrackingCamera_brown_k1 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_brown_k1_);

static FloatPropertyRNA rna_MovieTrackingCamera_brown_k2_;
PropertyRNA &rna_MovieTrackingCamera_brown_k2 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_brown_k2_);

static FloatPropertyRNA rna_MovieTrackingCamera_brown_k3_;
PropertyRNA &rna_MovieTrackingCamera_brown_k3 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_brown_k3_);

static FloatPropertyRNA rna_MovieTrackingCamera_brown_k4_;
PropertyRNA &rna_MovieTrackingCamera_brown_k4 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_brown_k4_);

static FloatPropertyRNA rna_MovieTrackingCamera_brown_p1_;
PropertyRNA &rna_MovieTrackingCamera_brown_p1 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_brown_p1_);

static FloatPropertyRNA rna_MovieTrackingCamera_brown_p2_;
PropertyRNA &rna_MovieTrackingCamera_brown_p2 = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_brown_p2_);

static FloatPropertyRNA rna_MovieTrackingCamera_pixel_aspect_;
PropertyRNA &rna_MovieTrackingCamera_pixel_aspect = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingCamera_pixel_aspect_);

StructRNA *RNA_MovieTrackingCamera;
void register_struct_MovieTrackingCamera(BlenderRNA &brna)
{
	rna_MovieTrackingCamera_rna_properties_ = {
		{&rna_MovieTrackingCamera_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingCamera_rna_properties_begin, MovieTrackingCamera_rna_properties_next, MovieTrackingCamera_rna_properties_end, MovieTrackingCamera_rna_properties_get, nullptr, nullptr, MovieTrackingCamera_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingCamera_rna_type_ = {
		{&rna_MovieTrackingCamera_distortion_model, 	&rna_MovieTrackingCamera_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingCamera_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_MovieTrackingCamera_distortion_model_items[5] = {
		{0, "POLYNOMIAL", 0, "Polynomial", "Radial distortion model which fits common cameras"	},
		{1, "DIVISION", 0, "Divisions", "Division distortion model which better represents wide-angle cameras"	},
		{2, "NUKE", 0, "Nuke", "Nuke distortion model"	},
		{3, "BROWN", 0, "Brown", "Brown-Conrady distortion model"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieTrackingCamera_distortion_model_ = {
		{&rna_MovieTrackingCamera_sensor_width, 	&rna_MovieTrackingCamera_rna_type,
		-1, "distortion_model", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Distortion Model",
		"Distortion model used for camera lenses",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_resetIntrinsics, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, distortion_model), RawPropertyType(1), nullptr},
		MovieTrackingCamera_distortion_model_get, MovieTrackingCamera_distortion_model_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieTrackingCamera_distortion_model_items, 4, 0
	};

	rna_MovieTrackingCamera_sensor_width_ = {
		{&rna_MovieTrackingCamera_focal_length, 	&rna_MovieTrackingCamera_distortion_model,
		-1, "sensor_width", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sensor",
		"Width of CCD sensor in millimeters",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, sensor_width), RawPropertyType(5), nullptr},
		MovieTrackingCamera_sensor_width_get, MovieTrackingCamera_sensor_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 500.0f, 0.0f, 500.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_focal_length_ = {
		{&rna_MovieTrackingCamera_focal_length_pixels, 	&rna_MovieTrackingCamera_sensor_width,
		-1, "focal_length", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Focal Length",
		"Camera\'s focal length",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingCamera_focal_length_get, MovieTrackingCamera_focal_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 5000.0f, 0.0001000000f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_focal_length_pixels_ = {
		{&rna_MovieTrackingCamera_units, 	&rna_MovieTrackingCamera_focal_length,
		-1, "focal_length_pixels", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Focal Length",
		"Camera\'s focal length",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, focal), RawPropertyType(5), nullptr},
		MovieTrackingCamera_focal_length_pixels_get, MovieTrackingCamera_focal_length_pixels_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5000.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_MovieTrackingCamera_units_items[3] = {
		{0, "PIXELS", 0, "px", "Use pixels for units of focal length"	},
		{1, "MILLIMETERS", 0, "mm", "Use millimeters for units of focal length"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieTrackingCamera_units_ = {
		{&rna_MovieTrackingCamera_principal_point, 	&rna_MovieTrackingCamera_focal_length_pixels,
		-1, "units", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Units",
		"Units used for camera focal length",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, units), RawPropertyType(1), nullptr},
		MovieTrackingCamera_units_get, MovieTrackingCamera_units_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieTrackingCamera_units_items, 2, 0
	};

	static float rna_MovieTrackingCamera_principal_point_default[2] = {
		0.0f,
		0.0f
	};
	rna_MovieTrackingCamera_principal_point_ = {
		{&rna_MovieTrackingCamera_principal_point_pixels, 	&rna_MovieTrackingCamera_units,
		-1, "principal_point", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Principal Point",
		"Optical center of lens",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, principal_point), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieTrackingCamera_principal_point_get, MovieTrackingCamera_principal_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, rna_MovieTrackingCamera_principal_point_default
	};

	static float rna_MovieTrackingCamera_principal_point_pixels_default[2] = {
		0.0f,
		0.0f
	};
	rna_MovieTrackingCamera_principal_point_pixels_ = {
		{&rna_MovieTrackingCamera_k1, 	&rna_MovieTrackingCamera_principal_point,
		-1, "principal_point_pixels", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Principal Point",
		"Optical center of lens in pixels",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MovieTrackingCamera_principal_point_pixels_get, MovieTrackingCamera_principal_point_pixels_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MovieTrackingCamera_principal_point_pixels_default
	};

	rna_MovieTrackingCamera_k1_ = {
		{&rna_MovieTrackingCamera_k2, 	&rna_MovieTrackingCamera_principal_point_pixels,
		-1, "k1", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K1",
		"First coefficient of third order polynomial radial distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, k1), RawPropertyType(5), nullptr},
		MovieTrackingCamera_k1_get, MovieTrackingCamera_k1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_k2_ = {
		{&rna_MovieTrackingCamera_k3, 	&rna_MovieTrackingCamera_k1,
		-1, "k2", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K2",
		"Second coefficient of third order polynomial radial distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, k2), RawPropertyType(5), nullptr},
		MovieTrackingCamera_k2_get, MovieTrackingCamera_k2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_k3_ = {
		{&rna_MovieTrackingCamera_division_k1, 	&rna_MovieTrackingCamera_k2,
		-1, "k3", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K3",
		"Third coefficient of third order polynomial radial distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, k3), RawPropertyType(5), nullptr},
		MovieTrackingCamera_k3_get, MovieTrackingCamera_k3_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_division_k1_ = {
		{&rna_MovieTrackingCamera_division_k2, 	&rna_MovieTrackingCamera_k3,
		-1, "division_k1", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K1",
		"First coefficient of second order division distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, division_k1), RawPropertyType(5), nullptr},
		MovieTrackingCamera_division_k1_get, MovieTrackingCamera_division_k1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_division_k2_ = {
		{&rna_MovieTrackingCamera_nuke_k1, 	&rna_MovieTrackingCamera_division_k1,
		-1, "division_k2", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K2",
		"Second coefficient of second order division distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, division_k2), RawPropertyType(5), nullptr},
		MovieTrackingCamera_division_k2_get, MovieTrackingCamera_division_k2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_nuke_k1_ = {
		{&rna_MovieTrackingCamera_nuke_k2, 	&rna_MovieTrackingCamera_division_k2,
		-1, "nuke_k1", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K1",
		"First coefficient of second order Nuke distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, nuke_k1), RawPropertyType(5), nullptr},
		MovieTrackingCamera_nuke_k1_get, MovieTrackingCamera_nuke_k1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_nuke_k2_ = {
		{&rna_MovieTrackingCamera_nuke_p1, 	&rna_MovieTrackingCamera_nuke_k1,
		-1, "nuke_k2", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K2",
		"Second coefficient of second order Nuke distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, nuke_k2), RawPropertyType(5), nullptr},
		MovieTrackingCamera_nuke_k2_get, MovieTrackingCamera_nuke_k2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_nuke_p1_ = {
		{&rna_MovieTrackingCamera_nuke_p2, 	&rna_MovieTrackingCamera_nuke_k2,
		-1, "nuke_p1", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "P1",
		"First coefficient of tangential Nuke distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, nuke_p1), RawPropertyType(5), nullptr},
		MovieTrackingCamera_nuke_p1_get, MovieTrackingCamera_nuke_p1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_nuke_p2_ = {
		{&rna_MovieTrackingCamera_brown_k1, 	&rna_MovieTrackingCamera_nuke_p1,
		-1, "nuke_p2", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "P2",
		"Second coefficient of tangential Nuke distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, nuke_p2), RawPropertyType(5), nullptr},
		MovieTrackingCamera_nuke_p2_get, MovieTrackingCamera_nuke_p2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_brown_k1_ = {
		{&rna_MovieTrackingCamera_brown_k2, 	&rna_MovieTrackingCamera_nuke_p2,
		-1, "brown_k1", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K1",
		"First coefficient of fourth order Brown-Conrady radial distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, brown_k1), RawPropertyType(5), nullptr},
		MovieTrackingCamera_brown_k1_get, MovieTrackingCamera_brown_k1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_brown_k2_ = {
		{&rna_MovieTrackingCamera_brown_k3, 	&rna_MovieTrackingCamera_brown_k1,
		-1, "brown_k2", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K2",
		"Second coefficient of fourth order Brown-Conrady radial distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, brown_k2), RawPropertyType(5), nullptr},
		MovieTrackingCamera_brown_k2_get, MovieTrackingCamera_brown_k2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_brown_k3_ = {
		{&rna_MovieTrackingCamera_brown_k4, 	&rna_MovieTrackingCamera_brown_k2,
		-1, "brown_k3", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K3",
		"Third coefficient of fourth order Brown-Conrady radial distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, brown_k3), RawPropertyType(5), nullptr},
		MovieTrackingCamera_brown_k3_get, MovieTrackingCamera_brown_k3_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_brown_k4_ = {
		{&rna_MovieTrackingCamera_brown_p1, 	&rna_MovieTrackingCamera_brown_k3,
		-1, "brown_k4", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "K4",
		"Fourth coefficient of fourth order Brown-Conrady radial distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, brown_k4), RawPropertyType(5), nullptr},
		MovieTrackingCamera_brown_k4_get, MovieTrackingCamera_brown_k4_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_brown_p1_ = {
		{&rna_MovieTrackingCamera_brown_p2, 	&rna_MovieTrackingCamera_brown_k4,
		-1, "brown_p1", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "P1",
		"First coefficient of second order Brown-Conrady tangential distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, brown_p1), RawPropertyType(5), nullptr},
		MovieTrackingCamera_brown_p1_get, MovieTrackingCamera_brown_p1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_brown_p2_ = {
		{&rna_MovieTrackingCamera_pixel_aspect, 	&rna_MovieTrackingCamera_brown_p1,
		-1, "brown_p2", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "P2",
		"Second coefficient of second order Brown-Conrady tangential distortion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, brown_p2), RawPropertyType(5), nullptr},
		MovieTrackingCamera_brown_p2_get, MovieTrackingCamera_brown_p2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingCamera_pixel_aspect_ = {
		{nullptr, 	&rna_MovieTrackingCamera_brown_p2,
		-1, "pixel_aspect", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pixel Aspect Ratio",
		"Pixel aspect ratio",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingCamera, pixel_aspect), RawPropertyType(5), nullptr},
		MovieTrackingCamera_pixel_aspect_get, MovieTrackingCamera_pixel_aspect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 5000.0f, 0.1000000015f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	StructRNA *srna = RNA_MovieTrackingCamera;
	srna->cont.properties = {&rna_MovieTrackingCamera_rna_properties, &rna_MovieTrackingCamera_pixel_aspect};
	srna->identifier = "MovieTrackingCamera";
	srna->flag = 516;
	srna->name = "Movie tracking camera data";
	srna->description = "Match-moving camera data for tracking";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingCamera_rna_properties;
	srna->path = rna_trackingCamera_path;
};

/* Movie tracking marker data */
static CollectionPropertyRNA rna_MovieTrackingMarker_rna_properties_;
PropertyRNA &rna_MovieTrackingMarker_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarker_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingMarker_rna_type_;
PropertyRNA &rna_MovieTrackingMarker_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarker_rna_type_);

static FloatPropertyRNA rna_MovieTrackingMarker_co_;
PropertyRNA &rna_MovieTrackingMarker_co = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarker_co_);

static IntPropertyRNA rna_MovieTrackingMarker_frame_;
PropertyRNA &rna_MovieTrackingMarker_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarker_frame_);

static BoolPropertyRNA rna_MovieTrackingMarker_mute_;
PropertyRNA &rna_MovieTrackingMarker_mute = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarker_mute_);

static FloatPropertyRNA rna_MovieTrackingMarker_pattern_corners_;
PropertyRNA &rna_MovieTrackingMarker_pattern_corners = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarker_pattern_corners_);

static FloatPropertyRNA rna_MovieTrackingMarker_pattern_bound_box_;
PropertyRNA &rna_MovieTrackingMarker_pattern_bound_box = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarker_pattern_bound_box_);

static FloatPropertyRNA rna_MovieTrackingMarker_search_min_;
PropertyRNA &rna_MovieTrackingMarker_search_min = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarker_search_min_);

static FloatPropertyRNA rna_MovieTrackingMarker_search_max_;
PropertyRNA &rna_MovieTrackingMarker_search_max = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarker_search_max_);

static BoolPropertyRNA rna_MovieTrackingMarker_is_keyed_;
PropertyRNA &rna_MovieTrackingMarker_is_keyed = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarker_is_keyed_);

StructRNA *RNA_MovieTrackingMarker;
void register_struct_MovieTrackingMarker(BlenderRNA &brna)
{
	rna_MovieTrackingMarker_rna_properties_ = {
		{&rna_MovieTrackingMarker_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingMarker_rna_properties_begin, MovieTrackingMarker_rna_properties_next, MovieTrackingMarker_rna_properties_end, MovieTrackingMarker_rna_properties_get, nullptr, nullptr, MovieTrackingMarker_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingMarker_rna_type_ = {
		{&rna_MovieTrackingMarker_co, 	&rna_MovieTrackingMarker_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingMarker_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_MovieTrackingMarker_co_default[2] = {
		0.0f,
		0.0f
	};
	rna_MovieTrackingMarker_co_ = {
		{&rna_MovieTrackingMarker_frame, 	&rna_MovieTrackingMarker_rna_type,
		-1, "co", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Position",
		"Marker position at frame in normalized coordinates",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingMarker, pos), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieTrackingMarker_co_get, MovieTrackingMarker_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_MovieTrackingMarker_co_default
	};

	rna_MovieTrackingMarker_frame_ = {
		{&rna_MovieTrackingMarker_mute, 	&rna_MovieTrackingMarker_co,
		-1, "frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number marker is keyframed on",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingMarker_frame_get, MovieTrackingMarker_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingMarker_mute_ = {
		{&rna_MovieTrackingMarker_pattern_corners, 	&rna_MovieTrackingMarker_frame,
		-1, "mute", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mode",
		"Is marker muted for current frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingMarker_mute_get, MovieTrackingMarker_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_MovieTrackingMarker_pattern_corners_default[8] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_MovieTrackingMarker_pattern_corners_ = {
		{&rna_MovieTrackingMarker_pattern_bound_box, 	&rna_MovieTrackingMarker_mute,
		-1, "pattern_corners", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pattern Corners",
		"Array of coordinates which represents pattern\'s corners in normalized coordinates relative to marker position",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 2, 0}, 8,
		rna_tracking_markerPattern_update, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingMarker, pattern_corners), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieTrackingMarker_pattern_corners_get, MovieTrackingMarker_pattern_corners_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_MovieTrackingMarker_pattern_corners_default
	};

	static float rna_MovieTrackingMarker_pattern_bound_box_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_MovieTrackingMarker_pattern_bound_box_ = {
		{&rna_MovieTrackingMarker_search_min, 	&rna_MovieTrackingMarker_pattern_corners,
		-1, "pattern_bound_box", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pattern Bounding Box",
		"Pattern area bounding box in normalized coordinates",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 2, {2, 2, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MovieTrackingMarker_pattern_bound_box_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MovieTrackingMarker_pattern_bound_box_default
	};

	static float rna_MovieTrackingMarker_search_min_default[2] = {
		0.0f,
		0.0f
	};
	rna_MovieTrackingMarker_search_min_ = {
		{&rna_MovieTrackingMarker_search_max, 	&rna_MovieTrackingMarker_pattern_bound_box,
		-1, "search_min", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Search Min",
		"Left-bottom corner of search area in normalized coordinates relative to marker position",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {2, 0, 0}, 2,
		rna_tracking_markerSearch_update, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingMarker, search_min), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieTrackingMarker_search_min_get, MovieTrackingMarker_search_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_MovieTrackingMarker_search_min_default
	};

	static float rna_MovieTrackingMarker_search_max_default[2] = {
		0.0f,
		0.0f
	};
	rna_MovieTrackingMarker_search_max_ = {
		{&rna_MovieTrackingMarker_is_keyed, 	&rna_MovieTrackingMarker_search_min,
		-1, "search_max", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Search Max",
		"Right-bottom corner of search area in normalized coordinates relative to marker position",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {2, 0, 0}, 2,
		rna_tracking_markerSearch_update, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingMarker, search_max), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieTrackingMarker_search_max_get, MovieTrackingMarker_search_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_MovieTrackingMarker_search_max_default
	};

	rna_MovieTrackingMarker_is_keyed_ = {
		{nullptr, 	&rna_MovieTrackingMarker_search_max,
		-1, "is_keyed", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Keyframed",
		"Whether the position of the marker is keyframed or tracked",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingMarker_is_keyed_get, MovieTrackingMarker_is_keyed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	StructRNA *srna = RNA_MovieTrackingMarker;
	srna->cont.properties = {&rna_MovieTrackingMarker_rna_properties, &rna_MovieTrackingMarker_is_keyed};
	srna->identifier = "MovieTrackingMarker";
	srna->flag = 516;
	srna->name = "Movie tracking marker data";
	srna->description = "Match-moving marker data for tracking";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingMarker_rna_properties;
};

/* Movie tracking track data */
static CollectionPropertyRNA rna_MovieTrackingTrack_rna_properties_;
PropertyRNA &rna_MovieTrackingTrack_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingTrack_rna_type_;
PropertyRNA &rna_MovieTrackingTrack_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_rna_type_);

static StringPropertyRNA rna_MovieTrackingTrack_name_;
PropertyRNA &rna_MovieTrackingTrack_name = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_name_);

static IntPropertyRNA rna_MovieTrackingTrack_frames_limit_;
PropertyRNA &rna_MovieTrackingTrack_frames_limit = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_frames_limit_);

static EnumPropertyRNA rna_MovieTrackingTrack_pattern_match_;
PropertyRNA &rna_MovieTrackingTrack_pattern_match = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_pattern_match_);

static IntPropertyRNA rna_MovieTrackingTrack_margin_;
PropertyRNA &rna_MovieTrackingTrack_margin = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_margin_);

static EnumPropertyRNA rna_MovieTrackingTrack_motion_model_;
PropertyRNA &rna_MovieTrackingTrack_motion_model = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_motion_model_);

static FloatPropertyRNA rna_MovieTrackingTrack_correlation_min_;
PropertyRNA &rna_MovieTrackingTrack_correlation_min = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_correlation_min_);

static BoolPropertyRNA rna_MovieTrackingTrack_use_brute_;
PropertyRNA &rna_MovieTrackingTrack_use_brute = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_use_brute_);

static BoolPropertyRNA rna_MovieTrackingTrack_use_mask_;
PropertyRNA &rna_MovieTrackingTrack_use_mask = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_use_mask_);

static BoolPropertyRNA rna_MovieTrackingTrack_use_normalization_;
PropertyRNA &rna_MovieTrackingTrack_use_normalization = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_use_normalization_);

static CollectionPropertyRNA rna_MovieTrackingTrack_markers_;
PropertyRNA &rna_MovieTrackingTrack_markers = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_markers_);

static BoolPropertyRNA rna_MovieTrackingTrack_use_red_channel_;
PropertyRNA &rna_MovieTrackingTrack_use_red_channel = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_use_red_channel_);

static BoolPropertyRNA rna_MovieTrackingTrack_use_green_channel_;
PropertyRNA &rna_MovieTrackingTrack_use_green_channel = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_use_green_channel_);

static BoolPropertyRNA rna_MovieTrackingTrack_use_blue_channel_;
PropertyRNA &rna_MovieTrackingTrack_use_blue_channel = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_use_blue_channel_);

static BoolPropertyRNA rna_MovieTrackingTrack_use_grayscale_preview_;
PropertyRNA &rna_MovieTrackingTrack_use_grayscale_preview = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_use_grayscale_preview_);

static BoolPropertyRNA rna_MovieTrackingTrack_use_alpha_preview_;
PropertyRNA &rna_MovieTrackingTrack_use_alpha_preview = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_use_alpha_preview_);

static BoolPropertyRNA rna_MovieTrackingTrack_has_bundle_;
PropertyRNA &rna_MovieTrackingTrack_has_bundle = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_has_bundle_);

static FloatPropertyRNA rna_MovieTrackingTrack_bundle_;
PropertyRNA &rna_MovieTrackingTrack_bundle = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_bundle_);

static BoolPropertyRNA rna_MovieTrackingTrack_hide_;
PropertyRNA &rna_MovieTrackingTrack_hide = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_hide_);

static BoolPropertyRNA rna_MovieTrackingTrack_select_;
PropertyRNA &rna_MovieTrackingTrack_select = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_select_);

static BoolPropertyRNA rna_MovieTrackingTrack_select_anchor_;
PropertyRNA &rna_MovieTrackingTrack_select_anchor = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_select_anchor_);

static BoolPropertyRNA rna_MovieTrackingTrack_select_pattern_;
PropertyRNA &rna_MovieTrackingTrack_select_pattern = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_select_pattern_);

static BoolPropertyRNA rna_MovieTrackingTrack_select_search_;
PropertyRNA &rna_MovieTrackingTrack_select_search = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_select_search_);

static BoolPropertyRNA rna_MovieTrackingTrack_lock_;
PropertyRNA &rna_MovieTrackingTrack_lock = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_lock_);

static BoolPropertyRNA rna_MovieTrackingTrack_use_custom_color_;
PropertyRNA &rna_MovieTrackingTrack_use_custom_color = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_use_custom_color_);

static FloatPropertyRNA rna_MovieTrackingTrack_color_;
PropertyRNA &rna_MovieTrackingTrack_color = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_color_);

static FloatPropertyRNA rna_MovieTrackingTrack_average_error_;
PropertyRNA &rna_MovieTrackingTrack_average_error = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_average_error_);

static PointerPropertyRNA rna_MovieTrackingTrack_annotation_;
PropertyRNA &rna_MovieTrackingTrack_annotation = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_annotation_);

static FloatPropertyRNA rna_MovieTrackingTrack_weight_;
PropertyRNA &rna_MovieTrackingTrack_weight = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_weight_);

static FloatPropertyRNA rna_MovieTrackingTrack_weight_stab_;
PropertyRNA &rna_MovieTrackingTrack_weight_stab = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_weight_stab_);

static FloatPropertyRNA rna_MovieTrackingTrack_offset_;
PropertyRNA &rna_MovieTrackingTrack_offset = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTrack_offset_);

StructRNA *RNA_MovieTrackingTrack;
void register_struct_MovieTrackingTrack(BlenderRNA &brna)
{
	rna_MovieTrackingTrack_rna_properties_ = {
		{&rna_MovieTrackingTrack_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_rna_properties_begin, MovieTrackingTrack_rna_properties_next, MovieTrackingTrack_rna_properties_end, MovieTrackingTrack_rna_properties_get, nullptr, nullptr, MovieTrackingTrack_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingTrack_rna_type_ = {
		{&rna_MovieTrackingTrack_name, 	&rna_MovieTrackingTrack_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingTrack_name_ = {
		{&rna_MovieTrackingTrack_frames_limit, 	&rna_MovieTrackingTrack_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Unique name of track",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_name_get, MovieTrackingTrack_name_length, MovieTrackingTrack_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_MovieTrackingTrack_frames_limit_ = {
		{&rna_MovieTrackingTrack_pattern_match, 	&rna_MovieTrackingTrack_name,
		-1, "frames_limit", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frames Limit",
		"Every tracking cycle, this number of frames are tracked",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, frames_limit), RawPropertyType(1), nullptr},
		MovieTrackingTrack_frames_limit_get, MovieTrackingTrack_frames_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_MovieTrackingTrack_pattern_match_items[3] = {
		{0, "KEYFRAME", 0, "Keyframe", "Track pattern from keyframe to next frame"	},
		{1, "PREV_FRAME", 0, "Previous frame", "Track pattern from current frame to next frame"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieTrackingTrack_pattern_match_ = {
		{&rna_MovieTrackingTrack_margin, 	&rna_MovieTrackingTrack_frames_limit,
		-1, "pattern_match", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pattern Match",
		"Track pattern from given frame when tracking marker to next frame",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, pattern_match), RawPropertyType(1), nullptr},
		MovieTrackingTrack_pattern_match_get, MovieTrackingTrack_pattern_match_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieTrackingTrack_pattern_match_items, 2, 0
	};

	rna_MovieTrackingTrack_margin_ = {
		{&rna_MovieTrackingTrack_motion_model, 	&rna_MovieTrackingTrack_pattern_match,
		-1, "margin", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Margin",
		"Distance from image boundary at which marker stops tracking",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, margin), RawPropertyType(1), nullptr},
		MovieTrackingTrack_margin_get, MovieTrackingTrack_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 300, 0, 300, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_MovieTrackingTrack_motion_model_items[7] = {
		{5, "Perspective", 0, "Perspective", "Search for markers that are perspectively deformed (homography) between frames"	},
		{4, "Affine", 0, "Affine", "Search for markers that are affine-deformed (t, r, k, and skew) between frames"	},
		{3, "LocRotScale", 0, "Location, Rotation & Scale", "Search for markers that are translated, rotated, and scaled between frames"	},
		{2, "LocScale", 0, "Location & Scale", "Search for markers that are translated and scaled between frames"	},
		{1, "LocRot", 0, "Location & Rotation", "Search for markers that are translated and rotated between frames"	},
		{0, "Loc", 0, "Location", "Search for markers that are translated between frames"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieTrackingTrack_motion_model_ = {
		{&rna_MovieTrackingTrack_correlation_min, 	&rna_MovieTrackingTrack_margin,
		-1, "motion_model", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Motion Model",
		"Default motion model to use for tracking",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, motion_model), RawPropertyType(1), nullptr},
		MovieTrackingTrack_motion_model_get, MovieTrackingTrack_motion_model_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieTrackingTrack_motion_model_items, 6, 0
	};

	rna_MovieTrackingTrack_correlation_min_ = {
		{&rna_MovieTrackingTrack_use_brute, 	&rna_MovieTrackingTrack_motion_model,
		-1, "correlation_min", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Correlation",
		"Minimal value of correlation between matched pattern and reference that is still treated as successful tracking",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, minimum_correlation), RawPropertyType(5), nullptr},
		MovieTrackingTrack_correlation_min_get, MovieTrackingTrack_correlation_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingTrack_use_brute_ = {
		{&rna_MovieTrackingTrack_use_mask, 	&rna_MovieTrackingTrack_correlation_min,
		-1, "use_brute", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Prepass",
		"Use a brute-force translation only pre-track before refinement",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_use_brute_get, MovieTrackingTrack_use_brute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_use_mask_ = {
		{&rna_MovieTrackingTrack_use_normalization, 	&rna_MovieTrackingTrack_use_brute,
		-1, "use_mask", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Mask",
		"Use a Grease Pencil data-block as a mask to use only specified areas of pattern when tracking",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_use_mask_get, MovieTrackingTrack_use_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_use_normalization_ = {
		{&rna_MovieTrackingTrack_markers, 	&rna_MovieTrackingTrack_use_mask,
		-1, "use_normalization", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Normalize",
		"Normalize light intensities while tracking (slower)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_use_normalization_get, MovieTrackingTrack_use_normalization_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_markers_ = {
		{&rna_MovieTrackingTrack_use_red_channel, 	&rna_MovieTrackingTrack_use_normalization,
		-1, "markers", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Markers",
		"Collection of markers in track",
		0, "MovieClip",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MovieTrackingMarkers},
		MovieTrackingTrack_markers_begin, MovieTrackingTrack_markers_next, MovieTrackingTrack_markers_end, MovieTrackingTrack_markers_get, MovieTrackingTrack_markers_length, MovieTrackingTrack_markers_lookup_int, nullptr, nullptr, RNA_MovieTrackingMarker
	};

	rna_MovieTrackingTrack_use_red_channel_ = {
		{&rna_MovieTrackingTrack_use_green_channel, 	&rna_MovieTrackingTrack_markers,
		-1, "use_red_channel", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Red Channel",
		"Use red channel from footage for tracking",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_use_red_channel_get, MovieTrackingTrack_use_red_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_MovieTrackingTrack_use_green_channel_ = {
		{&rna_MovieTrackingTrack_use_blue_channel, 	&rna_MovieTrackingTrack_use_red_channel,
		-1, "use_green_channel", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Green Channel",
		"Use green channel from footage for tracking",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_use_green_channel_get, MovieTrackingTrack_use_green_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_MovieTrackingTrack_use_blue_channel_ = {
		{&rna_MovieTrackingTrack_use_grayscale_preview, 	&rna_MovieTrackingTrack_use_green_channel,
		-1, "use_blue_channel", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Blue Channel",
		"Use blue channel from footage for tracking",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_use_blue_channel_get, MovieTrackingTrack_use_blue_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_MovieTrackingTrack_use_grayscale_preview_ = {
		{&rna_MovieTrackingTrack_use_alpha_preview, 	&rna_MovieTrackingTrack_use_blue_channel,
		-1, "use_grayscale_preview", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grayscale",
		"Display what the tracking algorithm sees in the preview",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_use_grayscale_preview_get, MovieTrackingTrack_use_grayscale_preview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_use_alpha_preview_ = {
		{&rna_MovieTrackingTrack_has_bundle, 	&rna_MovieTrackingTrack_use_grayscale_preview,
		-1, "use_alpha_preview", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Alpha",
		"Apply track\'s mask on displaying preview",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_use_alpha_preview_get, MovieTrackingTrack_use_alpha_preview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_has_bundle_ = {
		{&rna_MovieTrackingTrack_bundle, 	&rna_MovieTrackingTrack_use_alpha_preview,
		-1, "has_bundle", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Bundle",
		"True if track has a valid bundle",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_has_bundle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_MovieTrackingTrack_bundle_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MovieTrackingTrack_bundle_ = {
		{&rna_MovieTrackingTrack_hide, 	&rna_MovieTrackingTrack_has_bundle,
		-1, "bundle", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bundle",
		"Position of bundle reconstructed from this track",
		0, "MovieClip",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, bundle_pos), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieTrackingTrack_bundle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_MovieTrackingTrack_bundle_default
	};

	rna_MovieTrackingTrack_hide_ = {
		{&rna_MovieTrackingTrack_select, 	&rna_MovieTrackingTrack_bundle,
		-1, "hide", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Track is hidden",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_hide_get, MovieTrackingTrack_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_select_ = {
		{&rna_MovieTrackingTrack_select_anchor, 	&rna_MovieTrackingTrack_hide,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Track is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_select_get, MovieTrackingTrack_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_select_anchor_ = {
		{&rna_MovieTrackingTrack_select_pattern, 	&rna_MovieTrackingTrack_select,
		-1, "select_anchor", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select Anchor",
		"Track\'s anchor point is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_select_anchor_get, MovieTrackingTrack_select_anchor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_select_pattern_ = {
		{&rna_MovieTrackingTrack_select_search, 	&rna_MovieTrackingTrack_select_anchor,
		-1, "select_pattern", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select Pattern",
		"Track\'s pattern area is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_select_pattern_get, MovieTrackingTrack_select_pattern_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_select_search_ = {
		{&rna_MovieTrackingTrack_lock, 	&rna_MovieTrackingTrack_select_pattern,
		-1, "select_search", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select Search",
		"Track\'s search area is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_select_search_get, MovieTrackingTrack_select_search_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_lock_ = {
		{&rna_MovieTrackingTrack_use_custom_color, 	&rna_MovieTrackingTrack_select_search,
		-1, "lock", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock",
		"Track is locked and all changes to it are disabled",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_lock_get, MovieTrackingTrack_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingTrack_use_custom_color_ = {
		{&rna_MovieTrackingTrack_color, 	&rna_MovieTrackingTrack_lock,
		-1, "use_custom_color", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Custom Color",
		"Use custom color instead of theme-defined",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_use_custom_color_get, MovieTrackingTrack_use_custom_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_MovieTrackingTrack_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MovieTrackingTrack_color_ = {
		{&rna_MovieTrackingTrack_average_error, 	&rna_MovieTrackingTrack_use_custom_color,
		-1, "color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Color of the track in the Movie Clip Editor and the 3D viewport after a solve",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieTrackingTrack_color_get, MovieTrackingTrack_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MovieTrackingTrack_color_default
	};

	rna_MovieTrackingTrack_average_error_ = {
		{&rna_MovieTrackingTrack_annotation, 	&rna_MovieTrackingTrack_color,
		-1, "average_error", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Average Error",
		"Average error of re-projection",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, error), RawPropertyType(5), nullptr},
		MovieTrackingTrack_average_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingTrack_annotation_ = {
		{&rna_MovieTrackingTrack_weight, 	&rna_MovieTrackingTrack_average_error,
		-1, "annotation", 8388801, 0, 0, 64, 0, PropertyPathTemplateType(0), "Annotation",
		"Annotation data for this track",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTrack_annotation_get, MovieTrackingTrack_annotation_set, nullptr, rna_GPencil_datablocks_annotations_poll,RNA_Annotation
	};

	rna_MovieTrackingTrack_weight_ = {
		{&rna_MovieTrackingTrack_weight_stab, 	&rna_MovieTrackingTrack_annotation,
		-1, "weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Influence of this track on a final solution",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, weight), RawPropertyType(5), nullptr},
		MovieTrackingTrack_weight_get, MovieTrackingTrack_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingTrack_weight_stab_ = {
		{&rna_MovieTrackingTrack_offset, 	&rna_MovieTrackingTrack_weight,
		-1, "weight_stab", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stab Weight",
		"Influence of this track on 2D stabilization",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, weight_stab), RawPropertyType(5), nullptr},
		MovieTrackingTrack_weight_stab_get, MovieTrackingTrack_weight_stab_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_MovieTrackingTrack_offset_default[2] = {
		0.0f,
		0.0f
	};
	rna_MovieTrackingTrack_offset_ = {
		{nullptr, 	&rna_MovieTrackingTrack_weight_stab,
		-1, "offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Offset of track from the parenting point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingTrack, offset), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieTrackingTrack_offset_get, MovieTrackingTrack_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_MovieTrackingTrack_offset_default
	};

	StructRNA *srna = RNA_MovieTrackingTrack;
	srna->cont.properties = {&rna_MovieTrackingTrack_rna_properties, &rna_MovieTrackingTrack_offset};
	srna->identifier = "MovieTrackingTrack";
	srna->flag = 516;
	srna->name = "Movie tracking track data";
	srna->description = "Match-moving track data for tracking";
	srna->translation_context = "*";
	srna->icon = 202;
	srna->nameproperty = &rna_MovieTrackingTrack_name;
	srna->iteratorproperty = &rna_MovieTrackingTrack_rna_properties;
	srna->path = rna_trackingTrack_path;
};

/* Movie Tracking Markers */
static CollectionPropertyRNA rna_MovieTrackingMarkers_rna_properties_;
PropertyRNA &rna_MovieTrackingMarkers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarkers_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingMarkers_rna_type_;
PropertyRNA &rna_MovieTrackingMarkers_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarkers_rna_type_);

static IntPropertyRNA rna_MovieTrackingMarkers_find_frame_frame_;
PropertyRNA &rna_MovieTrackingMarkers_find_frame_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarkers_find_frame_frame_);

static BoolPropertyRNA rna_MovieTrackingMarkers_find_frame_exact_;
PropertyRNA &rna_MovieTrackingMarkers_find_frame_exact = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarkers_find_frame_exact_);

static PointerPropertyRNA rna_MovieTrackingMarkers_find_frame_marker_;
PropertyRNA &rna_MovieTrackingMarkers_find_frame_marker = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarkers_find_frame_marker_);

FunctionRNA *rna_MovieTrackingMarkers_find_frame_func;
static IntPropertyRNA rna_MovieTrackingMarkers_insert_frame_frame_;
PropertyRNA &rna_MovieTrackingMarkers_insert_frame_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarkers_insert_frame_frame_);

static FloatPropertyRNA rna_MovieTrackingMarkers_insert_frame_co_;
PropertyRNA &rna_MovieTrackingMarkers_insert_frame_co = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarkers_insert_frame_co_);

static PointerPropertyRNA rna_MovieTrackingMarkers_insert_frame_marker_;
PropertyRNA &rna_MovieTrackingMarkers_insert_frame_marker = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarkers_insert_frame_marker_);

FunctionRNA *rna_MovieTrackingMarkers_insert_frame_func;
static IntPropertyRNA rna_MovieTrackingMarkers_delete_frame_frame_;
PropertyRNA &rna_MovieTrackingMarkers_delete_frame_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingMarkers_delete_frame_frame_);

FunctionRNA *rna_MovieTrackingMarkers_delete_frame_func;
StructRNA *RNA_MovieTrackingMarkers;
void register_struct_MovieTrackingMarkers(BlenderRNA &brna)
{
	rna_MovieTrackingMarkers_rna_properties_ = {
		{&rna_MovieTrackingMarkers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingMarkers_rna_properties_begin, MovieTrackingMarkers_rna_properties_next, MovieTrackingMarkers_rna_properties_end, MovieTrackingMarkers_rna_properties_get, nullptr, nullptr, MovieTrackingMarkers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingMarkers_rna_type_ = {
		{nullptr, 	&rna_MovieTrackingMarkers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingMarkers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_MovieTrackingMarkers;
	srna->cont.properties = {&rna_MovieTrackingMarkers_rna_properties, &rna_MovieTrackingMarkers_rna_type};
	srna->identifier = "MovieTrackingMarkers";
	srna->flag = 516;
	srna->name = "Movie Tracking Markers";
	srna->description = "Collection of markers for movie tracking track";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingMarkers_rna_properties;
	{
	rna_MovieTrackingMarkers_find_frame_frame_ = {
		{&rna_MovieTrackingMarkers_find_frame_exact, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number to find marker for",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_MovieTrackingMarkers_find_frame_exact_ = {
		{&rna_MovieTrackingMarkers_find_frame_marker, 	&rna_MovieTrackingMarkers_find_frame_frame,
		-1, "exact", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Exact",
		"Get marker at exact frame number rather than get estimated marker",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_MovieTrackingMarkers_find_frame_marker_ = {
		{nullptr, 	&rna_MovieTrackingMarkers_find_frame_exact,
		-1, "marker", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Marker for specified frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieTrackingMarker
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingMarkers_find_frame_frame, &rna_MovieTrackingMarkers_find_frame_marker};
		func->identifier = "find_frame";
		func->description = "Get marker for specified frame";
		func->call = MovieTrackingMarkers_find_frame_call;
		func->c_ret = &rna_MovieTrackingMarkers_find_frame_marker;
		rna_MovieTrackingMarkers_find_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MovieTrackingMarkers_insert_frame_frame_ = {
		{&rna_MovieTrackingMarkers_insert_frame_co, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number to insert marker to",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	static float rna_MovieTrackingMarkers_insert_frame_co_default[2] = {
		0.0f,
		0.0f
	};
	rna_MovieTrackingMarkers_insert_frame_co_ = {
		{&rna_MovieTrackingMarkers_insert_frame_marker, 	&rna_MovieTrackingMarkers_insert_frame_frame,
		-1, "co", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Coordinate",
		"Place new marker at the given frame using specified in normalized space coordinates",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, rna_MovieTrackingMarkers_insert_frame_co_default
	};
	rna_MovieTrackingMarkers_insert_frame_marker_ = {
		{nullptr, 	&rna_MovieTrackingMarkers_insert_frame_co,
		-1, "marker", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created marker",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieTrackingMarker
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingMarkers_insert_frame_frame, &rna_MovieTrackingMarkers_insert_frame_marker};
		func->identifier = "insert_frame";
		func->description = "Insert a new marker at the specified frame";
		func->call = MovieTrackingMarkers_insert_frame_call;
		func->c_ret = &rna_MovieTrackingMarkers_insert_frame_marker;
		rna_MovieTrackingMarkers_insert_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MovieTrackingMarkers_delete_frame_frame_ = {
		{nullptr, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number to delete marker from",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingMarkers_delete_frame_frame, &rna_MovieTrackingMarkers_delete_frame_frame};
		func->identifier = "delete_frame";
		func->description = "Delete marker at specified frame";
		func->call = MovieTrackingMarkers_delete_frame_call;
		rna_MovieTrackingMarkers_delete_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Movie Tracking Plane Marker Data */
static CollectionPropertyRNA rna_MovieTrackingPlaneMarker_rna_properties_;
PropertyRNA &rna_MovieTrackingPlaneMarker_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarker_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingPlaneMarker_rna_type_;
PropertyRNA &rna_MovieTrackingPlaneMarker_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarker_rna_type_);

static IntPropertyRNA rna_MovieTrackingPlaneMarker_frame_;
PropertyRNA &rna_MovieTrackingPlaneMarker_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarker_frame_);

static FloatPropertyRNA rna_MovieTrackingPlaneMarker_corners_;
PropertyRNA &rna_MovieTrackingPlaneMarker_corners = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarker_corners_);

static BoolPropertyRNA rna_MovieTrackingPlaneMarker_mute_;
PropertyRNA &rna_MovieTrackingPlaneMarker_mute = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarker_mute_);

StructRNA *RNA_MovieTrackingPlaneMarker;
void register_struct_MovieTrackingPlaneMarker(BlenderRNA &brna)
{
	rna_MovieTrackingPlaneMarker_rna_properties_ = {
		{&rna_MovieTrackingPlaneMarker_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneMarker_rna_properties_begin, MovieTrackingPlaneMarker_rna_properties_next, MovieTrackingPlaneMarker_rna_properties_end, MovieTrackingPlaneMarker_rna_properties_get, nullptr, nullptr, MovieTrackingPlaneMarker_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingPlaneMarker_rna_type_ = {
		{&rna_MovieTrackingPlaneMarker_frame, 	&rna_MovieTrackingPlaneMarker_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneMarker_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingPlaneMarker_frame_ = {
		{&rna_MovieTrackingPlaneMarker_corners, 	&rna_MovieTrackingPlaneMarker_rna_type,
		-1, "frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number marker is keyframed on",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneMarker_frame_get, MovieTrackingPlaneMarker_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_MovieTrackingPlaneMarker_corners_default[8] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_MovieTrackingPlaneMarker_corners_ = {
		{&rna_MovieTrackingPlaneMarker_mute, 	&rna_MovieTrackingPlaneMarker_frame,
		-1, "corners", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Corners",
		"Array of coordinates which represents UI rectangle corners in frame normalized coordinates",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 2, 0}, 8,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingPlaneMarker, corners), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieTrackingPlaneMarker_corners_get, MovieTrackingPlaneMarker_corners_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_MovieTrackingPlaneMarker_corners_default
	};

	rna_MovieTrackingPlaneMarker_mute_ = {
		{nullptr, 	&rna_MovieTrackingPlaneMarker_corners,
		-1, "mute", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mode",
		"Is marker muted for current frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneMarker_mute_get, MovieTrackingPlaneMarker_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MovieTrackingPlaneMarker;
	srna->cont.properties = {&rna_MovieTrackingPlaneMarker_rna_properties, &rna_MovieTrackingPlaneMarker_mute};
	srna->identifier = "MovieTrackingPlaneMarker";
	srna->flag = 516;
	srna->name = "Movie Tracking Plane Marker Data";
	srna->description = "Match-moving plane marker data for tracking";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingPlaneMarker_rna_properties;
};

/* Movie tracking plane track data */
static CollectionPropertyRNA rna_MovieTrackingPlaneTrack_rna_properties_;
PropertyRNA &rna_MovieTrackingPlaneTrack_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTrack_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingPlaneTrack_rna_type_;
PropertyRNA &rna_MovieTrackingPlaneTrack_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTrack_rna_type_);

static StringPropertyRNA rna_MovieTrackingPlaneTrack_name_;
PropertyRNA &rna_MovieTrackingPlaneTrack_name = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTrack_name_);

static CollectionPropertyRNA rna_MovieTrackingPlaneTrack_markers_;
PropertyRNA &rna_MovieTrackingPlaneTrack_markers = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTrack_markers_);

static BoolPropertyRNA rna_MovieTrackingPlaneTrack_select_;
PropertyRNA &rna_MovieTrackingPlaneTrack_select = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTrack_select_);

static BoolPropertyRNA rna_MovieTrackingPlaneTrack_use_auto_keying_;
PropertyRNA &rna_MovieTrackingPlaneTrack_use_auto_keying = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTrack_use_auto_keying_);

static PointerPropertyRNA rna_MovieTrackingPlaneTrack_image_;
PropertyRNA &rna_MovieTrackingPlaneTrack_image = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTrack_image_);

static FloatPropertyRNA rna_MovieTrackingPlaneTrack_image_opacity_;
PropertyRNA &rna_MovieTrackingPlaneTrack_image_opacity = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTrack_image_opacity_);

StructRNA *RNA_MovieTrackingPlaneTrack;
void register_struct_MovieTrackingPlaneTrack(BlenderRNA &brna)
{
	rna_MovieTrackingPlaneTrack_rna_properties_ = {
		{&rna_MovieTrackingPlaneTrack_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneTrack_rna_properties_begin, MovieTrackingPlaneTrack_rna_properties_next, MovieTrackingPlaneTrack_rna_properties_end, MovieTrackingPlaneTrack_rna_properties_get, nullptr, nullptr, MovieTrackingPlaneTrack_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingPlaneTrack_rna_type_ = {
		{&rna_MovieTrackingPlaneTrack_name, 	&rna_MovieTrackingPlaneTrack_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneTrack_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingPlaneTrack_name_ = {
		{&rna_MovieTrackingPlaneTrack_markers, 	&rna_MovieTrackingPlaneTrack_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Unique name of track",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneTrack_name_get, MovieTrackingPlaneTrack_name_length, MovieTrackingPlaneTrack_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_MovieTrackingPlaneTrack_markers_ = {
		{&rna_MovieTrackingPlaneTrack_select, 	&rna_MovieTrackingPlaneTrack_name,
		-1, "markers", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Markers",
		"Collection of markers in track",
		0, "MovieClip",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MovieTrackingPlaneMarkers},
		MovieTrackingPlaneTrack_markers_begin, MovieTrackingPlaneTrack_markers_next, MovieTrackingPlaneTrack_markers_end, MovieTrackingPlaneTrack_markers_get, MovieTrackingPlaneTrack_markers_length, MovieTrackingPlaneTrack_markers_lookup_int, nullptr, nullptr, RNA_MovieTrackingPlaneMarker
	};

	rna_MovieTrackingPlaneTrack_select_ = {
		{&rna_MovieTrackingPlaneTrack_use_auto_keying, 	&rna_MovieTrackingPlaneTrack_markers,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Plane track is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneTrack_select_get, MovieTrackingPlaneTrack_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingPlaneTrack_use_auto_keying_ = {
		{&rna_MovieTrackingPlaneTrack_image, 	&rna_MovieTrackingPlaneTrack_select,
		-1, "use_auto_keying", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto Keyframe",
		"Automatic keyframe insertion when moving plane corners",
		553, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneTrack_use_auto_keying_get, MovieTrackingPlaneTrack_use_auto_keying_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingPlaneTrack_image_ = {
		{&rna_MovieTrackingPlaneTrack_image_opacity, 	&rna_MovieTrackingPlaneTrack_use_auto_keying,
		-1, "image", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image",
		"Image displayed in the track during editing in clip editor",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneTrack_image_get, MovieTrackingPlaneTrack_image_set, nullptr, rna_Image_no_renderresult_or_viewer_poll,RNA_Image
	};

	rna_MovieTrackingPlaneTrack_image_opacity_ = {
		{nullptr, 	&rna_MovieTrackingPlaneTrack_image,
		-1, "image_opacity", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Image Opacity",
		"Opacity of the image",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingPlaneTrack, image_opacity), RawPropertyType(5), nullptr},
		MovieTrackingPlaneTrack_image_opacity_get, MovieTrackingPlaneTrack_image_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_MovieTrackingPlaneTrack;
	srna->cont.properties = {&rna_MovieTrackingPlaneTrack_rna_properties, &rna_MovieTrackingPlaneTrack_image_opacity};
	srna->identifier = "MovieTrackingPlaneTrack";
	srna->flag = 516;
	srna->name = "Movie tracking plane track data";
	srna->description = "Match-moving plane track data for tracking";
	srna->translation_context = "*";
	srna->icon = 202;
	srna->nameproperty = &rna_MovieTrackingPlaneTrack_name;
	srna->iteratorproperty = &rna_MovieTrackingPlaneTrack_rna_properties;
	srna->path = rna_trackingPlaneTrack_path;
};

/* Movie Tracking Plane Markers */
static CollectionPropertyRNA rna_MovieTrackingPlaneMarkers_rna_properties_;
PropertyRNA &rna_MovieTrackingPlaneMarkers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarkers_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingPlaneMarkers_rna_type_;
PropertyRNA &rna_MovieTrackingPlaneMarkers_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarkers_rna_type_);

static IntPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_frame_;
PropertyRNA &rna_MovieTrackingPlaneMarkers_find_frame_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarkers_find_frame_frame_);

static BoolPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_exact_;
PropertyRNA &rna_MovieTrackingPlaneMarkers_find_frame_exact = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarkers_find_frame_exact_);

static PointerPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_plane_marker_;
PropertyRNA &rna_MovieTrackingPlaneMarkers_find_frame_plane_marker = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarkers_find_frame_plane_marker_);

FunctionRNA *rna_MovieTrackingPlaneMarkers_find_frame_func;
static IntPropertyRNA rna_MovieTrackingPlaneMarkers_insert_frame_frame_;
PropertyRNA &rna_MovieTrackingPlaneMarkers_insert_frame_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarkers_insert_frame_frame_);

static PointerPropertyRNA rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker_;
PropertyRNA &rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker_);

FunctionRNA *rna_MovieTrackingPlaneMarkers_insert_frame_func;
static IntPropertyRNA rna_MovieTrackingPlaneMarkers_delete_frame_frame_;
PropertyRNA &rna_MovieTrackingPlaneMarkers_delete_frame_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneMarkers_delete_frame_frame_);

FunctionRNA *rna_MovieTrackingPlaneMarkers_delete_frame_func;
StructRNA *RNA_MovieTrackingPlaneMarkers;
void register_struct_MovieTrackingPlaneMarkers(BlenderRNA &brna)
{
	rna_MovieTrackingPlaneMarkers_rna_properties_ = {
		{&rna_MovieTrackingPlaneMarkers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneMarkers_rna_properties_begin, MovieTrackingPlaneMarkers_rna_properties_next, MovieTrackingPlaneMarkers_rna_properties_end, MovieTrackingPlaneMarkers_rna_properties_get, nullptr, nullptr, MovieTrackingPlaneMarkers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingPlaneMarkers_rna_type_ = {
		{nullptr, 	&rna_MovieTrackingPlaneMarkers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneMarkers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_MovieTrackingPlaneMarkers;
	srna->cont.properties = {&rna_MovieTrackingPlaneMarkers_rna_properties, &rna_MovieTrackingPlaneMarkers_rna_type};
	srna->identifier = "MovieTrackingPlaneMarkers";
	srna->flag = 516;
	srna->name = "Movie Tracking Plane Markers";
	srna->description = "Collection of markers for movie tracking plane track";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingPlaneMarkers_rna_properties;
	{
	rna_MovieTrackingPlaneMarkers_find_frame_frame_ = {
		{&rna_MovieTrackingPlaneMarkers_find_frame_exact, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number to find marker for",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_MovieTrackingPlaneMarkers_find_frame_exact_ = {
		{&rna_MovieTrackingPlaneMarkers_find_frame_plane_marker, 	&rna_MovieTrackingPlaneMarkers_find_frame_frame,
		-1, "exact", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Exact",
		"Get plane marker at exact frame number rather than get estimated marker",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_MovieTrackingPlaneMarkers_find_frame_plane_marker_ = {
		{nullptr, 	&rna_MovieTrackingPlaneMarkers_find_frame_exact,
		-1, "plane_marker", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Plane marker for specified frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieTrackingPlaneMarker
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingPlaneMarkers_find_frame_frame, &rna_MovieTrackingPlaneMarkers_find_frame_plane_marker};
		func->identifier = "find_frame";
		func->description = "Get plane marker for specified frame";
		func->call = MovieTrackingPlaneMarkers_find_frame_call;
		func->c_ret = &rna_MovieTrackingPlaneMarkers_find_frame_plane_marker;
		rna_MovieTrackingPlaneMarkers_find_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MovieTrackingPlaneMarkers_insert_frame_frame_ = {
		{&rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number to insert marker to",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker_ = {
		{nullptr, 	&rna_MovieTrackingPlaneMarkers_insert_frame_frame,
		-1, "plane_marker", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created plane marker",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieTrackingPlaneMarker
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingPlaneMarkers_insert_frame_frame, &rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker};
		func->identifier = "insert_frame";
		func->description = "Insert a new plane marker at the specified frame";
		func->call = MovieTrackingPlaneMarkers_insert_frame_call;
		func->c_ret = &rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker;
		rna_MovieTrackingPlaneMarkers_insert_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MovieTrackingPlaneMarkers_delete_frame_frame_ = {
		{nullptr, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number to delete plane marker from",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingPlaneMarkers_delete_frame_frame, &rna_MovieTrackingPlaneMarkers_delete_frame_frame};
		func->identifier = "delete_frame";
		func->description = "Delete plane marker at specified frame";
		func->call = MovieTrackingPlaneMarkers_delete_frame_call;
		rna_MovieTrackingPlaneMarkers_delete_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Movie Tracks */
static CollectionPropertyRNA rna_MovieTrackingTracks_rna_properties_;
PropertyRNA &rna_MovieTrackingTracks_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTracks_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingTracks_rna_type_;
PropertyRNA &rna_MovieTrackingTracks_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTracks_rna_type_);

static PointerPropertyRNA rna_MovieTrackingTracks_active_;
PropertyRNA &rna_MovieTrackingTracks_active = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTracks_active_);

static StringPropertyRNA rna_MovieTrackingTracks_new_name_;
PropertyRNA &rna_MovieTrackingTracks_new_name = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTracks_new_name_);

static IntPropertyRNA rna_MovieTrackingTracks_new_frame_;
PropertyRNA &rna_MovieTrackingTracks_new_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTracks_new_frame_);

static PointerPropertyRNA rna_MovieTrackingTracks_new_track_;
PropertyRNA &rna_MovieTrackingTracks_new_track = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingTracks_new_track_);

FunctionRNA *rna_MovieTrackingTracks_new_func;
StructRNA *RNA_MovieTrackingTracks;
void register_struct_MovieTrackingTracks(BlenderRNA &brna)
{
	rna_MovieTrackingTracks_rna_properties_ = {
		{&rna_MovieTrackingTracks_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTracks_rna_properties_begin, MovieTrackingTracks_rna_properties_next, MovieTrackingTracks_rna_properties_end, MovieTrackingTracks_rna_properties_get, nullptr, nullptr, MovieTrackingTracks_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingTracks_rna_type_ = {
		{&rna_MovieTrackingTracks_active, 	&rna_MovieTrackingTracks_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTracks_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingTracks_active_ = {
		{nullptr, 	&rna_MovieTrackingTracks_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Track",
		"Active track in this tracking data object. Deprecated, use objects[name].tracks.active",
		0, "MovieClip",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 358219776, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingTracks_active_get, MovieTrackingTracks_active_set, nullptr, nullptr,RNA_MovieTrackingTrack
	};

	StructRNA *srna = RNA_MovieTrackingTracks;
	srna->cont.properties = {&rna_MovieTrackingTracks_rna_properties, &rna_MovieTrackingTracks_active};
	srna->identifier = "MovieTrackingTracks";
	srna->flag = 516;
	srna->name = "Movie Tracks";
	srna->description = "Collection of movie tracking tracks";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingTracks_rna_properties;
	{
	rna_MovieTrackingTracks_new_name_ = {
		{&rna_MovieTrackingTracks_new_frame, 	nullptr,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Name of new track",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_MovieTrackingTracks_new_frame_ = {
		{&rna_MovieTrackingTracks_new_track, 	&rna_MovieTrackingTracks_new_name,
		-1, "frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number to add track on",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_MovieTrackingTracks_new_track_ = {
		{nullptr, 	&rna_MovieTrackingTracks_new_frame,
		-1, "track", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created track",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieTrackingTrack
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingTracks_new_name, &rna_MovieTrackingTracks_new_track};
		func->identifier = "new";
		func->flag = 2048;
		func->description = "Create new motion track in this movie clip";
		func->call = MovieTrackingTracks_new_call;
		func->c_ret = &rna_MovieTrackingTracks_new_track;
		rna_MovieTrackingTracks_new_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Movie Plane Tracks */
static CollectionPropertyRNA rna_MovieTrackingPlaneTracks_rna_properties_;
PropertyRNA &rna_MovieTrackingPlaneTracks_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTracks_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingPlaneTracks_rna_type_;
PropertyRNA &rna_MovieTrackingPlaneTracks_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTracks_rna_type_);

static PointerPropertyRNA rna_MovieTrackingPlaneTracks_active_;
PropertyRNA &rna_MovieTrackingPlaneTracks_active = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingPlaneTracks_active_);

StructRNA *RNA_MovieTrackingPlaneTracks;
void register_struct_MovieTrackingPlaneTracks(BlenderRNA &brna)
{
	rna_MovieTrackingPlaneTracks_rna_properties_ = {
		{&rna_MovieTrackingPlaneTracks_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneTracks_rna_properties_begin, MovieTrackingPlaneTracks_rna_properties_next, MovieTrackingPlaneTracks_rna_properties_end, MovieTrackingPlaneTracks_rna_properties_get, nullptr, nullptr, MovieTrackingPlaneTracks_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingPlaneTracks_rna_type_ = {
		{&rna_MovieTrackingPlaneTracks_active, 	&rna_MovieTrackingPlaneTracks_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneTracks_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingPlaneTracks_active_ = {
		{nullptr, 	&rna_MovieTrackingPlaneTracks_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Plane Track",
		"Active plane track in this tracking data object. Deprecated, use objects[name].plane_tracks.active",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 358219776, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingPlaneTracks_active_get, MovieTrackingPlaneTracks_active_set, nullptr, nullptr,RNA_MovieTrackingPlaneTrack
	};

	StructRNA *srna = RNA_MovieTrackingPlaneTracks;
	srna->cont.properties = {&rna_MovieTrackingPlaneTracks_rna_properties, &rna_MovieTrackingPlaneTracks_active};
	srna->identifier = "MovieTrackingPlaneTracks";
	srna->flag = 516;
	srna->name = "Movie Plane Tracks";
	srna->description = "Collection of movie tracking plane tracks";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingPlaneTracks_rna_properties;
};

/* Movie Tracks */
static CollectionPropertyRNA rna_MovieTrackingObjectTracks_rna_properties_;
PropertyRNA &rna_MovieTrackingObjectTracks_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjectTracks_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingObjectTracks_rna_type_;
PropertyRNA &rna_MovieTrackingObjectTracks_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjectTracks_rna_type_);

static PointerPropertyRNA rna_MovieTrackingObjectTracks_active_;
PropertyRNA &rna_MovieTrackingObjectTracks_active = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjectTracks_active_);

static StringPropertyRNA rna_MovieTrackingObjectTracks_new_name_;
PropertyRNA &rna_MovieTrackingObjectTracks_new_name = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjectTracks_new_name_);

static IntPropertyRNA rna_MovieTrackingObjectTracks_new_frame_;
PropertyRNA &rna_MovieTrackingObjectTracks_new_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjectTracks_new_frame_);

static PointerPropertyRNA rna_MovieTrackingObjectTracks_new_track_;
PropertyRNA &rna_MovieTrackingObjectTracks_new_track = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjectTracks_new_track_);

FunctionRNA *rna_MovieTrackingObjectTracks_new_func;
StructRNA *RNA_MovieTrackingObjectTracks;
void register_struct_MovieTrackingObjectTracks(BlenderRNA &brna)
{
	rna_MovieTrackingObjectTracks_rna_properties_ = {
		{&rna_MovieTrackingObjectTracks_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObjectTracks_rna_properties_begin, MovieTrackingObjectTracks_rna_properties_next, MovieTrackingObjectTracks_rna_properties_end, MovieTrackingObjectTracks_rna_properties_get, nullptr, nullptr, MovieTrackingObjectTracks_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingObjectTracks_rna_type_ = {
		{&rna_MovieTrackingObjectTracks_active, 	&rna_MovieTrackingObjectTracks_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObjectTracks_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingObjectTracks_active_ = {
		{nullptr, 	&rna_MovieTrackingObjectTracks_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Track",
		"Active track in this tracking data object",
		0, "MovieClip",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 358219776, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObjectTracks_active_get, MovieTrackingObjectTracks_active_set, nullptr, nullptr,RNA_MovieTrackingTrack
	};

	StructRNA *srna = RNA_MovieTrackingObjectTracks;
	srna->cont.properties = {&rna_MovieTrackingObjectTracks_rna_properties, &rna_MovieTrackingObjectTracks_active};
	srna->identifier = "MovieTrackingObjectTracks";
	srna->flag = 516;
	srna->name = "Movie Tracks";
	srna->description = "Collection of movie tracking tracks";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingObjectTracks_rna_properties;
	{
	rna_MovieTrackingObjectTracks_new_name_ = {
		{&rna_MovieTrackingObjectTracks_new_frame, 	nullptr,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Name of new track",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_MovieTrackingObjectTracks_new_frame_ = {
		{&rna_MovieTrackingObjectTracks_new_track, 	&rna_MovieTrackingObjectTracks_new_name,
		-1, "frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number to add tracks on",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_MovieTrackingObjectTracks_new_track_ = {
		{nullptr, 	&rna_MovieTrackingObjectTracks_new_frame,
		-1, "track", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created track",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieTrackingTrack
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingObjectTracks_new_name, &rna_MovieTrackingObjectTracks_new_track};
		func->identifier = "new";
		func->flag = 2048;
		func->description = "create new motion track in this movie clip";
		func->call = MovieTrackingObjectTracks_new_call;
		func->c_ret = &rna_MovieTrackingObjectTracks_new_track;
		rna_MovieTrackingObjectTracks_new_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Plane Tracks */
static CollectionPropertyRNA rna_MovieTrackingObjectPlaneTracks_rna_properties_;
PropertyRNA &rna_MovieTrackingObjectPlaneTracks_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjectPlaneTracks_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingObjectPlaneTracks_rna_type_;
PropertyRNA &rna_MovieTrackingObjectPlaneTracks_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjectPlaneTracks_rna_type_);

static PointerPropertyRNA rna_MovieTrackingObjectPlaneTracks_active_;
PropertyRNA &rna_MovieTrackingObjectPlaneTracks_active = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjectPlaneTracks_active_);

StructRNA *RNA_MovieTrackingObjectPlaneTracks;
void register_struct_MovieTrackingObjectPlaneTracks(BlenderRNA &brna)
{
	rna_MovieTrackingObjectPlaneTracks_rna_properties_ = {
		{&rna_MovieTrackingObjectPlaneTracks_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObjectPlaneTracks_rna_properties_begin, MovieTrackingObjectPlaneTracks_rna_properties_next, MovieTrackingObjectPlaneTracks_rna_properties_end, MovieTrackingObjectPlaneTracks_rna_properties_get, nullptr, nullptr, MovieTrackingObjectPlaneTracks_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingObjectPlaneTracks_rna_type_ = {
		{&rna_MovieTrackingObjectPlaneTracks_active, 	&rna_MovieTrackingObjectPlaneTracks_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObjectPlaneTracks_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingObjectPlaneTracks_active_ = {
		{nullptr, 	&rna_MovieTrackingObjectPlaneTracks_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Track",
		"Active track in this tracking data object",
		0, "MovieClip",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 358219776, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObjectPlaneTracks_active_get, MovieTrackingObjectPlaneTracks_active_set, nullptr, nullptr,RNA_MovieTrackingTrack
	};

	StructRNA *srna = RNA_MovieTrackingObjectPlaneTracks;
	srna->cont.properties = {&rna_MovieTrackingObjectPlaneTracks_rna_properties, &rna_MovieTrackingObjectPlaneTracks_active};
	srna->identifier = "MovieTrackingObjectPlaneTracks";
	srna->flag = 516;
	srna->name = "Plane Tracks";
	srna->description = "Collection of tracking plane tracks";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingObjectPlaneTracks_rna_properties;
};

/* Movie tracking stabilization data */
static CollectionPropertyRNA rna_MovieTrackingStabilization_rna_properties_;
PropertyRNA &rna_MovieTrackingStabilization_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingStabilization_rna_type_;
PropertyRNA &rna_MovieTrackingStabilization_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_rna_type_);

static BoolPropertyRNA rna_MovieTrackingStabilization_use_2d_stabilization_;
PropertyRNA &rna_MovieTrackingStabilization_use_2d_stabilization = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_use_2d_stabilization_);

static BoolPropertyRNA rna_MovieTrackingStabilization_use_stabilize_rotation_;
PropertyRNA &rna_MovieTrackingStabilization_use_stabilize_rotation = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_use_stabilize_rotation_);

static BoolPropertyRNA rna_MovieTrackingStabilization_use_stabilize_scale_;
PropertyRNA &rna_MovieTrackingStabilization_use_stabilize_scale = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_use_stabilize_scale_);

static CollectionPropertyRNA rna_MovieTrackingStabilization_tracks_;
PropertyRNA &rna_MovieTrackingStabilization_tracks = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_tracks_);

static IntPropertyRNA rna_MovieTrackingStabilization_active_track_index_;
PropertyRNA &rna_MovieTrackingStabilization_active_track_index = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_active_track_index_);

static CollectionPropertyRNA rna_MovieTrackingStabilization_rotation_tracks_;
PropertyRNA &rna_MovieTrackingStabilization_rotation_tracks = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_rotation_tracks_);

static IntPropertyRNA rna_MovieTrackingStabilization_active_rotation_track_index_;
PropertyRNA &rna_MovieTrackingStabilization_active_rotation_track_index = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_active_rotation_track_index_);

static IntPropertyRNA rna_MovieTrackingStabilization_anchor_frame_;
PropertyRNA &rna_MovieTrackingStabilization_anchor_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_anchor_frame_);

static FloatPropertyRNA rna_MovieTrackingStabilization_target_position_;
PropertyRNA &rna_MovieTrackingStabilization_target_position = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_target_position_);

static FloatPropertyRNA rna_MovieTrackingStabilization_target_rotation_;
PropertyRNA &rna_MovieTrackingStabilization_target_rotation = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_target_rotation_);

static FloatPropertyRNA rna_MovieTrackingStabilization_target_scale_;
PropertyRNA &rna_MovieTrackingStabilization_target_scale = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_target_scale_);

static BoolPropertyRNA rna_MovieTrackingStabilization_use_autoscale_;
PropertyRNA &rna_MovieTrackingStabilization_use_autoscale = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_use_autoscale_);

static FloatPropertyRNA rna_MovieTrackingStabilization_scale_max_;
PropertyRNA &rna_MovieTrackingStabilization_scale_max = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_scale_max_);

static FloatPropertyRNA rna_MovieTrackingStabilization_influence_location_;
PropertyRNA &rna_MovieTrackingStabilization_influence_location = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_influence_location_);

static FloatPropertyRNA rna_MovieTrackingStabilization_influence_scale_;
PropertyRNA &rna_MovieTrackingStabilization_influence_scale = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_influence_scale_);

static FloatPropertyRNA rna_MovieTrackingStabilization_influence_rotation_;
PropertyRNA &rna_MovieTrackingStabilization_influence_rotation = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_influence_rotation_);

static EnumPropertyRNA rna_MovieTrackingStabilization_filter_type_;
PropertyRNA &rna_MovieTrackingStabilization_filter_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_filter_type_);

static BoolPropertyRNA rna_MovieTrackingStabilization_show_tracks_expanded_;
PropertyRNA &rna_MovieTrackingStabilization_show_tracks_expanded = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingStabilization_show_tracks_expanded_);

StructRNA *RNA_MovieTrackingStabilization;
void register_struct_MovieTrackingStabilization(BlenderRNA &brna)
{
	rna_MovieTrackingStabilization_rna_properties_ = {
		{&rna_MovieTrackingStabilization_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_rna_properties_begin, MovieTrackingStabilization_rna_properties_next, MovieTrackingStabilization_rna_properties_end, MovieTrackingStabilization_rna_properties_get, nullptr, nullptr, MovieTrackingStabilization_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingStabilization_rna_type_ = {
		{&rna_MovieTrackingStabilization_use_2d_stabilization, 	&rna_MovieTrackingStabilization_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingStabilization_use_2d_stabilization_ = {
		{&rna_MovieTrackingStabilization_use_stabilize_rotation, 	&rna_MovieTrackingStabilization_rna_type,
		-1, "use_2d_stabilization", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use 2D Stabilization",
		"Use 2D stabilization for footage",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_use_2d_stabilization_get, MovieTrackingStabilization_use_2d_stabilization_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingStabilization_use_stabilize_rotation_ = {
		{&rna_MovieTrackingStabilization_use_stabilize_scale, 	&rna_MovieTrackingStabilization_use_2d_stabilization,
		-1, "use_stabilize_rotation", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stabilize Rotation",
		"Stabilize detected rotation around center of frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_use_stabilize_rotation_get, MovieTrackingStabilization_use_stabilize_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingStabilization_use_stabilize_scale_ = {
		{&rna_MovieTrackingStabilization_tracks, 	&rna_MovieTrackingStabilization_use_stabilize_rotation,
		-1, "use_stabilize_scale", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stabilize Scale",
		"Compensate any scale changes relative to center of rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_use_stabilize_scale_get, MovieTrackingStabilization_use_stabilize_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingStabilization_tracks_ = {
		{&rna_MovieTrackingStabilization_active_track_index, 	&rna_MovieTrackingStabilization_use_stabilize_scale,
		-1, "tracks", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Translation Tracks",
		"Collection of tracks used for 2D stabilization (translation)",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_tracks_begin, MovieTrackingStabilization_tracks_next, MovieTrackingStabilization_tracks_end, MovieTrackingStabilization_tracks_get, nullptr, MovieTrackingStabilization_tracks_lookup_int, nullptr, nullptr, RNA_MovieTrackingTrack
	};

	rna_MovieTrackingStabilization_active_track_index_ = {
		{&rna_MovieTrackingStabilization_rotation_tracks, 	&rna_MovieTrackingStabilization_tracks,
		-1, "active_track_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Track Index",
		"Index of active track in translation stabilization tracks list",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_active_track_index_get, MovieTrackingStabilization_active_track_index_set, nullptr, nullptr, rna_tracking_stabTracks_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingStabilization_rotation_tracks_ = {
		{&rna_MovieTrackingStabilization_active_rotation_track_index, 	&rna_MovieTrackingStabilization_active_track_index,
		-1, "rotation_tracks", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Rotation Tracks",
		"Collection of tracks used for 2D stabilization (translation)",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_rotation_tracks_begin, MovieTrackingStabilization_rotation_tracks_next, MovieTrackingStabilization_rotation_tracks_end, MovieTrackingStabilization_rotation_tracks_get, nullptr, MovieTrackingStabilization_rotation_tracks_lookup_int, nullptr, nullptr, RNA_MovieTrackingTrack
	};

	rna_MovieTrackingStabilization_active_rotation_track_index_ = {
		{&rna_MovieTrackingStabilization_anchor_frame, 	&rna_MovieTrackingStabilization_rotation_tracks,
		-1, "active_rotation_track_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Rotation Track Index",
		"Index of active track in rotation stabilization tracks list",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_active_rotation_track_index_get, MovieTrackingStabilization_active_rotation_track_index_set, nullptr, nullptr, rna_tracking_stabRotTracks_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingStabilization_anchor_frame_ = {
		{&rna_MovieTrackingStabilization_target_position, 	&rna_MovieTrackingStabilization_active_rotation_track_index,
		-1, "anchor_frame", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Anchor Frame",
		"Reference point to anchor stabilization (other frames will be adjusted relative to this frame\'s position)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingStabilization, anchor_frame), RawPropertyType(0), nullptr},
		MovieTrackingStabilization_anchor_frame_get, MovieTrackingStabilization_anchor_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_MovieTrackingStabilization_target_position_default[2] = {
		0.0f,
		0.0f
	};
	rna_MovieTrackingStabilization_target_position_ = {
		{&rna_MovieTrackingStabilization_target_rotation, 	&rna_MovieTrackingStabilization_anchor_frame,
		-1, "target_position", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Expected Position",
		"Known relative offset of original shot, will be subtracted (e.g. for panning shot, can be animated)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingStabilization, target_pos), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieTrackingStabilization_target_position_get, MovieTrackingStabilization_target_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_MovieTrackingStabilization_target_position_default
	};

	rna_MovieTrackingStabilization_target_rotation_ = {
		{&rna_MovieTrackingStabilization_target_scale, 	&rna_MovieTrackingStabilization_target_position,
		-1, "target_rotation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Expected Rotation",
		"Rotation present on original shot, will be compensated (e.g. for deliberate tilting)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingStabilization, target_rot), RawPropertyType(5), nullptr},
		MovieTrackingStabilization_target_rotation_get, MovieTrackingStabilization_target_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingStabilization_target_scale_ = {
		{&rna_MovieTrackingStabilization_use_autoscale, 	&rna_MovieTrackingStabilization_target_rotation,
		-1, "target_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Expected Scale",
		"Explicitly scale resulting frame to compensate zoom of original shot",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingStabilization, scale), RawPropertyType(5), nullptr},
		MovieTrackingStabilization_target_scale_get, MovieTrackingStabilization_target_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 10.0f, 0.0000001192f, FLT_MAX, 0.0010000000f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingStabilization_use_autoscale_ = {
		{&rna_MovieTrackingStabilization_scale_max, 	&rna_MovieTrackingStabilization_target_scale,
		-1, "use_autoscale", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Autoscale",
		"Automatically scale footage to cover unfilled areas when stabilizing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_use_autoscale_get, MovieTrackingStabilization_use_autoscale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingStabilization_scale_max_ = {
		{&rna_MovieTrackingStabilization_influence_location, 	&rna_MovieTrackingStabilization_use_autoscale,
		-1, "scale_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximal Scale",
		"Limit the amount of automatic scaling",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingStabilization, maxscale), RawPropertyType(5), nullptr},
		MovieTrackingStabilization_scale_max_get, MovieTrackingStabilization_scale_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingStabilization_influence_location_ = {
		{&rna_MovieTrackingStabilization_influence_scale, 	&rna_MovieTrackingStabilization_scale_max,
		-1, "influence_location", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Location Influence",
		"Influence of stabilization algorithm on footage location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingStabilization, locinf), RawPropertyType(5), nullptr},
		MovieTrackingStabilization_influence_location_get, MovieTrackingStabilization_influence_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingStabilization_influence_scale_ = {
		{&rna_MovieTrackingStabilization_influence_rotation, 	&rna_MovieTrackingStabilization_influence_location,
		-1, "influence_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale Influence",
		"Influence of stabilization algorithm on footage scale",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingStabilization, scaleinf), RawPropertyType(5), nullptr},
		MovieTrackingStabilization_influence_scale_get, MovieTrackingStabilization_influence_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingStabilization_influence_rotation_ = {
		{&rna_MovieTrackingStabilization_filter_type, 	&rna_MovieTrackingStabilization_influence_scale,
		-1, "influence_rotation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation Influence",
		"Influence of stabilization algorithm on footage rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingStabilization, rotinf), RawPropertyType(5), nullptr},
		MovieTrackingStabilization_influence_rotation_get, MovieTrackingStabilization_influence_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_MovieTrackingStabilization_filter_type_items[4] = {
		{0, "NEAREST", 0, "Nearest", "No interpolation, use nearest neighbor pixel"	},
		{1, "BILINEAR", 0, "Bilinear", "Simple interpolation between adjacent pixels"	},
		{2, "BICUBIC", 0, "Bicubic", "High quality pixel interpolation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieTrackingStabilization_filter_type_ = {
		{&rna_MovieTrackingStabilization_show_tracks_expanded, 	&rna_MovieTrackingStabilization_influence_rotation,
		-1, "filter_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interpolate",
		"Interpolation to use for sub-pixel shifts and rotations due to stabilization",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_tracking_flushUpdate, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingStabilization, filter), RawPropertyType(0), nullptr},
		MovieTrackingStabilization_filter_type_get, MovieTrackingStabilization_filter_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieTrackingStabilization_filter_type_items, 3, 0
	};

	rna_MovieTrackingStabilization_show_tracks_expanded_ = {
		{nullptr, 	&rna_MovieTrackingStabilization_filter_type,
		-1, "show_tracks_expanded", 4097, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Tracks",
		"Show UI list of tracks participating in stabilization",
		33, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingStabilization_show_tracks_expanded_get, MovieTrackingStabilization_show_tracks_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MovieTrackingStabilization;
	srna->cont.properties = {&rna_MovieTrackingStabilization_rna_properties, &rna_MovieTrackingStabilization_show_tracks_expanded};
	srna->identifier = "MovieTrackingStabilization";
	srna->flag = 516;
	srna->name = "Movie tracking stabilization data";
	srna->description = "2D stabilization based on tracking markers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingStabilization_rna_properties;
	srna->path = rna_trackingStabilization_path;
};

/* Reconstructed Cameras */
static CollectionPropertyRNA rna_MovieTrackingReconstructedCameras_rna_properties_;
PropertyRNA &rna_MovieTrackingReconstructedCameras_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstructedCameras_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingReconstructedCameras_rna_type_;
PropertyRNA &rna_MovieTrackingReconstructedCameras_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstructedCameras_rna_type_);

static IntPropertyRNA rna_MovieTrackingReconstructedCameras_find_frame_frame_;
PropertyRNA &rna_MovieTrackingReconstructedCameras_find_frame_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstructedCameras_find_frame_frame_);

static PointerPropertyRNA rna_MovieTrackingReconstructedCameras_find_frame_camera_;
PropertyRNA &rna_MovieTrackingReconstructedCameras_find_frame_camera = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstructedCameras_find_frame_camera_);

FunctionRNA *rna_MovieTrackingReconstructedCameras_find_frame_func;
static IntPropertyRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame_;
PropertyRNA &rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame_);

static FloatPropertyRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix_;
PropertyRNA &rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix_);

FunctionRNA *rna_MovieTrackingReconstructedCameras_matrix_from_frame_func;
StructRNA *RNA_MovieTrackingReconstructedCameras;
void register_struct_MovieTrackingReconstructedCameras(BlenderRNA &brna)
{
	rna_MovieTrackingReconstructedCameras_rna_properties_ = {
		{&rna_MovieTrackingReconstructedCameras_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingReconstructedCameras_rna_properties_begin, MovieTrackingReconstructedCameras_rna_properties_next, MovieTrackingReconstructedCameras_rna_properties_end, MovieTrackingReconstructedCameras_rna_properties_get, nullptr, nullptr, MovieTrackingReconstructedCameras_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingReconstructedCameras_rna_type_ = {
		{nullptr, 	&rna_MovieTrackingReconstructedCameras_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingReconstructedCameras_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_MovieTrackingReconstructedCameras;
	srna->cont.properties = {&rna_MovieTrackingReconstructedCameras_rna_properties, &rna_MovieTrackingReconstructedCameras_rna_type};
	srna->identifier = "MovieTrackingReconstructedCameras";
	srna->flag = 516;
	srna->name = "Reconstructed Cameras";
	srna->description = "Collection of solved cameras";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingReconstructedCameras_rna_properties;
	{
	rna_MovieTrackingReconstructedCameras_find_frame_frame_ = {
		{&rna_MovieTrackingReconstructedCameras_find_frame_camera, 	nullptr,
		-1, "frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number to find camera for",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_MovieTrackingReconstructedCameras_find_frame_camera_ = {
		{nullptr, 	&rna_MovieTrackingReconstructedCameras_find_frame_frame,
		-1, "camera", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Camera for a given frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieReconstructedCamera
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingReconstructedCameras_find_frame_frame, &rna_MovieTrackingReconstructedCameras_find_frame_camera};
		func->identifier = "find_frame";
		func->flag = 2048;
		func->description = "Find a reconstructed camera for a give frame number";
		func->call = MovieTrackingReconstructedCameras_find_frame_call;
		func->c_ret = &rna_MovieTrackingReconstructedCameras_find_frame_camera;
		rna_MovieTrackingReconstructedCameras_find_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame_ = {
		{&rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix, 	nullptr,
		-1, "frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number to find camera for",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	static float rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix_default[16] = {
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
	rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix_ = {
		{nullptr, 	&rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame,
		-1, "matrix", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Matrix",
		"Interpolated camera matrix for a given frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame, &rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix};
		func->identifier = "matrix_from_frame";
		func->flag = 2048;
		func->description = "Return interpolated camera matrix for a given frame";
		func->call = MovieTrackingReconstructedCameras_matrix_from_frame_call;
		rna_MovieTrackingReconstructedCameras_matrix_from_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Movie tracking reconstructed camera data */
static CollectionPropertyRNA rna_MovieReconstructedCamera_rna_properties_;
PropertyRNA &rna_MovieReconstructedCamera_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieReconstructedCamera_rna_properties_);

static PointerPropertyRNA rna_MovieReconstructedCamera_rna_type_;
PropertyRNA &rna_MovieReconstructedCamera_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieReconstructedCamera_rna_type_);

static IntPropertyRNA rna_MovieReconstructedCamera_frame_;
PropertyRNA &rna_MovieReconstructedCamera_frame = reinterpret_cast<PropertyRNA &>(rna_MovieReconstructedCamera_frame_);

static FloatPropertyRNA rna_MovieReconstructedCamera_matrix_;
PropertyRNA &rna_MovieReconstructedCamera_matrix = reinterpret_cast<PropertyRNA &>(rna_MovieReconstructedCamera_matrix_);

static FloatPropertyRNA rna_MovieReconstructedCamera_average_error_;
PropertyRNA &rna_MovieReconstructedCamera_average_error = reinterpret_cast<PropertyRNA &>(rna_MovieReconstructedCamera_average_error_);

StructRNA *RNA_MovieReconstructedCamera;
void register_struct_MovieReconstructedCamera(BlenderRNA &brna)
{
	rna_MovieReconstructedCamera_rna_properties_ = {
		{&rna_MovieReconstructedCamera_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieReconstructedCamera_rna_properties_begin, MovieReconstructedCamera_rna_properties_next, MovieReconstructedCamera_rna_properties_end, MovieReconstructedCamera_rna_properties_get, nullptr, nullptr, MovieReconstructedCamera_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieReconstructedCamera_rna_type_ = {
		{&rna_MovieReconstructedCamera_frame, 	&rna_MovieReconstructedCamera_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieReconstructedCamera_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieReconstructedCamera_frame_ = {
		{&rna_MovieReconstructedCamera_matrix, 	&rna_MovieReconstructedCamera_rna_type,
		-1, "frame", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frame",
		"Frame number marker is keyframed on",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieReconstructedCamera, framenr), RawPropertyType(0), nullptr},
		MovieReconstructedCamera_frame_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_MovieReconstructedCamera_matrix_default[16] = {
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
	rna_MovieReconstructedCamera_matrix_ = {
		{&rna_MovieReconstructedCamera_average_error, 	&rna_MovieReconstructedCamera_frame,
		-1, "matrix", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Matrix",
		"Worldspace transformation matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieReconstructedCamera, mat), RawPropertyType(5), nullptr},
		nullptr, nullptr, MovieReconstructedCamera_matrix_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MovieReconstructedCamera_matrix_default
	};

	rna_MovieReconstructedCamera_average_error_ = {
		{nullptr, 	&rna_MovieReconstructedCamera_matrix,
		-1, "average_error", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Average Error",
		"Average error of reconstruction",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieReconstructedCamera, error), RawPropertyType(5), nullptr},
		MovieReconstructedCamera_average_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_MovieReconstructedCamera;
	srna->cont.properties = {&rna_MovieReconstructedCamera_rna_properties, &rna_MovieReconstructedCamera_average_error};
	srna->identifier = "MovieReconstructedCamera";
	srna->flag = 516;
	srna->name = "Movie tracking reconstructed camera data";
	srna->description = "Match-moving reconstructed camera data from tracker";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieReconstructedCamera_rna_properties;
};

/* Movie tracking reconstruction data */
static CollectionPropertyRNA rna_MovieTrackingReconstruction_rna_properties_;
PropertyRNA &rna_MovieTrackingReconstruction_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstruction_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingReconstruction_rna_type_;
PropertyRNA &rna_MovieTrackingReconstruction_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstruction_rna_type_);

static BoolPropertyRNA rna_MovieTrackingReconstruction_is_valid_;
PropertyRNA &rna_MovieTrackingReconstruction_is_valid = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstruction_is_valid_);

static FloatPropertyRNA rna_MovieTrackingReconstruction_average_error_;
PropertyRNA &rna_MovieTrackingReconstruction_average_error = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstruction_average_error_);

static CollectionPropertyRNA rna_MovieTrackingReconstruction_cameras_;
PropertyRNA &rna_MovieTrackingReconstruction_cameras = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingReconstruction_cameras_);

StructRNA *RNA_MovieTrackingReconstruction;
void register_struct_MovieTrackingReconstruction(BlenderRNA &brna)
{
	rna_MovieTrackingReconstruction_rna_properties_ = {
		{&rna_MovieTrackingReconstruction_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingReconstruction_rna_properties_begin, MovieTrackingReconstruction_rna_properties_next, MovieTrackingReconstruction_rna_properties_end, MovieTrackingReconstruction_rna_properties_get, nullptr, nullptr, MovieTrackingReconstruction_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingReconstruction_rna_type_ = {
		{&rna_MovieTrackingReconstruction_is_valid, 	&rna_MovieTrackingReconstruction_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingReconstruction_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingReconstruction_is_valid_ = {
		{&rna_MovieTrackingReconstruction_average_error, 	&rna_MovieTrackingReconstruction_rna_type,
		-1, "is_valid", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reconstructed",
		"Whether the tracking data contains valid reconstruction information",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingReconstruction_is_valid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingReconstruction_average_error_ = {
		{&rna_MovieTrackingReconstruction_cameras, 	&rna_MovieTrackingReconstruction_is_valid,
		-1, "average_error", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Average Error",
		"Average error of reconstruction",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingReconstruction, error), RawPropertyType(5), nullptr},
		MovieTrackingReconstruction_average_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieTrackingReconstruction_cameras_ = {
		{nullptr, 	&rna_MovieTrackingReconstruction_average_error,
		-1, "cameras", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Cameras",
		"Collection of solved cameras",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MovieTrackingReconstructedCameras},
		MovieTrackingReconstruction_cameras_begin, MovieTrackingReconstruction_cameras_next, MovieTrackingReconstruction_cameras_end, MovieTrackingReconstruction_cameras_get, MovieTrackingReconstruction_cameras_length, MovieTrackingReconstruction_cameras_lookup_int, nullptr, nullptr, RNA_MovieReconstructedCamera
	};

	StructRNA *srna = RNA_MovieTrackingReconstruction;
	srna->cont.properties = {&rna_MovieTrackingReconstruction_rna_properties, &rna_MovieTrackingReconstruction_cameras};
	srna->identifier = "MovieTrackingReconstruction";
	srna->flag = 516;
	srna->name = "Movie tracking reconstruction data";
	srna->description = "Match-moving reconstruction data from tracker";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingReconstruction_rna_properties;
};

/* Movie tracking object data */
static CollectionPropertyRNA rna_MovieTrackingObject_rna_properties_;
PropertyRNA &rna_MovieTrackingObject_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObject_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingObject_rna_type_;
PropertyRNA &rna_MovieTrackingObject_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObject_rna_type_);

static StringPropertyRNA rna_MovieTrackingObject_name_;
PropertyRNA &rna_MovieTrackingObject_name = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObject_name_);

static BoolPropertyRNA rna_MovieTrackingObject_is_camera_;
PropertyRNA &rna_MovieTrackingObject_is_camera = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObject_is_camera_);

static CollectionPropertyRNA rna_MovieTrackingObject_tracks_;
PropertyRNA &rna_MovieTrackingObject_tracks = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObject_tracks_);

static CollectionPropertyRNA rna_MovieTrackingObject_plane_tracks_;
PropertyRNA &rna_MovieTrackingObject_plane_tracks = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObject_plane_tracks_);

static PointerPropertyRNA rna_MovieTrackingObject_reconstruction_;
PropertyRNA &rna_MovieTrackingObject_reconstruction = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObject_reconstruction_);

static FloatPropertyRNA rna_MovieTrackingObject_scale_;
PropertyRNA &rna_MovieTrackingObject_scale = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObject_scale_);

static IntPropertyRNA rna_MovieTrackingObject_keyframe_a_;
PropertyRNA &rna_MovieTrackingObject_keyframe_a = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObject_keyframe_a_);

static IntPropertyRNA rna_MovieTrackingObject_keyframe_b_;
PropertyRNA &rna_MovieTrackingObject_keyframe_b = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObject_keyframe_b_);

StructRNA *RNA_MovieTrackingObject;
void register_struct_MovieTrackingObject(BlenderRNA &brna)
{
	rna_MovieTrackingObject_rna_properties_ = {
		{&rna_MovieTrackingObject_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObject_rna_properties_begin, MovieTrackingObject_rna_properties_next, MovieTrackingObject_rna_properties_end, MovieTrackingObject_rna_properties_get, nullptr, nullptr, MovieTrackingObject_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingObject_rna_type_ = {
		{&rna_MovieTrackingObject_name, 	&rna_MovieTrackingObject_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObject_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingObject_name_ = {
		{&rna_MovieTrackingObject_is_camera, 	&rna_MovieTrackingObject_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Unique name of object",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObject_name_get, MovieTrackingObject_name_length, MovieTrackingObject_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_MovieTrackingObject_is_camera_ = {
		{&rna_MovieTrackingObject_tracks, 	&rna_MovieTrackingObject_name,
		-1, "is_camera", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Camera",
		"Object is used for camera tracking",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObject_is_camera_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingObject_tracks_ = {
		{&rna_MovieTrackingObject_plane_tracks, 	&rna_MovieTrackingObject_is_camera,
		-1, "tracks", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tracks",
		"Collection of tracks in this tracking data object",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MovieTrackingObjectTracks},
		MovieTrackingObject_tracks_begin, MovieTrackingObject_tracks_next, MovieTrackingObject_tracks_end, MovieTrackingObject_tracks_get, nullptr, MovieTrackingObject_tracks_lookup_int, MovieTrackingObject_tracks_lookup_string, nullptr, RNA_MovieTrackingTrack
	};

	rna_MovieTrackingObject_plane_tracks_ = {
		{&rna_MovieTrackingObject_reconstruction, 	&rna_MovieTrackingObject_tracks,
		-1, "plane_tracks", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Plane Tracks",
		"Collection of plane tracks in this tracking data object",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MovieTrackingObjectPlaneTracks},
		MovieTrackingObject_plane_tracks_begin, MovieTrackingObject_plane_tracks_next, MovieTrackingObject_plane_tracks_end, MovieTrackingObject_plane_tracks_get, nullptr, MovieTrackingObject_plane_tracks_lookup_int, MovieTrackingObject_plane_tracks_lookup_string, nullptr, RNA_MovieTrackingPlaneTrack
	};

	rna_MovieTrackingObject_reconstruction_ = {
		{&rna_MovieTrackingObject_scale, 	&rna_MovieTrackingObject_plane_tracks,
		-1, "reconstruction", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "reconstruction",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObject_reconstruction_get, nullptr, nullptr, nullptr,RNA_MovieTrackingReconstruction
	};

	rna_MovieTrackingObject_scale_ = {
		{&rna_MovieTrackingObject_keyframe_a, 	&rna_MovieTrackingObject_reconstruction,
		-1, "scale", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Scale of object solution in camera space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_trackingObject_flushUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingObject, scale), RawPropertyType(5), nullptr},
		MovieTrackingObject_scale_get, MovieTrackingObject_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10000.0f, 0.0001000000f, 10000.0f, 1.0f, 4, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MovieTrackingObject_keyframe_a_ = {
		{&rna_MovieTrackingObject_keyframe_b, 	&rna_MovieTrackingObject_scale,
		-1, "keyframe_a", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Keyframe A",
		"First keyframe used for reconstruction initialization",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingObject, keyframe1), RawPropertyType(0), nullptr},
		MovieTrackingObject_keyframe_a_get, MovieTrackingObject_keyframe_a_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingObject_keyframe_b_ = {
		{nullptr, 	&rna_MovieTrackingObject_keyframe_a,
		-1, "keyframe_b", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Keyframe B",
		"Second keyframe used for reconstruction initialization",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingObject, keyframe2), RawPropertyType(0), nullptr},
		MovieTrackingObject_keyframe_b_get, MovieTrackingObject_keyframe_b_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MovieTrackingObject;
	srna->cont.properties = {&rna_MovieTrackingObject_rna_properties, &rna_MovieTrackingObject_keyframe_b};
	srna->identifier = "MovieTrackingObject";
	srna->flag = 516;
	srna->name = "Movie tracking object data";
	srna->description = "Match-moving object tracking and reconstruction data";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_MovieTrackingObject_name;
	srna->iteratorproperty = &rna_MovieTrackingObject_rna_properties;
};

/* Movie Tracking Dopesheet */
static CollectionPropertyRNA rna_MovieTrackingDopesheet_rna_properties_;
PropertyRNA &rna_MovieTrackingDopesheet_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingDopesheet_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingDopesheet_rna_type_;
PropertyRNA &rna_MovieTrackingDopesheet_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingDopesheet_rna_type_);

static EnumPropertyRNA rna_MovieTrackingDopesheet_sort_method_;
PropertyRNA &rna_MovieTrackingDopesheet_sort_method = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingDopesheet_sort_method_);

static BoolPropertyRNA rna_MovieTrackingDopesheet_use_invert_sort_;
PropertyRNA &rna_MovieTrackingDopesheet_use_invert_sort = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingDopesheet_use_invert_sort_);

static BoolPropertyRNA rna_MovieTrackingDopesheet_show_only_selected_;
PropertyRNA &rna_MovieTrackingDopesheet_show_only_selected = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingDopesheet_show_only_selected_);

static BoolPropertyRNA rna_MovieTrackingDopesheet_show_hidden_;
PropertyRNA &rna_MovieTrackingDopesheet_show_hidden = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingDopesheet_show_hidden_);

StructRNA *RNA_MovieTrackingDopesheet;
void register_struct_MovieTrackingDopesheet(BlenderRNA &brna)
{
	rna_MovieTrackingDopesheet_rna_properties_ = {
		{&rna_MovieTrackingDopesheet_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingDopesheet_rna_properties_begin, MovieTrackingDopesheet_rna_properties_next, MovieTrackingDopesheet_rna_properties_end, MovieTrackingDopesheet_rna_properties_get, nullptr, nullptr, MovieTrackingDopesheet_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingDopesheet_rna_type_ = {
		{&rna_MovieTrackingDopesheet_sort_method, 	&rna_MovieTrackingDopesheet_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingDopesheet_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_MovieTrackingDopesheet_sort_method_items[7] = {
		{0, "NAME", 0, "Name", "Sort channels by their names"	},
		{1, "LONGEST", 0, "Longest", "Sort channels by longest tracked segment"	},
		{2, "TOTAL", 0, "Total", "Sort channels by overall amount of tracked segments"	},
		{3, "AVERAGE_ERROR", 0, "Average Error", "Sort channels by average reprojection error of tracks after solve"	},
		{4, "START", 0, "Start Frame", "Sort channels by first frame number"	},
		{5, "END", 0, "End Frame", "Sort channels by last frame number"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieTrackingDopesheet_sort_method_ = {
		{&rna_MovieTrackingDopesheet_use_invert_sort, 	&rna_MovieTrackingDopesheet_rna_type,
		-1, "sort_method", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dopesheet Sort Field",
		"Method to be used to sort channels in dopesheet view",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_trackingDopesheet_tagUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MovieTrackingDopesheet, sort_method), RawPropertyType(1), nullptr},
		MovieTrackingDopesheet_sort_method_get, MovieTrackingDopesheet_sort_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieTrackingDopesheet_sort_method_items, 6, 0
	};

	rna_MovieTrackingDopesheet_use_invert_sort_ = {
		{&rna_MovieTrackingDopesheet_show_only_selected, 	&rna_MovieTrackingDopesheet_sort_method,
		-1, "use_invert_sort", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert Dopesheet Sort",
		"Invert sort order of dopesheet channels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_trackingDopesheet_tagUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingDopesheet_use_invert_sort_get, MovieTrackingDopesheet_use_invert_sort_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingDopesheet_show_only_selected_ = {
		{&rna_MovieTrackingDopesheet_show_hidden, 	&rna_MovieTrackingDopesheet_use_invert_sort,
		-1, "show_only_selected", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Only Show Selected",
		"Only include channels relating to selected objects and data",
		30, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_trackingDopesheet_tagUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingDopesheet_show_only_selected_get, MovieTrackingDopesheet_show_only_selected_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTrackingDopesheet_show_hidden_ = {
		{nullptr, 	&rna_MovieTrackingDopesheet_show_only_selected,
		-1, "show_hidden", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Hidden",
		"Include channels from objects/bone that are not visible",
		76, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_trackingDopesheet_tagUpdate, 352321537, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingDopesheet_show_hidden_get, MovieTrackingDopesheet_show_hidden_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MovieTrackingDopesheet;
	srna->cont.properties = {&rna_MovieTrackingDopesheet_rna_properties, &rna_MovieTrackingDopesheet_show_hidden};
	srna->identifier = "MovieTrackingDopesheet";
	srna->flag = 516;
	srna->name = "Movie Tracking Dopesheet";
	srna->description = "Match-moving dopesheet data";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingDopesheet_rna_properties;
	srna->path = rna_trackingDopesheet_path;
};

/* Movie tracking data */
static CollectionPropertyRNA rna_MovieTracking_rna_properties_;
PropertyRNA &rna_MovieTracking_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_rna_properties_);

static PointerPropertyRNA rna_MovieTracking_rna_type_;
PropertyRNA &rna_MovieTracking_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_rna_type_);

static PointerPropertyRNA rna_MovieTracking_settings_;
PropertyRNA &rna_MovieTracking_settings = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_settings_);

static PointerPropertyRNA rna_MovieTracking_camera_;
PropertyRNA &rna_MovieTracking_camera = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_camera_);

static CollectionPropertyRNA rna_MovieTracking_tracks_;
PropertyRNA &rna_MovieTracking_tracks = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_tracks_);

static CollectionPropertyRNA rna_MovieTracking_plane_tracks_;
PropertyRNA &rna_MovieTracking_plane_tracks = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_plane_tracks_);

static PointerPropertyRNA rna_MovieTracking_stabilization_;
PropertyRNA &rna_MovieTracking_stabilization = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_stabilization_);

static PointerPropertyRNA rna_MovieTracking_reconstruction_;
PropertyRNA &rna_MovieTracking_reconstruction = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_reconstruction_);

static CollectionPropertyRNA rna_MovieTracking_objects_;
PropertyRNA &rna_MovieTracking_objects = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_objects_);

static IntPropertyRNA rna_MovieTracking_active_object_index_;
PropertyRNA &rna_MovieTracking_active_object_index = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_active_object_index_);

static PointerPropertyRNA rna_MovieTracking_dopesheet_;
PropertyRNA &rna_MovieTracking_dopesheet = reinterpret_cast<PropertyRNA &>(rna_MovieTracking_dopesheet_);

StructRNA *RNA_MovieTracking;
void register_struct_MovieTracking(BlenderRNA &brna)
{
	rna_MovieTracking_rna_properties_ = {
		{&rna_MovieTracking_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTracking_rna_properties_begin, MovieTracking_rna_properties_next, MovieTracking_rna_properties_end, MovieTracking_rna_properties_get, nullptr, nullptr, MovieTracking_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTracking_rna_type_ = {
		{&rna_MovieTracking_settings, 	&rna_MovieTracking_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTracking_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTracking_settings_ = {
		{&rna_MovieTracking_camera, 	&rna_MovieTracking_rna_type,
		-1, "settings", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "settings",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTracking_settings_get, nullptr, nullptr, nullptr,RNA_MovieTrackingSettings
	};

	rna_MovieTracking_camera_ = {
		{&rna_MovieTracking_tracks, 	&rna_MovieTracking_settings,
		-1, "camera", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "camera",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTracking_camera_get, nullptr, nullptr, nullptr,RNA_MovieTrackingCamera
	};

	rna_MovieTracking_tracks_ = {
		{&rna_MovieTracking_plane_tracks, 	&rna_MovieTracking_camera,
		-1, "tracks", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tracks",
		"Collection of tracks in this tracking data object. Deprecated, use objects[name].tracks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MovieTrackingTracks},
		MovieTracking_tracks_begin, MovieTracking_tracks_next, MovieTracking_tracks_end, MovieTracking_tracks_get, nullptr, MovieTracking_tracks_lookup_int, nullptr, nullptr, RNA_MovieTrackingTrack
	};

	rna_MovieTracking_plane_tracks_ = {
		{&rna_MovieTracking_stabilization, 	&rna_MovieTracking_tracks,
		-1, "plane_tracks", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Plane Tracks",
		"Collection of plane tracks in this tracking data object. Deprecated, use objects[name].plane_tracks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MovieTrackingPlaneTracks},
		MovieTracking_plane_tracks_begin, MovieTracking_plane_tracks_next, MovieTracking_plane_tracks_end, MovieTracking_plane_tracks_get, nullptr, MovieTracking_plane_tracks_lookup_int, nullptr, nullptr, RNA_MovieTrackingPlaneTrack
	};

	rna_MovieTracking_stabilization_ = {
		{&rna_MovieTracking_reconstruction, 	&rna_MovieTracking_plane_tracks,
		-1, "stabilization", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "stabilization",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTracking_stabilization_get, nullptr, nullptr, nullptr,RNA_MovieTrackingStabilization
	};

	rna_MovieTracking_reconstruction_ = {
		{&rna_MovieTracking_objects, 	&rna_MovieTracking_stabilization,
		-1, "reconstruction", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "reconstruction",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTracking_reconstruction_get, nullptr, nullptr, nullptr,RNA_MovieTrackingReconstruction
	};

	rna_MovieTracking_objects_ = {
		{&rna_MovieTracking_active_object_index, 	&rna_MovieTracking_reconstruction,
		-1, "objects", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Objects",
		"Collection of objects in this tracking data object",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MovieTrackingObjects},
		MovieTracking_objects_begin, MovieTracking_objects_next, MovieTracking_objects_end, MovieTracking_objects_get, nullptr, MovieTracking_objects_lookup_int, MovieTracking_objects_lookup_string, nullptr, RNA_MovieTrackingObject
	};

	rna_MovieTracking_active_object_index_ = {
		{&rna_MovieTracking_dopesheet, 	&rna_MovieTracking_objects,
		-1, "active_object_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Object Index",
		"Index of active object",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 355663872, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTracking_active_object_index_get, MovieTracking_active_object_index_set, nullptr, nullptr, rna_tracking_active_object_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieTracking_dopesheet_ = {
		{nullptr, 	&rna_MovieTracking_active_object_index,
		-1, "dopesheet", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "dopesheet",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTracking_dopesheet_get, nullptr, nullptr, nullptr,RNA_MovieTrackingDopesheet
	};

	StructRNA *srna = RNA_MovieTracking;
	srna->cont.properties = {&rna_MovieTracking_rna_properties, &rna_MovieTracking_dopesheet};
	srna->identifier = "MovieTracking";
	srna->flag = 516;
	srna->name = "Movie tracking data";
	srna->description = "Match-moving data for tracking";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTracking_rna_properties;
	srna->path = rna_tracking_path;
};

/* Movie Objects */
static CollectionPropertyRNA rna_MovieTrackingObjects_rna_properties_;
PropertyRNA &rna_MovieTrackingObjects_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjects_rna_properties_);

static PointerPropertyRNA rna_MovieTrackingObjects_rna_type_;
PropertyRNA &rna_MovieTrackingObjects_rna_type = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjects_rna_type_);

static PointerPropertyRNA rna_MovieTrackingObjects_active_;
PropertyRNA &rna_MovieTrackingObjects_active = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjects_active_);

static StringPropertyRNA rna_MovieTrackingObjects_new_name_;
PropertyRNA &rna_MovieTrackingObjects_new_name = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjects_new_name_);

static PointerPropertyRNA rna_MovieTrackingObjects_new_object_;
PropertyRNA &rna_MovieTrackingObjects_new_object = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjects_new_object_);

FunctionRNA *rna_MovieTrackingObjects_new_func;
static PointerPropertyRNA rna_MovieTrackingObjects_remove_object_;
PropertyRNA &rna_MovieTrackingObjects_remove_object = reinterpret_cast<PropertyRNA &>(rna_MovieTrackingObjects_remove_object_);

FunctionRNA *rna_MovieTrackingObjects_remove_func;
StructRNA *RNA_MovieTrackingObjects;
void register_struct_MovieTrackingObjects(BlenderRNA &brna)
{
	rna_MovieTrackingObjects_rna_properties_ = {
		{&rna_MovieTrackingObjects_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObjects_rna_properties_begin, MovieTrackingObjects_rna_properties_next, MovieTrackingObjects_rna_properties_end, MovieTrackingObjects_rna_properties_get, nullptr, nullptr, MovieTrackingObjects_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MovieTrackingObjects_rna_type_ = {
		{&rna_MovieTrackingObjects_active, 	&rna_MovieTrackingObjects_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObjects_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MovieTrackingObjects_active_ = {
		{nullptr, 	&rna_MovieTrackingObjects_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Object",
		"Active object in this tracking data object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieTrackingObjects_active_get, MovieTrackingObjects_active_set, nullptr, nullptr,RNA_MovieTrackingObject
	};

	StructRNA *srna = RNA_MovieTrackingObjects;
	srna->cont.properties = {&rna_MovieTrackingObjects_rna_properties, &rna_MovieTrackingObjects_active};
	srna->identifier = "MovieTrackingObjects";
	srna->flag = 516;
	srna->name = "Movie Objects";
	srna->description = "Collection of movie tracking objects";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MovieTrackingObjects_rna_properties;
	{
	rna_MovieTrackingObjects_new_name_ = {
		{&rna_MovieTrackingObjects_new_object, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name of new object",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_MovieTrackingObjects_new_object_ = {
		{nullptr, 	&rna_MovieTrackingObjects_new_name,
		-1, "object", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New motion tracking object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieTrackingObject
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingObjects_new_name, &rna_MovieTrackingObjects_new_object};
		func->identifier = "new";
		func->description = "Add tracking object to this movie clip";
		func->call = MovieTrackingObjects_new_call;
		func->c_ret = &rna_MovieTrackingObjects_new_object;
		rna_MovieTrackingObjects_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MovieTrackingObjects_remove_object_ = {
		{nullptr, 	nullptr,
		-1, "object", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Motion tracking object to be removed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieTrackingObject
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieTrackingObjects_remove_object, &rna_MovieTrackingObjects_remove_object};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove tracking object from this movie clip";
		func->call = MovieTrackingObjects_remove_call;
		rna_MovieTrackingObjects_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
