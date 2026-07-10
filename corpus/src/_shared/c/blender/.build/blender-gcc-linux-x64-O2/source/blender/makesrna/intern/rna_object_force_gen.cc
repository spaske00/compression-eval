
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

#include "rna_object_force.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_PointCache_rna_properties;
extern PropertyRNA &rna_PointCache_rna_type;
extern PropertyRNA &rna_PointCache_frame_start;
extern PropertyRNA &rna_PointCache_frame_end;
extern PropertyRNA &rna_PointCache_frame_step;
extern PropertyRNA &rna_PointCache_index;
extern PropertyRNA &rna_PointCache_is_baked;
extern PropertyRNA &rna_PointCache_is_baking;
extern PropertyRNA &rna_PointCache_use_disk_cache;
extern PropertyRNA &rna_PointCache_is_outdated;
extern PropertyRNA &rna_PointCache_is_frame_skip;
extern PropertyRNA &rna_PointCache_name;
extern PropertyRNA &rna_PointCache_filepath;
extern PropertyRNA &rna_PointCache_info;
extern PropertyRNA &rna_PointCache_use_external;
extern PropertyRNA &rna_PointCache_use_library_path;
extern PropertyRNA &rna_PointCache_point_caches;


extern PropertyRNA &rna_PointCaches_rna_properties;
extern PropertyRNA &rna_PointCaches_rna_type;
extern PropertyRNA &rna_PointCaches_active_index;


extern PropertyRNA &rna_PointCacheItem_rna_properties;
extern PropertyRNA &rna_PointCacheItem_rna_type;
extern PropertyRNA &rna_PointCacheItem_frame_start;
extern PropertyRNA &rna_PointCacheItem_frame_end;
extern PropertyRNA &rna_PointCacheItem_frame_step;
extern PropertyRNA &rna_PointCacheItem_index;
extern PropertyRNA &rna_PointCacheItem_is_baked;
extern PropertyRNA &rna_PointCacheItem_is_baking;
extern PropertyRNA &rna_PointCacheItem_use_disk_cache;
extern PropertyRNA &rna_PointCacheItem_is_outdated;
extern PropertyRNA &rna_PointCacheItem_is_frame_skip;
extern PropertyRNA &rna_PointCacheItem_name;
extern PropertyRNA &rna_PointCacheItem_filepath;
extern PropertyRNA &rna_PointCacheItem_info;
extern PropertyRNA &rna_PointCacheItem_use_external;
extern PropertyRNA &rna_PointCacheItem_use_library_path;


extern PropertyRNA &rna_CollisionSettings_rna_properties;
extern PropertyRNA &rna_CollisionSettings_rna_type;
extern PropertyRNA &rna_CollisionSettings_use;
extern PropertyRNA &rna_CollisionSettings_damping_factor;
extern PropertyRNA &rna_CollisionSettings_damping_random;
extern PropertyRNA &rna_CollisionSettings_friction_factor;
extern PropertyRNA &rna_CollisionSettings_friction_random;
extern PropertyRNA &rna_CollisionSettings_permeability;
extern PropertyRNA &rna_CollisionSettings_use_particle_kill;
extern PropertyRNA &rna_CollisionSettings_stickiness;
extern PropertyRNA &rna_CollisionSettings_thickness_inner;
extern PropertyRNA &rna_CollisionSettings_thickness_outer;
extern PropertyRNA &rna_CollisionSettings_damping;
extern PropertyRNA &rna_CollisionSettings_absorption;
extern PropertyRNA &rna_CollisionSettings_cloth_friction;
extern PropertyRNA &rna_CollisionSettings_use_culling;
extern PropertyRNA &rna_CollisionSettings_use_normal;


extern PropertyRNA &rna_EffectorWeights_rna_properties;
extern PropertyRNA &rna_EffectorWeights_rna_type;
extern PropertyRNA &rna_EffectorWeights_apply_to_hair_growing;
extern PropertyRNA &rna_EffectorWeights_collection;
extern PropertyRNA &rna_EffectorWeights_gravity;
extern PropertyRNA &rna_EffectorWeights_all;
extern PropertyRNA &rna_EffectorWeights_force;
extern PropertyRNA &rna_EffectorWeights_vortex;
extern PropertyRNA &rna_EffectorWeights_magnetic;
extern PropertyRNA &rna_EffectorWeights_wind;
extern PropertyRNA &rna_EffectorWeights_curve_guide;
extern PropertyRNA &rna_EffectorWeights_texture;
extern PropertyRNA &rna_EffectorWeights_harmonic;
extern PropertyRNA &rna_EffectorWeights_charge;
extern PropertyRNA &rna_EffectorWeights_lennardjones;
extern PropertyRNA &rna_EffectorWeights_boid;
extern PropertyRNA &rna_EffectorWeights_turbulence;
extern PropertyRNA &rna_EffectorWeights_drag;
extern PropertyRNA &rna_EffectorWeights_smokeflow;


extern PropertyRNA &rna_FieldSettings_rna_properties;
extern PropertyRNA &rna_FieldSettings_rna_type;
extern PropertyRNA &rna_FieldSettings_type;
extern PropertyRNA &rna_FieldSettings_shape;
extern PropertyRNA &rna_FieldSettings_falloff_type;
extern PropertyRNA &rna_FieldSettings_texture_mode;
extern PropertyRNA &rna_FieldSettings_z_direction;
extern PropertyRNA &rna_FieldSettings_strength;
extern PropertyRNA &rna_FieldSettings_linear_drag;
extern PropertyRNA &rna_FieldSettings_harmonic_damping;
extern PropertyRNA &rna_FieldSettings_quadratic_drag;
extern PropertyRNA &rna_FieldSettings_flow;
extern PropertyRNA &rna_FieldSettings_wind_factor;
extern PropertyRNA &rna_FieldSettings_inflow;
extern PropertyRNA &rna_FieldSettings_size;
extern PropertyRNA &rna_FieldSettings_rest_length;
extern PropertyRNA &rna_FieldSettings_falloff_power;
extern PropertyRNA &rna_FieldSettings_distance_min;
extern PropertyRNA &rna_FieldSettings_distance_max;
extern PropertyRNA &rna_FieldSettings_radial_min;
extern PropertyRNA &rna_FieldSettings_radial_max;
extern PropertyRNA &rna_FieldSettings_radial_falloff;
extern PropertyRNA &rna_FieldSettings_texture_nabla;
extern PropertyRNA &rna_FieldSettings_noise;
extern PropertyRNA &rna_FieldSettings_seed;
extern PropertyRNA &rna_FieldSettings_use_min_distance;
extern PropertyRNA &rna_FieldSettings_use_max_distance;
extern PropertyRNA &rna_FieldSettings_use_radial_min;
extern PropertyRNA &rna_FieldSettings_use_radial_max;
extern PropertyRNA &rna_FieldSettings_use_object_coords;
extern PropertyRNA &rna_FieldSettings_use_global_coords;
extern PropertyRNA &rna_FieldSettings_use_2d_force;
extern PropertyRNA &rna_FieldSettings_use_root_coords;
extern PropertyRNA &rna_FieldSettings_apply_to_location;
extern PropertyRNA &rna_FieldSettings_apply_to_rotation;
extern PropertyRNA &rna_FieldSettings_use_absorption;
extern PropertyRNA &rna_FieldSettings_use_multiple_springs;
extern PropertyRNA &rna_FieldSettings_use_smoke_density;
extern PropertyRNA &rna_FieldSettings_use_gravity_falloff;
extern PropertyRNA &rna_FieldSettings_texture;
extern PropertyRNA &rna_FieldSettings_source_object;
extern PropertyRNA &rna_FieldSettings_guide_minimum;
extern PropertyRNA &rna_FieldSettings_guide_free;
extern PropertyRNA &rna_FieldSettings_use_guide_path_add;
extern PropertyRNA &rna_FieldSettings_use_guide_path_weight;
extern PropertyRNA &rna_FieldSettings_guide_clump_amount;
extern PropertyRNA &rna_FieldSettings_guide_clump_shape;
extern PropertyRNA &rna_FieldSettings_guide_kink_type;
extern PropertyRNA &rna_FieldSettings_guide_kink_axis;
extern PropertyRNA &rna_FieldSettings_guide_kink_frequency;
extern PropertyRNA &rna_FieldSettings_guide_kink_shape;
extern PropertyRNA &rna_FieldSettings_guide_kink_amplitude;


extern PropertyRNA &rna_SoftBodySettings_rna_properties;
extern PropertyRNA &rna_SoftBodySettings_rna_type;
extern PropertyRNA &rna_SoftBodySettings_friction;
extern PropertyRNA &rna_SoftBodySettings_mass;
extern PropertyRNA &rna_SoftBodySettings_vertex_group_mass;
extern PropertyRNA &rna_SoftBodySettings_gravity;
extern PropertyRNA &rna_SoftBodySettings_speed;
extern PropertyRNA &rna_SoftBodySettings_vertex_group_goal;
extern PropertyRNA &rna_SoftBodySettings_goal_min;
extern PropertyRNA &rna_SoftBodySettings_goal_max;
extern PropertyRNA &rna_SoftBodySettings_goal_default;
extern PropertyRNA &rna_SoftBodySettings_goal_spring;
extern PropertyRNA &rna_SoftBodySettings_goal_friction;
extern PropertyRNA &rna_SoftBodySettings_pull;
extern PropertyRNA &rna_SoftBodySettings_push;
extern PropertyRNA &rna_SoftBodySettings_damping;
extern PropertyRNA &rna_SoftBodySettings_spring_length;
extern PropertyRNA &rna_SoftBodySettings_aero;
extern PropertyRNA &rna_SoftBodySettings_plastic;
extern PropertyRNA &rna_SoftBodySettings_bend;
extern PropertyRNA &rna_SoftBodySettings_shear;
extern PropertyRNA &rna_SoftBodySettings_vertex_group_spring;
extern PropertyRNA &rna_SoftBodySettings_collision_type;
extern PropertyRNA &rna_SoftBodySettings_ball_size;
extern PropertyRNA &rna_SoftBodySettings_ball_stiff;
extern PropertyRNA &rna_SoftBodySettings_ball_damp;
extern PropertyRNA &rna_SoftBodySettings_error_threshold;
extern PropertyRNA &rna_SoftBodySettings_step_min;
extern PropertyRNA &rna_SoftBodySettings_step_max;
extern PropertyRNA &rna_SoftBodySettings_choke;
extern PropertyRNA &rna_SoftBodySettings_fuzzy;
extern PropertyRNA &rna_SoftBodySettings_use_auto_step;
extern PropertyRNA &rna_SoftBodySettings_use_diagnose;
extern PropertyRNA &rna_SoftBodySettings_use_estimate_matrix;
extern PropertyRNA &rna_SoftBodySettings_location_mass_center;
extern PropertyRNA &rna_SoftBodySettings_rotation_estimate;
extern PropertyRNA &rna_SoftBodySettings_scale_estimate;
extern PropertyRNA &rna_SoftBodySettings_use_goal;
extern PropertyRNA &rna_SoftBodySettings_use_edges;
extern PropertyRNA &rna_SoftBodySettings_use_stiff_quads;
extern PropertyRNA &rna_SoftBodySettings_use_edge_collision;
extern PropertyRNA &rna_SoftBodySettings_use_face_collision;
extern PropertyRNA &rna_SoftBodySettings_aerodynamics_type;
extern PropertyRNA &rna_SoftBodySettings_use_self_collision;
extern PropertyRNA &rna_SoftBodySettings_collision_collection;
extern PropertyRNA &rna_SoftBodySettings_effector_weights;

static PointerRNA PointCache_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PointCache_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PointCache_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCache_rna_properties_get(iter);
    }
}

void PointCache_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PointCache_rna_properties_get(iter);
    }
}

void PointCache_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PointCache_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PointCache_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int PointCache_frame_start_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->startframe);
}

void PointCache_frame_start_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->startframe = (std::remove_reference_t<decltype(data->startframe)>)std::clamp(value, -1048574, 1048574);
}

int PointCache_frame_end_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->endframe);
}

void PointCache_frame_end_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->endframe = (std::remove_reference_t<decltype(data->endframe)>)std::clamp(value, 1, 1048574);
}

int PointCache_frame_step_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->step);
}

void PointCache_frame_step_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_PointCache_frame_step_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->step = (std::remove_reference_t<decltype(data->step)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

int PointCache_index_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->index);
}

void PointCache_index_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->index = (std::remove_reference_t<decltype(data->index)>)std::clamp(value, -1, 100);
}

bool PointCache_is_baked_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

bool PointCache_is_baking_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

bool PointCache_use_disk_cache_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void PointCache_use_disk_cache_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool PointCache_is_outdated_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

bool PointCache_is_frame_skip_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void PointCache_name_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int PointCache_name_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->name);
}

void PointCache_name_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

void PointCache_filepath_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->path) < 1024);
    strcpy(value, data->path);
}

int PointCache_filepath_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->path);
}

void PointCache_filepath_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy(data->path, value, 1024);
}

void PointCache_info_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->info) < 128);
    strcpy(value, data->info);
}

int PointCache_info_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Cache_info_length;
    return fn(ptr);
}

bool PointCache_use_external_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void PointCache_use_external_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool PointCache_use_library_path_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return !((uint64_t(data->flag) & 2048) != 0);
}

void PointCache_use_library_path_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

static PointerRNA PointCache_point_caches_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_PointCacheItem, rna_iterator_listbase_get(iter));
}

void PointCache_point_caches_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PointCache_point_caches;

    PropCollectionBeginFunc fn = rna_Cache_list_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCache_point_caches_get(iter);
    }
}

void PointCache_point_caches_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PointCache_point_caches_get(iter);
    }
}

void PointCache_point_caches_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PointCache_point_caches_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    PointCache_point_caches_begin(&iter, ptr);

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
        if (found) { *r_ptr = PointCache_point_caches_get(&iter); }
    }

    PointCache_point_caches_end(&iter);

    return found;
}

static PointerRNA PointCaches_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PointCaches_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PointCaches_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCaches_rna_properties_get(iter);
    }
}

void PointCaches_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PointCaches_rna_properties_get(iter);
    }
}

void PointCaches_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PointCaches_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PointCaches_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int PointCaches_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Cache_active_point_cache_index_get;
    return fn(ptr);
}

void PointCaches_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Cache_active_point_cache_index_set;
    fn(ptr, value);
}

static PointerRNA PointCacheItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PointCacheItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PointCacheItem_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCacheItem_rna_properties_get(iter);
    }
}

void PointCacheItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PointCacheItem_rna_properties_get(iter);
    }
}

void PointCacheItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PointCacheItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PointCacheItem_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int PointCacheItem_frame_start_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->startframe);
}

void PointCacheItem_frame_start_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->startframe = (std::remove_reference_t<decltype(data->startframe)>)std::clamp(value, -1048574, 1048574);
}

int PointCacheItem_frame_end_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->endframe);
}

void PointCacheItem_frame_end_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->endframe = (std::remove_reference_t<decltype(data->endframe)>)std::clamp(value, 1, 1048574);
}

int PointCacheItem_frame_step_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->step);
}

void PointCacheItem_frame_step_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_PointCache_frame_step_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->step = (std::remove_reference_t<decltype(data->step)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

int PointCacheItem_index_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->index);
}

void PointCacheItem_index_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->index = (std::remove_reference_t<decltype(data->index)>)std::clamp(value, -1, 100);
}

bool PointCacheItem_is_baked_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

bool PointCacheItem_is_baking_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

bool PointCacheItem_use_disk_cache_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void PointCacheItem_use_disk_cache_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool PointCacheItem_is_outdated_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

bool PointCacheItem_is_frame_skip_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void PointCacheItem_name_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int PointCacheItem_name_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->name);
}

void PointCacheItem_name_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

void PointCacheItem_filepath_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->path) < 1024);
    strcpy(value, data->path);
}

int PointCacheItem_filepath_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->path);
}

void PointCacheItem_filepath_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy(data->path, value, 1024);
}

void PointCacheItem_info_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->info) < 128);
    strcpy(value, data->info);
}

int PointCacheItem_info_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Cache_info_length;
    return fn(ptr);
}

bool PointCacheItem_use_external_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void PointCacheItem_use_external_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool PointCacheItem_use_library_path_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return !((uint64_t(data->flag) & 2048) != 0);
}

void PointCacheItem_use_library_path_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

static PointerRNA CollisionSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CollisionSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CollisionSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollisionSettings_rna_properties_get(iter);
    }
}

void CollisionSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CollisionSettings_rna_properties_get(iter);
    }
}

void CollisionSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CollisionSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CollisionSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool CollisionSettings_use_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->deflect) & 1) != 0);
}

void CollisionSettings_use_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->deflect = std::remove_reference_t<decltype(data->deflect)>(uint64_t(data->deflect) | 1); }
    else { data->deflect = std::remove_reference_t<decltype(data->deflect)>(uint64_t(data->deflect) & ~uint64_t(1)); }
}

float CollisionSettings_damping_factor_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_damp);
}

void CollisionSettings_damping_factor_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_damp = (std::remove_reference_t<decltype(data->pdef_damp)>)std::clamp(value, 0.0f, 1.0f);
}

float CollisionSettings_damping_random_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_rdamp);
}

void CollisionSettings_damping_random_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_rdamp = (std::remove_reference_t<decltype(data->pdef_rdamp)>)std::clamp(value, 0.0f, 1.0f);
}

float CollisionSettings_friction_factor_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_frict);
}

void CollisionSettings_friction_factor_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_frict = (std::remove_reference_t<decltype(data->pdef_frict)>)std::clamp(value, 0.0f, 1.0f);
}

float CollisionSettings_friction_random_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_rfrict);
}

void CollisionSettings_friction_random_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_rfrict = (std::remove_reference_t<decltype(data->pdef_rfrict)>)std::clamp(value, 0.0f, 1.0f);
}

float CollisionSettings_permeability_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_perm);
}

void CollisionSettings_permeability_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_perm = (std::remove_reference_t<decltype(data->pdef_perm)>)std::clamp(value, 0.0f, 1.0f);
}

bool CollisionSettings_use_particle_kill_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void CollisionSettings_use_particle_kill_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

float CollisionSettings_stickiness_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_stickness);
}

void CollisionSettings_stickiness_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_stickness = (std::remove_reference_t<decltype(data->pdef_stickness)>)std::clamp(value, 0.0f, 10.0f);
}

float CollisionSettings_thickness_inner_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_sbift);
}

void CollisionSettings_thickness_inner_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_sbift = (std::remove_reference_t<decltype(data->pdef_sbift)>)std::clamp(value, 0.0010000000f, 1.0f);
}

float CollisionSettings_thickness_outer_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_sboft);
}

void CollisionSettings_thickness_outer_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_sboft = (std::remove_reference_t<decltype(data->pdef_sboft)>)std::clamp(value, 0.0010000000f, 1.0f);
}

float CollisionSettings_damping_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_sbdamp);
}

void CollisionSettings_damping_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_sbdamp = (std::remove_reference_t<decltype(data->pdef_sbdamp)>)std::clamp(value, 0.0f, 1.0f);
}

float CollisionSettings_absorption_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->absorption);
}

void CollisionSettings_absorption_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->absorption = (std::remove_reference_t<decltype(data->absorption)>)std::clamp(value, 0.0f, 1.0f);
}

float CollisionSettings_cloth_friction_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_cfrict);
}

void CollisionSettings_cloth_friction_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_cfrict = (std::remove_reference_t<decltype(data->pdef_cfrict)>)std::clamp(value, 0.0f, 80.0f);
}

bool CollisionSettings_use_culling_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 524288) != 0);
}

void CollisionSettings_use_culling_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 524288); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(524288)); }
}

bool CollisionSettings_use_normal_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 1048576) != 0);
}

void CollisionSettings_use_normal_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1048576); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1048576)); }
}

static PointerRNA EffectorWeights_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void EffectorWeights_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_EffectorWeights_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = EffectorWeights_rna_properties_get(iter);
    }
}

void EffectorWeights_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = EffectorWeights_rna_properties_get(iter);
    }
}

void EffectorWeights_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool EffectorWeights_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA EffectorWeights_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool EffectorWeights_apply_to_hair_growing_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void EffectorWeights_apply_to_hair_growing_set(PointerRNA *ptr, bool value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

PointerRNA EffectorWeights_collection_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->group);
}

void EffectorWeights_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->group) {
        id_us_min((ID *)data->group);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->group = value.data;
}

float EffectorWeights_gravity_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->global_gravity);
}

void EffectorWeights_gravity_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->global_gravity = (std::remove_reference_t<decltype(data->global_gravity)>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_all_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[0]);
}

void EffectorWeights_all_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[0] = (std::remove_reference_t<decltype(data->weight[0])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_force_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[1]);
}

void EffectorWeights_force_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[1] = (std::remove_reference_t<decltype(data->weight[1])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_vortex_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[2]);
}

void EffectorWeights_vortex_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[2] = (std::remove_reference_t<decltype(data->weight[2])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_magnetic_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[3]);
}

void EffectorWeights_magnetic_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[3] = (std::remove_reference_t<decltype(data->weight[3])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_wind_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[4]);
}

void EffectorWeights_wind_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[4] = (std::remove_reference_t<decltype(data->weight[4])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_curve_guide_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[5]);
}

void EffectorWeights_curve_guide_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[5] = (std::remove_reference_t<decltype(data->weight[5])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_texture_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[6]);
}

void EffectorWeights_texture_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[6] = (std::remove_reference_t<decltype(data->weight[6])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_harmonic_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[7]);
}

void EffectorWeights_harmonic_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[7] = (std::remove_reference_t<decltype(data->weight[7])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_charge_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[8]);
}

void EffectorWeights_charge_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[8] = (std::remove_reference_t<decltype(data->weight[8])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_lennardjones_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[9]);
}

void EffectorWeights_lennardjones_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[9] = (std::remove_reference_t<decltype(data->weight[9])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_boid_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[10]);
}

void EffectorWeights_boid_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[10] = (std::remove_reference_t<decltype(data->weight[10])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_turbulence_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[11]);
}

void EffectorWeights_turbulence_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[11] = (std::remove_reference_t<decltype(data->weight[11])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_drag_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[12]);
}

void EffectorWeights_drag_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[12] = (std::remove_reference_t<decltype(data->weight[12])>)std::clamp(value, -200.0f, 200.0f);
}

float EffectorWeights_smokeflow_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[13]);
}

void EffectorWeights_smokeflow_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[13] = (std::remove_reference_t<decltype(data->weight[13])>)std::clamp(value, -200.0f, 200.0f);
}

static PointerRNA FieldSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FieldSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FieldSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FieldSettings_rna_properties_get(iter);
    }
}

void FieldSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FieldSettings_rna_properties_get(iter);
    }
}

void FieldSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FieldSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FieldSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int FieldSettings_type_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->forcefield);
}

void FieldSettings_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_FieldSettings_type_set;
    fn(ptr, value);
}

int FieldSettings_shape_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->shape);
}

void FieldSettings_shape_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->shape = (std::remove_reference_t<decltype(data->shape)>)value;
}

int FieldSettings_falloff_type_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->falloff);
}

void FieldSettings_falloff_type_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->falloff = (std::remove_reference_t<decltype(data->falloff)>)value;
}

int FieldSettings_texture_mode_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->tex_mode);
}

void FieldSettings_texture_mode_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->tex_mode = (std::remove_reference_t<decltype(data->tex_mode)>)value;
}

int FieldSettings_z_direction_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->zdir);
}

void FieldSettings_z_direction_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->zdir = (std::remove_reference_t<decltype(data->zdir)>)value;
}

float FieldSettings_strength_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_strength);
}

void FieldSettings_strength_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_strength = (std::remove_reference_t<decltype(data->f_strength)>)value;
}

float FieldSettings_linear_drag_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_strength);
}

void FieldSettings_linear_drag_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_strength = (std::remove_reference_t<decltype(data->f_strength)>)value;
}

float FieldSettings_harmonic_damping_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_damp);
}

void FieldSettings_harmonic_damping_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_damp = (std::remove_reference_t<decltype(data->f_damp)>)value;
}

float FieldSettings_quadratic_drag_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_damp);
}

void FieldSettings_quadratic_drag_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_damp = (std::remove_reference_t<decltype(data->f_damp)>)value;
}

float FieldSettings_flow_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_flow);
}

void FieldSettings_flow_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_flow = (std::remove_reference_t<decltype(data->f_flow)>)value;
}

float FieldSettings_wind_factor_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_wind_factor);
}

void FieldSettings_wind_factor_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_wind_factor = (std::remove_reference_t<decltype(data->f_wind_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float FieldSettings_inflow_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_flow);
}

void FieldSettings_inflow_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_flow = (std::remove_reference_t<decltype(data->f_flow)>)value;
}

float FieldSettings_size_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_size);
}

void FieldSettings_size_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_size = (std::remove_reference_t<decltype(data->f_size)>)std::clamp(value, 0.0f, FLT_MAX);
}

float FieldSettings_rest_length_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_size);
}

void FieldSettings_rest_length_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_size = (std::remove_reference_t<decltype(data->f_size)>)std::clamp(value, 0.0f, FLT_MAX);
}

float FieldSettings_falloff_power_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_power);
}

void FieldSettings_falloff_power_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_power = (std::remove_reference_t<decltype(data->f_power)>)std::clamp(value, 0.0f, 10.0f);
}

float FieldSettings_distance_min_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->mindist);
}

void FieldSettings_distance_min_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->mindist = (std::remove_reference_t<decltype(data->mindist)>)std::clamp(value, 0.0f, 1000.0f);
}

float FieldSettings_distance_max_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->maxdist);
}

void FieldSettings_distance_max_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->maxdist = (std::remove_reference_t<decltype(data->maxdist)>)std::clamp(value, 0.0f, FLT_MAX);
}

float FieldSettings_radial_min_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->minrad);
}

void FieldSettings_radial_min_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->minrad = (std::remove_reference_t<decltype(data->minrad)>)std::clamp(value, 0.0f, 1000.0f);
}

float FieldSettings_radial_max_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->maxrad);
}

void FieldSettings_radial_max_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->maxrad = (std::remove_reference_t<decltype(data->maxrad)>)std::clamp(value, 0.0f, 1000.0f);
}

float FieldSettings_radial_falloff_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_power_r);
}

void FieldSettings_radial_falloff_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_power_r = (std::remove_reference_t<decltype(data->f_power_r)>)std::clamp(value, 0.0f, 10.0f);
}

float FieldSettings_texture_nabla_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->tex_nabla);
}

void FieldSettings_texture_nabla_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->tex_nabla = (std::remove_reference_t<decltype(data->tex_nabla)>)std::clamp(value, 0.0001000000f, 1.0f);
}

float FieldSettings_noise_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_noise);
}

void FieldSettings_noise_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_noise = (std::remove_reference_t<decltype(data->f_noise)>)std::clamp(value, 0.0f, 10.0f);
}

int FieldSettings_seed_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->seed);
}

void FieldSettings_seed_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->seed = (std::remove_reference_t<decltype(data->seed)>)std::clamp(value, 1, 128);
}

bool FieldSettings_use_min_distance_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void FieldSettings_use_min_distance_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool FieldSettings_use_max_distance_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void FieldSettings_use_max_distance_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool FieldSettings_use_radial_min_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void FieldSettings_use_radial_min_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

bool FieldSettings_use_radial_max_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void FieldSettings_use_radial_max_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool FieldSettings_use_object_coords_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void FieldSettings_use_object_coords_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool FieldSettings_use_global_coords_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void FieldSettings_use_global_coords_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool FieldSettings_use_2d_force_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void FieldSettings_use_2d_force_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool FieldSettings_use_root_coords_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void FieldSettings_use_root_coords_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool FieldSettings_apply_to_location_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 16384) != 0);
}

void FieldSettings_apply_to_location_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16384); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16384)); }
}

bool FieldSettings_apply_to_rotation_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 32768) != 0);
}

void FieldSettings_apply_to_rotation_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32768); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32768)); }
}

bool FieldSettings_use_absorption_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void FieldSettings_use_absorption_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool FieldSettings_use_multiple_springs_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void FieldSettings_use_multiple_springs_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool FieldSettings_use_smoke_density_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 131072) != 0);
}

void FieldSettings_use_smoke_density_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 131072); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(131072)); }
}

bool FieldSettings_use_gravity_falloff_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 262144) != 0);
}

void FieldSettings_use_gravity_falloff_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 262144); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(262144)); }
}

PointerRNA FieldSettings_texture_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Texture, data->tex);
}

void FieldSettings_texture_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
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

PointerRNA FieldSettings_source_object_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->f_source);
}

void FieldSettings_source_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->f_source = value.data;
}

float FieldSettings_guide_minimum_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_strength);
}

void FieldSettings_guide_minimum_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_strength = (std::remove_reference_t<decltype(data->f_strength)>)value;
}

float FieldSettings_guide_free_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->free_end);
}

void FieldSettings_guide_free_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->free_end = (std::remove_reference_t<decltype(data->free_end)>)std::clamp(value, 0.0f, 0.9900000095f);
}

bool FieldSettings_use_guide_path_add_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void FieldSettings_use_guide_path_add_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool FieldSettings_use_guide_path_weight_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return ((uint64_t(data->flag) & 65536) != 0);
}

void FieldSettings_use_guide_path_weight_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 65536); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(65536)); }
}

float FieldSettings_guide_clump_amount_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->clump_fac);
}

void FieldSettings_guide_clump_amount_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->clump_fac = (std::remove_reference_t<decltype(data->clump_fac)>)std::clamp(value, -1.0f, 1.0f);
}

float FieldSettings_guide_clump_shape_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->clump_pow);
}

void FieldSettings_guide_clump_shape_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->clump_pow = (std::remove_reference_t<decltype(data->clump_pow)>)std::clamp(value, -0.9990000129f, 0.9990000129f);
}

int FieldSettings_guide_kink_type_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->kink);
}

void FieldSettings_guide_kink_type_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->kink = (std::remove_reference_t<decltype(data->kink)>)value;
}

int FieldSettings_guide_kink_axis_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->kink_axis);
}

void FieldSettings_guide_kink_axis_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->kink_axis = (std::remove_reference_t<decltype(data->kink_axis)>)value;
}

float FieldSettings_guide_kink_frequency_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->kink_freq);
}

void FieldSettings_guide_kink_frequency_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->kink_freq = (std::remove_reference_t<decltype(data->kink_freq)>)std::clamp(value, 0.0f, 10.0f);
}

float FieldSettings_guide_kink_shape_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->kink_shape);
}

void FieldSettings_guide_kink_shape_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->kink_shape = (std::remove_reference_t<decltype(data->kink_shape)>)std::clamp(value, -0.9990000129f, 0.9990000129f);
}

float FieldSettings_guide_kink_amplitude_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->kink_amp);
}

void FieldSettings_guide_kink_amplitude_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->kink_amp = (std::remove_reference_t<decltype(data->kink_amp)>)std::clamp(value, 0.0f, 10.0f);
}

static PointerRNA SoftBodySettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void SoftBodySettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SoftBodySettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SoftBodySettings_rna_properties_get(iter);
    }
}

void SoftBodySettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SoftBodySettings_rna_properties_get(iter);
    }
}

void SoftBodySettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SoftBodySettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA SoftBodySettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float SoftBodySettings_friction_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->mediafrict);
}

void SoftBodySettings_friction_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->mediafrict = (std::remove_reference_t<decltype(data->mediafrict)>)std::clamp(value, 0.0f, 50.0f);
}

float SoftBodySettings_mass_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->nodemass);
}

void SoftBodySettings_mass_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->nodemass = (std::remove_reference_t<decltype(data->nodemass)>)std::clamp(value, 0.0f, 50000.0f);
}

void SoftBodySettings_vertex_group_mass_get(PointerRNA *ptr, char *value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    BLI_assert(strlen(data->namedVG_Mass) < 64);
    strcpy(value, data->namedVG_Mass);
}

int SoftBodySettings_vertex_group_mass_length(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return strlen(data->namedVG_Mass);
}

void SoftBodySettings_vertex_group_mass_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_SoftBodySettings_mass_vgroup_set;
    fn(ptr, value);
}

float SoftBodySettings_gravity_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->grav);
}

void SoftBodySettings_gravity_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->grav = (std::remove_reference_t<decltype(data->grav)>)std::clamp(value, -10.0f, 10.0f);
}

float SoftBodySettings_speed_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->physics_speed);
}

void SoftBodySettings_speed_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->physics_speed = (std::remove_reference_t<decltype(data->physics_speed)>)std::clamp(value, 0.0099999998f, 100.0f);
}

void SoftBodySettings_vertex_group_goal_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_SoftBodySettings_goal_vgroup_get;
    fn(ptr, value);
}

int SoftBodySettings_vertex_group_goal_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_SoftBodySettings_goal_vgroup_length;
    return fn(ptr);
}

void SoftBodySettings_vertex_group_goal_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_SoftBodySettings_goal_vgroup_set;
    fn(ptr, value);
}

float SoftBodySettings_goal_min_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->mingoal);
}

void SoftBodySettings_goal_min_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->mingoal = (std::remove_reference_t<decltype(data->mingoal)>)std::clamp(value, 0.0f, 1.0f);
}

float SoftBodySettings_goal_max_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->maxgoal);
}

void SoftBodySettings_goal_max_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->maxgoal = (std::remove_reference_t<decltype(data->maxgoal)>)std::clamp(value, 0.0f, 1.0f);
}

float SoftBodySettings_goal_default_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->defgoal);
}

void SoftBodySettings_goal_default_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->defgoal = (std::remove_reference_t<decltype(data->defgoal)>)std::clamp(value, 0.0f, 1.0f);
}

float SoftBodySettings_goal_spring_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->goalspring);
}

void SoftBodySettings_goal_spring_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->goalspring = (std::remove_reference_t<decltype(data->goalspring)>)std::clamp(value, 0.0f, 0.9990000129f);
}

float SoftBodySettings_goal_friction_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->goalfrict);
}

void SoftBodySettings_goal_friction_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->goalfrict = (std::remove_reference_t<decltype(data->goalfrict)>)std::clamp(value, 0.0f, 50.0f);
}

float SoftBodySettings_pull_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->inspring);
}

void SoftBodySettings_pull_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->inspring = (std::remove_reference_t<decltype(data->inspring)>)std::clamp(value, 0.0f, 0.9990000129f);
}

float SoftBodySettings_push_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->inpush);
}

void SoftBodySettings_push_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->inpush = (std::remove_reference_t<decltype(data->inpush)>)std::clamp(value, 0.0f, 0.9990000129f);
}

float SoftBodySettings_damping_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->infrict);
}

void SoftBodySettings_damping_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->infrict = (std::remove_reference_t<decltype(data->infrict)>)std::clamp(value, 0.0f, 50.0f);
}

int SoftBodySettings_spring_length_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->springpreload);
}

void SoftBodySettings_spring_length_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->springpreload = (std::remove_reference_t<decltype(data->springpreload)>)std::clamp(value, 0, 200);
}

int SoftBodySettings_aero_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->aeroedge);
}

void SoftBodySettings_aero_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->aeroedge = (std::remove_reference_t<decltype(data->aeroedge)>)std::clamp(value, 0, 30000);
}

int SoftBodySettings_plastic_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->plastic);
}

void SoftBodySettings_plastic_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->plastic = (std::remove_reference_t<decltype(data->plastic)>)std::clamp(value, 0, 100);
}

float SoftBodySettings_bend_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->secondspring);
}

void SoftBodySettings_bend_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->secondspring = (std::remove_reference_t<decltype(data->secondspring)>)std::clamp(value, 0.0f, 10.0f);
}

float SoftBodySettings_shear_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->shearstiff);
}

void SoftBodySettings_shear_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->shearstiff = (std::remove_reference_t<decltype(data->shearstiff)>)std::clamp(value, 0.0f, 1.0f);
}

void SoftBodySettings_vertex_group_spring_get(PointerRNA *ptr, char *value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    BLI_assert(strlen(data->namedVG_Spring_K) < 64);
    strcpy(value, data->namedVG_Spring_K);
}

int SoftBodySettings_vertex_group_spring_length(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return strlen(data->namedVG_Spring_K);
}

void SoftBodySettings_vertex_group_spring_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_SoftBodySettings_spring_vgroup_set;
    fn(ptr, value);
}

int SoftBodySettings_collision_type_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->sbc_mode);
}

void SoftBodySettings_collision_type_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->sbc_mode = (std::remove_reference_t<decltype(data->sbc_mode)>)value;
}

float SoftBodySettings_ball_size_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->colball);
}

void SoftBodySettings_ball_size_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->colball = (std::remove_reference_t<decltype(data->colball)>)std::clamp(value, -10.0f, 10.0f);
}

float SoftBodySettings_ball_stiff_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->ballstiff);
}

void SoftBodySettings_ball_stiff_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->ballstiff = (std::remove_reference_t<decltype(data->ballstiff)>)std::clamp(value, 0.0010000000f, 100.0f);
}

float SoftBodySettings_ball_damp_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->balldamp);
}

void SoftBodySettings_ball_damp_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->balldamp = (std::remove_reference_t<decltype(data->balldamp)>)std::clamp(value, 0.0010000000f, 1.0f);
}

float SoftBodySettings_error_threshold_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->rklimit);
}

void SoftBodySettings_error_threshold_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->rklimit = (std::remove_reference_t<decltype(data->rklimit)>)std::clamp(value, 0.0010000000f, 10.0f);
}

int SoftBodySettings_step_min_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->minloops);
}

void SoftBodySettings_step_min_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->minloops = (std::remove_reference_t<decltype(data->minloops)>)std::clamp(value, 0, 30000);
}

int SoftBodySettings_step_max_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->maxloops);
}

void SoftBodySettings_step_max_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->maxloops = (std::remove_reference_t<decltype(data->maxloops)>)std::clamp(value, 0, 30000);
}

int SoftBodySettings_choke_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->choke);
}

void SoftBodySettings_choke_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->choke = (std::remove_reference_t<decltype(data->choke)>)std::clamp(value, 0, 100);
}

int SoftBodySettings_fuzzy_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->fuzzyness);
}

void SoftBodySettings_fuzzy_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->fuzzyness = (std::remove_reference_t<decltype(data->fuzzyness)>)std::clamp(value, 1, 100);
}

bool SoftBodySettings_use_auto_step_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return ((uint64_t(data->solverflags) & 2) != 0);
}

void SoftBodySettings_use_auto_step_set(PointerRNA *ptr, bool value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value) { data->solverflags = std::remove_reference_t<decltype(data->solverflags)>(uint64_t(data->solverflags) | 2); }
    else { data->solverflags = std::remove_reference_t<decltype(data->solverflags)>(uint64_t(data->solverflags) & ~uint64_t(2)); }
}

bool SoftBodySettings_use_diagnose_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return ((uint64_t(data->solverflags) & 1) != 0);
}

void SoftBodySettings_use_diagnose_set(PointerRNA *ptr, bool value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value) { data->solverflags = std::remove_reference_t<decltype(data->solverflags)>(uint64_t(data->solverflags) | 1); }
    else { data->solverflags = std::remove_reference_t<decltype(data->solverflags)>(uint64_t(data->solverflags) & ~uint64_t(1)); }
}

bool SoftBodySettings_use_estimate_matrix_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return ((uint64_t(data->solverflags) & 4) != 0);
}

void SoftBodySettings_use_estimate_matrix_set(PointerRNA *ptr, bool value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value) { data->solverflags = std::remove_reference_t<decltype(data->solverflags)>(uint64_t(data->solverflags) | 4); }
    else { data->solverflags = std::remove_reference_t<decltype(data->solverflags)>(uint64_t(data->solverflags) & ~uint64_t(4)); }
}

void SoftBodySettings_location_mass_center_get(PointerRNA *ptr, float values[3])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->lcom)[i]);
    }
}

void SoftBodySettings_location_mass_center_set(PointerRNA *ptr, const float values[3])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->lcom)[i] = values[i];
    }
}

void SoftBodySettings_rotation_estimate_get(PointerRNA *ptr, float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 9; i++) {
        values[i] = (float)(((float *)data->lrot)[i]);
    }
}

void SoftBodySettings_rotation_estimate_set(PointerRNA *ptr, const float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 9; i++) {
        ((float *)data->lrot)[i] = values[i];
    }
}

void SoftBodySettings_scale_estimate_get(PointerRNA *ptr, float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 9; i++) {
        values[i] = (float)(((float *)data->lscale)[i]);
    }
}

void SoftBodySettings_scale_estimate_set(PointerRNA *ptr, const float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 9; i++) {
        ((float *)data->lscale)[i] = values[i];
    }
}

bool SoftBodySettings_use_goal_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_use_goal_get;
    return fn(ptr);
}

void SoftBodySettings_use_goal_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_use_goal_set;
    fn(ptr, value);
}

bool SoftBodySettings_use_edges_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_use_edges_get;
    return fn(ptr);
}

void SoftBodySettings_use_edges_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_use_edges_set;
    fn(ptr, value);
}

bool SoftBodySettings_use_stiff_quads_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_stiff_quads_get;
    return fn(ptr);
}

void SoftBodySettings_use_stiff_quads_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_stiff_quads_set;
    fn(ptr, value);
}

bool SoftBodySettings_use_edge_collision_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_edge_collision_get;
    return fn(ptr);
}

void SoftBodySettings_use_edge_collision_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_edge_collision_set;
    fn(ptr, value);
}

bool SoftBodySettings_use_face_collision_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_face_collision_get;
    return fn(ptr);
}

void SoftBodySettings_use_face_collision_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_face_collision_set;
    fn(ptr, value);
}

int SoftBodySettings_aerodynamics_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_SoftBodySettings_new_aero_get;
    return fn(ptr);
}

void SoftBodySettings_aerodynamics_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_SoftBodySettings_new_aero_set;
    fn(ptr, value);
}

bool SoftBodySettings_use_self_collision_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_self_collision_get;
    return fn(ptr);
}

void SoftBodySettings_use_self_collision_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_self_collision_set;
    fn(ptr, value);
}

PointerRNA SoftBodySettings_collision_collection_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->collision_group);
}

void SoftBodySettings_collision_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->collision_group = value.data;
}

PointerRNA SoftBodySettings_effector_weights_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_EffectorWeights, data->effector_weights);
}








/* Active Point Cache */
static CollectionPropertyRNA rna_PointCache_rna_properties_;
PropertyRNA &rna_PointCache_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PointCache_rna_properties_);

static PointerPropertyRNA rna_PointCache_rna_type_;
PropertyRNA &rna_PointCache_rna_type = reinterpret_cast<PropertyRNA &>(rna_PointCache_rna_type_);

static IntPropertyRNA rna_PointCache_frame_start_;
PropertyRNA &rna_PointCache_frame_start = reinterpret_cast<PropertyRNA &>(rna_PointCache_frame_start_);

static IntPropertyRNA rna_PointCache_frame_end_;
PropertyRNA &rna_PointCache_frame_end = reinterpret_cast<PropertyRNA &>(rna_PointCache_frame_end_);

static IntPropertyRNA rna_PointCache_frame_step_;
PropertyRNA &rna_PointCache_frame_step = reinterpret_cast<PropertyRNA &>(rna_PointCache_frame_step_);

static IntPropertyRNA rna_PointCache_index_;
PropertyRNA &rna_PointCache_index = reinterpret_cast<PropertyRNA &>(rna_PointCache_index_);

static BoolPropertyRNA rna_PointCache_is_baked_;
PropertyRNA &rna_PointCache_is_baked = reinterpret_cast<PropertyRNA &>(rna_PointCache_is_baked_);

static BoolPropertyRNA rna_PointCache_is_baking_;
PropertyRNA &rna_PointCache_is_baking = reinterpret_cast<PropertyRNA &>(rna_PointCache_is_baking_);

static BoolPropertyRNA rna_PointCache_use_disk_cache_;
PropertyRNA &rna_PointCache_use_disk_cache = reinterpret_cast<PropertyRNA &>(rna_PointCache_use_disk_cache_);

static BoolPropertyRNA rna_PointCache_is_outdated_;
PropertyRNA &rna_PointCache_is_outdated = reinterpret_cast<PropertyRNA &>(rna_PointCache_is_outdated_);

static BoolPropertyRNA rna_PointCache_is_frame_skip_;
PropertyRNA &rna_PointCache_is_frame_skip = reinterpret_cast<PropertyRNA &>(rna_PointCache_is_frame_skip_);

static StringPropertyRNA rna_PointCache_name_;
PropertyRNA &rna_PointCache_name = reinterpret_cast<PropertyRNA &>(rna_PointCache_name_);

static StringPropertyRNA rna_PointCache_filepath_;
PropertyRNA &rna_PointCache_filepath = reinterpret_cast<PropertyRNA &>(rna_PointCache_filepath_);

static StringPropertyRNA rna_PointCache_info_;
PropertyRNA &rna_PointCache_info = reinterpret_cast<PropertyRNA &>(rna_PointCache_info_);

static BoolPropertyRNA rna_PointCache_use_external_;
PropertyRNA &rna_PointCache_use_external = reinterpret_cast<PropertyRNA &>(rna_PointCache_use_external_);

static BoolPropertyRNA rna_PointCache_use_library_path_;
PropertyRNA &rna_PointCache_use_library_path = reinterpret_cast<PropertyRNA &>(rna_PointCache_use_library_path_);

static CollectionPropertyRNA rna_PointCache_point_caches_;
PropertyRNA &rna_PointCache_point_caches = reinterpret_cast<PropertyRNA &>(rna_PointCache_point_caches_);

StructRNA *RNA_PointCache;
void register_struct_PointCache(BlenderRNA &brna)
{
	rna_PointCache_rna_properties_ = {
		{&rna_PointCache_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_rna_properties_begin, PointCache_rna_properties_next, PointCache_rna_properties_end, PointCache_rna_properties_get, nullptr, nullptr, PointCache_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PointCache_rna_type_ = {
		{&rna_PointCache_frame_start, 	&rna_PointCache_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PointCache_frame_start_ = {
		{&rna_PointCache_frame_end, 	&rna_PointCache_rna_type,
		-1, "frame_start", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Start",
		"Frame on which the simulation starts",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PointCache, startframe), RawPropertyType(0), nullptr},
		PointCache_frame_start_get, PointCache_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PointCache_frame_end_ = {
		{&rna_PointCache_frame_step, 	&rna_PointCache_frame_start,
		-1, "frame_end", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "End",
		"Frame on which the simulation stops",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PointCache, endframe), RawPropertyType(0), nullptr},
		PointCache_frame_end_get, PointCache_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 1048574, 1, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PointCache_frame_step_ = {
		{&rna_PointCache_index, 	&rna_PointCache_frame_end,
		-1, "frame_step", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Cache Step",
		"Number of frames between cached frames",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PointCache, step), RawPropertyType(0), nullptr},
		PointCache_frame_step_get, PointCache_frame_step_set, nullptr, nullptr, rna_PointCache_frame_step_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 20, 1, 20, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PointCache_index_ = {
		{&rna_PointCache_is_baked, 	&rna_PointCache_frame_step,
		-1, "index", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Cache Index",
		"Index number of cache files",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_idname_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PointCache, index), RawPropertyType(0), nullptr},
		PointCache_index_get, PointCache_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 100, -1, 100, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PointCache_is_baked_ = {
		{&rna_PointCache_is_baking, 	&rna_PointCache_index,
		-1, "is_baked", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The cache is baked",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_is_baked_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCache_is_baking_ = {
		{&rna_PointCache_use_disk_cache, 	&rna_PointCache_is_baked,
		-1, "is_baking", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The cache is being baked",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_is_baking_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCache_use_disk_cache_ = {
		{&rna_PointCache_is_outdated, 	&rna_PointCache_is_baking,
		-1, "use_disk_cache", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disk Cache",
		"Save cache files to disk (.blend file must be saved first)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_toggle_disk_cache, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Cache_use_disk_cache_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_use_disk_cache_get, PointCache_use_disk_cache_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCache_is_outdated_ = {
		{&rna_PointCache_is_frame_skip, 	&rna_PointCache_use_disk_cache,
		-1, "is_outdated", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Cache Is Outdated",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_is_outdated_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCache_is_frame_skip_ = {
		{&rna_PointCache_name, 	&rna_PointCache_is_outdated,
		-1, "is_frame_skip", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Some frames were skipped while baking/saving that cache",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_is_frame_skip_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCache_name_ = {
		{&rna_PointCache_filepath, 	&rna_PointCache_is_frame_skip,
		-1, "name", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Cache name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Cache_idname_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_name_get, PointCache_name_length, PointCache_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_PointCache_filepath_ = {
		{&rna_PointCache_info, 	&rna_PointCache_name,
		-1, "filepath", 294913, 1, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"Cache file path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_DIRPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_Cache_idname_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_filepath_get, PointCache_filepath_length, PointCache_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_PointCache_info_ = {
		{&rna_PointCache_use_external, 	&rna_PointCache_filepath,
		-1, "info", 262144, 3, 0, 0, 0, PropertyPathTemplateType(0), "Cache Info",
		"Info on current cache status",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {128, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_info_get, PointCache_info_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 128, ""
	};

	rna_PointCache_use_external_ = {
		{&rna_PointCache_use_library_path, 	&rna_PointCache_info,
		-1, "use_external", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "External",
		"Read cache from an external location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_idname_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_use_external_get, PointCache_use_external_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCache_use_library_path_ = {
		{&rna_PointCache_point_caches, 	&rna_PointCache_use_external,
		-1, "use_library_path", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Library Path",
		"Use this file\'s path for the disk cache when library linked into another file (for local bakes per scene file, disable this option)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_idname_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCache_use_library_path_get, PointCache_use_library_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_PointCache_point_caches_ = {
		{nullptr, 	&rna_PointCache_use_library_path,
		-1, "point_caches", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Point Cache List",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_PointCaches},
		PointCache_point_caches_begin, PointCache_point_caches_next, PointCache_point_caches_end, PointCache_point_caches_get, nullptr, PointCache_point_caches_lookup_int, nullptr, nullptr, RNA_PointCacheItem
	};

	StructRNA *srna = RNA_PointCache;
	srna->cont.properties = {&rna_PointCache_rna_properties, &rna_PointCache_point_caches};
	srna->identifier = "PointCache";
	srna->flag = 516;
	srna->name = "Active Point Cache";
	srna->description = "Active point cache for physics simulations";
	srna->translation_context = "*";
	srna->icon = 120;
	srna->nameproperty = &rna_PointCache_name;
	srna->iteratorproperty = &rna_PointCache_rna_properties;
	srna->path = rna_PointCache_path;
};

/* Point Caches */
static CollectionPropertyRNA rna_PointCaches_rna_properties_;
PropertyRNA &rna_PointCaches_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PointCaches_rna_properties_);

static PointerPropertyRNA rna_PointCaches_rna_type_;
PropertyRNA &rna_PointCaches_rna_type = reinterpret_cast<PropertyRNA &>(rna_PointCaches_rna_type_);

static IntPropertyRNA rna_PointCaches_active_index_;
PropertyRNA &rna_PointCaches_active_index = reinterpret_cast<PropertyRNA &>(rna_PointCaches_active_index_);

StructRNA *RNA_PointCaches;
void register_struct_PointCaches(BlenderRNA &brna)
{
	rna_PointCaches_rna_properties_ = {
		{&rna_PointCaches_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCaches_rna_properties_begin, PointCaches_rna_properties_next, PointCaches_rna_properties_end, PointCaches_rna_properties_get, nullptr, nullptr, PointCaches_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PointCaches_rna_type_ = {
		{&rna_PointCaches_active_index, 	&rna_PointCaches_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCaches_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PointCaches_active_index_ = {
		{nullptr, 	&rna_PointCaches_rna_type,
		-1, "active_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Point Cache Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCaches_active_index_get, PointCaches_active_index_set, nullptr, nullptr, rna_Cache_active_point_cache_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_PointCaches;
	srna->cont.properties = {&rna_PointCaches_rna_properties, &rna_PointCaches_active_index};
	srna->identifier = "PointCaches";
	srna->flag = 516;
	srna->name = "Point Caches";
	srna->description = "Collection of point caches";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PointCaches_rna_properties;
};

/* Point Cache */
static CollectionPropertyRNA rna_PointCacheItem_rna_properties_;
PropertyRNA &rna_PointCacheItem_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_rna_properties_);

static PointerPropertyRNA rna_PointCacheItem_rna_type_;
PropertyRNA &rna_PointCacheItem_rna_type = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_rna_type_);

static IntPropertyRNA rna_PointCacheItem_frame_start_;
PropertyRNA &rna_PointCacheItem_frame_start = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_frame_start_);

static IntPropertyRNA rna_PointCacheItem_frame_end_;
PropertyRNA &rna_PointCacheItem_frame_end = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_frame_end_);

static IntPropertyRNA rna_PointCacheItem_frame_step_;
PropertyRNA &rna_PointCacheItem_frame_step = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_frame_step_);

static IntPropertyRNA rna_PointCacheItem_index_;
PropertyRNA &rna_PointCacheItem_index = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_index_);

static BoolPropertyRNA rna_PointCacheItem_is_baked_;
PropertyRNA &rna_PointCacheItem_is_baked = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_is_baked_);

static BoolPropertyRNA rna_PointCacheItem_is_baking_;
PropertyRNA &rna_PointCacheItem_is_baking = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_is_baking_);

static BoolPropertyRNA rna_PointCacheItem_use_disk_cache_;
PropertyRNA &rna_PointCacheItem_use_disk_cache = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_use_disk_cache_);

static BoolPropertyRNA rna_PointCacheItem_is_outdated_;
PropertyRNA &rna_PointCacheItem_is_outdated = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_is_outdated_);

static BoolPropertyRNA rna_PointCacheItem_is_frame_skip_;
PropertyRNA &rna_PointCacheItem_is_frame_skip = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_is_frame_skip_);

static StringPropertyRNA rna_PointCacheItem_name_;
PropertyRNA &rna_PointCacheItem_name = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_name_);

static StringPropertyRNA rna_PointCacheItem_filepath_;
PropertyRNA &rna_PointCacheItem_filepath = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_filepath_);

static StringPropertyRNA rna_PointCacheItem_info_;
PropertyRNA &rna_PointCacheItem_info = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_info_);

static BoolPropertyRNA rna_PointCacheItem_use_external_;
PropertyRNA &rna_PointCacheItem_use_external = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_use_external_);

static BoolPropertyRNA rna_PointCacheItem_use_library_path_;
PropertyRNA &rna_PointCacheItem_use_library_path = reinterpret_cast<PropertyRNA &>(rna_PointCacheItem_use_library_path_);

StructRNA *RNA_PointCacheItem;
void register_struct_PointCacheItem(BlenderRNA &brna)
{
	rna_PointCacheItem_rna_properties_ = {
		{&rna_PointCacheItem_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_rna_properties_begin, PointCacheItem_rna_properties_next, PointCacheItem_rna_properties_end, PointCacheItem_rna_properties_get, nullptr, nullptr, PointCacheItem_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PointCacheItem_rna_type_ = {
		{&rna_PointCacheItem_frame_start, 	&rna_PointCacheItem_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PointCacheItem_frame_start_ = {
		{&rna_PointCacheItem_frame_end, 	&rna_PointCacheItem_rna_type,
		-1, "frame_start", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Start",
		"Frame on which the simulation starts",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PointCache, startframe), RawPropertyType(0), nullptr},
		PointCacheItem_frame_start_get, PointCacheItem_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PointCacheItem_frame_end_ = {
		{&rna_PointCacheItem_frame_step, 	&rna_PointCacheItem_frame_start,
		-1, "frame_end", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "End",
		"Frame on which the simulation stops",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PointCache, endframe), RawPropertyType(0), nullptr},
		PointCacheItem_frame_end_get, PointCacheItem_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 1048574, 1, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PointCacheItem_frame_step_ = {
		{&rna_PointCacheItem_index, 	&rna_PointCacheItem_frame_end,
		-1, "frame_step", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Cache Step",
		"Number of frames between cached frames",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PointCache, step), RawPropertyType(0), nullptr},
		PointCacheItem_frame_step_get, PointCacheItem_frame_step_set, nullptr, nullptr, rna_PointCache_frame_step_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 20, 1, 20, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PointCacheItem_index_ = {
		{&rna_PointCacheItem_is_baked, 	&rna_PointCacheItem_frame_step,
		-1, "index", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Cache Index",
		"Index number of cache files",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_idname_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PointCache, index), RawPropertyType(0), nullptr},
		PointCacheItem_index_get, PointCacheItem_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 100, -1, 100, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PointCacheItem_is_baked_ = {
		{&rna_PointCacheItem_is_baking, 	&rna_PointCacheItem_index,
		-1, "is_baked", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The cache is baked",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_is_baked_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCacheItem_is_baking_ = {
		{&rna_PointCacheItem_use_disk_cache, 	&rna_PointCacheItem_is_baked,
		-1, "is_baking", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The cache is being baked",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_is_baking_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCacheItem_use_disk_cache_ = {
		{&rna_PointCacheItem_is_outdated, 	&rna_PointCacheItem_is_baking,
		-1, "use_disk_cache", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disk Cache",
		"Save cache files to disk (.blend file must be saved first)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_toggle_disk_cache, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Cache_use_disk_cache_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_use_disk_cache_get, PointCacheItem_use_disk_cache_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCacheItem_is_outdated_ = {
		{&rna_PointCacheItem_is_frame_skip, 	&rna_PointCacheItem_use_disk_cache,
		-1, "is_outdated", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Cache Is Outdated",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_is_outdated_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCacheItem_is_frame_skip_ = {
		{&rna_PointCacheItem_name, 	&rna_PointCacheItem_is_outdated,
		-1, "is_frame_skip", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Some frames were skipped while baking/saving that cache",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_is_frame_skip_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCacheItem_name_ = {
		{&rna_PointCacheItem_filepath, 	&rna_PointCacheItem_is_frame_skip,
		-1, "name", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Cache name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Cache_idname_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_name_get, PointCacheItem_name_length, PointCacheItem_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_PointCacheItem_filepath_ = {
		{&rna_PointCacheItem_info, 	&rna_PointCacheItem_name,
		-1, "filepath", 294913, 1, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"Cache file path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_DIRPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_Cache_idname_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_filepath_get, PointCacheItem_filepath_length, PointCacheItem_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_PointCacheItem_info_ = {
		{&rna_PointCacheItem_use_external, 	&rna_PointCacheItem_filepath,
		-1, "info", 262144, 3, 0, 0, 0, PropertyPathTemplateType(0), "Cache Info",
		"Info on current cache status",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {128, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_info_get, PointCacheItem_info_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 128, ""
	};

	rna_PointCacheItem_use_external_ = {
		{&rna_PointCacheItem_use_library_path, 	&rna_PointCacheItem_info,
		-1, "use_external", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "External",
		"Read cache from an external location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_idname_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_use_external_get, PointCacheItem_use_external_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PointCacheItem_use_library_path_ = {
		{nullptr, 	&rna_PointCacheItem_use_external,
		-1, "use_library_path", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Library Path",
		"Use this file\'s path for the disk cache when library linked into another file (for local bakes per scene file, disable this option)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Cache_idname_change, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCacheItem_use_library_path_get, PointCacheItem_use_library_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	StructRNA *srna = RNA_PointCacheItem;
	srna->cont.properties = {&rna_PointCacheItem_rna_properties, &rna_PointCacheItem_use_library_path};
	srna->identifier = "PointCacheItem";
	srna->flag = 516;
	srna->name = "Point Cache";
	srna->description = "Point cache for physics simulations";
	srna->translation_context = "*";
	srna->icon = 120;
	srna->nameproperty = &rna_PointCacheItem_name;
	srna->iteratorproperty = &rna_PointCacheItem_rna_properties;
	srna->path = rna_PointCache_path;
};

/* Collision Settings */
static CollectionPropertyRNA rna_CollisionSettings_rna_properties_;
PropertyRNA &rna_CollisionSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_rna_properties_);

static PointerPropertyRNA rna_CollisionSettings_rna_type_;
PropertyRNA &rna_CollisionSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_rna_type_);

static BoolPropertyRNA rna_CollisionSettings_use_;
PropertyRNA &rna_CollisionSettings_use = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_use_);

static FloatPropertyRNA rna_CollisionSettings_damping_factor_;
PropertyRNA &rna_CollisionSettings_damping_factor = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_damping_factor_);

static FloatPropertyRNA rna_CollisionSettings_damping_random_;
PropertyRNA &rna_CollisionSettings_damping_random = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_damping_random_);

static FloatPropertyRNA rna_CollisionSettings_friction_factor_;
PropertyRNA &rna_CollisionSettings_friction_factor = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_friction_factor_);

static FloatPropertyRNA rna_CollisionSettings_friction_random_;
PropertyRNA &rna_CollisionSettings_friction_random = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_friction_random_);

static FloatPropertyRNA rna_CollisionSettings_permeability_;
PropertyRNA &rna_CollisionSettings_permeability = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_permeability_);

static BoolPropertyRNA rna_CollisionSettings_use_particle_kill_;
PropertyRNA &rna_CollisionSettings_use_particle_kill = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_use_particle_kill_);

static FloatPropertyRNA rna_CollisionSettings_stickiness_;
PropertyRNA &rna_CollisionSettings_stickiness = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_stickiness_);

static FloatPropertyRNA rna_CollisionSettings_thickness_inner_;
PropertyRNA &rna_CollisionSettings_thickness_inner = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_thickness_inner_);

static FloatPropertyRNA rna_CollisionSettings_thickness_outer_;
PropertyRNA &rna_CollisionSettings_thickness_outer = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_thickness_outer_);

static FloatPropertyRNA rna_CollisionSettings_damping_;
PropertyRNA &rna_CollisionSettings_damping = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_damping_);

static FloatPropertyRNA rna_CollisionSettings_absorption_;
PropertyRNA &rna_CollisionSettings_absorption = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_absorption_);

static FloatPropertyRNA rna_CollisionSettings_cloth_friction_;
PropertyRNA &rna_CollisionSettings_cloth_friction = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_cloth_friction_);

static BoolPropertyRNA rna_CollisionSettings_use_culling_;
PropertyRNA &rna_CollisionSettings_use_culling = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_use_culling_);

static BoolPropertyRNA rna_CollisionSettings_use_normal_;
PropertyRNA &rna_CollisionSettings_use_normal = reinterpret_cast<PropertyRNA &>(rna_CollisionSettings_use_normal_);

StructRNA *RNA_CollisionSettings;
void register_struct_CollisionSettings(BlenderRNA &brna)
{
	rna_CollisionSettings_rna_properties_ = {
		{&rna_CollisionSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollisionSettings_rna_properties_begin, CollisionSettings_rna_properties_next, CollisionSettings_rna_properties_end, CollisionSettings_rna_properties_get, nullptr, nullptr, CollisionSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CollisionSettings_rna_type_ = {
		{&rna_CollisionSettings_use, 	&rna_CollisionSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollisionSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CollisionSettings_use_ = {
		{&rna_CollisionSettings_damping_factor, 	&rna_CollisionSettings_rna_type,
		-1, "use", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Enabled",
		"Enable this object as a collider for physics systems",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollisionSettings_use_get, CollisionSettings_use_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CollisionSettings_damping_factor_ = {
		{&rna_CollisionSettings_damping_random, 	&rna_CollisionSettings_use,
		-1, "damping_factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Damping Factor",
		"Amount of damping during particle collision",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, pdef_damp), RawPropertyType(5), nullptr},
		CollisionSettings_damping_factor_get, CollisionSettings_damping_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_damping_random_ = {
		{&rna_CollisionSettings_friction_factor, 	&rna_CollisionSettings_damping_factor,
		-1, "damping_random", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Random Damping",
		"Random variation of damping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, pdef_rdamp), RawPropertyType(5), nullptr},
		CollisionSettings_damping_random_get, CollisionSettings_damping_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_friction_factor_ = {
		{&rna_CollisionSettings_friction_random, 	&rna_CollisionSettings_damping_random,
		-1, "friction_factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Friction Factor",
		"Amount of friction during particle collision",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, pdef_frict), RawPropertyType(5), nullptr},
		CollisionSettings_friction_factor_get, CollisionSettings_friction_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_friction_random_ = {
		{&rna_CollisionSettings_permeability, 	&rna_CollisionSettings_friction_factor,
		-1, "friction_random", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Random Friction",
		"Random variation of friction",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, pdef_rfrict), RawPropertyType(5), nullptr},
		CollisionSettings_friction_random_get, CollisionSettings_friction_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_permeability_ = {
		{&rna_CollisionSettings_use_particle_kill, 	&rna_CollisionSettings_friction_random,
		-1, "permeability", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Permeability",
		"Chance that the particle will pass through the mesh",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, pdef_perm), RawPropertyType(5), nullptr},
		CollisionSettings_permeability_get, CollisionSettings_permeability_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_use_particle_kill_ = {
		{&rna_CollisionSettings_stickiness, 	&rna_CollisionSettings_permeability,
		-1, "use_particle_kill", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Kill Particles",
		"Kill collided particles",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollisionSettings_use_particle_kill_get, CollisionSettings_use_particle_kill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CollisionSettings_stickiness_ = {
		{&rna_CollisionSettings_thickness_inner, 	&rna_CollisionSettings_use_particle_kill,
		-1, "stickiness", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Stickiness",
		"Amount of stickiness to surface collision",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, pdef_stickness), RawPropertyType(5), nullptr},
		CollisionSettings_stickiness_get, CollisionSettings_stickiness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_thickness_inner_ = {
		{&rna_CollisionSettings_thickness_outer, 	&rna_CollisionSettings_stickiness,
		-1, "thickness_inner", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Inner Thickness",
		"Inner face thickness (only used by softbodies)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, pdef_sbift), RawPropertyType(5), nullptr},
		CollisionSettings_thickness_inner_get, CollisionSettings_thickness_inner_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_thickness_outer_ = {
		{&rna_CollisionSettings_damping, 	&rna_CollisionSettings_thickness_inner,
		-1, "thickness_outer", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Outer Thickness",
		"Outer face thickness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, pdef_sboft), RawPropertyType(5), nullptr},
		CollisionSettings_thickness_outer_get, CollisionSettings_thickness_outer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_damping_ = {
		{&rna_CollisionSettings_absorption, 	&rna_CollisionSettings_thickness_outer,
		-1, "damping", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Damping",
		"Amount of damping during collision",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, pdef_sbdamp), RawPropertyType(5), nullptr},
		CollisionSettings_damping_get, CollisionSettings_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_absorption_ = {
		{&rna_CollisionSettings_cloth_friction, 	&rna_CollisionSettings_damping,
		-1, "absorption", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Absorption",
		"How much of effector force gets lost during collision with this object (in percent)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, absorption), RawPropertyType(5), nullptr},
		CollisionSettings_absorption_get, CollisionSettings_absorption_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_cloth_friction_ = {
		{&rna_CollisionSettings_use_culling, 	&rna_CollisionSettings_absorption,
		-1, "cloth_friction", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Friction",
		"Friction for cloth collisions",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, pdef_cfrict), RawPropertyType(5), nullptr},
		CollisionSettings_cloth_friction_get, CollisionSettings_cloth_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 80.0f, 0.0f, 80.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CollisionSettings_use_culling_ = {
		{&rna_CollisionSettings_use_normal, 	&rna_CollisionSettings_cloth_friction,
		-1, "use_culling", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Single Sided",
		"Cloth collision acts with respect to the collider normals (improves penetration recovery)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollisionSettings_use_culling_get, CollisionSettings_use_culling_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CollisionSettings_use_normal_ = {
		{nullptr, 	&rna_CollisionSettings_use_culling,
		-1, "use_normal", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Override Normals",
		"Cloth collision impulses act in the direction of the collider normals (more reliable in some cases)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollisionSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollisionSettings_use_normal_get, CollisionSettings_use_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_CollisionSettings;
	srna->cont.properties = {&rna_CollisionSettings_rna_properties, &rna_CollisionSettings_use_normal};
	srna->identifier = "CollisionSettings";
	srna->flag = 516;
	srna->name = "Collision Settings";
	srna->description = "Collision settings for object in physics simulation";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CollisionSettings_rna_properties;
	srna->path = rna_CollisionSettings_path;
};

/* Effector Weights */
static CollectionPropertyRNA rna_EffectorWeights_rna_properties_;
PropertyRNA &rna_EffectorWeights_rna_properties = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_rna_properties_);

static PointerPropertyRNA rna_EffectorWeights_rna_type_;
PropertyRNA &rna_EffectorWeights_rna_type = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_rna_type_);

static BoolPropertyRNA rna_EffectorWeights_apply_to_hair_growing_;
PropertyRNA &rna_EffectorWeights_apply_to_hair_growing = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_apply_to_hair_growing_);

static PointerPropertyRNA rna_EffectorWeights_collection_;
PropertyRNA &rna_EffectorWeights_collection = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_collection_);

static FloatPropertyRNA rna_EffectorWeights_gravity_;
PropertyRNA &rna_EffectorWeights_gravity = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_gravity_);

static FloatPropertyRNA rna_EffectorWeights_all_;
PropertyRNA &rna_EffectorWeights_all = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_all_);

static FloatPropertyRNA rna_EffectorWeights_force_;
PropertyRNA &rna_EffectorWeights_force = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_force_);

static FloatPropertyRNA rna_EffectorWeights_vortex_;
PropertyRNA &rna_EffectorWeights_vortex = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_vortex_);

static FloatPropertyRNA rna_EffectorWeights_magnetic_;
PropertyRNA &rna_EffectorWeights_magnetic = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_magnetic_);

static FloatPropertyRNA rna_EffectorWeights_wind_;
PropertyRNA &rna_EffectorWeights_wind = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_wind_);

static FloatPropertyRNA rna_EffectorWeights_curve_guide_;
PropertyRNA &rna_EffectorWeights_curve_guide = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_curve_guide_);

static FloatPropertyRNA rna_EffectorWeights_texture_;
PropertyRNA &rna_EffectorWeights_texture = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_texture_);

static FloatPropertyRNA rna_EffectorWeights_harmonic_;
PropertyRNA &rna_EffectorWeights_harmonic = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_harmonic_);

static FloatPropertyRNA rna_EffectorWeights_charge_;
PropertyRNA &rna_EffectorWeights_charge = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_charge_);

static FloatPropertyRNA rna_EffectorWeights_lennardjones_;
PropertyRNA &rna_EffectorWeights_lennardjones = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_lennardjones_);

static FloatPropertyRNA rna_EffectorWeights_boid_;
PropertyRNA &rna_EffectorWeights_boid = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_boid_);

static FloatPropertyRNA rna_EffectorWeights_turbulence_;
PropertyRNA &rna_EffectorWeights_turbulence = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_turbulence_);

static FloatPropertyRNA rna_EffectorWeights_drag_;
PropertyRNA &rna_EffectorWeights_drag = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_drag_);

static FloatPropertyRNA rna_EffectorWeights_smokeflow_;
PropertyRNA &rna_EffectorWeights_smokeflow = reinterpret_cast<PropertyRNA &>(rna_EffectorWeights_smokeflow_);

StructRNA *RNA_EffectorWeights;
void register_struct_EffectorWeights(BlenderRNA &brna)
{
	rna_EffectorWeights_rna_properties_ = {
		{&rna_EffectorWeights_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectorWeights_rna_properties_begin, EffectorWeights_rna_properties_next, EffectorWeights_rna_properties_end, EffectorWeights_rna_properties_get, nullptr, nullptr, EffectorWeights_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_EffectorWeights_rna_type_ = {
		{&rna_EffectorWeights_apply_to_hair_growing, 	&rna_EffectorWeights_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectorWeights_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_EffectorWeights_apply_to_hair_growing_ = {
		{&rna_EffectorWeights_collection, 	&rna_EffectorWeights_rna_type,
		-1, "apply_to_hair_growing", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use For Growing Hair",
		"Use force fields when growing hair",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectorWeights_apply_to_hair_growing_get, EffectorWeights_apply_to_hair_growing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EffectorWeights_collection_ = {
		{&rna_EffectorWeights_gravity, 	&rna_EffectorWeights_apply_to_hair_growing,
		-1, "collection", 8388801, 1, 0, 64, 0, PropertyPathTemplateType(0), "Effector Collection",
		"Limit effectors to this collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectorWeights_collection_get, EffectorWeights_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_EffectorWeights_gravity_ = {
		{&rna_EffectorWeights_all, 	&rna_EffectorWeights_collection,
		-1, "gravity", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Gravity",
		"Global gravity weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, global_gravity), RawPropertyType(5), nullptr},
		EffectorWeights_gravity_get, EffectorWeights_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_all_ = {
		{&rna_EffectorWeights_force, 	&rna_EffectorWeights_gravity,
		-1, "all", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "All",
		"All effector\'s weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[0]), RawPropertyType(5), nullptr},
		EffectorWeights_all_get, EffectorWeights_all_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_force_ = {
		{&rna_EffectorWeights_vortex, 	&rna_EffectorWeights_all,
		-1, "force", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Force",
		"Force effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[1]), RawPropertyType(5), nullptr},
		EffectorWeights_force_get, EffectorWeights_force_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_vortex_ = {
		{&rna_EffectorWeights_magnetic, 	&rna_EffectorWeights_force,
		-1, "vortex", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Vortex",
		"Vortex effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[2]), RawPropertyType(5), nullptr},
		EffectorWeights_vortex_get, EffectorWeights_vortex_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_magnetic_ = {
		{&rna_EffectorWeights_wind, 	&rna_EffectorWeights_vortex,
		-1, "magnetic", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Magnetic",
		"Magnetic effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[3]), RawPropertyType(5), nullptr},
		EffectorWeights_magnetic_get, EffectorWeights_magnetic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_wind_ = {
		{&rna_EffectorWeights_curve_guide, 	&rna_EffectorWeights_magnetic,
		-1, "wind", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Wind",
		"Wind effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[4]), RawPropertyType(5), nullptr},
		EffectorWeights_wind_get, EffectorWeights_wind_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_curve_guide_ = {
		{&rna_EffectorWeights_texture, 	&rna_EffectorWeights_wind,
		-1, "curve_guide", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Curve Guide",
		"Curve guide effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[5]), RawPropertyType(5), nullptr},
		EffectorWeights_curve_guide_get, EffectorWeights_curve_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_texture_ = {
		{&rna_EffectorWeights_harmonic, 	&rna_EffectorWeights_curve_guide,
		-1, "texture", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Texture",
		"Texture effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[6]), RawPropertyType(5), nullptr},
		EffectorWeights_texture_get, EffectorWeights_texture_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_harmonic_ = {
		{&rna_EffectorWeights_charge, 	&rna_EffectorWeights_texture,
		-1, "harmonic", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Harmonic",
		"Harmonic effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[7]), RawPropertyType(5), nullptr},
		EffectorWeights_harmonic_get, EffectorWeights_harmonic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_charge_ = {
		{&rna_EffectorWeights_lennardjones, 	&rna_EffectorWeights_harmonic,
		-1, "charge", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Charge",
		"Charge effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[8]), RawPropertyType(5), nullptr},
		EffectorWeights_charge_get, EffectorWeights_charge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_lennardjones_ = {
		{&rna_EffectorWeights_boid, 	&rna_EffectorWeights_charge,
		-1, "lennardjones", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Lennard-Jones",
		"Lennard-Jones effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[9]), RawPropertyType(5), nullptr},
		EffectorWeights_lennardjones_get, EffectorWeights_lennardjones_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_boid_ = {
		{&rna_EffectorWeights_turbulence, 	&rna_EffectorWeights_lennardjones,
		-1, "boid", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Boid",
		"Boid effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[10]), RawPropertyType(5), nullptr},
		EffectorWeights_boid_get, EffectorWeights_boid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_turbulence_ = {
		{&rna_EffectorWeights_drag, 	&rna_EffectorWeights_boid,
		-1, "turbulence", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Turbulence",
		"Turbulence effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[11]), RawPropertyType(5), nullptr},
		EffectorWeights_turbulence_get, EffectorWeights_turbulence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_drag_ = {
		{&rna_EffectorWeights_smokeflow, 	&rna_EffectorWeights_turbulence,
		-1, "drag", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Drag",
		"Drag effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[12]), RawPropertyType(5), nullptr},
		EffectorWeights_drag_get, EffectorWeights_drag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectorWeights_smokeflow_ = {
		{nullptr, 	&rna_EffectorWeights_drag,
		-1, "smokeflow", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Fluid Flow",
		"Fluid Flow effector weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EffectorWeight_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EffectorWeights, weight[13]), RawPropertyType(5), nullptr},
		EffectorWeights_smokeflow_get, EffectorWeights_smokeflow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_EffectorWeights;
	srna->cont.properties = {&rna_EffectorWeights_rna_properties, &rna_EffectorWeights_smokeflow};
	srna->identifier = "EffectorWeights";
	srna->flag = 516;
	srna->name = "Effector Weights";
	srna->description = "Effector weights for physics simulation";
	srna->translation_context = "*";
	srna->icon = 120;
	srna->iteratorproperty = &rna_EffectorWeights_rna_properties;
	srna->path = rna_EffectorWeight_path;
};

/* Field Settings */
static CollectionPropertyRNA rna_FieldSettings_rna_properties_;
PropertyRNA &rna_FieldSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_rna_properties_);

static PointerPropertyRNA rna_FieldSettings_rna_type_;
PropertyRNA &rna_FieldSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_rna_type_);

static EnumPropertyRNA rna_FieldSettings_type_;
PropertyRNA &rna_FieldSettings_type = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_type_);

static EnumPropertyRNA rna_FieldSettings_shape_;
PropertyRNA &rna_FieldSettings_shape = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_shape_);

static EnumPropertyRNA rna_FieldSettings_falloff_type_;
PropertyRNA &rna_FieldSettings_falloff_type = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_falloff_type_);

static EnumPropertyRNA rna_FieldSettings_texture_mode_;
PropertyRNA &rna_FieldSettings_texture_mode = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_texture_mode_);

static EnumPropertyRNA rna_FieldSettings_z_direction_;
PropertyRNA &rna_FieldSettings_z_direction = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_z_direction_);

static FloatPropertyRNA rna_FieldSettings_strength_;
PropertyRNA &rna_FieldSettings_strength = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_strength_);

static FloatPropertyRNA rna_FieldSettings_linear_drag_;
PropertyRNA &rna_FieldSettings_linear_drag = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_linear_drag_);

static FloatPropertyRNA rna_FieldSettings_harmonic_damping_;
PropertyRNA &rna_FieldSettings_harmonic_damping = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_harmonic_damping_);

static FloatPropertyRNA rna_FieldSettings_quadratic_drag_;
PropertyRNA &rna_FieldSettings_quadratic_drag = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_quadratic_drag_);

static FloatPropertyRNA rna_FieldSettings_flow_;
PropertyRNA &rna_FieldSettings_flow = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_flow_);

static FloatPropertyRNA rna_FieldSettings_wind_factor_;
PropertyRNA &rna_FieldSettings_wind_factor = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_wind_factor_);

static FloatPropertyRNA rna_FieldSettings_inflow_;
PropertyRNA &rna_FieldSettings_inflow = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_inflow_);

static FloatPropertyRNA rna_FieldSettings_size_;
PropertyRNA &rna_FieldSettings_size = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_size_);

static FloatPropertyRNA rna_FieldSettings_rest_length_;
PropertyRNA &rna_FieldSettings_rest_length = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_rest_length_);

static FloatPropertyRNA rna_FieldSettings_falloff_power_;
PropertyRNA &rna_FieldSettings_falloff_power = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_falloff_power_);

static FloatPropertyRNA rna_FieldSettings_distance_min_;
PropertyRNA &rna_FieldSettings_distance_min = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_distance_min_);

static FloatPropertyRNA rna_FieldSettings_distance_max_;
PropertyRNA &rna_FieldSettings_distance_max = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_distance_max_);

static FloatPropertyRNA rna_FieldSettings_radial_min_;
PropertyRNA &rna_FieldSettings_radial_min = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_radial_min_);

static FloatPropertyRNA rna_FieldSettings_radial_max_;
PropertyRNA &rna_FieldSettings_radial_max = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_radial_max_);

static FloatPropertyRNA rna_FieldSettings_radial_falloff_;
PropertyRNA &rna_FieldSettings_radial_falloff = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_radial_falloff_);

static FloatPropertyRNA rna_FieldSettings_texture_nabla_;
PropertyRNA &rna_FieldSettings_texture_nabla = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_texture_nabla_);

static FloatPropertyRNA rna_FieldSettings_noise_;
PropertyRNA &rna_FieldSettings_noise = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_noise_);

static IntPropertyRNA rna_FieldSettings_seed_;
PropertyRNA &rna_FieldSettings_seed = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_seed_);

static BoolPropertyRNA rna_FieldSettings_use_min_distance_;
PropertyRNA &rna_FieldSettings_use_min_distance = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_min_distance_);

static BoolPropertyRNA rna_FieldSettings_use_max_distance_;
PropertyRNA &rna_FieldSettings_use_max_distance = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_max_distance_);

static BoolPropertyRNA rna_FieldSettings_use_radial_min_;
PropertyRNA &rna_FieldSettings_use_radial_min = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_radial_min_);

static BoolPropertyRNA rna_FieldSettings_use_radial_max_;
PropertyRNA &rna_FieldSettings_use_radial_max = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_radial_max_);

static BoolPropertyRNA rna_FieldSettings_use_object_coords_;
PropertyRNA &rna_FieldSettings_use_object_coords = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_object_coords_);

static BoolPropertyRNA rna_FieldSettings_use_global_coords_;
PropertyRNA &rna_FieldSettings_use_global_coords = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_global_coords_);

static BoolPropertyRNA rna_FieldSettings_use_2d_force_;
PropertyRNA &rna_FieldSettings_use_2d_force = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_2d_force_);

static BoolPropertyRNA rna_FieldSettings_use_root_coords_;
PropertyRNA &rna_FieldSettings_use_root_coords = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_root_coords_);

static BoolPropertyRNA rna_FieldSettings_apply_to_location_;
PropertyRNA &rna_FieldSettings_apply_to_location = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_apply_to_location_);

static BoolPropertyRNA rna_FieldSettings_apply_to_rotation_;
PropertyRNA &rna_FieldSettings_apply_to_rotation = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_apply_to_rotation_);

static BoolPropertyRNA rna_FieldSettings_use_absorption_;
PropertyRNA &rna_FieldSettings_use_absorption = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_absorption_);

static BoolPropertyRNA rna_FieldSettings_use_multiple_springs_;
PropertyRNA &rna_FieldSettings_use_multiple_springs = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_multiple_springs_);

static BoolPropertyRNA rna_FieldSettings_use_smoke_density_;
PropertyRNA &rna_FieldSettings_use_smoke_density = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_smoke_density_);

static BoolPropertyRNA rna_FieldSettings_use_gravity_falloff_;
PropertyRNA &rna_FieldSettings_use_gravity_falloff = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_gravity_falloff_);

static PointerPropertyRNA rna_FieldSettings_texture_;
PropertyRNA &rna_FieldSettings_texture = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_texture_);

static PointerPropertyRNA rna_FieldSettings_source_object_;
PropertyRNA &rna_FieldSettings_source_object = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_source_object_);

static FloatPropertyRNA rna_FieldSettings_guide_minimum_;
PropertyRNA &rna_FieldSettings_guide_minimum = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_guide_minimum_);

static FloatPropertyRNA rna_FieldSettings_guide_free_;
PropertyRNA &rna_FieldSettings_guide_free = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_guide_free_);

static BoolPropertyRNA rna_FieldSettings_use_guide_path_add_;
PropertyRNA &rna_FieldSettings_use_guide_path_add = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_guide_path_add_);

static BoolPropertyRNA rna_FieldSettings_use_guide_path_weight_;
PropertyRNA &rna_FieldSettings_use_guide_path_weight = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_use_guide_path_weight_);

static FloatPropertyRNA rna_FieldSettings_guide_clump_amount_;
PropertyRNA &rna_FieldSettings_guide_clump_amount = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_guide_clump_amount_);

static FloatPropertyRNA rna_FieldSettings_guide_clump_shape_;
PropertyRNA &rna_FieldSettings_guide_clump_shape = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_guide_clump_shape_);

static EnumPropertyRNA rna_FieldSettings_guide_kink_type_;
PropertyRNA &rna_FieldSettings_guide_kink_type = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_guide_kink_type_);

static EnumPropertyRNA rna_FieldSettings_guide_kink_axis_;
PropertyRNA &rna_FieldSettings_guide_kink_axis = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_guide_kink_axis_);

static FloatPropertyRNA rna_FieldSettings_guide_kink_frequency_;
PropertyRNA &rna_FieldSettings_guide_kink_frequency = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_guide_kink_frequency_);

static FloatPropertyRNA rna_FieldSettings_guide_kink_shape_;
PropertyRNA &rna_FieldSettings_guide_kink_shape = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_guide_kink_shape_);

static FloatPropertyRNA rna_FieldSettings_guide_kink_amplitude_;
PropertyRNA &rna_FieldSettings_guide_kink_amplitude = reinterpret_cast<PropertyRNA &>(rna_FieldSettings_guide_kink_amplitude_);

StructRNA *RNA_FieldSettings;
void register_struct_FieldSettings(BlenderRNA &brna)
{
	rna_FieldSettings_rna_properties_ = {
		{&rna_FieldSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_rna_properties_begin, FieldSettings_rna_properties_next, FieldSettings_rna_properties_end, FieldSettings_rna_properties_get, nullptr, nullptr, FieldSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FieldSettings_rna_type_ = {
		{&rna_FieldSettings_type, 	&rna_FieldSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_FieldSettings_type_items[15] = {
		{0, "NONE", 4, "None", ""	},
		{10, "BOID", 364, "Boid", "Create a force that acts as a boid\'s predators or target"	},
		{8, "CHARGE", 365, "Charge", "Spherical forcefield based on the charge of particles, only influences other charge force fields"	},
		{5, "GUIDE", 366, "Curve Guide", "Create a force along a curve object"	},
		{12, "DRAG", 367, "Drag", "Create a force that dampens motion"	},
		{13, "FLUID_FLOW", 368, "Fluid Flow", "Create a force based on fluid simulation velocities"	},
		{1, "FORCE", 369, "Force", "Radial field toward the center of object"	},
		{7, "HARMONIC", 370, "Harmonic", "The source of this force field is the zero point of a harmonic oscillator"	},
		{9, "LENNARDJ", 371, "Lennard-Jones", "Forcefield based on the Lennard-Jones potential"	},
		{3, "MAGNET", 372, "Magnetic", "Forcefield depends on the speed of the particles"	},
		{6, "TEXTURE", 373, "Texture", "Force field based on a texture"	},
		{11, "TURBULENCE", 374, "Turbulence", "Create turbulence with a noise field"	},
		{2, "VORTEX", 375, "Vortex", "Spiraling force that twists the force object\'s local Z axis"	},
		{4, "WIND", 376, "Wind", "Constant force along the force object\'s local Z axis"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FieldSettings_type_ = {
		{&rna_FieldSettings_shape, 	&rna_FieldSettings_rna_type,
		-1, "type", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"Type of field",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_type_get, FieldSettings_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FieldSettings_type_items, 14, 0
	};

	static const EnumPropertyItem rna_FieldSettings_shape_items[6] = {
		{0, "POINT", 0, "Point", "Field originates from the object center"	},
		{4, "LINE", 0, "Line", "Field originates from the local Z axis of the object"	},
		{1, "PLANE", 0, "Plane", "Field originates from the local XY plane of the object"	},
		{2, "SURFACE", 0, "Surface", "Field originates from the surface of the object"	},
		{3, "POINTS", 0, "Every Point", "Field originates from all of the vertices of the object"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FieldSettings_shape_ = {
		{&rna_FieldSettings_falloff_type, 	&rna_FieldSettings_type,
		-1, "shape", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shape",
		"Which direction is used to calculate the effector force",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_shape_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, shape), RawPropertyType(1), nullptr},
		FieldSettings_shape_get, FieldSettings_shape_set, rna_Effector_shape_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FieldSettings_shape_items, 5, 0
	};

	static const EnumPropertyItem rna_FieldSettings_falloff_type_items[4] = {
		{2, "CONE", 0, "Cone", ""	},
		{0, "SPHERE", 0, "Sphere", ""	},
		{1, "TUBE", 0, "Tube", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FieldSettings_falloff_type_ = {
		{&rna_FieldSettings_texture_mode, 	&rna_FieldSettings_shape,
		-1, "falloff_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Falloff",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, falloff), RawPropertyType(1), nullptr},
		FieldSettings_falloff_type_get, FieldSettings_falloff_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FieldSettings_falloff_type_items, 3, 0
	};

	static const EnumPropertyItem rna_FieldSettings_texture_mode_items[4] = {
		{2, "CURL", 0, "Curl", ""	},
		{1, "GRADIENT", 0, "Gradient", ""	},
		{0, "RGB", 0, "RGB", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FieldSettings_texture_mode_ = {
		{&rna_FieldSettings_z_direction, 	&rna_FieldSettings_falloff_type,
		-1, "texture_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Texture Mode",
		"How the texture effect is calculated (RGB and Curl need a RGB texture, else Gradient will be used instead)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, tex_mode), RawPropertyType(1), nullptr},
		FieldSettings_texture_mode_get, FieldSettings_texture_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FieldSettings_texture_mode_items, 3, 0
	};

	static const EnumPropertyItem rna_FieldSettings_z_direction_items[4] = {
		{1, "POSITIVE", 0, "+Z", ""	},
		{2, "NEGATIVE", 0, "-Z", ""	},
		{0, "BOTH", 0, "Both Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FieldSettings_z_direction_ = {
		{&rna_FieldSettings_strength, 	&rna_FieldSettings_texture_mode,
		-1, "z_direction", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Z Direction",
		"Effect in full or only positive/negative Z direction",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, zdir), RawPropertyType(1), nullptr},
		FieldSettings_z_direction_get, FieldSettings_z_direction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FieldSettings_z_direction_items, 3, 0
	};

	rna_FieldSettings_strength_ = {
		{&rna_FieldSettings_linear_drag, 	&rna_FieldSettings_z_direction,
		-1, "strength", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"Strength of force field",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_strength), RawPropertyType(5), nullptr},
		FieldSettings_strength_get, FieldSettings_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_linear_drag_ = {
		{&rna_FieldSettings_harmonic_damping, 	&rna_FieldSettings_strength,
		-1, "linear_drag", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Linear Drag",
		"Drag component proportional to velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_strength), RawPropertyType(5), nullptr},
		FieldSettings_linear_drag_get, FieldSettings_linear_drag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_harmonic_damping_ = {
		{&rna_FieldSettings_quadratic_drag, 	&rna_FieldSettings_linear_drag,
		-1, "harmonic_damping", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Harmonic Damping",
		"Damping of the harmonic force",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_damp), RawPropertyType(5), nullptr},
		FieldSettings_harmonic_damping_get, FieldSettings_harmonic_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_quadratic_drag_ = {
		{&rna_FieldSettings_flow, 	&rna_FieldSettings_harmonic_damping,
		-1, "quadratic_drag", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Quadratic Drag",
		"Drag component proportional to the square of velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_damp), RawPropertyType(5), nullptr},
		FieldSettings_quadratic_drag_get, FieldSettings_quadratic_drag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_flow_ = {
		{&rna_FieldSettings_wind_factor, 	&rna_FieldSettings_quadratic_drag,
		-1, "flow", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Flow",
		"Convert effector force into air flow velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_flow), RawPropertyType(5), nullptr},
		FieldSettings_flow_get, FieldSettings_flow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_wind_factor_ = {
		{&rna_FieldSettings_inflow, 	&rna_FieldSettings_flow,
		-1, "wind_factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Wind Factor",
		"How much the force is reduced when acting parallel to a surface, e.g. cloth",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_wind_factor), RawPropertyType(5), nullptr},
		FieldSettings_wind_factor_get, FieldSettings_wind_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_inflow_ = {
		{&rna_FieldSettings_size, 	&rna_FieldSettings_wind_factor,
		-1, "inflow", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Inflow",
		"Inwards component of the vortex force",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_flow), RawPropertyType(5), nullptr},
		FieldSettings_inflow_get, FieldSettings_inflow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_size_ = {
		{&rna_FieldSettings_rest_length, 	&rna_FieldSettings_inflow,
		-1, "size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Size of the turbulence",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_size), RawPropertyType(5), nullptr},
		FieldSettings_size_get, FieldSettings_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_rest_length_ = {
		{&rna_FieldSettings_falloff_power, 	&rna_FieldSettings_size,
		-1, "rest_length", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Rest Length",
		"Rest length of the harmonic force",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_size), RawPropertyType(5), nullptr},
		FieldSettings_rest_length_get, FieldSettings_rest_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_falloff_power_ = {
		{&rna_FieldSettings_distance_min, 	&rna_FieldSettings_rest_length,
		-1, "falloff_power", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Falloff Power",
		"How quickly strength falls off with distance from the force field",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_power), RawPropertyType(5), nullptr},
		FieldSettings_falloff_power_get, FieldSettings_falloff_power_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_distance_min_ = {
		{&rna_FieldSettings_distance_max, 	&rna_FieldSettings_falloff_power,
		-1, "distance_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Distance",
		"Minimum distance for the field\'s falloff",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, mindist), RawPropertyType(5), nullptr},
		FieldSettings_distance_min_get, FieldSettings_distance_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_distance_max_ = {
		{&rna_FieldSettings_radial_min, 	&rna_FieldSettings_distance_min,
		-1, "distance_max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Distance",
		"Maximum distance for the field to work",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, maxdist), RawPropertyType(5), nullptr},
		FieldSettings_distance_max_get, FieldSettings_distance_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_radial_min_ = {
		{&rna_FieldSettings_radial_max, 	&rna_FieldSettings_distance_max,
		-1, "radial_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Radial Distance",
		"Minimum radial distance for the field\'s falloff",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, minrad), RawPropertyType(5), nullptr},
		FieldSettings_radial_min_get, FieldSettings_radial_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_radial_max_ = {
		{&rna_FieldSettings_radial_falloff, 	&rna_FieldSettings_radial_min,
		-1, "radial_max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Radial Distance",
		"Maximum radial distance for the field to work",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, maxrad), RawPropertyType(5), nullptr},
		FieldSettings_radial_max_get, FieldSettings_radial_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_radial_falloff_ = {
		{&rna_FieldSettings_texture_nabla, 	&rna_FieldSettings_radial_max,
		-1, "radial_falloff", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Radial Falloff Power",
		"Radial falloff power (real gravitational falloff = 2)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_power_r), RawPropertyType(5), nullptr},
		FieldSettings_radial_falloff_get, FieldSettings_radial_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_texture_nabla_ = {
		{&rna_FieldSettings_noise, 	&rna_FieldSettings_radial_falloff,
		-1, "texture_nabla", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Nabla",
		"Defines size of derivative offset used for calculating gradient and curl",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, tex_nabla), RawPropertyType(5), nullptr},
		FieldSettings_texture_nabla_get, FieldSettings_texture_nabla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1.0f, 0.0001000000f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_noise_ = {
		{&rna_FieldSettings_seed, 	&rna_FieldSettings_texture_nabla,
		-1, "noise", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Noise",
		"Amount of noise for the force strength",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_noise), RawPropertyType(5), nullptr},
		FieldSettings_noise_get, FieldSettings_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_seed_ = {
		{&rna_FieldSettings_use_min_distance, 	&rna_FieldSettings_noise,
		-1, "seed", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Seed",
		"Seed of the noise",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, seed), RawPropertyType(0), nullptr},
		FieldSettings_seed_get, FieldSettings_seed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_min_distance_ = {
		{&rna_FieldSettings_use_max_distance, 	&rna_FieldSettings_seed,
		-1, "use_min_distance", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Min",
		"Use a minimum distance for the field\'s falloff",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_min_distance_get, FieldSettings_use_min_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_max_distance_ = {
		{&rna_FieldSettings_use_radial_min, 	&rna_FieldSettings_use_min_distance,
		-1, "use_max_distance", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Max",
		"Use a maximum distance for the field to work",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_max_distance_get, FieldSettings_use_max_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_radial_min_ = {
		{&rna_FieldSettings_use_radial_max, 	&rna_FieldSettings_use_max_distance,
		-1, "use_radial_min", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Min",
		"Use a minimum radial distance for the field\'s falloff",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_radial_min_get, FieldSettings_use_radial_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_radial_max_ = {
		{&rna_FieldSettings_use_object_coords, 	&rna_FieldSettings_use_radial_min,
		-1, "use_radial_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Max",
		"Use a maximum radial distance for the field to work",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_radial_max_get, FieldSettings_use_radial_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_object_coords_ = {
		{&rna_FieldSettings_use_global_coords, 	&rna_FieldSettings_use_radial_max,
		-1, "use_object_coords", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Coordinates",
		"Use object/global coordinates for texture",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_object_coords_get, FieldSettings_use_object_coords_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_global_coords_ = {
		{&rna_FieldSettings_use_2d_force, 	&rna_FieldSettings_use_object_coords,
		-1, "use_global_coords", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Global Coordinates",
		"Use effector/global coordinates for turbulence",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_global_coords_get, FieldSettings_use_global_coords_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_2d_force_ = {
		{&rna_FieldSettings_use_root_coords, 	&rna_FieldSettings_use_global_coords,
		-1, "use_2d_force", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "2D",
		"Apply force only in 2D",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_2d_force_get, FieldSettings_use_2d_force_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_root_coords_ = {
		{&rna_FieldSettings_apply_to_location, 	&rna_FieldSettings_use_2d_force,
		-1, "use_root_coords", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Root Texture Coordinates",
		"Texture coordinates from root particle locations",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_root_coords_get, FieldSettings_use_root_coords_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_apply_to_location_ = {
		{&rna_FieldSettings_apply_to_rotation, 	&rna_FieldSettings_use_root_coords,
		-1, "apply_to_location", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Location",
		"Affect particle\'s location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_apply_to_location_get, FieldSettings_apply_to_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_apply_to_rotation_ = {
		{&rna_FieldSettings_use_absorption, 	&rna_FieldSettings_apply_to_location,
		-1, "apply_to_rotation", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Rotation",
		"Affect particle\'s dynamic rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_apply_to_rotation_get, FieldSettings_apply_to_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_absorption_ = {
		{&rna_FieldSettings_use_multiple_springs, 	&rna_FieldSettings_apply_to_rotation,
		-1, "use_absorption", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Absorption",
		"Force gets absorbed by collision objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_absorption_get, FieldSettings_use_absorption_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_multiple_springs_ = {
		{&rna_FieldSettings_use_smoke_density, 	&rna_FieldSettings_use_absorption,
		-1, "use_multiple_springs", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Multiple Springs",
		"Every point is affected by multiple springs",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_multiple_springs_get, FieldSettings_use_multiple_springs_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_smoke_density_ = {
		{&rna_FieldSettings_use_gravity_falloff, 	&rna_FieldSettings_use_multiple_springs,
		-1, "use_smoke_density", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Apply Density",
		"Adjust force strength based on smoke density",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_smoke_density_get, FieldSettings_use_smoke_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_gravity_falloff_ = {
		{&rna_FieldSettings_texture, 	&rna_FieldSettings_use_smoke_density,
		-1, "use_gravity_falloff", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Gravity Falloff",
		"Multiply force by 1/distance²",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_gravity_falloff_get, FieldSettings_use_gravity_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_texture_ = {
		{&rna_FieldSettings_source_object, 	&rna_FieldSettings_use_gravity_falloff,
		-1, "texture", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Texture",
		"Texture to use as force",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_texture_get, FieldSettings_texture_set, nullptr, nullptr,RNA_Texture
	};

	rna_FieldSettings_source_object_ = {
		{&rna_FieldSettings_guide_minimum, 	&rna_FieldSettings_texture,
		-1, "source_object", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Domain Object",
		"Select domain object of the smoke simulation",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_source_object_get, FieldSettings_source_object_set, nullptr, nullptr,RNA_Object
	};

	rna_FieldSettings_guide_minimum_ = {
		{&rna_FieldSettings_guide_free, 	&rna_FieldSettings_source_object,
		-1, "guide_minimum", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Distance",
		"The distance from which particles are affected fully",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, f_strength), RawPropertyType(5), nullptr},
		FieldSettings_guide_minimum_get, FieldSettings_guide_minimum_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_guide_free_ = {
		{&rna_FieldSettings_use_guide_path_add, 	&rna_FieldSettings_guide_minimum,
		-1, "guide_free", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Free",
		"Guide-free time from particle life\'s end",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, free_end), RawPropertyType(5), nullptr},
		FieldSettings_guide_free_get, FieldSettings_guide_free_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_use_guide_path_add_ = {
		{&rna_FieldSettings_use_guide_path_weight, 	&rna_FieldSettings_guide_free,
		-1, "use_guide_path_add", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Additive",
		"Based on distance/falloff it adds a portion of the entire path",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_guide_path_add_get, FieldSettings_use_guide_path_add_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_use_guide_path_weight_ = {
		{&rna_FieldSettings_guide_clump_amount, 	&rna_FieldSettings_use_guide_path_add,
		-1, "use_guide_path_weight", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Weights",
		"Use curve weights to influence the particle influence along the curve",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FieldSettings_use_guide_path_weight_get, FieldSettings_use_guide_path_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FieldSettings_guide_clump_amount_ = {
		{&rna_FieldSettings_guide_clump_shape, 	&rna_FieldSettings_use_guide_path_weight,
		-1, "guide_clump_amount", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Amount",
		"Amount of clumping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, clump_fac), RawPropertyType(5), nullptr},
		FieldSettings_guide_clump_amount_get, FieldSettings_guide_clump_amount_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_guide_clump_shape_ = {
		{&rna_FieldSettings_guide_kink_type, 	&rna_FieldSettings_guide_clump_amount,
		-1, "guide_clump_shape", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shape",
		"Shape of clumping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, clump_pow), RawPropertyType(5), nullptr},
		FieldSettings_guide_clump_shape_get, FieldSettings_guide_clump_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_FieldSettings_guide_kink_type_items[8] = {
		{0, "NONE", 0, "None", ""	},
		{4, "BRAID", 0, "Braid", ""	},
		{1, "CURL", 0, "Curl", ""	},
		{2, "RADIAL", 0, "Radial", ""	},
		{6, "ROLL", 0, "Roll", ""	},
		{5, "ROTATION", 0, "Rotation", ""	},
		{3, "WAVE", 0, "Wave", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FieldSettings_guide_kink_type_ = {
		{&rna_FieldSettings_guide_kink_axis, 	&rna_FieldSettings_guide_clump_shape,
		-1, "guide_kink_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Kink",
		"Type of periodic offset on the curve",
		0, "ParticleSettings",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, kink), RawPropertyType(1), nullptr},
		FieldSettings_guide_kink_type_get, FieldSettings_guide_kink_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FieldSettings_guide_kink_type_items, 7, 0
	};

	rna_FieldSettings_guide_kink_axis_ = {
		{&rna_FieldSettings_guide_kink_frequency, 	&rna_FieldSettings_guide_kink_type,
		-1, "guide_kink_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Axis",
		"Which axis to use for offset",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, kink_axis), RawPropertyType(1), nullptr},
		FieldSettings_guide_kink_axis_get, FieldSettings_guide_kink_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_axis_xyz_items, 3, 0
	};

	rna_FieldSettings_guide_kink_frequency_ = {
		{&rna_FieldSettings_guide_kink_shape, 	&rna_FieldSettings_guide_kink_axis,
		-1, "guide_kink_frequency", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Frequency",
		"The frequency of the offset (1/total length)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, kink_freq), RawPropertyType(5), nullptr},
		FieldSettings_guide_kink_frequency_get, FieldSettings_guide_kink_frequency_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_guide_kink_shape_ = {
		{&rna_FieldSettings_guide_kink_amplitude, 	&rna_FieldSettings_guide_kink_frequency,
		-1, "guide_kink_shape", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shape",
		"Adjust the offset to the beginning/end",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, kink_shape), RawPropertyType(5), nullptr},
		FieldSettings_guide_kink_shape_get, FieldSettings_guide_kink_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FieldSettings_guide_kink_amplitude_ = {
		{nullptr, 	&rna_FieldSettings_guide_kink_shape,
		-1, "guide_kink_amplitude", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Amplitude",
		"The amplitude of the offset",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FieldSettings_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PartDeflect, kink_amp), RawPropertyType(5), nullptr},
		FieldSettings_guide_kink_amplitude_get, FieldSettings_guide_kink_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_FieldSettings;
	srna->cont.properties = {&rna_FieldSettings_rna_properties, &rna_FieldSettings_guide_kink_amplitude};
	srna->identifier = "FieldSettings";
	srna->flag = 516;
	srna->name = "Field Settings";
	srna->description = "Field settings for an object in physics simulation";
	srna->translation_context = "*";
	srna->icon = 120;
	srna->iteratorproperty = &rna_FieldSettings_rna_properties;
	srna->path = rna_FieldSettings_path;
};

/* Soft Body Settings */
static CollectionPropertyRNA rna_SoftBodySettings_rna_properties_;
PropertyRNA &rna_SoftBodySettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_rna_properties_);

static PointerPropertyRNA rna_SoftBodySettings_rna_type_;
PropertyRNA &rna_SoftBodySettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_rna_type_);

static FloatPropertyRNA rna_SoftBodySettings_friction_;
PropertyRNA &rna_SoftBodySettings_friction = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_friction_);

static FloatPropertyRNA rna_SoftBodySettings_mass_;
PropertyRNA &rna_SoftBodySettings_mass = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_mass_);

static StringPropertyRNA rna_SoftBodySettings_vertex_group_mass_;
PropertyRNA &rna_SoftBodySettings_vertex_group_mass = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_vertex_group_mass_);

static FloatPropertyRNA rna_SoftBodySettings_gravity_;
PropertyRNA &rna_SoftBodySettings_gravity = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_gravity_);

static FloatPropertyRNA rna_SoftBodySettings_speed_;
PropertyRNA &rna_SoftBodySettings_speed = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_speed_);

static StringPropertyRNA rna_SoftBodySettings_vertex_group_goal_;
PropertyRNA &rna_SoftBodySettings_vertex_group_goal = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_vertex_group_goal_);

static FloatPropertyRNA rna_SoftBodySettings_goal_min_;
PropertyRNA &rna_SoftBodySettings_goal_min = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_goal_min_);

static FloatPropertyRNA rna_SoftBodySettings_goal_max_;
PropertyRNA &rna_SoftBodySettings_goal_max = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_goal_max_);

static FloatPropertyRNA rna_SoftBodySettings_goal_default_;
PropertyRNA &rna_SoftBodySettings_goal_default = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_goal_default_);

static FloatPropertyRNA rna_SoftBodySettings_goal_spring_;
PropertyRNA &rna_SoftBodySettings_goal_spring = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_goal_spring_);

static FloatPropertyRNA rna_SoftBodySettings_goal_friction_;
PropertyRNA &rna_SoftBodySettings_goal_friction = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_goal_friction_);

static FloatPropertyRNA rna_SoftBodySettings_pull_;
PropertyRNA &rna_SoftBodySettings_pull = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_pull_);

static FloatPropertyRNA rna_SoftBodySettings_push_;
PropertyRNA &rna_SoftBodySettings_push = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_push_);

static FloatPropertyRNA rna_SoftBodySettings_damping_;
PropertyRNA &rna_SoftBodySettings_damping = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_damping_);

static IntPropertyRNA rna_SoftBodySettings_spring_length_;
PropertyRNA &rna_SoftBodySettings_spring_length = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_spring_length_);

static IntPropertyRNA rna_SoftBodySettings_aero_;
PropertyRNA &rna_SoftBodySettings_aero = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_aero_);

static IntPropertyRNA rna_SoftBodySettings_plastic_;
PropertyRNA &rna_SoftBodySettings_plastic = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_plastic_);

static FloatPropertyRNA rna_SoftBodySettings_bend_;
PropertyRNA &rna_SoftBodySettings_bend = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_bend_);

static FloatPropertyRNA rna_SoftBodySettings_shear_;
PropertyRNA &rna_SoftBodySettings_shear = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_shear_);

static StringPropertyRNA rna_SoftBodySettings_vertex_group_spring_;
PropertyRNA &rna_SoftBodySettings_vertex_group_spring = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_vertex_group_spring_);

static EnumPropertyRNA rna_SoftBodySettings_collision_type_;
PropertyRNA &rna_SoftBodySettings_collision_type = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_collision_type_);

static FloatPropertyRNA rna_SoftBodySettings_ball_size_;
PropertyRNA &rna_SoftBodySettings_ball_size = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_ball_size_);

static FloatPropertyRNA rna_SoftBodySettings_ball_stiff_;
PropertyRNA &rna_SoftBodySettings_ball_stiff = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_ball_stiff_);

static FloatPropertyRNA rna_SoftBodySettings_ball_damp_;
PropertyRNA &rna_SoftBodySettings_ball_damp = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_ball_damp_);

static FloatPropertyRNA rna_SoftBodySettings_error_threshold_;
PropertyRNA &rna_SoftBodySettings_error_threshold = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_error_threshold_);

static IntPropertyRNA rna_SoftBodySettings_step_min_;
PropertyRNA &rna_SoftBodySettings_step_min = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_step_min_);

static IntPropertyRNA rna_SoftBodySettings_step_max_;
PropertyRNA &rna_SoftBodySettings_step_max = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_step_max_);

static IntPropertyRNA rna_SoftBodySettings_choke_;
PropertyRNA &rna_SoftBodySettings_choke = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_choke_);

static IntPropertyRNA rna_SoftBodySettings_fuzzy_;
PropertyRNA &rna_SoftBodySettings_fuzzy = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_fuzzy_);

static BoolPropertyRNA rna_SoftBodySettings_use_auto_step_;
PropertyRNA &rna_SoftBodySettings_use_auto_step = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_use_auto_step_);

static BoolPropertyRNA rna_SoftBodySettings_use_diagnose_;
PropertyRNA &rna_SoftBodySettings_use_diagnose = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_use_diagnose_);

static BoolPropertyRNA rna_SoftBodySettings_use_estimate_matrix_;
PropertyRNA &rna_SoftBodySettings_use_estimate_matrix = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_use_estimate_matrix_);

static FloatPropertyRNA rna_SoftBodySettings_location_mass_center_;
PropertyRNA &rna_SoftBodySettings_location_mass_center = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_location_mass_center_);

static FloatPropertyRNA rna_SoftBodySettings_rotation_estimate_;
PropertyRNA &rna_SoftBodySettings_rotation_estimate = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_rotation_estimate_);

static FloatPropertyRNA rna_SoftBodySettings_scale_estimate_;
PropertyRNA &rna_SoftBodySettings_scale_estimate = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_scale_estimate_);

static BoolPropertyRNA rna_SoftBodySettings_use_goal_;
PropertyRNA &rna_SoftBodySettings_use_goal = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_use_goal_);

static BoolPropertyRNA rna_SoftBodySettings_use_edges_;
PropertyRNA &rna_SoftBodySettings_use_edges = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_use_edges_);

static BoolPropertyRNA rna_SoftBodySettings_use_stiff_quads_;
PropertyRNA &rna_SoftBodySettings_use_stiff_quads = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_use_stiff_quads_);

static BoolPropertyRNA rna_SoftBodySettings_use_edge_collision_;
PropertyRNA &rna_SoftBodySettings_use_edge_collision = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_use_edge_collision_);

static BoolPropertyRNA rna_SoftBodySettings_use_face_collision_;
PropertyRNA &rna_SoftBodySettings_use_face_collision = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_use_face_collision_);

static EnumPropertyRNA rna_SoftBodySettings_aerodynamics_type_;
PropertyRNA &rna_SoftBodySettings_aerodynamics_type = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_aerodynamics_type_);

static BoolPropertyRNA rna_SoftBodySettings_use_self_collision_;
PropertyRNA &rna_SoftBodySettings_use_self_collision = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_use_self_collision_);

static PointerPropertyRNA rna_SoftBodySettings_collision_collection_;
PropertyRNA &rna_SoftBodySettings_collision_collection = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_collision_collection_);

static PointerPropertyRNA rna_SoftBodySettings_effector_weights_;
PropertyRNA &rna_SoftBodySettings_effector_weights = reinterpret_cast<PropertyRNA &>(rna_SoftBodySettings_effector_weights_);

StructRNA *RNA_SoftBodySettings;
void register_struct_SoftBodySettings(BlenderRNA &brna)
{
	rna_SoftBodySettings_rna_properties_ = {
		{&rna_SoftBodySettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_rna_properties_begin, SoftBodySettings_rna_properties_next, SoftBodySettings_rna_properties_end, SoftBodySettings_rna_properties_get, nullptr, nullptr, SoftBodySettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_SoftBodySettings_rna_type_ = {
		{&rna_SoftBodySettings_friction, 	&rna_SoftBodySettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_SoftBodySettings_friction_ = {
		{&rna_SoftBodySettings_mass, 	&rna_SoftBodySettings_rna_type,
		-1, "friction", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Friction",
		"General media friction for point movements",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, mediafrict), RawPropertyType(5), nullptr},
		SoftBodySettings_friction_get, SoftBodySettings_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_mass_ = {
		{&rna_SoftBodySettings_vertex_group_mass, 	&rna_SoftBodySettings_friction,
		-1, "mass", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mass",
		"General Mass value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MASS) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, nodemass), RawPropertyType(5), nullptr},
		SoftBodySettings_mass_get, SoftBodySettings_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50000.0f, 0.0f, 50000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_vertex_group_mass_ = {
		{&rna_SoftBodySettings_gravity, 	&rna_SoftBodySettings_mass,
		-1, "vertex_group_mass", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mass Vertex Group",
		"Control point mass values",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_vertex_group_mass_get, SoftBodySettings_vertex_group_mass_length, SoftBodySettings_vertex_group_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_SoftBodySettings_gravity_ = {
		{&rna_SoftBodySettings_speed, 	&rna_SoftBodySettings_vertex_group_mass,
		-1, "gravity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gravitation",
		"Apply gravitation to point movement",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ACCELERATION) | int(PROP_UNIT_ACCELERATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, grav), RawPropertyType(5), nullptr},
		SoftBodySettings_gravity_get, SoftBodySettings_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_speed_ = {
		{&rna_SoftBodySettings_vertex_group_goal, 	&rna_SoftBodySettings_gravity,
		-1, "speed", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Speed",
		"Tweak timing for physics to control frequency and speed",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, physics_speed), RawPropertyType(5), nullptr},
		SoftBodySettings_speed_get, SoftBodySettings_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_vertex_group_goal_ = {
		{&rna_SoftBodySettings_goal_min, 	&rna_SoftBodySettings_speed,
		-1, "vertex_group_goal", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Goal Vertex Group",
		"Control point weight values",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_vertex_group_goal_get, SoftBodySettings_vertex_group_goal_length, SoftBodySettings_vertex_group_goal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_SoftBodySettings_goal_min_ = {
		{&rna_SoftBodySettings_goal_max, 	&rna_SoftBodySettings_vertex_group_goal,
		-1, "goal_min", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Goal Minimum",
		"Goal minimum, vertex weights are scaled to match this range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, mingoal), RawPropertyType(5), nullptr},
		SoftBodySettings_goal_min_get, SoftBodySettings_goal_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_goal_max_ = {
		{&rna_SoftBodySettings_goal_default, 	&rna_SoftBodySettings_goal_min,
		-1, "goal_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Goal Maximum",
		"Goal maximum, vertex weights are scaled to match this range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, maxgoal), RawPropertyType(5), nullptr},
		SoftBodySettings_goal_max_get, SoftBodySettings_goal_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_goal_default_ = {
		{&rna_SoftBodySettings_goal_spring, 	&rna_SoftBodySettings_goal_max,
		-1, "goal_default", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Goal Default",
		"Default Goal (vertex target position) value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, defgoal), RawPropertyType(5), nullptr},
		SoftBodySettings_goal_default_get, SoftBodySettings_goal_default_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_goal_spring_ = {
		{&rna_SoftBodySettings_goal_friction, 	&rna_SoftBodySettings_goal_default,
		-1, "goal_spring", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Goal Stiffness",
		"Goal (vertex target position) spring stiffness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, goalspring), RawPropertyType(5), nullptr},
		SoftBodySettings_goal_spring_get, SoftBodySettings_goal_spring_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_goal_friction_ = {
		{&rna_SoftBodySettings_pull, 	&rna_SoftBodySettings_goal_spring,
		-1, "goal_friction", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Goal Damping",
		"Goal (vertex target position) friction",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, goalfrict), RawPropertyType(5), nullptr},
		SoftBodySettings_goal_friction_get, SoftBodySettings_goal_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_pull_ = {
		{&rna_SoftBodySettings_push, 	&rna_SoftBodySettings_goal_friction,
		-1, "pull", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pull",
		"Edge spring stiffness when longer than rest length",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, inspring), RawPropertyType(5), nullptr},
		SoftBodySettings_pull_get, SoftBodySettings_pull_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_push_ = {
		{&rna_SoftBodySettings_damping, 	&rna_SoftBodySettings_pull,
		-1, "push", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Push",
		"Edge spring stiffness when shorter than rest length",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, inpush), RawPropertyType(5), nullptr},
		SoftBodySettings_push_get, SoftBodySettings_push_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_damping_ = {
		{&rna_SoftBodySettings_spring_length, 	&rna_SoftBodySettings_push,
		-1, "damping", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Damp",
		"Edge spring friction",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, infrict), RawPropertyType(5), nullptr},
		SoftBodySettings_damping_get, SoftBodySettings_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_spring_length_ = {
		{&rna_SoftBodySettings_aero, 	&rna_SoftBodySettings_damping,
		-1, "spring_length", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Spring Length",
		"Alter spring length to shrink/blow up (unit %) 0 to disable",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, springpreload), RawPropertyType(1), nullptr},
		SoftBodySettings_spring_length_get, SoftBodySettings_spring_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 200, 0, 200, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_aero_ = {
		{&rna_SoftBodySettings_plastic, 	&rna_SoftBodySettings_spring_length,
		-1, "aero", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Aero",
		"Make edges \'sail\'",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, aeroedge), RawPropertyType(1), nullptr},
		SoftBodySettings_aero_get, SoftBodySettings_aero_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 30000, 0, 30000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_plastic_ = {
		{&rna_SoftBodySettings_bend, 	&rna_SoftBodySettings_aero,
		-1, "plastic", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Plasticity",
		"Permanent deform",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, plastic), RawPropertyType(1), nullptr},
		SoftBodySettings_plastic_get, SoftBodySettings_plastic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_bend_ = {
		{&rna_SoftBodySettings_shear, 	&rna_SoftBodySettings_plastic,
		-1, "bend", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bending",
		"Bending Stiffness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, secondspring), RawPropertyType(5), nullptr},
		SoftBodySettings_bend_get, SoftBodySettings_bend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_shear_ = {
		{&rna_SoftBodySettings_vertex_group_spring, 	&rna_SoftBodySettings_bend,
		-1, "shear", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shear",
		"Shear Stiffness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, shearstiff), RawPropertyType(5), nullptr},
		SoftBodySettings_shear_get, SoftBodySettings_shear_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_vertex_group_spring_ = {
		{&rna_SoftBodySettings_collision_type, 	&rna_SoftBodySettings_shear,
		-1, "vertex_group_spring", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Spring Vertex Group",
		"Control point spring strength values",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_vertex_group_spring_get, SoftBodySettings_vertex_group_spring_length, SoftBodySettings_vertex_group_spring_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_SoftBodySettings_collision_type_items[6] = {
		{0, "MANUAL", 0, "Manual", "Manual adjust"	},
		{1, "AVERAGE", 0, "Average", "Average Spring length * Ball Size"	},
		{2, "MINIMAL", 0, "Minimal", "Minimal Spring length * Ball Size"	},
		{3, "MAXIMAL", 0, "Maximal", "Maximal Spring length * Ball Size"	},
		{4, "MINMAX", 0, "AvMinMax", "(Min+Max)/2 * Ball Size"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_SoftBodySettings_collision_type_ = {
		{&rna_SoftBodySettings_ball_size, 	&rna_SoftBodySettings_vertex_group_spring,
		-1, "collision_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Collision Type",
		"Choose Collision Type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, sbc_mode), RawPropertyType(1), nullptr},
		SoftBodySettings_collision_type_get, SoftBodySettings_collision_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_SoftBodySettings_collision_type_items, 5, 0
	};

	rna_SoftBodySettings_ball_size_ = {
		{&rna_SoftBodySettings_ball_stiff, 	&rna_SoftBodySettings_collision_type,
		-1, "ball_size", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Ball Size",
		"Absolute ball size or factor if not manually adjusted",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, colball), RawPropertyType(5), nullptr},
		SoftBodySettings_ball_size_get, SoftBodySettings_ball_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_ball_stiff_ = {
		{&rna_SoftBodySettings_ball_damp, 	&rna_SoftBodySettings_ball_size,
		-1, "ball_stiff", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stiffness",
		"Ball inflating pressure",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, ballstiff), RawPropertyType(5), nullptr},
		SoftBodySettings_ball_stiff_get, SoftBodySettings_ball_stiff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 100.0f, 0.0010000000f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_ball_damp_ = {
		{&rna_SoftBodySettings_error_threshold, 	&rna_SoftBodySettings_ball_stiff,
		-1, "ball_damp", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dampening",
		"Blending to inelastic collision",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, balldamp), RawPropertyType(5), nullptr},
		SoftBodySettings_ball_damp_get, SoftBodySettings_ball_damp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_error_threshold_ = {
		{&rna_SoftBodySettings_step_min, 	&rna_SoftBodySettings_ball_damp,
		-1, "error_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Error Limit",
		"The Runge-Kutta ODE solver error limit, low value gives more precision, high values speed",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, rklimit), RawPropertyType(5), nullptr},
		SoftBodySettings_error_threshold_get, SoftBodySettings_error_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 10.0f, 0.0010000000f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoftBodySettings_step_min_ = {
		{&rna_SoftBodySettings_step_max, 	&rna_SoftBodySettings_error_threshold,
		-1, "step_min", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Min Step",
		"Minimal # solver steps/frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, minloops), RawPropertyType(1), nullptr},
		SoftBodySettings_step_min_get, SoftBodySettings_step_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 30000, 0, 30000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_step_max_ = {
		{&rna_SoftBodySettings_choke, 	&rna_SoftBodySettings_step_min,
		-1, "step_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Step",
		"Maximal # solver steps/frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, maxloops), RawPropertyType(1), nullptr},
		SoftBodySettings_step_max_get, SoftBodySettings_step_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 30000, 0, 30000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_choke_ = {
		{&rna_SoftBodySettings_fuzzy, 	&rna_SoftBodySettings_step_max,
		-1, "choke", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Choke",
		"\'Viscosity\' inside collision target",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, choke), RawPropertyType(1), nullptr},
		SoftBodySettings_choke_get, SoftBodySettings_choke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_fuzzy_ = {
		{&rna_SoftBodySettings_use_auto_step, 	&rna_SoftBodySettings_choke,
		-1, "fuzzy", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fuzzy",
		"Fuzziness while on collision, high values make collision handling faster but less stable",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, fuzzyness), RawPropertyType(1), nullptr},
		SoftBodySettings_fuzzy_get, SoftBodySettings_fuzzy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, 100, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_use_auto_step_ = {
		{&rna_SoftBodySettings_use_diagnose, 	&rna_SoftBodySettings_fuzzy,
		-1, "use_auto_step", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "V",
		"Use velocities for automagic step sizes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_use_auto_step_get, SoftBodySettings_use_auto_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_use_diagnose_ = {
		{&rna_SoftBodySettings_use_estimate_matrix, 	&rna_SoftBodySettings_use_auto_step,
		-1, "use_diagnose", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Print Performance to Console",
		"Turn on SB diagnose console prints",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_use_diagnose_get, SoftBodySettings_use_diagnose_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_use_estimate_matrix_ = {
		{&rna_SoftBodySettings_location_mass_center, 	&rna_SoftBodySettings_use_diagnose,
		-1, "use_estimate_matrix", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Estimate Transforms",
		"Store the estimated transforms in the soft body settings",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_use_estimate_matrix_get, SoftBodySettings_use_estimate_matrix_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_SoftBodySettings_location_mass_center_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_SoftBodySettings_location_mass_center_ = {
		{&rna_SoftBodySettings_rotation_estimate, 	&rna_SoftBodySettings_use_estimate_matrix,
		-1, "location_mass_center", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Center of Mass",
		"Location of center of mass",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, lcom), RawPropertyType(5), nullptr},
		nullptr, nullptr, SoftBodySettings_location_mass_center_get, SoftBodySettings_location_mass_center_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_SoftBodySettings_location_mass_center_default
	};

	static float rna_SoftBodySettings_rotation_estimate_default[9] = {
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
	rna_SoftBodySettings_rotation_estimate_ = {
		{&rna_SoftBodySettings_scale_estimate, 	&rna_SoftBodySettings_location_mass_center,
		-1, "rotation_estimate", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation Matrix",
		"Estimated rotation matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {3, 3, 0}, 9,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, lrot), RawPropertyType(5), nullptr},
		nullptr, nullptr, SoftBodySettings_rotation_estimate_get, SoftBodySettings_rotation_estimate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_SoftBodySettings_rotation_estimate_default
	};

	static float rna_SoftBodySettings_scale_estimate_default[9] = {
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
	rna_SoftBodySettings_scale_estimate_ = {
		{&rna_SoftBodySettings_use_goal, 	&rna_SoftBodySettings_rotation_estimate,
		-1, "scale_estimate", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale Matrix",
		"Estimated scale matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {3, 3, 0}, 9,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SoftBody, lscale), RawPropertyType(5), nullptr},
		nullptr, nullptr, SoftBodySettings_scale_estimate_get, SoftBodySettings_scale_estimate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_SoftBodySettings_scale_estimate_default
	};

	rna_SoftBodySettings_use_goal_ = {
		{&rna_SoftBodySettings_use_edges, 	&rna_SoftBodySettings_scale_estimate,
		-1, "use_goal", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Goal",
		"Define forces for vertices to stick to animated position",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_use_goal_get, SoftBodySettings_use_goal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_use_edges_ = {
		{&rna_SoftBodySettings_use_stiff_quads, 	&rna_SoftBodySettings_use_goal,
		-1, "use_edges", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Edges",
		"Use Edges as springs",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_use_edges_get, SoftBodySettings_use_edges_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_use_stiff_quads_ = {
		{&rna_SoftBodySettings_use_edge_collision, 	&rna_SoftBodySettings_use_edges,
		-1, "use_stiff_quads", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stiff Quads",
		"Add diagonal springs on 4-gons",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_use_stiff_quads_get, SoftBodySettings_use_stiff_quads_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_use_edge_collision_ = {
		{&rna_SoftBodySettings_use_face_collision, 	&rna_SoftBodySettings_use_stiff_quads,
		-1, "use_edge_collision", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Edge Collision",
		"Edges collide too",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_use_edge_collision_get, SoftBodySettings_use_edge_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_use_face_collision_ = {
		{&rna_SoftBodySettings_aerodynamics_type, 	&rna_SoftBodySettings_use_edge_collision,
		-1, "use_face_collision", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Face Collision",
		"Faces collide too, can be very slow",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_use_face_collision_get, SoftBodySettings_use_face_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_SoftBodySettings_aerodynamics_type_items[3] = {
		{0, "SIMPLE", 0, "Simple", "Edges receive a drag force from surrounding media"	},
		{1, "LIFT_FORCE", 0, "Lift Force", "Edges receive a lift force when passing through surrounding media"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_SoftBodySettings_aerodynamics_type_ = {
		{&rna_SoftBodySettings_use_self_collision, 	&rna_SoftBodySettings_use_face_collision,
		-1, "aerodynamics_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Aerodynamics Type",
		"Method of calculating aerodynamic interaction",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_aerodynamics_type_get, SoftBodySettings_aerodynamics_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_SoftBodySettings_aerodynamics_type_items, 2, 0
	};

	rna_SoftBodySettings_use_self_collision_ = {
		{&rna_SoftBodySettings_collision_collection, 	&rna_SoftBodySettings_aerodynamics_type,
		-1, "use_self_collision", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Self Collision",
		"Enable naive vertex ball self collision",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_use_self_collision_get, SoftBodySettings_use_self_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SoftBodySettings_collision_collection_ = {
		{&rna_SoftBodySettings_effector_weights, 	&rna_SoftBodySettings_use_self_collision,
		-1, "collision_collection", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collision Collection",
		"Limit colliders to this collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_softbody_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_collision_collection_get, SoftBodySettings_collision_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_SoftBodySettings_effector_weights_ = {
		{nullptr, 	&rna_SoftBodySettings_collision_collection,
		-1, "effector_weights", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Effector Weights",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoftBodySettings_effector_weights_get, nullptr, nullptr, nullptr,RNA_EffectorWeights
	};

	StructRNA *srna = RNA_SoftBodySettings;
	srna->cont.properties = {&rna_SoftBodySettings_rna_properties, &rna_SoftBodySettings_effector_weights};
	srna->identifier = "SoftBodySettings";
	srna->flag = 516;
	srna->name = "Soft Body Settings";
	srna->description = "Soft body simulation settings for an object";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_SoftBodySettings_rna_properties;
	srna->path = rna_SoftBodySettings_path;
};


}  // namespace blender
