
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

#include "rna_world.cc"

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

extern PropertyRNA &rna_World_animation_data;
extern PropertyRNA &rna_World_use_eevee_finite_volume;
extern PropertyRNA &rna_World_color;
extern PropertyRNA &rna_World_light_settings;
extern PropertyRNA &rna_World_mist_settings;
extern PropertyRNA &rna_World_node_tree;
extern PropertyRNA &rna_World_use_nodes;
extern PropertyRNA &rna_World_lightgroup;
extern PropertyRNA &rna_World_probe_resolution;
extern PropertyRNA &rna_World_sun_threshold;
extern PropertyRNA &rna_World_sun_angle;
extern PropertyRNA &rna_World_use_sun_shadow;
extern PropertyRNA &rna_World_sun_shadow_maximum_resolution;
extern PropertyRNA &rna_World_sun_shadow_filter_radius;
extern PropertyRNA &rna_World_use_sun_shadow_jitter;
extern PropertyRNA &rna_World_sun_shadow_jitter_overblur;

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



extern PropertyRNA &rna_WorldLighting_rna_properties;
extern PropertyRNA &rna_WorldLighting_rna_type;
extern PropertyRNA &rna_WorldLighting_ao_factor;
extern PropertyRNA &rna_WorldLighting_distance;


extern PropertyRNA &rna_WorldMistSettings_rna_properties;
extern PropertyRNA &rna_WorldMistSettings_rna_type;
extern PropertyRNA &rna_WorldMistSettings_use_mist;
extern PropertyRNA &rna_WorldMistSettings_intensity;
extern PropertyRNA &rna_WorldMistSettings_start;
extern PropertyRNA &rna_WorldMistSettings_depth;
extern PropertyRNA &rna_WorldMistSettings_height;
extern PropertyRNA &rna_WorldMistSettings_falloff;

PointerRNA World_animation_data_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

bool World_use_eevee_finite_volume_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void World_use_eevee_finite_volume_set(PointerRNA *ptr, bool value)
{
    World *data = (World *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

void World_color_get(PointerRNA *ptr, float values[3])
{
    World *data = (World *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->horr)[i]);
    }
}

void World_color_set(PointerRNA *ptr, const float values[3])
{
    World *data = (World *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (&data->horr)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

PointerRNA World_light_settings_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_World_lighting_get;
    return fn(ptr);
}

PointerRNA World_mist_settings_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_World_mist_get;
    return fn(ptr);
}

PointerRNA World_node_tree_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_NodeTree, data->nodetree);
}

bool World_use_nodes_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_World_use_nodes_get;
    return fn(ptr);
}

void World_use_nodes_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_World_use_nodes_set;
    fn(ptr, value);
}

void World_lightgroup_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_World_lightgroup_get;
    fn(ptr, value);
}

int World_lightgroup_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_World_lightgroup_length;
    return fn(ptr);
}

void World_lightgroup_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_World_lightgroup_set;
    fn(ptr, value);
}

int World_probe_resolution_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (int)(data->probe_resolution);
}

void World_probe_resolution_set(PointerRNA *ptr, int value)
{
    World *data = (World *)(ptr->data);
    data->probe_resolution = (std::remove_reference_t<decltype(data->probe_resolution)>)value;
}

float World_sun_threshold_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->sun_threshold);
}

void World_sun_threshold_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->sun_threshold = (std::remove_reference_t<decltype(data->sun_threshold)>)std::clamp(value, 0.0f, FLT_MAX);
}

float World_sun_angle_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->sun_angle);
}

void World_sun_angle_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->sun_angle = (std::remove_reference_t<decltype(data->sun_angle)>)std::clamp(value, 0.0f, 3.1415927410f);
}

bool World_use_sun_shadow_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void World_use_sun_shadow_set(PointerRNA *ptr, bool value)
{
    World *data = (World *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

float World_sun_shadow_maximum_resolution_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->sun_shadow_maximum_resolution);
}

void World_sun_shadow_maximum_resolution_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->sun_shadow_maximum_resolution = (std::remove_reference_t<decltype(data->sun_shadow_maximum_resolution)>)std::clamp(value, 0.0f, FLT_MAX);
}

float World_sun_shadow_filter_radius_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->sun_shadow_filter_radius);
}

void World_sun_shadow_filter_radius_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->sun_shadow_filter_radius = (std::remove_reference_t<decltype(data->sun_shadow_filter_radius)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool World_use_sun_shadow_jitter_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void World_use_sun_shadow_jitter_set(PointerRNA *ptr, bool value)
{
    World *data = (World *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

float World_sun_shadow_jitter_overblur_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->sun_shadow_jitter_overblur);
}

void World_sun_shadow_jitter_overblur_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->sun_shadow_jitter_overblur = (std::remove_reference_t<decltype(data->sun_shadow_jitter_overblur)>)std::clamp(value, 0.0f, 100.0f);
}

static PointerRNA WorldLighting_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void WorldLighting_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_WorldLighting_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorldLighting_rna_properties_get(iter);
    }
}

void WorldLighting_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = WorldLighting_rna_properties_get(iter);
    }
}

void WorldLighting_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool WorldLighting_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA WorldLighting_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float WorldLighting_ao_factor_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->aoenergy);
}

void WorldLighting_ao_factor_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->aoenergy = (std::remove_reference_t<decltype(data->aoenergy)>)std::clamp(value, 0.0f, 2147483648.0f);
}

float WorldLighting_distance_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->aodist);
}

void WorldLighting_distance_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->aodist = (std::remove_reference_t<decltype(data->aodist)>)std::clamp(value, 0.0f, FLT_MAX);
}

static PointerRNA WorldMistSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void WorldMistSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_WorldMistSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorldMistSettings_rna_properties_get(iter);
    }
}

void WorldMistSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = WorldMistSettings_rna_properties_get(iter);
    }
}

void WorldMistSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool WorldMistSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA WorldMistSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool WorldMistSettings_use_mist_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return ((uint64_t(data->mode) & 1) != 0);
}

void WorldMistSettings_use_mist_set(PointerRNA *ptr, bool value)
{
    World *data = (World *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 1); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(1)); }
}

float WorldMistSettings_intensity_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->misi);
}

void WorldMistSettings_intensity_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->misi = (std::remove_reference_t<decltype(data->misi)>)std::clamp(value, 0.0f, 1.0f);
}

float WorldMistSettings_start_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->miststa);
}

void WorldMistSettings_start_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->miststa = (std::remove_reference_t<decltype(data->miststa)>)std::clamp(value, 0.0f, FLT_MAX);
}

float WorldMistSettings_depth_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->mistdist);
}

void WorldMistSettings_depth_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->mistdist = (std::remove_reference_t<decltype(data->mistdist)>)std::clamp(value, 0.0f, FLT_MAX);
}

float WorldMistSettings_height_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->misthi);
}

void WorldMistSettings_height_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->misthi = (std::remove_reference_t<decltype(data->misthi)>)std::clamp(value, 0.0f, 100.0f);
}

int WorldMistSettings_falloff_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (int)(data->mistype);
}

void WorldMistSettings_falloff_set(PointerRNA *ptr, int value)
{
    World *data = (World *)(ptr->data);
    data->mistype = (std::remove_reference_t<decltype(data->mistype)>)value;
}




/* World */
static PointerPropertyRNA rna_World_animation_data_;
PropertyRNA &rna_World_animation_data = reinterpret_cast<PropertyRNA &>(rna_World_animation_data_);

static BoolPropertyRNA rna_World_use_eevee_finite_volume_;
PropertyRNA &rna_World_use_eevee_finite_volume = reinterpret_cast<PropertyRNA &>(rna_World_use_eevee_finite_volume_);

static FloatPropertyRNA rna_World_color_;
PropertyRNA &rna_World_color = reinterpret_cast<PropertyRNA &>(rna_World_color_);

static PointerPropertyRNA rna_World_light_settings_;
PropertyRNA &rna_World_light_settings = reinterpret_cast<PropertyRNA &>(rna_World_light_settings_);

static PointerPropertyRNA rna_World_mist_settings_;
PropertyRNA &rna_World_mist_settings = reinterpret_cast<PropertyRNA &>(rna_World_mist_settings_);

static PointerPropertyRNA rna_World_node_tree_;
PropertyRNA &rna_World_node_tree = reinterpret_cast<PropertyRNA &>(rna_World_node_tree_);

static BoolPropertyRNA rna_World_use_nodes_;
PropertyRNA &rna_World_use_nodes = reinterpret_cast<PropertyRNA &>(rna_World_use_nodes_);

static StringPropertyRNA rna_World_lightgroup_;
PropertyRNA &rna_World_lightgroup = reinterpret_cast<PropertyRNA &>(rna_World_lightgroup_);

static EnumPropertyRNA rna_World_probe_resolution_;
PropertyRNA &rna_World_probe_resolution = reinterpret_cast<PropertyRNA &>(rna_World_probe_resolution_);

static FloatPropertyRNA rna_World_sun_threshold_;
PropertyRNA &rna_World_sun_threshold = reinterpret_cast<PropertyRNA &>(rna_World_sun_threshold_);

static FloatPropertyRNA rna_World_sun_angle_;
PropertyRNA &rna_World_sun_angle = reinterpret_cast<PropertyRNA &>(rna_World_sun_angle_);

static BoolPropertyRNA rna_World_use_sun_shadow_;
PropertyRNA &rna_World_use_sun_shadow = reinterpret_cast<PropertyRNA &>(rna_World_use_sun_shadow_);

static FloatPropertyRNA rna_World_sun_shadow_maximum_resolution_;
PropertyRNA &rna_World_sun_shadow_maximum_resolution = reinterpret_cast<PropertyRNA &>(rna_World_sun_shadow_maximum_resolution_);

static FloatPropertyRNA rna_World_sun_shadow_filter_radius_;
PropertyRNA &rna_World_sun_shadow_filter_radius = reinterpret_cast<PropertyRNA &>(rna_World_sun_shadow_filter_radius_);

static BoolPropertyRNA rna_World_use_sun_shadow_jitter_;
PropertyRNA &rna_World_use_sun_shadow_jitter = reinterpret_cast<PropertyRNA &>(rna_World_use_sun_shadow_jitter_);

static FloatPropertyRNA rna_World_sun_shadow_jitter_overblur_;
PropertyRNA &rna_World_sun_shadow_jitter_overblur = reinterpret_cast<PropertyRNA &>(rna_World_sun_shadow_jitter_overblur_);

StructRNA *RNA_World;
void register_struct_World(BlenderRNA &brna)
{
	rna_World_animation_data_ = {
		{&rna_World_use_eevee_finite_volume, 	nullptr,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		World_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	rna_World_use_eevee_finite_volume_ = {
		{&rna_World_color, 	&rna_World_animation_data,
		-1, "use_eevee_finite_volume", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Finite Volume",
		"The world\'s volume used to be rendered by EEVEE Legacy. Conversion is needed for it to render properly.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		World_use_eevee_finite_volume_get, World_use_eevee_finite_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_World_color_default[3] = {
		0.0500000007f,
		0.0500000007f,
		0.0500000007f
	};
	rna_World_color_ = {
		{&rna_World_light_settings, 	&rna_World_use_eevee_finite_volume,
		-1, "color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Color of the background",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, horr), RawPropertyType(5), nullptr},
		nullptr, nullptr, World_color_get, World_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0500000007f, rna_World_color_default
	};

	rna_World_light_settings_ = {
		{&rna_World_mist_settings, 	&rna_World_color,
		-1, "light_settings", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lighting",
		"World lighting settings",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		World_light_settings_get, nullptr, nullptr, nullptr,RNA_WorldLighting
	};

	rna_World_mist_settings_ = {
		{&rna_World_node_tree, 	&rna_World_light_settings,
		-1, "mist_settings", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mist",
		"World mist settings",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		World_mist_settings_get, nullptr, nullptr, nullptr,RNA_WorldMistSettings
	};

	rna_World_node_tree_ = {
		{&rna_World_use_nodes, 	&rna_World_mist_settings,
		-1, "node_tree", 8388672, 1, 0, 32, 0, PropertyPathTemplateType(0), "Node Tree",
		"Node tree for node based worlds",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		World_node_tree_get, nullptr, nullptr, nullptr,RNA_NodeTree
	};

	static const DeprecatedRNA rna_World_use_nodes_deprecated = {
	"Unused but kept for compatibility reasons. Setting the property has no effect, and getting it always returns True.",
		500, 600,
};

	rna_World_use_nodes_ = {
		{&rna_World_lightgroup, 	&rna_World_node_tree,
		-1, "use_nodes", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Nodes",
		"Use shader nodes to render the world",
		0, "*",
		&rna_World_use_nodes_deprecated,		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		World_use_nodes_get, World_use_nodes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_World_lightgroup_ = {
		{&rna_World_probe_resolution, 	&rna_World_use_nodes,
		-1, "lightgroup", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lightgroup",
		"Lightgroup that the world belongs to",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		World_lightgroup_get, World_lightgroup_length, World_lightgroup_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	static const EnumPropertyItem rna_World_probe_resolution_items[7] = {
		{7, "128", 0, "128", ""	},
		{8, "256", 0, "256", ""	},
		{9, "512", 0, "512", ""	},
		{10, "1024", 0, "1024", ""	},
		{11, "2048", 0, "2048", ""	},
		{12, "4096", 0, "4096", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_World_probe_resolution_ = {
		{&rna_World_sun_threshold, 	&rna_World_lightgroup,
		-1, "probe_resolution", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution",
		"Resolution when baked to a texture",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, probe_resolution), RawPropertyType(0), nullptr},
		World_probe_resolution_get, World_probe_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_World_probe_resolution_items, 6, 10
	};

	rna_World_sun_threshold_ = {
		{&rna_World_sun_angle, 	&rna_World_probe_resolution,
		-1, "sun_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sun Threshold",
		"If non-zero, the maximum value for world contribution that will be recorded inside the world light probe. The excess contribution is converted to a sun light. This reduces the light bleeding caused by very bright light sources.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, sun_threshold), RawPropertyType(5), nullptr},
		World_sun_threshold_get, World_sun_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_World_sun_angle_ = {
		{&rna_World_use_sun_shadow, 	&rna_World_sun_threshold,
		-1, "sun_angle", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sun Angle",
		"Angular diameter of the Sun as seen from the Earth",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, sun_angle), RawPropertyType(5), nullptr},
		World_sun_angle_get, World_sun_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 0.0091804322f, nullptr
	};

	rna_World_use_sun_shadow_ = {
		{&rna_World_sun_shadow_maximum_resolution, 	&rna_World_sun_angle,
		-1, "use_sun_shadow", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Shadow",
		"Enable sun shadow casting",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		World_use_sun_shadow_get, World_use_sun_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_World_sun_shadow_maximum_resolution_ = {
		{&rna_World_sun_shadow_filter_radius, 	&rna_World_use_sun_shadow,
		-1, "sun_shadow_maximum_resolution", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadows Resolution Limit",
		"Maximum size of a shadow map pixel. Higher values use less memory at the cost of shadow quality.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, sun_shadow_maximum_resolution), RawPropertyType(5), nullptr},
		World_sun_shadow_maximum_resolution_get, World_sun_shadow_maximum_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 0.0199999996f, 0.0f, FLT_MAX, 0.0500000007f, 4, nullptr, nullptr, 0.0010000000f, nullptr
	};

	rna_World_sun_shadow_filter_radius_ = {
		{&rna_World_use_sun_shadow_jitter, 	&rna_World_sun_shadow_maximum_resolution,
		-1, "sun_shadow_filter_radius", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Filter Radius",
		"Blur shadow aliasing using Percentage Closer Filtering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, sun_shadow_filter_radius), RawPropertyType(5), nullptr},
		World_sun_shadow_filter_radius_get, World_sun_shadow_filter_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, FLT_MAX, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_World_use_sun_shadow_jitter_ = {
		{&rna_World_sun_shadow_jitter_overblur, 	&rna_World_sun_shadow_filter_radius,
		-1, "use_sun_shadow_jitter", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Shadow Jitter",
		"Enable jittered soft shadows to increase shadow precision (disabled in viewport unless enabled in the render settings). Has a high performance impact.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		World_use_sun_shadow_jitter_get, World_use_sun_shadow_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_World_sun_shadow_jitter_overblur_ = {
		{nullptr, 	&rna_World_use_sun_shadow_jitter,
		-1, "sun_shadow_jitter_overblur", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Jitter Overblur",
		"Apply shadow tracing to each jittered sample to reduce under-sampling artifacts",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, sun_shadow_jitter_overblur), RawPropertyType(5), nullptr},
		World_sun_shadow_jitter_overblur_get, World_sun_shadow_jitter_overblur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 100.0f, 10.0f, 0, nullptr, nullptr, 10.0f, nullptr
	};

	StructRNA *srna = RNA_World;
	srna->cont.properties = {&rna_World_animation_data, &rna_World_sun_shadow_jitter_overblur};
	srna->identifier = "World";
	srna->flag = 519;
	srna->name = "World";
	srna->description = "World data-block describing the environment and ambient lighting of a scene";
	srna->translation_context = "*";
	srna->icon = 201;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Lighting */
static CollectionPropertyRNA rna_WorldLighting_rna_properties_;
PropertyRNA &rna_WorldLighting_rna_properties = reinterpret_cast<PropertyRNA &>(rna_WorldLighting_rna_properties_);

static PointerPropertyRNA rna_WorldLighting_rna_type_;
PropertyRNA &rna_WorldLighting_rna_type = reinterpret_cast<PropertyRNA &>(rna_WorldLighting_rna_type_);

static FloatPropertyRNA rna_WorldLighting_ao_factor_;
PropertyRNA &rna_WorldLighting_ao_factor = reinterpret_cast<PropertyRNA &>(rna_WorldLighting_ao_factor_);

static FloatPropertyRNA rna_WorldLighting_distance_;
PropertyRNA &rna_WorldLighting_distance = reinterpret_cast<PropertyRNA &>(rna_WorldLighting_distance_);

StructRNA *RNA_WorldLighting;
void register_struct_WorldLighting(BlenderRNA &brna)
{
	rna_WorldLighting_rna_properties_ = {
		{&rna_WorldLighting_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorldLighting_rna_properties_begin, WorldLighting_rna_properties_next, WorldLighting_rna_properties_end, WorldLighting_rna_properties_get, nullptr, nullptr, WorldLighting_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_WorldLighting_rna_type_ = {
		{&rna_WorldLighting_ao_factor, 	&rna_WorldLighting_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorldLighting_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_WorldLighting_ao_factor_ = {
		{&rna_WorldLighting_distance, 	&rna_WorldLighting_rna_type,
		-1, "ao_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Factor",
		"Factor for ambient occlusion blending",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, aoenergy), RawPropertyType(5), nullptr},
		WorldLighting_ao_factor_get, WorldLighting_ao_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 2147483648.0f, 0.1000000015f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_WorldLighting_distance_ = {
		{nullptr, 	&rna_WorldLighting_ao_factor,
		-1, "distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Distance",
		"Length of rays, defines how far away other faces give occlusion effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, aodist), RawPropertyType(5), nullptr},
		WorldLighting_distance_get, WorldLighting_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	StructRNA *srna = RNA_WorldLighting;
	srna->cont.properties = {&rna_WorldLighting_rna_properties, &rna_WorldLighting_distance};
	srna->identifier = "WorldLighting";
	srna->flag = 516;
	srna->name = "Lighting";
	srna->description = "Lighting for a World data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_WorldLighting_rna_properties;
	srna->nested = RNA_World;
};

/* World Mist */
static CollectionPropertyRNA rna_WorldMistSettings_rna_properties_;
PropertyRNA &rna_WorldMistSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_WorldMistSettings_rna_properties_);

static PointerPropertyRNA rna_WorldMistSettings_rna_type_;
PropertyRNA &rna_WorldMistSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_WorldMistSettings_rna_type_);

static BoolPropertyRNA rna_WorldMistSettings_use_mist_;
PropertyRNA &rna_WorldMistSettings_use_mist = reinterpret_cast<PropertyRNA &>(rna_WorldMistSettings_use_mist_);

static FloatPropertyRNA rna_WorldMistSettings_intensity_;
PropertyRNA &rna_WorldMistSettings_intensity = reinterpret_cast<PropertyRNA &>(rna_WorldMistSettings_intensity_);

static FloatPropertyRNA rna_WorldMistSettings_start_;
PropertyRNA &rna_WorldMistSettings_start = reinterpret_cast<PropertyRNA &>(rna_WorldMistSettings_start_);

static FloatPropertyRNA rna_WorldMistSettings_depth_;
PropertyRNA &rna_WorldMistSettings_depth = reinterpret_cast<PropertyRNA &>(rna_WorldMistSettings_depth_);

static FloatPropertyRNA rna_WorldMistSettings_height_;
PropertyRNA &rna_WorldMistSettings_height = reinterpret_cast<PropertyRNA &>(rna_WorldMistSettings_height_);

static EnumPropertyRNA rna_WorldMistSettings_falloff_;
PropertyRNA &rna_WorldMistSettings_falloff = reinterpret_cast<PropertyRNA &>(rna_WorldMistSettings_falloff_);

StructRNA *RNA_WorldMistSettings;
void register_struct_WorldMistSettings(BlenderRNA &brna)
{
	rna_WorldMistSettings_rna_properties_ = {
		{&rna_WorldMistSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorldMistSettings_rna_properties_begin, WorldMistSettings_rna_properties_next, WorldMistSettings_rna_properties_end, WorldMistSettings_rna_properties_get, nullptr, nullptr, WorldMistSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_WorldMistSettings_rna_type_ = {
		{&rna_WorldMistSettings_use_mist, 	&rna_WorldMistSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorldMistSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_WorldMistSettings_use_mist_ = {
		{&rna_WorldMistSettings_intensity, 	&rna_WorldMistSettings_rna_type,
		-1, "use_mist", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Mist",
		"Occlude objects with the environment color as they are further away",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorldMistSettings_use_mist_get, WorldMistSettings_use_mist_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_WorldMistSettings_intensity_ = {
		{&rna_WorldMistSettings_start, 	&rna_WorldMistSettings_use_mist,
		-1, "intensity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum",
		"Overall minimum intensity of the mist effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, misi), RawPropertyType(5), nullptr},
		WorldMistSettings_intensity_get, WorldMistSettings_intensity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_WorldMistSettings_start_ = {
		{&rna_WorldMistSettings_depth, 	&rna_WorldMistSettings_intensity,
		-1, "start", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Start",
		"Starting distance of the mist, measured from the camera",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, miststa), RawPropertyType(5), nullptr},
		WorldMistSettings_start_get, WorldMistSettings_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 2, nullptr, nullptr, 5.0f, nullptr
	};

	rna_WorldMistSettings_depth_ = {
		{&rna_WorldMistSettings_height, 	&rna_WorldMistSettings_start,
		-1, "depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Depth",
		"Distance over which the mist effect fades in",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, mistdist), RawPropertyType(5), nullptr},
		WorldMistSettings_depth_get, WorldMistSettings_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 2, nullptr, nullptr, 25.0f, nullptr
	};

	rna_WorldMistSettings_height_ = {
		{&rna_WorldMistSettings_falloff, 	&rna_WorldMistSettings_depth,
		-1, "height", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Height",
		"Control how much mist density decreases with height",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, misthi), RawPropertyType(5), nullptr},
		WorldMistSettings_height_get, WorldMistSettings_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_WorldMistSettings_falloff_items[4] = {
		{0, "QUADRATIC", 0, "Quadratic", "Use quadratic progression"	},
		{1, "LINEAR", 0, "Linear", "Use linear progression"	},
		{2, "INVERSE_QUADRATIC", 0, "Inverse Quadratic", "Use inverse quadratic progression"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_WorldMistSettings_falloff_ = {
		{nullptr, 	&rna_WorldMistSettings_height,
		-1, "falloff", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Falloff",
		"Type of transition used to fade mist",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_World_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(World, mistype), RawPropertyType(1), nullptr},
		WorldMistSettings_falloff_get, WorldMistSettings_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_WorldMistSettings_falloff_items, 3, 0
	};

	StructRNA *srna = RNA_WorldMistSettings;
	srna->cont.properties = {&rna_WorldMistSettings_rna_properties, &rna_WorldMistSettings_falloff};
	srna->identifier = "WorldMistSettings";
	srna->flag = 516;
	srna->name = "World Mist";
	srna->description = "Mist settings for a World data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_WorldMistSettings_rna_properties;
	srna->nested = RNA_World;
};


}  // namespace blender
