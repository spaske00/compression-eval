
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

#include "rna_rigidbody.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_RigidBodyWorld_rna_properties;
extern PropertyRNA &rna_RigidBodyWorld_rna_type;
extern PropertyRNA &rna_RigidBodyWorld_collection;
extern PropertyRNA &rna_RigidBodyWorld_constraints;
extern PropertyRNA &rna_RigidBodyWorld_enabled;
extern PropertyRNA &rna_RigidBodyWorld_time_scale;
extern PropertyRNA &rna_RigidBodyWorld_substeps_per_frame;
extern PropertyRNA &rna_RigidBodyWorld_solver_iterations;
extern PropertyRNA &rna_RigidBodyWorld_use_split_impulse;
extern PropertyRNA &rna_RigidBodyWorld_point_cache;
extern PropertyRNA &rna_RigidBodyWorld_effector_weights;

extern FunctionRNA *rna_RigidBodyWorld_convex_sweep_test_func;
extern PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_object;
extern PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_start;
extern PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_end;
extern PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_object_location;
extern PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_hitpoint;
extern PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_normal;
extern PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_has_hit;



extern PropertyRNA &rna_RigidBodyObject_rna_properties;
extern PropertyRNA &rna_RigidBodyObject_rna_type;
extern PropertyRNA &rna_RigidBodyObject_type;
extern PropertyRNA &rna_RigidBodyObject_mesh_source;
extern PropertyRNA &rna_RigidBodyObject_enabled;
extern PropertyRNA &rna_RigidBodyObject_collision_shape;
extern PropertyRNA &rna_RigidBodyObject_kinematic;
extern PropertyRNA &rna_RigidBodyObject_use_deform;
extern PropertyRNA &rna_RigidBodyObject_mass;
extern PropertyRNA &rna_RigidBodyObject_use_deactivation;
extern PropertyRNA &rna_RigidBodyObject_use_start_deactivated;
extern PropertyRNA &rna_RigidBodyObject_deactivate_linear_velocity;
extern PropertyRNA &rna_RigidBodyObject_deactivate_angular_velocity;
extern PropertyRNA &rna_RigidBodyObject_linear_damping;
extern PropertyRNA &rna_RigidBodyObject_angular_damping;
extern PropertyRNA &rna_RigidBodyObject_friction;
extern PropertyRNA &rna_RigidBodyObject_restitution;
extern PropertyRNA &rna_RigidBodyObject_use_margin;
extern PropertyRNA &rna_RigidBodyObject_collision_margin;
extern PropertyRNA &rna_RigidBodyObject_collision_collections;


extern PropertyRNA &rna_RigidBodyConstraint_rna_properties;
extern PropertyRNA &rna_RigidBodyConstraint_rna_type;
extern PropertyRNA &rna_RigidBodyConstraint_type;
extern PropertyRNA &rna_RigidBodyConstraint_spring_type;
extern PropertyRNA &rna_RigidBodyConstraint_enabled;
extern PropertyRNA &rna_RigidBodyConstraint_disable_collisions;
extern PropertyRNA &rna_RigidBodyConstraint_object1;
extern PropertyRNA &rna_RigidBodyConstraint_object2;
extern PropertyRNA &rna_RigidBodyConstraint_use_breaking;
extern PropertyRNA &rna_RigidBodyConstraint_breaking_threshold;
extern PropertyRNA &rna_RigidBodyConstraint_use_override_solver_iterations;
extern PropertyRNA &rna_RigidBodyConstraint_solver_iterations;
extern PropertyRNA &rna_RigidBodyConstraint_use_limit_lin_x;
extern PropertyRNA &rna_RigidBodyConstraint_use_limit_lin_y;
extern PropertyRNA &rna_RigidBodyConstraint_use_limit_lin_z;
extern PropertyRNA &rna_RigidBodyConstraint_use_limit_ang_x;
extern PropertyRNA &rna_RigidBodyConstraint_use_limit_ang_y;
extern PropertyRNA &rna_RigidBodyConstraint_use_limit_ang_z;
extern PropertyRNA &rna_RigidBodyConstraint_use_spring_x;
extern PropertyRNA &rna_RigidBodyConstraint_use_spring_y;
extern PropertyRNA &rna_RigidBodyConstraint_use_spring_z;
extern PropertyRNA &rna_RigidBodyConstraint_use_spring_ang_x;
extern PropertyRNA &rna_RigidBodyConstraint_use_spring_ang_y;
extern PropertyRNA &rna_RigidBodyConstraint_use_spring_ang_z;
extern PropertyRNA &rna_RigidBodyConstraint_use_motor_lin;
extern PropertyRNA &rna_RigidBodyConstraint_use_motor_ang;
extern PropertyRNA &rna_RigidBodyConstraint_limit_lin_x_lower;
extern PropertyRNA &rna_RigidBodyConstraint_limit_lin_x_upper;
extern PropertyRNA &rna_RigidBodyConstraint_limit_lin_y_lower;
extern PropertyRNA &rna_RigidBodyConstraint_limit_lin_y_upper;
extern PropertyRNA &rna_RigidBodyConstraint_limit_lin_z_lower;
extern PropertyRNA &rna_RigidBodyConstraint_limit_lin_z_upper;
extern PropertyRNA &rna_RigidBodyConstraint_limit_ang_x_lower;
extern PropertyRNA &rna_RigidBodyConstraint_limit_ang_x_upper;
extern PropertyRNA &rna_RigidBodyConstraint_limit_ang_y_lower;
extern PropertyRNA &rna_RigidBodyConstraint_limit_ang_y_upper;
extern PropertyRNA &rna_RigidBodyConstraint_limit_ang_z_lower;
extern PropertyRNA &rna_RigidBodyConstraint_limit_ang_z_upper;
extern PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_x;
extern PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_y;
extern PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_z;
extern PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_ang_x;
extern PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_ang_y;
extern PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_ang_z;
extern PropertyRNA &rna_RigidBodyConstraint_spring_damping_x;
extern PropertyRNA &rna_RigidBodyConstraint_spring_damping_y;
extern PropertyRNA &rna_RigidBodyConstraint_spring_damping_z;
extern PropertyRNA &rna_RigidBodyConstraint_spring_damping_ang_x;
extern PropertyRNA &rna_RigidBodyConstraint_spring_damping_ang_y;
extern PropertyRNA &rna_RigidBodyConstraint_spring_damping_ang_z;
extern PropertyRNA &rna_RigidBodyConstraint_motor_lin_target_velocity;
extern PropertyRNA &rna_RigidBodyConstraint_motor_lin_max_impulse;
extern PropertyRNA &rna_RigidBodyConstraint_motor_ang_target_velocity;
extern PropertyRNA &rna_RigidBodyConstraint_motor_ang_max_impulse;

static PointerRNA RigidBodyWorld_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RigidBodyWorld_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RigidBodyWorld_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RigidBodyWorld_rna_properties_get(iter);
    }
}

void RigidBodyWorld_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RigidBodyWorld_rna_properties_get(iter);
    }
}

void RigidBodyWorld_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RigidBodyWorld_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RigidBodyWorld_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA RigidBodyWorld_collection_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->group);
}

void RigidBodyWorld_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
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

PointerRNA RigidBodyWorld_constraints_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->constraints);
}

void RigidBodyWorld_constraints_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->constraints) {
        id_us_min((ID *)data->constraints);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->constraints = value.data;
}

bool RigidBodyWorld_enabled_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void RigidBodyWorld_enabled_set(PointerRNA *ptr, bool value)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

float RigidBodyWorld_time_scale_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (float)(data->time_scale);
}

void RigidBodyWorld_time_scale_set(PointerRNA *ptr, float value)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    data->time_scale = (std::remove_reference_t<decltype(data->time_scale)>)std::clamp(value, 0.0f, 100.0f);
}

int RigidBodyWorld_substeps_per_frame_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (int)(data->substeps_per_frame);
}

void RigidBodyWorld_substeps_per_frame_set(PointerRNA *ptr, int value)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    data->substeps_per_frame = (std::remove_reference_t<decltype(data->substeps_per_frame)>)std::clamp(value, 1, 32767);
}

int RigidBodyWorld_solver_iterations_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (int)(data->num_solver_iterations);
}

void RigidBodyWorld_solver_iterations_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_RigidBodyWorld_num_solver_iterations_set;
    fn(ptr, value);
}

bool RigidBodyWorld_use_split_impulse_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void RigidBodyWorld_use_split_impulse_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyWorld_split_impulse_set;
    fn(ptr, value);
}

PointerRNA RigidBodyWorld_point_cache_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_RigidBodyWorld_PointCache_get;
    return fn(ptr);
}

PointerRNA RigidBodyWorld_effector_weights_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_EffectorWeights, data->effector_weights);
}

static PointerRNA RigidBodyObject_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RigidBodyObject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RigidBodyObject_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RigidBodyObject_rna_properties_get(iter);
    }
}

void RigidBodyObject_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RigidBodyObject_rna_properties_get(iter);
    }
}

void RigidBodyObject_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RigidBodyObject_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RigidBodyObject_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int RigidBodyObject_type_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (int)(data->type);
}

void RigidBodyObject_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_RigidBodyOb_type_set;
    fn(ptr, value);
}

int RigidBodyObject_mesh_source_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (int)(data->mesh_source);
}

void RigidBodyObject_mesh_source_set(PointerRNA *ptr, int value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    data->mesh_source = (std::remove_reference_t<decltype(data->mesh_source)>)value;
}

bool RigidBodyObject_enabled_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return !((uint64_t(data->flag) & 32) != 0);
}

void RigidBodyObject_enabled_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyOb_disabled_set;
    fn(ptr, value);
}

int RigidBodyObject_collision_shape_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (int)(data->shape);
}

void RigidBodyObject_collision_shape_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_RigidBodyOb_shape_set;
    fn(ptr, value);
}

bool RigidBodyObject_kinematic_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void RigidBodyObject_kinematic_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyOb_kinematic_state_set;
    fn(ptr, value);
}

bool RigidBodyObject_use_deform_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void RigidBodyObject_use_deform_set(PointerRNA *ptr, bool value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

float RigidBodyObject_mass_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->mass);
}

void RigidBodyObject_mass_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_mass_set;
    fn(ptr, value);
}

bool RigidBodyObject_use_deactivation_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void RigidBodyObject_use_deactivation_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyOb_activation_state_set;
    fn(ptr, value);
}

bool RigidBodyObject_use_start_deactivated_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void RigidBodyObject_use_start_deactivated_set(PointerRNA *ptr, bool value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

float RigidBodyObject_deactivate_linear_velocity_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->lin_sleep_thresh);
}

void RigidBodyObject_deactivate_linear_velocity_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_linear_sleepThresh_set;
    fn(ptr, value);
}

float RigidBodyObject_deactivate_angular_velocity_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->ang_sleep_thresh);
}

void RigidBodyObject_deactivate_angular_velocity_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_angular_sleepThresh_set;
    fn(ptr, value);
}

float RigidBodyObject_linear_damping_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->lin_damping);
}

void RigidBodyObject_linear_damping_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_linear_damping_set;
    fn(ptr, value);
}

float RigidBodyObject_angular_damping_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->ang_damping);
}

void RigidBodyObject_angular_damping_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_angular_damping_set;
    fn(ptr, value);
}

float RigidBodyObject_friction_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->friction);
}

void RigidBodyObject_friction_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_friction_set;
    fn(ptr, value);
}

float RigidBodyObject_restitution_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->restitution);
}

void RigidBodyObject_restitution_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_restitution_set;
    fn(ptr, value);
}

bool RigidBodyObject_use_margin_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void RigidBodyObject_use_margin_set(PointerRNA *ptr, bool value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

float RigidBodyObject_collision_margin_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->margin);
}

void RigidBodyObject_collision_margin_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_collision_margin_set;
    fn(ptr, value);
}

void RigidBodyObject_collision_collections_get(PointerRNA *ptr, bool values[20])
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 20; i++) {
        values[i] = ((uint64_t(data->col_groups) & (uint64_t(1) << i)) != 0);
    }
}

void RigidBodyObject_collision_collections_set(PointerRNA *ptr, const bool values[20])
{
    PropBooleanArraySetFunc fn = rna_RigidBodyOb_collision_collections_set;
    fn(ptr, values);
}

static PointerRNA RigidBodyConstraint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RigidBodyConstraint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RigidBodyConstraint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RigidBodyConstraint_rna_properties_get(iter);
    }
}

void RigidBodyConstraint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RigidBodyConstraint_rna_properties_get(iter);
    }
}

void RigidBodyConstraint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RigidBodyConstraint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RigidBodyConstraint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int RigidBodyConstraint_type_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (int)(data->type);
}

void RigidBodyConstraint_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_RigidBodyCon_type_set;
    fn(ptr, value);
}

int RigidBodyConstraint_spring_type_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (int)(data->spring_type);
}

void RigidBodyConstraint_spring_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_RigidBodyCon_spring_type_set;
    fn(ptr, value);
}

bool RigidBodyConstraint_enabled_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void RigidBodyConstraint_enabled_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_enabled_set;
    fn(ptr, value);
}

bool RigidBodyConstraint_disable_collisions_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void RigidBodyConstraint_disable_collisions_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_disable_collisions_set;
    fn(ptr, value);
}

PointerRNA RigidBodyConstraint_object1_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->ob1);
}

void RigidBodyConstraint_object1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob1 = value.data;
}

PointerRNA RigidBodyConstraint_object2_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->ob2);
}

void RigidBodyConstraint_object2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob2 = value.data;
}

bool RigidBodyConstraint_use_breaking_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void RigidBodyConstraint_use_breaking_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_use_breaking_set;
    fn(ptr, value);
}

float RigidBodyConstraint_breaking_threshold_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->breaking_threshold);
}

void RigidBodyConstraint_breaking_threshold_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_breaking_threshold_set;
    fn(ptr, value);
}

bool RigidBodyConstraint_use_override_solver_iterations_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void RigidBodyConstraint_use_override_solver_iterations_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_override_solver_iterations_set;
    fn(ptr, value);
}

int RigidBodyConstraint_solver_iterations_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (int)(data->num_solver_iterations);
}

void RigidBodyConstraint_solver_iterations_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_RigidBodyCon_num_solver_iterations_set;
    fn(ptr, value);
}

bool RigidBodyConstraint_use_limit_lin_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void RigidBodyConstraint_use_limit_lin_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool RigidBodyConstraint_use_limit_lin_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void RigidBodyConstraint_use_limit_lin_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool RigidBodyConstraint_use_limit_lin_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void RigidBodyConstraint_use_limit_lin_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool RigidBodyConstraint_use_limit_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void RigidBodyConstraint_use_limit_ang_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool RigidBodyConstraint_use_limit_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void RigidBodyConstraint_use_limit_ang_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool RigidBodyConstraint_use_limit_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void RigidBodyConstraint_use_limit_ang_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

bool RigidBodyConstraint_use_spring_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void RigidBodyConstraint_use_spring_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool RigidBodyConstraint_use_spring_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void RigidBodyConstraint_use_spring_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool RigidBodyConstraint_use_spring_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void RigidBodyConstraint_use_spring_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool RigidBodyConstraint_use_spring_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 65536) != 0);
}

void RigidBodyConstraint_use_spring_ang_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 65536); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(65536)); }
}

bool RigidBodyConstraint_use_spring_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 131072) != 0);
}

void RigidBodyConstraint_use_spring_ang_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 131072); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(131072)); }
}

bool RigidBodyConstraint_use_spring_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 262144) != 0);
}

void RigidBodyConstraint_use_spring_ang_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 262144); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(262144)); }
}

bool RigidBodyConstraint_use_motor_lin_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 16384) != 0);
}

void RigidBodyConstraint_use_motor_lin_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_use_motor_lin_set;
    fn(ptr, value);
}

bool RigidBodyConstraint_use_motor_ang_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return ((uint64_t(data->flag) & 32768) != 0);
}

void RigidBodyConstraint_use_motor_ang_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_use_motor_ang_set;
    fn(ptr, value);
}

float RigidBodyConstraint_limit_lin_x_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_x_lower);
}

void RigidBodyConstraint_limit_lin_x_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_x_lower = (std::remove_reference_t<decltype(data->limit_lin_x_lower)>)value;
}

float RigidBodyConstraint_limit_lin_x_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_x_upper);
}

void RigidBodyConstraint_limit_lin_x_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_x_upper = (std::remove_reference_t<decltype(data->limit_lin_x_upper)>)value;
}

float RigidBodyConstraint_limit_lin_y_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_y_lower);
}

void RigidBodyConstraint_limit_lin_y_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_y_lower = (std::remove_reference_t<decltype(data->limit_lin_y_lower)>)value;
}

float RigidBodyConstraint_limit_lin_y_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_y_upper);
}

void RigidBodyConstraint_limit_lin_y_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_y_upper = (std::remove_reference_t<decltype(data->limit_lin_y_upper)>)value;
}

float RigidBodyConstraint_limit_lin_z_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_z_lower);
}

void RigidBodyConstraint_limit_lin_z_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_z_lower = (std::remove_reference_t<decltype(data->limit_lin_z_lower)>)value;
}

float RigidBodyConstraint_limit_lin_z_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_z_upper);
}

void RigidBodyConstraint_limit_lin_z_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_z_upper = (std::remove_reference_t<decltype(data->limit_lin_z_upper)>)value;
}

float RigidBodyConstraint_limit_ang_x_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_x_lower);
}

void RigidBodyConstraint_limit_ang_x_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_x_lower = (std::remove_reference_t<decltype(data->limit_ang_x_lower)>)std::clamp(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_x_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_x_upper);
}

void RigidBodyConstraint_limit_ang_x_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_x_upper = (std::remove_reference_t<decltype(data->limit_ang_x_upper)>)std::clamp(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_y_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_y_lower);
}

void RigidBodyConstraint_limit_ang_y_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_y_lower = (std::remove_reference_t<decltype(data->limit_ang_y_lower)>)std::clamp(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_y_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_y_upper);
}

void RigidBodyConstraint_limit_ang_y_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_y_upper = (std::remove_reference_t<decltype(data->limit_ang_y_upper)>)std::clamp(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_z_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_z_lower);
}

void RigidBodyConstraint_limit_ang_z_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_z_lower = (std::remove_reference_t<decltype(data->limit_ang_z_lower)>)std::clamp(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_z_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_z_upper);
}

void RigidBodyConstraint_limit_ang_z_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_z_upper = (std::remove_reference_t<decltype(data->limit_ang_z_upper)>)std::clamp(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_spring_stiffness_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_x);
}

void RigidBodyConstraint_spring_stiffness_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_x_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_y);
}

void RigidBodyConstraint_spring_stiffness_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_y_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_z);
}

void RigidBodyConstraint_spring_stiffness_z_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_z_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_ang_x);
}

void RigidBodyConstraint_spring_stiffness_ang_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_ang_x_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_ang_y);
}

void RigidBodyConstraint_spring_stiffness_ang_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_ang_y_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_ang_z);
}

void RigidBodyConstraint_spring_stiffness_ang_z_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_ang_z_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_damping_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_x);
}

void RigidBodyConstraint_spring_damping_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_x_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_damping_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_y);
}

void RigidBodyConstraint_spring_damping_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_y_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_damping_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_z);
}

void RigidBodyConstraint_spring_damping_z_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_z_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_damping_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_ang_x);
}

void RigidBodyConstraint_spring_damping_ang_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_ang_x_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_damping_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_ang_y);
}

void RigidBodyConstraint_spring_damping_ang_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_ang_y_set;
    fn(ptr, value);
}

float RigidBodyConstraint_spring_damping_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_ang_z);
}

void RigidBodyConstraint_spring_damping_ang_z_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_ang_z_set;
    fn(ptr, value);
}

float RigidBodyConstraint_motor_lin_target_velocity_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_lin_target_velocity);
}

void RigidBodyConstraint_motor_lin_target_velocity_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_motor_lin_target_velocity_set;
    fn(ptr, value);
}

float RigidBodyConstraint_motor_lin_max_impulse_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_lin_max_impulse);
}

void RigidBodyConstraint_motor_lin_max_impulse_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_motor_lin_max_impulse_set;
    fn(ptr, value);
}

float RigidBodyConstraint_motor_ang_target_velocity_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_ang_target_velocity);
}

void RigidBodyConstraint_motor_ang_target_velocity_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_motor_ang_target_velocity_set;
    fn(ptr, value);
}

float RigidBodyConstraint_motor_ang_max_impulse_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_ang_max_impulse);
}

void RigidBodyConstraint_motor_ang_max_impulse_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_motor_ang_max_impulse_set;
    fn(ptr, value);
}

void RigidBodyWorld_convex_sweep_test_func(RigidBodyWorld *_self, ReportList *reports, Object *object, float start[3], float end[3], float object_location[3], float hitpoint[3], float normal[3], int *has_hit)
{
	rna_RigidBodyWorld_convex_sweep_test(_self, reports, object, start, end, object_location, hitpoint, normal, has_hit);
}

static void RigidBodyWorld_convex_sweep_test_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	RigidBodyWorld *_self;
	Object *object;
	const float *start;
	const float *end;
	float *object_location;
	float *hitpoint;
	float *normal;
	int *has_hit;
	char *_data;
	
	_self = (RigidBodyWorld *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((Object **)_data);
	_data += 8;
	start = ((const float *)_data);
	_data += 16;
	end = ((const float *)_data);
	_data += 16;
	object_location = ((float *)_data);
	_data += 16;
	hitpoint = ((float *)_data);
	_data += 16;
	normal = ((float *)_data);
	_data += 16;
	has_hit = ((int *)_data);
	
	rna_RigidBodyWorld_convex_sweep_test(_self, reports, object, start, end, object_location, hitpoint, normal, has_hit);
}

/* Repeated prototypes to detect errors */

void rna_RigidBodyWorld_convex_sweep_test(RigidBodyWorld *_self, ReportList *reports, Object *object, float start[3], float end[3], float object_location[3], float hitpoint[3], float normal[3], int *has_hit);



/* Rigid Body World */
static CollectionPropertyRNA rna_RigidBodyWorld_rna_properties_;
PropertyRNA &rna_RigidBodyWorld_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_rna_properties_);

static PointerPropertyRNA rna_RigidBodyWorld_rna_type_;
PropertyRNA &rna_RigidBodyWorld_rna_type = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_rna_type_);

static PointerPropertyRNA rna_RigidBodyWorld_collection_;
PropertyRNA &rna_RigidBodyWorld_collection = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_collection_);

static PointerPropertyRNA rna_RigidBodyWorld_constraints_;
PropertyRNA &rna_RigidBodyWorld_constraints = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_constraints_);

static BoolPropertyRNA rna_RigidBodyWorld_enabled_;
PropertyRNA &rna_RigidBodyWorld_enabled = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_enabled_);

static FloatPropertyRNA rna_RigidBodyWorld_time_scale_;
PropertyRNA &rna_RigidBodyWorld_time_scale = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_time_scale_);

static IntPropertyRNA rna_RigidBodyWorld_substeps_per_frame_;
PropertyRNA &rna_RigidBodyWorld_substeps_per_frame = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_substeps_per_frame_);

static IntPropertyRNA rna_RigidBodyWorld_solver_iterations_;
PropertyRNA &rna_RigidBodyWorld_solver_iterations = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_solver_iterations_);

static BoolPropertyRNA rna_RigidBodyWorld_use_split_impulse_;
PropertyRNA &rna_RigidBodyWorld_use_split_impulse = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_use_split_impulse_);

static PointerPropertyRNA rna_RigidBodyWorld_point_cache_;
PropertyRNA &rna_RigidBodyWorld_point_cache = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_point_cache_);

static PointerPropertyRNA rna_RigidBodyWorld_effector_weights_;
PropertyRNA &rna_RigidBodyWorld_effector_weights = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_effector_weights_);

static PointerPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object_;
PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_object = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_convex_sweep_test_object_);

static FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_start_;
PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_start = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_convex_sweep_test_start_);

static FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_end_;
PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_end = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_convex_sweep_test_end_);

static FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object_location_;
PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_object_location = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_convex_sweep_test_object_location_);

static FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_hitpoint_;
PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_hitpoint = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_convex_sweep_test_hitpoint_);

static FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_normal_;
PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_normal = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_convex_sweep_test_normal_);

static IntPropertyRNA rna_RigidBodyWorld_convex_sweep_test_has_hit_;
PropertyRNA &rna_RigidBodyWorld_convex_sweep_test_has_hit = reinterpret_cast<PropertyRNA &>(rna_RigidBodyWorld_convex_sweep_test_has_hit_);

FunctionRNA *rna_RigidBodyWorld_convex_sweep_test_func;
StructRNA *RNA_RigidBodyWorld;
void register_struct_RigidBodyWorld(BlenderRNA &brna)
{
	rna_RigidBodyWorld_rna_properties_ = {
		{&rna_RigidBodyWorld_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyWorld_rna_properties_begin, RigidBodyWorld_rna_properties_next, RigidBodyWorld_rna_properties_end, RigidBodyWorld_rna_properties_get, nullptr, nullptr, RigidBodyWorld_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RigidBodyWorld_rna_type_ = {
		{&rna_RigidBodyWorld_collection, 	&rna_RigidBodyWorld_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyWorld_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RigidBodyWorld_collection_ = {
		{&rna_RigidBodyWorld_constraints, 	&rna_RigidBodyWorld_rna_type,
		-1, "collection", 9437377, 1, 0, 64, 0, PropertyPathTemplateType(0), "Collection",
		"Collection containing objects participating in this simulation",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyWorld_objects_collection_update, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyWorld_collection_get, RigidBodyWorld_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_RigidBodyWorld_constraints_ = {
		{&rna_RigidBodyWorld_enabled, 	&rna_RigidBodyWorld_collection,
		-1, "constraints", 9437377, 1, 0, 64, 0, PropertyPathTemplateType(0), "Constraints",
		"Collection containing rigid body constraint objects",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyWorld_constraints_collection_update, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyWorld_constraints_get, RigidBodyWorld_constraints_set, nullptr, nullptr,RNA_Collection
	};

	rna_RigidBodyWorld_enabled_ = {
		{&rna_RigidBodyWorld_time_scale, 	&rna_RigidBodyWorld_constraints,
		-1, "enabled", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Enabled",
		"Simulation will be evaluated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyWorld_enabled_get, RigidBodyWorld_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_RigidBodyWorld_time_scale_ = {
		{&rna_RigidBodyWorld_substeps_per_frame, 	&rna_RigidBodyWorld_enabled,
		-1, "time_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Time Scale",
		"Change the speed of the simulation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyWorld_reset, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyWorld, time_scale), RawPropertyType(5), nullptr},
		RigidBodyWorld_time_scale_get, RigidBodyWorld_time_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_RigidBodyWorld_substeps_per_frame_ = {
		{&rna_RigidBodyWorld_solver_iterations, 	&rna_RigidBodyWorld_time_scale,
		-1, "substeps_per_frame", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Substeps Per Frame",
		"Number of simulation steps taken per frame (higher values are more accurate but slower)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyWorld_reset, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyWorld, substeps_per_frame), RawPropertyType(1), nullptr},
		RigidBodyWorld_substeps_per_frame_get, RigidBodyWorld_substeps_per_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 1000, 1, 32767, 1, nullptr, nullptr, 10, nullptr
	};

	rna_RigidBodyWorld_solver_iterations_ = {
		{&rna_RigidBodyWorld_use_split_impulse, 	&rna_RigidBodyWorld_substeps_per_frame,
		-1, "solver_iterations", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Solver Iterations",
		"Number of constraint solver iterations made per simulation step (higher values are more accurate but slower)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyWorld_reset, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyWorld_solver_iterations_get, RigidBodyWorld_solver_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 10, 100, 1, 1000, 1, nullptr, nullptr, 10, nullptr
	};

	rna_RigidBodyWorld_use_split_impulse_ = {
		{&rna_RigidBodyWorld_point_cache, 	&rna_RigidBodyWorld_solver_iterations,
		-1, "use_split_impulse", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Split Impulse",
		"Reduce extra velocity that can build up when objects collide (lowers simulation stability a little so use only when necessary)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyWorld_reset, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyWorld_use_split_impulse_get, RigidBodyWorld_use_split_impulse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyWorld_point_cache_ = {
		{&rna_RigidBodyWorld_effector_weights, 	&rna_RigidBodyWorld_use_split_impulse,
		-1, "point_cache", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Point Cache",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyWorld_point_cache_get, nullptr, nullptr, nullptr,RNA_PointCache
	};

	rna_RigidBodyWorld_effector_weights_ = {
		{nullptr, 	&rna_RigidBodyWorld_point_cache,
		-1, "effector_weights", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Effector Weights",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyWorld_effector_weights_get, nullptr, nullptr, nullptr,RNA_EffectorWeights
	};

	StructRNA *srna = RNA_RigidBodyWorld;
	srna->cont.properties = {&rna_RigidBodyWorld_rna_properties, &rna_RigidBodyWorld_effector_weights};
	srna->identifier = "RigidBodyWorld";
	srna->flag = 516;
	srna->name = "Rigid Body World";
	srna->description = "Self-contained rigid body simulation environment and settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RigidBodyWorld_rna_properties;
	srna->path = rna_RigidBodyWorld_path;
	{
	rna_RigidBodyWorld_convex_sweep_test_object_ = {
		{&rna_RigidBodyWorld_convex_sweep_test_start, 	nullptr,
		-1, "object", 262272, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Rigidbody object with a convex collision shape",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	static float rna_RigidBodyWorld_convex_sweep_test_start_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_RigidBodyWorld_convex_sweep_test_start_ = {
		{&rna_RigidBodyWorld_convex_sweep_test_end, 	&rna_RigidBodyWorld_convex_sweep_test_object,
		-1, "start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_RigidBodyWorld_convex_sweep_test_start_default
	};
	static float rna_RigidBodyWorld_convex_sweep_test_end_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_RigidBodyWorld_convex_sweep_test_end_ = {
		{&rna_RigidBodyWorld_convex_sweep_test_object_location, 	&rna_RigidBodyWorld_convex_sweep_test_start,
		-1, "end", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_RigidBodyWorld_convex_sweep_test_end_default
	};
	static float rna_RigidBodyWorld_convex_sweep_test_object_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_RigidBodyWorld_convex_sweep_test_object_location_ = {
		{&rna_RigidBodyWorld_convex_sweep_test_hitpoint, 	&rna_RigidBodyWorld_convex_sweep_test_end,
		-1, "object_location", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Location",
		"The hit location of this sweep test",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_RigidBodyWorld_convex_sweep_test_object_location_default
	};
	static float rna_RigidBodyWorld_convex_sweep_test_hitpoint_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_RigidBodyWorld_convex_sweep_test_hitpoint_ = {
		{&rna_RigidBodyWorld_convex_sweep_test_normal, 	&rna_RigidBodyWorld_convex_sweep_test_object_location,
		-1, "hitpoint", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Hitpoint",
		"The hit location of this sweep test",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_RigidBodyWorld_convex_sweep_test_hitpoint_default
	};
	static float rna_RigidBodyWorld_convex_sweep_test_normal_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_RigidBodyWorld_convex_sweep_test_normal_ = {
		{&rna_RigidBodyWorld_convex_sweep_test_has_hit, 	&rna_RigidBodyWorld_convex_sweep_test_hitpoint,
		-1, "normal", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Normal",
		"The face normal at the sweep test hit location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_RigidBodyWorld_convex_sweep_test_normal_default
	};
	rna_RigidBodyWorld_convex_sweep_test_has_hit_ = {
		{nullptr, 	&rna_RigidBodyWorld_convex_sweep_test_normal,
		-1, "has_hit", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"If the function has found collision point, value is 1, otherwise 0",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RigidBodyWorld_convex_sweep_test_object, &rna_RigidBodyWorld_convex_sweep_test_has_hit};
		func->identifier = "convex_sweep_test";
		func->flag = 16;
		func->description = "Sweep test convex rigidbody against the current rigidbody world";
		func->call = RigidBodyWorld_convex_sweep_test_call;
		rna_RigidBodyWorld_convex_sweep_test_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Rigid Body Object */
static CollectionPropertyRNA rna_RigidBodyObject_rna_properties_;
PropertyRNA &rna_RigidBodyObject_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_rna_properties_);

static PointerPropertyRNA rna_RigidBodyObject_rna_type_;
PropertyRNA &rna_RigidBodyObject_rna_type = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_rna_type_);

static EnumPropertyRNA rna_RigidBodyObject_type_;
PropertyRNA &rna_RigidBodyObject_type = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_type_);

static EnumPropertyRNA rna_RigidBodyObject_mesh_source_;
PropertyRNA &rna_RigidBodyObject_mesh_source = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_mesh_source_);

static BoolPropertyRNA rna_RigidBodyObject_enabled_;
PropertyRNA &rna_RigidBodyObject_enabled = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_enabled_);

static EnumPropertyRNA rna_RigidBodyObject_collision_shape_;
PropertyRNA &rna_RigidBodyObject_collision_shape = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_collision_shape_);

static BoolPropertyRNA rna_RigidBodyObject_kinematic_;
PropertyRNA &rna_RigidBodyObject_kinematic = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_kinematic_);

static BoolPropertyRNA rna_RigidBodyObject_use_deform_;
PropertyRNA &rna_RigidBodyObject_use_deform = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_use_deform_);

static FloatPropertyRNA rna_RigidBodyObject_mass_;
PropertyRNA &rna_RigidBodyObject_mass = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_mass_);

static BoolPropertyRNA rna_RigidBodyObject_use_deactivation_;
PropertyRNA &rna_RigidBodyObject_use_deactivation = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_use_deactivation_);

static BoolPropertyRNA rna_RigidBodyObject_use_start_deactivated_;
PropertyRNA &rna_RigidBodyObject_use_start_deactivated = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_use_start_deactivated_);

static FloatPropertyRNA rna_RigidBodyObject_deactivate_linear_velocity_;
PropertyRNA &rna_RigidBodyObject_deactivate_linear_velocity = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_deactivate_linear_velocity_);

static FloatPropertyRNA rna_RigidBodyObject_deactivate_angular_velocity_;
PropertyRNA &rna_RigidBodyObject_deactivate_angular_velocity = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_deactivate_angular_velocity_);

static FloatPropertyRNA rna_RigidBodyObject_linear_damping_;
PropertyRNA &rna_RigidBodyObject_linear_damping = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_linear_damping_);

static FloatPropertyRNA rna_RigidBodyObject_angular_damping_;
PropertyRNA &rna_RigidBodyObject_angular_damping = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_angular_damping_);

static FloatPropertyRNA rna_RigidBodyObject_friction_;
PropertyRNA &rna_RigidBodyObject_friction = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_friction_);

static FloatPropertyRNA rna_RigidBodyObject_restitution_;
PropertyRNA &rna_RigidBodyObject_restitution = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_restitution_);

static BoolPropertyRNA rna_RigidBodyObject_use_margin_;
PropertyRNA &rna_RigidBodyObject_use_margin = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_use_margin_);

static FloatPropertyRNA rna_RigidBodyObject_collision_margin_;
PropertyRNA &rna_RigidBodyObject_collision_margin = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_collision_margin_);

static BoolPropertyRNA rna_RigidBodyObject_collision_collections_;
PropertyRNA &rna_RigidBodyObject_collision_collections = reinterpret_cast<PropertyRNA &>(rna_RigidBodyObject_collision_collections_);

StructRNA *RNA_RigidBodyObject;
void register_struct_RigidBodyObject(BlenderRNA &brna)
{
	rna_RigidBodyObject_rna_properties_ = {
		{&rna_RigidBodyObject_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_rna_properties_begin, RigidBodyObject_rna_properties_next, RigidBodyObject_rna_properties_end, RigidBodyObject_rna_properties_get, nullptr, nullptr, RigidBodyObject_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RigidBodyObject_rna_type_ = {
		{&rna_RigidBodyObject_type, 	&rna_RigidBodyObject_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RigidBodyObject_type_ = {
		{&rna_RigidBodyObject_mesh_source, 	&rna_RigidBodyObject_rna_type,
		-1, "type", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"Role of object in Rigid Body Simulations",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_type_get, RigidBodyObject_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_rigidbody_object_type_items, 2, 0
	};

	static const EnumPropertyItem rna_RigidBodyObject_mesh_source_items[4] = {
		{0, "BASE", 0, "Base", "Base mesh"	},
		{1, "DEFORM", 0, "Deform", "Deformations (shape keys, deform modifiers)"	},
		{2, "FINAL", 0, "Final", "All modifiers"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_RigidBodyObject_mesh_source_ = {
		{&rna_RigidBodyObject_enabled, 	&rna_RigidBodyObject_type,
		-1, "mesh_source", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mesh Source",
		"Source of the mesh used to create collision shape",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_mesh_source_update, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyOb, mesh_source), RawPropertyType(1), nullptr},
		RigidBodyObject_mesh_source_get, RigidBodyObject_mesh_source_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_RigidBodyObject_mesh_source_items, 3, 0
	};

	rna_RigidBodyObject_enabled_ = {
		{&rna_RigidBodyObject_collision_shape, 	&rna_RigidBodyObject_mesh_source,
		-1, "enabled", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Enabled",
		"Rigid Body actively participates to the simulation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_enabled_get, RigidBodyObject_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_RigidBodyObject_collision_shape_ = {
		{&rna_RigidBodyObject_kinematic, 	&rna_RigidBodyObject_enabled,
		-1, "collision_shape", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collision Shape",
		"Collision Shape of object in Rigid Body Simulations",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_shape_update, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_collision_shape_get, RigidBodyObject_collision_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_rigidbody_object_shape_items, 8, 0
	};

	rna_RigidBodyObject_kinematic_ = {
		{&rna_RigidBodyObject_use_deform, 	&rna_RigidBodyObject_collision_shape,
		-1, "kinematic", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Kinematic",
		"Allow rigid body to be controlled by the animation system",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_kinematic_get, RigidBodyObject_kinematic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyObject_use_deform_ = {
		{&rna_RigidBodyObject_mass, 	&rna_RigidBodyObject_kinematic,
		-1, "use_deform", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deforming",
		"Rigid body deforms during simulation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_use_deform_get, RigidBodyObject_use_deform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyObject_mass_ = {
		{&rna_RigidBodyObject_use_deactivation, 	&rna_RigidBodyObject_use_deform,
		-1, "mass", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mass",
		"How much the object \'weighs\' irrespective of gravity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MASS) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_mass_get, RigidBodyObject_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0010000000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_RigidBodyObject_use_deactivation_ = {
		{&rna_RigidBodyObject_use_start_deactivated, 	&rna_RigidBodyObject_mass,
		-1, "use_deactivation", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Enable Deactivation",
		"Enable deactivation of resting rigid bodies (increases performance and stability but can cause glitches)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_use_deactivation_get, RigidBodyObject_use_deactivation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_RigidBodyObject_use_start_deactivated_ = {
		{&rna_RigidBodyObject_deactivate_linear_velocity, 	&rna_RigidBodyObject_use_deactivation,
		-1, "use_start_deactivated", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Start Deactivated",
		"Deactivate rigid body at the start of the simulation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_use_start_deactivated_get, RigidBodyObject_use_start_deactivated_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyObject_deactivate_linear_velocity_ = {
		{&rna_RigidBodyObject_deactivate_angular_velocity, 	&rna_RigidBodyObject_use_start_deactivated,
		-1, "deactivate_linear_velocity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Linear Velocity Deactivation Threshold",
		"Linear Velocity below which simulation stops simulating object",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_VELOCITY)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_deactivate_linear_velocity_get, RigidBodyObject_deactivate_linear_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0000000000f, FLT_MAX, 0.0000000000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.4000000060f, nullptr
	};

	rna_RigidBodyObject_deactivate_angular_velocity_ = {
		{&rna_RigidBodyObject_linear_damping, 	&rna_RigidBodyObject_deactivate_linear_velocity,
		-1, "deactivate_angular_velocity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Angular Velocity Deactivation Threshold",
		"Angular Velocity below which simulation stops simulating object",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_VELOCITY)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_deactivate_angular_velocity_get, RigidBodyObject_deactivate_angular_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0000000000f, FLT_MAX, 0.0000000000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_RigidBodyObject_linear_damping_ = {
		{&rna_RigidBodyObject_angular_damping, 	&rna_RigidBodyObject_deactivate_angular_velocity,
		-1, "linear_damping", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Linear Damping",
		"Amount of linear velocity that is lost over time",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_linear_damping_get, RigidBodyObject_linear_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0399999991f, nullptr
	};

	rna_RigidBodyObject_angular_damping_ = {
		{&rna_RigidBodyObject_friction, 	&rna_RigidBodyObject_linear_damping,
		-1, "angular_damping", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Angular Damping",
		"Amount of angular velocity that is lost over time",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_angular_damping_get, RigidBodyObject_angular_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_RigidBodyObject_friction_ = {
		{&rna_RigidBodyObject_restitution, 	&rna_RigidBodyObject_angular_damping,
		-1, "friction", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Friction",
		"Resistance of object to movement",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_friction_get, RigidBodyObject_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_RigidBodyObject_restitution_ = {
		{&rna_RigidBodyObject_use_margin, 	&rna_RigidBodyObject_friction,
		-1, "restitution", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bounciness",
		"Tendency of object to bounce after colliding with another (0 = stays still, 1 = perfectly elastic)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_restitution_get, RigidBodyObject_restitution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_RigidBodyObject_use_margin_ = {
		{&rna_RigidBodyObject_collision_margin, 	&rna_RigidBodyObject_restitution,
		-1, "use_margin", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collision Margin",
		"Use custom collision margin (some shapes will have a visible gap around them)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_shape_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_use_margin_get, RigidBodyObject_use_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyObject_collision_margin_ = {
		{&rna_RigidBodyObject_collision_collections, 	&rna_RigidBodyObject_use_margin,
		-1, "collision_margin", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collision Margin",
		"Threshold of distance near surface where collisions are still considered (best results when non-zero)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_shape_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyObject_collision_margin_get, RigidBodyObject_collision_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0099999998f, 3, nullptr, nullptr, 0.0399999991f, nullptr
	};

	static bool rna_RigidBodyObject_collision_collections_default[20] = {
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
	rna_RigidBodyObject_collision_collections_ = {
		{nullptr, 	&rna_RigidBodyObject_collision_margin,
		-1, "collision_collections", 65539, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collision Collections",
		"Collision collections rigid body belongs to",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_LAYER_MEMBER) | int(PROP_UNIT_NONE)), nullptr, 1, {20, 0, 0}, 20,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, RigidBodyObject_collision_collections_get, RigidBodyObject_collision_collections_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_RigidBodyObject_collision_collections_default
	};

	StructRNA *srna = RNA_RigidBodyObject;
	srna->cont.properties = {&rna_RigidBodyObject_rna_properties, &rna_RigidBodyObject_collision_collections};
	srna->identifier = "RigidBodyObject";
	srna->flag = 516;
	srna->name = "Rigid Body Object";
	srna->description = "Settings for object participating in Rigid Body Simulation";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RigidBodyObject_rna_properties;
	srna->path = rna_RigidBodyOb_path;
};

/* Rigid Body Constraint */
static CollectionPropertyRNA rna_RigidBodyConstraint_rna_properties_;
PropertyRNA &rna_RigidBodyConstraint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_rna_properties_);

static PointerPropertyRNA rna_RigidBodyConstraint_rna_type_;
PropertyRNA &rna_RigidBodyConstraint_rna_type = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_rna_type_);

static EnumPropertyRNA rna_RigidBodyConstraint_type_;
PropertyRNA &rna_RigidBodyConstraint_type = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_type_);

static EnumPropertyRNA rna_RigidBodyConstraint_spring_type_;
PropertyRNA &rna_RigidBodyConstraint_spring_type = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_type_);

static BoolPropertyRNA rna_RigidBodyConstraint_enabled_;
PropertyRNA &rna_RigidBodyConstraint_enabled = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_enabled_);

static BoolPropertyRNA rna_RigidBodyConstraint_disable_collisions_;
PropertyRNA &rna_RigidBodyConstraint_disable_collisions = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_disable_collisions_);

static PointerPropertyRNA rna_RigidBodyConstraint_object1_;
PropertyRNA &rna_RigidBodyConstraint_object1 = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_object1_);

static PointerPropertyRNA rna_RigidBodyConstraint_object2_;
PropertyRNA &rna_RigidBodyConstraint_object2 = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_object2_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_breaking_;
PropertyRNA &rna_RigidBodyConstraint_use_breaking = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_breaking_);

static FloatPropertyRNA rna_RigidBodyConstraint_breaking_threshold_;
PropertyRNA &rna_RigidBodyConstraint_breaking_threshold = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_breaking_threshold_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_override_solver_iterations_;
PropertyRNA &rna_RigidBodyConstraint_use_override_solver_iterations = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_override_solver_iterations_);

static IntPropertyRNA rna_RigidBodyConstraint_solver_iterations_;
PropertyRNA &rna_RigidBodyConstraint_solver_iterations = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_solver_iterations_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_x_;
PropertyRNA &rna_RigidBodyConstraint_use_limit_lin_x = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_limit_lin_x_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_y_;
PropertyRNA &rna_RigidBodyConstraint_use_limit_lin_y = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_limit_lin_y_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_z_;
PropertyRNA &rna_RigidBodyConstraint_use_limit_lin_z = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_limit_lin_z_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_x_;
PropertyRNA &rna_RigidBodyConstraint_use_limit_ang_x = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_limit_ang_x_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_y_;
PropertyRNA &rna_RigidBodyConstraint_use_limit_ang_y = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_limit_ang_y_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_z_;
PropertyRNA &rna_RigidBodyConstraint_use_limit_ang_z = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_limit_ang_z_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_spring_x_;
PropertyRNA &rna_RigidBodyConstraint_use_spring_x = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_spring_x_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_spring_y_;
PropertyRNA &rna_RigidBodyConstraint_use_spring_y = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_spring_y_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_spring_z_;
PropertyRNA &rna_RigidBodyConstraint_use_spring_z = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_spring_z_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_x_;
PropertyRNA &rna_RigidBodyConstraint_use_spring_ang_x = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_spring_ang_x_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_y_;
PropertyRNA &rna_RigidBodyConstraint_use_spring_ang_y = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_spring_ang_y_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_z_;
PropertyRNA &rna_RigidBodyConstraint_use_spring_ang_z = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_spring_ang_z_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_motor_lin_;
PropertyRNA &rna_RigidBodyConstraint_use_motor_lin = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_motor_lin_);

static BoolPropertyRNA rna_RigidBodyConstraint_use_motor_ang_;
PropertyRNA &rna_RigidBodyConstraint_use_motor_ang = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_use_motor_ang_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_lower_;
PropertyRNA &rna_RigidBodyConstraint_limit_lin_x_lower = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_lin_x_lower_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_upper_;
PropertyRNA &rna_RigidBodyConstraint_limit_lin_x_upper = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_lin_x_upper_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_lower_;
PropertyRNA &rna_RigidBodyConstraint_limit_lin_y_lower = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_lin_y_lower_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_upper_;
PropertyRNA &rna_RigidBodyConstraint_limit_lin_y_upper = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_lin_y_upper_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_lower_;
PropertyRNA &rna_RigidBodyConstraint_limit_lin_z_lower = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_lin_z_lower_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_upper_;
PropertyRNA &rna_RigidBodyConstraint_limit_lin_z_upper = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_lin_z_upper_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_lower_;
PropertyRNA &rna_RigidBodyConstraint_limit_ang_x_lower = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_ang_x_lower_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_upper_;
PropertyRNA &rna_RigidBodyConstraint_limit_ang_x_upper = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_ang_x_upper_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_lower_;
PropertyRNA &rna_RigidBodyConstraint_limit_ang_y_lower = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_ang_y_lower_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_upper_;
PropertyRNA &rna_RigidBodyConstraint_limit_ang_y_upper = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_ang_y_upper_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_lower_;
PropertyRNA &rna_RigidBodyConstraint_limit_ang_z_lower = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_ang_z_lower_);

static FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_upper_;
PropertyRNA &rna_RigidBodyConstraint_limit_ang_z_upper = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_limit_ang_z_upper_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_x_;
PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_x = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_stiffness_x_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_y_;
PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_y = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_stiffness_y_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_z_;
PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_z = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_stiffness_z_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_x_;
PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_ang_x = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_stiffness_ang_x_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_y_;
PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_ang_y = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_stiffness_ang_y_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_z_;
PropertyRNA &rna_RigidBodyConstraint_spring_stiffness_ang_z = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_stiffness_ang_z_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_x_;
PropertyRNA &rna_RigidBodyConstraint_spring_damping_x = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_damping_x_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_y_;
PropertyRNA &rna_RigidBodyConstraint_spring_damping_y = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_damping_y_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_z_;
PropertyRNA &rna_RigidBodyConstraint_spring_damping_z = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_damping_z_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_x_;
PropertyRNA &rna_RigidBodyConstraint_spring_damping_ang_x = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_damping_ang_x_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_y_;
PropertyRNA &rna_RigidBodyConstraint_spring_damping_ang_y = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_damping_ang_y_);

static FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_z_;
PropertyRNA &rna_RigidBodyConstraint_spring_damping_ang_z = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_spring_damping_ang_z_);

static FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_target_velocity_;
PropertyRNA &rna_RigidBodyConstraint_motor_lin_target_velocity = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_motor_lin_target_velocity_);

static FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_max_impulse_;
PropertyRNA &rna_RigidBodyConstraint_motor_lin_max_impulse = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_motor_lin_max_impulse_);

static FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_target_velocity_;
PropertyRNA &rna_RigidBodyConstraint_motor_ang_target_velocity = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_motor_ang_target_velocity_);

static FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_max_impulse_;
PropertyRNA &rna_RigidBodyConstraint_motor_ang_max_impulse = reinterpret_cast<PropertyRNA &>(rna_RigidBodyConstraint_motor_ang_max_impulse_);

StructRNA *RNA_RigidBodyConstraint;
void register_struct_RigidBodyConstraint(BlenderRNA &brna)
{
	rna_RigidBodyConstraint_rna_properties_ = {
		{&rna_RigidBodyConstraint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_rna_properties_begin, RigidBodyConstraint_rna_properties_next, RigidBodyConstraint_rna_properties_end, RigidBodyConstraint_rna_properties_get, nullptr, nullptr, RigidBodyConstraint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RigidBodyConstraint_rna_type_ = {
		{&rna_RigidBodyConstraint_type, 	&rna_RigidBodyConstraint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RigidBodyConstraint_type_ = {
		{&rna_RigidBodyConstraint_spring_type, 	&rna_RigidBodyConstraint_rna_type,
		-1, "type", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"Type of Rigid Body Constraint",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_type_get, RigidBodyConstraint_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_rigidbody_constraint_type_items, 8, 0
	};

	static const EnumPropertyItem rna_RigidBodyConstraint_spring_type_items[3] = {
		{0, "SPRING1", 0, "Blender 2.7", "Spring implementation used in Blender 2.7. Damping is capped at 1.0"	},
		{1, "SPRING2", 0, "Blender 2.8", "New implementation available since 2.8"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_RigidBodyConstraint_spring_type_ = {
		{&rna_RigidBodyConstraint_enabled, 	&rna_RigidBodyConstraint_type,
		-1, "spring_type", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Spring Type",
		"Which implementation of spring to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_type_get, RigidBodyConstraint_spring_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_RigidBodyConstraint_spring_type_items, 2, 0
	};

	rna_RigidBodyConstraint_enabled_ = {
		{&rna_RigidBodyConstraint_disable_collisions, 	&rna_RigidBodyConstraint_spring_type,
		-1, "enabled", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Enabled",
		"Enable this constraint",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_enabled_get, RigidBodyConstraint_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_disable_collisions_ = {
		{&rna_RigidBodyConstraint_object1, 	&rna_RigidBodyConstraint_enabled,
		-1, "disable_collisions", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Disable Collisions",
		"Disable collisions between constrained rigid bodies",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_disable_collisions_get, RigidBodyConstraint_disable_collisions_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_object1_ = {
		{&rna_RigidBodyConstraint_object2, 	&rna_RigidBodyConstraint_disable_collisions,
		-1, "object1", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object 1",
		"First Rigid Body Object to be constrained",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_object1_get, RigidBodyConstraint_object1_set, nullptr, nullptr,RNA_Object
	};

	rna_RigidBodyConstraint_object2_ = {
		{&rna_RigidBodyConstraint_use_breaking, 	&rna_RigidBodyConstraint_object1,
		-1, "object2", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object 2",
		"Second Rigid Body Object to be constrained",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_object2_get, RigidBodyConstraint_object2_set, nullptr, nullptr,RNA_Object
	};

	rna_RigidBodyConstraint_use_breaking_ = {
		{&rna_RigidBodyConstraint_breaking_threshold, 	&rna_RigidBodyConstraint_object2,
		-1, "use_breaking", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Breakable",
		"Constraint can be broken if it receives an impulse above the threshold",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_breaking_get, RigidBodyConstraint_use_breaking_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_breaking_threshold_ = {
		{&rna_RigidBodyConstraint_use_override_solver_iterations, 	&rna_RigidBodyConstraint_use_breaking,
		-1, "breaking_threshold", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Breaking Threshold",
		"Impulse threshold that must be reached for the constraint to break",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_breaking_threshold_get, RigidBodyConstraint_breaking_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, FLT_MAX, 100.0f, 2, nullptr, nullptr, 10.0f, nullptr
	};

	rna_RigidBodyConstraint_use_override_solver_iterations_ = {
		{&rna_RigidBodyConstraint_solver_iterations, 	&rna_RigidBodyConstraint_breaking_threshold,
		-1, "use_override_solver_iterations", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Solver Iterations",
		"Override the number of solver iterations for this constraint",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_override_solver_iterations_get, RigidBodyConstraint_use_override_solver_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_solver_iterations_ = {
		{&rna_RigidBodyConstraint_use_limit_lin_x, 	&rna_RigidBodyConstraint_use_override_solver_iterations,
		-1, "solver_iterations", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Solver Iterations",
		"Number of constraint solver iterations made per simulation step (higher values are more accurate but slower)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_solver_iterations_get, RigidBodyConstraint_solver_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, 1000, 1, nullptr, nullptr, 10, nullptr
	};

	rna_RigidBodyConstraint_use_limit_lin_x_ = {
		{&rna_RigidBodyConstraint_use_limit_lin_y, 	&rna_RigidBodyConstraint_solver_iterations,
		-1, "use_limit_lin_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "X Axis",
		"Limit translation on X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_limit_lin_x_get, RigidBodyConstraint_use_limit_lin_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_limit_lin_y_ = {
		{&rna_RigidBodyConstraint_use_limit_lin_z, 	&rna_RigidBodyConstraint_use_limit_lin_x,
		-1, "use_limit_lin_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Y Axis",
		"Limit translation on Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_limit_lin_y_get, RigidBodyConstraint_use_limit_lin_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_limit_lin_z_ = {
		{&rna_RigidBodyConstraint_use_limit_ang_x, 	&rna_RigidBodyConstraint_use_limit_lin_y,
		-1, "use_limit_lin_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Z Axis",
		"Limit translation on Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_limit_lin_z_get, RigidBodyConstraint_use_limit_lin_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_limit_ang_x_ = {
		{&rna_RigidBodyConstraint_use_limit_ang_y, 	&rna_RigidBodyConstraint_use_limit_lin_z,
		-1, "use_limit_ang_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "X Angle",
		"Limit rotation around X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_limit_ang_x_get, RigidBodyConstraint_use_limit_ang_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_limit_ang_y_ = {
		{&rna_RigidBodyConstraint_use_limit_ang_z, 	&rna_RigidBodyConstraint_use_limit_ang_x,
		-1, "use_limit_ang_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Y Angle",
		"Limit rotation around Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_limit_ang_y_get, RigidBodyConstraint_use_limit_ang_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_limit_ang_z_ = {
		{&rna_RigidBodyConstraint_use_spring_x, 	&rna_RigidBodyConstraint_use_limit_ang_y,
		-1, "use_limit_ang_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Z Angle",
		"Limit rotation around Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_limit_ang_z_get, RigidBodyConstraint_use_limit_ang_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_spring_x_ = {
		{&rna_RigidBodyConstraint_use_spring_y, 	&rna_RigidBodyConstraint_use_limit_ang_z,
		-1, "use_spring_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "X Spring",
		"Enable spring on X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_spring_x_get, RigidBodyConstraint_use_spring_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_spring_y_ = {
		{&rna_RigidBodyConstraint_use_spring_z, 	&rna_RigidBodyConstraint_use_spring_x,
		-1, "use_spring_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Y Spring",
		"Enable spring on Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_spring_y_get, RigidBodyConstraint_use_spring_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_spring_z_ = {
		{&rna_RigidBodyConstraint_use_spring_ang_x, 	&rna_RigidBodyConstraint_use_spring_y,
		-1, "use_spring_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Z Spring",
		"Enable spring on Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_spring_z_get, RigidBodyConstraint_use_spring_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_spring_ang_x_ = {
		{&rna_RigidBodyConstraint_use_spring_ang_y, 	&rna_RigidBodyConstraint_use_spring_z,
		-1, "use_spring_ang_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "X Angle Spring",
		"Enable spring on X rotational axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_spring_ang_x_get, RigidBodyConstraint_use_spring_ang_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_spring_ang_y_ = {
		{&rna_RigidBodyConstraint_use_spring_ang_z, 	&rna_RigidBodyConstraint_use_spring_ang_x,
		-1, "use_spring_ang_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Y Angle Spring",
		"Enable spring on Y rotational axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_spring_ang_y_get, RigidBodyConstraint_use_spring_ang_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_spring_ang_z_ = {
		{&rna_RigidBodyConstraint_use_motor_lin, 	&rna_RigidBodyConstraint_use_spring_ang_y,
		-1, "use_spring_ang_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Z Angle Spring",
		"Enable spring on Z rotational axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_spring_ang_z_get, RigidBodyConstraint_use_spring_ang_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_motor_lin_ = {
		{&rna_RigidBodyConstraint_use_motor_ang, 	&rna_RigidBodyConstraint_use_spring_ang_z,
		-1, "use_motor_lin", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Linear Motor",
		"Enable linear motor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_motor_lin_get, RigidBodyConstraint_use_motor_lin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_use_motor_ang_ = {
		{&rna_RigidBodyConstraint_limit_lin_x_lower, 	&rna_RigidBodyConstraint_use_motor_lin,
		-1, "use_motor_ang", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Angular Motor",
		"Enable angular motor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_use_motor_ang_get, RigidBodyConstraint_use_motor_ang_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_RigidBodyConstraint_limit_lin_x_lower_ = {
		{&rna_RigidBodyConstraint_limit_lin_x_upper, 	&rna_RigidBodyConstraint_use_motor_ang,
		-1, "limit_lin_x_lower", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lower X Limit",
		"Lower limit of X axis translation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_lin_x_lower), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_lin_x_lower_get, RigidBodyConstraint_limit_lin_x_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, -1.0f, nullptr
	};

	rna_RigidBodyConstraint_limit_lin_x_upper_ = {
		{&rna_RigidBodyConstraint_limit_lin_y_lower, 	&rna_RigidBodyConstraint_limit_lin_x_lower,
		-1, "limit_lin_x_upper", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Upper X Limit",
		"Upper limit of X axis translation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_lin_x_upper), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_lin_x_upper_get, RigidBodyConstraint_limit_lin_x_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_RigidBodyConstraint_limit_lin_y_lower_ = {
		{&rna_RigidBodyConstraint_limit_lin_y_upper, 	&rna_RigidBodyConstraint_limit_lin_x_upper,
		-1, "limit_lin_y_lower", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lower Y Limit",
		"Lower limit of Y axis translation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_lin_y_lower), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_lin_y_lower_get, RigidBodyConstraint_limit_lin_y_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, -1.0f, nullptr
	};

	rna_RigidBodyConstraint_limit_lin_y_upper_ = {
		{&rna_RigidBodyConstraint_limit_lin_z_lower, 	&rna_RigidBodyConstraint_limit_lin_y_lower,
		-1, "limit_lin_y_upper", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Upper Y Limit",
		"Upper limit of Y axis translation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_lin_y_upper), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_lin_y_upper_get, RigidBodyConstraint_limit_lin_y_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_RigidBodyConstraint_limit_lin_z_lower_ = {
		{&rna_RigidBodyConstraint_limit_lin_z_upper, 	&rna_RigidBodyConstraint_limit_lin_y_upper,
		-1, "limit_lin_z_lower", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lower Z Limit",
		"Lower limit of Z axis translation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_lin_z_lower), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_lin_z_lower_get, RigidBodyConstraint_limit_lin_z_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, -1.0f, nullptr
	};

	rna_RigidBodyConstraint_limit_lin_z_upper_ = {
		{&rna_RigidBodyConstraint_limit_ang_x_lower, 	&rna_RigidBodyConstraint_limit_lin_z_lower,
		-1, "limit_lin_z_upper", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Upper Z Limit",
		"Upper limit of Z axis translation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_lin_z_upper), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_lin_z_upper_get, RigidBodyConstraint_limit_lin_z_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_RigidBodyConstraint_limit_ang_x_lower_ = {
		{&rna_RigidBodyConstraint_limit_ang_x_upper, 	&rna_RigidBodyConstraint_limit_lin_z_upper,
		-1, "limit_ang_x_lower", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lower X Angle Limit",
		"Lower limit of X axis rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_ang_x_lower), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_ang_x_lower_get, RigidBodyConstraint_limit_ang_x_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, -0.7853981853f, nullptr
	};

	rna_RigidBodyConstraint_limit_ang_x_upper_ = {
		{&rna_RigidBodyConstraint_limit_ang_y_lower, 	&rna_RigidBodyConstraint_limit_ang_x_lower,
		-1, "limit_ang_x_upper", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Upper X Angle Limit",
		"Upper limit of X axis rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_ang_x_upper), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_ang_x_upper_get, RigidBodyConstraint_limit_ang_x_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, 0.7853981853f, nullptr
	};

	rna_RigidBodyConstraint_limit_ang_y_lower_ = {
		{&rna_RigidBodyConstraint_limit_ang_y_upper, 	&rna_RigidBodyConstraint_limit_ang_x_upper,
		-1, "limit_ang_y_lower", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lower Y Angle Limit",
		"Lower limit of Y axis rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_ang_y_lower), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_ang_y_lower_get, RigidBodyConstraint_limit_ang_y_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, -0.7853981853f, nullptr
	};

	rna_RigidBodyConstraint_limit_ang_y_upper_ = {
		{&rna_RigidBodyConstraint_limit_ang_z_lower, 	&rna_RigidBodyConstraint_limit_ang_y_lower,
		-1, "limit_ang_y_upper", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Upper Y Angle Limit",
		"Upper limit of Y axis rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_ang_y_upper), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_ang_y_upper_get, RigidBodyConstraint_limit_ang_y_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, 0.7853981853f, nullptr
	};

	rna_RigidBodyConstraint_limit_ang_z_lower_ = {
		{&rna_RigidBodyConstraint_limit_ang_z_upper, 	&rna_RigidBodyConstraint_limit_ang_y_upper,
		-1, "limit_ang_z_lower", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lower Z Angle Limit",
		"Lower limit of Z axis rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_ang_z_lower), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_ang_z_lower_get, RigidBodyConstraint_limit_ang_z_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, -0.7853981853f, nullptr
	};

	rna_RigidBodyConstraint_limit_ang_z_upper_ = {
		{&rna_RigidBodyConstraint_spring_stiffness_x, 	&rna_RigidBodyConstraint_limit_ang_z_lower,
		-1, "limit_ang_z_upper", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Upper Z Angle Limit",
		"Upper limit of Z axis rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RigidBodyCon, limit_ang_z_upper), RawPropertyType(5), nullptr},
		RigidBodyConstraint_limit_ang_z_upper_get, RigidBodyConstraint_limit_ang_z_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, 0.7853981853f, nullptr
	};

	rna_RigidBodyConstraint_spring_stiffness_x_ = {
		{&rna_RigidBodyConstraint_spring_stiffness_y, 	&rna_RigidBodyConstraint_limit_ang_z_upper,
		-1, "spring_stiffness_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "X Axis Stiffness",
		"Stiffness on the X axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_stiffness_x_get, RigidBodyConstraint_spring_stiffness_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_RigidBodyConstraint_spring_stiffness_y_ = {
		{&rna_RigidBodyConstraint_spring_stiffness_z, 	&rna_RigidBodyConstraint_spring_stiffness_x,
		-1, "spring_stiffness_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Y Axis Stiffness",
		"Stiffness on the Y axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_stiffness_y_get, RigidBodyConstraint_spring_stiffness_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_RigidBodyConstraint_spring_stiffness_z_ = {
		{&rna_RigidBodyConstraint_spring_stiffness_ang_x, 	&rna_RigidBodyConstraint_spring_stiffness_y,
		-1, "spring_stiffness_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Z Axis Stiffness",
		"Stiffness on the Z axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_stiffness_z_get, RigidBodyConstraint_spring_stiffness_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_RigidBodyConstraint_spring_stiffness_ang_x_ = {
		{&rna_RigidBodyConstraint_spring_stiffness_ang_y, 	&rna_RigidBodyConstraint_spring_stiffness_z,
		-1, "spring_stiffness_ang_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "X Angle Stiffness",
		"Stiffness on the X rotational axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_stiffness_ang_x_get, RigidBodyConstraint_spring_stiffness_ang_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_RigidBodyConstraint_spring_stiffness_ang_y_ = {
		{&rna_RigidBodyConstraint_spring_stiffness_ang_z, 	&rna_RigidBodyConstraint_spring_stiffness_ang_x,
		-1, "spring_stiffness_ang_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Y Angle Stiffness",
		"Stiffness on the Y rotational axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_stiffness_ang_y_get, RigidBodyConstraint_spring_stiffness_ang_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_RigidBodyConstraint_spring_stiffness_ang_z_ = {
		{&rna_RigidBodyConstraint_spring_damping_x, 	&rna_RigidBodyConstraint_spring_stiffness_ang_y,
		-1, "spring_stiffness_ang_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Z Angle Stiffness",
		"Stiffness on the Z rotational axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_stiffness_ang_z_get, RigidBodyConstraint_spring_stiffness_ang_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_RigidBodyConstraint_spring_damping_x_ = {
		{&rna_RigidBodyConstraint_spring_damping_y, 	&rna_RigidBodyConstraint_spring_stiffness_ang_z,
		-1, "spring_damping_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Damping X",
		"Damping on the X axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_damping_x_get, RigidBodyConstraint_spring_damping_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_RigidBodyConstraint_spring_damping_y_ = {
		{&rna_RigidBodyConstraint_spring_damping_z, 	&rna_RigidBodyConstraint_spring_damping_x,
		-1, "spring_damping_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Damping Y",
		"Damping on the Y axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_damping_y_get, RigidBodyConstraint_spring_damping_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_RigidBodyConstraint_spring_damping_z_ = {
		{&rna_RigidBodyConstraint_spring_damping_ang_x, 	&rna_RigidBodyConstraint_spring_damping_y,
		-1, "spring_damping_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Damping Z",
		"Damping on the Z axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_damping_z_get, RigidBodyConstraint_spring_damping_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_RigidBodyConstraint_spring_damping_ang_x_ = {
		{&rna_RigidBodyConstraint_spring_damping_ang_y, 	&rna_RigidBodyConstraint_spring_damping_z,
		-1, "spring_damping_ang_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Damping X Angle",
		"Damping on the X rotational axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_damping_ang_x_get, RigidBodyConstraint_spring_damping_ang_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_RigidBodyConstraint_spring_damping_ang_y_ = {
		{&rna_RigidBodyConstraint_spring_damping_ang_z, 	&rna_RigidBodyConstraint_spring_damping_ang_x,
		-1, "spring_damping_ang_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Damping Y Angle",
		"Damping on the Y rotational axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_damping_ang_y_get, RigidBodyConstraint_spring_damping_ang_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_RigidBodyConstraint_spring_damping_ang_z_ = {
		{&rna_RigidBodyConstraint_motor_lin_target_velocity, 	&rna_RigidBodyConstraint_spring_damping_ang_y,
		-1, "spring_damping_ang_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Damping Z Angle",
		"Damping on the Z rotational axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_spring_damping_ang_z_get, RigidBodyConstraint_spring_damping_ang_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_RigidBodyConstraint_motor_lin_target_velocity_ = {
		{&rna_RigidBodyConstraint_motor_lin_max_impulse, 	&rna_RigidBodyConstraint_spring_damping_ang_z,
		-1, "motor_lin_target_velocity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Target Velocity",
		"Target linear motor velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_VELOCITY)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_motor_lin_target_velocity_get, RigidBodyConstraint_motor_lin_target_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_RigidBodyConstraint_motor_lin_max_impulse_ = {
		{&rna_RigidBodyConstraint_motor_ang_target_velocity, 	&rna_RigidBodyConstraint_motor_lin_target_velocity,
		-1, "motor_lin_max_impulse", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Max Impulse",
		"Maximum linear motor impulse",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_motor_lin_max_impulse_get, RigidBodyConstraint_motor_lin_max_impulse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_RigidBodyConstraint_motor_ang_target_velocity_ = {
		{&rna_RigidBodyConstraint_motor_ang_max_impulse, 	&rna_RigidBodyConstraint_motor_lin_max_impulse,
		-1, "motor_ang_target_velocity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Target Velocity",
		"Target angular motor velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_motor_ang_target_velocity_get, RigidBodyConstraint_motor_ang_target_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_RigidBodyConstraint_motor_ang_max_impulse_ = {
		{nullptr, 	&rna_RigidBodyConstraint_motor_ang_target_velocity,
		-1, "motor_ang_max_impulse", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Max Impulse",
		"Maximum angular motor impulse",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RigidBodyConstraint_motor_ang_max_impulse_get, RigidBodyConstraint_motor_ang_max_impulse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	StructRNA *srna = RNA_RigidBodyConstraint;
	srna->cont.properties = {&rna_RigidBodyConstraint_rna_properties, &rna_RigidBodyConstraint_motor_ang_max_impulse};
	srna->identifier = "RigidBodyConstraint";
	srna->flag = 516;
	srna->name = "Rigid Body Constraint";
	srna->description = "Constraint influencing Objects inside Rigid Body Simulation";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RigidBodyConstraint_rna_properties;
	srna->path = rna_RigidBodyCon_path;
};


}  // namespace blender
