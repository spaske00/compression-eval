
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

#include "rna_speaker.cc"

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

extern PropertyRNA &rna_Speaker_muted;
extern PropertyRNA &rna_Speaker_sound;
extern PropertyRNA &rna_Speaker_volume_max;
extern PropertyRNA &rna_Speaker_volume_min;
extern PropertyRNA &rna_Speaker_distance_max;
extern PropertyRNA &rna_Speaker_distance_reference;
extern PropertyRNA &rna_Speaker_attenuation;
extern PropertyRNA &rna_Speaker_cone_angle_outer;
extern PropertyRNA &rna_Speaker_cone_angle_inner;
extern PropertyRNA &rna_Speaker_cone_volume_outer;
extern PropertyRNA &rna_Speaker_volume;
extern PropertyRNA &rna_Speaker_pitch;
extern PropertyRNA &rna_Speaker_animation_data;

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


bool Speaker_muted_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void Speaker_muted_set(PointerRNA *ptr, bool value)
{
    Speaker *data = (Speaker *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

PointerRNA Speaker_sound_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Sound, data->sound);
}

void Speaker_sound_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Speaker *data = (Speaker *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->sound) {
        id_us_min((ID *)data->sound);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->sound = value.data;
}

float Speaker_volume_max_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->volume_max);
}

void Speaker_volume_max_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->volume_max = (std::remove_reference_t<decltype(data->volume_max)>)std::clamp(value, 0.0f, 1.0f);
}

float Speaker_volume_min_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->volume_min);
}

void Speaker_volume_min_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->volume_min = (std::remove_reference_t<decltype(data->volume_min)>)std::clamp(value, 0.0f, 1.0f);
}

float Speaker_distance_max_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->distance_max);
}

void Speaker_distance_max_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->distance_max = (std::remove_reference_t<decltype(data->distance_max)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Speaker_distance_reference_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->distance_reference);
}

void Speaker_distance_reference_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->distance_reference = (std::remove_reference_t<decltype(data->distance_reference)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Speaker_attenuation_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->attenuation);
}

void Speaker_attenuation_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->attenuation = (std::remove_reference_t<decltype(data->attenuation)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Speaker_cone_angle_outer_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->cone_angle_outer);
}

void Speaker_cone_angle_outer_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->cone_angle_outer = (std::remove_reference_t<decltype(data->cone_angle_outer)>)std::clamp(value, 0.0f, 360.0f);
}

float Speaker_cone_angle_inner_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->cone_angle_inner);
}

void Speaker_cone_angle_inner_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->cone_angle_inner = (std::remove_reference_t<decltype(data->cone_angle_inner)>)std::clamp(value, 0.0f, 360.0f);
}

float Speaker_cone_volume_outer_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->cone_volume_outer);
}

void Speaker_cone_volume_outer_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->cone_volume_outer = (std::remove_reference_t<decltype(data->cone_volume_outer)>)std::clamp(value, 0.0f, 1.0f);
}

float Speaker_volume_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->volume);
}

void Speaker_volume_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->volume = (std::remove_reference_t<decltype(data->volume)>)std::clamp(value, 0.0f, 1.0f);
}

float Speaker_pitch_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->pitch);
}

void Speaker_pitch_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->pitch = (std::remove_reference_t<decltype(data->pitch)>)std::clamp(value, 0.1000000015f, 10.0f);
}

PointerRNA Speaker_animation_data_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}


/* Speaker */
static BoolPropertyRNA rna_Speaker_muted_;
PropertyRNA &rna_Speaker_muted = reinterpret_cast<PropertyRNA &>(rna_Speaker_muted_);

static PointerPropertyRNA rna_Speaker_sound_;
PropertyRNA &rna_Speaker_sound = reinterpret_cast<PropertyRNA &>(rna_Speaker_sound_);

static FloatPropertyRNA rna_Speaker_volume_max_;
PropertyRNA &rna_Speaker_volume_max = reinterpret_cast<PropertyRNA &>(rna_Speaker_volume_max_);

static FloatPropertyRNA rna_Speaker_volume_min_;
PropertyRNA &rna_Speaker_volume_min = reinterpret_cast<PropertyRNA &>(rna_Speaker_volume_min_);

static FloatPropertyRNA rna_Speaker_distance_max_;
PropertyRNA &rna_Speaker_distance_max = reinterpret_cast<PropertyRNA &>(rna_Speaker_distance_max_);

static FloatPropertyRNA rna_Speaker_distance_reference_;
PropertyRNA &rna_Speaker_distance_reference = reinterpret_cast<PropertyRNA &>(rna_Speaker_distance_reference_);

static FloatPropertyRNA rna_Speaker_attenuation_;
PropertyRNA &rna_Speaker_attenuation = reinterpret_cast<PropertyRNA &>(rna_Speaker_attenuation_);

static FloatPropertyRNA rna_Speaker_cone_angle_outer_;
PropertyRNA &rna_Speaker_cone_angle_outer = reinterpret_cast<PropertyRNA &>(rna_Speaker_cone_angle_outer_);

static FloatPropertyRNA rna_Speaker_cone_angle_inner_;
PropertyRNA &rna_Speaker_cone_angle_inner = reinterpret_cast<PropertyRNA &>(rna_Speaker_cone_angle_inner_);

static FloatPropertyRNA rna_Speaker_cone_volume_outer_;
PropertyRNA &rna_Speaker_cone_volume_outer = reinterpret_cast<PropertyRNA &>(rna_Speaker_cone_volume_outer_);

static FloatPropertyRNA rna_Speaker_volume_;
PropertyRNA &rna_Speaker_volume = reinterpret_cast<PropertyRNA &>(rna_Speaker_volume_);

static FloatPropertyRNA rna_Speaker_pitch_;
PropertyRNA &rna_Speaker_pitch = reinterpret_cast<PropertyRNA &>(rna_Speaker_pitch_);

static PointerPropertyRNA rna_Speaker_animation_data_;
PropertyRNA &rna_Speaker_animation_data = reinterpret_cast<PropertyRNA &>(rna_Speaker_animation_data_);

StructRNA *RNA_Speaker;
void register_struct_Speaker(BlenderRNA &brna)
{
	rna_Speaker_muted_ = {
		{&rna_Speaker_sound, 	nullptr,
		-1, "muted", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mute",
		"Mute the speaker",
		0, "Sound",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Speaker_muted_get, Speaker_muted_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Speaker_sound_ = {
		{&rna_Speaker_volume_max, 	&rna_Speaker_muted,
		-1, "sound", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sound",
		"Sound data-block used by this speaker",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Speaker_sound_get, Speaker_sound_set, nullptr, nullptr,RNA_Sound
	};

	rna_Speaker_volume_max_ = {
		{&rna_Speaker_volume_min, 	&rna_Speaker_sound,
		-1, "volume_max", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Volume",
		"Maximum volume, no matter how near the object is",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Speaker, volume_max), RawPropertyType(5), nullptr},
		Speaker_volume_max_get, Speaker_volume_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Speaker_volume_min_ = {
		{&rna_Speaker_distance_max, 	&rna_Speaker_volume_max,
		-1, "volume_min", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Volume",
		"Minimum volume, no matter how far away the object is",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Speaker, volume_min), RawPropertyType(5), nullptr},
		Speaker_volume_min_get, Speaker_volume_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Speaker_distance_max_ = {
		{&rna_Speaker_distance_reference, 	&rna_Speaker_volume_min,
		-1, "distance_max", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Distance",
		"Maximum distance for volume calculation, no matter how far away the object is",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Speaker, distance_max), RawPropertyType(5), nullptr},
		Speaker_distance_max_get, Speaker_distance_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, FLT_MAX, nullptr
	};

	rna_Speaker_distance_reference_ = {
		{&rna_Speaker_attenuation, 	&rna_Speaker_distance_max,
		-1, "distance_reference", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Reference Distance",
		"Reference distance at which volume is 100%",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Speaker, distance_reference), RawPropertyType(5), nullptr},
		Speaker_distance_reference_get, Speaker_distance_reference_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Speaker_attenuation_ = {
		{&rna_Speaker_cone_angle_outer, 	&rna_Speaker_distance_reference,
		-1, "attenuation", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Attenuation",
		"How strong the distance affects volume, depending on distance model",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Speaker, attenuation), RawPropertyType(5), nullptr},
		Speaker_attenuation_get, Speaker_attenuation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Speaker_cone_angle_outer_ = {
		{&rna_Speaker_cone_angle_inner, 	&rna_Speaker_attenuation,
		-1, "cone_angle_outer", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Outer Cone Angle",
		"Angle of the outer cone, in degrees, outside this cone the volume is the outer cone volume, between inner and outer cone the volume is interpolated",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Speaker, cone_angle_outer), RawPropertyType(5), nullptr},
		Speaker_cone_angle_outer_get, Speaker_cone_angle_outer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 360.0f, 0.0f, 360.0f, 10.0f, 3, nullptr, nullptr, 360.0f, nullptr
	};

	rna_Speaker_cone_angle_inner_ = {
		{&rna_Speaker_cone_volume_outer, 	&rna_Speaker_cone_angle_outer,
		-1, "cone_angle_inner", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Inner Cone Angle",
		"Angle of the inner cone, in degrees, inside the cone the volume is 100%",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Speaker, cone_angle_inner), RawPropertyType(5), nullptr},
		Speaker_cone_angle_inner_get, Speaker_cone_angle_inner_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 360.0f, 0.0f, 360.0f, 10.0f, 3, nullptr, nullptr, 360.0f, nullptr
	};

	rna_Speaker_cone_volume_outer_ = {
		{&rna_Speaker_volume, 	&rna_Speaker_cone_angle_inner,
		-1, "cone_volume_outer", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Outer Cone Volume",
		"Volume outside the outer cone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Speaker, cone_volume_outer), RawPropertyType(5), nullptr},
		Speaker_cone_volume_outer_get, Speaker_cone_volume_outer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Speaker_volume_ = {
		{&rna_Speaker_pitch, 	&rna_Speaker_cone_volume_outer,
		-1, "volume", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Volume",
		"How loud the sound is",
		0, "Sound",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Speaker, volume), RawPropertyType(5), nullptr},
		Speaker_volume_get, Speaker_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Speaker_pitch_ = {
		{&rna_Speaker_animation_data, 	&rna_Speaker_volume,
		-1, "pitch", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pitch",
		"Playback pitch of the sound",
		0, "Sound",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Speaker, pitch), RawPropertyType(5), nullptr},
		Speaker_pitch_get, Speaker_pitch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 10.0f, 0.1000000015f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Speaker_animation_data_ = {
		{nullptr, 	&rna_Speaker_pitch,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Speaker_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_Speaker;
	srna->cont.properties = {&rna_Speaker_muted, &rna_Speaker_animation_data};
	srna->identifier = "Speaker";
	srna->flag = 519;
	srna->name = "Speaker";
	srna->description = "Speaker data-block for 3D audio speaker objects";
	srna->translation_context = "*";
	srna->icon = 122;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};


}  // namespace blender
