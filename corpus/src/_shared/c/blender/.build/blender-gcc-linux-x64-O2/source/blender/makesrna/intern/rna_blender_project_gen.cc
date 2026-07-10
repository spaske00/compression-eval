
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

#include "rna_blender_project.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_BlenderProject_rna_properties;
extern PropertyRNA &rna_BlenderProject_rna_type;
extern PropertyRNA &rna_BlenderProject_is_dirty;
extern PropertyRNA &rna_BlenderProject_name;
extern PropertyRNA &rna_BlenderProject_root_path;

static PointerRNA BlenderProject_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlenderProject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlenderProject_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlenderProject_rna_properties_get(iter);
    }
}

void BlenderProject_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlenderProject_rna_properties_get(iter);
    }
}

void BlenderProject_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlenderProject_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlenderProject_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool BlenderProject_is_dirty_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BlenderProject_is_dirty_get;
    return fn(ptr);
}

void BlenderProject_is_dirty_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_BlenderProject_is_dirty_set;
    fn(ptr, value);
}

void BlenderProject_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_BlenderProject_name_get;
    fn(ptr, value);
}

int BlenderProject_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_BlenderProject_name_length;
    return fn(ptr);
}

void BlenderProject_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_BlenderProject_name_set;
    fn(ptr, value);
}

void BlenderProject_root_path_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_BlenderProject_root_path_get;
    fn(ptr, value);
}

int BlenderProject_root_path_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_BlenderProject_root_path_length;
    return fn(ptr);
}


/* Blender Project */
static CollectionPropertyRNA rna_BlenderProject_rna_properties_;
PropertyRNA &rna_BlenderProject_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlenderProject_rna_properties_);

static PointerPropertyRNA rna_BlenderProject_rna_type_;
PropertyRNA &rna_BlenderProject_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlenderProject_rna_type_);

static BoolPropertyRNA rna_BlenderProject_is_dirty_;
PropertyRNA &rna_BlenderProject_is_dirty = reinterpret_cast<PropertyRNA &>(rna_BlenderProject_is_dirty_);

static StringPropertyRNA rna_BlenderProject_name_;
PropertyRNA &rna_BlenderProject_name = reinterpret_cast<PropertyRNA &>(rna_BlenderProject_name_);

static StringPropertyRNA rna_BlenderProject_root_path_;
PropertyRNA &rna_BlenderProject_root_path = reinterpret_cast<PropertyRNA &>(rna_BlenderProject_root_path_);

StructRNA *RNA_BlenderProject;
void register_struct_BlenderProject(BlenderRNA &brna)
{
	rna_BlenderProject_rna_properties_ = {
		{&rna_BlenderProject_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlenderProject_rna_properties_begin, BlenderProject_rna_properties_next, BlenderProject_rna_properties_end, BlenderProject_rna_properties_get, nullptr, nullptr, BlenderProject_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlenderProject_rna_type_ = {
		{&rna_BlenderProject_is_dirty, 	&rna_BlenderProject_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlenderProject_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BlenderProject_is_dirty_ = {
		{&rna_BlenderProject_name, 	&rna_BlenderProject_rna_type,
		-1, "is_dirty", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Dirty",
		"Whether the project has unsaved changes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BlenderProject_ui_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlenderProject_is_dirty_get, BlenderProject_is_dirty_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BlenderProject_name_ = {
		{&rna_BlenderProject_root_path, 	&rna_BlenderProject_is_dirty,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"The project\'s name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BlenderProject_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlenderProject_name_get, BlenderProject_name_length, BlenderProject_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_BlenderProject_root_path_ = {
		{nullptr, 	&rna_BlenderProject_name,
		-1, "root_path", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Root Folder",
		"The path to the root folder of the project",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_DIRPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlenderProject_root_path_get, BlenderProject_root_path_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_BlenderProject;
	srna->cont.properties = {&rna_BlenderProject_rna_properties, &rna_BlenderProject_root_path};
	srna->identifier = "BlenderProject";
	srna->flag = 516;
	srna->name = "Blender Project";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_BlenderProject_name;
	srna->iteratorproperty = &rna_BlenderProject_rna_properties;
};


}  // namespace blender
