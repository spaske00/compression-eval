
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

#include "rna_vfont.cc"
#include "rna_vfont_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

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

extern PropertyRNA &rna_VectorFont_filepath;
extern PropertyRNA &rna_VectorFont_packed_file;

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


extern FunctionRNA *rna_VectorFont_pack_func;
extern FunctionRNA *rna_VectorFont_unpack_func;
extern PropertyRNA &rna_VectorFont_unpack_method;


void VectorFont_filepath_get(PointerRNA *ptr, char *value)
{
    VFont *data = (VFont *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

int VectorFont_filepath_length(PointerRNA *ptr)
{
    VFont *data = (VFont *)(ptr->data);
    return strlen(data->filepath);
}

void VectorFont_filepath_set(PointerRNA *ptr, const char *value)
{
    VFont *data = (VFont *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

PointerRNA VectorFont_packed_file_get(PointerRNA *ptr)
{
    VFont *data = (VFont *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PackedFile, data->packedfile);
}

void VectorFont_pack_func(VFont *_self, Main *bmain, ReportList *reports)
{
	rna_VectorFont_pack(_self, bmain, reports);
}

static void VectorFont_pack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	VFont *_self;
	_self = (VFont *)_ptr->data;
	
	rna_VectorFont_pack(_self, CTX_data_main(C), reports);
}

void VectorFont_unpack_func(VFont *_self, Main *bmain, ReportList *reports, int method)
{
	rna_VectorFont_unpack(_self, bmain, reports, method);
}

static void VectorFont_unpack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	VFont *_self;
	int method;
	char *_data;
	
	_self = (VFont *)_ptr->data;
	_data = (char *)_parms->data;
	method = *((int *)_data);
	
	rna_VectorFont_unpack(_self, CTX_data_main(C), reports, method);
}

/* Repeated prototypes to detect errors */

void rna_VectorFont_pack(VFont *_self, Main *bmain, ReportList *reports);
void rna_VectorFont_unpack(VFont *_self, Main *bmain, ReportList *reports, int method);

/* Vector Font */
static StringPropertyRNA rna_VectorFont_filepath_;
PropertyRNA &rna_VectorFont_filepath = reinterpret_cast<PropertyRNA &>(rna_VectorFont_filepath_);

static PointerPropertyRNA rna_VectorFont_packed_file_;
PropertyRNA &rna_VectorFont_packed_file = reinterpret_cast<PropertyRNA &>(rna_VectorFont_packed_file_);

FunctionRNA *rna_VectorFont_pack_func;
static EnumPropertyRNA rna_VectorFont_unpack_method_;
PropertyRNA &rna_VectorFont_unpack_method = reinterpret_cast<PropertyRNA &>(rna_VectorFont_unpack_method_);

FunctionRNA *rna_VectorFont_unpack_func;
StructRNA *RNA_VectorFont;
void register_struct_VectorFont(BlenderRNA &brna)
{
	rna_VectorFont_filepath_ = {
		{&rna_VectorFont_packed_file, 	nullptr,
		-1, "filepath", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_VectorFont_reload_update, 291176448, rna_VectorFont_filepath_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VectorFont_filepath_get, VectorFont_filepath_length, VectorFont_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_VectorFont_packed_file_ = {
		{nullptr, 	&rna_VectorFont_filepath,
		-1, "packed_file", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Packed File",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VectorFont_packed_file_get, nullptr, nullptr, nullptr,RNA_PackedFile
	};

	StructRNA *srna = RNA_VectorFont;
	srna->cont.properties = {&rna_VectorFont_filepath, &rna_VectorFont_packed_file};
	srna->identifier = "VectorFont";
	srna->flag = 519;
	srna->name = "Vector Font";
	srna->description = "Vector font for Text objects";
	srna->translation_context = "*";
	srna->icon = 672;
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
		func->description = "Pack the font into the current blend file";
		func->call = VectorFont_pack_call;
		rna_VectorFont_pack_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_VectorFont_unpack_method_ = {
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
		func->cont.properties = {&rna_VectorFont_unpack_method, &rna_VectorFont_unpack_method};
		func->identifier = "unpack";
		func->flag = 20;
		func->description = "Unpack the font to the samples filename";
		func->call = VectorFont_unpack_call;
		rna_VectorFont_unpack_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
