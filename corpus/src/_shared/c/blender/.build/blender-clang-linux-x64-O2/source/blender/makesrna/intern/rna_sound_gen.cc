
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

#include "rna_sound.cc"
#include "rna_sound_api.cc"

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

extern PropertyRNA &rna_Sound_filepath;
extern PropertyRNA &rna_Sound_packed_file;
extern PropertyRNA &rna_Sound_use_memory_cache;
extern PropertyRNA &rna_Sound_use_mono;
extern PropertyRNA &rna_Sound_samplerate;
extern PropertyRNA &rna_Sound_channels;

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


extern FunctionRNA *rna_Sound_pack_func;
extern FunctionRNA *rna_Sound_unpack_func;
extern PropertyRNA &rna_Sound_unpack_method;


void Sound_filepath_get(PointerRNA *ptr, char *value)
{
    bSound *data = (bSound *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

int Sound_filepath_length(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return strlen(data->filepath);
}

void Sound_filepath_set(PointerRNA *ptr, const char *value)
{
    bSound *data = (bSound *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

PointerRNA Sound_packed_file_get(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PackedFile, data->packedfile);
}

bool Sound_use_memory_cache_get(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return ((uint64_t(data->flags) & 16) != 0);
}

void Sound_use_memory_cache_set(PointerRNA *ptr, bool value)
{
    bSound *data = (bSound *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 16); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(16)); }
}

bool Sound_use_mono_get(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return ((uint64_t(data->flags) & 32) != 0);
}

void Sound_use_mono_set(PointerRNA *ptr, bool value)
{
    bSound *data = (bSound *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 32); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(32)); }
}

int Sound_samplerate_get(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return (int)(data->samplerate);
}

int Sound_channels_get(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return (int)(data->audio_channels);
}

void Sound_pack_func(bSound *_self, Main *bmain, ReportList *reports)
{
	rna_Sound_pack(_self, bmain, reports);
}

static void Sound_pack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bSound *_self;
	_self = (bSound *)_ptr->data;
	
	rna_Sound_pack(_self, CTX_data_main(C), reports);
}

void Sound_unpack_func(bSound *_self, Main *bmain, ReportList *reports, int method)
{
	rna_Sound_unpack(_self, bmain, reports, method);
}

static void Sound_unpack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bSound *_self;
	int method;
	char *_data;
	
	_self = (bSound *)_ptr->data;
	_data = (char *)_parms->data;
	method = *((int *)_data);
	
	rna_Sound_unpack(_self, CTX_data_main(C), reports, method);
}

/* Repeated prototypes to detect errors */

void rna_Sound_pack(bSound *_self, Main *bmain, ReportList *reports);
void rna_Sound_unpack(bSound *_self, Main *bmain, ReportList *reports, int method);

/* Sound */
static StringPropertyRNA rna_Sound_filepath_;
PropertyRNA &rna_Sound_filepath = reinterpret_cast<PropertyRNA &>(rna_Sound_filepath_);

static PointerPropertyRNA rna_Sound_packed_file_;
PropertyRNA &rna_Sound_packed_file = reinterpret_cast<PropertyRNA &>(rna_Sound_packed_file_);

static BoolPropertyRNA rna_Sound_use_memory_cache_;
PropertyRNA &rna_Sound_use_memory_cache = reinterpret_cast<PropertyRNA &>(rna_Sound_use_memory_cache_);

static BoolPropertyRNA rna_Sound_use_mono_;
PropertyRNA &rna_Sound_use_mono = reinterpret_cast<PropertyRNA &>(rna_Sound_use_mono_);

static IntPropertyRNA rna_Sound_samplerate_;
PropertyRNA &rna_Sound_samplerate = reinterpret_cast<PropertyRNA &>(rna_Sound_samplerate_);

static EnumPropertyRNA rna_Sound_channels_;
PropertyRNA &rna_Sound_channels = reinterpret_cast<PropertyRNA &>(rna_Sound_channels_);

FunctionRNA *rna_Sound_pack_func;
static EnumPropertyRNA rna_Sound_unpack_method_;
PropertyRNA &rna_Sound_unpack_method = reinterpret_cast<PropertyRNA &>(rna_Sound_unpack_method_);

FunctionRNA *rna_Sound_unpack_func;
StructRNA *RNA_Sound;
void register_struct_Sound(BlenderRNA &brna)
{
	rna_Sound_filepath_ = {
		{&rna_Sound_packed_file, 	nullptr,
		-1, "filepath", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"Sound sample file used by this Sound data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_Sound_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Sound_filepath_get, Sound_filepath_length, Sound_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_Sound_packed_file_ = {
		{&rna_Sound_use_memory_cache, 	&rna_Sound_filepath,
		-1, "packed_file", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Packed File",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Sound_packed_file_get, nullptr, nullptr, nullptr,RNA_PackedFile
	};

	rna_Sound_use_memory_cache_ = {
		{&rna_Sound_use_mono, 	&rna_Sound_packed_file,
		-1, "use_memory_cache", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Caching",
		"The sound file is decoded and loaded into RAM",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Sound_caching_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Sound_use_memory_cache_get, Sound_use_memory_cache_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Sound_use_mono_ = {
		{&rna_Sound_samplerate, 	&rna_Sound_use_memory_cache,
		-1, "use_mono", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mono",
		"If the file contains multiple audio channels they are rendered to a single one",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Sound_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Sound_use_mono_get, Sound_use_mono_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Sound_samplerate_ = {
		{&rna_Sound_channels, 	&rna_Sound_use_mono,
		-1, "samplerate", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sample Rate",
		"Sample rate of the audio in Hz",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSound, samplerate), RawPropertyType(0), nullptr},
		Sound_samplerate_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Sound_channels_items[10] = {
		{0, "INVALID", 0, "Invalid", "Invalid"	},
		{1, "MONO", 0, "Mono", "Mono"	},
		{2, "STEREO", 0, "Stereo", "Stereo"	},
		{3, "STEREO_LFE", 0, "Stereo LFE", "Stereo FX"	},
		{4, "CHANNELS_4", 0, "4 Channels", "4 Channels"	},
		{5, "CHANNELS_5", 0, "5 Channels", "5 Channels"	},
		{6, "SURROUND_51", 0, "5.1 Surround", "5.1 Surround"	},
		{7, "SURROUND_61", 0, "6.1 Surround", "6.1 Surround"	},
		{8, "SURROUND_71", 0, "7.1 Surround", "7.1 Surround"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Sound_channels_ = {
		{nullptr, 	&rna_Sound_samplerate,
		-1, "channels", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Audio channels",
		"Definition of audio channels",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bSound, audio_channels), RawPropertyType(0), nullptr},
		Sound_channels_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Sound_channels_items, 9, 0
	};

	StructRNA *srna = RNA_Sound;
	srna->cont.properties = {&rna_Sound_filepath, &rna_Sound_channels};
	srna->identifier = "Sound";
	srna->flag = 519;
	srna->name = "Sound";
	srna->description = "Sound data-block referencing an external or packed sound file";
	srna->translation_context = "*";
	srna->icon = 151;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "pack";
		func->flag = 20;
		func->description = "Pack the sound into the current blend file";
		func->call = Sound_pack_call;
		rna_Sound_pack_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Sound_unpack_method_ = {
		{nullptr, 	nullptr,
		-1, "method", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "method",
		"How to unpack",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_unpack_method_items, 5, 5
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Sound_unpack_method, &rna_Sound_unpack_method};
		func->identifier = "unpack";
		func->flag = 20;
		func->description = "Unpack the sound to the samples filename";
		func->call = Sound_unpack_call;
		rna_Sound_unpack_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
