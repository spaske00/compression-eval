
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

#include "rna_workspace.cc"
#include "rna_workspace_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_wmOwnerID_rna_properties;
extern PropertyRNA &rna_wmOwnerID_rna_type;
extern PropertyRNA &rna_wmOwnerID_name;


extern PropertyRNA &rna_WorkSpaceTool_rna_properties;
extern PropertyRNA &rna_WorkSpaceTool_rna_type;
extern PropertyRNA &rna_WorkSpaceTool_idname;
extern PropertyRNA &rna_WorkSpaceTool_idname_fallback;
extern PropertyRNA &rna_WorkSpaceTool_index;
extern PropertyRNA &rna_WorkSpaceTool_space_type;
extern PropertyRNA &rna_WorkSpaceTool_mode;
extern PropertyRNA &rna_WorkSpaceTool_use_paint_canvas;
extern PropertyRNA &rna_WorkSpaceTool_has_datablock;
extern PropertyRNA &rna_WorkSpaceTool_use_brushes;
extern PropertyRNA &rna_WorkSpaceTool_brush_type;
extern PropertyRNA &rna_WorkSpaceTool_widget;

extern FunctionRNA *rna_WorkSpaceTool_setup_func;
extern PropertyRNA &rna_WorkSpaceTool_setup_idname;
extern PropertyRNA &rna_WorkSpaceTool_setup_cursor;
extern PropertyRNA &rna_WorkSpaceTool_setup_keymap;
extern PropertyRNA &rna_WorkSpaceTool_setup_gizmo_group;
extern PropertyRNA &rna_WorkSpaceTool_setup_brush_type;
extern PropertyRNA &rna_WorkSpaceTool_setup_data_block;
extern PropertyRNA &rna_WorkSpaceTool_setup_operator;
extern PropertyRNA &rna_WorkSpaceTool_setup_index;
extern PropertyRNA &rna_WorkSpaceTool_setup_options;
extern PropertyRNA &rna_WorkSpaceTool_setup_idname_fallback;
extern PropertyRNA &rna_WorkSpaceTool_setup_keymap_fallback;

extern FunctionRNA *rna_WorkSpaceTool_operator_properties_func;
extern PropertyRNA &rna_WorkSpaceTool_operator_properties_operator;
extern PropertyRNA &rna_WorkSpaceTool_operator_properties_result;

extern FunctionRNA *rna_WorkSpaceTool_gizmo_group_properties_func;
extern PropertyRNA &rna_WorkSpaceTool_gizmo_group_properties_group;
extern PropertyRNA &rna_WorkSpaceTool_gizmo_group_properties_result;

extern FunctionRNA *rna_WorkSpaceTool_refresh_from_context_func;


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

extern PropertyRNA &rna_WorkSpace_screens;
extern PropertyRNA &rna_WorkSpace_owner_ids;
extern PropertyRNA &rna_WorkSpace_tools;
extern PropertyRNA &rna_WorkSpace_object_mode;
extern PropertyRNA &rna_WorkSpace_use_pin_scene;
extern PropertyRNA &rna_WorkSpace_use_filter_by_owner;
extern PropertyRNA &rna_WorkSpace_asset_library_reference;
extern PropertyRNA &rna_WorkSpace_sequencer_scene;
extern PropertyRNA &rna_WorkSpace_use_scene_time_sync;

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


extern FunctionRNA *rna_WorkSpace_status_text_set_internal_func;
extern PropertyRNA &rna_WorkSpace_status_text_set_internal_text;



extern PropertyRNA &rna_wmOwnerIDs_rna_properties;
extern PropertyRNA &rna_wmOwnerIDs_rna_type;

extern FunctionRNA *rna_wmOwnerIDs_new_func;
extern PropertyRNA &rna_wmOwnerIDs_new_name;
extern PropertyRNA &rna_wmOwnerIDs_new_owner_id;

extern FunctionRNA *rna_wmOwnerIDs_remove_func;
extern PropertyRNA &rna_wmOwnerIDs_remove_owner_id;

extern FunctionRNA *rna_wmOwnerIDs_clear_func;


extern PropertyRNA &rna_wmTools_rna_properties;
extern PropertyRNA &rna_wmTools_rna_type;

extern FunctionRNA *rna_wmTools_from_space_view3d_mode_func;
extern PropertyRNA &rna_wmTools_from_space_view3d_mode_mode;
extern PropertyRNA &rna_wmTools_from_space_view3d_mode_create;
extern PropertyRNA &rna_wmTools_from_space_view3d_mode_result;

extern FunctionRNA *rna_wmTools_from_space_image_mode_func;
extern PropertyRNA &rna_wmTools_from_space_image_mode_mode;
extern PropertyRNA &rna_wmTools_from_space_image_mode_create;
extern PropertyRNA &rna_wmTools_from_space_image_mode_result;

extern FunctionRNA *rna_wmTools_from_space_node_func;
extern PropertyRNA &rna_wmTools_from_space_node_create;
extern PropertyRNA &rna_wmTools_from_space_node_result;

extern FunctionRNA *rna_wmTools_from_space_sequencer_func;
extern PropertyRNA &rna_wmTools_from_space_sequencer_mode;
extern PropertyRNA &rna_wmTools_from_space_sequencer_create;
extern PropertyRNA &rna_wmTools_from_space_sequencer_result;


static PointerRNA wmOwnerID_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void wmOwnerID_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_wmOwnerID_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = wmOwnerID_rna_properties_get(iter);
    }
}

void wmOwnerID_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = wmOwnerID_rna_properties_get(iter);
    }
}

void wmOwnerID_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool wmOwnerID_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA wmOwnerID_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void wmOwnerID_name_get(PointerRNA *ptr, char *value)
{
    wmOwnerID *data = (wmOwnerID *)(ptr->data);
    BLI_assert(strlen(data->name) < 128);
    strcpy(value, data->name);
}

int wmOwnerID_name_length(PointerRNA *ptr)
{
    wmOwnerID *data = (wmOwnerID *)(ptr->data);
    return strlen(data->name);
}

void wmOwnerID_name_set(PointerRNA *ptr, const char *value)
{
    wmOwnerID *data = (wmOwnerID *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 128);
}

static PointerRNA WorkSpaceTool_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void WorkSpaceTool_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_WorkSpaceTool_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorkSpaceTool_rna_properties_get(iter);
    }
}

void WorkSpaceTool_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = WorkSpaceTool_rna_properties_get(iter);
    }
}

void WorkSpaceTool_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool WorkSpaceTool_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA WorkSpaceTool_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void WorkSpaceTool_idname_get(PointerRNA *ptr, char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_assert(strlen(data->idname) < 64);
    strcpy(value, data->idname);
}

int WorkSpaceTool_idname_length(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return strlen(data->idname);
}

void WorkSpaceTool_idname_set(PointerRNA *ptr, const char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, 64);
}

void WorkSpaceTool_idname_fallback_get(PointerRNA *ptr, char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_assert(strlen(data->idname_fallback) < 64);
    strcpy(value, data->idname_fallback);
}

int WorkSpaceTool_idname_fallback_length(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return strlen(data->idname_fallback);
}

void WorkSpaceTool_idname_fallback_set(PointerRNA *ptr, const char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_strncpy_utf8(data->idname_fallback, value, 64);
}

int WorkSpaceTool_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_WorkSpaceTool_index_get;
    return fn(ptr);
}

int WorkSpaceTool_space_type_get(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return (int)(data->space_type);
}

int WorkSpaceTool_mode_get(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return (int)(data->mode);
}

bool WorkSpaceTool_use_paint_canvas_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_WorkSpaceTool_use_paint_canvas_get;
    return fn(ptr);
}

bool WorkSpaceTool_has_datablock_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_WorkSpaceTool_has_datablock_get;
    return fn(ptr);
}

bool WorkSpaceTool_use_brushes_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_WorkSpaceTool_use_brushes_get;
    return fn(ptr);
}

int WorkSpaceTool_brush_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_WorkSpaceTool_brush_type_get;
    return fn(ptr);
}

void WorkSpaceTool_widget_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_WorkSpaceTool_widget_get;
    fn(ptr, value);
}

int WorkSpaceTool_widget_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_WorkSpaceTool_widget_length;
    return fn(ptr);
}

static PointerRNA WorkSpace_screens_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_workspace_screens_item_get;
    return fn(iter);
}

void WorkSpace_screens_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_WorkSpace_screens;

    PropCollectionBeginFunc fn = rna_workspace_screens_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorkSpace_screens_get(iter);
    }
}

void WorkSpace_screens_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = WorkSpace_screens_get(iter);
    }
}

void WorkSpace_screens_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool WorkSpace_screens_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    WorkSpace_screens_begin(&iter, ptr);

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
        if (found) { *r_ptr = WorkSpace_screens_get(&iter); }
    }

    WorkSpace_screens_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool WorkSpace_screens_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WorkSpace_screens_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ID_name_length(&iter.ptr);
            if (namelen < 1024) {
                ID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                ID_name_get(&iter.ptr, name);
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
        WorkSpace_screens_next(&iter);
    }
    WorkSpace_screens_end(&iter);

    return found;
}

static PointerRNA WorkSpace_owner_ids_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_wmOwnerID, rna_iterator_listbase_get(iter));
}

void WorkSpace_owner_ids_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_WorkSpace_owner_ids;

    rna_iterator_listbase_begin(iter, ptr, &data->owner_ids, nullptr);

    if (iter->valid) {
        iter->ptr = WorkSpace_owner_ids_get(iter);
    }
}

void WorkSpace_owner_ids_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = WorkSpace_owner_ids_get(iter);
    }
}

void WorkSpace_owner_ids_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool WorkSpace_owner_ids_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    WorkSpace_owner_ids_begin(&iter, ptr);

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
        if (found) { *r_ptr = WorkSpace_owner_ids_get(&iter); }
    }

    WorkSpace_owner_ids_end(&iter);

    return found;
}

int wmOwnerID_name_length(PointerRNA *);
void wmOwnerID_name_get(PointerRNA *, char *);

bool WorkSpace_owner_ids_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WorkSpace_owner_ids_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = wmOwnerID_name_length(&iter.ptr);
            if (namelen < 1024) {
                wmOwnerID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                wmOwnerID_name_get(&iter.ptr, name);
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
        WorkSpace_owner_ids_next(&iter);
    }
    WorkSpace_owner_ids_end(&iter);

    return found;
}

static PointerRNA WorkSpace_tools_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_WorkSpaceTool, rna_iterator_listbase_get(iter));
}

void WorkSpace_tools_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_WorkSpace_tools;

    rna_iterator_listbase_begin(iter, ptr, &data->tools, nullptr);

    if (iter->valid) {
        iter->ptr = WorkSpace_tools_get(iter);
    }
}

void WorkSpace_tools_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = WorkSpace_tools_get(iter);
    }
}

void WorkSpace_tools_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool WorkSpace_tools_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    WorkSpace_tools_begin(&iter, ptr);

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
        if (found) { *r_ptr = WorkSpace_tools_get(&iter); }
    }

    WorkSpace_tools_end(&iter);

    return found;
}

int WorkSpaceTool_idname_length(PointerRNA *);
void WorkSpaceTool_idname_get(PointerRNA *, char *);

bool WorkSpace_tools_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WorkSpace_tools_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = WorkSpaceTool_idname_length(&iter.ptr);
            if (namelen < 1024) {
                WorkSpaceTool_idname_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                WorkSpaceTool_idname_get(&iter.ptr, name);
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
        WorkSpace_tools_next(&iter);
    }
    WorkSpace_tools_end(&iter);

    return found;
}

int WorkSpace_object_mode_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return (int)(data->object_mode);
}

void WorkSpace_object_mode_set(PointerRNA *ptr, int value)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    data->object_mode = (std::remove_reference_t<decltype(data->object_mode)>)value;
}

bool WorkSpace_use_pin_scene_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void WorkSpace_use_pin_scene_set(PointerRNA *ptr, bool value)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

bool WorkSpace_use_filter_by_owner_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void WorkSpace_use_filter_by_owner_set(PointerRNA *ptr, bool value)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

int WorkSpace_asset_library_reference_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_WorkSpace_asset_library_get;
    return fn(ptr);
}

void WorkSpace_asset_library_reference_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_WorkSpace_asset_library_set;
    fn(ptr, value);
}

PointerRNA WorkSpace_sequencer_scene_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Scene, data->sequencer_scene);
}

void WorkSpace_sequencer_scene_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->sequencer_scene = value.data;
}

bool WorkSpace_use_scene_time_sync_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

void WorkSpace_use_scene_time_sync_set(PointerRNA *ptr, bool value)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

static PointerRNA wmOwnerIDs_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void wmOwnerIDs_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_wmOwnerIDs_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = wmOwnerIDs_rna_properties_get(iter);
    }
}

void wmOwnerIDs_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = wmOwnerIDs_rna_properties_get(iter);
    }
}

void wmOwnerIDs_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool wmOwnerIDs_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA wmOwnerIDs_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA wmTools_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void wmTools_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_wmTools_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = wmTools_rna_properties_get(iter);
    }
}

void wmTools_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = wmTools_rna_properties_get(iter);
    }
}

void wmTools_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool wmTools_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA wmTools_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}


void WorkSpaceTool_setup_func(ID *_selfid, bToolRef *_self, bContext *C, const char * idname, int cursor, const char * keymap, const char * gizmo_group, int brush_type, const char * data_block, const char * operator_value, int index, int options, const char * idname_fallback, const char * keymap_fallback)
{
	rna_WorkSpaceTool_setup(_selfid, _self, C, idname, cursor, keymap, gizmo_group, brush_type, data_block, operator_value, index, options, idname_fallback, keymap_fallback);
}

static void WorkSpaceTool_setup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bToolRef *_self;
	const char * idname;
	int cursor;
	const char * keymap;
	const char * gizmo_group;
	int brush_type;
	const char * data_block;
	const char * operator_value;
	int index;
	int options;
	const char * idname_fallback;
	const char * keymap_fallback;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bToolRef *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
	_data += 8;
	cursor = *((int *)_data);
	_data += 8;
	keymap = *((const char * *)_data);
	_data += 8;
	gizmo_group = *((const char * *)_data);
	_data += 8;
	brush_type = *((int *)_data);
	_data += 8;
	data_block = *((const char * *)_data);
	_data += 8;
	operator_value = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	options = *((int *)_data);
	_data += 8;
	idname_fallback = *((const char * *)_data);
	_data += 8;
	keymap_fallback = *((const char * *)_data);
	
	rna_WorkSpaceTool_setup(_selfid, _self, C, idname, cursor, keymap, gizmo_group, brush_type, data_block, operator_value, index, options, idname_fallback, keymap_fallback);
}

PointerRNA WorkSpaceTool_operator_properties_func(bToolRef *_self, ReportList *reports, const char * operator_value)
{
	return rna_WorkSpaceTool_operator_properties(_self, reports, operator_value);
}

static void WorkSpaceTool_operator_properties_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bToolRef *_self;
	const char * operator_value;
	PointerRNA result;
	char *_data, *_retdata;
	
	_self = (bToolRef *)_ptr->data;
	_data = (char *)_parms->data;
	operator_value = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpaceTool_operator_properties(_self, reports, operator_value);
	*reinterpret_cast<PointerRNA *>(_retdata) = result;
}

PointerRNA WorkSpaceTool_gizmo_group_properties_func(bToolRef *_self, ReportList *reports, const char * group)
{
	return rna_WorkSpaceTool_gizmo_group_properties(_self, reports, group);
}

static void WorkSpaceTool_gizmo_group_properties_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bToolRef *_self;
	const char * group;
	PointerRNA result;
	char *_data, *_retdata;
	
	_self = (bToolRef *)_ptr->data;
	_data = (char *)_parms->data;
	group = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpaceTool_gizmo_group_properties(_self, reports, group);
	*reinterpret_cast<PointerRNA *>(_retdata) = result;
}

void WorkSpaceTool_refresh_from_context_func(ID *_selfid, bToolRef *_self, Main *bmain)
{
	rna_WorkSpaceTool_refresh_from_context(_selfid, _self, bmain);
}

static void WorkSpaceTool_refresh_from_context_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bToolRef *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (bToolRef *)_ptr->data;
	
	rna_WorkSpaceTool_refresh_from_context(_selfid, _self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

void rna_WorkSpaceTool_setup(ID *_selfid, bToolRef *_self, bContext *C, const char * idname, int cursor, const char * keymap, const char * gizmo_group, int brush_type, const char * data_block, const char * operator_value, int index, int options, const char * idname_fallback, const char * keymap_fallback);
PointerRNA rna_WorkSpaceTool_operator_properties(bToolRef *_self, ReportList *reports, const char * operator_value);
PointerRNA rna_WorkSpaceTool_gizmo_group_properties(bToolRef *_self, ReportList *reports, const char * group);
void rna_WorkSpaceTool_refresh_from_context(ID *_selfid, bToolRef *_self, Main *bmain);

void WorkSpace_status_text_set_internal_func(bContext *C, const char * text)
{
	ED_workspace_status_text(C, text);
}

static void WorkSpace_status_text_set_internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * text;
	char *_data;
	
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	
	ED_workspace_status_text(C, text);
}

/* Repeated prototypes to detect errors */

void ED_workspace_status_text(bContext *C, const char * text);

wmOwnerID *wmOwnerIDs_new_func(WorkSpace *_self, const char * name)
{
	return rna_WorkSpace_owner_ids_new(_self, name);
}

static void wmOwnerIDs_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	WorkSpace *_self;
	const char * name;
	wmOwnerID *owner_id;
	char *_data, *_retdata;
	
	_self = (WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	owner_id = rna_WorkSpace_owner_ids_new(_self, name);
	*((wmOwnerID **)_retdata) = owner_id;
}

void wmOwnerIDs_remove_func(WorkSpace *_self, ReportList *reports, PointerRNA *owner_id)
{
	rna_WorkSpace_owner_ids_remove(_self, reports, owner_id);
}

static void wmOwnerIDs_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	WorkSpace *_self;
	PointerRNA *owner_id;
	char *_data;
	
	_self = (WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	owner_id = *((PointerRNA **)_data);
	
	rna_WorkSpace_owner_ids_remove(_self, reports, owner_id);
}

void wmOwnerIDs_clear_func(WorkSpace *_self)
{
	rna_WorkSpace_owner_ids_clear(_self);
}

static void wmOwnerIDs_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	WorkSpace *_self;
	_self = (WorkSpace *)_ptr->data;
	
	rna_WorkSpace_owner_ids_clear(_self);
}

/* Repeated prototypes to detect errors */

wmOwnerID *rna_WorkSpace_owner_ids_new(WorkSpace *_self, const char * name);
void rna_WorkSpace_owner_ids_remove(WorkSpace *_self, ReportList *reports, PointerRNA *owner_id);
void rna_WorkSpace_owner_ids_clear(WorkSpace *_self);

bToolRef *wmTools_from_space_view3d_mode_func(WorkSpace *_self, int mode, bool create)
{
	return rna_WorkSpace_tools_from_space_view3d_mode(_self, mode, create);
}

static void wmTools_from_space_view3d_mode_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	WorkSpace *_self;
	int mode;
	bool create;
	bToolRef *result;
	char *_data, *_retdata;
	
	_self = (WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	mode = *((int *)_data);
	_data += 8;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_view3d_mode(_self, mode, create);
	*((bToolRef **)_retdata) = result;
}

bToolRef *wmTools_from_space_image_mode_func(WorkSpace *_self, int mode, bool create)
{
	return rna_WorkSpace_tools_from_space_image_mode(_self, mode, create);
}

static void wmTools_from_space_image_mode_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	WorkSpace *_self;
	int mode;
	bool create;
	bToolRef *result;
	char *_data, *_retdata;
	
	_self = (WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	mode = *((int *)_data);
	_data += 8;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_image_mode(_self, mode, create);
	*((bToolRef **)_retdata) = result;
}

bToolRef *wmTools_from_space_node_func(WorkSpace *_self, bool create)
{
	return rna_WorkSpace_tools_from_space_node(_self, create);
}

static void wmTools_from_space_node_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	WorkSpace *_self;
	bool create;
	bToolRef *result;
	char *_data, *_retdata;
	
	_self = (WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_node(_self, create);
	*((bToolRef **)_retdata) = result;
}

bToolRef *wmTools_from_space_sequencer_func(WorkSpace *_self, int mode, bool create)
{
	return rna_WorkSpace_tools_from_space_sequencer(_self, mode, create);
}

static void wmTools_from_space_sequencer_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	WorkSpace *_self;
	int mode;
	bool create;
	bToolRef *result;
	char *_data, *_retdata;
	
	_self = (WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	mode = *((int *)_data);
	_data += 8;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_sequencer(_self, mode, create);
	*((bToolRef **)_retdata) = result;
}

/* Repeated prototypes to detect errors */

bToolRef *rna_WorkSpace_tools_from_space_view3d_mode(WorkSpace *_self, int mode, bool create);
bToolRef *rna_WorkSpace_tools_from_space_image_mode(WorkSpace *_self, int mode, bool create);
bToolRef *rna_WorkSpace_tools_from_space_node(WorkSpace *_self, bool create);
bToolRef *rna_WorkSpace_tools_from_space_sequencer(WorkSpace *_self, int mode, bool create);

/* Work Space UI Tag */
static CollectionPropertyRNA rna_wmOwnerID_rna_properties_;
PropertyRNA &rna_wmOwnerID_rna_properties = reinterpret_cast<PropertyRNA &>(rna_wmOwnerID_rna_properties_);

static PointerPropertyRNA rna_wmOwnerID_rna_type_;
PropertyRNA &rna_wmOwnerID_rna_type = reinterpret_cast<PropertyRNA &>(rna_wmOwnerID_rna_type_);

static StringPropertyRNA rna_wmOwnerID_name_;
PropertyRNA &rna_wmOwnerID_name = reinterpret_cast<PropertyRNA &>(rna_wmOwnerID_name_);

StructRNA *RNA_wmOwnerID;
void register_struct_wmOwnerID(BlenderRNA &brna)
{
	rna_wmOwnerID_rna_properties_ = {
		{&rna_wmOwnerID_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		wmOwnerID_rna_properties_begin, wmOwnerID_rna_properties_next, wmOwnerID_rna_properties_end, wmOwnerID_rna_properties_get, nullptr, nullptr, wmOwnerID_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_wmOwnerID_rna_type_ = {
		{&rna_wmOwnerID_name, 	&rna_wmOwnerID_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		wmOwnerID_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_wmOwnerID_name_ = {
		{nullptr, 	&rna_wmOwnerID_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {128, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		wmOwnerID_name_get, wmOwnerID_name_length, wmOwnerID_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 128, ""
	};

	StructRNA *srna = RNA_wmOwnerID;
	srna->cont.properties = {&rna_wmOwnerID_rna_properties, &rna_wmOwnerID_name};
	srna->identifier = "wmOwnerID";
	srna->flag = 516;
	srna->name = "Work Space UI Tag";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_wmOwnerID_name;
	srna->iteratorproperty = &rna_wmOwnerID_rna_properties;
};

/* Work Space Tool */
static CollectionPropertyRNA rna_WorkSpaceTool_rna_properties_;
PropertyRNA &rna_WorkSpaceTool_rna_properties = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_rna_properties_);

static PointerPropertyRNA rna_WorkSpaceTool_rna_type_;
PropertyRNA &rna_WorkSpaceTool_rna_type = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_rna_type_);

static StringPropertyRNA rna_WorkSpaceTool_idname_;
PropertyRNA &rna_WorkSpaceTool_idname = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_idname_);

static StringPropertyRNA rna_WorkSpaceTool_idname_fallback_;
PropertyRNA &rna_WorkSpaceTool_idname_fallback = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_idname_fallback_);

static IntPropertyRNA rna_WorkSpaceTool_index_;
PropertyRNA &rna_WorkSpaceTool_index = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_index_);

static EnumPropertyRNA rna_WorkSpaceTool_space_type_;
PropertyRNA &rna_WorkSpaceTool_space_type = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_space_type_);

static EnumPropertyRNA rna_WorkSpaceTool_mode_;
PropertyRNA &rna_WorkSpaceTool_mode = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_mode_);

static BoolPropertyRNA rna_WorkSpaceTool_use_paint_canvas_;
PropertyRNA &rna_WorkSpaceTool_use_paint_canvas = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_use_paint_canvas_);

static BoolPropertyRNA rna_WorkSpaceTool_has_datablock_;
PropertyRNA &rna_WorkSpaceTool_has_datablock = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_has_datablock_);

static BoolPropertyRNA rna_WorkSpaceTool_use_brushes_;
PropertyRNA &rna_WorkSpaceTool_use_brushes = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_use_brushes_);

static EnumPropertyRNA rna_WorkSpaceTool_brush_type_;
PropertyRNA &rna_WorkSpaceTool_brush_type = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_brush_type_);

static StringPropertyRNA rna_WorkSpaceTool_widget_;
PropertyRNA &rna_WorkSpaceTool_widget = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_widget_);

static StringPropertyRNA rna_WorkSpaceTool_setup_idname_;
PropertyRNA &rna_WorkSpaceTool_setup_idname = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_idname_);

static EnumPropertyRNA rna_WorkSpaceTool_setup_cursor_;
PropertyRNA &rna_WorkSpaceTool_setup_cursor = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_cursor_);

static StringPropertyRNA rna_WorkSpaceTool_setup_keymap_;
PropertyRNA &rna_WorkSpaceTool_setup_keymap = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_keymap_);

static StringPropertyRNA rna_WorkSpaceTool_setup_gizmo_group_;
PropertyRNA &rna_WorkSpaceTool_setup_gizmo_group = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_gizmo_group_);

static EnumPropertyRNA rna_WorkSpaceTool_setup_brush_type_;
PropertyRNA &rna_WorkSpaceTool_setup_brush_type = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_brush_type_);

static StringPropertyRNA rna_WorkSpaceTool_setup_data_block_;
PropertyRNA &rna_WorkSpaceTool_setup_data_block = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_data_block_);

static StringPropertyRNA rna_WorkSpaceTool_setup_operator_;
PropertyRNA &rna_WorkSpaceTool_setup_operator = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_operator_);

static IntPropertyRNA rna_WorkSpaceTool_setup_index_;
PropertyRNA &rna_WorkSpaceTool_setup_index = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_index_);

static EnumPropertyRNA rna_WorkSpaceTool_setup_options_;
PropertyRNA &rna_WorkSpaceTool_setup_options = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_options_);

static StringPropertyRNA rna_WorkSpaceTool_setup_idname_fallback_;
PropertyRNA &rna_WorkSpaceTool_setup_idname_fallback = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_idname_fallback_);

static StringPropertyRNA rna_WorkSpaceTool_setup_keymap_fallback_;
PropertyRNA &rna_WorkSpaceTool_setup_keymap_fallback = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_setup_keymap_fallback_);

FunctionRNA *rna_WorkSpaceTool_setup_func;
static StringPropertyRNA rna_WorkSpaceTool_operator_properties_operator_;
PropertyRNA &rna_WorkSpaceTool_operator_properties_operator = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_operator_properties_operator_);

static PointerPropertyRNA rna_WorkSpaceTool_operator_properties_result_;
PropertyRNA &rna_WorkSpaceTool_operator_properties_result = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_operator_properties_result_);

FunctionRNA *rna_WorkSpaceTool_operator_properties_func;
static StringPropertyRNA rna_WorkSpaceTool_gizmo_group_properties_group_;
PropertyRNA &rna_WorkSpaceTool_gizmo_group_properties_group = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_gizmo_group_properties_group_);

static PointerPropertyRNA rna_WorkSpaceTool_gizmo_group_properties_result_;
PropertyRNA &rna_WorkSpaceTool_gizmo_group_properties_result = reinterpret_cast<PropertyRNA &>(rna_WorkSpaceTool_gizmo_group_properties_result_);

FunctionRNA *rna_WorkSpaceTool_gizmo_group_properties_func;
FunctionRNA *rna_WorkSpaceTool_refresh_from_context_func;
StructRNA *RNA_WorkSpaceTool;
void register_struct_WorkSpaceTool(BlenderRNA &brna)
{
	rna_WorkSpaceTool_rna_properties_ = {
		{&rna_WorkSpaceTool_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpaceTool_rna_properties_begin, WorkSpaceTool_rna_properties_next, WorkSpaceTool_rna_properties_end, WorkSpaceTool_rna_properties_get, nullptr, nullptr, WorkSpaceTool_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_WorkSpaceTool_rna_type_ = {
		{&rna_WorkSpaceTool_idname, 	&rna_WorkSpaceTool_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpaceTool_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_WorkSpaceTool_idname_ = {
		{&rna_WorkSpaceTool_idname_fallback, 	&rna_WorkSpaceTool_rna_type,
		-1, "idname", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Identifier",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpaceTool_idname_get, WorkSpaceTool_idname_length, WorkSpaceTool_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_WorkSpaceTool_idname_fallback_ = {
		{&rna_WorkSpaceTool_index, 	&rna_WorkSpaceTool_idname,
		-1, "idname_fallback", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Identifier Fallback",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpaceTool_idname_fallback_get, WorkSpaceTool_idname_fallback_length, WorkSpaceTool_idname_fallback_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_WorkSpaceTool_index_ = {
		{&rna_WorkSpaceTool_space_type, 	&rna_WorkSpaceTool_idname_fallback,
		-1, "index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpaceTool_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_WorkSpaceTool_space_type_ = {
		{&rna_WorkSpaceTool_mode, 	&rna_WorkSpaceTool_index,
		-1, "space_type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Space Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bToolRef, space_type), RawPropertyType(1), nullptr},
		WorkSpaceTool_space_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_type_items, 24, 0
	};

	rna_WorkSpaceTool_mode_ = {
		{&rna_WorkSpaceTool_use_paint_canvas, 	&rna_WorkSpaceTool_space_type,
		-1, "mode", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tool Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bToolRef, mode), RawPropertyType(0), nullptr},
		WorkSpaceTool_mode_get, nullptr, rna_WorkSpace_tools_mode_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};

	rna_WorkSpaceTool_use_paint_canvas_ = {
		{&rna_WorkSpaceTool_has_datablock, 	&rna_WorkSpaceTool_mode,
		-1, "use_paint_canvas", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Paint Canvas",
		"Does this tool use a painting canvas",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpaceTool_use_paint_canvas_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_WorkSpaceTool_has_datablock_ = {
		{&rna_WorkSpaceTool_use_brushes, 	&rna_WorkSpaceTool_use_paint_canvas,
		-1, "has_datablock", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Data-Block",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpaceTool_has_datablock_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_WorkSpaceTool_use_brushes_ = {
		{&rna_WorkSpaceTool_brush_type, 	&rna_WorkSpaceTool_has_datablock,
		-1, "use_brushes", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Uses Brushes",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpaceTool_use_brushes_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_WorkSpaceTool_brush_type_ = {
		{&rna_WorkSpaceTool_widget, 	&rna_WorkSpaceTool_use_brushes,
		-1, "brush_type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Brush Type",
		"If the tool uses brushes and is limited to a specific brush type, the identifier of the brush type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpaceTool_brush_type_get, nullptr, rna_WorkSpaceTool_brush_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};

	rna_WorkSpaceTool_widget_ = {
		{nullptr, 	&rna_WorkSpaceTool_brush_type,
		-1, "widget", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Widget",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpaceTool_widget_get, WorkSpaceTool_widget_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_WorkSpaceTool;
	srna->cont.properties = {&rna_WorkSpaceTool_rna_properties, &rna_WorkSpaceTool_widget};
	srna->identifier = "WorkSpaceTool";
	srna->flag = 516;
	srna->name = "Work Space Tool";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_WorkSpaceTool_idname;
	srna->iteratorproperty = &rna_WorkSpaceTool_rna_properties;
	{
	rna_WorkSpaceTool_setup_idname_ = {
		{&rna_WorkSpaceTool_setup_cursor, 	nullptr,
		-1, "idname", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Identifier",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_WorkSpaceTool_setup_cursor_ = {
		{&rna_WorkSpaceTool_setup_keymap, 	&rna_WorkSpaceTool_setup_idname,
		-1, "cursor", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "cursor",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_window_cursor_items, 26, 1
	};
	rna_WorkSpaceTool_setup_keymap_ = {
		{&rna_WorkSpaceTool_setup_gizmo_group, 	&rna_WorkSpaceTool_setup_cursor,
		-1, "keymap", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Key Map",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_WorkSpaceTool_setup_gizmo_group_ = {
		{&rna_WorkSpaceTool_setup_brush_type, 	&rna_WorkSpaceTool_setup_keymap,
		-1, "gizmo_group", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Gizmo Group",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_WorkSpaceTool_setup_brush_type_ = {
		{&rna_WorkSpaceTool_setup_data_block, 	&rna_WorkSpaceTool_setup_gizmo_group,
		-1, "brush_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Brush Type",
		"Limit this tool to a specific type of brush",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, rna_WorkSpaceTool_brush_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_NULL_items, 0, -1
	};
	rna_WorkSpaceTool_setup_data_block_ = {
		{&rna_WorkSpaceTool_setup_operator, 	&rna_WorkSpaceTool_setup_brush_type,
		-1, "data_block", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Data Block",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_WorkSpaceTool_setup_operator_ = {
		{&rna_WorkSpaceTool_setup_index, 	&rna_WorkSpaceTool_setup_data_block,
		-1, "operator", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Operator",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_WorkSpaceTool_setup_index_ = {
		{&rna_WorkSpaceTool_setup_options, 	&rna_WorkSpaceTool_setup_operator,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	static const EnumPropertyItem rna_WorkSpaceTool_setup_options_items[3] = {
		{1, "KEYMAP_FALLBACK", 0, "Fallback", ""	},
		{2, "USE_BRUSHES", 0, "Uses Brushes", "Allow this tool to use brushes via the asset system"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_WorkSpaceTool_setup_options_ = {
		{&rna_WorkSpaceTool_setup_idname_fallback, 	&rna_WorkSpaceTool_setup_index,
		-1, "options", 2097155, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tool Options",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_WorkSpaceTool_setup_options_items, 2, 0
	};
	rna_WorkSpaceTool_setup_idname_fallback_ = {
		{&rna_WorkSpaceTool_setup_keymap_fallback, 	&rna_WorkSpaceTool_setup_options,
		-1, "idname_fallback", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fallback Identifier",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_WorkSpaceTool_setup_keymap_fallback_ = {
		{nullptr, 	&rna_WorkSpaceTool_setup_idname_fallback,
		-1, "keymap_fallback", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fallback Key Map",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WorkSpaceTool_setup_idname, &rna_WorkSpaceTool_setup_keymap_fallback};
		func->identifier = "setup";
		func->flag = 2056;
		func->description = "Set the tool settings";
		func->call = WorkSpaceTool_setup_call;
		rna_WorkSpaceTool_setup_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WorkSpaceTool_operator_properties_operator_ = {
		{&rna_WorkSpaceTool_operator_properties_result, 	nullptr,
		-1, "operator", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WorkSpaceTool_operator_properties_result_ = {
		{nullptr, 	&rna_WorkSpaceTool_operator_properties_operator,
		-1, "result", 8650752, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_OperatorProperties
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WorkSpaceTool_operator_properties_operator, &rna_WorkSpaceTool_operator_properties_result};
		func->identifier = "operator_properties";
		func->flag = 16;
		func->description = "operator_properties";
		func->call = WorkSpaceTool_operator_properties_call;
		func->c_ret = &rna_WorkSpaceTool_operator_properties_result;
		rna_WorkSpaceTool_operator_properties_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WorkSpaceTool_gizmo_group_properties_group_ = {
		{&rna_WorkSpaceTool_gizmo_group_properties_result, 	nullptr,
		-1, "group", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WorkSpaceTool_gizmo_group_properties_result_ = {
		{nullptr, 	&rna_WorkSpaceTool_gizmo_group_properties_group,
		-1, "result", 8650752, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GizmoGroupProperties
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WorkSpaceTool_gizmo_group_properties_group, &rna_WorkSpaceTool_gizmo_group_properties_result};
		func->identifier = "gizmo_group_properties";
		func->flag = 16;
		func->description = "gizmo_group_properties";
		func->call = WorkSpaceTool_gizmo_group_properties_call;
		func->c_ret = &rna_WorkSpaceTool_gizmo_group_properties_result;
		rna_WorkSpaceTool_gizmo_group_properties_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "refresh_from_context";
		func->flag = 2052;
		func->description = "refresh_from_context";
		func->call = WorkSpaceTool_refresh_from_context_call;
		rna_WorkSpaceTool_refresh_from_context_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Workspace */
static CollectionPropertyRNA rna_WorkSpace_screens_;
PropertyRNA &rna_WorkSpace_screens = reinterpret_cast<PropertyRNA &>(rna_WorkSpace_screens_);

static CollectionPropertyRNA rna_WorkSpace_owner_ids_;
PropertyRNA &rna_WorkSpace_owner_ids = reinterpret_cast<PropertyRNA &>(rna_WorkSpace_owner_ids_);

static CollectionPropertyRNA rna_WorkSpace_tools_;
PropertyRNA &rna_WorkSpace_tools = reinterpret_cast<PropertyRNA &>(rna_WorkSpace_tools_);

static EnumPropertyRNA rna_WorkSpace_object_mode_;
PropertyRNA &rna_WorkSpace_object_mode = reinterpret_cast<PropertyRNA &>(rna_WorkSpace_object_mode_);

static BoolPropertyRNA rna_WorkSpace_use_pin_scene_;
PropertyRNA &rna_WorkSpace_use_pin_scene = reinterpret_cast<PropertyRNA &>(rna_WorkSpace_use_pin_scene_);

static BoolPropertyRNA rna_WorkSpace_use_filter_by_owner_;
PropertyRNA &rna_WorkSpace_use_filter_by_owner = reinterpret_cast<PropertyRNA &>(rna_WorkSpace_use_filter_by_owner_);

static EnumPropertyRNA rna_WorkSpace_asset_library_reference_;
PropertyRNA &rna_WorkSpace_asset_library_reference = reinterpret_cast<PropertyRNA &>(rna_WorkSpace_asset_library_reference_);

static PointerPropertyRNA rna_WorkSpace_sequencer_scene_;
PropertyRNA &rna_WorkSpace_sequencer_scene = reinterpret_cast<PropertyRNA &>(rna_WorkSpace_sequencer_scene_);

static BoolPropertyRNA rna_WorkSpace_use_scene_time_sync_;
PropertyRNA &rna_WorkSpace_use_scene_time_sync = reinterpret_cast<PropertyRNA &>(rna_WorkSpace_use_scene_time_sync_);

static StringPropertyRNA rna_WorkSpace_status_text_set_internal_text_;
PropertyRNA &rna_WorkSpace_status_text_set_internal_text = reinterpret_cast<PropertyRNA &>(rna_WorkSpace_status_text_set_internal_text_);

FunctionRNA *rna_WorkSpace_status_text_set_internal_func;
StructRNA *RNA_WorkSpace;
void register_struct_WorkSpace(BlenderRNA &brna)
{
	rna_WorkSpace_screens_ = {
		{&rna_WorkSpace_owner_ids, 	nullptr,
		-1, "screens", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Screens",
		"Screen layouts of a workspace",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpace_screens_begin, WorkSpace_screens_next, WorkSpace_screens_end, WorkSpace_screens_get, nullptr, WorkSpace_screens_lookup_int, WorkSpace_screens_lookup_string, nullptr, RNA_Screen
	};

	rna_WorkSpace_owner_ids_ = {
		{&rna_WorkSpace_tools, 	&rna_WorkSpace_screens,
		-1, "owner_ids", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "UI Tags",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_wmOwnerIDs},
		WorkSpace_owner_ids_begin, WorkSpace_owner_ids_next, WorkSpace_owner_ids_end, WorkSpace_owner_ids_get, nullptr, WorkSpace_owner_ids_lookup_int, WorkSpace_owner_ids_lookup_string, nullptr, RNA_wmOwnerID
	};

	rna_WorkSpace_tools_ = {
		{&rna_WorkSpace_object_mode, 	&rna_WorkSpace_owner_ids,
		-1, "tools", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tools",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_wmTools},
		WorkSpace_tools_begin, WorkSpace_tools_next, WorkSpace_tools_end, WorkSpace_tools_get, nullptr, WorkSpace_tools_lookup_int, WorkSpace_tools_lookup_string, nullptr, RNA_WorkSpaceTool
	};

	rna_WorkSpace_object_mode_ = {
		{&rna_WorkSpace_use_pin_scene, 	&rna_WorkSpace_tools,
		-1, "object_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Object Mode",
		"Switch to this object mode when activating the workspace",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(WorkSpace, object_mode), RawPropertyType(0), nullptr},
		WorkSpace_object_mode_get, WorkSpace_object_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_workspace_object_mode_items, 13, 0
	};

	rna_WorkSpace_use_pin_scene_ = {
		{&rna_WorkSpace_use_filter_by_owner, 	&rna_WorkSpace_object_mode,
		-1, "use_pin_scene", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pin Scene",
		"Remember the last used scene for the workspace and switch to it whenever this workspace is activated again",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 50331648, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpace_use_pin_scene_get, WorkSpace_use_pin_scene_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_WorkSpace_use_filter_by_owner_ = {
		{&rna_WorkSpace_asset_library_reference, 	&rna_WorkSpace_use_pin_scene,
		-1, "use_filter_by_owner", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use UI Tags",
		"Filter the UI by tags",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_window_update_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpace_use_filter_by_owner_get, WorkSpace_use_filter_by_owner_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_WorkSpace_asset_library_reference_items[6] = {
		{2, "ALL", 0, "All Libraries", "Show assets from all of the listed asset libraries"	},
		{1, "LOCAL", 0, "Current File", "Show the assets currently available in this Blender session"	},
		{3, "ESSENTIALS", 0, "Essentials", "Show basic building blocks and utilities coming with Blender"	},
		{4, "ONLINE_ESSENTIALS", 0, "Online Essentials", "Show additional building blocks and utilities available online"	},
		{100, "CUSTOM", 0, "Custom", "Show assets from the asset libraries configured in the Preferences"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_WorkSpace_asset_library_reference_ = {
		{&rna_WorkSpace_sequencer_scene, 	&rna_WorkSpace_use_filter_by_owner,
		-1, "asset_library_reference", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Asset Library",
		"Active asset library to show in the UI, not used by the Asset Browser (which has its own active asset library)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 453181440, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpace_asset_library_reference_get, WorkSpace_asset_library_reference_set, rna_asset_library_ui_reference_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_WorkSpace_asset_library_reference_items, 5, 2
	};

	rna_WorkSpace_sequencer_scene_ = {
		{&rna_WorkSpace_use_scene_time_sync, 	&rna_WorkSpace_asset_library_reference,
		-1, "sequencer_scene", 12583041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sequencer Scene",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_workspace_sync_scene_time_update, 33554432, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpace_sequencer_scene_get, WorkSpace_sequencer_scene_set, nullptr, nullptr,RNA_Scene
	};

	rna_WorkSpace_use_scene_time_sync_ = {
		{nullptr, 	&rna_WorkSpace_sequencer_scene,
		-1, "use_scene_time_sync", 4194307, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sync Scene Time",
		"Set the active scene and time based on the current scene strip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_workspace_sync_scene_time_update, 33554432, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WorkSpace_use_scene_time_sync_get, WorkSpace_use_scene_time_sync_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_WorkSpace;
	srna->cont.properties = {&rna_WorkSpace_screens, &rna_WorkSpace_use_scene_time_sync};
	srna->identifier = "WorkSpace";
	srna->flag = 519;
	srna->name = "Workspace";
	srna->description = "Workspace data-block, defining the working environment for the user";
	srna->translation_context = "*";
	srna->icon = 111;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	rna_WorkSpace_status_text_set_internal_text_ = {
		{nullptr, 	nullptr,
		-1, "text", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Text",
		"New string for the status bar, None clears the text",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WorkSpace_status_text_set_internal_text, &rna_WorkSpace_status_text_set_internal_text};
		func->identifier = "status_text_set_internal";
		func->flag = 9;
		func->description = "Set the status bar text, typically key shortcuts for modal operators";
		func->call = WorkSpace_status_text_set_internal_call;
		rna_WorkSpace_status_text_set_internal_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* WorkSpace UI Tags */
static CollectionPropertyRNA rna_wmOwnerIDs_rna_properties_;
PropertyRNA &rna_wmOwnerIDs_rna_properties = reinterpret_cast<PropertyRNA &>(rna_wmOwnerIDs_rna_properties_);

static PointerPropertyRNA rna_wmOwnerIDs_rna_type_;
PropertyRNA &rna_wmOwnerIDs_rna_type = reinterpret_cast<PropertyRNA &>(rna_wmOwnerIDs_rna_type_);

static StringPropertyRNA rna_wmOwnerIDs_new_name_;
PropertyRNA &rna_wmOwnerIDs_new_name = reinterpret_cast<PropertyRNA &>(rna_wmOwnerIDs_new_name_);

static PointerPropertyRNA rna_wmOwnerIDs_new_owner_id_;
PropertyRNA &rna_wmOwnerIDs_new_owner_id = reinterpret_cast<PropertyRNA &>(rna_wmOwnerIDs_new_owner_id_);

FunctionRNA *rna_wmOwnerIDs_new_func;
static PointerPropertyRNA rna_wmOwnerIDs_remove_owner_id_;
PropertyRNA &rna_wmOwnerIDs_remove_owner_id = reinterpret_cast<PropertyRNA &>(rna_wmOwnerIDs_remove_owner_id_);

FunctionRNA *rna_wmOwnerIDs_remove_func;
FunctionRNA *rna_wmOwnerIDs_clear_func;
StructRNA *RNA_wmOwnerIDs;
void register_struct_wmOwnerIDs(BlenderRNA &brna)
{
	rna_wmOwnerIDs_rna_properties_ = {
		{&rna_wmOwnerIDs_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		wmOwnerIDs_rna_properties_begin, wmOwnerIDs_rna_properties_next, wmOwnerIDs_rna_properties_end, wmOwnerIDs_rna_properties_get, nullptr, nullptr, wmOwnerIDs_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_wmOwnerIDs_rna_type_ = {
		{nullptr, 	&rna_wmOwnerIDs_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		wmOwnerIDs_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_wmOwnerIDs;
	srna->cont.properties = {&rna_wmOwnerIDs_rna_properties, &rna_wmOwnerIDs_rna_type};
	srna->identifier = "wmOwnerIDs";
	srna->flag = 516;
	srna->name = "WorkSpace UI Tags";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_wmOwnerIDs_rna_properties;
	{
	rna_wmOwnerIDs_new_name_ = {
		{&rna_wmOwnerIDs_new_owner_id, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the tag",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_wmOwnerIDs_new_owner_id_ = {
		{nullptr, 	&rna_wmOwnerIDs_new_name,
		-1, "owner_id", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_wmOwnerID
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_wmOwnerIDs_new_name, &rna_wmOwnerIDs_new_owner_id};
		func->identifier = "new";
		func->description = "Add ui tag";
		func->call = wmOwnerIDs_new_call;
		func->c_ret = &rna_wmOwnerIDs_new_owner_id;
		rna_wmOwnerIDs_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_wmOwnerIDs_remove_owner_id_ = {
		{nullptr, 	nullptr,
		-1, "owner_id", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Tag to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_wmOwnerID
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_wmOwnerIDs_remove_owner_id, &rna_wmOwnerIDs_remove_owner_id};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove ui tag";
		func->call = wmOwnerIDs_remove_call;
		rna_wmOwnerIDs_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->description = "Remove all tags";
		func->call = wmOwnerIDs_clear_call;
		rna_wmOwnerIDs_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* WorkSpace UI Tags */
static CollectionPropertyRNA rna_wmTools_rna_properties_;
PropertyRNA &rna_wmTools_rna_properties = reinterpret_cast<PropertyRNA &>(rna_wmTools_rna_properties_);

static PointerPropertyRNA rna_wmTools_rna_type_;
PropertyRNA &rna_wmTools_rna_type = reinterpret_cast<PropertyRNA &>(rna_wmTools_rna_type_);

static EnumPropertyRNA rna_wmTools_from_space_view3d_mode_mode_;
PropertyRNA &rna_wmTools_from_space_view3d_mode_mode = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_view3d_mode_mode_);

static BoolPropertyRNA rna_wmTools_from_space_view3d_mode_create_;
PropertyRNA &rna_wmTools_from_space_view3d_mode_create = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_view3d_mode_create_);

static PointerPropertyRNA rna_wmTools_from_space_view3d_mode_result_;
PropertyRNA &rna_wmTools_from_space_view3d_mode_result = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_view3d_mode_result_);

FunctionRNA *rna_wmTools_from_space_view3d_mode_func;
static EnumPropertyRNA rna_wmTools_from_space_image_mode_mode_;
PropertyRNA &rna_wmTools_from_space_image_mode_mode = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_image_mode_mode_);

static BoolPropertyRNA rna_wmTools_from_space_image_mode_create_;
PropertyRNA &rna_wmTools_from_space_image_mode_create = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_image_mode_create_);

static PointerPropertyRNA rna_wmTools_from_space_image_mode_result_;
PropertyRNA &rna_wmTools_from_space_image_mode_result = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_image_mode_result_);

FunctionRNA *rna_wmTools_from_space_image_mode_func;
static BoolPropertyRNA rna_wmTools_from_space_node_create_;
PropertyRNA &rna_wmTools_from_space_node_create = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_node_create_);

static PointerPropertyRNA rna_wmTools_from_space_node_result_;
PropertyRNA &rna_wmTools_from_space_node_result = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_node_result_);

FunctionRNA *rna_wmTools_from_space_node_func;
static EnumPropertyRNA rna_wmTools_from_space_sequencer_mode_;
PropertyRNA &rna_wmTools_from_space_sequencer_mode = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_sequencer_mode_);

static BoolPropertyRNA rna_wmTools_from_space_sequencer_create_;
PropertyRNA &rna_wmTools_from_space_sequencer_create = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_sequencer_create_);

static PointerPropertyRNA rna_wmTools_from_space_sequencer_result_;
PropertyRNA &rna_wmTools_from_space_sequencer_result = reinterpret_cast<PropertyRNA &>(rna_wmTools_from_space_sequencer_result_);

FunctionRNA *rna_wmTools_from_space_sequencer_func;
StructRNA *RNA_wmTools;
void register_struct_wmTools(BlenderRNA &brna)
{
	rna_wmTools_rna_properties_ = {
		{&rna_wmTools_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		wmTools_rna_properties_begin, wmTools_rna_properties_next, wmTools_rna_properties_end, wmTools_rna_properties_get, nullptr, nullptr, wmTools_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_wmTools_rna_type_ = {
		{nullptr, 	&rna_wmTools_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		wmTools_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_wmTools;
	srna->cont.properties = {&rna_wmTools_rna_properties, &rna_wmTools_rna_type};
	srna->identifier = "wmTools";
	srna->flag = 516;
	srna->name = "WorkSpace UI Tags";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_wmTools_rna_properties;
	{
	rna_wmTools_from_space_view3d_mode_mode_ = {
		{&rna_wmTools_from_space_view3d_mode_create, 	nullptr,
		-1, "mode", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Object mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_context_mode_items, 27, 0
	};
	rna_wmTools_from_space_view3d_mode_create_ = {
		{&rna_wmTools_from_space_view3d_mode_result, 	&rna_wmTools_from_space_view3d_mode_mode,
		-1, "create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Create",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_wmTools_from_space_view3d_mode_result_ = {
		{nullptr, 	&rna_wmTools_from_space_view3d_mode_create,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_WorkSpaceTool
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_wmTools_from_space_view3d_mode_mode, &rna_wmTools_from_space_view3d_mode_result};
		func->identifier = "from_space_view3d_mode";
		func->description = "";
		func->call = wmTools_from_space_view3d_mode_call;
		func->c_ret = &rna_wmTools_from_space_view3d_mode_result;
		rna_wmTools_from_space_view3d_mode_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_wmTools_from_space_image_mode_mode_ = {
		{&rna_wmTools_from_space_image_mode_create, 	nullptr,
		-1, "mode", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Image space mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_image_mode_all_items, 4, 0
	};
	rna_wmTools_from_space_image_mode_create_ = {
		{&rna_wmTools_from_space_image_mode_result, 	&rna_wmTools_from_space_image_mode_mode,
		-1, "create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Create",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_wmTools_from_space_image_mode_result_ = {
		{nullptr, 	&rna_wmTools_from_space_image_mode_create,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_WorkSpaceTool
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_wmTools_from_space_image_mode_mode, &rna_wmTools_from_space_image_mode_result};
		func->identifier = "from_space_image_mode";
		func->description = "";
		func->call = wmTools_from_space_image_mode_call;
		func->c_ret = &rna_wmTools_from_space_image_mode_result;
		rna_wmTools_from_space_image_mode_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_wmTools_from_space_node_create_ = {
		{&rna_wmTools_from_space_node_result, 	nullptr,
		-1, "create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Create",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_wmTools_from_space_node_result_ = {
		{nullptr, 	&rna_wmTools_from_space_node_create,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_WorkSpaceTool
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_wmTools_from_space_node_create, &rna_wmTools_from_space_node_result};
		func->identifier = "from_space_node";
		func->description = "";
		func->call = wmTools_from_space_node_call;
		func->c_ret = &rna_wmTools_from_space_node_result;
		rna_wmTools_from_space_node_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_wmTools_from_space_sequencer_mode_ = {
		{&rna_wmTools_from_space_sequencer_create, 	nullptr,
		-1, "mode", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Sequencer view type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_sequencer_view_type_items, 3, 1
	};
	rna_wmTools_from_space_sequencer_create_ = {
		{&rna_wmTools_from_space_sequencer_result, 	&rna_wmTools_from_space_sequencer_mode,
		-1, "create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Create",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_wmTools_from_space_sequencer_result_ = {
		{nullptr, 	&rna_wmTools_from_space_sequencer_create,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_WorkSpaceTool
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_wmTools_from_space_sequencer_mode, &rna_wmTools_from_space_sequencer_result};
		func->identifier = "from_space_sequencer";
		func->description = "";
		func->call = wmTools_from_space_sequencer_call;
		func->c_ret = &rna_wmTools_from_space_sequencer_result;
		rna_wmTools_from_space_sequencer_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
