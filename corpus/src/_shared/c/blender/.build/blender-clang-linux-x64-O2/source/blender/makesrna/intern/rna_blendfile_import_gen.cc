
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

#include "rna_blendfile_import.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_BlendImportContextLibrary_rna_properties;
extern PropertyRNA &rna_BlendImportContextLibrary_rna_type;
extern PropertyRNA &rna_BlendImportContextLibrary_filepath;


extern PropertyRNA &rna_BlendImportContextItem_rna_properties;
extern PropertyRNA &rna_BlendImportContextItem_rna_type;
extern PropertyRNA &rna_BlendImportContextItem_name;
extern PropertyRNA &rna_BlendImportContextItem_id_type;
extern PropertyRNA &rna_BlendImportContextItem_source_libraries;
extern PropertyRNA &rna_BlendImportContextItem_append_action;
extern PropertyRNA &rna_BlendImportContextItem_import_info;
extern PropertyRNA &rna_BlendImportContextItem_id;
extern PropertyRNA &rna_BlendImportContextItem_source_library;
extern PropertyRNA &rna_BlendImportContextItem_library_override_id;
extern PropertyRNA &rna_BlendImportContextItem_reusable_local_id;


extern PropertyRNA &rna_BlendImportContextLibraries_rna_properties;
extern PropertyRNA &rna_BlendImportContextLibraries_rna_type;


extern PropertyRNA &rna_BlendImportContext_rna_properties;
extern PropertyRNA &rna_BlendImportContext_rna_type;
extern PropertyRNA &rna_BlendImportContext_import_items;
extern PropertyRNA &rna_BlendImportContext_options;
extern PropertyRNA &rna_BlendImportContext_process_stage;


extern PropertyRNA &rna_BlendImportContextItems_rna_properties;
extern PropertyRNA &rna_BlendImportContextItems_rna_type;

static PointerRNA BlendImportContextLibrary_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendImportContextLibrary_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendImportContextLibrary_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendImportContextLibrary_rna_properties_get(iter);
    }
}

void BlendImportContextLibrary_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendImportContextLibrary_rna_properties_get(iter);
    }
}

void BlendImportContextLibrary_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendImportContextLibrary_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendImportContextLibrary_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void BlendImportContextLibrary_filepath_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_BlendImportContextLibrary_filepath_get;
    fn(ptr, value);
}

int BlendImportContextLibrary_filepath_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_BlendImportContextLibrary_filepath_len;
    return fn(ptr);
}

static PointerRNA BlendImportContextItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendImportContextItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendImportContextItem_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendImportContextItem_rna_properties_get(iter);
    }
}

void BlendImportContextItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendImportContextItem_rna_properties_get(iter);
    }
}

void BlendImportContextItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendImportContextItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendImportContextItem_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void BlendImportContextItem_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_BlendImportContextItem_name_get;
    fn(ptr, value);
}

int BlendImportContextItem_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_BlendImportContextItem_name_len;
    return fn(ptr);
}

int BlendImportContextItem_id_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_BlendImportContextItem_id_type_get;
    return fn(ptr);
}

int BlendImportContextItem_source_libraries_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_BlendImportContextItem_libraries_len;
    return fn(ptr);
}

static PointerRNA BlendImportContextItem_source_libraries_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_BlendImportContextItem_libraries_get;
    return fn(iter);
}

void BlendImportContextItem_source_libraries_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendImportContextItem_source_libraries;

    PropCollectionBeginFunc fn = rna_BlendImportContextItem_libraries_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendImportContextItem_source_libraries_get(iter);
    }
}

void BlendImportContextItem_source_libraries_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_BlendImportContextItem_libraries_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendImportContextItem_source_libraries_get(iter);
    }
}

void BlendImportContextItem_source_libraries_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_BlendImportContextItem_libraries_end;
    fn(iter);
}

int BlendImportContextItem_append_action_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_BlendImportContextItem_append_action_get;
    return fn(ptr);
}

int BlendImportContextItem_import_info_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_BlendImportContextItem_import_info_get;
    return fn(ptr);
}

PointerRNA BlendImportContextItem_id_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_BlendImportContextItem_id_get;
    return fn(ptr);
}

PointerRNA BlendImportContextItem_source_library_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_BlendImportContextItem_source_library_get;
    return fn(ptr);
}

PointerRNA BlendImportContextItem_library_override_id_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_BlendImportContextItem_library_override_id_get;
    return fn(ptr);
}

PointerRNA BlendImportContextItem_reusable_local_id_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_BlendImportContextItem_reusable_local_id_get;
    return fn(ptr);
}

static PointerRNA BlendImportContextLibraries_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendImportContextLibraries_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendImportContextLibraries_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendImportContextLibraries_rna_properties_get(iter);
    }
}

void BlendImportContextLibraries_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendImportContextLibraries_rna_properties_get(iter);
    }
}

void BlendImportContextLibraries_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendImportContextLibraries_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendImportContextLibraries_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendImportContext_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendImportContext_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendImportContext_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendImportContext_rna_properties_get(iter);
    }
}

void BlendImportContext_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendImportContext_rna_properties_get(iter);
    }
}

void BlendImportContext_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendImportContext_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendImportContext_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int BlendImportContext_import_items_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_BlendImportContext_import_items_len;
    return fn(ptr);
}

static PointerRNA BlendImportContext_import_items_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_BlendImportContext_import_items_get;
    return fn(iter);
}

void BlendImportContext_import_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendImportContext_import_items;

    PropCollectionBeginFunc fn = rna_BlendImportContext_import_items_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendImportContext_import_items_get(iter);
    }
}

void BlendImportContext_import_items_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_BlendImportContext_import_items_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendImportContext_import_items_get(iter);
    }
}

void BlendImportContext_import_items_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_BlendImportContext_import_items_end;
    fn(iter);
}

int BlendImportContext_options_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_BlendImportContext_options_get;
    return fn(ptr);
}

int BlendImportContext_process_stage_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_BlendImportContext_process_stage_get;
    return fn(ptr);
}

static PointerRNA BlendImportContextItems_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendImportContextItems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendImportContextItems_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendImportContextItems_rna_properties_get(iter);
    }
}

void BlendImportContextItems_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendImportContextItems_rna_properties_get(iter);
    }
}

void BlendImportContextItems_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendImportContextItems_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendImportContextItems_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}






/* Blendfile Import Context Library */
static CollectionPropertyRNA rna_BlendImportContextLibrary_rna_properties_;
PropertyRNA &rna_BlendImportContextLibrary_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextLibrary_rna_properties_);

static PointerPropertyRNA rna_BlendImportContextLibrary_rna_type_;
PropertyRNA &rna_BlendImportContextLibrary_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextLibrary_rna_type_);

static StringPropertyRNA rna_BlendImportContextLibrary_filepath_;
PropertyRNA &rna_BlendImportContextLibrary_filepath = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextLibrary_filepath_);

StructRNA *RNA_BlendImportContextLibrary;
void register_struct_BlendImportContextLibrary(BlenderRNA &brna)
{
	rna_BlendImportContextLibrary_rna_properties_ = {
		{&rna_BlendImportContextLibrary_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextLibrary_rna_properties_begin, BlendImportContextLibrary_rna_properties_next, BlendImportContextLibrary_rna_properties_end, BlendImportContextLibrary_rna_properties_get, nullptr, nullptr, BlendImportContextLibrary_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendImportContextLibrary_rna_type_ = {
		{&rna_BlendImportContextLibrary_filepath, 	&rna_BlendImportContextLibrary_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextLibrary_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BlendImportContextLibrary_filepath_ = {
		{nullptr, 	&rna_BlendImportContextLibrary_rna_type,
		-1, "filepath", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "filepath",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextLibrary_filepath_get, BlendImportContextLibrary_filepath_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_BlendImportContextLibrary;
	srna->cont.properties = {&rna_BlendImportContextLibrary_rna_properties, &rna_BlendImportContextLibrary_filepath};
	srna->identifier = "BlendImportContextLibrary";
	srna->flag = 516;
	srna->name = "Blendfile Import Context Library";
	srna->description = "Library (blendfile) reference in a BlendImportContext data. Currently only exposed as read-only data for the pre/post blendimport handlers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendImportContextLibrary_rna_properties;
};

/* Blendfile Import Context Item */
static CollectionPropertyRNA rna_BlendImportContextItem_rna_properties_;
PropertyRNA &rna_BlendImportContextItem_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_rna_properties_);

static PointerPropertyRNA rna_BlendImportContextItem_rna_type_;
PropertyRNA &rna_BlendImportContextItem_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_rna_type_);

static StringPropertyRNA rna_BlendImportContextItem_name_;
PropertyRNA &rna_BlendImportContextItem_name = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_name_);

static EnumPropertyRNA rna_BlendImportContextItem_id_type_;
PropertyRNA &rna_BlendImportContextItem_id_type = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_id_type_);

static CollectionPropertyRNA rna_BlendImportContextItem_source_libraries_;
PropertyRNA &rna_BlendImportContextItem_source_libraries = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_source_libraries_);

static EnumPropertyRNA rna_BlendImportContextItem_append_action_;
PropertyRNA &rna_BlendImportContextItem_append_action = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_append_action_);

static EnumPropertyRNA rna_BlendImportContextItem_import_info_;
PropertyRNA &rna_BlendImportContextItem_import_info = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_import_info_);

static PointerPropertyRNA rna_BlendImportContextItem_id_;
PropertyRNA &rna_BlendImportContextItem_id = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_id_);

static PointerPropertyRNA rna_BlendImportContextItem_source_library_;
PropertyRNA &rna_BlendImportContextItem_source_library = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_source_library_);

static PointerPropertyRNA rna_BlendImportContextItem_library_override_id_;
PropertyRNA &rna_BlendImportContextItem_library_override_id = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_library_override_id_);

static PointerPropertyRNA rna_BlendImportContextItem_reusable_local_id_;
PropertyRNA &rna_BlendImportContextItem_reusable_local_id = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItem_reusable_local_id_);

StructRNA *RNA_BlendImportContextItem;
void register_struct_BlendImportContextItem(BlenderRNA &brna)
{
	rna_BlendImportContextItem_rna_properties_ = {
		{&rna_BlendImportContextItem_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItem_rna_properties_begin, BlendImportContextItem_rna_properties_next, BlendImportContextItem_rna_properties_end, BlendImportContextItem_rna_properties_get, nullptr, nullptr, BlendImportContextItem_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendImportContextItem_rna_type_ = {
		{&rna_BlendImportContextItem_name, 	&rna_BlendImportContextItem_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItem_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BlendImportContextItem_name_ = {
		{&rna_BlendImportContextItem_id_type, 	&rna_BlendImportContextItem_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID Name",
		"ID name of the item",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItem_name_get, BlendImportContextItem_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_BlendImportContextItem_id_type_ = {
		{&rna_BlendImportContextItem_source_libraries, 	&rna_BlendImportContextItem_name,
		-1, "id_type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID Type",
		"ID type of the item",
		0, "ID",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItem_id_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_id_type_items, 39, 17217
	};

	rna_BlendImportContextItem_source_libraries_ = {
		{&rna_BlendImportContextItem_append_action, 	&rna_BlendImportContextItem_id_type,
		-1, "source_libraries", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Source Libraries",
		"List of libraries to search and import that ID from. The ID will be imported from the first file in that list that contains it",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendImportContextLibraries},
		BlendImportContextItem_source_libraries_begin, BlendImportContextItem_source_libraries_next, BlendImportContextItem_source_libraries_end, BlendImportContextItem_source_libraries_get, BlendImportContextItem_source_libraries_length, nullptr, nullptr, nullptr, RNA_BlendImportContextLibrary
	};

	static const EnumPropertyItem rna_BlendImportContextItem_append_action_items[6] = {
		{0, "UNSET", 0, "", "Not yet defined"	},
		{1, "KEEP_LINKED", 0, "", "ID has been kept linked"	},
		{2, "REUSE_LOCAL", 0, "", "An existing matching local ID has been re-used"	},
		{3, "MAKE_LOCAL", 0, "", "The newly linked ID has been made local"	},
		{4, "COPY_LOCAL", 0, "", "The linked ID had other unrelated usages, so it has been duplicated into a local copy"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BlendImportContextItem_append_action_ = {
		{&rna_BlendImportContextItem_import_info, 	&rna_BlendImportContextItem_source_libraries,
		-1, "append_action", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Append Action",
		"How this item has been handled by the append operation. Only set if the data has been appended",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItem_append_action_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BlendImportContextItem_append_action_items, 5, 0
	};

	static const EnumPropertyItem rna_BlendImportContextItem_import_info_items[4] = {
		{1, "INDIRECT_USAGE", 0, "", "That item was added for an indirectly imported ID, as a dependency of another data-block"	},
		{2, "LIBOVERRIDE_DEPENDENCY", 0, "", "That item represents an ID also used as liboverride dependency (either directly, as a liboverride reference, or indirectly, as data used by a liboverride reference). It should never be directly made local. Mutually exclusive with `LIBOVERRIDE_DEPENDENCY_ONLY`"	},
		{4, "LIBOVERRIDE_DEPENDENCY_ONLY", 0, "", "That item represents an ID only used as liboverride dependency (either directly or indirectly, see `LIBOVERRIDE_DEPENDENCY` for precisions). It should not be considered during the \'make local\' (append) process, and remain purely linked data. Mutually exclusive with `LIBOVERRIDE_DEPENDENCY`"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BlendImportContextItem_import_info_ = {
		{&rna_BlendImportContextItem_id, 	&rna_BlendImportContextItem_append_action,
		-1, "import_info", 2097154, 0, 0, 0, 0, PropertyPathTemplateType(0), "Import Info",
		"Various status info about an item after it has been imported",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItem_import_info_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BlendImportContextItem_import_info_items, 3, 0
	};

	rna_BlendImportContextItem_id_ = {
		{&rna_BlendImportContextItem_source_library, 	&rna_BlendImportContextItem_import_info,
		-1, "id", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Imported ID",
		"The imported ID. None until it has been linked or appended. May be the same as ``reusable_local_id`` when appended",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItem_id_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_BlendImportContextItem_source_library_ = {
		{&rna_BlendImportContextItem_library_override_id, 	&rna_BlendImportContextItem_id,
		-1, "source_library", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Source Library",
		"Library ID representing the blendfile from which the ID was imported. None until the ID has been linked or appended",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItem_source_library_get, nullptr, nullptr, nullptr,RNA_Library
	};

	rna_BlendImportContextItem_library_override_id_ = {
		{&rna_BlendImportContextItem_reusable_local_id, 	&rna_BlendImportContextItem_source_library,
		-1, "library_override_id", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Library Overridden ID",
		"The library override of the linked ID. None until it has been created",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItem_library_override_id_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_BlendImportContextItem_reusable_local_id_ = {
		{nullptr, 	&rna_BlendImportContextItem_library_override_id,
		-1, "reusable_local_id", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reusable Local ID",
		"The already existing local ID that may be reused in append & reuse case. None until it has been found",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItem_reusable_local_id_get, nullptr, nullptr, nullptr,RNA_ID
	};

	StructRNA *srna = RNA_BlendImportContextItem;
	srna->cont.properties = {&rna_BlendImportContextItem_rna_properties, &rna_BlendImportContextItem_reusable_local_id};
	srna->identifier = "BlendImportContextItem";
	srna->flag = 516;
	srna->name = "Blendfile Import Context Item";
	srna->description = "An item (representing a data-block) in a BlendImportContext data. Currently only exposed as read-only data for the pre/post linking handlers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendImportContextItem_rna_properties;
};

/* Blendfile Import Context Libraries */
static CollectionPropertyRNA rna_BlendImportContextLibraries_rna_properties_;
PropertyRNA &rna_BlendImportContextLibraries_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextLibraries_rna_properties_);

static PointerPropertyRNA rna_BlendImportContextLibraries_rna_type_;
PropertyRNA &rna_BlendImportContextLibraries_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextLibraries_rna_type_);

StructRNA *RNA_BlendImportContextLibraries;
void register_struct_BlendImportContextLibraries(BlenderRNA &brna)
{
	rna_BlendImportContextLibraries_rna_properties_ = {
		{&rna_BlendImportContextLibraries_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextLibraries_rna_properties_begin, BlendImportContextLibraries_rna_properties_next, BlendImportContextLibraries_rna_properties_end, BlendImportContextLibraries_rna_properties_get, nullptr, nullptr, BlendImportContextLibraries_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendImportContextLibraries_rna_type_ = {
		{nullptr, 	&rna_BlendImportContextLibraries_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextLibraries_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendImportContextLibraries;
	srna->cont.properties = {&rna_BlendImportContextLibraries_rna_properties, &rna_BlendImportContextLibraries_rna_type};
	srna->identifier = "BlendImportContextLibraries";
	srna->flag = 516;
	srna->name = "Blendfile Import Context Libraries";
	srna->description = "Collection of source libraries, i.e. blendfile paths";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendImportContextLibraries_rna_properties;
};

/* Blendfile Import Context */
static CollectionPropertyRNA rna_BlendImportContext_rna_properties_;
PropertyRNA &rna_BlendImportContext_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendImportContext_rna_properties_);

static PointerPropertyRNA rna_BlendImportContext_rna_type_;
PropertyRNA &rna_BlendImportContext_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendImportContext_rna_type_);

static CollectionPropertyRNA rna_BlendImportContext_import_items_;
PropertyRNA &rna_BlendImportContext_import_items = reinterpret_cast<PropertyRNA &>(rna_BlendImportContext_import_items_);

static EnumPropertyRNA rna_BlendImportContext_options_;
PropertyRNA &rna_BlendImportContext_options = reinterpret_cast<PropertyRNA &>(rna_BlendImportContext_options_);

static EnumPropertyRNA rna_BlendImportContext_process_stage_;
PropertyRNA &rna_BlendImportContext_process_stage = reinterpret_cast<PropertyRNA &>(rna_BlendImportContext_process_stage_);

StructRNA *RNA_BlendImportContext;
void register_struct_BlendImportContext(BlenderRNA &brna)
{
	rna_BlendImportContext_rna_properties_ = {
		{&rna_BlendImportContext_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContext_rna_properties_begin, BlendImportContext_rna_properties_next, BlendImportContext_rna_properties_end, BlendImportContext_rna_properties_get, nullptr, nullptr, BlendImportContext_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendImportContext_rna_type_ = {
		{&rna_BlendImportContext_import_items, 	&rna_BlendImportContext_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContext_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BlendImportContext_import_items_ = {
		{&rna_BlendImportContext_options, 	&rna_BlendImportContext_rna_type,
		-1, "import_items", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "import_items",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendImportContextItems},
		BlendImportContext_import_items_begin, BlendImportContext_import_items_next, BlendImportContext_import_items_end, BlendImportContext_import_items_get, BlendImportContext_import_items_length, nullptr, nullptr, nullptr, RNA_BlendImportContextItem
	};

	static const EnumPropertyItem rna_BlendImportContext_options_items[13] = {
		{4, "LINK", 0, "", "Only link data, instead of appending it"	},
		{2, "MAKE_PATHS_RELATIVE", 0, "", "Make paths of used library blendfiles relative to current blendfile"	},
		{65536, "USE_PLACEHOLDERS", 0, "", "Generate a placeholder (empty ID) if not found in any library files"	},
		{131072, "FORCE_INDIRECT", 0, "", "Force loaded ID to be tagged as indirectly linked (used in reload context only)"	},
		{524288, "APPEND_SET_FAKEUSER", 0, "", "Set fake user on appended IDs"	},
		{1048576, "APPEND_RECURSIVE", 0, "", "Append (make local) also indirect dependencies of appended IDs coming from other libraries. NOTE: All IDs (including indirectly linked ones) coming from the same initial library are always made local"	},
		{2097152, "APPEND_LOCAL_ID_REUSE", 0, "", "Try to re-use previously appended matching IDs when appending them again, instead of creating local duplicates"	},
		{4194304, "APPEND_ASSET_DATA_CLEAR", 0, "", "Clear the asset data on append (it is always kept for linked data)"	},
		{16, "SELECT_OBJECTS", 0, "", "Automatically select imported objects"	},
		{32, "USE_ACTIVE_COLLECTION", 0, "", "Use the active Collection of the current View Layer to instantiate imported collections and objects"	},
		{16777216, "OBDATA_INSTANCE", 0, "", "Instantiate object data IDs (i.e. create objects for them if needed)"	},
		{33554432, "COLLECTION_INSTANCE", 0, "", "Instantiate collections as empties, instead of linking them into the current view layer"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BlendImportContext_options_ = {
		{&rna_BlendImportContext_process_stage, 	&rna_BlendImportContext_import_items,
		-1, "options", 2097154, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Options for this blendfile import operation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContext_options_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BlendImportContext_options_items, 12, 0
	};

	static const EnumPropertyItem rna_BlendImportContext_process_stage_items[3] = {
		{0, "INIT", 0, "", "Blendfile import context has been initialized and filled with a list of items to import, no data has been linked or appended yet"	},
		{4, "DONE", 0, "", "All data has been imported and is available in the list of \"import_items\""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BlendImportContext_process_stage_ = {
		{nullptr, 	&rna_BlendImportContext_options,
		-1, "process_stage", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Current stage of the import process",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContext_process_stage_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BlendImportContext_process_stage_items, 2, 0
	};

	StructRNA *srna = RNA_BlendImportContext;
	srna->cont.properties = {&rna_BlendImportContext_rna_properties, &rna_BlendImportContext_process_stage};
	srna->identifier = "BlendImportContext";
	srna->flag = 516;
	srna->name = "Blendfile Import Context";
	srna->description = "Contextual data for a blendfile library/linked-data related operation. Currently only exposed as read-only data for the pre/post blendimport handlers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendImportContext_rna_properties;
};

/* Blendfile Import Context Items */
static CollectionPropertyRNA rna_BlendImportContextItems_rna_properties_;
PropertyRNA &rna_BlendImportContextItems_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItems_rna_properties_);

static PointerPropertyRNA rna_BlendImportContextItems_rna_type_;
PropertyRNA &rna_BlendImportContextItems_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendImportContextItems_rna_type_);

StructRNA *RNA_BlendImportContextItems;
void register_struct_BlendImportContextItems(BlenderRNA &brna)
{
	rna_BlendImportContextItems_rna_properties_ = {
		{&rna_BlendImportContextItems_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItems_rna_properties_begin, BlendImportContextItems_rna_properties_next, BlendImportContextItems_rna_properties_end, BlendImportContextItems_rna_properties_get, nullptr, nullptr, BlendImportContextItems_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendImportContextItems_rna_type_ = {
		{nullptr, 	&rna_BlendImportContextItems_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendImportContextItems_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendImportContextItems;
	srna->cont.properties = {&rna_BlendImportContextItems_rna_properties, &rna_BlendImportContextItems_rna_type};
	srna->identifier = "BlendImportContextItems";
	srna->flag = 516;
	srna->name = "Blendfile Import Context Items";
	srna->description = "Collection of blendfile import context items";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendImportContextItems_rna_properties;
};


}  // namespace blender
