
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

#include "rna_fcurve.cc"
#include "rna_fcurve_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_FCurve_rna_properties;
extern PropertyRNA &rna_FCurve_rna_type;
extern PropertyRNA &rna_FCurve_extrapolation;
extern PropertyRNA &rna_FCurve_driver;
extern PropertyRNA &rna_FCurve_group;
extern PropertyRNA &rna_FCurve_data_path;
extern PropertyRNA &rna_FCurve_array_index;
extern PropertyRNA &rna_FCurve_color_mode;
extern PropertyRNA &rna_FCurve_color;
extern PropertyRNA &rna_FCurve_select;
extern PropertyRNA &rna_FCurve_lock;
extern PropertyRNA &rna_FCurve_mute;
extern PropertyRNA &rna_FCurve_hide;
extern PropertyRNA &rna_FCurve_auto_smoothing;
extern PropertyRNA &rna_FCurve_is_valid;
extern PropertyRNA &rna_FCurve_is_empty;
extern PropertyRNA &rna_FCurve_sampled_points;
extern PropertyRNA &rna_FCurve_keyframe_points;
extern PropertyRNA &rna_FCurve_modifiers;

extern FunctionRNA *rna_FCurve_evaluate_func;
extern PropertyRNA &rna_FCurve_evaluate_frame;
extern PropertyRNA &rna_FCurve_evaluate_value;

extern FunctionRNA *rna_FCurve_update_func;
extern FunctionRNA *rna_FCurve_range_func;
extern PropertyRNA &rna_FCurve_range_range;

extern FunctionRNA *rna_FCurve_update_autoflags_func;
extern PropertyRNA &rna_FCurve_update_autoflags_data;

extern FunctionRNA *rna_FCurve_convert_to_samples_func;
extern PropertyRNA &rna_FCurve_convert_to_samples_start;
extern PropertyRNA &rna_FCurve_convert_to_samples_end;

extern FunctionRNA *rna_FCurve_convert_to_keyframes_func;
extern PropertyRNA &rna_FCurve_convert_to_keyframes_start;
extern PropertyRNA &rna_FCurve_convert_to_keyframes_end;

extern FunctionRNA *rna_FCurve_bake_func;
extern PropertyRNA &rna_FCurve_bake_start;
extern PropertyRNA &rna_FCurve_bake_end;
extern PropertyRNA &rna_FCurve_bake_step;
extern PropertyRNA &rna_FCurve_bake_remove;



extern PropertyRNA &rna_FCurveKeyframePoints_rna_properties;
extern PropertyRNA &rna_FCurveKeyframePoints_rna_type;

extern FunctionRNA *rna_FCurveKeyframePoints_insert_func;
extern PropertyRNA &rna_FCurveKeyframePoints_insert_frame;
extern PropertyRNA &rna_FCurveKeyframePoints_insert_value;
extern PropertyRNA &rna_FCurveKeyframePoints_insert_options;
extern PropertyRNA &rna_FCurveKeyframePoints_insert_keyframe_type;
extern PropertyRNA &rna_FCurveKeyframePoints_insert_keyframe;

extern FunctionRNA *rna_FCurveKeyframePoints_add_func;
extern PropertyRNA &rna_FCurveKeyframePoints_add_count;

extern FunctionRNA *rna_FCurveKeyframePoints_remove_func;
extern PropertyRNA &rna_FCurveKeyframePoints_remove_keyframe;
extern PropertyRNA &rna_FCurveKeyframePoints_remove_fast;

extern FunctionRNA *rna_FCurveKeyframePoints_clear_func;
extern FunctionRNA *rna_FCurveKeyframePoints_sort_func;
extern FunctionRNA *rna_FCurveKeyframePoints_deduplicate_func;
extern FunctionRNA *rna_FCurveKeyframePoints_handles_recalc_func;


extern PropertyRNA &rna_FCurveModifiers_rna_properties;
extern PropertyRNA &rna_FCurveModifiers_rna_type;
extern PropertyRNA &rna_FCurveModifiers_active;

extern FunctionRNA *rna_FCurveModifiers_new_func;
extern PropertyRNA &rna_FCurveModifiers_new_fmodifier;
extern PropertyRNA &rna_FCurveModifiers_new_type;

extern FunctionRNA *rna_FCurveModifiers_remove_func;
extern PropertyRNA &rna_FCurveModifiers_remove_modifier;



extern PropertyRNA &rna_Keyframe_rna_properties;
extern PropertyRNA &rna_Keyframe_rna_type;
extern PropertyRNA &rna_Keyframe_select_left_handle;
extern PropertyRNA &rna_Keyframe_select_right_handle;
extern PropertyRNA &rna_Keyframe_select_control_point;
extern PropertyRNA &rna_Keyframe_handle_left_type;
extern PropertyRNA &rna_Keyframe_handle_right_type;
extern PropertyRNA &rna_Keyframe_interpolation;
extern PropertyRNA &rna_Keyframe_type;
extern PropertyRNA &rna_Keyframe_easing;
extern PropertyRNA &rna_Keyframe_back;
extern PropertyRNA &rna_Keyframe_amplitude;
extern PropertyRNA &rna_Keyframe_period;
extern PropertyRNA &rna_Keyframe_handle_left;
extern PropertyRNA &rna_Keyframe_co;
extern PropertyRNA &rna_Keyframe_co_ui;
extern PropertyRNA &rna_Keyframe_handle_right;


extern PropertyRNA &rna_FCurveSample_rna_properties;
extern PropertyRNA &rna_FCurveSample_rna_type;
extern PropertyRNA &rna_FCurveSample_select;
extern PropertyRNA &rna_FCurveSample_co;


extern PropertyRNA &rna_DriverTarget_rna_properties;
extern PropertyRNA &rna_DriverTarget_rna_type;
extern PropertyRNA &rna_DriverTarget_id;
extern PropertyRNA &rna_DriverTarget_id_type;
extern PropertyRNA &rna_DriverTarget_data_path;
extern PropertyRNA &rna_DriverTarget_bone_target;
extern PropertyRNA &rna_DriverTarget_transform_type;
extern PropertyRNA &rna_DriverTarget_rotation_mode;
extern PropertyRNA &rna_DriverTarget_transform_space;
extern PropertyRNA &rna_DriverTarget_context_property;
extern PropertyRNA &rna_DriverTarget_use_fallback_value;
extern PropertyRNA &rna_DriverTarget_fallback_value;
extern PropertyRNA &rna_DriverTarget_is_fallback_used;


extern PropertyRNA &rna_DriverVariable_rna_properties;
extern PropertyRNA &rna_DriverVariable_rna_type;
extern PropertyRNA &rna_DriverVariable_name;
extern PropertyRNA &rna_DriverVariable_type;
extern PropertyRNA &rna_DriverVariable_targets;
extern PropertyRNA &rna_DriverVariable_is_name_valid;


extern PropertyRNA &rna_Driver_rna_properties;
extern PropertyRNA &rna_Driver_rna_type;
extern PropertyRNA &rna_Driver_type;
extern PropertyRNA &rna_Driver_expression;
extern PropertyRNA &rna_Driver_variables;
extern PropertyRNA &rna_Driver_use_self;
extern PropertyRNA &rna_Driver_is_valid;
extern PropertyRNA &rna_Driver_is_simple_expression;


extern PropertyRNA &rna_ChannelDriverVariables_rna_properties;
extern PropertyRNA &rna_ChannelDriverVariables_rna_type;

extern FunctionRNA *rna_ChannelDriverVariables_new_func;
extern PropertyRNA &rna_ChannelDriverVariables_new_var;

extern FunctionRNA *rna_ChannelDriverVariables_remove_func;
extern PropertyRNA &rna_ChannelDriverVariables_remove_variable;



extern PropertyRNA &rna_FModifier_rna_properties;
extern PropertyRNA &rna_FModifier_rna_type;
extern PropertyRNA &rna_FModifier_name;
extern PropertyRNA &rna_FModifier_type;
extern PropertyRNA &rna_FModifier_show_expanded;
extern PropertyRNA &rna_FModifier_mute;
extern PropertyRNA &rna_FModifier_is_valid;
extern PropertyRNA &rna_FModifier_active;
extern PropertyRNA &rna_FModifier_use_restricted_range;
extern PropertyRNA &rna_FModifier_frame_start;
extern PropertyRNA &rna_FModifier_frame_end;
extern PropertyRNA &rna_FModifier_blend_in;
extern PropertyRNA &rna_FModifier_blend_out;
extern PropertyRNA &rna_FModifier_use_influence;
extern PropertyRNA &rna_FModifier_influence;


extern PropertyRNA &rna_FModifier_rna_properties;
extern PropertyRNA &rna_FModifier_rna_type;
extern PropertyRNA &rna_FModifier_name;
extern PropertyRNA &rna_FModifier_type;
extern PropertyRNA &rna_FModifier_show_expanded;
extern PropertyRNA &rna_FModifier_mute;
extern PropertyRNA &rna_FModifier_is_valid;
extern PropertyRNA &rna_FModifier_active;
extern PropertyRNA &rna_FModifier_use_restricted_range;
extern PropertyRNA &rna_FModifier_frame_start;
extern PropertyRNA &rna_FModifier_frame_end;
extern PropertyRNA &rna_FModifier_blend_in;
extern PropertyRNA &rna_FModifier_blend_out;
extern PropertyRNA &rna_FModifier_use_influence;
extern PropertyRNA &rna_FModifier_influence;

extern PropertyRNA &rna_FModifierGenerator_use_additive;
extern PropertyRNA &rna_FModifierGenerator_mode;
extern PropertyRNA &rna_FModifierGenerator_poly_order;
extern PropertyRNA &rna_FModifierGenerator_coefficients;


extern PropertyRNA &rna_FModifier_rna_properties;
extern PropertyRNA &rna_FModifier_rna_type;
extern PropertyRNA &rna_FModifier_name;
extern PropertyRNA &rna_FModifier_type;
extern PropertyRNA &rna_FModifier_show_expanded;
extern PropertyRNA &rna_FModifier_mute;
extern PropertyRNA &rna_FModifier_is_valid;
extern PropertyRNA &rna_FModifier_active;
extern PropertyRNA &rna_FModifier_use_restricted_range;
extern PropertyRNA &rna_FModifier_frame_start;
extern PropertyRNA &rna_FModifier_frame_end;
extern PropertyRNA &rna_FModifier_blend_in;
extern PropertyRNA &rna_FModifier_blend_out;
extern PropertyRNA &rna_FModifier_use_influence;
extern PropertyRNA &rna_FModifier_influence;

extern PropertyRNA &rna_FModifierFunctionGenerator_amplitude;
extern PropertyRNA &rna_FModifierFunctionGenerator_phase_multiplier;
extern PropertyRNA &rna_FModifierFunctionGenerator_phase_offset;
extern PropertyRNA &rna_FModifierFunctionGenerator_value_offset;
extern PropertyRNA &rna_FModifierFunctionGenerator_use_additive;
extern PropertyRNA &rna_FModifierFunctionGenerator_function_type;


extern PropertyRNA &rna_FModifier_rna_properties;
extern PropertyRNA &rna_FModifier_rna_type;
extern PropertyRNA &rna_FModifier_name;
extern PropertyRNA &rna_FModifier_type;
extern PropertyRNA &rna_FModifier_show_expanded;
extern PropertyRNA &rna_FModifier_mute;
extern PropertyRNA &rna_FModifier_is_valid;
extern PropertyRNA &rna_FModifier_active;
extern PropertyRNA &rna_FModifier_use_restricted_range;
extern PropertyRNA &rna_FModifier_frame_start;
extern PropertyRNA &rna_FModifier_frame_end;
extern PropertyRNA &rna_FModifier_blend_in;
extern PropertyRNA &rna_FModifier_blend_out;
extern PropertyRNA &rna_FModifier_use_influence;
extern PropertyRNA &rna_FModifier_influence;

extern PropertyRNA &rna_FModifierEnvelope_control_points;
extern PropertyRNA &rna_FModifierEnvelope_reference_value;
extern PropertyRNA &rna_FModifierEnvelope_default_min;
extern PropertyRNA &rna_FModifierEnvelope_default_max;


extern PropertyRNA &rna_FModifierEnvelopeControlPoints_rna_properties;
extern PropertyRNA &rna_FModifierEnvelopeControlPoints_rna_type;

extern FunctionRNA *rna_FModifierEnvelopeControlPoints_add_func;
extern PropertyRNA &rna_FModifierEnvelopeControlPoints_add_frame;
extern PropertyRNA &rna_FModifierEnvelopeControlPoints_add_point;

extern FunctionRNA *rna_FModifierEnvelopeControlPoints_remove_func;
extern PropertyRNA &rna_FModifierEnvelopeControlPoints_remove_point;



extern PropertyRNA &rna_FModifierEnvelopeControlPoint_rna_properties;
extern PropertyRNA &rna_FModifierEnvelopeControlPoint_rna_type;
extern PropertyRNA &rna_FModifierEnvelopeControlPoint_min;
extern PropertyRNA &rna_FModifierEnvelopeControlPoint_max;
extern PropertyRNA &rna_FModifierEnvelopeControlPoint_frame;


extern PropertyRNA &rna_FModifier_rna_properties;
extern PropertyRNA &rna_FModifier_rna_type;
extern PropertyRNA &rna_FModifier_name;
extern PropertyRNA &rna_FModifier_type;
extern PropertyRNA &rna_FModifier_show_expanded;
extern PropertyRNA &rna_FModifier_mute;
extern PropertyRNA &rna_FModifier_is_valid;
extern PropertyRNA &rna_FModifier_active;
extern PropertyRNA &rna_FModifier_use_restricted_range;
extern PropertyRNA &rna_FModifier_frame_start;
extern PropertyRNA &rna_FModifier_frame_end;
extern PropertyRNA &rna_FModifier_blend_in;
extern PropertyRNA &rna_FModifier_blend_out;
extern PropertyRNA &rna_FModifier_use_influence;
extern PropertyRNA &rna_FModifier_influence;

extern PropertyRNA &rna_FModifierCycles_mode_before;
extern PropertyRNA &rna_FModifierCycles_cycles_before;
extern PropertyRNA &rna_FModifierCycles_mode_after;
extern PropertyRNA &rna_FModifierCycles_cycles_after;


extern PropertyRNA &rna_FModifier_rna_properties;
extern PropertyRNA &rna_FModifier_rna_type;
extern PropertyRNA &rna_FModifier_name;
extern PropertyRNA &rna_FModifier_type;
extern PropertyRNA &rna_FModifier_show_expanded;
extern PropertyRNA &rna_FModifier_mute;
extern PropertyRNA &rna_FModifier_is_valid;
extern PropertyRNA &rna_FModifier_active;
extern PropertyRNA &rna_FModifier_use_restricted_range;
extern PropertyRNA &rna_FModifier_frame_start;
extern PropertyRNA &rna_FModifier_frame_end;
extern PropertyRNA &rna_FModifier_blend_in;
extern PropertyRNA &rna_FModifier_blend_out;
extern PropertyRNA &rna_FModifier_use_influence;
extern PropertyRNA &rna_FModifier_influence;

extern PropertyRNA &rna_FModifierLimits_use_min_x;
extern PropertyRNA &rna_FModifierLimits_use_min_y;
extern PropertyRNA &rna_FModifierLimits_use_max_x;
extern PropertyRNA &rna_FModifierLimits_use_max_y;
extern PropertyRNA &rna_FModifierLimits_min_x;
extern PropertyRNA &rna_FModifierLimits_min_y;
extern PropertyRNA &rna_FModifierLimits_max_x;
extern PropertyRNA &rna_FModifierLimits_max_y;


extern PropertyRNA &rna_FModifier_rna_properties;
extern PropertyRNA &rna_FModifier_rna_type;
extern PropertyRNA &rna_FModifier_name;
extern PropertyRNA &rna_FModifier_type;
extern PropertyRNA &rna_FModifier_show_expanded;
extern PropertyRNA &rna_FModifier_mute;
extern PropertyRNA &rna_FModifier_is_valid;
extern PropertyRNA &rna_FModifier_active;
extern PropertyRNA &rna_FModifier_use_restricted_range;
extern PropertyRNA &rna_FModifier_frame_start;
extern PropertyRNA &rna_FModifier_frame_end;
extern PropertyRNA &rna_FModifier_blend_in;
extern PropertyRNA &rna_FModifier_blend_out;
extern PropertyRNA &rna_FModifier_use_influence;
extern PropertyRNA &rna_FModifier_influence;

extern PropertyRNA &rna_FModifierNoise_blend_type;
extern PropertyRNA &rna_FModifierNoise_scale;
extern PropertyRNA &rna_FModifierNoise_strength;
extern PropertyRNA &rna_FModifierNoise_phase;
extern PropertyRNA &rna_FModifierNoise_offset;
extern PropertyRNA &rna_FModifierNoise_lacunarity;
extern PropertyRNA &rna_FModifierNoise_roughness;
extern PropertyRNA &rna_FModifierNoise_depth;
extern PropertyRNA &rna_FModifierNoise_use_legacy_noise;


extern PropertyRNA &rna_FModifier_rna_properties;
extern PropertyRNA &rna_FModifier_rna_type;
extern PropertyRNA &rna_FModifier_name;
extern PropertyRNA &rna_FModifier_type;
extern PropertyRNA &rna_FModifier_show_expanded;
extern PropertyRNA &rna_FModifier_mute;
extern PropertyRNA &rna_FModifier_is_valid;
extern PropertyRNA &rna_FModifier_active;
extern PropertyRNA &rna_FModifier_use_restricted_range;
extern PropertyRNA &rna_FModifier_frame_start;
extern PropertyRNA &rna_FModifier_frame_end;
extern PropertyRNA &rna_FModifier_blend_in;
extern PropertyRNA &rna_FModifier_blend_out;
extern PropertyRNA &rna_FModifier_use_influence;
extern PropertyRNA &rna_FModifier_influence;

extern PropertyRNA &rna_FModifierStepped_frame_step;
extern PropertyRNA &rna_FModifierStepped_frame_offset;
extern PropertyRNA &rna_FModifierStepped_use_frame_start;
extern PropertyRNA &rna_FModifierStepped_use_frame_end;
extern PropertyRNA &rna_FModifierStepped_frame_start;
extern PropertyRNA &rna_FModifierStepped_frame_end;


extern PropertyRNA &rna_FModifier_rna_properties;
extern PropertyRNA &rna_FModifier_rna_type;
extern PropertyRNA &rna_FModifier_name;
extern PropertyRNA &rna_FModifier_type;
extern PropertyRNA &rna_FModifier_show_expanded;
extern PropertyRNA &rna_FModifier_mute;
extern PropertyRNA &rna_FModifier_is_valid;
extern PropertyRNA &rna_FModifier_active;
extern PropertyRNA &rna_FModifier_use_restricted_range;
extern PropertyRNA &rna_FModifier_frame_start;
extern PropertyRNA &rna_FModifier_frame_end;
extern PropertyRNA &rna_FModifier_blend_in;
extern PropertyRNA &rna_FModifier_blend_out;
extern PropertyRNA &rna_FModifier_use_influence;
extern PropertyRNA &rna_FModifier_influence;

extern PropertyRNA &rna_FModifierSmooth_sigma;
extern PropertyRNA &rna_FModifierSmooth_filter_width;

static PointerRNA FCurve_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FCurve_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FCurve_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurve_rna_properties_get(iter);
    }
}

void FCurve_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FCurve_rna_properties_get(iter);
    }
}

void FCurve_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FCurve_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FCurve_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int FCurve_extrapolation_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->extend);
}

void FCurve_extrapolation_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
    data->extend = (std::remove_reference_t<decltype(data->extend)>)value;
}

PointerRNA FCurve_driver_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Driver, data->driver);
}

PointerRNA FCurve_group_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ActionGroup, data->grp);
}

void FCurve_group_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_FCurve_group_set;
    fn(ptr, value, reports);
}

void FCurve_data_path_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_FCurve_RnaPath_get;
    fn(ptr, value);
}

int FCurve_data_path_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_FCurve_RnaPath_length;
    return fn(ptr);
}

void FCurve_data_path_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_FCurve_RnaPath_set;
    fn(ptr, value);
}

int FCurve_array_index_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->array_index);
}

void FCurve_array_index_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
    data->array_index = (std::remove_reference_t<decltype(data->array_index)>)std::clamp(value, 0, INT_MAX);
}

int FCurve_color_mode_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->color_mode);
}

void FCurve_color_mode_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
    data->color_mode = (std::remove_reference_t<decltype(data->color_mode)>)value;
}

void FCurve_color_get(PointerRNA *ptr, float values[3])
{
    FCurve *data = (FCurve *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void FCurve_color_set(PointerRNA *ptr, const float values[3])
{
    FCurve *data = (FCurve *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

bool FCurve_select_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void FCurve_select_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool FCurve_lock_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void FCurve_lock_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool FCurve_mute_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void FCurve_mute_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool FCurve_hide_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void FCurve_hide_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int FCurve_auto_smoothing_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->auto_smoothing);
}

void FCurve_auto_smoothing_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
    data->auto_smoothing = (std::remove_reference_t<decltype(data->auto_smoothing)>)value;
}

bool FCurve_is_valid_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return !((uint64_t(data->flag) & 1024) != 0);
}

void FCurve_is_valid_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

bool FCurve_is_empty_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_FCurve_is_empty_get;
    return fn(ptr);
}

int FCurve_sampled_points_length(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (data->fpt == nullptr) ? 0 : data->totvert;
}

static PointerRNA FCurve_sampled_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FCurveSample, rna_iterator_array_get(iter));
}

void FCurve_sampled_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FCurve_sampled_points;

    rna_iterator_array_begin(iter, ptr, data->fpt, sizeof(data->fpt[0]), data->totvert, 0, nullptr);

    if (iter->valid) {
        iter->ptr = FCurve_sampled_points_get(iter);
    }
}

void FCurve_sampled_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FCurve_sampled_points_get(iter);
    }
}

void FCurve_sampled_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool FCurve_sampled_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    FCurve_sampled_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = FCurve_sampled_points_get(&iter); }
    }

    FCurve_sampled_points_end(&iter);

    return found;
}

int FCurve_keyframe_points_length(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (data->bezt == nullptr) ? 0 : data->totvert;
}

static PointerRNA FCurve_keyframe_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Keyframe, rna_iterator_array_get(iter));
}

void FCurve_keyframe_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FCurve_keyframe_points;

    rna_iterator_array_begin(iter, ptr, data->bezt, sizeof(data->bezt[0]), data->totvert, 0, nullptr);

    if (iter->valid) {
        iter->ptr = FCurve_keyframe_points_get(iter);
    }
}

void FCurve_keyframe_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FCurve_keyframe_points_get(iter);
    }
}

void FCurve_keyframe_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool FCurve_keyframe_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    FCurve_keyframe_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = FCurve_keyframe_points_get(&iter); }
    }

    FCurve_keyframe_points_end(&iter);

    return found;
}

static PointerRNA FCurve_modifiers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FModifier, rna_iterator_listbase_get(iter));
}

void FCurve_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FCurve_modifiers;

    rna_iterator_listbase_begin(iter, ptr, &data->modifiers, nullptr);

    if (iter->valid) {
        iter->ptr = FCurve_modifiers_get(iter);
    }
}

void FCurve_modifiers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FCurve_modifiers_get(iter);
    }
}

void FCurve_modifiers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FCurve_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    FCurve_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = FCurve_modifiers_get(&iter); }
    }

    FCurve_modifiers_end(&iter);

    return found;
}

int FModifier_name_length(PointerRNA *);
void FModifier_name_get(PointerRNA *, char *);

bool FCurve_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    FCurve_modifiers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = FModifier_name_length(&iter.ptr);
            if (namelen < 1024) {
                FModifier_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                FModifier_name_get(&iter.ptr, name);
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
        FCurve_modifiers_next(&iter);
    }
    FCurve_modifiers_end(&iter);

    return found;
}

static PointerRNA FCurveKeyframePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FCurveKeyframePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FCurveKeyframePoints_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurveKeyframePoints_rna_properties_get(iter);
    }
}

void FCurveKeyframePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FCurveKeyframePoints_rna_properties_get(iter);
    }
}

void FCurveKeyframePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FCurveKeyframePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FCurveKeyframePoints_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA FCurveModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FCurveModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FCurveModifiers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurveModifiers_rna_properties_get(iter);
    }
}

void FCurveModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FCurveModifiers_rna_properties_get(iter);
    }
}

void FCurveModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FCurveModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FCurveModifiers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA FCurveModifiers_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_FCurve_active_modifier_get;
    return fn(ptr);
}

void FCurveModifiers_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_FCurve_active_modifier_set;
    fn(ptr, value, reports);
}

static PointerRNA Keyframe_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Keyframe_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Keyframe_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Keyframe_rna_properties_get(iter);
    }
}

void Keyframe_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Keyframe_rna_properties_get(iter);
    }
}

void Keyframe_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Keyframe_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Keyframe_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool Keyframe_select_left_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return ((uint64_t(data->f1) & 1) != 0);
}

void Keyframe_select_left_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f1 = std::remove_reference_t<decltype(data->f1)>(uint64_t(data->f1) | 1); }
    else { data->f1 = std::remove_reference_t<decltype(data->f1)>(uint64_t(data->f1) & ~uint64_t(1)); }
}

bool Keyframe_select_right_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return ((uint64_t(data->f3) & 1) != 0);
}

void Keyframe_select_right_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f3 = std::remove_reference_t<decltype(data->f3)>(uint64_t(data->f3) | 1); }
    else { data->f3 = std::remove_reference_t<decltype(data->f3)>(uint64_t(data->f3) & ~uint64_t(1)); }
}

bool Keyframe_select_control_point_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return ((uint64_t(data->f2) & 1) != 0);
}

void Keyframe_select_control_point_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f2 = std::remove_reference_t<decltype(data->f2)>(uint64_t(data->f2) | 1); }
    else { data->f2 = std::remove_reference_t<decltype(data->f2)>(uint64_t(data->f2) & ~uint64_t(1)); }
}

int Keyframe_handle_left_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h1);
}

void Keyframe_handle_left_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->h1 = (std::remove_reference_t<decltype(data->h1)>)value;
}

int Keyframe_handle_right_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h2);
}

void Keyframe_handle_right_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->h2 = (std::remove_reference_t<decltype(data->h2)>)value;
}

int Keyframe_interpolation_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->ipo);
}

void Keyframe_interpolation_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->ipo = (std::remove_reference_t<decltype(data->ipo)>)value;
}

int Keyframe_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->hide);
}

void Keyframe_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->hide = (std::remove_reference_t<decltype(data->hide)>)value;
}

int Keyframe_easing_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->easing);
}

void Keyframe_easing_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->easing = (std::remove_reference_t<decltype(data->easing)>)value;
}

float Keyframe_back_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->back);
}

void Keyframe_back_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->back = (std::remove_reference_t<decltype(data->back)>)value;
}

float Keyframe_amplitude_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->amplitude);
}

void Keyframe_amplitude_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->amplitude = (std::remove_reference_t<decltype(data->amplitude)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Keyframe_period_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->period);
}

void Keyframe_period_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->period = (std::remove_reference_t<decltype(data->period)>)value;
}

void Keyframe_handle_left_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_FKeyframe_handle1_get;
    fn(ptr, values);
}

void Keyframe_handle_left_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_FKeyframe_handle1_set;
    fn(ptr, values);
}

void Keyframe_co_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_FKeyframe_ctrlpoint_get;
    fn(ptr, values);
}

void Keyframe_co_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_FKeyframe_ctrlpoint_set;
    fn(ptr, values);
}

void Keyframe_co_ui_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_FKeyframe_ctrlpoint_get;
    fn(ptr, values);
}

void Keyframe_co_ui_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_FKeyframe_ctrlpoint_ui_set;
    fn(ptr, values);
}

void Keyframe_handle_right_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_FKeyframe_handle2_get;
    fn(ptr, values);
}

void Keyframe_handle_right_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_FKeyframe_handle2_set;
    fn(ptr, values);
}

static PointerRNA FCurveSample_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FCurveSample_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FCurveSample_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurveSample_rna_properties_get(iter);
    }
}

void FCurveSample_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FCurveSample_rna_properties_get(iter);
    }
}

void FCurveSample_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FCurveSample_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FCurveSample_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool FCurveSample_select_get(PointerRNA *ptr)
{
    FPoint *data = (FPoint *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void FCurveSample_select_set(PointerRNA *ptr, bool value)
{
    FPoint *data = (FPoint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

void FCurveSample_co_get(PointerRNA *ptr, float values[2])
{
    FPoint *data = (FPoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->vec)[i]);
    }
}

void FCurveSample_co_set(PointerRNA *ptr, const float values[2])
{
    FPoint *data = (FPoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->vec)[i] = values[i];
    }
}

static PointerRNA DriverTarget_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void DriverTarget_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DriverTarget_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = DriverTarget_rna_properties_get(iter);
    }
}

void DriverTarget_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DriverTarget_rna_properties_get(iter);
    }
}

void DriverTarget_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool DriverTarget_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA DriverTarget_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA DriverTarget_id_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ID, data->id);
}

void DriverTarget_id_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_DriverTarget_id_set;
    fn(ptr, value, reports);
}

int DriverTarget_id_type_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->idtype);
}

void DriverTarget_id_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_DriverTarget_id_type_set;
    fn(ptr, value);
}

void DriverTarget_data_path_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_DriverTarget_RnaPath_get;
    fn(ptr, value);
}

int DriverTarget_data_path_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_DriverTarget_RnaPath_length;
    return fn(ptr);
}

void DriverTarget_data_path_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_DriverTarget_RnaPath_set;
    fn(ptr, value);
}

void DriverTarget_bone_target_get(PointerRNA *ptr, char *value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    BLI_assert(strlen(data->pchan_name) < 64);
    strcpy(value, data->pchan_name);
}

int DriverTarget_bone_target_length(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return strlen(data->pchan_name);
}

void DriverTarget_bone_target_set(PointerRNA *ptr, const char *value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    BLI_strncpy_utf8(data->pchan_name, value, 64);
}

int DriverTarget_transform_type_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->transChan);
}

void DriverTarget_transform_type_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    data->transChan = (std::remove_reference_t<decltype(data->transChan)>)value;
}

int DriverTarget_rotation_mode_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->rotation_mode);
}

void DriverTarget_rotation_mode_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    data->rotation_mode = (std::remove_reference_t<decltype(data->rotation_mode)>)value;
}

int DriverTarget_transform_space_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (uint64_t(data->flag) & 12);
}

void DriverTarget_transform_space_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(12));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

int DriverTarget_context_property_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->context_property);
}

void DriverTarget_context_property_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    data->context_property = (std::remove_reference_t<decltype(data->context_property)>)value;
}

bool DriverTarget_use_fallback_value_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return ((uint64_t(data->options) & 1) != 0);
}

void DriverTarget_use_fallback_value_set(PointerRNA *ptr, bool value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    if (value) { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) | 1); }
    else { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) & ~uint64_t(1)); }
}

float DriverTarget_fallback_value_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (float)(data->fallback_value);
}

void DriverTarget_fallback_value_set(PointerRNA *ptr, float value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    data->fallback_value = (std::remove_reference_t<decltype(data->fallback_value)>)value;
}

bool DriverTarget_is_fallback_used_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

static PointerRNA DriverVariable_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void DriverVariable_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DriverVariable_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = DriverVariable_rna_properties_get(iter);
    }
}

void DriverVariable_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DriverVariable_rna_properties_get(iter);
    }
}

void DriverVariable_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool DriverVariable_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA DriverVariable_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void DriverVariable_name_get(PointerRNA *ptr, char *value)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int DriverVariable_name_length(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return strlen(data->name);
}

void DriverVariable_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_DriverVariable_name_set;
    fn(ptr, value);
}

int DriverVariable_type_get(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return (int)(data->type);
}

void DriverVariable_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_DriverVariable_type_set;
    fn(ptr, value);
}

int DriverVariable_targets_length(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return data->num_targets;
}

static PointerRNA DriverVariable_targets_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_DriverTarget, rna_iterator_array_get(iter));
}

void DriverVariable_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DriverVariable_targets;

    rna_iterator_array_begin(iter, ptr, data->targets, sizeof(data->targets[0]), data->num_targets, 0, nullptr);

    if (iter->valid) {
        iter->ptr = DriverVariable_targets_get(iter);
    }
}

void DriverVariable_targets_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DriverVariable_targets_get(iter);
    }
}

void DriverVariable_targets_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool DriverVariable_targets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    DriverVariable_targets_begin(&iter, ptr);

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
        if (found) { *r_ptr = DriverVariable_targets_get(&iter); }
    }

    DriverVariable_targets_end(&iter);

    return found;
}

bool DriverVariable_is_name_valid_get(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return !((uint64_t(data->flag) & 2) != 0);
}

static PointerRNA Driver_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Driver_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Driver_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Driver_rna_properties_get(iter);
    }
}

void Driver_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Driver_rna_properties_get(iter);
    }
}

void Driver_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Driver_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Driver_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int Driver_type_get(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return (int)(data->type);
}

void Driver_type_set(PointerRNA *ptr, int value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

void Driver_expression_get(PointerRNA *ptr, char *value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    BLI_assert(strlen(data->expression) < 256);
    strcpy(value, data->expression);
}

int Driver_expression_length(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return strlen(data->expression);
}

void Driver_expression_set(PointerRNA *ptr, const char *value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    BLI_strncpy_utf8(data->expression, value, 256);
}

static PointerRNA Driver_variables_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_DriverVariable, rna_iterator_listbase_get(iter));
}

void Driver_variables_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Driver_variables;

    rna_iterator_listbase_begin(iter, ptr, &data->variables, nullptr);

    if (iter->valid) {
        iter->ptr = Driver_variables_get(iter);
    }
}

void Driver_variables_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Driver_variables_get(iter);
    }
}

void Driver_variables_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Driver_variables_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Driver_variables_begin(&iter, ptr);

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
        if (found) { *r_ptr = Driver_variables_get(&iter); }
    }

    Driver_variables_end(&iter);

    return found;
}

int DriverVariable_name_length(PointerRNA *);
void DriverVariable_name_get(PointerRNA *, char *);

bool Driver_variables_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Driver_variables_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = DriverVariable_name_length(&iter.ptr);
            if (namelen < 1024) {
                DriverVariable_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                DriverVariable_name_get(&iter.ptr, name);
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
        Driver_variables_next(&iter);
    }
    Driver_variables_end(&iter);

    return found;
}

bool Driver_use_self_get(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void Driver_use_self_set(PointerRNA *ptr, bool value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool Driver_is_valid_get(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void Driver_is_valid_set(PointerRNA *ptr, bool value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool Driver_is_simple_expression_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ChannelDriver_is_simple_expression_get;
    return fn(ptr);
}

static PointerRNA ChannelDriverVariables_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ChannelDriverVariables_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ChannelDriverVariables_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ChannelDriverVariables_rna_properties_get(iter);
    }
}

void ChannelDriverVariables_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ChannelDriverVariables_rna_properties_get(iter);
    }
}

void ChannelDriverVariables_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ChannelDriverVariables_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ChannelDriverVariables_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA FModifier_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FModifier_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FModifier_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FModifier_rna_properties_get(iter);
    }
}

void FModifier_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FModifier_rna_properties_get(iter);
    }
}

void FModifier_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FModifier_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FModifier_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void FModifier_name_get(PointerRNA *ptr, char *value)
{
    FModifier *data = (FModifier *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int FModifier_name_length(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return strlen(data->name);
}

void FModifier_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_fModifier_name_set;
    fn(ptr, value);
}

int FModifier_type_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (int)(data->type);
}

bool FModifier_show_expanded_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (bool)(data->ui_expand_flag);
}

void FModifier_show_expanded_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_FModifier_show_expanded_set;
    fn(ptr, value);
}

bool FModifier_mute_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void FModifier_mute_set(PointerRNA *ptr, bool value)
{
    FModifier *data = (FModifier *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool FModifier_is_valid_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

bool FModifier_active_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void FModifier_active_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_FModifier_active_set;
    fn(ptr, value);
}

bool FModifier_use_restricted_range_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void FModifier_use_restricted_range_set(PointerRNA *ptr, bool value)
{
    FModifier *data = (FModifier *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

float FModifier_frame_start_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->sfra);
}

void FModifier_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifier_start_frame_set;
    fn(ptr, value);
}

float FModifier_frame_end_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->efra);
}

void FModifier_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifier_end_frame_set;
    fn(ptr, value);
}

float FModifier_blend_in_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->blendin);
}

void FModifier_blend_in_set(PointerRNA *ptr, float value)
{
    FModifier *data = (FModifier *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_FModifier_blending_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->blendin = (std::remove_reference_t<decltype(data->blendin)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float FModifier_blend_out_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->blendout);
}

void FModifier_blend_out_set(PointerRNA *ptr, float value)
{
    FModifier *data = (FModifier *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_FModifier_blending_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->blendout = (std::remove_reference_t<decltype(data->blendout)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

bool FModifier_use_influence_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void FModifier_use_influence_set(PointerRNA *ptr, bool value)
{
    FModifier *data = (FModifier *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

float FModifier_influence_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->influence);
}

void FModifier_influence_set(PointerRNA *ptr, float value)
{
    FModifier *data = (FModifier *)(ptr->data);
    data->influence = (std::remove_reference_t<decltype(data->influence)>)std::clamp(value, 0.0f, 1.0f);
}

bool FModifierGenerator_use_additive_get(PointerRNA *ptr)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void FModifierGenerator_use_additive_set(PointerRNA *ptr, bool value)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int FModifierGenerator_mode_get(PointerRNA *ptr)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    return (int)(data->mode);
}

void FModifierGenerator_mode_set(PointerRNA *ptr, int value)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

int FModifierGenerator_poly_order_get(PointerRNA *ptr)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    return (int)(data->poly_order);
}

void FModifierGenerator_poly_order_set(PointerRNA *ptr, int value)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    data->poly_order = (std::remove_reference_t<decltype(data->poly_order)>)std::clamp(value, 1, 100);
}

void FModifierGenerator_coefficients_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_FModifierGenerator_coefficients_get;
    fn(ptr, values);
}

void FModifierGenerator_coefficients_set(PointerRNA *ptr, const float values[])
{
    PropFloatArraySetFunc fn = rna_FModifierGenerator_coefficients_set;
    fn(ptr, values);
}

float FModifierFunctionGenerator_amplitude_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->amplitude);
}

void FModifierFunctionGenerator_amplitude_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    data->amplitude = (std::remove_reference_t<decltype(data->amplitude)>)value;
}

float FModifierFunctionGenerator_phase_multiplier_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->phase_multiplier);
}

void FModifierFunctionGenerator_phase_multiplier_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    data->phase_multiplier = (std::remove_reference_t<decltype(data->phase_multiplier)>)value;
}

float FModifierFunctionGenerator_phase_offset_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->phase_offset);
}

void FModifierFunctionGenerator_phase_offset_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    data->phase_offset = (std::remove_reference_t<decltype(data->phase_offset)>)value;
}

float FModifierFunctionGenerator_value_offset_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->value_offset);
}

void FModifierFunctionGenerator_value_offset_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    data->value_offset = (std::remove_reference_t<decltype(data->value_offset)>)value;
}

bool FModifierFunctionGenerator_use_additive_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void FModifierFunctionGenerator_use_additive_set(PointerRNA *ptr, bool value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int FModifierFunctionGenerator_function_type_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (int)(data->type);
}

void FModifierFunctionGenerator_function_type_set(PointerRNA *ptr, int value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

int FModifierEnvelope_control_points_length(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (data->data == nullptr) ? 0 : data->totvert;
}

static PointerRNA FModifierEnvelope_control_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FModifierEnvelopeControlPoint, rna_iterator_array_get(iter));
}

void FModifierEnvelope_control_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FModifierEnvelope_control_points;

    rna_iterator_array_begin(iter, ptr, data->data, sizeof(data->data[0]), data->totvert, 0, nullptr);

    if (iter->valid) {
        iter->ptr = FModifierEnvelope_control_points_get(iter);
    }
}

void FModifierEnvelope_control_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FModifierEnvelope_control_points_get(iter);
    }
}

void FModifierEnvelope_control_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool FModifierEnvelope_control_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    FModifierEnvelope_control_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = FModifierEnvelope_control_points_get(&iter); }
    }

    FModifierEnvelope_control_points_end(&iter);

    return found;
}

float FModifierEnvelope_reference_value_get(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (float)(data->midval);
}

void FModifierEnvelope_reference_value_set(PointerRNA *ptr, float value)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    data->midval = (std::remove_reference_t<decltype(data->midval)>)value;
}

float FModifierEnvelope_default_min_get(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (float)(data->min);
}

void FModifierEnvelope_default_min_set(PointerRNA *ptr, float value)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    data->min = (std::remove_reference_t<decltype(data->min)>)value;
}

float FModifierEnvelope_default_max_get(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (float)(data->max);
}

void FModifierEnvelope_default_max_set(PointerRNA *ptr, float value)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    data->max = (std::remove_reference_t<decltype(data->max)>)value;
}

static PointerRNA FModifierEnvelopeControlPoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FModifierEnvelopeControlPoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FModifierEnvelopeControlPoints_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoints_rna_properties_get(iter);
    }
}

void FModifierEnvelopeControlPoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoints_rna_properties_get(iter);
    }
}

void FModifierEnvelopeControlPoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FModifierEnvelopeControlPoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FModifierEnvelopeControlPoints_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA FModifierEnvelopeControlPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FModifierEnvelopeControlPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FModifierEnvelopeControlPoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoint_rna_properties_get(iter);
    }
}

void FModifierEnvelopeControlPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoint_rna_properties_get(iter);
    }
}

void FModifierEnvelopeControlPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FModifierEnvelopeControlPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FModifierEnvelopeControlPoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float FModifierEnvelopeControlPoint_min_get(PointerRNA *ptr)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    return (float)(data->min);
}

void FModifierEnvelopeControlPoint_min_set(PointerRNA *ptr, float value)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    data->min = (std::remove_reference_t<decltype(data->min)>)value;
}

float FModifierEnvelopeControlPoint_max_get(PointerRNA *ptr)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    return (float)(data->max);
}

void FModifierEnvelopeControlPoint_max_set(PointerRNA *ptr, float value)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    data->max = (std::remove_reference_t<decltype(data->max)>)value;
}

float FModifierEnvelopeControlPoint_frame_get(PointerRNA *ptr)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    return (float)(data->time);
}

void FModifierEnvelopeControlPoint_frame_set(PointerRNA *ptr, float value)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    data->time = (std::remove_reference_t<decltype(data->time)>)value;
}

int FModifierCycles_mode_before_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->before_mode);
}

void FModifierCycles_mode_before_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    data->before_mode = (std::remove_reference_t<decltype(data->before_mode)>)value;
}

int FModifierCycles_cycles_before_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->before_cycles);
}

void FModifierCycles_cycles_before_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    data->before_cycles = (std::remove_reference_t<decltype(data->before_cycles)>)std::clamp(value, -32768, 32767);
}

int FModifierCycles_mode_after_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->after_mode);
}

void FModifierCycles_mode_after_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    data->after_mode = (std::remove_reference_t<decltype(data->after_mode)>)value;
}

int FModifierCycles_cycles_after_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->after_cycles);
}

void FModifierCycles_cycles_after_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    data->after_cycles = (std::remove_reference_t<decltype(data->after_cycles)>)std::clamp(value, -32768, 32767);
}

bool FModifierLimits_use_min_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void FModifierLimits_use_min_x_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool FModifierLimits_use_min_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void FModifierLimits_use_min_y_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool FModifierLimits_use_max_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void FModifierLimits_use_max_x_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool FModifierLimits_use_max_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void FModifierLimits_use_max_y_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

float FModifierLimits_min_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.xmin);
}

void FModifierLimits_min_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierLimits_minx_set;
    fn(ptr, value);
}

float FModifierLimits_min_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.ymin);
}

void FModifierLimits_min_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierLimits_miny_set;
    fn(ptr, value);
}

float FModifierLimits_max_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.xmax);
}

void FModifierLimits_max_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierLimits_maxx_set;
    fn(ptr, value);
}

float FModifierLimits_max_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.ymax);
}

void FModifierLimits_max_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierLimits_maxy_set;
    fn(ptr, value);
}

int FModifierNoise_blend_type_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (int)(data->modification);
}

void FModifierNoise_blend_type_set(PointerRNA *ptr, int value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->modification = (std::remove_reference_t<decltype(data->modification)>)value;
}

float FModifierNoise_scale_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->size);
}

void FModifierNoise_scale_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->size = (std::remove_reference_t<decltype(data->size)>)value;
}

float FModifierNoise_strength_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->strength);
}

void FModifierNoise_strength_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->strength = (std::remove_reference_t<decltype(data->strength)>)value;
}

float FModifierNoise_phase_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->phase);
}

void FModifierNoise_phase_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->phase = (std::remove_reference_t<decltype(data->phase)>)value;
}

float FModifierNoise_offset_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->offset);
}

void FModifierNoise_offset_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->offset = (std::remove_reference_t<decltype(data->offset)>)value;
}

float FModifierNoise_lacunarity_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->lacunarity);
}

void FModifierNoise_lacunarity_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->lacunarity = (std::remove_reference_t<decltype(data->lacunarity)>)value;
}

float FModifierNoise_roughness_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->roughness);
}

void FModifierNoise_roughness_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->roughness = (std::remove_reference_t<decltype(data->roughness)>)value;
}

int FModifierNoise_depth_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (int)(data->depth);
}

void FModifierNoise_depth_set(PointerRNA *ptr, int value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->depth = (std::remove_reference_t<decltype(data->depth)>)std::clamp(value, 0, 32767);
}

bool FModifierNoise_use_legacy_noise_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return ((uint64_t(data->legacy_noise) & 1) != 0);
}

void FModifierNoise_use_legacy_noise_set(PointerRNA *ptr, bool value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    if (value) { data->legacy_noise = std::remove_reference_t<decltype(data->legacy_noise)>(uint64_t(data->legacy_noise) | 1); }
    else { data->legacy_noise = std::remove_reference_t<decltype(data->legacy_noise)>(uint64_t(data->legacy_noise) & ~uint64_t(1)); }
}

float FModifierStepped_frame_step_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->step_size);
}

void FModifierStepped_frame_step_set(PointerRNA *ptr, float value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    data->step_size = (std::remove_reference_t<decltype(data->step_size)>)value;
}

float FModifierStepped_frame_offset_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->offset);
}

void FModifierStepped_frame_offset_set(PointerRNA *ptr, float value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    data->offset = (std::remove_reference_t<decltype(data->offset)>)value;
}

bool FModifierStepped_use_frame_start_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void FModifierStepped_use_frame_start_set(PointerRNA *ptr, bool value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool FModifierStepped_use_frame_end_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void FModifierStepped_use_frame_end_set(PointerRNA *ptr, bool value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

float FModifierStepped_frame_start_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->start_frame);
}

void FModifierStepped_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierStepped_frame_start_set;
    fn(ptr, value);
}

float FModifierStepped_frame_end_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->end_frame);
}

void FModifierStepped_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierStepped_frame_end_set;
    fn(ptr, value);
}

float FModifierSmooth_sigma_get(PointerRNA *ptr)
{
    FMod_Smooth *data = (FMod_Smooth *)(((FModifier *)ptr->data)->data);
    return (float)(data->sigma);
}

void FModifierSmooth_sigma_set(PointerRNA *ptr, float value)
{
    FMod_Smooth *data = (FMod_Smooth *)(((FModifier *)ptr->data)->data);
    data->sigma = (std::remove_reference_t<decltype(data->sigma)>)std::clamp(value, 0.1000000015f, 100.0f);
}

int FModifierSmooth_filter_width_get(PointerRNA *ptr)
{
    FMod_Smooth *data = (FMod_Smooth *)(((FModifier *)ptr->data)->data);
    return (int)(data->filter_width);
}

void FModifierSmooth_filter_width_set(PointerRNA *ptr, int value)
{
    FMod_Smooth *data = (FMod_Smooth *)(((FModifier *)ptr->data)->data);
    data->filter_width = (std::remove_reference_t<decltype(data->filter_width)>)std::clamp(value, 1, 32);
}

float FCurve_evaluate_func(FCurve *_self, float frame)
{
	return evaluate_fcurve(_self, frame);
}

static void FCurve_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	FCurve *_self;
	float frame;
	float value;
	char *_data, *_retdata;
	
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	value = evaluate_fcurve(_self, frame);
	*((float *)_retdata) = value;
}

void FCurve_update_func(ID *_selfid, FCurve *_self, Main *bmain)
{
	rna_FCurve_update_data_ex(_selfid, _self, bmain);
}

static void FCurve_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FCurve *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (FCurve *)_ptr->data;
	
	rna_FCurve_update_data_ex(_selfid, _self, CTX_data_main(C));
}

void FCurve_range_func(FCurve *_self, float range[2])
{
	rna_FCurve_range(_self, range);
}

static void FCurve_range_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	FCurve *_self;
	float *range;
	char *_data;
	
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	range = ((float *)_data);
	
	rna_FCurve_range(_self, range);
}

void FCurve_update_autoflags_func(FCurve *_self, bContext *C, ReportList *reports, PointerRNA *data)
{
	update_autoflags_fcurve(_self, C, reports, data);
}

static void FCurve_update_autoflags_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	FCurve *_self;
	PointerRNA *data;
	char *_data;
	
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((PointerRNA *)_data);
	
	update_autoflags_fcurve(_self, C, reports, data);
}

void FCurve_convert_to_samples_func(FCurve *_self, ReportList *reports, int start, int end)
{
	rna_FCurve_convert_to_samples(_self, reports, start, end);
}

static void FCurve_convert_to_samples_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	FCurve *_self;
	int start;
	int end;
	char *_data;
	
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	start = *((int *)_data);
	_data += 8;
	end = *((int *)_data);
	
	rna_FCurve_convert_to_samples(_self, reports, start, end);
}

void FCurve_convert_to_keyframes_func(FCurve *_self, ReportList *reports, int start, int end)
{
	rna_FCurve_convert_to_keyframes(_self, reports, start, end);
}

static void FCurve_convert_to_keyframes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	FCurve *_self;
	int start;
	int end;
	char *_data;
	
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	start = *((int *)_data);
	_data += 8;
	end = *((int *)_data);
	
	rna_FCurve_convert_to_keyframes(_self, reports, start, end);
}

void FCurve_bake_func(FCurve *_self, ReportList *reports, int start, int end, float step, int remove)
{
	rna_FCurve_bake(_self, reports, start, end, step, remove);
}

static void FCurve_bake_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	FCurve *_self;
	int start;
	int end;
	float step;
	int remove;
	char *_data;
	
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	start = *((int *)_data);
	_data += 8;
	end = *((int *)_data);
	_data += 8;
	step = *((float *)_data);
	_data += 8;
	remove = *((int *)_data);
	
	rna_FCurve_bake(_self, reports, start, end, step, remove);
}

/* Repeated prototypes to detect errors */

float evaluate_fcurve(FCurve *_self, float frame);
void rna_FCurve_update_data_ex(ID *_selfid, FCurve *_self, Main *bmain);
void rna_FCurve_range(FCurve *_self, float range[2]);
void update_autoflags_fcurve(FCurve *_self, bContext *C, ReportList *reports, PointerRNA *data);
void rna_FCurve_convert_to_samples(FCurve *_self, ReportList *reports, int start, int end);
void rna_FCurve_convert_to_keyframes(FCurve *_self, ReportList *reports, int start, int end);
void rna_FCurve_bake(FCurve *_self, ReportList *reports, int start, int end, float step, int remove);

BezTriple *FCurveKeyframePoints_insert_func(ID *_selfid, FCurve *_self, Main *bmain, float frame, float value, int options, int keyframe_type)
{
	return rna_FKeyframe_points_insert(_selfid, _self, bmain, frame, value, options, keyframe_type);
}

static void FCurveKeyframePoints_insert_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FCurve *_self;
	float frame;
	float value;
	int options;
	int keyframe_type;
	BezTriple *keyframe;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	value = *((float *)_data);
	_data += 8;
	options = *((int *)_data);
	_data += 8;
	keyframe_type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	keyframe = rna_FKeyframe_points_insert(_selfid, _self, CTX_data_main(C), frame, value, options, keyframe_type);
	*((BezTriple **)_retdata) = keyframe;
}

void FCurveKeyframePoints_add_func(ID *_selfid, FCurve *_self, Main *bmain, int count)
{
	rna_FKeyframe_points_add(_selfid, _self, bmain, count);
}

static void FCurveKeyframePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FCurve *_self;
	int count;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_FKeyframe_points_add(_selfid, _self, CTX_data_main(C), count);
}

void FCurveKeyframePoints_remove_func(ID *_selfid, FCurve *_self, Main *bmain, ReportList *reports, PointerRNA *keyframe, bool fast)
{
	rna_FKeyframe_points_remove(_selfid, _self, bmain, reports, keyframe, fast);
}

static void FCurveKeyframePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FCurve *_self;
	PointerRNA *keyframe;
	bool fast;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	keyframe = *((PointerRNA **)_data);
	_data += 8;
	fast = *((bool *)_data);
	
	rna_FKeyframe_points_remove(_selfid, _self, CTX_data_main(C), reports, keyframe, fast);
}

void FCurveKeyframePoints_clear_func(ID *_selfid, FCurve *_self, Main *bmain)
{
	rna_FKeyframe_points_clear(_selfid, _self, bmain);
}

static void FCurveKeyframePoints_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FCurve *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (FCurve *)_ptr->data;
	
	rna_FKeyframe_points_clear(_selfid, _self, CTX_data_main(C));
}

void FCurveKeyframePoints_sort_func(ID *_selfid, FCurve *_self, Main *bmain)
{
	rna_FKeyframe_points_sort(_selfid, _self, bmain);
}

static void FCurveKeyframePoints_sort_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FCurve *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (FCurve *)_ptr->data;
	
	rna_FKeyframe_points_sort(_selfid, _self, CTX_data_main(C));
}

void FCurveKeyframePoints_deduplicate_func(ID *_selfid, FCurve *_self, Main *bmain)
{
	rna_FKeyframe_points_deduplicate(_selfid, _self, bmain);
}

static void FCurveKeyframePoints_deduplicate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FCurve *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (FCurve *)_ptr->data;
	
	rna_FKeyframe_points_deduplicate(_selfid, _self, CTX_data_main(C));
}

void FCurveKeyframePoints_handles_recalc_func(ID *_selfid, FCurve *_self, Main *bmain)
{
	rna_FKeyframe_points_handles_recalc(_selfid, _self, bmain);
}

static void FCurveKeyframePoints_handles_recalc_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FCurve *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (FCurve *)_ptr->data;
	
	rna_FKeyframe_points_handles_recalc(_selfid, _self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

BezTriple *rna_FKeyframe_points_insert(ID *_selfid, FCurve *_self, Main *bmain, float frame, float value, int options, int keyframe_type);
void rna_FKeyframe_points_add(ID *_selfid, FCurve *_self, Main *bmain, int count);
void rna_FKeyframe_points_remove(ID *_selfid, FCurve *_self, Main *bmain, ReportList *reports, PointerRNA *keyframe, bool fast);
void rna_FKeyframe_points_clear(ID *_selfid, FCurve *_self, Main *bmain);
void rna_FKeyframe_points_sort(ID *_selfid, FCurve *_self, Main *bmain);
void rna_FKeyframe_points_deduplicate(ID *_selfid, FCurve *_self, Main *bmain);
void rna_FKeyframe_points_handles_recalc(ID *_selfid, FCurve *_self, Main *bmain);

FModifier *FCurveModifiers_new_func(FCurve *_self, int type)
{
	return rna_FCurve_modifiers_new(_self, type);
}

static void FCurveModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	FCurve *_self;
	FModifier *fmodifier;
	int type;
	char *_data, *_retdata;
	
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	type = *((int *)_data);
	
	fmodifier = rna_FCurve_modifiers_new(_self, type);
	*((FModifier **)_retdata) = fmodifier;
}

void FCurveModifiers_remove_func(FCurve *_self, ReportList *reports, PointerRNA *modifier)
{
	rna_FCurve_modifiers_remove(_self, reports, modifier);
}

static void FCurveModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	FCurve *_self;
	PointerRNA *modifier;
	char *_data;
	
	_self = (FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((PointerRNA **)_data);
	
	rna_FCurve_modifiers_remove(_self, reports, modifier);
}

/* Repeated prototypes to detect errors */

FModifier *rna_FCurve_modifiers_new(FCurve *_self, int type);
void rna_FCurve_modifiers_remove(FCurve *_self, ReportList *reports, PointerRNA *modifier);






DriverVar *ChannelDriverVariables_new_func(ChannelDriver *_self)
{
	return rna_Driver_new_variable(_self);
}

static void ChannelDriverVariables_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ChannelDriver *_self;
	DriverVar *var;
	char *_data, *_retdata;
	
	_self = (ChannelDriver *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	var = rna_Driver_new_variable(_self);
	*((DriverVar **)_retdata) = var;
}

void ChannelDriverVariables_remove_func(ChannelDriver *_self, ReportList *reports, PointerRNA *variable)
{
	rna_Driver_remove_variable(_self, reports, variable);
}

static void ChannelDriverVariables_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ChannelDriver *_self;
	PointerRNA *variable;
	char *_data;
	
	_self = (ChannelDriver *)_ptr->data;
	_data = (char *)_parms->data;
	variable = *((PointerRNA **)_data);
	
	rna_Driver_remove_variable(_self, reports, variable);
}

/* Repeated prototypes to detect errors */

DriverVar *rna_Driver_new_variable(ChannelDriver *_self);
void rna_Driver_remove_variable(ChannelDriver *_self, ReportList *reports, PointerRNA *variable);


int FModifierGenerator_coefficients_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FModifierGenerator_coefficients_get_length(ptr, arraylen);
}




FCM_EnvelopeData *FModifierEnvelopeControlPoints_add_func(ID *_selfid, FModifier *_self, Main *bmain, ReportList *reports, float frame)
{
	return rna_FModifierEnvelope_points_add(_selfid, _self, bmain, reports, frame);
}

static void FModifierEnvelopeControlPoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FModifier *_self;
	float frame;
	FCM_EnvelopeData *point;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (FModifier *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	point = rna_FModifierEnvelope_points_add(_selfid, _self, CTX_data_main(C), reports, frame);
	*((FCM_EnvelopeData **)_retdata) = point;
}

void FModifierEnvelopeControlPoints_remove_func(ID *_selfid, FModifier *_self, Main *bmain, ReportList *reports, PointerRNA *point)
{
	rna_FModifierEnvelope_points_remove(_selfid, _self, bmain, reports, point);
}

static void FModifierEnvelopeControlPoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FModifier *_self;
	PointerRNA *point;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (FModifier *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((PointerRNA *)_data);
	
	rna_FModifierEnvelope_points_remove(_selfid, _self, CTX_data_main(C), reports, point);
}

/* Repeated prototypes to detect errors */

FCM_EnvelopeData *rna_FModifierEnvelope_points_add(ID *_selfid, FModifier *_self, Main *bmain, ReportList *reports, float frame);
void rna_FModifierEnvelope_points_remove(ID *_selfid, FModifier *_self, Main *bmain, ReportList *reports, PointerRNA *point);







/* F-Curve */
static CollectionPropertyRNA rna_FCurve_rna_properties_;
PropertyRNA &rna_FCurve_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FCurve_rna_properties_);

static PointerPropertyRNA rna_FCurve_rna_type_;
PropertyRNA &rna_FCurve_rna_type = reinterpret_cast<PropertyRNA &>(rna_FCurve_rna_type_);

static EnumPropertyRNA rna_FCurve_extrapolation_;
PropertyRNA &rna_FCurve_extrapolation = reinterpret_cast<PropertyRNA &>(rna_FCurve_extrapolation_);

static PointerPropertyRNA rna_FCurve_driver_;
PropertyRNA &rna_FCurve_driver = reinterpret_cast<PropertyRNA &>(rna_FCurve_driver_);

static PointerPropertyRNA rna_FCurve_group_;
PropertyRNA &rna_FCurve_group = reinterpret_cast<PropertyRNA &>(rna_FCurve_group_);

static StringPropertyRNA rna_FCurve_data_path_;
PropertyRNA &rna_FCurve_data_path = reinterpret_cast<PropertyRNA &>(rna_FCurve_data_path_);

static IntPropertyRNA rna_FCurve_array_index_;
PropertyRNA &rna_FCurve_array_index = reinterpret_cast<PropertyRNA &>(rna_FCurve_array_index_);

static EnumPropertyRNA rna_FCurve_color_mode_;
PropertyRNA &rna_FCurve_color_mode = reinterpret_cast<PropertyRNA &>(rna_FCurve_color_mode_);

static FloatPropertyRNA rna_FCurve_color_;
PropertyRNA &rna_FCurve_color = reinterpret_cast<PropertyRNA &>(rna_FCurve_color_);

static BoolPropertyRNA rna_FCurve_select_;
PropertyRNA &rna_FCurve_select = reinterpret_cast<PropertyRNA &>(rna_FCurve_select_);

static BoolPropertyRNA rna_FCurve_lock_;
PropertyRNA &rna_FCurve_lock = reinterpret_cast<PropertyRNA &>(rna_FCurve_lock_);

static BoolPropertyRNA rna_FCurve_mute_;
PropertyRNA &rna_FCurve_mute = reinterpret_cast<PropertyRNA &>(rna_FCurve_mute_);

static BoolPropertyRNA rna_FCurve_hide_;
PropertyRNA &rna_FCurve_hide = reinterpret_cast<PropertyRNA &>(rna_FCurve_hide_);

static EnumPropertyRNA rna_FCurve_auto_smoothing_;
PropertyRNA &rna_FCurve_auto_smoothing = reinterpret_cast<PropertyRNA &>(rna_FCurve_auto_smoothing_);

static BoolPropertyRNA rna_FCurve_is_valid_;
PropertyRNA &rna_FCurve_is_valid = reinterpret_cast<PropertyRNA &>(rna_FCurve_is_valid_);

static BoolPropertyRNA rna_FCurve_is_empty_;
PropertyRNA &rna_FCurve_is_empty = reinterpret_cast<PropertyRNA &>(rna_FCurve_is_empty_);

static CollectionPropertyRNA rna_FCurve_sampled_points_;
PropertyRNA &rna_FCurve_sampled_points = reinterpret_cast<PropertyRNA &>(rna_FCurve_sampled_points_);

static CollectionPropertyRNA rna_FCurve_keyframe_points_;
PropertyRNA &rna_FCurve_keyframe_points = reinterpret_cast<PropertyRNA &>(rna_FCurve_keyframe_points_);

static CollectionPropertyRNA rna_FCurve_modifiers_;
PropertyRNA &rna_FCurve_modifiers = reinterpret_cast<PropertyRNA &>(rna_FCurve_modifiers_);

static FloatPropertyRNA rna_FCurve_evaluate_frame_;
PropertyRNA &rna_FCurve_evaluate_frame = reinterpret_cast<PropertyRNA &>(rna_FCurve_evaluate_frame_);

static FloatPropertyRNA rna_FCurve_evaluate_value_;
PropertyRNA &rna_FCurve_evaluate_value = reinterpret_cast<PropertyRNA &>(rna_FCurve_evaluate_value_);

FunctionRNA *rna_FCurve_evaluate_func;
FunctionRNA *rna_FCurve_update_func;
static FloatPropertyRNA rna_FCurve_range_range_;
PropertyRNA &rna_FCurve_range_range = reinterpret_cast<PropertyRNA &>(rna_FCurve_range_range_);

FunctionRNA *rna_FCurve_range_func;
static PointerPropertyRNA rna_FCurve_update_autoflags_data_;
PropertyRNA &rna_FCurve_update_autoflags_data = reinterpret_cast<PropertyRNA &>(rna_FCurve_update_autoflags_data_);

FunctionRNA *rna_FCurve_update_autoflags_func;
static IntPropertyRNA rna_FCurve_convert_to_samples_start_;
PropertyRNA &rna_FCurve_convert_to_samples_start = reinterpret_cast<PropertyRNA &>(rna_FCurve_convert_to_samples_start_);

static IntPropertyRNA rna_FCurve_convert_to_samples_end_;
PropertyRNA &rna_FCurve_convert_to_samples_end = reinterpret_cast<PropertyRNA &>(rna_FCurve_convert_to_samples_end_);

FunctionRNA *rna_FCurve_convert_to_samples_func;
static IntPropertyRNA rna_FCurve_convert_to_keyframes_start_;
PropertyRNA &rna_FCurve_convert_to_keyframes_start = reinterpret_cast<PropertyRNA &>(rna_FCurve_convert_to_keyframes_start_);

static IntPropertyRNA rna_FCurve_convert_to_keyframes_end_;
PropertyRNA &rna_FCurve_convert_to_keyframes_end = reinterpret_cast<PropertyRNA &>(rna_FCurve_convert_to_keyframes_end_);

FunctionRNA *rna_FCurve_convert_to_keyframes_func;
static IntPropertyRNA rna_FCurve_bake_start_;
PropertyRNA &rna_FCurve_bake_start = reinterpret_cast<PropertyRNA &>(rna_FCurve_bake_start_);

static IntPropertyRNA rna_FCurve_bake_end_;
PropertyRNA &rna_FCurve_bake_end = reinterpret_cast<PropertyRNA &>(rna_FCurve_bake_end_);

static FloatPropertyRNA rna_FCurve_bake_step_;
PropertyRNA &rna_FCurve_bake_step = reinterpret_cast<PropertyRNA &>(rna_FCurve_bake_step_);

static EnumPropertyRNA rna_FCurve_bake_remove_;
PropertyRNA &rna_FCurve_bake_remove = reinterpret_cast<PropertyRNA &>(rna_FCurve_bake_remove_);

FunctionRNA *rna_FCurve_bake_func;
StructRNA *RNA_FCurve;
void register_struct_FCurve(BlenderRNA &brna)
{
	rna_FCurve_rna_properties_ = {
		{&rna_FCurve_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_rna_properties_begin, FCurve_rna_properties_next, FCurve_rna_properties_end, FCurve_rna_properties_get, nullptr, nullptr, FCurve_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FCurve_rna_type_ = {
		{&rna_FCurve_extrapolation, 	&rna_FCurve_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_FCurve_extrapolation_items[3] = {
		{0, "CONSTANT", 0, "Constant", "Hold values of endpoint keyframes"	},
		{1, "LINEAR", 0, "Linear", "Use slope of curve leading in/out of endpoint keyframes"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FCurve_extrapolation_ = {
		{&rna_FCurve_driver, 	&rna_FCurve_rna_type,
		-1, "extrapolation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Extrapolation",
		"Method used for evaluating value of F-Curve outside first and last keyframes",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FCurve_update_data, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FCurve, extend), RawPropertyType(1), nullptr},
		FCurve_extrapolation_get, FCurve_extrapolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FCurve_extrapolation_items, 2, 0
	};

	rna_FCurve_driver_ = {
		{&rna_FCurve_group, 	&rna_FCurve_extrapolation,
		-1, "driver", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Driver",
		"Channel Driver (only set for Driver F-Curves)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_driver_get, nullptr, nullptr, nullptr,RNA_Driver
	};

	rna_FCurve_group_ = {
		{&rna_FCurve_data_path, 	&rna_FCurve_driver,
		-1, "group", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Group",
		"Action Group that this F-Curve belongs to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 251658240, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_group_get, FCurve_group_set, nullptr, nullptr,RNA_ActionGroup
	};

	rna_FCurve_data_path_ = {
		{&rna_FCurve_array_index, 	&rna_FCurve_group,
		-1, "data_path", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"RNA Path to property affected by F-Curve",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FCurve_update_data_relations, 251658240, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_data_path_get, FCurve_data_path_length, FCurve_data_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_FCurve_array_index_ = {
		{&rna_FCurve_color_mode, 	&rna_FCurve_data_path,
		-1, "array_index", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "RNA Array Index",
		"Index to the specific property affected by F-Curve if applicable",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FCurve_update_data_relations, 251658240, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FCurve, array_index), RawPropertyType(0), nullptr},
		FCurve_array_index_get, FCurve_array_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FCurve_color_mode_items[5] = {
		{0, "AUTO_RAINBOW", 0, "Auto Rainbow", "Cycle through the rainbow, trying to give each curve a unique color"	},
		{1, "AUTO_RGB", 0, "Auto XYZ to RGB", "Use axis colors for transform and color properties, and auto-rainbow for the rest"	},
		{3, "AUTO_YRGB", 0, "Auto WXYZ to YRGB", "Use WXYZ axis colors for quaternion/axis-angle rotations, XYZ axis colors for other transform and color properties, and auto-rainbow for the rest"	},
		{2, "CUSTOM", 0, "User Defined", "Use custom hand-picked color for F-Curve"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FCurve_color_mode_ = {
		{&rna_FCurve_color, 	&rna_FCurve_array_index,
		-1, "color_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color Mode",
		"Method used to determine color of F-Curve in Graph Editor",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 251658240, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FCurve, color_mode), RawPropertyType(0), nullptr},
		FCurve_color_mode_get, FCurve_color_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FCurve_color_mode_items, 4, 0
	};

	static float rna_FCurve_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_FCurve_color_ = {
		{&rna_FCurve_select, 	&rna_FCurve_color_mode,
		-1, "color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Color of the F-Curve in the Graph Editor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 251658240, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FCurve, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, FCurve_color_get, FCurve_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FCurve_color_default
	};

	rna_FCurve_select_ = {
		{&rna_FCurve_lock, 	&rna_FCurve_color,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"F-Curve is selected for editing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256245766, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_select_get, FCurve_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FCurve_lock_ = {
		{&rna_FCurve_mute, 	&rna_FCurve_select,
		-1, "lock", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock",
		"F-Curve\'s settings cannot be edited",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_lock_get, FCurve_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FCurve_mute_ = {
		{&rna_FCurve_hide, 	&rna_FCurve_lock,
		-1, "mute", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Muted",
		"Disable F-Curve evaluation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FCurve_update_eval, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_mute_get, FCurve_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FCurve_hide_ = {
		{&rna_FCurve_auto_smoothing, 	&rna_FCurve_mute,
		-1, "hide", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"F-Curve and its keyframes are hidden in the Graph Editor graphs",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 269352960, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_hide_get, FCurve_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FCurve_auto_smoothing_ = {
		{&rna_FCurve_is_valid, 	&rna_FCurve_hide,
		-1, "auto_smoothing", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Auto Handle Smoothing",
		"Algorithm used to compute automatic handles",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FCurve_update_data, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FCurve, auto_smoothing), RawPropertyType(2), nullptr},
		FCurve_auto_smoothing_get, FCurve_auto_smoothing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_fcurve_auto_smoothing_items, 2, 0
	};

	rna_FCurve_is_valid_ = {
		{&rna_FCurve_is_empty, 	&rna_FCurve_auto_smoothing,
		-1, "is_valid", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Valid",
		"False when F-Curve could not be evaluated in past, so should be skipped when evaluating",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_is_valid_get, FCurve_is_valid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FCurve_is_empty_ = {
		{&rna_FCurve_sampled_points, 	&rna_FCurve_is_valid,
		-1, "is_empty", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Empty",
		"True if the curve contributes no animation due to lack of keyframes or useful modifiers, and should be deleted",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_is_empty_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FCurve_sampled_points_ = {
		{&rna_FCurve_keyframe_points, 	&rna_FCurve_is_empty,
		-1, "sampled_points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Sampled Points",
		"Sampled animation data",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurve_sampled_points_begin, FCurve_sampled_points_next, FCurve_sampled_points_end, FCurve_sampled_points_get, FCurve_sampled_points_length, FCurve_sampled_points_lookup_int, nullptr, nullptr, RNA_FCurveSample
	};

	rna_FCurve_keyframe_points_ = {
		{&rna_FCurve_modifiers, 	&rna_FCurve_sampled_points,
		-1, "keyframe_points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Keyframes",
		"User-editable keyframes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_FCurveKeyframePoints},
		FCurve_keyframe_points_begin, FCurve_keyframe_points_next, FCurve_keyframe_points_end, FCurve_keyframe_points_get, FCurve_keyframe_points_length, FCurve_keyframe_points_lookup_int, nullptr, nullptr, RNA_Keyframe
	};

	rna_FCurve_modifiers_ = {
		{nullptr, 	&rna_FCurve_keyframe_points,
		-1, "modifiers", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Modifiers",
		"Modifiers affecting the shape of the F-Curve",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_FCurveModifiers},
		FCurve_modifiers_begin, FCurve_modifiers_next, FCurve_modifiers_end, FCurve_modifiers_get, nullptr, FCurve_modifiers_lookup_int, FCurve_modifiers_lookup_string, nullptr, RNA_FModifier
	};

	StructRNA *srna = RNA_FCurve;
	srna->cont.properties = {&rna_FCurve_rna_properties, &rna_FCurve_modifiers};
	srna->identifier = "FCurve";
	srna->flag = 516;
	srna->name = "F-Curve";
	srna->description = "F-Curve defining values of a period of time";
	srna->translation_context = "*";
	srna->icon = 202;
	srna->iteratorproperty = &rna_FCurve_rna_properties;
	srna->path = rna_FCurve_path;
	{
	rna_FCurve_evaluate_frame_ = {
		{&rna_FCurve_evaluate_value, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame",
		"Evaluate F-Curve at given frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};
	rna_FCurve_evaluate_value_ = {
		{nullptr, 	&rna_FCurve_evaluate_frame,
		-1, "value", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Value",
		"Value of F-Curve specific frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FCurve_evaluate_frame, &rna_FCurve_evaluate_value};
		func->identifier = "evaluate";
		func->description = "Evaluate F-Curve";
		func->call = FCurve_evaluate_call;
		func->c_ret = &rna_FCurve_evaluate_value;
		rna_FCurve_evaluate_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update";
		func->flag = 2052;
		func->description = "Ensure keyframes are sorted in chronological order and handles are set correctly";
		func->call = FCurve_update_call;
		rna_FCurve_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_FCurve_range_range_default[2] = {
		0.0f,
		0.0f
	};
	rna_FCurve_range_range_ = {
		{nullptr, 	nullptr,
		-1, "range", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Range",
		"Min/Max values",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_FCurve_range_range_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FCurve_range_range, &rna_FCurve_range_range};
		func->identifier = "range";
		func->description = "Get the time extents for F-Curve";
		func->call = FCurve_range_call;
		rna_FCurve_range_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_FCurve_update_autoflags_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "Data",
		"Data containing the property controlled by given FCurve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnyType
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FCurve_update_autoflags_data, &rna_FCurve_update_autoflags_data};
		func->identifier = "update_autoflags";
		func->flag = 24;
		func->description = "Update FCurve flags set automatically from affected property (currently, integer/discrete flags set when the property is not a float)";
		func->call = FCurve_update_autoflags_call;
		rna_FCurve_update_autoflags_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_FCurve_convert_to_samples_start_ = {
		{&rna_FCurve_convert_to_samples_end, 	nullptr,
		-1, "start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_FCurve_convert_to_samples_end_ = {
		{nullptr, 	&rna_FCurve_convert_to_samples_start,
		-1, "end", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FCurve_convert_to_samples_start, &rna_FCurve_convert_to_samples_end};
		func->identifier = "convert_to_samples";
		func->flag = 16;
		func->description = "Convert current FCurve from keyframes to sample points, if necessary";
		func->call = FCurve_convert_to_samples_call;
		rna_FCurve_convert_to_samples_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_FCurve_convert_to_keyframes_start_ = {
		{&rna_FCurve_convert_to_keyframes_end, 	nullptr,
		-1, "start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_FCurve_convert_to_keyframes_end_ = {
		{nullptr, 	&rna_FCurve_convert_to_keyframes_start,
		-1, "end", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FCurve_convert_to_keyframes_start, &rna_FCurve_convert_to_keyframes_end};
		func->identifier = "convert_to_keyframes";
		func->flag = 16;
		func->description = "Convert current FCurve from sample points to keyframes (linear interpolation), if necessary";
		func->call = FCurve_convert_to_keyframes_call;
		rna_FCurve_convert_to_keyframes_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_FCurve_bake_start_ = {
		{&rna_FCurve_bake_end, 	nullptr,
		-1, "start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"Frame at which to start baking",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_FCurve_bake_end_ = {
		{&rna_FCurve_bake_step, 	&rna_FCurve_bake_start,
		-1, "end", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"Frame at which to end baking (inclusive)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_FCurve_bake_step_ = {
		{&rna_FCurve_bake_remove, 	&rna_FCurve_bake_end,
		-1, "step", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Step",
		"At which interval to add keys",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 16.0f, 0.0099999998f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};
	static const EnumPropertyItem rna_FCurve_bake_remove_items[5] = {
		{0, "NONE", 0, "None", "Keep all keys"	},
		{1, "IN_RANGE", 0, "In Range", "Remove all keys within the defined range"	},
		{2, "OUT_RANGE", 0, "Outside Range", "Remove all keys outside the defined range"	},
		{3, "ALL", 0, "All", "Remove all existing keys"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FCurve_bake_remove_ = {
		{nullptr, 	&rna_FCurve_bake_step,
		-1, "remove", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Remove Options",
		"Choose which keys should be automatically removed by the bake",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FCurve_bake_remove_items, 4, 1
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FCurve_bake_start, &rna_FCurve_bake_remove};
		func->identifier = "bake";
		func->flag = 16;
		func->description = "Place keys at even intervals on the existing curve.";
		func->call = FCurve_bake_call;
		rna_FCurve_bake_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Keyframe Points */
static CollectionPropertyRNA rna_FCurveKeyframePoints_rna_properties_;
PropertyRNA &rna_FCurveKeyframePoints_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FCurveKeyframePoints_rna_properties_);

static PointerPropertyRNA rna_FCurveKeyframePoints_rna_type_;
PropertyRNA &rna_FCurveKeyframePoints_rna_type = reinterpret_cast<PropertyRNA &>(rna_FCurveKeyframePoints_rna_type_);

static FloatPropertyRNA rna_FCurveKeyframePoints_insert_frame_;
PropertyRNA &rna_FCurveKeyframePoints_insert_frame = reinterpret_cast<PropertyRNA &>(rna_FCurveKeyframePoints_insert_frame_);

static FloatPropertyRNA rna_FCurveKeyframePoints_insert_value_;
PropertyRNA &rna_FCurveKeyframePoints_insert_value = reinterpret_cast<PropertyRNA &>(rna_FCurveKeyframePoints_insert_value_);

static EnumPropertyRNA rna_FCurveKeyframePoints_insert_options_;
PropertyRNA &rna_FCurveKeyframePoints_insert_options = reinterpret_cast<PropertyRNA &>(rna_FCurveKeyframePoints_insert_options_);

static EnumPropertyRNA rna_FCurveKeyframePoints_insert_keyframe_type_;
PropertyRNA &rna_FCurveKeyframePoints_insert_keyframe_type = reinterpret_cast<PropertyRNA &>(rna_FCurveKeyframePoints_insert_keyframe_type_);

static PointerPropertyRNA rna_FCurveKeyframePoints_insert_keyframe_;
PropertyRNA &rna_FCurveKeyframePoints_insert_keyframe = reinterpret_cast<PropertyRNA &>(rna_FCurveKeyframePoints_insert_keyframe_);

FunctionRNA *rna_FCurveKeyframePoints_insert_func;
static IntPropertyRNA rna_FCurveKeyframePoints_add_count_;
PropertyRNA &rna_FCurveKeyframePoints_add_count = reinterpret_cast<PropertyRNA &>(rna_FCurveKeyframePoints_add_count_);

FunctionRNA *rna_FCurveKeyframePoints_add_func;
static PointerPropertyRNA rna_FCurveKeyframePoints_remove_keyframe_;
PropertyRNA &rna_FCurveKeyframePoints_remove_keyframe = reinterpret_cast<PropertyRNA &>(rna_FCurveKeyframePoints_remove_keyframe_);

static BoolPropertyRNA rna_FCurveKeyframePoints_remove_fast_;
PropertyRNA &rna_FCurveKeyframePoints_remove_fast = reinterpret_cast<PropertyRNA &>(rna_FCurveKeyframePoints_remove_fast_);

FunctionRNA *rna_FCurveKeyframePoints_remove_func;
FunctionRNA *rna_FCurveKeyframePoints_clear_func;
FunctionRNA *rna_FCurveKeyframePoints_sort_func;
FunctionRNA *rna_FCurveKeyframePoints_deduplicate_func;
FunctionRNA *rna_FCurveKeyframePoints_handles_recalc_func;
StructRNA *RNA_FCurveKeyframePoints;
void register_struct_FCurveKeyframePoints(BlenderRNA &brna)
{
	rna_FCurveKeyframePoints_rna_properties_ = {
		{&rna_FCurveKeyframePoints_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurveKeyframePoints_rna_properties_begin, FCurveKeyframePoints_rna_properties_next, FCurveKeyframePoints_rna_properties_end, FCurveKeyframePoints_rna_properties_get, nullptr, nullptr, FCurveKeyframePoints_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FCurveKeyframePoints_rna_type_ = {
		{nullptr, 	&rna_FCurveKeyframePoints_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurveKeyframePoints_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_FCurveKeyframePoints;
	srna->cont.properties = {&rna_FCurveKeyframePoints_rna_properties, &rna_FCurveKeyframePoints_rna_type};
	srna->identifier = "FCurveKeyframePoints";
	srna->flag = 516;
	srna->name = "Keyframe Points";
	srna->description = "Collection of keyframe points";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FCurveKeyframePoints_rna_properties;
	{
	rna_FCurveKeyframePoints_insert_frame_ = {
		{&rna_FCurveKeyframePoints_insert_value, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"X Value of this keyframe point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_FCurveKeyframePoints_insert_value_ = {
		{&rna_FCurveKeyframePoints_insert_options, 	&rna_FCurveKeyframePoints_insert_frame,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Y Value of this keyframe point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	static const EnumPropertyItem rna_FCurveKeyframePoints_insert_options_items[4] = {
		{16, "REPLACE", 0, "Replace", "Don\'t add any new keyframes, but just replace existing ones"	},
		{1, "NEEDED", 0, "Needed", "Only adds keyframes that are needed"	},
		{4, "FAST", 0, "Fast", "Fast keyframe insertion to avoid recalculating the curve each time"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FCurveKeyframePoints_insert_options_ = {
		{&rna_FCurveKeyframePoints_insert_keyframe_type, 	&rna_FCurveKeyframePoints_insert_value,
		-1, "options", 2097155, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Keyframe options",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FCurveKeyframePoints_insert_options_items, 3, 0
	};
	rna_FCurveKeyframePoints_insert_keyframe_type_ = {
		{&rna_FCurveKeyframePoints_insert_keyframe, 	&rna_FCurveKeyframePoints_insert_options,
		-1, "keyframe_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Type of keyframe to insert",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_beztriple_keyframe_type_items, 6, 0
	};
	rna_FCurveKeyframePoints_insert_keyframe_ = {
		{nullptr, 	&rna_FCurveKeyframePoints_insert_keyframe_type,
		-1, "keyframe", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created keyframe",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Keyframe
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FCurveKeyframePoints_insert_frame, &rna_FCurveKeyframePoints_insert_keyframe};
		func->identifier = "insert";
		func->flag = 2052;
		func->description = "Add a keyframe point to a F-Curve";
		func->call = FCurveKeyframePoints_insert_call;
		func->c_ret = &rna_FCurveKeyframePoints_insert_keyframe;
		rna_FCurveKeyframePoints_insert_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_FCurveKeyframePoints_add_count_ = {
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
		func->cont.properties = {&rna_FCurveKeyframePoints_add_count, &rna_FCurveKeyframePoints_add_count};
		func->identifier = "add";
		func->flag = 2052;
		func->description = "Add a keyframe point to a F-Curve";
		func->call = FCurveKeyframePoints_add_call;
		rna_FCurveKeyframePoints_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_FCurveKeyframePoints_remove_keyframe_ = {
		{&rna_FCurveKeyframePoints_remove_fast, 	nullptr,
		-1, "keyframe", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Keyframe to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Keyframe
	};
	rna_FCurveKeyframePoints_remove_fast_ = {
		{nullptr, 	&rna_FCurveKeyframePoints_remove_keyframe,
		-1, "fast", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fast",
		"Fast keyframe removal to avoid recalculating the curve each time",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FCurveKeyframePoints_remove_keyframe, &rna_FCurveKeyframePoints_remove_fast};
		func->identifier = "remove";
		func->flag = 2068;
		func->description = "Remove keyframe from an F-Curve";
		func->call = FCurveKeyframePoints_remove_call;
		rna_FCurveKeyframePoints_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 2052;
		func->description = "Remove all keyframes from an F-Curve";
		func->call = FCurveKeyframePoints_clear_call;
		rna_FCurveKeyframePoints_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "sort";
		func->flag = 2052;
		func->description = "Ensure all keyframe points are chronologically sorted";
		func->call = FCurveKeyframePoints_sort_call;
		rna_FCurveKeyframePoints_sort_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "deduplicate";
		func->flag = 2052;
		func->description = "Ensure there are no duplicate keys. Assumes that the points have already been sorted";
		func->call = FCurveKeyframePoints_deduplicate_call;
		rna_FCurveKeyframePoints_deduplicate_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "handles_recalc";
		func->flag = 2052;
		func->description = "Update handles after modifications to the keyframe points, to update things like auto-clamping";
		func->call = FCurveKeyframePoints_handles_recalc_call;
		rna_FCurveKeyframePoints_handles_recalc_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* F-Curve Modifiers */
static CollectionPropertyRNA rna_FCurveModifiers_rna_properties_;
PropertyRNA &rna_FCurveModifiers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FCurveModifiers_rna_properties_);

static PointerPropertyRNA rna_FCurveModifiers_rna_type_;
PropertyRNA &rna_FCurveModifiers_rna_type = reinterpret_cast<PropertyRNA &>(rna_FCurveModifiers_rna_type_);

static PointerPropertyRNA rna_FCurveModifiers_active_;
PropertyRNA &rna_FCurveModifiers_active = reinterpret_cast<PropertyRNA &>(rna_FCurveModifiers_active_);

static PointerPropertyRNA rna_FCurveModifiers_new_fmodifier_;
PropertyRNA &rna_FCurveModifiers_new_fmodifier = reinterpret_cast<PropertyRNA &>(rna_FCurveModifiers_new_fmodifier_);

static EnumPropertyRNA rna_FCurveModifiers_new_type_;
PropertyRNA &rna_FCurveModifiers_new_type = reinterpret_cast<PropertyRNA &>(rna_FCurveModifiers_new_type_);

FunctionRNA *rna_FCurveModifiers_new_func;
static PointerPropertyRNA rna_FCurveModifiers_remove_modifier_;
PropertyRNA &rna_FCurveModifiers_remove_modifier = reinterpret_cast<PropertyRNA &>(rna_FCurveModifiers_remove_modifier_);

FunctionRNA *rna_FCurveModifiers_remove_func;
StructRNA *RNA_FCurveModifiers;
void register_struct_FCurveModifiers(BlenderRNA &brna)
{
	rna_FCurveModifiers_rna_properties_ = {
		{&rna_FCurveModifiers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurveModifiers_rna_properties_begin, FCurveModifiers_rna_properties_next, FCurveModifiers_rna_properties_end, FCurveModifiers_rna_properties_get, nullptr, nullptr, FCurveModifiers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FCurveModifiers_rna_type_ = {
		{&rna_FCurveModifiers_active, 	&rna_FCurveModifiers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurveModifiers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_FCurveModifiers_active_ = {
		{nullptr, 	&rna_FCurveModifiers_rna_type,
		-1, "active", 8388609, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active F-Curve Modifier",
		"Active F-Curve Modifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurveModifiers_active_get, FCurveModifiers_active_set, nullptr, nullptr,RNA_FModifier
	};

	StructRNA *srna = RNA_FCurveModifiers;
	srna->cont.properties = {&rna_FCurveModifiers_rna_properties, &rna_FCurveModifiers_active};
	srna->identifier = "FCurveModifiers";
	srna->flag = 516;
	srna->name = "F-Curve Modifiers";
	srna->description = "Collection of F-Curve Modifiers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FCurveModifiers_rna_properties;
	{
	rna_FCurveModifiers_new_fmodifier_ = {
		{&rna_FCurveModifiers_new_type, 	nullptr,
		-1, "fmodifier", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New fmodifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FModifier
	};
	rna_FCurveModifiers_new_type_ = {
		{nullptr, 	&rna_FCurveModifiers_new_fmodifier,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Constraint type to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_fmodifier_type_items, 9, 1
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FCurveModifiers_new_fmodifier, &rna_FCurveModifiers_new_type};
		func->identifier = "new";
		func->description = "Add a constraint to this object";
		func->call = FCurveModifiers_new_call;
		func->c_ret = &rna_FCurveModifiers_new_fmodifier;
		rna_FCurveModifiers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_FCurveModifiers_remove_modifier_ = {
		{nullptr, 	nullptr,
		-1, "modifier", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Removed modifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FModifier
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FCurveModifiers_remove_modifier, &rna_FCurveModifiers_remove_modifier};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a modifier from this F-Curve";
		func->call = FCurveModifiers_remove_call;
		rna_FCurveModifiers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Keyframe */
static CollectionPropertyRNA rna_Keyframe_rna_properties_;
PropertyRNA &rna_Keyframe_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Keyframe_rna_properties_);

static PointerPropertyRNA rna_Keyframe_rna_type_;
PropertyRNA &rna_Keyframe_rna_type = reinterpret_cast<PropertyRNA &>(rna_Keyframe_rna_type_);

static BoolPropertyRNA rna_Keyframe_select_left_handle_;
PropertyRNA &rna_Keyframe_select_left_handle = reinterpret_cast<PropertyRNA &>(rna_Keyframe_select_left_handle_);

static BoolPropertyRNA rna_Keyframe_select_right_handle_;
PropertyRNA &rna_Keyframe_select_right_handle = reinterpret_cast<PropertyRNA &>(rna_Keyframe_select_right_handle_);

static BoolPropertyRNA rna_Keyframe_select_control_point_;
PropertyRNA &rna_Keyframe_select_control_point = reinterpret_cast<PropertyRNA &>(rna_Keyframe_select_control_point_);

static EnumPropertyRNA rna_Keyframe_handle_left_type_;
PropertyRNA &rna_Keyframe_handle_left_type = reinterpret_cast<PropertyRNA &>(rna_Keyframe_handle_left_type_);

static EnumPropertyRNA rna_Keyframe_handle_right_type_;
PropertyRNA &rna_Keyframe_handle_right_type = reinterpret_cast<PropertyRNA &>(rna_Keyframe_handle_right_type_);

static EnumPropertyRNA rna_Keyframe_interpolation_;
PropertyRNA &rna_Keyframe_interpolation = reinterpret_cast<PropertyRNA &>(rna_Keyframe_interpolation_);

static EnumPropertyRNA rna_Keyframe_type_;
PropertyRNA &rna_Keyframe_type = reinterpret_cast<PropertyRNA &>(rna_Keyframe_type_);

static EnumPropertyRNA rna_Keyframe_easing_;
PropertyRNA &rna_Keyframe_easing = reinterpret_cast<PropertyRNA &>(rna_Keyframe_easing_);

static FloatPropertyRNA rna_Keyframe_back_;
PropertyRNA &rna_Keyframe_back = reinterpret_cast<PropertyRNA &>(rna_Keyframe_back_);

static FloatPropertyRNA rna_Keyframe_amplitude_;
PropertyRNA &rna_Keyframe_amplitude = reinterpret_cast<PropertyRNA &>(rna_Keyframe_amplitude_);

static FloatPropertyRNA rna_Keyframe_period_;
PropertyRNA &rna_Keyframe_period = reinterpret_cast<PropertyRNA &>(rna_Keyframe_period_);

static FloatPropertyRNA rna_Keyframe_handle_left_;
PropertyRNA &rna_Keyframe_handle_left = reinterpret_cast<PropertyRNA &>(rna_Keyframe_handle_left_);

static FloatPropertyRNA rna_Keyframe_co_;
PropertyRNA &rna_Keyframe_co = reinterpret_cast<PropertyRNA &>(rna_Keyframe_co_);

static FloatPropertyRNA rna_Keyframe_co_ui_;
PropertyRNA &rna_Keyframe_co_ui = reinterpret_cast<PropertyRNA &>(rna_Keyframe_co_ui_);

static FloatPropertyRNA rna_Keyframe_handle_right_;
PropertyRNA &rna_Keyframe_handle_right = reinterpret_cast<PropertyRNA &>(rna_Keyframe_handle_right_);

StructRNA *RNA_Keyframe;
void register_struct_Keyframe(BlenderRNA &brna)
{
	rna_Keyframe_rna_properties_ = {
		{&rna_Keyframe_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Keyframe_rna_properties_begin, Keyframe_rna_properties_next, Keyframe_rna_properties_end, Keyframe_rna_properties_get, nullptr, nullptr, Keyframe_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Keyframe_rna_type_ = {
		{&rna_Keyframe_select_left_handle, 	&rna_Keyframe_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Keyframe_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Keyframe_select_left_handle_ = {
		{&rna_Keyframe_select_right_handle, 	&rna_Keyframe_rna_type,
		-1, "select_left_handle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 1 selected",
		"Left handle selection status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256245766, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Keyframe_select_left_handle_get, Keyframe_select_left_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Keyframe_select_right_handle_ = {
		{&rna_Keyframe_select_control_point, 	&rna_Keyframe_select_left_handle,
		-1, "select_right_handle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle 2 selected",
		"Right handle selection status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256245766, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Keyframe_select_right_handle_get, Keyframe_select_right_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Keyframe_select_control_point_ = {
		{&rna_Keyframe_handle_left_type, 	&rna_Keyframe_select_right_handle,
		-1, "select_control_point", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Control point selection status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256245766, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Keyframe_select_control_point_get, Keyframe_select_control_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Keyframe_handle_left_type_ = {
		{&rna_Keyframe_handle_right_type, 	&rna_Keyframe_select_control_point,
		-1, "handle_left_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Left Handle Type",
		"Handle types",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Keyframe_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, h1), RawPropertyType(6), nullptr},
		Keyframe_handle_left_type_get, Keyframe_handle_left_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_keyframe_handle_type_items, 5, 0
	};

	rna_Keyframe_handle_right_type_ = {
		{&rna_Keyframe_interpolation, 	&rna_Keyframe_handle_left_type,
		-1, "handle_right_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Right Handle Type",
		"Handle types",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Keyframe_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, h2), RawPropertyType(6), nullptr},
		Keyframe_handle_right_type_get, Keyframe_handle_right_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_keyframe_handle_type_items, 5, 0
	};

	rna_Keyframe_interpolation_ = {
		{&rna_Keyframe_type, 	&rna_Keyframe_handle_right_type,
		-1, "interpolation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interpolation",
		"Interpolation method to use for segment of the F-Curve from this Keyframe until the next Keyframe",
		0, "Action",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Keyframe_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, ipo), RawPropertyType(2), nullptr},
		Keyframe_interpolation_get, Keyframe_interpolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_beztriple_interpolation_mode_items, 16, 0
	};

	rna_Keyframe_type_ = {
		{&rna_Keyframe_easing, 	&rna_Keyframe_interpolation,
		-1, "type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of keyframe (for visual purposes only)",
		0, "Action",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Keyframe_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, hide), RawPropertyType(2), nullptr},
		Keyframe_type_get, Keyframe_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_beztriple_keyframe_type_items, 6, 0
	};

	rna_Keyframe_easing_ = {
		{&rna_Keyframe_back, 	&rna_Keyframe_type,
		-1, "easing", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Easing",
		"Which ends of the segment between this and the next keyframe easing interpolation is applied to",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Keyframe_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, easing), RawPropertyType(2), nullptr},
		Keyframe_easing_get, Keyframe_easing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_beztriple_interpolation_easing_items, 4, 0
	};

	rna_Keyframe_back_ = {
		{&rna_Keyframe_amplitude, 	&rna_Keyframe_easing,
		-1, "back", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Back",
		"Amount of overshoot for \'back\' easing",
		0, "Action",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Keyframe_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, back), RawPropertyType(5), nullptr},
		Keyframe_back_get, Keyframe_back_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Keyframe_amplitude_ = {
		{&rna_Keyframe_period, 	&rna_Keyframe_back,
		-1, "amplitude", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Amplitude",
		"Amount to boost elastic bounces for \'elastic\' easing",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Keyframe_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, amplitude), RawPropertyType(5), nullptr},
		Keyframe_amplitude_get, Keyframe_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Keyframe_period_ = {
		{&rna_Keyframe_handle_left, 	&rna_Keyframe_amplitude,
		-1, "period", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Period",
		"Time between bounces for elastic easing",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Keyframe_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BezTriple, period), RawPropertyType(5), nullptr},
		Keyframe_period_get, Keyframe_period_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_Keyframe_handle_left_default[2] = {
		0.0f,
		0.0f
	};
	rna_Keyframe_handle_left_ = {
		{&rna_Keyframe_co, 	&rna_Keyframe_period,
		-1, "handle_left", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Left Handle",
		"Coordinates of the left handle (before the control point)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COORDS) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Keyframe_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Keyframe_handle_left_get, Keyframe_handle_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Keyframe_handle_left_default
	};

	static float rna_Keyframe_co_default[2] = {
		0.0f,
		0.0f
	};
	rna_Keyframe_co_ = {
		{&rna_Keyframe_co_ui, 	&rna_Keyframe_handle_left,
		-1, "co", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Control Point",
		"Coordinates of the control point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COORDS) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Keyframe_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Keyframe_co_get, Keyframe_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Keyframe_co_default
	};

	static float rna_Keyframe_co_ui_default[2] = {
		0.0f,
		0.0f
	};
	rna_Keyframe_co_ui_ = {
		{&rna_Keyframe_handle_right, 	&rna_Keyframe_co,
		-1, "co_ui", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Control Point",
		"Coordinates of the control point. Note: Changing this value also updates the handles similar to using the graph editor transform operator",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COORDS) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Keyframe_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Keyframe_co_ui_get, Keyframe_co_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Keyframe_co_ui_default
	};

	static float rna_Keyframe_handle_right_default[2] = {
		0.0f,
		0.0f
	};
	rna_Keyframe_handle_right_ = {
		{nullptr, 	&rna_Keyframe_co_ui,
		-1, "handle_right", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Right Handle",
		"Coordinates of the right handle (after the control point)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COORDS) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Keyframe_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Keyframe_handle_right_get, Keyframe_handle_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Keyframe_handle_right_default
	};

	StructRNA *srna = RNA_Keyframe;
	srna->cont.properties = {&rna_Keyframe_rna_properties, &rna_Keyframe_handle_right};
	srna->identifier = "Keyframe";
	srna->flag = 516;
	srna->name = "Keyframe";
	srna->description = "Bézier curve point with two handles defining a Keyframe on an F-Curve";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Keyframe_rna_properties;
};

/* F-Curve Sample */
static CollectionPropertyRNA rna_FCurveSample_rna_properties_;
PropertyRNA &rna_FCurveSample_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FCurveSample_rna_properties_);

static PointerPropertyRNA rna_FCurveSample_rna_type_;
PropertyRNA &rna_FCurveSample_rna_type = reinterpret_cast<PropertyRNA &>(rna_FCurveSample_rna_type_);

static BoolPropertyRNA rna_FCurveSample_select_;
PropertyRNA &rna_FCurveSample_select = reinterpret_cast<PropertyRNA &>(rna_FCurveSample_select_);

static FloatPropertyRNA rna_FCurveSample_co_;
PropertyRNA &rna_FCurveSample_co = reinterpret_cast<PropertyRNA &>(rna_FCurveSample_co_);

StructRNA *RNA_FCurveSample;
void register_struct_FCurveSample(BlenderRNA &brna)
{
	rna_FCurveSample_rna_properties_ = {
		{&rna_FCurveSample_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurveSample_rna_properties_begin, FCurveSample_rna_properties_next, FCurveSample_rna_properties_end, FCurveSample_rna_properties_get, nullptr, nullptr, FCurveSample_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FCurveSample_rna_type_ = {
		{&rna_FCurveSample_select, 	&rna_FCurveSample_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurveSample_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_FCurveSample_select_ = {
		{&rna_FCurveSample_co, 	&rna_FCurveSample_rna_type,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Selection status",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256245766, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FCurveSample_select_get, FCurveSample_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_FCurveSample_co_default[2] = {
		0.0f,
		0.0f
	};
	rna_FCurveSample_co_ = {
		{nullptr, 	&rna_FCurveSample_select,
		-1, "co", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Point",
		"Point coordinates",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COORDS) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FPoint, vec), RawPropertyType(5), nullptr},
		nullptr, nullptr, FCurveSample_co_get, FCurveSample_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FCurveSample_co_default
	};

	StructRNA *srna = RNA_FCurveSample;
	srna->cont.properties = {&rna_FCurveSample_rna_properties, &rna_FCurveSample_co};
	srna->identifier = "FCurveSample";
	srna->flag = 516;
	srna->name = "F-Curve Sample";
	srna->description = "Sample point for F-Curve";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FCurveSample_rna_properties;
};

/* Driver Target */
static CollectionPropertyRNA rna_DriverTarget_rna_properties_;
PropertyRNA &rna_DriverTarget_rna_properties = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_rna_properties_);

static PointerPropertyRNA rna_DriverTarget_rna_type_;
PropertyRNA &rna_DriverTarget_rna_type = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_rna_type_);

static PointerPropertyRNA rna_DriverTarget_id_;
PropertyRNA &rna_DriverTarget_id = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_id_);

static EnumPropertyRNA rna_DriverTarget_id_type_;
PropertyRNA &rna_DriverTarget_id_type = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_id_type_);

static StringPropertyRNA rna_DriverTarget_data_path_;
PropertyRNA &rna_DriverTarget_data_path = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_data_path_);

static StringPropertyRNA rna_DriverTarget_bone_target_;
PropertyRNA &rna_DriverTarget_bone_target = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_bone_target_);

static EnumPropertyRNA rna_DriverTarget_transform_type_;
PropertyRNA &rna_DriverTarget_transform_type = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_transform_type_);

static EnumPropertyRNA rna_DriverTarget_rotation_mode_;
PropertyRNA &rna_DriverTarget_rotation_mode = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_rotation_mode_);

static EnumPropertyRNA rna_DriverTarget_transform_space_;
PropertyRNA &rna_DriverTarget_transform_space = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_transform_space_);

static EnumPropertyRNA rna_DriverTarget_context_property_;
PropertyRNA &rna_DriverTarget_context_property = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_context_property_);

static BoolPropertyRNA rna_DriverTarget_use_fallback_value_;
PropertyRNA &rna_DriverTarget_use_fallback_value = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_use_fallback_value_);

static FloatPropertyRNA rna_DriverTarget_fallback_value_;
PropertyRNA &rna_DriverTarget_fallback_value = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_fallback_value_);

static BoolPropertyRNA rna_DriverTarget_is_fallback_used_;
PropertyRNA &rna_DriverTarget_is_fallback_used = reinterpret_cast<PropertyRNA &>(rna_DriverTarget_is_fallback_used_);

StructRNA *RNA_DriverTarget;
void register_struct_DriverTarget(BlenderRNA &brna)
{
	rna_DriverTarget_rna_properties_ = {
		{&rna_DriverTarget_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverTarget_rna_properties_begin, DriverTarget_rna_properties_next, DriverTarget_rna_properties_end, DriverTarget_rna_properties_get, nullptr, nullptr, DriverTarget_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_DriverTarget_rna_type_ = {
		{&rna_DriverTarget_id, 	&rna_DriverTarget_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverTarget_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_DriverTarget_id_ = {
		{&rna_DriverTarget_id_type, 	&rna_DriverTarget_rna_type,
		-1, "id", 8388737, 1, 0, 64, 0, PropertyPathTemplateType(0), "ID",
		"ID-block that the specific property used can be found from (id_type property must be set first)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DriverTarget_update_data, 0, rna_DriverTarget_id_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverTarget_id_get, DriverTarget_id_set, rna_DriverTarget_id_typef, nullptr,RNA_ID
	};

	rna_DriverTarget_id_type_ = {
		{&rna_DriverTarget_data_path, 	&rna_DriverTarget_id,
		-1, "id_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID Type",
		"Type of ID-block that can be used",
		0, "ID",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DriverTarget_update_data, 0, rna_DriverTarget_id_type_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverTarget_id_type_get, DriverTarget_id_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_id_type_items, 39, 16975
	};

	rna_DriverTarget_data_path_ = {
		{&rna_DriverTarget_bone_target, 	&rna_DriverTarget_id_type,
		-1, "data_path", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"RNA Path (from ID-block) to property used",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DriverTarget_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverTarget_data_path_get, DriverTarget_data_path_length, DriverTarget_data_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_DriverTarget_bone_target_ = {
		{&rna_DriverTarget_transform_type, 	&rna_DriverTarget_data_path,
		-1, "bone_target", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bone Name",
		"Name of PoseBone to use as target",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_DriverTarget_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverTarget_bone_target_get, DriverTarget_bone_target_length, DriverTarget_bone_target_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_DriverTarget_transform_type_items[14] = {
		{0, "LOC_X", 0, "X Location", ""	},
		{1, "LOC_Y", 0, "Y Location", ""	},
		{2, "LOC_Z", 0, "Z Location", ""	},
		{0, "", 0, nullptr, nullptr	},
		{3, "ROT_X", 0, "X Rotation", ""	},
		{4, "ROT_Y", 0, "Y Rotation", ""	},
		{5, "ROT_Z", 0, "Z Rotation", ""	},
		{10, "ROT_W", 0, "W Rotation", ""	},
		{0, "", 0, nullptr, nullptr	},
		{6, "SCALE_X", 0, "X Scale", ""	},
		{7, "SCALE_Y", 0, "Y Scale", ""	},
		{8, "SCALE_Z", 0, "Z Scale", ""	},
		{9, "SCALE_AVG", 0, "Average Scale", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DriverTarget_transform_type_ = {
		{&rna_DriverTarget_rotation_mode, 	&rna_DriverTarget_bone_target,
		-1, "transform_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Driver variable type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DriverTarget_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DriverTarget, transChan), RawPropertyType(1), nullptr},
		DriverTarget_transform_type_get, DriverTarget_transform_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DriverTarget_transform_type_items, 13, 0
	};

	rna_DriverTarget_rotation_mode_ = {
		{&rna_DriverTarget_transform_space, 	&rna_DriverTarget_transform_type,
		-1, "rotation_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation Mode",
		"Mode for calculating rotation channel values",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DriverTarget_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DriverTarget, rotation_mode), RawPropertyType(2), nullptr},
		DriverTarget_rotation_mode_get, DriverTarget_rotation_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_driver_target_rotation_mode_items, 11, 0
	};

	static const EnumPropertyItem rna_DriverTarget_transform_space_items[4] = {
		{0, "WORLD_SPACE", 0, "World Space", "Transforms include effects of parenting/restpose and constraints"	},
		{4, "TRANSFORM_SPACE", 0, "Transform Space", "Transforms don\'t include parenting/restpose or constraints"	},
		{12, "LOCAL_SPACE", 0, "Local Space", "Transforms include effects of constraints but not parenting/restpose"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DriverTarget_transform_space_ = {
		{&rna_DriverTarget_context_property, 	&rna_DriverTarget_rotation_mode,
		-1, "transform_space", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Transform Space",
		"Space in which transforms are used",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DriverTarget_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DriverTarget, flag), RawPropertyType(1), nullptr},
		DriverTarget_transform_space_get, DriverTarget_transform_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DriverTarget_transform_space_items, 3, 0
	};

	static const EnumPropertyItem rna_DriverTarget_context_property_items[3] = {
		{0, "ACTIVE_SCENE", 0, "Active Scene", "Currently evaluating scene"	},
		{1, "ACTIVE_VIEW_LAYER", 0, "Active View Layer", "Currently evaluating view layer"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DriverTarget_context_property_ = {
		{&rna_DriverTarget_use_fallback_value, 	&rna_DriverTarget_transform_space,
		-1, "context_property", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Context Property",
		"Type of a context-dependent data-block to access property from",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DriverTarget_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DriverTarget, context_property), RawPropertyType(0), nullptr},
		DriverTarget_context_property_get, DriverTarget_context_property_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DriverTarget_context_property_items, 2, 0
	};

	rna_DriverTarget_use_fallback_value_ = {
		{&rna_DriverTarget_fallback_value, 	&rna_DriverTarget_context_property,
		-1, "use_fallback_value", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Fallback",
		"Use the fallback value if the data path cannot be resolved, instead of failing to evaluate the driver",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DriverTarget_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverTarget_use_fallback_value_get, DriverTarget_use_fallback_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DriverTarget_fallback_value_ = {
		{&rna_DriverTarget_is_fallback_used, 	&rna_DriverTarget_use_fallback_value,
		-1, "fallback_value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fallback",
		"The value to use if the data path cannot be resolved",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DriverTarget_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DriverTarget, fallback_value), RawPropertyType(5), nullptr},
		DriverTarget_fallback_value_get, DriverTarget_fallback_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DriverTarget_is_fallback_used_ = {
		{nullptr, 	&rna_DriverTarget_fallback_value,
		-1, "is_fallback_used", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Fallback Used",
		"Indicates that the most recent variable evaluation used the fallback value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverTarget_is_fallback_used_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_DriverTarget;
	srna->cont.properties = {&rna_DriverTarget_rna_properties, &rna_DriverTarget_is_fallback_used};
	srna->identifier = "DriverTarget";
	srna->flag = 516;
	srna->name = "Driver Target";
	srna->description = "Source of input values for driver variables";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_DriverTarget_rna_properties;
};

/* Driver Variable */
static CollectionPropertyRNA rna_DriverVariable_rna_properties_;
PropertyRNA &rna_DriverVariable_rna_properties = reinterpret_cast<PropertyRNA &>(rna_DriverVariable_rna_properties_);

static PointerPropertyRNA rna_DriverVariable_rna_type_;
PropertyRNA &rna_DriverVariable_rna_type = reinterpret_cast<PropertyRNA &>(rna_DriverVariable_rna_type_);

static StringPropertyRNA rna_DriverVariable_name_;
PropertyRNA &rna_DriverVariable_name = reinterpret_cast<PropertyRNA &>(rna_DriverVariable_name_);

static EnumPropertyRNA rna_DriverVariable_type_;
PropertyRNA &rna_DriverVariable_type = reinterpret_cast<PropertyRNA &>(rna_DriverVariable_type_);

static CollectionPropertyRNA rna_DriverVariable_targets_;
PropertyRNA &rna_DriverVariable_targets = reinterpret_cast<PropertyRNA &>(rna_DriverVariable_targets_);

static BoolPropertyRNA rna_DriverVariable_is_name_valid_;
PropertyRNA &rna_DriverVariable_is_name_valid = reinterpret_cast<PropertyRNA &>(rna_DriverVariable_is_name_valid_);

StructRNA *RNA_DriverVariable;
void register_struct_DriverVariable(BlenderRNA &brna)
{
	rna_DriverVariable_rna_properties_ = {
		{&rna_DriverVariable_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverVariable_rna_properties_begin, DriverVariable_rna_properties_next, DriverVariable_rna_properties_end, DriverVariable_rna_properties_get, nullptr, nullptr, DriverVariable_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_DriverVariable_rna_type_ = {
		{&rna_DriverVariable_name, 	&rna_DriverVariable_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverVariable_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_DriverVariable_name_ = {
		{&rna_DriverVariable_type, 	&rna_DriverVariable_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name to use in scripted expressions/functions (no spaces or dots are allowed, and must start with a letter)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_DriverVariable_update_name, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverVariable_name_get, DriverVariable_name_length, DriverVariable_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_DriverVariable_type_items[6] = {
		{0, "SINGLE_PROP", 223, "Single Property", "Use the value from some RNA property"	},
		{3, "TRANSFORMS", 66, "Transform Channel", "Final transformation value of object or bone"	},
		{1, "ROTATION_DIFF", 65, "Rotational Difference", "Use the angle between two bones"	},
		{2, "LOC_DIFF", 64, "Distance", "Distance between two bones or objects"	},
		{4, "CONTEXT_PROP", 223, "Context Property", "Use the value from some RNA property within the current evaluation context"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DriverVariable_type_ = {
		{&rna_DriverVariable_targets, 	&rna_DriverVariable_name,
		-1, "type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"Driver variable type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DriverVariable_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverVariable_type_get, DriverVariable_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DriverVariable_type_items, 5, 0
	};

	rna_DriverVariable_targets_ = {
		{&rna_DriverVariable_is_name_valid, 	&rna_DriverVariable_type,
		-1, "targets", 0, 1, 0, 8, 0, PropertyPathTemplateType(0), "Targets",
		"Sources of input data for evaluating this variable",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {8, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverVariable_targets_begin, DriverVariable_targets_next, DriverVariable_targets_end, DriverVariable_targets_get, DriverVariable_targets_length, DriverVariable_targets_lookup_int, nullptr, nullptr, RNA_DriverTarget
	};

	rna_DriverVariable_is_name_valid_ = {
		{nullptr, 	&rna_DriverVariable_targets,
		-1, "is_name_valid", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Name Valid",
		"Is this a valid name for a driver variable",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DriverVariable_is_name_valid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	StructRNA *srna = RNA_DriverVariable;
	srna->cont.properties = {&rna_DriverVariable_rna_properties, &rna_DriverVariable_is_name_valid};
	srna->identifier = "DriverVariable";
	srna->flag = 516;
	srna->name = "Driver Variable";
	srna->description = "Variable from some source/target for driver relationship";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_DriverVariable_name;
	srna->iteratorproperty = &rna_DriverVariable_rna_properties;
};

/* Driver */
static CollectionPropertyRNA rna_Driver_rna_properties_;
PropertyRNA &rna_Driver_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Driver_rna_properties_);

static PointerPropertyRNA rna_Driver_rna_type_;
PropertyRNA &rna_Driver_rna_type = reinterpret_cast<PropertyRNA &>(rna_Driver_rna_type_);

static EnumPropertyRNA rna_Driver_type_;
PropertyRNA &rna_Driver_type = reinterpret_cast<PropertyRNA &>(rna_Driver_type_);

static StringPropertyRNA rna_Driver_expression_;
PropertyRNA &rna_Driver_expression = reinterpret_cast<PropertyRNA &>(rna_Driver_expression_);

static CollectionPropertyRNA rna_Driver_variables_;
PropertyRNA &rna_Driver_variables = reinterpret_cast<PropertyRNA &>(rna_Driver_variables_);

static BoolPropertyRNA rna_Driver_use_self_;
PropertyRNA &rna_Driver_use_self = reinterpret_cast<PropertyRNA &>(rna_Driver_use_self_);

static BoolPropertyRNA rna_Driver_is_valid_;
PropertyRNA &rna_Driver_is_valid = reinterpret_cast<PropertyRNA &>(rna_Driver_is_valid_);

static BoolPropertyRNA rna_Driver_is_simple_expression_;
PropertyRNA &rna_Driver_is_simple_expression = reinterpret_cast<PropertyRNA &>(rna_Driver_is_simple_expression_);

StructRNA *RNA_Driver;
void register_struct_Driver(BlenderRNA &brna)
{
	rna_Driver_rna_properties_ = {
		{&rna_Driver_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Driver_rna_properties_begin, Driver_rna_properties_next, Driver_rna_properties_end, Driver_rna_properties_get, nullptr, nullptr, Driver_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Driver_rna_type_ = {
		{&rna_Driver_type, 	&rna_Driver_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Driver_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_Driver_type_items[6] = {
		{0, "AVERAGE", 0, "Averaged Value", ""	},
		{2, "SUM", 0, "Sum Values", ""	},
		{1, "SCRIPTED", 0, "Scripted Expression", ""	},
		{3, "MIN", 0, "Minimum Value", ""	},
		{4, "MAX", 0, "Maximum Value", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Driver_type_ = {
		{&rna_Driver_expression, 	&rna_Driver_rna_type,
		-1, "type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Driver type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ChannelDriver_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ChannelDriver, type), RawPropertyType(0), nullptr},
		Driver_type_get, Driver_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Driver_type_items, 5, 0
	};

	rna_Driver_expression_ = {
		{&rna_Driver_variables, 	&rna_Driver_type,
		-1, "expression", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Expression",
		"Expression to use for Scripted Expression",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {256, 0, 0}, 0,
		rna_ChannelDriver_update_expr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Driver_expression_get, Driver_expression_length, Driver_expression_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_Driver_variables_ = {
		{&rna_Driver_use_self, 	&rna_Driver_expression,
		-1, "variables", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Variables",
		"Properties acting as inputs for this driver",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ChannelDriverVariables},
		Driver_variables_begin, Driver_variables_next, Driver_variables_end, Driver_variables_get, nullptr, Driver_variables_lookup_int, Driver_variables_lookup_string, nullptr, RNA_DriverVariable
	};

	rna_Driver_use_self_ = {
		{&rna_Driver_is_valid, 	&rna_Driver_variables,
		-1, "use_self", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Self",
		"Include a \'self\' variable in the name-space, so drivers can easily reference the data being modified (object, bone, etc...)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Driver_use_self_get, Driver_use_self_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Driver_is_valid_ = {
		{&rna_Driver_is_simple_expression, 	&rna_Driver_use_self,
		-1, "is_valid", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invalid",
		"Driver could not be evaluated in past, so should be skipped",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Driver_is_valid_get, Driver_is_valid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Driver_is_simple_expression_ = {
		{nullptr, 	&rna_Driver_is_valid,
		-1, "is_simple_expression", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Simple Expression",
		"The scripted expression can be evaluated without using the full Python interpreter",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Driver_is_simple_expression_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Driver;
	srna->cont.properties = {&rna_Driver_rna_properties, &rna_Driver_is_simple_expression};
	srna->identifier = "Driver";
	srna->flag = 516;
	srna->name = "Driver";
	srna->description = "Driver for the value of a setting based on an external value";
	srna->translation_context = "*";
	srna->icon = 506;
	srna->iteratorproperty = &rna_Driver_rna_properties;
};

/* ChannelDriver Variables */
static CollectionPropertyRNA rna_ChannelDriverVariables_rna_properties_;
PropertyRNA &rna_ChannelDriverVariables_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ChannelDriverVariables_rna_properties_);

static PointerPropertyRNA rna_ChannelDriverVariables_rna_type_;
PropertyRNA &rna_ChannelDriverVariables_rna_type = reinterpret_cast<PropertyRNA &>(rna_ChannelDriverVariables_rna_type_);

static PointerPropertyRNA rna_ChannelDriverVariables_new_var_;
PropertyRNA &rna_ChannelDriverVariables_new_var = reinterpret_cast<PropertyRNA &>(rna_ChannelDriverVariables_new_var_);

FunctionRNA *rna_ChannelDriverVariables_new_func;
static PointerPropertyRNA rna_ChannelDriverVariables_remove_variable_;
PropertyRNA &rna_ChannelDriverVariables_remove_variable = reinterpret_cast<PropertyRNA &>(rna_ChannelDriverVariables_remove_variable_);

FunctionRNA *rna_ChannelDriverVariables_remove_func;
StructRNA *RNA_ChannelDriverVariables;
void register_struct_ChannelDriverVariables(BlenderRNA &brna)
{
	rna_ChannelDriverVariables_rna_properties_ = {
		{&rna_ChannelDriverVariables_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChannelDriverVariables_rna_properties_begin, ChannelDriverVariables_rna_properties_next, ChannelDriverVariables_rna_properties_end, ChannelDriverVariables_rna_properties_get, nullptr, nullptr, ChannelDriverVariables_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ChannelDriverVariables_rna_type_ = {
		{nullptr, 	&rna_ChannelDriverVariables_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChannelDriverVariables_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ChannelDriverVariables;
	srna->cont.properties = {&rna_ChannelDriverVariables_rna_properties, &rna_ChannelDriverVariables_rna_type};
	srna->identifier = "ChannelDriverVariables";
	srna->flag = 516;
	srna->name = "ChannelDriver Variables";
	srna->description = "Collection of channel driver Variables";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ChannelDriverVariables_rna_properties;
	{
	rna_ChannelDriverVariables_new_var_ = {
		{nullptr, 	nullptr,
		-1, "var", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created Driver Variable",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_DriverVariable
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ChannelDriverVariables_new_var, &rna_ChannelDriverVariables_new_var};
		func->identifier = "new";
		func->description = "Add a new variable for the driver";
		func->call = ChannelDriverVariables_new_call;
		func->c_ret = &rna_ChannelDriverVariables_new_var;
		rna_ChannelDriverVariables_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ChannelDriverVariables_remove_variable_ = {
		{nullptr, 	nullptr,
		-1, "variable", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Variable to remove from the driver",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_DriverVariable
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ChannelDriverVariables_remove_variable, &rna_ChannelDriverVariables_remove_variable};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove an existing variable from the driver";
		func->call = ChannelDriverVariables_remove_call;
		rna_ChannelDriverVariables_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* F-Modifier */
static CollectionPropertyRNA rna_FModifier_rna_properties_;
PropertyRNA &rna_FModifier_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FModifier_rna_properties_);

static PointerPropertyRNA rna_FModifier_rna_type_;
PropertyRNA &rna_FModifier_rna_type = reinterpret_cast<PropertyRNA &>(rna_FModifier_rna_type_);

static StringPropertyRNA rna_FModifier_name_;
PropertyRNA &rna_FModifier_name = reinterpret_cast<PropertyRNA &>(rna_FModifier_name_);

static EnumPropertyRNA rna_FModifier_type_;
PropertyRNA &rna_FModifier_type = reinterpret_cast<PropertyRNA &>(rna_FModifier_type_);

static BoolPropertyRNA rna_FModifier_show_expanded_;
PropertyRNA &rna_FModifier_show_expanded = reinterpret_cast<PropertyRNA &>(rna_FModifier_show_expanded_);

static BoolPropertyRNA rna_FModifier_mute_;
PropertyRNA &rna_FModifier_mute = reinterpret_cast<PropertyRNA &>(rna_FModifier_mute_);

static BoolPropertyRNA rna_FModifier_is_valid_;
PropertyRNA &rna_FModifier_is_valid = reinterpret_cast<PropertyRNA &>(rna_FModifier_is_valid_);

static BoolPropertyRNA rna_FModifier_active_;
PropertyRNA &rna_FModifier_active = reinterpret_cast<PropertyRNA &>(rna_FModifier_active_);

static BoolPropertyRNA rna_FModifier_use_restricted_range_;
PropertyRNA &rna_FModifier_use_restricted_range = reinterpret_cast<PropertyRNA &>(rna_FModifier_use_restricted_range_);

static FloatPropertyRNA rna_FModifier_frame_start_;
PropertyRNA &rna_FModifier_frame_start = reinterpret_cast<PropertyRNA &>(rna_FModifier_frame_start_);

static FloatPropertyRNA rna_FModifier_frame_end_;
PropertyRNA &rna_FModifier_frame_end = reinterpret_cast<PropertyRNA &>(rna_FModifier_frame_end_);

static FloatPropertyRNA rna_FModifier_blend_in_;
PropertyRNA &rna_FModifier_blend_in = reinterpret_cast<PropertyRNA &>(rna_FModifier_blend_in_);

static FloatPropertyRNA rna_FModifier_blend_out_;
PropertyRNA &rna_FModifier_blend_out = reinterpret_cast<PropertyRNA &>(rna_FModifier_blend_out_);

static BoolPropertyRNA rna_FModifier_use_influence_;
PropertyRNA &rna_FModifier_use_influence = reinterpret_cast<PropertyRNA &>(rna_FModifier_use_influence_);

static FloatPropertyRNA rna_FModifier_influence_;
PropertyRNA &rna_FModifier_influence = reinterpret_cast<PropertyRNA &>(rna_FModifier_influence_);

StructRNA *RNA_FModifier;
void register_struct_FModifier(BlenderRNA &brna)
{
	rna_FModifier_rna_properties_ = {
		{&rna_FModifier_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_rna_properties_begin, FModifier_rna_properties_next, FModifier_rna_properties_end, FModifier_rna_properties_get, nullptr, nullptr, FModifier_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FModifier_rna_type_ = {
		{&rna_FModifier_name, 	&rna_FModifier_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_FModifier_name_ = {
		{&rna_FModifier_type, 	&rna_FModifier_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"F-Curve Modifier name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 102236165, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_name_get, FModifier_name_length, FModifier_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_FModifier_type_ = {
		{&rna_FModifier_show_expanded, 	&rna_FModifier_name,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"F-Curve Modifier Type",
		0, "Action",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FModifier, type), RawPropertyType(1), nullptr},
		FModifier_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_fmodifier_type_items, 9, 0
	};

	rna_FModifier_show_expanded_ = {
		{&rna_FModifier_mute, 	&rna_FModifier_type,
		-1, "show_expanded", 1073745923, 0, 0, 0, 0, PropertyPathTemplateType(0), "Expanded",
		"F-Curve Modifier\'s panel is expanded in UI",
		33, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_show_expanded_get, FModifier_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifier_mute_ = {
		{&rna_FModifier_is_valid, 	&rna_FModifier_show_expanded,
		-1, "mute", 4355, 1, 0, 0, 0, PropertyPathTemplateType(0), "Enabled",
		"Enable F-Curve modifier evaluation",
		8, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_mute_get, FModifier_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifier_is_valid_ = {
		{&rna_FModifier_active, 	&rna_FModifier_mute,
		-1, "is_valid", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Disabled",
		"F-Curve Modifier has invalid settings and will not be evaluated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_is_valid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FModifier_active_ = {
		{&rna_FModifier_use_restricted_range, 	&rna_FModifier_is_valid,
		-1, "active", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"F-Curve modifier will show settings in the editor",
		23, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_active_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_active_get, FModifier_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifier_use_restricted_range_ = {
		{&rna_FModifier_frame_start, 	&rna_FModifier_active,
		-1, "use_restricted_range", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Restrict Frame Range",
		"F-Curve Modifier is only applied for the specified frame range to help mask off effects in order to chain them",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_use_restricted_range_get, FModifier_use_restricted_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifier_frame_start_ = {
		{&rna_FModifier_frame_end, 	&rna_FModifier_use_restricted_range,
		-1, "frame_start", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"Frame that modifier\'s influence starts (if Restrict Frame Range is in use)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_frame_start_get, FModifier_frame_start_set, nullptr, nullptr, rna_FModifier_start_frame_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifier_frame_end_ = {
		{&rna_FModifier_blend_in, 	&rna_FModifier_frame_start,
		-1, "frame_end", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"Frame that modifier\'s influence ends (if Restrict Frame Range is in use)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_frame_end_get, FModifier_frame_end_set, nullptr, nullptr, rna_FModifier_end_frame_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifier_blend_in_ = {
		{&rna_FModifier_blend_out, 	&rna_FModifier_frame_end,
		-1, "blend_in", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Blend In",
		"Number of frames from start frame for influence to take effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FModifier, blendin), RawPropertyType(5), nullptr},
		FModifier_blend_in_get, FModifier_blend_in_set, nullptr, nullptr, rna_FModifier_blending_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifier_blend_out_ = {
		{&rna_FModifier_use_influence, 	&rna_FModifier_blend_in,
		-1, "blend_out", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Blend Out",
		"Number of frames from end frame for influence to fade out",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FModifier, blendout), RawPropertyType(5), nullptr},
		FModifier_blend_out_get, FModifier_blend_out_set, nullptr, nullptr, rna_FModifier_blending_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifier_use_influence_ = {
		{&rna_FModifier_influence, 	&rna_FModifier_blend_out,
		-1, "use_influence", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Influence",
		"F-Curve Modifier\'s effects will be tempered by a default factor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifier_use_influence_get, FModifier_use_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifier_influence_ = {
		{nullptr, 	&rna_FModifier_use_influence,
		-1, "influence", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Influence",
		"Amount of influence F-Curve Modifier will have when not fading in/out",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256311296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FModifier, influence), RawPropertyType(5), nullptr},
		FModifier_influence_get, FModifier_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	StructRNA *srna = RNA_FModifier;
	srna->cont.properties = {&rna_FModifier_rna_properties, &rna_FModifier_influence};
	srna->identifier = "FModifier";
	srna->flag = 516;
	srna->name = "F-Modifier";
	srna->description = "Modifier for values of F-Curve";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_FModifier_name;
	srna->iteratorproperty = &rna_FModifier_rna_properties;
	srna->refine = rna_FModifierType_refine;
};

/* Generator F-Modifier */
static BoolPropertyRNA rna_FModifierGenerator_use_additive_;
PropertyRNA &rna_FModifierGenerator_use_additive = reinterpret_cast<PropertyRNA &>(rna_FModifierGenerator_use_additive_);

static EnumPropertyRNA rna_FModifierGenerator_mode_;
PropertyRNA &rna_FModifierGenerator_mode = reinterpret_cast<PropertyRNA &>(rna_FModifierGenerator_mode_);

static IntPropertyRNA rna_FModifierGenerator_poly_order_;
PropertyRNA &rna_FModifierGenerator_poly_order = reinterpret_cast<PropertyRNA &>(rna_FModifierGenerator_poly_order_);

static FloatPropertyRNA rna_FModifierGenerator_coefficients_;
PropertyRNA &rna_FModifierGenerator_coefficients = reinterpret_cast<PropertyRNA &>(rna_FModifierGenerator_coefficients_);

StructRNA *RNA_FModifierGenerator;
void register_struct_FModifierGenerator(BlenderRNA &brna)
{
	rna_FModifierGenerator_use_additive_ = {
		{&rna_FModifierGenerator_mode, 	nullptr,
		-1, "use_additive", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Additive",
		"Values generated by this modifier are applied on top of the existing values instead of overwriting them",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierGenerator_use_additive_get, FModifierGenerator_use_additive_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FModifierGenerator_mode_items[3] = {
		{0, "POLYNOMIAL", 0, "Expanded Polynomial", ""	},
		{1, "POLYNOMIAL_FACTORISED", 0, "Factorized Polynomial", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FModifierGenerator_mode_ = {
		{&rna_FModifierGenerator_poly_order, 	&rna_FModifierGenerator_use_additive,
		-1, "mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Type of generator to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_verify_data_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Generator, mode), RawPropertyType(0), nullptr},
		FModifierGenerator_mode_get, FModifierGenerator_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FModifierGenerator_mode_items, 2, 0
	};

	rna_FModifierGenerator_poly_order_ = {
		{&rna_FModifierGenerator_coefficients, 	&rna_FModifierGenerator_mode,
		-1, "poly_order", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Polynomial Order",
		"The highest power of \'x\' for this polynomial (number of coefficients - 1)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_verify_data_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Generator, poly_order), RawPropertyType(0), nullptr},
		FModifierGenerator_poly_order_get, FModifierGenerator_poly_order_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, 100, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_FModifierGenerator_coefficients_default[32] = {
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
	rna_FModifierGenerator_coefficients_ = {
		{nullptr, 	&rna_FModifierGenerator_poly_order,
		-1, "coefficients", 131075, 1, 0, 0, 0, PropertyPathTemplateType(0), "Coefficients",
		"Coefficients for \'x\' (starting from lowest power of x^0)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_FModifierGenerator_coefficients_get_length, 1, {32, 0, 0}, 32,
		rna_FModifier_verify_data_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, FModifierGenerator_coefficients_get, FModifierGenerator_coefficients_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FModifierGenerator_coefficients_default
	};

	StructRNA *srna = RNA_FModifierGenerator;
	srna->cont.properties = {&rna_FModifierGenerator_use_additive, &rna_FModifierGenerator_coefficients};
	srna->identifier = "FModifierGenerator";
	srna->flag = 516;
	srna->name = "Generator F-Modifier";
	srna->description = "Deterministically generate values for the modified F-Curve";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_FModifier_name;
	srna->iteratorproperty = &rna_FModifier_rna_properties;
	srna->base = RNA_FModifier;
	srna->refine = rna_FModifierType_refine;
};

/* Built-In Function F-Modifier */
static FloatPropertyRNA rna_FModifierFunctionGenerator_amplitude_;
PropertyRNA &rna_FModifierFunctionGenerator_amplitude = reinterpret_cast<PropertyRNA &>(rna_FModifierFunctionGenerator_amplitude_);

static FloatPropertyRNA rna_FModifierFunctionGenerator_phase_multiplier_;
PropertyRNA &rna_FModifierFunctionGenerator_phase_multiplier = reinterpret_cast<PropertyRNA &>(rna_FModifierFunctionGenerator_phase_multiplier_);

static FloatPropertyRNA rna_FModifierFunctionGenerator_phase_offset_;
PropertyRNA &rna_FModifierFunctionGenerator_phase_offset = reinterpret_cast<PropertyRNA &>(rna_FModifierFunctionGenerator_phase_offset_);

static FloatPropertyRNA rna_FModifierFunctionGenerator_value_offset_;
PropertyRNA &rna_FModifierFunctionGenerator_value_offset = reinterpret_cast<PropertyRNA &>(rna_FModifierFunctionGenerator_value_offset_);

static BoolPropertyRNA rna_FModifierFunctionGenerator_use_additive_;
PropertyRNA &rna_FModifierFunctionGenerator_use_additive = reinterpret_cast<PropertyRNA &>(rna_FModifierFunctionGenerator_use_additive_);

static EnumPropertyRNA rna_FModifierFunctionGenerator_function_type_;
PropertyRNA &rna_FModifierFunctionGenerator_function_type = reinterpret_cast<PropertyRNA &>(rna_FModifierFunctionGenerator_function_type_);

StructRNA *RNA_FModifierFunctionGenerator;
void register_struct_FModifierFunctionGenerator(BlenderRNA &brna)
{
	rna_FModifierFunctionGenerator_amplitude_ = {
		{&rna_FModifierFunctionGenerator_phase_multiplier, 	nullptr,
		-1, "amplitude", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Amplitude",
		"Scale factor determining the maximum/minimum values",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_FunctionGenerator, amplitude), RawPropertyType(5), nullptr},
		FModifierFunctionGenerator_amplitude_get, FModifierFunctionGenerator_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FModifierFunctionGenerator_phase_multiplier_ = {
		{&rna_FModifierFunctionGenerator_phase_offset, 	&rna_FModifierFunctionGenerator_amplitude,
		-1, "phase_multiplier", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Phase Multiple",
		"Scale factor determining the \'speed\' of the function",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_FunctionGenerator, phase_multiplier), RawPropertyType(5), nullptr},
		FModifierFunctionGenerator_phase_multiplier_get, FModifierFunctionGenerator_phase_multiplier_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FModifierFunctionGenerator_phase_offset_ = {
		{&rna_FModifierFunctionGenerator_value_offset, 	&rna_FModifierFunctionGenerator_phase_multiplier,
		-1, "phase_offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Phase Offset",
		"Constant factor to offset time by for function",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_FunctionGenerator, phase_offset), RawPropertyType(5), nullptr},
		FModifierFunctionGenerator_phase_offset_get, FModifierFunctionGenerator_phase_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierFunctionGenerator_value_offset_ = {
		{&rna_FModifierFunctionGenerator_use_additive, 	&rna_FModifierFunctionGenerator_phase_offset,
		-1, "value_offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Value Offset",
		"Constant factor to offset values by",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_FunctionGenerator, value_offset), RawPropertyType(5), nullptr},
		FModifierFunctionGenerator_value_offset_get, FModifierFunctionGenerator_value_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierFunctionGenerator_use_additive_ = {
		{&rna_FModifierFunctionGenerator_function_type, 	&rna_FModifierFunctionGenerator_value_offset,
		-1, "use_additive", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Additive",
		"Values generated by this modifier are applied on top of the existing values instead of overwriting them",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierFunctionGenerator_use_additive_get, FModifierFunctionGenerator_use_additive_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FModifierFunctionGenerator_function_type_items[7] = {
		{0, "SIN", 0, "Sine", ""	},
		{1, "COS", 0, "Cosine", ""	},
		{2, "TAN", 0, "Tangent", ""	},
		{3, "SQRT", 0, "Square Root", ""	},
		{4, "LN", 0, "Natural Logarithm", ""	},
		{5, "SINC", 0, "Normalized Sine", "sin(x) / x"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FModifierFunctionGenerator_function_type_ = {
		{nullptr, 	&rna_FModifierFunctionGenerator_use_additive,
		-1, "function_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of built-in function to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_FunctionGenerator, type), RawPropertyType(0), nullptr},
		FModifierFunctionGenerator_function_type_get, FModifierFunctionGenerator_function_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FModifierFunctionGenerator_function_type_items, 6, 0
	};

	StructRNA *srna = RNA_FModifierFunctionGenerator;
	srna->cont.properties = {&rna_FModifierFunctionGenerator_amplitude, &rna_FModifierFunctionGenerator_function_type};
	srna->identifier = "FModifierFunctionGenerator";
	srna->flag = 516;
	srna->name = "Built-In Function F-Modifier";
	srna->description = "Generate values using a built-in function";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_FModifier_name;
	srna->iteratorproperty = &rna_FModifier_rna_properties;
	srna->base = RNA_FModifier;
	srna->refine = rna_FModifierType_refine;
};

/* Envelope F-Modifier */
static CollectionPropertyRNA rna_FModifierEnvelope_control_points_;
PropertyRNA &rna_FModifierEnvelope_control_points = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelope_control_points_);

static FloatPropertyRNA rna_FModifierEnvelope_reference_value_;
PropertyRNA &rna_FModifierEnvelope_reference_value = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelope_reference_value_);

static FloatPropertyRNA rna_FModifierEnvelope_default_min_;
PropertyRNA &rna_FModifierEnvelope_default_min = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelope_default_min_);

static FloatPropertyRNA rna_FModifierEnvelope_default_max_;
PropertyRNA &rna_FModifierEnvelope_default_max = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelope_default_max_);

StructRNA *RNA_FModifierEnvelope;
void register_struct_FModifierEnvelope(BlenderRNA &brna)
{
	rna_FModifierEnvelope_control_points_ = {
		{&rna_FModifierEnvelope_reference_value, 	nullptr,
		-1, "control_points", 0, 1, 0, 8, 0, PropertyPathTemplateType(0), "Control Points",
		"Control points defining the shape of the envelope",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_FModifierEnvelopeControlPoints},
		FModifierEnvelope_control_points_begin, FModifierEnvelope_control_points_next, FModifierEnvelope_control_points_end, FModifierEnvelope_control_points_get, FModifierEnvelope_control_points_length, FModifierEnvelope_control_points_lookup_int, nullptr, nullptr, RNA_FModifierEnvelopeControlPoint
	};

	rna_FModifierEnvelope_reference_value_ = {
		{&rna_FModifierEnvelope_default_min, 	&rna_FModifierEnvelope_control_points,
		-1, "reference_value", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Reference Value",
		"Value that envelope\'s influence is centered around / based on",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Envelope, midval), RawPropertyType(5), nullptr},
		FModifierEnvelope_reference_value_get, FModifierEnvelope_reference_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierEnvelope_default_min_ = {
		{&rna_FModifierEnvelope_default_max, 	&rna_FModifierEnvelope_reference_value,
		-1, "default_min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Default Minimum",
		"Lower distance from Reference Value for 1:1 default influence",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Envelope, min), RawPropertyType(5), nullptr},
		FModifierEnvelope_default_min_get, FModifierEnvelope_default_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, -1.0f, nullptr
	};

	rna_FModifierEnvelope_default_max_ = {
		{nullptr, 	&rna_FModifierEnvelope_default_min,
		-1, "default_max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Default Maximum",
		"Upper distance from Reference Value for 1:1 default influence",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Envelope, max), RawPropertyType(5), nullptr},
		FModifierEnvelope_default_max_get, FModifierEnvelope_default_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	StructRNA *srna = RNA_FModifierEnvelope;
	srna->cont.properties = {&rna_FModifierEnvelope_control_points, &rna_FModifierEnvelope_default_max};
	srna->identifier = "FModifierEnvelope";
	srna->flag = 516;
	srna->name = "Envelope F-Modifier";
	srna->description = "Scale the values of the modified F-Curve";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_FModifier_name;
	srna->iteratorproperty = &rna_FModifier_rna_properties;
	srna->base = RNA_FModifier;
	srna->refine = rna_FModifierType_refine;
};

/* Control Points */
static CollectionPropertyRNA rna_FModifierEnvelopeControlPoints_rna_properties_;
PropertyRNA &rna_FModifierEnvelopeControlPoints_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelopeControlPoints_rna_properties_);

static PointerPropertyRNA rna_FModifierEnvelopeControlPoints_rna_type_;
PropertyRNA &rna_FModifierEnvelopeControlPoints_rna_type = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelopeControlPoints_rna_type_);

static FloatPropertyRNA rna_FModifierEnvelopeControlPoints_add_frame_;
PropertyRNA &rna_FModifierEnvelopeControlPoints_add_frame = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelopeControlPoints_add_frame_);

static PointerPropertyRNA rna_FModifierEnvelopeControlPoints_add_point_;
PropertyRNA &rna_FModifierEnvelopeControlPoints_add_point = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelopeControlPoints_add_point_);

FunctionRNA *rna_FModifierEnvelopeControlPoints_add_func;
static PointerPropertyRNA rna_FModifierEnvelopeControlPoints_remove_point_;
PropertyRNA &rna_FModifierEnvelopeControlPoints_remove_point = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelopeControlPoints_remove_point_);

FunctionRNA *rna_FModifierEnvelopeControlPoints_remove_func;
StructRNA *RNA_FModifierEnvelopeControlPoints;
void register_struct_FModifierEnvelopeControlPoints(BlenderRNA &brna)
{
	rna_FModifierEnvelopeControlPoints_rna_properties_ = {
		{&rna_FModifierEnvelopeControlPoints_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierEnvelopeControlPoints_rna_properties_begin, FModifierEnvelopeControlPoints_rna_properties_next, FModifierEnvelopeControlPoints_rna_properties_end, FModifierEnvelopeControlPoints_rna_properties_get, nullptr, nullptr, FModifierEnvelopeControlPoints_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FModifierEnvelopeControlPoints_rna_type_ = {
		{nullptr, 	&rna_FModifierEnvelopeControlPoints_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierEnvelopeControlPoints_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_FModifierEnvelopeControlPoints;
	srna->cont.properties = {&rna_FModifierEnvelopeControlPoints_rna_properties, &rna_FModifierEnvelopeControlPoints_rna_type};
	srna->identifier = "FModifierEnvelopeControlPoints";
	srna->flag = 516;
	srna->name = "Control Points";
	srna->description = "Control points defining the shape of the envelope";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FModifierEnvelopeControlPoints_rna_properties;
	{
	rna_FModifierEnvelopeControlPoints_add_frame_ = {
		{&rna_FModifierEnvelopeControlPoints_add_point, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Frame to add this control-point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_FModifierEnvelopeControlPoints_add_point_ = {
		{nullptr, 	&rna_FModifierEnvelopeControlPoints_add_frame,
		-1, "point", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created control-point",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FModifierEnvelopeControlPoint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FModifierEnvelopeControlPoints_add_frame, &rna_FModifierEnvelopeControlPoints_add_point};
		func->identifier = "add";
		func->flag = 2068;
		func->description = "Add a control point to a FModifierEnvelope";
		func->call = FModifierEnvelopeControlPoints_add_call;
		func->c_ret = &rna_FModifierEnvelopeControlPoints_add_point;
		rna_FModifierEnvelopeControlPoints_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_FModifierEnvelopeControlPoints_remove_point_ = {
		{nullptr, 	nullptr,
		-1, "point", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Control-point to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FModifierEnvelopeControlPoint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FModifierEnvelopeControlPoints_remove_point, &rna_FModifierEnvelopeControlPoints_remove_point};
		func->identifier = "remove";
		func->flag = 2068;
		func->description = "Remove a control-point from an FModifierEnvelope";
		func->call = FModifierEnvelopeControlPoints_remove_call;
		rna_FModifierEnvelopeControlPoints_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Envelope Control Point */
static CollectionPropertyRNA rna_FModifierEnvelopeControlPoint_rna_properties_;
PropertyRNA &rna_FModifierEnvelopeControlPoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelopeControlPoint_rna_properties_);

static PointerPropertyRNA rna_FModifierEnvelopeControlPoint_rna_type_;
PropertyRNA &rna_FModifierEnvelopeControlPoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelopeControlPoint_rna_type_);

static FloatPropertyRNA rna_FModifierEnvelopeControlPoint_min_;
PropertyRNA &rna_FModifierEnvelopeControlPoint_min = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelopeControlPoint_min_);

static FloatPropertyRNA rna_FModifierEnvelopeControlPoint_max_;
PropertyRNA &rna_FModifierEnvelopeControlPoint_max = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelopeControlPoint_max_);

static FloatPropertyRNA rna_FModifierEnvelopeControlPoint_frame_;
PropertyRNA &rna_FModifierEnvelopeControlPoint_frame = reinterpret_cast<PropertyRNA &>(rna_FModifierEnvelopeControlPoint_frame_);

StructRNA *RNA_FModifierEnvelopeControlPoint;
void register_struct_FModifierEnvelopeControlPoint(BlenderRNA &brna)
{
	rna_FModifierEnvelopeControlPoint_rna_properties_ = {
		{&rna_FModifierEnvelopeControlPoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierEnvelopeControlPoint_rna_properties_begin, FModifierEnvelopeControlPoint_rna_properties_next, FModifierEnvelopeControlPoint_rna_properties_end, FModifierEnvelopeControlPoint_rna_properties_get, nullptr, nullptr, FModifierEnvelopeControlPoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FModifierEnvelopeControlPoint_rna_type_ = {
		{&rna_FModifierEnvelopeControlPoint_min, 	&rna_FModifierEnvelopeControlPoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierEnvelopeControlPoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_FModifierEnvelopeControlPoint_min_ = {
		{&rna_FModifierEnvelopeControlPoint_max, 	&rna_FModifierEnvelopeControlPoint_rna_type,
		-1, "min", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Value",
		"Lower bound of envelope at this control-point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FCM_EnvelopeData, min), RawPropertyType(5), nullptr},
		FModifierEnvelopeControlPoint_min_get, FModifierEnvelopeControlPoint_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierEnvelopeControlPoint_max_ = {
		{&rna_FModifierEnvelopeControlPoint_frame, 	&rna_FModifierEnvelopeControlPoint_min,
		-1, "max", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Value",
		"Upper bound of envelope at this control-point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FCM_EnvelopeData, max), RawPropertyType(5), nullptr},
		FModifierEnvelopeControlPoint_max_get, FModifierEnvelopeControlPoint_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierEnvelopeControlPoint_frame_ = {
		{nullptr, 	&rna_FModifierEnvelopeControlPoint_max,
		-1, "frame", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Frame",
		"Frame this control-point occurs on",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FCM_EnvelopeData, time), RawPropertyType(5), nullptr},
		FModifierEnvelopeControlPoint_frame_get, FModifierEnvelopeControlPoint_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_FModifierEnvelopeControlPoint;
	srna->cont.properties = {&rna_FModifierEnvelopeControlPoint_rna_properties, &rna_FModifierEnvelopeControlPoint_frame};
	srna->identifier = "FModifierEnvelopeControlPoint";
	srna->flag = 516;
	srna->name = "Envelope Control Point";
	srna->description = "Control point for envelope F-Modifier";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FModifierEnvelopeControlPoint_rna_properties;
};

/* Cycles F-Modifier */
static EnumPropertyRNA rna_FModifierCycles_mode_before_;
PropertyRNA &rna_FModifierCycles_mode_before = reinterpret_cast<PropertyRNA &>(rna_FModifierCycles_mode_before_);

static IntPropertyRNA rna_FModifierCycles_cycles_before_;
PropertyRNA &rna_FModifierCycles_cycles_before = reinterpret_cast<PropertyRNA &>(rna_FModifierCycles_cycles_before_);

static EnumPropertyRNA rna_FModifierCycles_mode_after_;
PropertyRNA &rna_FModifierCycles_mode_after = reinterpret_cast<PropertyRNA &>(rna_FModifierCycles_mode_after_);

static IntPropertyRNA rna_FModifierCycles_cycles_after_;
PropertyRNA &rna_FModifierCycles_cycles_after = reinterpret_cast<PropertyRNA &>(rna_FModifierCycles_cycles_after_);

StructRNA *RNA_FModifierCycles;
void register_struct_FModifierCycles(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_FModifierCycles_mode_before_items[5] = {
		{0, "NONE", 0, "No Cycles", "Don\'t do anything"	},
		{1, "REPEAT", 0, "Repeat Motion", "Repeat keyframe range as-is"	},
		{2, "REPEAT_OFFSET", 0, "Repeat with Offset", "Repeat keyframe range, but with offset based on gradient between start and end values"	},
		{3, "MIRROR", 0, "Repeat Mirrored", "Alternate between forward and reverse playback of keyframe range"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FModifierCycles_mode_before_ = {
		{&rna_FModifierCycles_cycles_before, 	nullptr,
		-1, "mode_before", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Before Mode",
		"Cycling mode to use before first keyframe",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Cycles, before_mode), RawPropertyType(1), nullptr},
		FModifierCycles_mode_before_get, FModifierCycles_mode_before_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FModifierCycles_mode_before_items, 4, 0
	};

	rna_FModifierCycles_cycles_before_ = {
		{&rna_FModifierCycles_mode_after, 	&rna_FModifierCycles_mode_before,
		-1, "cycles_before", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Before Cycles",
		"Maximum number of cycles to allow before first keyframe (0 = infinite)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Cycles, before_cycles), RawPropertyType(1), nullptr},
		FModifierCycles_cycles_before_get, FModifierCycles_cycles_before_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FModifierCycles_mode_after_items[5] = {
		{0, "NONE", 0, "No Cycles", "Don\'t do anything"	},
		{1, "REPEAT", 0, "Repeat Motion", "Repeat keyframe range as-is"	},
		{2, "REPEAT_OFFSET", 0, "Repeat with Offset", "Repeat keyframe range, but with offset based on gradient between start and end values"	},
		{3, "MIRROR", 0, "Repeat Mirrored", "Alternate between forward and reverse playback of keyframe range"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FModifierCycles_mode_after_ = {
		{&rna_FModifierCycles_cycles_after, 	&rna_FModifierCycles_cycles_before,
		-1, "mode_after", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "After Mode",
		"Cycling mode to use after last keyframe",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Cycles, after_mode), RawPropertyType(1), nullptr},
		FModifierCycles_mode_after_get, FModifierCycles_mode_after_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FModifierCycles_mode_after_items, 4, 0
	};

	rna_FModifierCycles_cycles_after_ = {
		{nullptr, 	&rna_FModifierCycles_mode_after,
		-1, "cycles_after", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "After Cycles",
		"Maximum number of cycles to allow after last keyframe (0 = infinite)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Cycles, after_cycles), RawPropertyType(1), nullptr},
		FModifierCycles_cycles_after_get, FModifierCycles_cycles_after_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_FModifierCycles;
	srna->cont.properties = {&rna_FModifierCycles_mode_before, &rna_FModifierCycles_cycles_after};
	srna->identifier = "FModifierCycles";
	srna->flag = 516;
	srna->name = "Cycles F-Modifier";
	srna->description = "Repeat the values of the modified F-Curve";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_FModifier_name;
	srna->iteratorproperty = &rna_FModifier_rna_properties;
	srna->base = RNA_FModifier;
	srna->refine = rna_FModifierType_refine;
};

/* Limit F-Modifier */
static BoolPropertyRNA rna_FModifierLimits_use_min_x_;
PropertyRNA &rna_FModifierLimits_use_min_x = reinterpret_cast<PropertyRNA &>(rna_FModifierLimits_use_min_x_);

static BoolPropertyRNA rna_FModifierLimits_use_min_y_;
PropertyRNA &rna_FModifierLimits_use_min_y = reinterpret_cast<PropertyRNA &>(rna_FModifierLimits_use_min_y_);

static BoolPropertyRNA rna_FModifierLimits_use_max_x_;
PropertyRNA &rna_FModifierLimits_use_max_x = reinterpret_cast<PropertyRNA &>(rna_FModifierLimits_use_max_x_);

static BoolPropertyRNA rna_FModifierLimits_use_max_y_;
PropertyRNA &rna_FModifierLimits_use_max_y = reinterpret_cast<PropertyRNA &>(rna_FModifierLimits_use_max_y_);

static FloatPropertyRNA rna_FModifierLimits_min_x_;
PropertyRNA &rna_FModifierLimits_min_x = reinterpret_cast<PropertyRNA &>(rna_FModifierLimits_min_x_);

static FloatPropertyRNA rna_FModifierLimits_min_y_;
PropertyRNA &rna_FModifierLimits_min_y = reinterpret_cast<PropertyRNA &>(rna_FModifierLimits_min_y_);

static FloatPropertyRNA rna_FModifierLimits_max_x_;
PropertyRNA &rna_FModifierLimits_max_x = reinterpret_cast<PropertyRNA &>(rna_FModifierLimits_max_x_);

static FloatPropertyRNA rna_FModifierLimits_max_y_;
PropertyRNA &rna_FModifierLimits_max_y = reinterpret_cast<PropertyRNA &>(rna_FModifierLimits_max_y_);

StructRNA *RNA_FModifierLimits;
void register_struct_FModifierLimits(BlenderRNA &brna)
{
	rna_FModifierLimits_use_min_x_ = {
		{&rna_FModifierLimits_use_min_y, 	nullptr,
		-1, "use_min_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Minimum X",
		"Use the minimum X value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierLimits_use_min_x_get, FModifierLimits_use_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifierLimits_use_min_y_ = {
		{&rna_FModifierLimits_use_max_x, 	&rna_FModifierLimits_use_min_x,
		-1, "use_min_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Minimum Y",
		"Use the minimum Y value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierLimits_use_min_y_get, FModifierLimits_use_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifierLimits_use_max_x_ = {
		{&rna_FModifierLimits_use_max_y, 	&rna_FModifierLimits_use_min_y,
		-1, "use_max_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Maximum X",
		"Use the maximum X value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierLimits_use_max_x_get, FModifierLimits_use_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifierLimits_use_max_y_ = {
		{&rna_FModifierLimits_min_x, 	&rna_FModifierLimits_use_max_x,
		-1, "use_max_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Maximum Y",
		"Use the maximum Y value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierLimits_use_max_y_get, FModifierLimits_use_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifierLimits_min_x_ = {
		{&rna_FModifierLimits_min_y, 	&rna_FModifierLimits_use_max_y,
		-1, "min_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Minimum X",
		"Lowest X value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierLimits_min_x_get, FModifierLimits_min_x_set, nullptr, nullptr, rna_FModifierLimits_minx_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierLimits_min_y_ = {
		{&rna_FModifierLimits_max_x, 	&rna_FModifierLimits_min_x,
		-1, "min_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Minimum Y",
		"Lowest Y value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierLimits_min_y_get, FModifierLimits_min_y_set, nullptr, nullptr, rna_FModifierLimits_miny_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierLimits_max_x_ = {
		{&rna_FModifierLimits_max_y, 	&rna_FModifierLimits_min_y,
		-1, "max_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Maximum X",
		"Highest X value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierLimits_max_x_get, FModifierLimits_max_x_set, nullptr, nullptr, rna_FModifierLimits_maxx_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierLimits_max_y_ = {
		{nullptr, 	&rna_FModifierLimits_max_x,
		-1, "max_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Maximum Y",
		"Highest Y value to allow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierLimits_max_y_get, FModifierLimits_max_y_set, nullptr, nullptr, rna_FModifierLimits_maxy_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_FModifierLimits;
	srna->cont.properties = {&rna_FModifierLimits_use_min_x, &rna_FModifierLimits_max_y};
	srna->identifier = "FModifierLimits";
	srna->flag = 516;
	srna->name = "Limit F-Modifier";
	srna->description = "Limit the time/value ranges of the modified F-Curve";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_FModifier_name;
	srna->iteratorproperty = &rna_FModifier_rna_properties;
	srna->base = RNA_FModifier;
	srna->refine = rna_FModifierType_refine;
};

/* Noise F-Modifier */
static EnumPropertyRNA rna_FModifierNoise_blend_type_;
PropertyRNA &rna_FModifierNoise_blend_type = reinterpret_cast<PropertyRNA &>(rna_FModifierNoise_blend_type_);

static FloatPropertyRNA rna_FModifierNoise_scale_;
PropertyRNA &rna_FModifierNoise_scale = reinterpret_cast<PropertyRNA &>(rna_FModifierNoise_scale_);

static FloatPropertyRNA rna_FModifierNoise_strength_;
PropertyRNA &rna_FModifierNoise_strength = reinterpret_cast<PropertyRNA &>(rna_FModifierNoise_strength_);

static FloatPropertyRNA rna_FModifierNoise_phase_;
PropertyRNA &rna_FModifierNoise_phase = reinterpret_cast<PropertyRNA &>(rna_FModifierNoise_phase_);

static FloatPropertyRNA rna_FModifierNoise_offset_;
PropertyRNA &rna_FModifierNoise_offset = reinterpret_cast<PropertyRNA &>(rna_FModifierNoise_offset_);

static FloatPropertyRNA rna_FModifierNoise_lacunarity_;
PropertyRNA &rna_FModifierNoise_lacunarity = reinterpret_cast<PropertyRNA &>(rna_FModifierNoise_lacunarity_);

static FloatPropertyRNA rna_FModifierNoise_roughness_;
PropertyRNA &rna_FModifierNoise_roughness = reinterpret_cast<PropertyRNA &>(rna_FModifierNoise_roughness_);

static IntPropertyRNA rna_FModifierNoise_depth_;
PropertyRNA &rna_FModifierNoise_depth = reinterpret_cast<PropertyRNA &>(rna_FModifierNoise_depth_);

static BoolPropertyRNA rna_FModifierNoise_use_legacy_noise_;
PropertyRNA &rna_FModifierNoise_use_legacy_noise = reinterpret_cast<PropertyRNA &>(rna_FModifierNoise_use_legacy_noise_);

StructRNA *RNA_FModifierNoise;
void register_struct_FModifierNoise(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_FModifierNoise_blend_type_items[5] = {
		{0, "REPLACE", 0, "Replace", ""	},
		{1, "ADD", 0, "Add", ""	},
		{2, "SUBTRACT", 0, "Subtract", ""	},
		{3, "MULTIPLY", 0, "Multiply", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FModifierNoise_blend_type_ = {
		{&rna_FModifierNoise_scale, 	nullptr,
		-1, "blend_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Blend Type",
		"Method of modifying the existing F-Curve",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Noise, modification), RawPropertyType(1), nullptr},
		FModifierNoise_blend_type_get, FModifierNoise_blend_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FModifierNoise_blend_type_items, 4, 0
	};

	rna_FModifierNoise_scale_ = {
		{&rna_FModifierNoise_strength, 	&rna_FModifierNoise_blend_type,
		-1, "scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Scaling (in time) of the noise",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Noise, size), RawPropertyType(5), nullptr},
		FModifierNoise_scale_get, FModifierNoise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FModifierNoise_strength_ = {
		{&rna_FModifierNoise_phase, 	&rna_FModifierNoise_scale,
		-1, "strength", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"Amplitude of the noise - the amount that it modifies the underlying curve",
		0, "Amount",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Noise, strength), RawPropertyType(5), nullptr},
		FModifierNoise_strength_get, FModifierNoise_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FModifierNoise_phase_ = {
		{&rna_FModifierNoise_offset, 	&rna_FModifierNoise_strength,
		-1, "phase", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Phase",
		"A random seed for the noise effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Noise, phase), RawPropertyType(5), nullptr},
		FModifierNoise_phase_get, FModifierNoise_phase_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FModifierNoise_offset_ = {
		{&rna_FModifierNoise_lacunarity, 	&rna_FModifierNoise_phase,
		-1, "offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Time offset for the noise effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Noise, offset), RawPropertyType(5), nullptr},
		FModifierNoise_offset_get, FModifierNoise_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierNoise_lacunarity_ = {
		{&rna_FModifierNoise_roughness, 	&rna_FModifierNoise_offset,
		-1, "lacunarity", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Lacunarity",
		"Gap between successive frequencies. Depth needs to be greater than 0 for this to have an effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Noise, lacunarity), RawPropertyType(5), nullptr},
		FModifierNoise_lacunarity_get, FModifierNoise_lacunarity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 2.0f, nullptr
	};

	rna_FModifierNoise_roughness_ = {
		{&rna_FModifierNoise_depth, 	&rna_FModifierNoise_lacunarity,
		-1, "roughness", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Roughness",
		"Amount of high frequency detail. Depth needs to be greater than 0 for this to have an effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Noise, roughness), RawPropertyType(5), nullptr},
		FModifierNoise_roughness_get, FModifierNoise_roughness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_FModifierNoise_depth_ = {
		{&rna_FModifierNoise_use_legacy_noise, 	&rna_FModifierNoise_roughness,
		-1, "depth", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Depth",
		"Amount of fine level detail present in the noise",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Noise, depth), RawPropertyType(1), nullptr},
		FModifierNoise_depth_get, FModifierNoise_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FModifierNoise_use_legacy_noise_ = {
		{nullptr, 	&rna_FModifierNoise_depth,
		-1, "use_legacy_noise", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Legacy Noise",
		"Use the legacy way of generating noise. Has the issue that it can produce values outside of -1/1",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierNoise_use_legacy_noise_get, FModifierNoise_use_legacy_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_FModifierNoise;
	srna->cont.properties = {&rna_FModifierNoise_blend_type, &rna_FModifierNoise_use_legacy_noise};
	srna->identifier = "FModifierNoise";
	srna->flag = 516;
	srna->name = "Noise F-Modifier";
	srna->description = "Give randomness to the modified F-Curve";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_FModifier_name;
	srna->iteratorproperty = &rna_FModifier_rna_properties;
	srna->base = RNA_FModifier;
	srna->refine = rna_FModifierType_refine;
};

/* Stepped Interpolation F-Modifier */
static FloatPropertyRNA rna_FModifierStepped_frame_step_;
PropertyRNA &rna_FModifierStepped_frame_step = reinterpret_cast<PropertyRNA &>(rna_FModifierStepped_frame_step_);

static FloatPropertyRNA rna_FModifierStepped_frame_offset_;
PropertyRNA &rna_FModifierStepped_frame_offset = reinterpret_cast<PropertyRNA &>(rna_FModifierStepped_frame_offset_);

static BoolPropertyRNA rna_FModifierStepped_use_frame_start_;
PropertyRNA &rna_FModifierStepped_use_frame_start = reinterpret_cast<PropertyRNA &>(rna_FModifierStepped_use_frame_start_);

static BoolPropertyRNA rna_FModifierStepped_use_frame_end_;
PropertyRNA &rna_FModifierStepped_use_frame_end = reinterpret_cast<PropertyRNA &>(rna_FModifierStepped_use_frame_end_);

static FloatPropertyRNA rna_FModifierStepped_frame_start_;
PropertyRNA &rna_FModifierStepped_frame_start = reinterpret_cast<PropertyRNA &>(rna_FModifierStepped_frame_start_);

static FloatPropertyRNA rna_FModifierStepped_frame_end_;
PropertyRNA &rna_FModifierStepped_frame_end = reinterpret_cast<PropertyRNA &>(rna_FModifierStepped_frame_end_);

StructRNA *RNA_FModifierStepped;
void register_struct_FModifierStepped(BlenderRNA &brna)
{
	rna_FModifierStepped_frame_step_ = {
		{&rna_FModifierStepped_frame_offset, 	nullptr,
		-1, "frame_step", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Step Size",
		"Number of frames to hold each value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Stepped, step_size), RawPropertyType(5), nullptr},
		FModifierStepped_frame_step_get, FModifierStepped_frame_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 2.0f, nullptr
	};

	rna_FModifierStepped_frame_offset_ = {
		{&rna_FModifierStepped_use_frame_start, 	&rna_FModifierStepped_frame_step,
		-1, "frame_offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Reference number of frames before frames get held (use to get hold for \'1-3\' vs \'5-7\' holding patterns)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Stepped, offset), RawPropertyType(5), nullptr},
		FModifierStepped_frame_offset_get, FModifierStepped_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierStepped_use_frame_start_ = {
		{&rna_FModifierStepped_use_frame_end, 	&rna_FModifierStepped_frame_offset,
		-1, "use_frame_start", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Start Frame",
		"Restrict modifier to only act after its \'start\' frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierStepped_use_frame_start_get, FModifierStepped_use_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifierStepped_use_frame_end_ = {
		{&rna_FModifierStepped_frame_start, 	&rna_FModifierStepped_use_frame_start,
		-1, "use_frame_end", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use End Frame",
		"Restrict modifier to only act before its \'end\' frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierStepped_use_frame_end_get, FModifierStepped_use_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FModifierStepped_frame_start_ = {
		{&rna_FModifierStepped_frame_end, 	&rna_FModifierStepped_use_frame_end,
		-1, "frame_start", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"Frame that modifier\'s influence starts (if applicable)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierStepped_frame_start_get, FModifierStepped_frame_start_set, nullptr, nullptr, rna_FModifierStepped_start_frame_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierStepped_frame_end_ = {
		{nullptr, 	&rna_FModifierStepped_frame_start,
		-1, "frame_end", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"Frame that modifier\'s influence ends (if applicable)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FModifierStepped_frame_end_get, FModifierStepped_frame_end_set, nullptr, nullptr, rna_FModifierStepped_end_frame_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_FModifierStepped;
	srna->cont.properties = {&rna_FModifierStepped_frame_step, &rna_FModifierStepped_frame_end};
	srna->identifier = "FModifierStepped";
	srna->flag = 516;
	srna->name = "Stepped Interpolation F-Modifier";
	srna->description = "Hold each interpolated value from the F-Curve for several frames without changing the timing";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_FModifier_name;
	srna->iteratorproperty = &rna_FModifier_rna_properties;
	srna->base = RNA_FModifier;
	srna->refine = rna_FModifierType_refine;
};

/* Smooth F-Modifier */
static FloatPropertyRNA rna_FModifierSmooth_sigma_;
PropertyRNA &rna_FModifierSmooth_sigma = reinterpret_cast<PropertyRNA &>(rna_FModifierSmooth_sigma_);

static IntPropertyRNA rna_FModifierSmooth_filter_width_;
PropertyRNA &rna_FModifierSmooth_filter_width = reinterpret_cast<PropertyRNA &>(rna_FModifierSmooth_filter_width_);

StructRNA *RNA_FModifierSmooth;
void register_struct_FModifierSmooth(BlenderRNA &brna)
{
	rna_FModifierSmooth_sigma_ = {
		{&rna_FModifierSmooth_filter_width, 	nullptr,
		-1, "sigma", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Sigma",
		"The shape of the Gaussian distribution in frames. Lower values will increase sharpness across the Filter Width.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Smooth, sigma), RawPropertyType(5), nullptr},
		FModifierSmooth_sigma_get, FModifierSmooth_sigma_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 2.0f, 0.1000000015f, 100.0f, 0.0500000007f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FModifierSmooth_filter_width_ = {
		{nullptr, 	&rna_FModifierSmooth_sigma,
		-1, "filter_width", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Filter Width",
		"The number of frames to average around each keyframe. Higher values allow more smoothing, but will decrease performance.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_FModifier_update, 256245761, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FMod_Smooth, filter_width), RawPropertyType(0), nullptr},
		FModifierSmooth_filter_width_get, FModifierSmooth_filter_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 32, 1, 32, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_FModifierSmooth;
	srna->cont.properties = {&rna_FModifierSmooth_sigma, &rna_FModifierSmooth_filter_width};
	srna->identifier = "FModifierSmooth";
	srna->flag = 516;
	srna->name = "Smooth F-Modifier";
	srna->description = "Smooth curve using Gaussian smoothing";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_FModifier_name;
	srna->iteratorproperty = &rna_FModifier_rna_properties;
	srna->base = RNA_FModifier;
	srna->refine = rna_FModifierType_refine;
};


}  // namespace blender
