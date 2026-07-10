
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

#include "rna_packedfile.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_PackedFile_rna_properties;
extern PropertyRNA &rna_PackedFile_rna_type;
extern PropertyRNA &rna_PackedFile_size;
extern PropertyRNA &rna_PackedFile_data;

static PointerRNA PackedFile_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PackedFile_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PackedFile_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PackedFile_rna_properties_get(iter);
    }
}

void PackedFile_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PackedFile_rna_properties_get(iter);
    }
}

void PackedFile_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PackedFile_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PackedFile_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int PackedFile_size_get(PointerRNA *ptr)
{
    PackedFile *data = (PackedFile *)(ptr->data);
    return (int)(data->size);
}

void PackedFile_data_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_PackedImage_data_get;
    fn(ptr, value);
}

int PackedFile_data_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_PackedImage_data_len;
    return fn(ptr);
}


/* Packed File */
static CollectionPropertyRNA rna_PackedFile_rna_properties_;
PropertyRNA &rna_PackedFile_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PackedFile_rna_properties_);

static PointerPropertyRNA rna_PackedFile_rna_type_;
PropertyRNA &rna_PackedFile_rna_type = reinterpret_cast<PropertyRNA &>(rna_PackedFile_rna_type_);

static IntPropertyRNA rna_PackedFile_size_;
PropertyRNA &rna_PackedFile_size = reinterpret_cast<PropertyRNA &>(rna_PackedFile_size_);

static StringPropertyRNA rna_PackedFile_data_;
PropertyRNA &rna_PackedFile_data = reinterpret_cast<PropertyRNA &>(rna_PackedFile_data_);

StructRNA *RNA_PackedFile;
void register_struct_PackedFile(BlenderRNA &brna)
{
	rna_PackedFile_rna_properties_ = {
		{&rna_PackedFile_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PackedFile_rna_properties_begin, PackedFile_rna_properties_next, PackedFile_rna_properties_end, PackedFile_rna_properties_get, nullptr, nullptr, PackedFile_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PackedFile_rna_type_ = {
		{&rna_PackedFile_size, 	&rna_PackedFile_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PackedFile_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PackedFile_size_ = {
		{&rna_PackedFile_data, 	&rna_PackedFile_rna_type,
		-1, "size", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Size of packed file in bytes",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PackedFile, size), RawPropertyType(0), nullptr},
		PackedFile_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PackedFile_data_ = {
		{nullptr, 	&rna_PackedFile_size,
		-1, "data", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Data",
		"Raw data (bytes, exact content of the embedded file)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_BYTESTRING) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PackedFile_data_get, PackedFile_data_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_PackedFile;
	srna->cont.properties = {&rna_PackedFile_rna_properties, &rna_PackedFile_data};
	srna->identifier = "PackedFile";
	srna->flag = 516;
	srna->name = "Packed File";
	srna->description = "External file packed into the .blend file";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PackedFile_rna_properties;
};


}  // namespace blender
