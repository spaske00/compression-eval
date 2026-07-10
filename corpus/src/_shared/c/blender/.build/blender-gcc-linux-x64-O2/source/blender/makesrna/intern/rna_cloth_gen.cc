
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

#include "rna_cloth.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_ClothSolverResult_rna_properties;
extern PropertyRNA &rna_ClothSolverResult_rna_type;
extern PropertyRNA &rna_ClothSolverResult_status;
extern PropertyRNA &rna_ClothSolverResult_max_error;
extern PropertyRNA &rna_ClothSolverResult_min_error;
extern PropertyRNA &rna_ClothSolverResult_avg_error;
extern PropertyRNA &rna_ClothSolverResult_max_iterations;
extern PropertyRNA &rna_ClothSolverResult_min_iterations;
extern PropertyRNA &rna_ClothSolverResult_avg_iterations;


extern PropertyRNA &rna_ClothSettings_rna_properties;
extern PropertyRNA &rna_ClothSettings_rna_type;
extern PropertyRNA &rna_ClothSettings_goal_min;
extern PropertyRNA &rna_ClothSettings_goal_max;
extern PropertyRNA &rna_ClothSettings_goal_default;
extern PropertyRNA &rna_ClothSettings_goal_spring;
extern PropertyRNA &rna_ClothSettings_goal_friction;
extern PropertyRNA &rna_ClothSettings_internal_friction;
extern PropertyRNA &rna_ClothSettings_collider_friction;
extern PropertyRNA &rna_ClothSettings_density_target;
extern PropertyRNA &rna_ClothSettings_density_strength;
extern PropertyRNA &rna_ClothSettings_mass;
extern PropertyRNA &rna_ClothSettings_vertex_group_mass;
extern PropertyRNA &rna_ClothSettings_gravity;
extern PropertyRNA &rna_ClothSettings_air_damping;
extern PropertyRNA &rna_ClothSettings_pin_stiffness;
extern PropertyRNA &rna_ClothSettings_quality;
extern PropertyRNA &rna_ClothSettings_time_scale;
extern PropertyRNA &rna_ClothSettings_vertex_group_shrink;
extern PropertyRNA &rna_ClothSettings_shrink_min;
extern PropertyRNA &rna_ClothSettings_shrink_max;
extern PropertyRNA &rna_ClothSettings_voxel_cell_size;
extern PropertyRNA &rna_ClothSettings_tension_damping;
extern PropertyRNA &rna_ClothSettings_compression_damping;
extern PropertyRNA &rna_ClothSettings_shear_damping;
extern PropertyRNA &rna_ClothSettings_tension_stiffness;
extern PropertyRNA &rna_ClothSettings_tension_stiffness_max;
extern PropertyRNA &rna_ClothSettings_compression_stiffness;
extern PropertyRNA &rna_ClothSettings_compression_stiffness_max;
extern PropertyRNA &rna_ClothSettings_shear_stiffness;
extern PropertyRNA &rna_ClothSettings_shear_stiffness_max;
extern PropertyRNA &rna_ClothSettings_sewing_force_max;
extern PropertyRNA &rna_ClothSettings_vertex_group_structural_stiffness;
extern PropertyRNA &rna_ClothSettings_vertex_group_shear_stiffness;
extern PropertyRNA &rna_ClothSettings_bending_stiffness;
extern PropertyRNA &rna_ClothSettings_bending_stiffness_max;
extern PropertyRNA &rna_ClothSettings_bending_damping;
extern PropertyRNA &rna_ClothSettings_use_sewing_springs;
extern PropertyRNA &rna_ClothSettings_vertex_group_bending;
extern PropertyRNA &rna_ClothSettings_effector_weights;
extern PropertyRNA &rna_ClothSettings_rest_shape_key;
extern PropertyRNA &rna_ClothSettings_use_dynamic_mesh;
extern PropertyRNA &rna_ClothSettings_bending_model;
extern PropertyRNA &rna_ClothSettings_use_internal_springs;
extern PropertyRNA &rna_ClothSettings_internal_spring_normal_check;
extern PropertyRNA &rna_ClothSettings_internal_spring_max_length;
extern PropertyRNA &rna_ClothSettings_internal_spring_max_diversion;
extern PropertyRNA &rna_ClothSettings_internal_tension_stiffness;
extern PropertyRNA &rna_ClothSettings_internal_tension_stiffness_max;
extern PropertyRNA &rna_ClothSettings_internal_compression_stiffness;
extern PropertyRNA &rna_ClothSettings_internal_compression_stiffness_max;
extern PropertyRNA &rna_ClothSettings_vertex_group_intern;
extern PropertyRNA &rna_ClothSettings_use_pressure;
extern PropertyRNA &rna_ClothSettings_use_pressure_volume;
extern PropertyRNA &rna_ClothSettings_uniform_pressure_force;
extern PropertyRNA &rna_ClothSettings_target_volume;
extern PropertyRNA &rna_ClothSettings_pressure_factor;
extern PropertyRNA &rna_ClothSettings_fluid_density;
extern PropertyRNA &rna_ClothSettings_vertex_group_pressure;


extern PropertyRNA &rna_ClothCollisionSettings_rna_properties;
extern PropertyRNA &rna_ClothCollisionSettings_rna_type;
extern PropertyRNA &rna_ClothCollisionSettings_use_collision;
extern PropertyRNA &rna_ClothCollisionSettings_distance_min;
extern PropertyRNA &rna_ClothCollisionSettings_friction;
extern PropertyRNA &rna_ClothCollisionSettings_damping;
extern PropertyRNA &rna_ClothCollisionSettings_collision_quality;
extern PropertyRNA &rna_ClothCollisionSettings_impulse_clamp;
extern PropertyRNA &rna_ClothCollisionSettings_use_self_collision;
extern PropertyRNA &rna_ClothCollisionSettings_self_distance_min;
extern PropertyRNA &rna_ClothCollisionSettings_self_friction;
extern PropertyRNA &rna_ClothCollisionSettings_collection;
extern PropertyRNA &rna_ClothCollisionSettings_vertex_group_self_collisions;
extern PropertyRNA &rna_ClothCollisionSettings_vertex_group_object_collisions;
extern PropertyRNA &rna_ClothCollisionSettings_self_impulse_clamp;

static PointerRNA ClothSolverResult_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ClothSolverResult_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ClothSolverResult_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ClothSolverResult_rna_properties_get(iter);
    }
}

void ClothSolverResult_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ClothSolverResult_rna_properties_get(iter);
    }
}

void ClothSolverResult_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ClothSolverResult_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ClothSolverResult_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ClothSolverResult_status_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (int)(data->status);
}

float ClothSolverResult_max_error_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (float)(data->max_error);
}

float ClothSolverResult_min_error_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (float)(data->min_error);
}

float ClothSolverResult_avg_error_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (float)(data->avg_error);
}

int ClothSolverResult_max_iterations_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (int)(data->max_iterations);
}

int ClothSolverResult_min_iterations_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (int)(data->min_iterations);
}

float ClothSolverResult_avg_iterations_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (float)(data->avg_iterations);
}

static PointerRNA ClothSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ClothSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ClothSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ClothSettings_rna_properties_get(iter);
    }
}

void ClothSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ClothSettings_rna_properties_get(iter);
    }
}

void ClothSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ClothSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ClothSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float ClothSettings_goal_min_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->mingoal);
}

void ClothSettings_goal_min_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->mingoal = (std::remove_reference_t<decltype(data->mingoal)>)std::clamp(value, 0.0f, 1.0f);
}

float ClothSettings_goal_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->maxgoal);
}

void ClothSettings_goal_max_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->maxgoal = (std::remove_reference_t<decltype(data->maxgoal)>)std::clamp(value, 0.0f, 1.0f);
}

float ClothSettings_goal_default_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->defgoal);
}

void ClothSettings_goal_default_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->defgoal = (std::remove_reference_t<decltype(data->defgoal)>)std::clamp(value, 0.0f, 1.0f);
}

float ClothSettings_goal_spring_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->goalspring);
}

void ClothSettings_goal_spring_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->goalspring = (std::remove_reference_t<decltype(data->goalspring)>)std::clamp(value, 0.0f, 0.9990000129f);
}

float ClothSettings_goal_friction_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->goalfrict);
}

void ClothSettings_goal_friction_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->goalfrict = (std::remove_reference_t<decltype(data->goalfrict)>)std::clamp(value, 0.0f, 50.0f);
}

float ClothSettings_internal_friction_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->velocity_smooth);
}

void ClothSettings_internal_friction_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->velocity_smooth = (std::remove_reference_t<decltype(data->velocity_smooth)>)std::clamp(value, 0.0f, 1.0f);
}

float ClothSettings_collider_friction_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->collider_friction);
}

void ClothSettings_collider_friction_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->collider_friction = (std::remove_reference_t<decltype(data->collider_friction)>)std::clamp(value, 0.0f, 1.0f);
}

float ClothSettings_density_target_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->density_target);
}

void ClothSettings_density_target_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->density_target = (std::remove_reference_t<decltype(data->density_target)>)std::clamp(value, 0.0f, 10000.0f);
}

float ClothSettings_density_strength_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->density_strength);
}

void ClothSettings_density_strength_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->density_strength = (std::remove_reference_t<decltype(data->density_strength)>)std::clamp(value, 0.0f, 1.0f);
}

float ClothSettings_mass_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->mass);
}

void ClothSettings_mass_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->mass = (std::remove_reference_t<decltype(data->mass)>)std::clamp(value, 0.0f, FLT_MAX);
}

void ClothSettings_vertex_group_mass_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ClothSettings_mass_vgroup_get;
    fn(ptr, value);
}

int ClothSettings_vertex_group_mass_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ClothSettings_mass_vgroup_length;
    return fn(ptr);
}

void ClothSettings_vertex_group_mass_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ClothSettings_mass_vgroup_set;
    fn(ptr, value);
}

void ClothSettings_gravity_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ClothSettings_gravity_get;
    fn(ptr, values);
}

void ClothSettings_gravity_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ClothSettings_gravity_set;
    fn(ptr, values);
}

float ClothSettings_air_damping_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->Cvi);
}

void ClothSettings_air_damping_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->Cvi = (std::remove_reference_t<decltype(data->Cvi)>)std::clamp(value, 0.0f, 10.0f);
}

float ClothSettings_pin_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->goalspring);
}

void ClothSettings_pin_stiffness_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->goalspring = (std::remove_reference_t<decltype(data->goalspring)>)std::clamp(value, 0.0f, 50.0f);
}

int ClothSettings_quality_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (int)(data->stepsPerFrame);
}

void ClothSettings_quality_set(PointerRNA *ptr, int value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->stepsPerFrame = (std::remove_reference_t<decltype(data->stepsPerFrame)>)std::clamp(value, 1, INT_MAX);
}

float ClothSettings_time_scale_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->time_scale);
}

void ClothSettings_time_scale_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->time_scale = (std::remove_reference_t<decltype(data->time_scale)>)std::clamp(value, 0.0f, FLT_MAX);
}

void ClothSettings_vertex_group_shrink_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ClothSettings_shrink_vgroup_get;
    fn(ptr, value);
}

int ClothSettings_vertex_group_shrink_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ClothSettings_shrink_vgroup_length;
    return fn(ptr);
}

void ClothSettings_vertex_group_shrink_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ClothSettings_shrink_vgroup_set;
    fn(ptr, value);
}

float ClothSettings_shrink_min_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->shrink_min);
}

void ClothSettings_shrink_min_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_shrink_min_set;
    fn(ptr, value);
}

float ClothSettings_shrink_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->shrink_max);
}

void ClothSettings_shrink_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_shrink_max_set;
    fn(ptr, value);
}

float ClothSettings_voxel_cell_size_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->voxel_cell_size);
}

void ClothSettings_voxel_cell_size_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->voxel_cell_size = (std::remove_reference_t<decltype(data->voxel_cell_size)>)std::clamp(value, 0.0001000000f, 10000.0f);
}

float ClothSettings_tension_damping_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->tension_damp);
}

void ClothSettings_tension_damping_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->tension_damp = (std::remove_reference_t<decltype(data->tension_damp)>)std::clamp(value, 0.0f, 50.0f);
}

float ClothSettings_compression_damping_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->compression_damp);
}

void ClothSettings_compression_damping_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->compression_damp = (std::remove_reference_t<decltype(data->compression_damp)>)std::clamp(value, 0.0f, 50.0f);
}

float ClothSettings_shear_damping_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->shear_damp);
}

void ClothSettings_shear_damping_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->shear_damp = (std::remove_reference_t<decltype(data->shear_damp)>)std::clamp(value, 0.0f, 50.0f);
}

float ClothSettings_tension_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->tension);
}

void ClothSettings_tension_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_tension_set;
    fn(ptr, value);
}

float ClothSettings_tension_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_tension);
}

void ClothSettings_tension_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_tension_set;
    fn(ptr, value);
}

float ClothSettings_compression_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->compression);
}

void ClothSettings_compression_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_compression_set;
    fn(ptr, value);
}

float ClothSettings_compression_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_compression);
}

void ClothSettings_compression_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_compression_set;
    fn(ptr, value);
}

float ClothSettings_shear_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->shear);
}

void ClothSettings_shear_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_shear_set;
    fn(ptr, value);
}

float ClothSettings_shear_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_shear);
}

void ClothSettings_shear_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_shear_set;
    fn(ptr, value);
}

float ClothSettings_sewing_force_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_sewing);
}

void ClothSettings_sewing_force_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_sewing_set;
    fn(ptr, value);
}

void ClothSettings_vertex_group_structural_stiffness_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ClothSettings_struct_vgroup_get;
    fn(ptr, value);
}

int ClothSettings_vertex_group_structural_stiffness_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ClothSettings_struct_vgroup_length;
    return fn(ptr);
}

void ClothSettings_vertex_group_structural_stiffness_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ClothSettings_struct_vgroup_set;
    fn(ptr, value);
}

void ClothSettings_vertex_group_shear_stiffness_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ClothSettings_shear_vgroup_get;
    fn(ptr, value);
}

int ClothSettings_vertex_group_shear_stiffness_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ClothSettings_shear_vgroup_length;
    return fn(ptr);
}

void ClothSettings_vertex_group_shear_stiffness_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ClothSettings_shear_vgroup_set;
    fn(ptr, value);
}

float ClothSettings_bending_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->bending);
}

void ClothSettings_bending_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_bending_set;
    fn(ptr, value);
}

float ClothSettings_bending_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_bend);
}

void ClothSettings_bending_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_bend_set;
    fn(ptr, value);
}

float ClothSettings_bending_damping_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->bending_damping);
}

void ClothSettings_bending_damping_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->bending_damping = (std::remove_reference_t<decltype(data->bending_damping)>)std::clamp(value, 0.0f, 1000.0f);
}

bool ClothSettings_use_sewing_springs_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 16384) != 0);
}

void ClothSettings_use_sewing_springs_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 16384); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(16384)); }
}

void ClothSettings_vertex_group_bending_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ClothSettings_bend_vgroup_get;
    fn(ptr, value);
}

int ClothSettings_vertex_group_bending_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ClothSettings_bend_vgroup_length;
    return fn(ptr);
}

void ClothSettings_vertex_group_bending_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ClothSettings_bend_vgroup_set;
    fn(ptr, value);
}

PointerRNA ClothSettings_effector_weights_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_EffectorWeights, data->effector_weights);
}

PointerRNA ClothSettings_rest_shape_key_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ClothSettings_rest_shape_key_get;
    return fn(ptr);
}

void ClothSettings_rest_shape_key_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_ClothSettings_rest_shape_key_set;
    fn(ptr, value, reports);
}

bool ClothSettings_use_dynamic_mesh_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 32768) != 0);
}

void ClothSettings_use_dynamic_mesh_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 32768); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(32768)); }
}

int ClothSettings_bending_model_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (int)(data->bending_model);
}

void ClothSettings_bending_model_set(PointerRNA *ptr, int value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->bending_model = (std::remove_reference_t<decltype(data->bending_model)>)value;
}

bool ClothSettings_use_internal_springs_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 128) != 0);
}

void ClothSettings_use_internal_springs_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 128); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(128)); }
}

bool ClothSettings_internal_spring_normal_check_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 512) != 0);
}

void ClothSettings_internal_spring_normal_check_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 512); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(512)); }
}

float ClothSettings_internal_spring_max_length_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->internal_spring_max_length);
}

void ClothSettings_internal_spring_max_length_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->internal_spring_max_length = (std::remove_reference_t<decltype(data->internal_spring_max_length)>)std::clamp(value, 0.0f, 1000.0f);
}

float ClothSettings_internal_spring_max_diversion_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->internal_spring_max_diversion);
}

void ClothSettings_internal_spring_max_diversion_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->internal_spring_max_diversion = (std::remove_reference_t<decltype(data->internal_spring_max_diversion)>)std::clamp(value, 0.0f, 0.7853981853f);
}

float ClothSettings_internal_tension_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->internal_tension);
}

void ClothSettings_internal_tension_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_internal_tension_set;
    fn(ptr, value);
}

float ClothSettings_internal_tension_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_internal_tension);
}

void ClothSettings_internal_tension_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_internal_tension_set;
    fn(ptr, value);
}

float ClothSettings_internal_compression_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->internal_compression);
}

void ClothSettings_internal_compression_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_internal_compression_set;
    fn(ptr, value);
}

float ClothSettings_internal_compression_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_internal_compression);
}

void ClothSettings_internal_compression_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_internal_compression_set;
    fn(ptr, value);
}

void ClothSettings_vertex_group_intern_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ClothSettings_internal_vgroup_get;
    fn(ptr, value);
}

int ClothSettings_vertex_group_intern_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ClothSettings_internal_vgroup_length;
    return fn(ptr);
}

void ClothSettings_vertex_group_intern_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ClothSettings_internal_vgroup_set;
    fn(ptr, value);
}

bool ClothSettings_use_pressure_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 32) != 0);
}

void ClothSettings_use_pressure_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 32); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(32)); }
}

bool ClothSettings_use_pressure_volume_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 64) != 0);
}

void ClothSettings_use_pressure_volume_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 64); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(64)); }
}

float ClothSettings_uniform_pressure_force_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->uniform_pressure_force);
}

void ClothSettings_uniform_pressure_force_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->uniform_pressure_force = (std::remove_reference_t<decltype(data->uniform_pressure_force)>)std::clamp(value, -10000.0f, 10000.0f);
}

float ClothSettings_target_volume_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->target_volume);
}

void ClothSettings_target_volume_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->target_volume = (std::remove_reference_t<decltype(data->target_volume)>)std::clamp(value, 0.0f, 10000.0f);
}

float ClothSettings_pressure_factor_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->pressure_factor);
}

void ClothSettings_pressure_factor_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->pressure_factor = (std::remove_reference_t<decltype(data->pressure_factor)>)std::clamp(value, 0.0f, 10000.0f);
}

float ClothSettings_fluid_density_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->fluid_density);
}

void ClothSettings_fluid_density_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    data->fluid_density = (std::remove_reference_t<decltype(data->fluid_density)>)value;
}

void ClothSettings_vertex_group_pressure_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ClothSettings_pressure_vgroup_get;
    fn(ptr, value);
}

int ClothSettings_vertex_group_pressure_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ClothSettings_pressure_vgroup_length;
    return fn(ptr);
}

void ClothSettings_vertex_group_pressure_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ClothSettings_pressure_vgroup_set;
    fn(ptr, value);
}

static PointerRNA ClothCollisionSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ClothCollisionSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ClothCollisionSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ClothCollisionSettings_rna_properties_get(iter);
    }
}

void ClothCollisionSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ClothCollisionSettings_rna_properties_get(iter);
    }
}

void ClothCollisionSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ClothCollisionSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ClothCollisionSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool ClothCollisionSettings_use_collision_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void ClothCollisionSettings_use_collision_set(PointerRNA *ptr, bool value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

float ClothCollisionSettings_distance_min_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->epsilon);
}

void ClothCollisionSettings_distance_min_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    data->epsilon = (std::remove_reference_t<decltype(data->epsilon)>)std::clamp(value, 0.0010000000f, 1.0f);
}

float ClothCollisionSettings_friction_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->friction);
}

void ClothCollisionSettings_friction_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    data->friction = (std::remove_reference_t<decltype(data->friction)>)std::clamp(value, 0.0f, 80.0f);
}

float ClothCollisionSettings_damping_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->damping);
}

void ClothCollisionSettings_damping_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    data->damping = (std::remove_reference_t<decltype(data->damping)>)std::clamp(value, 0.0f, 1.0f);
}

int ClothCollisionSettings_collision_quality_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (int)(data->loop_count);
}

void ClothCollisionSettings_collision_quality_set(PointerRNA *ptr, int value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    data->loop_count = (std::remove_reference_t<decltype(data->loop_count)>)std::clamp(value, 1, 32767);
}

float ClothCollisionSettings_impulse_clamp_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->clamp);
}

void ClothCollisionSettings_impulse_clamp_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    data->clamp = (std::remove_reference_t<decltype(data->clamp)>)std::clamp(value, 0.0f, 100.0f);
}

bool ClothCollisionSettings_use_self_collision_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void ClothCollisionSettings_use_self_collision_set(PointerRNA *ptr, bool value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

float ClothCollisionSettings_self_distance_min_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->selfepsilon);
}

void ClothCollisionSettings_self_distance_min_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    data->selfepsilon = (std::remove_reference_t<decltype(data->selfepsilon)>)std::clamp(value, 0.0010000000f, 0.1000000015f);
}

float ClothCollisionSettings_self_friction_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->self_friction);
}

void ClothCollisionSettings_self_friction_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    data->self_friction = (std::remove_reference_t<decltype(data->self_friction)>)std::clamp(value, 0.0f, 80.0f);
}

PointerRNA ClothCollisionSettings_collection_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->group);
}

void ClothCollisionSettings_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->group = value.data;
}

void ClothCollisionSettings_vertex_group_self_collisions_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_CollSettings_selfcol_vgroup_get;
    fn(ptr, value);
}

int ClothCollisionSettings_vertex_group_self_collisions_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_CollSettings_selfcol_vgroup_length;
    return fn(ptr);
}

void ClothCollisionSettings_vertex_group_self_collisions_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_CollSettings_selfcol_vgroup_set;
    fn(ptr, value);
}

void ClothCollisionSettings_vertex_group_object_collisions_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_CollSettings_objcol_vgroup_get;
    fn(ptr, value);
}

int ClothCollisionSettings_vertex_group_object_collisions_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_CollSettings_objcol_vgroup_length;
    return fn(ptr);
}

void ClothCollisionSettings_vertex_group_object_collisions_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_CollSettings_objcol_vgroup_set;
    fn(ptr, value);
}

float ClothCollisionSettings_self_impulse_clamp_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->self_clamp);
}

void ClothCollisionSettings_self_impulse_clamp_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    data->self_clamp = (std::remove_reference_t<decltype(data->self_clamp)>)std::clamp(value, 0.0f, 100.0f);
}




/* Solver Result */
static CollectionPropertyRNA rna_ClothSolverResult_rna_properties_;
PropertyRNA &rna_ClothSolverResult_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ClothSolverResult_rna_properties_);

static PointerPropertyRNA rna_ClothSolverResult_rna_type_;
PropertyRNA &rna_ClothSolverResult_rna_type = reinterpret_cast<PropertyRNA &>(rna_ClothSolverResult_rna_type_);

static EnumPropertyRNA rna_ClothSolverResult_status_;
PropertyRNA &rna_ClothSolverResult_status = reinterpret_cast<PropertyRNA &>(rna_ClothSolverResult_status_);

static FloatPropertyRNA rna_ClothSolverResult_max_error_;
PropertyRNA &rna_ClothSolverResult_max_error = reinterpret_cast<PropertyRNA &>(rna_ClothSolverResult_max_error_);

static FloatPropertyRNA rna_ClothSolverResult_min_error_;
PropertyRNA &rna_ClothSolverResult_min_error = reinterpret_cast<PropertyRNA &>(rna_ClothSolverResult_min_error_);

static FloatPropertyRNA rna_ClothSolverResult_avg_error_;
PropertyRNA &rna_ClothSolverResult_avg_error = reinterpret_cast<PropertyRNA &>(rna_ClothSolverResult_avg_error_);

static IntPropertyRNA rna_ClothSolverResult_max_iterations_;
PropertyRNA &rna_ClothSolverResult_max_iterations = reinterpret_cast<PropertyRNA &>(rna_ClothSolverResult_max_iterations_);

static IntPropertyRNA rna_ClothSolverResult_min_iterations_;
PropertyRNA &rna_ClothSolverResult_min_iterations = reinterpret_cast<PropertyRNA &>(rna_ClothSolverResult_min_iterations_);

static FloatPropertyRNA rna_ClothSolverResult_avg_iterations_;
PropertyRNA &rna_ClothSolverResult_avg_iterations = reinterpret_cast<PropertyRNA &>(rna_ClothSolverResult_avg_iterations_);

StructRNA *RNA_ClothSolverResult;
void register_struct_ClothSolverResult(BlenderRNA &brna)
{
	rna_ClothSolverResult_rna_properties_ = {
		{&rna_ClothSolverResult_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSolverResult_rna_properties_begin, ClothSolverResult_rna_properties_next, ClothSolverResult_rna_properties_end, ClothSolverResult_rna_properties_get, nullptr, nullptr, ClothSolverResult_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ClothSolverResult_rna_type_ = {
		{&rna_ClothSolverResult_status, 	&rna_ClothSolverResult_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSolverResult_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_ClothSolverResult_status_items[5] = {
		{1, "SUCCESS", 0, "Success", "Computation was successful"	},
		{2, "NUMERICAL_ISSUE", 0, "Numerical Issue", "The provided data did not satisfy the prerequisites"	},
		{4, "NO_CONVERGENCE", 0, "No Convergence", "Iterative procedure did not converge"	},
		{8, "INVALID_INPUT", 0, "Invalid Input", "The inputs are invalid, or the algorithm has been improperly called"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ClothSolverResult_status_ = {
		{&rna_ClothSolverResult_max_error, 	&rna_ClothSolverResult_rna_type,
		-1, "status", 2097154, 0, 0, 0, 0, PropertyPathTemplateType(0), "Status",
		"Status of the solver iteration",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSolverResult_status_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ClothSolverResult_status_items, 4, 0
	};

	rna_ClothSolverResult_max_error_ = {
		{&rna_ClothSolverResult_min_error, 	&rna_ClothSolverResult_status,
		-1, "max_error", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Maximum Error",
		"Maximum error during substeps",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSolverResult_max_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSolverResult_min_error_ = {
		{&rna_ClothSolverResult_avg_error, 	&rna_ClothSolverResult_max_error,
		-1, "min_error", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Minimum Error",
		"Minimum error during substeps",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSolverResult_min_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSolverResult_avg_error_ = {
		{&rna_ClothSolverResult_max_iterations, 	&rna_ClothSolverResult_min_error,
		-1, "avg_error", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Average Error",
		"Average error during substeps",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSolverResult_avg_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSolverResult_max_iterations_ = {
		{&rna_ClothSolverResult_min_iterations, 	&rna_ClothSolverResult_avg_error,
		-1, "max_iterations", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Maximum Iterations",
		"Maximum iterations during substeps",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSolverResult_max_iterations_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ClothSolverResult_min_iterations_ = {
		{&rna_ClothSolverResult_avg_iterations, 	&rna_ClothSolverResult_max_iterations,
		-1, "min_iterations", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Minimum Iterations",
		"Minimum iterations during substeps",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSolverResult_min_iterations_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ClothSolverResult_avg_iterations_ = {
		{nullptr, 	&rna_ClothSolverResult_min_iterations,
		-1, "avg_iterations", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Average Iterations",
		"Average iterations during substeps",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSolverResult_avg_iterations_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ClothSolverResult;
	srna->cont.properties = {&rna_ClothSolverResult_rna_properties, &rna_ClothSolverResult_avg_iterations};
	srna->identifier = "ClothSolverResult";
	srna->flag = 516;
	srna->name = "Solver Result";
	srna->description = "Result of cloth solver iteration";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ClothSolverResult_rna_properties;
};

/* Cloth Settings */
static CollectionPropertyRNA rna_ClothSettings_rna_properties_;
PropertyRNA &rna_ClothSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_rna_properties_);

static PointerPropertyRNA rna_ClothSettings_rna_type_;
PropertyRNA &rna_ClothSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_rna_type_);

static FloatPropertyRNA rna_ClothSettings_goal_min_;
PropertyRNA &rna_ClothSettings_goal_min = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_goal_min_);

static FloatPropertyRNA rna_ClothSettings_goal_max_;
PropertyRNA &rna_ClothSettings_goal_max = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_goal_max_);

static FloatPropertyRNA rna_ClothSettings_goal_default_;
PropertyRNA &rna_ClothSettings_goal_default = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_goal_default_);

static FloatPropertyRNA rna_ClothSettings_goal_spring_;
PropertyRNA &rna_ClothSettings_goal_spring = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_goal_spring_);

static FloatPropertyRNA rna_ClothSettings_goal_friction_;
PropertyRNA &rna_ClothSettings_goal_friction = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_goal_friction_);

static FloatPropertyRNA rna_ClothSettings_internal_friction_;
PropertyRNA &rna_ClothSettings_internal_friction = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_internal_friction_);

static FloatPropertyRNA rna_ClothSettings_collider_friction_;
PropertyRNA &rna_ClothSettings_collider_friction = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_collider_friction_);

static FloatPropertyRNA rna_ClothSettings_density_target_;
PropertyRNA &rna_ClothSettings_density_target = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_density_target_);

static FloatPropertyRNA rna_ClothSettings_density_strength_;
PropertyRNA &rna_ClothSettings_density_strength = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_density_strength_);

static FloatPropertyRNA rna_ClothSettings_mass_;
PropertyRNA &rna_ClothSettings_mass = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_mass_);

static StringPropertyRNA rna_ClothSettings_vertex_group_mass_;
PropertyRNA &rna_ClothSettings_vertex_group_mass = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_vertex_group_mass_);

static FloatPropertyRNA rna_ClothSettings_gravity_;
PropertyRNA &rna_ClothSettings_gravity = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_gravity_);

static FloatPropertyRNA rna_ClothSettings_air_damping_;
PropertyRNA &rna_ClothSettings_air_damping = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_air_damping_);

static FloatPropertyRNA rna_ClothSettings_pin_stiffness_;
PropertyRNA &rna_ClothSettings_pin_stiffness = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_pin_stiffness_);

static IntPropertyRNA rna_ClothSettings_quality_;
PropertyRNA &rna_ClothSettings_quality = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_quality_);

static FloatPropertyRNA rna_ClothSettings_time_scale_;
PropertyRNA &rna_ClothSettings_time_scale = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_time_scale_);

static StringPropertyRNA rna_ClothSettings_vertex_group_shrink_;
PropertyRNA &rna_ClothSettings_vertex_group_shrink = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_vertex_group_shrink_);

static FloatPropertyRNA rna_ClothSettings_shrink_min_;
PropertyRNA &rna_ClothSettings_shrink_min = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_shrink_min_);

static FloatPropertyRNA rna_ClothSettings_shrink_max_;
PropertyRNA &rna_ClothSettings_shrink_max = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_shrink_max_);

static FloatPropertyRNA rna_ClothSettings_voxel_cell_size_;
PropertyRNA &rna_ClothSettings_voxel_cell_size = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_voxel_cell_size_);

static FloatPropertyRNA rna_ClothSettings_tension_damping_;
PropertyRNA &rna_ClothSettings_tension_damping = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_tension_damping_);

static FloatPropertyRNA rna_ClothSettings_compression_damping_;
PropertyRNA &rna_ClothSettings_compression_damping = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_compression_damping_);

static FloatPropertyRNA rna_ClothSettings_shear_damping_;
PropertyRNA &rna_ClothSettings_shear_damping = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_shear_damping_);

static FloatPropertyRNA rna_ClothSettings_tension_stiffness_;
PropertyRNA &rna_ClothSettings_tension_stiffness = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_tension_stiffness_);

static FloatPropertyRNA rna_ClothSettings_tension_stiffness_max_;
PropertyRNA &rna_ClothSettings_tension_stiffness_max = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_tension_stiffness_max_);

static FloatPropertyRNA rna_ClothSettings_compression_stiffness_;
PropertyRNA &rna_ClothSettings_compression_stiffness = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_compression_stiffness_);

static FloatPropertyRNA rna_ClothSettings_compression_stiffness_max_;
PropertyRNA &rna_ClothSettings_compression_stiffness_max = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_compression_stiffness_max_);

static FloatPropertyRNA rna_ClothSettings_shear_stiffness_;
PropertyRNA &rna_ClothSettings_shear_stiffness = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_shear_stiffness_);

static FloatPropertyRNA rna_ClothSettings_shear_stiffness_max_;
PropertyRNA &rna_ClothSettings_shear_stiffness_max = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_shear_stiffness_max_);

static FloatPropertyRNA rna_ClothSettings_sewing_force_max_;
PropertyRNA &rna_ClothSettings_sewing_force_max = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_sewing_force_max_);

static StringPropertyRNA rna_ClothSettings_vertex_group_structural_stiffness_;
PropertyRNA &rna_ClothSettings_vertex_group_structural_stiffness = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_vertex_group_structural_stiffness_);

static StringPropertyRNA rna_ClothSettings_vertex_group_shear_stiffness_;
PropertyRNA &rna_ClothSettings_vertex_group_shear_stiffness = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_vertex_group_shear_stiffness_);

static FloatPropertyRNA rna_ClothSettings_bending_stiffness_;
PropertyRNA &rna_ClothSettings_bending_stiffness = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_bending_stiffness_);

static FloatPropertyRNA rna_ClothSettings_bending_stiffness_max_;
PropertyRNA &rna_ClothSettings_bending_stiffness_max = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_bending_stiffness_max_);

static FloatPropertyRNA rna_ClothSettings_bending_damping_;
PropertyRNA &rna_ClothSettings_bending_damping = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_bending_damping_);

static BoolPropertyRNA rna_ClothSettings_use_sewing_springs_;
PropertyRNA &rna_ClothSettings_use_sewing_springs = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_use_sewing_springs_);

static StringPropertyRNA rna_ClothSettings_vertex_group_bending_;
PropertyRNA &rna_ClothSettings_vertex_group_bending = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_vertex_group_bending_);

static PointerPropertyRNA rna_ClothSettings_effector_weights_;
PropertyRNA &rna_ClothSettings_effector_weights = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_effector_weights_);

static PointerPropertyRNA rna_ClothSettings_rest_shape_key_;
PropertyRNA &rna_ClothSettings_rest_shape_key = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_rest_shape_key_);

static BoolPropertyRNA rna_ClothSettings_use_dynamic_mesh_;
PropertyRNA &rna_ClothSettings_use_dynamic_mesh = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_use_dynamic_mesh_);

static EnumPropertyRNA rna_ClothSettings_bending_model_;
PropertyRNA &rna_ClothSettings_bending_model = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_bending_model_);

static BoolPropertyRNA rna_ClothSettings_use_internal_springs_;
PropertyRNA &rna_ClothSettings_use_internal_springs = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_use_internal_springs_);

static BoolPropertyRNA rna_ClothSettings_internal_spring_normal_check_;
PropertyRNA &rna_ClothSettings_internal_spring_normal_check = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_internal_spring_normal_check_);

static FloatPropertyRNA rna_ClothSettings_internal_spring_max_length_;
PropertyRNA &rna_ClothSettings_internal_spring_max_length = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_internal_spring_max_length_);

static FloatPropertyRNA rna_ClothSettings_internal_spring_max_diversion_;
PropertyRNA &rna_ClothSettings_internal_spring_max_diversion = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_internal_spring_max_diversion_);

static FloatPropertyRNA rna_ClothSettings_internal_tension_stiffness_;
PropertyRNA &rna_ClothSettings_internal_tension_stiffness = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_internal_tension_stiffness_);

static FloatPropertyRNA rna_ClothSettings_internal_tension_stiffness_max_;
PropertyRNA &rna_ClothSettings_internal_tension_stiffness_max = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_internal_tension_stiffness_max_);

static FloatPropertyRNA rna_ClothSettings_internal_compression_stiffness_;
PropertyRNA &rna_ClothSettings_internal_compression_stiffness = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_internal_compression_stiffness_);

static FloatPropertyRNA rna_ClothSettings_internal_compression_stiffness_max_;
PropertyRNA &rna_ClothSettings_internal_compression_stiffness_max = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_internal_compression_stiffness_max_);

static StringPropertyRNA rna_ClothSettings_vertex_group_intern_;
PropertyRNA &rna_ClothSettings_vertex_group_intern = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_vertex_group_intern_);

static BoolPropertyRNA rna_ClothSettings_use_pressure_;
PropertyRNA &rna_ClothSettings_use_pressure = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_use_pressure_);

static BoolPropertyRNA rna_ClothSettings_use_pressure_volume_;
PropertyRNA &rna_ClothSettings_use_pressure_volume = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_use_pressure_volume_);

static FloatPropertyRNA rna_ClothSettings_uniform_pressure_force_;
PropertyRNA &rna_ClothSettings_uniform_pressure_force = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_uniform_pressure_force_);

static FloatPropertyRNA rna_ClothSettings_target_volume_;
PropertyRNA &rna_ClothSettings_target_volume = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_target_volume_);

static FloatPropertyRNA rna_ClothSettings_pressure_factor_;
PropertyRNA &rna_ClothSettings_pressure_factor = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_pressure_factor_);

static FloatPropertyRNA rna_ClothSettings_fluid_density_;
PropertyRNA &rna_ClothSettings_fluid_density = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_fluid_density_);

static StringPropertyRNA rna_ClothSettings_vertex_group_pressure_;
PropertyRNA &rna_ClothSettings_vertex_group_pressure = reinterpret_cast<PropertyRNA &>(rna_ClothSettings_vertex_group_pressure_);

StructRNA *RNA_ClothSettings;
void register_struct_ClothSettings(BlenderRNA &brna)
{
	rna_ClothSettings_rna_properties_ = {
		{&rna_ClothSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_rna_properties_begin, ClothSettings_rna_properties_next, ClothSettings_rna_properties_end, ClothSettings_rna_properties_get, nullptr, nullptr, ClothSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ClothSettings_rna_type_ = {
		{&rna_ClothSettings_goal_min, 	&rna_ClothSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ClothSettings_goal_min_ = {
		{&rna_ClothSettings_goal_max, 	&rna_ClothSettings_rna_type,
		-1, "goal_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Goal Minimum",
		"Goal minimum, vertex group weights are scaled to match this range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, mingoal), RawPropertyType(5), nullptr},
		ClothSettings_goal_min_get, ClothSettings_goal_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_goal_max_ = {
		{&rna_ClothSettings_goal_default, 	&rna_ClothSettings_goal_min,
		-1, "goal_max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Goal Maximum",
		"Goal maximum, vertex group weights are scaled to match this range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, maxgoal), RawPropertyType(5), nullptr},
		ClothSettings_goal_max_get, ClothSettings_goal_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ClothSettings_goal_default_ = {
		{&rna_ClothSettings_goal_spring, 	&rna_ClothSettings_goal_max,
		-1, "goal_default", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Goal Default",
		"Default Goal (vertex target position) value, when no Vertex Group used",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, defgoal), RawPropertyType(5), nullptr},
		ClothSettings_goal_default_get, ClothSettings_goal_default_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_goal_spring_ = {
		{&rna_ClothSettings_goal_friction, 	&rna_ClothSettings_goal_default,
		-1, "goal_spring", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Goal Stiffness",
		"Goal (vertex target position) spring stiffness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, goalspring), RawPropertyType(5), nullptr},
		ClothSettings_goal_spring_get, ClothSettings_goal_spring_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ClothSettings_goal_friction_ = {
		{&rna_ClothSettings_internal_friction, 	&rna_ClothSettings_goal_spring,
		-1, "goal_friction", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Goal Damping",
		"Goal (vertex target position) friction",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, goalfrict), RawPropertyType(5), nullptr},
		ClothSettings_goal_friction_get, ClothSettings_goal_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_internal_friction_ = {
		{&rna_ClothSettings_collider_friction, 	&rna_ClothSettings_goal_friction,
		-1, "internal_friction", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Internal Friction",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, velocity_smooth), RawPropertyType(5), nullptr},
		ClothSettings_internal_friction_get, ClothSettings_internal_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_collider_friction_ = {
		{&rna_ClothSettings_density_target, 	&rna_ClothSettings_internal_friction,
		-1, "collider_friction", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Collider Friction",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, collider_friction), RawPropertyType(5), nullptr},
		ClothSettings_collider_friction_get, ClothSettings_collider_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_density_target_ = {
		{&rna_ClothSettings_density_strength, 	&rna_ClothSettings_collider_friction,
		-1, "density_target", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Target Density",
		"Maximum density of hair",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, density_target), RawPropertyType(5), nullptr},
		ClothSettings_density_target_get, ClothSettings_density_target_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_density_strength_ = {
		{&rna_ClothSettings_mass, 	&rna_ClothSettings_density_target,
		-1, "density_strength", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Target Density Strength",
		"Influence of target density on the simulation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, density_strength), RawPropertyType(5), nullptr},
		ClothSettings_density_strength_get, ClothSettings_density_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_mass_ = {
		{&rna_ClothSettings_vertex_group_mass, 	&rna_ClothSettings_density_strength,
		-1, "mass", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Vertex Mass",
		"The mass of each vertex on the cloth material",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MASS) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, mass), RawPropertyType(5), nullptr},
		ClothSettings_mass_get, ClothSettings_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.3000000119f, nullptr
	};

	rna_ClothSettings_vertex_group_mass_ = {
		{&rna_ClothSettings_gravity, 	&rna_ClothSettings_mass,
		-1, "vertex_group_mass", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pin Vertex Group",
		"Vertex Group for pinning of vertices",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_pinning_changed, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_vertex_group_mass_get, ClothSettings_vertex_group_mass_length, ClothSettings_vertex_group_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	static float rna_ClothSettings_gravity_default[3] = {
		0.0f,
		0.0f,
		-9.8100004196f
	};
	rna_ClothSettings_gravity_ = {
		{&rna_ClothSettings_air_damping, 	&rna_ClothSettings_vertex_group_mass,
		-1, "gravity", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Gravity",
		"Gravity or external force vector",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ACCELERATION) | int(PROP_UNIT_ACCELERATION)), nullptr, 1, {3, 0, 0}, 3,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ClothSettings_gravity_get, ClothSettings_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ClothSettings_gravity_default
	};

	rna_ClothSettings_air_damping_ = {
		{&rna_ClothSettings_pin_stiffness, 	&rna_ClothSettings_gravity,
		-1, "air_damping", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Air Damping",
		"Air has normally some thickness which slows falling things down",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, Cvi), RawPropertyType(5), nullptr},
		ClothSettings_air_damping_get, ClothSettings_air_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ClothSettings_pin_stiffness_ = {
		{&rna_ClothSettings_quality, 	&rna_ClothSettings_air_damping,
		-1, "pin_stiffness", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Pin Stiffness",
		"Pin (vertex target position) spring stiffness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, goalspring), RawPropertyType(5), nullptr},
		ClothSettings_pin_stiffness_get, ClothSettings_pin_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ClothSettings_quality_ = {
		{&rna_ClothSettings_time_scale, 	&rna_ClothSettings_pin_stiffness,
		-1, "quality", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Quality",
		"Quality of the simulation in steps per frame (higher is better quality but slower)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, stepsPerFrame), RawPropertyType(0), nullptr},
		ClothSettings_quality_get, ClothSettings_quality_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 80, 1, INT_MAX, 1, nullptr, nullptr, 5, nullptr
	};

	rna_ClothSettings_time_scale_ = {
		{&rna_ClothSettings_vertex_group_shrink, 	&rna_ClothSettings_quality,
		-1, "time_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Speed",
		"Cloth speed is multiplied by this value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, time_scale), RawPropertyType(5), nullptr},
		ClothSettings_time_scale_get, ClothSettings_time_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ClothSettings_vertex_group_shrink_ = {
		{&rna_ClothSettings_shrink_min, 	&rna_ClothSettings_time_scale,
		-1, "vertex_group_shrink", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shrink Vertex Group",
		"Vertex Group for shrinking cloth",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_vertex_group_shrink_get, ClothSettings_vertex_group_shrink_length, ClothSettings_vertex_group_shrink_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ClothSettings_shrink_min_ = {
		{&rna_ClothSettings_shrink_max, 	&rna_ClothSettings_vertex_group_shrink,
		-1, "shrink_min", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shrink Factor",
		"Factor by which to shrink cloth",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_shrink_min_get, ClothSettings_shrink_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -FLT_MAX, 1.0f, 0.0500000007f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_shrink_max_ = {
		{&rna_ClothSettings_voxel_cell_size, 	&rna_ClothSettings_shrink_min,
		-1, "shrink_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shrink Factor Max",
		"Max amount to shrink cloth by",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_shrink_max_get, ClothSettings_shrink_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -FLT_MAX, 1.0f, 0.0500000007f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_voxel_cell_size_ = {
		{&rna_ClothSettings_tension_damping, 	&rna_ClothSettings_shrink_max,
		-1, "voxel_cell_size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Voxel Grid Cell Size",
		"Size of the voxel grid cells for interaction effects",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, voxel_cell_size), RawPropertyType(5), nullptr},
		ClothSettings_voxel_cell_size_get, ClothSettings_voxel_cell_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10000.0f, 0.0001000000f, 10000.0f, 10.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_ClothSettings_tension_damping_ = {
		{&rna_ClothSettings_compression_damping, 	&rna_ClothSettings_voxel_cell_size,
		-1, "tension_damping", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Tension Spring Damping",
		"Amount of damping in stretching behavior",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, tension_damp), RawPropertyType(5), nullptr},
		ClothSettings_tension_damping_get, ClothSettings_tension_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, nullptr, nullptr, 5.0f, nullptr
	};

	rna_ClothSettings_compression_damping_ = {
		{&rna_ClothSettings_shear_damping, 	&rna_ClothSettings_tension_damping,
		-1, "compression_damping", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Compression Spring Damping",
		"Amount of damping in compression behavior",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, compression_damp), RawPropertyType(5), nullptr},
		ClothSettings_compression_damping_get, ClothSettings_compression_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, nullptr, nullptr, 5.0f, nullptr
	};

	rna_ClothSettings_shear_damping_ = {
		{&rna_ClothSettings_tension_stiffness, 	&rna_ClothSettings_compression_damping,
		-1, "shear_damping", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shear Spring Damping",
		"Amount of damping in shearing behavior",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, shear_damp), RawPropertyType(5), nullptr},
		ClothSettings_shear_damping_get, ClothSettings_shear_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, nullptr, nullptr, 5.0f, nullptr
	};

	rna_ClothSettings_tension_stiffness_ = {
		{&rna_ClothSettings_tension_stiffness_max, 	&rna_ClothSettings_shear_damping,
		-1, "tension_stiffness", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Tension Stiffness",
		"How much the material resists stretching",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_tension_stiffness_get, ClothSettings_tension_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 15.0f, nullptr
	};

	rna_ClothSettings_tension_stiffness_max_ = {
		{&rna_ClothSettings_compression_stiffness, 	&rna_ClothSettings_tension_stiffness,
		-1, "tension_stiffness_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Tension Stiffness Maximum",
		"Maximum tension stiffness value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_tension_stiffness_max_get, ClothSettings_tension_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 15.0f, nullptr
	};

	rna_ClothSettings_compression_stiffness_ = {
		{&rna_ClothSettings_compression_stiffness_max, 	&rna_ClothSettings_tension_stiffness_max,
		-1, "compression_stiffness", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Compression Stiffness",
		"How much the material resists compression",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_compression_stiffness_get, ClothSettings_compression_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 15.0f, nullptr
	};

	rna_ClothSettings_compression_stiffness_max_ = {
		{&rna_ClothSettings_shear_stiffness, 	&rna_ClothSettings_compression_stiffness,
		-1, "compression_stiffness_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Compression Stiffness Maximum",
		"Maximum compression stiffness value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_compression_stiffness_max_get, ClothSettings_compression_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 15.0f, nullptr
	};

	rna_ClothSettings_shear_stiffness_ = {
		{&rna_ClothSettings_shear_stiffness_max, 	&rna_ClothSettings_compression_stiffness_max,
		-1, "shear_stiffness", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shear Stiffness",
		"How much the material resists shearing",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_shear_stiffness_get, ClothSettings_shear_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 5.0f, nullptr
	};

	rna_ClothSettings_shear_stiffness_max_ = {
		{&rna_ClothSettings_sewing_force_max, 	&rna_ClothSettings_shear_stiffness,
		-1, "shear_stiffness_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shear Stiffness Maximum",
		"Maximum shear scaling value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_shear_stiffness_max_get, ClothSettings_shear_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 5.0f, nullptr
	};

	rna_ClothSettings_sewing_force_max_ = {
		{&rna_ClothSettings_vertex_group_structural_stiffness, 	&rna_ClothSettings_shear_stiffness_max,
		-1, "sewing_force_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sewing Force Max",
		"Maximum sewing force",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_sewing_force_max_get, ClothSettings_sewing_force_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_vertex_group_structural_stiffness_ = {
		{&rna_ClothSettings_vertex_group_shear_stiffness, 	&rna_ClothSettings_sewing_force_max,
		-1, "vertex_group_structural_stiffness", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Structural Stiffness Vertex Group",
		"Vertex group for fine control over structural stiffness",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_vertex_group_structural_stiffness_get, ClothSettings_vertex_group_structural_stiffness_length, ClothSettings_vertex_group_structural_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ClothSettings_vertex_group_shear_stiffness_ = {
		{&rna_ClothSettings_bending_stiffness, 	&rna_ClothSettings_vertex_group_structural_stiffness,
		-1, "vertex_group_shear_stiffness", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shear Stiffness Vertex Group",
		"Vertex group for fine control over shear stiffness",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_vertex_group_shear_stiffness_get, ClothSettings_vertex_group_shear_stiffness_length, ClothSettings_vertex_group_shear_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ClothSettings_bending_stiffness_ = {
		{&rna_ClothSettings_bending_stiffness_max, 	&rna_ClothSettings_vertex_group_shear_stiffness,
		-1, "bending_stiffness", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Bending Stiffness",
		"How much the material resists bending",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_bending_stiffness_get, ClothSettings_bending_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_ClothSettings_bending_stiffness_max_ = {
		{&rna_ClothSettings_bending_damping, 	&rna_ClothSettings_bending_stiffness,
		-1, "bending_stiffness_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Bending Stiffness Maximum",
		"Maximum bending stiffness value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_bending_stiffness_max_get, ClothSettings_bending_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_ClothSettings_bending_damping_ = {
		{&rna_ClothSettings_use_sewing_springs, 	&rna_ClothSettings_bending_stiffness_max,
		-1, "bending_damping", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Bending Spring Damping",
		"Amount of damping in bending behavior",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, bending_damping), RawPropertyType(5), nullptr},
		ClothSettings_bending_damping_get, ClothSettings_bending_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_ClothSettings_use_sewing_springs_ = {
		{&rna_ClothSettings_vertex_group_bending, 	&rna_ClothSettings_bending_damping,
		-1, "use_sewing_springs", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sew Cloth",
		"Pulls loose edges together",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_use_sewing_springs_get, ClothSettings_use_sewing_springs_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ClothSettings_vertex_group_bending_ = {
		{&rna_ClothSettings_effector_weights, 	&rna_ClothSettings_use_sewing_springs,
		-1, "vertex_group_bending", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bending Stiffness Vertex Group",
		"Vertex group for fine control over bending stiffness",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_vertex_group_bending_get, ClothSettings_vertex_group_bending_length, ClothSettings_vertex_group_bending_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ClothSettings_effector_weights_ = {
		{&rna_ClothSettings_rest_shape_key, 	&rna_ClothSettings_vertex_group_bending,
		-1, "effector_weights", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Effector Weights",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_effector_weights_get, nullptr, nullptr, nullptr,RNA_EffectorWeights
	};

	rna_ClothSettings_rest_shape_key_ = {
		{&rna_ClothSettings_use_dynamic_mesh, 	&rna_ClothSettings_effector_weights,
		-1, "rest_shape_key", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Rest Shape Key",
		"Shape key to use the rest spring lengths from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_rest_shape_key_get, ClothSettings_rest_shape_key_set, nullptr, nullptr,RNA_ShapeKey
	};

	rna_ClothSettings_use_dynamic_mesh_ = {
		{&rna_ClothSettings_bending_model, 	&rna_ClothSettings_rest_shape_key,
		-1, "use_dynamic_mesh", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Dynamic Base Mesh",
		"Make simulation respect deformations in the base mesh",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_use_dynamic_mesh_get, ClothSettings_use_dynamic_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_ClothSettings_bending_model_items[3] = {
		{1, "ANGULAR", 0, "Angular", "Cloth model with angular bending springs"	},
		{0, "LINEAR", 0, "Linear", "Cloth model with linear bending springs (legacy)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ClothSettings_bending_model_ = {
		{&rna_ClothSettings_use_internal_springs, 	&rna_ClothSettings_use_dynamic_mesh,
		-1, "bending_model", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Bending Model",
		"Physical model for simulating bending forces",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, bending_model), RawPropertyType(1), nullptr},
		ClothSettings_bending_model_get, ClothSettings_bending_model_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ClothSettings_bending_model_items, 2, 1
	};

	rna_ClothSettings_use_internal_springs_ = {
		{&rna_ClothSettings_internal_spring_normal_check, 	&rna_ClothSettings_bending_model,
		-1, "use_internal_springs", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Create Internal Springs",
		"Simulate an internal volume structure by creating springs connecting the opposite sides of the mesh",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_use_internal_springs_get, ClothSettings_use_internal_springs_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ClothSettings_internal_spring_normal_check_ = {
		{&rna_ClothSettings_internal_spring_max_length, 	&rna_ClothSettings_use_internal_springs,
		-1, "internal_spring_normal_check", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Check Internal Spring Normals",
		"Require the points the internal springs connect to have opposite normal directions",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_internal_spring_normal_check_get, ClothSettings_internal_spring_normal_check_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ClothSettings_internal_spring_max_length_ = {
		{&rna_ClothSettings_internal_spring_max_diversion, 	&rna_ClothSettings_internal_spring_normal_check,
		-1, "internal_spring_max_length", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Internal Spring Max Length",
		"The maximum length an internal spring can have during creation. If the distance between internal points is greater than this, no internal spring will be created between these points. A length of zero means that there is no length limit.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, internal_spring_max_length), RawPropertyType(5), nullptr},
		ClothSettings_internal_spring_max_length_get, ClothSettings_internal_spring_max_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_internal_spring_max_diversion_ = {
		{&rna_ClothSettings_internal_tension_stiffness, 	&rna_ClothSettings_internal_spring_max_length,
		-1, "internal_spring_max_diversion", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Internal Spring Max Diversion",
		"How much the rays used to connect the internal points can diverge from the vertex normal",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, internal_spring_max_diversion), RawPropertyType(5), nullptr},
		ClothSettings_internal_spring_max_diversion_get, ClothSettings_internal_spring_max_diversion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.7853981853f, 0.0f, 0.7853981853f, 10.0f, 3, nullptr, nullptr, 0.7853981853f, nullptr
	};

	rna_ClothSettings_internal_tension_stiffness_ = {
		{&rna_ClothSettings_internal_tension_stiffness_max, 	&rna_ClothSettings_internal_spring_max_diversion,
		-1, "internal_tension_stiffness", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Tension Stiffness",
		"How much the material resists stretching",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_internal_tension_stiffness_get, ClothSettings_internal_tension_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 15.0f, nullptr
	};

	rna_ClothSettings_internal_tension_stiffness_max_ = {
		{&rna_ClothSettings_internal_compression_stiffness, 	&rna_ClothSettings_internal_tension_stiffness,
		-1, "internal_tension_stiffness_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Tension Stiffness Maximum",
		"Maximum tension stiffness value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_internal_tension_stiffness_max_get, ClothSettings_internal_tension_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 15.0f, nullptr
	};

	rna_ClothSettings_internal_compression_stiffness_ = {
		{&rna_ClothSettings_internal_compression_stiffness_max, 	&rna_ClothSettings_internal_tension_stiffness_max,
		-1, "internal_compression_stiffness", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Compression Stiffness",
		"How much the material resists compression",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_internal_compression_stiffness_get, ClothSettings_internal_compression_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 15.0f, nullptr
	};

	rna_ClothSettings_internal_compression_stiffness_max_ = {
		{&rna_ClothSettings_vertex_group_intern, 	&rna_ClothSettings_internal_compression_stiffness,
		-1, "internal_compression_stiffness_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Compression Stiffness Maximum",
		"Maximum compression stiffness value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_internal_compression_stiffness_max_get, ClothSettings_internal_compression_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 15.0f, nullptr
	};

	rna_ClothSettings_vertex_group_intern_ = {
		{&rna_ClothSettings_use_pressure, 	&rna_ClothSettings_internal_compression_stiffness_max,
		-1, "vertex_group_intern", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Internal Springs Vertex Group",
		"Vertex group for fine control over the internal spring stiffness",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_vertex_group_intern_get, ClothSettings_vertex_group_intern_length, ClothSettings_vertex_group_intern_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ClothSettings_use_pressure_ = {
		{&rna_ClothSettings_use_pressure_volume, 	&rna_ClothSettings_vertex_group_intern,
		-1, "use_pressure", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Pressure",
		"Simulate pressure inside a closed cloth mesh",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_use_pressure_get, ClothSettings_use_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ClothSettings_use_pressure_volume_ = {
		{&rna_ClothSettings_uniform_pressure_force, 	&rna_ClothSettings_use_pressure,
		-1, "use_pressure_volume", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Custom Volume",
		"Use the Target Volume parameter as the initial volume, instead of calculating it from the mesh itself",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_use_pressure_volume_get, ClothSettings_use_pressure_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ClothSettings_uniform_pressure_force_ = {
		{&rna_ClothSettings_target_volume, 	&rna_ClothSettings_use_pressure_volume,
		-1, "uniform_pressure_force", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Pressure",
		"The uniform pressure that is constantly applied to the mesh, in units of Pressure Scale. Can be negative.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, uniform_pressure_force), RawPropertyType(5), nullptr},
		ClothSettings_uniform_pressure_force_get, ClothSettings_uniform_pressure_force_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -10000.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_target_volume_ = {
		{&rna_ClothSettings_pressure_factor, 	&rna_ClothSettings_uniform_pressure_force,
		-1, "target_volume", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Target Volume",
		"The mesh volume where the inner/outer pressure will be the same. If set to zero the change in volume will not affect pressure.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, target_volume), RawPropertyType(5), nullptr},
		ClothSettings_target_volume_get, ClothSettings_target_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_pressure_factor_ = {
		{&rna_ClothSettings_fluid_density, 	&rna_ClothSettings_target_volume,
		-1, "pressure_factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Pressure Scale",
		"Ambient pressure (kPa) that balances out between the inside and outside of the object when it has the target volume",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, pressure_factor), RawPropertyType(5), nullptr},
		ClothSettings_pressure_factor_get, ClothSettings_pressure_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ClothSettings_fluid_density_ = {
		{&rna_ClothSettings_vertex_group_pressure, 	&rna_ClothSettings_pressure_factor,
		-1, "fluid_density", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Fluid Density",
		"Density (kg/l) of the fluid contained inside the object, used to create a hydrostatic pressure gradient simulating the weight of the internal fluid, or buoyancy from the surrounding fluid if negative",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothSimSettings, fluid_density), RawPropertyType(5), nullptr},
		ClothSettings_fluid_density_get, ClothSettings_fluid_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 0.0500000007f, 4, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothSettings_vertex_group_pressure_ = {
		{nullptr, 	&rna_ClothSettings_fluid_density,
		-1, "vertex_group_pressure", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pressure Vertex Group",
		"Vertex Group for where to apply pressure. Zero weight means no pressure while a weight of one means full pressure. Faces with a vertex that has zero weight will be excluded from the volume calculation.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothSettings_vertex_group_pressure_get, ClothSettings_vertex_group_pressure_length, ClothSettings_vertex_group_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_ClothSettings;
	srna->cont.properties = {&rna_ClothSettings_rna_properties, &rna_ClothSettings_vertex_group_pressure};
	srna->identifier = "ClothSettings";
	srna->flag = 516;
	srna->name = "Cloth Settings";
	srna->description = "Cloth simulation settings for an object";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ClothSettings_rna_properties;
	srna->path = rna_ClothSettings_path;
};

/* Cloth Collision Settings */
static CollectionPropertyRNA rna_ClothCollisionSettings_rna_properties_;
PropertyRNA &rna_ClothCollisionSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_rna_properties_);

static PointerPropertyRNA rna_ClothCollisionSettings_rna_type_;
PropertyRNA &rna_ClothCollisionSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_rna_type_);

static BoolPropertyRNA rna_ClothCollisionSettings_use_collision_;
PropertyRNA &rna_ClothCollisionSettings_use_collision = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_use_collision_);

static FloatPropertyRNA rna_ClothCollisionSettings_distance_min_;
PropertyRNA &rna_ClothCollisionSettings_distance_min = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_distance_min_);

static FloatPropertyRNA rna_ClothCollisionSettings_friction_;
PropertyRNA &rna_ClothCollisionSettings_friction = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_friction_);

static FloatPropertyRNA rna_ClothCollisionSettings_damping_;
PropertyRNA &rna_ClothCollisionSettings_damping = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_damping_);

static IntPropertyRNA rna_ClothCollisionSettings_collision_quality_;
PropertyRNA &rna_ClothCollisionSettings_collision_quality = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_collision_quality_);

static FloatPropertyRNA rna_ClothCollisionSettings_impulse_clamp_;
PropertyRNA &rna_ClothCollisionSettings_impulse_clamp = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_impulse_clamp_);

static BoolPropertyRNA rna_ClothCollisionSettings_use_self_collision_;
PropertyRNA &rna_ClothCollisionSettings_use_self_collision = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_use_self_collision_);

static FloatPropertyRNA rna_ClothCollisionSettings_self_distance_min_;
PropertyRNA &rna_ClothCollisionSettings_self_distance_min = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_self_distance_min_);

static FloatPropertyRNA rna_ClothCollisionSettings_self_friction_;
PropertyRNA &rna_ClothCollisionSettings_self_friction = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_self_friction_);

static PointerPropertyRNA rna_ClothCollisionSettings_collection_;
PropertyRNA &rna_ClothCollisionSettings_collection = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_collection_);

static StringPropertyRNA rna_ClothCollisionSettings_vertex_group_self_collisions_;
PropertyRNA &rna_ClothCollisionSettings_vertex_group_self_collisions = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_vertex_group_self_collisions_);

static StringPropertyRNA rna_ClothCollisionSettings_vertex_group_object_collisions_;
PropertyRNA &rna_ClothCollisionSettings_vertex_group_object_collisions = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_vertex_group_object_collisions_);

static FloatPropertyRNA rna_ClothCollisionSettings_self_impulse_clamp_;
PropertyRNA &rna_ClothCollisionSettings_self_impulse_clamp = reinterpret_cast<PropertyRNA &>(rna_ClothCollisionSettings_self_impulse_clamp_);

StructRNA *RNA_ClothCollisionSettings;
void register_struct_ClothCollisionSettings(BlenderRNA &brna)
{
	rna_ClothCollisionSettings_rna_properties_ = {
		{&rna_ClothCollisionSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothCollisionSettings_rna_properties_begin, ClothCollisionSettings_rna_properties_next, ClothCollisionSettings_rna_properties_end, ClothCollisionSettings_rna_properties_get, nullptr, nullptr, ClothCollisionSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ClothCollisionSettings_rna_type_ = {
		{&rna_ClothCollisionSettings_use_collision, 	&rna_ClothCollisionSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothCollisionSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ClothCollisionSettings_use_collision_ = {
		{&rna_ClothCollisionSettings_distance_min, 	&rna_ClothCollisionSettings_rna_type,
		-1, "use_collision", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Enable Collision",
		"Enable collisions with other objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothCollisionSettings_use_collision_get, ClothCollisionSettings_use_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ClothCollisionSettings_distance_min_ = {
		{&rna_ClothCollisionSettings_friction, 	&rna_ClothCollisionSettings_use_collision,
		-1, "distance_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Distance",
		"Minimum distance between collision objects before collision response takes effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothCollSettings, epsilon), RawPropertyType(5), nullptr},
		ClothCollisionSettings_distance_min_get, ClothCollisionSettings_distance_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0149999997f, nullptr
	};

	rna_ClothCollisionSettings_friction_ = {
		{&rna_ClothCollisionSettings_damping, 	&rna_ClothCollisionSettings_distance_min,
		-1, "friction", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Friction",
		"Friction force if a collision happened (higher = less movement)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothCollSettings, friction), RawPropertyType(5), nullptr},
		ClothCollisionSettings_friction_get, ClothCollisionSettings_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 80.0f, 0.0f, 80.0f, 10.0f, 3, nullptr, nullptr, 5.0f, nullptr
	};

	rna_ClothCollisionSettings_damping_ = {
		{&rna_ClothCollisionSettings_collision_quality, 	&rna_ClothCollisionSettings_friction,
		-1, "damping", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Restitution",
		"Amount of velocity lost on collision",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothCollSettings, damping), RawPropertyType(5), nullptr},
		ClothCollisionSettings_damping_get, ClothCollisionSettings_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ClothCollisionSettings_collision_quality_ = {
		{&rna_ClothCollisionSettings_impulse_clamp, 	&rna_ClothCollisionSettings_damping,
		-1, "collision_quality", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Collision Quality",
		"How many collision iterations should be done (higher is better quality but slower)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothCollSettings, loop_count), RawPropertyType(1), nullptr},
		ClothCollisionSettings_collision_quality_get, ClothCollisionSettings_collision_quality_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 20, 1, 32767, 1, nullptr, nullptr, 2, nullptr
	};

	rna_ClothCollisionSettings_impulse_clamp_ = {
		{&rna_ClothCollisionSettings_use_self_collision, 	&rna_ClothCollisionSettings_collision_quality,
		-1, "impulse_clamp", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Impulse Clamping",
		"Clamp collision impulses to avoid instability (0.0 to disable clamping)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothCollSettings, clamp), RawPropertyType(5), nullptr},
		ClothCollisionSettings_impulse_clamp_get, ClothCollisionSettings_impulse_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ClothCollisionSettings_use_self_collision_ = {
		{&rna_ClothCollisionSettings_self_distance_min, 	&rna_ClothCollisionSettings_impulse_clamp,
		-1, "use_self_collision", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Enable Self Collision",
		"Enable self collisions",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothCollisionSettings_use_self_collision_get, ClothCollisionSettings_use_self_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ClothCollisionSettings_self_distance_min_ = {
		{&rna_ClothCollisionSettings_self_friction, 	&rna_ClothCollisionSettings_use_self_collision,
		-1, "self_distance_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Self Minimum Distance",
		"Minimum distance between cloth faces before collision response takes effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothCollSettings, selfepsilon), RawPropertyType(5), nullptr},
		ClothCollisionSettings_self_distance_min_get, ClothCollisionSettings_self_distance_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 10.0f, 3, nullptr, nullptr, 0.0149999997f, nullptr
	};

	rna_ClothCollisionSettings_self_friction_ = {
		{&rna_ClothCollisionSettings_collection, 	&rna_ClothCollisionSettings_self_distance_min,
		-1, "self_friction", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Self Friction",
		"Friction with self contact",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothCollSettings, self_friction), RawPropertyType(5), nullptr},
		ClothCollisionSettings_self_friction_get, ClothCollisionSettings_self_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 80.0f, 0.0f, 80.0f, 10.0f, 3, nullptr, nullptr, 5.0f, nullptr
	};

	rna_ClothCollisionSettings_collection_ = {
		{&rna_ClothCollisionSettings_vertex_group_self_collisions, 	&rna_ClothCollisionSettings_self_friction,
		-1, "collection", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Collision Collection",
		"Limit colliders to this Collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothCollisionSettings_collection_get, ClothCollisionSettings_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_ClothCollisionSettings_vertex_group_self_collisions_ = {
		{&rna_ClothCollisionSettings_vertex_group_object_collisions, 	&rna_ClothCollisionSettings_collection,
		-1, "vertex_group_self_collisions", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selfcollision Vertex Group",
		"Triangles with all vertices in this group are not used during self collisions",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothCollisionSettings_vertex_group_self_collisions_get, ClothCollisionSettings_vertex_group_self_collisions_length, ClothCollisionSettings_vertex_group_self_collisions_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ClothCollisionSettings_vertex_group_object_collisions_ = {
		{&rna_ClothCollisionSettings_self_impulse_clamp, 	&rna_ClothCollisionSettings_vertex_group_self_collisions,
		-1, "vertex_group_object_collisions", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collision Vertex Group",
		"Triangles with all vertices in this group are not used during object collisions",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClothCollisionSettings_vertex_group_object_collisions_get, ClothCollisionSettings_vertex_group_object_collisions_length, ClothCollisionSettings_vertex_group_object_collisions_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ClothCollisionSettings_self_impulse_clamp_ = {
		{nullptr, 	&rna_ClothCollisionSettings_vertex_group_object_collisions,
		-1, "self_impulse_clamp", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Impulse Clamping",
		"Clamp collision impulses to avoid instability (0.0 to disable clamping)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ClothCollSettings, self_clamp), RawPropertyType(5), nullptr},
		ClothCollisionSettings_self_impulse_clamp_get, ClothCollisionSettings_self_impulse_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ClothCollisionSettings;
	srna->cont.properties = {&rna_ClothCollisionSettings_rna_properties, &rna_ClothCollisionSettings_self_impulse_clamp};
	srna->identifier = "ClothCollisionSettings";
	srna->flag = 516;
	srna->name = "Cloth Collision Settings";
	srna->description = "Cloth simulation settings for self collision and collision with other objects";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ClothCollisionSettings_rna_properties;
	srna->path = rna_ClothCollisionSettings_path;
};


}  // namespace blender
