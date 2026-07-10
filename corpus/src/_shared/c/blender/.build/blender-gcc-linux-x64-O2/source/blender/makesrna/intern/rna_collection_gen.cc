
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

#include "rna_collection.cc"

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

extern PropertyRNA &rna_Collection_instance_offset;
extern PropertyRNA &rna_Collection_objects;
extern PropertyRNA &rna_Collection_all_objects;
extern PropertyRNA &rna_Collection_children;
extern PropertyRNA &rna_Collection_collection_objects;
extern PropertyRNA &rna_Collection_collection_children;
extern PropertyRNA &rna_Collection_exporters;
extern PropertyRNA &rna_Collection_active_exporter_index;
extern PropertyRNA &rna_Collection_hide_select;
extern PropertyRNA &rna_Collection_hide_viewport;
extern PropertyRNA &rna_Collection_hide_render;
extern PropertyRNA &rna_Collection_lineart_usage;
extern PropertyRNA &rna_Collection_lineart_use_intersection_mask;
extern PropertyRNA &rna_Collection_lineart_intersection_mask;
extern PropertyRNA &rna_Collection_lineart_intersection_priority;
extern PropertyRNA &rna_Collection_use_lineart_intersection_priority;
extern PropertyRNA &rna_Collection_color_tag;

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



extern PropertyRNA &rna_CollectionObjects_rna_properties;
extern PropertyRNA &rna_CollectionObjects_rna_type;

extern FunctionRNA *rna_CollectionObjects_link_func;
extern PropertyRNA &rna_CollectionObjects_link_object;

extern FunctionRNA *rna_CollectionObjects_unlink_func;
extern PropertyRNA &rna_CollectionObjects_unlink_object;



extern PropertyRNA &rna_CollectionChildren_rna_properties;
extern PropertyRNA &rna_CollectionChildren_rna_type;

extern FunctionRNA *rna_CollectionChildren_link_func;
extern PropertyRNA &rna_CollectionChildren_link_child;

extern FunctionRNA *rna_CollectionChildren_unlink_func;
extern PropertyRNA &rna_CollectionChildren_unlink_child;



extern PropertyRNA &rna_CollectionExports_rna_properties;
extern PropertyRNA &rna_CollectionExports_rna_type;

extern FunctionRNA *rna_CollectionExports_new_func;
extern PropertyRNA &rna_CollectionExports_new_type;
extern PropertyRNA &rna_CollectionExports_new_name;
extern PropertyRNA &rna_CollectionExports_new_exporter;

extern FunctionRNA *rna_CollectionExports_remove_func;
extern PropertyRNA &rna_CollectionExports_remove_exporter;

extern FunctionRNA *rna_CollectionExports_move_func;
extern PropertyRNA &rna_CollectionExports_move_from_index;
extern PropertyRNA &rna_CollectionExports_move_to_index;



extern PropertyRNA &rna_CollectionLightLinking_rna_properties;
extern PropertyRNA &rna_CollectionLightLinking_rna_type;
extern PropertyRNA &rna_CollectionLightLinking_link_state;


extern PropertyRNA &rna_CollectionObject_rna_properties;
extern PropertyRNA &rna_CollectionObject_rna_type;
extern PropertyRNA &rna_CollectionObject_light_linking;


extern PropertyRNA &rna_CollectionChild_rna_properties;
extern PropertyRNA &rna_CollectionChild_rna_type;
extern PropertyRNA &rna_CollectionChild_light_linking;


extern PropertyRNA &rna_CollectionImport_rna_properties;
extern PropertyRNA &rna_CollectionImport_rna_type;
extern PropertyRNA &rna_CollectionImport_is_open;
extern PropertyRNA &rna_CollectionImport_import_properties;


extern PropertyRNA &rna_CollectionExport_rna_properties;
extern PropertyRNA &rna_CollectionExport_rna_type;
extern PropertyRNA &rna_CollectionExport_name;
extern PropertyRNA &rna_CollectionExport_is_open;
extern PropertyRNA &rna_CollectionExport_export_properties;
extern PropertyRNA &rna_CollectionExport_filepath;

void Collection_instance_offset_get(PointerRNA *ptr, float values[3])
{
    Collection *data = (Collection *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->instance_offset)[i]);
    }
}

void Collection_instance_offset_set(PointerRNA *ptr, const float values[3])
{
    Collection *data = (Collection *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->instance_offset)[i] = values[i];
    }
}

static PointerRNA Collection_objects_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Collection_objects_get;
    return fn(iter);
}

void Collection_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Collection_objects;

    PropCollectionBeginFunc fn = rna_Collection_objects_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Collection_objects_get(iter);
    }
}

void Collection_objects_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Collection_objects_get(iter);
    }
}

void Collection_objects_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Collection_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Collection_objects_begin(&iter, ptr);

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
        if (found) { *r_ptr = Collection_objects_get(&iter); }
    }

    Collection_objects_end(&iter);

    return found;
}

static PointerRNA Collection_all_objects_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Collection_all_objects_get;
    return fn(iter);
}

void Collection_all_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Collection_all_objects;

    PropCollectionBeginFunc fn = rna_Collection_all_objects_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Collection_all_objects_get(iter);
    }
}

void Collection_all_objects_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Collection_all_objects_get(iter);
    }
}

void Collection_all_objects_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Collection_all_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Collection_all_objects_begin(&iter, ptr);

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
        if (found) { *r_ptr = Collection_all_objects_get(&iter); }
    }

    Collection_all_objects_end(&iter);

    return found;
}

static PointerRNA Collection_children_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Collection_children_get;
    return fn(iter);
}

void Collection_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Collection_children;

    PropCollectionBeginFunc fn = rna_Collection_children_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Collection_children_get(iter);
    }
}

void Collection_children_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Collection_children_get(iter);
    }
}

void Collection_children_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Collection_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Collection_children_begin(&iter, ptr);

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
        if (found) { *r_ptr = Collection_children_get(&iter); }
    }

    Collection_children_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool Collection_children_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Collection_children_begin(&iter, ptr);

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
        Collection_children_next(&iter);
    }
    Collection_children_end(&iter);

    return found;
}

static PointerRNA Collection_collection_objects_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CollectionObject, rna_iterator_listbase_get(iter));
}

void Collection_collection_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Collection_collection_objects;

    rna_iterator_listbase_begin(iter, ptr, &data->gobject, nullptr);

    if (iter->valid) {
        iter->ptr = Collection_collection_objects_get(iter);
    }
}

void Collection_collection_objects_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Collection_collection_objects_get(iter);
    }
}

void Collection_collection_objects_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Collection_collection_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Collection_collection_objects_begin(&iter, ptr);

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
        if (found) { *r_ptr = Collection_collection_objects_get(&iter); }
    }

    Collection_collection_objects_end(&iter);

    return found;
}

static PointerRNA Collection_collection_children_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CollectionChild, rna_iterator_listbase_get(iter));
}

void Collection_collection_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Collection_collection_children;

    rna_iterator_listbase_begin(iter, ptr, &data->children, nullptr);

    if (iter->valid) {
        iter->ptr = Collection_collection_children_get(iter);
    }
}

void Collection_collection_children_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Collection_collection_children_get(iter);
    }
}

void Collection_collection_children_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Collection_collection_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Collection_collection_children_begin(&iter, ptr);

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
        if (found) { *r_ptr = Collection_collection_children_get(&iter); }
    }

    Collection_collection_children_end(&iter);

    return found;
}

static PointerRNA Collection_exporters_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CollectionExport, rna_iterator_listbase_get(iter));
}

void Collection_exporters_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Collection_exporters;

    rna_iterator_listbase_begin(iter, ptr, &data->exporters, nullptr);

    if (iter->valid) {
        iter->ptr = Collection_exporters_get(iter);
    }
}

void Collection_exporters_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Collection_exporters_get(iter);
    }
}

void Collection_exporters_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Collection_exporters_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Collection_exporters_begin(&iter, ptr);

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
        if (found) { *r_ptr = Collection_exporters_get(&iter); }
    }

    Collection_exporters_end(&iter);

    return found;
}

int CollectionExport_name_length(PointerRNA *);
void CollectionExport_name_get(PointerRNA *, char *);

bool Collection_exporters_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Collection_exporters_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = CollectionExport_name_length(&iter.ptr);
            if (namelen < 1024) {
                CollectionExport_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                CollectionExport_name_get(&iter.ptr, name);
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
        Collection_exporters_next(&iter);
    }
    Collection_exporters_end(&iter);

    return found;
}

int Collection_active_exporter_index_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (int)(data->active_exporter_index);
}

void Collection_active_exporter_index_set(PointerRNA *ptr, int value)
{
    Collection *data = (Collection *)(ptr->data);
    data->active_exporter_index = (std::remove_reference_t<decltype(data->active_exporter_index)>)std::clamp(value, 0, INT_MAX);
}

bool Collection_hide_select_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void Collection_hide_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Collection_hide_select_set;
    fn(ptr, value);
}

bool Collection_hide_viewport_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void Collection_hide_viewport_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Collection_hide_viewport_set;
    fn(ptr, value);
}

bool Collection_hide_render_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void Collection_hide_render_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Collection_hide_render_set;
    fn(ptr, value);
}

int Collection_lineart_usage_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (int)(data->lineart_usage);
}

void Collection_lineart_usage_set(PointerRNA *ptr, int value)
{
    Collection *data = (Collection *)(ptr->data);
    data->lineart_usage = (std::remove_reference_t<decltype(data->lineart_usage)>)value;
}

bool Collection_lineart_use_intersection_mask_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return ((uint64_t(data->lineart_flags) & 1) != 0);
}

void Collection_lineart_use_intersection_mask_set(PointerRNA *ptr, bool value)
{
    Collection *data = (Collection *)(ptr->data);
    if (value) { data->lineart_flags = std::remove_reference_t<decltype(data->lineart_flags)>(uint64_t(data->lineart_flags) | 1); }
    else { data->lineart_flags = std::remove_reference_t<decltype(data->lineart_flags)>(uint64_t(data->lineart_flags) & ~uint64_t(1)); }
}

void Collection_lineart_intersection_mask_get(PointerRNA *ptr, bool values[8])
{
    Collection *data = (Collection *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 8; i++) {
        values[i] = ((uint64_t(data->lineart_intersection_mask) & (uint64_t(1) << i)) != 0);
    }
}

void Collection_lineart_intersection_mask_set(PointerRNA *ptr, const bool values[8])
{
    Collection *data = (Collection *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 8; i++) {
        if (values[i]) { data->lineart_intersection_mask = std::remove_reference_t<decltype(data->lineart_intersection_mask)>(uint64_t(data->lineart_intersection_mask) | (uint64_t(1) << i)); }
        else { data->lineart_intersection_mask = std::remove_reference_t<decltype(data->lineart_intersection_mask)>(uint64_t(data->lineart_intersection_mask) & ~(uint64_t(1) << i)); }
    }
}

int Collection_lineart_intersection_priority_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (int)(data->lineart_intersection_priority);
}

void Collection_lineart_intersection_priority_set(PointerRNA *ptr, int value)
{
    Collection *data = (Collection *)(ptr->data);
    data->lineart_intersection_priority = (std::remove_reference_t<decltype(data->lineart_intersection_priority)>)std::clamp(value, 0, 255);
}

bool Collection_use_lineart_intersection_priority_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return ((uint64_t(data->lineart_flags) & 2) != 0);
}

void Collection_use_lineart_intersection_priority_set(PointerRNA *ptr, bool value)
{
    Collection *data = (Collection *)(ptr->data);
    if (value) { data->lineart_flags = std::remove_reference_t<decltype(data->lineart_flags)>(uint64_t(data->lineart_flags) | 2); }
    else { data->lineart_flags = std::remove_reference_t<decltype(data->lineart_flags)>(uint64_t(data->lineart_flags) & ~uint64_t(2)); }
}

int Collection_color_tag_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Collection_color_tag_get;
    return fn(ptr);
}

void Collection_color_tag_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Collection_color_tag_set;
    fn(ptr, value);
}

static PointerRNA CollectionObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CollectionObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CollectionObjects_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionObjects_rna_properties_get(iter);
    }
}

void CollectionObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CollectionObjects_rna_properties_get(iter);
    }
}

void CollectionObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CollectionObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CollectionObjects_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA CollectionChildren_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CollectionChildren_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CollectionChildren_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionChildren_rna_properties_get(iter);
    }
}

void CollectionChildren_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CollectionChildren_rna_properties_get(iter);
    }
}

void CollectionChildren_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CollectionChildren_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CollectionChildren_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA CollectionExports_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CollectionExports_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CollectionExports_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionExports_rna_properties_get(iter);
    }
}

void CollectionExports_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CollectionExports_rna_properties_get(iter);
    }
}

void CollectionExports_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CollectionExports_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CollectionExports_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA CollectionLightLinking_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CollectionLightLinking_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CollectionLightLinking_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionLightLinking_rna_properties_get(iter);
    }
}

void CollectionLightLinking_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CollectionLightLinking_rna_properties_get(iter);
    }
}

void CollectionLightLinking_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CollectionLightLinking_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CollectionLightLinking_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int CollectionLightLinking_link_state_get(PointerRNA *ptr)
{
    CollectionLightLinking *data = (CollectionLightLinking *)(ptr->data);
    return (int)(data->link_state);
}

void CollectionLightLinking_link_state_set(PointerRNA *ptr, int value)
{
    CollectionLightLinking *data = (CollectionLightLinking *)(ptr->data);
    data->link_state = (std::remove_reference_t<decltype(data->link_state)>)value;
}

static PointerRNA CollectionObject_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CollectionObject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CollectionObject_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionObject_rna_properties_get(iter);
    }
}

void CollectionObject_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CollectionObject_rna_properties_get(iter);
    }
}

void CollectionObject_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CollectionObject_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CollectionObject_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA CollectionObject_light_linking_get(PointerRNA *ptr)
{
    CollectionObject *data = (CollectionObject *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CollectionLightLinking, &data->light_linking);
}

static PointerRNA CollectionChild_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CollectionChild_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CollectionChild_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionChild_rna_properties_get(iter);
    }
}

void CollectionChild_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CollectionChild_rna_properties_get(iter);
    }
}

void CollectionChild_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CollectionChild_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CollectionChild_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA CollectionChild_light_linking_get(PointerRNA *ptr)
{
    CollectionChild *data = (CollectionChild *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CollectionLightLinking, &data->light_linking);
}

static PointerRNA CollectionImport_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CollectionImport_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CollectionImport_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionImport_rna_properties_get(iter);
    }
}

void CollectionImport_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CollectionImport_rna_properties_get(iter);
    }
}

void CollectionImport_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CollectionImport_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CollectionImport_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool CollectionImport_is_open_get(PointerRNA *ptr)
{
    CollectionImport *data = (CollectionImport *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CollectionImport_is_open_set(PointerRNA *ptr, bool value)
{
    CollectionImport *data = (CollectionImport *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

PointerRNA CollectionImport_import_properties_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_CollectionImport_import_properties_get;
    return fn(ptr);
}

static PointerRNA CollectionExport_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CollectionExport_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CollectionExport_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionExport_rna_properties_get(iter);
    }
}

void CollectionExport_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CollectionExport_rna_properties_get(iter);
    }
}

void CollectionExport_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CollectionExport_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CollectionExport_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void CollectionExport_name_get(PointerRNA *ptr, char *value)
{
    CollectionExport *data = (CollectionExport *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int CollectionExport_name_length(PointerRNA *ptr)
{
    CollectionExport *data = (CollectionExport *)(ptr->data);
    return strlen(data->name);
}

void CollectionExport_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_CollectionExport_name_set;
    fn(ptr, value);
}

bool CollectionExport_is_open_get(PointerRNA *ptr)
{
    CollectionExport *data = (CollectionExport *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CollectionExport_is_open_set(PointerRNA *ptr, bool value)
{
    CollectionExport *data = (CollectionExport *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

PointerRNA CollectionExport_export_properties_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_CollectionExport_export_properties_get;
    return fn(ptr);
}

void CollectionExport_filepath_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_CollectionExport_filepath_get;
    fn(ptr, value);
}

int CollectionExport_filepath_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_CollectionExport_filepath_length;
    return fn(ptr);
}

void CollectionExport_filepath_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_CollectionExport_filepath_set;
    fn(ptr, value);
}


void CollectionObjects_link_func(Collection *_self, Main *bmain, ReportList *reports, Object *object)
{
	rna_Collection_objects_link(_self, bmain, reports, object);
}

static void CollectionObjects_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Collection *_self;
	Object *object;
	char *_data;
	
	_self = (Collection *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((Object **)_data);
	
	rna_Collection_objects_link(_self, CTX_data_main(C), reports, object);
}

void CollectionObjects_unlink_func(Collection *_self, Main *bmain, ReportList *reports, Object *object)
{
	rna_Collection_objects_unlink(_self, bmain, reports, object);
}

static void CollectionObjects_unlink_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Collection *_self;
	Object *object;
	char *_data;
	
	_self = (Collection *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((Object **)_data);
	
	rna_Collection_objects_unlink(_self, CTX_data_main(C), reports, object);
}

/* Repeated prototypes to detect errors */

void rna_Collection_objects_link(Collection *_self, Main *bmain, ReportList *reports, Object *object);
void rna_Collection_objects_unlink(Collection *_self, Main *bmain, ReportList *reports, Object *object);

void CollectionChildren_link_func(Collection *_self, Main *bmain, ReportList *reports, Collection *child)
{
	rna_Collection_children_link(_self, bmain, reports, child);
}

static void CollectionChildren_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Collection *_self;
	Collection *child;
	char *_data;
	
	_self = (Collection *)_ptr->data;
	_data = (char *)_parms->data;
	child = *((Collection **)_data);
	
	rna_Collection_children_link(_self, CTX_data_main(C), reports, child);
}

void CollectionChildren_unlink_func(Collection *_self, Main *bmain, ReportList *reports, Collection *child)
{
	rna_Collection_children_unlink(_self, bmain, reports, child);
}

static void CollectionChildren_unlink_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Collection *_self;
	Collection *child;
	char *_data;
	
	_self = (Collection *)_ptr->data;
	_data = (char *)_parms->data;
	child = *((Collection **)_data);
	
	rna_Collection_children_unlink(_self, CTX_data_main(C), reports, child);
}

/* Repeated prototypes to detect errors */

void rna_Collection_children_link(Collection *_self, Main *bmain, ReportList *reports, Collection *child);
void rna_Collection_children_unlink(Collection *_self, Main *bmain, ReportList *reports, Collection *child);

CollectionExport *CollectionExports_new_func(Collection *_self, ReportList *reports, int type, const char * name)
{
	return rna_CollectionExport_new(_self, reports, type, name);
}

static void CollectionExports_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Collection *_self;
	int type;
	const char * name;
	CollectionExport *exporter;
	char *_data, *_retdata;
	
	_self = (Collection *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	exporter = rna_CollectionExport_new(_self, reports, type, name);
	*((CollectionExport **)_retdata) = exporter;
}

void CollectionExports_remove_func(Collection *_self, CollectionExport *exporter)
{
	rna_CollectionExport_remove(_self, exporter);
}

static void CollectionExports_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Collection *_self;
	CollectionExport *exporter;
	char *_data;
	
	_self = (Collection *)_ptr->data;
	_data = (char *)_parms->data;
	exporter = *((CollectionExport **)_data);
	
	rna_CollectionExport_remove(_self, exporter);
}

void CollectionExports_move_func(Collection *_self, ReportList *reports, int from_index, int to_index)
{
	rna_CollectionExport_move(_self, reports, from_index, to_index);
}

static void CollectionExports_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Collection *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_self = (Collection *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_CollectionExport_move(_self, reports, from_index, to_index);
}

/* Repeated prototypes to detect errors */

CollectionExport *rna_CollectionExport_new(Collection *_self, ReportList *reports, int type, const char * name);
void rna_CollectionExport_remove(Collection *_self, CollectionExport *exporter);
void rna_CollectionExport_move(Collection *_self, ReportList *reports, int from_index, int to_index);






/* Collection */
static FloatPropertyRNA rna_Collection_instance_offset_;
PropertyRNA &rna_Collection_instance_offset = reinterpret_cast<PropertyRNA &>(rna_Collection_instance_offset_);

static CollectionPropertyRNA rna_Collection_objects_;
PropertyRNA &rna_Collection_objects = reinterpret_cast<PropertyRNA &>(rna_Collection_objects_);

static CollectionPropertyRNA rna_Collection_all_objects_;
PropertyRNA &rna_Collection_all_objects = reinterpret_cast<PropertyRNA &>(rna_Collection_all_objects_);

static CollectionPropertyRNA rna_Collection_children_;
PropertyRNA &rna_Collection_children = reinterpret_cast<PropertyRNA &>(rna_Collection_children_);

static CollectionPropertyRNA rna_Collection_collection_objects_;
PropertyRNA &rna_Collection_collection_objects = reinterpret_cast<PropertyRNA &>(rna_Collection_collection_objects_);

static CollectionPropertyRNA rna_Collection_collection_children_;
PropertyRNA &rna_Collection_collection_children = reinterpret_cast<PropertyRNA &>(rna_Collection_collection_children_);

static CollectionPropertyRNA rna_Collection_exporters_;
PropertyRNA &rna_Collection_exporters = reinterpret_cast<PropertyRNA &>(rna_Collection_exporters_);

static IntPropertyRNA rna_Collection_active_exporter_index_;
PropertyRNA &rna_Collection_active_exporter_index = reinterpret_cast<PropertyRNA &>(rna_Collection_active_exporter_index_);

static BoolPropertyRNA rna_Collection_hide_select_;
PropertyRNA &rna_Collection_hide_select = reinterpret_cast<PropertyRNA &>(rna_Collection_hide_select_);

static BoolPropertyRNA rna_Collection_hide_viewport_;
PropertyRNA &rna_Collection_hide_viewport = reinterpret_cast<PropertyRNA &>(rna_Collection_hide_viewport_);

static BoolPropertyRNA rna_Collection_hide_render_;
PropertyRNA &rna_Collection_hide_render = reinterpret_cast<PropertyRNA &>(rna_Collection_hide_render_);

static EnumPropertyRNA rna_Collection_lineart_usage_;
PropertyRNA &rna_Collection_lineart_usage = reinterpret_cast<PropertyRNA &>(rna_Collection_lineart_usage_);

static BoolPropertyRNA rna_Collection_lineart_use_intersection_mask_;
PropertyRNA &rna_Collection_lineart_use_intersection_mask = reinterpret_cast<PropertyRNA &>(rna_Collection_lineart_use_intersection_mask_);

static BoolPropertyRNA rna_Collection_lineart_intersection_mask_;
PropertyRNA &rna_Collection_lineart_intersection_mask = reinterpret_cast<PropertyRNA &>(rna_Collection_lineart_intersection_mask_);

static IntPropertyRNA rna_Collection_lineart_intersection_priority_;
PropertyRNA &rna_Collection_lineart_intersection_priority = reinterpret_cast<PropertyRNA &>(rna_Collection_lineart_intersection_priority_);

static BoolPropertyRNA rna_Collection_use_lineart_intersection_priority_;
PropertyRNA &rna_Collection_use_lineart_intersection_priority = reinterpret_cast<PropertyRNA &>(rna_Collection_use_lineart_intersection_priority_);

static EnumPropertyRNA rna_Collection_color_tag_;
PropertyRNA &rna_Collection_color_tag = reinterpret_cast<PropertyRNA &>(rna_Collection_color_tag_);

StructRNA *RNA_Collection;
void register_struct_Collection(BlenderRNA &brna)
{
	static float rna_Collection_instance_offset_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Collection_instance_offset_ = {
		{&rna_Collection_objects, 	nullptr,
		-1, "instance_offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Instance Offset",
		"Offset from the origin to use when instancing",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Collection_instance_offset_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Collection, instance_offset), RawPropertyType(5), nullptr},
		nullptr, nullptr, Collection_instance_offset_get, Collection_instance_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, rna_Collection_instance_offset_default
	};

	rna_Collection_objects_ = {
		{&rna_Collection_all_objects, 	&rna_Collection_instance_offset,
		-1, "objects", 128, 1, 0, 0, 0, PropertyPathTemplateType(0), "Objects",
		"Objects that are directly in this collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Collection_objects_override_apply,
			0, PROP_RAW_UNSET, RNA_CollectionObjects},
		Collection_objects_begin, Collection_objects_next, Collection_objects_end, Collection_objects_get, nullptr, Collection_objects_lookup_int, nullptr, nullptr, RNA_Object
	};

	rna_Collection_all_objects_ = {
		{&rna_Collection_children, 	&rna_Collection_objects,
		-1, "all_objects", 128, 2, 0, 0, 0, PropertyPathTemplateType(0), "All Objects",
		"Objects that are in this collection and its child collections",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Collection_all_objects_begin, Collection_all_objects_next, Collection_all_objects_end, Collection_all_objects_get, nullptr, Collection_all_objects_lookup_int, nullptr, nullptr, RNA_Object
	};

	rna_Collection_children_ = {
		{&rna_Collection_collection_objects, 	&rna_Collection_all_objects,
		-1, "children", 128, 1, 0, 0, 0, PropertyPathTemplateType(0), "Children",
		"Collections that are immediate children of this collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Collection_children_override_apply,
			0, PROP_RAW_UNSET, RNA_CollectionChildren},
		Collection_children_begin, Collection_children_next, Collection_children_end, Collection_children_get, nullptr, Collection_children_lookup_int, Collection_children_lookup_string, nullptr, RNA_Collection
	};

	rna_Collection_collection_objects_ = {
		{&rna_Collection_collection_children, 	&rna_Collection_children,
		-1, "collection_objects", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Collection Objects",
		"Objects of the collection with their parent-collection-specific settings",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Collection_collection_objects_begin, Collection_collection_objects_next, Collection_collection_objects_end, Collection_collection_objects_get, nullptr, Collection_collection_objects_lookup_int, nullptr, nullptr, RNA_CollectionObject
	};

	rna_Collection_collection_children_ = {
		{&rna_Collection_exporters, 	&rna_Collection_collection_objects,
		-1, "collection_children", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Collection Children",
		"Children collections with their parent-collection-specific settings",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Collection_collection_children_begin, Collection_collection_children_next, Collection_collection_children_end, Collection_collection_children_get, nullptr, Collection_collection_children_lookup_int, nullptr, nullptr, RNA_CollectionChild
	};

	rna_Collection_exporters_ = {
		{&rna_Collection_active_exporter_index, 	&rna_Collection_collection_children,
		-1, "exporters", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Collection Export Handlers",
		"Export Handlers configured for the collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_CollectionExports},
		Collection_exporters_begin, Collection_exporters_next, Collection_exporters_end, Collection_exporters_get, nullptr, Collection_exporters_lookup_int, Collection_exporters_lookup_string, nullptr, RNA_CollectionExport
	};

	rna_Collection_active_exporter_index_ = {
		{&rna_Collection_hide_select, 	&rna_Collection_exporters,
		-1, "active_exporter_index", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Active Collection Exporter Index",
		"Active index in the exporters list",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Collection, active_exporter_index), RawPropertyType(0), nullptr},
		Collection_active_exporter_index_get, Collection_active_exporter_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Collection_hide_select_ = {
		{&rna_Collection_hide_viewport, 	&rna_Collection_active_exporter_index,
		-1, "hide_select", 4353, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable Selection",
		"Disable selection in viewport",
		30, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Collection_flag_update, 90505216, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Collection_hide_select_get, Collection_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Collection_hide_viewport_ = {
		{&rna_Collection_hide_render, 	&rna_Collection_hide_select,
		-1, "hide_viewport", 4353, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable in Viewports",
		"Globally disable in viewports",
		32, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Collection_flag_update, 90505216, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Collection_hide_viewport_get, Collection_hide_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Collection_hide_render_ = {
		{&rna_Collection_lineart_usage, 	&rna_Collection_hide_viewport,
		-1, "hide_render", 4353, 1, 0, 0, 0, PropertyPathTemplateType(0), "Disable in Renders",
		"Globally disable in renders",
		28, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Collection_flag_update, 90505216, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Collection_hide_render_get, Collection_hide_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Collection_lineart_usage_items[7] = {
		{0, "INCLUDE", 0, "Include", "Generate feature lines for this collection"	},
		{1, "OCCLUSION_ONLY", 0, "Occlusion Only", "Only use the collection to produce occlusion"	},
		{2, "EXCLUDE", 0, "Exclude", "Don\'t use this collection in Line Art"	},
		{4, "INTERSECTION_ONLY", 0, "Intersection Only", "Only generate intersection lines for this collection"	},
		{8, "NO_INTERSECTION", 0, "No Intersection", "Include this collection but do not generate intersection lines"	},
		{16, "FORCE_INTERSECTION", 0, "Force Intersection", "Generate intersection lines even with objects that disabled intersection"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Collection_lineart_usage_ = {
		{&rna_Collection_lineart_use_intersection_mask, 	&rna_Collection_hide_render,
		-1, "lineart_usage", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Usage",
		"How to use this collection in Line Art calculation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Collection, lineart_usage), RawPropertyType(6), nullptr},
		Collection_lineart_usage_get, Collection_lineart_usage_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Collection_lineart_usage_items, 6, 0
	};

	rna_Collection_lineart_use_intersection_mask_ = {
		{&rna_Collection_lineart_intersection_mask, 	&rna_Collection_lineart_usage,
		-1, "lineart_use_intersection_mask", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Intersection Masks",
		"Use custom intersection mask for faces in this collection",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Collection_lineart_use_intersection_mask_get, Collection_lineart_use_intersection_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static bool rna_Collection_lineart_intersection_mask_default[8] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	rna_Collection_lineart_intersection_mask_ = {
		{&rna_Collection_lineart_intersection_priority, 	&rna_Collection_lineart_use_intersection_mask,
		-1, "lineart_intersection_mask", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Masks",
		"Intersection generated by this collection will have this mask value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {8, 0, 0}, 8,
		nullptr, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Collection_lineart_intersection_mask_get, Collection_lineart_intersection_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_Collection_lineart_intersection_mask_default
	};

	rna_Collection_lineart_intersection_priority_ = {
		{&rna_Collection_use_lineart_intersection_priority, 	&rna_Collection_lineart_intersection_mask,
		-1, "lineart_intersection_priority", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Intersection Priority",
		"The intersection line will be included into the object with the higher intersection priority value",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Collection, lineart_intersection_priority), RawPropertyType(6), nullptr},
		Collection_lineart_intersection_priority_get, Collection_lineart_intersection_priority_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Collection_use_lineart_intersection_priority_ = {
		{&rna_Collection_color_tag, 	&rna_Collection_lineart_intersection_priority,
		-1, "use_lineart_intersection_priority", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Intersection Priority",
		"Assign intersection priority value for this collection",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 83886080, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Collection_use_lineart_intersection_priority_get, Collection_use_lineart_intersection_priority_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Collection_color_tag_ = {
		{nullptr, 	&rna_Collection_use_lineart_intersection_priority,
		-1, "color_tag", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Collection Color",
		"Color tag for a collection",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Collection_color_tag_update, 90505216, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Collection_color_tag_get, Collection_color_tag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_collection_color_items, 9, 0
	};

	StructRNA *srna = RNA_Collection;
	srna->cont.properties = {&rna_Collection_instance_offset, &rna_Collection_color_tag};
	srna->identifier = "Collection";
	srna->flag = 517;
	srna->name = "Collection";
	srna->description = "Collection of Object data-blocks";
	srna->translation_context = "*";
	srna->icon = 176;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Collection Objects */
static CollectionPropertyRNA rna_CollectionObjects_rna_properties_;
PropertyRNA &rna_CollectionObjects_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CollectionObjects_rna_properties_);

static PointerPropertyRNA rna_CollectionObjects_rna_type_;
PropertyRNA &rna_CollectionObjects_rna_type = reinterpret_cast<PropertyRNA &>(rna_CollectionObjects_rna_type_);

static PointerPropertyRNA rna_CollectionObjects_link_object_;
PropertyRNA &rna_CollectionObjects_link_object = reinterpret_cast<PropertyRNA &>(rna_CollectionObjects_link_object_);

FunctionRNA *rna_CollectionObjects_link_func;
static PointerPropertyRNA rna_CollectionObjects_unlink_object_;
PropertyRNA &rna_CollectionObjects_unlink_object = reinterpret_cast<PropertyRNA &>(rna_CollectionObjects_unlink_object_);

FunctionRNA *rna_CollectionObjects_unlink_func;
StructRNA *RNA_CollectionObjects;
void register_struct_CollectionObjects(BlenderRNA &brna)
{
	rna_CollectionObjects_rna_properties_ = {
		{&rna_CollectionObjects_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionObjects_rna_properties_begin, CollectionObjects_rna_properties_next, CollectionObjects_rna_properties_end, CollectionObjects_rna_properties_get, nullptr, nullptr, CollectionObjects_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CollectionObjects_rna_type_ = {
		{nullptr, 	&rna_CollectionObjects_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionObjects_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_CollectionObjects;
	srna->cont.properties = {&rna_CollectionObjects_rna_properties, &rna_CollectionObjects_rna_type};
	srna->identifier = "CollectionObjects";
	srna->flag = 516;
	srna->name = "Collection Objects";
	srna->description = "Collection of collection objects";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CollectionObjects_rna_properties;
	{
	rna_CollectionObjects_link_object_ = {
		{nullptr, 	nullptr,
		-1, "object", 8650880, 1, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Object to add",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CollectionObjects_link_object, &rna_CollectionObjects_link_object};
		func->identifier = "link";
		func->flag = 20;
		func->description = "Add this object to a collection";
		func->call = CollectionObjects_link_call;
		rna_CollectionObjects_link_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CollectionObjects_unlink_object_ = {
		{nullptr, 	nullptr,
		-1, "object", 8388736, 1, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Object to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CollectionObjects_unlink_object, &rna_CollectionObjects_unlink_object};
		func->identifier = "unlink";
		func->flag = 20;
		func->description = "Remove this object from a collection";
		func->call = CollectionObjects_unlink_call;
		rna_CollectionObjects_unlink_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Collection Children */
static CollectionPropertyRNA rna_CollectionChildren_rna_properties_;
PropertyRNA &rna_CollectionChildren_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CollectionChildren_rna_properties_);

static PointerPropertyRNA rna_CollectionChildren_rna_type_;
PropertyRNA &rna_CollectionChildren_rna_type = reinterpret_cast<PropertyRNA &>(rna_CollectionChildren_rna_type_);

static PointerPropertyRNA rna_CollectionChildren_link_child_;
PropertyRNA &rna_CollectionChildren_link_child = reinterpret_cast<PropertyRNA &>(rna_CollectionChildren_link_child_);

FunctionRNA *rna_CollectionChildren_link_func;
static PointerPropertyRNA rna_CollectionChildren_unlink_child_;
PropertyRNA &rna_CollectionChildren_unlink_child = reinterpret_cast<PropertyRNA &>(rna_CollectionChildren_unlink_child_);

FunctionRNA *rna_CollectionChildren_unlink_func;
StructRNA *RNA_CollectionChildren;
void register_struct_CollectionChildren(BlenderRNA &brna)
{
	rna_CollectionChildren_rna_properties_ = {
		{&rna_CollectionChildren_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionChildren_rna_properties_begin, CollectionChildren_rna_properties_next, CollectionChildren_rna_properties_end, CollectionChildren_rna_properties_get, nullptr, nullptr, CollectionChildren_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CollectionChildren_rna_type_ = {
		{nullptr, 	&rna_CollectionChildren_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionChildren_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_CollectionChildren;
	srna->cont.properties = {&rna_CollectionChildren_rna_properties, &rna_CollectionChildren_rna_type};
	srna->identifier = "CollectionChildren";
	srna->flag = 516;
	srna->name = "Collection Children";
	srna->description = "Collection of child collections";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CollectionChildren_rna_properties;
	{
	rna_CollectionChildren_link_child_ = {
		{nullptr, 	nullptr,
		-1, "child", 8650880, 1, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Collection to add",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Collection
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CollectionChildren_link_child, &rna_CollectionChildren_link_child};
		func->identifier = "link";
		func->flag = 20;
		func->description = "Add this collection as child of this collection";
		func->call = CollectionChildren_link_call;
		rna_CollectionChildren_link_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CollectionChildren_unlink_child_ = {
		{nullptr, 	nullptr,
		-1, "child", 8388736, 1, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Collection to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Collection
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CollectionChildren_unlink_child, &rna_CollectionChildren_unlink_child};
		func->identifier = "unlink";
		func->flag = 20;
		func->description = "Remove this child collection from a collection";
		func->call = CollectionChildren_unlink_call;
		rna_CollectionChildren_unlink_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Export Handlers */
static CollectionPropertyRNA rna_CollectionExports_rna_properties_;
PropertyRNA &rna_CollectionExports_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CollectionExports_rna_properties_);

static PointerPropertyRNA rna_CollectionExports_rna_type_;
PropertyRNA &rna_CollectionExports_rna_type = reinterpret_cast<PropertyRNA &>(rna_CollectionExports_rna_type_);

static EnumPropertyRNA rna_CollectionExports_new_type_;
PropertyRNA &rna_CollectionExports_new_type = reinterpret_cast<PropertyRNA &>(rna_CollectionExports_new_type_);

static StringPropertyRNA rna_CollectionExports_new_name_;
PropertyRNA &rna_CollectionExports_new_name = reinterpret_cast<PropertyRNA &>(rna_CollectionExports_new_name_);

static PointerPropertyRNA rna_CollectionExports_new_exporter_;
PropertyRNA &rna_CollectionExports_new_exporter = reinterpret_cast<PropertyRNA &>(rna_CollectionExports_new_exporter_);

FunctionRNA *rna_CollectionExports_new_func;
static PointerPropertyRNA rna_CollectionExports_remove_exporter_;
PropertyRNA &rna_CollectionExports_remove_exporter = reinterpret_cast<PropertyRNA &>(rna_CollectionExports_remove_exporter_);

FunctionRNA *rna_CollectionExports_remove_func;
static IntPropertyRNA rna_CollectionExports_move_from_index_;
PropertyRNA &rna_CollectionExports_move_from_index = reinterpret_cast<PropertyRNA &>(rna_CollectionExports_move_from_index_);

static IntPropertyRNA rna_CollectionExports_move_to_index_;
PropertyRNA &rna_CollectionExports_move_to_index = reinterpret_cast<PropertyRNA &>(rna_CollectionExports_move_to_index_);

FunctionRNA *rna_CollectionExports_move_func;
StructRNA *RNA_CollectionExports;
void register_struct_CollectionExports(BlenderRNA &brna)
{
	rna_CollectionExports_rna_properties_ = {
		{&rna_CollectionExports_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionExports_rna_properties_begin, CollectionExports_rna_properties_next, CollectionExports_rna_properties_end, CollectionExports_rna_properties_get, nullptr, nullptr, CollectionExports_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CollectionExports_rna_type_ = {
		{nullptr, 	&rna_CollectionExports_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionExports_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_CollectionExports;
	srna->cont.properties = {&rna_CollectionExports_rna_properties, &rna_CollectionExports_rna_type};
	srna->identifier = "CollectionExports";
	srna->flag = 516;
	srna->name = "Export Handlers";
	srna->description = "Collection of export handlers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CollectionExports_rna_properties;
	{
	rna_CollectionExports_new_type_ = {
		{&rna_CollectionExports_new_name, 	nullptr,
		-1, "type", 16777219, 1, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"The type of export handler to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, rna_CollectionExport_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};
	rna_CollectionExports_new_name_ = {
		{&rna_CollectionExports_new_exporter, 	&rna_CollectionExports_new_type,
		-1, "name", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the new export handler",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_CollectionExports_new_exporter_ = {
		{nullptr, 	&rna_CollectionExports_new_name,
		-1, "exporter", 8388608, 1, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created export handler",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CollectionExport
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CollectionExports_new_type, &rna_CollectionExports_new_exporter};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add an export handler to the collection";
		func->call = CollectionExports_new_call;
		func->c_ret = &rna_CollectionExports_new_exporter;
		rna_CollectionExports_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CollectionExports_remove_exporter_ = {
		{nullptr, 	nullptr,
		-1, "exporter", 8388608, 1, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Export Handler to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CollectionExport
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CollectionExports_remove_exporter, &rna_CollectionExports_remove_exporter};
		func->identifier = "remove";
		func->description = "Remove an export handler from the collection";
		func->call = CollectionExports_remove_call;
		rna_CollectionExports_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CollectionExports_move_from_index_ = {
		{&rna_CollectionExports_move_to_index, 	nullptr,
		-1, "from_index", 3, 1, 1, 0, 0, PropertyPathTemplateType(0), "From Index",
		"Index to move",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
	rna_CollectionExports_move_to_index_ = {
		{nullptr, 	&rna_CollectionExports_move_from_index,
		-1, "to_index", 3, 1, 1, 0, 0, PropertyPathTemplateType(0), "To Index",
		"Target index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CollectionExports_move_from_index, &rna_CollectionExports_move_to_index};
		func->identifier = "move";
		func->flag = 16;
		func->description = "Move an export handler";
		func->call = CollectionExports_move_call;
		rna_CollectionExports_move_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Collection Light Linking */
static CollectionPropertyRNA rna_CollectionLightLinking_rna_properties_;
PropertyRNA &rna_CollectionLightLinking_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CollectionLightLinking_rna_properties_);

static PointerPropertyRNA rna_CollectionLightLinking_rna_type_;
PropertyRNA &rna_CollectionLightLinking_rna_type = reinterpret_cast<PropertyRNA &>(rna_CollectionLightLinking_rna_type_);

static EnumPropertyRNA rna_CollectionLightLinking_link_state_;
PropertyRNA &rna_CollectionLightLinking_link_state = reinterpret_cast<PropertyRNA &>(rna_CollectionLightLinking_link_state_);

StructRNA *RNA_CollectionLightLinking;
void register_struct_CollectionLightLinking(BlenderRNA &brna)
{
	rna_CollectionLightLinking_rna_properties_ = {
		{&rna_CollectionLightLinking_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionLightLinking_rna_properties_begin, CollectionLightLinking_rna_properties_next, CollectionLightLinking_rna_properties_end, CollectionLightLinking_rna_properties_get, nullptr, nullptr, CollectionLightLinking_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CollectionLightLinking_rna_type_ = {
		{&rna_CollectionLightLinking_link_state, 	&rna_CollectionLightLinking_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionLightLinking_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_CollectionLightLinking_link_state_items[3] = {
		{0, "INCLUDE", 286, "Include", ""	},
		{1, "EXCLUDE", 126, "Exclude", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CollectionLightLinking_link_state_ = {
		{nullptr, 	&rna_CollectionLightLinking_rna_type,
		-1, "link_state", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "Link State",
		"Light or shadow receiving state of the object or collection",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CollectionLightLinking_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CollectionLightLinking, link_state), RawPropertyType(6), nullptr},
		CollectionLightLinking_link_state_get, CollectionLightLinking_link_state_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CollectionLightLinking_link_state_items, 2, 0
	};

	StructRNA *srna = RNA_CollectionLightLinking;
	srna->cont.properties = {&rna_CollectionLightLinking_rna_properties, &rna_CollectionLightLinking_link_state};
	srna->identifier = "CollectionLightLinking";
	srna->flag = 516;
	srna->name = "Collection Light Linking";
	srna->description = "Light linking settings of objects and children collections of a collection";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CollectionLightLinking_rna_properties;
	srna->path = rna_CollectionLightLinking_path;
};

/* Collection Object */
static CollectionPropertyRNA rna_CollectionObject_rna_properties_;
PropertyRNA &rna_CollectionObject_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CollectionObject_rna_properties_);

static PointerPropertyRNA rna_CollectionObject_rna_type_;
PropertyRNA &rna_CollectionObject_rna_type = reinterpret_cast<PropertyRNA &>(rna_CollectionObject_rna_type_);

static PointerPropertyRNA rna_CollectionObject_light_linking_;
PropertyRNA &rna_CollectionObject_light_linking = reinterpret_cast<PropertyRNA &>(rna_CollectionObject_light_linking_);

StructRNA *RNA_CollectionObject;
void register_struct_CollectionObject(BlenderRNA &brna)
{
	rna_CollectionObject_rna_properties_ = {
		{&rna_CollectionObject_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionObject_rna_properties_begin, CollectionObject_rna_properties_next, CollectionObject_rna_properties_end, CollectionObject_rna_properties_get, nullptr, nullptr, CollectionObject_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CollectionObject_rna_type_ = {
		{&rna_CollectionObject_light_linking, 	&rna_CollectionObject_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionObject_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CollectionObject_light_linking_ = {
		{nullptr, 	&rna_CollectionObject_rna_type,
		-1, "light_linking", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Light Linking",
		"Light linking settings of the collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionObject_light_linking_get, nullptr, nullptr, nullptr,RNA_CollectionLightLinking
	};

	StructRNA *srna = RNA_CollectionObject;
	srna->cont.properties = {&rna_CollectionObject_rna_properties, &rna_CollectionObject_light_linking};
	srna->identifier = "CollectionObject";
	srna->flag = 516;
	srna->name = "Collection Object";
	srna->description = "Object of a collection with its collection related settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CollectionObject_rna_properties;
};

/* Collection Child */
static CollectionPropertyRNA rna_CollectionChild_rna_properties_;
PropertyRNA &rna_CollectionChild_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CollectionChild_rna_properties_);

static PointerPropertyRNA rna_CollectionChild_rna_type_;
PropertyRNA &rna_CollectionChild_rna_type = reinterpret_cast<PropertyRNA &>(rna_CollectionChild_rna_type_);

static PointerPropertyRNA rna_CollectionChild_light_linking_;
PropertyRNA &rna_CollectionChild_light_linking = reinterpret_cast<PropertyRNA &>(rna_CollectionChild_light_linking_);

StructRNA *RNA_CollectionChild;
void register_struct_CollectionChild(BlenderRNA &brna)
{
	rna_CollectionChild_rna_properties_ = {
		{&rna_CollectionChild_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionChild_rna_properties_begin, CollectionChild_rna_properties_next, CollectionChild_rna_properties_end, CollectionChild_rna_properties_get, nullptr, nullptr, CollectionChild_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CollectionChild_rna_type_ = {
		{&rna_CollectionChild_light_linking, 	&rna_CollectionChild_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionChild_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CollectionChild_light_linking_ = {
		{nullptr, 	&rna_CollectionChild_rna_type,
		-1, "light_linking", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Light Linking",
		"Light linking settings of the collection object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionChild_light_linking_get, nullptr, nullptr, nullptr,RNA_CollectionLightLinking
	};

	StructRNA *srna = RNA_CollectionChild;
	srna->cont.properties = {&rna_CollectionChild_rna_properties, &rna_CollectionChild_light_linking};
	srna->identifier = "CollectionChild";
	srna->flag = 516;
	srna->name = "Collection Child";
	srna->description = "Child collection with its collection related settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CollectionChild_rna_properties;
};

/* Collection Import Data */
static CollectionPropertyRNA rna_CollectionImport_rna_properties_;
PropertyRNA &rna_CollectionImport_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CollectionImport_rna_properties_);

static PointerPropertyRNA rna_CollectionImport_rna_type_;
PropertyRNA &rna_CollectionImport_rna_type = reinterpret_cast<PropertyRNA &>(rna_CollectionImport_rna_type_);

static BoolPropertyRNA rna_CollectionImport_is_open_;
PropertyRNA &rna_CollectionImport_is_open = reinterpret_cast<PropertyRNA &>(rna_CollectionImport_is_open_);

static PointerPropertyRNA rna_CollectionImport_import_properties_;
PropertyRNA &rna_CollectionImport_import_properties = reinterpret_cast<PropertyRNA &>(rna_CollectionImport_import_properties_);

StructRNA *RNA_CollectionImport;
void register_struct_CollectionImport(BlenderRNA &brna)
{
	rna_CollectionImport_rna_properties_ = {
		{&rna_CollectionImport_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionImport_rna_properties_begin, CollectionImport_rna_properties_next, CollectionImport_rna_properties_end, CollectionImport_rna_properties_get, nullptr, nullptr, CollectionImport_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CollectionImport_rna_type_ = {
		{&rna_CollectionImport_is_open, 	&rna_CollectionImport_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionImport_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CollectionImport_is_open_ = {
		{&rna_CollectionImport_import_properties, 	&rna_CollectionImport_rna_type,
		-1, "is_open", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Open",
		"Whether the panel is expanded or closed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 269156352, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionImport_is_open_get, CollectionImport_is_open_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CollectionImport_import_properties_ = {
		{nullptr, 	&rna_CollectionImport_is_open,
		-1, "import_properties", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Import Properties",
		"Properties associated with the configured importer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionImport_import_properties_get, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};

	StructRNA *srna = RNA_CollectionImport;
	srna->cont.properties = {&rna_CollectionImport_rna_properties, &rna_CollectionImport_import_properties};
	srna->identifier = "CollectionImport";
	srna->flag = 516;
	srna->name = "Collection Import Data";
	srna->description = "Importer configured for the collection";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CollectionImport_rna_properties;
};

/* Name */
static CollectionPropertyRNA rna_CollectionExport_rna_properties_;
PropertyRNA &rna_CollectionExport_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CollectionExport_rna_properties_);

static PointerPropertyRNA rna_CollectionExport_rna_type_;
PropertyRNA &rna_CollectionExport_rna_type = reinterpret_cast<PropertyRNA &>(rna_CollectionExport_rna_type_);

static StringPropertyRNA rna_CollectionExport_name_;
PropertyRNA &rna_CollectionExport_name = reinterpret_cast<PropertyRNA &>(rna_CollectionExport_name_);

static BoolPropertyRNA rna_CollectionExport_is_open_;
PropertyRNA &rna_CollectionExport_is_open = reinterpret_cast<PropertyRNA &>(rna_CollectionExport_is_open_);

static PointerPropertyRNA rna_CollectionExport_export_properties_;
PropertyRNA &rna_CollectionExport_export_properties = reinterpret_cast<PropertyRNA &>(rna_CollectionExport_export_properties_);

static StringPropertyRNA rna_CollectionExport_filepath_;
PropertyRNA &rna_CollectionExport_filepath = reinterpret_cast<PropertyRNA &>(rna_CollectionExport_filepath_);

StructRNA *RNA_CollectionExport;
void register_struct_CollectionExport(BlenderRNA &brna)
{
	rna_CollectionExport_rna_properties_ = {
		{&rna_CollectionExport_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionExport_rna_properties_begin, CollectionExport_rna_properties_next, CollectionExport_rna_properties_end, CollectionExport_rna_properties_get, nullptr, nullptr, CollectionExport_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CollectionExport_rna_type_ = {
		{&rna_CollectionExport_name, 	&rna_CollectionExport_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionExport_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CollectionExport_name_ = {
		{&rna_CollectionExport_is_open, 	&rna_CollectionExport_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionExport_name_get, CollectionExport_name_length, CollectionExport_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_CollectionExport_is_open_ = {
		{&rna_CollectionExport_export_properties, 	&rna_CollectionExport_name,
		-1, "is_open", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Open",
		"Whether the panel is expanded or closed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 269156352, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionExport_is_open_get, CollectionExport_is_open_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CollectionExport_export_properties_ = {
		{&rna_CollectionExport_filepath, 	&rna_CollectionExport_is_open,
		-1, "export_properties", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Export Properties",
		"Properties associated with the configured exporter",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionExport_export_properties_get, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};

	rna_CollectionExport_filepath_ = {
		{nullptr, 	&rna_CollectionExport_export_properties,
		-1, "filepath", 1074036737, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"The file path used for exporting",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 269156352, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionExport_filepath_get, CollectionExport_filepath_length, CollectionExport_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	StructRNA *srna = RNA_CollectionExport;
	srna->cont.properties = {&rna_CollectionExport_rna_properties, &rna_CollectionExport_filepath};
	srna->identifier = "CollectionExport";
	srna->flag = 516;
	srna->name = "Name";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_CollectionExport_name;
	srna->iteratorproperty = &rna_CollectionExport_rna_properties;
};


}  // namespace blender
