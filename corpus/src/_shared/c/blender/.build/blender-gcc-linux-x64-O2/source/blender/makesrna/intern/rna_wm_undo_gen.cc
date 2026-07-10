
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

#include "rna_wm_undo.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_UndoStep_rna_properties;
extern PropertyRNA &rna_UndoStep_rna_type;
extern PropertyRNA &rna_UndoStep_name;
extern PropertyRNA &rna_UndoStep_type;
extern PropertyRNA &rna_UndoStep_is_substep;


extern PropertyRNA &rna_UndoStack_rna_properties;
extern PropertyRNA &rna_UndoStack_rna_type;
extern PropertyRNA &rna_UndoStack_steps;
extern PropertyRNA &rna_UndoStack_active_index;
extern PropertyRNA &rna_UndoStack_active;

static PointerRNA UndoStep_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UndoStep_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UndoStep_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UndoStep_rna_properties_get(iter);
    }
}

void UndoStep_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UndoStep_rna_properties_get(iter);
    }
}

void UndoStep_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UndoStep_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UndoStep_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void UndoStep_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_UndoStep_name_get;
    fn(ptr, value);
}

int UndoStep_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_UndoStep_name_length;
    return fn(ptr);
}

int UndoStep_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_UndoStep_type_get;
    return fn(ptr);
}

bool UndoStep_is_substep_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_UndoStep_is_substep_get;
    return fn(ptr);
}

static PointerRNA UndoStack_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UndoStack_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UndoStack_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UndoStack_rna_properties_get(iter);
    }
}

void UndoStack_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UndoStack_rna_properties_get(iter);
    }
}

void UndoStack_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UndoStack_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UndoStack_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int UndoStack_steps_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_UndoStack_steps_length;
    return fn(ptr);
}

static PointerRNA UndoStack_steps_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_UndoStack_steps_get;
    return fn(iter);
}

void UndoStack_steps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UndoStack_steps;

    PropCollectionBeginFunc fn = rna_UndoStack_steps_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UndoStack_steps_get(iter);
    }
}

void UndoStack_steps_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UndoStack_steps_get(iter);
    }
}

void UndoStack_steps_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UndoStack_steps_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    UndoStack_steps_begin(&iter, ptr);

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
        if (found) { *r_ptr = UndoStack_steps_get(&iter); }
    }

    UndoStack_steps_end(&iter);

    return found;
}

int UndoStack_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_UndoStack_active_index_get;
    return fn(ptr);
}

PointerRNA UndoStack_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_UndoStack_active_get;
    return fn(ptr);
}



/* Undo Step */
static CollectionPropertyRNA rna_UndoStep_rna_properties_;
PropertyRNA &rna_UndoStep_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UndoStep_rna_properties_);

static PointerPropertyRNA rna_UndoStep_rna_type_;
PropertyRNA &rna_UndoStep_rna_type = reinterpret_cast<PropertyRNA &>(rna_UndoStep_rna_type_);

static StringPropertyRNA rna_UndoStep_name_;
PropertyRNA &rna_UndoStep_name = reinterpret_cast<PropertyRNA &>(rna_UndoStep_name_);

static EnumPropertyRNA rna_UndoStep_type_;
PropertyRNA &rna_UndoStep_type = reinterpret_cast<PropertyRNA &>(rna_UndoStep_type_);

static BoolPropertyRNA rna_UndoStep_is_substep_;
PropertyRNA &rna_UndoStep_is_substep = reinterpret_cast<PropertyRNA &>(rna_UndoStep_is_substep_);

StructRNA *RNA_UndoStep;
void register_struct_UndoStep(BlenderRNA &brna)
{
	rna_UndoStep_rna_properties_ = {
		{&rna_UndoStep_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UndoStep_rna_properties_begin, UndoStep_rna_properties_next, UndoStep_rna_properties_end, UndoStep_rna_properties_get, nullptr, nullptr, UndoStep_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UndoStep_rna_type_ = {
		{&rna_UndoStep_name, 	&rna_UndoStep_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UndoStep_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_UndoStep_name_ = {
		{&rna_UndoStep_type, 	&rna_UndoStep_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Label of the undo step",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UndoStep_name_get, UndoStep_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_UndoStep_type_ = {
		{&rna_UndoStep_is_substep, 	&rna_UndoStep_name,
		-1, "type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"Type of the undo step",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UndoStep_type_get, nullptr, rna_UndoStep_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};

	rna_UndoStep_is_substep_ = {
		{nullptr, 	&rna_UndoStep_type,
		-1, "is_substep", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Substep",
		"If true, this is a sub-step and should not be shown to the user for undo/redo selection as it is not accessible on its own",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UndoStep_is_substep_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_UndoStep;
	srna->cont.properties = {&rna_UndoStep_rna_properties, &rna_UndoStep_is_substep};
	srna->identifier = "UndoStep";
	srna->flag = 644;
	srna->name = "Undo Step";
	srna->description = "A single step in the undo history";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UndoStep_rna_properties;
};

/* Undo Stack */
static CollectionPropertyRNA rna_UndoStack_rna_properties_;
PropertyRNA &rna_UndoStack_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UndoStack_rna_properties_);

static PointerPropertyRNA rna_UndoStack_rna_type_;
PropertyRNA &rna_UndoStack_rna_type = reinterpret_cast<PropertyRNA &>(rna_UndoStack_rna_type_);

static CollectionPropertyRNA rna_UndoStack_steps_;
PropertyRNA &rna_UndoStack_steps = reinterpret_cast<PropertyRNA &>(rna_UndoStack_steps_);

static IntPropertyRNA rna_UndoStack_active_index_;
PropertyRNA &rna_UndoStack_active_index = reinterpret_cast<PropertyRNA &>(rna_UndoStack_active_index_);

static PointerPropertyRNA rna_UndoStack_active_;
PropertyRNA &rna_UndoStack_active = reinterpret_cast<PropertyRNA &>(rna_UndoStack_active_);

StructRNA *RNA_UndoStack;
void register_struct_UndoStack(BlenderRNA &brna)
{
	rna_UndoStack_rna_properties_ = {
		{&rna_UndoStack_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UndoStack_rna_properties_begin, UndoStack_rna_properties_next, UndoStack_rna_properties_end, UndoStack_rna_properties_get, nullptr, nullptr, UndoStack_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UndoStack_rna_type_ = {
		{&rna_UndoStack_steps, 	&rna_UndoStack_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UndoStack_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_UndoStack_steps_ = {
		{&rna_UndoStack_active_index, 	&rna_UndoStack_rna_type,
		-1, "steps", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Steps",
		"List of undo steps",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UndoStack_steps_begin, UndoStack_steps_next, UndoStack_steps_end, UndoStack_steps_get, UndoStack_steps_length, UndoStack_steps_lookup_int, nullptr, nullptr, RNA_UndoStep
	};

	rna_UndoStack_active_index_ = {
		{&rna_UndoStack_active, 	&rna_UndoStack_steps,
		-1, "active_index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Index",
		"Index of currently active undo step",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UndoStack_active_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_UndoStack_active_ = {
		{nullptr, 	&rna_UndoStack_active_index,
		-1, "active", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"Currently active undo step",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UndoStack_active_get, nullptr, nullptr, nullptr,RNA_UndoStep
	};

	StructRNA *srna = RNA_UndoStack;
	srna->cont.properties = {&rna_UndoStack_rna_properties, &rna_UndoStack_active};
	srna->identifier = "UndoStack";
	srna->flag = 516;
	srna->name = "Undo Stack";
	srna->description = "Read-only access to the undo stack";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UndoStack_rna_properties;
};


}  // namespace blender
