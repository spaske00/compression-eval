
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

#include "rna_constraint.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;


extern PropertyRNA &rna_ConstraintTarget_rna_properties;
extern PropertyRNA &rna_ConstraintTarget_rna_type;
extern PropertyRNA &rna_ConstraintTarget_target;
extern PropertyRNA &rna_ConstraintTarget_subtarget;


extern PropertyRNA &rna_ConstraintTargetBone_rna_properties;
extern PropertyRNA &rna_ConstraintTargetBone_rna_type;
extern PropertyRNA &rna_ConstraintTargetBone_target;
extern PropertyRNA &rna_ConstraintTargetBone_subtarget;
extern PropertyRNA &rna_ConstraintTargetBone_weight;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_ChildOfConstraint_target;
extern PropertyRNA &rna_ChildOfConstraint_subtarget;
extern PropertyRNA &rna_ChildOfConstraint_use_location_x;
extern PropertyRNA &rna_ChildOfConstraint_use_location_y;
extern PropertyRNA &rna_ChildOfConstraint_use_location_z;
extern PropertyRNA &rna_ChildOfConstraint_use_rotation_x;
extern PropertyRNA &rna_ChildOfConstraint_use_rotation_y;
extern PropertyRNA &rna_ChildOfConstraint_use_rotation_z;
extern PropertyRNA &rna_ChildOfConstraint_use_scale_x;
extern PropertyRNA &rna_ChildOfConstraint_use_scale_y;
extern PropertyRNA &rna_ChildOfConstraint_use_scale_z;
extern PropertyRNA &rna_ChildOfConstraint_set_inverse_pending;
extern PropertyRNA &rna_ChildOfConstraint_inverse_matrix;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_ArmatureConstraint_targets;
extern PropertyRNA &rna_ArmatureConstraint_use_deform_preserve_volume;
extern PropertyRNA &rna_ArmatureConstraint_use_bone_envelopes;
extern PropertyRNA &rna_ArmatureConstraint_use_current_location;


extern PropertyRNA &rna_ArmatureConstraintTargets_rna_properties;
extern PropertyRNA &rna_ArmatureConstraintTargets_rna_type;

extern FunctionRNA *rna_ArmatureConstraintTargets_new_func;
extern PropertyRNA &rna_ArmatureConstraintTargets_new_target;

extern FunctionRNA *rna_ArmatureConstraintTargets_remove_func;
extern PropertyRNA &rna_ArmatureConstraintTargets_remove_target;

extern FunctionRNA *rna_ArmatureConstraintTargets_clear_func;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_StretchToConstraint_head_tail;
extern PropertyRNA &rna_StretchToConstraint_use_bbone_shape;
extern PropertyRNA &rna_StretchToConstraint_target;
extern PropertyRNA &rna_StretchToConstraint_subtarget;
extern PropertyRNA &rna_StretchToConstraint_volume;
extern PropertyRNA &rna_StretchToConstraint_keep_axis;
extern PropertyRNA &rna_StretchToConstraint_rest_length;
extern PropertyRNA &rna_StretchToConstraint_bulge;
extern PropertyRNA &rna_StretchToConstraint_use_bulge_min;
extern PropertyRNA &rna_StretchToConstraint_use_bulge_max;
extern PropertyRNA &rna_StretchToConstraint_bulge_min;
extern PropertyRNA &rna_StretchToConstraint_bulge_max;
extern PropertyRNA &rna_StretchToConstraint_bulge_smooth;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_FollowPathConstraint_target;
extern PropertyRNA &rna_FollowPathConstraint_offset;
extern PropertyRNA &rna_FollowPathConstraint_offset_factor;
extern PropertyRNA &rna_FollowPathConstraint_forward_axis;
extern PropertyRNA &rna_FollowPathConstraint_up_axis;
extern PropertyRNA &rna_FollowPathConstraint_use_curve_follow;
extern PropertyRNA &rna_FollowPathConstraint_use_fixed_location;
extern PropertyRNA &rna_FollowPathConstraint_use_curve_radius;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_LockedTrackConstraint_head_tail;
extern PropertyRNA &rna_LockedTrackConstraint_use_bbone_shape;
extern PropertyRNA &rna_LockedTrackConstraint_target;
extern PropertyRNA &rna_LockedTrackConstraint_subtarget;
extern PropertyRNA &rna_LockedTrackConstraint_track_axis;
extern PropertyRNA &rna_LockedTrackConstraint_lock_axis;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_ActionConstraint_target;
extern PropertyRNA &rna_ActionConstraint_subtarget;
extern PropertyRNA &rna_ActionConstraint_mix_mode;
extern PropertyRNA &rna_ActionConstraint_transform_channel;
extern PropertyRNA &rna_ActionConstraint_action;
extern PropertyRNA &rna_ActionConstraint_action_slot_handle;
extern PropertyRNA &rna_ActionConstraint_last_slot_identifier;
extern PropertyRNA &rna_ActionConstraint_action_slot;
extern PropertyRNA &rna_ActionConstraint_action_suitable_slots;
extern PropertyRNA &rna_ActionConstraint_use_bone_object_action;
extern PropertyRNA &rna_ActionConstraint_frame_start;
extern PropertyRNA &rna_ActionConstraint_frame_end;
extern PropertyRNA &rna_ActionConstraint_max;
extern PropertyRNA &rna_ActionConstraint_min;
extern PropertyRNA &rna_ActionConstraint_eval_time;
extern PropertyRNA &rna_ActionConstraint_use_eval_time;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_CopyScaleConstraint_target;
extern PropertyRNA &rna_CopyScaleConstraint_subtarget;
extern PropertyRNA &rna_CopyScaleConstraint_use_x;
extern PropertyRNA &rna_CopyScaleConstraint_use_y;
extern PropertyRNA &rna_CopyScaleConstraint_use_z;
extern PropertyRNA &rna_CopyScaleConstraint_power;
extern PropertyRNA &rna_CopyScaleConstraint_use_make_uniform;
extern PropertyRNA &rna_CopyScaleConstraint_use_offset;
extern PropertyRNA &rna_CopyScaleConstraint_use_add;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_MaintainVolumeConstraint_free_axis;
extern PropertyRNA &rna_MaintainVolumeConstraint_mode;
extern PropertyRNA &rna_MaintainVolumeConstraint_volume;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_CopyLocationConstraint_head_tail;
extern PropertyRNA &rna_CopyLocationConstraint_use_bbone_shape;
extern PropertyRNA &rna_CopyLocationConstraint_target;
extern PropertyRNA &rna_CopyLocationConstraint_subtarget;
extern PropertyRNA &rna_CopyLocationConstraint_use_x;
extern PropertyRNA &rna_CopyLocationConstraint_use_y;
extern PropertyRNA &rna_CopyLocationConstraint_use_z;
extern PropertyRNA &rna_CopyLocationConstraint_invert_x;
extern PropertyRNA &rna_CopyLocationConstraint_invert_y;
extern PropertyRNA &rna_CopyLocationConstraint_invert_z;
extern PropertyRNA &rna_CopyLocationConstraint_use_offset;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_CopyRotationConstraint_target;
extern PropertyRNA &rna_CopyRotationConstraint_subtarget;
extern PropertyRNA &rna_CopyRotationConstraint_use_x;
extern PropertyRNA &rna_CopyRotationConstraint_use_y;
extern PropertyRNA &rna_CopyRotationConstraint_use_z;
extern PropertyRNA &rna_CopyRotationConstraint_invert_x;
extern PropertyRNA &rna_CopyRotationConstraint_invert_y;
extern PropertyRNA &rna_CopyRotationConstraint_invert_z;
extern PropertyRNA &rna_CopyRotationConstraint_euler_order;
extern PropertyRNA &rna_CopyRotationConstraint_mix_mode;
extern PropertyRNA &rna_CopyRotationConstraint_use_offset;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_CopyTransformsConstraint_head_tail;
extern PropertyRNA &rna_CopyTransformsConstraint_use_bbone_shape;
extern PropertyRNA &rna_CopyTransformsConstraint_target;
extern PropertyRNA &rna_CopyTransformsConstraint_subtarget;
extern PropertyRNA &rna_CopyTransformsConstraint_remove_target_shear;
extern PropertyRNA &rna_CopyTransformsConstraint_mix_mode;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_FloorConstraint_target;
extern PropertyRNA &rna_FloorConstraint_subtarget;
extern PropertyRNA &rna_FloorConstraint_floor_location;
extern PropertyRNA &rna_FloorConstraint_use_rotation;
extern PropertyRNA &rna_FloorConstraint_offset;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_TrackToConstraint_head_tail;
extern PropertyRNA &rna_TrackToConstraint_use_bbone_shape;
extern PropertyRNA &rna_TrackToConstraint_target;
extern PropertyRNA &rna_TrackToConstraint_subtarget;
extern PropertyRNA &rna_TrackToConstraint_track_axis;
extern PropertyRNA &rna_TrackToConstraint_up_axis;
extern PropertyRNA &rna_TrackToConstraint_use_target_z;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_KinematicConstraint_target;
extern PropertyRNA &rna_KinematicConstraint_subtarget;
extern PropertyRNA &rna_KinematicConstraint_iterations;
extern PropertyRNA &rna_KinematicConstraint_pole_target;
extern PropertyRNA &rna_KinematicConstraint_pole_subtarget;
extern PropertyRNA &rna_KinematicConstraint_pole_angle;
extern PropertyRNA &rna_KinematicConstraint_weight;
extern PropertyRNA &rna_KinematicConstraint_orient_weight;
extern PropertyRNA &rna_KinematicConstraint_chain_count;
extern PropertyRNA &rna_KinematicConstraint_use_tail;
extern PropertyRNA &rna_KinematicConstraint_reference_axis;
extern PropertyRNA &rna_KinematicConstraint_use_location;
extern PropertyRNA &rna_KinematicConstraint_lock_location_x;
extern PropertyRNA &rna_KinematicConstraint_lock_location_y;
extern PropertyRNA &rna_KinematicConstraint_lock_location_z;
extern PropertyRNA &rna_KinematicConstraint_use_rotation;
extern PropertyRNA &rna_KinematicConstraint_lock_rotation_x;
extern PropertyRNA &rna_KinematicConstraint_lock_rotation_y;
extern PropertyRNA &rna_KinematicConstraint_lock_rotation_z;
extern PropertyRNA &rna_KinematicConstraint_use_stretch;
extern PropertyRNA &rna_KinematicConstraint_ik_type;
extern PropertyRNA &rna_KinematicConstraint_limit_mode;
extern PropertyRNA &rna_KinematicConstraint_distance;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_ClampToConstraint_target;
extern PropertyRNA &rna_ClampToConstraint_main_axis;
extern PropertyRNA &rna_ClampToConstraint_use_cyclic;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_LimitDistanceConstraint_head_tail;
extern PropertyRNA &rna_LimitDistanceConstraint_use_bbone_shape;
extern PropertyRNA &rna_LimitDistanceConstraint_target;
extern PropertyRNA &rna_LimitDistanceConstraint_subtarget;
extern PropertyRNA &rna_LimitDistanceConstraint_distance;
extern PropertyRNA &rna_LimitDistanceConstraint_limit_mode;
extern PropertyRNA &rna_LimitDistanceConstraint_use_transform_limit;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_LimitScaleConstraint_use_min_x;
extern PropertyRNA &rna_LimitScaleConstraint_use_min_y;
extern PropertyRNA &rna_LimitScaleConstraint_use_min_z;
extern PropertyRNA &rna_LimitScaleConstraint_use_max_x;
extern PropertyRNA &rna_LimitScaleConstraint_use_max_y;
extern PropertyRNA &rna_LimitScaleConstraint_use_max_z;
extern PropertyRNA &rna_LimitScaleConstraint_min_x;
extern PropertyRNA &rna_LimitScaleConstraint_min_y;
extern PropertyRNA &rna_LimitScaleConstraint_min_z;
extern PropertyRNA &rna_LimitScaleConstraint_max_x;
extern PropertyRNA &rna_LimitScaleConstraint_max_y;
extern PropertyRNA &rna_LimitScaleConstraint_max_z;
extern PropertyRNA &rna_LimitScaleConstraint_use_transform_limit;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_LimitRotationConstraint_use_limit_x;
extern PropertyRNA &rna_LimitRotationConstraint_use_limit_y;
extern PropertyRNA &rna_LimitRotationConstraint_use_limit_z;
extern PropertyRNA &rna_LimitRotationConstraint_min_x;
extern PropertyRNA &rna_LimitRotationConstraint_min_y;
extern PropertyRNA &rna_LimitRotationConstraint_min_z;
extern PropertyRNA &rna_LimitRotationConstraint_max_x;
extern PropertyRNA &rna_LimitRotationConstraint_max_y;
extern PropertyRNA &rna_LimitRotationConstraint_max_z;
extern PropertyRNA &rna_LimitRotationConstraint_euler_order;
extern PropertyRNA &rna_LimitRotationConstraint_use_transform_limit;
extern PropertyRNA &rna_LimitRotationConstraint_use_legacy_behavior;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_LimitLocationConstraint_use_min_x;
extern PropertyRNA &rna_LimitLocationConstraint_use_min_y;
extern PropertyRNA &rna_LimitLocationConstraint_use_min_z;
extern PropertyRNA &rna_LimitLocationConstraint_use_max_x;
extern PropertyRNA &rna_LimitLocationConstraint_use_max_y;
extern PropertyRNA &rna_LimitLocationConstraint_use_max_z;
extern PropertyRNA &rna_LimitLocationConstraint_min_x;
extern PropertyRNA &rna_LimitLocationConstraint_min_y;
extern PropertyRNA &rna_LimitLocationConstraint_min_z;
extern PropertyRNA &rna_LimitLocationConstraint_max_x;
extern PropertyRNA &rna_LimitLocationConstraint_max_y;
extern PropertyRNA &rna_LimitLocationConstraint_max_z;
extern PropertyRNA &rna_LimitLocationConstraint_use_transform_limit;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_TransformConstraint_target;
extern PropertyRNA &rna_TransformConstraint_subtarget;
extern PropertyRNA &rna_TransformConstraint_map_from;
extern PropertyRNA &rna_TransformConstraint_map_to;
extern PropertyRNA &rna_TransformConstraint_map_to_x_from;
extern PropertyRNA &rna_TransformConstraint_map_to_y_from;
extern PropertyRNA &rna_TransformConstraint_map_to_z_from;
extern PropertyRNA &rna_TransformConstraint_use_motion_extrapolate;
extern PropertyRNA &rna_TransformConstraint_from_rotation_mode;
extern PropertyRNA &rna_TransformConstraint_to_euler_order;
extern PropertyRNA &rna_TransformConstraint_from_min_x;
extern PropertyRNA &rna_TransformConstraint_from_min_y;
extern PropertyRNA &rna_TransformConstraint_from_min_z;
extern PropertyRNA &rna_TransformConstraint_from_max_x;
extern PropertyRNA &rna_TransformConstraint_from_max_y;
extern PropertyRNA &rna_TransformConstraint_from_max_z;
extern PropertyRNA &rna_TransformConstraint_to_min_x;
extern PropertyRNA &rna_TransformConstraint_to_min_y;
extern PropertyRNA &rna_TransformConstraint_to_min_z;
extern PropertyRNA &rna_TransformConstraint_to_max_x;
extern PropertyRNA &rna_TransformConstraint_to_max_y;
extern PropertyRNA &rna_TransformConstraint_to_max_z;
extern PropertyRNA &rna_TransformConstraint_mix_mode;
extern PropertyRNA &rna_TransformConstraint_from_min_x_rot;
extern PropertyRNA &rna_TransformConstraint_from_min_y_rot;
extern PropertyRNA &rna_TransformConstraint_from_min_z_rot;
extern PropertyRNA &rna_TransformConstraint_from_max_x_rot;
extern PropertyRNA &rna_TransformConstraint_from_max_y_rot;
extern PropertyRNA &rna_TransformConstraint_from_max_z_rot;
extern PropertyRNA &rna_TransformConstraint_to_min_x_rot;
extern PropertyRNA &rna_TransformConstraint_to_min_y_rot;
extern PropertyRNA &rna_TransformConstraint_to_min_z_rot;
extern PropertyRNA &rna_TransformConstraint_to_max_x_rot;
extern PropertyRNA &rna_TransformConstraint_to_max_y_rot;
extern PropertyRNA &rna_TransformConstraint_to_max_z_rot;
extern PropertyRNA &rna_TransformConstraint_mix_mode_rot;
extern PropertyRNA &rna_TransformConstraint_from_min_x_scale;
extern PropertyRNA &rna_TransformConstraint_from_min_y_scale;
extern PropertyRNA &rna_TransformConstraint_from_min_z_scale;
extern PropertyRNA &rna_TransformConstraint_from_max_x_scale;
extern PropertyRNA &rna_TransformConstraint_from_max_y_scale;
extern PropertyRNA &rna_TransformConstraint_from_max_z_scale;
extern PropertyRNA &rna_TransformConstraint_to_min_x_scale;
extern PropertyRNA &rna_TransformConstraint_to_min_y_scale;
extern PropertyRNA &rna_TransformConstraint_to_min_z_scale;
extern PropertyRNA &rna_TransformConstraint_to_max_x_scale;
extern PropertyRNA &rna_TransformConstraint_to_max_y_scale;
extern PropertyRNA &rna_TransformConstraint_to_max_z_scale;
extern PropertyRNA &rna_TransformConstraint_mix_mode_scale;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_ShrinkwrapConstraint_target;
extern PropertyRNA &rna_ShrinkwrapConstraint_shrinkwrap_type;
extern PropertyRNA &rna_ShrinkwrapConstraint_wrap_mode;
extern PropertyRNA &rna_ShrinkwrapConstraint_distance;
extern PropertyRNA &rna_ShrinkwrapConstraint_project_axis;
extern PropertyRNA &rna_ShrinkwrapConstraint_project_axis_space;
extern PropertyRNA &rna_ShrinkwrapConstraint_project_limit;
extern PropertyRNA &rna_ShrinkwrapConstraint_use_project_opposite;
extern PropertyRNA &rna_ShrinkwrapConstraint_cull_face;
extern PropertyRNA &rna_ShrinkwrapConstraint_use_invert_cull;
extern PropertyRNA &rna_ShrinkwrapConstraint_use_track_normal;
extern PropertyRNA &rna_ShrinkwrapConstraint_track_axis;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_DampedTrackConstraint_head_tail;
extern PropertyRNA &rna_DampedTrackConstraint_use_bbone_shape;
extern PropertyRNA &rna_DampedTrackConstraint_target;
extern PropertyRNA &rna_DampedTrackConstraint_subtarget;
extern PropertyRNA &rna_DampedTrackConstraint_track_axis;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_SplineIKConstraint_target;
extern PropertyRNA &rna_SplineIKConstraint_chain_count;
extern PropertyRNA &rna_SplineIKConstraint_joint_bindings;
extern PropertyRNA &rna_SplineIKConstraint_use_chain_offset;
extern PropertyRNA &rna_SplineIKConstraint_use_even_divisions;
extern PropertyRNA &rna_SplineIKConstraint_use_curve_radius;
extern PropertyRNA &rna_SplineIKConstraint_xz_scale_mode;
extern PropertyRNA &rna_SplineIKConstraint_y_scale_mode;
extern PropertyRNA &rna_SplineIKConstraint_use_original_scale;
extern PropertyRNA &rna_SplineIKConstraint_bulge;
extern PropertyRNA &rna_SplineIKConstraint_use_bulge_min;
extern PropertyRNA &rna_SplineIKConstraint_use_bulge_max;
extern PropertyRNA &rna_SplineIKConstraint_bulge_min;
extern PropertyRNA &rna_SplineIKConstraint_bulge_max;
extern PropertyRNA &rna_SplineIKConstraint_bulge_smooth;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_PivotConstraint_head_tail;
extern PropertyRNA &rna_PivotConstraint_use_bbone_shape;
extern PropertyRNA &rna_PivotConstraint_target;
extern PropertyRNA &rna_PivotConstraint_subtarget;
extern PropertyRNA &rna_PivotConstraint_use_relative_location;
extern PropertyRNA &rna_PivotConstraint_offset;
extern PropertyRNA &rna_PivotConstraint_rotation_range;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_FollowTrackConstraint_clip;
extern PropertyRNA &rna_FollowTrackConstraint_track;
extern PropertyRNA &rna_FollowTrackConstraint_use_active_clip;
extern PropertyRNA &rna_FollowTrackConstraint_use_3d_position;
extern PropertyRNA &rna_FollowTrackConstraint_object;
extern PropertyRNA &rna_FollowTrackConstraint_camera;
extern PropertyRNA &rna_FollowTrackConstraint_depth_object;
extern PropertyRNA &rna_FollowTrackConstraint_frame_method;
extern PropertyRNA &rna_FollowTrackConstraint_use_undistorted_position;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_CameraSolverConstraint_clip;
extern PropertyRNA &rna_CameraSolverConstraint_use_active_clip;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_ObjectSolverConstraint_clip;
extern PropertyRNA &rna_ObjectSolverConstraint_use_active_clip;
extern PropertyRNA &rna_ObjectSolverConstraint_set_inverse_pending;
extern PropertyRNA &rna_ObjectSolverConstraint_object;
extern PropertyRNA &rna_ObjectSolverConstraint_camera;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_TransformCacheConstraint_cache_file;
extern PropertyRNA &rna_TransformCacheConstraint_object_path;


extern PropertyRNA &rna_Constraint_rna_properties;
extern PropertyRNA &rna_Constraint_rna_type;
extern PropertyRNA &rna_Constraint_name;
extern PropertyRNA &rna_Constraint_type;
extern PropertyRNA &rna_Constraint_is_override_data;
extern PropertyRNA &rna_Constraint_owner_space;
extern PropertyRNA &rna_Constraint_target_space;
extern PropertyRNA &rna_Constraint_space_object;
extern PropertyRNA &rna_Constraint_space_subtarget;
extern PropertyRNA &rna_Constraint_mute;
extern PropertyRNA &rna_Constraint_enabled;
extern PropertyRNA &rna_Constraint_show_expanded;
extern PropertyRNA &rna_Constraint_is_valid;
extern PropertyRNA &rna_Constraint_active;
extern PropertyRNA &rna_Constraint_influence;
extern PropertyRNA &rna_Constraint_error_location;
extern PropertyRNA &rna_Constraint_error_rotation;

extern PropertyRNA &rna_GeometryAttributeConstraint_target;
extern PropertyRNA &rna_GeometryAttributeConstraint_attribute_name;
extern PropertyRNA &rna_GeometryAttributeConstraint_domain;
extern PropertyRNA &rna_GeometryAttributeConstraint_apply_target_transform;
extern PropertyRNA &rna_GeometryAttributeConstraint_data_type;
extern PropertyRNA &rna_GeometryAttributeConstraint_sample_index;
extern PropertyRNA &rna_GeometryAttributeConstraint_mix_loc;
extern PropertyRNA &rna_GeometryAttributeConstraint_mix_rot;
extern PropertyRNA &rna_GeometryAttributeConstraint_mix_scl;
extern PropertyRNA &rna_GeometryAttributeConstraint_mix_mode;

static PointerRNA Constraint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Constraint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Constraint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Constraint_rna_properties_get(iter);
    }
}

void Constraint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Constraint_rna_properties_get(iter);
    }
}

void Constraint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Constraint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Constraint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Constraint_name_get(PointerRNA *ptr, char *value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int Constraint_name_length(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return strlen(data->name);
}

void Constraint_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Constraint_name_set;
    fn(ptr, value);
}

int Constraint_type_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (int)(data->type);
}

bool Constraint_is_override_data_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return !((uint64_t(data->flag) & 2048) != 0);
}

int Constraint_owner_space_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (int)(data->ownspace);
}

void Constraint_owner_space_set(PointerRNA *ptr, int value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->ownspace = (std::remove_reference_t<decltype(data->ownspace)>)value;
}

int Constraint_target_space_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (int)(data->tarspace);
}

void Constraint_target_space_set(PointerRNA *ptr, int value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->tarspace = (std::remove_reference_t<decltype(data->tarspace)>)value;
}

PointerRNA Constraint_space_object_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->space_object);
}

void Constraint_space_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->space_object = value.data;
}

void Constraint_space_subtarget_get(PointerRNA *ptr, char *value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    BLI_assert(strlen(data->space_subtarget) < 64);
    strcpy(value, data->space_subtarget);
}

int Constraint_space_subtarget_length(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return strlen(data->space_subtarget);
}

void Constraint_space_subtarget_set(PointerRNA *ptr, const char *value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    BLI_strncpy_utf8(data->space_subtarget, value, 64);
}

bool Constraint_mute_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void Constraint_mute_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool Constraint_enabled_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return !((uint64_t(data->flag) & 512) != 0);
}

void Constraint_enabled_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool Constraint_show_expanded_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (bool)(data->ui_expand_flag);
}

void Constraint_show_expanded_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->ui_expand_flag = (std::remove_reference_t<decltype(data->ui_expand_flag)>)value;
}

bool Constraint_is_valid_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return !((uint64_t(data->flag) & 4) != 0);
}

bool Constraint_active_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void Constraint_active_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

float Constraint_influence_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->enforce);
}

void Constraint_influence_set(PointerRNA *ptr, float value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->enforce = (std::remove_reference_t<decltype(data->enforce)>)std::clamp(value, 0.0f, 1.0f);
}

float Constraint_error_location_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->lin_error);
}

float Constraint_error_rotation_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->rot_error);
}

static PointerRNA ConstraintTarget_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ConstraintTarget_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ConstraintTarget_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ConstraintTarget_rna_properties_get(iter);
    }
}

void ConstraintTarget_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ConstraintTarget_rna_properties_get(iter);
    }
}

void ConstraintTarget_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ConstraintTarget_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ConstraintTarget_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ConstraintTarget_target_get(PointerRNA *ptr)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void ConstraintTarget_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void ConstraintTarget_subtarget_get(PointerRNA *ptr, char *value)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int ConstraintTarget_subtarget_length(PointerRNA *ptr)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    return strlen(data->subtarget);
}

void ConstraintTarget_subtarget_set(PointerRNA *ptr, const char *value)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

static PointerRNA ConstraintTargetBone_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ConstraintTargetBone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ConstraintTargetBone_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ConstraintTargetBone_rna_properties_get(iter);
    }
}

void ConstraintTargetBone_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ConstraintTargetBone_rna_properties_get(iter);
    }
}

void ConstraintTargetBone_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ConstraintTargetBone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ConstraintTargetBone_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ConstraintTargetBone_target_get(PointerRNA *ptr)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void ConstraintTargetBone_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_ConstraintTargetBone_target_set;
    fn(ptr, value, reports);
}

void ConstraintTargetBone_subtarget_get(PointerRNA *ptr, char *value)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int ConstraintTargetBone_subtarget_length(PointerRNA *ptr)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    return strlen(data->subtarget);
}

void ConstraintTargetBone_subtarget_set(PointerRNA *ptr, const char *value)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

float ConstraintTargetBone_weight_get(PointerRNA *ptr)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    return (float)(data->weight);
}

void ConstraintTargetBone_weight_set(PointerRNA *ptr, float value)
{
    bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0f, 1.0f);
}

PointerRNA ChildOfConstraint_target_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void ChildOfConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void ChildOfConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int ChildOfConstraint_subtarget_length(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void ChildOfConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

bool ChildOfConstraint_use_location_x_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ChildOfConstraint_use_location_x_set(PointerRNA *ptr, bool value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ChildOfConstraint_use_location_y_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ChildOfConstraint_use_location_y_set(PointerRNA *ptr, bool value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool ChildOfConstraint_use_location_z_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void ChildOfConstraint_use_location_z_set(PointerRNA *ptr, bool value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool ChildOfConstraint_use_rotation_x_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void ChildOfConstraint_use_rotation_x_set(PointerRNA *ptr, bool value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool ChildOfConstraint_use_rotation_y_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void ChildOfConstraint_use_rotation_y_set(PointerRNA *ptr, bool value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool ChildOfConstraint_use_rotation_z_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void ChildOfConstraint_use_rotation_z_set(PointerRNA *ptr, bool value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool ChildOfConstraint_use_scale_x_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void ChildOfConstraint_use_scale_x_set(PointerRNA *ptr, bool value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool ChildOfConstraint_use_scale_y_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void ChildOfConstraint_use_scale_y_set(PointerRNA *ptr, bool value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool ChildOfConstraint_use_scale_z_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void ChildOfConstraint_use_scale_z_set(PointerRNA *ptr, bool value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool ChildOfConstraint_set_inverse_pending_get(PointerRNA *ptr)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void ChildOfConstraint_set_inverse_pending_set(PointerRNA *ptr, bool value)
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

void ChildOfConstraint_inverse_matrix_get(PointerRNA *ptr, float values[16])
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    uint64_t i;
    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->invmat)[i]);
    }
}

void ChildOfConstraint_inverse_matrix_set(PointerRNA *ptr, const float values[16])
{
    bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
    uint64_t i;
    for (i = 0; i < 16; i++) {
        ((float *)data->invmat)[i] = values[i];
    }
}

static PointerRNA ArmatureConstraint_targets_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ConstraintTargetBone, rna_iterator_listbase_get(iter));
}

void ArmatureConstraint_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bArmatureConstraint *data = (bArmatureConstraint *)(((bConstraint *)ptr->data)->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ArmatureConstraint_targets;

    rna_iterator_listbase_begin(iter, ptr, &data->targets, nullptr);

    if (iter->valid) {
        iter->ptr = ArmatureConstraint_targets_get(iter);
    }
}

void ArmatureConstraint_targets_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ArmatureConstraint_targets_get(iter);
    }
}

void ArmatureConstraint_targets_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ArmatureConstraint_targets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ArmatureConstraint_targets_begin(&iter, ptr);

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
        if (found) { *r_ptr = ArmatureConstraint_targets_get(&iter); }
    }

    ArmatureConstraint_targets_end(&iter);

    return found;
}

bool ArmatureConstraint_use_deform_preserve_volume_get(PointerRNA *ptr)
{
    bArmatureConstraint *data = (bArmatureConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ArmatureConstraint_use_deform_preserve_volume_set(PointerRNA *ptr, bool value)
{
    bArmatureConstraint *data = (bArmatureConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ArmatureConstraint_use_bone_envelopes_get(PointerRNA *ptr)
{
    bArmatureConstraint *data = (bArmatureConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ArmatureConstraint_use_bone_envelopes_set(PointerRNA *ptr, bool value)
{
    bArmatureConstraint *data = (bArmatureConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool ArmatureConstraint_use_current_location_get(PointerRNA *ptr)
{
    bArmatureConstraint *data = (bArmatureConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void ArmatureConstraint_use_current_location_set(PointerRNA *ptr, bool value)
{
    bArmatureConstraint *data = (bArmatureConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

static PointerRNA ArmatureConstraintTargets_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ArmatureConstraintTargets_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ArmatureConstraintTargets_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ArmatureConstraintTargets_rna_properties_get(iter);
    }
}

void ArmatureConstraintTargets_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ArmatureConstraintTargets_rna_properties_get(iter);
    }
}

void ArmatureConstraintTargets_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ArmatureConstraintTargets_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ArmatureConstraintTargets_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float StretchToConstraint_head_tail_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->headtail);
}

void StretchToConstraint_head_tail_set(PointerRNA *ptr, float value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->headtail = (std::remove_reference_t<decltype(data->headtail)>)std::clamp(value, 0.0f, 1.0f);
}

bool StretchToConstraint_use_bbone_shape_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void StretchToConstraint_use_bbone_shape_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

PointerRNA StretchToConstraint_target_get(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void StretchToConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void StretchToConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int StretchToConstraint_subtarget_length(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void StretchToConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

int StretchToConstraint_volume_get(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->volmode);
}

void StretchToConstraint_volume_set(PointerRNA *ptr, int value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    data->volmode = (std::remove_reference_t<decltype(data->volmode)>)value;
}

int StretchToConstraint_keep_axis_get(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->plane);
}

void StretchToConstraint_keep_axis_set(PointerRNA *ptr, int value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    data->plane = (std::remove_reference_t<decltype(data->plane)>)value;
}

float StretchToConstraint_rest_length_get(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->orglength);
}

void StretchToConstraint_rest_length_set(PointerRNA *ptr, float value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    data->orglength = (std::remove_reference_t<decltype(data->orglength)>)std::clamp(value, 0.0f, 1000.0f);
}

float StretchToConstraint_bulge_get(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->bulge);
}

void StretchToConstraint_bulge_set(PointerRNA *ptr, float value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    data->bulge = (std::remove_reference_t<decltype(data->bulge)>)std::clamp(value, 0.0f, 100.0f);
}

bool StretchToConstraint_use_bulge_min_get(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void StretchToConstraint_use_bulge_min_set(PointerRNA *ptr, bool value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool StretchToConstraint_use_bulge_max_get(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void StretchToConstraint_use_bulge_max_set(PointerRNA *ptr, bool value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

float StretchToConstraint_bulge_min_get(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->bulge_min);
}

void StretchToConstraint_bulge_min_set(PointerRNA *ptr, float value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    data->bulge_min = (std::remove_reference_t<decltype(data->bulge_min)>)std::clamp(value, 0.0f, 1.0f);
}

float StretchToConstraint_bulge_max_get(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->bulge_max);
}

void StretchToConstraint_bulge_max_set(PointerRNA *ptr, float value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    data->bulge_max = (std::remove_reference_t<decltype(data->bulge_max)>)std::clamp(value, 1.0f, 100.0f);
}

float StretchToConstraint_bulge_smooth_get(PointerRNA *ptr)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->bulge_smooth);
}

void StretchToConstraint_bulge_smooth_set(PointerRNA *ptr, float value)
{
    bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
    data->bulge_smooth = (std::remove_reference_t<decltype(data->bulge_smooth)>)std::clamp(value, 0.0f, 1.0f);
}

PointerRNA FollowPathConstraint_target_get(PointerRNA *ptr)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void FollowPathConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

float FollowPathConstraint_offset_get(PointerRNA *ptr)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->offset);
}

void FollowPathConstraint_offset_set(PointerRNA *ptr, float value)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    data->offset = (std::remove_reference_t<decltype(data->offset)>)std::clamp(value, -1048574.0f, 1048574.0f);
}

float FollowPathConstraint_offset_factor_get(PointerRNA *ptr)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->offset_fac);
}

void FollowPathConstraint_offset_factor_set(PointerRNA *ptr, float value)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    data->offset_fac = (std::remove_reference_t<decltype(data->offset_fac)>)value;
}

int FollowPathConstraint_forward_axis_get(PointerRNA *ptr)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->trackflag);
}

void FollowPathConstraint_forward_axis_set(PointerRNA *ptr, int value)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    data->trackflag = (std::remove_reference_t<decltype(data->trackflag)>)value;
}

int FollowPathConstraint_up_axis_get(PointerRNA *ptr)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->upflag);
}

void FollowPathConstraint_up_axis_set(PointerRNA *ptr, int value)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    data->upflag = (std::remove_reference_t<decltype(data->upflag)>)value;
}

bool FollowPathConstraint_use_curve_follow_get(PointerRNA *ptr)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->followflag) & 1) != 0);
}

void FollowPathConstraint_use_curve_follow_set(PointerRNA *ptr, bool value)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->followflag = std::remove_reference_t<decltype(data->followflag)>(uint64_t(data->followflag) | 1); }
    else { data->followflag = std::remove_reference_t<decltype(data->followflag)>(uint64_t(data->followflag) & ~uint64_t(1)); }
}

bool FollowPathConstraint_use_fixed_location_get(PointerRNA *ptr)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->followflag) & 2) != 0);
}

void FollowPathConstraint_use_fixed_location_set(PointerRNA *ptr, bool value)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->followflag = std::remove_reference_t<decltype(data->followflag)>(uint64_t(data->followflag) | 2); }
    else { data->followflag = std::remove_reference_t<decltype(data->followflag)>(uint64_t(data->followflag) & ~uint64_t(2)); }
}

bool FollowPathConstraint_use_curve_radius_get(PointerRNA *ptr)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->followflag) & 4) != 0);
}

void FollowPathConstraint_use_curve_radius_set(PointerRNA *ptr, bool value)
{
    bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->followflag = std::remove_reference_t<decltype(data->followflag)>(uint64_t(data->followflag) | 4); }
    else { data->followflag = std::remove_reference_t<decltype(data->followflag)>(uint64_t(data->followflag) & ~uint64_t(4)); }
}

float LockedTrackConstraint_head_tail_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->headtail);
}

void LockedTrackConstraint_head_tail_set(PointerRNA *ptr, float value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->headtail = (std::remove_reference_t<decltype(data->headtail)>)std::clamp(value, 0.0f, 1.0f);
}

bool LockedTrackConstraint_use_bbone_shape_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void LockedTrackConstraint_use_bbone_shape_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

PointerRNA LockedTrackConstraint_target_get(PointerRNA *ptr)
{
    bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void LockedTrackConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void LockedTrackConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int LockedTrackConstraint_subtarget_length(PointerRNA *ptr)
{
    bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void LockedTrackConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

int LockedTrackConstraint_track_axis_get(PointerRNA *ptr)
{
    bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->trackflag);
}

void LockedTrackConstraint_track_axis_set(PointerRNA *ptr, int value)
{
    bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
    data->trackflag = (std::remove_reference_t<decltype(data->trackflag)>)value;
}

int LockedTrackConstraint_lock_axis_get(PointerRNA *ptr)
{
    bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->lockflag);
}

void LockedTrackConstraint_lock_axis_set(PointerRNA *ptr, int value)
{
    bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
    data->lockflag = (std::remove_reference_t<decltype(data->lockflag)>)value;
}

PointerRNA ActionConstraint_target_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void ActionConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void ActionConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int ActionConstraint_subtarget_length(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void ActionConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

int ActionConstraint_mix_mode_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->mix_mode);
}

void ActionConstraint_mix_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ActionConstraint_mix_mode_set;
    fn(ptr, value);
}

int ActionConstraint_transform_channel_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->type);
}

void ActionConstraint_transform_channel_set(PointerRNA *ptr, int value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

PointerRNA ActionConstraint_action_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Action, data->act);
}

void ActionConstraint_action_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_ActionConstraint_action_set;
    fn(ptr, value, reports);
}

int ActionConstraint_action_slot_handle_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->action_slot_handle);
}

void ActionConstraint_action_slot_handle_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_ActionConstraint_action_slot_handle_set;
    fn(ptr, value);
}

void ActionConstraint_last_slot_identifier_get(PointerRNA *ptr, char *value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->last_slot_identifier) < 258);
    strcpy(value, data->last_slot_identifier);
}

int ActionConstraint_last_slot_identifier_length(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->last_slot_identifier);
}

void ActionConstraint_last_slot_identifier_set(PointerRNA *ptr, const char *value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->last_slot_identifier, value, 258);
}

PointerRNA ActionConstraint_action_slot_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ActionConstraint_action_slot_get;
    return fn(ptr);
}

void ActionConstraint_action_slot_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_ActionConstraint_action_slot_set;
    fn(ptr, value, reports);
}

static PointerRNA ActionConstraint_action_suitable_slots_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ActionSlot, rna_iterator_array_dereference_get(iter));
}

void ActionConstraint_action_suitable_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionConstraint_action_suitable_slots;

    PropCollectionBeginFunc fn = rna_iterator_ActionConstraint_action_suitable_slots_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionConstraint_action_suitable_slots_get(iter);
    }
}

void ActionConstraint_action_suitable_slots_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionConstraint_action_suitable_slots_get(iter);
    }
}

void ActionConstraint_action_suitable_slots_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ActionConstraint_action_suitable_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ActionConstraint_action_suitable_slots_begin(&iter, ptr);

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
        if (found) { *r_ptr = ActionConstraint_action_suitable_slots_get(&iter); }
    }

    ActionConstraint_action_suitable_slots_end(&iter);

    return found;
}

bool ActionConstraint_use_bone_object_action_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ActionConstraint_use_bone_object_action_set(PointerRNA *ptr, bool value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int ActionConstraint_frame_start_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->start);
}

void ActionConstraint_frame_start_set(PointerRNA *ptr, int value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    data->start = (std::remove_reference_t<decltype(data->start)>)std::clamp(value, -1048574, 1048574);
}

int ActionConstraint_frame_end_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->end);
}

void ActionConstraint_frame_end_set(PointerRNA *ptr, int value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    data->end = (std::remove_reference_t<decltype(data->end)>)std::clamp(value, -1048574, 1048574);
}

float ActionConstraint_max_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->max);
}

void ActionConstraint_max_set(PointerRNA *ptr, float value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_ActionConstraint_minmax_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->max = (std::remove_reference_t<decltype(data->max)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float ActionConstraint_min_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->min);
}

void ActionConstraint_min_set(PointerRNA *ptr, float value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_ActionConstraint_minmax_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->min = (std::remove_reference_t<decltype(data->min)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float ActionConstraint_eval_time_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->eval_time);
}

void ActionConstraint_eval_time_set(PointerRNA *ptr, float value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    data->eval_time = (std::remove_reference_t<decltype(data->eval_time)>)std::clamp(value, 0.0f, 1.0f);
}

bool ActionConstraint_use_eval_time_get(PointerRNA *ptr)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ActionConstraint_use_eval_time_set(PointerRNA *ptr, bool value)
{
    bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

PointerRNA CopyScaleConstraint_target_get(PointerRNA *ptr)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void CopyScaleConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void CopyScaleConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int CopyScaleConstraint_subtarget_length(PointerRNA *ptr)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void CopyScaleConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

bool CopyScaleConstraint_use_x_get(PointerRNA *ptr)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CopyScaleConstraint_use_x_set(PointerRNA *ptr, bool value)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool CopyScaleConstraint_use_y_get(PointerRNA *ptr)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void CopyScaleConstraint_use_y_set(PointerRNA *ptr, bool value)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool CopyScaleConstraint_use_z_get(PointerRNA *ptr)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void CopyScaleConstraint_use_z_set(PointerRNA *ptr, bool value)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

float CopyScaleConstraint_power_get(PointerRNA *ptr)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->power);
}

void CopyScaleConstraint_power_set(PointerRNA *ptr, float value)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    data->power = (std::remove_reference_t<decltype(data->power)>)value;
}

bool CopyScaleConstraint_use_make_uniform_get(PointerRNA *ptr)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void CopyScaleConstraint_use_make_uniform_set(PointerRNA *ptr, bool value)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool CopyScaleConstraint_use_offset_get(PointerRNA *ptr)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void CopyScaleConstraint_use_offset_set(PointerRNA *ptr, bool value)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool CopyScaleConstraint_use_add_get(PointerRNA *ptr)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return !((uint64_t(data->flag) & 16) != 0);
}

void CopyScaleConstraint_use_add_set(PointerRNA *ptr, bool value)
{
    bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int MaintainVolumeConstraint_free_axis_get(PointerRNA *ptr)
{
    bSameVolumeConstraint *data = (bSameVolumeConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->free_axis);
}

void MaintainVolumeConstraint_free_axis_set(PointerRNA *ptr, int value)
{
    bSameVolumeConstraint *data = (bSameVolumeConstraint *)(((bConstraint *)ptr->data)->data);
    data->free_axis = (std::remove_reference_t<decltype(data->free_axis)>)value;
}

int MaintainVolumeConstraint_mode_get(PointerRNA *ptr)
{
    bSameVolumeConstraint *data = (bSameVolumeConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->mode);
}

void MaintainVolumeConstraint_mode_set(PointerRNA *ptr, int value)
{
    bSameVolumeConstraint *data = (bSameVolumeConstraint *)(((bConstraint *)ptr->data)->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

float MaintainVolumeConstraint_volume_get(PointerRNA *ptr)
{
    bSameVolumeConstraint *data = (bSameVolumeConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->volume);
}

void MaintainVolumeConstraint_volume_set(PointerRNA *ptr, float value)
{
    bSameVolumeConstraint *data = (bSameVolumeConstraint *)(((bConstraint *)ptr->data)->data);
    data->volume = (std::remove_reference_t<decltype(data->volume)>)std::clamp(value, 0.0f, FLT_MAX);
}

float CopyLocationConstraint_head_tail_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->headtail);
}

void CopyLocationConstraint_head_tail_set(PointerRNA *ptr, float value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->headtail = (std::remove_reference_t<decltype(data->headtail)>)std::clamp(value, 0.0f, 1.0f);
}

bool CopyLocationConstraint_use_bbone_shape_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void CopyLocationConstraint_use_bbone_shape_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

PointerRNA CopyLocationConstraint_target_get(PointerRNA *ptr)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void CopyLocationConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void CopyLocationConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int CopyLocationConstraint_subtarget_length(PointerRNA *ptr)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void CopyLocationConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

bool CopyLocationConstraint_use_x_get(PointerRNA *ptr)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CopyLocationConstraint_use_x_set(PointerRNA *ptr, bool value)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool CopyLocationConstraint_use_y_get(PointerRNA *ptr)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void CopyLocationConstraint_use_y_set(PointerRNA *ptr, bool value)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool CopyLocationConstraint_use_z_get(PointerRNA *ptr)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void CopyLocationConstraint_use_z_set(PointerRNA *ptr, bool value)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool CopyLocationConstraint_invert_x_get(PointerRNA *ptr)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void CopyLocationConstraint_invert_x_set(PointerRNA *ptr, bool value)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool CopyLocationConstraint_invert_y_get(PointerRNA *ptr)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void CopyLocationConstraint_invert_y_set(PointerRNA *ptr, bool value)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool CopyLocationConstraint_invert_z_get(PointerRNA *ptr)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void CopyLocationConstraint_invert_z_set(PointerRNA *ptr, bool value)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool CopyLocationConstraint_use_offset_get(PointerRNA *ptr)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void CopyLocationConstraint_use_offset_set(PointerRNA *ptr, bool value)
{
    bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

PointerRNA CopyRotationConstraint_target_get(PointerRNA *ptr)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void CopyRotationConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void CopyRotationConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int CopyRotationConstraint_subtarget_length(PointerRNA *ptr)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void CopyRotationConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

bool CopyRotationConstraint_use_x_get(PointerRNA *ptr)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CopyRotationConstraint_use_x_set(PointerRNA *ptr, bool value)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool CopyRotationConstraint_use_y_get(PointerRNA *ptr)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void CopyRotationConstraint_use_y_set(PointerRNA *ptr, bool value)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool CopyRotationConstraint_use_z_get(PointerRNA *ptr)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void CopyRotationConstraint_use_z_set(PointerRNA *ptr, bool value)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool CopyRotationConstraint_invert_x_get(PointerRNA *ptr)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void CopyRotationConstraint_invert_x_set(PointerRNA *ptr, bool value)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool CopyRotationConstraint_invert_y_get(PointerRNA *ptr)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void CopyRotationConstraint_invert_y_set(PointerRNA *ptr, bool value)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool CopyRotationConstraint_invert_z_get(PointerRNA *ptr)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void CopyRotationConstraint_invert_z_set(PointerRNA *ptr, bool value)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

int CopyRotationConstraint_euler_order_get(PointerRNA *ptr)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->euler_order);
}

void CopyRotationConstraint_euler_order_set(PointerRNA *ptr, int value)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    data->euler_order = (std::remove_reference_t<decltype(data->euler_order)>)value;
}

int CopyRotationConstraint_mix_mode_get(PointerRNA *ptr)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->mix_mode);
}

void CopyRotationConstraint_mix_mode_set(PointerRNA *ptr, int value)
{
    bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
    data->mix_mode = (std::remove_reference_t<decltype(data->mix_mode)>)value;
}

bool CopyRotationConstraint_use_offset_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Constraint_RotLike_use_offset_get;
    return fn(ptr);
}

void CopyRotationConstraint_use_offset_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Constraint_RotLike_use_offset_set;
    fn(ptr, value);
}

float CopyTransformsConstraint_head_tail_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->headtail);
}

void CopyTransformsConstraint_head_tail_set(PointerRNA *ptr, float value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->headtail = (std::remove_reference_t<decltype(data->headtail)>)std::clamp(value, 0.0f, 1.0f);
}

bool CopyTransformsConstraint_use_bbone_shape_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void CopyTransformsConstraint_use_bbone_shape_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

PointerRNA CopyTransformsConstraint_target_get(PointerRNA *ptr)
{
    bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void CopyTransformsConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void CopyTransformsConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int CopyTransformsConstraint_subtarget_length(PointerRNA *ptr)
{
    bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void CopyTransformsConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

bool CopyTransformsConstraint_remove_target_shear_get(PointerRNA *ptr)
{
    bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CopyTransformsConstraint_remove_target_shear_set(PointerRNA *ptr, bool value)
{
    bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int CopyTransformsConstraint_mix_mode_get(PointerRNA *ptr)
{
    bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->mix_mode);
}

void CopyTransformsConstraint_mix_mode_set(PointerRNA *ptr, int value)
{
    bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
    data->mix_mode = (std::remove_reference_t<decltype(data->mix_mode)>)value;
}

PointerRNA FloorConstraint_target_get(PointerRNA *ptr)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void FloorConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void FloorConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int FloorConstraint_subtarget_length(PointerRNA *ptr)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void FloorConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

int FloorConstraint_floor_location_get(PointerRNA *ptr)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->minmaxflag);
}

void FloorConstraint_floor_location_set(PointerRNA *ptr, int value)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    data->minmaxflag = (std::remove_reference_t<decltype(data->minmaxflag)>)value;
}

bool FloorConstraint_use_rotation_get(PointerRNA *ptr)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void FloorConstraint_use_rotation_set(PointerRNA *ptr, bool value)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

float FloorConstraint_offset_get(PointerRNA *ptr)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->offset);
}

void FloorConstraint_offset_set(PointerRNA *ptr, float value)
{
    bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
    data->offset = (std::remove_reference_t<decltype(data->offset)>)value;
}

float TrackToConstraint_head_tail_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->headtail);
}

void TrackToConstraint_head_tail_set(PointerRNA *ptr, float value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->headtail = (std::remove_reference_t<decltype(data->headtail)>)std::clamp(value, 0.0f, 1.0f);
}

bool TrackToConstraint_use_bbone_shape_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void TrackToConstraint_use_bbone_shape_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

PointerRNA TrackToConstraint_target_get(PointerRNA *ptr)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void TrackToConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void TrackToConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int TrackToConstraint_subtarget_length(PointerRNA *ptr)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void TrackToConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

int TrackToConstraint_track_axis_get(PointerRNA *ptr)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->reserved1);
}

void TrackToConstraint_track_axis_set(PointerRNA *ptr, int value)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    data->reserved1 = (std::remove_reference_t<decltype(data->reserved1)>)value;
}

int TrackToConstraint_up_axis_get(PointerRNA *ptr)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->reserved2);
}

void TrackToConstraint_up_axis_set(PointerRNA *ptr, int value)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    data->reserved2 = (std::remove_reference_t<decltype(data->reserved2)>)value;
}

bool TrackToConstraint_use_target_z_get(PointerRNA *ptr)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flags) & 1) != 0);
}

void TrackToConstraint_use_target_z_set(PointerRNA *ptr, bool value)
{
    bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1)); }
}

PointerRNA KinematicConstraint_target_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void KinematicConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void KinematicConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int KinematicConstraint_subtarget_length(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void KinematicConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

int KinematicConstraint_iterations_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->iterations);
}

void KinematicConstraint_iterations_set(PointerRNA *ptr, int value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    data->iterations = (std::remove_reference_t<decltype(data->iterations)>)std::clamp(value, 0, 10000);
}

PointerRNA KinematicConstraint_pole_target_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->poletar);
}

void KinematicConstraint_pole_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->poletar = value.data;
}

void KinematicConstraint_pole_subtarget_get(PointerRNA *ptr, char *value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->polesubtarget) < 64);
    strcpy(value, data->polesubtarget);
}

int KinematicConstraint_pole_subtarget_length(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->polesubtarget);
}

void KinematicConstraint_pole_subtarget_set(PointerRNA *ptr, const char *value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->polesubtarget, value, 64);
}

float KinematicConstraint_pole_angle_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->poleangle);
}

void KinematicConstraint_pole_angle_set(PointerRNA *ptr, float value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    data->poleangle = (std::remove_reference_t<decltype(data->poleangle)>)std::clamp(value, -3.1415927410f, 3.1415927410f);
}

float KinematicConstraint_weight_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->weight);
}

void KinematicConstraint_weight_set(PointerRNA *ptr, float value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0099999998f, 1.0f);
}

float KinematicConstraint_orient_weight_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->orientweight);
}

void KinematicConstraint_orient_weight_set(PointerRNA *ptr, float value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    data->orientweight = (std::remove_reference_t<decltype(data->orientweight)>)std::clamp(value, 0.0099999998f, 1.0f);
}

int KinematicConstraint_chain_count_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->rootbone);
}

void KinematicConstraint_chain_count_set(PointerRNA *ptr, int value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    data->rootbone = (std::remove_reference_t<decltype(data->rootbone)>)std::clamp(value, 0, 255);
}

bool KinematicConstraint_use_tail_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void KinematicConstraint_use_tail_set(PointerRNA *ptr, bool value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int KinematicConstraint_reference_axis_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return (uint64_t(data->flag) & 16384);
}

void KinematicConstraint_reference_axis_set(PointerRNA *ptr, int value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16384));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

bool KinematicConstraint_use_location_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void KinematicConstraint_use_location_set(PointerRNA *ptr, bool value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool KinematicConstraint_lock_location_x_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return !((uint64_t(data->flag) & 256) != 0);
}

void KinematicConstraint_lock_location_x_set(PointerRNA *ptr, bool value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool KinematicConstraint_lock_location_y_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return !((uint64_t(data->flag) & 512) != 0);
}

void KinematicConstraint_lock_location_y_set(PointerRNA *ptr, bool value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool KinematicConstraint_lock_location_z_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return !((uint64_t(data->flag) & 1024) != 0);
}

void KinematicConstraint_lock_location_z_set(PointerRNA *ptr, bool value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

bool KinematicConstraint_use_rotation_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void KinematicConstraint_use_rotation_set(PointerRNA *ptr, bool value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool KinematicConstraint_lock_rotation_x_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return !((uint64_t(data->flag) & 2048) != 0);
}

void KinematicConstraint_lock_rotation_x_set(PointerRNA *ptr, bool value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool KinematicConstraint_lock_rotation_y_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return !((uint64_t(data->flag) & 4096) != 0);
}

void KinematicConstraint_lock_rotation_y_set(PointerRNA *ptr, bool value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool KinematicConstraint_lock_rotation_z_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return !((uint64_t(data->flag) & 8192) != 0);
}

void KinematicConstraint_lock_rotation_z_set(PointerRNA *ptr, bool value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool KinematicConstraint_use_stretch_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void KinematicConstraint_use_stretch_set(PointerRNA *ptr, bool value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int KinematicConstraint_ik_type_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->type);
}

void KinematicConstraint_ik_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Constraint_ik_type_set;
    fn(ptr, value);
}

int KinematicConstraint_limit_mode_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->mode);
}

void KinematicConstraint_limit_mode_set(PointerRNA *ptr, int value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

float KinematicConstraint_distance_get(PointerRNA *ptr)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->dist);
}

void KinematicConstraint_distance_set(PointerRNA *ptr, float value)
{
    bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
    data->dist = (std::remove_reference_t<decltype(data->dist)>)std::clamp(value, 0.0f, 100.0f);
}

PointerRNA ClampToConstraint_target_get(PointerRNA *ptr)
{
    bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void ClampToConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

int ClampToConstraint_main_axis_get(PointerRNA *ptr)
{
    bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->flag);
}

void ClampToConstraint_main_axis_set(PointerRNA *ptr, int value)
{
    bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
    data->flag = (std::remove_reference_t<decltype(data->flag)>)value;
}

bool ClampToConstraint_use_cyclic_get(PointerRNA *ptr)
{
    bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag2) & 1) != 0);
}

void ClampToConstraint_use_cyclic_set(PointerRNA *ptr, bool value)
{
    bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 1); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(1)); }
}

float LimitDistanceConstraint_head_tail_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->headtail);
}

void LimitDistanceConstraint_head_tail_set(PointerRNA *ptr, float value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->headtail = (std::remove_reference_t<decltype(data->headtail)>)std::clamp(value, 0.0f, 1.0f);
}

bool LimitDistanceConstraint_use_bbone_shape_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void LimitDistanceConstraint_use_bbone_shape_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

PointerRNA LimitDistanceConstraint_target_get(PointerRNA *ptr)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void LimitDistanceConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void LimitDistanceConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int LimitDistanceConstraint_subtarget_length(PointerRNA *ptr)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void LimitDistanceConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

float LimitDistanceConstraint_distance_get(PointerRNA *ptr)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->dist);
}

void LimitDistanceConstraint_distance_set(PointerRNA *ptr, float value)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->dist = (std::remove_reference_t<decltype(data->dist)>)value;
}

int LimitDistanceConstraint_limit_mode_get(PointerRNA *ptr)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->mode);
}

void LimitDistanceConstraint_limit_mode_set(PointerRNA *ptr, int value)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

bool LimitDistanceConstraint_use_transform_limit_get(PointerRNA *ptr)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void LimitDistanceConstraint_use_transform_limit_set(PointerRNA *ptr, bool value)
{
    bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool LimitScaleConstraint_use_min_x_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void LimitScaleConstraint_use_min_x_set(PointerRNA *ptr, bool value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool LimitScaleConstraint_use_min_y_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void LimitScaleConstraint_use_min_y_set(PointerRNA *ptr, bool value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool LimitScaleConstraint_use_min_z_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void LimitScaleConstraint_use_min_z_set(PointerRNA *ptr, bool value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool LimitScaleConstraint_use_max_x_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void LimitScaleConstraint_use_max_x_set(PointerRNA *ptr, bool value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool LimitScaleConstraint_use_max_y_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void LimitScaleConstraint_use_max_y_set(PointerRNA *ptr, bool value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool LimitScaleConstraint_use_max_z_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void LimitScaleConstraint_use_max_z_set(PointerRNA *ptr, bool value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

float LimitScaleConstraint_min_x_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->xmin);
}

void LimitScaleConstraint_min_x_set(PointerRNA *ptr, float value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->xmin = (std::remove_reference_t<decltype(data->xmin)>)std::clamp(value, -1000.0f, 1000.0f);
}

float LimitScaleConstraint_min_y_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->ymin);
}

void LimitScaleConstraint_min_y_set(PointerRNA *ptr, float value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->ymin = (std::remove_reference_t<decltype(data->ymin)>)std::clamp(value, -1000.0f, 1000.0f);
}

float LimitScaleConstraint_min_z_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->zmin);
}

void LimitScaleConstraint_min_z_set(PointerRNA *ptr, float value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->zmin = (std::remove_reference_t<decltype(data->zmin)>)std::clamp(value, -1000.0f, 1000.0f);
}

float LimitScaleConstraint_max_x_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->xmax);
}

void LimitScaleConstraint_max_x_set(PointerRNA *ptr, float value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->xmax = (std::remove_reference_t<decltype(data->xmax)>)std::clamp(value, -1000.0f, 1000.0f);
}

float LimitScaleConstraint_max_y_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->ymax);
}

void LimitScaleConstraint_max_y_set(PointerRNA *ptr, float value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->ymax = (std::remove_reference_t<decltype(data->ymax)>)std::clamp(value, -1000.0f, 1000.0f);
}

float LimitScaleConstraint_max_z_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->zmax);
}

void LimitScaleConstraint_max_z_set(PointerRNA *ptr, float value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->zmax = (std::remove_reference_t<decltype(data->zmax)>)std::clamp(value, -1000.0f, 1000.0f);
}

bool LimitScaleConstraint_use_transform_limit_get(PointerRNA *ptr)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag2) & 2) != 0);
}

void LimitScaleConstraint_use_transform_limit_set(PointerRNA *ptr, bool value)
{
    bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 2); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(2)); }
}

bool LimitRotationConstraint_use_limit_x_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void LimitRotationConstraint_use_limit_x_set(PointerRNA *ptr, bool value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool LimitRotationConstraint_use_limit_y_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void LimitRotationConstraint_use_limit_y_set(PointerRNA *ptr, bool value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool LimitRotationConstraint_use_limit_z_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void LimitRotationConstraint_use_limit_z_set(PointerRNA *ptr, bool value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

float LimitRotationConstraint_min_x_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->xmin);
}

void LimitRotationConstraint_min_x_set(PointerRNA *ptr, float value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->xmin = (std::remove_reference_t<decltype(data->xmin)>)std::clamp(value, -1000.0f, 1000.0f);
}

float LimitRotationConstraint_min_y_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->ymin);
}

void LimitRotationConstraint_min_y_set(PointerRNA *ptr, float value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->ymin = (std::remove_reference_t<decltype(data->ymin)>)std::clamp(value, -1000.0f, 1000.0f);
}

float LimitRotationConstraint_min_z_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->zmin);
}

void LimitRotationConstraint_min_z_set(PointerRNA *ptr, float value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->zmin = (std::remove_reference_t<decltype(data->zmin)>)std::clamp(value, -1000.0f, 1000.0f);
}

float LimitRotationConstraint_max_x_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->xmax);
}

void LimitRotationConstraint_max_x_set(PointerRNA *ptr, float value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->xmax = (std::remove_reference_t<decltype(data->xmax)>)std::clamp(value, -1000.0f, 1000.0f);
}

float LimitRotationConstraint_max_y_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->ymax);
}

void LimitRotationConstraint_max_y_set(PointerRNA *ptr, float value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->ymax = (std::remove_reference_t<decltype(data->ymax)>)std::clamp(value, -1000.0f, 1000.0f);
}

float LimitRotationConstraint_max_z_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->zmax);
}

void LimitRotationConstraint_max_z_set(PointerRNA *ptr, float value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->zmax = (std::remove_reference_t<decltype(data->zmax)>)std::clamp(value, -1000.0f, 1000.0f);
}

int LimitRotationConstraint_euler_order_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->euler_order);
}

void LimitRotationConstraint_euler_order_set(PointerRNA *ptr, int value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->euler_order = (std::remove_reference_t<decltype(data->euler_order)>)value;
}

bool LimitRotationConstraint_use_transform_limit_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag2) & 2) != 0);
}

void LimitRotationConstraint_use_transform_limit_set(PointerRNA *ptr, bool value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 2); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(2)); }
}

bool LimitRotationConstraint_use_legacy_behavior_get(PointerRNA *ptr)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void LimitRotationConstraint_use_legacy_behavior_set(PointerRNA *ptr, bool value)
{
    bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool LimitLocationConstraint_use_min_x_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void LimitLocationConstraint_use_min_x_set(PointerRNA *ptr, bool value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool LimitLocationConstraint_use_min_y_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void LimitLocationConstraint_use_min_y_set(PointerRNA *ptr, bool value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool LimitLocationConstraint_use_min_z_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void LimitLocationConstraint_use_min_z_set(PointerRNA *ptr, bool value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool LimitLocationConstraint_use_max_x_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void LimitLocationConstraint_use_max_x_set(PointerRNA *ptr, bool value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool LimitLocationConstraint_use_max_y_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void LimitLocationConstraint_use_max_y_set(PointerRNA *ptr, bool value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool LimitLocationConstraint_use_max_z_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void LimitLocationConstraint_use_max_z_set(PointerRNA *ptr, bool value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

float LimitLocationConstraint_min_x_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->xmin);
}

void LimitLocationConstraint_min_x_set(PointerRNA *ptr, float value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->xmin = (std::remove_reference_t<decltype(data->xmin)>)value;
}

float LimitLocationConstraint_min_y_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->ymin);
}

void LimitLocationConstraint_min_y_set(PointerRNA *ptr, float value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->ymin = (std::remove_reference_t<decltype(data->ymin)>)value;
}

float LimitLocationConstraint_min_z_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->zmin);
}

void LimitLocationConstraint_min_z_set(PointerRNA *ptr, float value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->zmin = (std::remove_reference_t<decltype(data->zmin)>)value;
}

float LimitLocationConstraint_max_x_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->xmax);
}

void LimitLocationConstraint_max_x_set(PointerRNA *ptr, float value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->xmax = (std::remove_reference_t<decltype(data->xmax)>)value;
}

float LimitLocationConstraint_max_y_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->ymax);
}

void LimitLocationConstraint_max_y_set(PointerRNA *ptr, float value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->ymax = (std::remove_reference_t<decltype(data->ymax)>)value;
}

float LimitLocationConstraint_max_z_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->zmax);
}

void LimitLocationConstraint_max_z_set(PointerRNA *ptr, float value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    data->zmax = (std::remove_reference_t<decltype(data->zmax)>)value;
}

bool LimitLocationConstraint_use_transform_limit_get(PointerRNA *ptr)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag2) & 2) != 0);
}

void LimitLocationConstraint_use_transform_limit_set(PointerRNA *ptr, bool value)
{
    bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) | 2); }
    else { data->flag2 = std::remove_reference_t<decltype(data->flag2)>(uint64_t(data->flag2) & ~uint64_t(2)); }
}

PointerRNA TransformConstraint_target_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void TransformConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void TransformConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int TransformConstraint_subtarget_length(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void TransformConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

int TransformConstraint_map_from_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->from);
}

void TransformConstraint_map_from_set(PointerRNA *ptr, int value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from = (std::remove_reference_t<decltype(data->from)>)value;
}

int TransformConstraint_map_to_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->to);
}

void TransformConstraint_map_to_set(PointerRNA *ptr, int value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to = (std::remove_reference_t<decltype(data->to)>)value;
}

int TransformConstraint_map_to_x_from_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->map[0]);
}

void TransformConstraint_map_to_x_from_set(PointerRNA *ptr, int value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->map[0] = (std::remove_reference_t<decltype(data->map[0])>)value;
}

int TransformConstraint_map_to_y_from_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->map[1]);
}

void TransformConstraint_map_to_y_from_set(PointerRNA *ptr, int value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->map[1] = (std::remove_reference_t<decltype(data->map[1])>)value;
}

int TransformConstraint_map_to_z_from_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->map[2]);
}

void TransformConstraint_map_to_z_from_set(PointerRNA *ptr, int value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->map[2] = (std::remove_reference_t<decltype(data->map[2])>)value;
}

bool TransformConstraint_use_motion_extrapolate_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->expo) & 1) != 0);
}

void TransformConstraint_use_motion_extrapolate_set(PointerRNA *ptr, bool value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->expo = std::remove_reference_t<decltype(data->expo)>(uint64_t(data->expo) | 1); }
    else { data->expo = std::remove_reference_t<decltype(data->expo)>(uint64_t(data->expo) & ~uint64_t(1)); }
}

int TransformConstraint_from_rotation_mode_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->from_rotation_mode);
}

void TransformConstraint_from_rotation_mode_set(PointerRNA *ptr, int value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_rotation_mode = (std::remove_reference_t<decltype(data->from_rotation_mode)>)value;
}

int TransformConstraint_to_euler_order_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->to_euler_order);
}

void TransformConstraint_to_euler_order_set(PointerRNA *ptr, int value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_euler_order = (std::remove_reference_t<decltype(data->to_euler_order)>)value;
}

float TransformConstraint_from_min_x_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_min[0]);
}

void TransformConstraint_from_min_x_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_min[0] = (std::remove_reference_t<decltype(data->from_min[0])>)value;
}

float TransformConstraint_from_min_y_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_min[1]);
}

void TransformConstraint_from_min_y_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_min[1] = (std::remove_reference_t<decltype(data->from_min[1])>)value;
}

float TransformConstraint_from_min_z_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_min[2]);
}

void TransformConstraint_from_min_z_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_min[2] = (std::remove_reference_t<decltype(data->from_min[2])>)value;
}

float TransformConstraint_from_max_x_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_max[0]);
}

void TransformConstraint_from_max_x_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_max[0] = (std::remove_reference_t<decltype(data->from_max[0])>)value;
}

float TransformConstraint_from_max_y_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_max[1]);
}

void TransformConstraint_from_max_y_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_max[1] = (std::remove_reference_t<decltype(data->from_max[1])>)value;
}

float TransformConstraint_from_max_z_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_max[2]);
}

void TransformConstraint_from_max_z_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_max[2] = (std::remove_reference_t<decltype(data->from_max[2])>)value;
}

float TransformConstraint_to_min_x_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_min[0]);
}

void TransformConstraint_to_min_x_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_min[0] = (std::remove_reference_t<decltype(data->to_min[0])>)value;
}

float TransformConstraint_to_min_y_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_min[1]);
}

void TransformConstraint_to_min_y_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_min[1] = (std::remove_reference_t<decltype(data->to_min[1])>)value;
}

float TransformConstraint_to_min_z_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_min[2]);
}

void TransformConstraint_to_min_z_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_min[2] = (std::remove_reference_t<decltype(data->to_min[2])>)value;
}

float TransformConstraint_to_max_x_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_max[0]);
}

void TransformConstraint_to_max_x_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_max[0] = (std::remove_reference_t<decltype(data->to_max[0])>)value;
}

float TransformConstraint_to_max_y_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_max[1]);
}

void TransformConstraint_to_max_y_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_max[1] = (std::remove_reference_t<decltype(data->to_max[1])>)value;
}

float TransformConstraint_to_max_z_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_max[2]);
}

void TransformConstraint_to_max_z_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_max[2] = (std::remove_reference_t<decltype(data->to_max[2])>)value;
}

int TransformConstraint_mix_mode_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->mix_mode_loc);
}

void TransformConstraint_mix_mode_set(PointerRNA *ptr, int value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->mix_mode_loc = (std::remove_reference_t<decltype(data->mix_mode_loc)>)value;
}

float TransformConstraint_from_min_x_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_min_rot[0]);
}

void TransformConstraint_from_min_x_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_min_rot[0] = (std::remove_reference_t<decltype(data->from_min_rot[0])>)value;
}

float TransformConstraint_from_min_y_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_min_rot[1]);
}

void TransformConstraint_from_min_y_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_min_rot[1] = (std::remove_reference_t<decltype(data->from_min_rot[1])>)value;
}

float TransformConstraint_from_min_z_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_min_rot[2]);
}

void TransformConstraint_from_min_z_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_min_rot[2] = (std::remove_reference_t<decltype(data->from_min_rot[2])>)value;
}

float TransformConstraint_from_max_x_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_max_rot[0]);
}

void TransformConstraint_from_max_x_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_max_rot[0] = (std::remove_reference_t<decltype(data->from_max_rot[0])>)value;
}

float TransformConstraint_from_max_y_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_max_rot[1]);
}

void TransformConstraint_from_max_y_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_max_rot[1] = (std::remove_reference_t<decltype(data->from_max_rot[1])>)value;
}

float TransformConstraint_from_max_z_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_max_rot[2]);
}

void TransformConstraint_from_max_z_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_max_rot[2] = (std::remove_reference_t<decltype(data->from_max_rot[2])>)value;
}

float TransformConstraint_to_min_x_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_min_rot[0]);
}

void TransformConstraint_to_min_x_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_min_rot[0] = (std::remove_reference_t<decltype(data->to_min_rot[0])>)value;
}

float TransformConstraint_to_min_y_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_min_rot[1]);
}

void TransformConstraint_to_min_y_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_min_rot[1] = (std::remove_reference_t<decltype(data->to_min_rot[1])>)value;
}

float TransformConstraint_to_min_z_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_min_rot[2]);
}

void TransformConstraint_to_min_z_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_min_rot[2] = (std::remove_reference_t<decltype(data->to_min_rot[2])>)value;
}

float TransformConstraint_to_max_x_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_max_rot[0]);
}

void TransformConstraint_to_max_x_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_max_rot[0] = (std::remove_reference_t<decltype(data->to_max_rot[0])>)value;
}

float TransformConstraint_to_max_y_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_max_rot[1]);
}

void TransformConstraint_to_max_y_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_max_rot[1] = (std::remove_reference_t<decltype(data->to_max_rot[1])>)value;
}

float TransformConstraint_to_max_z_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_max_rot[2]);
}

void TransformConstraint_to_max_z_rot_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_max_rot[2] = (std::remove_reference_t<decltype(data->to_max_rot[2])>)value;
}

int TransformConstraint_mix_mode_rot_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->mix_mode_rot);
}

void TransformConstraint_mix_mode_rot_set(PointerRNA *ptr, int value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->mix_mode_rot = (std::remove_reference_t<decltype(data->mix_mode_rot)>)value;
}

float TransformConstraint_from_min_x_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_min_scale[0]);
}

void TransformConstraint_from_min_x_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_min_scale[0] = (std::remove_reference_t<decltype(data->from_min_scale[0])>)value;
}

float TransformConstraint_from_min_y_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_min_scale[1]);
}

void TransformConstraint_from_min_y_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_min_scale[1] = (std::remove_reference_t<decltype(data->from_min_scale[1])>)value;
}

float TransformConstraint_from_min_z_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_min_scale[2]);
}

void TransformConstraint_from_min_z_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_min_scale[2] = (std::remove_reference_t<decltype(data->from_min_scale[2])>)value;
}

float TransformConstraint_from_max_x_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_max_scale[0]);
}

void TransformConstraint_from_max_x_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_max_scale[0] = (std::remove_reference_t<decltype(data->from_max_scale[0])>)value;
}

float TransformConstraint_from_max_y_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_max_scale[1]);
}

void TransformConstraint_from_max_y_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_max_scale[1] = (std::remove_reference_t<decltype(data->from_max_scale[1])>)value;
}

float TransformConstraint_from_max_z_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->from_max_scale[2]);
}

void TransformConstraint_from_max_z_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->from_max_scale[2] = (std::remove_reference_t<decltype(data->from_max_scale[2])>)value;
}

float TransformConstraint_to_min_x_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_min_scale[0]);
}

void TransformConstraint_to_min_x_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_min_scale[0] = (std::remove_reference_t<decltype(data->to_min_scale[0])>)value;
}

float TransformConstraint_to_min_y_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_min_scale[1]);
}

void TransformConstraint_to_min_y_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_min_scale[1] = (std::remove_reference_t<decltype(data->to_min_scale[1])>)value;
}

float TransformConstraint_to_min_z_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_min_scale[2]);
}

void TransformConstraint_to_min_z_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_min_scale[2] = (std::remove_reference_t<decltype(data->to_min_scale[2])>)value;
}

float TransformConstraint_to_max_x_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_max_scale[0]);
}

void TransformConstraint_to_max_x_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_max_scale[0] = (std::remove_reference_t<decltype(data->to_max_scale[0])>)value;
}

float TransformConstraint_to_max_y_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_max_scale[1]);
}

void TransformConstraint_to_max_y_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_max_scale[1] = (std::remove_reference_t<decltype(data->to_max_scale[1])>)value;
}

float TransformConstraint_to_max_z_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->to_max_scale[2]);
}

void TransformConstraint_to_max_z_scale_set(PointerRNA *ptr, float value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->to_max_scale[2] = (std::remove_reference_t<decltype(data->to_max_scale[2])>)value;
}

int TransformConstraint_mix_mode_scale_get(PointerRNA *ptr)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->mix_mode_scale);
}

void TransformConstraint_mix_mode_scale_set(PointerRNA *ptr, int value)
{
    bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
    data->mix_mode_scale = (std::remove_reference_t<decltype(data->mix_mode_scale)>)value;
}

PointerRNA ShrinkwrapConstraint_target_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->target);
}

void ShrinkwrapConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->target = value.data;
}

int ShrinkwrapConstraint_shrinkwrap_type_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->shrinkType);
}

void ShrinkwrapConstraint_shrinkwrap_type_set(PointerRNA *ptr, int value)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    data->shrinkType = (std::remove_reference_t<decltype(data->shrinkType)>)value;
}

int ShrinkwrapConstraint_wrap_mode_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->shrinkMode);
}

void ShrinkwrapConstraint_wrap_mode_set(PointerRNA *ptr, int value)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    data->shrinkMode = (std::remove_reference_t<decltype(data->shrinkMode)>)value;
}

float ShrinkwrapConstraint_distance_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->dist);
}

void ShrinkwrapConstraint_distance_set(PointerRNA *ptr, float value)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    data->dist = (std::remove_reference_t<decltype(data->dist)>)std::clamp(value, 0.0f, FLT_MAX);
}

int ShrinkwrapConstraint_project_axis_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->projAxis);
}

void ShrinkwrapConstraint_project_axis_set(PointerRNA *ptr, int value)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    data->projAxis = (std::remove_reference_t<decltype(data->projAxis)>)value;
}

int ShrinkwrapConstraint_project_axis_space_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->projAxisSpace);
}

void ShrinkwrapConstraint_project_axis_space_set(PointerRNA *ptr, int value)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    data->projAxisSpace = (std::remove_reference_t<decltype(data->projAxisSpace)>)value;
}

float ShrinkwrapConstraint_project_limit_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->projLimit);
}

void ShrinkwrapConstraint_project_limit_set(PointerRNA *ptr, float value)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    data->projLimit = (std::remove_reference_t<decltype(data->projLimit)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool ShrinkwrapConstraint_use_project_opposite_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ShrinkwrapConstraint_use_project_opposite_set(PointerRNA *ptr, bool value)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int ShrinkwrapConstraint_cull_face_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ShrinkwrapConstraint_face_cull_get;
    return fn(ptr);
}

void ShrinkwrapConstraint_cull_face_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ShrinkwrapConstraint_face_cull_set;
    fn(ptr, value);
}

bool ShrinkwrapConstraint_use_invert_cull_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ShrinkwrapConstraint_use_invert_cull_set(PointerRNA *ptr, bool value)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool ShrinkwrapConstraint_use_track_normal_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void ShrinkwrapConstraint_use_track_normal_set(PointerRNA *ptr, bool value)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

int ShrinkwrapConstraint_track_axis_get(PointerRNA *ptr)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->trackAxis);
}

void ShrinkwrapConstraint_track_axis_set(PointerRNA *ptr, int value)
{
    bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
    data->trackAxis = (std::remove_reference_t<decltype(data->trackAxis)>)value;
}

float DampedTrackConstraint_head_tail_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->headtail);
}

void DampedTrackConstraint_head_tail_set(PointerRNA *ptr, float value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->headtail = (std::remove_reference_t<decltype(data->headtail)>)std::clamp(value, 0.0f, 1.0f);
}

bool DampedTrackConstraint_use_bbone_shape_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void DampedTrackConstraint_use_bbone_shape_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

PointerRNA DampedTrackConstraint_target_get(PointerRNA *ptr)
{
    bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void DampedTrackConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void DampedTrackConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int DampedTrackConstraint_subtarget_length(PointerRNA *ptr)
{
    bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void DampedTrackConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

int DampedTrackConstraint_track_axis_get(PointerRNA *ptr)
{
    bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->trackflag);
}

void DampedTrackConstraint_track_axis_set(PointerRNA *ptr, int value)
{
    bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
    data->trackflag = (std::remove_reference_t<decltype(data->trackflag)>)value;
}

PointerRNA SplineIKConstraint_target_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void SplineIKConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

int SplineIKConstraint_chain_count_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->chainlen);
}

void SplineIKConstraint_chain_count_set(PointerRNA *ptr, int value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    data->chainlen = (std::remove_reference_t<decltype(data->chainlen)>)std::clamp(value, 1, 255);
}

void SplineIKConstraint_joint_bindings_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_SplineIKConstraint_joint_bindings_get;
    fn(ptr, values);
}

void SplineIKConstraint_joint_bindings_set(PointerRNA *ptr, const float values[])
{
    PropFloatArraySetFunc fn = rna_SplineIKConstraint_joint_bindings_set;
    fn(ptr, values);
}

bool SplineIKConstraint_use_chain_offset_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void SplineIKConstraint_use_chain_offset_set(PointerRNA *ptr, bool value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool SplineIKConstraint_use_even_divisions_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void SplineIKConstraint_use_even_divisions_set(PointerRNA *ptr, bool value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool SplineIKConstraint_use_curve_radius_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return !((uint64_t(data->flag) & 16) != 0);
}

void SplineIKConstraint_use_curve_radius_set(PointerRNA *ptr, bool value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int SplineIKConstraint_xz_scale_mode_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->xzScaleMode);
}

void SplineIKConstraint_xz_scale_mode_set(PointerRNA *ptr, int value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    data->xzScaleMode = (std::remove_reference_t<decltype(data->xzScaleMode)>)value;
}

int SplineIKConstraint_y_scale_mode_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->yScaleMode);
}

void SplineIKConstraint_y_scale_mode_set(PointerRNA *ptr, int value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    data->yScaleMode = (std::remove_reference_t<decltype(data->yScaleMode)>)value;
}

bool SplineIKConstraint_use_original_scale_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void SplineIKConstraint_use_original_scale_set(PointerRNA *ptr, bool value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

float SplineIKConstraint_bulge_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->bulge);
}

void SplineIKConstraint_bulge_set(PointerRNA *ptr, float value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    data->bulge = (std::remove_reference_t<decltype(data->bulge)>)std::clamp(value, 0.0f, 100.0f);
}

bool SplineIKConstraint_use_bulge_min_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void SplineIKConstraint_use_bulge_min_set(PointerRNA *ptr, bool value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool SplineIKConstraint_use_bulge_max_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void SplineIKConstraint_use_bulge_max_set(PointerRNA *ptr, bool value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

float SplineIKConstraint_bulge_min_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->bulge_min);
}

void SplineIKConstraint_bulge_min_set(PointerRNA *ptr, float value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    data->bulge_min = (std::remove_reference_t<decltype(data->bulge_min)>)std::clamp(value, 0.0f, 1.0f);
}

float SplineIKConstraint_bulge_max_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->bulge_max);
}

void SplineIKConstraint_bulge_max_set(PointerRNA *ptr, float value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    data->bulge_max = (std::remove_reference_t<decltype(data->bulge_max)>)std::clamp(value, 1.0f, 100.0f);
}

float SplineIKConstraint_bulge_smooth_get(PointerRNA *ptr)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    return (float)(data->bulge_smooth);
}

void SplineIKConstraint_bulge_smooth_set(PointerRNA *ptr, float value)
{
    bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
    data->bulge_smooth = (std::remove_reference_t<decltype(data->bulge_smooth)>)std::clamp(value, 0.0f, 1.0f);
}

float PivotConstraint_head_tail_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return (float)(data->headtail);
}

void PivotConstraint_head_tail_set(PointerRNA *ptr, float value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    data->headtail = (std::remove_reference_t<decltype(data->headtail)>)std::clamp(value, 0.0f, 1.0f);
}

bool PivotConstraint_use_bbone_shape_get(PointerRNA *ptr)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void PivotConstraint_use_bbone_shape_set(PointerRNA *ptr, bool value)
{
    bConstraint *data = (bConstraint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

PointerRNA PivotConstraint_target_get(PointerRNA *ptr)
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->tar);
}

void PivotConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->tar = value.data;
}

void PivotConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->subtarget) < 64);
    strcpy(value, data->subtarget);
}

int PivotConstraint_subtarget_length(PointerRNA *ptr)
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->subtarget);
}

void PivotConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->subtarget, value, 64);
}

bool PivotConstraint_use_relative_location_get(PointerRNA *ptr)
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void PivotConstraint_use_relative_location_set(PointerRNA *ptr, bool value)
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

void PivotConstraint_offset_get(PointerRNA *ptr, float values[3])
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->offset)[i]);
    }
}

void PivotConstraint_offset_set(PointerRNA *ptr, const float values[3])
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->offset)[i] = values[i];
    }
}

int PivotConstraint_rotation_range_get(PointerRNA *ptr)
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->rotAxis);
}

void PivotConstraint_rotation_range_set(PointerRNA *ptr, int value)
{
    bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
    data->rotAxis = (std::remove_reference_t<decltype(data->rotAxis)>)value;
}

PointerRNA FollowTrackConstraint_clip_get(PointerRNA *ptr)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieClip, data->clip);
}

void FollowTrackConstraint_clip_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
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

void FollowTrackConstraint_track_get(PointerRNA *ptr, char *value)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->track) < 64);
    strcpy(value, data->track);
}

int FollowTrackConstraint_track_length(PointerRNA *ptr)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->track);
}

void FollowTrackConstraint_track_set(PointerRNA *ptr, const char *value)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->track, value, 64);
}

bool FollowTrackConstraint_use_active_clip_get(PointerRNA *ptr)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void FollowTrackConstraint_use_active_clip_set(PointerRNA *ptr, bool value)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool FollowTrackConstraint_use_3d_position_get(PointerRNA *ptr)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void FollowTrackConstraint_use_3d_position_set(PointerRNA *ptr, bool value)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

void FollowTrackConstraint_object_get(PointerRNA *ptr, char *value)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->object) < 64);
    strcpy(value, data->object);
}

int FollowTrackConstraint_object_length(PointerRNA *ptr)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->object);
}

void FollowTrackConstraint_object_set(PointerRNA *ptr, const char *value)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->object, value, 64);
}

PointerRNA FollowTrackConstraint_camera_get(PointerRNA *ptr)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->camera);
}

void FollowTrackConstraint_camera_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Constraint_followTrack_camera_set;
    fn(ptr, value, reports);
}

PointerRNA FollowTrackConstraint_depth_object_get(PointerRNA *ptr)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->depth_ob);
}

void FollowTrackConstraint_depth_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Constraint_followTrack_depthObject_set;
    fn(ptr, value, reports);
}

int FollowTrackConstraint_frame_method_get(PointerRNA *ptr)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return (uint64_t(data->frame_method) & 3);
}

void FollowTrackConstraint_frame_method_set(PointerRNA *ptr, int value)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    data->frame_method = std::remove_reference_t<decltype(data->frame_method)>(uint64_t(data->frame_method) & ~uint64_t(3));
    data->frame_method = std::remove_reference_t<decltype(data->frame_method)>(uint64_t(data->frame_method) | uint64_t(value));
}

bool FollowTrackConstraint_use_undistorted_position_get(PointerRNA *ptr)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void FollowTrackConstraint_use_undistorted_position_set(PointerRNA *ptr, bool value)
{
    bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

PointerRNA CameraSolverConstraint_clip_get(PointerRNA *ptr)
{
    bCameraSolverConstraint *data = (bCameraSolverConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieClip, data->clip);
}

void CameraSolverConstraint_clip_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bCameraSolverConstraint *data = (bCameraSolverConstraint *)(((bConstraint *)ptr->data)->data);
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

bool CameraSolverConstraint_use_active_clip_get(PointerRNA *ptr)
{
    bCameraSolverConstraint *data = (bCameraSolverConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CameraSolverConstraint_use_active_clip_set(PointerRNA *ptr, bool value)
{
    bCameraSolverConstraint *data = (bCameraSolverConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

PointerRNA ObjectSolverConstraint_clip_get(PointerRNA *ptr)
{
    bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieClip, data->clip);
}

void ObjectSolverConstraint_clip_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
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

bool ObjectSolverConstraint_use_active_clip_get(PointerRNA *ptr)
{
    bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ObjectSolverConstraint_use_active_clip_set(PointerRNA *ptr, bool value)
{
    bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ObjectSolverConstraint_set_inverse_pending_get(PointerRNA *ptr)
{
    bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ObjectSolverConstraint_set_inverse_pending_set(PointerRNA *ptr, bool value)
{
    bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

void ObjectSolverConstraint_object_get(PointerRNA *ptr, char *value)
{
    bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->object) < 64);
    strcpy(value, data->object);
}

int ObjectSolverConstraint_object_length(PointerRNA *ptr)
{
    bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->object);
}

void ObjectSolverConstraint_object_set(PointerRNA *ptr, const char *value)
{
    bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->object, value, 64);
}

PointerRNA ObjectSolverConstraint_camera_get(PointerRNA *ptr)
{
    bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->camera);
}

void ObjectSolverConstraint_camera_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Constraint_objectSolver_camera_set;
    fn(ptr, value, reports);
}

PointerRNA TransformCacheConstraint_cache_file_get(PointerRNA *ptr)
{
    bTransformCacheConstraint *data = (bTransformCacheConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CacheFile, data->cache_file);
}

void TransformCacheConstraint_cache_file_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bTransformCacheConstraint *data = (bTransformCacheConstraint *)(((bConstraint *)ptr->data)->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->cache_file) {
        id_us_min((ID *)data->cache_file);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->cache_file = value.data;
}

void TransformCacheConstraint_object_path_get(PointerRNA *ptr, char *value)
{
    bTransformCacheConstraint *data = (bTransformCacheConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_assert(strlen(data->object_path) < 1024);
    strcpy(value, data->object_path);
}

int TransformCacheConstraint_object_path_length(PointerRNA *ptr)
{
    bTransformCacheConstraint *data = (bTransformCacheConstraint *)(((bConstraint *)ptr->data)->data);
    return strlen(data->object_path);
}

void TransformCacheConstraint_object_path_set(PointerRNA *ptr, const char *value)
{
    bTransformCacheConstraint *data = (bTransformCacheConstraint *)(((bConstraint *)ptr->data)->data);
    BLI_strncpy_utf8(data->object_path, value, 1024);
}

PointerRNA GeometryAttributeConstraint_target_get(PointerRNA *ptr)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->target);
}

void GeometryAttributeConstraint_target_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->target = value.data;
}

void GeometryAttributeConstraint_attribute_name_get(PointerRNA *ptr, char *value)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    if (data->attribute_name == nullptr) {
        *value = '\0';
        return;
    }
    strcpy(value, data->attribute_name);
}

int GeometryAttributeConstraint_attribute_name_length(PointerRNA *ptr)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    return (data->attribute_name == nullptr) ? 0 : strlen(data->attribute_name);
}

void GeometryAttributeConstraint_attribute_name_set(PointerRNA *ptr, const char *value)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    if (data->attribute_name != nullptr) { MEM_delete(data->attribute_name); }
    const size_t length = strlen(value);
    if (length > 0) {
        data->attribute_name = MEM_new_array_uninitialized<char>(length + 1, __func__);
        memcpy(data->attribute_name, value, length + 1);
    } else { data->attribute_name = nullptr; }
}

int GeometryAttributeConstraint_domain_get(PointerRNA *ptr)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->domain);
}

void GeometryAttributeConstraint_domain_set(PointerRNA *ptr, int value)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    data->domain = (std::remove_reference_t<decltype(data->domain)>)value;
}

bool GeometryAttributeConstraint_apply_target_transform_get(PointerRNA *ptr)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->apply_target_transform) & 1) != 0);
}

void GeometryAttributeConstraint_apply_target_transform_set(PointerRNA *ptr, bool value)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->apply_target_transform = std::remove_reference_t<decltype(data->apply_target_transform)>(uint64_t(data->apply_target_transform) | 1); }
    else { data->apply_target_transform = std::remove_reference_t<decltype(data->apply_target_transform)>(uint64_t(data->apply_target_transform) & ~uint64_t(1)); }
}

int GeometryAttributeConstraint_data_type_get(PointerRNA *ptr)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->data_type);
}

void GeometryAttributeConstraint_data_type_set(PointerRNA *ptr, int value)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    data->data_type = (std::remove_reference_t<decltype(data->data_type)>)value;
}

int GeometryAttributeConstraint_sample_index_get(PointerRNA *ptr)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->sample_index);
}

void GeometryAttributeConstraint_sample_index_set(PointerRNA *ptr, int value)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    data->sample_index = (std::remove_reference_t<decltype(data->sample_index)>)std::clamp(value, 0, INT_MAX);
}

bool GeometryAttributeConstraint_mix_loc_get(PointerRNA *ptr)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void GeometryAttributeConstraint_mix_loc_set(PointerRNA *ptr, bool value)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

bool GeometryAttributeConstraint_mix_rot_get(PointerRNA *ptr)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void GeometryAttributeConstraint_mix_rot_set(PointerRNA *ptr, bool value)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

bool GeometryAttributeConstraint_mix_scl_get(PointerRNA *ptr)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

void GeometryAttributeConstraint_mix_scl_set(PointerRNA *ptr, bool value)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

int GeometryAttributeConstraint_mix_mode_get(PointerRNA *ptr)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    return (int)(data->mix_mode);
}

void GeometryAttributeConstraint_mix_mode_set(PointerRNA *ptr, int value)
{
    bGeometryAttributeConstraint *data = (bGeometryAttributeConstraint *)(((bConstraint *)ptr->data)->data);
    data->mix_mode = (std::remove_reference_t<decltype(data->mix_mode)>)value;
}






bConstraintTarget *ArmatureConstraintTargets_new_func(ID *_selfid, bConstraint *_self, Main *bmain)
{
	return rna_ArmatureConstraint_target_new(_selfid, _self, bmain);
}

static void ArmatureConstraintTargets_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bConstraint *_self;
	bConstraintTarget *target;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bConstraint *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	target = rna_ArmatureConstraint_target_new(_selfid, _self, CTX_data_main(C));
	*((bConstraintTarget **)_retdata) = target;
}

void ArmatureConstraintTargets_remove_func(ID *_selfid, bConstraint *_self, Main *bmain, ReportList *reports, PointerRNA *target)
{
	rna_ArmatureConstraint_target_remove(_selfid, _self, bmain, reports, target);
}

static void ArmatureConstraintTargets_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bConstraint *_self;
	PointerRNA *target;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bConstraint *)_ptr->data;
	_data = (char *)_parms->data;
	target = *((PointerRNA **)_data);
	
	rna_ArmatureConstraint_target_remove(_selfid, _self, CTX_data_main(C), reports, target);
}

void ArmatureConstraintTargets_clear_func(ID *_selfid, bConstraint *_self, Main *bmain)
{
	rna_ArmatureConstraint_target_clear(_selfid, _self, bmain);
}

static void ArmatureConstraintTargets_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bConstraint *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (bConstraint *)_ptr->data;
	
	rna_ArmatureConstraint_target_clear(_selfid, _self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

bConstraintTarget *rna_ArmatureConstraint_target_new(ID *_selfid, bConstraint *_self, Main *bmain);
void rna_ArmatureConstraint_target_remove(ID *_selfid, bConstraint *_self, Main *bmain, ReportList *reports, PointerRNA *target);
void rna_ArmatureConstraint_target_clear(ID *_selfid, bConstraint *_self, Main *bmain);





















int SplineIKConstraint_joint_bindings_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_SplineIKConstraint_joint_bindings_get_length(ptr, arraylen);
}








/* Constraint */
static CollectionPropertyRNA rna_Constraint_rna_properties_;
PropertyRNA &rna_Constraint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Constraint_rna_properties_);

static PointerPropertyRNA rna_Constraint_rna_type_;
PropertyRNA &rna_Constraint_rna_type = reinterpret_cast<PropertyRNA &>(rna_Constraint_rna_type_);

static StringPropertyRNA rna_Constraint_name_;
PropertyRNA &rna_Constraint_name = reinterpret_cast<PropertyRNA &>(rna_Constraint_name_);

static EnumPropertyRNA rna_Constraint_type_;
PropertyRNA &rna_Constraint_type = reinterpret_cast<PropertyRNA &>(rna_Constraint_type_);

static BoolPropertyRNA rna_Constraint_is_override_data_;
PropertyRNA &rna_Constraint_is_override_data = reinterpret_cast<PropertyRNA &>(rna_Constraint_is_override_data_);

static EnumPropertyRNA rna_Constraint_owner_space_;
PropertyRNA &rna_Constraint_owner_space = reinterpret_cast<PropertyRNA &>(rna_Constraint_owner_space_);

static EnumPropertyRNA rna_Constraint_target_space_;
PropertyRNA &rna_Constraint_target_space = reinterpret_cast<PropertyRNA &>(rna_Constraint_target_space_);

static PointerPropertyRNA rna_Constraint_space_object_;
PropertyRNA &rna_Constraint_space_object = reinterpret_cast<PropertyRNA &>(rna_Constraint_space_object_);

static StringPropertyRNA rna_Constraint_space_subtarget_;
PropertyRNA &rna_Constraint_space_subtarget = reinterpret_cast<PropertyRNA &>(rna_Constraint_space_subtarget_);

static BoolPropertyRNA rna_Constraint_mute_;
PropertyRNA &rna_Constraint_mute = reinterpret_cast<PropertyRNA &>(rna_Constraint_mute_);

static BoolPropertyRNA rna_Constraint_enabled_;
PropertyRNA &rna_Constraint_enabled = reinterpret_cast<PropertyRNA &>(rna_Constraint_enabled_);

static BoolPropertyRNA rna_Constraint_show_expanded_;
PropertyRNA &rna_Constraint_show_expanded = reinterpret_cast<PropertyRNA &>(rna_Constraint_show_expanded_);

static BoolPropertyRNA rna_Constraint_is_valid_;
PropertyRNA &rna_Constraint_is_valid = reinterpret_cast<PropertyRNA &>(rna_Constraint_is_valid_);

static BoolPropertyRNA rna_Constraint_active_;
PropertyRNA &rna_Constraint_active = reinterpret_cast<PropertyRNA &>(rna_Constraint_active_);

static FloatPropertyRNA rna_Constraint_influence_;
PropertyRNA &rna_Constraint_influence = reinterpret_cast<PropertyRNA &>(rna_Constraint_influence_);

static FloatPropertyRNA rna_Constraint_error_location_;
PropertyRNA &rna_Constraint_error_location = reinterpret_cast<PropertyRNA &>(rna_Constraint_error_location_);

static FloatPropertyRNA rna_Constraint_error_rotation_;
PropertyRNA &rna_Constraint_error_rotation = reinterpret_cast<PropertyRNA &>(rna_Constraint_error_rotation_);

StructRNA *RNA_Constraint;
void register_struct_Constraint(BlenderRNA &brna)
{
	rna_Constraint_rna_properties_ = {
		{&rna_Constraint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Constraint_rna_properties_begin, Constraint_rna_properties_next, Constraint_rna_properties_end, Constraint_rna_properties_get, nullptr, nullptr, Constraint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Constraint_rna_type_ = {
		{&rna_Constraint_name, 	&rna_Constraint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Constraint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Constraint_name_ = {
		{&rna_Constraint_type, 	&rna_Constraint_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Constraint name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 102367237, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Constraint_name_get, Constraint_name_length, Constraint_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Constraint_type_ = {
		{&rna_Constraint_is_override_data, 	&rna_Constraint_name,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, type), RawPropertyType(1), nullptr},
		Constraint_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_constraint_type_items, 33, 27
	};

	rna_Constraint_is_override_data_ = {
		{&rna_Constraint_owner_space, 	&rna_Constraint_type,
		-1, "is_override_data", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Constraint",
		"In a local override object, whether this constraint comes from the linked reference object, or is local to the override",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Constraint_is_override_data_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_Constraint_owner_space_items[7] = {
		{0, "WORLD", 0, "World Space", "The constraint is applied relative to the world coordinate system"	},
		{5, "CUSTOM", 0, "Custom Space", "The constraint is applied in local space of a custom object/bone/vertex group"	},
		{0, "", 0, nullptr, nullptr	},
		{2, "POSE", 0, "Pose Space", "The constraint is applied in Pose Space, the object transformation is ignored"	},
		{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The constraint is applied relative to the rest pose local coordinate system of the bone, thus including the parent-induced transformation"	},
		{1, "LOCAL", 0, "Local Space", "The constraint is applied relative to the local coordinate system of the object"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Constraint_owner_space_ = {
		{&rna_Constraint_target_space, 	&rna_Constraint_is_override_data,
		-1, "owner_space", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Owner Space",
		"Space that owner is evaluated in",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, ownspace), RawPropertyType(2), nullptr},
		Constraint_owner_space_get, Constraint_owner_space_set, rna_Constraint_owner_space_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Constraint_owner_space_items, 6, 0
	};

	static const EnumPropertyItem rna_Constraint_target_space_items[8] = {
		{0, "WORLD", 0, "World Space", "The transformation of the target is evaluated relative to the world coordinate system"	},
		{5, "CUSTOM", 0, "Custom Space", "The transformation of the target is evaluated relative to a custom object/bone/vertex group"	},
		{0, "", 0, nullptr, nullptr	},
		{2, "POSE", 0, "Pose Space", "The transformation of the target is only evaluated in the Pose Space, the target armature object transformation is ignored"	},
		{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The transformation of the target bone is evaluated relative to its rest pose local coordinate system, thus including the parent-induced transformation"	},
		{1, "LOCAL", 0, "Local Space", "The transformation of the target is evaluated relative to its local coordinate system"	},
		{6, "LOCAL_OWNER_ORIENT", 0, "Local Space (Owner Orientation)", "The transformation of the target bone is evaluated relative to its local coordinate system, followed by a correction for the difference in target and owner rest pose orientations. When applied as local transform to the owner produces the same global motion as the target if the parents are still in rest pose."	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Constraint_target_space_ = {
		{&rna_Constraint_space_object, 	&rna_Constraint_owner_space,
		-1, "target_space", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Target Space",
		"Space that target is evaluated in",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, tarspace), RawPropertyType(2), nullptr},
		Constraint_target_space_get, Constraint_target_space_set, rna_Constraint_target_space_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Constraint_target_space_items, 7, 0
	};

	rna_Constraint_space_object_ = {
		{&rna_Constraint_space_subtarget, 	&rna_Constraint_target_space,
		-1, "space_object", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Object for Custom Space",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Constraint_space_object_get, Constraint_space_object_set, nullptr, nullptr,RNA_Object
	};

	rna_Constraint_space_subtarget_ = {
		{&rna_Constraint_mute, 	&rna_Constraint_space_object,
		-1, "space_subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Constraint_space_subtarget_get, Constraint_space_subtarget_length, Constraint_space_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Constraint_mute_ = {
		{&rna_Constraint_enabled, 	&rna_Constraint_space_subtarget,
		-1, "mute", 4355, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable",
		"Enable/Disable Constraint",
		16, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Constraint_mute_get, Constraint_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Constraint_enabled_ = {
		{&rna_Constraint_show_expanded, 	&rna_Constraint_mute,
		-1, "enabled", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Enabled",
		"Use the results of this constraint",
		15, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Constraint_enabled_get, Constraint_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Constraint_show_expanded_ = {
		{&rna_Constraint_is_valid, 	&rna_Constraint_enabled,
		-1, "show_expanded", 1073745923, 1, 0, 4, 0, PropertyPathTemplateType(0), "Expanded",
		"Constraint\'s panel is expanded in UI",
		33, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, ui_expand_flag), RawPropertyType(1), nullptr},
		Constraint_show_expanded_get, Constraint_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Constraint_is_valid_ = {
		{&rna_Constraint_active, 	&rna_Constraint_show_expanded,
		-1, "is_valid", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Valid",
		"Constraint has valid settings and can be evaluated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Constraint_is_valid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Constraint_active_ = {
		{&rna_Constraint_influence, 	&rna_Constraint_is_valid,
		-1, "active", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"Constraint is the one being edited",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Constraint_active_get, Constraint_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Constraint_influence_ = {
		{&rna_Constraint_error_location, 	&rna_Constraint_active,
		-1, "influence", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Influence",
		"Amount of influence constraint will have on the final solution",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, enforce), RawPropertyType(5), nullptr},
		Constraint_influence_get, Constraint_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Constraint_error_location_ = {
		{&rna_Constraint_error_rotation, 	&rna_Constraint_influence,
		-1, "error_location", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Lin error",
		"Amount of residual error in Blender space unit for constraints that work on position",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, lin_error), RawPropertyType(5), nullptr},
		Constraint_error_location_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Constraint_error_rotation_ = {
		{nullptr, 	&rna_Constraint_error_location,
		-1, "error_rotation", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Rotation error",
		"Amount of residual error in radians for constraints that work on orientation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, rot_error), RawPropertyType(5), nullptr},
		Constraint_error_rotation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_Constraint;
	srna->cont.properties = {&rna_Constraint_rna_properties, &rna_Constraint_error_rotation};
	srna->identifier = "Constraint";
	srna->flag = 516;
	srna->name = "Constraint";
	srna->description = "Constraint modifying the transformation of objects and bones";
	srna->translation_context = "*";
	srna->icon = 178;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Constraint Target */
static CollectionPropertyRNA rna_ConstraintTarget_rna_properties_;
PropertyRNA &rna_ConstraintTarget_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ConstraintTarget_rna_properties_);

static PointerPropertyRNA rna_ConstraintTarget_rna_type_;
PropertyRNA &rna_ConstraintTarget_rna_type = reinterpret_cast<PropertyRNA &>(rna_ConstraintTarget_rna_type_);

static PointerPropertyRNA rna_ConstraintTarget_target_;
PropertyRNA &rna_ConstraintTarget_target = reinterpret_cast<PropertyRNA &>(rna_ConstraintTarget_target_);

static StringPropertyRNA rna_ConstraintTarget_subtarget_;
PropertyRNA &rna_ConstraintTarget_subtarget = reinterpret_cast<PropertyRNA &>(rna_ConstraintTarget_subtarget_);

StructRNA *RNA_ConstraintTarget;
void register_struct_ConstraintTarget(BlenderRNA &brna)
{
	rna_ConstraintTarget_rna_properties_ = {
		{&rna_ConstraintTarget_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ConstraintTarget_rna_properties_begin, ConstraintTarget_rna_properties_next, ConstraintTarget_rna_properties_end, ConstraintTarget_rna_properties_get, nullptr, nullptr, ConstraintTarget_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ConstraintTarget_rna_type_ = {
		{&rna_ConstraintTarget_target, 	&rna_ConstraintTarget_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ConstraintTarget_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ConstraintTarget_target_ = {
		{&rna_ConstraintTarget_subtarget, 	&rna_ConstraintTarget_rna_type,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ConstraintTarget_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ConstraintTarget_target_get, ConstraintTarget_target_set, nullptr, nullptr,RNA_Object
	};

	rna_ConstraintTarget_subtarget_ = {
		{nullptr, 	&rna_ConstraintTarget_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_ConstraintTarget_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ConstraintTarget_subtarget_get, ConstraintTarget_subtarget_length, ConstraintTarget_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	StructRNA *srna = RNA_ConstraintTarget;
	srna->cont.properties = {&rna_ConstraintTarget_rna_properties, &rna_ConstraintTarget_subtarget};
	srna->identifier = "ConstraintTarget";
	srna->flag = 516;
	srna->name = "Constraint Target";
	srna->description = "Target object for multi-target constraints";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ConstraintTarget_rna_properties;
	srna->path = rna_ConstraintTarget_path;
};

/* Constraint Target Bone */
static CollectionPropertyRNA rna_ConstraintTargetBone_rna_properties_;
PropertyRNA &rna_ConstraintTargetBone_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ConstraintTargetBone_rna_properties_);

static PointerPropertyRNA rna_ConstraintTargetBone_rna_type_;
PropertyRNA &rna_ConstraintTargetBone_rna_type = reinterpret_cast<PropertyRNA &>(rna_ConstraintTargetBone_rna_type_);

static PointerPropertyRNA rna_ConstraintTargetBone_target_;
PropertyRNA &rna_ConstraintTargetBone_target = reinterpret_cast<PropertyRNA &>(rna_ConstraintTargetBone_target_);

static StringPropertyRNA rna_ConstraintTargetBone_subtarget_;
PropertyRNA &rna_ConstraintTargetBone_subtarget = reinterpret_cast<PropertyRNA &>(rna_ConstraintTargetBone_subtarget_);

static FloatPropertyRNA rna_ConstraintTargetBone_weight_;
PropertyRNA &rna_ConstraintTargetBone_weight = reinterpret_cast<PropertyRNA &>(rna_ConstraintTargetBone_weight_);

StructRNA *RNA_ConstraintTargetBone;
void register_struct_ConstraintTargetBone(BlenderRNA &brna)
{
	rna_ConstraintTargetBone_rna_properties_ = {
		{&rna_ConstraintTargetBone_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ConstraintTargetBone_rna_properties_begin, ConstraintTargetBone_rna_properties_next, ConstraintTargetBone_rna_properties_end, ConstraintTargetBone_rna_properties_get, nullptr, nullptr, ConstraintTargetBone_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ConstraintTargetBone_rna_type_ = {
		{&rna_ConstraintTargetBone_target, 	&rna_ConstraintTargetBone_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ConstraintTargetBone_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ConstraintTargetBone_target_ = {
		{&rna_ConstraintTargetBone_subtarget, 	&rna_ConstraintTargetBone_rna_type,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target armature",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ConstraintTarget_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ConstraintTargetBone_target_get, ConstraintTargetBone_target_set, nullptr, rna_Armature_object_poll,RNA_Object
	};

	rna_ConstraintTargetBone_subtarget_ = {
		{&rna_ConstraintTargetBone_weight, 	&rna_ConstraintTargetBone_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Target armature bone",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_ConstraintTarget_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ConstraintTargetBone_subtarget_get, ConstraintTargetBone_subtarget_length, ConstraintTargetBone_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_ConstraintTargetBone_weight_ = {
		{nullptr, 	&rna_ConstraintTargetBone_subtarget,
		-1, "weight", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Blend Weight",
		"Blending weight of this bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ConstraintTarget_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraintTarget, weight), RawPropertyType(5), nullptr},
		ConstraintTargetBone_weight_get, ConstraintTargetBone_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ConstraintTargetBone;
	srna->cont.properties = {&rna_ConstraintTargetBone_rna_properties, &rna_ConstraintTargetBone_weight};
	srna->identifier = "ConstraintTargetBone";
	srna->flag = 516;
	srna->name = "Constraint Target Bone";
	srna->description = "Target bone for multi-target constraints";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ConstraintTargetBone_rna_properties;
	srna->path = rna_ConstraintTarget_path;
};

/* Child Of Constraint */
static PointerPropertyRNA rna_ChildOfConstraint_target_;
PropertyRNA &rna_ChildOfConstraint_target = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_target_);

static StringPropertyRNA rna_ChildOfConstraint_subtarget_;
PropertyRNA &rna_ChildOfConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_subtarget_);

static BoolPropertyRNA rna_ChildOfConstraint_use_location_x_;
PropertyRNA &rna_ChildOfConstraint_use_location_x = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_use_location_x_);

static BoolPropertyRNA rna_ChildOfConstraint_use_location_y_;
PropertyRNA &rna_ChildOfConstraint_use_location_y = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_use_location_y_);

static BoolPropertyRNA rna_ChildOfConstraint_use_location_z_;
PropertyRNA &rna_ChildOfConstraint_use_location_z = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_use_location_z_);

static BoolPropertyRNA rna_ChildOfConstraint_use_rotation_x_;
PropertyRNA &rna_ChildOfConstraint_use_rotation_x = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_use_rotation_x_);

static BoolPropertyRNA rna_ChildOfConstraint_use_rotation_y_;
PropertyRNA &rna_ChildOfConstraint_use_rotation_y = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_use_rotation_y_);

static BoolPropertyRNA rna_ChildOfConstraint_use_rotation_z_;
PropertyRNA &rna_ChildOfConstraint_use_rotation_z = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_use_rotation_z_);

static BoolPropertyRNA rna_ChildOfConstraint_use_scale_x_;
PropertyRNA &rna_ChildOfConstraint_use_scale_x = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_use_scale_x_);

static BoolPropertyRNA rna_ChildOfConstraint_use_scale_y_;
PropertyRNA &rna_ChildOfConstraint_use_scale_y = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_use_scale_y_);

static BoolPropertyRNA rna_ChildOfConstraint_use_scale_z_;
PropertyRNA &rna_ChildOfConstraint_use_scale_z = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_use_scale_z_);

static BoolPropertyRNA rna_ChildOfConstraint_set_inverse_pending_;
PropertyRNA &rna_ChildOfConstraint_set_inverse_pending = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_set_inverse_pending_);

static FloatPropertyRNA rna_ChildOfConstraint_inverse_matrix_;
PropertyRNA &rna_ChildOfConstraint_inverse_matrix = reinterpret_cast<PropertyRNA &>(rna_ChildOfConstraint_inverse_matrix_);

StructRNA *RNA_ChildOfConstraint;
void register_struct_ChildOfConstraint(BlenderRNA &brna)
{
	rna_ChildOfConstraint_target_ = {
		{&rna_ChildOfConstraint_subtarget, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_target_get, ChildOfConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_ChildOfConstraint_subtarget_ = {
		{&rna_ChildOfConstraint_use_location_x, 	&rna_ChildOfConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_subtarget_get, ChildOfConstraint_subtarget_length, ChildOfConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_ChildOfConstraint_use_location_x_ = {
		{&rna_ChildOfConstraint_use_location_y, 	&rna_ChildOfConstraint_subtarget,
		-1, "use_location_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Location X",
		"Use X Location of Parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_use_location_x_get, ChildOfConstraint_use_location_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ChildOfConstraint_use_location_y_ = {
		{&rna_ChildOfConstraint_use_location_z, 	&rna_ChildOfConstraint_use_location_x,
		-1, "use_location_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Location Y",
		"Use Y Location of Parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_use_location_y_get, ChildOfConstraint_use_location_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ChildOfConstraint_use_location_z_ = {
		{&rna_ChildOfConstraint_use_rotation_x, 	&rna_ChildOfConstraint_use_location_y,
		-1, "use_location_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Location Z",
		"Use Z Location of Parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_use_location_z_get, ChildOfConstraint_use_location_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ChildOfConstraint_use_rotation_x_ = {
		{&rna_ChildOfConstraint_use_rotation_y, 	&rna_ChildOfConstraint_use_location_z,
		-1, "use_rotation_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Rotation X",
		"Use X Rotation of Parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_use_rotation_x_get, ChildOfConstraint_use_rotation_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ChildOfConstraint_use_rotation_y_ = {
		{&rna_ChildOfConstraint_use_rotation_z, 	&rna_ChildOfConstraint_use_rotation_x,
		-1, "use_rotation_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Rotation Y",
		"Use Y Rotation of Parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_use_rotation_y_get, ChildOfConstraint_use_rotation_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ChildOfConstraint_use_rotation_z_ = {
		{&rna_ChildOfConstraint_use_scale_x, 	&rna_ChildOfConstraint_use_rotation_y,
		-1, "use_rotation_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Rotation Z",
		"Use Z Rotation of Parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_use_rotation_z_get, ChildOfConstraint_use_rotation_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ChildOfConstraint_use_scale_x_ = {
		{&rna_ChildOfConstraint_use_scale_y, 	&rna_ChildOfConstraint_use_rotation_z,
		-1, "use_scale_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Scale X",
		"Use X Scale of Parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_use_scale_x_get, ChildOfConstraint_use_scale_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ChildOfConstraint_use_scale_y_ = {
		{&rna_ChildOfConstraint_use_scale_z, 	&rna_ChildOfConstraint_use_scale_x,
		-1, "use_scale_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Scale Y",
		"Use Y Scale of Parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_use_scale_y_get, ChildOfConstraint_use_scale_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ChildOfConstraint_use_scale_z_ = {
		{&rna_ChildOfConstraint_set_inverse_pending, 	&rna_ChildOfConstraint_use_scale_y,
		-1, "use_scale_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Scale Z",
		"Use Z Scale of Parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_use_scale_z_get, ChildOfConstraint_use_scale_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ChildOfConstraint_set_inverse_pending_ = {
		{&rna_ChildOfConstraint_inverse_matrix, 	&rna_ChildOfConstraint_use_scale_z,
		-1, "set_inverse_pending", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Set Inverse Pending",
		"Set to true to request recalculation of the inverse matrix",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildOfConstraint_set_inverse_pending_get, ChildOfConstraint_set_inverse_pending_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_ChildOfConstraint_inverse_matrix_default[16] = {
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
	rna_ChildOfConstraint_inverse_matrix_ = {
		{nullptr, 	&rna_ChildOfConstraint_set_inverse_pending,
		-1, "inverse_matrix", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Inverse Matrix",
		"Transformation matrix to apply before",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Constraint_childof_inverse_matrix_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bChildOfConstraint, invmat), RawPropertyType(5), nullptr},
		nullptr, nullptr, ChildOfConstraint_inverse_matrix_get, ChildOfConstraint_inverse_matrix_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ChildOfConstraint_inverse_matrix_default
	};

	StructRNA *srna = RNA_ChildOfConstraint;
	srna->cont.properties = {&rna_ChildOfConstraint_target, &rna_ChildOfConstraint_inverse_matrix};
	srna->identifier = "ChildOfConstraint";
	srna->flag = 516;
	srna->name = "Child Of Constraint";
	srna->description = "Create constraint-based parent-child relationship";
	srna->translation_context = "*";
	srna->icon = 421;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Armature Constraint */
static CollectionPropertyRNA rna_ArmatureConstraint_targets_;
PropertyRNA &rna_ArmatureConstraint_targets = reinterpret_cast<PropertyRNA &>(rna_ArmatureConstraint_targets_);

static BoolPropertyRNA rna_ArmatureConstraint_use_deform_preserve_volume_;
PropertyRNA &rna_ArmatureConstraint_use_deform_preserve_volume = reinterpret_cast<PropertyRNA &>(rna_ArmatureConstraint_use_deform_preserve_volume_);

static BoolPropertyRNA rna_ArmatureConstraint_use_bone_envelopes_;
PropertyRNA &rna_ArmatureConstraint_use_bone_envelopes = reinterpret_cast<PropertyRNA &>(rna_ArmatureConstraint_use_bone_envelopes_);

static BoolPropertyRNA rna_ArmatureConstraint_use_current_location_;
PropertyRNA &rna_ArmatureConstraint_use_current_location = reinterpret_cast<PropertyRNA &>(rna_ArmatureConstraint_use_current_location_);

StructRNA *RNA_ArmatureConstraint;
void register_struct_ArmatureConstraint(BlenderRNA &brna)
{
	rna_ArmatureConstraint_targets_ = {
		{&rna_ArmatureConstraint_use_deform_preserve_volume, 	nullptr,
		-1, "targets", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Targets",
		"Target Bones",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ArmatureConstraintTargets},
		ArmatureConstraint_targets_begin, ArmatureConstraint_targets_next, ArmatureConstraint_targets_end, ArmatureConstraint_targets_get, nullptr, ArmatureConstraint_targets_lookup_int, nullptr, nullptr, RNA_ConstraintTargetBone
	};

	rna_ArmatureConstraint_use_deform_preserve_volume_ = {
		{&rna_ArmatureConstraint_use_bone_envelopes, 	&rna_ArmatureConstraint_targets,
		-1, "use_deform_preserve_volume", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Preserve Volume",
		"Deform rotation interpolation with quaternions",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureConstraint_use_deform_preserve_volume_get, ArmatureConstraint_use_deform_preserve_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ArmatureConstraint_use_bone_envelopes_ = {
		{&rna_ArmatureConstraint_use_current_location, 	&rna_ArmatureConstraint_use_deform_preserve_volume,
		-1, "use_bone_envelopes", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Envelopes",
		"Multiply weights by envelope for all bones, instead of acting like Vertex Group based blending. The specified weights are still used, and only the listed bones are considered.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureConstraint_use_bone_envelopes_get, ArmatureConstraint_use_bone_envelopes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ArmatureConstraint_use_current_location_ = {
		{nullptr, 	&rna_ArmatureConstraint_use_bone_envelopes,
		-1, "use_current_location", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Current Location",
		"Use the current bone location for envelopes and choosing B-Bone segments instead of rest position",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureConstraint_use_current_location_get, ArmatureConstraint_use_current_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ArmatureConstraint;
	srna->cont.properties = {&rna_ArmatureConstraint_targets, &rna_ArmatureConstraint_use_current_location};
	srna->identifier = "ArmatureConstraint";
	srna->flag = 516;
	srna->name = "Armature Constraint";
	srna->description = "Applies transformations done by the Armature modifier";
	srna->translation_context = "*";
	srna->icon = 418;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Armature Deform Constraint Targets */
static CollectionPropertyRNA rna_ArmatureConstraintTargets_rna_properties_;
PropertyRNA &rna_ArmatureConstraintTargets_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ArmatureConstraintTargets_rna_properties_);

static PointerPropertyRNA rna_ArmatureConstraintTargets_rna_type_;
PropertyRNA &rna_ArmatureConstraintTargets_rna_type = reinterpret_cast<PropertyRNA &>(rna_ArmatureConstraintTargets_rna_type_);

static PointerPropertyRNA rna_ArmatureConstraintTargets_new_target_;
PropertyRNA &rna_ArmatureConstraintTargets_new_target = reinterpret_cast<PropertyRNA &>(rna_ArmatureConstraintTargets_new_target_);

FunctionRNA *rna_ArmatureConstraintTargets_new_func;
static PointerPropertyRNA rna_ArmatureConstraintTargets_remove_target_;
PropertyRNA &rna_ArmatureConstraintTargets_remove_target = reinterpret_cast<PropertyRNA &>(rna_ArmatureConstraintTargets_remove_target_);

FunctionRNA *rna_ArmatureConstraintTargets_remove_func;
FunctionRNA *rna_ArmatureConstraintTargets_clear_func;
StructRNA *RNA_ArmatureConstraintTargets;
void register_struct_ArmatureConstraintTargets(BlenderRNA &brna)
{
	rna_ArmatureConstraintTargets_rna_properties_ = {
		{&rna_ArmatureConstraintTargets_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureConstraintTargets_rna_properties_begin, ArmatureConstraintTargets_rna_properties_next, ArmatureConstraintTargets_rna_properties_end, ArmatureConstraintTargets_rna_properties_get, nullptr, nullptr, ArmatureConstraintTargets_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ArmatureConstraintTargets_rna_type_ = {
		{nullptr, 	&rna_ArmatureConstraintTargets_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureConstraintTargets_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ArmatureConstraintTargets;
	srna->cont.properties = {&rna_ArmatureConstraintTargets_rna_properties, &rna_ArmatureConstraintTargets_rna_type};
	srna->identifier = "ArmatureConstraintTargets";
	srna->flag = 516;
	srna->name = "Armature Deform Constraint Targets";
	srna->description = "Collection of target bones and weights";
	srna->translation_context = "*";
	srna->icon = 418;
	srna->iteratorproperty = &rna_ArmatureConstraintTargets_rna_properties;
	{
	rna_ArmatureConstraintTargets_new_target_ = {
		{nullptr, 	nullptr,
		-1, "target", 8388608, 1, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New target bone",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ConstraintTargetBone
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ArmatureConstraintTargets_new_target, &rna_ArmatureConstraintTargets_new_target};
		func->identifier = "new";
		func->flag = 2052;
		func->description = "Add a new target to the constraint";
		func->call = ArmatureConstraintTargets_new_call;
		func->c_ret = &rna_ArmatureConstraintTargets_new_target;
		rna_ArmatureConstraintTargets_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ArmatureConstraintTargets_remove_target_ = {
		{nullptr, 	nullptr,
		-1, "target", 262144, 1, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Target to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ConstraintTargetBone
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ArmatureConstraintTargets_remove_target, &rna_ArmatureConstraintTargets_remove_target};
		func->identifier = "remove";
		func->flag = 2068;
		func->description = "Delete target from the constraint";
		func->call = ArmatureConstraintTargets_remove_call;
		rna_ArmatureConstraintTargets_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 2052;
		func->description = "Delete all targets from object";
		func->call = ArmatureConstraintTargets_clear_call;
		rna_ArmatureConstraintTargets_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Stretch To Constraint */
static FloatPropertyRNA rna_StretchToConstraint_head_tail_;
PropertyRNA &rna_StretchToConstraint_head_tail = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_head_tail_);

static BoolPropertyRNA rna_StretchToConstraint_use_bbone_shape_;
PropertyRNA &rna_StretchToConstraint_use_bbone_shape = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_use_bbone_shape_);

static PointerPropertyRNA rna_StretchToConstraint_target_;
PropertyRNA &rna_StretchToConstraint_target = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_target_);

static StringPropertyRNA rna_StretchToConstraint_subtarget_;
PropertyRNA &rna_StretchToConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_subtarget_);

static EnumPropertyRNA rna_StretchToConstraint_volume_;
PropertyRNA &rna_StretchToConstraint_volume = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_volume_);

static EnumPropertyRNA rna_StretchToConstraint_keep_axis_;
PropertyRNA &rna_StretchToConstraint_keep_axis = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_keep_axis_);

static FloatPropertyRNA rna_StretchToConstraint_rest_length_;
PropertyRNA &rna_StretchToConstraint_rest_length = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_rest_length_);

static FloatPropertyRNA rna_StretchToConstraint_bulge_;
PropertyRNA &rna_StretchToConstraint_bulge = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_bulge_);

static BoolPropertyRNA rna_StretchToConstraint_use_bulge_min_;
PropertyRNA &rna_StretchToConstraint_use_bulge_min = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_use_bulge_min_);

static BoolPropertyRNA rna_StretchToConstraint_use_bulge_max_;
PropertyRNA &rna_StretchToConstraint_use_bulge_max = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_use_bulge_max_);

static FloatPropertyRNA rna_StretchToConstraint_bulge_min_;
PropertyRNA &rna_StretchToConstraint_bulge_min = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_bulge_min_);

static FloatPropertyRNA rna_StretchToConstraint_bulge_max_;
PropertyRNA &rna_StretchToConstraint_bulge_max = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_bulge_max_);

static FloatPropertyRNA rna_StretchToConstraint_bulge_smooth_;
PropertyRNA &rna_StretchToConstraint_bulge_smooth = reinterpret_cast<PropertyRNA &>(rna_StretchToConstraint_bulge_smooth_);

StructRNA *RNA_StretchToConstraint;
void register_struct_StretchToConstraint(BlenderRNA &brna)
{
	rna_StretchToConstraint_head_tail_ = {
		{&rna_StretchToConstraint_use_bbone_shape, 	nullptr,
		-1, "head_tail", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Head/Tail",
		"Target along length of bone: Head is 0, Tail is 1",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, headtail), RawPropertyType(5), nullptr},
		StretchToConstraint_head_tail_get, StretchToConstraint_head_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_StretchToConstraint_use_bbone_shape_ = {
		{&rna_StretchToConstraint_target, 	&rna_StretchToConstraint_head_tail,
		-1, "use_bbone_shape", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Follow B-Bone",
		"Follow shape of B-Bone segments when calculating Head/Tail position",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StretchToConstraint_use_bbone_shape_get, StretchToConstraint_use_bbone_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StretchToConstraint_target_ = {
		{&rna_StretchToConstraint_subtarget, 	&rna_StretchToConstraint_use_bbone_shape,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StretchToConstraint_target_get, StretchToConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_StretchToConstraint_subtarget_ = {
		{&rna_StretchToConstraint_volume, 	&rna_StretchToConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StretchToConstraint_subtarget_get, StretchToConstraint_subtarget_length, StretchToConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_StretchToConstraint_volume_items[5] = {
		{0, "VOLUME_XZX", 0, "XZ", ""	},
		{1, "VOLUME_X", 0, "X", ""	},
		{2, "VOLUME_Z", 0, "Z", ""	},
		{3, "NO_VOLUME", 0, "None", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StretchToConstraint_volume_ = {
		{&rna_StretchToConstraint_keep_axis, 	&rna_StretchToConstraint_subtarget,
		-1, "volume", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maintain Volume",
		"Maintain the object\'s volume as it stretches",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bStretchToConstraint, volmode), RawPropertyType(0), nullptr},
		StretchToConstraint_volume_get, StretchToConstraint_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StretchToConstraint_volume_items, 4, 0
	};

	static const EnumPropertyItem rna_StretchToConstraint_keep_axis_items[4] = {
		{0, "PLANE_X", 0, "XZ", "Rotate around local X, then Z"	},
		{2, "PLANE_Z", 0, "ZX", "Rotate around local Z, then X"	},
		{1, "SWING_Y", 0, "Swing", "Use the smallest single axis rotation, similar to Damped Track"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StretchToConstraint_keep_axis_ = {
		{&rna_StretchToConstraint_rest_length, 	&rna_StretchToConstraint_volume,
		-1, "keep_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Keep Axis",
		"The rotation type and axis order to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bStretchToConstraint, plane), RawPropertyType(0), nullptr},
		StretchToConstraint_keep_axis_get, StretchToConstraint_keep_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StretchToConstraint_keep_axis_items, 3, 0
	};

	rna_StretchToConstraint_rest_length_ = {
		{&rna_StretchToConstraint_bulge, 	&rna_StretchToConstraint_keep_axis,
		-1, "rest_length", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Original Length",
		"Length at rest position",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bStretchToConstraint, orglength), RawPropertyType(5), nullptr},
		StretchToConstraint_rest_length_get, StretchToConstraint_rest_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 1000.0f, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_StretchToConstraint_bulge_ = {
		{&rna_StretchToConstraint_use_bulge_min, 	&rna_StretchToConstraint_rest_length,
		-1, "bulge", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Volume Variation",
		"Factor between volume variation and stretching",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bStretchToConstraint, bulge), RawPropertyType(5), nullptr},
		StretchToConstraint_bulge_get, StretchToConstraint_bulge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_StretchToConstraint_use_bulge_min_ = {
		{&rna_StretchToConstraint_use_bulge_max, 	&rna_StretchToConstraint_bulge,
		-1, "use_bulge_min", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Volume Variation Minimum",
		"Use lower limit for volume variation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StretchToConstraint_use_bulge_min_get, StretchToConstraint_use_bulge_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StretchToConstraint_use_bulge_max_ = {
		{&rna_StretchToConstraint_bulge_min, 	&rna_StretchToConstraint_use_bulge_min,
		-1, "use_bulge_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Volume Variation Maximum",
		"Use upper limit for volume variation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StretchToConstraint_use_bulge_max_get, StretchToConstraint_use_bulge_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StretchToConstraint_bulge_min_ = {
		{&rna_StretchToConstraint_bulge_max, 	&rna_StretchToConstraint_use_bulge_max,
		-1, "bulge_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Volume Variation Minimum",
		"Minimum volume stretching factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bStretchToConstraint, bulge_min), RawPropertyType(5), nullptr},
		StretchToConstraint_bulge_min_get, StretchToConstraint_bulge_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_StretchToConstraint_bulge_max_ = {
		{&rna_StretchToConstraint_bulge_smooth, 	&rna_StretchToConstraint_bulge_min,
		-1, "bulge_max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Volume Variation Maximum",
		"Maximum volume stretching factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bStretchToConstraint, bulge_max), RawPropertyType(5), nullptr},
		StretchToConstraint_bulge_max_get, StretchToConstraint_bulge_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 100.0f, 1.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_StretchToConstraint_bulge_smooth_ = {
		{nullptr, 	&rna_StretchToConstraint_bulge_max,
		-1, "bulge_smooth", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Volume Variation Smoothness",
		"Strength of volume stretching clamping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bStretchToConstraint, bulge_smooth), RawPropertyType(5), nullptr},
		StretchToConstraint_bulge_smooth_get, StretchToConstraint_bulge_smooth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_StretchToConstraint;
	srna->cont.properties = {&rna_StretchToConstraint_head_tail, &rna_StretchToConstraint_bulge_smooth};
	srna->identifier = "StretchToConstraint";
	srna->flag = 516;
	srna->name = "Stretch To Constraint";
	srna->description = "Stretch to meet the target object";
	srna->translation_context = "*";
	srna->icon = 440;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Follow Path Constraint */
static PointerPropertyRNA rna_FollowPathConstraint_target_;
PropertyRNA &rna_FollowPathConstraint_target = reinterpret_cast<PropertyRNA &>(rna_FollowPathConstraint_target_);

static FloatPropertyRNA rna_FollowPathConstraint_offset_;
PropertyRNA &rna_FollowPathConstraint_offset = reinterpret_cast<PropertyRNA &>(rna_FollowPathConstraint_offset_);

static FloatPropertyRNA rna_FollowPathConstraint_offset_factor_;
PropertyRNA &rna_FollowPathConstraint_offset_factor = reinterpret_cast<PropertyRNA &>(rna_FollowPathConstraint_offset_factor_);

static EnumPropertyRNA rna_FollowPathConstraint_forward_axis_;
PropertyRNA &rna_FollowPathConstraint_forward_axis = reinterpret_cast<PropertyRNA &>(rna_FollowPathConstraint_forward_axis_);

static EnumPropertyRNA rna_FollowPathConstraint_up_axis_;
PropertyRNA &rna_FollowPathConstraint_up_axis = reinterpret_cast<PropertyRNA &>(rna_FollowPathConstraint_up_axis_);

static BoolPropertyRNA rna_FollowPathConstraint_use_curve_follow_;
PropertyRNA &rna_FollowPathConstraint_use_curve_follow = reinterpret_cast<PropertyRNA &>(rna_FollowPathConstraint_use_curve_follow_);

static BoolPropertyRNA rna_FollowPathConstraint_use_fixed_location_;
PropertyRNA &rna_FollowPathConstraint_use_fixed_location = reinterpret_cast<PropertyRNA &>(rna_FollowPathConstraint_use_fixed_location_);

static BoolPropertyRNA rna_FollowPathConstraint_use_curve_radius_;
PropertyRNA &rna_FollowPathConstraint_use_curve_radius = reinterpret_cast<PropertyRNA &>(rna_FollowPathConstraint_use_curve_radius_);

StructRNA *RNA_FollowPathConstraint;
void register_struct_FollowPathConstraint(BlenderRNA &brna)
{
	rna_FollowPathConstraint_target_ = {
		{&rna_FollowPathConstraint_offset, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target Curve object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowPathConstraint_target_get, FollowPathConstraint_target_set, nullptr, rna_Curve_object_poll,RNA_Object
	};

	rna_FollowPathConstraint_offset_ = {
		{&rna_FollowPathConstraint_offset_factor, 	&rna_FollowPathConstraint_target,
		-1, "offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Offset from the position corresponding to the time frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bFollowPathConstraint, offset), RawPropertyType(5), nullptr},
		FollowPathConstraint_offset_get, FollowPathConstraint_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FollowPathConstraint_offset_factor_ = {
		{&rna_FollowPathConstraint_forward_axis, 	&rna_FollowPathConstraint_offset,
		-1, "offset_factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Offset Factor",
		"Percentage value defining target position along length of curve",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bFollowPathConstraint, offset_fac), RawPropertyType(5), nullptr},
		FollowPathConstraint_offset_factor_get, FollowPathConstraint_offset_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.0099999998f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_FollowPathConstraint_forward_axis_items[7] = {
		{0, "FORWARD_X", 0, "X", ""	},
		{1, "FORWARD_Y", 0, "Y", ""	},
		{2, "FORWARD_Z", 0, "Z", ""	},
		{3, "TRACK_NEGATIVE_X", 0, "-X", ""	},
		{4, "TRACK_NEGATIVE_Y", 0, "-Y", ""	},
		{5, "TRACK_NEGATIVE_Z", 0, "-Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FollowPathConstraint_forward_axis_ = {
		{&rna_FollowPathConstraint_up_axis, 	&rna_FollowPathConstraint_offset_factor,
		-1, "forward_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Forward Axis",
		"Axis that points forward along the path",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bFollowPathConstraint, trackflag), RawPropertyType(1), nullptr},
		FollowPathConstraint_forward_axis_get, FollowPathConstraint_forward_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FollowPathConstraint_forward_axis_items, 6, 0
	};

	static const EnumPropertyItem rna_FollowPathConstraint_up_axis_items[4] = {
		{0, "UP_X", 0, "X", ""	},
		{1, "UP_Y", 0, "Y", ""	},
		{2, "UP_Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FollowPathConstraint_up_axis_ = {
		{&rna_FollowPathConstraint_use_curve_follow, 	&rna_FollowPathConstraint_forward_axis,
		-1, "up_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Up Axis",
		"Axis that points upward",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bFollowPathConstraint, upflag), RawPropertyType(1), nullptr},
		FollowPathConstraint_up_axis_get, FollowPathConstraint_up_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FollowPathConstraint_up_axis_items, 3, 0
	};

	rna_FollowPathConstraint_use_curve_follow_ = {
		{&rna_FollowPathConstraint_use_fixed_location, 	&rna_FollowPathConstraint_up_axis,
		-1, "use_curve_follow", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Follow Curve",
		"Object will follow the heading and banking of the curve",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowPathConstraint_use_curve_follow_get, FollowPathConstraint_use_curve_follow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FollowPathConstraint_use_fixed_location_ = {
		{&rna_FollowPathConstraint_use_curve_radius, 	&rna_FollowPathConstraint_use_curve_follow,
		-1, "use_fixed_location", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Fixed Position",
		"Object will stay locked to a single point somewhere along the length of the curve regardless of time",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowPathConstraint_use_fixed_location_get, FollowPathConstraint_use_fixed_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FollowPathConstraint_use_curve_radius_ = {
		{nullptr, 	&rna_FollowPathConstraint_use_fixed_location,
		-1, "use_curve_radius", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Curve Radius",
		"Object is scaled by the curve radius",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowPathConstraint_use_curve_radius_get, FollowPathConstraint_use_curve_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_FollowPathConstraint;
	srna->cont.properties = {&rna_FollowPathConstraint_target, &rna_FollowPathConstraint_use_curve_radius};
	srna->identifier = "FollowPathConstraint";
	srna->flag = 516;
	srna->name = "Follow Path Constraint";
	srna->description = "Lock motion to the target path";
	srna->translation_context = "*";
	srna->icon = 425;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Locked Track Constraint */
static FloatPropertyRNA rna_LockedTrackConstraint_head_tail_;
PropertyRNA &rna_LockedTrackConstraint_head_tail = reinterpret_cast<PropertyRNA &>(rna_LockedTrackConstraint_head_tail_);

static BoolPropertyRNA rna_LockedTrackConstraint_use_bbone_shape_;
PropertyRNA &rna_LockedTrackConstraint_use_bbone_shape = reinterpret_cast<PropertyRNA &>(rna_LockedTrackConstraint_use_bbone_shape_);

static PointerPropertyRNA rna_LockedTrackConstraint_target_;
PropertyRNA &rna_LockedTrackConstraint_target = reinterpret_cast<PropertyRNA &>(rna_LockedTrackConstraint_target_);

static StringPropertyRNA rna_LockedTrackConstraint_subtarget_;
PropertyRNA &rna_LockedTrackConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_LockedTrackConstraint_subtarget_);

static EnumPropertyRNA rna_LockedTrackConstraint_track_axis_;
PropertyRNA &rna_LockedTrackConstraint_track_axis = reinterpret_cast<PropertyRNA &>(rna_LockedTrackConstraint_track_axis_);

static EnumPropertyRNA rna_LockedTrackConstraint_lock_axis_;
PropertyRNA &rna_LockedTrackConstraint_lock_axis = reinterpret_cast<PropertyRNA &>(rna_LockedTrackConstraint_lock_axis_);

StructRNA *RNA_LockedTrackConstraint;
void register_struct_LockedTrackConstraint(BlenderRNA &brna)
{
	rna_LockedTrackConstraint_head_tail_ = {
		{&rna_LockedTrackConstraint_use_bbone_shape, 	nullptr,
		-1, "head_tail", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Head/Tail",
		"Target along length of bone: Head is 0, Tail is 1",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, headtail), RawPropertyType(5), nullptr},
		LockedTrackConstraint_head_tail_get, LockedTrackConstraint_head_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LockedTrackConstraint_use_bbone_shape_ = {
		{&rna_LockedTrackConstraint_target, 	&rna_LockedTrackConstraint_head_tail,
		-1, "use_bbone_shape", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Follow B-Bone",
		"Follow shape of B-Bone segments when calculating Head/Tail position",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LockedTrackConstraint_use_bbone_shape_get, LockedTrackConstraint_use_bbone_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LockedTrackConstraint_target_ = {
		{&rna_LockedTrackConstraint_subtarget, 	&rna_LockedTrackConstraint_use_bbone_shape,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LockedTrackConstraint_target_get, LockedTrackConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_LockedTrackConstraint_subtarget_ = {
		{&rna_LockedTrackConstraint_track_axis, 	&rna_LockedTrackConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LockedTrackConstraint_subtarget_get, LockedTrackConstraint_subtarget_length, LockedTrackConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_LockedTrackConstraint_track_axis_items[7] = {
		{0, "TRACK_X", 0, "X", ""	},
		{1, "TRACK_Y", 0, "Y", ""	},
		{2, "TRACK_Z", 0, "Z", ""	},
		{3, "TRACK_NEGATIVE_X", 0, "-X", ""	},
		{4, "TRACK_NEGATIVE_Y", 0, "-Y", ""	},
		{5, "TRACK_NEGATIVE_Z", 0, "-Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_LockedTrackConstraint_track_axis_ = {
		{&rna_LockedTrackConstraint_lock_axis, 	&rna_LockedTrackConstraint_subtarget,
		-1, "track_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Track Axis",
		"Axis that points to the target object",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bLockTrackConstraint, trackflag), RawPropertyType(0), nullptr},
		LockedTrackConstraint_track_axis_get, LockedTrackConstraint_track_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_LockedTrackConstraint_track_axis_items, 6, 0
	};

	static const EnumPropertyItem rna_LockedTrackConstraint_lock_axis_items[4] = {
		{0, "LOCK_X", 0, "X", ""	},
		{1, "LOCK_Y", 0, "Y", ""	},
		{2, "LOCK_Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_LockedTrackConstraint_lock_axis_ = {
		{nullptr, 	&rna_LockedTrackConstraint_track_axis,
		-1, "lock_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Locked Axis",
		"Axis that points upward",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bLockTrackConstraint, lockflag), RawPropertyType(0), nullptr},
		LockedTrackConstraint_lock_axis_get, LockedTrackConstraint_lock_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_LockedTrackConstraint_lock_axis_items, 3, 0
	};

	StructRNA *srna = RNA_LockedTrackConstraint;
	srna->cont.properties = {&rna_LockedTrackConstraint_head_tail, &rna_LockedTrackConstraint_lock_axis};
	srna->identifier = "LockedTrackConstraint";
	srna->flag = 516;
	srna->name = "Locked Track Constraint";
	srna->description = "Point toward the target along the track axis, while locking the other axis";
	srna->translation_context = "*";
	srna->icon = 428;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Action Constraint */
static PointerPropertyRNA rna_ActionConstraint_target_;
PropertyRNA &rna_ActionConstraint_target = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_target_);

static StringPropertyRNA rna_ActionConstraint_subtarget_;
PropertyRNA &rna_ActionConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_subtarget_);

static EnumPropertyRNA rna_ActionConstraint_mix_mode_;
PropertyRNA &rna_ActionConstraint_mix_mode = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_mix_mode_);

static EnumPropertyRNA rna_ActionConstraint_transform_channel_;
PropertyRNA &rna_ActionConstraint_transform_channel = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_transform_channel_);

static PointerPropertyRNA rna_ActionConstraint_action_;
PropertyRNA &rna_ActionConstraint_action = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_action_);

static IntPropertyRNA rna_ActionConstraint_action_slot_handle_;
PropertyRNA &rna_ActionConstraint_action_slot_handle = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_action_slot_handle_);

static StringPropertyRNA rna_ActionConstraint_last_slot_identifier_;
PropertyRNA &rna_ActionConstraint_last_slot_identifier = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_last_slot_identifier_);

static PointerPropertyRNA rna_ActionConstraint_action_slot_;
PropertyRNA &rna_ActionConstraint_action_slot = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_action_slot_);

static CollectionPropertyRNA rna_ActionConstraint_action_suitable_slots_;
PropertyRNA &rna_ActionConstraint_action_suitable_slots = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_action_suitable_slots_);

static BoolPropertyRNA rna_ActionConstraint_use_bone_object_action_;
PropertyRNA &rna_ActionConstraint_use_bone_object_action = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_use_bone_object_action_);

static IntPropertyRNA rna_ActionConstraint_frame_start_;
PropertyRNA &rna_ActionConstraint_frame_start = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_frame_start_);

static IntPropertyRNA rna_ActionConstraint_frame_end_;
PropertyRNA &rna_ActionConstraint_frame_end = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_frame_end_);

static FloatPropertyRNA rna_ActionConstraint_max_;
PropertyRNA &rna_ActionConstraint_max = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_max_);

static FloatPropertyRNA rna_ActionConstraint_min_;
PropertyRNA &rna_ActionConstraint_min = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_min_);

static FloatPropertyRNA rna_ActionConstraint_eval_time_;
PropertyRNA &rna_ActionConstraint_eval_time = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_eval_time_);

static BoolPropertyRNA rna_ActionConstraint_use_eval_time_;
PropertyRNA &rna_ActionConstraint_use_eval_time = reinterpret_cast<PropertyRNA &>(rna_ActionConstraint_use_eval_time_);

StructRNA *RNA_ActionConstraint;
void register_struct_ActionConstraint(BlenderRNA &brna)
{
	rna_ActionConstraint_target_ = {
		{&rna_ActionConstraint_subtarget, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionConstraint_target_get, ActionConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_ActionConstraint_subtarget_ = {
		{&rna_ActionConstraint_mix_mode, 	&rna_ActionConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionConstraint_subtarget_get, ActionConstraint_subtarget_length, ActionConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_ActionConstraint_mix_mode_items[10] = {
		{6, "REPLACE", 0, "Replace", "Replace the original transformation with the action channels"	},
		{0, "", 0, nullptr, nullptr	},
		{3, "BEFORE_FULL", 0, "Before Original (Full)", "Apply the action channels before the original transformation, as if applied to an imaginary parent in Full Inherit Scale mode. Will create shear when combining rotation and non-uniform scale."	},
		{2, "BEFORE", 0, "Before Original (Aligned)", "Apply the action channels before the original transformation, as if applied to an imaginary parent in Aligned Inherit Scale mode. This effectively uses Full for location and Split Channels for rotation and scale."	},
		{5, "BEFORE_SPLIT", 0, "Before Original (Split Channels)", "Apply the action channels before the original transformation, handling location, rotation and scale separately"	},
		{0, "", 0, nullptr, nullptr	},
		{0, "AFTER_FULL", 0, "After Original (Full)", "Apply the action channels after the original transformation, as if applied to an imaginary child in Full Inherit Scale mode. Will create shear when combining rotation and non-uniform scale."	},
		{1, "AFTER", 0, "After Original (Aligned)", "Apply the action channels after the original transformation, as if applied to an imaginary child in Aligned Inherit Scale mode. This effectively uses Full for location and Split Channels for rotation and scale."	},
		{4, "AFTER_SPLIT", 0, "After Original (Split Channels)", "Apply the action channels after the original transformation, handling location, rotation and scale separately"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ActionConstraint_mix_mode_ = {
		{&rna_ActionConstraint_transform_channel, 	&rna_ActionConstraint_subtarget,
		-1, "mix_mode", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Mix Mode",
		"Specify how existing transformations and the action channels are combined",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionConstraint_mix_mode_get, ActionConstraint_mix_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ActionConstraint_mix_mode_items, 9, 0
	};

	static const EnumPropertyItem rna_ActionConstraint_transform_channel_items[10] = {
		{20, "LOCATION_X", 0, "X Location", ""	},
		{21, "LOCATION_Y", 0, "Y Location", ""	},
		{22, "LOCATION_Z", 0, "Z Location", ""	},
		{0, "ROTATION_X", 0, "X Rotation", ""	},
		{1, "ROTATION_Y", 0, "Y Rotation", ""	},
		{2, "ROTATION_Z", 0, "Z Rotation", ""	},
		{10, "SCALE_X", 0, "X Scale", ""	},
		{11, "SCALE_Y", 0, "Y Scale", ""	},
		{12, "SCALE_Z", 0, "Z Scale", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ActionConstraint_transform_channel_ = {
		{&rna_ActionConstraint_action, 	&rna_ActionConstraint_mix_mode,
		-1, "transform_channel", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Transform Channel",
		"Transformation channel from the target that is used to key the Action",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bActionConstraint, type), RawPropertyType(1), nullptr},
		ActionConstraint_transform_channel_get, ActionConstraint_transform_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ActionConstraint_transform_channel_items, 9, 0
	};

	rna_ActionConstraint_action_ = {
		{&rna_ActionConstraint_action_slot_handle, 	&rna_ActionConstraint_transform_channel,
		-1, "action", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Action",
		"The constraining action",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionConstraint_action_get, ActionConstraint_action_set, nullptr, rna_Action_id_poll,RNA_Action
	};

	rna_ActionConstraint_action_slot_handle_ = {
		{&rna_ActionConstraint_last_slot_identifier, 	&rna_ActionConstraint_action,
		-1, "action_slot_handle", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Action Slot Handle",
		"A number that identifies which sub-set of the Action is considered to be for this Action Constraint",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 256507904, nullptr, nullptr, nullptr, nullptr, rna_ActionConstraint_action_slot_handle_override_diff, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionConstraint_action_slot_handle_get, ActionConstraint_action_slot_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ActionConstraint_last_slot_identifier_ = {
		{&rna_ActionConstraint_action_slot, 	&rna_ActionConstraint_action_slot_handle,
		-1, "last_slot_identifier", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Last Action Slot Identifier",
		"The identifier of the most recently assigned action slot. The slot identifies which sub-set of the Action is considered to be for this constraint, and its identifier is used to find the right slot when assigning an Action.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {258, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionConstraint_last_slot_identifier_get, ActionConstraint_last_slot_identifier_length, ActionConstraint_last_slot_identifier_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 258, ""
	};

	rna_ActionConstraint_action_slot_ = {
		{&rna_ActionConstraint_action_suitable_slots, 	&rna_ActionConstraint_last_slot_identifier,
		-1, "action_slot", 8388609, 5, 0, 0, 0, PropertyPathTemplateType(0), "Action Slot",
		"The slot identifies which sub-set of the Action is considered to be for this strip, and its name is used to find the right slot when assigning another Action",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 256507904, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionConstraint_action_slot_get, ActionConstraint_action_slot_set, nullptr, nullptr,RNA_ActionSlot
	};

	rna_ActionConstraint_action_suitable_slots_ = {
		{&rna_ActionConstraint_use_bone_object_action, 	&rna_ActionConstraint_action_slot,
		-1, "action_suitable_slots", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Action Slots",
		"The list of action slots suitable for this NLA strip",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionConstraint_action_suitable_slots_begin, ActionConstraint_action_suitable_slots_next, ActionConstraint_action_suitable_slots_end, ActionConstraint_action_suitable_slots_get, nullptr, ActionConstraint_action_suitable_slots_lookup_int, nullptr, nullptr, RNA_ActionSlot
	};

	rna_ActionConstraint_use_bone_object_action_ = {
		{&rna_ActionConstraint_frame_start, 	&rna_ActionConstraint_action_suitable_slots,
		-1, "use_bone_object_action", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object Action",
		"Bones only: apply the object\'s transformation channels of the action to the constrained bone, instead of bone\'s channels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionConstraint_use_bone_object_action_get, ActionConstraint_use_bone_object_action_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ActionConstraint_frame_start_ = {
		{&rna_ActionConstraint_frame_end, 	&rna_ActionConstraint_use_bone_object_action,
		-1, "frame_start", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Start Frame",
		"First frame of the Action to use",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bActionConstraint, start), RawPropertyType(0), nullptr},
		ActionConstraint_frame_start_get, ActionConstraint_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ActionConstraint_frame_end_ = {
		{&rna_ActionConstraint_max, 	&rna_ActionConstraint_frame_start,
		-1, "frame_end", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "End Frame",
		"Last frame of the Action to use",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bActionConstraint, end), RawPropertyType(0), nullptr},
		ActionConstraint_frame_end_get, ActionConstraint_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ActionConstraint_max_ = {
		{&rna_ActionConstraint_min, 	&rna_ActionConstraint_frame_end,
		-1, "max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum",
		"Maximum value for target channel range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bActionConstraint, max), RawPropertyType(5), nullptr},
		ActionConstraint_max_get, ActionConstraint_max_set, nullptr, nullptr, rna_ActionConstraint_minmax_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ActionConstraint_min_ = {
		{&rna_ActionConstraint_eval_time, 	&rna_ActionConstraint_max,
		-1, "min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum",
		"Minimum value for target channel range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bActionConstraint, min), RawPropertyType(5), nullptr},
		ActionConstraint_min_get, ActionConstraint_min_set, nullptr, nullptr, rna_ActionConstraint_minmax_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ActionConstraint_eval_time_ = {
		{&rna_ActionConstraint_use_eval_time, 	&rna_ActionConstraint_min,
		-1, "eval_time", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Evaluation Time",
		"Interpolates between Action Start and End frames",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bActionConstraint, eval_time), RawPropertyType(5), nullptr},
		ActionConstraint_eval_time_get, ActionConstraint_eval_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ActionConstraint_use_eval_time_ = {
		{nullptr, 	&rna_ActionConstraint_eval_time,
		-1, "use_eval_time", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Evaluation Time",
		"Interpolate between Action Start and End frames, with the Evaluation Time slider instead of the Target object/bone",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionConstraint_use_eval_time_get, ActionConstraint_use_eval_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ActionConstraint;
	srna->cont.properties = {&rna_ActionConstraint_target, &rna_ActionConstraint_use_eval_time};
	srna->identifier = "ActionConstraint";
	srna->flag = 516;
	srna->name = "Action Constraint";
	srna->description = "Map an action to the transform axes of a bone";
	srna->translation_context = "*";
	srna->icon = 417;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Copy Scale Constraint */
static PointerPropertyRNA rna_CopyScaleConstraint_target_;
PropertyRNA &rna_CopyScaleConstraint_target = reinterpret_cast<PropertyRNA &>(rna_CopyScaleConstraint_target_);

static StringPropertyRNA rna_CopyScaleConstraint_subtarget_;
PropertyRNA &rna_CopyScaleConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_CopyScaleConstraint_subtarget_);

static BoolPropertyRNA rna_CopyScaleConstraint_use_x_;
PropertyRNA &rna_CopyScaleConstraint_use_x = reinterpret_cast<PropertyRNA &>(rna_CopyScaleConstraint_use_x_);

static BoolPropertyRNA rna_CopyScaleConstraint_use_y_;
PropertyRNA &rna_CopyScaleConstraint_use_y = reinterpret_cast<PropertyRNA &>(rna_CopyScaleConstraint_use_y_);

static BoolPropertyRNA rna_CopyScaleConstraint_use_z_;
PropertyRNA &rna_CopyScaleConstraint_use_z = reinterpret_cast<PropertyRNA &>(rna_CopyScaleConstraint_use_z_);

static FloatPropertyRNA rna_CopyScaleConstraint_power_;
PropertyRNA &rna_CopyScaleConstraint_power = reinterpret_cast<PropertyRNA &>(rna_CopyScaleConstraint_power_);

static BoolPropertyRNA rna_CopyScaleConstraint_use_make_uniform_;
PropertyRNA &rna_CopyScaleConstraint_use_make_uniform = reinterpret_cast<PropertyRNA &>(rna_CopyScaleConstraint_use_make_uniform_);

static BoolPropertyRNA rna_CopyScaleConstraint_use_offset_;
PropertyRNA &rna_CopyScaleConstraint_use_offset = reinterpret_cast<PropertyRNA &>(rna_CopyScaleConstraint_use_offset_);

static BoolPropertyRNA rna_CopyScaleConstraint_use_add_;
PropertyRNA &rna_CopyScaleConstraint_use_add = reinterpret_cast<PropertyRNA &>(rna_CopyScaleConstraint_use_add_);

StructRNA *RNA_CopyScaleConstraint;
void register_struct_CopyScaleConstraint(BlenderRNA &brna)
{
	rna_CopyScaleConstraint_target_ = {
		{&rna_CopyScaleConstraint_subtarget, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyScaleConstraint_target_get, CopyScaleConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_CopyScaleConstraint_subtarget_ = {
		{&rna_CopyScaleConstraint_use_x, 	&rna_CopyScaleConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyScaleConstraint_subtarget_get, CopyScaleConstraint_subtarget_length, CopyScaleConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_CopyScaleConstraint_use_x_ = {
		{&rna_CopyScaleConstraint_use_y, 	&rna_CopyScaleConstraint_subtarget,
		-1, "use_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Copy X",
		"Copy the target\'s X scale",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyScaleConstraint_use_x_get, CopyScaleConstraint_use_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyScaleConstraint_use_y_ = {
		{&rna_CopyScaleConstraint_use_z, 	&rna_CopyScaleConstraint_use_x,
		-1, "use_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Copy Y",
		"Copy the target\'s Y scale",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyScaleConstraint_use_y_get, CopyScaleConstraint_use_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyScaleConstraint_use_z_ = {
		{&rna_CopyScaleConstraint_power, 	&rna_CopyScaleConstraint_use_y,
		-1, "use_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Copy Z",
		"Copy the target\'s Z scale",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyScaleConstraint_use_z_get, CopyScaleConstraint_use_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyScaleConstraint_power_ = {
		{&rna_CopyScaleConstraint_use_make_uniform, 	&rna_CopyScaleConstraint_use_z,
		-1, "power", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Power",
		"Raise the target\'s scale to the specified power",
		0, "Constraint",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSizeLikeConstraint, power), RawPropertyType(5), nullptr},
		CopyScaleConstraint_power_get, CopyScaleConstraint_power_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_CopyScaleConstraint_use_make_uniform_ = {
		{&rna_CopyScaleConstraint_use_offset, 	&rna_CopyScaleConstraint_power,
		-1, "use_make_uniform", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Make Uniform",
		"Redistribute the copied change in volume equally between the three axes of the owner",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyScaleConstraint_use_make_uniform_get, CopyScaleConstraint_use_make_uniform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyScaleConstraint_use_offset_ = {
		{&rna_CopyScaleConstraint_use_add, 	&rna_CopyScaleConstraint_use_make_uniform,
		-1, "use_offset", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Offset",
		"Combine original scale with copied scale",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyScaleConstraint_use_offset_get, CopyScaleConstraint_use_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyScaleConstraint_use_add_ = {
		{nullptr, 	&rna_CopyScaleConstraint_use_offset,
		-1, "use_add", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Additive",
		"Use addition instead of multiplication to combine scale (2.7 compatibility)",
		0, "Constraint",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyScaleConstraint_use_add_get, CopyScaleConstraint_use_add_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	StructRNA *srna = RNA_CopyScaleConstraint;
	srna->cont.properties = {&rna_CopyScaleConstraint_target, &rna_CopyScaleConstraint_use_add};
	srna->identifier = "CopyScaleConstraint";
	srna->flag = 516;
	srna->name = "Copy Scale Constraint";
	srna->description = "Copy the scale of the target";
	srna->translation_context = "*";
	srna->icon = 437;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Maintain Volume Constraint */
static EnumPropertyRNA rna_MaintainVolumeConstraint_free_axis_;
PropertyRNA &rna_MaintainVolumeConstraint_free_axis = reinterpret_cast<PropertyRNA &>(rna_MaintainVolumeConstraint_free_axis_);

static EnumPropertyRNA rna_MaintainVolumeConstraint_mode_;
PropertyRNA &rna_MaintainVolumeConstraint_mode = reinterpret_cast<PropertyRNA &>(rna_MaintainVolumeConstraint_mode_);

static FloatPropertyRNA rna_MaintainVolumeConstraint_volume_;
PropertyRNA &rna_MaintainVolumeConstraint_volume = reinterpret_cast<PropertyRNA &>(rna_MaintainVolumeConstraint_volume_);

StructRNA *RNA_MaintainVolumeConstraint;
void register_struct_MaintainVolumeConstraint(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_MaintainVolumeConstraint_free_axis_items[4] = {
		{0, "SAMEVOL_X", 0, "X", ""	},
		{1, "SAMEVOL_Y", 0, "Y", ""	},
		{2, "SAMEVOL_Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaintainVolumeConstraint_free_axis_ = {
		{&rna_MaintainVolumeConstraint_mode, 	nullptr,
		-1, "free_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Free Axis",
		"The free scaling axis of the object",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSameVolumeConstraint, free_axis), RawPropertyType(2), nullptr},
		MaintainVolumeConstraint_free_axis_get, MaintainVolumeConstraint_free_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaintainVolumeConstraint_free_axis_items, 3, 0
	};

	static const EnumPropertyItem rna_MaintainVolumeConstraint_mode_items[4] = {
		{0, "STRICT", 0, "Strict", "Volume is strictly preserved, overriding the scaling of non-free axes"	},
		{1, "UNIFORM", 0, "Uniform", "Volume is preserved when the object is scaled uniformly. Deviations from uniform scale on non-free axes are passed through."	},
		{2, "SINGLE_AXIS", 0, "Single Axis", "Volume is preserved when the object is scaled only on the free axis. Non-free axis scaling is passed through."	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaintainVolumeConstraint_mode_ = {
		{&rna_MaintainVolumeConstraint_volume, 	&rna_MaintainVolumeConstraint_free_axis,
		-1, "mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"The way the constraint treats original non-free axis scaling",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSameVolumeConstraint, mode), RawPropertyType(2), nullptr},
		MaintainVolumeConstraint_mode_get, MaintainVolumeConstraint_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaintainVolumeConstraint_mode_items, 3, 0
	};

	rna_MaintainVolumeConstraint_volume_ = {
		{nullptr, 	&rna_MaintainVolumeConstraint_mode,
		-1, "volume", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Volume",
		"Volume of the bone at rest",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSameVolumeConstraint, volume), RawPropertyType(5), nullptr},
		MaintainVolumeConstraint_volume_get, MaintainVolumeConstraint_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_MaintainVolumeConstraint;
	srna->cont.properties = {&rna_MaintainVolumeConstraint_free_axis, &rna_MaintainVolumeConstraint_volume};
	srna->identifier = "MaintainVolumeConstraint";
	srna->flag = 516;
	srna->name = "Maintain Volume Constraint";
	srna->description = "Maintain a constant volume along a single scaling axis";
	srna->translation_context = "*";
	srna->icon = 435;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Copy Location Constraint */
static FloatPropertyRNA rna_CopyLocationConstraint_head_tail_;
PropertyRNA &rna_CopyLocationConstraint_head_tail = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_head_tail_);

static BoolPropertyRNA rna_CopyLocationConstraint_use_bbone_shape_;
PropertyRNA &rna_CopyLocationConstraint_use_bbone_shape = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_use_bbone_shape_);

static PointerPropertyRNA rna_CopyLocationConstraint_target_;
PropertyRNA &rna_CopyLocationConstraint_target = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_target_);

static StringPropertyRNA rna_CopyLocationConstraint_subtarget_;
PropertyRNA &rna_CopyLocationConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_subtarget_);

static BoolPropertyRNA rna_CopyLocationConstraint_use_x_;
PropertyRNA &rna_CopyLocationConstraint_use_x = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_use_x_);

static BoolPropertyRNA rna_CopyLocationConstraint_use_y_;
PropertyRNA &rna_CopyLocationConstraint_use_y = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_use_y_);

static BoolPropertyRNA rna_CopyLocationConstraint_use_z_;
PropertyRNA &rna_CopyLocationConstraint_use_z = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_use_z_);

static BoolPropertyRNA rna_CopyLocationConstraint_invert_x_;
PropertyRNA &rna_CopyLocationConstraint_invert_x = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_invert_x_);

static BoolPropertyRNA rna_CopyLocationConstraint_invert_y_;
PropertyRNA &rna_CopyLocationConstraint_invert_y = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_invert_y_);

static BoolPropertyRNA rna_CopyLocationConstraint_invert_z_;
PropertyRNA &rna_CopyLocationConstraint_invert_z = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_invert_z_);

static BoolPropertyRNA rna_CopyLocationConstraint_use_offset_;
PropertyRNA &rna_CopyLocationConstraint_use_offset = reinterpret_cast<PropertyRNA &>(rna_CopyLocationConstraint_use_offset_);

StructRNA *RNA_CopyLocationConstraint;
void register_struct_CopyLocationConstraint(BlenderRNA &brna)
{
	rna_CopyLocationConstraint_head_tail_ = {
		{&rna_CopyLocationConstraint_use_bbone_shape, 	nullptr,
		-1, "head_tail", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Head/Tail",
		"Target along length of bone: Head is 0, Tail is 1",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, headtail), RawPropertyType(5), nullptr},
		CopyLocationConstraint_head_tail_get, CopyLocationConstraint_head_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CopyLocationConstraint_use_bbone_shape_ = {
		{&rna_CopyLocationConstraint_target, 	&rna_CopyLocationConstraint_head_tail,
		-1, "use_bbone_shape", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Follow B-Bone",
		"Follow shape of B-Bone segments when calculating Head/Tail position",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyLocationConstraint_use_bbone_shape_get, CopyLocationConstraint_use_bbone_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyLocationConstraint_target_ = {
		{&rna_CopyLocationConstraint_subtarget, 	&rna_CopyLocationConstraint_use_bbone_shape,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyLocationConstraint_target_get, CopyLocationConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_CopyLocationConstraint_subtarget_ = {
		{&rna_CopyLocationConstraint_use_x, 	&rna_CopyLocationConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyLocationConstraint_subtarget_get, CopyLocationConstraint_subtarget_length, CopyLocationConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_CopyLocationConstraint_use_x_ = {
		{&rna_CopyLocationConstraint_use_y, 	&rna_CopyLocationConstraint_subtarget,
		-1, "use_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Copy X",
		"Copy the target\'s X location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyLocationConstraint_use_x_get, CopyLocationConstraint_use_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyLocationConstraint_use_y_ = {
		{&rna_CopyLocationConstraint_use_z, 	&rna_CopyLocationConstraint_use_x,
		-1, "use_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Copy Y",
		"Copy the target\'s Y location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyLocationConstraint_use_y_get, CopyLocationConstraint_use_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyLocationConstraint_use_z_ = {
		{&rna_CopyLocationConstraint_invert_x, 	&rna_CopyLocationConstraint_use_y,
		-1, "use_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Copy Z",
		"Copy the target\'s Z location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyLocationConstraint_use_z_get, CopyLocationConstraint_use_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyLocationConstraint_invert_x_ = {
		{&rna_CopyLocationConstraint_invert_y, 	&rna_CopyLocationConstraint_use_z,
		-1, "invert_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Invert X",
		"Invert the X location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyLocationConstraint_invert_x_get, CopyLocationConstraint_invert_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyLocationConstraint_invert_y_ = {
		{&rna_CopyLocationConstraint_invert_z, 	&rna_CopyLocationConstraint_invert_x,
		-1, "invert_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Invert Y",
		"Invert the Y location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyLocationConstraint_invert_y_get, CopyLocationConstraint_invert_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyLocationConstraint_invert_z_ = {
		{&rna_CopyLocationConstraint_use_offset, 	&rna_CopyLocationConstraint_invert_y,
		-1, "invert_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Invert Z",
		"Invert the Z location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyLocationConstraint_invert_z_get, CopyLocationConstraint_invert_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyLocationConstraint_use_offset_ = {
		{nullptr, 	&rna_CopyLocationConstraint_invert_z,
		-1, "use_offset", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Offset",
		"Add original location into copied location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyLocationConstraint_use_offset_get, CopyLocationConstraint_use_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_CopyLocationConstraint;
	srna->cont.properties = {&rna_CopyLocationConstraint_head_tail, &rna_CopyLocationConstraint_use_offset};
	srna->identifier = "CopyLocationConstraint";
	srna->flag = 516;
	srna->name = "Copy Location Constraint";
	srna->description = "Copy the location of the target";
	srna->translation_context = "*";
	srna->icon = 429;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Copy Rotation Constraint */
static PointerPropertyRNA rna_CopyRotationConstraint_target_;
PropertyRNA &rna_CopyRotationConstraint_target = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_target_);

static StringPropertyRNA rna_CopyRotationConstraint_subtarget_;
PropertyRNA &rna_CopyRotationConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_subtarget_);

static BoolPropertyRNA rna_CopyRotationConstraint_use_x_;
PropertyRNA &rna_CopyRotationConstraint_use_x = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_use_x_);

static BoolPropertyRNA rna_CopyRotationConstraint_use_y_;
PropertyRNA &rna_CopyRotationConstraint_use_y = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_use_y_);

static BoolPropertyRNA rna_CopyRotationConstraint_use_z_;
PropertyRNA &rna_CopyRotationConstraint_use_z = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_use_z_);

static BoolPropertyRNA rna_CopyRotationConstraint_invert_x_;
PropertyRNA &rna_CopyRotationConstraint_invert_x = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_invert_x_);

static BoolPropertyRNA rna_CopyRotationConstraint_invert_y_;
PropertyRNA &rna_CopyRotationConstraint_invert_y = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_invert_y_);

static BoolPropertyRNA rna_CopyRotationConstraint_invert_z_;
PropertyRNA &rna_CopyRotationConstraint_invert_z = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_invert_z_);

static EnumPropertyRNA rna_CopyRotationConstraint_euler_order_;
PropertyRNA &rna_CopyRotationConstraint_euler_order = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_euler_order_);

static EnumPropertyRNA rna_CopyRotationConstraint_mix_mode_;
PropertyRNA &rna_CopyRotationConstraint_mix_mode = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_mix_mode_);

static BoolPropertyRNA rna_CopyRotationConstraint_use_offset_;
PropertyRNA &rna_CopyRotationConstraint_use_offset = reinterpret_cast<PropertyRNA &>(rna_CopyRotationConstraint_use_offset_);

StructRNA *RNA_CopyRotationConstraint;
void register_struct_CopyRotationConstraint(BlenderRNA &brna)
{
	rna_CopyRotationConstraint_target_ = {
		{&rna_CopyRotationConstraint_subtarget, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyRotationConstraint_target_get, CopyRotationConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_CopyRotationConstraint_subtarget_ = {
		{&rna_CopyRotationConstraint_use_x, 	&rna_CopyRotationConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyRotationConstraint_subtarget_get, CopyRotationConstraint_subtarget_length, CopyRotationConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_CopyRotationConstraint_use_x_ = {
		{&rna_CopyRotationConstraint_use_y, 	&rna_CopyRotationConstraint_subtarget,
		-1, "use_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Copy X",
		"Copy the target\'s X rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyRotationConstraint_use_x_get, CopyRotationConstraint_use_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyRotationConstraint_use_y_ = {
		{&rna_CopyRotationConstraint_use_z, 	&rna_CopyRotationConstraint_use_x,
		-1, "use_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Copy Y",
		"Copy the target\'s Y rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyRotationConstraint_use_y_get, CopyRotationConstraint_use_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyRotationConstraint_use_z_ = {
		{&rna_CopyRotationConstraint_invert_x, 	&rna_CopyRotationConstraint_use_y,
		-1, "use_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Copy Z",
		"Copy the target\'s Z rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyRotationConstraint_use_z_get, CopyRotationConstraint_use_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyRotationConstraint_invert_x_ = {
		{&rna_CopyRotationConstraint_invert_y, 	&rna_CopyRotationConstraint_use_z,
		-1, "invert_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Invert X",
		"Invert the X rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyRotationConstraint_invert_x_get, CopyRotationConstraint_invert_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyRotationConstraint_invert_y_ = {
		{&rna_CopyRotationConstraint_invert_z, 	&rna_CopyRotationConstraint_invert_x,
		-1, "invert_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Invert Y",
		"Invert the Y rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyRotationConstraint_invert_y_get, CopyRotationConstraint_invert_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyRotationConstraint_invert_z_ = {
		{&rna_CopyRotationConstraint_euler_order, 	&rna_CopyRotationConstraint_invert_y,
		-1, "invert_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Invert Z",
		"Invert the Z rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyRotationConstraint_invert_z_get, CopyRotationConstraint_invert_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_CopyRotationConstraint_euler_order_items[8] = {
		{0, "AUTO", 0, "Default", "Euler using the default rotation order"	},
		{1, "XYZ", 0, "XYZ Euler", "Euler using the XYZ rotation order"	},
		{2, "XZY", 0, "XZY Euler", "Euler using the XZY rotation order"	},
		{3, "YXZ", 0, "YXZ Euler", "Euler using the YXZ rotation order"	},
		{4, "YZX", 0, "YZX Euler", "Euler using the YZX rotation order"	},
		{5, "ZXY", 0, "ZXY Euler", "Euler using the ZXY rotation order"	},
		{6, "ZYX", 0, "ZYX Euler", "Euler using the ZYX rotation order"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CopyRotationConstraint_euler_order_ = {
		{&rna_CopyRotationConstraint_mix_mode, 	&rna_CopyRotationConstraint_invert_z,
		-1, "euler_order", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Euler Order",
		"Explicitly specify the euler rotation order",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bRotateLikeConstraint, euler_order), RawPropertyType(2), nullptr},
		CopyRotationConstraint_euler_order_get, CopyRotationConstraint_euler_order_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CopyRotationConstraint_euler_order_items, 7, 0
	};

	static const EnumPropertyItem rna_CopyRotationConstraint_mix_mode_items[6] = {
		{0, "REPLACE", 0, "Replace", "Replace the original rotation with copied"	},
		{2, "ADD", 0, "Add", "Add euler component values together"	},
		{3, "BEFORE", 0, "Before Original", "Apply copied rotation before original, as if the constraint target is a parent"	},
		{4, "AFTER", 0, "After Original", "Apply copied rotation after original, as if the constraint target is a child"	},
		{1, "OFFSET", 0, "Offset (Legacy)", "Combine rotations like the original Offset checkbox. Does not work well for multiple axis rotations."	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CopyRotationConstraint_mix_mode_ = {
		{&rna_CopyRotationConstraint_use_offset, 	&rna_CopyRotationConstraint_euler_order,
		-1, "mix_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mix Mode",
		"Specify how the copied and existing rotations are combined",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bRotateLikeConstraint, mix_mode), RawPropertyType(2), nullptr},
		CopyRotationConstraint_mix_mode_get, CopyRotationConstraint_mix_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CopyRotationConstraint_mix_mode_items, 5, 0
	};

	rna_CopyRotationConstraint_use_offset_ = {
		{nullptr, 	&rna_CopyRotationConstraint_mix_mode,
		-1, "use_offset", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Offset",
		"DEPRECATED: Add original rotation into copied rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyRotationConstraint_use_offset_get, CopyRotationConstraint_use_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_CopyRotationConstraint;
	srna->cont.properties = {&rna_CopyRotationConstraint_target, &rna_CopyRotationConstraint_use_offset};
	srna->identifier = "CopyRotationConstraint";
	srna->flag = 516;
	srna->name = "Copy Rotation Constraint";
	srna->description = "Copy the rotation of the target";
	srna->translation_context = "*";
	srna->icon = 433;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Copy Transforms Constraint */
static FloatPropertyRNA rna_CopyTransformsConstraint_head_tail_;
PropertyRNA &rna_CopyTransformsConstraint_head_tail = reinterpret_cast<PropertyRNA &>(rna_CopyTransformsConstraint_head_tail_);

static BoolPropertyRNA rna_CopyTransformsConstraint_use_bbone_shape_;
PropertyRNA &rna_CopyTransformsConstraint_use_bbone_shape = reinterpret_cast<PropertyRNA &>(rna_CopyTransformsConstraint_use_bbone_shape_);

static PointerPropertyRNA rna_CopyTransformsConstraint_target_;
PropertyRNA &rna_CopyTransformsConstraint_target = reinterpret_cast<PropertyRNA &>(rna_CopyTransformsConstraint_target_);

static StringPropertyRNA rna_CopyTransformsConstraint_subtarget_;
PropertyRNA &rna_CopyTransformsConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_CopyTransformsConstraint_subtarget_);

static BoolPropertyRNA rna_CopyTransformsConstraint_remove_target_shear_;
PropertyRNA &rna_CopyTransformsConstraint_remove_target_shear = reinterpret_cast<PropertyRNA &>(rna_CopyTransformsConstraint_remove_target_shear_);

static EnumPropertyRNA rna_CopyTransformsConstraint_mix_mode_;
PropertyRNA &rna_CopyTransformsConstraint_mix_mode = reinterpret_cast<PropertyRNA &>(rna_CopyTransformsConstraint_mix_mode_);

StructRNA *RNA_CopyTransformsConstraint;
void register_struct_CopyTransformsConstraint(BlenderRNA &brna)
{
	rna_CopyTransformsConstraint_head_tail_ = {
		{&rna_CopyTransformsConstraint_use_bbone_shape, 	nullptr,
		-1, "head_tail", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Head/Tail",
		"Target along length of bone: Head is 0, Tail is 1",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, headtail), RawPropertyType(5), nullptr},
		CopyTransformsConstraint_head_tail_get, CopyTransformsConstraint_head_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CopyTransformsConstraint_use_bbone_shape_ = {
		{&rna_CopyTransformsConstraint_target, 	&rna_CopyTransformsConstraint_head_tail,
		-1, "use_bbone_shape", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Follow B-Bone",
		"Follow shape of B-Bone segments when calculating Head/Tail position",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyTransformsConstraint_use_bbone_shape_get, CopyTransformsConstraint_use_bbone_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CopyTransformsConstraint_target_ = {
		{&rna_CopyTransformsConstraint_subtarget, 	&rna_CopyTransformsConstraint_use_bbone_shape,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyTransformsConstraint_target_get, CopyTransformsConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_CopyTransformsConstraint_subtarget_ = {
		{&rna_CopyTransformsConstraint_remove_target_shear, 	&rna_CopyTransformsConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyTransformsConstraint_subtarget_get, CopyTransformsConstraint_subtarget_length, CopyTransformsConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_CopyTransformsConstraint_remove_target_shear_ = {
		{&rna_CopyTransformsConstraint_mix_mode, 	&rna_CopyTransformsConstraint_subtarget,
		-1, "remove_target_shear", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Remove Target Shear",
		"Remove shear from the target transformation before combining",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CopyTransformsConstraint_remove_target_shear_get, CopyTransformsConstraint_remove_target_shear_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_CopyTransformsConstraint_mix_mode_items[10] = {
		{0, "REPLACE", 0, "Replace", "Replace the original transformation with copied"	},
		{0, "", 0, nullptr, nullptr	},
		{5, "BEFORE_FULL", 0, "Before Original (Full)", "Apply copied transformation before original, using simple matrix multiplication as if the constraint target is a parent in Full Inherit Scale mode. Will create shear when combining rotation and non-uniform scale."	},
		{1, "BEFORE", 0, "Before Original (Aligned)", "Apply copied transformation before original, as if the constraint target is a parent in Aligned Inherit Scale mode. This effectively uses Full for location and Split Channels for rotation and scale."	},
		{3, "BEFORE_SPLIT", 0, "Before Original (Split Channels)", "Apply copied transformation before original, handling location, rotation and scale separately, similar to a sequence of three Copy constraints"	},
		{0, "", 0, nullptr, nullptr	},
		{6, "AFTER_FULL", 0, "After Original (Full)", "Apply copied transformation after original, using simple matrix multiplication as if the constraint target is a child in Full Inherit Scale mode. Will create shear when combining rotation and non-uniform scale."	},
		{2, "AFTER", 0, "After Original (Aligned)", "Apply copied transformation after original, as if the constraint target is a child in Aligned Inherit Scale mode. This effectively uses Full for location and Split Channels for rotation and scale."	},
		{4, "AFTER_SPLIT", 0, "After Original (Split Channels)", "Apply copied transformation after original, handling location, rotation and scale separately, similar to a sequence of three Copy constraints"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CopyTransformsConstraint_mix_mode_ = {
		{nullptr, 	&rna_CopyTransformsConstraint_remove_target_shear,
		-1, "mix_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mix Mode",
		"Specify how the copied and existing transformations are combined",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransLikeConstraint, mix_mode), RawPropertyType(2), nullptr},
		CopyTransformsConstraint_mix_mode_get, CopyTransformsConstraint_mix_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CopyTransformsConstraint_mix_mode_items, 9, 0
	};

	StructRNA *srna = RNA_CopyTransformsConstraint;
	srna->cont.properties = {&rna_CopyTransformsConstraint_head_tail, &rna_CopyTransformsConstraint_mix_mode};
	srna->identifier = "CopyTransformsConstraint";
	srna->flag = 516;
	srna->name = "Copy Transforms Constraint";
	srna->description = "Copy all the transforms of the target";
	srna->translation_context = "*";
	srna->icon = 444;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Floor Constraint */
static PointerPropertyRNA rna_FloorConstraint_target_;
PropertyRNA &rna_FloorConstraint_target = reinterpret_cast<PropertyRNA &>(rna_FloorConstraint_target_);

static StringPropertyRNA rna_FloorConstraint_subtarget_;
PropertyRNA &rna_FloorConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_FloorConstraint_subtarget_);

static EnumPropertyRNA rna_FloorConstraint_floor_location_;
PropertyRNA &rna_FloorConstraint_floor_location = reinterpret_cast<PropertyRNA &>(rna_FloorConstraint_floor_location_);

static BoolPropertyRNA rna_FloorConstraint_use_rotation_;
PropertyRNA &rna_FloorConstraint_use_rotation = reinterpret_cast<PropertyRNA &>(rna_FloorConstraint_use_rotation_);

static FloatPropertyRNA rna_FloorConstraint_offset_;
PropertyRNA &rna_FloorConstraint_offset = reinterpret_cast<PropertyRNA &>(rna_FloorConstraint_offset_);

StructRNA *RNA_FloorConstraint;
void register_struct_FloorConstraint(BlenderRNA &brna)
{
	rna_FloorConstraint_target_ = {
		{&rna_FloorConstraint_subtarget, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloorConstraint_target_get, FloorConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_FloorConstraint_subtarget_ = {
		{&rna_FloorConstraint_floor_location, 	&rna_FloorConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloorConstraint_subtarget_get, FloorConstraint_subtarget_length, FloorConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_FloorConstraint_floor_location_items[7] = {
		{0, "FLOOR_X", 0, "X", ""	},
		{1, "FLOOR_Y", 0, "Y", ""	},
		{2, "FLOOR_Z", 0, "Z", ""	},
		{3, "FLOOR_NEGATIVE_X", 0, "-X", ""	},
		{4, "FLOOR_NEGATIVE_Y", 0, "-Y", ""	},
		{5, "FLOOR_NEGATIVE_Z", 0, "-Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FloorConstraint_floor_location_ = {
		{&rna_FloorConstraint_use_rotation, 	&rna_FloorConstraint_subtarget,
		-1, "floor_location", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Floor Location",
		"Location of target that object will not pass through",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bMinMaxConstraint, minmaxflag), RawPropertyType(0), nullptr},
		FloorConstraint_floor_location_get, FloorConstraint_floor_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FloorConstraint_floor_location_items, 6, 0
	};

	rna_FloorConstraint_use_rotation_ = {
		{&rna_FloorConstraint_offset, 	&rna_FloorConstraint_floor_location,
		-1, "use_rotation", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Rotation",
		"Use the target\'s rotation to determine floor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloorConstraint_use_rotation_get, FloorConstraint_use_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FloorConstraint_offset_ = {
		{nullptr, 	&rna_FloorConstraint_use_rotation,
		-1, "offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Offset of floor from object origin",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bMinMaxConstraint, offset), RawPropertyType(5), nullptr},
		FloorConstraint_offset_get, FloorConstraint_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_FloorConstraint;
	srna->cont.properties = {&rna_FloorConstraint_target, &rna_FloorConstraint_offset};
	srna->identifier = "FloorConstraint";
	srna->flag = 516;
	srna->name = "Floor Constraint";
	srna->description = "Use the target object for location limitation";
	srna->translation_context = "*";
	srna->icon = 424;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Track To Constraint */
static FloatPropertyRNA rna_TrackToConstraint_head_tail_;
PropertyRNA &rna_TrackToConstraint_head_tail = reinterpret_cast<PropertyRNA &>(rna_TrackToConstraint_head_tail_);

static BoolPropertyRNA rna_TrackToConstraint_use_bbone_shape_;
PropertyRNA &rna_TrackToConstraint_use_bbone_shape = reinterpret_cast<PropertyRNA &>(rna_TrackToConstraint_use_bbone_shape_);

static PointerPropertyRNA rna_TrackToConstraint_target_;
PropertyRNA &rna_TrackToConstraint_target = reinterpret_cast<PropertyRNA &>(rna_TrackToConstraint_target_);

static StringPropertyRNA rna_TrackToConstraint_subtarget_;
PropertyRNA &rna_TrackToConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_TrackToConstraint_subtarget_);

static EnumPropertyRNA rna_TrackToConstraint_track_axis_;
PropertyRNA &rna_TrackToConstraint_track_axis = reinterpret_cast<PropertyRNA &>(rna_TrackToConstraint_track_axis_);

static EnumPropertyRNA rna_TrackToConstraint_up_axis_;
PropertyRNA &rna_TrackToConstraint_up_axis = reinterpret_cast<PropertyRNA &>(rna_TrackToConstraint_up_axis_);

static BoolPropertyRNA rna_TrackToConstraint_use_target_z_;
PropertyRNA &rna_TrackToConstraint_use_target_z = reinterpret_cast<PropertyRNA &>(rna_TrackToConstraint_use_target_z_);

StructRNA *RNA_TrackToConstraint;
void register_struct_TrackToConstraint(BlenderRNA &brna)
{
	rna_TrackToConstraint_head_tail_ = {
		{&rna_TrackToConstraint_use_bbone_shape, 	nullptr,
		-1, "head_tail", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Head/Tail",
		"Target along length of bone: Head is 0, Tail is 1",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, headtail), RawPropertyType(5), nullptr},
		TrackToConstraint_head_tail_get, TrackToConstraint_head_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TrackToConstraint_use_bbone_shape_ = {
		{&rna_TrackToConstraint_target, 	&rna_TrackToConstraint_head_tail,
		-1, "use_bbone_shape", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Follow B-Bone",
		"Follow shape of B-Bone segments when calculating Head/Tail position",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TrackToConstraint_use_bbone_shape_get, TrackToConstraint_use_bbone_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TrackToConstraint_target_ = {
		{&rna_TrackToConstraint_subtarget, 	&rna_TrackToConstraint_use_bbone_shape,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TrackToConstraint_target_get, TrackToConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_TrackToConstraint_subtarget_ = {
		{&rna_TrackToConstraint_track_axis, 	&rna_TrackToConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TrackToConstraint_subtarget_get, TrackToConstraint_subtarget_length, TrackToConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_TrackToConstraint_track_axis_items[7] = {
		{0, "TRACK_X", 0, "X", ""	},
		{1, "TRACK_Y", 0, "Y", ""	},
		{2, "TRACK_Z", 0, "Z", ""	},
		{3, "TRACK_NEGATIVE_X", 0, "-X", ""	},
		{4, "TRACK_NEGATIVE_Y", 0, "-Y", ""	},
		{5, "TRACK_NEGATIVE_Z", 0, "-Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TrackToConstraint_track_axis_ = {
		{&rna_TrackToConstraint_up_axis, 	&rna_TrackToConstraint_subtarget,
		-1, "track_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Track Axis",
		"Axis that points to the target object",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTrackToConstraint, reserved1), RawPropertyType(0), nullptr},
		TrackToConstraint_track_axis_get, TrackToConstraint_track_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TrackToConstraint_track_axis_items, 6, 0
	};

	static const EnumPropertyItem rna_TrackToConstraint_up_axis_items[4] = {
		{0, "UP_X", 0, "X", ""	},
		{1, "UP_Y", 0, "Y", ""	},
		{2, "UP_Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TrackToConstraint_up_axis_ = {
		{&rna_TrackToConstraint_use_target_z, 	&rna_TrackToConstraint_track_axis,
		-1, "up_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Up Axis",
		"Axis that points upward",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTrackToConstraint, reserved2), RawPropertyType(0), nullptr},
		TrackToConstraint_up_axis_get, TrackToConstraint_up_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TrackToConstraint_up_axis_items, 3, 1
	};

	rna_TrackToConstraint_use_target_z_ = {
		{nullptr, 	&rna_TrackToConstraint_up_axis,
		-1, "use_target_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target Z",
		"Target\'s Z axis, not World Z axis, will constrain the Up direction",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TrackToConstraint_use_target_z_get, TrackToConstraint_use_target_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_TrackToConstraint;
	srna->cont.properties = {&rna_TrackToConstraint_head_tail, &rna_TrackToConstraint_use_target_z};
	srna->identifier = "TrackToConstraint";
	srna->flag = 516;
	srna->name = "Track To Constraint";
	srna->description = "Aim the constrained object toward the target";
	srna->translation_context = "*";
	srna->icon = 441;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Kinematic Constraint */
static PointerPropertyRNA rna_KinematicConstraint_target_;
PropertyRNA &rna_KinematicConstraint_target = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_target_);

static StringPropertyRNA rna_KinematicConstraint_subtarget_;
PropertyRNA &rna_KinematicConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_subtarget_);

static IntPropertyRNA rna_KinematicConstraint_iterations_;
PropertyRNA &rna_KinematicConstraint_iterations = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_iterations_);

static PointerPropertyRNA rna_KinematicConstraint_pole_target_;
PropertyRNA &rna_KinematicConstraint_pole_target = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_pole_target_);

static StringPropertyRNA rna_KinematicConstraint_pole_subtarget_;
PropertyRNA &rna_KinematicConstraint_pole_subtarget = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_pole_subtarget_);

static FloatPropertyRNA rna_KinematicConstraint_pole_angle_;
PropertyRNA &rna_KinematicConstraint_pole_angle = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_pole_angle_);

static FloatPropertyRNA rna_KinematicConstraint_weight_;
PropertyRNA &rna_KinematicConstraint_weight = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_weight_);

static FloatPropertyRNA rna_KinematicConstraint_orient_weight_;
PropertyRNA &rna_KinematicConstraint_orient_weight = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_orient_weight_);

static IntPropertyRNA rna_KinematicConstraint_chain_count_;
PropertyRNA &rna_KinematicConstraint_chain_count = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_chain_count_);

static BoolPropertyRNA rna_KinematicConstraint_use_tail_;
PropertyRNA &rna_KinematicConstraint_use_tail = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_use_tail_);

static EnumPropertyRNA rna_KinematicConstraint_reference_axis_;
PropertyRNA &rna_KinematicConstraint_reference_axis = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_reference_axis_);

static BoolPropertyRNA rna_KinematicConstraint_use_location_;
PropertyRNA &rna_KinematicConstraint_use_location = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_use_location_);

static BoolPropertyRNA rna_KinematicConstraint_lock_location_x_;
PropertyRNA &rna_KinematicConstraint_lock_location_x = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_lock_location_x_);

static BoolPropertyRNA rna_KinematicConstraint_lock_location_y_;
PropertyRNA &rna_KinematicConstraint_lock_location_y = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_lock_location_y_);

static BoolPropertyRNA rna_KinematicConstraint_lock_location_z_;
PropertyRNA &rna_KinematicConstraint_lock_location_z = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_lock_location_z_);

static BoolPropertyRNA rna_KinematicConstraint_use_rotation_;
PropertyRNA &rna_KinematicConstraint_use_rotation = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_use_rotation_);

static BoolPropertyRNA rna_KinematicConstraint_lock_rotation_x_;
PropertyRNA &rna_KinematicConstraint_lock_rotation_x = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_lock_rotation_x_);

static BoolPropertyRNA rna_KinematicConstraint_lock_rotation_y_;
PropertyRNA &rna_KinematicConstraint_lock_rotation_y = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_lock_rotation_y_);

static BoolPropertyRNA rna_KinematicConstraint_lock_rotation_z_;
PropertyRNA &rna_KinematicConstraint_lock_rotation_z = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_lock_rotation_z_);

static BoolPropertyRNA rna_KinematicConstraint_use_stretch_;
PropertyRNA &rna_KinematicConstraint_use_stretch = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_use_stretch_);

static EnumPropertyRNA rna_KinematicConstraint_ik_type_;
PropertyRNA &rna_KinematicConstraint_ik_type = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_ik_type_);

static EnumPropertyRNA rna_KinematicConstraint_limit_mode_;
PropertyRNA &rna_KinematicConstraint_limit_mode = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_limit_mode_);

static FloatPropertyRNA rna_KinematicConstraint_distance_;
PropertyRNA &rna_KinematicConstraint_distance = reinterpret_cast<PropertyRNA &>(rna_KinematicConstraint_distance_);

StructRNA *RNA_KinematicConstraint;
void register_struct_KinematicConstraint(BlenderRNA &brna)
{
	rna_KinematicConstraint_target_ = {
		{&rna_KinematicConstraint_subtarget, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_target_get, KinematicConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_KinematicConstraint_subtarget_ = {
		{&rna_KinematicConstraint_iterations, 	&rna_KinematicConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_subtarget_get, KinematicConstraint_subtarget_length, KinematicConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_KinematicConstraint_iterations_ = {
		{&rna_KinematicConstraint_pole_target, 	&rna_KinematicConstraint_subtarget,
		-1, "iterations", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Iterations",
		"Maximum number of solving iterations",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bKinematicConstraint, iterations), RawPropertyType(1), nullptr},
		KinematicConstraint_iterations_get, KinematicConstraint_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, 10000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_KinematicConstraint_pole_target_ = {
		{&rna_KinematicConstraint_pole_subtarget, 	&rna_KinematicConstraint_iterations,
		-1, "pole_target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Pole Target",
		"Object for pole rotation",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_pole_target_get, KinematicConstraint_pole_target_set, nullptr, nullptr,RNA_Object
	};

	rna_KinematicConstraint_pole_subtarget_ = {
		{&rna_KinematicConstraint_pole_angle, 	&rna_KinematicConstraint_pole_target,
		-1, "pole_subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Pole Sub-Target",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_pole_subtarget_get, KinematicConstraint_pole_subtarget_length, KinematicConstraint_pole_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_KinematicConstraint_pole_angle_ = {
		{&rna_KinematicConstraint_weight, 	&rna_KinematicConstraint_pole_subtarget,
		-1, "pole_angle", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Pole Angle",
		"Pole rotation offset",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bKinematicConstraint, poleangle), RawPropertyType(5), nullptr},
		KinematicConstraint_pole_angle_get, KinematicConstraint_pole_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -3.1415927410f, 3.1415927410f, 10.0f, 4, nullptr, nullptr, 0.0f, nullptr
	};

	rna_KinematicConstraint_weight_ = {
		{&rna_KinematicConstraint_orient_weight, 	&rna_KinematicConstraint_pole_angle,
		-1, "weight", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"For Tree-IK: Weight of position control for this target",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bKinematicConstraint, weight), RawPropertyType(5), nullptr},
		KinematicConstraint_weight_get, KinematicConstraint_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_KinematicConstraint_orient_weight_ = {
		{&rna_KinematicConstraint_chain_count, 	&rna_KinematicConstraint_weight,
		-1, "orient_weight", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Orientation Weight",
		"For Tree-IK: Weight of orientation control for this target",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bKinematicConstraint, orientweight), RawPropertyType(5), nullptr},
		KinematicConstraint_orient_weight_get, KinematicConstraint_orient_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_KinematicConstraint_chain_count_ = {
		{&rna_KinematicConstraint_use_tail, 	&rna_KinematicConstraint_orient_weight,
		-1, "chain_count", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Chain Length",
		"How many bones are included in the IK effect - 0 uses all bones",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bKinematicConstraint, rootbone), RawPropertyType(1), nullptr},
		KinematicConstraint_chain_count_get, KinematicConstraint_chain_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, nullptr, nullptr, 0, nullptr
	};

	rna_KinematicConstraint_use_tail_ = {
		{&rna_KinematicConstraint_reference_axis, 	&rna_KinematicConstraint_chain_count,
		-1, "use_tail", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Tail",
		"Include bone\'s tail as last element in chain",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_use_tail_get, KinematicConstraint_use_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_KinematicConstraint_reference_axis_items[3] = {
		{0, "BONE", 0, "Bone", ""	},
		{16384, "TARGET", 0, "Target", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_KinematicConstraint_reference_axis_ = {
		{&rna_KinematicConstraint_use_location, 	&rna_KinematicConstraint_use_tail,
		-1, "reference_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Axis Reference",
		"Constraint axis Lock options relative to Bone or Target reference",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bKinematicConstraint, flag), RawPropertyType(1), nullptr},
		KinematicConstraint_reference_axis_get, KinematicConstraint_reference_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_KinematicConstraint_reference_axis_items, 2, 0
	};

	rna_KinematicConstraint_use_location_ = {
		{&rna_KinematicConstraint_lock_location_x, 	&rna_KinematicConstraint_reference_axis,
		-1, "use_location", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Position",
		"Chain follows position of target",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_use_location_get, KinematicConstraint_use_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KinematicConstraint_lock_location_x_ = {
		{&rna_KinematicConstraint_lock_location_y, 	&rna_KinematicConstraint_use_location,
		-1, "lock_location_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock X Pos",
		"Constraint position along X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_lock_location_x_get, KinematicConstraint_lock_location_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_KinematicConstraint_lock_location_y_ = {
		{&rna_KinematicConstraint_lock_location_z, 	&rna_KinematicConstraint_lock_location_x,
		-1, "lock_location_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Y Pos",
		"Constraint position along Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_lock_location_y_get, KinematicConstraint_lock_location_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_KinematicConstraint_lock_location_z_ = {
		{&rna_KinematicConstraint_use_rotation, 	&rna_KinematicConstraint_lock_location_y,
		-1, "lock_location_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Z Pos",
		"Constraint position along Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_lock_location_z_get, KinematicConstraint_lock_location_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_KinematicConstraint_use_rotation_ = {
		{&rna_KinematicConstraint_lock_rotation_x, 	&rna_KinematicConstraint_lock_location_z,
		-1, "use_rotation", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Rotation",
		"Chain follows rotation of target",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_use_rotation_get, KinematicConstraint_use_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KinematicConstraint_lock_rotation_x_ = {
		{&rna_KinematicConstraint_lock_rotation_y, 	&rna_KinematicConstraint_use_rotation,
		-1, "lock_rotation_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock X Rotation",
		"Constraint rotation along X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_lock_rotation_x_get, KinematicConstraint_lock_rotation_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_KinematicConstraint_lock_rotation_y_ = {
		{&rna_KinematicConstraint_lock_rotation_z, 	&rna_KinematicConstraint_lock_rotation_x,
		-1, "lock_rotation_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Y Rotation",
		"Constraint rotation along Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_lock_rotation_y_get, KinematicConstraint_lock_rotation_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_KinematicConstraint_lock_rotation_z_ = {
		{&rna_KinematicConstraint_use_stretch, 	&rna_KinematicConstraint_lock_rotation_y,
		-1, "lock_rotation_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Lock Z Rotation",
		"Constraint rotation along Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 101974016, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_lock_rotation_z_get, KinematicConstraint_lock_rotation_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_KinematicConstraint_use_stretch_ = {
		{&rna_KinematicConstraint_ik_type, 	&rna_KinematicConstraint_lock_rotation_z,
		-1, "use_stretch", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Stretch",
		"Enable IK Stretching",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_use_stretch_get, KinematicConstraint_use_stretch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_KinematicConstraint_ik_type_items[3] = {
		{0, "COPY_POSE", 0, "Copy Pose", ""	},
		{1, "DISTANCE", 0, "Distance", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_KinematicConstraint_ik_type_ = {
		{&rna_KinematicConstraint_limit_mode, 	&rna_KinematicConstraint_use_stretch,
		-1, "ik_type", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "IK Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KinematicConstraint_ik_type_get, KinematicConstraint_ik_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_KinematicConstraint_ik_type_items, 2, 0
	};

	static const EnumPropertyItem rna_KinematicConstraint_limit_mode_items[4] = {
		{0, "LIMITDIST_INSIDE", 0, "Inside", "The object is constrained inside a virtual sphere around the target object, with a radius defined by the limit distance"	},
		{1, "LIMITDIST_OUTSIDE", 0, "Outside", "The object is constrained outside a virtual sphere around the target object, with a radius defined by the limit distance"	},
		{2, "LIMITDIST_ONSURFACE", 0, "On Surface", "The object is constrained on the surface of a virtual sphere around the target object, with a radius defined by the limit distance"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_KinematicConstraint_limit_mode_ = {
		{&rna_KinematicConstraint_distance, 	&rna_KinematicConstraint_ik_type,
		-1, "limit_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Limit Mode",
		"Distances in relation to sphere of influence to allow",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bKinematicConstraint, mode), RawPropertyType(1), nullptr},
		KinematicConstraint_limit_mode_get, KinematicConstraint_limit_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_KinematicConstraint_limit_mode_items, 3, 0
	};

	rna_KinematicConstraint_distance_ = {
		{nullptr, 	&rna_KinematicConstraint_limit_mode,
		-1, "distance", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Distance",
		"Radius of limiting sphere",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bKinematicConstraint, dist), RawPropertyType(5), nullptr},
		KinematicConstraint_distance_get, KinematicConstraint_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_KinematicConstraint;
	srna->cont.properties = {&rna_KinematicConstraint_target, &rna_KinematicConstraint_distance};
	srna->identifier = "KinematicConstraint";
	srna->flag = 516;
	srna->name = "Kinematic Constraint";
	srna->description = "Inverse Kinematics";
	srna->translation_context = "*";
	srna->icon = 427;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Clamp To Constraint */
static PointerPropertyRNA rna_ClampToConstraint_target_;
PropertyRNA &rna_ClampToConstraint_target = reinterpret_cast<PropertyRNA &>(rna_ClampToConstraint_target_);

static EnumPropertyRNA rna_ClampToConstraint_main_axis_;
PropertyRNA &rna_ClampToConstraint_main_axis = reinterpret_cast<PropertyRNA &>(rna_ClampToConstraint_main_axis_);

static BoolPropertyRNA rna_ClampToConstraint_use_cyclic_;
PropertyRNA &rna_ClampToConstraint_use_cyclic = reinterpret_cast<PropertyRNA &>(rna_ClampToConstraint_use_cyclic_);

StructRNA *RNA_ClampToConstraint;
void register_struct_ClampToConstraint(BlenderRNA &brna)
{
	rna_ClampToConstraint_target_ = {
		{&rna_ClampToConstraint_main_axis, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target Object (Curves only)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClampToConstraint_target_get, ClampToConstraint_target_set, nullptr, rna_Curve_object_poll,RNA_Object
	};

	static const EnumPropertyItem rna_ClampToConstraint_main_axis_items[5] = {
		{0, "CLAMPTO_AUTO", 0, "Auto", ""	},
		{1, "CLAMPTO_X", 0, "X", ""	},
		{2, "CLAMPTO_Y", 0, "Y", ""	},
		{3, "CLAMPTO_Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ClampToConstraint_main_axis_ = {
		{&rna_ClampToConstraint_use_cyclic, 	&rna_ClampToConstraint_target,
		-1, "main_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Main Axis",
		"Main axis of movement",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bClampToConstraint, flag), RawPropertyType(0), nullptr},
		ClampToConstraint_main_axis_get, ClampToConstraint_main_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ClampToConstraint_main_axis_items, 4, 0
	};

	rna_ClampToConstraint_use_cyclic_ = {
		{nullptr, 	&rna_ClampToConstraint_main_axis,
		-1, "use_cyclic", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Cyclic",
		"Treat curve as cyclic curve (no clamping to curve bounding box)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ClampToConstraint_use_cyclic_get, ClampToConstraint_use_cyclic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ClampToConstraint;
	srna->cont.properties = {&rna_ClampToConstraint_target, &rna_ClampToConstraint_use_cyclic};
	srna->identifier = "ClampToConstraint";
	srna->flag = 516;
	srna->name = "Clamp To Constraint";
	srna->description = "Constrain an object\'s location to the nearest point along the target path";
	srna->translation_context = "*";
	srna->icon = 422;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Limit Distance Constraint */
static FloatPropertyRNA rna_LimitDistanceConstraint_head_tail_;
PropertyRNA &rna_LimitDistanceConstraint_head_tail = reinterpret_cast<PropertyRNA &>(rna_LimitDistanceConstraint_head_tail_);

static BoolPropertyRNA rna_LimitDistanceConstraint_use_bbone_shape_;
PropertyRNA &rna_LimitDistanceConstraint_use_bbone_shape = reinterpret_cast<PropertyRNA &>(rna_LimitDistanceConstraint_use_bbone_shape_);

static PointerPropertyRNA rna_LimitDistanceConstraint_target_;
PropertyRNA &rna_LimitDistanceConstraint_target = reinterpret_cast<PropertyRNA &>(rna_LimitDistanceConstraint_target_);

static StringPropertyRNA rna_LimitDistanceConstraint_subtarget_;
PropertyRNA &rna_LimitDistanceConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_LimitDistanceConstraint_subtarget_);

static FloatPropertyRNA rna_LimitDistanceConstraint_distance_;
PropertyRNA &rna_LimitDistanceConstraint_distance = reinterpret_cast<PropertyRNA &>(rna_LimitDistanceConstraint_distance_);

static EnumPropertyRNA rna_LimitDistanceConstraint_limit_mode_;
PropertyRNA &rna_LimitDistanceConstraint_limit_mode = reinterpret_cast<PropertyRNA &>(rna_LimitDistanceConstraint_limit_mode_);

static BoolPropertyRNA rna_LimitDistanceConstraint_use_transform_limit_;
PropertyRNA &rna_LimitDistanceConstraint_use_transform_limit = reinterpret_cast<PropertyRNA &>(rna_LimitDistanceConstraint_use_transform_limit_);

StructRNA *RNA_LimitDistanceConstraint;
void register_struct_LimitDistanceConstraint(BlenderRNA &brna)
{
	rna_LimitDistanceConstraint_head_tail_ = {
		{&rna_LimitDistanceConstraint_use_bbone_shape, 	nullptr,
		-1, "head_tail", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Head/Tail",
		"Target along length of bone: Head is 0, Tail is 1",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, headtail), RawPropertyType(5), nullptr},
		LimitDistanceConstraint_head_tail_get, LimitDistanceConstraint_head_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitDistanceConstraint_use_bbone_shape_ = {
		{&rna_LimitDistanceConstraint_target, 	&rna_LimitDistanceConstraint_head_tail,
		-1, "use_bbone_shape", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Follow B-Bone",
		"Follow shape of B-Bone segments when calculating Head/Tail position",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitDistanceConstraint_use_bbone_shape_get, LimitDistanceConstraint_use_bbone_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitDistanceConstraint_target_ = {
		{&rna_LimitDistanceConstraint_subtarget, 	&rna_LimitDistanceConstraint_use_bbone_shape,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitDistanceConstraint_target_get, LimitDistanceConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_LimitDistanceConstraint_subtarget_ = {
		{&rna_LimitDistanceConstraint_distance, 	&rna_LimitDistanceConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitDistanceConstraint_subtarget_get, LimitDistanceConstraint_subtarget_length, LimitDistanceConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_LimitDistanceConstraint_distance_ = {
		{&rna_LimitDistanceConstraint_limit_mode, 	&rna_LimitDistanceConstraint_subtarget,
		-1, "distance", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Distance",
		"Radius of limiting sphere",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bDistLimitConstraint, dist), RawPropertyType(5), nullptr},
		LimitDistanceConstraint_distance_get, LimitDistanceConstraint_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_LimitDistanceConstraint_limit_mode_items[4] = {
		{0, "LIMITDIST_INSIDE", 0, "Inside", "The object is constrained inside a virtual sphere around the target object, with a radius defined by the limit distance"	},
		{1, "LIMITDIST_OUTSIDE", 0, "Outside", "The object is constrained outside a virtual sphere around the target object, with a radius defined by the limit distance"	},
		{2, "LIMITDIST_ONSURFACE", 0, "On Surface", "The object is constrained on the surface of a virtual sphere around the target object, with a radius defined by the limit distance"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_LimitDistanceConstraint_limit_mode_ = {
		{&rna_LimitDistanceConstraint_use_transform_limit, 	&rna_LimitDistanceConstraint_distance,
		-1, "limit_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Limit Mode",
		"Distances in relation to sphere of influence to allow",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bDistLimitConstraint, mode), RawPropertyType(1), nullptr},
		LimitDistanceConstraint_limit_mode_get, LimitDistanceConstraint_limit_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_LimitDistanceConstraint_limit_mode_items, 3, 0
	};

	rna_LimitDistanceConstraint_use_transform_limit_ = {
		{nullptr, 	&rna_LimitDistanceConstraint_limit_mode,
		-1, "use_transform_limit", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Affect Transform",
		"Transforms are affected by this constraint as well",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitDistanceConstraint_use_transform_limit_get, LimitDistanceConstraint_use_transform_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_LimitDistanceConstraint;
	srna->cont.properties = {&rna_LimitDistanceConstraint_head_tail, &rna_LimitDistanceConstraint_use_transform_limit};
	srna->identifier = "LimitDistanceConstraint";
	srna->flag = 516;
	srna->name = "Limit Distance Constraint";
	srna->description = "Limit the distance from target object";
	srna->translation_context = "*";
	srna->icon = 423;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Limit Size Constraint */
static BoolPropertyRNA rna_LimitScaleConstraint_use_min_x_;
PropertyRNA &rna_LimitScaleConstraint_use_min_x = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_use_min_x_);

static BoolPropertyRNA rna_LimitScaleConstraint_use_min_y_;
PropertyRNA &rna_LimitScaleConstraint_use_min_y = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_use_min_y_);

static BoolPropertyRNA rna_LimitScaleConstraint_use_min_z_;
PropertyRNA &rna_LimitScaleConstraint_use_min_z = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_use_min_z_);

static BoolPropertyRNA rna_LimitScaleConstraint_use_max_x_;
PropertyRNA &rna_LimitScaleConstraint_use_max_x = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_use_max_x_);

static BoolPropertyRNA rna_LimitScaleConstraint_use_max_y_;
PropertyRNA &rna_LimitScaleConstraint_use_max_y = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_use_max_y_);

static BoolPropertyRNA rna_LimitScaleConstraint_use_max_z_;
PropertyRNA &rna_LimitScaleConstraint_use_max_z = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_use_max_z_);

static FloatPropertyRNA rna_LimitScaleConstraint_min_x_;
PropertyRNA &rna_LimitScaleConstraint_min_x = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_min_x_);

static FloatPropertyRNA rna_LimitScaleConstraint_min_y_;
PropertyRNA &rna_LimitScaleConstraint_min_y = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_min_y_);

static FloatPropertyRNA rna_LimitScaleConstraint_min_z_;
PropertyRNA &rna_LimitScaleConstraint_min_z = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_min_z_);

static FloatPropertyRNA rna_LimitScaleConstraint_max_x_;
PropertyRNA &rna_LimitScaleConstraint_max_x = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_max_x_);

static FloatPropertyRNA rna_LimitScaleConstraint_max_y_;
PropertyRNA &rna_LimitScaleConstraint_max_y = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_max_y_);

static FloatPropertyRNA rna_LimitScaleConstraint_max_z_;
PropertyRNA &rna_LimitScaleConstraint_max_z = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_max_z_);

static BoolPropertyRNA rna_LimitScaleConstraint_use_transform_limit_;
PropertyRNA &rna_LimitScaleConstraint_use_transform_limit = reinterpret_cast<PropertyRNA &>(rna_LimitScaleConstraint_use_transform_limit_);

StructRNA *RNA_LimitScaleConstraint;
void register_struct_LimitScaleConstraint(BlenderRNA &brna)
{
	rna_LimitScaleConstraint_use_min_x_ = {
		{&rna_LimitScaleConstraint_use_min_y, 	nullptr,
		-1, "use_min_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Minimum X",
		"Use the minimum X value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitScaleConstraint_use_min_x_get, LimitScaleConstraint_use_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitScaleConstraint_use_min_y_ = {
		{&rna_LimitScaleConstraint_use_min_z, 	&rna_LimitScaleConstraint_use_min_x,
		-1, "use_min_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Minimum Y",
		"Use the minimum Y value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitScaleConstraint_use_min_y_get, LimitScaleConstraint_use_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitScaleConstraint_use_min_z_ = {
		{&rna_LimitScaleConstraint_use_max_x, 	&rna_LimitScaleConstraint_use_min_y,
		-1, "use_min_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Minimum Z",
		"Use the minimum Z value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitScaleConstraint_use_min_z_get, LimitScaleConstraint_use_min_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitScaleConstraint_use_max_x_ = {
		{&rna_LimitScaleConstraint_use_max_y, 	&rna_LimitScaleConstraint_use_min_z,
		-1, "use_max_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Maximum X",
		"Use the maximum X value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitScaleConstraint_use_max_x_get, LimitScaleConstraint_use_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitScaleConstraint_use_max_y_ = {
		{&rna_LimitScaleConstraint_use_max_z, 	&rna_LimitScaleConstraint_use_max_x,
		-1, "use_max_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Maximum Y",
		"Use the maximum Y value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitScaleConstraint_use_max_y_get, LimitScaleConstraint_use_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitScaleConstraint_use_max_z_ = {
		{&rna_LimitScaleConstraint_min_x, 	&rna_LimitScaleConstraint_use_max_y,
		-1, "use_max_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Maximum Z",
		"Use the maximum Z value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitScaleConstraint_use_max_z_get, LimitScaleConstraint_use_max_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitScaleConstraint_min_x_ = {
		{&rna_LimitScaleConstraint_min_y, 	&rna_LimitScaleConstraint_use_max_z,
		-1, "min_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum X",
		"Lowest X value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSizeLimitConstraint, xmin), RawPropertyType(5), nullptr},
		LimitScaleConstraint_min_x_get, LimitScaleConstraint_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitScaleConstraint_min_y_ = {
		{&rna_LimitScaleConstraint_min_z, 	&rna_LimitScaleConstraint_min_x,
		-1, "min_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Y",
		"Lowest Y value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSizeLimitConstraint, ymin), RawPropertyType(5), nullptr},
		LimitScaleConstraint_min_y_get, LimitScaleConstraint_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitScaleConstraint_min_z_ = {
		{&rna_LimitScaleConstraint_max_x, 	&rna_LimitScaleConstraint_min_y,
		-1, "min_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Z",
		"Lowest Z value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSizeLimitConstraint, zmin), RawPropertyType(5), nullptr},
		LimitScaleConstraint_min_z_get, LimitScaleConstraint_min_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitScaleConstraint_max_x_ = {
		{&rna_LimitScaleConstraint_max_y, 	&rna_LimitScaleConstraint_min_z,
		-1, "max_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum X",
		"Highest X value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSizeLimitConstraint, xmax), RawPropertyType(5), nullptr},
		LimitScaleConstraint_max_x_get, LimitScaleConstraint_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitScaleConstraint_max_y_ = {
		{&rna_LimitScaleConstraint_max_z, 	&rna_LimitScaleConstraint_max_x,
		-1, "max_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Y",
		"Highest Y value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSizeLimitConstraint, ymax), RawPropertyType(5), nullptr},
		LimitScaleConstraint_max_y_get, LimitScaleConstraint_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitScaleConstraint_max_z_ = {
		{&rna_LimitScaleConstraint_use_transform_limit, 	&rna_LimitScaleConstraint_max_y,
		-1, "max_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Z",
		"Highest Z value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSizeLimitConstraint, zmax), RawPropertyType(5), nullptr},
		LimitScaleConstraint_max_z_get, LimitScaleConstraint_max_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitScaleConstraint_use_transform_limit_ = {
		{nullptr, 	&rna_LimitScaleConstraint_max_z,
		-1, "use_transform_limit", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Affect Transform",
		"Transform tools are affected by this constraint as well",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitScaleConstraint_use_transform_limit_get, LimitScaleConstraint_use_transform_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_LimitScaleConstraint;
	srna->cont.properties = {&rna_LimitScaleConstraint_use_min_x, &rna_LimitScaleConstraint_use_transform_limit};
	srna->identifier = "LimitScaleConstraint";
	srna->flag = 516;
	srna->name = "Limit Size Constraint";
	srna->description = "Limit the scaling of the constrained object";
	srna->translation_context = "*";
	srna->icon = 438;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Limit Rotation Constraint */
static BoolPropertyRNA rna_LimitRotationConstraint_use_limit_x_;
PropertyRNA &rna_LimitRotationConstraint_use_limit_x = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_use_limit_x_);

static BoolPropertyRNA rna_LimitRotationConstraint_use_limit_y_;
PropertyRNA &rna_LimitRotationConstraint_use_limit_y = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_use_limit_y_);

static BoolPropertyRNA rna_LimitRotationConstraint_use_limit_z_;
PropertyRNA &rna_LimitRotationConstraint_use_limit_z = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_use_limit_z_);

static FloatPropertyRNA rna_LimitRotationConstraint_min_x_;
PropertyRNA &rna_LimitRotationConstraint_min_x = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_min_x_);

static FloatPropertyRNA rna_LimitRotationConstraint_min_y_;
PropertyRNA &rna_LimitRotationConstraint_min_y = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_min_y_);

static FloatPropertyRNA rna_LimitRotationConstraint_min_z_;
PropertyRNA &rna_LimitRotationConstraint_min_z = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_min_z_);

static FloatPropertyRNA rna_LimitRotationConstraint_max_x_;
PropertyRNA &rna_LimitRotationConstraint_max_x = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_max_x_);

static FloatPropertyRNA rna_LimitRotationConstraint_max_y_;
PropertyRNA &rna_LimitRotationConstraint_max_y = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_max_y_);

static FloatPropertyRNA rna_LimitRotationConstraint_max_z_;
PropertyRNA &rna_LimitRotationConstraint_max_z = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_max_z_);

static EnumPropertyRNA rna_LimitRotationConstraint_euler_order_;
PropertyRNA &rna_LimitRotationConstraint_euler_order = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_euler_order_);

static BoolPropertyRNA rna_LimitRotationConstraint_use_transform_limit_;
PropertyRNA &rna_LimitRotationConstraint_use_transform_limit = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_use_transform_limit_);

static BoolPropertyRNA rna_LimitRotationConstraint_use_legacy_behavior_;
PropertyRNA &rna_LimitRotationConstraint_use_legacy_behavior = reinterpret_cast<PropertyRNA &>(rna_LimitRotationConstraint_use_legacy_behavior_);

StructRNA *RNA_LimitRotationConstraint;
void register_struct_LimitRotationConstraint(BlenderRNA &brna)
{
	rna_LimitRotationConstraint_use_limit_x_ = {
		{&rna_LimitRotationConstraint_use_limit_y, 	nullptr,
		-1, "use_limit_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Limit X",
		"Use the minimum X value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitRotationConstraint_use_limit_x_get, LimitRotationConstraint_use_limit_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitRotationConstraint_use_limit_y_ = {
		{&rna_LimitRotationConstraint_use_limit_z, 	&rna_LimitRotationConstraint_use_limit_x,
		-1, "use_limit_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Limit Y",
		"Use the minimum Y value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitRotationConstraint_use_limit_y_get, LimitRotationConstraint_use_limit_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitRotationConstraint_use_limit_z_ = {
		{&rna_LimitRotationConstraint_min_x, 	&rna_LimitRotationConstraint_use_limit_y,
		-1, "use_limit_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Limit Z",
		"Use the minimum Z value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitRotationConstraint_use_limit_z_get, LimitRotationConstraint_use_limit_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitRotationConstraint_min_x_ = {
		{&rna_LimitRotationConstraint_min_y, 	&rna_LimitRotationConstraint_use_limit_z,
		-1, "min_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum X",
		"Lower X angle bound",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bRotLimitConstraint, xmin), RawPropertyType(5), nullptr},
		LimitRotationConstraint_min_x_get, LimitRotationConstraint_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -1000.0f, 1000.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitRotationConstraint_min_y_ = {
		{&rna_LimitRotationConstraint_min_z, 	&rna_LimitRotationConstraint_min_x,
		-1, "min_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Y",
		"Lower Y angle bound",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bRotLimitConstraint, ymin), RawPropertyType(5), nullptr},
		LimitRotationConstraint_min_y_get, LimitRotationConstraint_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -1000.0f, 1000.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitRotationConstraint_min_z_ = {
		{&rna_LimitRotationConstraint_max_x, 	&rna_LimitRotationConstraint_min_y,
		-1, "min_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Z",
		"Lower Z angle bound",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bRotLimitConstraint, zmin), RawPropertyType(5), nullptr},
		LimitRotationConstraint_min_z_get, LimitRotationConstraint_min_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -1000.0f, 1000.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitRotationConstraint_max_x_ = {
		{&rna_LimitRotationConstraint_max_y, 	&rna_LimitRotationConstraint_min_z,
		-1, "max_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum X",
		"Upper X angle bound",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bRotLimitConstraint, xmax), RawPropertyType(5), nullptr},
		LimitRotationConstraint_max_x_get, LimitRotationConstraint_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -1000.0f, 1000.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitRotationConstraint_max_y_ = {
		{&rna_LimitRotationConstraint_max_z, 	&rna_LimitRotationConstraint_max_x,
		-1, "max_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Y",
		"Upper Y angle bound",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bRotLimitConstraint, ymax), RawPropertyType(5), nullptr},
		LimitRotationConstraint_max_y_get, LimitRotationConstraint_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -1000.0f, 1000.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitRotationConstraint_max_z_ = {
		{&rna_LimitRotationConstraint_euler_order, 	&rna_LimitRotationConstraint_max_y,
		-1, "max_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Z",
		"Upper Z angle bound",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bRotLimitConstraint, zmax), RawPropertyType(5), nullptr},
		LimitRotationConstraint_max_z_get, LimitRotationConstraint_max_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -1000.0f, 1000.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_LimitRotationConstraint_euler_order_items[8] = {
		{0, "AUTO", 0, "Default", "Euler using the default rotation order"	},
		{1, "XYZ", 0, "XYZ Euler", "Euler using the XYZ rotation order"	},
		{2, "XZY", 0, "XZY Euler", "Euler using the XZY rotation order"	},
		{3, "YXZ", 0, "YXZ Euler", "Euler using the YXZ rotation order"	},
		{4, "YZX", 0, "YZX Euler", "Euler using the YZX rotation order"	},
		{5, "ZXY", 0, "ZXY Euler", "Euler using the ZXY rotation order"	},
		{6, "ZYX", 0, "ZYX Euler", "Euler using the ZYX rotation order"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_LimitRotationConstraint_euler_order_ = {
		{&rna_LimitRotationConstraint_use_transform_limit, 	&rna_LimitRotationConstraint_max_z,
		-1, "euler_order", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Euler Order",
		"Explicitly specify the euler rotation order",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bRotLimitConstraint, euler_order), RawPropertyType(2), nullptr},
		LimitRotationConstraint_euler_order_get, LimitRotationConstraint_euler_order_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_LimitRotationConstraint_euler_order_items, 7, 0
	};

	rna_LimitRotationConstraint_use_transform_limit_ = {
		{&rna_LimitRotationConstraint_use_legacy_behavior, 	&rna_LimitRotationConstraint_euler_order,
		-1, "use_transform_limit", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Affect Transform",
		"Transform tools are affected by this constraint as well",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitRotationConstraint_use_transform_limit_get, LimitRotationConstraint_use_transform_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitRotationConstraint_use_legacy_behavior_ = {
		{nullptr, 	&rna_LimitRotationConstraint_use_transform_limit,
		-1, "use_legacy_behavior", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Legacy Behavior",
		"Use the old semi-broken behavior that does not understand that rotations loop around",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitRotationConstraint_use_legacy_behavior_get, LimitRotationConstraint_use_legacy_behavior_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_LimitRotationConstraint;
	srna->cont.properties = {&rna_LimitRotationConstraint_use_limit_x, &rna_LimitRotationConstraint_use_legacy_behavior};
	srna->identifier = "LimitRotationConstraint";
	srna->flag = 516;
	srna->name = "Limit Rotation Constraint";
	srna->description = "Limit the rotation of the constrained object";
	srna->translation_context = "*";
	srna->icon = 434;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Limit Location Constraint */
static BoolPropertyRNA rna_LimitLocationConstraint_use_min_x_;
PropertyRNA &rna_LimitLocationConstraint_use_min_x = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_use_min_x_);

static BoolPropertyRNA rna_LimitLocationConstraint_use_min_y_;
PropertyRNA &rna_LimitLocationConstraint_use_min_y = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_use_min_y_);

static BoolPropertyRNA rna_LimitLocationConstraint_use_min_z_;
PropertyRNA &rna_LimitLocationConstraint_use_min_z = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_use_min_z_);

static BoolPropertyRNA rna_LimitLocationConstraint_use_max_x_;
PropertyRNA &rna_LimitLocationConstraint_use_max_x = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_use_max_x_);

static BoolPropertyRNA rna_LimitLocationConstraint_use_max_y_;
PropertyRNA &rna_LimitLocationConstraint_use_max_y = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_use_max_y_);

static BoolPropertyRNA rna_LimitLocationConstraint_use_max_z_;
PropertyRNA &rna_LimitLocationConstraint_use_max_z = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_use_max_z_);

static FloatPropertyRNA rna_LimitLocationConstraint_min_x_;
PropertyRNA &rna_LimitLocationConstraint_min_x = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_min_x_);

static FloatPropertyRNA rna_LimitLocationConstraint_min_y_;
PropertyRNA &rna_LimitLocationConstraint_min_y = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_min_y_);

static FloatPropertyRNA rna_LimitLocationConstraint_min_z_;
PropertyRNA &rna_LimitLocationConstraint_min_z = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_min_z_);

static FloatPropertyRNA rna_LimitLocationConstraint_max_x_;
PropertyRNA &rna_LimitLocationConstraint_max_x = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_max_x_);

static FloatPropertyRNA rna_LimitLocationConstraint_max_y_;
PropertyRNA &rna_LimitLocationConstraint_max_y = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_max_y_);

static FloatPropertyRNA rna_LimitLocationConstraint_max_z_;
PropertyRNA &rna_LimitLocationConstraint_max_z = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_max_z_);

static BoolPropertyRNA rna_LimitLocationConstraint_use_transform_limit_;
PropertyRNA &rna_LimitLocationConstraint_use_transform_limit = reinterpret_cast<PropertyRNA &>(rna_LimitLocationConstraint_use_transform_limit_);

StructRNA *RNA_LimitLocationConstraint;
void register_struct_LimitLocationConstraint(BlenderRNA &brna)
{
	rna_LimitLocationConstraint_use_min_x_ = {
		{&rna_LimitLocationConstraint_use_min_y, 	nullptr,
		-1, "use_min_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Minimum X",
		"Use the minimum X value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitLocationConstraint_use_min_x_get, LimitLocationConstraint_use_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitLocationConstraint_use_min_y_ = {
		{&rna_LimitLocationConstraint_use_min_z, 	&rna_LimitLocationConstraint_use_min_x,
		-1, "use_min_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Minimum Y",
		"Use the minimum Y value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitLocationConstraint_use_min_y_get, LimitLocationConstraint_use_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitLocationConstraint_use_min_z_ = {
		{&rna_LimitLocationConstraint_use_max_x, 	&rna_LimitLocationConstraint_use_min_y,
		-1, "use_min_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Minimum Z",
		"Use the minimum Z value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitLocationConstraint_use_min_z_get, LimitLocationConstraint_use_min_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitLocationConstraint_use_max_x_ = {
		{&rna_LimitLocationConstraint_use_max_y, 	&rna_LimitLocationConstraint_use_min_z,
		-1, "use_max_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Maximum X",
		"Use the maximum X value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitLocationConstraint_use_max_x_get, LimitLocationConstraint_use_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitLocationConstraint_use_max_y_ = {
		{&rna_LimitLocationConstraint_use_max_z, 	&rna_LimitLocationConstraint_use_max_x,
		-1, "use_max_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Maximum Y",
		"Use the maximum Y value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitLocationConstraint_use_max_y_get, LimitLocationConstraint_use_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitLocationConstraint_use_max_z_ = {
		{&rna_LimitLocationConstraint_min_x, 	&rna_LimitLocationConstraint_use_max_y,
		-1, "use_max_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Maximum Z",
		"Use the maximum Z value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitLocationConstraint_use_max_z_get, LimitLocationConstraint_use_max_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LimitLocationConstraint_min_x_ = {
		{&rna_LimitLocationConstraint_min_y, 	&rna_LimitLocationConstraint_use_max_z,
		-1, "min_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum X",
		"Lowest X value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bLocLimitConstraint, xmin), RawPropertyType(5), nullptr},
		LimitLocationConstraint_min_x_get, LimitLocationConstraint_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitLocationConstraint_min_y_ = {
		{&rna_LimitLocationConstraint_min_z, 	&rna_LimitLocationConstraint_min_x,
		-1, "min_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Y",
		"Lowest Y value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bLocLimitConstraint, ymin), RawPropertyType(5), nullptr},
		LimitLocationConstraint_min_y_get, LimitLocationConstraint_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitLocationConstraint_min_z_ = {
		{&rna_LimitLocationConstraint_max_x, 	&rna_LimitLocationConstraint_min_y,
		-1, "min_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Z",
		"Lowest Z value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bLocLimitConstraint, zmin), RawPropertyType(5), nullptr},
		LimitLocationConstraint_min_z_get, LimitLocationConstraint_min_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitLocationConstraint_max_x_ = {
		{&rna_LimitLocationConstraint_max_y, 	&rna_LimitLocationConstraint_min_z,
		-1, "max_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum X",
		"Highest X value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bLocLimitConstraint, xmax), RawPropertyType(5), nullptr},
		LimitLocationConstraint_max_x_get, LimitLocationConstraint_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitLocationConstraint_max_y_ = {
		{&rna_LimitLocationConstraint_max_z, 	&rna_LimitLocationConstraint_max_x,
		-1, "max_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Y",
		"Highest Y value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bLocLimitConstraint, ymax), RawPropertyType(5), nullptr},
		LimitLocationConstraint_max_y_get, LimitLocationConstraint_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitLocationConstraint_max_z_ = {
		{&rna_LimitLocationConstraint_use_transform_limit, 	&rna_LimitLocationConstraint_max_y,
		-1, "max_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Z",
		"Highest Z value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bLocLimitConstraint, zmax), RawPropertyType(5), nullptr},
		LimitLocationConstraint_max_z_get, LimitLocationConstraint_max_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_LimitLocationConstraint_use_transform_limit_ = {
		{nullptr, 	&rna_LimitLocationConstraint_max_z,
		-1, "use_transform_limit", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Affect Transform",
		"Transform tools are affected by this constraint as well",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LimitLocationConstraint_use_transform_limit_get, LimitLocationConstraint_use_transform_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_LimitLocationConstraint;
	srna->cont.properties = {&rna_LimitLocationConstraint_use_min_x, &rna_LimitLocationConstraint_use_transform_limit};
	srna->identifier = "LimitLocationConstraint";
	srna->flag = 516;
	srna->name = "Limit Location Constraint";
	srna->description = "Limit the location of the constrained object";
	srna->translation_context = "*";
	srna->icon = 430;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Transformation Constraint */
static PointerPropertyRNA rna_TransformConstraint_target_;
PropertyRNA &rna_TransformConstraint_target = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_target_);

static StringPropertyRNA rna_TransformConstraint_subtarget_;
PropertyRNA &rna_TransformConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_subtarget_);

static EnumPropertyRNA rna_TransformConstraint_map_from_;
PropertyRNA &rna_TransformConstraint_map_from = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_map_from_);

static EnumPropertyRNA rna_TransformConstraint_map_to_;
PropertyRNA &rna_TransformConstraint_map_to = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_map_to_);

static EnumPropertyRNA rna_TransformConstraint_map_to_x_from_;
PropertyRNA &rna_TransformConstraint_map_to_x_from = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_map_to_x_from_);

static EnumPropertyRNA rna_TransformConstraint_map_to_y_from_;
PropertyRNA &rna_TransformConstraint_map_to_y_from = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_map_to_y_from_);

static EnumPropertyRNA rna_TransformConstraint_map_to_z_from_;
PropertyRNA &rna_TransformConstraint_map_to_z_from = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_map_to_z_from_);

static BoolPropertyRNA rna_TransformConstraint_use_motion_extrapolate_;
PropertyRNA &rna_TransformConstraint_use_motion_extrapolate = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_use_motion_extrapolate_);

static EnumPropertyRNA rna_TransformConstraint_from_rotation_mode_;
PropertyRNA &rna_TransformConstraint_from_rotation_mode = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_rotation_mode_);

static EnumPropertyRNA rna_TransformConstraint_to_euler_order_;
PropertyRNA &rna_TransformConstraint_to_euler_order = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_euler_order_);

static FloatPropertyRNA rna_TransformConstraint_from_min_x_;
PropertyRNA &rna_TransformConstraint_from_min_x = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_min_x_);

static FloatPropertyRNA rna_TransformConstraint_from_min_y_;
PropertyRNA &rna_TransformConstraint_from_min_y = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_min_y_);

static FloatPropertyRNA rna_TransformConstraint_from_min_z_;
PropertyRNA &rna_TransformConstraint_from_min_z = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_min_z_);

static FloatPropertyRNA rna_TransformConstraint_from_max_x_;
PropertyRNA &rna_TransformConstraint_from_max_x = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_max_x_);

static FloatPropertyRNA rna_TransformConstraint_from_max_y_;
PropertyRNA &rna_TransformConstraint_from_max_y = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_max_y_);

static FloatPropertyRNA rna_TransformConstraint_from_max_z_;
PropertyRNA &rna_TransformConstraint_from_max_z = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_max_z_);

static FloatPropertyRNA rna_TransformConstraint_to_min_x_;
PropertyRNA &rna_TransformConstraint_to_min_x = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_min_x_);

static FloatPropertyRNA rna_TransformConstraint_to_min_y_;
PropertyRNA &rna_TransformConstraint_to_min_y = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_min_y_);

static FloatPropertyRNA rna_TransformConstraint_to_min_z_;
PropertyRNA &rna_TransformConstraint_to_min_z = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_min_z_);

static FloatPropertyRNA rna_TransformConstraint_to_max_x_;
PropertyRNA &rna_TransformConstraint_to_max_x = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_max_x_);

static FloatPropertyRNA rna_TransformConstraint_to_max_y_;
PropertyRNA &rna_TransformConstraint_to_max_y = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_max_y_);

static FloatPropertyRNA rna_TransformConstraint_to_max_z_;
PropertyRNA &rna_TransformConstraint_to_max_z = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_max_z_);

static EnumPropertyRNA rna_TransformConstraint_mix_mode_;
PropertyRNA &rna_TransformConstraint_mix_mode = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_mix_mode_);

static FloatPropertyRNA rna_TransformConstraint_from_min_x_rot_;
PropertyRNA &rna_TransformConstraint_from_min_x_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_min_x_rot_);

static FloatPropertyRNA rna_TransformConstraint_from_min_y_rot_;
PropertyRNA &rna_TransformConstraint_from_min_y_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_min_y_rot_);

static FloatPropertyRNA rna_TransformConstraint_from_min_z_rot_;
PropertyRNA &rna_TransformConstraint_from_min_z_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_min_z_rot_);

static FloatPropertyRNA rna_TransformConstraint_from_max_x_rot_;
PropertyRNA &rna_TransformConstraint_from_max_x_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_max_x_rot_);

static FloatPropertyRNA rna_TransformConstraint_from_max_y_rot_;
PropertyRNA &rna_TransformConstraint_from_max_y_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_max_y_rot_);

static FloatPropertyRNA rna_TransformConstraint_from_max_z_rot_;
PropertyRNA &rna_TransformConstraint_from_max_z_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_max_z_rot_);

static FloatPropertyRNA rna_TransformConstraint_to_min_x_rot_;
PropertyRNA &rna_TransformConstraint_to_min_x_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_min_x_rot_);

static FloatPropertyRNA rna_TransformConstraint_to_min_y_rot_;
PropertyRNA &rna_TransformConstraint_to_min_y_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_min_y_rot_);

static FloatPropertyRNA rna_TransformConstraint_to_min_z_rot_;
PropertyRNA &rna_TransformConstraint_to_min_z_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_min_z_rot_);

static FloatPropertyRNA rna_TransformConstraint_to_max_x_rot_;
PropertyRNA &rna_TransformConstraint_to_max_x_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_max_x_rot_);

static FloatPropertyRNA rna_TransformConstraint_to_max_y_rot_;
PropertyRNA &rna_TransformConstraint_to_max_y_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_max_y_rot_);

static FloatPropertyRNA rna_TransformConstraint_to_max_z_rot_;
PropertyRNA &rna_TransformConstraint_to_max_z_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_max_z_rot_);

static EnumPropertyRNA rna_TransformConstraint_mix_mode_rot_;
PropertyRNA &rna_TransformConstraint_mix_mode_rot = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_mix_mode_rot_);

static FloatPropertyRNA rna_TransformConstraint_from_min_x_scale_;
PropertyRNA &rna_TransformConstraint_from_min_x_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_min_x_scale_);

static FloatPropertyRNA rna_TransformConstraint_from_min_y_scale_;
PropertyRNA &rna_TransformConstraint_from_min_y_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_min_y_scale_);

static FloatPropertyRNA rna_TransformConstraint_from_min_z_scale_;
PropertyRNA &rna_TransformConstraint_from_min_z_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_min_z_scale_);

static FloatPropertyRNA rna_TransformConstraint_from_max_x_scale_;
PropertyRNA &rna_TransformConstraint_from_max_x_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_max_x_scale_);

static FloatPropertyRNA rna_TransformConstraint_from_max_y_scale_;
PropertyRNA &rna_TransformConstraint_from_max_y_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_max_y_scale_);

static FloatPropertyRNA rna_TransformConstraint_from_max_z_scale_;
PropertyRNA &rna_TransformConstraint_from_max_z_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_from_max_z_scale_);

static FloatPropertyRNA rna_TransformConstraint_to_min_x_scale_;
PropertyRNA &rna_TransformConstraint_to_min_x_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_min_x_scale_);

static FloatPropertyRNA rna_TransformConstraint_to_min_y_scale_;
PropertyRNA &rna_TransformConstraint_to_min_y_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_min_y_scale_);

static FloatPropertyRNA rna_TransformConstraint_to_min_z_scale_;
PropertyRNA &rna_TransformConstraint_to_min_z_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_min_z_scale_);

static FloatPropertyRNA rna_TransformConstraint_to_max_x_scale_;
PropertyRNA &rna_TransformConstraint_to_max_x_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_max_x_scale_);

static FloatPropertyRNA rna_TransformConstraint_to_max_y_scale_;
PropertyRNA &rna_TransformConstraint_to_max_y_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_max_y_scale_);

static FloatPropertyRNA rna_TransformConstraint_to_max_z_scale_;
PropertyRNA &rna_TransformConstraint_to_max_z_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_to_max_z_scale_);

static EnumPropertyRNA rna_TransformConstraint_mix_mode_scale_;
PropertyRNA &rna_TransformConstraint_mix_mode_scale = reinterpret_cast<PropertyRNA &>(rna_TransformConstraint_mix_mode_scale_);

StructRNA *RNA_TransformConstraint;
void register_struct_TransformConstraint(BlenderRNA &brna)
{
	rna_TransformConstraint_target_ = {
		{&rna_TransformConstraint_subtarget, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TransformConstraint_target_get, TransformConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_TransformConstraint_subtarget_ = {
		{&rna_TransformConstraint_map_from, 	&rna_TransformConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TransformConstraint_subtarget_get, TransformConstraint_subtarget_length, TransformConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_TransformConstraint_map_from_items[4] = {
		{0, "LOCATION", 0, "Location", ""	},
		{1, "ROTATION", 0, "Rotation", ""	},
		{2, "SCALE", 0, "Scale", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TransformConstraint_map_from_ = {
		{&rna_TransformConstraint_map_to, 	&rna_TransformConstraint_subtarget,
		-1, "map_from", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Map From",
		"The transformation type to use from the target",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from), RawPropertyType(1), nullptr},
		TransformConstraint_map_from_get, TransformConstraint_map_from_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TransformConstraint_map_from_items, 3, 0
	};

	static const EnumPropertyItem rna_TransformConstraint_map_to_items[4] = {
		{0, "LOCATION", 0, "Location", ""	},
		{1, "ROTATION", 0, "Rotation", ""	},
		{2, "SCALE", 0, "Scale", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TransformConstraint_map_to_ = {
		{&rna_TransformConstraint_map_to_x_from, 	&rna_TransformConstraint_map_from,
		-1, "map_to", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Map To",
		"The transformation type to affect on the constrained object",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to), RawPropertyType(1), nullptr},
		TransformConstraint_map_to_get, TransformConstraint_map_to_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TransformConstraint_map_to_items, 3, 0
	};

	rna_TransformConstraint_map_to_x_from_ = {
		{&rna_TransformConstraint_map_to_y_from, 	&rna_TransformConstraint_map_to,
		-1, "map_to_x_from", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Map To X From",
		"The source axis constrained object\'s X axis uses",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, map[0]), RawPropertyType(2), nullptr},
		TransformConstraint_map_to_x_from_get, TransformConstraint_map_to_x_from_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_axis_xyz_items, 3, 0
	};

	rna_TransformConstraint_map_to_y_from_ = {
		{&rna_TransformConstraint_map_to_z_from, 	&rna_TransformConstraint_map_to_x_from,
		-1, "map_to_y_from", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Map To Y From",
		"The source axis constrained object\'s Y axis uses",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, map[1]), RawPropertyType(2), nullptr},
		TransformConstraint_map_to_y_from_get, TransformConstraint_map_to_y_from_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_axis_xyz_items, 3, 0
	};

	rna_TransformConstraint_map_to_z_from_ = {
		{&rna_TransformConstraint_use_motion_extrapolate, 	&rna_TransformConstraint_map_to_y_from,
		-1, "map_to_z_from", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Map To Z From",
		"The source axis constrained object\'s Z axis uses",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, map[2]), RawPropertyType(2), nullptr},
		TransformConstraint_map_to_z_from_get, TransformConstraint_map_to_z_from_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_axis_xyz_items, 3, 0
	};

	rna_TransformConstraint_use_motion_extrapolate_ = {
		{&rna_TransformConstraint_from_rotation_mode, 	&rna_TransformConstraint_map_to_z_from,
		-1, "use_motion_extrapolate", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Extrapolate Motion",
		"Extrapolate ranges",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TransformConstraint_use_motion_extrapolate_get, TransformConstraint_use_motion_extrapolate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TransformConstraint_from_rotation_mode_ = {
		{&rna_TransformConstraint_to_euler_order, 	&rna_TransformConstraint_use_motion_extrapolate,
		-1, "from_rotation_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Mode",
		"Specify the type of rotation channels to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_rotation_mode), RawPropertyType(2), nullptr},
		TransformConstraint_from_rotation_mode_get, TransformConstraint_from_rotation_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_driver_target_rotation_mode_items, 11, 0
	};

	static const EnumPropertyItem rna_TransformConstraint_to_euler_order_items[8] = {
		{0, "AUTO", 0, "Default", "Euler using the default rotation order"	},
		{1, "XYZ", 0, "XYZ Euler", "Euler using the XYZ rotation order"	},
		{2, "XZY", 0, "XZY Euler", "Euler using the XZY rotation order"	},
		{3, "YXZ", 0, "YXZ Euler", "Euler using the YXZ rotation order"	},
		{4, "YZX", 0, "YZX Euler", "Euler using the YZX rotation order"	},
		{5, "ZXY", 0, "ZXY Euler", "Euler using the ZXY rotation order"	},
		{6, "ZYX", 0, "ZYX Euler", "Euler using the ZYX rotation order"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TransformConstraint_to_euler_order_ = {
		{&rna_TransformConstraint_from_min_x, 	&rna_TransformConstraint_from_rotation_mode,
		-1, "to_euler_order", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Order",
		"Explicitly specify the output euler rotation order",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_euler_order), RawPropertyType(2), nullptr},
		TransformConstraint_to_euler_order_get, TransformConstraint_to_euler_order_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TransformConstraint_to_euler_order_items, 7, 0
	};

	rna_TransformConstraint_from_min_x_ = {
		{&rna_TransformConstraint_from_min_y, 	&rna_TransformConstraint_to_euler_order,
		-1, "from_min_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Minimum X",
		"Bottom range of X axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_min[0]), RawPropertyType(5), nullptr},
		TransformConstraint_from_min_x_get, TransformConstraint_from_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_min_y_ = {
		{&rna_TransformConstraint_from_min_z, 	&rna_TransformConstraint_from_min_x,
		-1, "from_min_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Minimum Y",
		"Bottom range of Y axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_min[1]), RawPropertyType(5), nullptr},
		TransformConstraint_from_min_y_get, TransformConstraint_from_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_min_z_ = {
		{&rna_TransformConstraint_from_max_x, 	&rna_TransformConstraint_from_min_y,
		-1, "from_min_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Minimum Z",
		"Bottom range of Z axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_min[2]), RawPropertyType(5), nullptr},
		TransformConstraint_from_min_z_get, TransformConstraint_from_min_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_max_x_ = {
		{&rna_TransformConstraint_from_max_y, 	&rna_TransformConstraint_from_min_z,
		-1, "from_max_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Maximum X",
		"Top range of X axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_max[0]), RawPropertyType(5), nullptr},
		TransformConstraint_from_max_x_get, TransformConstraint_from_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_max_y_ = {
		{&rna_TransformConstraint_from_max_z, 	&rna_TransformConstraint_from_max_x,
		-1, "from_max_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Maximum Y",
		"Top range of Y axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_max[1]), RawPropertyType(5), nullptr},
		TransformConstraint_from_max_y_get, TransformConstraint_from_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_max_z_ = {
		{&rna_TransformConstraint_to_min_x, 	&rna_TransformConstraint_from_max_y,
		-1, "from_max_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Maximum Z",
		"Top range of Z axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_max[2]), RawPropertyType(5), nullptr},
		TransformConstraint_from_max_z_get, TransformConstraint_from_max_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_min_x_ = {
		{&rna_TransformConstraint_to_min_y, 	&rna_TransformConstraint_from_max_z,
		-1, "to_min_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Minimum X",
		"Bottom range of X axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_min[0]), RawPropertyType(5), nullptr},
		TransformConstraint_to_min_x_get, TransformConstraint_to_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_min_y_ = {
		{&rna_TransformConstraint_to_min_z, 	&rna_TransformConstraint_to_min_x,
		-1, "to_min_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Minimum Y",
		"Bottom range of Y axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_min[1]), RawPropertyType(5), nullptr},
		TransformConstraint_to_min_y_get, TransformConstraint_to_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_min_z_ = {
		{&rna_TransformConstraint_to_max_x, 	&rna_TransformConstraint_to_min_y,
		-1, "to_min_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Minimum Z",
		"Bottom range of Z axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_min[2]), RawPropertyType(5), nullptr},
		TransformConstraint_to_min_z_get, TransformConstraint_to_min_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_max_x_ = {
		{&rna_TransformConstraint_to_max_y, 	&rna_TransformConstraint_to_min_z,
		-1, "to_max_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Maximum X",
		"Top range of X axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_max[0]), RawPropertyType(5), nullptr},
		TransformConstraint_to_max_x_get, TransformConstraint_to_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_max_y_ = {
		{&rna_TransformConstraint_to_max_z, 	&rna_TransformConstraint_to_max_x,
		-1, "to_max_y", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Maximum Y",
		"Top range of Y axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_max[1]), RawPropertyType(5), nullptr},
		TransformConstraint_to_max_y_get, TransformConstraint_to_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_max_z_ = {
		{&rna_TransformConstraint_mix_mode, 	&rna_TransformConstraint_to_max_y,
		-1, "to_max_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Maximum Z",
		"Top range of Z axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_max[2]), RawPropertyType(5), nullptr},
		TransformConstraint_to_max_z_get, TransformConstraint_to_max_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_TransformConstraint_mix_mode_items[3] = {
		{1, "REPLACE", 0, "Replace", "Replace component values"	},
		{0, "ADD", 0, "Add", "Add component values together"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TransformConstraint_mix_mode_ = {
		{&rna_TransformConstraint_from_min_x_rot, 	&rna_TransformConstraint_to_max_z,
		-1, "mix_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Location Mix Mode",
		"Specify how to combine the new location with original",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, mix_mode_loc), RawPropertyType(2), nullptr},
		TransformConstraint_mix_mode_get, TransformConstraint_mix_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TransformConstraint_mix_mode_items, 2, 0
	};

	rna_TransformConstraint_from_min_x_rot_ = {
		{&rna_TransformConstraint_from_min_y_rot, 	&rna_TransformConstraint_mix_mode,
		-1, "from_min_x_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Minimum X",
		"Bottom range of X axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_min_rot[0]), RawPropertyType(5), nullptr},
		TransformConstraint_from_min_x_rot_get, TransformConstraint_from_min_x_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_min_y_rot_ = {
		{&rna_TransformConstraint_from_min_z_rot, 	&rna_TransformConstraint_from_min_x_rot,
		-1, "from_min_y_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Minimum Y",
		"Bottom range of Y axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_min_rot[1]), RawPropertyType(5), nullptr},
		TransformConstraint_from_min_y_rot_get, TransformConstraint_from_min_y_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_min_z_rot_ = {
		{&rna_TransformConstraint_from_max_x_rot, 	&rna_TransformConstraint_from_min_y_rot,
		-1, "from_min_z_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Minimum Z",
		"Bottom range of Z axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_min_rot[2]), RawPropertyType(5), nullptr},
		TransformConstraint_from_min_z_rot_get, TransformConstraint_from_min_z_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_max_x_rot_ = {
		{&rna_TransformConstraint_from_max_y_rot, 	&rna_TransformConstraint_from_min_z_rot,
		-1, "from_max_x_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Maximum X",
		"Top range of X axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_max_rot[0]), RawPropertyType(5), nullptr},
		TransformConstraint_from_max_x_rot_get, TransformConstraint_from_max_x_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_max_y_rot_ = {
		{&rna_TransformConstraint_from_max_z_rot, 	&rna_TransformConstraint_from_max_x_rot,
		-1, "from_max_y_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Maximum Y",
		"Top range of Y axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_max_rot[1]), RawPropertyType(5), nullptr},
		TransformConstraint_from_max_y_rot_get, TransformConstraint_from_max_y_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_max_z_rot_ = {
		{&rna_TransformConstraint_to_min_x_rot, 	&rna_TransformConstraint_from_max_y_rot,
		-1, "from_max_z_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Maximum Z",
		"Top range of Z axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_max_rot[2]), RawPropertyType(5), nullptr},
		TransformConstraint_from_max_z_rot_get, TransformConstraint_from_max_z_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_min_x_rot_ = {
		{&rna_TransformConstraint_to_min_y_rot, 	&rna_TransformConstraint_from_max_z_rot,
		-1, "to_min_x_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Minimum X",
		"Bottom range of X axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_min_rot[0]), RawPropertyType(5), nullptr},
		TransformConstraint_to_min_x_rot_get, TransformConstraint_to_min_x_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_min_y_rot_ = {
		{&rna_TransformConstraint_to_min_z_rot, 	&rna_TransformConstraint_to_min_x_rot,
		-1, "to_min_y_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Minimum Y",
		"Bottom range of Y axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_min_rot[1]), RawPropertyType(5), nullptr},
		TransformConstraint_to_min_y_rot_get, TransformConstraint_to_min_y_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_min_z_rot_ = {
		{&rna_TransformConstraint_to_max_x_rot, 	&rna_TransformConstraint_to_min_y_rot,
		-1, "to_min_z_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Minimum Z",
		"Bottom range of Z axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_min_rot[2]), RawPropertyType(5), nullptr},
		TransformConstraint_to_min_z_rot_get, TransformConstraint_to_min_z_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_max_x_rot_ = {
		{&rna_TransformConstraint_to_max_y_rot, 	&rna_TransformConstraint_to_min_z_rot,
		-1, "to_max_x_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Maximum X",
		"Top range of X axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_max_rot[0]), RawPropertyType(5), nullptr},
		TransformConstraint_to_max_x_rot_get, TransformConstraint_to_max_x_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_max_y_rot_ = {
		{&rna_TransformConstraint_to_max_z_rot, 	&rna_TransformConstraint_to_max_x_rot,
		-1, "to_max_y_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Maximum Y",
		"Top range of Y axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_max_rot[1]), RawPropertyType(5), nullptr},
		TransformConstraint_to_max_y_rot_get, TransformConstraint_to_max_y_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_max_z_rot_ = {
		{&rna_TransformConstraint_mix_mode_rot, 	&rna_TransformConstraint_to_max_y_rot,
		-1, "to_max_z_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Maximum Z",
		"Top range of Z axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_max_rot[2]), RawPropertyType(5), nullptr},
		TransformConstraint_to_max_z_rot_get, TransformConstraint_to_max_z_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_TransformConstraint_mix_mode_rot_items[5] = {
		{1, "REPLACE", 0, "Replace", "Replace component values"	},
		{0, "ADD", 0, "Add", "Add component values together"	},
		{2, "BEFORE", 0, "Before Original", "Apply new rotation before original, as if it was on a parent"	},
		{3, "AFTER", 0, "After Original", "Apply new rotation after original, as if it was on a child"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TransformConstraint_mix_mode_rot_ = {
		{&rna_TransformConstraint_from_min_x_scale, 	&rna_TransformConstraint_to_max_z_rot,
		-1, "mix_mode_rot", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Rotation Mix Mode",
		"Specify how to combine the new rotation with original",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, mix_mode_rot), RawPropertyType(2), nullptr},
		TransformConstraint_mix_mode_rot_get, TransformConstraint_mix_mode_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TransformConstraint_mix_mode_rot_items, 4, 0
	};

	rna_TransformConstraint_from_min_x_scale_ = {
		{&rna_TransformConstraint_from_min_y_scale, 	&rna_TransformConstraint_mix_mode_rot,
		-1, "from_min_x_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Minimum X",
		"Bottom range of X axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_min_scale[0]), RawPropertyType(5), nullptr},
		TransformConstraint_from_min_x_scale_get, TransformConstraint_from_min_x_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_min_y_scale_ = {
		{&rna_TransformConstraint_from_min_z_scale, 	&rna_TransformConstraint_from_min_x_scale,
		-1, "from_min_y_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Minimum Y",
		"Bottom range of Y axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_min_scale[1]), RawPropertyType(5), nullptr},
		TransformConstraint_from_min_y_scale_get, TransformConstraint_from_min_y_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_min_z_scale_ = {
		{&rna_TransformConstraint_from_max_x_scale, 	&rna_TransformConstraint_from_min_y_scale,
		-1, "from_min_z_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Minimum Z",
		"Bottom range of Z axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_min_scale[2]), RawPropertyType(5), nullptr},
		TransformConstraint_from_min_z_scale_get, TransformConstraint_from_min_z_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_max_x_scale_ = {
		{&rna_TransformConstraint_from_max_y_scale, 	&rna_TransformConstraint_from_min_z_scale,
		-1, "from_max_x_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Maximum X",
		"Top range of X axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_max_scale[0]), RawPropertyType(5), nullptr},
		TransformConstraint_from_max_x_scale_get, TransformConstraint_from_max_x_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_max_y_scale_ = {
		{&rna_TransformConstraint_from_max_z_scale, 	&rna_TransformConstraint_from_max_x_scale,
		-1, "from_max_y_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Maximum Y",
		"Top range of Y axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_max_scale[1]), RawPropertyType(5), nullptr},
		TransformConstraint_from_max_y_scale_get, TransformConstraint_from_max_y_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_from_max_z_scale_ = {
		{&rna_TransformConstraint_to_min_x_scale, 	&rna_TransformConstraint_from_max_y_scale,
		-1, "from_max_z_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "From Maximum Z",
		"Top range of Z axis source motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, from_max_scale[2]), RawPropertyType(5), nullptr},
		TransformConstraint_from_max_z_scale_get, TransformConstraint_from_max_z_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_min_x_scale_ = {
		{&rna_TransformConstraint_to_min_y_scale, 	&rna_TransformConstraint_from_max_z_scale,
		-1, "to_min_x_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Minimum X",
		"Bottom range of X axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_min_scale[0]), RawPropertyType(5), nullptr},
		TransformConstraint_to_min_x_scale_get, TransformConstraint_to_min_x_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_min_y_scale_ = {
		{&rna_TransformConstraint_to_min_z_scale, 	&rna_TransformConstraint_to_min_x_scale,
		-1, "to_min_y_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Minimum Y",
		"Bottom range of Y axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_min_scale[1]), RawPropertyType(5), nullptr},
		TransformConstraint_to_min_y_scale_get, TransformConstraint_to_min_y_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_min_z_scale_ = {
		{&rna_TransformConstraint_to_max_x_scale, 	&rna_TransformConstraint_to_min_y_scale,
		-1, "to_min_z_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Minimum Z",
		"Bottom range of Z axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_min_scale[2]), RawPropertyType(5), nullptr},
		TransformConstraint_to_min_z_scale_get, TransformConstraint_to_min_z_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_max_x_scale_ = {
		{&rna_TransformConstraint_to_max_y_scale, 	&rna_TransformConstraint_to_min_z_scale,
		-1, "to_max_x_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Maximum X",
		"Top range of X axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_max_scale[0]), RawPropertyType(5), nullptr},
		TransformConstraint_to_max_x_scale_get, TransformConstraint_to_max_x_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_max_y_scale_ = {
		{&rna_TransformConstraint_to_max_z_scale, 	&rna_TransformConstraint_to_max_x_scale,
		-1, "to_max_y_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Maximum Y",
		"Top range of Y axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_max_scale[1]), RawPropertyType(5), nullptr},
		TransformConstraint_to_max_y_scale_get, TransformConstraint_to_max_y_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TransformConstraint_to_max_z_scale_ = {
		{&rna_TransformConstraint_mix_mode_scale, 	&rna_TransformConstraint_to_max_y_scale,
		-1, "to_max_z_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "To Maximum Z",
		"Top range of Z axis destination motion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, to_max_scale[2]), RawPropertyType(5), nullptr},
		TransformConstraint_to_max_z_scale_get, TransformConstraint_to_max_z_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_TransformConstraint_mix_mode_scale_items[3] = {
		{0, "REPLACE", 0, "Replace", "Replace component values"	},
		{1, "MULTIPLY", 0, "Multiply", "Multiply component values together"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TransformConstraint_mix_mode_scale_ = {
		{nullptr, 	&rna_TransformConstraint_to_max_z_scale,
		-1, "mix_mode_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Scale Mix Mode",
		"Specify how to combine the new scale with original",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bTransformConstraint, mix_mode_scale), RawPropertyType(2), nullptr},
		TransformConstraint_mix_mode_scale_get, TransformConstraint_mix_mode_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TransformConstraint_mix_mode_scale_items, 2, 0
	};

	StructRNA *srna = RNA_TransformConstraint;
	srna->cont.properties = {&rna_TransformConstraint_target, &rna_TransformConstraint_mix_mode_scale};
	srna->identifier = "TransformConstraint";
	srna->flag = 516;
	srna->name = "Transformation Constraint";
	srna->description = "Map transformations of the target to the object";
	srna->translation_context = "*";
	srna->icon = 443;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Shrinkwrap Constraint */
static PointerPropertyRNA rna_ShrinkwrapConstraint_target_;
PropertyRNA &rna_ShrinkwrapConstraint_target = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_target_);

static EnumPropertyRNA rna_ShrinkwrapConstraint_shrinkwrap_type_;
PropertyRNA &rna_ShrinkwrapConstraint_shrinkwrap_type = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_shrinkwrap_type_);

static EnumPropertyRNA rna_ShrinkwrapConstraint_wrap_mode_;
PropertyRNA &rna_ShrinkwrapConstraint_wrap_mode = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_wrap_mode_);

static FloatPropertyRNA rna_ShrinkwrapConstraint_distance_;
PropertyRNA &rna_ShrinkwrapConstraint_distance = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_distance_);

static EnumPropertyRNA rna_ShrinkwrapConstraint_project_axis_;
PropertyRNA &rna_ShrinkwrapConstraint_project_axis = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_project_axis_);

static EnumPropertyRNA rna_ShrinkwrapConstraint_project_axis_space_;
PropertyRNA &rna_ShrinkwrapConstraint_project_axis_space = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_project_axis_space_);

static FloatPropertyRNA rna_ShrinkwrapConstraint_project_limit_;
PropertyRNA &rna_ShrinkwrapConstraint_project_limit = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_project_limit_);

static BoolPropertyRNA rna_ShrinkwrapConstraint_use_project_opposite_;
PropertyRNA &rna_ShrinkwrapConstraint_use_project_opposite = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_use_project_opposite_);

static EnumPropertyRNA rna_ShrinkwrapConstraint_cull_face_;
PropertyRNA &rna_ShrinkwrapConstraint_cull_face = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_cull_face_);

static BoolPropertyRNA rna_ShrinkwrapConstraint_use_invert_cull_;
PropertyRNA &rna_ShrinkwrapConstraint_use_invert_cull = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_use_invert_cull_);

static BoolPropertyRNA rna_ShrinkwrapConstraint_use_track_normal_;
PropertyRNA &rna_ShrinkwrapConstraint_use_track_normal = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_use_track_normal_);

static EnumPropertyRNA rna_ShrinkwrapConstraint_track_axis_;
PropertyRNA &rna_ShrinkwrapConstraint_track_axis = reinterpret_cast<PropertyRNA &>(rna_ShrinkwrapConstraint_track_axis_);

StructRNA *RNA_ShrinkwrapConstraint;
void register_struct_ShrinkwrapConstraint(BlenderRNA &brna)
{
	rna_ShrinkwrapConstraint_target_ = {
		{&rna_ShrinkwrapConstraint_shrinkwrap_type, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target Mesh object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShrinkwrapConstraint_target_get, ShrinkwrapConstraint_target_set, nullptr, rna_Mesh_object_poll,RNA_Object
	};

	static const EnumPropertyItem rna_ShrinkwrapConstraint_shrinkwrap_type_items[5] = {
		{0, "NEAREST_SURFACE", 0, "Nearest Surface Point", "Shrink the location to the nearest target surface"	},
		{1, "PROJECT", 0, "Project", "Shrink the location to the nearest target surface along a given axis"	},
		{2, "NEAREST_VERTEX", 0, "Nearest Vertex", "Shrink the location to the nearest target vertex"	},
		{3, "TARGET_PROJECT", 0, "Target Normal Project", "Shrink the location to the nearest target surface along the interpolated vertex normals of the target"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShrinkwrapConstraint_shrinkwrap_type_ = {
		{&rna_ShrinkwrapConstraint_wrap_mode, 	&rna_ShrinkwrapConstraint_target,
		-1, "shrinkwrap_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shrinkwrap Type",
		"Select type of shrinkwrap algorithm for target position",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bShrinkwrapConstraint, shrinkType), RawPropertyType(1), nullptr},
		ShrinkwrapConstraint_shrinkwrap_type_get, ShrinkwrapConstraint_shrinkwrap_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShrinkwrapConstraint_shrinkwrap_type_items, 4, 0
	};

	rna_ShrinkwrapConstraint_wrap_mode_ = {
		{&rna_ShrinkwrapConstraint_distance, 	&rna_ShrinkwrapConstraint_shrinkwrap_type,
		-1, "wrap_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Snap Mode",
		"Select how to constrain the object to the target surface",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bShrinkwrapConstraint, shrinkMode), RawPropertyType(2), nullptr},
		ShrinkwrapConstraint_wrap_mode_get, ShrinkwrapConstraint_wrap_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_modifier_shrinkwrap_mode_items, 5, 0
	};

	rna_ShrinkwrapConstraint_distance_ = {
		{&rna_ShrinkwrapConstraint_project_axis, 	&rna_ShrinkwrapConstraint_wrap_mode,
		-1, "distance", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Distance",
		"Distance to Target",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bShrinkwrapConstraint, dist), RawPropertyType(5), nullptr},
		ShrinkwrapConstraint_distance_get, ShrinkwrapConstraint_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShrinkwrapConstraint_project_axis_ = {
		{&rna_ShrinkwrapConstraint_project_axis_space, 	&rna_ShrinkwrapConstraint_distance,
		-1, "project_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Project Axis",
		"Axis constrain to",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bShrinkwrapConstraint, projAxis), RawPropertyType(2), nullptr},
		ShrinkwrapConstraint_project_axis_get, ShrinkwrapConstraint_project_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 0
	};

	static const EnumPropertyItem rna_ShrinkwrapConstraint_project_axis_space_items[7] = {
		{0, "WORLD", 0, "World Space", "The constraint is applied relative to the world coordinate system"	},
		{5, "CUSTOM", 0, "Custom Space", "The constraint is applied in local space of a custom object/bone/vertex group"	},
		{0, "", 0, nullptr, nullptr	},
		{2, "POSE", 0, "Pose Space", "The constraint is applied in Pose Space, the object transformation is ignored"	},
		{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The constraint is applied relative to the rest pose local coordinate system of the bone, thus including the parent-induced transformation"	},
		{1, "LOCAL", 0, "Local Space", "The constraint is applied relative to the local coordinate system of the object"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShrinkwrapConstraint_project_axis_space_ = {
		{&rna_ShrinkwrapConstraint_project_limit, 	&rna_ShrinkwrapConstraint_project_axis,
		-1, "project_axis_space", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Axis Space",
		"Space for the projection axis",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bShrinkwrapConstraint, projAxisSpace), RawPropertyType(2), nullptr},
		ShrinkwrapConstraint_project_axis_space_get, ShrinkwrapConstraint_project_axis_space_set, rna_Constraint_owner_space_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShrinkwrapConstraint_project_axis_space_items, 6, 0
	};

	rna_ShrinkwrapConstraint_project_limit_ = {
		{&rna_ShrinkwrapConstraint_use_project_opposite, 	&rna_ShrinkwrapConstraint_project_axis_space,
		-1, "project_limit", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Project Distance",
		"Limit the distance used for projection (zero disables)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bShrinkwrapConstraint, projLimit), RawPropertyType(5), nullptr},
		ShrinkwrapConstraint_project_limit_get, ShrinkwrapConstraint_project_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShrinkwrapConstraint_use_project_opposite_ = {
		{&rna_ShrinkwrapConstraint_cull_face, 	&rna_ShrinkwrapConstraint_project_limit,
		-1, "use_project_opposite", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Project Opposite",
		"Project in both specified and opposite directions",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShrinkwrapConstraint_use_project_opposite_get, ShrinkwrapConstraint_use_project_opposite_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_ShrinkwrapConstraint_cull_face_items[4] = {
		{0, "OFF", 0, "Off", "No culling"	},
		{8, "FRONT", 0, "Front", "No projection when in front of the face"	},
		{16, "BACK", 0, "Back", "No projection when behind the face"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShrinkwrapConstraint_cull_face_ = {
		{&rna_ShrinkwrapConstraint_use_invert_cull, 	&rna_ShrinkwrapConstraint_use_project_opposite,
		-1, "cull_face", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Face Cull",
		"Stop vertices from projecting to a face on the target when facing towards/away",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShrinkwrapConstraint_cull_face_get, ShrinkwrapConstraint_cull_face_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShrinkwrapConstraint_cull_face_items, 3, 0
	};

	rna_ShrinkwrapConstraint_use_invert_cull_ = {
		{&rna_ShrinkwrapConstraint_use_track_normal, 	&rna_ShrinkwrapConstraint_cull_face,
		-1, "use_invert_cull", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Invert Cull",
		"When projecting in the opposite direction invert the face cull mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShrinkwrapConstraint_use_invert_cull_get, ShrinkwrapConstraint_use_invert_cull_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShrinkwrapConstraint_use_track_normal_ = {
		{&rna_ShrinkwrapConstraint_track_axis, 	&rna_ShrinkwrapConstraint_use_invert_cull,
		-1, "use_track_normal", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Align Axis To Normal",
		"Align the specified axis to the surface normal",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShrinkwrapConstraint_use_track_normal_get, ShrinkwrapConstraint_use_track_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_ShrinkwrapConstraint_track_axis_items[7] = {
		{0, "TRACK_X", 0, "X", ""	},
		{1, "TRACK_Y", 0, "Y", ""	},
		{2, "TRACK_Z", 0, "Z", ""	},
		{3, "TRACK_NEGATIVE_X", 0, "-X", ""	},
		{4, "TRACK_NEGATIVE_Y", 0, "-Y", ""	},
		{5, "TRACK_NEGATIVE_Z", 0, "-Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShrinkwrapConstraint_track_axis_ = {
		{nullptr, 	&rna_ShrinkwrapConstraint_use_track_normal,
		-1, "track_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Track Axis",
		"Axis that is aligned to the normal",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bShrinkwrapConstraint, trackAxis), RawPropertyType(2), nullptr},
		ShrinkwrapConstraint_track_axis_get, ShrinkwrapConstraint_track_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShrinkwrapConstraint_track_axis_items, 6, 0
	};

	StructRNA *srna = RNA_ShrinkwrapConstraint;
	srna->cont.properties = {&rna_ShrinkwrapConstraint_target, &rna_ShrinkwrapConstraint_track_axis};
	srna->identifier = "ShrinkwrapConstraint";
	srna->flag = 516;
	srna->name = "Shrinkwrap Constraint";
	srna->description = "Create constraint-based shrinkwrap relationship";
	srna->translation_context = "*";
	srna->icon = 436;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Damped Track Constraint */
static FloatPropertyRNA rna_DampedTrackConstraint_head_tail_;
PropertyRNA &rna_DampedTrackConstraint_head_tail = reinterpret_cast<PropertyRNA &>(rna_DampedTrackConstraint_head_tail_);

static BoolPropertyRNA rna_DampedTrackConstraint_use_bbone_shape_;
PropertyRNA &rna_DampedTrackConstraint_use_bbone_shape = reinterpret_cast<PropertyRNA &>(rna_DampedTrackConstraint_use_bbone_shape_);

static PointerPropertyRNA rna_DampedTrackConstraint_target_;
PropertyRNA &rna_DampedTrackConstraint_target = reinterpret_cast<PropertyRNA &>(rna_DampedTrackConstraint_target_);

static StringPropertyRNA rna_DampedTrackConstraint_subtarget_;
PropertyRNA &rna_DampedTrackConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_DampedTrackConstraint_subtarget_);

static EnumPropertyRNA rna_DampedTrackConstraint_track_axis_;
PropertyRNA &rna_DampedTrackConstraint_track_axis = reinterpret_cast<PropertyRNA &>(rna_DampedTrackConstraint_track_axis_);

StructRNA *RNA_DampedTrackConstraint;
void register_struct_DampedTrackConstraint(BlenderRNA &brna)
{
	rna_DampedTrackConstraint_head_tail_ = {
		{&rna_DampedTrackConstraint_use_bbone_shape, 	nullptr,
		-1, "head_tail", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Head/Tail",
		"Target along length of bone: Head is 0, Tail is 1",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, headtail), RawPropertyType(5), nullptr},
		DampedTrackConstraint_head_tail_get, DampedTrackConstraint_head_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DampedTrackConstraint_use_bbone_shape_ = {
		{&rna_DampedTrackConstraint_target, 	&rna_DampedTrackConstraint_head_tail,
		-1, "use_bbone_shape", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Follow B-Bone",
		"Follow shape of B-Bone segments when calculating Head/Tail position",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DampedTrackConstraint_use_bbone_shape_get, DampedTrackConstraint_use_bbone_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DampedTrackConstraint_target_ = {
		{&rna_DampedTrackConstraint_subtarget, 	&rna_DampedTrackConstraint_use_bbone_shape,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DampedTrackConstraint_target_get, DampedTrackConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_DampedTrackConstraint_subtarget_ = {
		{&rna_DampedTrackConstraint_track_axis, 	&rna_DampedTrackConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"Armature bone, mesh or lattice vertex group, ...",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DampedTrackConstraint_subtarget_get, DampedTrackConstraint_subtarget_length, DampedTrackConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_DampedTrackConstraint_track_axis_items[7] = {
		{0, "TRACK_X", 0, "X", ""	},
		{1, "TRACK_Y", 0, "Y", ""	},
		{2, "TRACK_Z", 0, "Z", ""	},
		{3, "TRACK_NEGATIVE_X", 0, "-X", ""	},
		{4, "TRACK_NEGATIVE_Y", 0, "-Y", ""	},
		{5, "TRACK_NEGATIVE_Z", 0, "-Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DampedTrackConstraint_track_axis_ = {
		{nullptr, 	&rna_DampedTrackConstraint_subtarget,
		-1, "track_axis", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Track Axis",
		"Axis that points to the target object",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bDampTrackConstraint, trackflag), RawPropertyType(0), nullptr},
		DampedTrackConstraint_track_axis_get, DampedTrackConstraint_track_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DampedTrackConstraint_track_axis_items, 6, 0
	};

	StructRNA *srna = RNA_DampedTrackConstraint;
	srna->cont.properties = {&rna_DampedTrackConstraint_head_tail, &rna_DampedTrackConstraint_track_axis};
	srna->identifier = "DampedTrackConstraint";
	srna->flag = 516;
	srna->name = "Damped Track Constraint";
	srna->description = "Point toward target by taking the shortest rotation path";
	srna->translation_context = "*";
	srna->icon = 441;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Spline IK Constraint */
static PointerPropertyRNA rna_SplineIKConstraint_target_;
PropertyRNA &rna_SplineIKConstraint_target = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_target_);

static IntPropertyRNA rna_SplineIKConstraint_chain_count_;
PropertyRNA &rna_SplineIKConstraint_chain_count = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_chain_count_);

static FloatPropertyRNA rna_SplineIKConstraint_joint_bindings_;
PropertyRNA &rna_SplineIKConstraint_joint_bindings = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_joint_bindings_);

static BoolPropertyRNA rna_SplineIKConstraint_use_chain_offset_;
PropertyRNA &rna_SplineIKConstraint_use_chain_offset = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_use_chain_offset_);

static BoolPropertyRNA rna_SplineIKConstraint_use_even_divisions_;
PropertyRNA &rna_SplineIKConstraint_use_even_divisions = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_use_even_divisions_);

static BoolPropertyRNA rna_SplineIKConstraint_use_curve_radius_;
PropertyRNA &rna_SplineIKConstraint_use_curve_radius = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_use_curve_radius_);

static EnumPropertyRNA rna_SplineIKConstraint_xz_scale_mode_;
PropertyRNA &rna_SplineIKConstraint_xz_scale_mode = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_xz_scale_mode_);

static EnumPropertyRNA rna_SplineIKConstraint_y_scale_mode_;
PropertyRNA &rna_SplineIKConstraint_y_scale_mode = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_y_scale_mode_);

static BoolPropertyRNA rna_SplineIKConstraint_use_original_scale_;
PropertyRNA &rna_SplineIKConstraint_use_original_scale = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_use_original_scale_);

static FloatPropertyRNA rna_SplineIKConstraint_bulge_;
PropertyRNA &rna_SplineIKConstraint_bulge = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_bulge_);

static BoolPropertyRNA rna_SplineIKConstraint_use_bulge_min_;
PropertyRNA &rna_SplineIKConstraint_use_bulge_min = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_use_bulge_min_);

static BoolPropertyRNA rna_SplineIKConstraint_use_bulge_max_;
PropertyRNA &rna_SplineIKConstraint_use_bulge_max = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_use_bulge_max_);

static FloatPropertyRNA rna_SplineIKConstraint_bulge_min_;
PropertyRNA &rna_SplineIKConstraint_bulge_min = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_bulge_min_);

static FloatPropertyRNA rna_SplineIKConstraint_bulge_max_;
PropertyRNA &rna_SplineIKConstraint_bulge_max = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_bulge_max_);

static FloatPropertyRNA rna_SplineIKConstraint_bulge_smooth_;
PropertyRNA &rna_SplineIKConstraint_bulge_smooth = reinterpret_cast<PropertyRNA &>(rna_SplineIKConstraint_bulge_smooth_);

StructRNA *RNA_SplineIKConstraint;
void register_struct_SplineIKConstraint(BlenderRNA &brna)
{
	rna_SplineIKConstraint_target_ = {
		{&rna_SplineIKConstraint_chain_count, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Curve that controls this relationship",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplineIKConstraint_target_get, SplineIKConstraint_target_set, nullptr, rna_Curve_object_poll,RNA_Object
	};

	rna_SplineIKConstraint_chain_count_ = {
		{&rna_SplineIKConstraint_joint_bindings, 	&rna_SplineIKConstraint_target,
		-1, "chain_count", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Chain Length",
		"How many bones are included in the chain",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSplineIKConstraint, chainlen), RawPropertyType(1), nullptr},
		SplineIKConstraint_chain_count_get, SplineIKConstraint_chain_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 255, 1, 255, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_SplineIKConstraint_joint_bindings_default[32] = {
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
		0.0f,
		0.0f
	};
	rna_SplineIKConstraint_joint_bindings_ = {
		{&rna_SplineIKConstraint_use_chain_offset, 	&rna_SplineIKConstraint_chain_count,
		-1, "joint_bindings", 131075, 1, 0, 0, 0, PropertyPathTemplateType(0), "Joint Bindings",
		"(EXPERIENCED USERS ONLY) The relative positions of the joints along the chain, as percentages",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), rna_SplineIKConstraint_joint_bindings_get_length, 1, {32, 0, 0}, 32,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, SplineIKConstraint_joint_bindings_get, SplineIKConstraint_joint_bindings_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_SplineIKConstraint_joint_bindings_default
	};

	rna_SplineIKConstraint_use_chain_offset_ = {
		{&rna_SplineIKConstraint_use_even_divisions, 	&rna_SplineIKConstraint_joint_bindings,
		-1, "use_chain_offset", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Chain Offset",
		"Offset the entire chain relative to the root joint",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplineIKConstraint_use_chain_offset_get, SplineIKConstraint_use_chain_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SplineIKConstraint_use_even_divisions_ = {
		{&rna_SplineIKConstraint_use_curve_radius, 	&rna_SplineIKConstraint_use_chain_offset,
		-1, "use_even_divisions", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Even Divisions",
		"Ignore the relative lengths of the bones when fitting to the curve",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplineIKConstraint_use_even_divisions_get, SplineIKConstraint_use_even_divisions_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SplineIKConstraint_use_curve_radius_ = {
		{&rna_SplineIKConstraint_xz_scale_mode, 	&rna_SplineIKConstraint_use_even_divisions,
		-1, "use_curve_radius", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Curve Radius",
		"Average radius of the endpoints is used to tweak the X and Z Scaling of the bones, on top of XZ Scale mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplineIKConstraint_use_curve_radius_get, SplineIKConstraint_use_curve_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_SplineIKConstraint_xz_scale_mode_items[5] = {
		{0, "NONE", 0, "None", "Don\'t scale the X and Z axes"	},
		{1, "BONE_ORIGINAL", 0, "Bone Original", "Use the original scaling of the bones"	},
		{2, "INVERSE_PRESERVE", 0, "Inverse Scale", "Scale of the X and Z axes is the inverse of the Y-Scale"	},
		{3, "VOLUME_PRESERVE", 0, "Volume Preservation", "Scale of the X and Z axes are adjusted to preserve the volume of the bones"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_SplineIKConstraint_xz_scale_mode_ = {
		{&rna_SplineIKConstraint_y_scale_mode, 	&rna_SplineIKConstraint_use_curve_radius,
		-1, "xz_scale_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "XZ Scale Mode",
		"Method used for determining the scaling of the X and Z axes of the bones",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSplineIKConstraint, xzScaleMode), RawPropertyType(1), nullptr},
		SplineIKConstraint_xz_scale_mode_get, SplineIKConstraint_xz_scale_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_SplineIKConstraint_xz_scale_mode_items, 4, 0
	};

	static const EnumPropertyItem rna_SplineIKConstraint_y_scale_mode_items[4] = {
		{0, "NONE", 0, "None", "Don\'t scale in the Y axis"	},
		{1, "FIT_CURVE", 0, "Fit Curve", "Scale the bones to fit the entire length of the curve"	},
		{2, "BONE_ORIGINAL", 0, "Bone Original", "Use the original Y scale of the bone"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_SplineIKConstraint_y_scale_mode_ = {
		{&rna_SplineIKConstraint_use_original_scale, 	&rna_SplineIKConstraint_xz_scale_mode,
		-1, "y_scale_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Y Scale Mode",
		"Method used for determining the scaling of the Y axis of the bones, on top of the shape and scaling of the curve itself",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSplineIKConstraint, yScaleMode), RawPropertyType(1), nullptr},
		SplineIKConstraint_y_scale_mode_get, SplineIKConstraint_y_scale_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_SplineIKConstraint_y_scale_mode_items, 3, 0
	};

	rna_SplineIKConstraint_use_original_scale_ = {
		{&rna_SplineIKConstraint_bulge, 	&rna_SplineIKConstraint_y_scale_mode,
		-1, "use_original_scale", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Original Scale",
		"Apply volume preservation over the original scaling",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplineIKConstraint_use_original_scale_get, SplineIKConstraint_use_original_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SplineIKConstraint_bulge_ = {
		{&rna_SplineIKConstraint_use_bulge_min, 	&rna_SplineIKConstraint_use_original_scale,
		-1, "bulge", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Volume Variation",
		"Factor between volume variation and stretching",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSplineIKConstraint, bulge), RawPropertyType(5), nullptr},
		SplineIKConstraint_bulge_get, SplineIKConstraint_bulge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SplineIKConstraint_use_bulge_min_ = {
		{&rna_SplineIKConstraint_use_bulge_max, 	&rna_SplineIKConstraint_bulge,
		-1, "use_bulge_min", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Volume Variation Minimum",
		"Use lower limit for volume variation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplineIKConstraint_use_bulge_min_get, SplineIKConstraint_use_bulge_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SplineIKConstraint_use_bulge_max_ = {
		{&rna_SplineIKConstraint_bulge_min, 	&rna_SplineIKConstraint_use_bulge_min,
		-1, "use_bulge_max", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Volume Variation Maximum",
		"Use upper limit for volume variation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SplineIKConstraint_use_bulge_max_get, SplineIKConstraint_use_bulge_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SplineIKConstraint_bulge_min_ = {
		{&rna_SplineIKConstraint_bulge_max, 	&rna_SplineIKConstraint_use_bulge_max,
		-1, "bulge_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Volume Variation Minimum",
		"Minimum volume stretching factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSplineIKConstraint, bulge_min), RawPropertyType(5), nullptr},
		SplineIKConstraint_bulge_min_get, SplineIKConstraint_bulge_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SplineIKConstraint_bulge_max_ = {
		{&rna_SplineIKConstraint_bulge_smooth, 	&rna_SplineIKConstraint_bulge_min,
		-1, "bulge_max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Volume Variation Maximum",
		"Maximum volume stretching factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSplineIKConstraint, bulge_max), RawPropertyType(5), nullptr},
		SplineIKConstraint_bulge_max_get, SplineIKConstraint_bulge_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 100.0f, 1.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SplineIKConstraint_bulge_smooth_ = {
		{nullptr, 	&rna_SplineIKConstraint_bulge_max,
		-1, "bulge_smooth", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Volume Variation Smoothness",
		"Strength of volume stretching clamping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSplineIKConstraint, bulge_smooth), RawPropertyType(5), nullptr},
		SplineIKConstraint_bulge_smooth_get, SplineIKConstraint_bulge_smooth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_SplineIKConstraint;
	srna->cont.properties = {&rna_SplineIKConstraint_target, &rna_SplineIKConstraint_bulge_smooth};
	srna->identifier = "SplineIKConstraint";
	srna->flag = 516;
	srna->name = "Spline IK Constraint";
	srna->description = "Align \'n\' bones along a curve";
	srna->translation_context = "*";
	srna->icon = 439;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Pivot Constraint */
static FloatPropertyRNA rna_PivotConstraint_head_tail_;
PropertyRNA &rna_PivotConstraint_head_tail = reinterpret_cast<PropertyRNA &>(rna_PivotConstraint_head_tail_);

static BoolPropertyRNA rna_PivotConstraint_use_bbone_shape_;
PropertyRNA &rna_PivotConstraint_use_bbone_shape = reinterpret_cast<PropertyRNA &>(rna_PivotConstraint_use_bbone_shape_);

static PointerPropertyRNA rna_PivotConstraint_target_;
PropertyRNA &rna_PivotConstraint_target = reinterpret_cast<PropertyRNA &>(rna_PivotConstraint_target_);

static StringPropertyRNA rna_PivotConstraint_subtarget_;
PropertyRNA &rna_PivotConstraint_subtarget = reinterpret_cast<PropertyRNA &>(rna_PivotConstraint_subtarget_);

static BoolPropertyRNA rna_PivotConstraint_use_relative_location_;
PropertyRNA &rna_PivotConstraint_use_relative_location = reinterpret_cast<PropertyRNA &>(rna_PivotConstraint_use_relative_location_);

static FloatPropertyRNA rna_PivotConstraint_offset_;
PropertyRNA &rna_PivotConstraint_offset = reinterpret_cast<PropertyRNA &>(rna_PivotConstraint_offset_);

static EnumPropertyRNA rna_PivotConstraint_rotation_range_;
PropertyRNA &rna_PivotConstraint_rotation_range = reinterpret_cast<PropertyRNA &>(rna_PivotConstraint_rotation_range_);

StructRNA *RNA_PivotConstraint;
void register_struct_PivotConstraint(BlenderRNA &brna)
{
	rna_PivotConstraint_head_tail_ = {
		{&rna_PivotConstraint_use_bbone_shape, 	nullptr,
		-1, "head_tail", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Head/Tail",
		"Target along length of bone: Head is 0, Tail is 1",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bConstraint, headtail), RawPropertyType(5), nullptr},
		PivotConstraint_head_tail_get, PivotConstraint_head_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PivotConstraint_use_bbone_shape_ = {
		{&rna_PivotConstraint_target, 	&rna_PivotConstraint_head_tail,
		-1, "use_bbone_shape", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Follow B-Bone",
		"Follow shape of B-Bone segments when calculating Head/Tail position",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PivotConstraint_use_bbone_shape_get, PivotConstraint_use_bbone_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_PivotConstraint_target_ = {
		{&rna_PivotConstraint_subtarget, 	&rna_PivotConstraint_use_bbone_shape,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target Object, defining the position of the pivot when defined",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PivotConstraint_target_get, PivotConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_PivotConstraint_subtarget_ = {
		{&rna_PivotConstraint_use_relative_location, 	&rna_PivotConstraint_target,
		-1, "subtarget", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sub-Target",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PivotConstraint_subtarget_get, PivotConstraint_subtarget_length, PivotConstraint_subtarget_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_PivotConstraint_use_relative_location_ = {
		{&rna_PivotConstraint_offset, 	&rna_PivotConstraint_subtarget,
		-1, "use_relative_location", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Relative Offset",
		"Offset will be an absolute point in space instead of relative to the target",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PivotConstraint_use_relative_location_get, PivotConstraint_use_relative_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static float rna_PivotConstraint_offset_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PivotConstraint_offset_ = {
		{&rna_PivotConstraint_rotation_range, 	&rna_PivotConstraint_use_relative_location,
		-1, "offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Offset of pivot from target (when set), or from owner\'s location (when Fixed Position is off), or the absolute pivot point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPivotConstraint, offset), RawPropertyType(5), nullptr},
		nullptr, nullptr, PivotConstraint_offset_get, PivotConstraint_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PivotConstraint_offset_default
	};

	static const EnumPropertyItem rna_PivotConstraint_rotation_range_items[8] = {
		{-1, "ALWAYS_ACTIVE", 0, "Always", "Use the pivot point in every rotation"	},
		{0, "NX", 0, "-X Rotation", "Use the pivot point in the negative rotation range around the X-axis"	},
		{1, "NY", 0, "-Y Rotation", "Use the pivot point in the negative rotation range around the Y-axis"	},
		{2, "NZ", 0, "-Z Rotation", "Use the pivot point in the negative rotation range around the Z-axis"	},
		{3, "X", 0, "X Rotation", "Use the pivot point in the positive rotation range around the X-axis"	},
		{4, "Y", 0, "Y Rotation", "Use the pivot point in the positive rotation range around the Y-axis"	},
		{5, "Z", 0, "Z Rotation", "Use the pivot point in the positive rotation range around the Z-axis"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_PivotConstraint_rotation_range_ = {
		{nullptr, 	&rna_PivotConstraint_offset,
		-1, "rotation_range", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Enabled Rotation Range",
		"Rotation range on which pivoting should occur",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bPivotConstraint, rotAxis), RawPropertyType(1), nullptr},
		PivotConstraint_rotation_range_get, PivotConstraint_rotation_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_PivotConstraint_rotation_range_items, 7, -1
	};

	StructRNA *srna = RNA_PivotConstraint;
	srna->cont.properties = {&rna_PivotConstraint_head_tail, &rna_PivotConstraint_rotation_range};
	srna->identifier = "PivotConstraint";
	srna->flag = 516;
	srna->name = "Pivot Constraint";
	srna->description = "Rotate around a different point";
	srna->translation_context = "*";
	srna->icon = 432;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Follow Track Constraint */
static PointerPropertyRNA rna_FollowTrackConstraint_clip_;
PropertyRNA &rna_FollowTrackConstraint_clip = reinterpret_cast<PropertyRNA &>(rna_FollowTrackConstraint_clip_);

static StringPropertyRNA rna_FollowTrackConstraint_track_;
PropertyRNA &rna_FollowTrackConstraint_track = reinterpret_cast<PropertyRNA &>(rna_FollowTrackConstraint_track_);

static BoolPropertyRNA rna_FollowTrackConstraint_use_active_clip_;
PropertyRNA &rna_FollowTrackConstraint_use_active_clip = reinterpret_cast<PropertyRNA &>(rna_FollowTrackConstraint_use_active_clip_);

static BoolPropertyRNA rna_FollowTrackConstraint_use_3d_position_;
PropertyRNA &rna_FollowTrackConstraint_use_3d_position = reinterpret_cast<PropertyRNA &>(rna_FollowTrackConstraint_use_3d_position_);

static StringPropertyRNA rna_FollowTrackConstraint_object_;
PropertyRNA &rna_FollowTrackConstraint_object = reinterpret_cast<PropertyRNA &>(rna_FollowTrackConstraint_object_);

static PointerPropertyRNA rna_FollowTrackConstraint_camera_;
PropertyRNA &rna_FollowTrackConstraint_camera = reinterpret_cast<PropertyRNA &>(rna_FollowTrackConstraint_camera_);

static PointerPropertyRNA rna_FollowTrackConstraint_depth_object_;
PropertyRNA &rna_FollowTrackConstraint_depth_object = reinterpret_cast<PropertyRNA &>(rna_FollowTrackConstraint_depth_object_);

static EnumPropertyRNA rna_FollowTrackConstraint_frame_method_;
PropertyRNA &rna_FollowTrackConstraint_frame_method = reinterpret_cast<PropertyRNA &>(rna_FollowTrackConstraint_frame_method_);

static BoolPropertyRNA rna_FollowTrackConstraint_use_undistorted_position_;
PropertyRNA &rna_FollowTrackConstraint_use_undistorted_position = reinterpret_cast<PropertyRNA &>(rna_FollowTrackConstraint_use_undistorted_position_);

StructRNA *RNA_FollowTrackConstraint;
void register_struct_FollowTrackConstraint(BlenderRNA &brna)
{
	rna_FollowTrackConstraint_clip_ = {
		{&rna_FollowTrackConstraint_track, 	nullptr,
		-1, "clip", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Movie Clip",
		"Movie Clip to get tracking data from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowTrackConstraint_clip_get, FollowTrackConstraint_clip_set, nullptr, nullptr,RNA_MovieClip
	};

	rna_FollowTrackConstraint_track_ = {
		{&rna_FollowTrackConstraint_use_active_clip, 	&rna_FollowTrackConstraint_clip,
		-1, "track", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Track",
		"Movie tracking track to follow",
		0, "MovieClip",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowTrackConstraint_track_get, FollowTrackConstraint_track_length, FollowTrackConstraint_track_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_FollowTrackConstraint_use_active_clip_ = {
		{&rna_FollowTrackConstraint_use_3d_position, 	&rna_FollowTrackConstraint_track,
		-1, "use_active_clip", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Clip",
		"Use active clip defined in scene",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowTrackConstraint_use_active_clip_get, FollowTrackConstraint_use_active_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FollowTrackConstraint_use_3d_position_ = {
		{&rna_FollowTrackConstraint_object, 	&rna_FollowTrackConstraint_use_active_clip,
		-1, "use_3d_position", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "3D Position",
		"Use 3D position of track to parent to",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowTrackConstraint_use_3d_position_get, FollowTrackConstraint_use_3d_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FollowTrackConstraint_object_ = {
		{&rna_FollowTrackConstraint_camera, 	&rna_FollowTrackConstraint_use_3d_position,
		-1, "object", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Movie tracking object to follow (if empty, camera object is used)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowTrackConstraint_object_get, FollowTrackConstraint_object_length, FollowTrackConstraint_object_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_FollowTrackConstraint_camera_ = {
		{&rna_FollowTrackConstraint_depth_object, 	&rna_FollowTrackConstraint_object,
		-1, "camera", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Camera",
		"Camera to which motion is parented (if empty active scene camera is used)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowTrackConstraint_camera_get, FollowTrackConstraint_camera_set, nullptr, rna_Constraint_cameraObject_poll,RNA_Object
	};

	rna_FollowTrackConstraint_depth_object_ = {
		{&rna_FollowTrackConstraint_frame_method, 	&rna_FollowTrackConstraint_camera,
		-1, "depth_object", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Depth Object",
		"Object used to define depth in camera space by projecting onto surface of this object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowTrackConstraint_depth_object_get, FollowTrackConstraint_depth_object_set, nullptr, rna_Constraint_followTrack_depthObject_poll,RNA_Object
	};

	static const EnumPropertyItem rna_FollowTrackConstraint_frame_method_items[4] = {
		{0, "STRETCH", 0, "Stretch", ""	},
		{1, "FIT", 0, "Fit", ""	},
		{2, "CROP", 0, "Crop", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FollowTrackConstraint_frame_method_ = {
		{&rna_FollowTrackConstraint_use_undistorted_position, 	&rna_FollowTrackConstraint_depth_object,
		-1, "frame_method", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Frame Method",
		"How the footage fits in the camera frame",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bFollowTrackConstraint, frame_method), RawPropertyType(0), nullptr},
		FollowTrackConstraint_frame_method_get, FollowTrackConstraint_frame_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FollowTrackConstraint_frame_method_items, 3, 0
	};

	rna_FollowTrackConstraint_use_undistorted_position_ = {
		{nullptr, 	&rna_FollowTrackConstraint_frame_method,
		-1, "use_undistorted_position", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Undistort",
		"Parent to undistorted position of 2D track",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FollowTrackConstraint_use_undistorted_position_get, FollowTrackConstraint_use_undistorted_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_FollowTrackConstraint;
	srna->cont.properties = {&rna_FollowTrackConstraint_clip, &rna_FollowTrackConstraint_use_undistorted_position};
	srna->identifier = "FollowTrackConstraint";
	srna->flag = 516;
	srna->name = "Follow Track Constraint";
	srna->description = "Lock motion to the target motion track";
	srna->translation_context = "*";
	srna->icon = 426;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Camera Solver Constraint */
static PointerPropertyRNA rna_CameraSolverConstraint_clip_;
PropertyRNA &rna_CameraSolverConstraint_clip = reinterpret_cast<PropertyRNA &>(rna_CameraSolverConstraint_clip_);

static BoolPropertyRNA rna_CameraSolverConstraint_use_active_clip_;
PropertyRNA &rna_CameraSolverConstraint_use_active_clip = reinterpret_cast<PropertyRNA &>(rna_CameraSolverConstraint_use_active_clip_);

StructRNA *RNA_CameraSolverConstraint;
void register_struct_CameraSolverConstraint(BlenderRNA &brna)
{
	rna_CameraSolverConstraint_clip_ = {
		{&rna_CameraSolverConstraint_use_active_clip, 	nullptr,
		-1, "clip", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Movie Clip",
		"Movie Clip to get tracking data from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraSolverConstraint_clip_get, CameraSolverConstraint_clip_set, nullptr, nullptr,RNA_MovieClip
	};

	rna_CameraSolverConstraint_use_active_clip_ = {
		{nullptr, 	&rna_CameraSolverConstraint_clip,
		-1, "use_active_clip", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Clip",
		"Use active clip defined in scene",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CameraSolverConstraint_use_active_clip_get, CameraSolverConstraint_use_active_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_CameraSolverConstraint;
	srna->cont.properties = {&rna_CameraSolverConstraint_clip, &rna_CameraSolverConstraint_use_active_clip};
	srna->identifier = "CameraSolverConstraint";
	srna->flag = 516;
	srna->name = "Camera Solver Constraint";
	srna->description = "Lock motion to the reconstructed camera movement";
	srna->translation_context = "*";
	srna->icon = 420;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Object Solver Constraint */
static PointerPropertyRNA rna_ObjectSolverConstraint_clip_;
PropertyRNA &rna_ObjectSolverConstraint_clip = reinterpret_cast<PropertyRNA &>(rna_ObjectSolverConstraint_clip_);

static BoolPropertyRNA rna_ObjectSolverConstraint_use_active_clip_;
PropertyRNA &rna_ObjectSolverConstraint_use_active_clip = reinterpret_cast<PropertyRNA &>(rna_ObjectSolverConstraint_use_active_clip_);

static BoolPropertyRNA rna_ObjectSolverConstraint_set_inverse_pending_;
PropertyRNA &rna_ObjectSolverConstraint_set_inverse_pending = reinterpret_cast<PropertyRNA &>(rna_ObjectSolverConstraint_set_inverse_pending_);

static StringPropertyRNA rna_ObjectSolverConstraint_object_;
PropertyRNA &rna_ObjectSolverConstraint_object = reinterpret_cast<PropertyRNA &>(rna_ObjectSolverConstraint_object_);

static PointerPropertyRNA rna_ObjectSolverConstraint_camera_;
PropertyRNA &rna_ObjectSolverConstraint_camera = reinterpret_cast<PropertyRNA &>(rna_ObjectSolverConstraint_camera_);

StructRNA *RNA_ObjectSolverConstraint;
void register_struct_ObjectSolverConstraint(BlenderRNA &brna)
{
	rna_ObjectSolverConstraint_clip_ = {
		{&rna_ObjectSolverConstraint_use_active_clip, 	nullptr,
		-1, "clip", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Movie Clip",
		"Movie Clip to get tracking data from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectSolverConstraint_clip_get, ObjectSolverConstraint_clip_set, nullptr, nullptr,RNA_MovieClip
	};

	rna_ObjectSolverConstraint_use_active_clip_ = {
		{&rna_ObjectSolverConstraint_set_inverse_pending, 	&rna_ObjectSolverConstraint_clip,
		-1, "use_active_clip", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Clip",
		"Use active clip defined in scene",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectSolverConstraint_use_active_clip_get, ObjectSolverConstraint_use_active_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ObjectSolverConstraint_set_inverse_pending_ = {
		{&rna_ObjectSolverConstraint_object, 	&rna_ObjectSolverConstraint_use_active_clip,
		-1, "set_inverse_pending", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Set Inverse Pending",
		"Set to true to request recalculation of the inverse matrix",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectSolverConstraint_set_inverse_pending_get, ObjectSolverConstraint_set_inverse_pending_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ObjectSolverConstraint_object_ = {
		{&rna_ObjectSolverConstraint_camera, 	&rna_ObjectSolverConstraint_set_inverse_pending,
		-1, "object", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Movie tracking object to follow",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectSolverConstraint_object_get, ObjectSolverConstraint_object_length, ObjectSolverConstraint_object_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_ObjectSolverConstraint_camera_ = {
		{nullptr, 	&rna_ObjectSolverConstraint_object,
		-1, "camera", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Camera",
		"Camera to which motion is parented (if empty active scene camera is used)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectSolverConstraint_camera_get, ObjectSolverConstraint_camera_set, nullptr, rna_Constraint_cameraObject_poll,RNA_Object
	};

	StructRNA *srna = RNA_ObjectSolverConstraint;
	srna->cont.properties = {&rna_ObjectSolverConstraint_clip, &rna_ObjectSolverConstraint_camera};
	srna->identifier = "ObjectSolverConstraint";
	srna->flag = 516;
	srna->name = "Object Solver Constraint";
	srna->description = "Lock motion to the reconstructed object movement";
	srna->translation_context = "*";
	srna->icon = 431;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Transform Cache Constraint */
static PointerPropertyRNA rna_TransformCacheConstraint_cache_file_;
PropertyRNA &rna_TransformCacheConstraint_cache_file = reinterpret_cast<PropertyRNA &>(rna_TransformCacheConstraint_cache_file_);

static StringPropertyRNA rna_TransformCacheConstraint_object_path_;
PropertyRNA &rna_TransformCacheConstraint_object_path = reinterpret_cast<PropertyRNA &>(rna_TransformCacheConstraint_object_path_);

StructRNA *RNA_TransformCacheConstraint;
void register_struct_TransformCacheConstraint(BlenderRNA &brna)
{
	rna_TransformCacheConstraint_cache_file_ = {
		{&rna_TransformCacheConstraint_object_path, 	nullptr,
		-1, "cache_file", 9437377, 1, 0, 0, 0, PropertyPathTemplateType(0), "Cache File",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TransformCacheConstraint_cache_file_get, TransformCacheConstraint_cache_file_set, nullptr, nullptr,RNA_CacheFile
	};

	rna_TransformCacheConstraint_object_path_ = {
		{nullptr, 	&rna_TransformCacheConstraint_cache_file,
		-1, "object_path", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object Path",
		"Path to the object in the Alembic archive used to lookup the transform matrix",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_Constraint_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TransformCacheConstraint_object_path_get, TransformCacheConstraint_object_path_length, TransformCacheConstraint_object_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	StructRNA *srna = RNA_TransformCacheConstraint;
	srna->cont.properties = {&rna_TransformCacheConstraint_cache_file, &rna_TransformCacheConstraint_object_path};
	srna->identifier = "TransformCacheConstraint";
	srna->flag = 516;
	srna->name = "Transform Cache Constraint";
	srna->description = "Look up transformation from an external file";
	srna->translation_context = "*";
	srna->icon = 442;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};

/* Geometry Attribute Constraint */
static PointerPropertyRNA rna_GeometryAttributeConstraint_target_;
PropertyRNA &rna_GeometryAttributeConstraint_target = reinterpret_cast<PropertyRNA &>(rna_GeometryAttributeConstraint_target_);

static StringPropertyRNA rna_GeometryAttributeConstraint_attribute_name_;
PropertyRNA &rna_GeometryAttributeConstraint_attribute_name = reinterpret_cast<PropertyRNA &>(rna_GeometryAttributeConstraint_attribute_name_);

static EnumPropertyRNA rna_GeometryAttributeConstraint_domain_;
PropertyRNA &rna_GeometryAttributeConstraint_domain = reinterpret_cast<PropertyRNA &>(rna_GeometryAttributeConstraint_domain_);

static BoolPropertyRNA rna_GeometryAttributeConstraint_apply_target_transform_;
PropertyRNA &rna_GeometryAttributeConstraint_apply_target_transform = reinterpret_cast<PropertyRNA &>(rna_GeometryAttributeConstraint_apply_target_transform_);

static EnumPropertyRNA rna_GeometryAttributeConstraint_data_type_;
PropertyRNA &rna_GeometryAttributeConstraint_data_type = reinterpret_cast<PropertyRNA &>(rna_GeometryAttributeConstraint_data_type_);

static IntPropertyRNA rna_GeometryAttributeConstraint_sample_index_;
PropertyRNA &rna_GeometryAttributeConstraint_sample_index = reinterpret_cast<PropertyRNA &>(rna_GeometryAttributeConstraint_sample_index_);

static BoolPropertyRNA rna_GeometryAttributeConstraint_mix_loc_;
PropertyRNA &rna_GeometryAttributeConstraint_mix_loc = reinterpret_cast<PropertyRNA &>(rna_GeometryAttributeConstraint_mix_loc_);

static BoolPropertyRNA rna_GeometryAttributeConstraint_mix_rot_;
PropertyRNA &rna_GeometryAttributeConstraint_mix_rot = reinterpret_cast<PropertyRNA &>(rna_GeometryAttributeConstraint_mix_rot_);

static BoolPropertyRNA rna_GeometryAttributeConstraint_mix_scl_;
PropertyRNA &rna_GeometryAttributeConstraint_mix_scl = reinterpret_cast<PropertyRNA &>(rna_GeometryAttributeConstraint_mix_scl_);

static EnumPropertyRNA rna_GeometryAttributeConstraint_mix_mode_;
PropertyRNA &rna_GeometryAttributeConstraint_mix_mode = reinterpret_cast<PropertyRNA &>(rna_GeometryAttributeConstraint_mix_mode_);

StructRNA *RNA_GeometryAttributeConstraint;
void register_struct_GeometryAttributeConstraint(BlenderRNA &brna)
{
	rna_GeometryAttributeConstraint_target_ = {
		{&rna_GeometryAttributeConstraint_attribute_name, 	nullptr,
		-1, "target", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target",
		"Target geometry object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_dependency_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GeometryAttributeConstraint_target_get, GeometryAttributeConstraint_target_set, nullptr, nullptr,RNA_Object
	};

	rna_GeometryAttributeConstraint_attribute_name_ = {
		{&rna_GeometryAttributeConstraint_domain, 	&rna_GeometryAttributeConstraint_target,
		-1, "attribute_name", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Attribute Name",
		"Name of the attribute to retrieve the transform from",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GeometryAttributeConstraint_attribute_name_get, GeometryAttributeConstraint_attribute_name_length, GeometryAttributeConstraint_attribute_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	static const EnumPropertyItem rna_GeometryAttributeConstraint_domain_items[7] = {
		{0, "POINT", 0, "Point", nullptr	},
		{1, "EDGE", 0, "Edge", nullptr	},
		{2, "FACE", 0, "Face", nullptr	},
		{3, "FACE_CORNER", 0, "Face Corner", nullptr	},
		{4, "CURVE", 0, "Spline", nullptr	},
		{5, "INSTANCE", 0, "Instance", nullptr	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GeometryAttributeConstraint_domain_ = {
		{&rna_GeometryAttributeConstraint_apply_target_transform, 	&rna_GeometryAttributeConstraint_attribute_name,
		-1, "domain", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Domain Type",
		"Attribute domain",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGeometryAttributeConstraint, domain), RawPropertyType(6), nullptr},
		GeometryAttributeConstraint_domain_get, GeometryAttributeConstraint_domain_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GeometryAttributeConstraint_domain_items, 6, 0
	};

	rna_GeometryAttributeConstraint_apply_target_transform_ = {
		{&rna_GeometryAttributeConstraint_data_type, 	&rna_GeometryAttributeConstraint_domain,
		-1, "apply_target_transform", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target Transform",
		"Apply the target object\'s world transform on top of the attribute\'s transform",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GeometryAttributeConstraint_apply_target_transform_get, GeometryAttributeConstraint_apply_target_transform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_GeometryAttributeConstraint_data_type_items[4] = {
		{0, "VECTOR", 0, "Vector", "Vector data type, affects position"	},
		{1, "QUATERNION", 0, "Quaternion", "Quaternion data type, affects rotation"	},
		{2, "FLOAT4X4", 0, "4x4 Matrix", "4x4 Matrix data type, affects transform"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GeometryAttributeConstraint_data_type_ = {
		{&rna_GeometryAttributeConstraint_sample_index, 	&rna_GeometryAttributeConstraint_apply_target_transform,
		-1, "data_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Data Type",
		"Select data type of attribute",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGeometryAttributeConstraint, data_type), RawPropertyType(6), nullptr},
		GeometryAttributeConstraint_data_type_get, GeometryAttributeConstraint_data_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GeometryAttributeConstraint_data_type_items, 3, 0
	};

	rna_GeometryAttributeConstraint_sample_index_ = {
		{&rna_GeometryAttributeConstraint_mix_loc, 	&rna_GeometryAttributeConstraint_data_type,
		-1, "sample_index", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Sample Index",
		"Sample Index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGeometryAttributeConstraint, sample_index), RawPropertyType(0), nullptr},
		GeometryAttributeConstraint_sample_index_get, GeometryAttributeConstraint_sample_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_GeometryAttributeConstraint_mix_loc_ = {
		{&rna_GeometryAttributeConstraint_mix_rot, 	&rna_GeometryAttributeConstraint_sample_index,
		-1, "mix_loc", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Mix Location",
		"Mix Location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GeometryAttributeConstraint_mix_loc_get, GeometryAttributeConstraint_mix_loc_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GeometryAttributeConstraint_mix_rot_ = {
		{&rna_GeometryAttributeConstraint_mix_scl, 	&rna_GeometryAttributeConstraint_mix_loc,
		-1, "mix_rot", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Mix Rotation",
		"Mix Rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GeometryAttributeConstraint_mix_rot_get, GeometryAttributeConstraint_mix_rot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GeometryAttributeConstraint_mix_scl_ = {
		{&rna_GeometryAttributeConstraint_mix_mode, 	&rna_GeometryAttributeConstraint_mix_rot,
		-1, "mix_scl", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Mix Scale",
		"Mix Scale",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GeometryAttributeConstraint_mix_scl_get, GeometryAttributeConstraint_mix_scl_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_GeometryAttributeConstraint_mix_mode_items[8] = {
		{0, "REPLACE", 0, "Replace", "Replace the original transformation with the transform from the attribute"	},
		{0, "", 0, nullptr, nullptr	},
		{3, "BEFORE_FULL", 0, "Before Original (Full)", "Apply copied transformation before original, using simple matrix multiplication as if the constraint target is a parent in Full Inherit Scale mode. Will create shear when combining rotation and non-uniform scale."	},
		{1, "BEFORE_SPLIT", 0, "Before Original (Split Channels)", "Apply copied transformation before original, handling location, rotation and scale separately, similar to a sequence of three Copy constraints"	},
		{0, "", 0, nullptr, nullptr	},
		{4, "AFTER_FULL", 0, "After Original (Full)", "Apply copied transformation after original, using simple matrix multiplication as if the constraint target is a child in Full Inherit Scale mode. Will create shear when combining rotation and non-uniform scale."	},
		{2, "AFTER_SPLIT", 0, "After Original (Split Channels)", "Apply copied transformation after original, handling location, rotation and scale separately, similar to a sequence of three Copy constraints"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GeometryAttributeConstraint_mix_mode_ = {
		{nullptr, 	&rna_GeometryAttributeConstraint_mix_scl,
		-1, "mix_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mix Mode",
		"Specify how the copied and existing transformations are combined",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Constraint_update, 102367232, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bGeometryAttributeConstraint, mix_mode), RawPropertyType(6), nullptr},
		GeometryAttributeConstraint_mix_mode_get, GeometryAttributeConstraint_mix_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GeometryAttributeConstraint_mix_mode_items, 7, 0
	};

	StructRNA *srna = RNA_GeometryAttributeConstraint;
	srna->cont.properties = {&rna_GeometryAttributeConstraint_target, &rna_GeometryAttributeConstraint_mix_mode};
	srna->identifier = "GeometryAttributeConstraint";
	srna->flag = 516;
	srna->name = "Geometry Attribute Constraint";
	srna->description = "Create a constraint-based relationship with an attribute from geometry";
	srna->translation_context = "*";
	srna->icon = 419;
	srna->nameproperty = &rna_Constraint_name;
	srna->iteratorproperty = &rna_Constraint_rna_properties;
	srna->base = RNA_Constraint;
	srna->refine = rna_ConstraintType_refine;
	srna->path = rna_Constraint_path;
};


}  // namespace blender
