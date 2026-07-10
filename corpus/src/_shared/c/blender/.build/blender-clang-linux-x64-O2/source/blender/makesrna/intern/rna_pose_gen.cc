
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

#include "rna_pose.cc"
#include "rna_pose_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_Pose_rna_properties;
extern PropertyRNA &rna_Pose_rna_type;
extern PropertyRNA &rna_Pose_bones;
extern PropertyRNA &rna_Pose_ik_solver;
extern PropertyRNA &rna_Pose_ik_param;
extern PropertyRNA &rna_Pose_use_mirror_x;
extern PropertyRNA &rna_Pose_use_mirror_relative;
extern PropertyRNA &rna_Pose_use_auto_ik;
extern PropertyRNA &rna_Pose_animation_visualization;

extern FunctionRNA *rna_Pose_apply_pose_from_action_func;
extern PropertyRNA &rna_Pose_apply_pose_from_action_action;
extern PropertyRNA &rna_Pose_apply_pose_from_action_evaluation_time;

extern FunctionRNA *rna_Pose_blend_pose_from_action_func;
extern PropertyRNA &rna_Pose_blend_pose_from_action_action;
extern PropertyRNA &rna_Pose_blend_pose_from_action_blend_factor;
extern PropertyRNA &rna_Pose_blend_pose_from_action_evaluation_time;

extern FunctionRNA *rna_Pose_backup_create_func;
extern PropertyRNA &rna_Pose_backup_create_action;

extern FunctionRNA *rna_Pose_backup_restore_func;
extern PropertyRNA &rna_Pose_backup_restore_success;

extern FunctionRNA *rna_Pose_backup_clear_func;


extern PropertyRNA &rna_PoseBone_rna_properties;
extern PropertyRNA &rna_PoseBone_rna_type;
extern PropertyRNA &rna_PoseBone_constraints;
extern PropertyRNA &rna_PoseBone_name;
extern PropertyRNA &rna_PoseBone_motion_path;
extern PropertyRNA &rna_PoseBone_bone;
extern PropertyRNA &rna_PoseBone_parent;
extern PropertyRNA &rna_PoseBone_child;
extern PropertyRNA &rna_PoseBone_location;
extern PropertyRNA &rna_PoseBone_scale;
extern PropertyRNA &rna_PoseBone_rotation_quaternion;
extern PropertyRNA &rna_PoseBone_rotation_axis_angle;
extern PropertyRNA &rna_PoseBone_rotation_euler;
extern PropertyRNA &rna_PoseBone_rotation_mode;
extern PropertyRNA &rna_PoseBone_bbone_rollin;
extern PropertyRNA &rna_PoseBone_bbone_rollout;
extern PropertyRNA &rna_PoseBone_bbone_curveinx;
extern PropertyRNA &rna_PoseBone_bbone_curveinz;
extern PropertyRNA &rna_PoseBone_bbone_curveoutx;
extern PropertyRNA &rna_PoseBone_bbone_curveoutz;
extern PropertyRNA &rna_PoseBone_bbone_easein;
extern PropertyRNA &rna_PoseBone_bbone_easeout;
extern PropertyRNA &rna_PoseBone_bbone_scalein;
extern PropertyRNA &rna_PoseBone_bbone_scaleout;
extern PropertyRNA &rna_PoseBone_bbone_custom_handle_start;
extern PropertyRNA &rna_PoseBone_bbone_custom_handle_end;
extern PropertyRNA &rna_PoseBone_matrix_channel;
extern PropertyRNA &rna_PoseBone_matrix_basis;
extern PropertyRNA &rna_PoseBone_matrix;
extern PropertyRNA &rna_PoseBone_head;
extern PropertyRNA &rna_PoseBone_tail;
extern PropertyRNA &rna_PoseBone_length;
extern PropertyRNA &rna_PoseBone_is_in_ik_chain;
extern PropertyRNA &rna_PoseBone_lock_ik_x;
extern PropertyRNA &rna_PoseBone_lock_ik_y;
extern PropertyRNA &rna_PoseBone_lock_ik_z;
extern PropertyRNA &rna_PoseBone_use_ik_limit_x;
extern PropertyRNA &rna_PoseBone_use_ik_limit_y;
extern PropertyRNA &rna_PoseBone_use_ik_limit_z;
extern PropertyRNA &rna_PoseBone_use_ik_rotation_control;
extern PropertyRNA &rna_PoseBone_use_ik_linear_control;
extern PropertyRNA &rna_PoseBone_ik_min_x;
extern PropertyRNA &rna_PoseBone_ik_max_x;
extern PropertyRNA &rna_PoseBone_ik_min_y;
extern PropertyRNA &rna_PoseBone_ik_max_y;
extern PropertyRNA &rna_PoseBone_ik_min_z;
extern PropertyRNA &rna_PoseBone_ik_max_z;
extern PropertyRNA &rna_PoseBone_ik_stiffness_x;
extern PropertyRNA &rna_PoseBone_ik_stiffness_y;
extern PropertyRNA &rna_PoseBone_ik_stiffness_z;
extern PropertyRNA &rna_PoseBone_ik_stretch;
extern PropertyRNA &rna_PoseBone_ik_rotation_weight;
extern PropertyRNA &rna_PoseBone_ik_linear_weight;
extern PropertyRNA &rna_PoseBone_custom_shape;
extern PropertyRNA &rna_PoseBone_custom_shape_scale_xyz;
extern PropertyRNA &rna_PoseBone_custom_shape_translation;
extern PropertyRNA &rna_PoseBone_custom_shape_rotation_euler;
extern PropertyRNA &rna_PoseBone_use_transform_at_custom_shape;
extern PropertyRNA &rna_PoseBone_use_transform_around_custom_shape;
extern PropertyRNA &rna_PoseBone_use_custom_shape_bone_size;
extern PropertyRNA &rna_PoseBone_hide;
extern PropertyRNA &rna_PoseBone_select;
extern PropertyRNA &rna_PoseBone_custom_shape_transform;
extern PropertyRNA &rna_PoseBone_custom_shape_wire_width;
extern PropertyRNA &rna_PoseBone_color;
extern PropertyRNA &rna_PoseBone_lock_location;
extern PropertyRNA &rna_PoseBone_lock_rotation;
extern PropertyRNA &rna_PoseBone_lock_rotation_w;
extern PropertyRNA &rna_PoseBone_lock_rotations_4d;
extern PropertyRNA &rna_PoseBone_lock_scale;

extern FunctionRNA *rna_PoseBone_bl_system_properties_get_func;
extern PropertyRNA &rna_PoseBone_bl_system_properties_get_do_create;
extern PropertyRNA &rna_PoseBone_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_PoseBone_evaluate_envelope_func;
extern PropertyRNA &rna_PoseBone_evaluate_envelope_point;
extern PropertyRNA &rna_PoseBone_evaluate_envelope_factor;

extern FunctionRNA *rna_PoseBone_bbone_segment_index_func;
extern PropertyRNA &rna_PoseBone_bbone_segment_index_point;
extern PropertyRNA &rna_PoseBone_bbone_segment_index_index;
extern PropertyRNA &rna_PoseBone_bbone_segment_index_blend_next;

extern FunctionRNA *rna_PoseBone_bbone_segment_matrix_func;
extern PropertyRNA &rna_PoseBone_bbone_segment_matrix_matrix_return;
extern PropertyRNA &rna_PoseBone_bbone_segment_matrix_index;
extern PropertyRNA &rna_PoseBone_bbone_segment_matrix_rest;

extern FunctionRNA *rna_PoseBone_compute_bbone_handles_func;
extern PropertyRNA &rna_PoseBone_compute_bbone_handles_handle1;
extern PropertyRNA &rna_PoseBone_compute_bbone_handles_roll1;
extern PropertyRNA &rna_PoseBone_compute_bbone_handles_handle2;
extern PropertyRNA &rna_PoseBone_compute_bbone_handles_roll2;
extern PropertyRNA &rna_PoseBone_compute_bbone_handles_rest;
extern PropertyRNA &rna_PoseBone_compute_bbone_handles_ease;
extern PropertyRNA &rna_PoseBone_compute_bbone_handles_offsets;



extern PropertyRNA &rna_PoseBoneConstraints_rna_properties;
extern PropertyRNA &rna_PoseBoneConstraints_rna_type;
extern PropertyRNA &rna_PoseBoneConstraints_active;

extern FunctionRNA *rna_PoseBoneConstraints_new_func;
extern PropertyRNA &rna_PoseBoneConstraints_new_constraint;
extern PropertyRNA &rna_PoseBoneConstraints_new_type;

extern FunctionRNA *rna_PoseBoneConstraints_remove_func;
extern PropertyRNA &rna_PoseBoneConstraints_remove_constraint;

extern FunctionRNA *rna_PoseBoneConstraints_move_func;
extern PropertyRNA &rna_PoseBoneConstraints_move_from_index;
extern PropertyRNA &rna_PoseBoneConstraints_move_to_index;

extern FunctionRNA *rna_PoseBoneConstraints_copy_func;
extern PropertyRNA &rna_PoseBoneConstraints_copy_constraint;
extern PropertyRNA &rna_PoseBoneConstraints_copy_new_constraint;



extern PropertyRNA &rna_IKParam_rna_properties;
extern PropertyRNA &rna_IKParam_rna_type;
extern PropertyRNA &rna_IKParam_ik_solver;


extern PropertyRNA &rna_IKParam_rna_properties;
extern PropertyRNA &rna_IKParam_rna_type;
extern PropertyRNA &rna_IKParam_ik_solver;

extern PropertyRNA &rna_Itasc_precision;
extern PropertyRNA &rna_Itasc_iterations;
extern PropertyRNA &rna_Itasc_step_count;
extern PropertyRNA &rna_Itasc_translate_root_bones;
extern PropertyRNA &rna_Itasc_mode;
extern PropertyRNA &rna_Itasc_reiteration_method;
extern PropertyRNA &rna_Itasc_use_auto_step;
extern PropertyRNA &rna_Itasc_step_min;
extern PropertyRNA &rna_Itasc_step_max;
extern PropertyRNA &rna_Itasc_feedback;
extern PropertyRNA &rna_Itasc_velocity_max;
extern PropertyRNA &rna_Itasc_solver;
extern PropertyRNA &rna_Itasc_damping_max;
extern PropertyRNA &rna_Itasc_damping_epsilon;

static PointerRNA Pose_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Pose_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Pose_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Pose_rna_properties_get(iter);
    }
}

void Pose_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Pose_rna_properties_get(iter);
    }
}

void Pose_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Pose_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Pose_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA Pose_bones_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_PoseBone, rna_iterator_listbase_get(iter));
}

void Pose_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Pose_bones;

    rna_iterator_listbase_begin(iter, ptr, &data->chanbase, nullptr);

    if (iter->valid) {
        iter->ptr = Pose_bones_get(iter);
    }
}

void Pose_bones_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Pose_bones_get(iter);
    }
}

void Pose_bones_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Pose_bones_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Pose_bones_begin(&iter, ptr);

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
        if (found) { *r_ptr = Pose_bones_get(&iter); }
    }

    Pose_bones_end(&iter);

    return found;
}

bool Pose_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_PoseBones_lookup_string;
    return fn(ptr, key, r_ptr);
}

int Pose_ik_solver_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return (int)(data->iksolver);
}

void Pose_ik_solver_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Pose_ik_solver_set;
    fn(ptr, value);
}

PointerRNA Pose_ik_param_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Pose_ikparam_get;
    return fn(ptr);
}

bool Pose_use_mirror_x_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void Pose_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    bPose *data = (bPose *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool Pose_use_mirror_relative_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void Pose_use_mirror_relative_set(PointerRNA *ptr, bool value)
{
    bPose *data = (bPose *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

bool Pose_use_auto_ik_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void Pose_use_auto_ik_set(PointerRNA *ptr, bool value)
{
    bPose *data = (bPose *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

PointerRNA Pose_animation_visualization_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimViz, &data->avs);
}

static PointerRNA PoseBone_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PoseBone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PoseBone_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PoseBone_rna_properties_get(iter);
    }
}

void PoseBone_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PoseBone_rna_properties_get(iter);
    }
}

void PoseBone_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PoseBone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PoseBone_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA PoseBone_constraints_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Constraint, rna_iterator_listbase_get(iter));
}

void PoseBone_constraints_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PoseBone_constraints;

    rna_iterator_listbase_begin(iter, ptr, &data->constraints, nullptr);

    if (iter->valid) {
        iter->ptr = PoseBone_constraints_get(iter);
    }
}

void PoseBone_constraints_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PoseBone_constraints_get(iter);
    }
}

void PoseBone_constraints_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PoseBone_constraints_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    PoseBone_constraints_begin(&iter, ptr);

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
        if (found) { *r_ptr = PoseBone_constraints_get(&iter); }
    }

    PoseBone_constraints_end(&iter);

    return found;
}

int Constraint_name_length(PointerRNA *);
void Constraint_name_get(PointerRNA *, char *);

bool PoseBone_constraints_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    PoseBone_constraints_begin(&iter, ptr);

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
        PoseBone_constraints_next(&iter);
    }
    PoseBone_constraints_end(&iter);

    return found;
}

void PoseBone_name_get(PointerRNA *ptr, char *value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int PoseBone_name_length(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return strlen(data->name);
}

void PoseBone_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_PoseChannel_name_set;
    fn(ptr, value);
}

PointerRNA PoseBone_motion_path_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MotionPath, data->mpath);
}

PointerRNA PoseBone_bone_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_PoseChannel_bone_get;
    return fn(ptr);
}

PointerRNA PoseBone_parent_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PoseBone, data->parent);
}

PointerRNA PoseBone_child_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PoseBone, data->child);
}

void PoseBone_location_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->loc)[i]);
    }
}

void PoseBone_location_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->loc)[i] = values[i];
    }
}

void PoseBone_scale_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

void PoseBone_scale_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->scale)[i] = values[i];
    }
}

void PoseBone_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->quat)[i]);
    }
}

void PoseBone_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->quat)[i] = values[i];
    }
}

void PoseBone_rotation_axis_angle_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_PoseChannel_rotation_axis_angle_get;
    fn(ptr, values);
}

void PoseBone_rotation_axis_angle_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_PoseChannel_rotation_axis_angle_set;
    fn(ptr, values);
}

void PoseBone_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->eul)[i]);
    }
}

void PoseBone_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->eul)[i] = values[i];
    }
}

int PoseBone_rotation_mode_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (int)(data->rotmode);
}

void PoseBone_rotation_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_PoseChannel_rotation_mode_set;
    fn(ptr, value);
}

float PoseBone_bbone_rollin_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->roll1);
}

void PoseBone_bbone_rollin_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->roll1 = (std::remove_reference_t<decltype(data->roll1)>)value;
}

float PoseBone_bbone_rollout_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->roll2);
}

void PoseBone_bbone_rollout_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->roll2 = (std::remove_reference_t<decltype(data->roll2)>)value;
}

float PoseBone_bbone_curveinx_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_in_x);
}

void PoseBone_bbone_curveinx_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->curve_in_x = (std::remove_reference_t<decltype(data->curve_in_x)>)value;
}

float PoseBone_bbone_curveinz_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_in_z);
}

void PoseBone_bbone_curveinz_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->curve_in_z = (std::remove_reference_t<decltype(data->curve_in_z)>)value;
}

float PoseBone_bbone_curveoutx_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_out_x);
}

void PoseBone_bbone_curveoutx_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->curve_out_x = (std::remove_reference_t<decltype(data->curve_out_x)>)value;
}

float PoseBone_bbone_curveoutz_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_out_z);
}

void PoseBone_bbone_curveoutz_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->curve_out_z = (std::remove_reference_t<decltype(data->curve_out_z)>)value;
}

float PoseBone_bbone_easein_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ease1);
}

void PoseBone_bbone_easein_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->ease1 = (std::remove_reference_t<decltype(data->ease1)>)value;
}

float PoseBone_bbone_easeout_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ease2);
}

void PoseBone_bbone_easeout_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->ease2 = (std::remove_reference_t<decltype(data->ease2)>)value;
}

void PoseBone_bbone_scalein_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_in)[i]);
    }
}

void PoseBone_bbone_scalein_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->scale_in)[i] = values[i];
    }
}

void PoseBone_bbone_scaleout_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_out)[i]);
    }
}

void PoseBone_bbone_scaleout_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->scale_out)[i] = values[i];
    }
}

PointerRNA PoseBone_bbone_custom_handle_start_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PoseBone, data->bbone_prev);
}

PointerRNA PoseBone_bbone_custom_handle_end_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PoseBone, data->bbone_next);
}

void PoseBone_matrix_channel_get(PointerRNA *ptr, float values[16])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->chan_mat)[i]);
    }
}

void PoseBone_matrix_basis_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_PoseChannel_matrix_basis_get;
    fn(ptr, values);
}

void PoseBone_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_PoseChannel_matrix_basis_set;
    fn(ptr, values);
}

void PoseBone_matrix_get(PointerRNA *ptr, float values[16])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->pose_mat)[i]);
    }
}

void PoseBone_matrix_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_PoseChannel_matrix_set;
    fn(ptr, values);
}

void PoseBone_head_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_head)[i]);
    }
}

void PoseBone_tail_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_tail)[i]);
    }
}

float PoseBone_length_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_PoseChannel_length_get;
    return fn(ptr);
}

bool PoseBone_is_in_ik_chain_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_PoseChannel_has_ik_get;
    return fn(ptr);
}

bool PoseBone_lock_ik_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->ikflag) & 1) != 0);
}

void PoseBone_lock_ik_x_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) | 1); }
    else { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) & ~uint64_t(1)); }
}

bool PoseBone_lock_ik_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->ikflag) & 2) != 0);
}

void PoseBone_lock_ik_y_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) | 2); }
    else { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) & ~uint64_t(2)); }
}

bool PoseBone_lock_ik_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->ikflag) & 4) != 0);
}

void PoseBone_lock_ik_z_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) | 4); }
    else { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) & ~uint64_t(4)); }
}

bool PoseBone_use_ik_limit_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->ikflag) & 8) != 0);
}

void PoseBone_use_ik_limit_x_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) | 8); }
    else { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) & ~uint64_t(8)); }
}

bool PoseBone_use_ik_limit_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->ikflag) & 16) != 0);
}

void PoseBone_use_ik_limit_y_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) | 16); }
    else { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) & ~uint64_t(16)); }
}

bool PoseBone_use_ik_limit_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->ikflag) & 32) != 0);
}

void PoseBone_use_ik_limit_z_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) | 32); }
    else { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) & ~uint64_t(32)); }
}

bool PoseBone_use_ik_rotation_control_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->ikflag) & 64) != 0);
}

void PoseBone_use_ik_rotation_control_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) | 64); }
    else { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) & ~uint64_t(64)); }
}

bool PoseBone_use_ik_linear_control_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->ikflag) & 128) != 0);
}

void PoseBone_use_ik_linear_control_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) | 128); }
    else { data->ikflag = std::remove_reference_t<decltype(data->ikflag)>(uint64_t(data->ikflag) & ~uint64_t(128)); }
}

float PoseBone_ik_min_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmin[0]);
}

void PoseBone_ik_min_x_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmin[0] = (std::remove_reference_t<decltype(data->limitmin[0])>)std::clamp(value, -3.1415927410f, 0.0f);
}

float PoseBone_ik_max_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmax[0]);
}

void PoseBone_ik_max_x_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmax[0] = (std::remove_reference_t<decltype(data->limitmax[0])>)std::clamp(value, 0.0f, 3.1415927410f);
}

float PoseBone_ik_min_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmin[1]);
}

void PoseBone_ik_min_y_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmin[1] = (std::remove_reference_t<decltype(data->limitmin[1])>)std::clamp(value, -3.1415927410f, 0.0f);
}

float PoseBone_ik_max_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmax[1]);
}

void PoseBone_ik_max_y_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmax[1] = (std::remove_reference_t<decltype(data->limitmax[1])>)std::clamp(value, 0.0f, 3.1415927410f);
}

float PoseBone_ik_min_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmin[2]);
}

void PoseBone_ik_min_z_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmin[2] = (std::remove_reference_t<decltype(data->limitmin[2])>)std::clamp(value, -3.1415927410f, 0.0f);
}

float PoseBone_ik_max_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmax[2]);
}

void PoseBone_ik_max_z_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmax[2] = (std::remove_reference_t<decltype(data->limitmax[2])>)std::clamp(value, 0.0f, 3.1415927410f);
}

float PoseBone_ik_stiffness_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->stiffness[0]);
}

void PoseBone_ik_stiffness_x_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->stiffness[0] = (std::remove_reference_t<decltype(data->stiffness[0])>)std::clamp(value, 0.0f, 0.9900000095f);
}

float PoseBone_ik_stiffness_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->stiffness[1]);
}

void PoseBone_ik_stiffness_y_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->stiffness[1] = (std::remove_reference_t<decltype(data->stiffness[1])>)std::clamp(value, 0.0f, 0.9900000095f);
}

float PoseBone_ik_stiffness_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->stiffness[2]);
}

void PoseBone_ik_stiffness_z_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->stiffness[2] = (std::remove_reference_t<decltype(data->stiffness[2])>)std::clamp(value, 0.0f, 0.9900000095f);
}

float PoseBone_ik_stretch_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ikstretch);
}

void PoseBone_ik_stretch_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->ikstretch = (std::remove_reference_t<decltype(data->ikstretch)>)std::clamp(value, 0.0f, 1.0f);
}

float PoseBone_ik_rotation_weight_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ikrotweight);
}

void PoseBone_ik_rotation_weight_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->ikrotweight = (std::remove_reference_t<decltype(data->ikrotweight)>)std::clamp(value, 0.0f, 1.0f);
}

float PoseBone_ik_linear_weight_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->iklinweight);
}

void PoseBone_ik_linear_weight_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->iklinweight = (std::remove_reference_t<decltype(data->iklinweight)>)std::clamp(value, 0.0f, 1.0f);
}

PointerRNA PoseBone_custom_shape_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->custom);
}

void PoseBone_custom_shape_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Pose_custom_shape_set;
    fn(ptr, value, reports);
}

void PoseBone_custom_shape_scale_xyz_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->custom_scale_xyz)[i]);
    }
}

void PoseBone_custom_shape_scale_xyz_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->custom_scale_xyz)[i] = values[i];
    }
}

void PoseBone_custom_shape_translation_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->custom_translation)[i]);
    }
}

void PoseBone_custom_shape_translation_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->custom_translation)[i] = values[i];
    }
}

void PoseBone_custom_shape_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->custom_rotation_euler)[i]);
    }
}

void PoseBone_custom_shape_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->custom_rotation_euler)[i] = values[i];
    }
}

bool PoseBone_use_transform_at_custom_shape_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void PoseBone_use_transform_at_custom_shape_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool PoseBone_use_transform_around_custom_shape_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void PoseBone_use_transform_around_custom_shape_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool PoseBone_use_custom_shape_bone_size_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return !((uint64_t(data->drawflag) & 1) != 0);
}

void PoseBone_use_custom_shape_bone_size_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (!value) { data->drawflag = std::remove_reference_t<decltype(data->drawflag)>(uint64_t(data->drawflag) | 1); }
    else { data->drawflag = std::remove_reference_t<decltype(data->drawflag)>(uint64_t(data->drawflag) & ~uint64_t(1)); }
}

bool PoseBone_hide_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->drawflag) & 2) != 0);
}

void PoseBone_hide_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->drawflag = std::remove_reference_t<decltype(data->drawflag)>(uint64_t(data->drawflag) | 2); }
    else { data->drawflag = std::remove_reference_t<decltype(data->drawflag)>(uint64_t(data->drawflag) & ~uint64_t(2)); }
}

bool PoseBone_select_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void PoseBone_select_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

PointerRNA PoseBone_custom_shape_transform_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PoseBone, data->custom_tx);
}

void PoseBone_custom_shape_transform_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_PoseChannel_custom_shape_transform_set;
    fn(ptr, value, reports);
}

float PoseBone_custom_shape_wire_width_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->custom_shape_wire_width);
}

void PoseBone_custom_shape_wire_width_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->custom_shape_wire_width = (std::remove_reference_t<decltype(data->custom_shape_wire_width)>)std::clamp(value, 1.0f, 16.0f);
}

PointerRNA PoseBone_color_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_BoneColor, &data->color);
}

void PoseBone_lock_location_get(PointerRNA *ptr, bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = ((uint64_t(data->protectflag) & (uint64_t(1) << i)) != 0);
    }
}

void PoseBone_lock_location_set(PointerRNA *ptr, const bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) | (uint64_t(1) << i)); }
        else { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) & ~(uint64_t(1) << i)); }
    }
}

void PoseBone_lock_rotation_get(PointerRNA *ptr, bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = ((uint64_t(data->protectflag) & (uint64_t(8) << i)) != 0);
    }
}

void PoseBone_lock_rotation_set(PointerRNA *ptr, const bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) | (uint64_t(8) << i)); }
        else { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) & ~(uint64_t(8) << i)); }
    }
}

bool PoseBone_lock_rotation_w_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->protectflag) & 512) != 0);
}

void PoseBone_lock_rotation_w_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) | 512); }
    else { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) & ~uint64_t(512)); }
}

bool PoseBone_lock_rotations_4d_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return ((uint64_t(data->protectflag) & 1024) != 0);
}

void PoseBone_lock_rotations_4d_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) | 1024); }
    else { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) & ~uint64_t(1024)); }
}

void PoseBone_lock_scale_get(PointerRNA *ptr, bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = ((uint64_t(data->protectflag) & (uint64_t(64) << i)) != 0);
    }
}

void PoseBone_lock_scale_set(PointerRNA *ptr, const bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) | (uint64_t(64) << i)); }
        else { data->protectflag = std::remove_reference_t<decltype(data->protectflag)>(uint64_t(data->protectflag) & ~(uint64_t(64) << i)); }
    }
}

static PointerRNA PoseBoneConstraints_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PoseBoneConstraints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PoseBoneConstraints_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PoseBoneConstraints_rna_properties_get(iter);
    }
}

void PoseBoneConstraints_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PoseBoneConstraints_rna_properties_get(iter);
    }
}

void PoseBoneConstraints_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PoseBoneConstraints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PoseBoneConstraints_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA PoseBoneConstraints_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_PoseChannel_active_constraint_get;
    return fn(ptr);
}

void PoseBoneConstraints_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_PoseChannel_active_constraint_set;
    fn(ptr, value, reports);
}

static PointerRNA IKParam_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void IKParam_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IKParam_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = IKParam_rna_properties_get(iter);
    }
}

void IKParam_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IKParam_rna_properties_get(iter);
    }
}

void IKParam_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IKParam_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA IKParam_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int IKParam_ik_solver_get(PointerRNA *ptr)
{
    bIKParam *data = (bIKParam *)(ptr->data);
    return (int)(data->iksolver);
}

float Itasc_precision_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->precision);
}

void Itasc_precision_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->precision = (std::remove_reference_t<decltype(data->precision)>)std::clamp(value, 0.0f, 0.1000000015f);
}

int Itasc_iterations_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (int)(data->numiter);
}

void Itasc_iterations_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->numiter = (std::remove_reference_t<decltype(data->numiter)>)std::clamp(value, 0, 1000);
}

int Itasc_step_count_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (int)(data->numstep);
}

void Itasc_step_count_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->numstep = (std::remove_reference_t<decltype(data->numstep)>)std::clamp(value, 1, 50);
}

bool Itasc_translate_root_bones_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void Itasc_translate_root_bones_set(PointerRNA *ptr, bool value)
{
    bItasc *data = (bItasc *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int Itasc_mode_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (uint64_t(data->flag) & 8);
}

void Itasc_mode_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

int Itasc_reiteration_method_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (uint64_t(data->flag) & 6);
}

void Itasc_reiteration_method_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(6));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

bool Itasc_use_auto_step_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void Itasc_use_auto_step_set(PointerRNA *ptr, bool value)
{
    bItasc *data = (bItasc *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

float Itasc_step_min_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->minstep);
}

void Itasc_step_min_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->minstep = (std::remove_reference_t<decltype(data->minstep)>)std::clamp(value, 0.0f, 0.1000000015f);
}

float Itasc_step_max_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->maxstep);
}

void Itasc_step_max_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->maxstep = (std::remove_reference_t<decltype(data->maxstep)>)std::clamp(value, 0.0f, 1.0f);
}

float Itasc_feedback_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->feedback);
}

void Itasc_feedback_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->feedback = (std::remove_reference_t<decltype(data->feedback)>)std::clamp(value, 0.0f, 100.0f);
}

float Itasc_velocity_max_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->maxvel);
}

void Itasc_velocity_max_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->maxvel = (std::remove_reference_t<decltype(data->maxvel)>)std::clamp(value, 0.0f, 100.0f);
}

int Itasc_solver_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (int)(data->solver);
}

void Itasc_solver_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->solver = (std::remove_reference_t<decltype(data->solver)>)value;
}

float Itasc_damping_max_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->dampmax);
}

void Itasc_damping_max_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->dampmax = (std::remove_reference_t<decltype(data->dampmax)>)std::clamp(value, 0.0f, 1.0f);
}

float Itasc_damping_epsilon_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->dampeps);
}

void Itasc_damping_epsilon_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->dampeps = (std::remove_reference_t<decltype(data->dampeps)>)std::clamp(value, 0.0f, 1.0f);
}

void Pose_apply_pose_from_action_func(ID *_selfid, bContext *C, bAction *action, float evaluation_time)
{
	rna_Pose_apply_pose_from_action(_selfid, C, action, evaluation_time);
}

static void Pose_apply_pose_from_action_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bAction *action;
	float evaluation_time;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	action = *((bAction **)_data);
	_data += 8;
	evaluation_time = *((float *)_data);
	
	rna_Pose_apply_pose_from_action(_selfid, C, action, evaluation_time);
}

void Pose_blend_pose_from_action_func(ID *_selfid, bContext *C, bAction *action, float blend_factor, float evaluation_time)
{
	rna_Pose_blend_pose_from_action(_selfid, C, action, blend_factor, evaluation_time);
}

static void Pose_blend_pose_from_action_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bAction *action;
	float blend_factor;
	float evaluation_time;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	action = *((bAction **)_data);
	_data += 8;
	blend_factor = *((float *)_data);
	_data += 8;
	evaluation_time = *((float *)_data);
	
	rna_Pose_blend_pose_from_action(_selfid, C, action, blend_factor, evaluation_time);
}

void Pose_backup_create_func(ID *_selfid, bAction *action)
{
	rna_Pose_backup_create(_selfid, action);
}

static void Pose_backup_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bAction *action;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	action = *((bAction **)_data);
	
	rna_Pose_backup_create(_selfid, action);
}

bool Pose_backup_restore_func(ID *_selfid, bContext *C)
{
	return rna_Pose_backup_restore(_selfid, C);
}

static void Pose_backup_restore_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bool success;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	success = rna_Pose_backup_restore(_selfid, C);
	*((bool *)_retdata) = success;
}

void Pose_backup_clear_func(ID *_selfid)
{
	rna_Pose_backup_clear(_selfid);
}

static void Pose_backup_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	_selfid = (ID *)_ptr->owner_id;
	
	rna_Pose_backup_clear(_selfid);
}

/* Repeated prototypes to detect errors */

void rna_Pose_apply_pose_from_action(ID *_selfid, bContext *C, bAction *action, float evaluation_time);
void rna_Pose_blend_pose_from_action(ID *_selfid, bContext *C, bAction *action, float blend_factor, float evaluation_time);
void rna_Pose_backup_create(ID *_selfid, bAction *action);
bool rna_Pose_backup_restore(ID *_selfid, bContext *C);
void rna_Pose_backup_clear(ID *_selfid);

IDPropertyGroup *PoseBone_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void PoseBone_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	bool do_create;
	IDPropertyGroup *system_properties;
	char *_data, *_retdata;
	
	_self = *_ptr;
	_data = (char *)_parms->data;
	do_create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	system_properties = rna_struct_system_properties_get_func(_self, do_create);
	*((IDPropertyGroup **)_retdata) = system_properties;
}

float PoseBone_evaluate_envelope_func(ID *_selfid, bPoseChannel *_self, float point[3])
{
	return rna_PoseBone_do_envelope(_selfid, _self, point);
}

static void PoseBone_evaluate_envelope_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bPoseChannel *_self;
	const float *point;
	float factor;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((const float *)_data);
	_data += 16;
	_retdata = _data;
	
	factor = rna_PoseBone_do_envelope(_selfid, _self, point);
	*((float *)_retdata) = factor;
}

void PoseBone_bbone_segment_index_func(ID *_selfid, bPoseChannel *_self, ReportList *reports, float point[3], int *index, float *blend_next)
{
	rna_PoseBone_bbone_segment_index(_selfid, _self, reports, point, index, blend_next);
}

static void PoseBone_bbone_segment_index_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bPoseChannel *_self;
	const float *point;
	int *index;
	float *blend_next;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((const float *)_data);
	_data += 16;
	index = ((int *)_data);
	_data += 8;
	blend_next = ((float *)_data);
	
	rna_PoseBone_bbone_segment_index(_selfid, _self, reports, point, index, blend_next);
}

void PoseBone_bbone_segment_matrix_func(ID *_selfid, bPoseChannel *_self, ReportList *reports, float matrix_return[16], int index, bool rest)
{
	rna_PoseBone_bbone_segment_matrix(_selfid, _self, reports, matrix_return, index, rest);
}

static void PoseBone_bbone_segment_matrix_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bPoseChannel *_self;
	float *matrix_return;
	int index;
	bool rest;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	matrix_return = ((float *)_data);
	_data += 64;
	index = *((int *)_data);
	_data += 8;
	rest = *((bool *)_data);
	
	rna_PoseBone_bbone_segment_matrix(_selfid, _self, reports, matrix_return, index, rest);
}

void PoseBone_compute_bbone_handles_func(ID *_selfid, bPoseChannel *_self, ReportList *reports, float handle1[3], float *roll1, float handle2[3], float *roll2, bool rest, bool ease, bool offsets)
{
	rna_PoseBone_compute_bbone_handles(_selfid, _self, reports, handle1, roll1, handle2, roll2, rest, ease, offsets);
}

static void PoseBone_compute_bbone_handles_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bPoseChannel *_self;
	float *handle1;
	float *roll1;
	float *handle2;
	float *roll2;
	bool rest;
	bool ease;
	bool offsets;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	handle1 = ((float *)_data);
	_data += 16;
	roll1 = ((float *)_data);
	_data += 8;
	handle2 = ((float *)_data);
	_data += 16;
	roll2 = ((float *)_data);
	_data += 8;
	rest = *((bool *)_data);
	_data += 8;
	ease = *((bool *)_data);
	_data += 8;
	offsets = *((bool *)_data);
	
	rna_PoseBone_compute_bbone_handles(_selfid, _self, reports, handle1, roll1, handle2, roll2, rest, ease, offsets);
}

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);
float rna_PoseBone_do_envelope(ID *_selfid, bPoseChannel *_self, float point[3]);
void rna_PoseBone_bbone_segment_index(ID *_selfid, bPoseChannel *_self, ReportList *reports, float point[3], int *index, float *blend_next);
void rna_PoseBone_bbone_segment_matrix(ID *_selfid, bPoseChannel *_self, ReportList *reports, float matrix_return[16], int index, bool rest);
void rna_PoseBone_compute_bbone_handles(ID *_selfid, bPoseChannel *_self, ReportList *reports, float handle1[3], float *roll1, float handle2[3], float *roll2, bool rest, bool ease, bool offsets);

bConstraint *PoseBoneConstraints_new_func(ID *_selfid, bPoseChannel *_self, Main *bmain, int type)
{
	return rna_PoseChannel_constraints_new(_selfid, _self, bmain, type);
}

static void PoseBoneConstraints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bPoseChannel *_self;
	bConstraint *constraint;
	int type;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	type = *((int *)_data);
	
	constraint = rna_PoseChannel_constraints_new(_selfid, _self, CTX_data_main(C), type);
	*((bConstraint **)_retdata) = constraint;
}

void PoseBoneConstraints_remove_func(ID *_selfid, bPoseChannel *_self, Main *bmain, ReportList *reports, PointerRNA *constraint)
{
	rna_PoseChannel_constraints_remove(_selfid, _self, bmain, reports, constraint);
}

static void PoseBoneConstraints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bPoseChannel *_self;
	PointerRNA *constraint;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((PointerRNA **)_data);
	
	rna_PoseChannel_constraints_remove(_selfid, _self, CTX_data_main(C), reports, constraint);
}

void PoseBoneConstraints_move_func(ID *_selfid, bPoseChannel *_self, Main *bmain, ReportList *reports, int from_index, int to_index)
{
	rna_PoseChannel_constraints_move(_selfid, _self, bmain, reports, from_index, to_index);
}

static void PoseBoneConstraints_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bPoseChannel *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_PoseChannel_constraints_move(_selfid, _self, CTX_data_main(C), reports, from_index, to_index);
}

bConstraint *PoseBoneConstraints_copy_func(ID *_selfid, bPoseChannel *_self, Main *bmain, PointerRNA *constraint)
{
	return rna_PoseChannel_constraints_copy(_selfid, _self, bmain, constraint);
}

static void PoseBoneConstraints_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bPoseChannel *_self;
	PointerRNA *constraint;
	bConstraint *new_constraint;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((PointerRNA **)_data);
	_data += 8;
	_retdata = _data;
	
	new_constraint = rna_PoseChannel_constraints_copy(_selfid, _self, CTX_data_main(C), constraint);
	*((bConstraint **)_retdata) = new_constraint;
}

/* Repeated prototypes to detect errors */

bConstraint *rna_PoseChannel_constraints_new(ID *_selfid, bPoseChannel *_self, Main *bmain, int type);
void rna_PoseChannel_constraints_remove(ID *_selfid, bPoseChannel *_self, Main *bmain, ReportList *reports, PointerRNA *constraint);
void rna_PoseChannel_constraints_move(ID *_selfid, bPoseChannel *_self, Main *bmain, ReportList *reports, int from_index, int to_index);
bConstraint *rna_PoseChannel_constraints_copy(ID *_selfid, bPoseChannel *_self, Main *bmain, PointerRNA *constraint);



/* Pose */
static CollectionPropertyRNA rna_Pose_rna_properties_;
PropertyRNA &rna_Pose_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Pose_rna_properties_);

static PointerPropertyRNA rna_Pose_rna_type_;
PropertyRNA &rna_Pose_rna_type = reinterpret_cast<PropertyRNA &>(rna_Pose_rna_type_);

static CollectionPropertyRNA rna_Pose_bones_;
PropertyRNA &rna_Pose_bones = reinterpret_cast<PropertyRNA &>(rna_Pose_bones_);

static EnumPropertyRNA rna_Pose_ik_solver_;
PropertyRNA &rna_Pose_ik_solver = reinterpret_cast<PropertyRNA &>(rna_Pose_ik_solver_);

static PointerPropertyRNA rna_Pose_ik_param_;
PropertyRNA &rna_Pose_ik_param = reinterpret_cast<PropertyRNA &>(rna_Pose_ik_param_);

static BoolPropertyRNA rna_Pose_use_mirror_x_;
PropertyRNA &rna_Pose_use_mirror_x = reinterpret_cast<PropertyRNA &>(rna_Pose_use_mirror_x_);

static BoolPropertyRNA rna_Pose_use_mirror_relative_;
PropertyRNA &rna_Pose_use_mirror_relative = reinterpret_cast<PropertyRNA &>(rna_Pose_use_mirror_relative_);

static BoolPropertyRNA rna_Pose_use_auto_ik_;
PropertyRNA &rna_Pose_use_auto_ik = reinterpret_cast<PropertyRNA &>(rna_Pose_use_auto_ik_);

static PointerPropertyRNA rna_Pose_animation_visualization_;
PropertyRNA &rna_Pose_animation_visualization = reinterpret_cast<PropertyRNA &>(rna_Pose_animation_visualization_);

static PointerPropertyRNA rna_Pose_apply_pose_from_action_action_;
PropertyRNA &rna_Pose_apply_pose_from_action_action = reinterpret_cast<PropertyRNA &>(rna_Pose_apply_pose_from_action_action_);

static FloatPropertyRNA rna_Pose_apply_pose_from_action_evaluation_time_;
PropertyRNA &rna_Pose_apply_pose_from_action_evaluation_time = reinterpret_cast<PropertyRNA &>(rna_Pose_apply_pose_from_action_evaluation_time_);

FunctionRNA *rna_Pose_apply_pose_from_action_func;
static PointerPropertyRNA rna_Pose_blend_pose_from_action_action_;
PropertyRNA &rna_Pose_blend_pose_from_action_action = reinterpret_cast<PropertyRNA &>(rna_Pose_blend_pose_from_action_action_);

static FloatPropertyRNA rna_Pose_blend_pose_from_action_blend_factor_;
PropertyRNA &rna_Pose_blend_pose_from_action_blend_factor = reinterpret_cast<PropertyRNA &>(rna_Pose_blend_pose_from_action_blend_factor_);

static FloatPropertyRNA rna_Pose_blend_pose_from_action_evaluation_time_;
PropertyRNA &rna_Pose_blend_pose_from_action_evaluation_time = reinterpret_cast<PropertyRNA &>(rna_Pose_blend_pose_from_action_evaluation_time_);

FunctionRNA *rna_Pose_blend_pose_from_action_func;
static PointerPropertyRNA rna_Pose_backup_create_action_;
PropertyRNA &rna_Pose_backup_create_action = reinterpret_cast<PropertyRNA &>(rna_Pose_backup_create_action_);

FunctionRNA *rna_Pose_backup_create_func;
static BoolPropertyRNA rna_Pose_backup_restore_success_;
PropertyRNA &rna_Pose_backup_restore_success = reinterpret_cast<PropertyRNA &>(rna_Pose_backup_restore_success_);

FunctionRNA *rna_Pose_backup_restore_func;
FunctionRNA *rna_Pose_backup_clear_func;
StructRNA *RNA_Pose;
void register_struct_Pose(BlenderRNA &brna)
{
	rna_Pose_rna_properties_ = {
		{&rna_Pose_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Pose_rna_properties_begin, Pose_rna_properties_next, Pose_rna_properties_end, Pose_rna_properties_get, nullptr, nullptr, Pose_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Pose_rna_type_ = {
		{&rna_Pose_bones, 	&rna_Pose_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Pose_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Pose_bones_ = {
		{&rna_Pose_ik_solver, 	&rna_Pose_rna_type,
		-1, "bones", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Pose Bones",
		"Individual pose bones for the armature",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Pose_bones_begin, Pose_bones_next, Pose_bones_end, Pose_bones_get, nullptr, Pose_bones_lookup_int, Pose_bones_lookup_string, nullptr, RNA_PoseBone
	};

	static const EnumPropertyItem rna_Pose_ik_solver_items[3] = {
		{0, "LEGACY", 0, "Standard", "Original IK solver"	},
		{1, "ITASC", 0, "iTaSC", "Multi constraint, stateful IK solver"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Pose_ik_solver_ = {
		{&rna_Pose_ik_param, 	&rna_Pose_bones,
		-1, "ik_solver", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "IK Solver",
		"Selection of IK solver for IK chain",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_ik_solver_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Pose_ik_solver_get, Pose_ik_solver_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Pose_ik_solver_items, 2, 0
	};

	rna_Pose_ik_param_ = {
		{&rna_Pose_use_mirror_x, 	&rna_Pose_ik_solver,
		-1, "ik_param", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "IK Param",
		"Parameters for IK solver",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Pose_ik_param_get, nullptr, rna_Pose_ikparam_typef, nullptr,RNA_IKParam
	};

	rna_Pose_use_mirror_x_ = {
		{&rna_Pose_use_mirror_relative, 	&rna_Pose_ik_param,
		-1, "use_mirror_x", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "X-Axis Mirror",
		"Apply changes to matching bone on opposite side of X-Axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Pose_use_mirror_x_get, Pose_use_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Pose_use_mirror_relative_ = {
		{&rna_Pose_use_auto_ik, 	&rna_Pose_use_mirror_x,
		-1, "use_mirror_relative", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "Relative Mirror",
		"Apply relative transformations in X-mirror mode (not supported with Auto IK)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Pose_use_mirror_relative_get, Pose_use_mirror_relative_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Pose_use_auto_ik_ = {
		{&rna_Pose_animation_visualization, 	&rna_Pose_use_mirror_relative,
		-1, "use_auto_ik", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "Auto IK",
		"Add temporary IK constraints while grabbing bones in Pose Mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Pose_use_auto_ik_get, Pose_use_auto_ik_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Pose_animation_visualization_ = {
		{nullptr, 	&rna_Pose_use_auto_ik,
		-1, "animation_visualization", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Visualization",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Pose_animation_visualization_get, nullptr, nullptr, nullptr,RNA_AnimViz
	};

	StructRNA *srna = RNA_Pose;
	srna->cont.properties = {&rna_Pose_rna_properties, &rna_Pose_animation_visualization};
	srna->identifier = "Pose";
	srna->flag = 516;
	srna->name = "Pose";
	srna->description = "A collection of pose channels, including settings for animating bones";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Pose_rna_properties;
	srna->path = rna_Pose_path;
	{
	rna_Pose_apply_pose_from_action_action_ = {
		{&rna_Pose_apply_pose_from_action_evaluation_time, 	nullptr,
		-1, "action", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action",
		"The Action containing the pose",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Action
	};
	rna_Pose_apply_pose_from_action_evaluation_time_ = {
		{nullptr, 	&rna_Pose_apply_pose_from_action_action,
		-1, "evaluation_time", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Evaluation Time",
		"Time at which the given action is evaluated to obtain the pose",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Pose_apply_pose_from_action_action, &rna_Pose_apply_pose_from_action_evaluation_time};
		func->identifier = "apply_pose_from_action";
		func->flag = 2057;
		func->description = "Apply the given action to this pose by evaluating it at a specific time. Only updates the pose of selected bones, or all bones if none are selected.";
		func->call = Pose_apply_pose_from_action_call;
		rna_Pose_apply_pose_from_action_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Pose_blend_pose_from_action_action_ = {
		{&rna_Pose_blend_pose_from_action_blend_factor, 	nullptr,
		-1, "action", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action",
		"The Action containing the pose",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Action
	};
	rna_Pose_blend_pose_from_action_blend_factor_ = {
		{&rna_Pose_blend_pose_from_action_evaluation_time, 	&rna_Pose_blend_pose_from_action_action,
		-1, "blend_factor", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Blend Factor",
		"How much the given Action affects the final pose",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};
	rna_Pose_blend_pose_from_action_evaluation_time_ = {
		{nullptr, 	&rna_Pose_blend_pose_from_action_blend_factor,
		-1, "evaluation_time", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Evaluation Time",
		"Time at which the given action is evaluated to obtain the pose",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Pose_blend_pose_from_action_action, &rna_Pose_blend_pose_from_action_evaluation_time};
		func->identifier = "blend_pose_from_action";
		func->flag = 2057;
		func->description = "Blend the given action into this pose by evaluating it at a specific time. Only updates the pose of selected bones, or all bones if none are selected.";
		func->call = Pose_blend_pose_from_action_call;
		rna_Pose_blend_pose_from_action_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Pose_backup_create_action_ = {
		{nullptr, 	nullptr,
		-1, "action", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action",
		"An Action with animation data for the bones. Only the animated bones will be included in the backup.",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Action
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Pose_backup_create_action, &rna_Pose_backup_create_action};
		func->identifier = "backup_create";
		func->flag = 2049;
		func->description = "Create a backup of the current pose. Only those bones that are animated in the Action are backed up. The object owns the backup, and each object can have only one backup at a time. When you no longer need it, it must be freed use ``backup_clear()``.";
		func->call = Pose_backup_create_call;
		rna_Pose_backup_create_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Pose_backup_restore_success_ = {
		{nullptr, 	nullptr,
		-1, "success", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"``True`` when the backup was restored, ``False`` if there was no backup to restore",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Pose_backup_restore_success, &rna_Pose_backup_restore_success};
		func->identifier = "backup_restore";
		func->flag = 2057;
		func->description = "Restore the previously made pose backup. This can be called multiple times. See ``Pose.backup_create()`` for more info.";
		func->call = Pose_backup_restore_call;
		func->c_ret = &rna_Pose_backup_restore_success;
		rna_Pose_backup_restore_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "backup_clear";
		func->flag = 2049;
		func->description = "Free a previously made pose backup. See ``Pose.backup_create()`` for more info.";
		func->call = Pose_backup_clear_call;
		rna_Pose_backup_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Pose Bone */
static CollectionPropertyRNA rna_PoseBone_rna_properties_;
PropertyRNA &rna_PoseBone_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PoseBone_rna_properties_);

static PointerPropertyRNA rna_PoseBone_rna_type_;
PropertyRNA &rna_PoseBone_rna_type = reinterpret_cast<PropertyRNA &>(rna_PoseBone_rna_type_);

static CollectionPropertyRNA rna_PoseBone_constraints_;
PropertyRNA &rna_PoseBone_constraints = reinterpret_cast<PropertyRNA &>(rna_PoseBone_constraints_);

static StringPropertyRNA rna_PoseBone_name_;
PropertyRNA &rna_PoseBone_name = reinterpret_cast<PropertyRNA &>(rna_PoseBone_name_);

static PointerPropertyRNA rna_PoseBone_motion_path_;
PropertyRNA &rna_PoseBone_motion_path = reinterpret_cast<PropertyRNA &>(rna_PoseBone_motion_path_);

static PointerPropertyRNA rna_PoseBone_bone_;
PropertyRNA &rna_PoseBone_bone = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bone_);

static PointerPropertyRNA rna_PoseBone_parent_;
PropertyRNA &rna_PoseBone_parent = reinterpret_cast<PropertyRNA &>(rna_PoseBone_parent_);

static PointerPropertyRNA rna_PoseBone_child_;
PropertyRNA &rna_PoseBone_child = reinterpret_cast<PropertyRNA &>(rna_PoseBone_child_);

static FloatPropertyRNA rna_PoseBone_location_;
PropertyRNA &rna_PoseBone_location = reinterpret_cast<PropertyRNA &>(rna_PoseBone_location_);

static FloatPropertyRNA rna_PoseBone_scale_;
PropertyRNA &rna_PoseBone_scale = reinterpret_cast<PropertyRNA &>(rna_PoseBone_scale_);

static FloatPropertyRNA rna_PoseBone_rotation_quaternion_;
PropertyRNA &rna_PoseBone_rotation_quaternion = reinterpret_cast<PropertyRNA &>(rna_PoseBone_rotation_quaternion_);

static FloatPropertyRNA rna_PoseBone_rotation_axis_angle_;
PropertyRNA &rna_PoseBone_rotation_axis_angle = reinterpret_cast<PropertyRNA &>(rna_PoseBone_rotation_axis_angle_);

static FloatPropertyRNA rna_PoseBone_rotation_euler_;
PropertyRNA &rna_PoseBone_rotation_euler = reinterpret_cast<PropertyRNA &>(rna_PoseBone_rotation_euler_);

static EnumPropertyRNA rna_PoseBone_rotation_mode_;
PropertyRNA &rna_PoseBone_rotation_mode = reinterpret_cast<PropertyRNA &>(rna_PoseBone_rotation_mode_);

static FloatPropertyRNA rna_PoseBone_bbone_rollin_;
PropertyRNA &rna_PoseBone_bbone_rollin = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_rollin_);

static FloatPropertyRNA rna_PoseBone_bbone_rollout_;
PropertyRNA &rna_PoseBone_bbone_rollout = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_rollout_);

static FloatPropertyRNA rna_PoseBone_bbone_curveinx_;
PropertyRNA &rna_PoseBone_bbone_curveinx = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_curveinx_);

static FloatPropertyRNA rna_PoseBone_bbone_curveinz_;
PropertyRNA &rna_PoseBone_bbone_curveinz = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_curveinz_);

static FloatPropertyRNA rna_PoseBone_bbone_curveoutx_;
PropertyRNA &rna_PoseBone_bbone_curveoutx = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_curveoutx_);

static FloatPropertyRNA rna_PoseBone_bbone_curveoutz_;
PropertyRNA &rna_PoseBone_bbone_curveoutz = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_curveoutz_);

static FloatPropertyRNA rna_PoseBone_bbone_easein_;
PropertyRNA &rna_PoseBone_bbone_easein = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_easein_);

static FloatPropertyRNA rna_PoseBone_bbone_easeout_;
PropertyRNA &rna_PoseBone_bbone_easeout = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_easeout_);

static FloatPropertyRNA rna_PoseBone_bbone_scalein_;
PropertyRNA &rna_PoseBone_bbone_scalein = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_scalein_);

static FloatPropertyRNA rna_PoseBone_bbone_scaleout_;
PropertyRNA &rna_PoseBone_bbone_scaleout = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_scaleout_);

static PointerPropertyRNA rna_PoseBone_bbone_custom_handle_start_;
PropertyRNA &rna_PoseBone_bbone_custom_handle_start = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_custom_handle_start_);

static PointerPropertyRNA rna_PoseBone_bbone_custom_handle_end_;
PropertyRNA &rna_PoseBone_bbone_custom_handle_end = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_custom_handle_end_);

static FloatPropertyRNA rna_PoseBone_matrix_channel_;
PropertyRNA &rna_PoseBone_matrix_channel = reinterpret_cast<PropertyRNA &>(rna_PoseBone_matrix_channel_);

static FloatPropertyRNA rna_PoseBone_matrix_basis_;
PropertyRNA &rna_PoseBone_matrix_basis = reinterpret_cast<PropertyRNA &>(rna_PoseBone_matrix_basis_);

static FloatPropertyRNA rna_PoseBone_matrix_;
PropertyRNA &rna_PoseBone_matrix = reinterpret_cast<PropertyRNA &>(rna_PoseBone_matrix_);

static FloatPropertyRNA rna_PoseBone_head_;
PropertyRNA &rna_PoseBone_head = reinterpret_cast<PropertyRNA &>(rna_PoseBone_head_);

static FloatPropertyRNA rna_PoseBone_tail_;
PropertyRNA &rna_PoseBone_tail = reinterpret_cast<PropertyRNA &>(rna_PoseBone_tail_);

static FloatPropertyRNA rna_PoseBone_length_;
PropertyRNA &rna_PoseBone_length = reinterpret_cast<PropertyRNA &>(rna_PoseBone_length_);

static BoolPropertyRNA rna_PoseBone_is_in_ik_chain_;
PropertyRNA &rna_PoseBone_is_in_ik_chain = reinterpret_cast<PropertyRNA &>(rna_PoseBone_is_in_ik_chain_);

static BoolPropertyRNA rna_PoseBone_lock_ik_x_;
PropertyRNA &rna_PoseBone_lock_ik_x = reinterpret_cast<PropertyRNA &>(rna_PoseBone_lock_ik_x_);

static BoolPropertyRNA rna_PoseBone_lock_ik_y_;
PropertyRNA &rna_PoseBone_lock_ik_y = reinterpret_cast<PropertyRNA &>(rna_PoseBone_lock_ik_y_);

static BoolPropertyRNA rna_PoseBone_lock_ik_z_;
PropertyRNA &rna_PoseBone_lock_ik_z = reinterpret_cast<PropertyRNA &>(rna_PoseBone_lock_ik_z_);

static BoolPropertyRNA rna_PoseBone_use_ik_limit_x_;
PropertyRNA &rna_PoseBone_use_ik_limit_x = reinterpret_cast<PropertyRNA &>(rna_PoseBone_use_ik_limit_x_);

static BoolPropertyRNA rna_PoseBone_use_ik_limit_y_;
PropertyRNA &rna_PoseBone_use_ik_limit_y = reinterpret_cast<PropertyRNA &>(rna_PoseBone_use_ik_limit_y_);

static BoolPropertyRNA rna_PoseBone_use_ik_limit_z_;
PropertyRNA &rna_PoseBone_use_ik_limit_z = reinterpret_cast<PropertyRNA &>(rna_PoseBone_use_ik_limit_z_);

static BoolPropertyRNA rna_PoseBone_use_ik_rotation_control_;
PropertyRNA &rna_PoseBone_use_ik_rotation_control = reinterpret_cast<PropertyRNA &>(rna_PoseBone_use_ik_rotation_control_);

static BoolPropertyRNA rna_PoseBone_use_ik_linear_control_;
PropertyRNA &rna_PoseBone_use_ik_linear_control = reinterpret_cast<PropertyRNA &>(rna_PoseBone_use_ik_linear_control_);

static FloatPropertyRNA rna_PoseBone_ik_min_x_;
PropertyRNA &rna_PoseBone_ik_min_x = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_min_x_);

static FloatPropertyRNA rna_PoseBone_ik_max_x_;
PropertyRNA &rna_PoseBone_ik_max_x = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_max_x_);

static FloatPropertyRNA rna_PoseBone_ik_min_y_;
PropertyRNA &rna_PoseBone_ik_min_y = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_min_y_);

static FloatPropertyRNA rna_PoseBone_ik_max_y_;
PropertyRNA &rna_PoseBone_ik_max_y = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_max_y_);

static FloatPropertyRNA rna_PoseBone_ik_min_z_;
PropertyRNA &rna_PoseBone_ik_min_z = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_min_z_);

static FloatPropertyRNA rna_PoseBone_ik_max_z_;
PropertyRNA &rna_PoseBone_ik_max_z = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_max_z_);

static FloatPropertyRNA rna_PoseBone_ik_stiffness_x_;
PropertyRNA &rna_PoseBone_ik_stiffness_x = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_stiffness_x_);

static FloatPropertyRNA rna_PoseBone_ik_stiffness_y_;
PropertyRNA &rna_PoseBone_ik_stiffness_y = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_stiffness_y_);

static FloatPropertyRNA rna_PoseBone_ik_stiffness_z_;
PropertyRNA &rna_PoseBone_ik_stiffness_z = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_stiffness_z_);

static FloatPropertyRNA rna_PoseBone_ik_stretch_;
PropertyRNA &rna_PoseBone_ik_stretch = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_stretch_);

static FloatPropertyRNA rna_PoseBone_ik_rotation_weight_;
PropertyRNA &rna_PoseBone_ik_rotation_weight = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_rotation_weight_);

static FloatPropertyRNA rna_PoseBone_ik_linear_weight_;
PropertyRNA &rna_PoseBone_ik_linear_weight = reinterpret_cast<PropertyRNA &>(rna_PoseBone_ik_linear_weight_);

static PointerPropertyRNA rna_PoseBone_custom_shape_;
PropertyRNA &rna_PoseBone_custom_shape = reinterpret_cast<PropertyRNA &>(rna_PoseBone_custom_shape_);

static FloatPropertyRNA rna_PoseBone_custom_shape_scale_xyz_;
PropertyRNA &rna_PoseBone_custom_shape_scale_xyz = reinterpret_cast<PropertyRNA &>(rna_PoseBone_custom_shape_scale_xyz_);

static FloatPropertyRNA rna_PoseBone_custom_shape_translation_;
PropertyRNA &rna_PoseBone_custom_shape_translation = reinterpret_cast<PropertyRNA &>(rna_PoseBone_custom_shape_translation_);

static FloatPropertyRNA rna_PoseBone_custom_shape_rotation_euler_;
PropertyRNA &rna_PoseBone_custom_shape_rotation_euler = reinterpret_cast<PropertyRNA &>(rna_PoseBone_custom_shape_rotation_euler_);

static BoolPropertyRNA rna_PoseBone_use_transform_at_custom_shape_;
PropertyRNA &rna_PoseBone_use_transform_at_custom_shape = reinterpret_cast<PropertyRNA &>(rna_PoseBone_use_transform_at_custom_shape_);

static BoolPropertyRNA rna_PoseBone_use_transform_around_custom_shape_;
PropertyRNA &rna_PoseBone_use_transform_around_custom_shape = reinterpret_cast<PropertyRNA &>(rna_PoseBone_use_transform_around_custom_shape_);

static BoolPropertyRNA rna_PoseBone_use_custom_shape_bone_size_;
PropertyRNA &rna_PoseBone_use_custom_shape_bone_size = reinterpret_cast<PropertyRNA &>(rna_PoseBone_use_custom_shape_bone_size_);

static BoolPropertyRNA rna_PoseBone_hide_;
PropertyRNA &rna_PoseBone_hide = reinterpret_cast<PropertyRNA &>(rna_PoseBone_hide_);

static BoolPropertyRNA rna_PoseBone_select_;
PropertyRNA &rna_PoseBone_select = reinterpret_cast<PropertyRNA &>(rna_PoseBone_select_);

static PointerPropertyRNA rna_PoseBone_custom_shape_transform_;
PropertyRNA &rna_PoseBone_custom_shape_transform = reinterpret_cast<PropertyRNA &>(rna_PoseBone_custom_shape_transform_);

static FloatPropertyRNA rna_PoseBone_custom_shape_wire_width_;
PropertyRNA &rna_PoseBone_custom_shape_wire_width = reinterpret_cast<PropertyRNA &>(rna_PoseBone_custom_shape_wire_width_);

static PointerPropertyRNA rna_PoseBone_color_;
PropertyRNA &rna_PoseBone_color = reinterpret_cast<PropertyRNA &>(rna_PoseBone_color_);

static BoolPropertyRNA rna_PoseBone_lock_location_;
PropertyRNA &rna_PoseBone_lock_location = reinterpret_cast<PropertyRNA &>(rna_PoseBone_lock_location_);

static BoolPropertyRNA rna_PoseBone_lock_rotation_;
PropertyRNA &rna_PoseBone_lock_rotation = reinterpret_cast<PropertyRNA &>(rna_PoseBone_lock_rotation_);

static BoolPropertyRNA rna_PoseBone_lock_rotation_w_;
PropertyRNA &rna_PoseBone_lock_rotation_w = reinterpret_cast<PropertyRNA &>(rna_PoseBone_lock_rotation_w_);

static BoolPropertyRNA rna_PoseBone_lock_rotations_4d_;
PropertyRNA &rna_PoseBone_lock_rotations_4d = reinterpret_cast<PropertyRNA &>(rna_PoseBone_lock_rotations_4d_);

static BoolPropertyRNA rna_PoseBone_lock_scale_;
PropertyRNA &rna_PoseBone_lock_scale = reinterpret_cast<PropertyRNA &>(rna_PoseBone_lock_scale_);

static BoolPropertyRNA rna_PoseBone_bl_system_properties_get_do_create_;
PropertyRNA &rna_PoseBone_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_PoseBone_bl_system_properties_get_system_properties_;
PropertyRNA &rna_PoseBone_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bl_system_properties_get_system_properties_);

FunctionRNA *rna_PoseBone_bl_system_properties_get_func;
static FloatPropertyRNA rna_PoseBone_evaluate_envelope_point_;
PropertyRNA &rna_PoseBone_evaluate_envelope_point = reinterpret_cast<PropertyRNA &>(rna_PoseBone_evaluate_envelope_point_);

static FloatPropertyRNA rna_PoseBone_evaluate_envelope_factor_;
PropertyRNA &rna_PoseBone_evaluate_envelope_factor = reinterpret_cast<PropertyRNA &>(rna_PoseBone_evaluate_envelope_factor_);

FunctionRNA *rna_PoseBone_evaluate_envelope_func;
static FloatPropertyRNA rna_PoseBone_bbone_segment_index_point_;
PropertyRNA &rna_PoseBone_bbone_segment_index_point = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_segment_index_point_);

static IntPropertyRNA rna_PoseBone_bbone_segment_index_index_;
PropertyRNA &rna_PoseBone_bbone_segment_index_index = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_segment_index_index_);

static FloatPropertyRNA rna_PoseBone_bbone_segment_index_blend_next_;
PropertyRNA &rna_PoseBone_bbone_segment_index_blend_next = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_segment_index_blend_next_);

FunctionRNA *rna_PoseBone_bbone_segment_index_func;
static FloatPropertyRNA rna_PoseBone_bbone_segment_matrix_matrix_return_;
PropertyRNA &rna_PoseBone_bbone_segment_matrix_matrix_return = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_segment_matrix_matrix_return_);

static IntPropertyRNA rna_PoseBone_bbone_segment_matrix_index_;
PropertyRNA &rna_PoseBone_bbone_segment_matrix_index = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_segment_matrix_index_);

static BoolPropertyRNA rna_PoseBone_bbone_segment_matrix_rest_;
PropertyRNA &rna_PoseBone_bbone_segment_matrix_rest = reinterpret_cast<PropertyRNA &>(rna_PoseBone_bbone_segment_matrix_rest_);

FunctionRNA *rna_PoseBone_bbone_segment_matrix_func;
static FloatPropertyRNA rna_PoseBone_compute_bbone_handles_handle1_;
PropertyRNA &rna_PoseBone_compute_bbone_handles_handle1 = reinterpret_cast<PropertyRNA &>(rna_PoseBone_compute_bbone_handles_handle1_);

static FloatPropertyRNA rna_PoseBone_compute_bbone_handles_roll1_;
PropertyRNA &rna_PoseBone_compute_bbone_handles_roll1 = reinterpret_cast<PropertyRNA &>(rna_PoseBone_compute_bbone_handles_roll1_);

static FloatPropertyRNA rna_PoseBone_compute_bbone_handles_handle2_;
PropertyRNA &rna_PoseBone_compute_bbone_handles_handle2 = reinterpret_cast<PropertyRNA &>(rna_PoseBone_compute_bbone_handles_handle2_);

static FloatPropertyRNA rna_PoseBone_compute_bbone_handles_roll2_;
PropertyRNA &rna_PoseBone_compute_bbone_handles_roll2 = reinterpret_cast<PropertyRNA &>(rna_PoseBone_compute_bbone_handles_roll2_);

static BoolPropertyRNA rna_PoseBone_compute_bbone_handles_rest_;
PropertyRNA &rna_PoseBone_compute_bbone_handles_rest = reinterpret_cast<PropertyRNA &>(rna_PoseBone_compute_bbone_handles_rest_);

static BoolPropertyRNA rna_PoseBone_compute_bbone_handles_ease_;
PropertyRNA &rna_PoseBone_compute_bbone_handles_ease = reinterpret_cast<PropertyRNA &>(rna_PoseBone_compute_bbone_handles_ease_);

static BoolPropertyRNA rna_PoseBone_compute_bbone_handles_offsets_;
PropertyRNA &rna_PoseBone_compute_bbone_handles_offsets = reinterpret_cast<PropertyRNA &>(rna_PoseBone_compute_bbone_handles_offsets_);

FunctionRNA *rna_PoseBone_compute_bbone_handles_func;
StructRNA *RNA_PoseBone;
void register_struct_PoseBone(BlenderRNA &brna)
{
	rna_PoseBone_rna_properties_ = {
		{&rna_PoseBone_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_rna_properties_begin, PoseBone_rna_properties_next, PoseBone_rna_properties_end, PoseBone_rna_properties_get, nullptr, nullptr, PoseBone_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PoseBone_rna_type_ = {
		{&rna_PoseBone_constraints, 	&rna_PoseBone_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PoseBone_constraints_ = {
		{&rna_PoseBone_name, 	&rna_PoseBone_rna_type,
		-1, "constraints", 0, 1025, 0, 0, 0, PropertyPathTemplateType(0), "Constraints",
		"Constraints that act on this pose channel",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_PoseChannel_constraints_override_apply,
			0, PROP_RAW_UNSET, RNA_PoseBoneConstraints},
		PoseBone_constraints_begin, PoseBone_constraints_next, PoseBone_constraints_end, PoseBone_constraints_get, nullptr, PoseBone_constraints_lookup_int, PoseBone_constraints_lookup_string, nullptr, RNA_Constraint
	};

	rna_PoseBone_name_ = {
		{&rna_PoseBone_motion_path, 	&rna_PoseBone_constraints,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_PoseChannel_name_update, 0, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_name_get, PoseBone_name_length, PoseBone_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_PoseBone_motion_path_ = {
		{&rna_PoseBone_bone, 	&rna_PoseBone_name,
		-1, "motion_path", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Motion Path",
		"Motion Path for this element",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_motion_path_get, nullptr, nullptr, nullptr,RNA_MotionPath
	};

	rna_PoseBone_bone_ = {
		{&rna_PoseBone_parent, 	&rna_PoseBone_motion_path,
		-1, "bone", 8650880, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bone",
		"Bone associated with this PoseBone",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_bone_get, nullptr, nullptr, nullptr,RNA_Bone
	};

	rna_PoseBone_parent_ = {
		{&rna_PoseBone_child, 	&rna_PoseBone_bone,
		-1, "parent", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Parent",
		"Parent of this pose bone",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_parent_get, nullptr, nullptr, nullptr,RNA_PoseBone
	};

	rna_PoseBone_child_ = {
		{&rna_PoseBone_location, 	&rna_PoseBone_parent,
		-1, "child", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Child",
		"Child of this pose bone",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_child_get, nullptr, nullptr, nullptr,RNA_PoseBone
	};

	static float rna_PoseBone_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_location_ = {
		{&rna_PoseBone_scale, 	&rna_PoseBone_child,
		-1, "location", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_IK_update, 101974016, nullptr, rna_PoseChannel_location_editable, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, loc), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_location_get, PoseBone_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_PoseBone_location_default
	};

	static float rna_PoseBone_scale_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_PoseBone_scale_ = {
		{&rna_PoseBone_rotation_quaternion, 	&rna_PoseBone_location,
		-1, "scale", 67108867, 1, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_IK_update, 101974016, nullptr, rna_PoseChannel_scale_editable, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, scale), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_scale_get, PoseBone_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_scale_default
	};

	static float rna_PoseBone_rotation_quaternion_default[4] = {
		1.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_rotation_quaternion_ = {
		{&rna_PoseBone_rotation_axis_angle, 	&rna_PoseBone_scale,
		-1, "rotation_quaternion", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Quaternion Rotation",
		"Rotation in Quaternions",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Pose_update, 101974016, nullptr, rna_PoseChannel_rotation_4d_editable, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, quat), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_rotation_quaternion_get, PoseBone_rotation_quaternion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_rotation_quaternion_default
	};

	static float rna_PoseBone_rotation_axis_angle_default[4] = {
		0.0f,
		0.0f,
		1.0f,
		0.0f
	};
	rna_PoseBone_rotation_axis_angle_ = {
		{&rna_PoseBone_rotation_euler, 	&rna_PoseBone_rotation_quaternion,
		-1, "rotation_axis_angle", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Axis-Angle Rotation",
		"Angle of Rotation for Axis-Angle rotation representation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_AXISANGLE) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Pose_update, 101974016, nullptr, rna_PoseChannel_rotation_4d_editable, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, PoseBone_rotation_axis_angle_get, PoseBone_rotation_axis_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_rotation_axis_angle_default
	};

	static float rna_PoseBone_rotation_euler_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_rotation_euler_ = {
		{&rna_PoseBone_rotation_mode, 	&rna_PoseBone_rotation_axis_angle,
		-1, "rotation_euler", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Euler Rotation",
		"Rotation in Eulers",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_update, 101974016, nullptr, rna_PoseChannel_rotation_euler_editable, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, eul), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_rotation_euler_get, PoseBone_rotation_euler_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 5, nullptr, nullptr, 0.0f, rna_PoseBone_rotation_euler_default
	};

	rna_PoseBone_rotation_mode_ = {
		{&rna_PoseBone_bbone_rollin, 	&rna_PoseBone_rotation_euler,
		-1, "rotation_mode", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Rotation Mode",
		"The kind of rotation to apply, values from other rotation modes are not used",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_rotation_mode_get, PoseBone_rotation_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_rotation_mode_items, 8, 0
	};

	rna_PoseBone_bbone_rollin_ = {
		{&rna_PoseBone_bbone_rollout, 	&rna_PoseBone_rotation_mode,
		-1, "bbone_rollin", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Roll In",
		"Roll offset for the start of the B-Bone, adjusts twist",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, roll1), RawPropertyType(5), nullptr},
		PoseBone_bbone_rollin_get, PoseBone_bbone_rollin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_bbone_rollout_ = {
		{&rna_PoseBone_bbone_curveinx, 	&rna_PoseBone_bbone_rollin,
		-1, "bbone_rollout", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Roll Out",
		"Roll offset for the end of the B-Bone, adjusts twist",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, roll2), RawPropertyType(5), nullptr},
		PoseBone_bbone_rollout_get, PoseBone_bbone_rollout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_bbone_curveinx_ = {
		{&rna_PoseBone_bbone_curveinz, 	&rna_PoseBone_bbone_rollout,
		-1, "bbone_curveinx", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "In X",
		"X-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, curve_in_x), RawPropertyType(5), nullptr},
		PoseBone_bbone_curveinx_get, PoseBone_bbone_curveinx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_bbone_curveinz_ = {
		{&rna_PoseBone_bbone_curveoutx, 	&rna_PoseBone_bbone_curveinx,
		-1, "bbone_curveinz", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "In Z",
		"Z-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, curve_in_z), RawPropertyType(5), nullptr},
		PoseBone_bbone_curveinz_get, PoseBone_bbone_curveinz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_bbone_curveoutx_ = {
		{&rna_PoseBone_bbone_curveoutz, 	&rna_PoseBone_bbone_curveinz,
		-1, "bbone_curveoutx", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Out X",
		"X-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, curve_out_x), RawPropertyType(5), nullptr},
		PoseBone_bbone_curveoutx_get, PoseBone_bbone_curveoutx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_bbone_curveoutz_ = {
		{&rna_PoseBone_bbone_easein, 	&rna_PoseBone_bbone_curveoutx,
		-1, "bbone_curveoutz", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Out Z",
		"Z-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, curve_out_z), RawPropertyType(5), nullptr},
		PoseBone_bbone_curveoutz_get, PoseBone_bbone_curveoutz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_bbone_easein_ = {
		{&rna_PoseBone_bbone_easeout, 	&rna_PoseBone_bbone_curveoutz,
		-1, "bbone_easein", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Ease In",
		"Length of first Bézier Handle (for B-Bones only)",
		0, "Armature",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, ease1), RawPropertyType(5), nullptr},
		PoseBone_bbone_easein_get, PoseBone_bbone_easein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_bbone_easeout_ = {
		{&rna_PoseBone_bbone_scalein, 	&rna_PoseBone_bbone_easein,
		-1, "bbone_easeout", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Ease Out",
		"Length of second Bézier Handle (for B-Bones only)",
		0, "Armature",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, ease2), RawPropertyType(5), nullptr},
		PoseBone_bbone_easeout_get, PoseBone_bbone_easeout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_PoseBone_bbone_scalein_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_PoseBone_bbone_scalein_ = {
		{&rna_PoseBone_bbone_scaleout, 	&rna_PoseBone_bbone_easeout,
		-1, "bbone_scalein", 67108867, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale In",
		"Scale factors for the start of the B-Bone, adjusts thickness (for tapering effects)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, scale_in), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_bbone_scalein_get, PoseBone_bbone_scalein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, rna_PoseBone_bbone_scalein_default
	};

	static float rna_PoseBone_bbone_scaleout_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_PoseBone_bbone_scaleout_ = {
		{&rna_PoseBone_bbone_custom_handle_start, 	&rna_PoseBone_bbone_scalein,
		-1, "bbone_scaleout", 67108867, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale Out",
		"Scale factors for the end of the B-Bone, adjusts thickness (for tapering effects)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, scale_out), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_bbone_scaleout_get, PoseBone_bbone_scaleout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, rna_PoseBone_bbone_scaleout_default
	};

	rna_PoseBone_bbone_custom_handle_start_ = {
		{&rna_PoseBone_bbone_custom_handle_end, 	&rna_PoseBone_bbone_scaleout,
		-1, "bbone_custom_handle_start", 8388736, 2, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone Start Handle",
		"Bone that serves as the start handle for the B-Bone curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_dependency_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_bbone_custom_handle_start_get, nullptr, nullptr, nullptr,RNA_PoseBone
	};

	rna_PoseBone_bbone_custom_handle_end_ = {
		{&rna_PoseBone_matrix_channel, 	&rna_PoseBone_bbone_custom_handle_start,
		-1, "bbone_custom_handle_end", 8388736, 2, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone End Handle",
		"Bone that serves as the end handle for the B-Bone curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_dependency_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_bbone_custom_handle_end_get, nullptr, nullptr, nullptr,RNA_PoseBone
	};

	static float rna_PoseBone_matrix_channel_default[16] = {
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
	rna_PoseBone_matrix_channel_ = {
		{&rna_PoseBone_matrix_basis, 	&rna_PoseBone_bbone_custom_handle_end,
		-1, "matrix_channel", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Channel Matrix",
		"4×4 matrix of the bone\'s location/rotation/scale channels (including animation and drivers) and the effect of bone constraints",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, chan_mat), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_matrix_channel_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_matrix_channel_default
	};

	static float rna_PoseBone_matrix_basis_default[16] = {
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
	rna_PoseBone_matrix_basis_ = {
		{&rna_PoseBone_matrix, 	&rna_PoseBone_matrix_channel,
		-1, "matrix_basis", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Basis Matrix",
		"Alternative access to location/scale/rotation relative to the parent and own rest bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, PoseBone_matrix_basis_get, PoseBone_matrix_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_matrix_basis_default
	};

	static float rna_PoseBone_matrix_default[16] = {
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
	rna_PoseBone_matrix_ = {
		{&rna_PoseBone_head, 	&rna_PoseBone_matrix_basis,
		-1, "matrix", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pose Matrix",
		"Final 4×4 matrix after constraints and drivers are applied, in the armature object space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, PoseBone_matrix_get, PoseBone_matrix_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_matrix_default
	};

	static float rna_PoseBone_head_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_head_ = {
		{&rna_PoseBone_tail, 	&rna_PoseBone_matrix,
		-1, "head", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pose Head Position",
		"Location of head of the channel\'s bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, pose_head), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_head_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_PoseBone_head_default
	};

	static float rna_PoseBone_tail_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_tail_ = {
		{&rna_PoseBone_length, 	&rna_PoseBone_head,
		-1, "tail", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pose Tail Position",
		"Location of tail of the channel\'s bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, pose_tail), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_tail_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_PoseBone_tail_default
	};

	rna_PoseBone_length_ = {
		{&rna_PoseBone_is_in_ik_chain, 	&rna_PoseBone_tail,
		-1, "length", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Length",
		"Length of the bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_is_in_ik_chain_ = {
		{&rna_PoseBone_lock_ik_x, 	&rna_PoseBone_length,
		-1, "is_in_ik_chain", 2, 2, 0, 0, 0, PropertyPathTemplateType(0), "Has IK",
		"Is part of an IK chain",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_is_in_ik_chain_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_lock_ik_x_ = {
		{&rna_PoseBone_lock_ik_y, 	&rna_PoseBone_is_in_ik_chain,
		-1, "lock_ik_x", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "IK X Lock",
		"Disallow movement around the X axis",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_lock_ik_x_get, PoseBone_lock_ik_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_lock_ik_y_ = {
		{&rna_PoseBone_lock_ik_z, 	&rna_PoseBone_lock_ik_x,
		-1, "lock_ik_y", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "IK Y Lock",
		"Disallow movement around the Y axis",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_lock_ik_y_get, PoseBone_lock_ik_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_lock_ik_z_ = {
		{&rna_PoseBone_use_ik_limit_x, 	&rna_PoseBone_lock_ik_y,
		-1, "lock_ik_z", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "IK Z Lock",
		"Disallow movement around the Z axis",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_lock_ik_z_get, PoseBone_lock_ik_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_use_ik_limit_x_ = {
		{&rna_PoseBone_use_ik_limit_y, 	&rna_PoseBone_lock_ik_z,
		-1, "use_ik_limit_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "IK X Limit",
		"Limit movement around the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_use_ik_limit_x_get, PoseBone_use_ik_limit_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_use_ik_limit_y_ = {
		{&rna_PoseBone_use_ik_limit_z, 	&rna_PoseBone_use_ik_limit_x,
		-1, "use_ik_limit_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "IK Y Limit",
		"Limit movement around the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_use_ik_limit_y_get, PoseBone_use_ik_limit_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_use_ik_limit_z_ = {
		{&rna_PoseBone_use_ik_rotation_control, 	&rna_PoseBone_use_ik_limit_y,
		-1, "use_ik_limit_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "IK Z Limit",
		"Limit movement around the Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_use_ik_limit_z_get, PoseBone_use_ik_limit_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_use_ik_rotation_control_ = {
		{&rna_PoseBone_use_ik_linear_control, 	&rna_PoseBone_use_ik_limit_z,
		-1, "use_ik_rotation_control", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "IK Rotation Control",
		"Apply channel rotation as IK constraint",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_use_ik_rotation_control_get, PoseBone_use_ik_rotation_control_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_use_ik_linear_control_ = {
		{&rna_PoseBone_ik_min_x, 	&rna_PoseBone_use_ik_rotation_control,
		-1, "use_ik_linear_control", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "IK Linear Control",
		"Apply channel size as IK constraint if stretching is enabled",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_use_ik_linear_control_get, PoseBone_use_ik_linear_control_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_ik_min_x_ = {
		{&rna_PoseBone_ik_max_x, 	&rna_PoseBone_use_ik_linear_control,
		-1, "ik_min_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK X Minimum",
		"Minimum angles for IK Limit",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, limitmin[0]), RawPropertyType(5), nullptr},
		PoseBone_ik_min_x_get, PoseBone_ik_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_max_x_ = {
		{&rna_PoseBone_ik_min_y, 	&rna_PoseBone_ik_min_x,
		-1, "ik_max_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK X Maximum",
		"Maximum angles for IK Limit",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, limitmax[0]), RawPropertyType(5), nullptr},
		PoseBone_ik_max_x_get, PoseBone_ik_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_min_y_ = {
		{&rna_PoseBone_ik_max_y, 	&rna_PoseBone_ik_max_x,
		-1, "ik_min_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK Y Minimum",
		"Minimum angles for IK Limit",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, limitmin[1]), RawPropertyType(5), nullptr},
		PoseBone_ik_min_y_get, PoseBone_ik_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_max_y_ = {
		{&rna_PoseBone_ik_min_z, 	&rna_PoseBone_ik_min_y,
		-1, "ik_max_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK Y Maximum",
		"Maximum angles for IK Limit",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, limitmax[1]), RawPropertyType(5), nullptr},
		PoseBone_ik_max_y_get, PoseBone_ik_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_min_z_ = {
		{&rna_PoseBone_ik_max_z, 	&rna_PoseBone_ik_max_y,
		-1, "ik_min_z", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK Z Minimum",
		"Minimum angles for IK Limit",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, limitmin[2]), RawPropertyType(5), nullptr},
		PoseBone_ik_min_z_get, PoseBone_ik_min_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_max_z_ = {
		{&rna_PoseBone_ik_stiffness_x, 	&rna_PoseBone_ik_min_z,
		-1, "ik_max_z", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK Z Maximum",
		"Maximum angles for IK Limit",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, limitmax[2]), RawPropertyType(5), nullptr},
		PoseBone_ik_max_z_get, PoseBone_ik_max_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_stiffness_x_ = {
		{&rna_PoseBone_ik_stiffness_y, 	&rna_PoseBone_ik_max_z,
		-1, "ik_stiffness_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK X Stiffness",
		"IK stiffness around the X axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, stiffness[0]), RawPropertyType(5), nullptr},
		PoseBone_ik_stiffness_x_get, PoseBone_ik_stiffness_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_stiffness_y_ = {
		{&rna_PoseBone_ik_stiffness_z, 	&rna_PoseBone_ik_stiffness_x,
		-1, "ik_stiffness_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK Y Stiffness",
		"IK stiffness around the Y axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, stiffness[1]), RawPropertyType(5), nullptr},
		PoseBone_ik_stiffness_y_get, PoseBone_ik_stiffness_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_stiffness_z_ = {
		{&rna_PoseBone_ik_stretch, 	&rna_PoseBone_ik_stiffness_y,
		-1, "ik_stiffness_z", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK Z Stiffness",
		"IK stiffness around the Z axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, stiffness[2]), RawPropertyType(5), nullptr},
		PoseBone_ik_stiffness_z_get, PoseBone_ik_stiffness_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_stretch_ = {
		{&rna_PoseBone_ik_rotation_weight, 	&rna_PoseBone_ik_stiffness_z,
		-1, "ik_stretch", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK Stretch",
		"Allow scaling of the bone for IK",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, ikstretch), RawPropertyType(5), nullptr},
		PoseBone_ik_stretch_get, PoseBone_ik_stretch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_rotation_weight_ = {
		{&rna_PoseBone_ik_linear_weight, 	&rna_PoseBone_ik_stretch,
		-1, "ik_rotation_weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK Rotation Weight",
		"Weight of rotation constraint for IK",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, ikrotweight), RawPropertyType(5), nullptr},
		PoseBone_ik_rotation_weight_get, PoseBone_ik_rotation_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_ik_linear_weight_ = {
		{&rna_PoseBone_custom_shape, 	&rna_PoseBone_ik_rotation_weight,
		-1, "ik_linear_weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK Lin Weight",
		"Weight of scale constraint for IK",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, iklinweight), RawPropertyType(5), nullptr},
		PoseBone_ik_linear_weight_get, PoseBone_ik_linear_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_custom_shape_ = {
		{&rna_PoseBone_custom_shape_scale_xyz, 	&rna_PoseBone_ik_linear_weight,
		-1, "custom_shape", 8388801, 1, 0, 64, 0, PropertyPathTemplateType(0), "Custom Object",
		"Object that defines custom display shape for this bone",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_dependency_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_custom_shape_get, PoseBone_custom_shape_set, nullptr, rna_Pose_custom_shape_object_poll,RNA_Object
	};

	static float rna_PoseBone_custom_shape_scale_xyz_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_PoseBone_custom_shape_scale_xyz_ = {
		{&rna_PoseBone_custom_shape_translation, 	&rna_PoseBone_custom_shape,
		-1, "custom_shape_scale_xyz", 67108867, 0, 0, 4, 0, PropertyPathTemplateType(0), "Custom Shape Scale",
		"Adjust the size of the custom shape",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, custom_scale_xyz), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_custom_shape_scale_xyz_get, PoseBone_custom_shape_scale_xyz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_custom_shape_scale_xyz_default
	};

	static float rna_PoseBone_custom_shape_translation_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_custom_shape_translation_ = {
		{&rna_PoseBone_custom_shape_rotation_euler, 	&rna_PoseBone_custom_shape_scale_xyz,
		-1, "custom_shape_translation", 67108867, 0, 0, 4, 0, PropertyPathTemplateType(0), "Custom Shape Translation",
		"Adjust the location of the custom shape",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, custom_translation), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_custom_shape_translation_get, PoseBone_custom_shape_translation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_PoseBone_custom_shape_translation_default
	};

	static float rna_PoseBone_custom_shape_rotation_euler_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_custom_shape_rotation_euler_ = {
		{&rna_PoseBone_use_transform_at_custom_shape, 	&rna_PoseBone_custom_shape_translation,
		-1, "custom_shape_rotation_euler", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Custom Shape Rotation",
		"Adjust the rotation of the custom shape",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, custom_rotation_euler), RawPropertyType(5), nullptr},
		nullptr, nullptr, PoseBone_custom_shape_rotation_euler_get, PoseBone_custom_shape_rotation_euler_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 5, nullptr, nullptr, 0.0f, rna_PoseBone_custom_shape_rotation_euler_default
	};

	rna_PoseBone_use_transform_at_custom_shape_ = {
		{&rna_PoseBone_use_transform_around_custom_shape, 	&rna_PoseBone_custom_shape_rotation_euler,
		-1, "use_transform_at_custom_shape", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Affect Gizmo",
		"The location and orientation of the Custom Shape Transform bone will be used for transform gizmos and for other transform operators in the 3D Viewport. When disabled, the 3D Viewport will still use the actual bone transform for these, even when the custom bone shape transform is overridden.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_use_transform_at_custom_shape_get, PoseBone_use_transform_at_custom_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_use_transform_around_custom_shape_ = {
		{&rna_PoseBone_use_custom_shape_bone_size, 	&rna_PoseBone_use_transform_at_custom_shape,
		-1, "use_transform_around_custom_shape", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use As Pivot",
		"Transform the bone as if it was a child of the Custom Shape Transform bone. This can be useful when combining shape-key and armature deformations.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_use_transform_around_custom_shape_get, PoseBone_use_transform_around_custom_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_use_custom_shape_bone_size_ = {
		{&rna_PoseBone_hide, 	&rna_PoseBone_use_transform_around_custom_shape,
		-1, "use_custom_shape_bone_size", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale to Bone Length",
		"Scale the custom object by the bone length",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_use_custom_shape_bone_size_get, PoseBone_use_custom_shape_bone_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_PoseBone_hide_ = {
		{&rna_PoseBone_select, 	&rna_PoseBone_use_custom_shape_bone_size,
		-1, "hide", 4355, 1, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Bone is not visible except for Edit Mode",
		32, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_PoseBone_visibility_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_hide_get, PoseBone_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_select_ = {
		{&rna_PoseBone_custom_shape_transform, 	&rna_PoseBone_hide,
		-1, "select", 4353, 1, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Bone is selected in Pose Mode",
		32, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_select_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_select_get, PoseBone_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_custom_shape_transform_ = {
		{&rna_PoseBone_custom_shape_wire_width, 	&rna_PoseBone_select,
		-1, "custom_shape_transform", 8388737, 2, 0, 0, 0, PropertyPathTemplateType(0), "Custom Shape Transform",
		"Bone that defines the display transform of this custom shape",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_custom_shape_transform_get, PoseBone_custom_shape_transform_set, nullptr, nullptr,RNA_PoseBone
	};

	rna_PoseBone_custom_shape_wire_width_ = {
		{&rna_PoseBone_color, 	&rna_PoseBone_custom_shape_transform,
		-1, "custom_shape_wire_width", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Wire Width",
		"Adjust the line thickness of custom shapes",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPoseChannel, custom_shape_wire_width), RawPropertyType(5), nullptr},
		PoseBone_custom_shape_wire_width_get, PoseBone_custom_shape_wire_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 10.0f, 1.0f, 16.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PoseBone_color_ = {
		{&rna_PoseBone_lock_location, 	&rna_PoseBone_custom_shape_wire_width,
		-1, "color", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "color",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_color_get, nullptr, nullptr, nullptr,RNA_BoneColor
	};

	static bool rna_PoseBone_lock_location_default[3] = {
		0,
		0,
		0
	};
	rna_PoseBone_lock_location_ = {
		{&rna_PoseBone_lock_rotation, 	&rna_PoseBone_color,
		-1, "lock_location", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Location",
		"Lock editing of location when transforming",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, PoseBone_lock_location_get, PoseBone_lock_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_PoseBone_lock_location_default
	};

	static bool rna_PoseBone_lock_rotation_default[3] = {
		0,
		0,
		0
	};
	rna_PoseBone_lock_rotation_ = {
		{&rna_PoseBone_lock_rotation_w, 	&rna_PoseBone_lock_location,
		-1, "lock_rotation", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Rotation",
		"Lock editing of rotation when transforming",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, PoseBone_lock_rotation_get, PoseBone_lock_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_PoseBone_lock_rotation_default
	};

	rna_PoseBone_lock_rotation_w_ = {
		{&rna_PoseBone_lock_rotations_4d, 	&rna_PoseBone_lock_rotation,
		-1, "lock_rotation_w", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Rotation (4D Angle)",
		"Lock editing of \'angle\' component of four-component rotations when transforming",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_lock_rotation_w_get, PoseBone_lock_rotation_w_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PoseBone_lock_rotations_4d_ = {
		{&rna_PoseBone_lock_scale, 	&rna_PoseBone_lock_rotation_w,
		-1, "lock_rotations_4d", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Rotations (4D)",
		"Lock editing of four component rotations by components (instead of as Eulers)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBone_lock_rotations_4d_get, PoseBone_lock_rotations_4d_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static bool rna_PoseBone_lock_scale_default[3] = {
		0,
		0,
		0
	};
	rna_PoseBone_lock_scale_ = {
		{nullptr, 	&rna_PoseBone_lock_rotations_4d,
		-1, "lock_scale", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Scale",
		"Lock editing of scale when transforming",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, PoseBone_lock_scale_get, PoseBone_lock_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_PoseBone_lock_scale_default
	};

	StructRNA *srna = RNA_PoseBone;
	srna->cont.properties = {&rna_PoseBone_rna_properties, &rna_PoseBone_lock_scale};
	srna->identifier = "PoseBone";
	srna->flag = 516;
	srna->name = "Pose Bone";
	srna->description = "Channel defining pose data for a bone in a Pose";
	srna->translation_context = "*";
	srna->icon = 180;
	srna->nameproperty = &rna_PoseBone_name;
	srna->iteratorproperty = &rna_PoseBone_rna_properties;
	srna->path = rna_PoseBone_path;
	srna->idproperties = rna_PoseBone_idprops;
	srna->system_idproperties = rna_PoseBone_system_idprops;
	{
	rna_PoseBone_bl_system_properties_get_do_create_ = {
		{&rna_PoseBone_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_PoseBone_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_PoseBone_bl_system_properties_get_do_create,
		-1, "system_properties", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The system properties root container, or None if there are no system properties stored in this data yet, and its creation was not requested",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PoseBone_bl_system_properties_get_do_create, &rna_PoseBone_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = PoseBone_bl_system_properties_get_call;
		func->c_ret = &rna_PoseBone_bl_system_properties_get_system_properties;
		rna_PoseBone_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_PoseBone_evaluate_envelope_point_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_evaluate_envelope_point_ = {
		{&rna_PoseBone_evaluate_envelope_factor, 	nullptr,
		-1, "point", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Point",
		"Position in 3d space to evaluate",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_evaluate_envelope_point_default
	};
	rna_PoseBone_evaluate_envelope_factor_ = {
		{nullptr, 	&rna_PoseBone_evaluate_envelope_point,
		-1, "factor", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Factor",
		"Envelope factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PoseBone_evaluate_envelope_point, &rna_PoseBone_evaluate_envelope_factor};
		func->identifier = "evaluate_envelope";
		func->flag = 2048;
		func->description = "Calculate bone envelope at given point";
		func->call = PoseBone_evaluate_envelope_call;
		func->c_ret = &rna_PoseBone_evaluate_envelope_factor;
		rna_PoseBone_evaluate_envelope_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_PoseBone_bbone_segment_index_point_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_bbone_segment_index_point_ = {
		{&rna_PoseBone_bbone_segment_index_index, 	nullptr,
		-1, "point", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Point",
		"Vertex position in armature pose space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_bbone_segment_index_point_default
	};
	rna_PoseBone_bbone_segment_index_index_ = {
		{&rna_PoseBone_bbone_segment_index_blend_next, 	&rna_PoseBone_bbone_segment_index_point,
		-1, "index", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The index of the first segment joint affecting the point",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_PoseBone_bbone_segment_index_blend_next_ = {
		{nullptr, 	&rna_PoseBone_bbone_segment_index_index,
		-1, "blend_next", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The blend factor between the given and the following joint",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PoseBone_bbone_segment_index_point, &rna_PoseBone_bbone_segment_index_blend_next};
		func->identifier = "bbone_segment_index";
		func->flag = 2064;
		func->description = "Retrieve the index and blend factor of the B-Bone segments based on vertex position";
		func->call = PoseBone_bbone_segment_index_call;
		rna_PoseBone_bbone_segment_index_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_PoseBone_bbone_segment_matrix_matrix_return_default[16] = {
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
	rna_PoseBone_bbone_segment_matrix_matrix_return_ = {
		{&rna_PoseBone_bbone_segment_matrix_index, 	nullptr,
		-1, "matrix_return", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The resulting matrix in bone local space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_bbone_segment_matrix_matrix_return_default
	};
	rna_PoseBone_bbone_segment_matrix_index_ = {
		{&rna_PoseBone_bbone_segment_matrix_rest, 	&rna_PoseBone_bbone_segment_matrix_matrix_return,
		-1, "index", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Index of the segment endpoint",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_PoseBone_bbone_segment_matrix_rest_ = {
		{nullptr, 	&rna_PoseBone_bbone_segment_matrix_index,
		-1, "rest", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Return the rest pose matrix",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PoseBone_bbone_segment_matrix_matrix_return, &rna_PoseBone_bbone_segment_matrix_rest};
		func->identifier = "bbone_segment_matrix";
		func->flag = 2064;
		func->description = "Retrieve the matrix of the joint between B-Bone segments if available";
		func->call = PoseBone_bbone_segment_matrix_call;
		rna_PoseBone_bbone_segment_matrix_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_PoseBone_compute_bbone_handles_handle1_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_compute_bbone_handles_handle1_ = {
		{&rna_PoseBone_compute_bbone_handles_roll1, 	nullptr,
		-1, "handle1", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The direction vector of the start handle in bone local space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_compute_bbone_handles_handle1_default
	};
	rna_PoseBone_compute_bbone_handles_roll1_ = {
		{&rna_PoseBone_compute_bbone_handles_handle2, 	&rna_PoseBone_compute_bbone_handles_handle1,
		-1, "roll1", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Roll of the start handle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	static float rna_PoseBone_compute_bbone_handles_handle2_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PoseBone_compute_bbone_handles_handle2_ = {
		{&rna_PoseBone_compute_bbone_handles_roll2, 	&rna_PoseBone_compute_bbone_handles_roll1,
		-1, "handle2", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The direction vector of the end handle in bone local space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PoseBone_compute_bbone_handles_handle2_default
	};
	rna_PoseBone_compute_bbone_handles_roll2_ = {
		{&rna_PoseBone_compute_bbone_handles_rest, 	&rna_PoseBone_compute_bbone_handles_handle2,
		-1, "roll2", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Roll of the end handle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_PoseBone_compute_bbone_handles_rest_ = {
		{&rna_PoseBone_compute_bbone_handles_ease, 	&rna_PoseBone_compute_bbone_handles_roll2,
		-1, "rest", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Return the rest pose state",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_PoseBone_compute_bbone_handles_ease_ = {
		{&rna_PoseBone_compute_bbone_handles_offsets, 	&rna_PoseBone_compute_bbone_handles_rest,
		-1, "ease", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Apply scale from ease values",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_PoseBone_compute_bbone_handles_offsets_ = {
		{nullptr, 	&rna_PoseBone_compute_bbone_handles_ease,
		-1, "offsets", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Apply roll and curve offsets from bone properties",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PoseBone_compute_bbone_handles_handle1, &rna_PoseBone_compute_bbone_handles_offsets};
		func->identifier = "compute_bbone_handles";
		func->flag = 2064;
		func->description = "Retrieve the vectors and rolls coming from B-Bone custom handles";
		func->call = PoseBone_compute_bbone_handles_call;
		rna_PoseBone_compute_bbone_handles_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* PoseBone Constraints */
static CollectionPropertyRNA rna_PoseBoneConstraints_rna_properties_;
PropertyRNA &rna_PoseBoneConstraints_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PoseBoneConstraints_rna_properties_);

static PointerPropertyRNA rna_PoseBoneConstraints_rna_type_;
PropertyRNA &rna_PoseBoneConstraints_rna_type = reinterpret_cast<PropertyRNA &>(rna_PoseBoneConstraints_rna_type_);

static PointerPropertyRNA rna_PoseBoneConstraints_active_;
PropertyRNA &rna_PoseBoneConstraints_active = reinterpret_cast<PropertyRNA &>(rna_PoseBoneConstraints_active_);

static PointerPropertyRNA rna_PoseBoneConstraints_new_constraint_;
PropertyRNA &rna_PoseBoneConstraints_new_constraint = reinterpret_cast<PropertyRNA &>(rna_PoseBoneConstraints_new_constraint_);

static EnumPropertyRNA rna_PoseBoneConstraints_new_type_;
PropertyRNA &rna_PoseBoneConstraints_new_type = reinterpret_cast<PropertyRNA &>(rna_PoseBoneConstraints_new_type_);

FunctionRNA *rna_PoseBoneConstraints_new_func;
static PointerPropertyRNA rna_PoseBoneConstraints_remove_constraint_;
PropertyRNA &rna_PoseBoneConstraints_remove_constraint = reinterpret_cast<PropertyRNA &>(rna_PoseBoneConstraints_remove_constraint_);

FunctionRNA *rna_PoseBoneConstraints_remove_func;
static IntPropertyRNA rna_PoseBoneConstraints_move_from_index_;
PropertyRNA &rna_PoseBoneConstraints_move_from_index = reinterpret_cast<PropertyRNA &>(rna_PoseBoneConstraints_move_from_index_);

static IntPropertyRNA rna_PoseBoneConstraints_move_to_index_;
PropertyRNA &rna_PoseBoneConstraints_move_to_index = reinterpret_cast<PropertyRNA &>(rna_PoseBoneConstraints_move_to_index_);

FunctionRNA *rna_PoseBoneConstraints_move_func;
static PointerPropertyRNA rna_PoseBoneConstraints_copy_constraint_;
PropertyRNA &rna_PoseBoneConstraints_copy_constraint = reinterpret_cast<PropertyRNA &>(rna_PoseBoneConstraints_copy_constraint_);

static PointerPropertyRNA rna_PoseBoneConstraints_copy_new_constraint_;
PropertyRNA &rna_PoseBoneConstraints_copy_new_constraint = reinterpret_cast<PropertyRNA &>(rna_PoseBoneConstraints_copy_new_constraint_);

FunctionRNA *rna_PoseBoneConstraints_copy_func;
StructRNA *RNA_PoseBoneConstraints;
void register_struct_PoseBoneConstraints(BlenderRNA &brna)
{
	rna_PoseBoneConstraints_rna_properties_ = {
		{&rna_PoseBoneConstraints_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBoneConstraints_rna_properties_begin, PoseBoneConstraints_rna_properties_next, PoseBoneConstraints_rna_properties_end, PoseBoneConstraints_rna_properties_get, nullptr, nullptr, PoseBoneConstraints_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PoseBoneConstraints_rna_type_ = {
		{&rna_PoseBoneConstraints_active, 	&rna_PoseBoneConstraints_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBoneConstraints_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PoseBoneConstraints_active_ = {
		{nullptr, 	&rna_PoseBoneConstraints_rna_type,
		-1, "active", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Constraint",
		"Active PoseChannel constraint",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PoseBoneConstraints_active_get, PoseBoneConstraints_active_set, nullptr, nullptr,RNA_Constraint
	};

	StructRNA *srna = RNA_PoseBoneConstraints;
	srna->cont.properties = {&rna_PoseBoneConstraints_rna_properties, &rna_PoseBoneConstraints_active};
	srna->identifier = "PoseBoneConstraints";
	srna->flag = 516;
	srna->name = "PoseBone Constraints";
	srna->description = "Collection of pose bone constraints";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PoseBoneConstraints_rna_properties;
	{
	rna_PoseBoneConstraints_new_constraint_ = {
		{&rna_PoseBoneConstraints_new_type, 	nullptr,
		-1, "constraint", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New constraint",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Constraint
	};
	rna_PoseBoneConstraints_new_type_ = {
		{nullptr, 	&rna_PoseBoneConstraints_new_constraint,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Constraint type to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_constraint_type_items, 33, 1
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PoseBoneConstraints_new_constraint, &rna_PoseBoneConstraints_new_type};
		func->identifier = "new";
		func->flag = 2052;
		func->description = "Add a constraint to this object";
		func->call = PoseBoneConstraints_new_call;
		func->c_ret = &rna_PoseBoneConstraints_new_constraint;
		rna_PoseBoneConstraints_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_PoseBoneConstraints_remove_constraint_ = {
		{nullptr, 	nullptr,
		-1, "constraint", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Removed constraint",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Constraint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PoseBoneConstraints_remove_constraint, &rna_PoseBoneConstraints_remove_constraint};
		func->identifier = "remove";
		func->flag = 2068;
		func->description = "Remove a constraint from this object";
		func->call = PoseBoneConstraints_remove_call;
		rna_PoseBoneConstraints_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_PoseBoneConstraints_move_from_index_ = {
		{&rna_PoseBoneConstraints_move_to_index, 	nullptr,
		-1, "from_index", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "From Index",
		"Index to move",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
	rna_PoseBoneConstraints_move_to_index_ = {
		{nullptr, 	&rna_PoseBoneConstraints_move_from_index,
		-1, "to_index", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "To Index",
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
		func->cont.properties = {&rna_PoseBoneConstraints_move_from_index, &rna_PoseBoneConstraints_move_to_index};
		func->identifier = "move";
		func->flag = 2068;
		func->description = "Move a constraint to a different position";
		func->call = PoseBoneConstraints_move_call;
		rna_PoseBoneConstraints_move_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_PoseBoneConstraints_copy_constraint_ = {
		{&rna_PoseBoneConstraints_copy_new_constraint, 	nullptr,
		-1, "constraint", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Constraint to copy - may belong to a different object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Constraint
	};
	rna_PoseBoneConstraints_copy_new_constraint_ = {
		{nullptr, 	&rna_PoseBoneConstraints_copy_constraint,
		-1, "new_constraint", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New constraint",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Constraint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PoseBoneConstraints_copy_constraint, &rna_PoseBoneConstraints_copy_new_constraint};
		func->identifier = "copy";
		func->flag = 2052;
		func->description = "Add a new constraint that is a copy of the given one";
		func->call = PoseBoneConstraints_copy_call;
		func->c_ret = &rna_PoseBoneConstraints_copy_new_constraint;
		rna_PoseBoneConstraints_copy_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* IKParam */
static CollectionPropertyRNA rna_IKParam_rna_properties_;
PropertyRNA &rna_IKParam_rna_properties = reinterpret_cast<PropertyRNA &>(rna_IKParam_rna_properties_);

static PointerPropertyRNA rna_IKParam_rna_type_;
PropertyRNA &rna_IKParam_rna_type = reinterpret_cast<PropertyRNA &>(rna_IKParam_rna_type_);

static EnumPropertyRNA rna_IKParam_ik_solver_;
PropertyRNA &rna_IKParam_ik_solver = reinterpret_cast<PropertyRNA &>(rna_IKParam_ik_solver_);

StructRNA *RNA_IKParam;
void register_struct_IKParam(BlenderRNA &brna)
{
	rna_IKParam_rna_properties_ = {
		{&rna_IKParam_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IKParam_rna_properties_begin, IKParam_rna_properties_next, IKParam_rna_properties_end, IKParam_rna_properties_get, nullptr, nullptr, IKParam_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_IKParam_rna_type_ = {
		{&rna_IKParam_ik_solver, 	&rna_IKParam_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IKParam_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_IKParam_ik_solver_items[3] = {
		{0, "LEGACY", 0, "Standard", "Original IK solver"	},
		{1, "ITASC", 0, "iTaSC", "Multi constraint, stateful IK solver"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_IKParam_ik_solver_ = {
		{nullptr, 	&rna_IKParam_rna_type,
		-1, "ik_solver", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "IK Solver",
		"IK solver for which these parameters are defined",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bIKParam, iksolver), RawPropertyType(0), nullptr},
		IKParam_ik_solver_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_IKParam_ik_solver_items, 2, 0
	};

	StructRNA *srna = RNA_IKParam;
	srna->cont.properties = {&rna_IKParam_rna_properties, &rna_IKParam_ik_solver};
	srna->identifier = "IKParam";
	srna->flag = 516;
	srna->name = "IKParam";
	srna->description = "Base type for IK solver parameters";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_IKParam_rna_properties;
	srna->refine = rna_IKParam_refine;
};

/* bItasc */
static FloatPropertyRNA rna_Itasc_precision_;
PropertyRNA &rna_Itasc_precision = reinterpret_cast<PropertyRNA &>(rna_Itasc_precision_);

static IntPropertyRNA rna_Itasc_iterations_;
PropertyRNA &rna_Itasc_iterations = reinterpret_cast<PropertyRNA &>(rna_Itasc_iterations_);

static IntPropertyRNA rna_Itasc_step_count_;
PropertyRNA &rna_Itasc_step_count = reinterpret_cast<PropertyRNA &>(rna_Itasc_step_count_);

static BoolPropertyRNA rna_Itasc_translate_root_bones_;
PropertyRNA &rna_Itasc_translate_root_bones = reinterpret_cast<PropertyRNA &>(rna_Itasc_translate_root_bones_);

static EnumPropertyRNA rna_Itasc_mode_;
PropertyRNA &rna_Itasc_mode = reinterpret_cast<PropertyRNA &>(rna_Itasc_mode_);

static EnumPropertyRNA rna_Itasc_reiteration_method_;
PropertyRNA &rna_Itasc_reiteration_method = reinterpret_cast<PropertyRNA &>(rna_Itasc_reiteration_method_);

static BoolPropertyRNA rna_Itasc_use_auto_step_;
PropertyRNA &rna_Itasc_use_auto_step = reinterpret_cast<PropertyRNA &>(rna_Itasc_use_auto_step_);

static FloatPropertyRNA rna_Itasc_step_min_;
PropertyRNA &rna_Itasc_step_min = reinterpret_cast<PropertyRNA &>(rna_Itasc_step_min_);

static FloatPropertyRNA rna_Itasc_step_max_;
PropertyRNA &rna_Itasc_step_max = reinterpret_cast<PropertyRNA &>(rna_Itasc_step_max_);

static FloatPropertyRNA rna_Itasc_feedback_;
PropertyRNA &rna_Itasc_feedback = reinterpret_cast<PropertyRNA &>(rna_Itasc_feedback_);

static FloatPropertyRNA rna_Itasc_velocity_max_;
PropertyRNA &rna_Itasc_velocity_max = reinterpret_cast<PropertyRNA &>(rna_Itasc_velocity_max_);

static EnumPropertyRNA rna_Itasc_solver_;
PropertyRNA &rna_Itasc_solver = reinterpret_cast<PropertyRNA &>(rna_Itasc_solver_);

static FloatPropertyRNA rna_Itasc_damping_max_;
PropertyRNA &rna_Itasc_damping_max = reinterpret_cast<PropertyRNA &>(rna_Itasc_damping_max_);

static FloatPropertyRNA rna_Itasc_damping_epsilon_;
PropertyRNA &rna_Itasc_damping_epsilon = reinterpret_cast<PropertyRNA &>(rna_Itasc_damping_epsilon_);

StructRNA *RNA_Itasc;
void register_struct_Itasc(BlenderRNA &brna)
{
	rna_Itasc_precision_ = {
		{&rna_Itasc_iterations, 	nullptr,
		-1, "precision", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Precision",
		"Precision of convergence in case of reiteration",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, precision), RawPropertyType(5), nullptr},
		Itasc_precision_get, Itasc_precision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.1000000015f, 0.0f, 0.1000000015f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Itasc_iterations_ = {
		{&rna_Itasc_step_count, 	&rna_Itasc_precision,
		-1, "iterations", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Iterations",
		"Maximum number of iterations for convergence in case of reiteration",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, numiter), RawPropertyType(1), nullptr},
		Itasc_iterations_get, Itasc_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1000, 0, 1000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Itasc_step_count_ = {
		{&rna_Itasc_translate_root_bones, 	&rna_Itasc_iterations,
		-1, "step_count", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Num Steps",
		"Divide the frame interval into this many steps",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, numstep), RawPropertyType(1), nullptr},
		Itasc_step_count_get, Itasc_step_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 50, 1, 50, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Itasc_translate_root_bones_ = {
		{&rna_Itasc_mode, 	&rna_Itasc_step_count,
		-1, "translate_root_bones", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Translate Roots",
		"Translate root (i.e. parentless) bones to the armature origin",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Itasc_translate_root_bones_get, Itasc_translate_root_bones_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Itasc_mode_items[3] = {
		{0, "ANIMATION", 0, "Animation", "Stateless solver computing pose starting from current action and non-IK constraints"	},
		{8, "SIMULATION", 0, "Simulation", "State-full solver running in real-time context and ignoring actions and non-IK constraints"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Itasc_mode_ = {
		{&rna_Itasc_reiteration_method, 	&rna_Itasc_translate_root_bones,
		-1, "mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		nullptr,
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update_rebuild, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, flag), RawPropertyType(1), nullptr},
		Itasc_mode_get, Itasc_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Itasc_mode_items, 2, 0
	};

	static const EnumPropertyItem rna_Itasc_reiteration_method_items[4] = {
		{0, "NEVER", 0, "Never", "The solver does not reiterate, not even on first frame (starts from rest pose)"	},
		{2, "INITIAL", 0, "Initial", "The solver reiterates (converges) on the first frame but not on subsequent frame"	},
		{6, "ALWAYS", 0, "Always", "The solver reiterates (converges) on all frames"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Itasc_reiteration_method_ = {
		{&rna_Itasc_use_auto_step, 	&rna_Itasc_mode,
		-1, "reiteration_method", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Reiteration",
		"Defines if the solver is allowed to reiterate (converge until precision is met) on none, first or all frames",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, flag), RawPropertyType(1), nullptr},
		Itasc_reiteration_method_get, Itasc_reiteration_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Itasc_reiteration_method_items, 3, 0
	};

	rna_Itasc_use_auto_step_ = {
		{&rna_Itasc_step_min, 	&rna_Itasc_reiteration_method,
		-1, "use_auto_step", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto Step",
		"Automatically determine the optimal number of steps for best performance/accuracy trade off",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Itasc_use_auto_step_get, Itasc_use_auto_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Itasc_step_min_ = {
		{&rna_Itasc_step_max, 	&rna_Itasc_use_auto_step,
		-1, "step_min", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Min Step",
		"Lower bound for timestep in second in case of automatic substeps",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, minstep), RawPropertyType(5), nullptr},
		Itasc_step_min_get, Itasc_step_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.1000000015f, 0.0f, 0.1000000015f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Itasc_step_max_ = {
		{&rna_Itasc_feedback, 	&rna_Itasc_step_min,
		-1, "step_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Step",
		"Higher bound for timestep in second in case of automatic substeps",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, maxstep), RawPropertyType(5), nullptr},
		Itasc_step_max_get, Itasc_step_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Itasc_feedback_ = {
		{&rna_Itasc_velocity_max, 	&rna_Itasc_step_max,
		-1, "feedback", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Feedback",
		"Feedback coefficient for error correction, average response time is 1/feedback",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, feedback), RawPropertyType(5), nullptr},
		Itasc_feedback_get, Itasc_feedback_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Itasc_velocity_max_ = {
		{&rna_Itasc_solver, 	&rna_Itasc_feedback,
		-1, "velocity_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Velocity",
		"Maximum joint velocity in radians/second",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, maxvel), RawPropertyType(5), nullptr},
		Itasc_velocity_max_get, Itasc_velocity_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_Itasc_solver_items[3] = {
		{0, "SDLS", 0, "SDLS", "Selective Damped Least Square"	},
		{1, "DLS", 0, "DLS", "Damped Least Square with Numerical Filtering"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Itasc_solver_ = {
		{&rna_Itasc_damping_max, 	&rna_Itasc_velocity_max,
		-1, "solver", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Solver",
		"Solving method selection: automatic damping or manual damping",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update_rebuild, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, solver), RawPropertyType(1), nullptr},
		Itasc_solver_get, Itasc_solver_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Itasc_solver_items, 2, 0
	};

	rna_Itasc_damping_max_ = {
		{&rna_Itasc_damping_epsilon, 	&rna_Itasc_solver,
		-1, "damping_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Damp",
		"Maximum damping coefficient when singular value is nearly 0 (higher values produce results with more stability, less reactivity)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, dampmax), RawPropertyType(5), nullptr},
		Itasc_damping_max_get, Itasc_damping_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Itasc_damping_epsilon_ = {
		{nullptr, 	&rna_Itasc_damping_max,
		-1, "damping_epsilon", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Epsilon",
		"Singular value under which damping is progressively applied (higher values produce results with more stability, less reactivity)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Itasc_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bItasc, dampeps), RawPropertyType(5), nullptr},
		Itasc_damping_epsilon_get, Itasc_damping_epsilon_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_Itasc;
	srna->cont.properties = {&rna_Itasc_precision, &rna_Itasc_damping_epsilon};
	srna->identifier = "Itasc";
	srna->flag = 516;
	srna->name = "bItasc";
	srna->description = "Parameters for the iTaSC IK solver";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_IKParam_rna_properties;
	srna->base = RNA_IKParam;
	srna->refine = rna_IKParam_refine;
};


}  // namespace blender
