
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

#include "rna_ID.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_UnknownType_rna_properties;
extern PropertyRNA &rna_UnknownType_rna_type;


extern PropertyRNA &rna_AnyType_rna_properties;
extern PropertyRNA &rna_AnyType_rna_type;


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



extern PropertyRNA &rna_IDOverrideLibrary_rna_properties;
extern PropertyRNA &rna_IDOverrideLibrary_rna_type;
extern PropertyRNA &rna_IDOverrideLibrary_reference;
extern PropertyRNA &rna_IDOverrideLibrary_hierarchy_root;
extern PropertyRNA &rna_IDOverrideLibrary_is_in_hierarchy;
extern PropertyRNA &rna_IDOverrideLibrary_is_system_override;
extern PropertyRNA &rna_IDOverrideLibrary_properties;

extern FunctionRNA *rna_IDOverrideLibrary_operations_update_func;
extern FunctionRNA *rna_IDOverrideLibrary_reset_func;
extern PropertyRNA &rna_IDOverrideLibrary_reset_do_hierarchy;
extern PropertyRNA &rna_IDOverrideLibrary_reset_set_system_override;

extern FunctionRNA *rna_IDOverrideLibrary_destroy_func;
extern PropertyRNA &rna_IDOverrideLibrary_destroy_do_hierarchy;

extern FunctionRNA *rna_IDOverrideLibrary_resync_func;
extern PropertyRNA &rna_IDOverrideLibrary_resync_success;
extern PropertyRNA &rna_IDOverrideLibrary_resync_scene;
extern PropertyRNA &rna_IDOverrideLibrary_resync_view_layer;
extern PropertyRNA &rna_IDOverrideLibrary_resync_residual_storage;
extern PropertyRNA &rna_IDOverrideLibrary_resync_do_hierarchy_enforce;
extern PropertyRNA &rna_IDOverrideLibrary_resync_do_whole_hierarchy;



extern PropertyRNA &rna_IDOverrideLibraryProperties_rna_properties;
extern PropertyRNA &rna_IDOverrideLibraryProperties_rna_type;

extern FunctionRNA *rna_IDOverrideLibraryProperties_add_func;
extern PropertyRNA &rna_IDOverrideLibraryProperties_add_property;
extern PropertyRNA &rna_IDOverrideLibraryProperties_add_rna_path;

extern FunctionRNA *rna_IDOverrideLibraryProperties_remove_func;
extern PropertyRNA &rna_IDOverrideLibraryProperties_remove_property;



extern PropertyRNA &rna_IDOverrideLibraryProperty_rna_properties;
extern PropertyRNA &rna_IDOverrideLibraryProperty_rna_type;
extern PropertyRNA &rna_IDOverrideLibraryProperty_rna_path;
extern PropertyRNA &rna_IDOverrideLibraryProperty_operations;


extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_rna_properties;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_rna_type;

extern FunctionRNA *rna_IDOverrideLibraryPropertyOperations_add_func;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_operation;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_use_id;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_property;

extern FunctionRNA *rna_IDOverrideLibraryPropertyOperations_remove_func;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperations_remove_operation;



extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_rna_properties;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_rna_type;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_operation;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_flag;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_reference_name;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_local_name;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_reference_id;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_local_id;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_reference_index;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_local_index;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_label;
extern PropertyRNA &rna_IDOverrideLibraryPropertyOperation_tooltip;


extern PropertyRNA &rna_ImagePreview_rna_properties;
extern PropertyRNA &rna_ImagePreview_rna_type;
extern PropertyRNA &rna_ImagePreview_is_image_custom;
extern PropertyRNA &rna_ImagePreview_image_size;
extern PropertyRNA &rna_ImagePreview_image_pixels;
extern PropertyRNA &rna_ImagePreview_image_pixels_float;
extern PropertyRNA &rna_ImagePreview_is_icon_custom;
extern PropertyRNA &rna_ImagePreview_icon_size;
extern PropertyRNA &rna_ImagePreview_icon_pixels;
extern PropertyRNA &rna_ImagePreview_icon_pixels_float;
extern PropertyRNA &rna_ImagePreview_icon_id;

extern FunctionRNA *rna_ImagePreview_reload_func;


extern PropertyRNA &rna_PropertyGroupItem_rna_properties;
extern PropertyRNA &rna_PropertyGroupItem_rna_type;
extern PropertyRNA &rna_PropertyGroupItem_string;
extern PropertyRNA &rna_PropertyGroupItem_int;
extern PropertyRNA &rna_PropertyGroupItem_int_array;
extern PropertyRNA &rna_PropertyGroupItem_float;
extern PropertyRNA &rna_PropertyGroupItem_float_array;
extern PropertyRNA &rna_PropertyGroupItem_double;
extern PropertyRNA &rna_PropertyGroupItem_double_array;
extern PropertyRNA &rna_PropertyGroupItem_bool;
extern PropertyRNA &rna_PropertyGroupItem_bool_array;
extern PropertyRNA &rna_PropertyGroupItem_enum;
extern PropertyRNA &rna_PropertyGroupItem_group;
extern PropertyRNA &rna_PropertyGroupItem_collection;
extern PropertyRNA &rna_PropertyGroupItem_idp_array;
extern PropertyRNA &rna_PropertyGroupItem_id;


extern PropertyRNA &rna_PropertyGroup_rna_properties;
extern PropertyRNA &rna_PropertyGroup_rna_type;
extern PropertyRNA &rna_PropertyGroup_name;

extern FunctionRNA *rna_PropertyGroup_bl_system_properties_get_func;
extern PropertyRNA &rna_PropertyGroup_bl_system_properties_get_do_create;
extern PropertyRNA &rna_PropertyGroup_bl_system_properties_get_system_properties;



extern PropertyRNA &rna_IDMaterials_rna_properties;
extern PropertyRNA &rna_IDMaterials_rna_type;

extern FunctionRNA *rna_IDMaterials_append_func;
extern PropertyRNA &rna_IDMaterials_append_material;

extern FunctionRNA *rna_IDMaterials_pop_func;
extern PropertyRNA &rna_IDMaterials_pop_index;
extern PropertyRNA &rna_IDMaterials_pop_material;

extern FunctionRNA *rna_IDMaterials_clear_func;


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

extern PropertyRNA &rna_Library_filepath;
extern PropertyRNA &rna_Library_parent;
extern PropertyRNA &rna_Library_packed_file;
extern PropertyRNA &rna_Library_version;
extern PropertyRNA &rna_Library_needs_liboverride_resync;
extern PropertyRNA &rna_Library_is_editable;
extern PropertyRNA &rna_Library_is_archive;
extern PropertyRNA &rna_Library_archive_parent_library;
extern PropertyRNA &rna_Library_archive_libraries;

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


extern FunctionRNA *rna_Library_reload_func;


extern PropertyRNA &rna_LibraryWeakReference_rna_properties;
extern PropertyRNA &rna_LibraryWeakReference_rna_type;
extern PropertyRNA &rna_LibraryWeakReference_filepath;
extern PropertyRNA &rna_LibraryWeakReference_id_name;


extern PropertyRNA &rna_IDPropertyWrapPtr_rna_properties;
extern PropertyRNA &rna_IDPropertyWrapPtr_rna_type;

extern FunctionRNA *rna_IDPropertyWrapPtr_bl_system_properties_get_func;
extern PropertyRNA &rna_IDPropertyWrapPtr_bl_system_properties_get_do_create;
extern PropertyRNA &rna_IDPropertyWrapPtr_bl_system_properties_get_system_properties;


static PointerRNA UnknownType_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UnknownType_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UnknownType_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UnknownType_rna_properties_get(iter);
    }
}

void UnknownType_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UnknownType_rna_properties_get(iter);
    }
}

void UnknownType_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UnknownType_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UnknownType_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA AnyType_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnyType_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnyType_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnyType_rna_properties_get(iter);
    }
}

void AnyType_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnyType_rna_properties_get(iter);
    }
}

void AnyType_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnyType_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnyType_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA ID_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ID_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ID_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ID_rna_properties_get(iter);
    }
}

void ID_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ID_rna_properties_get(iter);
    }
}

void ID_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ID_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ID_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ID_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ID_name_get;
    fn(ptr, value);
}

int ID_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ID_name_length;
    return fn(ptr);
}

void ID_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ID_name_set;
    fn(ptr, value);
}

void ID_name_full_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ID_name_full_get;
    fn(ptr, value);
}

int ID_name_full_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ID_name_full_length;
    return fn(ptr);
}

int ID_id_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ID_type_get;
    return fn(ptr);
}

int ID_session_uid_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (int)(data->session_uid);
}

bool ID_is_evaluated_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ID_is_evaluated_get;
    return fn(ptr);
}

PointerRNA ID_original_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ID_original_get;
    return fn(ptr);
}

int ID_users_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (int)(data->us);
}

bool ID_use_fake_user_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void ID_use_fake_user_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ID_fake_user_set;
    fn(ptr, value);
}

bool ID_use_extra_user_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return ((uint64_t(data->tag) & 16) != 0);
}

void ID_use_extra_user_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ID_extra_user_set;
    fn(ptr, value);
}

bool ID_is_embedded_data_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

bool ID_is_linked_packed_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return ((uint64_t(data->flag) & -32768) != 0);
}

bool ID_is_missing_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return ((uint64_t(data->tag) & 8) != 0);
}

bool ID_is_runtime_data_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ID_is_runtime_get;
    return fn(ptr);
}

void ID_is_runtime_data_set(PointerRNA *ptr, bool value)
{
    ID *data = (ID *)(ptr->data);
    if (value) { data->tag = std::remove_reference_t<decltype(data->tag)>(uint64_t(data->tag) | 4); }
    else { data->tag = std::remove_reference_t<decltype(data->tag)>(uint64_t(data->tag) & ~uint64_t(4)); }
}

bool ID_is_editable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ID_is_editable_get;
    return fn(ptr);
}

bool ID_tag_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return ((uint64_t(data->tag) & INT_MIN) != 0);
}

void ID_tag_set(PointerRNA *ptr, bool value)
{
    ID *data = (ID *)(ptr->data);
    if (value) { data->tag = std::remove_reference_t<decltype(data->tag)>(uint64_t(data->tag) | INT_MIN); }
    else { data->tag = std::remove_reference_t<decltype(data->tag)>(uint64_t(data->tag) & ~uint64_t(INT_MIN)); }
}

bool ID_is_library_indirect_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return ((uint64_t(data->tag) & 2) != 0);
}

PointerRNA ID_library_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Library, data->lib);
}

PointerRNA ID_library_weak_reference_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_LibraryWeakReference, data->library_weak_reference);
}

PointerRNA ID_asset_data_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AssetMetaData, data->asset_data);
}

void ID_asset_data_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_ID_asset_data_set;
    fn(ptr, value, reports);
}

PointerRNA ID_override_library_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_IDOverrideLibrary, data->override_library);
}

PointerRNA ID_preview_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_IDPreview_get;
    return fn(ptr);
}

static PointerRNA IDOverrideLibrary_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void IDOverrideLibrary_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IDOverrideLibrary_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_rna_properties_get(iter);
    }
}

void IDOverrideLibrary_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_rna_properties_get(iter);
    }
}

void IDOverrideLibrary_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IDOverrideLibrary_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA IDOverrideLibrary_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA IDOverrideLibrary_reference_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ID, data->reference);
}

PointerRNA IDOverrideLibrary_hierarchy_root_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ID, data->hierarchy_root);
}

bool IDOverrideLibrary_is_in_hierarchy_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void IDOverrideLibrary_is_in_hierarchy_set(PointerRNA *ptr, bool value)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool IDOverrideLibrary_is_system_override_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void IDOverrideLibrary_is_system_override_set(PointerRNA *ptr, bool value)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

static PointerRNA IDOverrideLibrary_properties_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_IDOverrideLibraryProperty, rna_iterator_listbase_get(iter));
}

void IDOverrideLibrary_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IDOverrideLibrary_properties;

    rna_iterator_listbase_begin(iter, ptr, &data->properties, nullptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_properties_get(iter);
    }
}

void IDOverrideLibrary_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_properties_get(iter);
    }
}

void IDOverrideLibrary_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IDOverrideLibrary_properties_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    IDOverrideLibrary_properties_begin(&iter, ptr);

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
        if (found) { *r_ptr = IDOverrideLibrary_properties_get(&iter); }
    }

    IDOverrideLibrary_properties_end(&iter);

    return found;
}

static PointerRNA IDOverrideLibraryProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void IDOverrideLibraryProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IDOverrideLibraryProperties_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperties_rna_properties_get(iter);
    }
}

void IDOverrideLibraryProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperties_rna_properties_get(iter);
    }
}

void IDOverrideLibraryProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IDOverrideLibraryProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA IDOverrideLibraryProperties_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA IDOverrideLibraryProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void IDOverrideLibraryProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IDOverrideLibraryProperty_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_rna_properties_get(iter);
    }
}

void IDOverrideLibraryProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_rna_properties_get(iter);
    }
}

void IDOverrideLibraryProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IDOverrideLibraryProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA IDOverrideLibraryProperty_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void IDOverrideLibraryProperty_rna_path_get(PointerRNA *ptr, char *value)
{
    IDOverrideLibraryProperty *data = (IDOverrideLibraryProperty *)(ptr->data);
    if (data->rna_path == nullptr) {
        *value = '\0';
        return;
    }
    strcpy(value, data->rna_path);
}

int IDOverrideLibraryProperty_rna_path_length(PointerRNA *ptr)
{
    IDOverrideLibraryProperty *data = (IDOverrideLibraryProperty *)(ptr->data);
    return (data->rna_path == nullptr) ? 0 : strlen(data->rna_path);
}

static PointerRNA IDOverrideLibraryProperty_operations_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_IDOverrideLibraryPropertyOperation, rna_iterator_listbase_get(iter));
}

void IDOverrideLibraryProperty_operations_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    IDOverrideLibraryProperty *data = (IDOverrideLibraryProperty *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IDOverrideLibraryProperty_operations;

    rna_iterator_listbase_begin(iter, ptr, &data->operations, nullptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_operations_get(iter);
    }
}

void IDOverrideLibraryProperty_operations_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_operations_get(iter);
    }
}

void IDOverrideLibraryProperty_operations_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IDOverrideLibraryProperty_operations_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    IDOverrideLibraryProperty_operations_begin(&iter, ptr);

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
        if (found) { *r_ptr = IDOverrideLibraryProperty_operations_get(&iter); }
    }

    IDOverrideLibraryProperty_operations_end(&iter);

    return found;
}

static PointerRNA IDOverrideLibraryPropertyOperations_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void IDOverrideLibraryPropertyOperations_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IDOverrideLibraryPropertyOperations_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperations_rna_properties_get(iter);
    }
}

void IDOverrideLibraryPropertyOperations_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperations_rna_properties_get(iter);
    }
}

void IDOverrideLibraryPropertyOperations_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IDOverrideLibraryPropertyOperations_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA IDOverrideLibraryPropertyOperations_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA IDOverrideLibraryPropertyOperation_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void IDOverrideLibraryPropertyOperation_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IDOverrideLibraryPropertyOperation_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperation_rna_properties_get(iter);
    }
}

void IDOverrideLibraryPropertyOperation_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperation_rna_properties_get(iter);
    }
}

void IDOverrideLibraryPropertyOperation_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IDOverrideLibraryPropertyOperation_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA IDOverrideLibraryPropertyOperation_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int IDOverrideLibraryPropertyOperation_operation_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->operation);
}

int IDOverrideLibraryPropertyOperation_flag_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->flag);
}

void IDOverrideLibraryPropertyOperation_subitem_reference_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ID_override_library_property_operation_refname_get;
    fn(ptr, value);
}

int IDOverrideLibraryPropertyOperation_subitem_reference_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ID_override_library_property_operation_refname_length;
    return fn(ptr);
}

void IDOverrideLibraryPropertyOperation_subitem_local_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ID_override_library_property_operation_locname_get;
    fn(ptr, value);
}

int IDOverrideLibraryPropertyOperation_subitem_local_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ID_override_library_property_operation_locname_length;
    return fn(ptr);
}

PointerRNA IDOverrideLibraryPropertyOperation_subitem_reference_id_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ID, data->subitem_reference_id);
}

PointerRNA IDOverrideLibraryPropertyOperation_subitem_local_id_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ID, data->subitem_local_id);
}

int IDOverrideLibraryPropertyOperation_subitem_reference_index_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->subitem_reference_index);
}

int IDOverrideLibraryPropertyOperation_subitem_local_index_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->subitem_local_index);
}

void IDOverrideLibraryPropertyOperation_label_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ID_override_library_property_operation_label_get;
    fn(ptr, value);
}

int IDOverrideLibraryPropertyOperation_label_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ID_override_library_property_operation_label_length;
    return fn(ptr);
}

void IDOverrideLibraryPropertyOperation_tooltip_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ID_override_library_property_operation_tooltip_get;
    fn(ptr, value);
}

int IDOverrideLibraryPropertyOperation_tooltip_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ID_override_library_property_operation_tooltip_length;
    return fn(ptr);
}

static PointerRNA ImagePreview_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ImagePreview_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ImagePreview_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ImagePreview_rna_properties_get(iter);
    }
}

void ImagePreview_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ImagePreview_rna_properties_get(iter);
    }
}

void ImagePreview_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ImagePreview_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ImagePreview_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool ImagePreview_is_image_custom_get(PointerRNA *ptr)
{
    PreviewImage *data = (PreviewImage *)(ptr->data);
    return ((uint64_t(data->flag[ICON_SIZE_PREVIEW]) & 2) != 0);
}

void ImagePreview_is_image_custom_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ImagePreview_is_image_custom_set;
    fn(ptr, value);
}

void ImagePreview_image_size_get(PointerRNA *ptr, int values[2])
{
    PropIntArrayGetFunc fn = rna_ImagePreview_image_size_get;
    fn(ptr, values);
}

void ImagePreview_image_size_set(PointerRNA *ptr, const int values[2])
{
    PropIntArraySetFunc fn = rna_ImagePreview_image_size_set;
    fn(ptr, values);
}

void ImagePreview_image_pixels_get(PointerRNA *ptr, int values[])
{
    PropIntArrayGetFunc fn = rna_ImagePreview_image_pixels_get;
    fn(ptr, values);
}

void ImagePreview_image_pixels_set(PointerRNA *ptr, const int values[])
{
    PropIntArraySetFunc fn = rna_ImagePreview_image_pixels_set;
    fn(ptr, values);
}

void ImagePreview_image_pixels_float_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_ImagePreview_image_pixels_float_get;
    fn(ptr, values);
}

void ImagePreview_image_pixels_float_set(PointerRNA *ptr, const float values[])
{
    PropFloatArraySetFunc fn = rna_ImagePreview_image_pixels_float_set;
    fn(ptr, values);
}

bool ImagePreview_is_icon_custom_get(PointerRNA *ptr)
{
    PreviewImage *data = (PreviewImage *)(ptr->data);
    return ((uint64_t(data->flag[ICON_SIZE_ICON]) & 2) != 0);
}

void ImagePreview_is_icon_custom_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ImagePreview_is_icon_custom_set;
    fn(ptr, value);
}

void ImagePreview_icon_size_get(PointerRNA *ptr, int values[2])
{
    PropIntArrayGetFunc fn = rna_ImagePreview_icon_size_get;
    fn(ptr, values);
}

void ImagePreview_icon_size_set(PointerRNA *ptr, const int values[2])
{
    PropIntArraySetFunc fn = rna_ImagePreview_icon_size_set;
    fn(ptr, values);
}

void ImagePreview_icon_pixels_get(PointerRNA *ptr, int values[])
{
    PropIntArrayGetFunc fn = rna_ImagePreview_icon_pixels_get;
    fn(ptr, values);
}

void ImagePreview_icon_pixels_set(PointerRNA *ptr, const int values[])
{
    PropIntArraySetFunc fn = rna_ImagePreview_icon_pixels_set;
    fn(ptr, values);
}

void ImagePreview_icon_pixels_float_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_ImagePreview_icon_pixels_float_get;
    fn(ptr, values);
}

void ImagePreview_icon_pixels_float_set(PointerRNA *ptr, const float values[])
{
    PropFloatArraySetFunc fn = rna_ImagePreview_icon_pixels_float_set;
    fn(ptr, values);
}

int ImagePreview_icon_id_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ImagePreview_icon_id_get;
    return fn(ptr);
}

static PointerRNA PropertyGroupItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PropertyGroupItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PropertyGroupItem_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_rna_properties_get(iter);
    }
}

void PropertyGroupItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_rna_properties_get(iter);
    }
}

void PropertyGroupItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PropertyGroupItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PropertyGroupItem_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int PropertyGroupItem_idp_array_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_IDPArray_length;
    return fn(ptr);
}

static PointerRNA PropertyGroupItem_idp_array_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_PropertyGroup, rna_iterator_array_get(iter));
}

void PropertyGroupItem_idp_array_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PropertyGroupItem_idp_array;

    PropCollectionBeginFunc fn = rna_IDPArray_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_idp_array_get(iter);
    }
}

void PropertyGroupItem_idp_array_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_idp_array_get(iter);
    }
}

void PropertyGroupItem_idp_array_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

static PointerRNA PropertyGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PropertyGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PropertyGroup_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PropertyGroup_rna_properties_get(iter);
    }
}

void PropertyGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PropertyGroup_rna_properties_get(iter);
    }
}

void PropertyGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PropertyGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PropertyGroup_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA IDMaterials_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void IDMaterials_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IDMaterials_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDMaterials_rna_properties_get(iter);
    }
}

void IDMaterials_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IDMaterials_rna_properties_get(iter);
    }
}

void IDMaterials_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IDMaterials_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA IDMaterials_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Library_filepath_get(PointerRNA *ptr, char *value)
{
    Library *data = (Library *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

int Library_filepath_length(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return strlen(data->filepath);
}

void Library_filepath_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Library_filepath_set;
    fn(ptr, value);
}

PointerRNA Library_parent_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Library_parent_get;
    return fn(ptr);
}

PointerRNA Library_packed_file_get(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PackedFile, data->packedfile);
}

void Library_version_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Library_version_get;
    fn(ptr, values);
}

bool Library_needs_liboverride_resync_get(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return ((uint64_t(data->runtime->tag) & 1) != 0);
}

void Library_needs_liboverride_resync_set(PointerRNA *ptr, bool value)
{
    Library *data = (Library *)(ptr->data);
    if (value) { data->runtime->tag = std::remove_reference_t<decltype(data->runtime->tag)>(uint64_t(data->runtime->tag) | 1); }
    else { data->runtime->tag = std::remove_reference_t<decltype(data->runtime->tag)>(uint64_t(data->runtime->tag) & ~uint64_t(1)); }
}

bool Library_is_editable_get(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return ((uint64_t(data->runtime->tag) & 2) != 0);
}

bool Library_is_archive_get(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

PointerRNA Library_archive_parent_library_get(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Library, data->archive_parent_library);
}

int Library_archive_libraries_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Library_archive_libraries_length;
    return fn(ptr);
}

static PointerRNA Library_archive_libraries_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Library_archive_libraries_get;
    return fn(iter);
}

void Library_archive_libraries_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Library_archive_libraries;

    PropCollectionBeginFunc fn = rna_Library_archive_libraries_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Library_archive_libraries_get(iter);
    }
}

void Library_archive_libraries_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_Library_archive_libraries_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Library_archive_libraries_get(iter);
    }
}

void Library_archive_libraries_end(CollectionPropertyIterator *iter)
{
}

bool Library_archive_libraries_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Library_archive_libraries_lookupint;
    return fn(ptr, index, r_ptr);
}

static PointerRNA LibraryWeakReference_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void LibraryWeakReference_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_LibraryWeakReference_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = LibraryWeakReference_rna_properties_get(iter);
    }
}

void LibraryWeakReference_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = LibraryWeakReference_rna_properties_get(iter);
    }
}

void LibraryWeakReference_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool LibraryWeakReference_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA LibraryWeakReference_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void LibraryWeakReference_filepath_get(PointerRNA *ptr, char *value)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    BLI_assert(strlen(data->library_filepath) < 1024);
    strcpy(value, data->library_filepath);
}

int LibraryWeakReference_filepath_length(PointerRNA *ptr)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    return strlen(data->library_filepath);
}

void LibraryWeakReference_filepath_set(PointerRNA *ptr, const char *value)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    BLI_strncpy(data->library_filepath, value, 1024);
}

void LibraryWeakReference_id_name_get(PointerRNA *ptr, char *value)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    BLI_assert(strlen(data->library_id_name) < 258);
    strcpy(value, data->library_id_name);
}

int LibraryWeakReference_id_name_length(PointerRNA *ptr)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    return strlen(data->library_id_name);
}

void LibraryWeakReference_id_name_set(PointerRNA *ptr, const char *value)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    BLI_strncpy(data->library_id_name, value, 258);
}

static PointerRNA IDPropertyWrapPtr_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void IDPropertyWrapPtr_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IDPropertyWrapPtr_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDPropertyWrapPtr_rna_properties_get(iter);
    }
}

void IDPropertyWrapPtr_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IDPropertyWrapPtr_rna_properties_get(iter);
    }
}

void IDPropertyWrapPtr_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IDPropertyWrapPtr_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA IDPropertyWrapPtr_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}



IDPropertyGroup *ID_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void ID_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	bool do_create;
	IDPropertyGroup *system_properties;
	char *_data, *_retdata;
	
	_self = *_ptr;
	_data = (char *)_parms->data;
	do_create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	system_properties = rna_struct_system_properties_get_func(_self, do_create);
	*((IDPropertyGroup **)_retdata) = system_properties;
}

int ID_rename_func(ID *_self, Main *bmain, const char * name, int mode)
{
	return rna_ID_rename(_self, bmain, name, mode);
}

static void ID_rename_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	const char * name;
	int mode;
	int id_rename_result;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	mode = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	id_rename_result = rna_ID_rename(_self, CTX_data_main(C), name, mode);
	*((int *)_retdata) = id_rename_result;
}

ID *ID_evaluated_get_func(ID *_self, Depsgraph *depsgraph)
{
	return rna_ID_evaluated_get(_self, depsgraph);
}

static void ID_evaluated_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	Depsgraph *depsgraph;
	ID *id;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((Depsgraph **)_data);
	_data += 8;
	_retdata = _data;
	
	id = rna_ID_evaluated_get(_self, depsgraph);
	*((ID **)_retdata) = id;
}

ID *ID_copy_func(ID *_self, Main *bmain)
{
	return rna_ID_copy(_self, bmain);
}

static void ID_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	ID *id;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	id = rna_ID_copy(_self, CTX_data_main(C));
	*((ID **)_retdata) = id;
}

void ID_asset_mark_func(ID *_self)
{
	rna_ID_asset_mark(_self);
}

static void ID_asset_mark_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	_self = (ID *)_ptr->data;
	
	rna_ID_asset_mark(_self);
}

void ID_asset_clear_func(ID *_self)
{
	rna_ID_asset_clear(_self);
}

static void ID_asset_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	_self = (ID *)_ptr->data;
	
	rna_ID_asset_clear(_self);
}

void ID_asset_generate_preview_func(ID *_self, bContext *C)
{
	rna_ID_asset_generate_preview(_self, C);
}

static void ID_asset_generate_preview_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	_self = (ID *)_ptr->data;
	
	rna_ID_asset_generate_preview(_self, C);
}

ID *ID_override_create_func(ID *_self, Main *bmain, bool remap_local_usages)
{
	return rna_ID_override_create(_self, bmain, remap_local_usages);
}

static void ID_override_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	ID *id;
	bool remap_local_usages;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	remap_local_usages = *((bool *)_data);
	
	id = rna_ID_override_create(_self, CTX_data_main(C), remap_local_usages);
	*((ID **)_retdata) = id;
}

ID *ID_override_hierarchy_create_func(ID *_self, Main *bmain, Scene *scene, ViewLayer *view_layer, ID *reference, bool do_fully_editable)
{
	return rna_ID_override_hierarchy_create(_self, bmain, scene, view_layer, reference, do_fully_editable);
}

static void ID_override_hierarchy_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	ID *id;
	Scene *scene;
	ViewLayer *view_layer;
	ID *reference;
	bool do_fully_editable;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	scene = *((Scene **)_data);
	_data += 8;
	view_layer = *((ViewLayer **)_data);
	_data += 8;
	reference = *((ID **)_data);
	_data += 8;
	do_fully_editable = *((bool *)_data);
	
	id = rna_ID_override_hierarchy_create(_self, CTX_data_main(C), scene, view_layer, reference, do_fully_editable);
	*((ID **)_retdata) = id;
}

void ID_user_clear_func(ID *_self)
{
	rna_ID_user_clear(_self);
}

static void ID_user_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	_self = (ID *)_ptr->data;
	
	rna_ID_user_clear(_self);
}

void ID_user_remap_func(ID *_self, Main *bmain, ID *new_id)
{
	rna_ID_user_remap(_self, bmain, new_id);
}

static void ID_user_remap_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	ID *new_id;
	char *_data;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	new_id = *((ID **)_data);
	
	rna_ID_user_remap(_self, CTX_data_main(C), new_id);
}

ID *ID_make_local_func(ID *_self, Main *bmain, bool clear_proxy, bool clear_liboverride, bool clear_asset_data)
{
	return rna_ID_make_local(_self, bmain, clear_proxy, clear_liboverride, clear_asset_data);
}

static void ID_make_local_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	bool clear_proxy;
	bool clear_liboverride;
	bool clear_asset_data;
	ID *id;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	clear_proxy = *((bool *)_data);
	_data += 8;
	clear_liboverride = *((bool *)_data);
	_data += 8;
	clear_asset_data = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	id = rna_ID_make_local(_self, CTX_data_main(C), clear_proxy, clear_liboverride, clear_asset_data);
	*((ID **)_retdata) = id;
}

int ID_user_of_id_func(ID *_self, ID *id)
{
	return BKE_library_ID_use_ID(_self, id);
}

static void ID_user_of_id_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	ID *id;
	int count;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	id = *((ID **)_data);
	_data += 8;
	_retdata = _data;
	
	count = BKE_library_ID_use_ID(_self, id);
	*((int *)_retdata) = count;
}

AnimData *ID_animation_data_create_func(ID *_self, Main *bmain)
{
	return rna_ID_animation_data_create(_self, bmain);
}

static void ID_animation_data_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	AnimData *anim_data;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	anim_data = rna_ID_animation_data_create(_self, CTX_data_main(C));
	*((AnimData **)_retdata) = anim_data;
}

void ID_animation_data_clear_func(ID *_self, Main *bmain)
{
	rna_ID_animation_data_free(_self, bmain);
}

static void ID_animation_data_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	_self = (ID *)_ptr->data;
	
	rna_ID_animation_data_free(_self, CTX_data_main(C));
}

void ID_update_tag_func(ID *_self, Main *bmain, ReportList *reports, int refresh)
{
	rna_ID_update_tag(_self, bmain, reports, refresh);
}

static void ID_update_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	int refresh;
	char *_data;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	refresh = *((int *)_data);
	
	rna_ID_update_tag(_self, CTX_data_main(C), reports, refresh);
}

PreviewImage *ID_preview_ensure_func(ID *_self)
{
	return BKE_previewimg_id_ensure(_self);
}

static void ID_preview_ensure_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	PreviewImage *preview_image;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	preview_image = BKE_previewimg_id_ensure(_self);
	*((PreviewImage **)_retdata) = preview_image;
}

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);
int rna_ID_rename(ID *_self, Main *bmain, const char * name, int mode);
ID *rna_ID_evaluated_get(ID *_self, Depsgraph *depsgraph);
ID *rna_ID_copy(ID *_self, Main *bmain);
void rna_ID_asset_mark(ID *_self);
void rna_ID_asset_clear(ID *_self);
void rna_ID_asset_generate_preview(ID *_self, bContext *C);
ID *rna_ID_override_create(ID *_self, Main *bmain, bool remap_local_usages);
ID *rna_ID_override_hierarchy_create(ID *_self, Main *bmain, Scene *scene, ViewLayer *view_layer, ID *reference, bool do_fully_editable);
void rna_ID_user_clear(ID *_self);
void rna_ID_user_remap(ID *_self, Main *bmain, ID *new_id);
ID *rna_ID_make_local(ID *_self, Main *bmain, bool clear_proxy, bool clear_liboverride, bool clear_asset_data);
int BKE_library_ID_use_ID(ID *_self, ID *id);
AnimData *rna_ID_animation_data_create(ID *_self, Main *bmain);
void rna_ID_animation_data_free(ID *_self, Main *bmain);
void rna_ID_update_tag(ID *_self, Main *bmain, ReportList *reports, int refresh);
PreviewImage *BKE_previewimg_id_ensure(ID *_self);

void IDOverrideLibrary_operations_update_func(ID *_selfid, IDOverrideLibrary *_self, Main *bmain, ReportList *reports)
{
	rna_ID_override_library_operations_update(_selfid, _self, bmain, reports);
}

static void IDOverrideLibrary_operations_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	IDOverrideLibrary *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (IDOverrideLibrary *)_ptr->data;
	
	rna_ID_override_library_operations_update(_selfid, _self, CTX_data_main(C), reports);
}

void IDOverrideLibrary_reset_func(ID *_selfid, IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy, bool set_system_override)
{
	rna_ID_override_library_reset(_selfid, _self, bmain, reports, do_hierarchy, set_system_override);
}

static void IDOverrideLibrary_reset_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	IDOverrideLibrary *_self;
	bool do_hierarchy;
	bool set_system_override;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	do_hierarchy = *((bool *)_data);
	_data += 8;
	set_system_override = *((bool *)_data);
	
	rna_ID_override_library_reset(_selfid, _self, CTX_data_main(C), reports, do_hierarchy, set_system_override);
}

void IDOverrideLibrary_destroy_func(ID *_selfid, IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy)
{
	rna_ID_override_library_destroy(_selfid, _self, bmain, reports, do_hierarchy);
}

static void IDOverrideLibrary_destroy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	IDOverrideLibrary *_self;
	bool do_hierarchy;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	do_hierarchy = *((bool *)_data);
	
	rna_ID_override_library_destroy(_selfid, _self, CTX_data_main(C), reports, do_hierarchy);
}

bool IDOverrideLibrary_resync_func(ID *_selfid, IDOverrideLibrary *_self, Main *bmain, ReportList *reports, Scene *scene, ViewLayer *view_layer, Collection *residual_storage, bool do_hierarchy_enforce, bool do_whole_hierarchy)
{
	return rna_ID_override_library_resync(_selfid, _self, bmain, reports, scene, view_layer, residual_storage, do_hierarchy_enforce, do_whole_hierarchy);
}

static void IDOverrideLibrary_resync_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	IDOverrideLibrary *_self;
	bool success;
	Scene *scene;
	ViewLayer *view_layer;
	Collection *residual_storage;
	bool do_hierarchy_enforce;
	bool do_whole_hierarchy;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	scene = *((Scene **)_data);
	_data += 8;
	view_layer = *((ViewLayer **)_data);
	_data += 8;
	residual_storage = *((Collection **)_data);
	_data += 8;
	do_hierarchy_enforce = *((bool *)_data);
	_data += 8;
	do_whole_hierarchy = *((bool *)_data);
	
	success = rna_ID_override_library_resync(_selfid, _self, CTX_data_main(C), reports, scene, view_layer, residual_storage, do_hierarchy_enforce, do_whole_hierarchy);
	*((bool *)_retdata) = success;
}

/* Repeated prototypes to detect errors */

void rna_ID_override_library_operations_update(ID *_selfid, IDOverrideLibrary *_self, Main *bmain, ReportList *reports);
void rna_ID_override_library_reset(ID *_selfid, IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy, bool set_system_override);
void rna_ID_override_library_destroy(ID *_selfid, IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy);
bool rna_ID_override_library_resync(ID *_selfid, IDOverrideLibrary *_self, Main *bmain, ReportList *reports, Scene *scene, ViewLayer *view_layer, Collection *residual_storage, bool do_hierarchy_enforce, bool do_whole_hierarchy);

IDOverrideLibraryProperty *IDOverrideLibraryProperties_add_func(IDOverrideLibrary *_self, ReportList *reports, const char * rna_path)
{
	return rna_ID_override_library_properties_add(_self, reports, rna_path);
}

static void IDOverrideLibraryProperties_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	IDOverrideLibrary *_self;
	IDOverrideLibraryProperty *property;
	const char * rna_path;
	char *_data, *_retdata;
	
	_self = (IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	rna_path = *((const char * *)_data);
	
	property = rna_ID_override_library_properties_add(_self, reports, rna_path);
	*((IDOverrideLibraryProperty **)_retdata) = property;
}

void IDOverrideLibraryProperties_remove_func(IDOverrideLibrary *_self, ReportList *reports, IDOverrideLibraryProperty *property)
{
	rna_ID_override_library_properties_remove(_self, reports, property);
}

static void IDOverrideLibraryProperties_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	IDOverrideLibrary *_self;
	IDOverrideLibraryProperty *property;
	char *_data;
	
	_self = (IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	property = *((IDOverrideLibraryProperty **)_data);
	
	rna_ID_override_library_properties_remove(_self, reports, property);
}

/* Repeated prototypes to detect errors */

IDOverrideLibraryProperty *rna_ID_override_library_properties_add(IDOverrideLibrary *_self, ReportList *reports, const char * rna_path);
void rna_ID_override_library_properties_remove(IDOverrideLibrary *_self, ReportList *reports, IDOverrideLibraryProperty *property);


IDOverrideLibraryPropertyOperation *IDOverrideLibraryPropertyOperations_add_func(IDOverrideLibraryProperty *_self, ReportList *reports, int operation, bool use_id, const char * subitem_reference_name, const char * subitem_local_name, ID *subitem_reference_id, ID *subitem_local_id, int subitem_reference_index, int subitem_local_index)
{
	return rna_ID_override_library_property_operations_add(_self, reports, operation, use_id, subitem_reference_name, subitem_local_name, subitem_reference_id, subitem_local_id, subitem_reference_index, subitem_local_index);
}

static void IDOverrideLibraryPropertyOperations_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	IDOverrideLibraryProperty *_self;
	int operation;
	bool use_id;
	const char * subitem_reference_name;
	const char * subitem_local_name;
	ID *subitem_reference_id;
	ID *subitem_local_id;
	int subitem_reference_index;
	int subitem_local_index;
	IDOverrideLibraryPropertyOperation *property;
	char *_data, *_retdata;
	
	_self = (IDOverrideLibraryProperty *)_ptr->data;
	_data = (char *)_parms->data;
	operation = *((int *)_data);
	_data += 8;
	use_id = *((bool *)_data);
	_data += 8;
	subitem_reference_name = *((const char * *)_data);
	_data += 8;
	subitem_local_name = *((const char * *)_data);
	_data += 8;
	subitem_reference_id = *((ID **)_data);
	_data += 8;
	subitem_local_id = *((ID **)_data);
	_data += 8;
	subitem_reference_index = *((int *)_data);
	_data += 8;
	subitem_local_index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	property = rna_ID_override_library_property_operations_add(_self, reports, operation, use_id, subitem_reference_name, subitem_local_name, subitem_reference_id, subitem_local_id, subitem_reference_index, subitem_local_index);
	*((IDOverrideLibraryPropertyOperation **)_retdata) = property;
}

void IDOverrideLibraryPropertyOperations_remove_func(IDOverrideLibraryProperty *_self, ReportList *reports, IDOverrideLibraryPropertyOperation *operation)
{
	rna_ID_override_library_property_operations_remove(_self, reports, operation);
}

static void IDOverrideLibraryPropertyOperations_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	IDOverrideLibraryProperty *_self;
	IDOverrideLibraryPropertyOperation *operation;
	char *_data;
	
	_self = (IDOverrideLibraryProperty *)_ptr->data;
	_data = (char *)_parms->data;
	operation = *((IDOverrideLibraryPropertyOperation **)_data);
	
	rna_ID_override_library_property_operations_remove(_self, reports, operation);
}

/* Repeated prototypes to detect errors */

IDOverrideLibraryPropertyOperation *rna_ID_override_library_property_operations_add(IDOverrideLibraryProperty *_self, ReportList *reports, int operation, bool use_id, const char * subitem_reference_name, const char * subitem_local_name, ID *subitem_reference_id, ID *subitem_local_id, int subitem_reference_index, int subitem_local_index);
void rna_ID_override_library_property_operations_remove(IDOverrideLibraryProperty *_self, ReportList *reports, IDOverrideLibraryPropertyOperation *operation);


int ImagePreview_image_pixels_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_image_pixels_get_length(ptr, arraylen);
}

int ImagePreview_image_pixels_float_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_image_pixels_float_get_length(ptr, arraylen);
}

int ImagePreview_icon_pixels_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_icon_pixels_get_length(ptr, arraylen);
}

int ImagePreview_icon_pixels_float_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_icon_pixels_float_get_length(ptr, arraylen);
}

void ImagePreview_reload_func(PreviewImage *_self)
{
	rna_ImagePreview_icon_reload(_self);
}

static void ImagePreview_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PreviewImage *_self;
	_self = (PreviewImage *)_ptr->data;
	
	rna_ImagePreview_icon_reload(_self);
}

/* Repeated prototypes to detect errors */

void rna_ImagePreview_icon_reload(PreviewImage *_self);


IDPropertyGroup *PropertyGroup_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void PropertyGroup_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	bool do_create;
	IDPropertyGroup *system_properties;
	char *_data, *_retdata;
	
	_self = *_ptr;
	_data = (char *)_parms->data;
	do_create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	system_properties = rna_struct_system_properties_get_func(_self, do_create);
	*((IDPropertyGroup **)_retdata) = system_properties;
}

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);

void IDMaterials_append_func(ID *_self, Main *bmain, Material *material)
{
	rna_IDMaterials_append_id(_self, bmain, material);
}

static void IDMaterials_append_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	Material *material;
	char *_data;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	material = *((Material **)_data);
	
	rna_IDMaterials_append_id(_self, CTX_data_main(C), material);
}

Material *IDMaterials_pop_func(ID *_self, Main *bmain, ReportList *reports, int index)
{
	return rna_IDMaterials_pop_id(_self, bmain, reports, index);
}

static void IDMaterials_pop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	int index;
	Material *material;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	material = rna_IDMaterials_pop_id(_self, CTX_data_main(C), reports, index);
	*((Material **)_retdata) = material;
}

void IDMaterials_clear_func(ID *_self, Main *bmain)
{
	rna_IDMaterials_clear_id(_self, bmain);
}

static void IDMaterials_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	_self = (ID *)_ptr->data;
	
	rna_IDMaterials_clear_id(_self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

void rna_IDMaterials_append_id(ID *_self, Main *bmain, Material *material);
Material *rna_IDMaterials_pop_id(ID *_self, Main *bmain, ReportList *reports, int index);
void rna_IDMaterials_clear_id(ID *_self, Main *bmain);

void Library_reload_func(Library *_self, bContext *C, ReportList *reports)
{
	rna_Library_reload(_self, C, reports);
}

static void Library_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Library *_self;
	_self = (Library *)_ptr->data;
	
	rna_Library_reload(_self, C, reports);
}

/* Repeated prototypes to detect errors */

void rna_Library_reload(Library *_self, bContext *C, ReportList *reports);


IDPropertyGroup *IDPropertyWrapPtr_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void IDPropertyWrapPtr_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	bool do_create;
	IDPropertyGroup *system_properties;
	char *_data, *_retdata;
	
	_self = *_ptr;
	_data = (char *)_parms->data;
	do_create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	system_properties = rna_struct_system_properties_get_func(_self, do_create);
	*((IDPropertyGroup **)_retdata) = system_properties;
}

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);

/* Unknown Type */
static CollectionPropertyRNA rna_UnknownType_rna_properties_;
PropertyRNA &rna_UnknownType_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UnknownType_rna_properties_);

static PointerPropertyRNA rna_UnknownType_rna_type_;
PropertyRNA &rna_UnknownType_rna_type = reinterpret_cast<PropertyRNA &>(rna_UnknownType_rna_type_);

StructRNA *RNA_UnknownType;
void register_struct_UnknownType(BlenderRNA &brna)
{
	rna_UnknownType_rna_properties_ = {
		{&rna_UnknownType_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnknownType_rna_properties_begin, UnknownType_rna_properties_next, UnknownType_rna_properties_end, UnknownType_rna_properties_get, nullptr, nullptr, UnknownType_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UnknownType_rna_type_ = {
		{nullptr, 	&rna_UnknownType_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UnknownType_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_UnknownType;
	srna->cont.properties = {&rna_UnknownType_rna_properties, &rna_UnknownType_rna_type};
	srna->identifier = "UnknownType";
	srna->flag = 516;
	srna->name = "Unknown Type";
	srna->description = "Stub RNA type used for pointers to unknown or internal data";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UnknownType_rna_properties;
};

/* Any Type */
static CollectionPropertyRNA rna_AnyType_rna_properties_;
PropertyRNA &rna_AnyType_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnyType_rna_properties_);

static PointerPropertyRNA rna_AnyType_rna_type_;
PropertyRNA &rna_AnyType_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnyType_rna_type_);

StructRNA *RNA_AnyType;
void register_struct_AnyType(BlenderRNA &brna)
{
	rna_AnyType_rna_properties_ = {
		{&rna_AnyType_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnyType_rna_properties_begin, AnyType_rna_properties_next, AnyType_rna_properties_end, AnyType_rna_properties_get, nullptr, nullptr, AnyType_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnyType_rna_type_ = {
		{nullptr, 	&rna_AnyType_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnyType_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_AnyType;
	srna->cont.properties = {&rna_AnyType_rna_properties, &rna_AnyType_rna_type};
	srna->identifier = "AnyType";
	srna->flag = 516;
	srna->name = "Any Type";
	srna->description = "RNA type used for pointers to any possible data";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnyType_rna_properties;
};

/* ID */
static CollectionPropertyRNA rna_ID_rna_properties_;
PropertyRNA &rna_ID_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ID_rna_properties_);

static PointerPropertyRNA rna_ID_rna_type_;
PropertyRNA &rna_ID_rna_type = reinterpret_cast<PropertyRNA &>(rna_ID_rna_type_);

static StringPropertyRNA rna_ID_name_;
PropertyRNA &rna_ID_name = reinterpret_cast<PropertyRNA &>(rna_ID_name_);

static StringPropertyRNA rna_ID_name_full_;
PropertyRNA &rna_ID_name_full = reinterpret_cast<PropertyRNA &>(rna_ID_name_full_);

static EnumPropertyRNA rna_ID_id_type_;
PropertyRNA &rna_ID_id_type = reinterpret_cast<PropertyRNA &>(rna_ID_id_type_);

static IntPropertyRNA rna_ID_session_uid_;
PropertyRNA &rna_ID_session_uid = reinterpret_cast<PropertyRNA &>(rna_ID_session_uid_);

static BoolPropertyRNA rna_ID_is_evaluated_;
PropertyRNA &rna_ID_is_evaluated = reinterpret_cast<PropertyRNA &>(rna_ID_is_evaluated_);

static PointerPropertyRNA rna_ID_original_;
PropertyRNA &rna_ID_original = reinterpret_cast<PropertyRNA &>(rna_ID_original_);

static IntPropertyRNA rna_ID_users_;
PropertyRNA &rna_ID_users = reinterpret_cast<PropertyRNA &>(rna_ID_users_);

static BoolPropertyRNA rna_ID_use_fake_user_;
PropertyRNA &rna_ID_use_fake_user = reinterpret_cast<PropertyRNA &>(rna_ID_use_fake_user_);

static BoolPropertyRNA rna_ID_use_extra_user_;
PropertyRNA &rna_ID_use_extra_user = reinterpret_cast<PropertyRNA &>(rna_ID_use_extra_user_);

static BoolPropertyRNA rna_ID_is_embedded_data_;
PropertyRNA &rna_ID_is_embedded_data = reinterpret_cast<PropertyRNA &>(rna_ID_is_embedded_data_);

static BoolPropertyRNA rna_ID_is_linked_packed_;
PropertyRNA &rna_ID_is_linked_packed = reinterpret_cast<PropertyRNA &>(rna_ID_is_linked_packed_);

static BoolPropertyRNA rna_ID_is_missing_;
PropertyRNA &rna_ID_is_missing = reinterpret_cast<PropertyRNA &>(rna_ID_is_missing_);

static BoolPropertyRNA rna_ID_is_runtime_data_;
PropertyRNA &rna_ID_is_runtime_data = reinterpret_cast<PropertyRNA &>(rna_ID_is_runtime_data_);

static BoolPropertyRNA rna_ID_is_editable_;
PropertyRNA &rna_ID_is_editable = reinterpret_cast<PropertyRNA &>(rna_ID_is_editable_);

static BoolPropertyRNA rna_ID_tag_;
PropertyRNA &rna_ID_tag = reinterpret_cast<PropertyRNA &>(rna_ID_tag_);

static BoolPropertyRNA rna_ID_is_library_indirect_;
PropertyRNA &rna_ID_is_library_indirect = reinterpret_cast<PropertyRNA &>(rna_ID_is_library_indirect_);

static PointerPropertyRNA rna_ID_library_;
PropertyRNA &rna_ID_library = reinterpret_cast<PropertyRNA &>(rna_ID_library_);

static PointerPropertyRNA rna_ID_library_weak_reference_;
PropertyRNA &rna_ID_library_weak_reference = reinterpret_cast<PropertyRNA &>(rna_ID_library_weak_reference_);

static PointerPropertyRNA rna_ID_asset_data_;
PropertyRNA &rna_ID_asset_data = reinterpret_cast<PropertyRNA &>(rna_ID_asset_data_);

static PointerPropertyRNA rna_ID_override_library_;
PropertyRNA &rna_ID_override_library = reinterpret_cast<PropertyRNA &>(rna_ID_override_library_);

static PointerPropertyRNA rna_ID_preview_;
PropertyRNA &rna_ID_preview = reinterpret_cast<PropertyRNA &>(rna_ID_preview_);

static BoolPropertyRNA rna_ID_bl_system_properties_get_do_create_;
PropertyRNA &rna_ID_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_ID_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_ID_bl_system_properties_get_system_properties_;
PropertyRNA &rna_ID_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_ID_bl_system_properties_get_system_properties_);

FunctionRNA *rna_ID_bl_system_properties_get_func;
static StringPropertyRNA rna_ID_rename_name_;
PropertyRNA &rna_ID_rename_name = reinterpret_cast<PropertyRNA &>(rna_ID_rename_name_);

static EnumPropertyRNA rna_ID_rename_mode_;
PropertyRNA &rna_ID_rename_mode = reinterpret_cast<PropertyRNA &>(rna_ID_rename_mode_);

static EnumPropertyRNA rna_ID_rename_id_rename_result_;
PropertyRNA &rna_ID_rename_id_rename_result = reinterpret_cast<PropertyRNA &>(rna_ID_rename_id_rename_result_);

FunctionRNA *rna_ID_rename_func;
static PointerPropertyRNA rna_ID_evaluated_get_depsgraph_;
PropertyRNA &rna_ID_evaluated_get_depsgraph = reinterpret_cast<PropertyRNA &>(rna_ID_evaluated_get_depsgraph_);

static PointerPropertyRNA rna_ID_evaluated_get_id_;
PropertyRNA &rna_ID_evaluated_get_id = reinterpret_cast<PropertyRNA &>(rna_ID_evaluated_get_id_);

FunctionRNA *rna_ID_evaluated_get_func;
static PointerPropertyRNA rna_ID_copy_id_;
PropertyRNA &rna_ID_copy_id = reinterpret_cast<PropertyRNA &>(rna_ID_copy_id_);

FunctionRNA *rna_ID_copy_func;
FunctionRNA *rna_ID_asset_mark_func;
FunctionRNA *rna_ID_asset_clear_func;
FunctionRNA *rna_ID_asset_generate_preview_func;
static PointerPropertyRNA rna_ID_override_create_id_;
PropertyRNA &rna_ID_override_create_id = reinterpret_cast<PropertyRNA &>(rna_ID_override_create_id_);

static BoolPropertyRNA rna_ID_override_create_remap_local_usages_;
PropertyRNA &rna_ID_override_create_remap_local_usages = reinterpret_cast<PropertyRNA &>(rna_ID_override_create_remap_local_usages_);

FunctionRNA *rna_ID_override_create_func;
static PointerPropertyRNA rna_ID_override_hierarchy_create_id_;
PropertyRNA &rna_ID_override_hierarchy_create_id = reinterpret_cast<PropertyRNA &>(rna_ID_override_hierarchy_create_id_);

static PointerPropertyRNA rna_ID_override_hierarchy_create_scene_;
PropertyRNA &rna_ID_override_hierarchy_create_scene = reinterpret_cast<PropertyRNA &>(rna_ID_override_hierarchy_create_scene_);

static PointerPropertyRNA rna_ID_override_hierarchy_create_view_layer_;
PropertyRNA &rna_ID_override_hierarchy_create_view_layer = reinterpret_cast<PropertyRNA &>(rna_ID_override_hierarchy_create_view_layer_);

static PointerPropertyRNA rna_ID_override_hierarchy_create_reference_;
PropertyRNA &rna_ID_override_hierarchy_create_reference = reinterpret_cast<PropertyRNA &>(rna_ID_override_hierarchy_create_reference_);

static BoolPropertyRNA rna_ID_override_hierarchy_create_do_fully_editable_;
PropertyRNA &rna_ID_override_hierarchy_create_do_fully_editable = reinterpret_cast<PropertyRNA &>(rna_ID_override_hierarchy_create_do_fully_editable_);

FunctionRNA *rna_ID_override_hierarchy_create_func;
FunctionRNA *rna_ID_user_clear_func;
static PointerPropertyRNA rna_ID_user_remap_new_id_;
PropertyRNA &rna_ID_user_remap_new_id = reinterpret_cast<PropertyRNA &>(rna_ID_user_remap_new_id_);

FunctionRNA *rna_ID_user_remap_func;
static BoolPropertyRNA rna_ID_make_local_clear_proxy_;
PropertyRNA &rna_ID_make_local_clear_proxy = reinterpret_cast<PropertyRNA &>(rna_ID_make_local_clear_proxy_);

static BoolPropertyRNA rna_ID_make_local_clear_liboverride_;
PropertyRNA &rna_ID_make_local_clear_liboverride = reinterpret_cast<PropertyRNA &>(rna_ID_make_local_clear_liboverride_);

static BoolPropertyRNA rna_ID_make_local_clear_asset_data_;
PropertyRNA &rna_ID_make_local_clear_asset_data = reinterpret_cast<PropertyRNA &>(rna_ID_make_local_clear_asset_data_);

static PointerPropertyRNA rna_ID_make_local_id_;
PropertyRNA &rna_ID_make_local_id = reinterpret_cast<PropertyRNA &>(rna_ID_make_local_id_);

FunctionRNA *rna_ID_make_local_func;
static PointerPropertyRNA rna_ID_user_of_id_id_;
PropertyRNA &rna_ID_user_of_id_id = reinterpret_cast<PropertyRNA &>(rna_ID_user_of_id_id_);

static IntPropertyRNA rna_ID_user_of_id_count_;
PropertyRNA &rna_ID_user_of_id_count = reinterpret_cast<PropertyRNA &>(rna_ID_user_of_id_count_);

FunctionRNA *rna_ID_user_of_id_func;
static PointerPropertyRNA rna_ID_animation_data_create_anim_data_;
PropertyRNA &rna_ID_animation_data_create_anim_data = reinterpret_cast<PropertyRNA &>(rna_ID_animation_data_create_anim_data_);

FunctionRNA *rna_ID_animation_data_create_func;
FunctionRNA *rna_ID_animation_data_clear_func;
static EnumPropertyRNA rna_ID_update_tag_refresh_;
PropertyRNA &rna_ID_update_tag_refresh = reinterpret_cast<PropertyRNA &>(rna_ID_update_tag_refresh_);

FunctionRNA *rna_ID_update_tag_func;
static PointerPropertyRNA rna_ID_preview_ensure_preview_image_;
PropertyRNA &rna_ID_preview_ensure_preview_image = reinterpret_cast<PropertyRNA &>(rna_ID_preview_ensure_preview_image_);

FunctionRNA *rna_ID_preview_ensure_func;
StructRNA *RNA_ID;
void register_struct_ID(BlenderRNA &brna)
{
	rna_ID_rna_properties_ = {
		{&rna_ID_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_rna_properties_begin, ID_rna_properties_next, ID_rna_properties_end, ID_rna_properties_get, nullptr, nullptr, ID_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ID_rna_type_ = {
		{&rna_ID_name, 	&rna_ID_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ID_name_ = {
		{&rna_ID_name_full, 	&rna_ID_rna_type,
		-1, "name", 262145, 4, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Unique data-block ID name (within a same type and library)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {258, 0, 0}, 0,
		nullptr, 318767109, rna_ID_name_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_name_get, ID_name_length, ID_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_ID_name_full_ = {
		{&rna_ID_id_type, 	&rna_ID_name,
		-1, "name_full", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Full Name",
		"Unique data-block ID name, including library one if any",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_name_full_get, ID_name_full_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 516, ""
	};

	rna_ID_id_type_ = {
		{&rna_ID_session_uid, 	&rna_ID_name_full,
		-1, "id_type", 2, 4, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"Type identifier of this data-block",
		0, "ID",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_id_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_id_type_items, 39, 17217
	};

	rna_ID_session_uid_ = {
		{&rna_ID_is_evaluated, 	&rna_ID_id_type,
		-1, "session_uid", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Session UID",
		"A session-wide unique identifier for the data block that remains the same across renames and internal reallocations, unchanged when reloading the file",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ID, session_uid), RawPropertyType(0), nullptr},
		ID_session_uid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ID_is_evaluated_ = {
		{&rna_ID_original, 	&rna_ID_session_uid,
		-1, "is_evaluated", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Evaluated",
		"Whether this ID is runtime-only, evaluated data-block, or actual data from .blend file",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_is_evaluated_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ID_original_ = {
		{&rna_ID_users, 	&rna_ID_is_evaluated,
		-1, "original", 8912896, 2, 0, 32, 0, PropertyPathTemplateType(0), "Original ID",
		"Actual data-block from .blend file (Main database) that generated that evaluated one",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_original_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_ID_users_ = {
		{&rna_ID_use_fake_user, 	&rna_ID_original,
		-1, "users", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Users",
		"Number of times this data-block is referenced",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ID, us), RawPropertyType(0), nullptr},
		ID_users_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ID_use_fake_user_ = {
		{&rna_ID_use_extra_user, 	&rna_ID_users,
		-1, "use_fake_user", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fake User",
		"Save this data-block even if it has no users",
		13, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_use_fake_user_get, ID_use_fake_user_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ID_use_extra_user_ = {
		{&rna_ID_is_embedded_data, 	&rna_ID_use_fake_user,
		-1, "use_extra_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Extra User",
		"Indicates whether an extra user is set or not (mainly for internal/debug usages)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_use_extra_user_get, ID_use_extra_user_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ID_is_embedded_data_ = {
		{&rna_ID_is_linked_packed, 	&rna_ID_use_extra_user,
		-1, "is_embedded_data", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Embedded Data",
		"This data-block is not an independent one, but is actually a sub-data of another ID (typical example: root node trees or master collections)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_is_embedded_data_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ID_is_linked_packed_ = {
		{&rna_ID_is_missing, 	&rna_ID_is_embedded_data,
		-1, "is_linked_packed", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Linked Packed",
		"This data-block is linked and packed into the .blend file",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_is_linked_packed_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ID_is_missing_ = {
		{&rna_ID_is_runtime_data, 	&rna_ID_is_linked_packed,
		-1, "is_missing", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Missing Data",
		"This data-block is a place-holder for missing linked data (i.e. it is [an override of] a linked data that could not be found anymore)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_is_missing_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ID_is_runtime_data_ = {
		{&rna_ID_is_editable, 	&rna_ID_is_missing,
		-1, "is_runtime_data", 3, 2, 0, 0, 0, PropertyPathTemplateType(0), "Runtime Data",
		"This data-block is runtime data, i.e. it won\'t be saved in .blend file. Note that e.g. evaluated IDs are always runtime, so this value is only editable for data-blocks in Main data-base.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_ID_is_runtime_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_is_runtime_data_get, ID_is_runtime_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ID_is_editable_ = {
		{&rna_ID_tag, 	&rna_ID_is_runtime_data,
		-1, "is_editable", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Editable",
		"This data-block is editable in the user interface. Linked data-blocks are not editable, except if they were loaded as editable assets.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_is_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ID_tag_ = {
		{&rna_ID_is_library_indirect, 	&rna_ID_is_editable,
		-1, "tag", 65539, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tag",
		"Tools can use this to tag data for their own purposes (initial state is undefined)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_tag_get, ID_tag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ID_is_library_indirect_ = {
		{&rna_ID_library, 	&rna_ID_tag,
		-1, "is_library_indirect", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Indirect",
		"Is this ID block linked indirectly",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_is_library_indirect_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ID_library_ = {
		{&rna_ID_library_weak_reference, 	&rna_ID_is_library_indirect,
		-1, "library", 8388800, 2, 0, 0, 0, PropertyPathTemplateType(0), "Library",
		"Library file the data-block is linked from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_library_get, nullptr, nullptr, nullptr,RNA_Library
	};

	rna_ID_library_weak_reference_ = {
		{&rna_ID_asset_data, 	&rna_ID_library,
		-1, "library_weak_reference", 8388608, 2, 0, 0, 0, PropertyPathTemplateType(0), "Library Weak Reference",
		"Weak reference to a data-block in another library .blend file (used to re-use already appended data instead of appending new copies)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_library_weak_reference_get, nullptr, nullptr, nullptr,RNA_LibraryWeakReference
	};

	rna_ID_asset_data_ = {
		{&rna_ID_override_library, 	&rna_ID_library_weak_reference,
		-1, "asset_data", 8388609, 2, 0, 0, 0, PropertyPathTemplateType(0), "Asset Data",
		"Additional data for an asset data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_asset_data_get, ID_asset_data_set, nullptr, nullptr,RNA_AssetMetaData
	};

	rna_ID_override_library_ = {
		{&rna_ID_preview, 	&rna_ID_asset_data,
		-1, "override_library", 8388608, 3, 0, 0, 0, PropertyPathTemplateType(0), "Library Override",
		"Library override data",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_override_library_get, nullptr, nullptr, nullptr,RNA_IDOverrideLibrary
	};

	rna_ID_preview_ = {
		{nullptr, 	&rna_ID_override_library,
		-1, "preview", 8388608, 2, 0, 0, 0, PropertyPathTemplateType(0), "Preview",
		"Preview image and icon of this data-block (always None if not supported for this type of data)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ID_preview_get, nullptr, nullptr, nullptr,RNA_ImagePreview
	};

	StructRNA *srna = RNA_ID;
	srna->cont.properties = {&rna_ID_rna_properties, &rna_ID_preview};
	srna->identifier = "ID";
	srna->flag = 519;
	srna->name = "ID";
	srna->description = "Base type for data-blocks, defining a unique name, linking from other libraries and garbage collection";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	rna_ID_bl_system_properties_get_do_create_ = {
		{&rna_ID_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_ID_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_ID_bl_system_properties_get_do_create,
		-1, "system_properties", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The system properties root container, or None if there are no system properties stored in this data yet, and its creation was not requested",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_bl_system_properties_get_do_create, &rna_ID_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = ID_bl_system_properties_get_call;
		func->c_ret = &rna_ID_bl_system_properties_get_system_properties;
		rna_ID_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ID_rename_name_ = {
		{&rna_ID_rename_mode, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name to rename the ID to, if empty will re-use the current ID name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	static const EnumPropertyItem rna_ID_rename_mode_items[4] = {
		{0, "NEVER", 0, "Never Rename", "Never rename an existing ID whose name would conflict, the currently renamed ID will get a numeric suffix appended to its new name"	},
		{1, "ALWAYS", 0, "Always Rename", "Always rename an existing ID whose name would conflict, ensuring that the currently renamed ID will get requested name"	},
		{2, "SAME_ROOT", 0, "Rename If Same Root", "Only rename an existing ID whose name would conflict if its name root (everything besides the numerical suffix) is the same as the existing name of the currently renamed ID"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ID_rename_mode_ = {
		{&rna_ID_rename_id_rename_result, 	&rna_ID_rename_name,
		-1, "mode", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"How to handle name collision, in case the requested new name is already used by another ID of the same type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ID_rename_mode_items, 3, 0
	};
	static const EnumPropertyItem rna_ID_rename_id_rename_result_items[6] = {
		{0, "UNCHANGED", 0, "Unchanged", "The ID was not renamed, e.g. because it is already named as requested"	},
		{1, "UNCHANGED_COLLISION", 0, "Unchanged Due to Collision", "The ID was not renamed, because requested name would have collided with another existing ID\'s name, and the automatically adjusted name was the same as the current ID\'s name"	},
		{2, "RENAMED_NO_COLLISION", 0, "Renamed Without Collision", "The ID was renamed as requested, without creating any name collision"	},
		{3, "RENAMED_COLLISION_ADJUSTED", 0, "Renamed With Collision", "The ID was renamed with adjustment of the requested name, to avoid a name collision"	},
		{4, "RENAMED_COLLISION_FORCED", 0, "Renamed Enforced With Collision", "The ID was renamed as requested, also renaming another ID to avoid a name collision"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ID_rename_id_rename_result_ = {
		{nullptr, 	&rna_ID_rename_mode,
		-1, "id_rename_result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"How did the renaming of the data-block went on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ID_rename_id_rename_result_items, 5, 0
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_rename_name, &rna_ID_rename_id_rename_result};
		func->identifier = "rename";
		func->flag = 4;
		func->description = "More refined handling in case the new name collides with another ID\'s name";
		func->call = ID_rename_call;
		func->c_ret = &rna_ID_rename_id_rename_result;
		rna_ID_rename_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ID_evaluated_get_depsgraph_ = {
		{&rna_ID_evaluated_get_id, 	nullptr,
		-1, "depsgraph", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Dependency graph to perform lookup in",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	rna_ID_evaluated_get_id_ = {
		{nullptr, 	&rna_ID_evaluated_get_depsgraph,
		-1, "id", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New copy of the ID",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_evaluated_get_depsgraph, &rna_ID_evaluated_get_id};
		func->identifier = "evaluated_get";
		func->description = "Get corresponding evaluated ID from the given dependency graph. Note that this does not ensure the dependency graph is fully evaluated, it just returns the result of the last evaluation.";
		func->call = ID_evaluated_get_call;
		func->c_ret = &rna_ID_evaluated_get_id;
		rna_ID_evaluated_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ID_copy_id_ = {
		{nullptr, 	nullptr,
		-1, "id", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New copy of the ID",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_copy_id, &rna_ID_copy_id};
		func->identifier = "copy";
		func->flag = 4;
		func->description = "Create a copy of this data-block (not supported for all data-blocks). The result is added to the Blend-File Data (Main database), with all references to other data-blocks ensured to be from within the same Blend-File Data.";
		func->call = ID_copy_call;
		func->c_ret = &rna_ID_copy_id;
		rna_ID_copy_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "asset_mark";
		func->description = "Enable easier reuse of the data-block through the Asset Browser, with the help of customizable metadata (like previews, descriptions and tags)";
		func->call = ID_asset_mark_call;
		rna_ID_asset_mark_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "asset_clear";
		func->description = "Delete all asset metadata and turn the asset data-block back into a normal data-block";
		func->call = ID_asset_clear_call;
		rna_ID_asset_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "asset_generate_preview";
		func->flag = 8;
		func->description = "Generate preview image (might be scheduled in a background thread)";
		func->call = ID_asset_generate_preview_call;
		rna_ID_asset_generate_preview_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ID_override_create_id_ = {
		{&rna_ID_override_create_remap_local_usages, 	nullptr,
		-1, "id", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New overridden local copy of the ID",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_ID_override_create_remap_local_usages_ = {
		{nullptr, 	&rna_ID_override_create_id,
		-1, "remap_local_usages", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Whether local usages of the linked ID should be remapped to the new library override of it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_override_create_id, &rna_ID_override_create_remap_local_usages};
		func->identifier = "override_create";
		func->flag = 4;
		func->description = "Create an overridden local copy of this linked data-block (not supported for all data-blocks)";
		func->call = ID_override_create_call;
		func->c_ret = &rna_ID_override_create_id;
		rna_ID_override_create_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ID_override_hierarchy_create_id_ = {
		{&rna_ID_override_hierarchy_create_scene, 	nullptr,
		-1, "id", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New overridden local copy of the root ID",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_ID_override_hierarchy_create_scene_ = {
		{&rna_ID_override_hierarchy_create_view_layer, 	&rna_ID_override_hierarchy_create_id,
		-1, "scene", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"In which scene the new overrides should be instantiated",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	rna_ID_override_hierarchy_create_view_layer_ = {
		{&rna_ID_override_hierarchy_create_reference, 	&rna_ID_override_hierarchy_create_scene,
		-1, "view_layer", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"In which view layer the new overrides should be instantiated",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
	rna_ID_override_hierarchy_create_reference_ = {
		{&rna_ID_override_hierarchy_create_do_fully_editable, 	&rna_ID_override_hierarchy_create_view_layer,
		-1, "reference", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Another ID (usually an Object or Collection) used as a hint to decide where to instantiate the new overrides",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_ID_override_hierarchy_create_do_fully_editable_ = {
		{nullptr, 	&rna_ID_override_hierarchy_create_reference,
		-1, "do_fully_editable", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make all library overrides generated by this call fully editable by the user (none will be \'system overrides\')",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_override_hierarchy_create_id, &rna_ID_override_hierarchy_create_do_fully_editable};
		func->identifier = "override_hierarchy_create";
		func->flag = 4;
		func->description = "Create an overridden local copy of this linked data-block, and most of its dependencies when it is a Collection or and Object";
		func->call = ID_override_hierarchy_create_call;
		func->c_ret = &rna_ID_override_hierarchy_create_id;
		rna_ID_override_hierarchy_create_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "user_clear";
		func->description = "Clear the user count of a data-block so its not saved, on reload the data will be removed";
		func->call = ID_user_clear_call;
		rna_ID_user_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ID_user_remap_new_id_ = {
		{nullptr, 	nullptr,
		-1, "new_id", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New ID to use",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_user_remap_new_id, &rna_ID_user_remap_new_id};
		func->identifier = "user_remap";
		func->flag = 4;
		func->description = "Replace all usage in the .blend file of this ID by new given one";
		func->call = ID_user_remap_call;
		rna_ID_user_remap_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ID_make_local_clear_proxy_ = {
		{&rna_ID_make_local_clear_liboverride, 	nullptr,
		-1, "clear_proxy", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Deprecated, has no effect",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_ID_make_local_clear_liboverride_ = {
		{&rna_ID_make_local_clear_asset_data, 	&rna_ID_make_local_clear_proxy,
		-1, "clear_liboverride", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Remove potential library override data from the newly made local data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_ID_make_local_clear_asset_data_ = {
		{&rna_ID_make_local_id, 	&rna_ID_make_local_clear_liboverride,
		-1, "clear_asset_data", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Remove potential asset metadata so the newly local data-block is not treated as asset data-block and won\'t show up in asset libraries",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_ID_make_local_id_ = {
		{nullptr, 	&rna_ID_make_local_clear_asset_data,
		-1, "id", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"This ID, or the new ID if it was copied",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_make_local_clear_proxy, &rna_ID_make_local_id};
		func->identifier = "make_local";
		func->flag = 4;
		func->description = "Make this data-block local, return local one (may be a copy of the original, in case it is also indirectly used)";
		func->call = ID_make_local_call;
		func->c_ret = &rna_ID_make_local_id;
		rna_ID_make_local_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ID_user_of_id_id_ = {
		{&rna_ID_user_of_id_count, 	nullptr,
		-1, "id", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"ID to count usages",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_ID_user_of_id_count_ = {
		{nullptr, 	&rna_ID_user_of_id_id,
		-1, "count", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Number of usages/references of given id by current data-block",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_user_of_id_id, &rna_ID_user_of_id_count};
		func->identifier = "user_of_id";
		func->description = "Count the number of times that ID uses/references given one";
		func->call = ID_user_of_id_call;
		func->c_ret = &rna_ID_user_of_id_count;
		rna_ID_user_of_id_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ID_animation_data_create_anim_data_ = {
		{nullptr, 	nullptr,
		-1, "anim_data", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New animation data or None",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnimData
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_animation_data_create_anim_data, &rna_ID_animation_data_create_anim_data};
		func->identifier = "animation_data_create";
		func->flag = 4;
		func->description = "Create animation data to this ID, note that not all ID types support this";
		func->call = ID_animation_data_create_call;
		func->c_ret = &rna_ID_animation_data_create_anim_data;
		rna_ID_animation_data_create_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "animation_data_clear";
		func->flag = 4;
		func->description = "Clear animation on this ID";
		func->call = ID_animation_data_clear_call;
		rna_ID_animation_data_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static const EnumPropertyItem rna_ID_update_tag_refresh_items[4] = {
		{1, "OBJECT", 0, "Object", ""	},
		{2, "DATA", 0, "Data", ""	},
		{4, "TIME", 0, "Time", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ID_update_tag_refresh_ = {
		{nullptr, 	nullptr,
		-1, "refresh", 2097155, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Type of updates to perform",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ID_update_tag_refresh_items, 3, 0
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_update_tag_refresh, &rna_ID_update_tag_refresh};
		func->identifier = "update_tag";
		func->flag = 20;
		func->description = "Tag the ID to update its display data, e.g. when calling :class:`bpy.types.Scene.update`";
		func->call = ID_update_tag_call;
		rna_ID_update_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ID_preview_ensure_preview_image_ = {
		{nullptr, 	nullptr,
		-1, "preview_image", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The existing or created preview",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ImagePreview
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ID_preview_ensure_preview_image, &rna_ID_preview_ensure_preview_image};
		func->identifier = "preview_ensure";
		func->description = "Ensure that this ID has preview data (if ID type supports it)";
		func->call = ID_preview_ensure_call;
		func->c_ret = &rna_ID_preview_ensure_preview_image;
		rna_ID_preview_ensure_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* ID Library Override */
static CollectionPropertyRNA rna_IDOverrideLibrary_rna_properties_;
PropertyRNA &rna_IDOverrideLibrary_rna_properties = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_rna_properties_);

static PointerPropertyRNA rna_IDOverrideLibrary_rna_type_;
PropertyRNA &rna_IDOverrideLibrary_rna_type = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_rna_type_);

static PointerPropertyRNA rna_IDOverrideLibrary_reference_;
PropertyRNA &rna_IDOverrideLibrary_reference = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_reference_);

static PointerPropertyRNA rna_IDOverrideLibrary_hierarchy_root_;
PropertyRNA &rna_IDOverrideLibrary_hierarchy_root = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_hierarchy_root_);

static BoolPropertyRNA rna_IDOverrideLibrary_is_in_hierarchy_;
PropertyRNA &rna_IDOverrideLibrary_is_in_hierarchy = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_is_in_hierarchy_);

static BoolPropertyRNA rna_IDOverrideLibrary_is_system_override_;
PropertyRNA &rna_IDOverrideLibrary_is_system_override = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_is_system_override_);

static CollectionPropertyRNA rna_IDOverrideLibrary_properties_;
PropertyRNA &rna_IDOverrideLibrary_properties = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_properties_);

FunctionRNA *rna_IDOverrideLibrary_operations_update_func;
static BoolPropertyRNA rna_IDOverrideLibrary_reset_do_hierarchy_;
PropertyRNA &rna_IDOverrideLibrary_reset_do_hierarchy = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_reset_do_hierarchy_);

static BoolPropertyRNA rna_IDOverrideLibrary_reset_set_system_override_;
PropertyRNA &rna_IDOverrideLibrary_reset_set_system_override = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_reset_set_system_override_);

FunctionRNA *rna_IDOverrideLibrary_reset_func;
static BoolPropertyRNA rna_IDOverrideLibrary_destroy_do_hierarchy_;
PropertyRNA &rna_IDOverrideLibrary_destroy_do_hierarchy = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_destroy_do_hierarchy_);

FunctionRNA *rna_IDOverrideLibrary_destroy_func;
static BoolPropertyRNA rna_IDOverrideLibrary_resync_success_;
PropertyRNA &rna_IDOverrideLibrary_resync_success = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_resync_success_);

static PointerPropertyRNA rna_IDOverrideLibrary_resync_scene_;
PropertyRNA &rna_IDOverrideLibrary_resync_scene = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_resync_scene_);

static PointerPropertyRNA rna_IDOverrideLibrary_resync_view_layer_;
PropertyRNA &rna_IDOverrideLibrary_resync_view_layer = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_resync_view_layer_);

static PointerPropertyRNA rna_IDOverrideLibrary_resync_residual_storage_;
PropertyRNA &rna_IDOverrideLibrary_resync_residual_storage = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_resync_residual_storage_);

static BoolPropertyRNA rna_IDOverrideLibrary_resync_do_hierarchy_enforce_;
PropertyRNA &rna_IDOverrideLibrary_resync_do_hierarchy_enforce = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_resync_do_hierarchy_enforce_);

static BoolPropertyRNA rna_IDOverrideLibrary_resync_do_whole_hierarchy_;
PropertyRNA &rna_IDOverrideLibrary_resync_do_whole_hierarchy = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibrary_resync_do_whole_hierarchy_);

FunctionRNA *rna_IDOverrideLibrary_resync_func;
StructRNA *RNA_IDOverrideLibrary;
void register_struct_IDOverrideLibrary(BlenderRNA &brna)
{
	rna_IDOverrideLibrary_rna_properties_ = {
		{&rna_IDOverrideLibrary_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibrary_rna_properties_begin, IDOverrideLibrary_rna_properties_next, IDOverrideLibrary_rna_properties_end, IDOverrideLibrary_rna_properties_get, nullptr, nullptr, IDOverrideLibrary_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_IDOverrideLibrary_rna_type_ = {
		{&rna_IDOverrideLibrary_reference, 	&rna_IDOverrideLibrary_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibrary_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_IDOverrideLibrary_reference_ = {
		{&rna_IDOverrideLibrary_hierarchy_root, 	&rna_IDOverrideLibrary_rna_type,
		-1, "reference", 8388800, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reference ID",
		"Linked ID used as reference by this override",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17301504, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibrary_reference_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_IDOverrideLibrary_hierarchy_root_ = {
		{&rna_IDOverrideLibrary_is_in_hierarchy, 	&rna_IDOverrideLibrary_reference,
		-1, "hierarchy_root", 8388800, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hierarchy Root ID",
		"Library override ID used as root of the override hierarchy this ID is a member of",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibrary_hierarchy_root_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_IDOverrideLibrary_is_in_hierarchy_ = {
		{&rna_IDOverrideLibrary_is_system_override, 	&rna_IDOverrideLibrary_hierarchy_root,
		-1, "is_in_hierarchy", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Is In Hierarchy",
		"Whether this library override is defined as part of a library hierarchy, or as a single, isolated and autonomous override",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17301504, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibrary_is_in_hierarchy_get, IDOverrideLibrary_is_in_hierarchy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_IDOverrideLibrary_is_system_override_ = {
		{&rna_IDOverrideLibrary_properties, 	&rna_IDOverrideLibrary_is_in_hierarchy,
		-1, "is_system_override", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Is System Override",
		"Whether this library override exists only for the override hierarchy, or if it is actually editable by the user",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17301504, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibrary_is_system_override_get, IDOverrideLibrary_is_system_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_IDOverrideLibrary_properties_ = {
		{nullptr, 	&rna_IDOverrideLibrary_is_system_override,
		-1, "properties", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Properties",
		"List of overridden properties",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17301504, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_IDOverrideLibraryProperties},
		IDOverrideLibrary_properties_begin, IDOverrideLibrary_properties_next, IDOverrideLibrary_properties_end, IDOverrideLibrary_properties_get, nullptr, IDOverrideLibrary_properties_lookup_int, nullptr, nullptr, RNA_IDOverrideLibraryProperty
	};

	StructRNA *srna = RNA_IDOverrideLibrary;
	srna->cont.properties = {&rna_IDOverrideLibrary_rna_properties, &rna_IDOverrideLibrary_properties};
	srna->identifier = "IDOverrideLibrary";
	srna->flag = 516;
	srna->name = "ID Library Override";
	srna->description = "Struct gathering all data needed by overridden linked IDs";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_IDOverrideLibrary_rna_properties;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "operations_update";
		func->flag = 2068;
		func->description = "Update the library override operations based on the differences between this override ID and its reference";
		func->call = IDOverrideLibrary_operations_update_call;
		rna_IDOverrideLibrary_operations_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_IDOverrideLibrary_reset_do_hierarchy_ = {
		{&rna_IDOverrideLibrary_reset_set_system_override, 	nullptr,
		-1, "do_hierarchy", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Also reset all the dependencies of this override to match their reference linked IDs",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_IDOverrideLibrary_reset_set_system_override_ = {
		{nullptr, 	&rna_IDOverrideLibrary_reset_do_hierarchy,
		-1, "set_system_override", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Reset all user-editable overrides as (non-editable) system overrides",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_IDOverrideLibrary_reset_do_hierarchy, &rna_IDOverrideLibrary_reset_set_system_override};
		func->identifier = "reset";
		func->flag = 2068;
		func->description = "Reset this override to match again its linked reference ID";
		func->call = IDOverrideLibrary_reset_call;
		rna_IDOverrideLibrary_reset_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_IDOverrideLibrary_destroy_do_hierarchy_ = {
		{nullptr, 	nullptr,
		-1, "do_hierarchy", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Also delete all the dependencies of this override and remap their usages to their reference linked IDs",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_IDOverrideLibrary_destroy_do_hierarchy, &rna_IDOverrideLibrary_destroy_do_hierarchy};
		func->identifier = "destroy";
		func->flag = 2068;
		func->description = "Delete this override ID and remap its usages to its linked reference ID instead";
		func->call = IDOverrideLibrary_destroy_call;
		rna_IDOverrideLibrary_destroy_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_IDOverrideLibrary_resync_success_ = {
		{&rna_IDOverrideLibrary_resync_scene, 	nullptr,
		-1, "success", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Success",
		"Whether the resync process was successful or not",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_IDOverrideLibrary_resync_scene_ = {
		{&rna_IDOverrideLibrary_resync_view_layer, 	&rna_IDOverrideLibrary_resync_success,
		-1, "scene", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The scene to operate in (for contextual things like keeping active object active, ensuring all overridden objects remain instantiated, etc.)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	rna_IDOverrideLibrary_resync_view_layer_ = {
		{&rna_IDOverrideLibrary_resync_residual_storage, 	&rna_IDOverrideLibrary_resync_scene,
		-1, "view_layer", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The view layer to operate in (same usage as the ``scene`` data, in case it is not provided the scene\'s collection will be used instead)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
	rna_IDOverrideLibrary_resync_residual_storage_ = {
		{&rna_IDOverrideLibrary_resync_do_hierarchy_enforce, 	&rna_IDOverrideLibrary_resync_view_layer,
		-1, "residual_storage", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Collection where to store objects that are instantiated in any other collection anymore (garbage collection, will be created if needed and none is provided)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Collection
	};
	rna_IDOverrideLibrary_resync_do_hierarchy_enforce_ = {
		{&rna_IDOverrideLibrary_resync_do_whole_hierarchy, 	&rna_IDOverrideLibrary_resync_residual_storage,
		-1, "do_hierarchy_enforce", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Enforce restoring the dependency hierarchy between data-blocks to match the one from the reference linked hierarchy (WARNING: if some ID pointers have been purposely overridden, these will be reset to their default value)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_IDOverrideLibrary_resync_do_whole_hierarchy_ = {
		{nullptr, 	&rna_IDOverrideLibrary_resync_do_hierarchy_enforce,
		-1, "do_whole_hierarchy", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Resync the whole hierarchy this data-block belongs to, not only its own sub-hierarchy",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_IDOverrideLibrary_resync_success, &rna_IDOverrideLibrary_resync_do_whole_hierarchy};
		func->identifier = "resync";
		func->flag = 2068;
		func->description = "Resync the data-block and its sub-hierarchy, or the whole hierarchy if requested";
		func->call = IDOverrideLibrary_resync_call;
		func->c_ret = &rna_IDOverrideLibrary_resync_success;
		rna_IDOverrideLibrary_resync_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Override Properties */
static CollectionPropertyRNA rna_IDOverrideLibraryProperties_rna_properties_;
PropertyRNA &rna_IDOverrideLibraryProperties_rna_properties = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryProperties_rna_properties_);

static PointerPropertyRNA rna_IDOverrideLibraryProperties_rna_type_;
PropertyRNA &rna_IDOverrideLibraryProperties_rna_type = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryProperties_rna_type_);

static PointerPropertyRNA rna_IDOverrideLibraryProperties_add_property_;
PropertyRNA &rna_IDOverrideLibraryProperties_add_property = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryProperties_add_property_);

static StringPropertyRNA rna_IDOverrideLibraryProperties_add_rna_path_;
PropertyRNA &rna_IDOverrideLibraryProperties_add_rna_path = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryProperties_add_rna_path_);

FunctionRNA *rna_IDOverrideLibraryProperties_add_func;
static PointerPropertyRNA rna_IDOverrideLibraryProperties_remove_property_;
PropertyRNA &rna_IDOverrideLibraryProperties_remove_property = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryProperties_remove_property_);

FunctionRNA *rna_IDOverrideLibraryProperties_remove_func;
StructRNA *RNA_IDOverrideLibraryProperties;
void register_struct_IDOverrideLibraryProperties(BlenderRNA &brna)
{
	rna_IDOverrideLibraryProperties_rna_properties_ = {
		{&rna_IDOverrideLibraryProperties_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryProperties_rna_properties_begin, IDOverrideLibraryProperties_rna_properties_next, IDOverrideLibraryProperties_rna_properties_end, IDOverrideLibraryProperties_rna_properties_get, nullptr, nullptr, IDOverrideLibraryProperties_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_IDOverrideLibraryProperties_rna_type_ = {
		{nullptr, 	&rna_IDOverrideLibraryProperties_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryProperties_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_IDOverrideLibraryProperties;
	srna->cont.properties = {&rna_IDOverrideLibraryProperties_rna_properties, &rna_IDOverrideLibraryProperties_rna_type};
	srna->identifier = "IDOverrideLibraryProperties";
	srna->flag = 516;
	srna->name = "Override Properties";
	srna->description = "Collection of override properties";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_IDOverrideLibraryProperties_rna_properties;
	{
	rna_IDOverrideLibraryProperties_add_property_ = {
		{&rna_IDOverrideLibraryProperties_add_rna_path, 	nullptr,
		-1, "property", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "New Property",
		"Newly created override property or existing one",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_IDOverrideLibraryProperty
	};
	rna_IDOverrideLibraryProperties_add_rna_path_ = {
		{nullptr, 	&rna_IDOverrideLibraryProperties_add_property,
		-1, "rna_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "RNA Path",
		"RNA-Path of the property to add",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_IDOverrideLibraryProperties_add_property, &rna_IDOverrideLibraryProperties_add_rna_path};
		func->identifier = "add";
		func->flag = 16;
		func->description = "Add a property to the override library when it doesn\'t exist yet";
		func->call = IDOverrideLibraryProperties_add_call;
		func->c_ret = &rna_IDOverrideLibraryProperties_add_property;
		rna_IDOverrideLibraryProperties_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_IDOverrideLibraryProperties_remove_property_ = {
		{nullptr, 	nullptr,
		-1, "property", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Property",
		"Override property to be deleted",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_IDOverrideLibraryProperty
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_IDOverrideLibraryProperties_remove_property, &rna_IDOverrideLibraryProperties_remove_property};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove and delete a property";
		func->call = IDOverrideLibraryProperties_remove_call;
		rna_IDOverrideLibraryProperties_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* ID Library Override Property */
static CollectionPropertyRNA rna_IDOverrideLibraryProperty_rna_properties_;
PropertyRNA &rna_IDOverrideLibraryProperty_rna_properties = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryProperty_rna_properties_);

static PointerPropertyRNA rna_IDOverrideLibraryProperty_rna_type_;
PropertyRNA &rna_IDOverrideLibraryProperty_rna_type = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryProperty_rna_type_);

static StringPropertyRNA rna_IDOverrideLibraryProperty_rna_path_;
PropertyRNA &rna_IDOverrideLibraryProperty_rna_path = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryProperty_rna_path_);

static CollectionPropertyRNA rna_IDOverrideLibraryProperty_operations_;
PropertyRNA &rna_IDOverrideLibraryProperty_operations = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryProperty_operations_);

StructRNA *RNA_IDOverrideLibraryProperty;
void register_struct_IDOverrideLibraryProperty(BlenderRNA &brna)
{
	rna_IDOverrideLibraryProperty_rna_properties_ = {
		{&rna_IDOverrideLibraryProperty_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryProperty_rna_properties_begin, IDOverrideLibraryProperty_rna_properties_next, IDOverrideLibraryProperty_rna_properties_end, IDOverrideLibraryProperty_rna_properties_get, nullptr, nullptr, IDOverrideLibraryProperty_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_IDOverrideLibraryProperty_rna_type_ = {
		{&rna_IDOverrideLibraryProperty_rna_path, 	&rna_IDOverrideLibraryProperty_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryProperty_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_IDOverrideLibraryProperty_rna_path_ = {
		{&rna_IDOverrideLibraryProperty_operations, 	&rna_IDOverrideLibraryProperty_rna_type,
		-1, "rna_path", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA Path",
		"RNA path leading to that property, from owning ID",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryProperty_rna_path_get, IDOverrideLibraryProperty_rna_path_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 2147483647, ""
	};

	rna_IDOverrideLibraryProperty_operations_ = {
		{nullptr, 	&rna_IDOverrideLibraryProperty_rna_path,
		-1, "operations", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Operations",
		"List of overriding operations for a property",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17301504, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_IDOverrideLibraryPropertyOperations},
		IDOverrideLibraryProperty_operations_begin, IDOverrideLibraryProperty_operations_next, IDOverrideLibraryProperty_operations_end, IDOverrideLibraryProperty_operations_get, nullptr, IDOverrideLibraryProperty_operations_lookup_int, nullptr, nullptr, RNA_IDOverrideLibraryPropertyOperation
	};

	StructRNA *srna = RNA_IDOverrideLibraryProperty;
	srna->cont.properties = {&rna_IDOverrideLibraryProperty_rna_properties, &rna_IDOverrideLibraryProperty_operations};
	srna->identifier = "IDOverrideLibraryProperty";
	srna->flag = 516;
	srna->name = "ID Library Override Property";
	srna->description = "Description of an overridden property";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_IDOverrideLibraryProperty_rna_properties;
};

/* Override Operations */
static CollectionPropertyRNA rna_IDOverrideLibraryPropertyOperations_rna_properties_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_rna_properties = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_rna_properties_);

static PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_rna_type_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_rna_type = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_rna_type_);

static EnumPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_operation_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_operation = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_add_operation_);

static BoolPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_use_id_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_use_id = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_add_use_id_);

static StringPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name_);

static StringPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name_);

static PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id_);

static PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id_);

static IntPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index_);

static IntPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index_);

static PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_property_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_add_property = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_add_property_);

FunctionRNA *rna_IDOverrideLibraryPropertyOperations_add_func;
static PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_remove_operation_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperations_remove_operation = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperations_remove_operation_);

FunctionRNA *rna_IDOverrideLibraryPropertyOperations_remove_func;
StructRNA *RNA_IDOverrideLibraryPropertyOperations;
void register_struct_IDOverrideLibraryPropertyOperations(BlenderRNA &brna)
{
	rna_IDOverrideLibraryPropertyOperations_rna_properties_ = {
		{&rna_IDOverrideLibraryPropertyOperations_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryPropertyOperations_rna_properties_begin, IDOverrideLibraryPropertyOperations_rna_properties_next, IDOverrideLibraryPropertyOperations_rna_properties_end, IDOverrideLibraryPropertyOperations_rna_properties_get, nullptr, nullptr, IDOverrideLibraryPropertyOperations_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_IDOverrideLibraryPropertyOperations_rna_type_ = {
		{nullptr, 	&rna_IDOverrideLibraryPropertyOperations_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryPropertyOperations_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_IDOverrideLibraryPropertyOperations;
	srna->cont.properties = {&rna_IDOverrideLibraryPropertyOperations_rna_properties, &rna_IDOverrideLibraryPropertyOperations_rna_type};
	srna->identifier = "IDOverrideLibraryPropertyOperations";
	srna->flag = 516;
	srna->name = "Override Operations";
	srna->description = "Collection of override operations";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_IDOverrideLibraryPropertyOperations_rna_properties;
	{
	static const EnumPropertyItem rna_IDOverrideLibraryPropertyOperations_add_operation_items[9] = {
		{0, "NOOP", 0, "No-Op", "Does nothing, prevents adding actual overrides (NOT USED)"	},
		{1, "REPLACE", 0, "Replace", "Replace value of reference by overriding one"	},
		{101, "DIFF_ADD", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"	},
		{102, "DIFF_SUB", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"	},
		{103, "FACT_MULTIPLY", 0, "Factor", "Stores and apply multiplication factor between reference and local value (NOT USED)"	},
		{201, "INSERT_AFTER", 0, "Insert After", "Insert a new item into collection after the one referenced in subitem_reference_name/_id or _index"	},
		{202, "INSERT_BEFORE", 0, "Insert Before", "Insert a new item into collection before the one referenced in subitem_reference_name/_id or _index (NOT USED)"	},
		{255, "CUSTOM", 0, "Custom", "Custom operation, specific to a RNA property, and handled through dedicated callbacks (used in specific cases, e.g. to handle data not actually exposed in RNA)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_IDOverrideLibraryPropertyOperations_add_operation_ = {
		{&rna_IDOverrideLibraryPropertyOperations_add_use_id, 	nullptr,
		-1, "operation", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Operation",
		"What override operation is performed",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_IDOverrideLibraryPropertyOperations_add_operation_items, 8, 1
	};
	rna_IDOverrideLibraryPropertyOperations_add_use_id_ = {
		{&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name, 	&rna_IDOverrideLibraryPropertyOperations_add_operation,
		-1, "use_id", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use ID Pointer Subitem",
		"Whether the found or created liboverride operation should use ID pointers or not",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name_ = {
		{&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name, 	&rna_IDOverrideLibraryPropertyOperations_add_use_id,
		-1, "subitem_reference_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subitem Reference Name",
		"Used to handle insertions or ID replacements into collection",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 2147483647, ""
	};
	rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name_ = {
		{&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id, 	&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name,
		-1, "subitem_local_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subitem Local Name",
		"Used to handle insertions or ID replacements into collection",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 2147483647, ""
	};
	rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id_ = {
		{&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id, 	&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name,
		-1, "subitem_reference_id", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subitem Reference ID",
		"Used to handle ID replacements into collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id_ = {
		{&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index, 	&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id,
		-1, "subitem_local_id", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subitem Local ID",
		"Used to handle ID replacements into collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index_ = {
		{&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index, 	&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id,
		-1, "subitem_reference_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subitem Reference Index",
		"Used to handle insertions or ID replacements into collection",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
	rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index_ = {
		{&rna_IDOverrideLibraryPropertyOperations_add_property, 	&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index,
		-1, "subitem_local_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subitem Local Index",
		"Used to handle insertions or ID replacements into collection",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
	rna_IDOverrideLibraryPropertyOperations_add_property_ = {
		{nullptr, 	&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index,
		-1, "property", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "New Operation",
		"Created operation",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_IDOverrideLibraryPropertyOperation
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_IDOverrideLibraryPropertyOperations_add_operation, &rna_IDOverrideLibraryPropertyOperations_add_property};
		func->identifier = "add";
		func->flag = 16;
		func->description = "Add a new operation";
		func->call = IDOverrideLibraryPropertyOperations_add_call;
		func->c_ret = &rna_IDOverrideLibraryPropertyOperations_add_property;
		rna_IDOverrideLibraryPropertyOperations_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_IDOverrideLibraryPropertyOperations_remove_operation_ = {
		{nullptr, 	nullptr,
		-1, "operation", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Operation",
		"Override operation to be deleted",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_IDOverrideLibraryPropertyOperation
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_IDOverrideLibraryPropertyOperations_remove_operation, &rna_IDOverrideLibraryPropertyOperations_remove_operation};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove and delete an operation";
		func->call = IDOverrideLibraryPropertyOperations_remove_call;
		rna_IDOverrideLibraryPropertyOperations_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* ID Library Override Property Operation */
static CollectionPropertyRNA rna_IDOverrideLibraryPropertyOperation_rna_properties_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_rna_properties = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_rna_properties_);

static PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_rna_type_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_rna_type = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_rna_type_);

static EnumPropertyRNA rna_IDOverrideLibraryPropertyOperation_operation_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_operation = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_operation_);

static EnumPropertyRNA rna_IDOverrideLibraryPropertyOperation_flag_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_flag = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_flag_);

static StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_name_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_reference_name = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_subitem_reference_name_);

static StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_name_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_local_name = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_subitem_local_name_);

static PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_id_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_reference_id = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_subitem_reference_id_);

static PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_id_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_local_id = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_subitem_local_id_);

static IntPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_index_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_reference_index = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_subitem_reference_index_);

static IntPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_index_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_subitem_local_index = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_subitem_local_index_);

static StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_label_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_label = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_label_);

static StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_tooltip_;
PropertyRNA &rna_IDOverrideLibraryPropertyOperation_tooltip = reinterpret_cast<PropertyRNA &>(rna_IDOverrideLibraryPropertyOperation_tooltip_);

StructRNA *RNA_IDOverrideLibraryPropertyOperation;
void register_struct_IDOverrideLibraryPropertyOperation(BlenderRNA &brna)
{
	rna_IDOverrideLibraryPropertyOperation_rna_properties_ = {
		{&rna_IDOverrideLibraryPropertyOperation_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryPropertyOperation_rna_properties_begin, IDOverrideLibraryPropertyOperation_rna_properties_next, IDOverrideLibraryPropertyOperation_rna_properties_end, IDOverrideLibraryPropertyOperation_rna_properties_get, nullptr, nullptr, IDOverrideLibraryPropertyOperation_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_IDOverrideLibraryPropertyOperation_rna_type_ = {
		{&rna_IDOverrideLibraryPropertyOperation_operation, 	&rna_IDOverrideLibraryPropertyOperation_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryPropertyOperation_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_IDOverrideLibraryPropertyOperation_operation_items[9] = {
		{0, "NOOP", 0, "No-Op", "Does nothing, prevents adding actual overrides (NOT USED)"	},
		{1, "REPLACE", 0, "Replace", "Replace value of reference by overriding one"	},
		{101, "DIFF_ADD", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"	},
		{102, "DIFF_SUB", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"	},
		{103, "FACT_MULTIPLY", 0, "Factor", "Stores and apply multiplication factor between reference and local value (NOT USED)"	},
		{201, "INSERT_AFTER", 0, "Insert After", "Insert a new item into collection after the one referenced in subitem_reference_name/_id or _index"	},
		{202, "INSERT_BEFORE", 0, "Insert Before", "Insert a new item into collection before the one referenced in subitem_reference_name/_id or _index (NOT USED)"	},
		{255, "CUSTOM", 0, "Custom", "Custom operation, specific to a RNA property, and handled through dedicated callbacks (used in specific cases, e.g. to handle data not actually exposed in RNA)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_IDOverrideLibraryPropertyOperation_operation_ = {
		{&rna_IDOverrideLibraryPropertyOperation_flag, 	&rna_IDOverrideLibraryPropertyOperation_rna_type,
		-1, "operation", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Operation",
		"What override operation is performed",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(IDOverrideLibraryPropertyOperation, operation), RawPropertyType(1), nullptr},
		IDOverrideLibraryPropertyOperation_operation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_IDOverrideLibraryPropertyOperation_operation_items, 8, 1
	};

	static const EnumPropertyItem rna_IDOverrideLibraryPropertyOperation_flag_items[5] = {
		{1, "MANDATORY", 0, "Mandatory", "For templates, prevents the user from removing predefined operation (NOT USED)"	},
		{2, "LOCKED", 0, "Locked", "Prevents the user from modifying that override operation (NOT USED)"	},
		{256, "IDPOINTER_MATCH_REFERENCE", 0, "Match Reference", "The ID pointer overridden by this operation is expected to match the reference hierarchy"	},
		{512, "IDPOINTER_ITEM_USE_ID", 0, "ID Item Use ID Pointer", "RNA collections of IDs only, the reference to the item also uses the ID pointer itself, not only its name"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_IDOverrideLibraryPropertyOperation_flag_ = {
		{&rna_IDOverrideLibraryPropertyOperation_subitem_reference_name, 	&rna_IDOverrideLibraryPropertyOperation_operation,
		-1, "flag", 2097154, 0, 0, 4, 0, PropertyPathTemplateType(0), "Flags",
		"Status flags",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(IDOverrideLibraryPropertyOperation, flag), RawPropertyType(1), nullptr},
		IDOverrideLibraryPropertyOperation_flag_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_IDOverrideLibraryPropertyOperation_flag_items, 4, 0
	};

	rna_IDOverrideLibraryPropertyOperation_subitem_reference_name_ = {
		{&rna_IDOverrideLibraryPropertyOperation_subitem_local_name, 	&rna_IDOverrideLibraryPropertyOperation_flag,
		-1, "subitem_reference_name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subitem Reference Name",
		"Used to handle changes into collection",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryPropertyOperation_subitem_reference_name_get, IDOverrideLibraryPropertyOperation_subitem_reference_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 2147483647, ""
	};

	rna_IDOverrideLibraryPropertyOperation_subitem_local_name_ = {
		{&rna_IDOverrideLibraryPropertyOperation_subitem_reference_id, 	&rna_IDOverrideLibraryPropertyOperation_subitem_reference_name,
		-1, "subitem_local_name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subitem Local Name",
		"Used to handle changes into collection",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryPropertyOperation_subitem_local_name_get, IDOverrideLibraryPropertyOperation_subitem_local_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 2147483647, ""
	};

	rna_IDOverrideLibraryPropertyOperation_subitem_reference_id_ = {
		{&rna_IDOverrideLibraryPropertyOperation_subitem_local_id, 	&rna_IDOverrideLibraryPropertyOperation_subitem_local_name,
		-1, "subitem_reference_id", 8388800, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subitem Reference ID",
		"Collection of IDs only, used to disambiguate between potential IDs with same name from different libraries",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryPropertyOperation_subitem_reference_id_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_IDOverrideLibraryPropertyOperation_subitem_local_id_ = {
		{&rna_IDOverrideLibraryPropertyOperation_subitem_reference_index, 	&rna_IDOverrideLibraryPropertyOperation_subitem_reference_id,
		-1, "subitem_local_id", 8388800, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subitem Local ID",
		"Collection of IDs only, used to disambiguate between potential IDs with same name from different libraries",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryPropertyOperation_subitem_local_id_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_IDOverrideLibraryPropertyOperation_subitem_reference_index_ = {
		{&rna_IDOverrideLibraryPropertyOperation_subitem_local_index, 	&rna_IDOverrideLibraryPropertyOperation_subitem_local_id,
		-1, "subitem_reference_index", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Subitem Reference Index",
		"Used to handle changes into collection",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(IDOverrideLibraryPropertyOperation, subitem_reference_index), RawPropertyType(0), nullptr},
		IDOverrideLibraryPropertyOperation_subitem_reference_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};

	rna_IDOverrideLibraryPropertyOperation_subitem_local_index_ = {
		{&rna_IDOverrideLibraryPropertyOperation_label, 	&rna_IDOverrideLibraryPropertyOperation_subitem_reference_index,
		-1, "subitem_local_index", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Subitem Local Index",
		"Used to handle changes into collection",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(IDOverrideLibraryPropertyOperation, subitem_local_index), RawPropertyType(0), nullptr},
		IDOverrideLibraryPropertyOperation_subitem_local_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};

	rna_IDOverrideLibraryPropertyOperation_label_ = {
		{&rna_IDOverrideLibraryPropertyOperation_tooltip, 	&rna_IDOverrideLibraryPropertyOperation_subitem_local_index,
		-1, "label", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "UI Label",
		"UI label to display in dedicated view of the Outliner, in place of the actual UI widget to edit the value",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryPropertyOperation_label_get, IDOverrideLibraryPropertyOperation_label_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_IDOverrideLibraryPropertyOperation_tooltip_ = {
		{nullptr, 	&rna_IDOverrideLibraryPropertyOperation_label,
		-1, "tooltip", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "UI Tooltip",
		"UI tooltip to display in dedicated view of the Outliner, when the label itself cannot provide all required information",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDOverrideLibraryPropertyOperation_tooltip_get, IDOverrideLibraryPropertyOperation_tooltip_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_IDOverrideLibraryPropertyOperation;
	srna->cont.properties = {&rna_IDOverrideLibraryPropertyOperation_rna_properties, &rna_IDOverrideLibraryPropertyOperation_tooltip};
	srna->identifier = "IDOverrideLibraryPropertyOperation";
	srna->flag = 516;
	srna->name = "ID Library Override Property Operation";
	srna->description = "Description of an override operation over an overridden property";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_IDOverrideLibraryPropertyOperation_rna_properties;
};

/* Image Preview */
static CollectionPropertyRNA rna_ImagePreview_rna_properties_;
PropertyRNA &rna_ImagePreview_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_rna_properties_);

static PointerPropertyRNA rna_ImagePreview_rna_type_;
PropertyRNA &rna_ImagePreview_rna_type = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_rna_type_);

static BoolPropertyRNA rna_ImagePreview_is_image_custom_;
PropertyRNA &rna_ImagePreview_is_image_custom = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_is_image_custom_);

static IntPropertyRNA rna_ImagePreview_image_size_;
PropertyRNA &rna_ImagePreview_image_size = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_image_size_);

static IntPropertyRNA rna_ImagePreview_image_pixels_;
PropertyRNA &rna_ImagePreview_image_pixels = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_image_pixels_);

static FloatPropertyRNA rna_ImagePreview_image_pixels_float_;
PropertyRNA &rna_ImagePreview_image_pixels_float = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_image_pixels_float_);

static BoolPropertyRNA rna_ImagePreview_is_icon_custom_;
PropertyRNA &rna_ImagePreview_is_icon_custom = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_is_icon_custom_);

static IntPropertyRNA rna_ImagePreview_icon_size_;
PropertyRNA &rna_ImagePreview_icon_size = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_icon_size_);

static IntPropertyRNA rna_ImagePreview_icon_pixels_;
PropertyRNA &rna_ImagePreview_icon_pixels = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_icon_pixels_);

static FloatPropertyRNA rna_ImagePreview_icon_pixels_float_;
PropertyRNA &rna_ImagePreview_icon_pixels_float = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_icon_pixels_float_);

static IntPropertyRNA rna_ImagePreview_icon_id_;
PropertyRNA &rna_ImagePreview_icon_id = reinterpret_cast<PropertyRNA &>(rna_ImagePreview_icon_id_);

FunctionRNA *rna_ImagePreview_reload_func;
StructRNA *RNA_ImagePreview;
void register_struct_ImagePreview(BlenderRNA &brna)
{
	rna_ImagePreview_rna_properties_ = {
		{&rna_ImagePreview_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePreview_rna_properties_begin, ImagePreview_rna_properties_next, ImagePreview_rna_properties_end, ImagePreview_rna_properties_get, nullptr, nullptr, ImagePreview_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ImagePreview_rna_type_ = {
		{&rna_ImagePreview_is_image_custom, 	&rna_ImagePreview_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePreview_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ImagePreview_is_image_custom_ = {
		{&rna_ImagePreview_image_size, 	&rna_ImagePreview_rna_type,
		-1, "is_image_custom", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Custom Image",
		"True if this preview image has been modified by py script, and is no more auto-generated by Blender",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePreview_is_image_custom_get, ImagePreview_is_image_custom_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static int rna_ImagePreview_image_size_default[2] = {
		0,
		0
	};
	rna_ImagePreview_image_size_ = {
		{&rna_ImagePreview_image_pixels, 	&rna_ImagePreview_is_image_custom,
		-1, "image_size", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image Size",
		"Width and height in pixels",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ImagePreview_image_size_get, ImagePreview_image_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_ImagePreview_image_size_default
	};

	rna_ImagePreview_image_pixels_ = {
		{&rna_ImagePreview_image_pixels_float, 	&rna_ImagePreview_image_size,
		-1, "image_pixels", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image Pixels",
		"Image pixels, as bytes (always 32-bit RGBA)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_ImagePreview_image_pixels_get_length, 1, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ImagePreview_image_pixels_get, ImagePreview_image_pixels_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImagePreview_image_pixels_float_ = {
		{&rna_ImagePreview_is_icon_custom, 	&rna_ImagePreview_image_pixels,
		-1, "image_pixels_float", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Float Image Pixels",
		"Image pixels components, as floats (RGBA concatenated values)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_ImagePreview_image_pixels_float_get_length, 1, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ImagePreview_image_pixels_float_get, ImagePreview_image_pixels_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ImagePreview_is_icon_custom_ = {
		{&rna_ImagePreview_icon_size, 	&rna_ImagePreview_image_pixels_float,
		-1, "is_icon_custom", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Custom Icon",
		"True if this preview icon has been modified by py script, and is no more auto-generated by Blender",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePreview_is_icon_custom_get, ImagePreview_is_icon_custom_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static int rna_ImagePreview_icon_size_default[2] = {
		0,
		0
	};
	rna_ImagePreview_icon_size_ = {
		{&rna_ImagePreview_icon_pixels, 	&rna_ImagePreview_is_icon_custom,
		-1, "icon_size", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Icon Size",
		"Width and height in pixels",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ImagePreview_icon_size_get, ImagePreview_icon_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_ImagePreview_icon_size_default
	};

	rna_ImagePreview_icon_pixels_ = {
		{&rna_ImagePreview_icon_pixels_float, 	&rna_ImagePreview_icon_size,
		-1, "icon_pixels", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Icon Pixels",
		"Icon pixels, as bytes (always 32-bit RGBA)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_ImagePreview_icon_pixels_get_length, 1, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ImagePreview_icon_pixels_get, ImagePreview_icon_pixels_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImagePreview_icon_pixels_float_ = {
		{&rna_ImagePreview_icon_id, 	&rna_ImagePreview_icon_pixels,
		-1, "icon_pixels_float", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Float Icon Pixels",
		"Icon pixels components, as floats (RGBA concatenated values)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_ImagePreview_icon_pixels_float_get_length, 1, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ImagePreview_icon_pixels_float_get, ImagePreview_icon_pixels_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ImagePreview_icon_id_ = {
		{nullptr, 	&rna_ImagePreview_icon_pixels_float,
		-1, "icon_id", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Icon ID",
		"Unique integer identifying this preview as an icon (zero means invalid)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImagePreview_icon_id_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ImagePreview;
	srna->cont.properties = {&rna_ImagePreview_rna_properties, &rna_ImagePreview_icon_id};
	srna->identifier = "ImagePreview";
	srna->flag = 516;
	srna->name = "Image Preview";
	srna->description = "Preview image and icon";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ImagePreview_rna_properties;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "reload";
		func->description = "Reload the preview from its source path";
		func->call = ImagePreview_reload_call;
		rna_ImagePreview_reload_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* ID Property */
static CollectionPropertyRNA rna_PropertyGroupItem_rna_properties_;
PropertyRNA &rna_PropertyGroupItem_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_rna_properties_);

static PointerPropertyRNA rna_PropertyGroupItem_rna_type_;
PropertyRNA &rna_PropertyGroupItem_rna_type = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_rna_type_);

static StringPropertyRNA rna_PropertyGroupItem_string_;
PropertyRNA &rna_PropertyGroupItem_string = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_string_);

static IntPropertyRNA rna_PropertyGroupItem_int_;
PropertyRNA &rna_PropertyGroupItem_int = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_int_);

static IntPropertyRNA rna_PropertyGroupItem_int_array_;
PropertyRNA &rna_PropertyGroupItem_int_array = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_int_array_);

static FloatPropertyRNA rna_PropertyGroupItem_float_;
PropertyRNA &rna_PropertyGroupItem_float = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_float_);

static FloatPropertyRNA rna_PropertyGroupItem_float_array_;
PropertyRNA &rna_PropertyGroupItem_float_array = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_float_array_);

static FloatPropertyRNA rna_PropertyGroupItem_double_;
PropertyRNA &rna_PropertyGroupItem_double = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_double_);

static FloatPropertyRNA rna_PropertyGroupItem_double_array_;
PropertyRNA &rna_PropertyGroupItem_double_array = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_double_array_);

static BoolPropertyRNA rna_PropertyGroupItem_bool_;
PropertyRNA &rna_PropertyGroupItem_bool = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_bool_);

static BoolPropertyRNA rna_PropertyGroupItem_bool_array_;
PropertyRNA &rna_PropertyGroupItem_bool_array = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_bool_array_);

static EnumPropertyRNA rna_PropertyGroupItem_enum_;
PropertyRNA &rna_PropertyGroupItem_enum = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_enum_);

static PointerPropertyRNA rna_PropertyGroupItem_group_;
PropertyRNA &rna_PropertyGroupItem_group = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_group_);

static CollectionPropertyRNA rna_PropertyGroupItem_collection_;
PropertyRNA &rna_PropertyGroupItem_collection = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_collection_);

static CollectionPropertyRNA rna_PropertyGroupItem_idp_array_;
PropertyRNA &rna_PropertyGroupItem_idp_array = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_idp_array_);

static PointerPropertyRNA rna_PropertyGroupItem_id_;
PropertyRNA &rna_PropertyGroupItem_id = reinterpret_cast<PropertyRNA &>(rna_PropertyGroupItem_id_);

StructRNA *RNA_PropertyGroupItem;
void register_struct_PropertyGroupItem(BlenderRNA &brna)
{
	rna_PropertyGroupItem_rna_properties_ = {
		{&rna_PropertyGroupItem_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PropertyGroupItem_rna_properties_begin, PropertyGroupItem_rna_properties_next, PropertyGroupItem_rna_properties_end, PropertyGroupItem_rna_properties_get, nullptr, nullptr, PropertyGroupItem_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PropertyGroupItem_rna_type_ = {
		{&rna_PropertyGroupItem_string, 	&rna_PropertyGroupItem_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PropertyGroupItem_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PropertyGroupItem_string_ = {
		{&rna_PropertyGroupItem_int, 	&rna_PropertyGroupItem_rna_type,
		-1, "string", 263169, 0, 0, 0, 0, PropertyPathTemplateType(0), "string",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_PropertyGroupItem_int_ = {
		{&rna_PropertyGroupItem_int_array, 	&rna_PropertyGroupItem_string,
		-1, "int", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "int",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static int rna_PropertyGroupItem_int_array_default[1] = {
		0
	};
	rna_PropertyGroupItem_int_array_ = {
		{&rna_PropertyGroupItem_float, 	&rna_PropertyGroupItem_int,
		-1, "int_array", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "int_array",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_PropertyGroupItem_int_array_default
	};

	rna_PropertyGroupItem_float_ = {
		{&rna_PropertyGroupItem_float_array, 	&rna_PropertyGroupItem_int_array,
		-1, "float", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "float",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_PropertyGroupItem_float_array_default[1] = {
		0.0f
	};
	rna_PropertyGroupItem_float_array_ = {
		{&rna_PropertyGroupItem_double, 	&rna_PropertyGroupItem_float,
		-1, "float_array", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "float_array",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PropertyGroupItem_float_array_default
	};

	rna_PropertyGroupItem_double_ = {
		{&rna_PropertyGroupItem_double_array, 	&rna_PropertyGroupItem_float_array,
		-1, "double", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "double",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_PropertyGroupItem_double_array_default[1] = {
		0.0f
	};
	rna_PropertyGroupItem_double_array_ = {
		{&rna_PropertyGroupItem_bool, 	&rna_PropertyGroupItem_double,
		-1, "double_array", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "double_array",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PropertyGroupItem_double_array_default
	};

	rna_PropertyGroupItem_bool_ = {
		{&rna_PropertyGroupItem_bool_array, 	&rna_PropertyGroupItem_double_array,
		-1, "bool", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "bool",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static bool rna_PropertyGroupItem_bool_array_default[1] = {
		0
	};
	rna_PropertyGroupItem_bool_array_ = {
		{&rna_PropertyGroupItem_enum, 	&rna_PropertyGroupItem_bool,
		-1, "bool_array", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "bool_array",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_PropertyGroupItem_bool_array_default
	};

	rna_PropertyGroupItem_enum_ = {
		{&rna_PropertyGroupItem_group, 	&rna_PropertyGroupItem_bool_array,
		-1, "enum", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "enum",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};

	rna_PropertyGroupItem_group_ = {
		{&rna_PropertyGroupItem_collection, 	&rna_PropertyGroupItem_enum,
		-1, "group", 8389632, 0, 0, 0, 0, PropertyPathTemplateType(0), "group",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};

	rna_PropertyGroupItem_collection_ = {
		{&rna_PropertyGroupItem_idp_array, 	&rna_PropertyGroupItem_group,
		-1, "collection", 1024, 0, 0, 0, 0, PropertyPathTemplateType(0), "collection",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, RNA_PropertyGroup
	};

	rna_PropertyGroupItem_idp_array_ = {
		{&rna_PropertyGroupItem_id, 	&rna_PropertyGroupItem_collection,
		-1, "idp_array", 1024, 0, 0, 8, 0, PropertyPathTemplateType(0), "idp_array",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PropertyGroupItem_idp_array_begin, PropertyGroupItem_idp_array_next, PropertyGroupItem_idp_array_end, PropertyGroupItem_idp_array_get, PropertyGroupItem_idp_array_length, nullptr, nullptr, nullptr, RNA_PropertyGroup
	};

	rna_PropertyGroupItem_id_ = {
		{nullptr, 	&rna_PropertyGroupItem_idp_array,
		-1, "id", 8389761, 0, 0, 0, 0, PropertyPathTemplateType(0), "id",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};

	StructRNA *srna = RNA_PropertyGroupItem;
	srna->cont.properties = {&rna_PropertyGroupItem_rna_properties, &rna_PropertyGroupItem_id};
	srna->identifier = "PropertyGroupItem";
	srna->flag = 516;
	srna->name = "ID Property";
	srna->description = "Property that stores arbitrary, user defined properties";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PropertyGroupItem_rna_properties;
};

/* ID Property Group */
static CollectionPropertyRNA rna_PropertyGroup_rna_properties_;
PropertyRNA &rna_PropertyGroup_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PropertyGroup_rna_properties_);

static PointerPropertyRNA rna_PropertyGroup_rna_type_;
PropertyRNA &rna_PropertyGroup_rna_type = reinterpret_cast<PropertyRNA &>(rna_PropertyGroup_rna_type_);

static StringPropertyRNA rna_PropertyGroup_name_;
PropertyRNA &rna_PropertyGroup_name = reinterpret_cast<PropertyRNA &>(rna_PropertyGroup_name_);

static BoolPropertyRNA rna_PropertyGroup_bl_system_properties_get_do_create_;
PropertyRNA &rna_PropertyGroup_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_PropertyGroup_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_PropertyGroup_bl_system_properties_get_system_properties_;
PropertyRNA &rna_PropertyGroup_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_PropertyGroup_bl_system_properties_get_system_properties_);

FunctionRNA *rna_PropertyGroup_bl_system_properties_get_func;
StructRNA *RNA_PropertyGroup;
void register_struct_PropertyGroup(BlenderRNA &brna)
{
	rna_PropertyGroup_rna_properties_ = {
		{&rna_PropertyGroup_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PropertyGroup_rna_properties_begin, PropertyGroup_rna_properties_next, PropertyGroup_rna_properties_end, PropertyGroup_rna_properties_get, nullptr, nullptr, PropertyGroup_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PropertyGroup_rna_type_ = {
		{&rna_PropertyGroup_name, 	&rna_PropertyGroup_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PropertyGroup_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PropertyGroup_name_ = {
		{nullptr, 	&rna_PropertyGroup_rna_type,
		-1, "name", 263169, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Unique name used in the code and scripting, can be re-defined in Python sub-classes if needed",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_PropertyGroup;
	srna->cont.properties = {&rna_PropertyGroup_rna_properties, &rna_PropertyGroup_name};
	srna->identifier = "PropertyGroup";
	srna->flag = 516;
	srna->name = "ID Property Group";
	srna->description = "Group of ID properties";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_PropertyGroup_name;
	srna->iteratorproperty = &rna_PropertyGroup_rna_properties;
	srna->refine = rna_PropertyGroup_refine;
	srna->reg = rna_PropertyGroup_register;
	srna->unreg = rna_PropertyGroup_unregister;
	srna->idproperties = rna_PropertyGroup_idprops;
	srna->system_idproperties = rna_PropertyGroup_idprops;
	{
	rna_PropertyGroup_bl_system_properties_get_do_create_ = {
		{&rna_PropertyGroup_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_PropertyGroup_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_PropertyGroup_bl_system_properties_get_do_create,
		-1, "system_properties", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The system properties root container, or None if there are no system properties stored in this data yet, and its creation was not requested",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PropertyGroup_bl_system_properties_get_do_create, &rna_PropertyGroup_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = PropertyGroup_bl_system_properties_get_call;
		func->c_ret = &rna_PropertyGroup_bl_system_properties_get_system_properties;
		rna_PropertyGroup_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* ID Materials */
static CollectionPropertyRNA rna_IDMaterials_rna_properties_;
PropertyRNA &rna_IDMaterials_rna_properties = reinterpret_cast<PropertyRNA &>(rna_IDMaterials_rna_properties_);

static PointerPropertyRNA rna_IDMaterials_rna_type_;
PropertyRNA &rna_IDMaterials_rna_type = reinterpret_cast<PropertyRNA &>(rna_IDMaterials_rna_type_);

static PointerPropertyRNA rna_IDMaterials_append_material_;
PropertyRNA &rna_IDMaterials_append_material = reinterpret_cast<PropertyRNA &>(rna_IDMaterials_append_material_);

FunctionRNA *rna_IDMaterials_append_func;
static IntPropertyRNA rna_IDMaterials_pop_index_;
PropertyRNA &rna_IDMaterials_pop_index = reinterpret_cast<PropertyRNA &>(rna_IDMaterials_pop_index_);

static PointerPropertyRNA rna_IDMaterials_pop_material_;
PropertyRNA &rna_IDMaterials_pop_material = reinterpret_cast<PropertyRNA &>(rna_IDMaterials_pop_material_);

FunctionRNA *rna_IDMaterials_pop_func;
FunctionRNA *rna_IDMaterials_clear_func;
StructRNA *RNA_IDMaterials;
void register_struct_IDMaterials(BlenderRNA &brna)
{
	rna_IDMaterials_rna_properties_ = {
		{&rna_IDMaterials_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDMaterials_rna_properties_begin, IDMaterials_rna_properties_next, IDMaterials_rna_properties_end, IDMaterials_rna_properties_get, nullptr, nullptr, IDMaterials_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_IDMaterials_rna_type_ = {
		{nullptr, 	&rna_IDMaterials_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDMaterials_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_IDMaterials;
	srna->cont.properties = {&rna_IDMaterials_rna_properties, &rna_IDMaterials_rna_type};
	srna->identifier = "IDMaterials";
	srna->flag = 516;
	srna->name = "ID Materials";
	srna->description = "Collection of materials";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_IDMaterials_rna_properties;
	{
	rna_IDMaterials_append_material_ = {
		{nullptr, 	nullptr,
		-1, "material", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Material to add",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Material
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_IDMaterials_append_material, &rna_IDMaterials_append_material};
		func->identifier = "append";
		func->flag = 4;
		func->description = "Add a new material to the data-block";
		func->call = IDMaterials_append_call;
		rna_IDMaterials_append_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_IDMaterials_pop_index_ = {
		{&rna_IDMaterials_pop_material, 	nullptr,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Index of material to remove",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32766, -32766, 32766, 1, nullptr, nullptr, -1, nullptr
	};
	rna_IDMaterials_pop_material_ = {
		{nullptr, 	&rna_IDMaterials_pop_index,
		-1, "material", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Material to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Material
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_IDMaterials_pop_index, &rna_IDMaterials_pop_material};
		func->identifier = "pop";
		func->flag = 20;
		func->description = "Remove a material from the data-block";
		func->call = IDMaterials_pop_call;
		func->c_ret = &rna_IDMaterials_pop_material;
		rna_IDMaterials_pop_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 4;
		func->description = "Remove all materials from the data-block";
		func->call = IDMaterials_clear_call;
		rna_IDMaterials_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Library */
static StringPropertyRNA rna_Library_filepath_;
PropertyRNA &rna_Library_filepath = reinterpret_cast<PropertyRNA &>(rna_Library_filepath_);

static PointerPropertyRNA rna_Library_parent_;
PropertyRNA &rna_Library_parent = reinterpret_cast<PropertyRNA &>(rna_Library_parent_);

static PointerPropertyRNA rna_Library_packed_file_;
PropertyRNA &rna_Library_packed_file = reinterpret_cast<PropertyRNA &>(rna_Library_packed_file_);

static IntPropertyRNA rna_Library_version_;
PropertyRNA &rna_Library_version = reinterpret_cast<PropertyRNA &>(rna_Library_version_);

static BoolPropertyRNA rna_Library_needs_liboverride_resync_;
PropertyRNA &rna_Library_needs_liboverride_resync = reinterpret_cast<PropertyRNA &>(rna_Library_needs_liboverride_resync_);

static BoolPropertyRNA rna_Library_is_editable_;
PropertyRNA &rna_Library_is_editable = reinterpret_cast<PropertyRNA &>(rna_Library_is_editable_);

static BoolPropertyRNA rna_Library_is_archive_;
PropertyRNA &rna_Library_is_archive = reinterpret_cast<PropertyRNA &>(rna_Library_is_archive_);

static PointerPropertyRNA rna_Library_archive_parent_library_;
PropertyRNA &rna_Library_archive_parent_library = reinterpret_cast<PropertyRNA &>(rna_Library_archive_parent_library_);

static CollectionPropertyRNA rna_Library_archive_libraries_;
PropertyRNA &rna_Library_archive_libraries = reinterpret_cast<PropertyRNA &>(rna_Library_archive_libraries_);

FunctionRNA *rna_Library_reload_func;
StructRNA *RNA_Library;
void register_struct_Library(BlenderRNA &brna)
{
	rna_Library_filepath_ = {
		{&rna_Library_parent, 	nullptr,
		-1, "filepath", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"Path to the library .blend file",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Library_filepath_get, Library_filepath_length, Library_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_Library_parent_ = {
		{&rna_Library_packed_file, 	&rna_Library_filepath,
		-1, "parent", 8388736, 2, 0, 0, 0, PropertyPathTemplateType(0), "Parent",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Library_parent_get, nullptr, nullptr, nullptr,RNA_Library
	};

	rna_Library_packed_file_ = {
		{&rna_Library_version, 	&rna_Library_parent,
		-1, "packed_file", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Packed File",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Library_packed_file_get, nullptr, nullptr, nullptr,RNA_PackedFile
	};

	static int rna_Library_version_default[3] = {
		0,
		0,
		0
	};
	rna_Library_version_ = {
		{&rna_Library_needs_liboverride_resync, 	&rna_Library_packed_file,
		-1, "version", 8388610, 0, 0, 0, 0, PropertyPathTemplateType(0), "Version",
		"Version of Blender the library .blend was saved with",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Library_version_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_Library_version_default
	};

	rna_Library_needs_liboverride_resync_ = {
		{&rna_Library_is_editable, 	&rna_Library_version,
		-1, "needs_liboverride_resync", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Library Overrides Need resync",
		"True if this library contains library overrides that are linked in current blendfile, and that had to be recursively resynced on load (it is recommended to open and re-save that library blendfile then)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Library_needs_liboverride_resync_get, Library_needs_liboverride_resync_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Library_is_editable_ = {
		{&rna_Library_is_archive, 	&rna_Library_needs_liboverride_resync,
		-1, "is_editable", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Editable",
		"Data-blocks in this library are editable despite being linked. Used by brush assets and their dependencies.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Library_is_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Library_is_archive_ = {
		{&rna_Library_archive_parent_library, 	&rna_Library_is_editable,
		-1, "is_archive", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Archive",
		"This library is an \'archive\' storage for packed linked IDs originally linked from its \'archive parent\' library.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Library_is_archive_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Library_archive_parent_library_ = {
		{&rna_Library_archive_libraries, 	&rna_Library_is_archive,
		-1, "archive_parent_library", 8388800, 2, 0, 0, 0, PropertyPathTemplateType(0), "Parent Archive Library",
		"Source library from which this archive of packed IDs was generated",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Library_archive_parent_library_get, nullptr, nullptr, nullptr,RNA_Library
	};

	rna_Library_archive_libraries_ = {
		{nullptr, 	&rna_Library_archive_parent_library,
		-1, "archive_libraries", 128, 2, 0, 0, 0, PropertyPathTemplateType(0), "Archive Libraries",
		"Archive libraries of packed IDs, generated (and owned) by this source library",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Library_archive_libraries_begin, Library_archive_libraries_next, Library_archive_libraries_end, Library_archive_libraries_get, Library_archive_libraries_length, Library_archive_libraries_lookup_int, nullptr, nullptr, RNA_Library
	};

	StructRNA *srna = RNA_Library;
	srna->cont.properties = {&rna_Library_filepath, &rna_Library_archive_libraries};
	srna->identifier = "Library";
	srna->flag = 519;
	srna->name = "Library";
	srna->description = "External .blend file from which data is linked";
	srna->translation_context = "*";
	srna->icon = 216;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "reload";
		func->flag = 24;
		func->description = "Reload this library and all its linked data-blocks";
		func->call = Library_reload_call;
		rna_Library_reload_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* LibraryWeakReference */
static CollectionPropertyRNA rna_LibraryWeakReference_rna_properties_;
PropertyRNA &rna_LibraryWeakReference_rna_properties = reinterpret_cast<PropertyRNA &>(rna_LibraryWeakReference_rna_properties_);

static PointerPropertyRNA rna_LibraryWeakReference_rna_type_;
PropertyRNA &rna_LibraryWeakReference_rna_type = reinterpret_cast<PropertyRNA &>(rna_LibraryWeakReference_rna_type_);

static StringPropertyRNA rna_LibraryWeakReference_filepath_;
PropertyRNA &rna_LibraryWeakReference_filepath = reinterpret_cast<PropertyRNA &>(rna_LibraryWeakReference_filepath_);

static StringPropertyRNA rna_LibraryWeakReference_id_name_;
PropertyRNA &rna_LibraryWeakReference_id_name = reinterpret_cast<PropertyRNA &>(rna_LibraryWeakReference_id_name_);

StructRNA *RNA_LibraryWeakReference;
void register_struct_LibraryWeakReference(BlenderRNA &brna)
{
	rna_LibraryWeakReference_rna_properties_ = {
		{&rna_LibraryWeakReference_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LibraryWeakReference_rna_properties_begin, LibraryWeakReference_rna_properties_next, LibraryWeakReference_rna_properties_end, LibraryWeakReference_rna_properties_get, nullptr, nullptr, LibraryWeakReference_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_LibraryWeakReference_rna_type_ = {
		{&rna_LibraryWeakReference_filepath, 	&rna_LibraryWeakReference_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LibraryWeakReference_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_LibraryWeakReference_filepath_ = {
		{&rna_LibraryWeakReference_id_name, 	&rna_LibraryWeakReference_rna_type,
		-1, "filepath", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"Path to the library .blend file",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LibraryWeakReference_filepath_get, LibraryWeakReference_filepath_length, LibraryWeakReference_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_LibraryWeakReference_id_name_ = {
		{nullptr, 	&rna_LibraryWeakReference_filepath,
		-1, "id_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID name",
		"Full ID name in the library .blend file (including the two leading \'id type\' chars)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {258, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LibraryWeakReference_id_name_get, LibraryWeakReference_id_name_length, LibraryWeakReference_id_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 258, ""
	};

	StructRNA *srna = RNA_LibraryWeakReference;
	srna->cont.properties = {&rna_LibraryWeakReference_rna_properties, &rna_LibraryWeakReference_id_name};
	srna->identifier = "LibraryWeakReference";
	srna->flag = 516;
	srna->name = "LibraryWeakReference";
	srna->description = "Read-only external reference to a linked data-block and its library file";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_LibraryWeakReference_rna_properties;
};

/* IDPropertyWrapPtr */
static CollectionPropertyRNA rna_IDPropertyWrapPtr_rna_properties_;
PropertyRNA &rna_IDPropertyWrapPtr_rna_properties = reinterpret_cast<PropertyRNA &>(rna_IDPropertyWrapPtr_rna_properties_);

static PointerPropertyRNA rna_IDPropertyWrapPtr_rna_type_;
PropertyRNA &rna_IDPropertyWrapPtr_rna_type = reinterpret_cast<PropertyRNA &>(rna_IDPropertyWrapPtr_rna_type_);

static BoolPropertyRNA rna_IDPropertyWrapPtr_bl_system_properties_get_do_create_;
PropertyRNA &rna_IDPropertyWrapPtr_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_IDPropertyWrapPtr_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_IDPropertyWrapPtr_bl_system_properties_get_system_properties_;
PropertyRNA &rna_IDPropertyWrapPtr_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_IDPropertyWrapPtr_bl_system_properties_get_system_properties_);

FunctionRNA *rna_IDPropertyWrapPtr_bl_system_properties_get_func;
StructRNA *RNA_IDPropertyWrapPtr;
void register_struct_IDPropertyWrapPtr(BlenderRNA &brna)
{
	rna_IDPropertyWrapPtr_rna_properties_ = {
		{&rna_IDPropertyWrapPtr_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDPropertyWrapPtr_rna_properties_begin, IDPropertyWrapPtr_rna_properties_next, IDPropertyWrapPtr_rna_properties_end, IDPropertyWrapPtr_rna_properties_get, nullptr, nullptr, IDPropertyWrapPtr_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_IDPropertyWrapPtr_rna_type_ = {
		{nullptr, 	&rna_IDPropertyWrapPtr_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IDPropertyWrapPtr_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_IDPropertyWrapPtr;
	srna->cont.properties = {&rna_IDPropertyWrapPtr_rna_properties, &rna_IDPropertyWrapPtr_rna_type};
	srna->identifier = "IDPropertyWrapPtr";
	srna->flag = 644;
	srna->name = "IDPropertyWrapPtr";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_IDPropertyWrapPtr_rna_properties;
	srna->idproperties = rna_IDPropertyWrapPtr_idprops;
	srna->system_idproperties = rna_IDPropertyWrapPtr_idprops;
	{
	rna_IDPropertyWrapPtr_bl_system_properties_get_do_create_ = {
		{&rna_IDPropertyWrapPtr_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_IDPropertyWrapPtr_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_IDPropertyWrapPtr_bl_system_properties_get_do_create,
		-1, "system_properties", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The system properties root container, or None if there are no system properties stored in this data yet, and its creation was not requested",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_IDPropertyWrapPtr_bl_system_properties_get_do_create, &rna_IDPropertyWrapPtr_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = IDPropertyWrapPtr_bl_system_properties_get_call;
		func->c_ret = &rna_IDPropertyWrapPtr_bl_system_properties_get_system_properties;
		rna_IDPropertyWrapPtr_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};

BlenderRNA rna_blender_rna_create()
{
	BlenderRNA brna{};
	brna.structs.resize(1736);
	for (const int i : brna.structs.index_range()) {
		brna.structs[i] = std::make_unique<StructRNA>();
	}
	RNA_Struct = brna.structs[0].get();
	RNA_Property = brna.structs[1].get();
	RNA_BoolProperty = brna.structs[2].get();
	RNA_IntProperty = brna.structs[3].get();
	RNA_FloatProperty = brna.structs[4].get();
	RNA_StringProperty = brna.structs[5].get();
	RNA_EnumProperty = brna.structs[6].get();
	RNA_EnumPropertyItem = brna.structs[7].get();
	RNA_PointerProperty = brna.structs[8].get();
	RNA_CollectionProperty = brna.structs[9].get();
	RNA_Function = brna.structs[10].get();
	RNA_BlenderRNA = brna.structs[11].get();
	RNA_PrimitiveString = brna.structs[12].get();
	RNA_PrimitiveInt = brna.structs[13].get();
	RNA_PrimitiveFloat = brna.structs[14].get();
	RNA_PrimitiveBoolean = brna.structs[15].get();
	RNA_UnknownType = brna.structs[16].get();
	RNA_AnyType = brna.structs[17].get();
	RNA_ID = brna.structs[18].get();
	RNA_IDOverrideLibrary = brna.structs[19].get();
	RNA_IDOverrideLibraryProperties = brna.structs[20].get();
	RNA_IDOverrideLibraryProperty = brna.structs[21].get();
	RNA_IDOverrideLibraryPropertyOperations = brna.structs[22].get();
	RNA_IDOverrideLibraryPropertyOperation = brna.structs[23].get();
	RNA_ImagePreview = brna.structs[24].get();
	RNA_PropertyGroupItem = brna.structs[25].get();
	RNA_PropertyGroup = brna.structs[26].get();
	RNA_IDMaterials = brna.structs[27].get();
	RNA_Library = brna.structs[28].get();
	RNA_LibraryWeakReference = brna.structs[29].get();
	RNA_IDPropertyWrapPtr = brna.structs[30].get();
	RNA_Texture = brna.structs[31].get();
	RNA_CloudsTexture = brna.structs[32].get();
	RNA_WoodTexture = brna.structs[33].get();
	RNA_MarbleTexture = brna.structs[34].get();
	RNA_MagicTexture = brna.structs[35].get();
	RNA_BlendTexture = brna.structs[36].get();
	RNA_StucciTexture = brna.structs[37].get();
	RNA_NoiseTexture = brna.structs[38].get();
	RNA_ImageTexture = brna.structs[39].get();
	RNA_MusgraveTexture = brna.structs[40].get();
	RNA_VoronoiTexture = brna.structs[41].get();
	RNA_DistortedNoiseTexture = brna.structs[42].get();
	RNA_TextureSlot = brna.structs[43].get();
	RNA_TexMapping = brna.structs[44].get();
	RNA_ColorMapping = brna.structs[45].get();
	RNA_Action = brna.structs[46].get();
	RNA_ActionSlots = brna.structs[47].get();
	RNA_ActionLayers = brna.structs[48].get();
	RNA_ActionPoseMarkers = brna.structs[49].get();
	RNA_ActionGroup = brna.structs[50].get();
	RNA_DopeSheet = brna.structs[51].get();
	RNA_ActionSlot = brna.structs[52].get();
	RNA_ActionLayer = brna.structs[53].get();
	RNA_ActionStrips = brna.structs[54].get();
	RNA_ActionStrip = brna.structs[55].get();
	RNA_ActionKeyframeStrip = brna.structs[56].get();
	RNA_ActionChannelbags = brna.structs[57].get();
	RNA_ActionChannelbag = brna.structs[58].get();
	RNA_ActionChannelbagFCurves = brna.structs[59].get();
	RNA_ActionChannelbagGroups = brna.structs[60].get();
	RNA_AnimData = brna.structs[61].get();
	RNA_NlaTracks = brna.structs[62].get();
	RNA_AnimDataDrivers = brna.structs[63].get();
	RNA_KeyingSet = brna.structs[64].get();
	RNA_KeyingSetPaths = brna.structs[65].get();
	RNA_KeyingSetPath = brna.structs[66].get();
	RNA_KeyingSetInfo = brna.structs[67].get();
	RNA_AnimViz = brna.structs[68].get();
	RNA_AnimVizMotionPaths = brna.structs[69].get();
	RNA_MotionPath = brna.structs[70].get();
	RNA_MotionPathVert = brna.structs[71].get();
	RNA_BoneColor = brna.structs[72].get();
	RNA_BoneCollection = brna.structs[73].get();
	RNA_Armature = brna.structs[74].get();
	RNA_ArmatureBones = brna.structs[75].get();
	RNA_ArmatureEditBones = brna.structs[76].get();
	RNA_BoneCollections = brna.structs[77].get();
	RNA_Bone = brna.structs[78].get();
	RNA_BoneCollectionMemberships = brna.structs[79].get();
	RNA_EditBone = brna.structs[80].get();
	RNA_Attribute = brna.structs[81].get();
	RNA_FloatAttribute = brna.structs[82].get();
	RNA_FloatAttributeValue = brna.structs[83].get();
	RNA_FloatVectorAttribute = brna.structs[84].get();
	RNA_FloatVectorAttributeValue = brna.structs[85].get();
	RNA_FloatColorAttribute = brna.structs[86].get();
	RNA_FloatColorAttributeValue = brna.structs[87].get();
	RNA_ByteColorAttribute = brna.structs[88].get();
	RNA_ByteColorAttributeValue = brna.structs[89].get();
	RNA_IntAttribute = brna.structs[90].get();
	RNA_IntAttributeValue = brna.structs[91].get();
	RNA_Short2Attribute = brna.structs[92].get();
	RNA_Short2AttributeValue = brna.structs[93].get();
	RNA_Int2Attribute = brna.structs[94].get();
	RNA_Int2AttributeValue = brna.structs[95].get();
	RNA_QuaternionAttribute = brna.structs[96].get();
	RNA_QuaternionAttributeValue = brna.structs[97].get();
	RNA_Float4x4Attribute = brna.structs[98].get();
	RNA_Float4x4AttributeValue = brna.structs[99].get();
	RNA_StringAttribute = brna.structs[100].get();
	RNA_StringAttributeValue = brna.structs[101].get();
	RNA_BoolAttribute = brna.structs[102].get();
	RNA_BoolAttributeValue = brna.structs[103].get();
	RNA_Float2Attribute = brna.structs[104].get();
	RNA_Float2AttributeValue = brna.structs[105].get();
	RNA_Float4Attribute = brna.structs[106].get();
	RNA_Float4AttributeValue = brna.structs[107].get();
	RNA_ByteIntAttribute = brna.structs[108].get();
	RNA_ByteIntAttributeValue = brna.structs[109].get();
	RNA_AttributeGroupMesh = brna.structs[110].get();
	RNA_AttributeGroupPointCloud = brna.structs[111].get();
	RNA_AttributeGroupCurves = brna.structs[112].get();
	RNA_AttributeGroupGreasePencil = brna.structs[113].get();
	RNA_AttributeGroupGreasePencilDrawing = brna.structs[114].get();
	RNA_AssetTag = brna.structs[115].get();
	RNA_AssetMetaData = brna.structs[116].get();
	RNA_AssetTags = brna.structs[117].get();
	RNA_AssetLibraryReference = brna.structs[118].get();
	RNA_AssetLibrary = brna.structs[119].get();
	RNA_AssetRepresentation = brna.structs[120].get();
	RNA_AssetWeakReference = brna.structs[121].get();
	RNA_BlenderProject = brna.structs[122].get();
	RNA_BoidRule = brna.structs[123].get();
	RNA_BoidRuleGoal = brna.structs[124].get();
	RNA_BoidRuleAvoid = brna.structs[125].get();
	RNA_BoidRuleAvoidCollision = brna.structs[126].get();
	RNA_BoidRuleFollowLeader = brna.structs[127].get();
	RNA_BoidRuleAverageSpeed = brna.structs[128].get();
	RNA_BoidRuleFight = brna.structs[129].get();
	RNA_BoidState = brna.structs[130].get();
	RNA_BoidSettings = brna.structs[131].get();
	RNA_Brush = brna.structs[132].get();
	RNA_BrushCapabilities = brna.structs[133].get();
	RNA_BrushCapabilitiesSculpt = brna.structs[134].get();
	RNA_BrushCapabilitiesImagePaint = brna.structs[135].get();
	RNA_BrushCapabilitiesVertexPaint = brna.structs[136].get();
	RNA_BrushCapabilitiesWeightPaint = brna.structs[137].get();
	RNA_BrushGpencilSettings = brna.structs[138].get();
	RNA_BrushCurvesSculptSettings = brna.structs[139].get();
	RNA_BrushTextureSlot = brna.structs[140].get();
	RNA_OperatorStrokeElement = brna.structs[141].get();
	RNA_CacheFile = brna.structs[142].get();
	RNA_CacheFileLayers = brna.structs[143].get();
	RNA_CacheObjectPaths = brna.structs[144].get();
	RNA_CacheObjectPath = brna.structs[145].get();
	RNA_CacheFileLayer = brna.structs[146].get();
	RNA_Camera = brna.structs[147].get();
	RNA_CameraBackgroundImage = brna.structs[148].get();
	RNA_CameraBackgroundImages = brna.structs[149].get();
	RNA_CameraStereoData = brna.structs[150].get();
	RNA_CameraDOFSettings = brna.structs[151].get();
	RNA_ClothSolverResult = brna.structs[152].get();
	RNA_ClothSettings = brna.structs[153].get();
	RNA_ClothCollisionSettings = brna.structs[154].get();
	RNA_Collection = brna.structs[155].get();
	RNA_CollectionObjects = brna.structs[156].get();
	RNA_CollectionChildren = brna.structs[157].get();
	RNA_CollectionExports = brna.structs[158].get();
	RNA_CollectionLightLinking = brna.structs[159].get();
	RNA_CollectionObject = brna.structs[160].get();
	RNA_CollectionChild = brna.structs[161].get();
	RNA_CollectionImport = brna.structs[162].get();
	RNA_CollectionExport = brna.structs[163].get();
	RNA_CurveMapPoint = brna.structs[164].get();
	RNA_CurveMap = brna.structs[165].get();
	RNA_CurveMapPoints = brna.structs[166].get();
	RNA_CurveMapping = brna.structs[167].get();
	RNA_ColorRampElement = brna.structs[168].get();
	RNA_ColorRamp = brna.structs[169].get();
	RNA_ColorRampElements = brna.structs[170].get();
	RNA_Histogram = brna.structs[171].get();
	RNA_Scopes = brna.structs[172].get();
	RNA_ColorManagedDisplaySettings = brna.structs[173].get();
	RNA_ColorManagedViewSettings = brna.structs[174].get();
	RNA_ColorManagedInputColorspaceSettings = brna.structs[175].get();
	RNA_ColorManagedSequencerColorspaceSettings = brna.structs[176].get();
	RNA_Constraint = brna.structs[177].get();
	RNA_ConstraintTarget = brna.structs[178].get();
	RNA_ConstraintTargetBone = brna.structs[179].get();
	RNA_ChildOfConstraint = brna.structs[180].get();
	RNA_ArmatureConstraint = brna.structs[181].get();
	RNA_ArmatureConstraintTargets = brna.structs[182].get();
	RNA_StretchToConstraint = brna.structs[183].get();
	RNA_FollowPathConstraint = brna.structs[184].get();
	RNA_LockedTrackConstraint = brna.structs[185].get();
	RNA_ActionConstraint = brna.structs[186].get();
	RNA_CopyScaleConstraint = brna.structs[187].get();
	RNA_MaintainVolumeConstraint = brna.structs[188].get();
	RNA_CopyLocationConstraint = brna.structs[189].get();
	RNA_CopyRotationConstraint = brna.structs[190].get();
	RNA_CopyTransformsConstraint = brna.structs[191].get();
	RNA_FloorConstraint = brna.structs[192].get();
	RNA_TrackToConstraint = brna.structs[193].get();
	RNA_KinematicConstraint = brna.structs[194].get();
	RNA_ClampToConstraint = brna.structs[195].get();
	RNA_LimitDistanceConstraint = brna.structs[196].get();
	RNA_LimitScaleConstraint = brna.structs[197].get();
	RNA_LimitRotationConstraint = brna.structs[198].get();
	RNA_LimitLocationConstraint = brna.structs[199].get();
	RNA_TransformConstraint = brna.structs[200].get();
	RNA_ShrinkwrapConstraint = brna.structs[201].get();
	RNA_DampedTrackConstraint = brna.structs[202].get();
	RNA_SplineIKConstraint = brna.structs[203].get();
	RNA_PivotConstraint = brna.structs[204].get();
	RNA_FollowTrackConstraint = brna.structs[205].get();
	RNA_CameraSolverConstraint = brna.structs[206].get();
	RNA_ObjectSolverConstraint = brna.structs[207].get();
	RNA_TransformCacheConstraint = brna.structs[208].get();
	RNA_GeometryAttributeConstraint = brna.structs[209].get();
	RNA_Context = brna.structs[210].get();
	RNA_Curve = brna.structs[211].get();
	RNA_CurveSplines = brna.structs[212].get();
	RNA_SurfaceCurve = brna.structs[213].get();
	RNA_TextCurve = brna.structs[214].get();
	RNA_TextBox = brna.structs[215].get();
	RNA_TextCharacterFormat = brna.structs[216].get();
	RNA_SplinePoint = brna.structs[217].get();
	RNA_BezierSplinePoint = brna.structs[218].get();
	RNA_Spline = brna.structs[219].get();
	RNA_SplinePoints = brna.structs[220].get();
	RNA_SplineBezierPoints = brna.structs[221].get();
	RNA_DynamicPaintCanvasSettings = brna.structs[222].get();
	RNA_DynamicPaintSurfaces = brna.structs[223].get();
	RNA_DynamicPaintBrushSettings = brna.structs[224].get();
	RNA_DynamicPaintSurface = brna.structs[225].get();
	RNA_FCurve = brna.structs[226].get();
	RNA_FCurveKeyframePoints = brna.structs[227].get();
	RNA_FCurveModifiers = brna.structs[228].get();
	RNA_Keyframe = brna.structs[229].get();
	RNA_FCurveSample = brna.structs[230].get();
	RNA_DriverTarget = brna.structs[231].get();
	RNA_DriverVariable = brna.structs[232].get();
	RNA_Driver = brna.structs[233].get();
	RNA_ChannelDriverVariables = brna.structs[234].get();
	RNA_FModifier = brna.structs[235].get();
	RNA_FModifierGenerator = brna.structs[236].get();
	RNA_FModifierFunctionGenerator = brna.structs[237].get();
	RNA_FModifierEnvelope = brna.structs[238].get();
	RNA_FModifierEnvelopeControlPoints = brna.structs[239].get();
	RNA_FModifierEnvelopeControlPoint = brna.structs[240].get();
	RNA_FModifierCycles = brna.structs[241].get();
	RNA_FModifierLimits = brna.structs[242].get();
	RNA_FModifierNoise = brna.structs[243].get();
	RNA_FModifierStepped = brna.structs[244].get();
	RNA_FModifierSmooth = brna.structs[245].get();
	RNA_Annotation = brna.structs[246].get();
	RNA_AnnotationLayers = brna.structs[247].get();
	RNA_AnnotationLayer = brna.structs[248].get();
	RNA_AnnotationFrames = brna.structs[249].get();
	RNA_AnnotationFrame = brna.structs[250].get();
	RNA_AnnotationStrokes = brna.structs[251].get();
	RNA_AnnotationStroke = brna.structs[252].get();
	RNA_AnnotationStrokePoints = brna.structs[253].get();
	RNA_AnnotationStrokePoint = brna.structs[254].get();
	RNA_GreasePencil = brna.structs[255].get();
	RNA_GreasePencilv3Layers = brna.structs[256].get();
	RNA_GreasePencilv3LayerGroup = brna.structs[257].get();
	RNA_GreasePencilTreeNode = brna.structs[258].get();
	RNA_GreasePencilLayer = brna.structs[259].get();
	RNA_GreasePencilFrames = brna.structs[260].get();
	RNA_GreasePencilLayerMasks = brna.structs[261].get();
	RNA_GreasePencilLayerMask = brna.structs[262].get();
	RNA_GreasePencilLayerGroup = brna.structs[263].get();
	RNA_GreasePencilFrame = brna.structs[264].get();
	RNA_GreasePencilDrawing = brna.structs[265].get();
	RNA_CurvePoint = brna.structs[266].get();
	RNA_CurveSlice = brna.structs[267].get();
	RNA_Curves = brna.structs[268].get();
	RNA_FloatVectorValueReadOnly = brna.structs[269].get();
	RNA_RenderSlot = brna.structs[270].get();
	RNA_UDIMTile = brna.structs[271].get();
	RNA_Image = brna.structs[272].get();
	RNA_RenderSlots = brna.structs[273].get();
	RNA_UDIMTiles = brna.structs[274].get();
	RNA_ImageUser = brna.structs[275].get();
	RNA_ImagePackedFile = brna.structs[276].get();
	RNA_Key = brna.structs[277].get();
	RNA_ShapeKey = brna.structs[278].get();
	RNA_ShapeKeyPoint = brna.structs[279].get();
	RNA_ShapeKeyCurvePoint = brna.structs[280].get();
	RNA_ShapeKeyBezierPoint = brna.structs[281].get();
	RNA_Light = brna.structs[282].get();
	RNA_PointLight = brna.structs[283].get();
	RNA_AreaLight = brna.structs[284].get();
	RNA_SpotLight = brna.structs[285].get();
	RNA_SunLight = brna.structs[286].get();
	RNA_Lattice = brna.structs[287].get();
	RNA_LatticePoint = brna.structs[288].get();
	RNA_ViewLayer = brna.structs[289].get();
	RNA_AOVs = brna.structs[290].get();
	RNA_Lightgroups = brna.structs[291].get();
	RNA_LayerObjects = brna.structs[292].get();
	RNA_FreestyleLineSet = brna.structs[293].get();
	RNA_FreestyleModuleSettings = brna.structs[294].get();
	RNA_FreestyleSettings = brna.structs[295].get();
	RNA_FreestyleModules = brna.structs[296].get();
	RNA_Linesets = brna.structs[297].get();
	RNA_LayerCollection = brna.structs[298].get();
	RNA_ObjectBase = brna.structs[299].get();
	RNA_LineStyleModifier = brna.structs[300].get();
	RNA_LineStyleColorModifier = brna.structs[301].get();
	RNA_LineStyleColorModifier_AlongStroke = brna.structs[302].get();
	RNA_LineStyleColorModifier_DistanceFromCamera = brna.structs[303].get();
	RNA_LineStyleColorModifier_DistanceFromObject = brna.structs[304].get();
	RNA_LineStyleColorModifier_Material = brna.structs[305].get();
	RNA_LineStyleColorModifier_Tangent = brna.structs[306].get();
	RNA_LineStyleColorModifier_Noise = brna.structs[307].get();
	RNA_LineStyleColorModifier_CreaseAngle = brna.structs[308].get();
	RNA_LineStyleColorModifier_Curvature_3D = brna.structs[309].get();
	RNA_LineStyleAlphaModifier = brna.structs[310].get();
	RNA_LineStyleAlphaModifier_AlongStroke = brna.structs[311].get();
	RNA_LineStyleAlphaModifier_DistanceFromCamera = brna.structs[312].get();
	RNA_LineStyleAlphaModifier_DistanceFromObject = brna.structs[313].get();
	RNA_LineStyleAlphaModifier_Material = brna.structs[314].get();
	RNA_LineStyleAlphaModifier_Tangent = brna.structs[315].get();
	RNA_LineStyleAlphaModifier_Noise = brna.structs[316].get();
	RNA_LineStyleAlphaModifier_CreaseAngle = brna.structs[317].get();
	RNA_LineStyleAlphaModifier_Curvature_3D = brna.structs[318].get();
	RNA_LineStyleThicknessModifier = brna.structs[319].get();
	RNA_LineStyleThicknessModifier_Tangent = brna.structs[320].get();
	RNA_LineStyleThicknessModifier_AlongStroke = brna.structs[321].get();
	RNA_LineStyleThicknessModifier_DistanceFromCamera = brna.structs[322].get();
	RNA_LineStyleThicknessModifier_DistanceFromObject = brna.structs[323].get();
	RNA_LineStyleThicknessModifier_Material = brna.structs[324].get();
	RNA_LineStyleThicknessModifier_Calligraphy = brna.structs[325].get();
	RNA_LineStyleThicknessModifier_Noise = brna.structs[326].get();
	RNA_LineStyleThicknessModifier_Curvature_3D = brna.structs[327].get();
	RNA_LineStyleThicknessModifier_CreaseAngle = brna.structs[328].get();
	RNA_LineStyleGeometryModifier = brna.structs[329].get();
	RNA_LineStyleGeometryModifier_Sampling = brna.structs[330].get();
	RNA_LineStyleGeometryModifier_BezierCurve = brna.structs[331].get();
	RNA_LineStyleGeometryModifier_SinusDisplacement = brna.structs[332].get();
	RNA_LineStyleGeometryModifier_SpatialNoise = brna.structs[333].get();
	RNA_LineStyleGeometryModifier_PerlinNoise1D = brna.structs[334].get();
	RNA_LineStyleGeometryModifier_PerlinNoise2D = brna.structs[335].get();
	RNA_LineStyleGeometryModifier_BackboneStretcher = brna.structs[336].get();
	RNA_LineStyleGeometryModifier_TipRemover = brna.structs[337].get();
	RNA_LineStyleGeometryModifier_Polygonalization = brna.structs[338].get();
	RNA_LineStyleGeometryModifier_GuidingLines = brna.structs[339].get();
	RNA_LineStyleGeometryModifier_Blueprint = brna.structs[340].get();
	RNA_LineStyleGeometryModifier_2DOffset = brna.structs[341].get();
	RNA_LineStyleGeometryModifier_2DTransform = brna.structs[342].get();
	RNA_LineStyleGeometryModifier_Simplification = brna.structs[343].get();
	RNA_FreestyleLineStyle = brna.structs[344].get();
	RNA_LineStyleTextureSlots = brna.structs[345].get();
	RNA_LineStyleColorModifiers = brna.structs[346].get();
	RNA_LineStyleAlphaModifiers = brna.structs[347].get();
	RNA_LineStyleThicknessModifiers = brna.structs[348].get();
	RNA_LineStyleGeometryModifiers = brna.structs[349].get();
	RNA_LineStyleTextureSlot = brna.structs[350].get();
	RNA_BlendImportContextLibrary = brna.structs[351].get();
	RNA_BlendImportContextItem = brna.structs[352].get();
	RNA_BlendImportContextLibraries = brna.structs[353].get();
	RNA_BlendImportContext = brna.structs[354].get();
	RNA_BlendImportContextItems = brna.structs[355].get();
	RNA_BlendData = brna.structs[356].get();
	RNA_BlendDataCameras = brna.structs[357].get();
	RNA_BlendDataScenes = brna.structs[358].get();
	RNA_BlendDataObjects = brna.structs[359].get();
	RNA_BlendDataMaterials = brna.structs[360].get();
	RNA_BlendDataNodeTrees = brna.structs[361].get();
	RNA_BlendDataMeshes = brna.structs[362].get();
	RNA_BlendDataLights = brna.structs[363].get();
	RNA_BlendDataLibraries = brna.structs[364].get();
	RNA_BlendDataScreens = brna.structs[365].get();
	RNA_BlendDataWindowManagers = brna.structs[366].get();
	RNA_BlendDataImages = brna.structs[367].get();
	RNA_BlendDataLattices = brna.structs[368].get();
	RNA_BlendDataCurves = brna.structs[369].get();
	RNA_BlendDataMetaBalls = brna.structs[370].get();
	RNA_BlendDataFonts = brna.structs[371].get();
	RNA_BlendDataTextures = brna.structs[372].get();
	RNA_BlendDataBrushes = brna.structs[373].get();
	RNA_BlendDataWorlds = brna.structs[374].get();
	RNA_BlendDataCollections = brna.structs[375].get();
	RNA_BlendDataTexts = brna.structs[376].get();
	RNA_BlendDataSpeakers = brna.structs[377].get();
	RNA_BlendDataSounds = brna.structs[378].get();
	RNA_BlendDataArmatures = brna.structs[379].get();
	RNA_BlendDataActions = brna.structs[380].get();
	RNA_BlendDataParticles = brna.structs[381].get();
	RNA_BlendDataPalettes = brna.structs[382].get();
	RNA_BlendDataAnnotations = brna.structs[383].get();
	RNA_BlendDataGreasePencilsV3 = brna.structs[384].get();
	RNA_BlendDataMovieClips = brna.structs[385].get();
	RNA_BlendDataMasks = brna.structs[386].get();
	RNA_BlendDataLineStyles = brna.structs[387].get();
	RNA_BlendDataCacheFiles = brna.structs[388].get();
	RNA_BlendDataPaintCurves = brna.structs[389].get();
	RNA_BlendDataWorkSpaces = brna.structs[390].get();
	RNA_BlendDataProbes = brna.structs[391].get();
	RNA_BlendDataHairCurves = brna.structs[392].get();
	RNA_BlendDataPointClouds = brna.structs[393].get();
	RNA_BlendDataVolumes = brna.structs[394].get();
	RNA_BlendFileColorspace = brna.structs[395].get();
	RNA_FluidDomainSettings = brna.structs[396].get();
	RNA_FluidFlowSettings = brna.structs[397].get();
	RNA_FluidEffectorSettings = brna.structs[398].get();
	RNA_Material = brna.structs[399].get();
	RNA_TexPaintSlot = brna.structs[400].get();
	RNA_MaterialGPencilStyle = brna.structs[401].get();
	RNA_MaterialLineArt = brna.structs[402].get();
	RNA_Mesh = brna.structs[403].get();
	RNA_MeshVertices = brna.structs[404].get();
	RNA_MeshEdges = brna.structs[405].get();
	RNA_MeshLoops = brna.structs[406].get();
	RNA_MeshPolygons = brna.structs[407].get();
	RNA_MeshNormalValue = brna.structs[408].get();
	RNA_MeshLoopTriangles = brna.structs[409].get();
	RNA_ReadOnlyInteger = brna.structs[410].get();
	RNA_UVLoopLayers = brna.structs[411].get();
	RNA_LoopColors = brna.structs[412].get();
	RNA_MeshSkinVertexLayer = brna.structs[413].get();
	RNA_MeshSkinVertex = brna.structs[414].get();
	RNA_MeshVertex = brna.structs[415].get();
	RNA_VertexGroupElement = brna.structs[416].get();
	RNA_MeshEdge = brna.structs[417].get();
	RNA_MeshLoopTriangle = brna.structs[418].get();
	RNA_MeshLoop = brna.structs[419].get();
	RNA_MeshPolygon = brna.structs[420].get();
	RNA_MeshUVLoopLayer = brna.structs[421].get();
	RNA_MeshUVLoop = brna.structs[422].get();
	RNA_MeshLoopColorLayer = brna.structs[423].get();
	RNA_MeshLoopColor = brna.structs[424].get();
	RNA_MetaElement = brna.structs[425].get();
	RNA_MetaBall = brna.structs[426].get();
	RNA_MetaBallElements = brna.structs[427].get();
	RNA_Modifier = brna.structs[428].get();
	RNA_SubsurfModifier = brna.structs[429].get();
	RNA_LatticeModifier = brna.structs[430].get();
	RNA_CurveModifier = brna.structs[431].get();
	RNA_BuildModifier = brna.structs[432].get();
	RNA_MirrorModifier = brna.structs[433].get();
	RNA_DecimateModifier = brna.structs[434].get();
	RNA_WaveModifier = brna.structs[435].get();
	RNA_ArmatureModifier = brna.structs[436].get();
	RNA_HookModifier = brna.structs[437].get();
	RNA_SoftBodyModifier = brna.structs[438].get();
	RNA_BooleanModifier = brna.structs[439].get();
	RNA_ArrayModifier = brna.structs[440].get();
	RNA_EdgeSplitModifier = brna.structs[441].get();
	RNA_DisplaceModifier = brna.structs[442].get();
	RNA_UVProjectModifier = brna.structs[443].get();
	RNA_UVProjector = brna.structs[444].get();
	RNA_SmoothModifier = brna.structs[445].get();
	RNA_CorrectiveSmoothModifier = brna.structs[446].get();
	RNA_CastModifier = brna.structs[447].get();
	RNA_MeshDeformModifier = brna.structs[448].get();
	RNA_ParticleSystemModifier = brna.structs[449].get();
	RNA_ParticleInstanceModifier = brna.structs[450].get();
	RNA_ExplodeModifier = brna.structs[451].get();
	RNA_ClothModifier = brna.structs[452].get();
	RNA_CollisionModifier = brna.structs[453].get();
	RNA_BevelModifier = brna.structs[454].get();
	RNA_ShrinkwrapModifier = brna.structs[455].get();
	RNA_MaskModifier = brna.structs[456].get();
	RNA_SimpleDeformModifier = brna.structs[457].get();
	RNA_WarpModifier = brna.structs[458].get();
	RNA_MultiresModifier = brna.structs[459].get();
	RNA_SurfaceModifier = brna.structs[460].get();
	RNA_FluidModifier = brna.structs[461].get();
	RNA_SolidifyModifier = brna.structs[462].get();
	RNA_ScrewModifier = brna.structs[463].get();
	RNA_UVWarpModifier = brna.structs[464].get();
	RNA_VertexWeightEditModifier = brna.structs[465].get();
	RNA_VertexWeightMixModifier = brna.structs[466].get();
	RNA_VertexWeightProximityModifier = brna.structs[467].get();
	RNA_DynamicPaintModifier = brna.structs[468].get();
	RNA_OceanModifier = brna.structs[469].get();
	RNA_RemeshModifier = brna.structs[470].get();
	RNA_SkinModifier = brna.structs[471].get();
	RNA_LaplacianSmoothModifier = brna.structs[472].get();
	RNA_TriangulateModifier = brna.structs[473].get();
	RNA_MeshCacheModifier = brna.structs[474].get();
	RNA_LaplacianDeformModifier = brna.structs[475].get();
	RNA_WeldModifier = brna.structs[476].get();
	RNA_WireframeModifier = brna.structs[477].get();
	RNA_DataTransferModifier = brna.structs[478].get();
	RNA_NormalEditModifier = brna.structs[479].get();
	RNA_MeshSequenceCacheModifier = brna.structs[480].get();
	RNA_SurfaceDeformModifier = brna.structs[481].get();
	RNA_WeightedNormalModifier = brna.structs[482].get();
	RNA_NodesModifierDataBlock = brna.structs[483].get();
	RNA_NodesModifierBakeDataBlocks = brna.structs[484].get();
	RNA_NodesModifierBake = brna.structs[485].get();
	RNA_NodesModifierBakes = brna.structs[486].get();
	RNA_NodesModifierWarning = brna.structs[487].get();
	RNA_NodesModifierProperties = brna.structs[488].get();
	RNA_NodesModifierPropertiesEmpty = brna.structs[489].get();
	RNA_NodesModifier = brna.structs[490].get();
	RNA_MeshToVolumeModifier = brna.structs[491].get();
	RNA_VolumeDisplaceModifier = brna.structs[492].get();
	RNA_VolumeToMeshModifier = brna.structs[493].get();
	RNA_GreasePencilOpacityModifier = brna.structs[494].get();
	RNA_GreasePencilSubdivModifier = brna.structs[495].get();
	RNA_GreasePencilColorModifier = brna.structs[496].get();
	RNA_GreasePencilTintModifier = brna.structs[497].get();
	RNA_GreasePencilSmoothModifier = brna.structs[498].get();
	RNA_GreasePencilOffsetModifier = brna.structs[499].get();
	RNA_GreasePencilNoiseModifier = brna.structs[500].get();
	RNA_GreasePencilMirrorModifier = brna.structs[501].get();
	RNA_GreasePencilThickModifierData = brna.structs[502].get();
	RNA_GreasePencilLatticeModifier = brna.structs[503].get();
	RNA_GreasePencilDashModifierSegment = brna.structs[504].get();
	RNA_GreasePencilDashModifierData = brna.structs[505].get();
	RNA_GreasePencilMultiplyModifier = brna.structs[506].get();
	RNA_GreasePencilLengthModifier = brna.structs[507].get();
	RNA_GreasePencilWeightAngleModifier = brna.structs[508].get();
	RNA_GreasePencilArrayModifier = brna.structs[509].get();
	RNA_GreasePencilWeightProximityModifier = brna.structs[510].get();
	RNA_GreasePencilHookModifier = brna.structs[511].get();
	RNA_GreasePencilLineartModifier = brna.structs[512].get();
	RNA_GreasePencilArmatureModifier = brna.structs[513].get();
	RNA_GreasePencilTimeModifierSegment = brna.structs[514].get();
	RNA_GreasePencilTimeModifier = brna.structs[515].get();
	RNA_GreasePencilSimplifyModifier = brna.structs[516].get();
	RNA_GreasePencilEnvelopeModifier = brna.structs[517].get();
	RNA_GreasePencilOutlineModifier = brna.structs[518].get();
	RNA_GreasePencilShrinkwrapModifier = brna.structs[519].get();
	RNA_GreasePencilBuildModifier = brna.structs[520].get();
	RNA_GreasePencilTextureModifier = brna.structs[521].get();
	RNA_ShaderFx = brna.structs[522].get();
	RNA_ShaderFxBlur = brna.structs[523].get();
	RNA_ShaderFxColorize = brna.structs[524].get();
	RNA_ShaderFxWave = brna.structs[525].get();
	RNA_ShaderFxPixel = brna.structs[526].get();
	RNA_ShaderFxRim = brna.structs[527].get();
	RNA_ShaderFxShadow = brna.structs[528].get();
	RNA_ShaderFxGlow = brna.structs[529].get();
	RNA_ShaderFxSwirl = brna.structs[530].get();
	RNA_ShaderFxFlip = brna.structs[531].get();
	RNA_NlaTrack = brna.structs[532].get();
	RNA_NlaStrips = brna.structs[533].get();
	RNA_NlaStrip = brna.structs[534].get();
	RNA_NlaStripFCurves = brna.structs[535].get();
	RNA_NodePanelState = brna.structs[536].get();
	RNA_Node = brna.structs[537].get();
	RNA_NodeInputs = brna.structs[538].get();
	RNA_NodeOutputs = brna.structs[539].get();
	RNA_NodeLink = brna.structs[540].get();
	RNA_NodeInternalSocketTemplate = brna.structs[541].get();
	RNA_NodeInternal = brna.structs[542].get();
	RNA_ShaderNode = brna.structs[543].get();
	RNA_CompositorNode = brna.structs[544].get();
	RNA_CryptomatteEntry = brna.structs[545].get();
	RNA_TextureNode = brna.structs[546].get();
	RNA_GeometryNode = brna.structs[547].get();
	RNA_FunctionNode = brna.structs[548].get();
	RNA_NodeTree = brna.structs[549].get();
	RNA_Nodes = brna.structs[550].get();
	RNA_NodeLinks = brna.structs[551].get();
	RNA_CompositorNodeTree = brna.structs[552].get();
	RNA_ShaderNodeTree = brna.structs[553].get();
	RNA_TextureNodeTree = brna.structs[554].get();
	RNA_GeometryNodeTree = brna.structs[555].get();
	RNA_NodeFrame = brna.structs[556].get();
	RNA_NodeGroup = brna.structs[557].get();
	RNA_NodeGroupInput = brna.structs[558].get();
	RNA_NodeGroupOutput = brna.structs[559].get();
	RNA_NodeReroute = brna.structs[560].get();
	RNA_NodeImplicitConversion = brna.structs[561].get();
	RNA_NodeClosureInput = brna.structs[562].get();
	RNA_NodeClosureOutput = brna.structs[563].get();
	RNA_NodeClosureInputItem = brna.structs[564].get();
	RNA_NodeClosureInputItems = brna.structs[565].get();
	RNA_NodeClosureOutputItem = brna.structs[566].get();
	RNA_NodeClosureOutputItems = brna.structs[567].get();
	RNA_NodeCombineBundle = brna.structs[568].get();
	RNA_NodeCombineBundleItem = brna.structs[569].get();
	RNA_NodeCombineBundleItems = brna.structs[570].get();
	RNA_NodeEnableOutput = brna.structs[571].get();
	RNA_NodeEvaluateClosure = brna.structs[572].get();
	RNA_NodeEvaluateClosureInputItem = brna.structs[573].get();
	RNA_NodeEvaluateClosureInputItems = brna.structs[574].get();
	RNA_NodeEvaluateClosureOutputItem = brna.structs[575].get();
	RNA_NodeEvaluateClosureOutputItems = brna.structs[576].get();
	RNA_NodeGetBundleItem = brna.structs[577].get();
	RNA_NodeGetNestedBundlePaths = brna.structs[578].get();
	RNA_NodeJoinBundle = brna.structs[579].get();
	RNA_NodeSeparateBundle = brna.structs[580].get();
	RNA_NodeSeparateBundleItem = brna.structs[581].get();
	RNA_NodeSeparateBundleItems = brna.structs[582].get();
	RNA_NodeStoreBundleItem = brna.structs[583].get();
	RNA_ShaderNodeAddShader = brna.structs[584].get();
	RNA_ShaderNodeAmbientOcclusion = brna.structs[585].get();
	RNA_ShaderNodeAttribute = brna.structs[586].get();
	RNA_ShaderNodeBackground = brna.structs[587].get();
	RNA_ShaderNodeBevel = brna.structs[588].get();
	RNA_ShaderNodeBlackbody = brna.structs[589].get();
	RNA_ShaderNodeBrightContrast = brna.structs[590].get();
	RNA_ShaderNodeBsdfAnisotropic = brna.structs[591].get();
	RNA_ShaderNodeBsdfDiffuse = brna.structs[592].get();
	RNA_ShaderNodeBsdfGlass = brna.structs[593].get();
	RNA_ShaderNodeBsdfHair = brna.structs[594].get();
	RNA_ShaderNodeBsdfHairPrincipled = brna.structs[595].get();
	RNA_ShaderNodeBsdfMetallic = brna.structs[596].get();
	RNA_ShaderNodeBsdfPrincipled = brna.structs[597].get();
	RNA_ShaderNodeBsdfRayPortal = brna.structs[598].get();
	RNA_ShaderNodeBsdfRefraction = brna.structs[599].get();
	RNA_ShaderNodeBsdfSheen = brna.structs[600].get();
	RNA_ShaderNodeBsdfToon = brna.structs[601].get();
	RNA_ShaderNodeBsdfTranslucent = brna.structs[602].get();
	RNA_ShaderNodeBsdfTransparent = brna.structs[603].get();
	RNA_ShaderNodeBump = brna.structs[604].get();
	RNA_ShaderNodeCameraData = brna.structs[605].get();
	RNA_ShaderNodeClamp = brna.structs[606].get();
	RNA_ShaderNodeCombineColor = brna.structs[607].get();
	RNA_ShaderNodeCombineXYZ = brna.structs[608].get();
	RNA_ShaderNodeDisplacement = brna.structs[609].get();
	RNA_ShaderNodeEeveeSpecular = brna.structs[610].get();
	RNA_ShaderNodeEmission = brna.structs[611].get();
	RNA_ShaderNodeFloatCurve = brna.structs[612].get();
	RNA_ShaderNodeFresnel = brna.structs[613].get();
	RNA_ShaderNodeGamma = brna.structs[614].get();
	RNA_ShaderNodeHairInfo = brna.structs[615].get();
	RNA_ShaderNodeHoldout = brna.structs[616].get();
	RNA_ShaderNodeHueSaturation = brna.structs[617].get();
	RNA_ShaderNodeInvert = brna.structs[618].get();
	RNA_ShaderNodeLayerWeight = brna.structs[619].get();
	RNA_ShaderNodeLightFalloff = brna.structs[620].get();
	RNA_ShaderNodeLightPath = brna.structs[621].get();
	RNA_ShaderNodeMapping = brna.structs[622].get();
	RNA_ShaderNodeMapRange = brna.structs[623].get();
	RNA_ShaderNodeMath = brna.structs[624].get();
	RNA_ShaderNodeMix = brna.structs[625].get();
	RNA_ShaderNodeMixRGB = brna.structs[626].get();
	RNA_ShaderNodeMixShader = brna.structs[627].get();
	RNA_ShaderNodeNewGeometry = brna.structs[628].get();
	RNA_ShaderNodeNormal = brna.structs[629].get();
	RNA_ShaderNodeNormalMap = brna.structs[630].get();
	RNA_ShaderNodeObjectInfo = brna.structs[631].get();
	RNA_ShaderNodeOutputAOV = brna.structs[632].get();
	RNA_ShaderNodeOutputLight = brna.structs[633].get();
	RNA_ShaderNodeOutputLineStyle = brna.structs[634].get();
	RNA_ShaderNodeOutputMaterial = brna.structs[635].get();
	RNA_ShaderNodeOutputWorld = brna.structs[636].get();
	RNA_ShaderNodeParticleInfo = brna.structs[637].get();
	RNA_ShaderNodePointInfo = brna.structs[638].get();
	RNA_ShaderNodeRadialTiling = brna.structs[639].get();
	RNA_ShaderNodeRaycast = brna.structs[640].get();
	RNA_NodeRaycastSampleAttributeItem = brna.structs[641].get();
	RNA_NodeRaycastSampleAttributeItems = brna.structs[642].get();
	RNA_ShaderNodeRGB = brna.structs[643].get();
	RNA_ShaderNodeRGBCurve = brna.structs[644].get();
	RNA_ShaderNodeRGBToBW = brna.structs[645].get();
	RNA_ShaderNodeScript = brna.structs[646].get();
	RNA_ShaderNodeSeparateColor = brna.structs[647].get();
	RNA_ShaderNodeSeparateXYZ = brna.structs[648].get();
	RNA_ShaderNodeShaderToRGB = brna.structs[649].get();
	RNA_ShaderNodeSqueeze = brna.structs[650].get();
	RNA_ShaderNodeSubsurfaceScattering = brna.structs[651].get();
	RNA_ShaderNodeTangent = brna.structs[652].get();
	RNA_ShaderNodeTexBrick = brna.structs[653].get();
	RNA_ShaderNodeTexChecker = brna.structs[654].get();
	RNA_ShaderNodeTexCoord = brna.structs[655].get();
	RNA_ShaderNodeTexEnvironment = brna.structs[656].get();
	RNA_ShaderNodeTexGabor = brna.structs[657].get();
	RNA_ShaderNodeTexGradient = brna.structs[658].get();
	RNA_ShaderNodeTexIES = brna.structs[659].get();
	RNA_ShaderNodeTexImage = brna.structs[660].get();
	RNA_ShaderNodeTexMagic = brna.structs[661].get();
	RNA_ShaderNodeTexNoise = brna.structs[662].get();
	RNA_ShaderNodeTexSky = brna.structs[663].get();
	RNA_ShaderNodeTexVoronoi = brna.structs[664].get();
	RNA_ShaderNodeTexWave = brna.structs[665].get();
	RNA_ShaderNodeTexWhiteNoise = brna.structs[666].get();
	RNA_ShaderNodeUVAlongStroke = brna.structs[667].get();
	RNA_ShaderNodeUVMap = brna.structs[668].get();
	RNA_ShaderNodeValToRGB = brna.structs[669].get();
	RNA_ShaderNodeValue = brna.structs[670].get();
	RNA_ShaderNodeVectorCurve = brna.structs[671].get();
	RNA_ShaderNodeVectorDisplacement = brna.structs[672].get();
	RNA_ShaderNodeVectorMath = brna.structs[673].get();
	RNA_ShaderNodeVectorRotate = brna.structs[674].get();
	RNA_ShaderNodeVectorTransform = brna.structs[675].get();
	RNA_ShaderNodeVertexColor = brna.structs[676].get();
	RNA_ShaderNodeVolumeAbsorption = brna.structs[677].get();
	RNA_ShaderNodeVolumeInfo = brna.structs[678].get();
	RNA_ShaderNodeVolumePrincipled = brna.structs[679].get();
	RNA_ShaderNodeVolumeScatter = brna.structs[680].get();
	RNA_ShaderNodeVolumeCoefficients = brna.structs[681].get();
	RNA_ShaderNodeWavelength = brna.structs[682].get();
	RNA_ShaderNodeWireframe = brna.structs[683].get();
	RNA_CompositorNodeAlphaOver = brna.structs[684].get();
	RNA_CompositorNodeAntiAliasing = brna.structs[685].get();
	RNA_CompositorNodeBilateralblur = brna.structs[686].get();
	RNA_CompositorNodeBlankImage = brna.structs[687].get();
	RNA_CompositorNodeBlur = brna.structs[688].get();
	RNA_CompositorNodeBokehBlur = brna.structs[689].get();
	RNA_CompositorNodeBokehImage = brna.structs[690].get();
	RNA_CompositorNodeBoxMask = brna.structs[691].get();
	RNA_CompositorNodeBrightContrast = brna.structs[692].get();
	RNA_CompositorNodeChannelMatte = brna.structs[693].get();
	RNA_CompositorNodeChromaMatte = brna.structs[694].get();
	RNA_CompositorNodeColorBalance = brna.structs[695].get();
	RNA_CompositorNodeColorCorrection = brna.structs[696].get();
	RNA_CompositorNodeColorMatte = brna.structs[697].get();
	RNA_CompositorNodeColorSpill = brna.structs[698].get();
	RNA_CompositorNodeConvolve = brna.structs[699].get();
	RNA_CompositorNodeCombineColor = brna.structs[700].get();
	RNA_CompositorNodeConvertColorSpace = brna.structs[701].get();
	RNA_CompositorNodeConvertToDisplay = brna.structs[702].get();
	RNA_CompositorNodeCornerPin = brna.structs[703].get();
	RNA_CompositorNodeCrop = brna.structs[704].get();
	RNA_CompositorNodeCryptomatte = brna.structs[705].get();
	RNA_CompositorNodeCryptomatteV2 = brna.structs[706].get();
	RNA_CompositorNodeCurveRGB = brna.structs[707].get();
	RNA_CompositorNodeDBlur = brna.structs[708].get();
	RNA_CompositorNodeDefocus = brna.structs[709].get();
	RNA_CompositorNodeDenoise = brna.structs[710].get();
	RNA_CompositorNodeDespeckle = brna.structs[711].get();
	RNA_CompositorNodeDiffMatte = brna.structs[712].get();
	RNA_CompositorNodeDilateErode = brna.structs[713].get();
	RNA_CompositorNodeDisplace = brna.structs[714].get();
	RNA_CompositorNodeDistanceMatte = brna.structs[715].get();
	RNA_CompositorNodeDoubleEdgeMask = brna.structs[716].get();
	RNA_CompositorNodeEllipseMask = brna.structs[717].get();
	RNA_CompositorNodeExposure = brna.structs[718].get();
	RNA_CompositorNodeFilter = brna.structs[719].get();
	RNA_CompositorNodeFlip = brna.structs[720].get();
	RNA_CompositorNodeGamma = brna.structs[721].get();
	RNA_CompositorNodeGlare = brna.structs[722].get();
	RNA_CompositorNodeHueCorrect = brna.structs[723].get();
	RNA_CompositorNodeHueSat = brna.structs[724].get();
	RNA_CompositorNodeIDMask = brna.structs[725].get();
	RNA_CompositorNodeImage = brna.structs[726].get();
	RNA_CompositorNodeImageCoordinates = brna.structs[727].get();
	RNA_CompositorNodeImageInfo = brna.structs[728].get();
	RNA_CompositorNodeInpaint = brna.structs[729].get();
	RNA_CompositorNodeInvert = brna.structs[730].get();
	RNA_CompositorNodeKeying = brna.structs[731].get();
	RNA_CompositorNodeKeyingScreen = brna.structs[732].get();
	RNA_CompositorNodeKuwahara = brna.structs[733].get();
	RNA_CompositorNodeLensdist = brna.structs[734].get();
	RNA_CompositorNodeLevels = brna.structs[735].get();
	RNA_CompositorNodeLumaMatte = brna.structs[736].get();
	RNA_CompositorNodeMapUV = brna.structs[737].get();
	RNA_CompositorNodeMask = brna.structs[738].get();
	RNA_CompositorNodeMovieClip = brna.structs[739].get();
	RNA_CompositorNodeMovieDistortion = brna.structs[740].get();
	RNA_CompositorNodeNormal = brna.structs[741].get();
	RNA_CompositorNodeNormalize = brna.structs[742].get();
	RNA_CompositorNodeOutputFile = brna.structs[743].get();
	RNA_NodeCompositorFileOutputItem = brna.structs[744].get();
	RNA_NodeCompositorFileOutputItems = brna.structs[745].get();
	RNA_CompositorNodePixelate = brna.structs[746].get();
	RNA_CompositorNodePlaneTrackDeform = brna.structs[747].get();
	RNA_CompositorNodePosterize = brna.structs[748].get();
	RNA_CompositorNodePremulKey = brna.structs[749].get();
	RNA_CompositorNodeRelativeToPixel = brna.structs[750].get();
	RNA_CompositorNodeRGB = brna.structs[751].get();
	RNA_CompositorNodeRGBToBW = brna.structs[752].get();
	RNA_CompositorNodeRLayers = brna.structs[753].get();
	RNA_CompositorNodeRotate = brna.structs[754].get();
	RNA_CompositorNodeScale = brna.structs[755].get();
	RNA_CompositorNodeSceneTime = brna.structs[756].get();
	RNA_CompositorNodeSeparateColor = brna.structs[757].get();
	RNA_CompositorNodeSetAlpha = brna.structs[758].get();
	RNA_CompositorNodeMaskToSDF = brna.structs[759].get();
	RNA_CompositorNodeSplit = brna.structs[760].get();
	RNA_CompositorNodeStabilize = brna.structs[761].get();
	RNA_CompositorNodeSequencerStripInfo = brna.structs[762].get();
	RNA_CompositorNodeStringToImage = brna.structs[763].get();
	RNA_CompositorNodeSwitch = brna.structs[764].get();
	RNA_CompositorNodeSwitchView = brna.structs[765].get();
	RNA_CompositorNodeTime = brna.structs[766].get();
	RNA_CompositorNodeTonemap = brna.structs[767].get();
	RNA_CompositorNodeTrackPos = brna.structs[768].get();
	RNA_CompositorNodeTransform = brna.structs[769].get();
	RNA_CompositorNodeTranslate = brna.structs[770].get();
	RNA_CompositorNodeVecBlur = brna.structs[771].get();
	RNA_CompositorNodeViewer = brna.structs[772].get();
	RNA_CompositorNodeZcombine = brna.structs[773].get();
	RNA_TextureNodeAt = brna.structs[774].get();
	RNA_TextureNodeBricks = brna.structs[775].get();
	RNA_TextureNodeChecker = brna.structs[776].get();
	RNA_TextureNodeCombineColor = brna.structs[777].get();
	RNA_TextureNodeCompose = brna.structs[778].get();
	RNA_TextureNodeCoordinates = brna.structs[779].get();
	RNA_TextureNodeCurveRGB = brna.structs[780].get();
	RNA_TextureNodeCurveTime = brna.structs[781].get();
	RNA_TextureNodeDecompose = brna.structs[782].get();
	RNA_TextureNodeDistance = brna.structs[783].get();
	RNA_TextureNodeHueSaturation = brna.structs[784].get();
	RNA_TextureNodeImage = brna.structs[785].get();
	RNA_TextureNodeInvert = brna.structs[786].get();
	RNA_TextureNodeMath = brna.structs[787].get();
	RNA_TextureNodeMixRGB = brna.structs[788].get();
	RNA_TextureNodeOutput = brna.structs[789].get();
	RNA_TextureNodeRGBToBW = brna.structs[790].get();
	RNA_TextureNodeRotate = brna.structs[791].get();
	RNA_TextureNodeScale = brna.structs[792].get();
	RNA_TextureNodeSeparateColor = brna.structs[793].get();
	RNA_TextureNodeTexBlend = brna.structs[794].get();
	RNA_TextureNodeTexClouds = brna.structs[795].get();
	RNA_TextureNodeTexDistNoise = brna.structs[796].get();
	RNA_TextureNodeTexMagic = brna.structs[797].get();
	RNA_TextureNodeTexMarble = brna.structs[798].get();
	RNA_TextureNodeTexMusgrave = brna.structs[799].get();
	RNA_TextureNodeTexNoise = brna.structs[800].get();
	RNA_TextureNodeTexStucci = brna.structs[801].get();
	RNA_TextureNodeTexture = brna.structs[802].get();
	RNA_TextureNodeTexVoronoi = brna.structs[803].get();
	RNA_TextureNodeTexWood = brna.structs[804].get();
	RNA_TextureNodeTranslate = brna.structs[805].get();
	RNA_TextureNodeValToNor = brna.structs[806].get();
	RNA_TextureNodeValToRGB = brna.structs[807].get();
	RNA_TextureNodeViewer = brna.structs[808].get();
	RNA_FunctionNodeAlignEulerToVector = brna.structs[809].get();
	RNA_FunctionNodeAlignRotationToVector = brna.structs[810].get();
	RNA_FunctionNodeAxesToRotation = brna.structs[811].get();
	RNA_FunctionNodeAxisAngleToRotation = brna.structs[812].get();
	RNA_FunctionNodeBitMath = brna.structs[813].get();
	RNA_FunctionNodeBooleanMath = brna.structs[814].get();
	RNA_FunctionNodeCombineColor = brna.structs[815].get();
	RNA_FunctionNodeCombineMatrix = brna.structs[816].get();
	RNA_FunctionNodeCombineTransform = brna.structs[817].get();
	RNA_FunctionNodeCompare = brna.structs[818].get();
	RNA_FunctionNodeEulerToRotation = brna.structs[819].get();
	RNA_FunctionNodeFindInString = brna.structs[820].get();
	RNA_FunctionNodeFloatToInt = brna.structs[821].get();
	RNA_FunctionNodeFormatString = brna.structs[822].get();
	RNA_NodeFunctionFormatStringItem = brna.structs[823].get();
	RNA_NodeFunctionFormatStringItems = brna.structs[824].get();
	RNA_FunctionNodeHashValue = brna.structs[825].get();
	RNA_FunctionNodeInputBool = brna.structs[826].get();
	RNA_FunctionNodeInputColor = brna.structs[827].get();
	RNA_FunctionNodeInputInt = brna.structs[828].get();
	RNA_FunctionNodeInputIntVector = brna.structs[829].get();
	RNA_FunctionNodeInputMenu = brna.structs[830].get();
	RNA_FunctionNodeInputRotation = brna.structs[831].get();
	RNA_FunctionNodeInputSpecialCharacters = brna.structs[832].get();
	RNA_FunctionNodeInputString = brna.structs[833].get();
	RNA_FunctionNodeInputVector = brna.structs[834].get();
	RNA_FunctionNodeIntegerMath = brna.structs[835].get();
	RNA_FunctionNodeInvertMatrix = brna.structs[836].get();
	RNA_FunctionNodeInvertRotation = brna.structs[837].get();
	RNA_FunctionNodeMatchString = brna.structs[838].get();
	RNA_FunctionNodeMatrixDeterminant = brna.structs[839].get();
	RNA_FunctionNodeMatrixMultiply = brna.structs[840].get();
	RNA_FunctionNodeMatrixSVD = brna.structs[841].get();
	RNA_FunctionNodeProjectPoint = brna.structs[842].get();
	RNA_FunctionNodeQuaternionToRotation = brna.structs[843].get();
	RNA_FunctionNodeRandomValue = brna.structs[844].get();
	RNA_FunctionNodeReplaceString = brna.structs[845].get();
	RNA_FunctionNodeReverseString = brna.structs[846].get();
	RNA_FunctionNodeRotateEuler = brna.structs[847].get();
	RNA_FunctionNodeRotateRotation = brna.structs[848].get();
	RNA_FunctionNodeRotateVector = brna.structs[849].get();
	RNA_FunctionNodeRotationToAxisAngle = brna.structs[850].get();
	RNA_FunctionNodeRotationToEuler = brna.structs[851].get();
	RNA_FunctionNodeRotationToQuaternion = brna.structs[852].get();
	RNA_FunctionNodeSeparateColor = brna.structs[853].get();
	RNA_FunctionNodeSeparateMatrix = brna.structs[854].get();
	RNA_FunctionNodeSeparateTransform = brna.structs[855].get();
	RNA_FunctionNodeSetStringCase = brna.structs[856].get();
	RNA_FunctionNodeSliceString = brna.structs[857].get();
	RNA_FunctionNodeSplitString = brna.structs[858].get();
	RNA_FunctionNodeStringLength = brna.structs[859].get();
	RNA_FunctionNodeStringToValue = brna.structs[860].get();
	RNA_FunctionNodeTransformDirection = brna.structs[861].get();
	RNA_FunctionNodeTransformPoint = brna.structs[862].get();
	RNA_FunctionNodeTransposeMatrix = brna.structs[863].get();
	RNA_FunctionNodeTrimString = brna.structs[864].get();
	RNA_FunctionNodeValueToString = brna.structs[865].get();
	RNA_GeometryNodeAccumulateField = brna.structs[866].get();
	RNA_GeometryNodeApplySimulatedData = brna.structs[867].get();
	RNA_GeometryNodeAttributeDomainSize = brna.structs[868].get();
	RNA_GeometryNodeAttributeStatistic = brna.structs[869].get();
	RNA_GeometryNodeBake = brna.structs[870].get();
	RNA_NodeGeometryBakeItem = brna.structs[871].get();
	RNA_NodeGeometryBakeItems = brna.structs[872].get();
	RNA_GeometryNodeBlurAttribute = brna.structs[873].get();
	RNA_GeometryNodeBoneInfo = brna.structs[874].get();
	RNA_GeometryNodeBoundBox = brna.structs[875].get();
	RNA_GeometryNodeCameraInfo = brna.structs[876].get();
	RNA_GeometryNodeCaptureAttribute = brna.structs[877].get();
	RNA_NodeGeometryCaptureAttributeItem = brna.structs[878].get();
	RNA_NodeGeometryCaptureAttributeItems = brna.structs[879].get();
	RNA_GeometryNodeClosureToList = brna.structs[880].get();
	RNA_GeometryNodeClosureToListItem = brna.structs[881].get();
	RNA_GeometryNodeClosureToListItems = brna.structs[882].get();
	RNA_GeometryNodeClusterByConnected = brna.structs[883].get();
	RNA_GeometryNodeClusterByDistance = brna.structs[884].get();
	RNA_GeometryNodeCollectionChildren = brna.structs[885].get();
	RNA_GeometryNodeCollectionInfo = brna.structs[886].get();
	RNA_GeometryNodeConvexHull = brna.structs[887].get();
	RNA_GeometryNodeCornersOfEdge = brna.structs[888].get();
	RNA_GeometryNodeCornersOfFace = brna.structs[889].get();
	RNA_GeometryNodeCornersOfVertex = brna.structs[890].get();
	RNA_GeometryNodeCubeGridTopology = brna.structs[891].get();
	RNA_GeometryNodeCurveArc = brna.structs[892].get();
	RNA_GeometryNodeCurveEndpointSelection = brna.structs[893].get();
	RNA_GeometryNodeCurveHandleTypeSelection = brna.structs[894].get();
	RNA_GeometryNodeCurveLength = brna.structs[895].get();
	RNA_GeometryNodeCurveOfPoint = brna.structs[896].get();
	RNA_GeometryNodeCurvePrimitiveBezierSegment = brna.structs[897].get();
	RNA_GeometryNodeCurvePrimitiveCircle = brna.structs[898].get();
	RNA_GeometryNodeCurvePrimitiveLine = brna.structs[899].get();
	RNA_GeometryNodeCurvePrimitiveQuadrilateral = brna.structs[900].get();
	RNA_GeometryNodeCurveQuadraticBezier = brna.structs[901].get();
	RNA_GeometryNodeCurveSetHandles = brna.structs[902].get();
	RNA_GeometryNodeCurveSpiral = brna.structs[903].get();
	RNA_GeometryNodeCurveSplineType = brna.structs[904].get();
	RNA_GeometryNodeCurveStar = brna.structs[905].get();
	RNA_GeometryNodeCurvesToGreasePencil = brna.structs[906].get();
	RNA_GeometryNodeCurveToMesh = brna.structs[907].get();
	RNA_GeometryNodeCurveToPoints = brna.structs[908].get();
	RNA_GeometryNodeDeformCurvesOnSurface = brna.structs[909].get();
	RNA_GeometryNodeDeleteGeometry = brna.structs[910].get();
	RNA_GeometryNodeDistributePointsInGrid = brna.structs[911].get();
	RNA_GeometryNodeDistributePointsInVolume = brna.structs[912].get();
	RNA_GeometryNodeDistributePointsOnFaces = brna.structs[913].get();
	RNA_GeometryNodeDualMesh = brna.structs[914].get();
	RNA_GeometryNodeDuplicateElements = brna.structs[915].get();
	RNA_GeometryNodeEdgePathsToCurves = brna.structs[916].get();
	RNA_GeometryNodeEdgePathsToSelection = brna.structs[917].get();
	RNA_GeometryNodeEdgesOfCorner = brna.structs[918].get();
	RNA_GeometryNodeEdgesOfVertex = brna.structs[919].get();
	RNA_GeometryNodeEdgesToFaceGroups = brna.structs[920].get();
	RNA_GeometryNodeExtrudeMesh = brna.structs[921].get();
	RNA_GeometryNodeFaceOfCorner = brna.structs[922].get();
	RNA_GeometryNodeFieldAtIndex = brna.structs[923].get();
	RNA_GeometryNodeFieldAverage = brna.structs[924].get();
	RNA_GeometryNodeFieldMinAndMax = brna.structs[925].get();
	RNA_GeometryNodeFieldOnDomain = brna.structs[926].get();
	RNA_GeometryNodeFieldToGrid = brna.structs[927].get();
	RNA_GeometryNodeFieldToGridItem = brna.structs[928].get();
	RNA_GeometryNodeFieldToGridItems = brna.structs[929].get();
	RNA_GeometryNodeFieldToList = brna.structs[930].get();
	RNA_GeometryNodeFieldToListItem = brna.structs[931].get();
	RNA_GeometryNodeFieldToListItems = brna.structs[932].get();
	RNA_GeometryNodeFieldVariance = brna.structs[933].get();
	RNA_GeometryNodeFillCurve = brna.structs[934].get();
	RNA_GeometryNodeFilletCurve = brna.structs[935].get();
	RNA_GeometryNodeFilterList = brna.structs[936].get();
	RNA_GeometryNodeFlipFaces = brna.structs[937].get();
	RNA_GeometryNodeForeachGeometryElementInput = brna.structs[938].get();
	RNA_GeometryNodeForeachGeometryElementOutput = brna.structs[939].get();
	RNA_ForeachGeometryElementInputItem = brna.structs[940].get();
	RNA_NodeGeometryForeachGeometryElementInputItems = brna.structs[941].get();
	RNA_ForeachGeometryElementMainItem = brna.structs[942].get();
	RNA_NodeGeometryForeachGeometryElementMainItems = brna.structs[943].get();
	RNA_NodeGeometryForeachGeometryElementGenerationItems = brna.structs[944].get();
	RNA_ForeachGeometryElementGenerationItem = brna.structs[945].get();
	RNA_GeometryNodeGeometryToInstance = brna.structs[946].get();
	RNA_GeometryNodeGetAttributeNames = brna.structs[947].get();
	RNA_GeometryNodeGetGeometryBundle = brna.structs[948].get();
	RNA_GeometryNodeGetGeometryComponent = brna.structs[949].get();
	RNA_GeometryNodeGetNamedGrid = brna.structs[950].get();
	RNA_GeometryNodeGizmoDial = brna.structs[951].get();
	RNA_GeometryNodeGizmoLinear = brna.structs[952].get();
	RNA_GeometryNodeGizmoTransform = brna.structs[953].get();
	RNA_GeometryNodeGreasePencilColor = brna.structs[954].get();
	RNA_GeometryNodeGreasePencilDrawTime = brna.structs[955].get();
	RNA_GeometryNodeGreasePencilFillID = brna.structs[956].get();
	RNA_GeometryNodeGreasePencilOpacity = brna.structs[957].get();
	RNA_GeometryNodeGreasePencilStrokeSoftness = brna.structs[958].get();
	RNA_GeometryNodeGreasePencilStrokeVisibility = brna.structs[959].get();
	RNA_GeometryNodeGreasePencilToCurves = brna.structs[960].get();
	RNA_GeometryNodeGridAdvect = brna.structs[961].get();
	RNA_GeometryNodeGridCurl = brna.structs[962].get();
	RNA_GeometryNodeGridDeactivateVoxels = brna.structs[963].get();
	RNA_GeometryNodeGridDilateAndErode = brna.structs[964].get();
	RNA_GeometryNodeGridDivergence = brna.structs[965].get();
	RNA_GeometryNodeGridGradient = brna.structs[966].get();
	RNA_GeometryNodeGridInfo = brna.structs[967].get();
	RNA_GeometryNodeGridLaplacian = brna.structs[968].get();
	RNA_GeometryNodeGridMean = brna.structs[969].get();
	RNA_GeometryNodeGridMedian = brna.structs[970].get();
	RNA_GeometryNodeGridPrune = brna.structs[971].get();
	RNA_GeometryNodeGridClip = brna.structs[972].get();
	RNA_GeometryNodeGridToMesh = brna.structs[973].get();
	RNA_GeometryNodeGridToPoints = brna.structs[974].get();
	RNA_GeometryNodeGridTopologyBoolean = brna.structs[975].get();
	RNA_GeometryNodeGridVoxelize = brna.structs[976].get();
	RNA_GeometryNodeImageInfo = brna.structs[977].get();
	RNA_GeometryNodeImageTexture = brna.structs[978].get();
	RNA_GeometryNodeImportCSV = brna.structs[979].get();
	RNA_GeometryNodeImportOBJ = brna.structs[980].get();
	RNA_GeometryNodeImportPLY = brna.structs[981].get();
	RNA_GeometryNodeImportSTL = brna.structs[982].get();
	RNA_GeometryNodeImportText = brna.structs[983].get();
	RNA_GeometryNodeImportVDB = brna.structs[984].get();
	RNA_GeometryNodeIndexOfNearest = brna.structs[985].get();
	RNA_GeometryNodeIndexSwitch = brna.structs[986].get();
	RNA_IndexSwitchItem = brna.structs[987].get();
	RNA_NodeIndexSwitchItems = brna.structs[988].get();
	RNA_GeometryNodeInputActiveCamera = brna.structs[989].get();
	RNA_GeometryNodeInputCollection = brna.structs[990].get();
	RNA_GeometryNodeInputCurveHandlePositions = brna.structs[991].get();
	RNA_GeometryNodeInputCurveTilt = brna.structs[992].get();
	RNA_GeometryNodeInputEdgeSmooth = brna.structs[993].get();
	RNA_GeometryNodeInputFont = brna.structs[994].get();
	RNA_GeometryNodeInputID = brna.structs[995].get();
	RNA_GeometryNodeInputImage = brna.structs[996].get();
	RNA_GeometryNodeInputIndex = brna.structs[997].get();
	RNA_GeometryNodeInputInstanceBounds = brna.structs[998].get();
	RNA_GeometryNodeInputInstanceReference = brna.structs[999].get();
	RNA_GeometryNodeInputInstanceRotation = brna.structs[1000].get();
	RNA_GeometryNodeInputInstanceScale = brna.structs[1001].get();
	RNA_GeometryNodeInputMaterial = brna.structs[1002].get();
	RNA_GeometryNodeInputMaterialIndex = brna.structs[1003].get();
	RNA_GeometryNodeInputMeshEdgeAngle = brna.structs[1004].get();
	RNA_GeometryNodeInputMeshEdgeNeighbors = brna.structs[1005].get();
	RNA_GeometryNodeInputMeshEdgeVertices = brna.structs[1006].get();
	RNA_GeometryNodeInputMeshFaceArea = brna.structs[1007].get();
	RNA_GeometryNodeInputMeshFaceIsPlanar = brna.structs[1008].get();
	RNA_GeometryNodeInputMeshFaceNeighbors = brna.structs[1009].get();
	RNA_GeometryNodeInputMeshIsland = brna.structs[1010].get();
	RNA_GeometryNodeInputMeshVertexNeighbors = brna.structs[1011].get();
	RNA_GeometryNodeInputNamedAttribute = brna.structs[1012].get();
	RNA_GeometryNodeInputNamedLayerSelection = brna.structs[1013].get();
	RNA_GeometryNodeInputNormal = brna.structs[1014].get();
	RNA_GeometryNodeInputObject = brna.structs[1015].get();
	RNA_GeometryNodeInputPosition = brna.structs[1016].get();
	RNA_GeometryNodeInputRadius = brna.structs[1017].get();
	RNA_GeometryNodeInputSceneTime = brna.structs[1018].get();
	RNA_GeometryNodeInputShadeSmooth = brna.structs[1019].get();
	RNA_GeometryNodeInputShortestEdgePaths = brna.structs[1020].get();
	RNA_GeometryNodeInputSplineCyclic = brna.structs[1021].get();
	RNA_GeometryNodeInputSplineResolution = brna.structs[1022].get();
	RNA_GeometryNodeInputTangent = brna.structs[1023].get();
	RNA_GeometryNodeInputVoxelIndex = brna.structs[1024].get();
	RNA_GeometryNodeInstanceOnPoints = brna.structs[1025].get();
	RNA_GeometryNodeInstancesToPoints = brna.structs[1026].get();
	RNA_GeometryNodeInstanceTransform = brna.structs[1027].get();
	RNA_GeometryNodeInterpolateCurves = brna.structs[1028].get();
	RNA_GeometryNodeIsViewport = brna.structs[1029].get();
	RNA_GeometryNodeJoinGeometry = brna.structs[1030].get();
	RNA_GeometryNodeListGetItem = brna.structs[1031].get();
	RNA_GeometryNodeListLength = brna.structs[1032].get();
	RNA_GeometryNodeMaterialSelection = brna.structs[1033].get();
	RNA_GeometryNodeMenuSwitch = brna.structs[1034].get();
	RNA_NodeEnumItem = brna.structs[1035].get();
	RNA_NodeMenuSwitchItems = brna.structs[1036].get();
	RNA_GeometryNodeMergeByDistance = brna.structs[1037].get();
	RNA_GeometryNodeMergeLayers = brna.structs[1038].get();
	RNA_GeometryNodeMergePoints = brna.structs[1039].get();
	RNA_GeometryNodeMeshBevel = brna.structs[1040].get();
	RNA_GeometryNodeMeshBoolean = brna.structs[1041].get();
	RNA_GeometryNodeMeshCircle = brna.structs[1042].get();
	RNA_GeometryNodeMeshCone = brna.structs[1043].get();
	RNA_GeometryNodeMeshCube = brna.structs[1044].get();
	RNA_GeometryNodeMeshCylinder = brna.structs[1045].get();
	RNA_GeometryNodeMeshFaceSetBoundaries = brna.structs[1046].get();
	RNA_GeometryNodeMeshGrid = brna.structs[1047].get();
	RNA_GeometryNodeMeshIcoSphere = brna.structs[1048].get();
	RNA_GeometryNodeMeshLine = brna.structs[1049].get();
	RNA_GeometryNodeMeshToCurve = brna.structs[1050].get();
	RNA_GeometryNodeMeshToDensityGrid = brna.structs[1051].get();
	RNA_GeometryNodeMeshToPoints = brna.structs[1052].get();
	RNA_GeometryNodeMeshToSDFGrid = brna.structs[1053].get();
	RNA_GeometryNodeMeshToVolume = brna.structs[1054].get();
	RNA_GeometryNodeMeshUVSphere = brna.structs[1055].get();
	RNA_GeometryNodeNURBSOrder = brna.structs[1056].get();
	RNA_GeometryNodeNURBSWeight = brna.structs[1057].get();
	RNA_GeometryNodeObjectInfo = brna.structs[1058].get();
	RNA_GeometryNodeOffsetCornerInFace = brna.structs[1059].get();
	RNA_GeometryNodeOffsetPointInCurve = brna.structs[1060].get();
	RNA_GeometryNodePoints = brna.structs[1061].get();
	RNA_GeometryNodePointsOfCurve = brna.structs[1062].get();
	RNA_GeometryNodePointsToCurves = brna.structs[1063].get();
	RNA_GeometryNodePointsToSDFGrid = brna.structs[1064].get();
	RNA_GeometryNodePointsToVertices = brna.structs[1065].get();
	RNA_GeometryNodePointsToVolume = brna.structs[1066].get();
	RNA_GeometryNodeProximity = brna.structs[1067].get();
	RNA_GeometryNodeRaycast = brna.structs[1068].get();
	RNA_GeometryNodeRealizeInstances = brna.structs[1069].get();
	RNA_GeometryNodeRemoveAttribute = brna.structs[1070].get();
	RNA_GeometryNodeRenameAttribute = brna.structs[1071].get();
	RNA_GeometryNodeRepeatInput = brna.structs[1072].get();
	RNA_GeometryNodeRepeatOutput = brna.structs[1073].get();
	RNA_RepeatItem = brna.structs[1074].get();
	RNA_NodeGeometryRepeatOutputItems = brna.structs[1075].get();
	RNA_GeometryNodeReplaceMaterial = brna.structs[1076].get();
	RNA_GeometryNodeResampleCurve = brna.structs[1077].get();
	RNA_GeometryNodeReverseCurve = brna.structs[1078].get();
	RNA_GeometryNodeRotateInstances = brna.structs[1079].get();
	RNA_GeometryNodeSampleCurve = brna.structs[1080].get();
	RNA_GeometryNodeSampleGrid = brna.structs[1081].get();
	RNA_GeometryNodeSampleGridIndex = brna.structs[1082].get();
	RNA_GeometryNodeSampleIndex = brna.structs[1083].get();
	RNA_GeometryNodeSampleNearest = brna.structs[1084].get();
	RNA_GeometryNodeSampleNearestSurface = brna.structs[1085].get();
	RNA_GeometryNodeSampleSoundFrequencies = brna.structs[1086].get();
	RNA_GeometryNodeSampleUVSurface = brna.structs[1087].get();
	RNA_GeometryNodeScaleElements = brna.structs[1088].get();
	RNA_GeometryNodeScaleInstances = brna.structs[1089].get();
	RNA_GeometryNodeSDFGridBoolean = brna.structs[1090].get();
	RNA_GeometryNodeSDFGridFillet = brna.structs[1091].get();
	RNA_GeometryNodeSDFGridLaplacian = brna.structs[1092].get();
	RNA_GeometryNodeSDFGridMean = brna.structs[1093].get();
	RNA_GeometryNodeSDFGridMeanCurvature = brna.structs[1094].get();
	RNA_GeometryNodeSDFGridMedian = brna.structs[1095].get();
	RNA_GeometryNodeSDFGridOffset = brna.structs[1096].get();
	RNA_GeometryNodeSelfObject = brna.structs[1097].get();
	RNA_GeometryNodeSeparateComponents = brna.structs[1098].get();
	RNA_GeometryNodeSeparateGeometry = brna.structs[1099].get();
	RNA_GeometryNodeSetCurveHandlePositions = brna.structs[1100].get();
	RNA_GeometryNodeSetCurveNormal = brna.structs[1101].get();
	RNA_GeometryNodeSetCurveRadius = brna.structs[1102].get();
	RNA_GeometryNodeSetCurveTilt = brna.structs[1103].get();
	RNA_GeometryNodeSetGeometryBundle = brna.structs[1104].get();
	RNA_GeometryNodeSetGeometryName = brna.structs[1105].get();
	RNA_GeometryNodeSetGreasePencilColor = brna.structs[1106].get();
	RNA_GeometryNodeSetGreasePencilDepth = brna.structs[1107].get();
	RNA_GeometryNodeSetGreasePencilSoftness = brna.structs[1108].get();
	RNA_GeometryNodeSetGridBackground = brna.structs[1109].get();
	RNA_GeometryNodeSetGridTransform = brna.structs[1110].get();
	RNA_GeometryNodeSetID = brna.structs[1111].get();
	RNA_GeometryNodeSetInstanceTransform = brna.structs[1112].get();
	RNA_GeometryNodeSetMaterial = brna.structs[1113].get();
	RNA_GeometryNodeSetMaterialIndex = brna.structs[1114].get();
	RNA_GeometryNodeSetMeshNormal = brna.structs[1115].get();
	RNA_GeometryNodeSetNURBSOrder = brna.structs[1116].get();
	RNA_GeometryNodeSetNURBSWeight = brna.structs[1117].get();
	RNA_GeometryNodeSetPointRadius = brna.structs[1118].get();
	RNA_GeometryNodeSetPosition = brna.structs[1119].get();
	RNA_GeometryNodeSetShadeSmooth = brna.structs[1120].get();
	RNA_GeometryNodeSetSplineCyclic = brna.structs[1121].get();
	RNA_GeometryNodeSetSplineResolution = brna.structs[1122].get();
	RNA_GeometryNodeSimulationInput = brna.structs[1123].get();
	RNA_GeometryNodeSimulationOutput = brna.structs[1124].get();
	RNA_SimulationStateItem = brna.structs[1125].get();
	RNA_NodeGeometrySimulationOutputItems = brna.structs[1126].get();
	RNA_GeometryNodeSortElements = brna.structs[1127].get();
	RNA_GeometryNodeSortList = brna.structs[1128].get();
	RNA_GeometryNodeSplineLength = brna.structs[1129].get();
	RNA_GeometryNodeSplineParameter = brna.structs[1130].get();
	RNA_GeometryNodeSplitEdges = brna.structs[1131].get();
	RNA_GeometryNodeSplitToInstances = brna.structs[1132].get();
	RNA_GeometryNodeStoreNamedAttribute = brna.structs[1133].get();
	RNA_GeometryNodeStoreNamedGrid = brna.structs[1134].get();
	RNA_GeometryNodeStringJoin = brna.structs[1135].get();
	RNA_GeometryNodeStringToCurves = brna.structs[1136].get();
	RNA_GeometryNodeSubdivideCurve = brna.structs[1137].get();
	RNA_GeometryNodeSubdivideMesh = brna.structs[1138].get();
	RNA_GeometryNodeSubdivisionSurface = brna.structs[1139].get();
	RNA_GeometryNodeSwitch = brna.structs[1140].get();
	RNA_GeometryNodeTagFilter = brna.structs[1141].get();
	RNA_GeometryNodeTool3DCursor = brna.structs[1142].get();
	RNA_GeometryNodeToolActiveElement = brna.structs[1143].get();
	RNA_GeometryNodeToolFaceSet = brna.structs[1144].get();
	RNA_GeometryNodeToolMousePosition = brna.structs[1145].get();
	RNA_GeometryNodeToolSelection = brna.structs[1146].get();
	RNA_GeometryNodeToolSetFaceSet = brna.structs[1147].get();
	RNA_GeometryNodeToolSetSelection = brna.structs[1148].get();
	RNA_GeometryNodeTransform = brna.structs[1149].get();
	RNA_GeometryNodeTranslateInstances = brna.structs[1150].get();
	RNA_GeometryNodeTransferAttributes = brna.structs[1151].get();
	RNA_GeometryNodeTriangulate = brna.structs[1152].get();
	RNA_GeometryNodeTrimCurve = brna.structs[1153].get();
	RNA_GeometryNodeUVPackIslands = brna.structs[1154].get();
	RNA_GeometryNodeUVTangent = brna.structs[1155].get();
	RNA_GeometryNodeUVUnwrap = brna.structs[1156].get();
	RNA_GeometryNodeVertexOfCorner = brna.structs[1157].get();
	RNA_GeometryNodeViewer = brna.structs[1158].get();
	RNA_NodeGeometryViewerItem = brna.structs[1159].get();
	RNA_NodeGeometryViewerItems = brna.structs[1160].get();
	RNA_GeometryNodeViewportTransform = brna.structs[1161].get();
	RNA_GeometryNodeVolumeCube = brna.structs[1162].get();
	RNA_GeometryNodeVolumeToMesh = brna.structs[1163].get();
	RNA_GeometryNodeWarning = brna.structs[1164].get();
	RNA_GeometryNodeXPBDSolver = brna.structs[1165].get();
	RNA_ShaderNodeGroup = brna.structs[1166].get();
	RNA_CompositorNodeGroup = brna.structs[1167].get();
	RNA_TextureNodeGroup = brna.structs[1168].get();
	RNA_GeometryNodeGroup = brna.structs[1169].get();
	RNA_ShaderNodeCustomGroup = brna.structs[1170].get();
	RNA_CompositorNodeCustomGroup = brna.structs[1171].get();
	RNA_NodeCustomGroup = brna.structs[1172].get();
	RNA_GeometryNodeCustomGroup = brna.structs[1173].get();
	RNA_NodeSocket = brna.structs[1174].get();
	RNA_NodeSocketStandard = brna.structs[1175].get();
	RNA_NodeSocketFloat = brna.structs[1176].get();
	RNA_NodeSocketFloatUnsigned = brna.structs[1177].get();
	RNA_NodeSocketFloatPercentage = brna.structs[1178].get();
	RNA_NodeSocketFloatFactor = brna.structs[1179].get();
	RNA_NodeSocketFloatMass = brna.structs[1180].get();
	RNA_NodeSocketFloatAngle = brna.structs[1181].get();
	RNA_NodeSocketFloatTime = brna.structs[1182].get();
	RNA_NodeSocketFloatTimeAbsolute = brna.structs[1183].get();
	RNA_NodeSocketFloatDistance = brna.structs[1184].get();
	RNA_NodeSocketFloatWavelength = brna.structs[1185].get();
	RNA_NodeSocketFloatColorTemperature = brna.structs[1186].get();
	RNA_NodeSocketFloatFrequency = brna.structs[1187].get();
	RNA_NodeSocketFloatPixel = brna.structs[1188].get();
	RNA_NodeSocketInt = brna.structs[1189].get();
	RNA_NodeSocketIntUnsigned = brna.structs[1190].get();
	RNA_NodeSocketIntPercentage = brna.structs[1191].get();
	RNA_NodeSocketIntFactor = brna.structs[1192].get();
	RNA_NodeSocketIntPixel = brna.structs[1193].get();
	RNA_NodeSocketBool = brna.structs[1194].get();
	RNA_NodeSocketVector = brna.structs[1195].get();
	RNA_NodeSocketVectorFactor = brna.structs[1196].get();
	RNA_NodeSocketVectorPercentage = brna.structs[1197].get();
	RNA_NodeSocketVectorTranslation = brna.structs[1198].get();
	RNA_NodeSocketVectorDirection = brna.structs[1199].get();
	RNA_NodeSocketVectorVelocity = brna.structs[1200].get();
	RNA_NodeSocketVectorAcceleration = brna.structs[1201].get();
	RNA_NodeSocketVectorEuler = brna.structs[1202].get();
	RNA_NodeSocketVectorXYZ = brna.structs[1203].get();
	RNA_NodeSocketVectorPixel = brna.structs[1204].get();
	RNA_NodeSocketVector2D = brna.structs[1205].get();
	RNA_NodeSocketVectorFactor2D = brna.structs[1206].get();
	RNA_NodeSocketVectorPercentage2D = brna.structs[1207].get();
	RNA_NodeSocketVectorTranslation2D = brna.structs[1208].get();
	RNA_NodeSocketVectorDirection2D = brna.structs[1209].get();
	RNA_NodeSocketVectorVelocity2D = brna.structs[1210].get();
	RNA_NodeSocketVectorAcceleration2D = brna.structs[1211].get();
	RNA_NodeSocketVectorEuler2D = brna.structs[1212].get();
	RNA_NodeSocketVectorXYZ2D = brna.structs[1213].get();
	RNA_NodeSocketVectorPixel2D = brna.structs[1214].get();
	RNA_NodeSocketVector4D = brna.structs[1215].get();
	RNA_NodeSocketVectorFactor4D = brna.structs[1216].get();
	RNA_NodeSocketVectorPercentage4D = brna.structs[1217].get();
	RNA_NodeSocketVectorTranslation4D = brna.structs[1218].get();
	RNA_NodeSocketVectorDirection4D = brna.structs[1219].get();
	RNA_NodeSocketVectorVelocity4D = brna.structs[1220].get();
	RNA_NodeSocketVectorAcceleration4D = brna.structs[1221].get();
	RNA_NodeSocketVectorEuler4D = brna.structs[1222].get();
	RNA_NodeSocketVectorXYZ4D = brna.structs[1223].get();
	RNA_NodeSocketVectorPixel4D = brna.structs[1224].get();
	RNA_NodeSocketIntVector2D = brna.structs[1225].get();
	RNA_NodeSocketIntVectorUnsigned2D = brna.structs[1226].get();
	RNA_NodeSocketIntVectorPercentage2D = brna.structs[1227].get();
	RNA_NodeSocketIntVectorFactor2D = brna.structs[1228].get();
	RNA_NodeSocketIntVectorPixel2D = brna.structs[1229].get();
	RNA_NodeSocketIntVector3D = brna.structs[1230].get();
	RNA_NodeSocketIntVectorUnsigned3D = brna.structs[1231].get();
	RNA_NodeSocketIntVectorPercentage3D = brna.structs[1232].get();
	RNA_NodeSocketIntVectorFactor3D = brna.structs[1233].get();
	RNA_NodeSocketIntVectorPixel3D = brna.structs[1234].get();
	RNA_NodeSocketRotation = brna.structs[1235].get();
	RNA_NodeSocketMatrix = brna.structs[1236].get();
	RNA_NodeSocketColor = brna.structs[1237].get();
	RNA_NodeSocketString = brna.structs[1238].get();
	RNA_NodeSocketStringFilePath = brna.structs[1239].get();
	RNA_NodeSocketShader = brna.structs[1240].get();
	RNA_NodeSocketObject = brna.structs[1241].get();
	RNA_NodeSocketImage = brna.structs[1242].get();
	RNA_NodeSocketGeometry = brna.structs[1243].get();
	RNA_NodeSocketCollection = brna.structs[1244].get();
	RNA_NodeSocketTexture = brna.structs[1245].get();
	RNA_NodeSocketMaterial = brna.structs[1246].get();
	RNA_NodeSocketMenu = brna.structs[1247].get();
	RNA_NodeSocketBundle = brna.structs[1248].get();
	RNA_NodeSocketClosure = brna.structs[1249].get();
	RNA_NodeSocketFont = brna.structs[1250].get();
	RNA_NodeSocketScene = brna.structs[1251].get();
	RNA_NodeSocketText = brna.structs[1252].get();
	RNA_NodeSocketMask = brna.structs[1253].get();
	RNA_NodeSocketSound = brna.structs[1254].get();
	RNA_NodeSocketVirtual = brna.structs[1255].get();
	RNA_NodeTreeInterfaceItem = brna.structs[1256].get();
	RNA_NodeTreeInterfaceSocket = brna.structs[1257].get();
	RNA_NodeTreeInterfacePanel = brna.structs[1258].get();
	RNA_NodeTreeInterface = brna.structs[1259].get();
	RNA_NodeTreeInterfaceSocketFloat = brna.structs[1260].get();
	RNA_NodeTreeInterfaceSocketFloatUnsigned = brna.structs[1261].get();
	RNA_NodeTreeInterfaceSocketFloatPercentage = brna.structs[1262].get();
	RNA_NodeTreeInterfaceSocketFloatFactor = brna.structs[1263].get();
	RNA_NodeTreeInterfaceSocketFloatMass = brna.structs[1264].get();
	RNA_NodeTreeInterfaceSocketFloatAngle = brna.structs[1265].get();
	RNA_NodeTreeInterfaceSocketFloatTime = brna.structs[1266].get();
	RNA_NodeTreeInterfaceSocketFloatTimeAbsolute = brna.structs[1267].get();
	RNA_NodeTreeInterfaceSocketFloatDistance = brna.structs[1268].get();
	RNA_NodeTreeInterfaceSocketFloatWavelength = brna.structs[1269].get();
	RNA_NodeTreeInterfaceSocketFloatColorTemperature = brna.structs[1270].get();
	RNA_NodeTreeInterfaceSocketFloatFrequency = brna.structs[1271].get();
	RNA_NodeTreeInterfaceSocketFloatPixel = brna.structs[1272].get();
	RNA_NodeTreeInterfaceSocketInt = brna.structs[1273].get();
	RNA_NodeTreeInterfaceSocketIntUnsigned = brna.structs[1274].get();
	RNA_NodeTreeInterfaceSocketIntPercentage = brna.structs[1275].get();
	RNA_NodeTreeInterfaceSocketIntFactor = brna.structs[1276].get();
	RNA_NodeTreeInterfaceSocketIntPixel = brna.structs[1277].get();
	RNA_NodeTreeInterfaceSocketBool = brna.structs[1278].get();
	RNA_NodeTreeInterfaceSocketVector = brna.structs[1279].get();
	RNA_NodeTreeInterfaceSocketVectorFactor = brna.structs[1280].get();
	RNA_NodeTreeInterfaceSocketVectorPercentage = brna.structs[1281].get();
	RNA_NodeTreeInterfaceSocketVectorTranslation = brna.structs[1282].get();
	RNA_NodeTreeInterfaceSocketVectorDirection = brna.structs[1283].get();
	RNA_NodeTreeInterfaceSocketVectorVelocity = brna.structs[1284].get();
	RNA_NodeTreeInterfaceSocketVectorAcceleration = brna.structs[1285].get();
	RNA_NodeTreeInterfaceSocketVectorEuler = brna.structs[1286].get();
	RNA_NodeTreeInterfaceSocketVectorXYZ = brna.structs[1287].get();
	RNA_NodeTreeInterfaceSocketVectorPixel = brna.structs[1288].get();
	RNA_NodeTreeInterfaceSocketVector2D = brna.structs[1289].get();
	RNA_NodeTreeInterfaceSocketVectorFactor2D = brna.structs[1290].get();
	RNA_NodeTreeInterfaceSocketVectorPercentage2D = brna.structs[1291].get();
	RNA_NodeTreeInterfaceSocketVectorTranslation2D = brna.structs[1292].get();
	RNA_NodeTreeInterfaceSocketVectorDirection2D = brna.structs[1293].get();
	RNA_NodeTreeInterfaceSocketVectorVelocity2D = brna.structs[1294].get();
	RNA_NodeTreeInterfaceSocketVectorAcceleration2D = brna.structs[1295].get();
	RNA_NodeTreeInterfaceSocketVectorEuler2D = brna.structs[1296].get();
	RNA_NodeTreeInterfaceSocketVectorXYZ2D = brna.structs[1297].get();
	RNA_NodeTreeInterfaceSocketVectorPixel2D = brna.structs[1298].get();
	RNA_NodeTreeInterfaceSocketVector4D = brna.structs[1299].get();
	RNA_NodeTreeInterfaceSocketVectorFactor4D = brna.structs[1300].get();
	RNA_NodeTreeInterfaceSocketVectorPercentage4D = brna.structs[1301].get();
	RNA_NodeTreeInterfaceSocketVectorTranslation4D = brna.structs[1302].get();
	RNA_NodeTreeInterfaceSocketVectorDirection4D = brna.structs[1303].get();
	RNA_NodeTreeInterfaceSocketVectorVelocity4D = brna.structs[1304].get();
	RNA_NodeTreeInterfaceSocketVectorAcceleration4D = brna.structs[1305].get();
	RNA_NodeTreeInterfaceSocketVectorEuler4D = brna.structs[1306].get();
	RNA_NodeTreeInterfaceSocketVectorXYZ4D = brna.structs[1307].get();
	RNA_NodeTreeInterfaceSocketVectorPixel4D = brna.structs[1308].get();
	RNA_NodeTreeInterfaceSocketIntVector2D = brna.structs[1309].get();
	RNA_NodeTreeInterfaceSocketIntVectorUnsigned2D = brna.structs[1310].get();
	RNA_NodeTreeInterfaceSocketIntVectorPercentage2D = brna.structs[1311].get();
	RNA_NodeTreeInterfaceSocketIntVectorFactor2D = brna.structs[1312].get();
	RNA_NodeTreeInterfaceSocketIntVectorPixel2D = brna.structs[1313].get();
	RNA_NodeTreeInterfaceSocketIntVector3D = brna.structs[1314].get();
	RNA_NodeTreeInterfaceSocketIntVectorUnsigned3D = brna.structs[1315].get();
	RNA_NodeTreeInterfaceSocketIntVectorPercentage3D = brna.structs[1316].get();
	RNA_NodeTreeInterfaceSocketIntVectorFactor3D = brna.structs[1317].get();
	RNA_NodeTreeInterfaceSocketIntVectorPixel3D = brna.structs[1318].get();
	RNA_NodeTreeInterfaceSocketRotation = brna.structs[1319].get();
	RNA_NodeTreeInterfaceSocketMatrix = brna.structs[1320].get();
	RNA_NodeTreeInterfaceSocketColor = brna.structs[1321].get();
	RNA_NodeTreeInterfaceSocketString = brna.structs[1322].get();
	RNA_NodeTreeInterfaceSocketStringFilePath = brna.structs[1323].get();
	RNA_NodeTreeInterfaceSocketShader = brna.structs[1324].get();
	RNA_NodeTreeInterfaceSocketObject = brna.structs[1325].get();
	RNA_NodeTreeInterfaceSocketImage = brna.structs[1326].get();
	RNA_NodeTreeInterfaceSocketGeometry = brna.structs[1327].get();
	RNA_NodeTreeInterfaceSocketCollection = brna.structs[1328].get();
	RNA_NodeTreeInterfaceSocketTexture = brna.structs[1329].get();
	RNA_NodeTreeInterfaceSocketMaterial = brna.structs[1330].get();
	RNA_NodeTreeInterfaceSocketMenu = brna.structs[1331].get();
	RNA_NodeTreeInterfaceSocketBundle = brna.structs[1332].get();
	RNA_NodeTreeInterfaceSocketClosure = brna.structs[1333].get();
	RNA_NodeTreeInterfaceSocketFont = brna.structs[1334].get();
	RNA_NodeTreeInterfaceSocketScene = brna.structs[1335].get();
	RNA_NodeTreeInterfaceSocketText = brna.structs[1336].get();
	RNA_NodeTreeInterfaceSocketMask = brna.structs[1337].get();
	RNA_NodeTreeInterfaceSocketSound = brna.structs[1338].get();
	RNA_Object = brna.structs[1339].get();
	RNA_ObjectModifiers = brna.structs[1340].get();
	RNA_ObjectShaderFx = brna.structs[1341].get();
	RNA_ObjectConstraints = brna.structs[1342].get();
	RNA_VertexGroups = brna.structs[1343].get();
	RNA_ParticleSystems = brna.structs[1344].get();
	RNA_VertexGroup = brna.structs[1345].get();
	RNA_MaterialSlot = brna.structs[1346].get();
	RNA_ObjectDisplay = brna.structs[1347].get();
	RNA_ObjectLineArt = brna.structs[1348].get();
	RNA_ObjectLightLinking = brna.structs[1349].get();
	RNA_PointCache = brna.structs[1350].get();
	RNA_PointCaches = brna.structs[1351].get();
	RNA_PointCacheItem = brna.structs[1352].get();
	RNA_CollisionSettings = brna.structs[1353].get();
	RNA_EffectorWeights = brna.structs[1354].get();
	RNA_FieldSettings = brna.structs[1355].get();
	RNA_SoftBodySettings = brna.structs[1356].get();
	RNA_DepsgraphObjectInstance = brna.structs[1357].get();
	RNA_DepsgraphUpdate = brna.structs[1358].get();
	RNA_Depsgraph = brna.structs[1359].get();
	RNA_PackedFile = brna.structs[1360].get();
	RNA_PaletteColor = brna.structs[1361].get();
	RNA_Palette = brna.structs[1362].get();
	RNA_PaletteColors = brna.structs[1363].get();
	RNA_ParticleTarget = brna.structs[1364].get();
	RNA_SPHFluidSettings = brna.structs[1365].get();
	RNA_ParticleHairKey = brna.structs[1366].get();
	RNA_ParticleKey = brna.structs[1367].get();
	RNA_ChildParticle = brna.structs[1368].get();
	RNA_Particle = brna.structs[1369].get();
	RNA_ParticleDupliWeight = brna.structs[1370].get();
	RNA_ParticleSystem = brna.structs[1371].get();
	RNA_ParticleSettingsTextureSlot = brna.structs[1372].get();
	RNA_ParticleSettings = brna.structs[1373].get();
	RNA_ParticleSettingsTextureSlots = brna.structs[1374].get();
	RNA_Point = brna.structs[1375].get();
	RNA_PointCloud = brna.structs[1376].get();
	RNA_Pose = brna.structs[1377].get();
	RNA_PoseBone = brna.structs[1378].get();
	RNA_PoseBoneConstraints = brna.structs[1379].get();
	RNA_IKParam = brna.structs[1380].get();
	RNA_Itasc = brna.structs[1381].get();
	RNA_CurveProfilePoint = brna.structs[1382].get();
	RNA_CurveProfile = brna.structs[1383].get();
	RNA_CurveProfilePoints = brna.structs[1384].get();
	RNA_LightProbe = brna.structs[1385].get();
	RNA_LightProbePlane = brna.structs[1386].get();
	RNA_LightProbeSphere = brna.structs[1387].get();
	RNA_LightProbeVolume = brna.structs[1388].get();
	RNA_RenderEngine = brna.structs[1389].get();
	RNA_HydraRenderEngine = brna.structs[1390].get();
	RNA_RenderResult = brna.structs[1391].get();
	RNA_RenderView = brna.structs[1392].get();
	RNA_RenderLayer = brna.structs[1393].get();
	RNA_RenderPasses = brna.structs[1394].get();
	RNA_RenderPass = brna.structs[1395].get();
	RNA_RigidBodyWorld = brna.structs[1396].get();
	RNA_RigidBodyObject = brna.structs[1397].get();
	RNA_RigidBodyConstraint = brna.structs[1398].get();
	RNA_Scene = brna.structs[1399].get();
	RNA_SceneObjects = brna.structs[1400].get();
	RNA_KeyingSets = brna.structs[1401].get();
	RNA_KeyingSetsAll = brna.structs[1402].get();
	RNA_TimelineMarkers = brna.structs[1403].get();
	RNA_ViewLayers = brna.structs[1404].get();
	RNA_ToolSettings = brna.structs[1405].get();
	RNA_GPencilInterpolateSettings = brna.structs[1406].get();
	RNA_CurvePaintSettings = brna.structs[1407].get();
	RNA_SequencerToolSettings = brna.structs[1408].get();
	RNA_MeshStatVis = brna.structs[1409].get();
	RNA_UnitSettings = brna.structs[1410].get();
	RNA_Stereo3dFormat = brna.structs[1411].get();
	RNA_ImageFormatSettings = brna.structs[1412].get();
	RNA_TransformOrientation = brna.structs[1413].get();
	RNA_TransformOrientationSlot = brna.structs[1414].get();
	RNA_View3DCursor = brna.structs[1415].get();
	RNA_SelectedUvElement = brna.structs[1416].get();
	RNA_DisplaySafeAreas = brna.structs[1417].get();
	RNA_SceneDisplay = brna.structs[1418].get();
	RNA_RaytraceEEVEE = brna.structs[1419].get();
	RNA_SceneEEVEE = brna.structs[1420].get();
	RNA_SceneHydra = brna.structs[1421].get();
	RNA_AOV = brna.structs[1422].get();
	RNA_Lightgroup = brna.structs[1423].get();
	RNA_ViewLayerEEVEE = brna.structs[1424].get();
	RNA_SceneGpencil = brna.structs[1425].get();
	RNA_FFmpegSettings = brna.structs[1426].get();
	RNA_RenderSettings = brna.structs[1427].get();
	RNA_RenderViews = brna.structs[1428].get();
	RNA_BakeSettings = brna.structs[1429].get();
	RNA_SceneRenderView = brna.structs[1430].get();
	RNA_Screen = brna.structs[1431].get();
	RNA_Area = brna.structs[1432].get();
	RNA_AreaSpaces = brna.structs[1433].get();
	RNA_Region = brna.structs[1434].get();
	RNA_View2D = brna.structs[1435].get();
	RNA_PaintCurve = brna.structs[1436].get();
	RNA_Paint = brna.structs[1437].get();
	RNA_UnifiedPaintSettings = brna.structs[1438].get();
	RNA_MeshAutomaskingSettings = brna.structs[1439].get();
	RNA_Sculpt = brna.structs[1440].get();
	RNA_UvSculpt = brna.structs[1441].get();
	RNA_GpPaint = brna.structs[1442].get();
	RNA_GpVertexPaint = brna.structs[1443].get();
	RNA_GpSculptPaint = brna.structs[1444].get();
	RNA_GpWeightPaint = brna.structs[1445].get();
	RNA_VertexPaint = brna.structs[1446].get();
	RNA_PaintModeSettings = brna.structs[1447].get();
	RNA_ImagePaint = brna.structs[1448].get();
	RNA_ParticleEdit = brna.structs[1449].get();
	RNA_ParticleBrush = brna.structs[1450].get();
	RNA_GPencilSculptGuide = brna.structs[1451].get();
	RNA_GPencilSculptSettings = brna.structs[1452].get();
	RNA_CurvesSculpt = brna.structs[1453].get();
	RNA_StripColorBalanceData = brna.structs[1454].get();
	RNA_StripElement = brna.structs[1455].get();
	RNA_RetimingKey = brna.structs[1456].get();
	RNA_StripProxy = brna.structs[1457].get();
	RNA_StripColorBalance = brna.structs[1458].get();
	RNA_StripCrop = brna.structs[1459].get();
	RNA_StripTransform = brna.structs[1460].get();
	RNA_Strip = brna.structs[1461].get();
	RNA_StripModifiers = brna.structs[1462].get();
	RNA_SequenceEditor = brna.structs[1463].get();
	RNA_StripsTopLevel = brna.structs[1464].get();
	RNA_SequenceTimelineChannel = brna.structs[1465].get();
	RNA_ImageStrip = brna.structs[1466].get();
	RNA_StripElements = brna.structs[1467].get();
	RNA_MetaStrip = brna.structs[1468].get();
	RNA_StripsMeta = brna.structs[1469].get();
	RNA_SceneStrip = brna.structs[1470].get();
	RNA_MovieStrip = brna.structs[1471].get();
	RNA_MovieClipStrip = brna.structs[1472].get();
	RNA_MaskStrip = brna.structs[1473].get();
	RNA_SoundStrip = brna.structs[1474].get();
	RNA_EffectStrip = brna.structs[1475].get();
	RNA_AddStrip = brna.structs[1476].get();
	RNA_AdjustmentStrip = brna.structs[1477].get();
	RNA_AlphaOverStrip = brna.structs[1478].get();
	RNA_AlphaUnderStrip = brna.structs[1479].get();
	RNA_ColorStrip = brna.structs[1480].get();
	RNA_CrossStrip = brna.structs[1481].get();
	RNA_GammaCrossStrip = brna.structs[1482].get();
	RNA_CompositorStrip = brna.structs[1483].get();
	RNA_GlowStrip = brna.structs[1484].get();
	RNA_MulticamStrip = brna.structs[1485].get();
	RNA_MultiplyStrip = brna.structs[1486].get();
	RNA_SpeedControlStrip = brna.structs[1487].get();
	RNA_SubtractStrip = brna.structs[1488].get();
	RNA_WipeStrip = brna.structs[1489].get();
	RNA_GaussianBlurStrip = brna.structs[1490].get();
	RNA_TextStrip = brna.structs[1491].get();
	RNA_ColorMixStrip = brna.structs[1492].get();
	RNA_StripModifier = brna.structs[1493].get();
	RNA_ColorBalanceModifier = brna.structs[1494].get();
	RNA_CurvesModifier = brna.structs[1495].get();
	RNA_HueCorrectModifier = brna.structs[1496].get();
	RNA_MaskStripModifier = brna.structs[1497].get();
	RNA_BrightContrastModifier = brna.structs[1498].get();
	RNA_WhiteBalanceModifier = brna.structs[1499].get();
	RNA_SequencerTonemapModifierData = brna.structs[1500].get();
	RNA_SequencerCompositorModifierProperties = brna.structs[1501].get();
	RNA_SequencerCompositorModifierPropertiesEmpty = brna.structs[1502].get();
	RNA_SequencerCompositorModifierData = brna.structs[1503].get();
	RNA_SoundEqualizerModifier = brna.structs[1504].get();
	RNA_EQCurveMappingData = brna.structs[1505].get();
	RNA_PitchModifier = brna.structs[1506].get();
	RNA_EchoModifier = brna.structs[1507].get();
	RNA_RetimingKeys = brna.structs[1508].get();
	RNA_Space = brna.structs[1509].get();
	RNA_ViewerPathElem = brna.structs[1510].get();
	RNA_IDViewerPathElem = brna.structs[1511].get();
	RNA_ModifierViewerPathElem = brna.structs[1512].get();
	RNA_GroupNodeViewerPathElem = brna.structs[1513].get();
	RNA_SimulationZoneViewerPathElem = brna.structs[1514].get();
	RNA_RepeatZoneViewerPathElem = brna.structs[1515].get();
	RNA_ForeachGeometryElementZoneViewerPathElem = brna.structs[1516].get();
	RNA_EvaluateClosureNodeViewerPathElem = brna.structs[1517].get();
	RNA_ViewerNodeViewerPathElem = brna.structs[1518].get();
	RNA_ViewerPath = brna.structs[1519].get();
	RNA_SpaceImageEditor = brna.structs[1520].get();
	RNA_SpaceUVEditor = brna.structs[1521].get();
	RNA_SpaceImageOverlay = brna.structs[1522].get();
	RNA_SpaceSequenceEditor = brna.structs[1523].get();
	RNA_SequencerPreviewOverlay = brna.structs[1524].get();
	RNA_SequencerTimelineOverlay = brna.structs[1525].get();
	RNA_SequencerCacheOverlay = brna.structs[1526].get();
	RNA_SpaceTextEditor = brna.structs[1527].get();
	RNA_FileSelectEntry = brna.structs[1528].get();
	RNA_FileSelectParams = brna.structs[1529].get();
	RNA_FileAssetSelectParams = brna.structs[1530].get();
	RNA_FileSelectIDFilter = brna.structs[1531].get();
	RNA_FileAssetSelectIDFilter = brna.structs[1532].get();
	RNA_FileBrowserFSMenuEntry = brna.structs[1533].get();
	RNA_SpaceFileBrowser = brna.structs[1534].get();
	RNA_SpaceOutliner = brna.structs[1535].get();
	RNA_SpaceView3D = brna.structs[1536].get();
	RNA_View3DShading = brna.structs[1537].get();
	RNA_View3DOverlay = brna.structs[1538].get();
	RNA_RegionView3D = brna.structs[1539].get();
	RNA_SpaceProperties = brna.structs[1540].get();
	RNA_SpaceDopeSheetEditor = brna.structs[1541].get();
	RNA_SpaceDopeSheetOverlay = brna.structs[1542].get();
	RNA_SpaceGraphEditor = brna.structs[1543].get();
	RNA_SpaceNLA = brna.structs[1544].get();
	RNA_SpaceConsole = brna.structs[1545].get();
	RNA_ConsoleLine = brna.structs[1546].get();
	RNA_SpaceInfo = brna.structs[1547].get();
	RNA_SpacePreferences = brna.structs[1548].get();
	RNA_NodeTreePath = brna.structs[1549].get();
	RNA_SpaceNodeEditor = brna.structs[1550].get();
	RNA_SpaceNodeEditorPath = brna.structs[1551].get();
	RNA_SpaceNodeOverlay = brna.structs[1552].get();
	RNA_SpaceClipEditor = brna.structs[1553].get();
	RNA_SpaceClipOverlay = brna.structs[1554].get();
	RNA_SpreadsheetTableID = brna.structs[1555].get();
	RNA_SpreadsheetTableIDGeometry = brna.structs[1556].get();
	RNA_SpreadsheetColumn = brna.structs[1557].get();
	RNA_SpreadsheetColumnID = brna.structs[1558].get();
	RNA_SpreadsheetTable = brna.structs[1559].get();
	RNA_SpreadsheetTables = brna.structs[1560].get();
	RNA_SpaceSpreadsheet = brna.structs[1561].get();
	RNA_SpreadsheetRowFilter = brna.structs[1562].get();
	RNA_SpaceProject = brna.structs[1563].get();
	RNA_Speaker = brna.structs[1564].get();
	RNA_TextLine = brna.structs[1565].get();
	RNA_Text = brna.structs[1566].get();
	RNA_TimelineMarker = brna.structs[1567].get();
	RNA_Sound = brna.structs[1568].get();
	RNA_UILayout = brna.structs[1569].get();
	RNA_Panel = brna.structs[1570].get();
	RNA_UIList = brna.structs[1571].get();
	RNA_Header = brna.structs[1572].get();
	RNA_Menu = brna.structs[1573].get();
	RNA_AssetShelf = brna.structs[1574].get();
	RNA_FileHandler = brna.structs[1575].get();
	RNA_LayoutPanelState = brna.structs[1576].get();
	RNA_TextboxState = brna.structs[1577].get();
	RNA_ThemeFontStyle = brna.structs[1578].get();
	RNA_ThemeStyle = brna.structs[1579].get();
	RNA_ThemeWidgetColors = brna.structs[1580].get();
	RNA_ThemeWidgetStateColors = brna.structs[1581].get();
	RNA_ThemeGradientColors = brna.structs[1582].get();
	RNA_ThemeUserInterface = brna.structs[1583].get();
	RNA_ThemeRegionsChannels = brna.structs[1584].get();
	RNA_ThemeRegionsAssetShelf = brna.structs[1585].get();
	RNA_ThemeRegionsScrubbing = brna.structs[1586].get();
	RNA_ThemeRegionsSidebars = brna.structs[1587].get();
	RNA_ThemeRegions = brna.structs[1588].get();
	RNA_ThemeCommonAnim = brna.structs[1589].get();
	RNA_ThemeCommonCurves = brna.structs[1590].get();
	RNA_ThemeCommon = brna.structs[1591].get();
	RNA_ThemeSpaceGeneric = brna.structs[1592].get();
	RNA_ThemeSpaceGradient = brna.structs[1593].get();
	RNA_ThemeView3D = brna.structs[1594].get();
	RNA_ThemeGraphEditor = brna.structs[1595].get();
	RNA_ThemeFileBrowser = brna.structs[1596].get();
	RNA_ThemeNLAEditor = brna.structs[1597].get();
	RNA_ThemeDopeSheet = brna.structs[1598].get();
	RNA_ThemeImageEditor = brna.structs[1599].get();
	RNA_ThemeSequenceEditor = brna.structs[1600].get();
	RNA_ThemeProperties = brna.structs[1601].get();
	RNA_ThemeTextEditor = brna.structs[1602].get();
	RNA_ThemeNodeEditor = brna.structs[1603].get();
	RNA_ThemeOutliner = brna.structs[1604].get();
	RNA_ThemeInfo = brna.structs[1605].get();
	RNA_ThemePreferences = brna.structs[1606].get();
	RNA_ThemeConsole = brna.structs[1607].get();
	RNA_ThemeClipEditor = brna.structs[1608].get();
	RNA_ThemeTopBar = brna.structs[1609].get();
	RNA_ThemeStatusBar = brna.structs[1610].get();
	RNA_ThemeSpreadsheet = brna.structs[1611].get();
	RNA_ThemeBoneColorSet = brna.structs[1612].get();
	RNA_ThemeCollectionColor = brna.structs[1613].get();
	RNA_ThemeStripColor = brna.structs[1614].get();
	RNA_Theme = brna.structs[1615].get();
	RNA_UserSolidLight = brna.structs[1616].get();
	RNA_WalkNavigation = brna.structs[1617].get();
	RNA_XrNavigation = brna.structs[1618].get();
	RNA_Preferences = brna.structs[1619].get();
	RNA_Addons = brna.structs[1620].get();
	RNA_PathCompareCollection = brna.structs[1621].get();
	RNA_PreferencesView = brna.structs[1622].get();
	RNA_PreferencesEdit = brna.structs[1623].get();
	RNA_PreferencesInput = brna.structs[1624].get();
	RNA_PreferencesKeymap = brna.structs[1625].get();
	RNA_PreferencesFilePaths = brna.structs[1626].get();
	RNA_ScriptDirectory = brna.structs[1627].get();
	RNA_ScriptDirectoryCollection = brna.structs[1628].get();
	RNA_UserAssetLibrary = brna.structs[1629].get();
	RNA_AssetLibraryCollection = brna.structs[1630].get();
	RNA_PreferencesAssetLibraries = brna.structs[1631].get();
	RNA_PreferencesExtensions = brna.structs[1632].get();
	RNA_UserExtensionRepo = brna.structs[1633].get();
	RNA_UserExtensionRepoCollection = brna.structs[1634].get();
	RNA_PreferencesSystem = brna.structs[1635].get();
	RNA_Addon = brna.structs[1636].get();
	RNA_AddonPreferences = brna.structs[1637].get();
	RNA_StudioLights = brna.structs[1638].get();
	RNA_StudioLight = brna.structs[1639].get();
	RNA_PathCompare = brna.structs[1640].get();
	RNA_PreferencesApps = brna.structs[1641].get();
	RNA_PreferencesExperimental = brna.structs[1642].get();
	RNA_VectorFont = brna.structs[1643].get();
	RNA_VolumeGrid = brna.structs[1644].get();
	RNA_VolumeDisplay = brna.structs[1645].get();
	RNA_VolumeRender = brna.structs[1646].get();
	RNA_Volume = brna.structs[1647].get();
	RNA_VolumeGrids = brna.structs[1648].get();
	RNA_Operator = brna.structs[1649].get();
	RNA_OperatorProperties = brna.structs[1650].get();
	RNA_OperatorOptions = brna.structs[1651].get();
	RNA_OperatorMousePath = brna.structs[1652].get();
	RNA_OperatorFileListElement = brna.structs[1653].get();
	RNA_Macro = brna.structs[1654].get();
	RNA_OperatorMacro = brna.structs[1655].get();
	RNA_NDOFMotionEventData = brna.structs[1656].get();
	RNA_Event = brna.structs[1657].get();
	RNA_Timer = brna.structs[1658].get();
	RNA_UIPopupMenu = brna.structs[1659].get();
	RNA_UIPopover = brna.structs[1660].get();
	RNA_UIPieMenu = brna.structs[1661].get();
	RNA_Window = brna.structs[1662].get();
	RNA_Stereo3dDisplay = brna.structs[1663].get();
	RNA_Report = brna.structs[1664].get();
	RNA_WindowManager = brna.structs[1665].get();
	RNA_Windows = brna.structs[1666].get();
	RNA_KeyConfigurations = brna.structs[1667].get();
	RNA_KeyConfigPreferences = brna.structs[1668].get();
	RNA_KeyConfig = brna.structs[1669].get();
	RNA_KeyMaps = brna.structs[1670].get();
	RNA_KeyMap = brna.structs[1671].get();
	RNA_KeyMapItems = brna.structs[1672].get();
	RNA_KeyMapItem = brna.structs[1673].get();
	RNA_GizmoGroup = brna.structs[1674].get();
	RNA_Gizmo = brna.structs[1675].get();
	RNA_GizmoProperties = brna.structs[1676].get();
	RNA_Gizmos = brna.structs[1677].get();
	RNA_GizmoGroupProperties = brna.structs[1678].get();
	RNA_UndoStep = brna.structs[1679].get();
	RNA_UndoStack = brna.structs[1680].get();
	RNA_wmOwnerID = brna.structs[1681].get();
	RNA_WorkSpaceTool = brna.structs[1682].get();
	RNA_WorkSpace = brna.structs[1683].get();
	RNA_wmOwnerIDs = brna.structs[1684].get();
	RNA_wmTools = brna.structs[1685].get();
	RNA_World = brna.structs[1686].get();
	RNA_WorldLighting = brna.structs[1687].get();
	RNA_WorldMistSettings = brna.structs[1688].get();
	RNA_MovieClip = brna.structs[1689].get();
	RNA_MovieClipProxy = brna.structs[1690].get();
	RNA_MovieClipUser = brna.structs[1691].get();
	RNA_MovieClipScopes = brna.structs[1692].get();
	RNA_MovieTrackingSettings = brna.structs[1693].get();
	RNA_MovieTrackingCamera = brna.structs[1694].get();
	RNA_MovieTrackingMarker = brna.structs[1695].get();
	RNA_MovieTrackingTrack = brna.structs[1696].get();
	RNA_MovieTrackingMarkers = brna.structs[1697].get();
	RNA_MovieTrackingPlaneMarker = brna.structs[1698].get();
	RNA_MovieTrackingPlaneTrack = brna.structs[1699].get();
	RNA_MovieTrackingPlaneMarkers = brna.structs[1700].get();
	RNA_MovieTrackingTracks = brna.structs[1701].get();
	RNA_MovieTrackingPlaneTracks = brna.structs[1702].get();
	RNA_MovieTrackingObjectTracks = brna.structs[1703].get();
	RNA_MovieTrackingObjectPlaneTracks = brna.structs[1704].get();
	RNA_MovieTrackingStabilization = brna.structs[1705].get();
	RNA_MovieTrackingReconstructedCameras = brna.structs[1706].get();
	RNA_MovieReconstructedCamera = brna.structs[1707].get();
	RNA_MovieTrackingReconstruction = brna.structs[1708].get();
	RNA_MovieTrackingObject = brna.structs[1709].get();
	RNA_MovieTrackingDopesheet = brna.structs[1710].get();
	RNA_MovieTracking = brna.structs[1711].get();
	RNA_MovieTrackingObjects = brna.structs[1712].get();
	RNA_MaskParent = brna.structs[1713].get();
	RNA_MaskSplinePointUW = brna.structs[1714].get();
	RNA_MaskSplinePoint = brna.structs[1715].get();
	RNA_MaskSpline = brna.structs[1716].get();
	RNA_MaskSplines = brna.structs[1717].get();
	RNA_MaskSplinePoints = brna.structs[1718].get();
	RNA_MaskLayer = brna.structs[1719].get();
	RNA_Mask = brna.structs[1720].get();
	RNA_MaskLayers = brna.structs[1721].get();
	RNA_XrActionMap = brna.structs[1722].get();
	RNA_XrActionMapItems = brna.structs[1723].get();
	RNA_XrUserPath = brna.structs[1724].get();
	RNA_XrActionMapItem = brna.structs[1725].get();
	RNA_XrUserPaths = brna.structs[1726].get();
	RNA_XrActionMapBindings = brna.structs[1727].get();
	RNA_XrComponentPath = brna.structs[1728].get();
	RNA_XrActionMapBinding = brna.structs[1729].get();
	RNA_XrComponentPaths = brna.structs[1730].get();
	RNA_XrSessionSettings = brna.structs[1731].get();
	RNA_XrSessionState = brna.structs[1732].get();
	RNA_XrActionMaps = brna.structs[1733].get();
	RNA_XrViewfinderState = brna.structs[1734].get();
	RNA_XrEventData = brna.structs[1735].get();
	register_struct_Struct(brna);
	register_struct_Property(brna);
	register_struct_BoolProperty(brna);
	register_struct_IntProperty(brna);
	register_struct_FloatProperty(brna);
	register_struct_StringProperty(brna);
	register_struct_EnumProperty(brna);
	register_struct_EnumPropertyItem(brna);
	register_struct_PointerProperty(brna);
	register_struct_CollectionProperty(brna);
	register_struct_Function(brna);
	register_struct_BlenderRNA(brna);
	register_struct_PrimitiveString(brna);
	register_struct_PrimitiveInt(brna);
	register_struct_PrimitiveFloat(brna);
	register_struct_PrimitiveBoolean(brna);
	register_struct_UnknownType(brna);
	register_struct_AnyType(brna);
	register_struct_ID(brna);
	register_struct_IDOverrideLibrary(brna);
	register_struct_IDOverrideLibraryProperties(brna);
	register_struct_IDOverrideLibraryProperty(brna);
	register_struct_IDOverrideLibraryPropertyOperations(brna);
	register_struct_IDOverrideLibraryPropertyOperation(brna);
	register_struct_ImagePreview(brna);
	register_struct_PropertyGroupItem(brna);
	register_struct_PropertyGroup(brna);
	register_struct_IDMaterials(brna);
	register_struct_Library(brna);
	register_struct_LibraryWeakReference(brna);
	register_struct_IDPropertyWrapPtr(brna);
	register_struct_Texture(brna);
	register_struct_CloudsTexture(brna);
	register_struct_WoodTexture(brna);
	register_struct_MarbleTexture(brna);
	register_struct_MagicTexture(brna);
	register_struct_BlendTexture(brna);
	register_struct_StucciTexture(brna);
	register_struct_NoiseTexture(brna);
	register_struct_ImageTexture(brna);
	register_struct_MusgraveTexture(brna);
	register_struct_VoronoiTexture(brna);
	register_struct_DistortedNoiseTexture(brna);
	register_struct_TextureSlot(brna);
	register_struct_TexMapping(brna);
	register_struct_ColorMapping(brna);
	register_struct_Action(brna);
	register_struct_ActionSlots(brna);
	register_struct_ActionLayers(brna);
	register_struct_ActionPoseMarkers(brna);
	register_struct_ActionGroup(brna);
	register_struct_DopeSheet(brna);
	register_struct_ActionSlot(brna);
	register_struct_ActionLayer(brna);
	register_struct_ActionStrips(brna);
	register_struct_ActionStrip(brna);
	register_struct_ActionKeyframeStrip(brna);
	register_struct_ActionChannelbags(brna);
	register_struct_ActionChannelbag(brna);
	register_struct_ActionChannelbagFCurves(brna);
	register_struct_ActionChannelbagGroups(brna);
	register_struct_AnimData(brna);
	register_struct_NlaTracks(brna);
	register_struct_AnimDataDrivers(brna);
	register_struct_KeyingSet(brna);
	register_struct_KeyingSetPaths(brna);
	register_struct_KeyingSetPath(brna);
	register_struct_KeyingSetInfo(brna);
	register_struct_AnimViz(brna);
	register_struct_AnimVizMotionPaths(brna);
	register_struct_MotionPath(brna);
	register_struct_MotionPathVert(brna);
	register_struct_BoneColor(brna);
	register_struct_BoneCollection(brna);
	register_struct_Armature(brna);
	register_struct_ArmatureBones(brna);
	register_struct_ArmatureEditBones(brna);
	register_struct_BoneCollections(brna);
	register_struct_Bone(brna);
	register_struct_BoneCollectionMemberships(brna);
	register_struct_EditBone(brna);
	register_struct_Attribute(brna);
	register_struct_FloatAttribute(brna);
	register_struct_FloatAttributeValue(brna);
	register_struct_FloatVectorAttribute(brna);
	register_struct_FloatVectorAttributeValue(brna);
	register_struct_FloatColorAttribute(brna);
	register_struct_FloatColorAttributeValue(brna);
	register_struct_ByteColorAttribute(brna);
	register_struct_ByteColorAttributeValue(brna);
	register_struct_IntAttribute(brna);
	register_struct_IntAttributeValue(brna);
	register_struct_Short2Attribute(brna);
	register_struct_Short2AttributeValue(brna);
	register_struct_Int2Attribute(brna);
	register_struct_Int2AttributeValue(brna);
	register_struct_QuaternionAttribute(brna);
	register_struct_QuaternionAttributeValue(brna);
	register_struct_Float4x4Attribute(brna);
	register_struct_Float4x4AttributeValue(brna);
	register_struct_StringAttribute(brna);
	register_struct_StringAttributeValue(brna);
	register_struct_BoolAttribute(brna);
	register_struct_BoolAttributeValue(brna);
	register_struct_Float2Attribute(brna);
	register_struct_Float2AttributeValue(brna);
	register_struct_Float4Attribute(brna);
	register_struct_Float4AttributeValue(brna);
	register_struct_ByteIntAttribute(brna);
	register_struct_ByteIntAttributeValue(brna);
	register_struct_AttributeGroupMesh(brna);
	register_struct_AttributeGroupPointCloud(brna);
	register_struct_AttributeGroupCurves(brna);
	register_struct_AttributeGroupGreasePencil(brna);
	register_struct_AttributeGroupGreasePencilDrawing(brna);
	register_struct_AssetTag(brna);
	register_struct_AssetMetaData(brna);
	register_struct_AssetTags(brna);
	register_struct_AssetLibraryReference(brna);
	register_struct_AssetLibrary(brna);
	register_struct_AssetRepresentation(brna);
	register_struct_AssetWeakReference(brna);
	register_struct_BlenderProject(brna);
	register_struct_BoidRule(brna);
	register_struct_BoidRuleGoal(brna);
	register_struct_BoidRuleAvoid(brna);
	register_struct_BoidRuleAvoidCollision(brna);
	register_struct_BoidRuleFollowLeader(brna);
	register_struct_BoidRuleAverageSpeed(brna);
	register_struct_BoidRuleFight(brna);
	register_struct_BoidState(brna);
	register_struct_BoidSettings(brna);
	register_struct_Brush(brna);
	register_struct_BrushCapabilities(brna);
	register_struct_BrushCapabilitiesSculpt(brna);
	register_struct_BrushCapabilitiesImagePaint(brna);
	register_struct_BrushCapabilitiesVertexPaint(brna);
	register_struct_BrushCapabilitiesWeightPaint(brna);
	register_struct_BrushGpencilSettings(brna);
	register_struct_BrushCurvesSculptSettings(brna);
	register_struct_BrushTextureSlot(brna);
	register_struct_OperatorStrokeElement(brna);
	register_struct_CacheFile(brna);
	register_struct_CacheFileLayers(brna);
	register_struct_CacheObjectPaths(brna);
	register_struct_CacheObjectPath(brna);
	register_struct_CacheFileLayer(brna);
	register_struct_Camera(brna);
	register_struct_CameraBackgroundImage(brna);
	register_struct_CameraBackgroundImages(brna);
	register_struct_CameraStereoData(brna);
	register_struct_CameraDOFSettings(brna);
	register_struct_ClothSolverResult(brna);
	register_struct_ClothSettings(brna);
	register_struct_ClothCollisionSettings(brna);
	register_struct_Collection(brna);
	register_struct_CollectionObjects(brna);
	register_struct_CollectionChildren(brna);
	register_struct_CollectionExports(brna);
	register_struct_CollectionLightLinking(brna);
	register_struct_CollectionObject(brna);
	register_struct_CollectionChild(brna);
	register_struct_CollectionImport(brna);
	register_struct_CollectionExport(brna);
	register_struct_CurveMapPoint(brna);
	register_struct_CurveMap(brna);
	register_struct_CurveMapPoints(brna);
	register_struct_CurveMapping(brna);
	register_struct_ColorRampElement(brna);
	register_struct_ColorRamp(brna);
	register_struct_ColorRampElements(brna);
	register_struct_Histogram(brna);
	register_struct_Scopes(brna);
	register_struct_ColorManagedDisplaySettings(brna);
	register_struct_ColorManagedViewSettings(brna);
	register_struct_ColorManagedInputColorspaceSettings(brna);
	register_struct_ColorManagedSequencerColorspaceSettings(brna);
	register_struct_Constraint(brna);
	register_struct_ConstraintTarget(brna);
	register_struct_ConstraintTargetBone(brna);
	register_struct_ChildOfConstraint(brna);
	register_struct_ArmatureConstraint(brna);
	register_struct_ArmatureConstraintTargets(brna);
	register_struct_StretchToConstraint(brna);
	register_struct_FollowPathConstraint(brna);
	register_struct_LockedTrackConstraint(brna);
	register_struct_ActionConstraint(brna);
	register_struct_CopyScaleConstraint(brna);
	register_struct_MaintainVolumeConstraint(brna);
	register_struct_CopyLocationConstraint(brna);
	register_struct_CopyRotationConstraint(brna);
	register_struct_CopyTransformsConstraint(brna);
	register_struct_FloorConstraint(brna);
	register_struct_TrackToConstraint(brna);
	register_struct_KinematicConstraint(brna);
	register_struct_ClampToConstraint(brna);
	register_struct_LimitDistanceConstraint(brna);
	register_struct_LimitScaleConstraint(brna);
	register_struct_LimitRotationConstraint(brna);
	register_struct_LimitLocationConstraint(brna);
	register_struct_TransformConstraint(brna);
	register_struct_ShrinkwrapConstraint(brna);
	register_struct_DampedTrackConstraint(brna);
	register_struct_SplineIKConstraint(brna);
	register_struct_PivotConstraint(brna);
	register_struct_FollowTrackConstraint(brna);
	register_struct_CameraSolverConstraint(brna);
	register_struct_ObjectSolverConstraint(brna);
	register_struct_TransformCacheConstraint(brna);
	register_struct_GeometryAttributeConstraint(brna);
	register_struct_Context(brna);
	register_struct_Curve(brna);
	register_struct_CurveSplines(brna);
	register_struct_SurfaceCurve(brna);
	register_struct_TextCurve(brna);
	register_struct_TextBox(brna);
	register_struct_TextCharacterFormat(brna);
	register_struct_SplinePoint(brna);
	register_struct_BezierSplinePoint(brna);
	register_struct_Spline(brna);
	register_struct_SplinePoints(brna);
	register_struct_SplineBezierPoints(brna);
	register_struct_DynamicPaintCanvasSettings(brna);
	register_struct_DynamicPaintSurfaces(brna);
	register_struct_DynamicPaintBrushSettings(brna);
	register_struct_DynamicPaintSurface(brna);
	register_struct_FCurve(brna);
	register_struct_FCurveKeyframePoints(brna);
	register_struct_FCurveModifiers(brna);
	register_struct_Keyframe(brna);
	register_struct_FCurveSample(brna);
	register_struct_DriverTarget(brna);
	register_struct_DriverVariable(brna);
	register_struct_Driver(brna);
	register_struct_ChannelDriverVariables(brna);
	register_struct_FModifier(brna);
	register_struct_FModifierGenerator(brna);
	register_struct_FModifierFunctionGenerator(brna);
	register_struct_FModifierEnvelope(brna);
	register_struct_FModifierEnvelopeControlPoints(brna);
	register_struct_FModifierEnvelopeControlPoint(brna);
	register_struct_FModifierCycles(brna);
	register_struct_FModifierLimits(brna);
	register_struct_FModifierNoise(brna);
	register_struct_FModifierStepped(brna);
	register_struct_FModifierSmooth(brna);
	register_struct_Annotation(brna);
	register_struct_AnnotationLayers(brna);
	register_struct_AnnotationLayer(brna);
	register_struct_AnnotationFrames(brna);
	register_struct_AnnotationFrame(brna);
	register_struct_AnnotationStrokes(brna);
	register_struct_AnnotationStroke(brna);
	register_struct_AnnotationStrokePoints(brna);
	register_struct_AnnotationStrokePoint(brna);
	register_struct_GreasePencil(brna);
	register_struct_GreasePencilv3Layers(brna);
	register_struct_GreasePencilv3LayerGroup(brna);
	register_struct_GreasePencilTreeNode(brna);
	register_struct_GreasePencilLayer(brna);
	register_struct_GreasePencilFrames(brna);
	register_struct_GreasePencilLayerMasks(brna);
	register_struct_GreasePencilLayerMask(brna);
	register_struct_GreasePencilLayerGroup(brna);
	register_struct_GreasePencilFrame(brna);
	register_struct_GreasePencilDrawing(brna);
	register_struct_CurvePoint(brna);
	register_struct_CurveSlice(brna);
	register_struct_Curves(brna);
	register_struct_FloatVectorValueReadOnly(brna);
	register_struct_RenderSlot(brna);
	register_struct_UDIMTile(brna);
	register_struct_Image(brna);
	register_struct_RenderSlots(brna);
	register_struct_UDIMTiles(brna);
	register_struct_ImageUser(brna);
	register_struct_ImagePackedFile(brna);
	register_struct_Key(brna);
	register_struct_ShapeKey(brna);
	register_struct_ShapeKeyPoint(brna);
	register_struct_ShapeKeyCurvePoint(brna);
	register_struct_ShapeKeyBezierPoint(brna);
	register_struct_Light(brna);
	register_struct_PointLight(brna);
	register_struct_AreaLight(brna);
	register_struct_SpotLight(brna);
	register_struct_SunLight(brna);
	register_struct_Lattice(brna);
	register_struct_LatticePoint(brna);
	register_struct_ViewLayer(brna);
	register_struct_AOVs(brna);
	register_struct_Lightgroups(brna);
	register_struct_LayerObjects(brna);
	register_struct_FreestyleLineSet(brna);
	register_struct_FreestyleModuleSettings(brna);
	register_struct_FreestyleSettings(brna);
	register_struct_FreestyleModules(brna);
	register_struct_Linesets(brna);
	register_struct_LayerCollection(brna);
	register_struct_ObjectBase(brna);
	register_struct_LineStyleModifier(brna);
	register_struct_LineStyleColorModifier(brna);
	register_struct_LineStyleColorModifier_AlongStroke(brna);
	register_struct_LineStyleColorModifier_DistanceFromCamera(brna);
	register_struct_LineStyleColorModifier_DistanceFromObject(brna);
	register_struct_LineStyleColorModifier_Material(brna);
	register_struct_LineStyleColorModifier_Tangent(brna);
	register_struct_LineStyleColorModifier_Noise(brna);
	register_struct_LineStyleColorModifier_CreaseAngle(brna);
	register_struct_LineStyleColorModifier_Curvature_3D(brna);
	register_struct_LineStyleAlphaModifier(brna);
	register_struct_LineStyleAlphaModifier_AlongStroke(brna);
	register_struct_LineStyleAlphaModifier_DistanceFromCamera(brna);
	register_struct_LineStyleAlphaModifier_DistanceFromObject(brna);
	register_struct_LineStyleAlphaModifier_Material(brna);
	register_struct_LineStyleAlphaModifier_Tangent(brna);
	register_struct_LineStyleAlphaModifier_Noise(brna);
	register_struct_LineStyleAlphaModifier_CreaseAngle(brna);
	register_struct_LineStyleAlphaModifier_Curvature_3D(brna);
	register_struct_LineStyleThicknessModifier(brna);
	register_struct_LineStyleThicknessModifier_Tangent(brna);
	register_struct_LineStyleThicknessModifier_AlongStroke(brna);
	register_struct_LineStyleThicknessModifier_DistanceFromCamera(brna);
	register_struct_LineStyleThicknessModifier_DistanceFromObject(brna);
	register_struct_LineStyleThicknessModifier_Material(brna);
	register_struct_LineStyleThicknessModifier_Calligraphy(brna);
	register_struct_LineStyleThicknessModifier_Noise(brna);
	register_struct_LineStyleThicknessModifier_Curvature_3D(brna);
	register_struct_LineStyleThicknessModifier_CreaseAngle(brna);
	register_struct_LineStyleGeometryModifier(brna);
	register_struct_LineStyleGeometryModifier_Sampling(brna);
	register_struct_LineStyleGeometryModifier_BezierCurve(brna);
	register_struct_LineStyleGeometryModifier_SinusDisplacement(brna);
	register_struct_LineStyleGeometryModifier_SpatialNoise(brna);
	register_struct_LineStyleGeometryModifier_PerlinNoise1D(brna);
	register_struct_LineStyleGeometryModifier_PerlinNoise2D(brna);
	register_struct_LineStyleGeometryModifier_BackboneStretcher(brna);
	register_struct_LineStyleGeometryModifier_TipRemover(brna);
	register_struct_LineStyleGeometryModifier_Polygonalization(brna);
	register_struct_LineStyleGeometryModifier_GuidingLines(brna);
	register_struct_LineStyleGeometryModifier_Blueprint(brna);
	register_struct_LineStyleGeometryModifier_2DOffset(brna);
	register_struct_LineStyleGeometryModifier_2DTransform(brna);
	register_struct_LineStyleGeometryModifier_Simplification(brna);
	register_struct_FreestyleLineStyle(brna);
	register_struct_LineStyleTextureSlots(brna);
	register_struct_LineStyleColorModifiers(brna);
	register_struct_LineStyleAlphaModifiers(brna);
	register_struct_LineStyleThicknessModifiers(brna);
	register_struct_LineStyleGeometryModifiers(brna);
	register_struct_LineStyleTextureSlot(brna);
	register_struct_BlendImportContextLibrary(brna);
	register_struct_BlendImportContextItem(brna);
	register_struct_BlendImportContextLibraries(brna);
	register_struct_BlendImportContext(brna);
	register_struct_BlendImportContextItems(brna);
	register_struct_BlendData(brna);
	register_struct_BlendDataCameras(brna);
	register_struct_BlendDataScenes(brna);
	register_struct_BlendDataObjects(brna);
	register_struct_BlendDataMaterials(brna);
	register_struct_BlendDataNodeTrees(brna);
	register_struct_BlendDataMeshes(brna);
	register_struct_BlendDataLights(brna);
	register_struct_BlendDataLibraries(brna);
	register_struct_BlendDataScreens(brna);
	register_struct_BlendDataWindowManagers(brna);
	register_struct_BlendDataImages(brna);
	register_struct_BlendDataLattices(brna);
	register_struct_BlendDataCurves(brna);
	register_struct_BlendDataMetaBalls(brna);
	register_struct_BlendDataFonts(brna);
	register_struct_BlendDataTextures(brna);
	register_struct_BlendDataBrushes(brna);
	register_struct_BlendDataWorlds(brna);
	register_struct_BlendDataCollections(brna);
	register_struct_BlendDataTexts(brna);
	register_struct_BlendDataSpeakers(brna);
	register_struct_BlendDataSounds(brna);
	register_struct_BlendDataArmatures(brna);
	register_struct_BlendDataActions(brna);
	register_struct_BlendDataParticles(brna);
	register_struct_BlendDataPalettes(brna);
	register_struct_BlendDataAnnotations(brna);
	register_struct_BlendDataGreasePencilsV3(brna);
	register_struct_BlendDataMovieClips(brna);
	register_struct_BlendDataMasks(brna);
	register_struct_BlendDataLineStyles(brna);
	register_struct_BlendDataCacheFiles(brna);
	register_struct_BlendDataPaintCurves(brna);
	register_struct_BlendDataWorkSpaces(brna);
	register_struct_BlendDataProbes(brna);
	register_struct_BlendDataHairCurves(brna);
	register_struct_BlendDataPointClouds(brna);
	register_struct_BlendDataVolumes(brna);
	register_struct_BlendFileColorspace(brna);
	register_struct_FluidDomainSettings(brna);
	register_struct_FluidFlowSettings(brna);
	register_struct_FluidEffectorSettings(brna);
	register_struct_Material(brna);
	register_struct_TexPaintSlot(brna);
	register_struct_MaterialGPencilStyle(brna);
	register_struct_MaterialLineArt(brna);
	register_struct_Mesh(brna);
	register_struct_MeshVertices(brna);
	register_struct_MeshEdges(brna);
	register_struct_MeshLoops(brna);
	register_struct_MeshPolygons(brna);
	register_struct_MeshNormalValue(brna);
	register_struct_MeshLoopTriangles(brna);
	register_struct_ReadOnlyInteger(brna);
	register_struct_UVLoopLayers(brna);
	register_struct_LoopColors(brna);
	register_struct_MeshSkinVertexLayer(brna);
	register_struct_MeshSkinVertex(brna);
	register_struct_MeshVertex(brna);
	register_struct_VertexGroupElement(brna);
	register_struct_MeshEdge(brna);
	register_struct_MeshLoopTriangle(brna);
	register_struct_MeshLoop(brna);
	register_struct_MeshPolygon(brna);
	register_struct_MeshUVLoopLayer(brna);
	register_struct_MeshUVLoop(brna);
	register_struct_MeshLoopColorLayer(brna);
	register_struct_MeshLoopColor(brna);
	register_struct_MetaElement(brna);
	register_struct_MetaBall(brna);
	register_struct_MetaBallElements(brna);
	register_struct_Modifier(brna);
	register_struct_SubsurfModifier(brna);
	register_struct_LatticeModifier(brna);
	register_struct_CurveModifier(brna);
	register_struct_BuildModifier(brna);
	register_struct_MirrorModifier(brna);
	register_struct_DecimateModifier(brna);
	register_struct_WaveModifier(brna);
	register_struct_ArmatureModifier(brna);
	register_struct_HookModifier(brna);
	register_struct_SoftBodyModifier(brna);
	register_struct_BooleanModifier(brna);
	register_struct_ArrayModifier(brna);
	register_struct_EdgeSplitModifier(brna);
	register_struct_DisplaceModifier(brna);
	register_struct_UVProjectModifier(brna);
	register_struct_UVProjector(brna);
	register_struct_SmoothModifier(brna);
	register_struct_CorrectiveSmoothModifier(brna);
	register_struct_CastModifier(brna);
	register_struct_MeshDeformModifier(brna);
	register_struct_ParticleSystemModifier(brna);
	register_struct_ParticleInstanceModifier(brna);
	register_struct_ExplodeModifier(brna);
	register_struct_ClothModifier(brna);
	register_struct_CollisionModifier(brna);
	register_struct_BevelModifier(brna);
	register_struct_ShrinkwrapModifier(brna);
	register_struct_MaskModifier(brna);
	register_struct_SimpleDeformModifier(brna);
	register_struct_WarpModifier(brna);
	register_struct_MultiresModifier(brna);
	register_struct_SurfaceModifier(brna);
	register_struct_FluidModifier(brna);
	register_struct_SolidifyModifier(brna);
	register_struct_ScrewModifier(brna);
	register_struct_UVWarpModifier(brna);
	register_struct_VertexWeightEditModifier(brna);
	register_struct_VertexWeightMixModifier(brna);
	register_struct_VertexWeightProximityModifier(brna);
	register_struct_DynamicPaintModifier(brna);
	register_struct_OceanModifier(brna);
	register_struct_RemeshModifier(brna);
	register_struct_SkinModifier(brna);
	register_struct_LaplacianSmoothModifier(brna);
	register_struct_TriangulateModifier(brna);
	register_struct_MeshCacheModifier(brna);
	register_struct_LaplacianDeformModifier(brna);
	register_struct_WeldModifier(brna);
	register_struct_WireframeModifier(brna);
	register_struct_DataTransferModifier(brna);
	register_struct_NormalEditModifier(brna);
	register_struct_MeshSequenceCacheModifier(brna);
	register_struct_SurfaceDeformModifier(brna);
	register_struct_WeightedNormalModifier(brna);
	register_struct_NodesModifierDataBlock(brna);
	register_struct_NodesModifierBakeDataBlocks(brna);
	register_struct_NodesModifierBake(brna);
	register_struct_NodesModifierBakes(brna);
	register_struct_NodesModifierWarning(brna);
	register_struct_NodesModifierProperties(brna);
	register_struct_NodesModifierPropertiesEmpty(brna);
	register_struct_NodesModifier(brna);
	register_struct_MeshToVolumeModifier(brna);
	register_struct_VolumeDisplaceModifier(brna);
	register_struct_VolumeToMeshModifier(brna);
	register_struct_GreasePencilOpacityModifier(brna);
	register_struct_GreasePencilSubdivModifier(brna);
	register_struct_GreasePencilColorModifier(brna);
	register_struct_GreasePencilTintModifier(brna);
	register_struct_GreasePencilSmoothModifier(brna);
	register_struct_GreasePencilOffsetModifier(brna);
	register_struct_GreasePencilNoiseModifier(brna);
	register_struct_GreasePencilMirrorModifier(brna);
	register_struct_GreasePencilThickModifierData(brna);
	register_struct_GreasePencilLatticeModifier(brna);
	register_struct_GreasePencilDashModifierSegment(brna);
	register_struct_GreasePencilDashModifierData(brna);
	register_struct_GreasePencilMultiplyModifier(brna);
	register_struct_GreasePencilLengthModifier(brna);
	register_struct_GreasePencilWeightAngleModifier(brna);
	register_struct_GreasePencilArrayModifier(brna);
	register_struct_GreasePencilWeightProximityModifier(brna);
	register_struct_GreasePencilHookModifier(brna);
	register_struct_GreasePencilLineartModifier(brna);
	register_struct_GreasePencilArmatureModifier(brna);
	register_struct_GreasePencilTimeModifierSegment(brna);
	register_struct_GreasePencilTimeModifier(brna);
	register_struct_GreasePencilSimplifyModifier(brna);
	register_struct_GreasePencilEnvelopeModifier(brna);
	register_struct_GreasePencilOutlineModifier(brna);
	register_struct_GreasePencilShrinkwrapModifier(brna);
	register_struct_GreasePencilBuildModifier(brna);
	register_struct_GreasePencilTextureModifier(brna);
	register_struct_ShaderFx(brna);
	register_struct_ShaderFxBlur(brna);
	register_struct_ShaderFxColorize(brna);
	register_struct_ShaderFxWave(brna);
	register_struct_ShaderFxPixel(brna);
	register_struct_ShaderFxRim(brna);
	register_struct_ShaderFxShadow(brna);
	register_struct_ShaderFxGlow(brna);
	register_struct_ShaderFxSwirl(brna);
	register_struct_ShaderFxFlip(brna);
	register_struct_NlaTrack(brna);
	register_struct_NlaStrips(brna);
	register_struct_NlaStrip(brna);
	register_struct_NlaStripFCurves(brna);
	register_struct_NodePanelState(brna);
	register_struct_Node(brna);
	register_struct_NodeInputs(brna);
	register_struct_NodeOutputs(brna);
	register_struct_NodeLink(brna);
	register_struct_NodeInternalSocketTemplate(brna);
	register_struct_NodeInternal(brna);
	register_struct_ShaderNode(brna);
	register_struct_CompositorNode(brna);
	register_struct_CryptomatteEntry(brna);
	register_struct_TextureNode(brna);
	register_struct_GeometryNode(brna);
	register_struct_FunctionNode(brna);
	register_struct_NodeTree(brna);
	register_struct_Nodes(brna);
	register_struct_NodeLinks(brna);
	register_struct_CompositorNodeTree(brna);
	register_struct_ShaderNodeTree(brna);
	register_struct_TextureNodeTree(brna);
	register_struct_GeometryNodeTree(brna);
	register_struct_NodeFrame(brna);
	register_struct_NodeGroup(brna);
	register_struct_NodeGroupInput(brna);
	register_struct_NodeGroupOutput(brna);
	register_struct_NodeReroute(brna);
	register_struct_NodeImplicitConversion(brna);
	register_struct_NodeClosureInput(brna);
	register_struct_NodeClosureOutput(brna);
	register_struct_NodeClosureInputItem(brna);
	register_struct_NodeClosureInputItems(brna);
	register_struct_NodeClosureOutputItem(brna);
	register_struct_NodeClosureOutputItems(brna);
	register_struct_NodeCombineBundle(brna);
	register_struct_NodeCombineBundleItem(brna);
	register_struct_NodeCombineBundleItems(brna);
	register_struct_NodeEnableOutput(brna);
	register_struct_NodeEvaluateClosure(brna);
	register_struct_NodeEvaluateClosureInputItem(brna);
	register_struct_NodeEvaluateClosureInputItems(brna);
	register_struct_NodeEvaluateClosureOutputItem(brna);
	register_struct_NodeEvaluateClosureOutputItems(brna);
	register_struct_NodeGetBundleItem(brna);
	register_struct_NodeGetNestedBundlePaths(brna);
	register_struct_NodeJoinBundle(brna);
	register_struct_NodeSeparateBundle(brna);
	register_struct_NodeSeparateBundleItem(brna);
	register_struct_NodeSeparateBundleItems(brna);
	register_struct_NodeStoreBundleItem(brna);
	register_struct_ShaderNodeAddShader(brna);
	register_struct_ShaderNodeAmbientOcclusion(brna);
	register_struct_ShaderNodeAttribute(brna);
	register_struct_ShaderNodeBackground(brna);
	register_struct_ShaderNodeBevel(brna);
	register_struct_ShaderNodeBlackbody(brna);
	register_struct_ShaderNodeBrightContrast(brna);
	register_struct_ShaderNodeBsdfAnisotropic(brna);
	register_struct_ShaderNodeBsdfDiffuse(brna);
	register_struct_ShaderNodeBsdfGlass(brna);
	register_struct_ShaderNodeBsdfHair(brna);
	register_struct_ShaderNodeBsdfHairPrincipled(brna);
	register_struct_ShaderNodeBsdfMetallic(brna);
	register_struct_ShaderNodeBsdfPrincipled(brna);
	register_struct_ShaderNodeBsdfRayPortal(brna);
	register_struct_ShaderNodeBsdfRefraction(brna);
	register_struct_ShaderNodeBsdfSheen(brna);
	register_struct_ShaderNodeBsdfToon(brna);
	register_struct_ShaderNodeBsdfTranslucent(brna);
	register_struct_ShaderNodeBsdfTransparent(brna);
	register_struct_ShaderNodeBump(brna);
	register_struct_ShaderNodeCameraData(brna);
	register_struct_ShaderNodeClamp(brna);
	register_struct_ShaderNodeCombineColor(brna);
	register_struct_ShaderNodeCombineXYZ(brna);
	register_struct_ShaderNodeDisplacement(brna);
	register_struct_ShaderNodeEeveeSpecular(brna);
	register_struct_ShaderNodeEmission(brna);
	register_struct_ShaderNodeFloatCurve(brna);
	register_struct_ShaderNodeFresnel(brna);
	register_struct_ShaderNodeGamma(brna);
	register_struct_ShaderNodeHairInfo(brna);
	register_struct_ShaderNodeHoldout(brna);
	register_struct_ShaderNodeHueSaturation(brna);
	register_struct_ShaderNodeInvert(brna);
	register_struct_ShaderNodeLayerWeight(brna);
	register_struct_ShaderNodeLightFalloff(brna);
	register_struct_ShaderNodeLightPath(brna);
	register_struct_ShaderNodeMapping(brna);
	register_struct_ShaderNodeMapRange(brna);
	register_struct_ShaderNodeMath(brna);
	register_struct_ShaderNodeMix(brna);
	register_struct_ShaderNodeMixRGB(brna);
	register_struct_ShaderNodeMixShader(brna);
	register_struct_ShaderNodeNewGeometry(brna);
	register_struct_ShaderNodeNormal(brna);
	register_struct_ShaderNodeNormalMap(brna);
	register_struct_ShaderNodeObjectInfo(brna);
	register_struct_ShaderNodeOutputAOV(brna);
	register_struct_ShaderNodeOutputLight(brna);
	register_struct_ShaderNodeOutputLineStyle(brna);
	register_struct_ShaderNodeOutputMaterial(brna);
	register_struct_ShaderNodeOutputWorld(brna);
	register_struct_ShaderNodeParticleInfo(brna);
	register_struct_ShaderNodePointInfo(brna);
	register_struct_ShaderNodeRadialTiling(brna);
	register_struct_ShaderNodeRaycast(brna);
	register_struct_NodeRaycastSampleAttributeItem(brna);
	register_struct_NodeRaycastSampleAttributeItems(brna);
	register_struct_ShaderNodeRGB(brna);
	register_struct_ShaderNodeRGBCurve(brna);
	register_struct_ShaderNodeRGBToBW(brna);
	register_struct_ShaderNodeScript(brna);
	register_struct_ShaderNodeSeparateColor(brna);
	register_struct_ShaderNodeSeparateXYZ(brna);
	register_struct_ShaderNodeShaderToRGB(brna);
	register_struct_ShaderNodeSqueeze(brna);
	register_struct_ShaderNodeSubsurfaceScattering(brna);
	register_struct_ShaderNodeTangent(brna);
	register_struct_ShaderNodeTexBrick(brna);
	register_struct_ShaderNodeTexChecker(brna);
	register_struct_ShaderNodeTexCoord(brna);
	register_struct_ShaderNodeTexEnvironment(brna);
	register_struct_ShaderNodeTexGabor(brna);
	register_struct_ShaderNodeTexGradient(brna);
	register_struct_ShaderNodeTexIES(brna);
	register_struct_ShaderNodeTexImage(brna);
	register_struct_ShaderNodeTexMagic(brna);
	register_struct_ShaderNodeTexNoise(brna);
	register_struct_ShaderNodeTexSky(brna);
	register_struct_ShaderNodeTexVoronoi(brna);
	register_struct_ShaderNodeTexWave(brna);
	register_struct_ShaderNodeTexWhiteNoise(brna);
	register_struct_ShaderNodeUVAlongStroke(brna);
	register_struct_ShaderNodeUVMap(brna);
	register_struct_ShaderNodeValToRGB(brna);
	register_struct_ShaderNodeValue(brna);
	register_struct_ShaderNodeVectorCurve(brna);
	register_struct_ShaderNodeVectorDisplacement(brna);
	register_struct_ShaderNodeVectorMath(brna);
	register_struct_ShaderNodeVectorRotate(brna);
	register_struct_ShaderNodeVectorTransform(brna);
	register_struct_ShaderNodeVertexColor(brna);
	register_struct_ShaderNodeVolumeAbsorption(brna);
	register_struct_ShaderNodeVolumeInfo(brna);
	register_struct_ShaderNodeVolumePrincipled(brna);
	register_struct_ShaderNodeVolumeScatter(brna);
	register_struct_ShaderNodeVolumeCoefficients(brna);
	register_struct_ShaderNodeWavelength(brna);
	register_struct_ShaderNodeWireframe(brna);
	register_struct_CompositorNodeAlphaOver(brna);
	register_struct_CompositorNodeAntiAliasing(brna);
	register_struct_CompositorNodeBilateralblur(brna);
	register_struct_CompositorNodeBlankImage(brna);
	register_struct_CompositorNodeBlur(brna);
	register_struct_CompositorNodeBokehBlur(brna);
	register_struct_CompositorNodeBokehImage(brna);
	register_struct_CompositorNodeBoxMask(brna);
	register_struct_CompositorNodeBrightContrast(brna);
	register_struct_CompositorNodeChannelMatte(brna);
	register_struct_CompositorNodeChromaMatte(brna);
	register_struct_CompositorNodeColorBalance(brna);
	register_struct_CompositorNodeColorCorrection(brna);
	register_struct_CompositorNodeColorMatte(brna);
	register_struct_CompositorNodeColorSpill(brna);
	register_struct_CompositorNodeConvolve(brna);
	register_struct_CompositorNodeCombineColor(brna);
	register_struct_CompositorNodeConvertColorSpace(brna);
	register_struct_CompositorNodeConvertToDisplay(brna);
	register_struct_CompositorNodeCornerPin(brna);
	register_struct_CompositorNodeCrop(brna);
	register_struct_CompositorNodeCryptomatte(brna);
	register_struct_CompositorNodeCryptomatteV2(brna);
	register_struct_CompositorNodeCurveRGB(brna);
	register_struct_CompositorNodeDBlur(brna);
	register_struct_CompositorNodeDefocus(brna);
	register_struct_CompositorNodeDenoise(brna);
	register_struct_CompositorNodeDespeckle(brna);
	register_struct_CompositorNodeDiffMatte(brna);
	register_struct_CompositorNodeDilateErode(brna);
	register_struct_CompositorNodeDisplace(brna);
	register_struct_CompositorNodeDistanceMatte(brna);
	register_struct_CompositorNodeDoubleEdgeMask(brna);
	register_struct_CompositorNodeEllipseMask(brna);
	register_struct_CompositorNodeExposure(brna);
	register_struct_CompositorNodeFilter(brna);
	register_struct_CompositorNodeFlip(brna);
	register_struct_CompositorNodeGamma(brna);
	register_struct_CompositorNodeGlare(brna);
	register_struct_CompositorNodeHueCorrect(brna);
	register_struct_CompositorNodeHueSat(brna);
	register_struct_CompositorNodeIDMask(brna);
	register_struct_CompositorNodeImage(brna);
	register_struct_CompositorNodeImageCoordinates(brna);
	register_struct_CompositorNodeImageInfo(brna);
	register_struct_CompositorNodeInpaint(brna);
	register_struct_CompositorNodeInvert(brna);
	register_struct_CompositorNodeKeying(brna);
	register_struct_CompositorNodeKeyingScreen(brna);
	register_struct_CompositorNodeKuwahara(brna);
	register_struct_CompositorNodeLensdist(brna);
	register_struct_CompositorNodeLevels(brna);
	register_struct_CompositorNodeLumaMatte(brna);
	register_struct_CompositorNodeMapUV(brna);
	register_struct_CompositorNodeMask(brna);
	register_struct_CompositorNodeMovieClip(brna);
	register_struct_CompositorNodeMovieDistortion(brna);
	register_struct_CompositorNodeNormal(brna);
	register_struct_CompositorNodeNormalize(brna);
	register_struct_CompositorNodeOutputFile(brna);
	register_struct_NodeCompositorFileOutputItem(brna);
	register_struct_NodeCompositorFileOutputItems(brna);
	register_struct_CompositorNodePixelate(brna);
	register_struct_CompositorNodePlaneTrackDeform(brna);
	register_struct_CompositorNodePosterize(brna);
	register_struct_CompositorNodePremulKey(brna);
	register_struct_CompositorNodeRelativeToPixel(brna);
	register_struct_CompositorNodeRGB(brna);
	register_struct_CompositorNodeRGBToBW(brna);
	register_struct_CompositorNodeRLayers(brna);
	register_struct_CompositorNodeRotate(brna);
	register_struct_CompositorNodeScale(brna);
	register_struct_CompositorNodeSceneTime(brna);
	register_struct_CompositorNodeSeparateColor(brna);
	register_struct_CompositorNodeSetAlpha(brna);
	register_struct_CompositorNodeMaskToSDF(brna);
	register_struct_CompositorNodeSplit(brna);
	register_struct_CompositorNodeStabilize(brna);
	register_struct_CompositorNodeSequencerStripInfo(brna);
	register_struct_CompositorNodeStringToImage(brna);
	register_struct_CompositorNodeSwitch(brna);
	register_struct_CompositorNodeSwitchView(brna);
	register_struct_CompositorNodeTime(brna);
	register_struct_CompositorNodeTonemap(brna);
	register_struct_CompositorNodeTrackPos(brna);
	register_struct_CompositorNodeTransform(brna);
	register_struct_CompositorNodeTranslate(brna);
	register_struct_CompositorNodeVecBlur(brna);
	register_struct_CompositorNodeViewer(brna);
	register_struct_CompositorNodeZcombine(brna);
	register_struct_TextureNodeAt(brna);
	register_struct_TextureNodeBricks(brna);
	register_struct_TextureNodeChecker(brna);
	register_struct_TextureNodeCombineColor(brna);
	register_struct_TextureNodeCompose(brna);
	register_struct_TextureNodeCoordinates(brna);
	register_struct_TextureNodeCurveRGB(brna);
	register_struct_TextureNodeCurveTime(brna);
	register_struct_TextureNodeDecompose(brna);
	register_struct_TextureNodeDistance(brna);
	register_struct_TextureNodeHueSaturation(brna);
	register_struct_TextureNodeImage(brna);
	register_struct_TextureNodeInvert(brna);
	register_struct_TextureNodeMath(brna);
	register_struct_TextureNodeMixRGB(brna);
	register_struct_TextureNodeOutput(brna);
	register_struct_TextureNodeRGBToBW(brna);
	register_struct_TextureNodeRotate(brna);
	register_struct_TextureNodeScale(brna);
	register_struct_TextureNodeSeparateColor(brna);
	register_struct_TextureNodeTexBlend(brna);
	register_struct_TextureNodeTexClouds(brna);
	register_struct_TextureNodeTexDistNoise(brna);
	register_struct_TextureNodeTexMagic(brna);
	register_struct_TextureNodeTexMarble(brna);
	register_struct_TextureNodeTexMusgrave(brna);
	register_struct_TextureNodeTexNoise(brna);
	register_struct_TextureNodeTexStucci(brna);
	register_struct_TextureNodeTexture(brna);
	register_struct_TextureNodeTexVoronoi(brna);
	register_struct_TextureNodeTexWood(brna);
	register_struct_TextureNodeTranslate(brna);
	register_struct_TextureNodeValToNor(brna);
	register_struct_TextureNodeValToRGB(brna);
	register_struct_TextureNodeViewer(brna);
	register_struct_FunctionNodeAlignEulerToVector(brna);
	register_struct_FunctionNodeAlignRotationToVector(brna);
	register_struct_FunctionNodeAxesToRotation(brna);
	register_struct_FunctionNodeAxisAngleToRotation(brna);
	register_struct_FunctionNodeBitMath(brna);
	register_struct_FunctionNodeBooleanMath(brna);
	register_struct_FunctionNodeCombineColor(brna);
	register_struct_FunctionNodeCombineMatrix(brna);
	register_struct_FunctionNodeCombineTransform(brna);
	register_struct_FunctionNodeCompare(brna);
	register_struct_FunctionNodeEulerToRotation(brna);
	register_struct_FunctionNodeFindInString(brna);
	register_struct_FunctionNodeFloatToInt(brna);
	register_struct_FunctionNodeFormatString(brna);
	register_struct_NodeFunctionFormatStringItem(brna);
	register_struct_NodeFunctionFormatStringItems(brna);
	register_struct_FunctionNodeHashValue(brna);
	register_struct_FunctionNodeInputBool(brna);
	register_struct_FunctionNodeInputColor(brna);
	register_struct_FunctionNodeInputInt(brna);
	register_struct_FunctionNodeInputIntVector(brna);
	register_struct_FunctionNodeInputMenu(brna);
	register_struct_FunctionNodeInputRotation(brna);
	register_struct_FunctionNodeInputSpecialCharacters(brna);
	register_struct_FunctionNodeInputString(brna);
	register_struct_FunctionNodeInputVector(brna);
	register_struct_FunctionNodeIntegerMath(brna);
	register_struct_FunctionNodeInvertMatrix(brna);
	register_struct_FunctionNodeInvertRotation(brna);
	register_struct_FunctionNodeMatchString(brna);
	register_struct_FunctionNodeMatrixDeterminant(brna);
	register_struct_FunctionNodeMatrixMultiply(brna);
	register_struct_FunctionNodeMatrixSVD(brna);
	register_struct_FunctionNodeProjectPoint(brna);
	register_struct_FunctionNodeQuaternionToRotation(brna);
	register_struct_FunctionNodeRandomValue(brna);
	register_struct_FunctionNodeReplaceString(brna);
	register_struct_FunctionNodeReverseString(brna);
	register_struct_FunctionNodeRotateEuler(brna);
	register_struct_FunctionNodeRotateRotation(brna);
	register_struct_FunctionNodeRotateVector(brna);
	register_struct_FunctionNodeRotationToAxisAngle(brna);
	register_struct_FunctionNodeRotationToEuler(brna);
	register_struct_FunctionNodeRotationToQuaternion(brna);
	register_struct_FunctionNodeSeparateColor(brna);
	register_struct_FunctionNodeSeparateMatrix(brna);
	register_struct_FunctionNodeSeparateTransform(brna);
	register_struct_FunctionNodeSetStringCase(brna);
	register_struct_FunctionNodeSliceString(brna);
	register_struct_FunctionNodeSplitString(brna);
	register_struct_FunctionNodeStringLength(brna);
	register_struct_FunctionNodeStringToValue(brna);
	register_struct_FunctionNodeTransformDirection(brna);
	register_struct_FunctionNodeTransformPoint(brna);
	register_struct_FunctionNodeTransposeMatrix(brna);
	register_struct_FunctionNodeTrimString(brna);
	register_struct_FunctionNodeValueToString(brna);
	register_struct_GeometryNodeAccumulateField(brna);
	register_struct_GeometryNodeApplySimulatedData(brna);
	register_struct_GeometryNodeAttributeDomainSize(brna);
	register_struct_GeometryNodeAttributeStatistic(brna);
	register_struct_GeometryNodeBake(brna);
	register_struct_NodeGeometryBakeItem(brna);
	register_struct_NodeGeometryBakeItems(brna);
	register_struct_GeometryNodeBlurAttribute(brna);
	register_struct_GeometryNodeBoneInfo(brna);
	register_struct_GeometryNodeBoundBox(brna);
	register_struct_GeometryNodeCameraInfo(brna);
	register_struct_GeometryNodeCaptureAttribute(brna);
	register_struct_NodeGeometryCaptureAttributeItem(brna);
	register_struct_NodeGeometryCaptureAttributeItems(brna);
	register_struct_GeometryNodeClosureToList(brna);
	register_struct_GeometryNodeClosureToListItem(brna);
	register_struct_GeometryNodeClosureToListItems(brna);
	register_struct_GeometryNodeClusterByConnected(brna);
	register_struct_GeometryNodeClusterByDistance(brna);
	register_struct_GeometryNodeCollectionChildren(brna);
	register_struct_GeometryNodeCollectionInfo(brna);
	register_struct_GeometryNodeConvexHull(brna);
	register_struct_GeometryNodeCornersOfEdge(brna);
	register_struct_GeometryNodeCornersOfFace(brna);
	register_struct_GeometryNodeCornersOfVertex(brna);
	register_struct_GeometryNodeCubeGridTopology(brna);
	register_struct_GeometryNodeCurveArc(brna);
	register_struct_GeometryNodeCurveEndpointSelection(brna);
	register_struct_GeometryNodeCurveHandleTypeSelection(brna);
	register_struct_GeometryNodeCurveLength(brna);
	register_struct_GeometryNodeCurveOfPoint(brna);
	register_struct_GeometryNodeCurvePrimitiveBezierSegment(brna);
	register_struct_GeometryNodeCurvePrimitiveCircle(brna);
	register_struct_GeometryNodeCurvePrimitiveLine(brna);
	register_struct_GeometryNodeCurvePrimitiveQuadrilateral(brna);
	register_struct_GeometryNodeCurveQuadraticBezier(brna);
	register_struct_GeometryNodeCurveSetHandles(brna);
	register_struct_GeometryNodeCurveSpiral(brna);
	register_struct_GeometryNodeCurveSplineType(brna);
	register_struct_GeometryNodeCurveStar(brna);
	register_struct_GeometryNodeCurvesToGreasePencil(brna);
	register_struct_GeometryNodeCurveToMesh(brna);
	register_struct_GeometryNodeCurveToPoints(brna);
	register_struct_GeometryNodeDeformCurvesOnSurface(brna);
	register_struct_GeometryNodeDeleteGeometry(brna);
	register_struct_GeometryNodeDistributePointsInGrid(brna);
	register_struct_GeometryNodeDistributePointsInVolume(brna);
	register_struct_GeometryNodeDistributePointsOnFaces(brna);
	register_struct_GeometryNodeDualMesh(brna);
	register_struct_GeometryNodeDuplicateElements(brna);
	register_struct_GeometryNodeEdgePathsToCurves(brna);
	register_struct_GeometryNodeEdgePathsToSelection(brna);
	register_struct_GeometryNodeEdgesOfCorner(brna);
	register_struct_GeometryNodeEdgesOfVertex(brna);
	register_struct_GeometryNodeEdgesToFaceGroups(brna);
	register_struct_GeometryNodeExtrudeMesh(brna);
	register_struct_GeometryNodeFaceOfCorner(brna);
	register_struct_GeometryNodeFieldAtIndex(brna);
	register_struct_GeometryNodeFieldAverage(brna);
	register_struct_GeometryNodeFieldMinAndMax(brna);
	register_struct_GeometryNodeFieldOnDomain(brna);
	register_struct_GeometryNodeFieldToGrid(brna);
	register_struct_GeometryNodeFieldToGridItem(brna);
	register_struct_GeometryNodeFieldToGridItems(brna);
	register_struct_GeometryNodeFieldToList(brna);
	register_struct_GeometryNodeFieldToListItem(brna);
	register_struct_GeometryNodeFieldToListItems(brna);
	register_struct_GeometryNodeFieldVariance(brna);
	register_struct_GeometryNodeFillCurve(brna);
	register_struct_GeometryNodeFilletCurve(brna);
	register_struct_GeometryNodeFilterList(brna);
	register_struct_GeometryNodeFlipFaces(brna);
	register_struct_GeometryNodeForeachGeometryElementInput(brna);
	register_struct_GeometryNodeForeachGeometryElementOutput(brna);
	register_struct_ForeachGeometryElementInputItem(brna);
	register_struct_NodeGeometryForeachGeometryElementInputItems(brna);
	register_struct_ForeachGeometryElementMainItem(brna);
	register_struct_NodeGeometryForeachGeometryElementMainItems(brna);
	register_struct_NodeGeometryForeachGeometryElementGenerationItems(brna);
	register_struct_ForeachGeometryElementGenerationItem(brna);
	register_struct_GeometryNodeGeometryToInstance(brna);
	register_struct_GeometryNodeGetAttributeNames(brna);
	register_struct_GeometryNodeGetGeometryBundle(brna);
	register_struct_GeometryNodeGetGeometryComponent(brna);
	register_struct_GeometryNodeGetNamedGrid(brna);
	register_struct_GeometryNodeGizmoDial(brna);
	register_struct_GeometryNodeGizmoLinear(brna);
	register_struct_GeometryNodeGizmoTransform(brna);
	register_struct_GeometryNodeGreasePencilColor(brna);
	register_struct_GeometryNodeGreasePencilDrawTime(brna);
	register_struct_GeometryNodeGreasePencilFillID(brna);
	register_struct_GeometryNodeGreasePencilOpacity(brna);
	register_struct_GeometryNodeGreasePencilStrokeSoftness(brna);
	register_struct_GeometryNodeGreasePencilStrokeVisibility(brna);
	register_struct_GeometryNodeGreasePencilToCurves(brna);
	register_struct_GeometryNodeGridAdvect(brna);
	register_struct_GeometryNodeGridCurl(brna);
	register_struct_GeometryNodeGridDeactivateVoxels(brna);
	register_struct_GeometryNodeGridDilateAndErode(brna);
	register_struct_GeometryNodeGridDivergence(brna);
	register_struct_GeometryNodeGridGradient(brna);
	register_struct_GeometryNodeGridInfo(brna);
	register_struct_GeometryNodeGridLaplacian(brna);
	register_struct_GeometryNodeGridMean(brna);
	register_struct_GeometryNodeGridMedian(brna);
	register_struct_GeometryNodeGridPrune(brna);
	register_struct_GeometryNodeGridClip(brna);
	register_struct_GeometryNodeGridToMesh(brna);
	register_struct_GeometryNodeGridToPoints(brna);
	register_struct_GeometryNodeGridTopologyBoolean(brna);
	register_struct_GeometryNodeGridVoxelize(brna);
	register_struct_GeometryNodeImageInfo(brna);
	register_struct_GeometryNodeImageTexture(brna);
	register_struct_GeometryNodeImportCSV(brna);
	register_struct_GeometryNodeImportOBJ(brna);
	register_struct_GeometryNodeImportPLY(brna);
	register_struct_GeometryNodeImportSTL(brna);
	register_struct_GeometryNodeImportText(brna);
	register_struct_GeometryNodeImportVDB(brna);
	register_struct_GeometryNodeIndexOfNearest(brna);
	register_struct_GeometryNodeIndexSwitch(brna);
	register_struct_IndexSwitchItem(brna);
	register_struct_NodeIndexSwitchItems(brna);
	register_struct_GeometryNodeInputActiveCamera(brna);
	register_struct_GeometryNodeInputCollection(brna);
	register_struct_GeometryNodeInputCurveHandlePositions(brna);
	register_struct_GeometryNodeInputCurveTilt(brna);
	register_struct_GeometryNodeInputEdgeSmooth(brna);
	register_struct_GeometryNodeInputFont(brna);
	register_struct_GeometryNodeInputID(brna);
	register_struct_GeometryNodeInputImage(brna);
	register_struct_GeometryNodeInputIndex(brna);
	register_struct_GeometryNodeInputInstanceBounds(brna);
	register_struct_GeometryNodeInputInstanceReference(brna);
	register_struct_GeometryNodeInputInstanceRotation(brna);
	register_struct_GeometryNodeInputInstanceScale(brna);
	register_struct_GeometryNodeInputMaterial(brna);
	register_struct_GeometryNodeInputMaterialIndex(brna);
	register_struct_GeometryNodeInputMeshEdgeAngle(brna);
	register_struct_GeometryNodeInputMeshEdgeNeighbors(brna);
	register_struct_GeometryNodeInputMeshEdgeVertices(brna);
	register_struct_GeometryNodeInputMeshFaceArea(brna);
	register_struct_GeometryNodeInputMeshFaceIsPlanar(brna);
	register_struct_GeometryNodeInputMeshFaceNeighbors(brna);
	register_struct_GeometryNodeInputMeshIsland(brna);
	register_struct_GeometryNodeInputMeshVertexNeighbors(brna);
	register_struct_GeometryNodeInputNamedAttribute(brna);
	register_struct_GeometryNodeInputNamedLayerSelection(brna);
	register_struct_GeometryNodeInputNormal(brna);
	register_struct_GeometryNodeInputObject(brna);
	register_struct_GeometryNodeInputPosition(brna);
	register_struct_GeometryNodeInputRadius(brna);
	register_struct_GeometryNodeInputSceneTime(brna);
	register_struct_GeometryNodeInputShadeSmooth(brna);
	register_struct_GeometryNodeInputShortestEdgePaths(brna);
	register_struct_GeometryNodeInputSplineCyclic(brna);
	register_struct_GeometryNodeInputSplineResolution(brna);
	register_struct_GeometryNodeInputTangent(brna);
	register_struct_GeometryNodeInputVoxelIndex(brna);
	register_struct_GeometryNodeInstanceOnPoints(brna);
	register_struct_GeometryNodeInstancesToPoints(brna);
	register_struct_GeometryNodeInstanceTransform(brna);
	register_struct_GeometryNodeInterpolateCurves(brna);
	register_struct_GeometryNodeIsViewport(brna);
	register_struct_GeometryNodeJoinGeometry(brna);
	register_struct_GeometryNodeListGetItem(brna);
	register_struct_GeometryNodeListLength(brna);
	register_struct_GeometryNodeMaterialSelection(brna);
	register_struct_GeometryNodeMenuSwitch(brna);
	register_struct_NodeEnumItem(brna);
	register_struct_NodeMenuSwitchItems(brna);
	register_struct_GeometryNodeMergeByDistance(brna);
	register_struct_GeometryNodeMergeLayers(brna);
	register_struct_GeometryNodeMergePoints(brna);
	register_struct_GeometryNodeMeshBevel(brna);
	register_struct_GeometryNodeMeshBoolean(brna);
	register_struct_GeometryNodeMeshCircle(brna);
	register_struct_GeometryNodeMeshCone(brna);
	register_struct_GeometryNodeMeshCube(brna);
	register_struct_GeometryNodeMeshCylinder(brna);
	register_struct_GeometryNodeMeshFaceSetBoundaries(brna);
	register_struct_GeometryNodeMeshGrid(brna);
	register_struct_GeometryNodeMeshIcoSphere(brna);
	register_struct_GeometryNodeMeshLine(brna);
	register_struct_GeometryNodeMeshToCurve(brna);
	register_struct_GeometryNodeMeshToDensityGrid(brna);
	register_struct_GeometryNodeMeshToPoints(brna);
	register_struct_GeometryNodeMeshToSDFGrid(brna);
	register_struct_GeometryNodeMeshToVolume(brna);
	register_struct_GeometryNodeMeshUVSphere(brna);
	register_struct_GeometryNodeNURBSOrder(brna);
	register_struct_GeometryNodeNURBSWeight(brna);
	register_struct_GeometryNodeObjectInfo(brna);
	register_struct_GeometryNodeOffsetCornerInFace(brna);
	register_struct_GeometryNodeOffsetPointInCurve(brna);
	register_struct_GeometryNodePoints(brna);
	register_struct_GeometryNodePointsOfCurve(brna);
	register_struct_GeometryNodePointsToCurves(brna);
	register_struct_GeometryNodePointsToSDFGrid(brna);
	register_struct_GeometryNodePointsToVertices(brna);
	register_struct_GeometryNodePointsToVolume(brna);
	register_struct_GeometryNodeProximity(brna);
	register_struct_GeometryNodeRaycast(brna);
	register_struct_GeometryNodeRealizeInstances(brna);
	register_struct_GeometryNodeRemoveAttribute(brna);
	register_struct_GeometryNodeRenameAttribute(brna);
	register_struct_GeometryNodeRepeatInput(brna);
	register_struct_GeometryNodeRepeatOutput(brna);
	register_struct_RepeatItem(brna);
	register_struct_NodeGeometryRepeatOutputItems(brna);
	register_struct_GeometryNodeReplaceMaterial(brna);
	register_struct_GeometryNodeResampleCurve(brna);
	register_struct_GeometryNodeReverseCurve(brna);
	register_struct_GeometryNodeRotateInstances(brna);
	register_struct_GeometryNodeSampleCurve(brna);
	register_struct_GeometryNodeSampleGrid(brna);
	register_struct_GeometryNodeSampleGridIndex(brna);
	register_struct_GeometryNodeSampleIndex(brna);
	register_struct_GeometryNodeSampleNearest(brna);
	register_struct_GeometryNodeSampleNearestSurface(brna);
	register_struct_GeometryNodeSampleSoundFrequencies(brna);
	register_struct_GeometryNodeSampleUVSurface(brna);
	register_struct_GeometryNodeScaleElements(brna);
	register_struct_GeometryNodeScaleInstances(brna);
	register_struct_GeometryNodeSDFGridBoolean(brna);
	register_struct_GeometryNodeSDFGridFillet(brna);
	register_struct_GeometryNodeSDFGridLaplacian(brna);
	register_struct_GeometryNodeSDFGridMean(brna);
	register_struct_GeometryNodeSDFGridMeanCurvature(brna);
	register_struct_GeometryNodeSDFGridMedian(brna);
	register_struct_GeometryNodeSDFGridOffset(brna);
	register_struct_GeometryNodeSelfObject(brna);
	register_struct_GeometryNodeSeparateComponents(brna);
	register_struct_GeometryNodeSeparateGeometry(brna);
	register_struct_GeometryNodeSetCurveHandlePositions(brna);
	register_struct_GeometryNodeSetCurveNormal(brna);
	register_struct_GeometryNodeSetCurveRadius(brna);
	register_struct_GeometryNodeSetCurveTilt(brna);
	register_struct_GeometryNodeSetGeometryBundle(brna);
	register_struct_GeometryNodeSetGeometryName(brna);
	register_struct_GeometryNodeSetGreasePencilColor(brna);
	register_struct_GeometryNodeSetGreasePencilDepth(brna);
	register_struct_GeometryNodeSetGreasePencilSoftness(brna);
	register_struct_GeometryNodeSetGridBackground(brna);
	register_struct_GeometryNodeSetGridTransform(brna);
	register_struct_GeometryNodeSetID(brna);
	register_struct_GeometryNodeSetInstanceTransform(brna);
	register_struct_GeometryNodeSetMaterial(brna);
	register_struct_GeometryNodeSetMaterialIndex(brna);
	register_struct_GeometryNodeSetMeshNormal(brna);
	register_struct_GeometryNodeSetNURBSOrder(brna);
	register_struct_GeometryNodeSetNURBSWeight(brna);
	register_struct_GeometryNodeSetPointRadius(brna);
	register_struct_GeometryNodeSetPosition(brna);
	register_struct_GeometryNodeSetShadeSmooth(brna);
	register_struct_GeometryNodeSetSplineCyclic(brna);
	register_struct_GeometryNodeSetSplineResolution(brna);
	register_struct_GeometryNodeSimulationInput(brna);
	register_struct_GeometryNodeSimulationOutput(brna);
	register_struct_SimulationStateItem(brna);
	register_struct_NodeGeometrySimulationOutputItems(brna);
	register_struct_GeometryNodeSortElements(brna);
	register_struct_GeometryNodeSortList(brna);
	register_struct_GeometryNodeSplineLength(brna);
	register_struct_GeometryNodeSplineParameter(brna);
	register_struct_GeometryNodeSplitEdges(brna);
	register_struct_GeometryNodeSplitToInstances(brna);
	register_struct_GeometryNodeStoreNamedAttribute(brna);
	register_struct_GeometryNodeStoreNamedGrid(brna);
	register_struct_GeometryNodeStringJoin(brna);
	register_struct_GeometryNodeStringToCurves(brna);
	register_struct_GeometryNodeSubdivideCurve(brna);
	register_struct_GeometryNodeSubdivideMesh(brna);
	register_struct_GeometryNodeSubdivisionSurface(brna);
	register_struct_GeometryNodeSwitch(brna);
	register_struct_GeometryNodeTagFilter(brna);
	register_struct_GeometryNodeTool3DCursor(brna);
	register_struct_GeometryNodeToolActiveElement(brna);
	register_struct_GeometryNodeToolFaceSet(brna);
	register_struct_GeometryNodeToolMousePosition(brna);
	register_struct_GeometryNodeToolSelection(brna);
	register_struct_GeometryNodeToolSetFaceSet(brna);
	register_struct_GeometryNodeToolSetSelection(brna);
	register_struct_GeometryNodeTransform(brna);
	register_struct_GeometryNodeTranslateInstances(brna);
	register_struct_GeometryNodeTransferAttributes(brna);
	register_struct_GeometryNodeTriangulate(brna);
	register_struct_GeometryNodeTrimCurve(brna);
	register_struct_GeometryNodeUVPackIslands(brna);
	register_struct_GeometryNodeUVTangent(brna);
	register_struct_GeometryNodeUVUnwrap(brna);
	register_struct_GeometryNodeVertexOfCorner(brna);
	register_struct_GeometryNodeViewer(brna);
	register_struct_NodeGeometryViewerItem(brna);
	register_struct_NodeGeometryViewerItems(brna);
	register_struct_GeometryNodeViewportTransform(brna);
	register_struct_GeometryNodeVolumeCube(brna);
	register_struct_GeometryNodeVolumeToMesh(brna);
	register_struct_GeometryNodeWarning(brna);
	register_struct_GeometryNodeXPBDSolver(brna);
	register_struct_ShaderNodeGroup(brna);
	register_struct_CompositorNodeGroup(brna);
	register_struct_TextureNodeGroup(brna);
	register_struct_GeometryNodeGroup(brna);
	register_struct_ShaderNodeCustomGroup(brna);
	register_struct_CompositorNodeCustomGroup(brna);
	register_struct_NodeCustomGroup(brna);
	register_struct_GeometryNodeCustomGroup(brna);
	register_struct_NodeSocket(brna);
	register_struct_NodeSocketStandard(brna);
	register_struct_NodeSocketFloat(brna);
	register_struct_NodeSocketFloatUnsigned(brna);
	register_struct_NodeSocketFloatPercentage(brna);
	register_struct_NodeSocketFloatFactor(brna);
	register_struct_NodeSocketFloatMass(brna);
	register_struct_NodeSocketFloatAngle(brna);
	register_struct_NodeSocketFloatTime(brna);
	register_struct_NodeSocketFloatTimeAbsolute(brna);
	register_struct_NodeSocketFloatDistance(brna);
	register_struct_NodeSocketFloatWavelength(brna);
	register_struct_NodeSocketFloatColorTemperature(brna);
	register_struct_NodeSocketFloatFrequency(brna);
	register_struct_NodeSocketFloatPixel(brna);
	register_struct_NodeSocketInt(brna);
	register_struct_NodeSocketIntUnsigned(brna);
	register_struct_NodeSocketIntPercentage(brna);
	register_struct_NodeSocketIntFactor(brna);
	register_struct_NodeSocketIntPixel(brna);
	register_struct_NodeSocketBool(brna);
	register_struct_NodeSocketVector(brna);
	register_struct_NodeSocketVectorFactor(brna);
	register_struct_NodeSocketVectorPercentage(brna);
	register_struct_NodeSocketVectorTranslation(brna);
	register_struct_NodeSocketVectorDirection(brna);
	register_struct_NodeSocketVectorVelocity(brna);
	register_struct_NodeSocketVectorAcceleration(brna);
	register_struct_NodeSocketVectorEuler(brna);
	register_struct_NodeSocketVectorXYZ(brna);
	register_struct_NodeSocketVectorPixel(brna);
	register_struct_NodeSocketVector2D(brna);
	register_struct_NodeSocketVectorFactor2D(brna);
	register_struct_NodeSocketVectorPercentage2D(brna);
	register_struct_NodeSocketVectorTranslation2D(brna);
	register_struct_NodeSocketVectorDirection2D(brna);
	register_struct_NodeSocketVectorVelocity2D(brna);
	register_struct_NodeSocketVectorAcceleration2D(brna);
	register_struct_NodeSocketVectorEuler2D(brna);
	register_struct_NodeSocketVectorXYZ2D(brna);
	register_struct_NodeSocketVectorPixel2D(brna);
	register_struct_NodeSocketVector4D(brna);
	register_struct_NodeSocketVectorFactor4D(brna);
	register_struct_NodeSocketVectorPercentage4D(brna);
	register_struct_NodeSocketVectorTranslation4D(brna);
	register_struct_NodeSocketVectorDirection4D(brna);
	register_struct_NodeSocketVectorVelocity4D(brna);
	register_struct_NodeSocketVectorAcceleration4D(brna);
	register_struct_NodeSocketVectorEuler4D(brna);
	register_struct_NodeSocketVectorXYZ4D(brna);
	register_struct_NodeSocketVectorPixel4D(brna);
	register_struct_NodeSocketIntVector2D(brna);
	register_struct_NodeSocketIntVectorUnsigned2D(brna);
	register_struct_NodeSocketIntVectorPercentage2D(brna);
	register_struct_NodeSocketIntVectorFactor2D(brna);
	register_struct_NodeSocketIntVectorPixel2D(brna);
	register_struct_NodeSocketIntVector3D(brna);
	register_struct_NodeSocketIntVectorUnsigned3D(brna);
	register_struct_NodeSocketIntVectorPercentage3D(brna);
	register_struct_NodeSocketIntVectorFactor3D(brna);
	register_struct_NodeSocketIntVectorPixel3D(brna);
	register_struct_NodeSocketRotation(brna);
	register_struct_NodeSocketMatrix(brna);
	register_struct_NodeSocketColor(brna);
	register_struct_NodeSocketString(brna);
	register_struct_NodeSocketStringFilePath(brna);
	register_struct_NodeSocketShader(brna);
	register_struct_NodeSocketObject(brna);
	register_struct_NodeSocketImage(brna);
	register_struct_NodeSocketGeometry(brna);
	register_struct_NodeSocketCollection(brna);
	register_struct_NodeSocketTexture(brna);
	register_struct_NodeSocketMaterial(brna);
	register_struct_NodeSocketMenu(brna);
	register_struct_NodeSocketBundle(brna);
	register_struct_NodeSocketClosure(brna);
	register_struct_NodeSocketFont(brna);
	register_struct_NodeSocketScene(brna);
	register_struct_NodeSocketText(brna);
	register_struct_NodeSocketMask(brna);
	register_struct_NodeSocketSound(brna);
	register_struct_NodeSocketVirtual(brna);
	register_struct_NodeTreeInterfaceItem(brna);
	register_struct_NodeTreeInterfaceSocket(brna);
	register_struct_NodeTreeInterfacePanel(brna);
	register_struct_NodeTreeInterface(brna);
	register_struct_NodeTreeInterfaceSocketFloat(brna);
	register_struct_NodeTreeInterfaceSocketFloatUnsigned(brna);
	register_struct_NodeTreeInterfaceSocketFloatPercentage(brna);
	register_struct_NodeTreeInterfaceSocketFloatFactor(brna);
	register_struct_NodeTreeInterfaceSocketFloatMass(brna);
	register_struct_NodeTreeInterfaceSocketFloatAngle(brna);
	register_struct_NodeTreeInterfaceSocketFloatTime(brna);
	register_struct_NodeTreeInterfaceSocketFloatTimeAbsolute(brna);
	register_struct_NodeTreeInterfaceSocketFloatDistance(brna);
	register_struct_NodeTreeInterfaceSocketFloatWavelength(brna);
	register_struct_NodeTreeInterfaceSocketFloatColorTemperature(brna);
	register_struct_NodeTreeInterfaceSocketFloatFrequency(brna);
	register_struct_NodeTreeInterfaceSocketFloatPixel(brna);
	register_struct_NodeTreeInterfaceSocketInt(brna);
	register_struct_NodeTreeInterfaceSocketIntUnsigned(brna);
	register_struct_NodeTreeInterfaceSocketIntPercentage(brna);
	register_struct_NodeTreeInterfaceSocketIntFactor(brna);
	register_struct_NodeTreeInterfaceSocketIntPixel(brna);
	register_struct_NodeTreeInterfaceSocketBool(brna);
	register_struct_NodeTreeInterfaceSocketVector(brna);
	register_struct_NodeTreeInterfaceSocketVectorFactor(brna);
	register_struct_NodeTreeInterfaceSocketVectorPercentage(brna);
	register_struct_NodeTreeInterfaceSocketVectorTranslation(brna);
	register_struct_NodeTreeInterfaceSocketVectorDirection(brna);
	register_struct_NodeTreeInterfaceSocketVectorVelocity(brna);
	register_struct_NodeTreeInterfaceSocketVectorAcceleration(brna);
	register_struct_NodeTreeInterfaceSocketVectorEuler(brna);
	register_struct_NodeTreeInterfaceSocketVectorXYZ(brna);
	register_struct_NodeTreeInterfaceSocketVectorPixel(brna);
	register_struct_NodeTreeInterfaceSocketVector2D(brna);
	register_struct_NodeTreeInterfaceSocketVectorFactor2D(brna);
	register_struct_NodeTreeInterfaceSocketVectorPercentage2D(brna);
	register_struct_NodeTreeInterfaceSocketVectorTranslation2D(brna);
	register_struct_NodeTreeInterfaceSocketVectorDirection2D(brna);
	register_struct_NodeTreeInterfaceSocketVectorVelocity2D(brna);
	register_struct_NodeTreeInterfaceSocketVectorAcceleration2D(brna);
	register_struct_NodeTreeInterfaceSocketVectorEuler2D(brna);
	register_struct_NodeTreeInterfaceSocketVectorXYZ2D(brna);
	register_struct_NodeTreeInterfaceSocketVectorPixel2D(brna);
	register_struct_NodeTreeInterfaceSocketVector4D(brna);
	register_struct_NodeTreeInterfaceSocketVectorFactor4D(brna);
	register_struct_NodeTreeInterfaceSocketVectorPercentage4D(brna);
	register_struct_NodeTreeInterfaceSocketVectorTranslation4D(brna);
	register_struct_NodeTreeInterfaceSocketVectorDirection4D(brna);
	register_struct_NodeTreeInterfaceSocketVectorVelocity4D(brna);
	register_struct_NodeTreeInterfaceSocketVectorAcceleration4D(brna);
	register_struct_NodeTreeInterfaceSocketVectorEuler4D(brna);
	register_struct_NodeTreeInterfaceSocketVectorXYZ4D(brna);
	register_struct_NodeTreeInterfaceSocketVectorPixel4D(brna);
	register_struct_NodeTreeInterfaceSocketIntVector2D(brna);
	register_struct_NodeTreeInterfaceSocketIntVectorUnsigned2D(brna);
	register_struct_NodeTreeInterfaceSocketIntVectorPercentage2D(brna);
	register_struct_NodeTreeInterfaceSocketIntVectorFactor2D(brna);
	register_struct_NodeTreeInterfaceSocketIntVectorPixel2D(brna);
	register_struct_NodeTreeInterfaceSocketIntVector3D(brna);
	register_struct_NodeTreeInterfaceSocketIntVectorUnsigned3D(brna);
	register_struct_NodeTreeInterfaceSocketIntVectorPercentage3D(brna);
	register_struct_NodeTreeInterfaceSocketIntVectorFactor3D(brna);
	register_struct_NodeTreeInterfaceSocketIntVectorPixel3D(brna);
	register_struct_NodeTreeInterfaceSocketRotation(brna);
	register_struct_NodeTreeInterfaceSocketMatrix(brna);
	register_struct_NodeTreeInterfaceSocketColor(brna);
	register_struct_NodeTreeInterfaceSocketString(brna);
	register_struct_NodeTreeInterfaceSocketStringFilePath(brna);
	register_struct_NodeTreeInterfaceSocketShader(brna);
	register_struct_NodeTreeInterfaceSocketObject(brna);
	register_struct_NodeTreeInterfaceSocketImage(brna);
	register_struct_NodeTreeInterfaceSocketGeometry(brna);
	register_struct_NodeTreeInterfaceSocketCollection(brna);
	register_struct_NodeTreeInterfaceSocketTexture(brna);
	register_struct_NodeTreeInterfaceSocketMaterial(brna);
	register_struct_NodeTreeInterfaceSocketMenu(brna);
	register_struct_NodeTreeInterfaceSocketBundle(brna);
	register_struct_NodeTreeInterfaceSocketClosure(brna);
	register_struct_NodeTreeInterfaceSocketFont(brna);
	register_struct_NodeTreeInterfaceSocketScene(brna);
	register_struct_NodeTreeInterfaceSocketText(brna);
	register_struct_NodeTreeInterfaceSocketMask(brna);
	register_struct_NodeTreeInterfaceSocketSound(brna);
	register_struct_Object(brna);
	register_struct_ObjectModifiers(brna);
	register_struct_ObjectShaderFx(brna);
	register_struct_ObjectConstraints(brna);
	register_struct_VertexGroups(brna);
	register_struct_ParticleSystems(brna);
	register_struct_VertexGroup(brna);
	register_struct_MaterialSlot(brna);
	register_struct_ObjectDisplay(brna);
	register_struct_ObjectLineArt(brna);
	register_struct_ObjectLightLinking(brna);
	register_struct_PointCache(brna);
	register_struct_PointCaches(brna);
	register_struct_PointCacheItem(brna);
	register_struct_CollisionSettings(brna);
	register_struct_EffectorWeights(brna);
	register_struct_FieldSettings(brna);
	register_struct_SoftBodySettings(brna);
	register_struct_DepsgraphObjectInstance(brna);
	register_struct_DepsgraphUpdate(brna);
	register_struct_Depsgraph(brna);
	register_struct_PackedFile(brna);
	register_struct_PaletteColor(brna);
	register_struct_Palette(brna);
	register_struct_PaletteColors(brna);
	register_struct_ParticleTarget(brna);
	register_struct_SPHFluidSettings(brna);
	register_struct_ParticleHairKey(brna);
	register_struct_ParticleKey(brna);
	register_struct_ChildParticle(brna);
	register_struct_Particle(brna);
	register_struct_ParticleDupliWeight(brna);
	register_struct_ParticleSystem(brna);
	register_struct_ParticleSettingsTextureSlot(brna);
	register_struct_ParticleSettings(brna);
	register_struct_ParticleSettingsTextureSlots(brna);
	register_struct_Point(brna);
	register_struct_PointCloud(brna);
	register_struct_Pose(brna);
	register_struct_PoseBone(brna);
	register_struct_PoseBoneConstraints(brna);
	register_struct_IKParam(brna);
	register_struct_Itasc(brna);
	register_struct_CurveProfilePoint(brna);
	register_struct_CurveProfile(brna);
	register_struct_CurveProfilePoints(brna);
	register_struct_LightProbe(brna);
	register_struct_LightProbePlane(brna);
	register_struct_LightProbeSphere(brna);
	register_struct_LightProbeVolume(brna);
	register_struct_RenderEngine(brna);
	register_struct_HydraRenderEngine(brna);
	register_struct_RenderResult(brna);
	register_struct_RenderView(brna);
	register_struct_RenderLayer(brna);
	register_struct_RenderPasses(brna);
	register_struct_RenderPass(brna);
	register_struct_RigidBodyWorld(brna);
	register_struct_RigidBodyObject(brna);
	register_struct_RigidBodyConstraint(brna);
	register_struct_Scene(brna);
	register_struct_SceneObjects(brna);
	register_struct_KeyingSets(brna);
	register_struct_KeyingSetsAll(brna);
	register_struct_TimelineMarkers(brna);
	register_struct_ViewLayers(brna);
	register_struct_ToolSettings(brna);
	register_struct_GPencilInterpolateSettings(brna);
	register_struct_CurvePaintSettings(brna);
	register_struct_SequencerToolSettings(brna);
	register_struct_MeshStatVis(brna);
	register_struct_UnitSettings(brna);
	register_struct_Stereo3dFormat(brna);
	register_struct_ImageFormatSettings(brna);
	register_struct_TransformOrientation(brna);
	register_struct_TransformOrientationSlot(brna);
	register_struct_View3DCursor(brna);
	register_struct_SelectedUvElement(brna);
	register_struct_DisplaySafeAreas(brna);
	register_struct_SceneDisplay(brna);
	register_struct_RaytraceEEVEE(brna);
	register_struct_SceneEEVEE(brna);
	register_struct_SceneHydra(brna);
	register_struct_AOV(brna);
	register_struct_Lightgroup(brna);
	register_struct_ViewLayerEEVEE(brna);
	register_struct_SceneGpencil(brna);
	register_struct_FFmpegSettings(brna);
	register_struct_RenderSettings(brna);
	register_struct_RenderViews(brna);
	register_struct_BakeSettings(brna);
	register_struct_SceneRenderView(brna);
	register_struct_Screen(brna);
	register_struct_Area(brna);
	register_struct_AreaSpaces(brna);
	register_struct_Region(brna);
	register_struct_View2D(brna);
	register_struct_PaintCurve(brna);
	register_struct_Paint(brna);
	register_struct_UnifiedPaintSettings(brna);
	register_struct_MeshAutomaskingSettings(brna);
	register_struct_Sculpt(brna);
	register_struct_UvSculpt(brna);
	register_struct_GpPaint(brna);
	register_struct_GpVertexPaint(brna);
	register_struct_GpSculptPaint(brna);
	register_struct_GpWeightPaint(brna);
	register_struct_VertexPaint(brna);
	register_struct_PaintModeSettings(brna);
	register_struct_ImagePaint(brna);
	register_struct_ParticleEdit(brna);
	register_struct_ParticleBrush(brna);
	register_struct_GPencilSculptGuide(brna);
	register_struct_GPencilSculptSettings(brna);
	register_struct_CurvesSculpt(brna);
	register_struct_StripColorBalanceData(brna);
	register_struct_StripElement(brna);
	register_struct_RetimingKey(brna);
	register_struct_StripProxy(brna);
	register_struct_StripColorBalance(brna);
	register_struct_StripCrop(brna);
	register_struct_StripTransform(brna);
	register_struct_Strip(brna);
	register_struct_StripModifiers(brna);
	register_struct_SequenceEditor(brna);
	register_struct_StripsTopLevel(brna);
	register_struct_SequenceTimelineChannel(brna);
	register_struct_ImageStrip(brna);
	register_struct_StripElements(brna);
	register_struct_MetaStrip(brna);
	register_struct_StripsMeta(brna);
	register_struct_SceneStrip(brna);
	register_struct_MovieStrip(brna);
	register_struct_MovieClipStrip(brna);
	register_struct_MaskStrip(brna);
	register_struct_SoundStrip(brna);
	register_struct_EffectStrip(brna);
	register_struct_AddStrip(brna);
	register_struct_AdjustmentStrip(brna);
	register_struct_AlphaOverStrip(brna);
	register_struct_AlphaUnderStrip(brna);
	register_struct_ColorStrip(brna);
	register_struct_CrossStrip(brna);
	register_struct_GammaCrossStrip(brna);
	register_struct_CompositorStrip(brna);
	register_struct_GlowStrip(brna);
	register_struct_MulticamStrip(brna);
	register_struct_MultiplyStrip(brna);
	register_struct_SpeedControlStrip(brna);
	register_struct_SubtractStrip(brna);
	register_struct_WipeStrip(brna);
	register_struct_GaussianBlurStrip(brna);
	register_struct_TextStrip(brna);
	register_struct_ColorMixStrip(brna);
	register_struct_StripModifier(brna);
	register_struct_ColorBalanceModifier(brna);
	register_struct_CurvesModifier(brna);
	register_struct_HueCorrectModifier(brna);
	register_struct_MaskStripModifier(brna);
	register_struct_BrightContrastModifier(brna);
	register_struct_WhiteBalanceModifier(brna);
	register_struct_SequencerTonemapModifierData(brna);
	register_struct_SequencerCompositorModifierProperties(brna);
	register_struct_SequencerCompositorModifierPropertiesEmpty(brna);
	register_struct_SequencerCompositorModifierData(brna);
	register_struct_SoundEqualizerModifier(brna);
	register_struct_EQCurveMappingData(brna);
	register_struct_PitchModifier(brna);
	register_struct_EchoModifier(brna);
	register_struct_RetimingKeys(brna);
	register_struct_Space(brna);
	register_struct_ViewerPathElem(brna);
	register_struct_IDViewerPathElem(brna);
	register_struct_ModifierViewerPathElem(brna);
	register_struct_GroupNodeViewerPathElem(brna);
	register_struct_SimulationZoneViewerPathElem(brna);
	register_struct_RepeatZoneViewerPathElem(brna);
	register_struct_ForeachGeometryElementZoneViewerPathElem(brna);
	register_struct_EvaluateClosureNodeViewerPathElem(brna);
	register_struct_ViewerNodeViewerPathElem(brna);
	register_struct_ViewerPath(brna);
	register_struct_SpaceImageEditor(brna);
	register_struct_SpaceUVEditor(brna);
	register_struct_SpaceImageOverlay(brna);
	register_struct_SpaceSequenceEditor(brna);
	register_struct_SequencerPreviewOverlay(brna);
	register_struct_SequencerTimelineOverlay(brna);
	register_struct_SequencerCacheOverlay(brna);
	register_struct_SpaceTextEditor(brna);
	register_struct_FileSelectEntry(brna);
	register_struct_FileSelectParams(brna);
	register_struct_FileAssetSelectParams(brna);
	register_struct_FileSelectIDFilter(brna);
	register_struct_FileAssetSelectIDFilter(brna);
	register_struct_FileBrowserFSMenuEntry(brna);
	register_struct_SpaceFileBrowser(brna);
	register_struct_SpaceOutliner(brna);
	register_struct_SpaceView3D(brna);
	register_struct_View3DShading(brna);
	register_struct_View3DOverlay(brna);
	register_struct_RegionView3D(brna);
	register_struct_SpaceProperties(brna);
	register_struct_SpaceDopeSheetEditor(brna);
	register_struct_SpaceDopeSheetOverlay(brna);
	register_struct_SpaceGraphEditor(brna);
	register_struct_SpaceNLA(brna);
	register_struct_SpaceConsole(brna);
	register_struct_ConsoleLine(brna);
	register_struct_SpaceInfo(brna);
	register_struct_SpacePreferences(brna);
	register_struct_NodeTreePath(brna);
	register_struct_SpaceNodeEditor(brna);
	register_struct_SpaceNodeEditorPath(brna);
	register_struct_SpaceNodeOverlay(brna);
	register_struct_SpaceClipEditor(brna);
	register_struct_SpaceClipOverlay(brna);
	register_struct_SpreadsheetTableID(brna);
	register_struct_SpreadsheetTableIDGeometry(brna);
	register_struct_SpreadsheetColumn(brna);
	register_struct_SpreadsheetColumnID(brna);
	register_struct_SpreadsheetTable(brna);
	register_struct_SpreadsheetTables(brna);
	register_struct_SpaceSpreadsheet(brna);
	register_struct_SpreadsheetRowFilter(brna);
	register_struct_SpaceProject(brna);
	register_struct_Speaker(brna);
	register_struct_TextLine(brna);
	register_struct_Text(brna);
	register_struct_TimelineMarker(brna);
	register_struct_Sound(brna);
	register_struct_UILayout(brna);
	register_struct_Panel(brna);
	register_struct_UIList(brna);
	register_struct_Header(brna);
	register_struct_Menu(brna);
	register_struct_AssetShelf(brna);
	register_struct_FileHandler(brna);
	register_struct_LayoutPanelState(brna);
	register_struct_TextboxState(brna);
	register_struct_ThemeFontStyle(brna);
	register_struct_ThemeStyle(brna);
	register_struct_ThemeWidgetColors(brna);
	register_struct_ThemeWidgetStateColors(brna);
	register_struct_ThemeGradientColors(brna);
	register_struct_ThemeUserInterface(brna);
	register_struct_ThemeRegionsChannels(brna);
	register_struct_ThemeRegionsAssetShelf(brna);
	register_struct_ThemeRegionsScrubbing(brna);
	register_struct_ThemeRegionsSidebars(brna);
	register_struct_ThemeRegions(brna);
	register_struct_ThemeCommonAnim(brna);
	register_struct_ThemeCommonCurves(brna);
	register_struct_ThemeCommon(brna);
	register_struct_ThemeSpaceGeneric(brna);
	register_struct_ThemeSpaceGradient(brna);
	register_struct_ThemeView3D(brna);
	register_struct_ThemeGraphEditor(brna);
	register_struct_ThemeFileBrowser(brna);
	register_struct_ThemeNLAEditor(brna);
	register_struct_ThemeDopeSheet(brna);
	register_struct_ThemeImageEditor(brna);
	register_struct_ThemeSequenceEditor(brna);
	register_struct_ThemeProperties(brna);
	register_struct_ThemeTextEditor(brna);
	register_struct_ThemeNodeEditor(brna);
	register_struct_ThemeOutliner(brna);
	register_struct_ThemeInfo(brna);
	register_struct_ThemePreferences(brna);
	register_struct_ThemeConsole(brna);
	register_struct_ThemeClipEditor(brna);
	register_struct_ThemeTopBar(brna);
	register_struct_ThemeStatusBar(brna);
	register_struct_ThemeSpreadsheet(brna);
	register_struct_ThemeBoneColorSet(brna);
	register_struct_ThemeCollectionColor(brna);
	register_struct_ThemeStripColor(brna);
	register_struct_Theme(brna);
	register_struct_UserSolidLight(brna);
	register_struct_WalkNavigation(brna);
	register_struct_XrNavigation(brna);
	register_struct_Preferences(brna);
	register_struct_Addons(brna);
	register_struct_PathCompareCollection(brna);
	register_struct_PreferencesView(brna);
	register_struct_PreferencesEdit(brna);
	register_struct_PreferencesInput(brna);
	register_struct_PreferencesKeymap(brna);
	register_struct_PreferencesFilePaths(brna);
	register_struct_ScriptDirectory(brna);
	register_struct_ScriptDirectoryCollection(brna);
	register_struct_UserAssetLibrary(brna);
	register_struct_AssetLibraryCollection(brna);
	register_struct_PreferencesAssetLibraries(brna);
	register_struct_PreferencesExtensions(brna);
	register_struct_UserExtensionRepo(brna);
	register_struct_UserExtensionRepoCollection(brna);
	register_struct_PreferencesSystem(brna);
	register_struct_Addon(brna);
	register_struct_AddonPreferences(brna);
	register_struct_StudioLights(brna);
	register_struct_StudioLight(brna);
	register_struct_PathCompare(brna);
	register_struct_PreferencesApps(brna);
	register_struct_PreferencesExperimental(brna);
	register_struct_VectorFont(brna);
	register_struct_VolumeGrid(brna);
	register_struct_VolumeDisplay(brna);
	register_struct_VolumeRender(brna);
	register_struct_Volume(brna);
	register_struct_VolumeGrids(brna);
	register_struct_Operator(brna);
	register_struct_OperatorProperties(brna);
	register_struct_OperatorOptions(brna);
	register_struct_OperatorMousePath(brna);
	register_struct_OperatorFileListElement(brna);
	register_struct_Macro(brna);
	register_struct_OperatorMacro(brna);
	register_struct_NDOFMotionEventData(brna);
	register_struct_Event(brna);
	register_struct_Timer(brna);
	register_struct_UIPopupMenu(brna);
	register_struct_UIPopover(brna);
	register_struct_UIPieMenu(brna);
	register_struct_Window(brna);
	register_struct_Stereo3dDisplay(brna);
	register_struct_Report(brna);
	register_struct_WindowManager(brna);
	register_struct_Windows(brna);
	register_struct_KeyConfigurations(brna);
	register_struct_KeyConfigPreferences(brna);
	register_struct_KeyConfig(brna);
	register_struct_KeyMaps(brna);
	register_struct_KeyMap(brna);
	register_struct_KeyMapItems(brna);
	register_struct_KeyMapItem(brna);
	register_struct_GizmoGroup(brna);
	register_struct_Gizmo(brna);
	register_struct_GizmoProperties(brna);
	register_struct_Gizmos(brna);
	register_struct_GizmoGroupProperties(brna);
	register_struct_UndoStep(brna);
	register_struct_UndoStack(brna);
	register_struct_wmOwnerID(brna);
	register_struct_WorkSpaceTool(brna);
	register_struct_WorkSpace(brna);
	register_struct_wmOwnerIDs(brna);
	register_struct_wmTools(brna);
	register_struct_World(brna);
	register_struct_WorldLighting(brna);
	register_struct_WorldMistSettings(brna);
	register_struct_MovieClip(brna);
	register_struct_MovieClipProxy(brna);
	register_struct_MovieClipUser(brna);
	register_struct_MovieClipScopes(brna);
	register_struct_MovieTrackingSettings(brna);
	register_struct_MovieTrackingCamera(brna);
	register_struct_MovieTrackingMarker(brna);
	register_struct_MovieTrackingTrack(brna);
	register_struct_MovieTrackingMarkers(brna);
	register_struct_MovieTrackingPlaneMarker(brna);
	register_struct_MovieTrackingPlaneTrack(brna);
	register_struct_MovieTrackingPlaneMarkers(brna);
	register_struct_MovieTrackingTracks(brna);
	register_struct_MovieTrackingPlaneTracks(brna);
	register_struct_MovieTrackingObjectTracks(brna);
	register_struct_MovieTrackingObjectPlaneTracks(brna);
	register_struct_MovieTrackingStabilization(brna);
	register_struct_MovieTrackingReconstructedCameras(brna);
	register_struct_MovieReconstructedCamera(brna);
	register_struct_MovieTrackingReconstruction(brna);
	register_struct_MovieTrackingObject(brna);
	register_struct_MovieTrackingDopesheet(brna);
	register_struct_MovieTracking(brna);
	register_struct_MovieTrackingObjects(brna);
	register_struct_MaskParent(brna);
	register_struct_MaskSplinePointUW(brna);
	register_struct_MaskSplinePoint(brna);
	register_struct_MaskSpline(brna);
	register_struct_MaskSplines(brna);
	register_struct_MaskSplinePoints(brna);
	register_struct_MaskLayer(brna);
	register_struct_Mask(brna);
	register_struct_MaskLayers(brna);
	register_struct_XrActionMap(brna);
	register_struct_XrActionMapItems(brna);
	register_struct_XrUserPath(brna);
	register_struct_XrActionMapItem(brna);
	register_struct_XrUserPaths(brna);
	register_struct_XrActionMapBindings(brna);
	register_struct_XrComponentPath(brna);
	register_struct_XrActionMapBinding(brna);
	register_struct_XrComponentPaths(brna);
	register_struct_XrSessionSettings(brna);
	register_struct_XrSessionState(brna);
	register_struct_XrActionMaps(brna);
	register_struct_XrViewfinderState(brna);
	register_struct_XrEventData(brna);
	return brna;
}
BlenderRNA &RNA_blender_rna_get()
{
	static BlenderRNA BLENDER_RNA = rna_blender_rna_create();
	return BLENDER_RNA;
}


}  // namespace blender
