
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

#include "rna_asset.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_AssetTag_rna_properties;
extern PropertyRNA &rna_AssetTag_rna_type;
extern PropertyRNA &rna_AssetTag_name;


extern PropertyRNA &rna_AssetMetaData_rna_properties;
extern PropertyRNA &rna_AssetMetaData_rna_type;
extern PropertyRNA &rna_AssetMetaData_author;
extern PropertyRNA &rna_AssetMetaData_description;
extern PropertyRNA &rna_AssetMetaData_copyright;
extern PropertyRNA &rna_AssetMetaData_license;
extern PropertyRNA &rna_AssetMetaData_tags;
extern PropertyRNA &rna_AssetMetaData_active_tag;
extern PropertyRNA &rna_AssetMetaData_catalog_id;
extern PropertyRNA &rna_AssetMetaData_catalog_simple_name;
extern PropertyRNA &rna_AssetMetaData_use_preferred_import_method;
extern PropertyRNA &rna_AssetMetaData_preferred_import_method;


extern PropertyRNA &rna_AssetTags_rna_properties;
extern PropertyRNA &rna_AssetTags_rna_type;

extern FunctionRNA *rna_AssetTags_new_func;
extern PropertyRNA &rna_AssetTags_new_name;
extern PropertyRNA &rna_AssetTags_new_skip_if_exists;
extern PropertyRNA &rna_AssetTags_new_tag;

extern FunctionRNA *rna_AssetTags_remove_func;
extern PropertyRNA &rna_AssetTags_remove_tag;



extern PropertyRNA &rna_AssetLibraryReference_rna_properties;
extern PropertyRNA &rna_AssetLibraryReference_rna_type;


extern PropertyRNA &rna_AssetLibrary_rna_properties;
extern PropertyRNA &rna_AssetLibrary_rna_type;
extern PropertyRNA &rna_AssetLibrary_type;
extern PropertyRNA &rna_AssetLibrary_is_editable;


extern PropertyRNA &rna_AssetRepresentation_rna_properties;
extern PropertyRNA &rna_AssetRepresentation_rna_type;
extern PropertyRNA &rna_AssetRepresentation_name;
extern PropertyRNA &rna_AssetRepresentation_owner_asset_library;
extern PropertyRNA &rna_AssetRepresentation_metadata;
extern PropertyRNA &rna_AssetRepresentation_id_type;
extern PropertyRNA &rna_AssetRepresentation_local_id;
extern PropertyRNA &rna_AssetRepresentation_full_library_path;
extern PropertyRNA &rna_AssetRepresentation_full_path;
extern PropertyRNA &rna_AssetRepresentation_is_online;


extern PropertyRNA &rna_AssetWeakReference_rna_properties;
extern PropertyRNA &rna_AssetWeakReference_rna_type;
extern PropertyRNA &rna_AssetWeakReference_asset_library_type;
extern PropertyRNA &rna_AssetWeakReference_asset_library_identifier;
extern PropertyRNA &rna_AssetWeakReference_relative_asset_identifier;

static PointerRNA AssetTag_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AssetTag_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AssetTag_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetTag_rna_properties_get(iter);
    }
}

void AssetTag_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AssetTag_rna_properties_get(iter);
    }
}

void AssetTag_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AssetTag_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AssetTag_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void AssetTag_name_get(PointerRNA *ptr, char *value)
{
    AssetTag *data = (AssetTag *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int AssetTag_name_length(PointerRNA *ptr)
{
    AssetTag *data = (AssetTag *)(ptr->data);
    return strlen(data->name);
}

void AssetTag_name_set(PointerRNA *ptr, const char *value)
{
    AssetTag *data = (AssetTag *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA AssetMetaData_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AssetMetaData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AssetMetaData_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetMetaData_rna_properties_get(iter);
    }
}

void AssetMetaData_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AssetMetaData_rna_properties_get(iter);
    }
}

void AssetMetaData_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AssetMetaData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AssetMetaData_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void AssetMetaData_author_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_AssetMetaData_author_get;
    fn(ptr, value);
}

int AssetMetaData_author_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_AssetMetaData_author_length;
    return fn(ptr);
}

void AssetMetaData_author_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_AssetMetaData_author_set;
    fn(ptr, value);
}

void AssetMetaData_description_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_AssetMetaData_description_get;
    fn(ptr, value);
}

int AssetMetaData_description_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_AssetMetaData_description_length;
    return fn(ptr);
}

void AssetMetaData_description_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_AssetMetaData_description_set;
    fn(ptr, value);
}

void AssetMetaData_copyright_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_AssetMetaData_copyright_get;
    fn(ptr, value);
}

int AssetMetaData_copyright_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_AssetMetaData_copyright_length;
    return fn(ptr);
}

void AssetMetaData_copyright_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_AssetMetaData_copyright_set;
    fn(ptr, value);
}

void AssetMetaData_license_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_AssetMetaData_license_get;
    fn(ptr, value);
}

int AssetMetaData_license_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_AssetMetaData_license_length;
    return fn(ptr);
}

void AssetMetaData_license_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_AssetMetaData_license_set;
    fn(ptr, value);
}

static PointerRNA AssetMetaData_tags_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_AssetTag, rna_iterator_listbase_get(iter));
}

void AssetMetaData_tags_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AssetMetaData_tags;

    rna_iterator_listbase_begin(iter, ptr, &data->tags, nullptr);

    if (iter->valid) {
        iter->ptr = AssetMetaData_tags_get(iter);
    }
}

void AssetMetaData_tags_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AssetMetaData_tags_get(iter);
    }
}

void AssetMetaData_tags_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AssetMetaData_tags_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    AssetMetaData_tags_begin(&iter, ptr);

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
        if (found) { *r_ptr = AssetMetaData_tags_get(&iter); }
    }

    AssetMetaData_tags_end(&iter);

    return found;
}

int AssetTag_name_length(PointerRNA *);
void AssetTag_name_get(PointerRNA *, char *);

bool AssetMetaData_tags_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    AssetMetaData_tags_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = AssetTag_name_length(&iter.ptr);
            if (namelen < 1024) {
                AssetTag_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                AssetTag_name_get(&iter.ptr, name);
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
        AssetMetaData_tags_next(&iter);
    }
    AssetMetaData_tags_end(&iter);

    return found;
}

int AssetMetaData_active_tag_get(PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    return (int)(data->active_tag);
}

void AssetMetaData_active_tag_set(PointerRNA *ptr, int value)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_AssetMetaData_active_tag_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->active_tag = (std::remove_reference_t<decltype(data->active_tag)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

void AssetMetaData_catalog_id_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_AssetMetaData_catalog_id_get;
    fn(ptr, value);
}

int AssetMetaData_catalog_id_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_AssetMetaData_catalog_id_length;
    return fn(ptr);
}

void AssetMetaData_catalog_id_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_AssetMetaData_catalog_id_set;
    fn(ptr, value);
}

void AssetMetaData_catalog_simple_name_get(PointerRNA *ptr, char *value)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    BLI_assert(strlen(data->catalog_simple_name) < 64);
    strcpy(value, data->catalog_simple_name);
}

int AssetMetaData_catalog_simple_name_length(PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    return strlen(data->catalog_simple_name);
}

bool AssetMetaData_use_preferred_import_method_get(PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void AssetMetaData_use_preferred_import_method_set(PointerRNA *ptr, bool value)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int AssetMetaData_preferred_import_method_get(PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    return (int)(data->preferred_import_method);
}

void AssetMetaData_preferred_import_method_set(PointerRNA *ptr, int value)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    data->preferred_import_method = (std::remove_reference_t<decltype(data->preferred_import_method)>)value;
}

static PointerRNA AssetTags_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AssetTags_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AssetTags_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetTags_rna_properties_get(iter);
    }
}

void AssetTags_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AssetTags_rna_properties_get(iter);
    }
}

void AssetTags_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AssetTags_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AssetTags_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA AssetLibraryReference_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AssetLibraryReference_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AssetLibraryReference_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetLibraryReference_rna_properties_get(iter);
    }
}

void AssetLibraryReference_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AssetLibraryReference_rna_properties_get(iter);
    }
}

void AssetLibraryReference_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AssetLibraryReference_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AssetLibraryReference_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA AssetLibrary_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AssetLibrary_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AssetLibrary_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetLibrary_rna_properties_get(iter);
    }
}

void AssetLibrary_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AssetLibrary_rna_properties_get(iter);
    }
}

void AssetLibrary_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AssetLibrary_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AssetLibrary_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int AssetLibrary_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_AssetLibrary_type_get;
    return fn(ptr);
}

bool AssetLibrary_is_editable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_AssetLibrary_is_editable_get;
    return fn(ptr);
}

static PointerRNA AssetRepresentation_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AssetRepresentation_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AssetRepresentation_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetRepresentation_rna_properties_get(iter);
    }
}

void AssetRepresentation_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AssetRepresentation_rna_properties_get(iter);
    }
}

void AssetRepresentation_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AssetRepresentation_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AssetRepresentation_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void AssetRepresentation_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_AssetRepresentation_name_get;
    fn(ptr, value);
}

int AssetRepresentation_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_AssetRepresentation_name_length;
    return fn(ptr);
}

PointerRNA AssetRepresentation_owner_asset_library_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AssetRepresentation_owner_asset_library_get;
    return fn(ptr);
}

PointerRNA AssetRepresentation_metadata_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AssetRepresentation_metadata_get;
    return fn(ptr);
}

int AssetRepresentation_id_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_AssetRepresentation_id_type_get;
    return fn(ptr);
}

PointerRNA AssetRepresentation_local_id_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AssetRepresentation_local_id_get;
    return fn(ptr);
}

void AssetRepresentation_full_library_path_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_AssetRepresentation_full_library_path_get;
    fn(ptr, value);
}

int AssetRepresentation_full_library_path_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_AssetRepresentation_full_library_path_length;
    return fn(ptr);
}

void AssetRepresentation_full_path_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_AssetRepresentation_full_path_get;
    fn(ptr, value);
}

int AssetRepresentation_full_path_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_AssetRepresentation_full_path_length;
    return fn(ptr);
}

bool AssetRepresentation_is_online_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_AssetRepresentation_is_online_get;
    return fn(ptr);
}

static PointerRNA AssetWeakReference_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AssetWeakReference_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AssetWeakReference_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetWeakReference_rna_properties_get(iter);
    }
}

void AssetWeakReference_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AssetWeakReference_rna_properties_get(iter);
    }
}

void AssetWeakReference_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AssetWeakReference_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AssetWeakReference_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int AssetWeakReference_asset_library_type_get(PointerRNA *ptr)
{
    AssetWeakReference *data = (AssetWeakReference *)(ptr->data);
    return (int)(data->asset_library_type);
}

void AssetWeakReference_asset_library_identifier_get(PointerRNA *ptr, char *value)
{
    AssetWeakReference *data = (AssetWeakReference *)(ptr->data);
    if (data->asset_library_identifier == nullptr) {
        *value = '\0';
        return;
    }
    strcpy(value, data->asset_library_identifier);
}

int AssetWeakReference_asset_library_identifier_length(PointerRNA *ptr)
{
    AssetWeakReference *data = (AssetWeakReference *)(ptr->data);
    return (data->asset_library_identifier == nullptr) ? 0 : strlen(data->asset_library_identifier);
}

void AssetWeakReference_relative_asset_identifier_get(PointerRNA *ptr, char *value)
{
    AssetWeakReference *data = (AssetWeakReference *)(ptr->data);
    if (data->relative_asset_identifier == nullptr) {
        *value = '\0';
        return;
    }
    strcpy(value, data->relative_asset_identifier);
}

int AssetWeakReference_relative_asset_identifier_length(PointerRNA *ptr)
{
    AssetWeakReference *data = (AssetWeakReference *)(ptr->data);
    return (data->relative_asset_identifier == nullptr) ? 0 : strlen(data->relative_asset_identifier);
}



AssetTag *AssetTags_new_func(ID *_selfid, AssetMetaData *_self, ReportList *reports, const char * name, bool skip_if_exists)
{
	return rna_AssetMetaData_tag_new(_selfid, _self, reports, name, skip_if_exists);
}

static void AssetTags_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	AssetMetaData *_self;
	const char * name;
	bool skip_if_exists;
	AssetTag *tag;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (AssetMetaData *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	skip_if_exists = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	tag = rna_AssetMetaData_tag_new(_selfid, _self, reports, name, skip_if_exists);
	*((AssetTag **)_retdata) = tag;
}

void AssetTags_remove_func(ID *_selfid, AssetMetaData *_self, ReportList *reports, PointerRNA *tag)
{
	rna_AssetMetaData_tag_remove(_selfid, _self, reports, tag);
}

static void AssetTags_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	AssetMetaData *_self;
	PointerRNA *tag;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (AssetMetaData *)_ptr->data;
	_data = (char *)_parms->data;
	tag = *((PointerRNA **)_data);
	
	rna_AssetMetaData_tag_remove(_selfid, _self, reports, tag);
}

/* Repeated prototypes to detect errors */

AssetTag *rna_AssetMetaData_tag_new(ID *_selfid, AssetMetaData *_self, ReportList *reports, const char * name, bool skip_if_exists);
void rna_AssetMetaData_tag_remove(ID *_selfid, AssetMetaData *_self, ReportList *reports, PointerRNA *tag);





/* Asset Tag */
static CollectionPropertyRNA rna_AssetTag_rna_properties_;
PropertyRNA &rna_AssetTag_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AssetTag_rna_properties_);

static PointerPropertyRNA rna_AssetTag_rna_type_;
PropertyRNA &rna_AssetTag_rna_type = reinterpret_cast<PropertyRNA &>(rna_AssetTag_rna_type_);

static StringPropertyRNA rna_AssetTag_name_;
PropertyRNA &rna_AssetTag_name = reinterpret_cast<PropertyRNA &>(rna_AssetTag_name_);

StructRNA *RNA_AssetTag;
void register_struct_AssetTag(BlenderRNA &brna)
{
	rna_AssetTag_rna_properties_ = {
		{&rna_AssetTag_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetTag_rna_properties_begin, AssetTag_rna_properties_next, AssetTag_rna_properties_end, AssetTag_rna_properties_get, nullptr, nullptr, AssetTag_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AssetTag_rna_type_ = {
		{&rna_AssetTag_name, 	&rna_AssetTag_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetTag_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AssetTag_name_ = {
		{nullptr, 	&rna_AssetTag_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"The identifier that makes up this tag",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, rna_AssetTag_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetTag_name_get, AssetTag_name_length, AssetTag_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	StructRNA *srna = RNA_AssetTag;
	srna->cont.properties = {&rna_AssetTag_rna_properties, &rna_AssetTag_name};
	srna->identifier = "AssetTag";
	srna->flag = 516;
	srna->name = "Asset Tag";
	srna->description = "User defined tag (name token)";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_AssetTag_name;
	srna->iteratorproperty = &rna_AssetTag_rna_properties;
	srna->path = rna_AssetTag_path;
};

/* Asset Data */
static CollectionPropertyRNA rna_AssetMetaData_rna_properties_;
PropertyRNA &rna_AssetMetaData_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_rna_properties_);

static PointerPropertyRNA rna_AssetMetaData_rna_type_;
PropertyRNA &rna_AssetMetaData_rna_type = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_rna_type_);

static StringPropertyRNA rna_AssetMetaData_author_;
PropertyRNA &rna_AssetMetaData_author = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_author_);

static StringPropertyRNA rna_AssetMetaData_description_;
PropertyRNA &rna_AssetMetaData_description = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_description_);

static StringPropertyRNA rna_AssetMetaData_copyright_;
PropertyRNA &rna_AssetMetaData_copyright = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_copyright_);

static StringPropertyRNA rna_AssetMetaData_license_;
PropertyRNA &rna_AssetMetaData_license = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_license_);

static CollectionPropertyRNA rna_AssetMetaData_tags_;
PropertyRNA &rna_AssetMetaData_tags = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_tags_);

static IntPropertyRNA rna_AssetMetaData_active_tag_;
PropertyRNA &rna_AssetMetaData_active_tag = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_active_tag_);

static StringPropertyRNA rna_AssetMetaData_catalog_id_;
PropertyRNA &rna_AssetMetaData_catalog_id = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_catalog_id_);

static StringPropertyRNA rna_AssetMetaData_catalog_simple_name_;
PropertyRNA &rna_AssetMetaData_catalog_simple_name = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_catalog_simple_name_);

static BoolPropertyRNA rna_AssetMetaData_use_preferred_import_method_;
PropertyRNA &rna_AssetMetaData_use_preferred_import_method = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_use_preferred_import_method_);

static EnumPropertyRNA rna_AssetMetaData_preferred_import_method_;
PropertyRNA &rna_AssetMetaData_preferred_import_method = reinterpret_cast<PropertyRNA &>(rna_AssetMetaData_preferred_import_method_);

StructRNA *RNA_AssetMetaData;
void register_struct_AssetMetaData(BlenderRNA &brna)
{
	rna_AssetMetaData_rna_properties_ = {
		{&rna_AssetMetaData_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetMetaData_rna_properties_begin, AssetMetaData_rna_properties_next, AssetMetaData_rna_properties_end, AssetMetaData_rna_properties_get, nullptr, nullptr, AssetMetaData_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AssetMetaData_rna_type_ = {
		{&rna_AssetMetaData_author, 	&rna_AssetMetaData_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetMetaData_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AssetMetaData_author_ = {
		{&rna_AssetMetaData_description, 	&rna_AssetMetaData_rna_type,
		-1, "author", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Author",
		"Name of the creator of the asset",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_AssetMetaData_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetMetaData_author_get, AssetMetaData_author_length, AssetMetaData_author_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_AssetMetaData_description_ = {
		{&rna_AssetMetaData_copyright, 	&rna_AssetMetaData_author,
		-1, "description", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Description",
		"A description of the asset to be displayed for the user",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_AssetMetaData_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetMetaData_description_get, AssetMetaData_description_length, AssetMetaData_description_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_AssetMetaData_copyright_ = {
		{&rna_AssetMetaData_license, 	&rna_AssetMetaData_description,
		-1, "copyright", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Copyright",
		"Copyright notice for this asset. An empty copyright notice does not necessarily indicate that this is copyright-free. Contact the author if any clarification is needed.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_AssetMetaData_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetMetaData_copyright_get, AssetMetaData_copyright_length, AssetMetaData_copyright_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_AssetMetaData_license_ = {
		{&rna_AssetMetaData_tags, 	&rna_AssetMetaData_copyright,
		-1, "license", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "License",
		"The type of license this asset is distributed under. An empty license name does not necessarily indicate that this is free of licensing terms. Contact the author if any clarification is needed.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_AssetMetaData_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetMetaData_license_get, AssetMetaData_license_length, AssetMetaData_license_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_AssetMetaData_tags_ = {
		{&rna_AssetMetaData_active_tag, 	&rna_AssetMetaData_license,
		-1, "tags", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tags",
		"Custom tags (name tokens) for the asset, used for filtering and general asset management",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_AssetMetaData_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AssetTags},
		AssetMetaData_tags_begin, AssetMetaData_tags_next, AssetMetaData_tags_end, AssetMetaData_tags_get, nullptr, AssetMetaData_tags_lookup_int, AssetMetaData_tags_lookup_string, nullptr, RNA_AssetTag
	};

	rna_AssetMetaData_active_tag_ = {
		{&rna_AssetMetaData_catalog_id, 	&rna_AssetMetaData_tags,
		-1, "active_tag", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Active Tag",
		"Index of the tag set for editing",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(AssetMetaData, active_tag), RawPropertyType(1), nullptr},
		AssetMetaData_active_tag_get, AssetMetaData_active_tag_set, nullptr, nullptr, rna_AssetMetaData_active_tag_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AssetMetaData_catalog_id_ = {
		{&rna_AssetMetaData_catalog_simple_name, 	&rna_AssetMetaData_active_tag,
		-1, "catalog_id", 4456449, 0, 0, 0, 0, PropertyPathTemplateType(0), "Catalog UUID",
		"Identifier for the asset\'s catalog, used by Blender to look up the asset\'s catalog path. Must be a UUID according to RFC4122.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_AssetMetaData_catalog_id_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetMetaData_catalog_id_get, AssetMetaData_catalog_id_length, AssetMetaData_catalog_id_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_AssetMetaData_catalog_simple_name_ = {
		{&rna_AssetMetaData_use_preferred_import_method, 	&rna_AssetMetaData_catalog_id,
		-1, "catalog_simple_name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Catalog Simple Name",
		"Simple name of the asset\'s catalog, for debugging and data recovery purposes",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetMetaData_catalog_simple_name_get, AssetMetaData_catalog_simple_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_AssetMetaData_use_preferred_import_method_ = {
		{&rna_AssetMetaData_preferred_import_method, 	&rna_AssetMetaData_catalog_simple_name,
		-1, "use_preferred_import_method", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Preferred Import Method",
		"When \"Follow Asset or Preferences\" is selected for the import method in the Asset Browser, use the preferred import method of this asset",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_AssetMetaData_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetMetaData_use_preferred_import_method_get, AssetMetaData_use_preferred_import_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AssetMetaData_preferred_import_method_ = {
		{nullptr, 	&rna_AssetMetaData_use_preferred_import_method,
		-1, "preferred_import_method", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Default Import Method",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_AssetMetaData_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(AssetMetaData, preferred_import_method), RawPropertyType(0), nullptr},
		AssetMetaData_preferred_import_method_get, AssetMetaData_preferred_import_method_set, rna_AssetMetaData_preferred_import_method_itemf, nullptr, nullptr, nullptr, nullptr, rna_AssetMetaData_preferred_import_method_default, rna_enum_asset_import_method_items, 4, 1
	};

	StructRNA *srna = RNA_AssetMetaData;
	srna->cont.properties = {&rna_AssetMetaData_rna_properties, &rna_AssetMetaData_preferred_import_method};
	srna->identifier = "AssetMetaData";
	srna->flag = 644;
	srna->name = "Asset Data";
	srna->description = "Additional data stored for an asset data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AssetMetaData_rna_properties;
	srna->path = rna_AssetMetaData_path;
	srna->idproperties = rna_AssetMetaData_idprops;
};

/* Asset Tags */
static CollectionPropertyRNA rna_AssetTags_rna_properties_;
PropertyRNA &rna_AssetTags_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AssetTags_rna_properties_);

static PointerPropertyRNA rna_AssetTags_rna_type_;
PropertyRNA &rna_AssetTags_rna_type = reinterpret_cast<PropertyRNA &>(rna_AssetTags_rna_type_);

static StringPropertyRNA rna_AssetTags_new_name_;
PropertyRNA &rna_AssetTags_new_name = reinterpret_cast<PropertyRNA &>(rna_AssetTags_new_name_);

static BoolPropertyRNA rna_AssetTags_new_skip_if_exists_;
PropertyRNA &rna_AssetTags_new_skip_if_exists = reinterpret_cast<PropertyRNA &>(rna_AssetTags_new_skip_if_exists_);

static PointerPropertyRNA rna_AssetTags_new_tag_;
PropertyRNA &rna_AssetTags_new_tag = reinterpret_cast<PropertyRNA &>(rna_AssetTags_new_tag_);

FunctionRNA *rna_AssetTags_new_func;
static PointerPropertyRNA rna_AssetTags_remove_tag_;
PropertyRNA &rna_AssetTags_remove_tag = reinterpret_cast<PropertyRNA &>(rna_AssetTags_remove_tag_);

FunctionRNA *rna_AssetTags_remove_func;
StructRNA *RNA_AssetTags;
void register_struct_AssetTags(BlenderRNA &brna)
{
	rna_AssetTags_rna_properties_ = {
		{&rna_AssetTags_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetTags_rna_properties_begin, AssetTags_rna_properties_next, AssetTags_rna_properties_end, AssetTags_rna_properties_get, nullptr, nullptr, AssetTags_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AssetTags_rna_type_ = {
		{nullptr, 	&rna_AssetTags_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetTags_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_AssetTags;
	srna->cont.properties = {&rna_AssetTags_rna_properties, &rna_AssetTags_rna_type};
	srna->identifier = "AssetTags";
	srna->flag = 516;
	srna->name = "Asset Tags";
	srna->description = "Collection of custom asset tags";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AssetTags_rna_properties;
	{
	rna_AssetTags_new_name_ = {
		{&rna_AssetTags_new_skip_if_exists, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_AssetTags_new_skip_if_exists_ = {
		{&rna_AssetTags_new_tag, 	&rna_AssetTags_new_name,
		-1, "skip_if_exists", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Skip if Exists",
		"Do not add a new tag if one of the same type already exists",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_AssetTags_new_tag_ = {
		{nullptr, 	&rna_AssetTags_new_skip_if_exists,
		-1, "tag", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New tag",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AssetTag
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AssetTags_new_name, &rna_AssetTags_new_tag};
		func->identifier = "new";
		func->flag = 2064;
		func->description = "Add a new tag to this asset";
		func->call = AssetTags_new_call;
		func->c_ret = &rna_AssetTags_new_tag;
		rna_AssetTags_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AssetTags_remove_tag_ = {
		{nullptr, 	nullptr,
		-1, "tag", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Removed tag",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AssetTag
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AssetTags_remove_tag, &rna_AssetTags_remove_tag};
		func->identifier = "remove";
		func->flag = 2064;
		func->description = "Remove an existing tag from this asset";
		func->call = AssetTags_remove_call;
		rna_AssetTags_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Asset Library Reference */
static CollectionPropertyRNA rna_AssetLibraryReference_rna_properties_;
PropertyRNA &rna_AssetLibraryReference_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AssetLibraryReference_rna_properties_);

static PointerPropertyRNA rna_AssetLibraryReference_rna_type_;
PropertyRNA &rna_AssetLibraryReference_rna_type = reinterpret_cast<PropertyRNA &>(rna_AssetLibraryReference_rna_type_);

StructRNA *RNA_AssetLibraryReference;
void register_struct_AssetLibraryReference(BlenderRNA &brna)
{
	rna_AssetLibraryReference_rna_properties_ = {
		{&rna_AssetLibraryReference_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetLibraryReference_rna_properties_begin, AssetLibraryReference_rna_properties_next, AssetLibraryReference_rna_properties_end, AssetLibraryReference_rna_properties_get, nullptr, nullptr, AssetLibraryReference_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AssetLibraryReference_rna_type_ = {
		{nullptr, 	&rna_AssetLibraryReference_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetLibraryReference_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_AssetLibraryReference;
	srna->cont.properties = {&rna_AssetLibraryReference_rna_properties, &rna_AssetLibraryReference_rna_type};
	srna->identifier = "AssetLibraryReference";
	srna->flag = 516;
	srna->name = "Asset Library Reference";
	srna->description = "Identifier to refer to the asset library";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AssetLibraryReference_rna_properties;
};

/* Asset Library */
static CollectionPropertyRNA rna_AssetLibrary_rna_properties_;
PropertyRNA &rna_AssetLibrary_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AssetLibrary_rna_properties_);

static PointerPropertyRNA rna_AssetLibrary_rna_type_;
PropertyRNA &rna_AssetLibrary_rna_type = reinterpret_cast<PropertyRNA &>(rna_AssetLibrary_rna_type_);

static EnumPropertyRNA rna_AssetLibrary_type_;
PropertyRNA &rna_AssetLibrary_type = reinterpret_cast<PropertyRNA &>(rna_AssetLibrary_type_);

static BoolPropertyRNA rna_AssetLibrary_is_editable_;
PropertyRNA &rna_AssetLibrary_is_editable = reinterpret_cast<PropertyRNA &>(rna_AssetLibrary_is_editable_);

StructRNA *RNA_AssetLibrary;
void register_struct_AssetLibrary(BlenderRNA &brna)
{
	rna_AssetLibrary_rna_properties_ = {
		{&rna_AssetLibrary_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetLibrary_rna_properties_begin, AssetLibrary_rna_properties_next, AssetLibrary_rna_properties_end, AssetLibrary_rna_properties_get, nullptr, nullptr, AssetLibrary_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AssetLibrary_rna_type_ = {
		{&rna_AssetLibrary_type, 	&rna_AssetLibrary_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetLibrary_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_AssetLibrary_type_items[6] = {
		{2, "ALL", 0, "All Libraries", "Show assets from all of the listed asset libraries"	},
		{1, "LOCAL", 0, "Current File", "Show the assets currently available in this Blender session"	},
		{3, "ESSENTIALS", 0, "Essentials", "Show basic building blocks and utilities coming with Blender"	},
		{4, "ONLINE_ESSENTIALS", 0, "Online Essentials", "Show additional building blocks and utilities available online"	},
		{100, "CUSTOM", 0, "Custom", "Show assets from the asset libraries configured in the Preferences"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_AssetLibrary_type_ = {
		{&rna_AssetLibrary_is_editable, 	&rna_AssetLibrary_rna_type,
		-1, "type", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Library Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetLibrary_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AssetLibrary_type_items, 5, 2
	};

	rna_AssetLibrary_is_editable_ = {
		{nullptr, 	&rna_AssetLibrary_type,
		-1, "is_editable", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Editable",
		"Assets and catalogs in this library can be edited from the current Blender instance",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetLibrary_is_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_AssetLibrary;
	srna->cont.properties = {&rna_AssetLibrary_rna_properties, &rna_AssetLibrary_is_editable};
	srna->identifier = "AssetLibrary";
	srna->flag = 516;
	srna->name = "Asset Library";
	srna->description = "Container for asset catalogs and assets";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AssetLibrary_rna_properties;
};

/* Asset Representation */
static CollectionPropertyRNA rna_AssetRepresentation_rna_properties_;
PropertyRNA &rna_AssetRepresentation_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AssetRepresentation_rna_properties_);

static PointerPropertyRNA rna_AssetRepresentation_rna_type_;
PropertyRNA &rna_AssetRepresentation_rna_type = reinterpret_cast<PropertyRNA &>(rna_AssetRepresentation_rna_type_);

static StringPropertyRNA rna_AssetRepresentation_name_;
PropertyRNA &rna_AssetRepresentation_name = reinterpret_cast<PropertyRNA &>(rna_AssetRepresentation_name_);

static PointerPropertyRNA rna_AssetRepresentation_owner_asset_library_;
PropertyRNA &rna_AssetRepresentation_owner_asset_library = reinterpret_cast<PropertyRNA &>(rna_AssetRepresentation_owner_asset_library_);

static PointerPropertyRNA rna_AssetRepresentation_metadata_;
PropertyRNA &rna_AssetRepresentation_metadata = reinterpret_cast<PropertyRNA &>(rna_AssetRepresentation_metadata_);

static EnumPropertyRNA rna_AssetRepresentation_id_type_;
PropertyRNA &rna_AssetRepresentation_id_type = reinterpret_cast<PropertyRNA &>(rna_AssetRepresentation_id_type_);

static PointerPropertyRNA rna_AssetRepresentation_local_id_;
PropertyRNA &rna_AssetRepresentation_local_id = reinterpret_cast<PropertyRNA &>(rna_AssetRepresentation_local_id_);

static StringPropertyRNA rna_AssetRepresentation_full_library_path_;
PropertyRNA &rna_AssetRepresentation_full_library_path = reinterpret_cast<PropertyRNA &>(rna_AssetRepresentation_full_library_path_);

static StringPropertyRNA rna_AssetRepresentation_full_path_;
PropertyRNA &rna_AssetRepresentation_full_path = reinterpret_cast<PropertyRNA &>(rna_AssetRepresentation_full_path_);

static BoolPropertyRNA rna_AssetRepresentation_is_online_;
PropertyRNA &rna_AssetRepresentation_is_online = reinterpret_cast<PropertyRNA &>(rna_AssetRepresentation_is_online_);

StructRNA *RNA_AssetRepresentation;
void register_struct_AssetRepresentation(BlenderRNA &brna)
{
	rna_AssetRepresentation_rna_properties_ = {
		{&rna_AssetRepresentation_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetRepresentation_rna_properties_begin, AssetRepresentation_rna_properties_next, AssetRepresentation_rna_properties_end, AssetRepresentation_rna_properties_get, nullptr, nullptr, AssetRepresentation_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AssetRepresentation_rna_type_ = {
		{&rna_AssetRepresentation_name, 	&rna_AssetRepresentation_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetRepresentation_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AssetRepresentation_name_ = {
		{&rna_AssetRepresentation_owner_asset_library, 	&rna_AssetRepresentation_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILENAME) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetRepresentation_name_get, AssetRepresentation_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_AssetRepresentation_owner_asset_library_ = {
		{&rna_AssetRepresentation_metadata, 	&rna_AssetRepresentation_name,
		-1, "owner_asset_library", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Owner Asset Library",
		"The asset library containing this asset",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetRepresentation_owner_asset_library_get, nullptr, nullptr, nullptr,RNA_AssetLibrary
	};

	rna_AssetRepresentation_metadata_ = {
		{&rna_AssetRepresentation_id_type, 	&rna_AssetRepresentation_owner_asset_library,
		-1, "metadata", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Asset Metadata",
		"Additional information about the asset",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetRepresentation_metadata_get, nullptr, nullptr, nullptr,RNA_AssetMetaData
	};

	rna_AssetRepresentation_id_type_ = {
		{&rna_AssetRepresentation_local_id, 	&rna_AssetRepresentation_metadata,
		-1, "id_type", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Data-block Type",
		"The type of the data-block, if the asset represents one (\'NONE\' otherwise)",
		0, "ID",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetRepresentation_id_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_id_type_items, 39, 17217
	};

	rna_AssetRepresentation_local_id_ = {
		{&rna_AssetRepresentation_full_library_path, 	&rna_AssetRepresentation_id_type,
		-1, "local_id", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The local data-block this asset represents; only valid if that is a data-block in this file",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetRepresentation_local_id_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_AssetRepresentation_full_library_path_ = {
		{&rna_AssetRepresentation_full_path, 	&rna_AssetRepresentation_local_id,
		-1, "full_library_path", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Full Library Path",
		"Absolute path to the .blend file containing this asset",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILENAME) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetRepresentation_full_library_path_get, AssetRepresentation_full_library_path_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_AssetRepresentation_full_path_ = {
		{&rna_AssetRepresentation_is_online, 	&rna_AssetRepresentation_full_library_path,
		-1, "full_path", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Full Path",
		"Absolute path to the .blend file containing this asset extended with the path of the asset inside the file",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILENAME) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetRepresentation_full_path_get, AssetRepresentation_full_path_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_AssetRepresentation_is_online_ = {
		{nullptr, 	&rna_AssetRepresentation_full_path,
		-1, "is_online", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Online",
		"True if this asset is accessed via internet, not stored on disk",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetRepresentation_is_online_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_AssetRepresentation;
	srna->cont.properties = {&rna_AssetRepresentation_rna_properties, &rna_AssetRepresentation_is_online};
	srna->identifier = "AssetRepresentation";
	srna->flag = 516;
	srna->name = "Asset Representation";
	srna->description = "Information about an entity that makes it possible for the asset system to deal with the entity as asset";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_AssetRepresentation_name;
	srna->iteratorproperty = &rna_AssetRepresentation_rna_properties;
};

/* Asset Weak Reference */
static CollectionPropertyRNA rna_AssetWeakReference_rna_properties_;
PropertyRNA &rna_AssetWeakReference_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AssetWeakReference_rna_properties_);

static PointerPropertyRNA rna_AssetWeakReference_rna_type_;
PropertyRNA &rna_AssetWeakReference_rna_type = reinterpret_cast<PropertyRNA &>(rna_AssetWeakReference_rna_type_);

static EnumPropertyRNA rna_AssetWeakReference_asset_library_type_;
PropertyRNA &rna_AssetWeakReference_asset_library_type = reinterpret_cast<PropertyRNA &>(rna_AssetWeakReference_asset_library_type_);

static StringPropertyRNA rna_AssetWeakReference_asset_library_identifier_;
PropertyRNA &rna_AssetWeakReference_asset_library_identifier = reinterpret_cast<PropertyRNA &>(rna_AssetWeakReference_asset_library_identifier_);

static StringPropertyRNA rna_AssetWeakReference_relative_asset_identifier_;
PropertyRNA &rna_AssetWeakReference_relative_asset_identifier = reinterpret_cast<PropertyRNA &>(rna_AssetWeakReference_relative_asset_identifier_);

StructRNA *RNA_AssetWeakReference;
void register_struct_AssetWeakReference(BlenderRNA &brna)
{
	rna_AssetWeakReference_rna_properties_ = {
		{&rna_AssetWeakReference_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetWeakReference_rna_properties_begin, AssetWeakReference_rna_properties_next, AssetWeakReference_rna_properties_end, AssetWeakReference_rna_properties_get, nullptr, nullptr, AssetWeakReference_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AssetWeakReference_rna_type_ = {
		{&rna_AssetWeakReference_asset_library_type, 	&rna_AssetWeakReference_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetWeakReference_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_AssetWeakReference_asset_library_type_items[6] = {
		{2, "ALL", 0, "All Libraries", "Show assets from all of the listed asset libraries"	},
		{1, "LOCAL", 0, "Current File", "Show the assets currently available in this Blender session"	},
		{3, "ESSENTIALS", 0, "Essentials", "Show basic building blocks and utilities coming with Blender"	},
		{4, "ONLINE_ESSENTIALS", 0, "Online Essentials", "Show additional building blocks and utilities available online"	},
		{100, "CUSTOM", 0, "Custom", "Show assets from the asset libraries configured in the Preferences"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_AssetWeakReference_asset_library_type_ = {
		{&rna_AssetWeakReference_asset_library_identifier, 	&rna_AssetWeakReference_rna_type,
		-1, "asset_library_type", 0, 0, 0, 4, 0, PropertyPathTemplateType(0), "asset_library_type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(AssetWeakReference, asset_library_type), RawPropertyType(1), nullptr},
		AssetWeakReference_asset_library_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AssetWeakReference_asset_library_type_items, 5, 2
	};

	rna_AssetWeakReference_asset_library_identifier_ = {
		{&rna_AssetWeakReference_relative_asset_identifier, 	&rna_AssetWeakReference_asset_library_type,
		-1, "asset_library_identifier", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "asset_library_identifier",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetWeakReference_asset_library_identifier_get, AssetWeakReference_asset_library_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_AssetWeakReference_relative_asset_identifier_ = {
		{nullptr, 	&rna_AssetWeakReference_asset_library_identifier,
		-1, "relative_asset_identifier", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "relative_asset_identifier",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AssetWeakReference_relative_asset_identifier_get, AssetWeakReference_relative_asset_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_AssetWeakReference;
	srna->cont.properties = {&rna_AssetWeakReference_rna_properties, &rna_AssetWeakReference_relative_asset_identifier};
	srna->identifier = "AssetWeakReference";
	srna->flag = 516;
	srna->name = "Asset Weak Reference";
	srna->description = "Weak reference to some asset";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AssetWeakReference_rna_properties;
};


}  // namespace blender
