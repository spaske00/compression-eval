
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

#include "rna_action.cc"
#include "rna_action_api.cc"

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

extern PropertyRNA &rna_Action_is_empty;
extern PropertyRNA &rna_Action_is_action_legacy;
extern PropertyRNA &rna_Action_is_action_layered;
extern PropertyRNA &rna_Action_slots;
extern PropertyRNA &rna_Action_layers;
extern PropertyRNA &rna_Action_pose_markers;
extern PropertyRNA &rna_Action_use_frame_range;
extern PropertyRNA &rna_Action_use_cyclic;
extern PropertyRNA &rna_Action_frame_start;
extern PropertyRNA &rna_Action_frame_end;
extern PropertyRNA &rna_Action_frame_range;
extern PropertyRNA &rna_Action_curve_frame_range;

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


extern FunctionRNA *rna_Action_deselect_keys_func;
extern FunctionRNA *rna_Action_fcurve_ensure_for_datablock_func;
extern PropertyRNA &rna_Action_fcurve_ensure_for_datablock_datablock;
extern PropertyRNA &rna_Action_fcurve_ensure_for_datablock_data_path;
extern PropertyRNA &rna_Action_fcurve_ensure_for_datablock_index;
extern PropertyRNA &rna_Action_fcurve_ensure_for_datablock_group_name;
extern PropertyRNA &rna_Action_fcurve_ensure_for_datablock_fcurve;

extern FunctionRNA *rna_Action_flip_with_pose_func;
extern PropertyRNA &rna_Action_flip_with_pose_object;



extern PropertyRNA &rna_ActionSlots_rna_properties;
extern PropertyRNA &rna_ActionSlots_rna_type;
extern PropertyRNA &rna_ActionSlots_active;

extern FunctionRNA *rna_ActionSlots_new_func;
extern PropertyRNA &rna_ActionSlots_new_id_type;
extern PropertyRNA &rna_ActionSlots_new_name;
extern PropertyRNA &rna_ActionSlots_new_slot;

extern FunctionRNA *rna_ActionSlots_remove_func;
extern PropertyRNA &rna_ActionSlots_remove_action_slot;



extern PropertyRNA &rna_ActionLayers_rna_properties;
extern PropertyRNA &rna_ActionLayers_rna_type;

extern FunctionRNA *rna_ActionLayers_new_func;
extern PropertyRNA &rna_ActionLayers_new_name;
extern PropertyRNA &rna_ActionLayers_new_layer;

extern FunctionRNA *rna_ActionLayers_remove_func;
extern PropertyRNA &rna_ActionLayers_remove_anim_layer;



extern PropertyRNA &rna_ActionPoseMarkers_rna_properties;
extern PropertyRNA &rna_ActionPoseMarkers_rna_type;
extern PropertyRNA &rna_ActionPoseMarkers_active;
extern PropertyRNA &rna_ActionPoseMarkers_active_index;

extern FunctionRNA *rna_ActionPoseMarkers_new_func;
extern PropertyRNA &rna_ActionPoseMarkers_new_name;
extern PropertyRNA &rna_ActionPoseMarkers_new_marker;

extern FunctionRNA *rna_ActionPoseMarkers_remove_func;
extern PropertyRNA &rna_ActionPoseMarkers_remove_marker;



extern PropertyRNA &rna_ActionGroup_rna_properties;
extern PropertyRNA &rna_ActionGroup_rna_type;
extern PropertyRNA &rna_ActionGroup_name;
extern PropertyRNA &rna_ActionGroup_channels;
extern PropertyRNA &rna_ActionGroup_select;
extern PropertyRNA &rna_ActionGroup_lock;
extern PropertyRNA &rna_ActionGroup_mute;
extern PropertyRNA &rna_ActionGroup_show_expanded;
extern PropertyRNA &rna_ActionGroup_show_expanded_graph;
extern PropertyRNA &rna_ActionGroup_use_pin;
extern PropertyRNA &rna_ActionGroup_color_set;
extern PropertyRNA &rna_ActionGroup_is_custom_color_set;
extern PropertyRNA &rna_ActionGroup_colors;


extern PropertyRNA &rna_DopeSheet_rna_properties;
extern PropertyRNA &rna_DopeSheet_rna_type;
extern PropertyRNA &rna_DopeSheet_source;
extern PropertyRNA &rna_DopeSheet_show_datablock_filters;
extern PropertyRNA &rna_DopeSheet_show_only_selected;
extern PropertyRNA &rna_DopeSheet_show_only_slot_of_active_object;
extern PropertyRNA &rna_DopeSheet_show_hidden;
extern PropertyRNA &rna_DopeSheet_use_datablock_sort;
extern PropertyRNA &rna_DopeSheet_use_filter_invert;
extern PropertyRNA &rna_DopeSheet_show_only_errors;
extern PropertyRNA &rna_DopeSheet_filter_collection;
extern PropertyRNA &rna_DopeSheet_filter_fcurve_name;
extern PropertyRNA &rna_DopeSheet_filter_text;
extern PropertyRNA &rna_DopeSheet_use_multi_word_filter;
extern PropertyRNA &rna_DopeSheet_show_missing_nla;
extern PropertyRNA &rna_DopeSheet_show_summary;
extern PropertyRNA &rna_DopeSheet_show_expanded_summary;
extern PropertyRNA &rna_DopeSheet_show_transforms;
extern PropertyRNA &rna_DopeSheet_show_shapekeys;
extern PropertyRNA &rna_DopeSheet_show_modifiers;
extern PropertyRNA &rna_DopeSheet_show_meshes;
extern PropertyRNA &rna_DopeSheet_show_lattices;
extern PropertyRNA &rna_DopeSheet_show_cameras;
extern PropertyRNA &rna_DopeSheet_show_materials;
extern PropertyRNA &rna_DopeSheet_show_lights;
extern PropertyRNA &rna_DopeSheet_show_linestyles;
extern PropertyRNA &rna_DopeSheet_show_textures;
extern PropertyRNA &rna_DopeSheet_show_curves;
extern PropertyRNA &rna_DopeSheet_show_worlds;
extern PropertyRNA &rna_DopeSheet_show_scenes;
extern PropertyRNA &rna_DopeSheet_show_particles;
extern PropertyRNA &rna_DopeSheet_show_metaballs;
extern PropertyRNA &rna_DopeSheet_show_armatures;
extern PropertyRNA &rna_DopeSheet_show_nodes;
extern PropertyRNA &rna_DopeSheet_show_speakers;
extern PropertyRNA &rna_DopeSheet_show_cache_files;
extern PropertyRNA &rna_DopeSheet_show_hair_curves;
extern PropertyRNA &rna_DopeSheet_show_pointclouds;
extern PropertyRNA &rna_DopeSheet_show_volumes;
extern PropertyRNA &rna_DopeSheet_show_lightprobes;
extern PropertyRNA &rna_DopeSheet_show_gpencil;
extern PropertyRNA &rna_DopeSheet_show_movieclips;
extern PropertyRNA &rna_DopeSheet_show_driver_fallback_as_error;


extern PropertyRNA &rna_ActionSlot_rna_properties;
extern PropertyRNA &rna_ActionSlot_rna_type;
extern PropertyRNA &rna_ActionSlot_identifier;
extern PropertyRNA &rna_ActionSlot_target_id_type;
extern PropertyRNA &rna_ActionSlot_target_id_type_icon;
extern PropertyRNA &rna_ActionSlot_name_display;
extern PropertyRNA &rna_ActionSlot_handle;
extern PropertyRNA &rna_ActionSlot_active;
extern PropertyRNA &rna_ActionSlot_select;
extern PropertyRNA &rna_ActionSlot_show_expanded;

extern FunctionRNA *rna_ActionSlot_users_func;
extern PropertyRNA &rna_ActionSlot_users_users;

extern FunctionRNA *rna_ActionSlot_duplicate_func;
extern PropertyRNA &rna_ActionSlot_duplicate_slot;



extern PropertyRNA &rna_ActionLayer_rna_properties;
extern PropertyRNA &rna_ActionLayer_rna_type;
extern PropertyRNA &rna_ActionLayer_name;
extern PropertyRNA &rna_ActionLayer_strips;


extern PropertyRNA &rna_ActionStrips_rna_properties;
extern PropertyRNA &rna_ActionStrips_rna_type;

extern FunctionRNA *rna_ActionStrips_new_func;
extern PropertyRNA &rna_ActionStrips_new_type;
extern PropertyRNA &rna_ActionStrips_new_strip;

extern FunctionRNA *rna_ActionStrips_remove_func;
extern PropertyRNA &rna_ActionStrips_remove_anim_strip;



extern PropertyRNA &rna_ActionStrip_rna_properties;
extern PropertyRNA &rna_ActionStrip_rna_type;
extern PropertyRNA &rna_ActionStrip_type;


extern PropertyRNA &rna_ActionStrip_rna_properties;
extern PropertyRNA &rna_ActionStrip_rna_type;
extern PropertyRNA &rna_ActionStrip_type;

extern PropertyRNA &rna_ActionKeyframeStrip_channelbags;

extern FunctionRNA *rna_ActionKeyframeStrip_channelbag_func;
extern PropertyRNA &rna_ActionKeyframeStrip_channelbag_slot;
extern PropertyRNA &rna_ActionKeyframeStrip_channelbag_ensure;
extern PropertyRNA &rna_ActionKeyframeStrip_channelbag_channels;

extern FunctionRNA *rna_ActionKeyframeStrip_key_insert_func;
extern PropertyRNA &rna_ActionKeyframeStrip_key_insert_slot;
extern PropertyRNA &rna_ActionKeyframeStrip_key_insert_data_path;
extern PropertyRNA &rna_ActionKeyframeStrip_key_insert_array_index;
extern PropertyRNA &rna_ActionKeyframeStrip_key_insert_value;
extern PropertyRNA &rna_ActionKeyframeStrip_key_insert_time;
extern PropertyRNA &rna_ActionKeyframeStrip_key_insert_success;



extern PropertyRNA &rna_ActionChannelbags_rna_properties;
extern PropertyRNA &rna_ActionChannelbags_rna_type;

extern FunctionRNA *rna_ActionChannelbags_new_func;
extern PropertyRNA &rna_ActionChannelbags_new_slot;
extern PropertyRNA &rna_ActionChannelbags_new_channelbag;

extern FunctionRNA *rna_ActionChannelbags_remove_func;
extern PropertyRNA &rna_ActionChannelbags_remove_channelbag;



extern PropertyRNA &rna_ActionChannelbag_rna_properties;
extern PropertyRNA &rna_ActionChannelbag_rna_type;
extern PropertyRNA &rna_ActionChannelbag_slot_handle;
extern PropertyRNA &rna_ActionChannelbag_slot;
extern PropertyRNA &rna_ActionChannelbag_fcurves;
extern PropertyRNA &rna_ActionChannelbag_groups;


extern PropertyRNA &rna_ActionChannelbagFCurves_rna_properties;
extern PropertyRNA &rna_ActionChannelbagFCurves_rna_type;

extern FunctionRNA *rna_ActionChannelbagFCurves_new_func;
extern PropertyRNA &rna_ActionChannelbagFCurves_new_data_path;
extern PropertyRNA &rna_ActionChannelbagFCurves_new_index;
extern PropertyRNA &rna_ActionChannelbagFCurves_new_group_name;
extern PropertyRNA &rna_ActionChannelbagFCurves_new_fcurve;

extern FunctionRNA *rna_ActionChannelbagFCurves_new_from_fcurve_func;
extern PropertyRNA &rna_ActionChannelbagFCurves_new_from_fcurve_source;
extern PropertyRNA &rna_ActionChannelbagFCurves_new_from_fcurve_data_path;
extern PropertyRNA &rna_ActionChannelbagFCurves_new_from_fcurve_fcurve;

extern FunctionRNA *rna_ActionChannelbagFCurves_ensure_func;
extern PropertyRNA &rna_ActionChannelbagFCurves_ensure_data_path;
extern PropertyRNA &rna_ActionChannelbagFCurves_ensure_index;
extern PropertyRNA &rna_ActionChannelbagFCurves_ensure_group_name;
extern PropertyRNA &rna_ActionChannelbagFCurves_ensure_fcurve;

extern FunctionRNA *rna_ActionChannelbagFCurves_find_func;
extern PropertyRNA &rna_ActionChannelbagFCurves_find_data_path;
extern PropertyRNA &rna_ActionChannelbagFCurves_find_index;
extern PropertyRNA &rna_ActionChannelbagFCurves_find_fcurve;

extern FunctionRNA *rna_ActionChannelbagFCurves_remove_func;
extern PropertyRNA &rna_ActionChannelbagFCurves_remove_fcurve;

extern FunctionRNA *rna_ActionChannelbagFCurves_clear_func;


extern PropertyRNA &rna_ActionChannelbagGroups_rna_properties;
extern PropertyRNA &rna_ActionChannelbagGroups_rna_type;

extern FunctionRNA *rna_ActionChannelbagGroups_new_func;
extern PropertyRNA &rna_ActionChannelbagGroups_new_name;
extern PropertyRNA &rna_ActionChannelbagGroups_new_action_group;

extern FunctionRNA *rna_ActionChannelbagGroups_remove_func;
extern PropertyRNA &rna_ActionChannelbagGroups_remove_action_group;


bool Action_is_empty_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Action_is_empty_get;
    return fn(ptr);
}

bool Action_is_action_legacy_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Action_is_action_legacy_get;
    return fn(ptr);
}

bool Action_is_action_layered_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Action_is_action_layered_get;
    return fn(ptr);
}

int Action_slots_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_animation_slots_length;
    return fn(ptr);
}

static PointerRNA Action_slots_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ActionSlot, rna_iterator_array_dereference_get(iter));
}

void Action_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Action_slots;

    PropCollectionBeginFunc fn = rna_iterator_animation_slots_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Action_slots_get(iter);
    }
}

void Action_slots_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Action_slots_get(iter);
    }
}

void Action_slots_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Action_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Action_slots_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = Action_slots_get(&iter); }
    }

    Action_slots_end(&iter);

    return found;
}

int Action_layers_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_action_layers_length;
    return fn(ptr);
}

static PointerRNA Action_layers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ActionLayer, rna_iterator_array_dereference_get(iter));
}

void Action_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Action_layers;

    PropCollectionBeginFunc fn = rna_iterator_action_layers_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Action_layers_get(iter);
    }
}

void Action_layers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Action_layers_get(iter);
    }
}

void Action_layers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Action_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Action_layers_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = Action_layers_get(&iter); }
    }

    Action_layers_end(&iter);

    return found;
}

static PointerRNA Action_pose_markers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_TimelineMarker, rna_iterator_listbase_get(iter));
}

void Action_pose_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Action_pose_markers;

    rna_iterator_listbase_begin(iter, ptr, &data->markers, nullptr);

    if (iter->valid) {
        iter->ptr = Action_pose_markers_get(iter);
    }
}

void Action_pose_markers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Action_pose_markers_get(iter);
    }
}

void Action_pose_markers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Action_pose_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Action_pose_markers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Action_pose_markers_get(&iter); }
    }

    Action_pose_markers_end(&iter);

    return found;
}

int TimelineMarker_name_length(PointerRNA *);
void TimelineMarker_name_get(PointerRNA *, char *);

bool Action_pose_markers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Action_pose_markers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = TimelineMarker_name_length(&iter.ptr);
            if (namelen < 1024) {
                TimelineMarker_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                TimelineMarker_name_get(&iter.ptr, name);
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
        Action_pose_markers_next(&iter);
    }
    Action_pose_markers_end(&iter);

    return found;
}

bool Action_use_frame_range_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void Action_use_frame_range_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Action_use_frame_range_set;
    fn(ptr, value);
}

bool Action_use_cyclic_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void Action_use_cyclic_set(PointerRNA *ptr, bool value)
{
    bAction *data = (bAction *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

float Action_frame_start_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (float)(data->frame_start);
}

void Action_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Action_start_frame_set;
    fn(ptr, value);
}

float Action_frame_end_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (float)(data->frame_end);
}

void Action_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Action_end_frame_set;
    fn(ptr, value);
}

void Action_frame_range_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_Action_frame_range_get;
    fn(ptr, values);
}

void Action_frame_range_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_Action_frame_range_set;
    fn(ptr, values);
}

void Action_curve_frame_range_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_Action_curve_frame_range_get;
    fn(ptr, values);
}

static PointerRNA ActionSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionSlots_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionSlots_rna_properties_get(iter);
    }
}

void ActionSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionSlots_rna_properties_get(iter);
    }
}

void ActionSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionSlots_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ActionSlots_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ActionSlots_active_get;
    return fn(ptr);
}

void ActionSlots_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_ActionSlots_active_set;
    fn(ptr, value, reports);
}

static PointerRNA ActionLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionLayers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionLayers_rna_properties_get(iter);
    }
}

void ActionLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionLayers_rna_properties_get(iter);
    }
}

void ActionLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionLayers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA ActionPoseMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionPoseMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionPoseMarkers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionPoseMarkers_rna_properties_get(iter);
    }
}

void ActionPoseMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionPoseMarkers_rna_properties_get(iter);
    }
}

void ActionPoseMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionPoseMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionPoseMarkers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ActionPoseMarkers_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Action_active_pose_marker_get;
    return fn(ptr);
}

void ActionPoseMarkers_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Action_active_pose_marker_set;
    fn(ptr, value, reports);
}

int ActionPoseMarkers_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Action_active_pose_marker_index_get;
    return fn(ptr);
}

void ActionPoseMarkers_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Action_active_pose_marker_index_set;
    fn(ptr, value);
}

static PointerRNA ActionGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionGroup_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionGroup_rna_properties_get(iter);
    }
}

void ActionGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionGroup_rna_properties_get(iter);
    }
}

void ActionGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionGroup_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ActionGroup_name_get(PointerRNA *ptr, char *value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int ActionGroup_name_length(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return strlen(data->name);
}

void ActionGroup_name_set(PointerRNA *ptr, const char *value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA ActionGroup_channels_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_ActionGroup_channels_get;
    return fn(iter);
}

void ActionGroup_channels_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionGroup_channels;

    PropCollectionBeginFunc fn = rna_ActionGroup_channels_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionGroup_channels_get(iter);
    }
}

void ActionGroup_channels_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_ActionGroup_channels_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionGroup_channels_get(iter);
    }
}

void ActionGroup_channels_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_ActionGroup_channels_end;
    fn(iter);
}

bool ActionGroup_select_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ActionGroup_select_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ActionGroup_lock_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void ActionGroup_lock_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool ActionGroup_mute_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void ActionGroup_mute_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool ActionGroup_show_expanded_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void ActionGroup_show_expanded_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool ActionGroup_show_expanded_graph_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void ActionGroup_show_expanded_graph_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool ActionGroup_use_pin_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return ((uint64_t(data->flag) & 131072) != 0);
}

void ActionGroup_use_pin_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 131072); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(131072)); }
}

int ActionGroup_color_set_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (int)(data->customCol);
}

void ActionGroup_color_set_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ActionGroup_colorset_set;
    fn(ptr, value);
}

bool ActionGroup_is_custom_color_set_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ActionGroup_is_custom_colorset_get;
    return fn(ptr);
}

PointerRNA ActionGroup_colors_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ThemeBoneColorSet, &data->cs);
}

static PointerRNA DopeSheet_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void DopeSheet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DopeSheet_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = DopeSheet_rna_properties_get(iter);
    }
}

void DopeSheet_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DopeSheet_rna_properties_get(iter);
    }
}

void DopeSheet_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool DopeSheet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA DopeSheet_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA DopeSheet_source_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ID, data->source);
}

bool DopeSheet_show_datablock_filters_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void DopeSheet_show_datablock_filters_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool DopeSheet_show_only_selected_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return ((uint64_t(data->filterflag) & 1) != 0);
}

void DopeSheet_show_only_selected_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 1); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(1)); }
}

bool DopeSheet_show_only_slot_of_active_object_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return ((uint64_t(data->filterflag) & 32) != 0);
}

void DopeSheet_show_only_slot_of_active_object_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 32); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(32)); }
}

bool DopeSheet_show_hidden_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return ((uint64_t(data->filterflag) & 67108864) != 0);
}

void DopeSheet_show_hidden_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 67108864); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(67108864)); }
}

bool DopeSheet_use_datablock_sort_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->flag) & 8) != 0);
}

void DopeSheet_use_datablock_sort_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool DopeSheet_use_filter_invert_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void DopeSheet_use_filter_invert_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool DopeSheet_show_only_errors_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return ((uint64_t(data->filterflag) & 268435456) != 0);
}

void DopeSheet_show_only_errors_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 268435456); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(268435456)); }
}

PointerRNA DopeSheet_filter_collection_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->filter_grp);
}

void DopeSheet_filter_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->filter_grp = value.data;
}

void DopeSheet_filter_fcurve_name_get(PointerRNA *ptr, char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_assert(strlen(data->searchstr) < 64);
    strcpy(value, data->searchstr);
}

int DopeSheet_filter_fcurve_name_length(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return strlen(data->searchstr);
}

void DopeSheet_filter_fcurve_name_set(PointerRNA *ptr, const char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_strncpy_utf8(data->searchstr, value, 64);
}

void DopeSheet_filter_text_get(PointerRNA *ptr, char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_assert(strlen(data->searchstr) < 64);
    strcpy(value, data->searchstr);
}

int DopeSheet_filter_text_length(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return strlen(data->searchstr);
}

void DopeSheet_filter_text_set(PointerRNA *ptr, const char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_strncpy_utf8(data->searchstr, value, 64);
}

bool DopeSheet_use_multi_word_filter_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void DopeSheet_use_multi_word_filter_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool DopeSheet_show_missing_nla_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 33554432) != 0);
}

void DopeSheet_show_missing_nla_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 33554432); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(33554432)); }
}

bool DopeSheet_show_summary_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return ((uint64_t(data->filterflag) & 16) != 0);
}

void DopeSheet_show_summary_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 16); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(16)); }
}

bool DopeSheet_show_expanded_summary_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void DopeSheet_show_expanded_summary_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool DopeSheet_show_transforms_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 256) != 0);
}

void DopeSheet_show_transforms_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 256); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(256)); }
}

bool DopeSheet_show_shapekeys_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 64) != 0);
}

void DopeSheet_show_shapekeys_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 64); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(64)); }
}

bool DopeSheet_show_modifiers_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 8388608) != 0);
}

void DopeSheet_show_modifiers_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 8388608); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(8388608)); }
}

bool DopeSheet_show_meshes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 128) != 0);
}

void DopeSheet_show_meshes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 128); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(128)); }
}

bool DopeSheet_show_lattices_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 512) != 0);
}

void DopeSheet_show_lattices_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 512); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(512)); }
}

bool DopeSheet_show_cameras_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 1024) != 0);
}

void DopeSheet_show_cameras_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 1024); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(1024)); }
}

bool DopeSheet_show_materials_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 2048) != 0);
}

void DopeSheet_show_materials_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 2048); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(2048)); }
}

bool DopeSheet_show_lights_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 4096) != 0);
}

void DopeSheet_show_lights_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 4096); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(4096)); }
}

bool DopeSheet_show_linestyles_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 4194304) != 0);
}

void DopeSheet_show_linestyles_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 4194304); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(4194304)); }
}

bool DopeSheet_show_textures_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 1048576) != 0);
}

void DopeSheet_show_textures_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 1048576); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(1048576)); }
}

bool DopeSheet_show_curves_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 8192) != 0);
}

void DopeSheet_show_curves_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 8192); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(8192)); }
}

bool DopeSheet_show_worlds_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 16384) != 0);
}

void DopeSheet_show_worlds_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 16384); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(16384)); }
}

bool DopeSheet_show_scenes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 32768) != 0);
}

void DopeSheet_show_scenes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 32768); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(32768)); }
}

bool DopeSheet_show_particles_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 65536) != 0);
}

void DopeSheet_show_particles_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 65536); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(65536)); }
}

bool DopeSheet_show_metaballs_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 131072) != 0);
}

void DopeSheet_show_metaballs_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 131072); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(131072)); }
}

bool DopeSheet_show_armatures_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 262144) != 0);
}

void DopeSheet_show_armatures_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 262144); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(262144)); }
}

bool DopeSheet_show_nodes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 524288) != 0);
}

void DopeSheet_show_nodes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 524288); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(524288)); }
}

bool DopeSheet_show_speakers_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 2097152) != 0);
}

void DopeSheet_show_speakers_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 2097152); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(2097152)); }
}

bool DopeSheet_show_cache_files_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag2) & 2) != 0);
}

void DopeSheet_show_cache_files_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) | 2); }
    else { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) & ~uint64_t(2)); }
}

bool DopeSheet_show_hair_curves_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag2) & 8) != 0);
}

void DopeSheet_show_hair_curves_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) | 8); }
    else { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) & ~uint64_t(8)); }
}

bool DopeSheet_show_pointclouds_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag2) & 16) != 0);
}

void DopeSheet_show_pointclouds_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) | 16); }
    else { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) & ~uint64_t(16)); }
}

bool DopeSheet_show_volumes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag2) & 32) != 0);
}

void DopeSheet_show_volumes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) | 32); }
    else { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) & ~uint64_t(32)); }
}

bool DopeSheet_show_lightprobes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag2) & 128) != 0);
}

void DopeSheet_show_lightprobes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) | 128); }
    else { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) & ~uint64_t(128)); }
}

bool DopeSheet_show_gpencil_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag) & 16777216) != 0);
}

void DopeSheet_show_gpencil_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) | 16777216); }
    else { data->filterflag = std::remove_reference_t<decltype(data->filterflag)>(uint64_t(data->filterflag) & ~uint64_t(16777216)); }
}

bool DopeSheet_show_movieclips_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !((uint64_t(data->filterflag2) & 4) != 0);
}

void DopeSheet_show_movieclips_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) | 4); }
    else { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) & ~uint64_t(4)); }
}

bool DopeSheet_show_driver_fallback_as_error_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return ((uint64_t(data->filterflag2) & 64) != 0);
}

void DopeSheet_show_driver_fallback_as_error_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) | 64); }
    else { data->filterflag2 = std::remove_reference_t<decltype(data->filterflag2)>(uint64_t(data->filterflag2) & ~uint64_t(64)); }
}

static PointerRNA ActionSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionSlot_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionSlot_rna_properties_get(iter);
    }
}

void ActionSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionSlot_rna_properties_get(iter);
    }
}

void ActionSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionSlot_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ActionSlot_identifier_get(PointerRNA *ptr, char *value)
{
    ActionSlot *data = (ActionSlot *)(ptr->data);
    BLI_assert(strlen(data->identifier) < 258);
    strcpy(value, data->identifier);
}

int ActionSlot_identifier_length(PointerRNA *ptr)
{
    ActionSlot *data = (ActionSlot *)(ptr->data);
    return strlen(data->identifier);
}

void ActionSlot_identifier_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ActionSlot_identifier_set;
    fn(ptr, value);
}

int ActionSlot_target_id_type_get(PointerRNA *ptr)
{
    ActionSlot *data = (ActionSlot *)(ptr->data);
    return (int)(data->idtype);
}

void ActionSlot_target_id_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ActionSlot_target_id_type_set;
    fn(ptr, value);
}

int ActionSlot_target_id_type_icon_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ActionSlot_target_id_type_icon_get;
    return fn(ptr);
}

void ActionSlot_name_display_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ActionSlot_name_display_get;
    fn(ptr, value);
}

int ActionSlot_name_display_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ActionSlot_name_display_length;
    return fn(ptr);
}

void ActionSlot_name_display_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ActionSlot_name_display_set;
    fn(ptr, value);
}

int ActionSlot_handle_get(PointerRNA *ptr)
{
    ActionSlot *data = (ActionSlot *)(ptr->data);
    return (int)(data->handle);
}

bool ActionSlot_active_get(PointerRNA *ptr)
{
    ActionSlot *data = (ActionSlot *)(ptr->data);
    return ((uint64_t(data->slot_flags) & 4) != 0);
}

bool ActionSlot_select_get(PointerRNA *ptr)
{
    ActionSlot *data = (ActionSlot *)(ptr->data);
    return ((uint64_t(data->slot_flags) & 2) != 0);
}

void ActionSlot_select_set(PointerRNA *ptr, bool value)
{
    ActionSlot *data = (ActionSlot *)(ptr->data);
    if (value) { data->slot_flags = std::remove_reference_t<decltype(data->slot_flags)>(uint64_t(data->slot_flags) | 2); }
    else { data->slot_flags = std::remove_reference_t<decltype(data->slot_flags)>(uint64_t(data->slot_flags) & ~uint64_t(2)); }
}

bool ActionSlot_show_expanded_get(PointerRNA *ptr)
{
    ActionSlot *data = (ActionSlot *)(ptr->data);
    return ((uint64_t(data->slot_flags) & 1) != 0);
}

void ActionSlot_show_expanded_set(PointerRNA *ptr, bool value)
{
    ActionSlot *data = (ActionSlot *)(ptr->data);
    if (value) { data->slot_flags = std::remove_reference_t<decltype(data->slot_flags)>(uint64_t(data->slot_flags) | 1); }
    else { data->slot_flags = std::remove_reference_t<decltype(data->slot_flags)>(uint64_t(data->slot_flags) & ~uint64_t(1)); }
}

static PointerRNA ActionLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionLayer_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionLayer_rna_properties_get(iter);
    }
}

void ActionLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionLayer_rna_properties_get(iter);
    }
}

void ActionLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionLayer_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ActionLayer_name_get(PointerRNA *ptr, char *value)
{
    ActionLayer *data = (ActionLayer *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int ActionLayer_name_length(PointerRNA *ptr)
{
    ActionLayer *data = (ActionLayer *)(ptr->data);
    return strlen(data->name);
}

void ActionLayer_name_set(PointerRNA *ptr, const char *value)
{
    ActionLayer *data = (ActionLayer *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

int ActionLayer_strips_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_ActionLayer_strips_length;
    return fn(ptr);
}

static PointerRNA ActionLayer_strips_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ActionStrip, rna_iterator_array_dereference_get(iter));
}

void ActionLayer_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionLayer_strips;

    PropCollectionBeginFunc fn = rna_iterator_ActionLayer_strips_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionLayer_strips_get(iter);
    }
}

void ActionLayer_strips_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionLayer_strips_get(iter);
    }
}

void ActionLayer_strips_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ActionLayer_strips_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ActionLayer_strips_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = ActionLayer_strips_get(&iter); }
    }

    ActionLayer_strips_end(&iter);

    return found;
}

static PointerRNA ActionStrips_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionStrips_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionStrips_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionStrips_rna_properties_get(iter);
    }
}

void ActionStrips_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionStrips_rna_properties_get(iter);
    }
}

void ActionStrips_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionStrips_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionStrips_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA ActionStrip_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionStrip_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionStrip_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionStrip_rna_properties_get(iter);
    }
}

void ActionStrip_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionStrip_rna_properties_get(iter);
    }
}

void ActionStrip_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionStrip_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionStrip_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ActionStrip_type_get(PointerRNA *ptr)
{
    ActionStrip *data = (ActionStrip *)(ptr->data);
    return (int)(data->strip_type);
}

int ActionKeyframeStrip_channelbags_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_keyframestrip_channelbags_length;
    return fn(ptr);
}

static PointerRNA ActionKeyframeStrip_channelbags_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ActionChannelbag, rna_iterator_array_dereference_get(iter));
}

void ActionKeyframeStrip_channelbags_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionKeyframeStrip_channelbags;

    PropCollectionBeginFunc fn = rna_iterator_keyframestrip_channelbags_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionKeyframeStrip_channelbags_get(iter);
    }
}

void ActionKeyframeStrip_channelbags_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionKeyframeStrip_channelbags_get(iter);
    }
}

void ActionKeyframeStrip_channelbags_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ActionKeyframeStrip_channelbags_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ActionKeyframeStrip_channelbags_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = ActionKeyframeStrip_channelbags_get(&iter); }
    }

    ActionKeyframeStrip_channelbags_end(&iter);

    return found;
}

static PointerRNA ActionChannelbags_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionChannelbags_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionChannelbags_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionChannelbags_rna_properties_get(iter);
    }
}

void ActionChannelbags_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionChannelbags_rna_properties_get(iter);
    }
}

void ActionChannelbags_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionChannelbags_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionChannelbags_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA ActionChannelbag_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionChannelbag_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionChannelbag_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionChannelbag_rna_properties_get(iter);
    }
}

void ActionChannelbag_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionChannelbag_rna_properties_get(iter);
    }
}

void ActionChannelbag_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionChannelbag_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionChannelbag_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ActionChannelbag_slot_handle_get(PointerRNA *ptr)
{
    ActionChannelbag *data = (ActionChannelbag *)(ptr->data);
    return (int)(data->slot_handle);
}

PointerRNA ActionChannelbag_slot_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Channelbag_slot_get;
    return fn(ptr);
}

int ActionChannelbag_fcurves_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_Channelbag_fcurves_length;
    return fn(ptr);
}

static PointerRNA ActionChannelbag_fcurves_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FCurve, rna_iterator_array_dereference_get(iter));
}

void ActionChannelbag_fcurves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionChannelbag_fcurves;

    PropCollectionBeginFunc fn = rna_iterator_Channelbag_fcurves_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionChannelbag_fcurves_get(iter);
    }
}

void ActionChannelbag_fcurves_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionChannelbag_fcurves_get(iter);
    }
}

void ActionChannelbag_fcurves_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ActionChannelbag_fcurves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ActionChannelbag_fcurves_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = ActionChannelbag_fcurves_get(&iter); }
    }

    ActionChannelbag_fcurves_end(&iter);

    return found;
}

int ActionChannelbag_groups_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_Channelbag_groups_length;
    return fn(ptr);
}

static PointerRNA ActionChannelbag_groups_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ActionGroup, rna_iterator_array_dereference_get(iter));
}

void ActionChannelbag_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionChannelbag_groups;

    PropCollectionBeginFunc fn = rna_iterator_Channelbag_groups_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionChannelbag_groups_get(iter);
    }
}

void ActionChannelbag_groups_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionChannelbag_groups_get(iter);
    }
}

void ActionChannelbag_groups_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ActionChannelbag_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ActionChannelbag_groups_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = ActionChannelbag_groups_get(&iter); }
    }

    ActionChannelbag_groups_end(&iter);

    return found;
}

static PointerRNA ActionChannelbagFCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionChannelbagFCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionChannelbagFCurves_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionChannelbagFCurves_rna_properties_get(iter);
    }
}

void ActionChannelbagFCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionChannelbagFCurves_rna_properties_get(iter);
    }
}

void ActionChannelbagFCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionChannelbagFCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionChannelbagFCurves_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA ActionChannelbagGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ActionChannelbagGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ActionChannelbagGroups_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionChannelbagGroups_rna_properties_get(iter);
    }
}

void ActionChannelbagGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ActionChannelbagGroups_rna_properties_get(iter);
    }
}

void ActionChannelbagGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ActionChannelbagGroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ActionChannelbagGroups_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Action_deselect_keys_func(bAction *_self)
{
	rna_Action_deselect_keys(_self);
}

static void Action_deselect_keys_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bAction *_self;
	_self = (bAction *)_ptr->data;
	
	rna_Action_deselect_keys(_self);
}

FCurve *Action_fcurve_ensure_for_datablock_func(bAction *_self, Main *bmain, ReportList *reports, ID *datablock, const char * data_path, int index, const char * group_name)
{
	return rna_Action_fcurve_ensure_for_datablock(_self, bmain, reports, datablock, data_path, index, group_name);
}

static void Action_fcurve_ensure_for_datablock_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bAction *_self;
	ID *datablock;
	const char * data_path;
	int index;
	const char * group_name;
	FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (bAction *)_ptr->data;
	_data = (char *)_parms->data;
	datablock = *((ID **)_data);
	_data += 8;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	group_name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Action_fcurve_ensure_for_datablock(_self, CTX_data_main(C), reports, datablock, data_path, index, group_name);
	*((FCurve **)_retdata) = fcurve;
}

void Action_flip_with_pose_func(bAction *_self, ReportList *reports, Object *object)
{
	rna_Action_flip_with_pose(_self, reports, object);
}

static void Action_flip_with_pose_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bAction *_self;
	Object *object;
	char *_data;
	
	_self = (bAction *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((Object **)_data);
	
	rna_Action_flip_with_pose(_self, reports, object);
}

/* Repeated prototypes to detect errors */

void rna_Action_deselect_keys(bAction *_self);
FCurve *rna_Action_fcurve_ensure_for_datablock(bAction *_self, Main *bmain, ReportList *reports, ID *datablock, const char * data_path, int index, const char * group_name);
void rna_Action_flip_with_pose(bAction *_self, ReportList *reports, Object *object);

ActionSlot *ActionSlots_new_func(bAction *_self, Main *bmain, bContext *C, ReportList *reports, int id_type, const char * name)
{
	return rna_Action_slots_new(_self, bmain, C, reports, id_type, name);
}

static void ActionSlots_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bAction *_self;
	int id_type;
	const char * name;
	ActionSlot *slot;
	char *_data, *_retdata;
	
	_self = (bAction *)_ptr->data;
	_data = (char *)_parms->data;
	id_type = *((int *)_data);
	_data += 8;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	slot = rna_Action_slots_new(_self, CTX_data_main(C), C, reports, id_type, name);
	*((ActionSlot **)_retdata) = slot;
}

void ActionSlots_remove_func(bAction *_self, bContext *C, ReportList *reports, PointerRNA *action_slot)
{
	rna_Action_slots_remove(_self, C, reports, action_slot);
}

static void ActionSlots_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bAction *_self;
	PointerRNA *action_slot;
	char *_data;
	
	_self = (bAction *)_ptr->data;
	_data = (char *)_parms->data;
	action_slot = ((PointerRNA *)_data);
	
	rna_Action_slots_remove(_self, C, reports, action_slot);
}

/* Repeated prototypes to detect errors */

ActionSlot *rna_Action_slots_new(bAction *_self, Main *bmain, bContext *C, ReportList *reports, int id_type, const char * name);
void rna_Action_slots_remove(bAction *_self, bContext *C, ReportList *reports, PointerRNA *action_slot);

ActionLayer *ActionLayers_new_func(bAction *_self, bContext *C, ReportList *reports, const char * name)
{
	return rna_Action_layers_new(_self, C, reports, name);
}

static void ActionLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bAction *_self;
	const char * name;
	ActionLayer *layer;
	char *_data, *_retdata;
	
	_self = (bAction *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Action_layers_new(_self, C, reports, name);
	*((ActionLayer **)_retdata) = layer;
}

void ActionLayers_remove_func(bAction *_self, bContext *C, ReportList *reports, PointerRNA *anim_layer)
{
	rna_Action_layers_remove(_self, C, reports, anim_layer);
}

static void ActionLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bAction *_self;
	PointerRNA *anim_layer;
	char *_data;
	
	_self = (bAction *)_ptr->data;
	_data = (char *)_parms->data;
	anim_layer = ((PointerRNA *)_data);
	
	rna_Action_layers_remove(_self, C, reports, anim_layer);
}

/* Repeated prototypes to detect errors */

ActionLayer *rna_Action_layers_new(bAction *_self, bContext *C, ReportList *reports, const char * name);
void rna_Action_layers_remove(bAction *_self, bContext *C, ReportList *reports, PointerRNA *anim_layer);

TimeMarker *ActionPoseMarkers_new_func(bAction *_self, const char * name)
{
	return rna_Action_pose_markers_new(_self, name);
}

static void ActionPoseMarkers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bAction *_self;
	const char * name;
	TimeMarker *marker;
	char *_data, *_retdata;
	
	_self = (bAction *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	marker = rna_Action_pose_markers_new(_self, name);
	*((TimeMarker **)_retdata) = marker;
}

void ActionPoseMarkers_remove_func(bAction *_self, ReportList *reports, PointerRNA *marker)
{
	rna_Action_pose_markers_remove(_self, reports, marker);
}

static void ActionPoseMarkers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bAction *_self;
	PointerRNA *marker;
	char *_data;
	
	_self = (bAction *)_ptr->data;
	_data = (char *)_parms->data;
	marker = *((PointerRNA **)_data);
	
	rna_Action_pose_markers_remove(_self, reports, marker);
}

/* Repeated prototypes to detect errors */

TimeMarker *rna_Action_pose_markers_new(bAction *_self, const char * name);
void rna_Action_pose_markers_remove(bAction *_self, ReportList *reports, PointerRNA *marker);



CollectionVector ActionSlot_users_func(ActionSlot *_self, Main *bmain)
{
	return rna_ActionSlot_users(_self, bmain);
}

static void ActionSlot_users_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ActionSlot *_self;
	CollectionVector users;
	char *_data, *_retdata;
	
	_self = (ActionSlot *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	users = rna_ActionSlot_users(_self, CTX_data_main(C));
	new ((CollectionVector *)_retdata) CollectionVector(std::move(users));
}

ActionSlot *ActionSlot_duplicate_func(ID *_selfid, ActionSlot *_self)
{
	return rna_ActionSlot_duplicate(_selfid, _self);
}

static void ActionSlot_duplicate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ActionSlot *_self;
	ActionSlot *slot;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (ActionSlot *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	slot = rna_ActionSlot_duplicate(_selfid, _self);
	*((ActionSlot **)_retdata) = slot;
}

/* Repeated prototypes to detect errors */

CollectionVector rna_ActionSlot_users(ActionSlot *_self, Main *bmain);
ActionSlot *rna_ActionSlot_duplicate(ID *_selfid, ActionSlot *_self);


ActionStrip *ActionStrips_new_func(ID *_selfid, ActionLayer *_self, bContext *C, ReportList *reports, int type)
{
	return rna_ActionStrips_new(_selfid, _self, C, reports, type);
}

static void ActionStrips_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ActionLayer *_self;
	int type;
	ActionStrip *strip;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (ActionLayer *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	strip = rna_ActionStrips_new(_selfid, _self, C, reports, type);
	*((ActionStrip **)_retdata) = strip;
}

void ActionStrips_remove_func(ID *_selfid, ActionLayer *_self, bContext *C, ReportList *reports, PointerRNA *anim_strip)
{
	rna_ActionStrips_remove(_selfid, _self, C, reports, anim_strip);
}

static void ActionStrips_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ActionLayer *_self;
	PointerRNA *anim_strip;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (ActionLayer *)_ptr->data;
	_data = (char *)_parms->data;
	anim_strip = ((PointerRNA *)_data);
	
	rna_ActionStrips_remove(_selfid, _self, C, reports, anim_strip);
}

/* Repeated prototypes to detect errors */

ActionStrip *rna_ActionStrips_new(ID *_selfid, ActionLayer *_self, bContext *C, ReportList *reports, int type);
void rna_ActionStrips_remove(ID *_selfid, ActionLayer *_self, bContext *C, ReportList *reports, PointerRNA *anim_strip);


ActionChannelbag *ActionKeyframeStrip_channelbag_func(ID *_selfid, ActionStrip *_self, ReportList *reports, ActionSlot *slot, bool ensure)
{
	return rna_ActionStrip_channelbag(_selfid, _self, reports, slot, ensure);
}

static void ActionKeyframeStrip_channelbag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ActionStrip *_self;
	ActionSlot *slot;
	bool ensure;
	ActionChannelbag *channels;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (ActionStrip *)_ptr->data;
	_data = (char *)_parms->data;
	slot = *((ActionSlot **)_data);
	_data += 8;
	ensure = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	channels = rna_ActionStrip_channelbag(_selfid, _self, reports, slot, ensure);
	*((ActionChannelbag **)_retdata) = channels;
}

bool ActionKeyframeStrip_key_insert_func(ID *_selfid, ActionStrip *_self, Main *bmain, ReportList *reports, ActionSlot *slot, const char * data_path, int array_index, float value, float time)
{
	return rna_ActionStrip_key_insert(_selfid, _self, bmain, reports, slot, data_path, array_index, value, time);
}

static void ActionKeyframeStrip_key_insert_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ActionStrip *_self;
	ActionSlot *slot;
	const char * data_path;
	int array_index;
	float value;
	float time;
	bool success;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (ActionStrip *)_ptr->data;
	_data = (char *)_parms->data;
	slot = *((ActionSlot **)_data);
	_data += 8;
	data_path = *((const char * *)_data);
	_data += 8;
	array_index = *((int *)_data);
	_data += 8;
	value = *((float *)_data);
	_data += 8;
	time = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	success = rna_ActionStrip_key_insert(_selfid, _self, CTX_data_main(C), reports, slot, data_path, array_index, value, time);
	*((bool *)_retdata) = success;
}

/* Repeated prototypes to detect errors */

ActionChannelbag *rna_ActionStrip_channelbag(ID *_selfid, ActionStrip *_self, ReportList *reports, ActionSlot *slot, bool ensure);
bool rna_ActionStrip_key_insert(ID *_selfid, ActionStrip *_self, Main *bmain, ReportList *reports, ActionSlot *slot, const char * data_path, int array_index, float value, float time);

ActionChannelbag *ActionChannelbags_new_func(ID *_selfid, ActionStrip *_self, bContext *C, ReportList *reports, ActionSlot *slot)
{
	return rna_Channelbags_new(_selfid, _self, C, reports, slot);
}

static void ActionChannelbags_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ActionStrip *_self;
	ActionSlot *slot;
	ActionChannelbag *channelbag;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (ActionStrip *)_ptr->data;
	_data = (char *)_parms->data;
	slot = *((ActionSlot **)_data);
	_data += 8;
	_retdata = _data;
	
	channelbag = rna_Channelbags_new(_selfid, _self, C, reports, slot);
	*((ActionChannelbag **)_retdata) = channelbag;
}

void ActionChannelbags_remove_func(ID *_selfid, ActionStrip *_self, bContext *C, ReportList *reports, PointerRNA *channelbag)
{
	rna_Channelbags_remove(_selfid, _self, C, reports, channelbag);
}

static void ActionChannelbags_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ActionStrip *_self;
	PointerRNA *channelbag;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (ActionStrip *)_ptr->data;
	_data = (char *)_parms->data;
	channelbag = ((PointerRNA *)_data);
	
	rna_Channelbags_remove(_selfid, _self, C, reports, channelbag);
}

/* Repeated prototypes to detect errors */

ActionChannelbag *rna_Channelbags_new(ID *_selfid, ActionStrip *_self, bContext *C, ReportList *reports, ActionSlot *slot);
void rna_Channelbags_remove(ID *_selfid, ActionStrip *_self, bContext *C, ReportList *reports, PointerRNA *channelbag);


FCurve *ActionChannelbagFCurves_new_func(ActionChannelbag *_self, Main *bmain, ReportList *reports, const char * data_path, int index, const char * group_name)
{
	return rna_Channelbag_fcurve_new(_self, bmain, reports, data_path, index, group_name);
}

static void ActionChannelbagFCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ActionChannelbag *_self;
	const char * data_path;
	int index;
	const char * group_name;
	FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (ActionChannelbag *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	group_name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Channelbag_fcurve_new(_self, CTX_data_main(C), reports, data_path, index, group_name);
	*((FCurve **)_retdata) = fcurve;
}

FCurve *ActionChannelbagFCurves_new_from_fcurve_func(ID *_selfid, ActionChannelbag *_self, ReportList *reports, FCurve *source, const char * data_path)
{
	return rna_Channelbag_fcurve_new_from_fcurve(_selfid, _self, reports, source, data_path);
}

static void ActionChannelbagFCurves_new_from_fcurve_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ActionChannelbag *_self;
	FCurve *source;
	const char * data_path;
	FCurve *fcurve;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (ActionChannelbag *)_ptr->data;
	_data = (char *)_parms->data;
	source = *((FCurve **)_data);
	_data += 8;
	data_path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Channelbag_fcurve_new_from_fcurve(_selfid, _self, reports, source, data_path);
	*((FCurve **)_retdata) = fcurve;
}

FCurve *ActionChannelbagFCurves_ensure_func(ActionChannelbag *_self, Main *bmain, ReportList *reports, const char * data_path, int index, const char * group_name)
{
	return rna_Channelbag_fcurve_ensure(_self, bmain, reports, data_path, index, group_name);
}

static void ActionChannelbagFCurves_ensure_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ActionChannelbag *_self;
	const char * data_path;
	int index;
	const char * group_name;
	FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (ActionChannelbag *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	group_name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Channelbag_fcurve_ensure(_self, CTX_data_main(C), reports, data_path, index, group_name);
	*((FCurve **)_retdata) = fcurve;
}

FCurve *ActionChannelbagFCurves_find_func(ActionChannelbag *_self, ReportList *reports, const char * data_path, int index)
{
	return rna_Channelbag_fcurve_find(_self, reports, data_path, index);
}

static void ActionChannelbagFCurves_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ActionChannelbag *_self;
	const char * data_path;
	int index;
	FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (ActionChannelbag *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Channelbag_fcurve_find(_self, reports, data_path, index);
	*((FCurve **)_retdata) = fcurve;
}

void ActionChannelbagFCurves_remove_func(ID *_selfid, ActionChannelbag *_self, bContext *C, ReportList *reports, PointerRNA *fcurve)
{
	rna_Channelbag_fcurve_remove(_selfid, _self, C, reports, fcurve);
}

static void ActionChannelbagFCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ActionChannelbag *_self;
	PointerRNA *fcurve;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (ActionChannelbag *)_ptr->data;
	_data = (char *)_parms->data;
	fcurve = *((PointerRNA **)_data);
	
	rna_Channelbag_fcurve_remove(_selfid, _self, C, reports, fcurve);
}

void ActionChannelbagFCurves_clear_func(ID *_selfid, ActionChannelbag *_self, bContext *C)
{
	rna_Channelbag_fcurve_clear(_selfid, _self, C);
}

static void ActionChannelbagFCurves_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ActionChannelbag *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (ActionChannelbag *)_ptr->data;
	
	rna_Channelbag_fcurve_clear(_selfid, _self, C);
}

/* Repeated prototypes to detect errors */

FCurve *rna_Channelbag_fcurve_new(ActionChannelbag *_self, Main *bmain, ReportList *reports, const char * data_path, int index, const char * group_name);
FCurve *rna_Channelbag_fcurve_new_from_fcurve(ID *_selfid, ActionChannelbag *_self, ReportList *reports, FCurve *source, const char * data_path);
FCurve *rna_Channelbag_fcurve_ensure(ActionChannelbag *_self, Main *bmain, ReportList *reports, const char * data_path, int index, const char * group_name);
FCurve *rna_Channelbag_fcurve_find(ActionChannelbag *_self, ReportList *reports, const char * data_path, int index);
void rna_Channelbag_fcurve_remove(ID *_selfid, ActionChannelbag *_self, bContext *C, ReportList *reports, PointerRNA *fcurve);
void rna_Channelbag_fcurve_clear(ID *_selfid, ActionChannelbag *_self, bContext *C);

bActionGroup *ActionChannelbagGroups_new_func(ActionChannelbag *_self, const char * name)
{
	return rna_Channelbag_group_new(_self, name);
}

static void ActionChannelbagGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ActionChannelbag *_self;
	const char * name;
	bActionGroup *action_group;
	char *_data, *_retdata;
	
	_self = (ActionChannelbag *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	action_group = rna_Channelbag_group_new(_self, name);
	*((bActionGroup **)_retdata) = action_group;
}

void ActionChannelbagGroups_remove_func(ActionChannelbag *_self, ReportList *reports, PointerRNA *action_group)
{
	rna_Channelbag_group_remove(_self, reports, action_group);
}

static void ActionChannelbagGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ActionChannelbag *_self;
	PointerRNA *action_group;
	char *_data;
	
	_self = (ActionChannelbag *)_ptr->data;
	_data = (char *)_parms->data;
	action_group = *((PointerRNA **)_data);
	
	rna_Channelbag_group_remove(_self, reports, action_group);
}

/* Repeated prototypes to detect errors */

bActionGroup *rna_Channelbag_group_new(ActionChannelbag *_self, const char * name);
void rna_Channelbag_group_remove(ActionChannelbag *_self, ReportList *reports, PointerRNA *action_group);

/* Action */
static BoolPropertyRNA rna_Action_is_empty_;
PropertyRNA &rna_Action_is_empty = reinterpret_cast<PropertyRNA &>(rna_Action_is_empty_);

static BoolPropertyRNA rna_Action_is_action_legacy_;
PropertyRNA &rna_Action_is_action_legacy = reinterpret_cast<PropertyRNA &>(rna_Action_is_action_legacy_);

static BoolPropertyRNA rna_Action_is_action_layered_;
PropertyRNA &rna_Action_is_action_layered = reinterpret_cast<PropertyRNA &>(rna_Action_is_action_layered_);

static CollectionPropertyRNA rna_Action_slots_;
PropertyRNA &rna_Action_slots = reinterpret_cast<PropertyRNA &>(rna_Action_slots_);

static CollectionPropertyRNA rna_Action_layers_;
PropertyRNA &rna_Action_layers = reinterpret_cast<PropertyRNA &>(rna_Action_layers_);

static CollectionPropertyRNA rna_Action_pose_markers_;
PropertyRNA &rna_Action_pose_markers = reinterpret_cast<PropertyRNA &>(rna_Action_pose_markers_);

static BoolPropertyRNA rna_Action_use_frame_range_;
PropertyRNA &rna_Action_use_frame_range = reinterpret_cast<PropertyRNA &>(rna_Action_use_frame_range_);

static BoolPropertyRNA rna_Action_use_cyclic_;
PropertyRNA &rna_Action_use_cyclic = reinterpret_cast<PropertyRNA &>(rna_Action_use_cyclic_);

static FloatPropertyRNA rna_Action_frame_start_;
PropertyRNA &rna_Action_frame_start = reinterpret_cast<PropertyRNA &>(rna_Action_frame_start_);

static FloatPropertyRNA rna_Action_frame_end_;
PropertyRNA &rna_Action_frame_end = reinterpret_cast<PropertyRNA &>(rna_Action_frame_end_);

static FloatPropertyRNA rna_Action_frame_range_;
PropertyRNA &rna_Action_frame_range = reinterpret_cast<PropertyRNA &>(rna_Action_frame_range_);

static FloatPropertyRNA rna_Action_curve_frame_range_;
PropertyRNA &rna_Action_curve_frame_range = reinterpret_cast<PropertyRNA &>(rna_Action_curve_frame_range_);

FunctionRNA *rna_Action_deselect_keys_func;
static PointerPropertyRNA rna_Action_fcurve_ensure_for_datablock_datablock_;
PropertyRNA &rna_Action_fcurve_ensure_for_datablock_datablock = reinterpret_cast<PropertyRNA &>(rna_Action_fcurve_ensure_for_datablock_datablock_);

static StringPropertyRNA rna_Action_fcurve_ensure_for_datablock_data_path_;
PropertyRNA &rna_Action_fcurve_ensure_for_datablock_data_path = reinterpret_cast<PropertyRNA &>(rna_Action_fcurve_ensure_for_datablock_data_path_);

static IntPropertyRNA rna_Action_fcurve_ensure_for_datablock_index_;
PropertyRNA &rna_Action_fcurve_ensure_for_datablock_index = reinterpret_cast<PropertyRNA &>(rna_Action_fcurve_ensure_for_datablock_index_);

static StringPropertyRNA rna_Action_fcurve_ensure_for_datablock_group_name_;
PropertyRNA &rna_Action_fcurve_ensure_for_datablock_group_name = reinterpret_cast<PropertyRNA &>(rna_Action_fcurve_ensure_for_datablock_group_name_);

static PointerPropertyRNA rna_Action_fcurve_ensure_for_datablock_fcurve_;
PropertyRNA &rna_Action_fcurve_ensure_for_datablock_fcurve = reinterpret_cast<PropertyRNA &>(rna_Action_fcurve_ensure_for_datablock_fcurve_);

FunctionRNA *rna_Action_fcurve_ensure_for_datablock_func;
static PointerPropertyRNA rna_Action_flip_with_pose_object_;
PropertyRNA &rna_Action_flip_with_pose_object = reinterpret_cast<PropertyRNA &>(rna_Action_flip_with_pose_object_);

FunctionRNA *rna_Action_flip_with_pose_func;
StructRNA *RNA_Action;
void register_struct_Action(BlenderRNA &brna)
{
	rna_Action_is_empty_ = {
		{&rna_Action_is_action_legacy, 	nullptr,
		-1, "is_empty", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Empty",
		"False when there is any Layer, Slot, or legacy F-Curve",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Action_is_empty_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Action_is_action_legacy_ = {
		{&rna_Action_is_action_layered, 	&rna_Action_is_empty,
		-1, "is_action_legacy", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Legacy Action",
		"Return whether this is a legacy Action. Legacy Actions have no layers or slots. Since Blender 4.4 actions are automatically updated to layered actions. This will only return true on empty actions",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Action_is_action_legacy_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Action_is_action_layered_ = {
		{&rna_Action_slots, 	&rna_Action_is_action_legacy,
		-1, "is_action_layered", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Layered Action",
		"Return whether this is a layered Action. At this point all actions are layered through versioning and this function will always return true",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Action_is_action_layered_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Action_slots_ = {
		{&rna_Action_layers, 	&rna_Action_is_action_layered,
		-1, "slots", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Slots",
		"The list of slots in this Action",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ActionSlots},
		Action_slots_begin, Action_slots_next, Action_slots_end, Action_slots_get, Action_slots_length, Action_slots_lookup_int, nullptr, nullptr, RNA_ActionSlot
	};

	rna_Action_layers_ = {
		{&rna_Action_pose_markers, 	&rna_Action_slots,
		-1, "layers", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layers",
		"The list of layers that make up this Action",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ActionLayers},
		Action_layers_begin, Action_layers_next, Action_layers_end, Action_layers_get, Action_layers_length, Action_layers_lookup_int, nullptr, nullptr, RNA_ActionLayer
	};

	rna_Action_pose_markers_ = {
		{&rna_Action_use_frame_range, 	&rna_Action_layers,
		-1, "pose_markers", 65536, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pose Markers",
		"Markers specific to this action, for labeling poses",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ActionPoseMarkers},
		Action_pose_markers_begin, Action_pose_markers_next, Action_pose_markers_end, Action_pose_markers_get, nullptr, Action_pose_markers_lookup_int, Action_pose_markers_lookup_string, nullptr, RNA_TimelineMarker
	};

	rna_Action_use_frame_range_ = {
		{&rna_Action_use_cyclic, 	&rna_Action_pose_markers,
		-1, "use_frame_range", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Manual Frame Range",
		"Manually specify the intended playback frame range for the action (this range is used by some tools, but does not affect animation evaluation)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Action_use_frame_range_get, Action_use_frame_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Action_use_cyclic_ = {
		{&rna_Action_frame_start, 	&rna_Action_use_frame_range,
		-1, "use_cyclic", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cyclic Animation",
		"The action is intended to be used as a cycle looping over its manually set playback frame range (enabling this does not automatically make it loop)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Action_use_cyclic_get, Action_use_cyclic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Action_frame_start_ = {
		{&rna_Action_frame_end, 	&rna_Action_use_cyclic,
		-1, "frame_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"The start frame of the manually set intended playback range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Action_frame_start_get, Action_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Action_frame_end_ = {
		{&rna_Action_frame_range, 	&rna_Action_frame_start,
		-1, "frame_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"The end frame of the manually set intended playback range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Action_frame_end_get, Action_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_Action_frame_range_default[2] = {
		0.0f,
		0.0f
	};
	rna_Action_frame_range_ = {
		{&rna_Action_curve_frame_range, 	&rna_Action_frame_end,
		-1, "frame_range", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame Range",
		"The intended playback frame range of this action, using the manually set range if available, or the combined frame range of all F-Curves within this action if not (assigning sets the manual frame range)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Action_frame_range_get, Action_frame_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Action_frame_range_default
	};

	static float rna_Action_curve_frame_range_default[2] = {
		0.0f,
		0.0f
	};
	rna_Action_curve_frame_range_ = {
		{nullptr, 	&rna_Action_frame_range,
		-1, "curve_frame_range", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve Frame Range",
		"The combined frame range of all F-Curves within this action",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Action_curve_frame_range_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Action_curve_frame_range_default
	};

	StructRNA *srna = RNA_Action;
	srna->cont.properties = {&rna_Action_is_empty, &rna_Action_curve_frame_range};
	srna->identifier = "Action";
	srna->flag = 519;
	srna->name = "Action";
	srna->description = "A collection of F-Curves for animation";
	srna->translation_context = "*";
	srna->icon = 134;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "deselect_keys";
		func->description = "Deselects all keys of the Action. The selection status of F-Curves is unchanged.";
		func->call = Action_deselect_keys_call;
		rna_Action_deselect_keys_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Action_fcurve_ensure_for_datablock_datablock_ = {
		{&rna_Action_fcurve_ensure_for_datablock_data_path, 	nullptr,
		-1, "datablock", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The data-block animated by this action, for which to ensure the F-Curve exists. This action must already be assigned to the data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_Action_fcurve_ensure_for_datablock_data_path_ = {
		{&rna_Action_fcurve_ensure_for_datablock_index, 	&rna_Action_fcurve_ensure_for_datablock_datablock,
		-1, "data_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"F-Curve data path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_Action_fcurve_ensure_for_datablock_index_ = {
		{&rna_Action_fcurve_ensure_for_datablock_group_name, 	&rna_Action_fcurve_ensure_for_datablock_data_path,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Array index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Action_fcurve_ensure_for_datablock_group_name_ = {
		{&rna_Action_fcurve_ensure_for_datablock_fcurve, 	&rna_Action_fcurve_ensure_for_datablock_index,
		-1, "group_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Group Name",
		"Name of the group for this F-Curve, if any. If the F-Curve already exists, this parameter is ignored",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_Action_fcurve_ensure_for_datablock_fcurve_ = {
		{nullptr, 	&rna_Action_fcurve_ensure_for_datablock_group_name,
		-1, "fcurve", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The found or created F-Curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Action_fcurve_ensure_for_datablock_datablock, &rna_Action_fcurve_ensure_for_datablock_fcurve};
		func->identifier = "fcurve_ensure_for_datablock";
		func->flag = 20;
		func->description = "Ensure that an F-Curve exists, with the given data path and array index, for the given data-block. This action must already be assigned to the data-block. This function will also create the layer, keyframe strip, and action slot if necessary, and take care of assigning the action slot too";
		func->call = Action_fcurve_ensure_for_datablock_call;
		func->c_ret = &rna_Action_fcurve_ensure_for_datablock_fcurve;
		rna_Action_fcurve_ensure_for_datablock_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Action_flip_with_pose_object_ = {
		{nullptr, 	nullptr,
		-1, "object", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The reference armature object to use when flipping",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Action_flip_with_pose_object, &rna_Action_flip_with_pose_object};
		func->identifier = "flip_with_pose";
		func->flag = 16;
		func->description = "Flip the action around the X axis using a pose";
		func->call = Action_flip_with_pose_call;
		rna_Action_flip_with_pose_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Action Slots */
static CollectionPropertyRNA rna_ActionSlots_rna_properties_;
PropertyRNA &rna_ActionSlots_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionSlots_rna_properties_);

static PointerPropertyRNA rna_ActionSlots_rna_type_;
PropertyRNA &rna_ActionSlots_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionSlots_rna_type_);

static PointerPropertyRNA rna_ActionSlots_active_;
PropertyRNA &rna_ActionSlots_active = reinterpret_cast<PropertyRNA &>(rna_ActionSlots_active_);

static EnumPropertyRNA rna_ActionSlots_new_id_type_;
PropertyRNA &rna_ActionSlots_new_id_type = reinterpret_cast<PropertyRNA &>(rna_ActionSlots_new_id_type_);

static StringPropertyRNA rna_ActionSlots_new_name_;
PropertyRNA &rna_ActionSlots_new_name = reinterpret_cast<PropertyRNA &>(rna_ActionSlots_new_name_);

static PointerPropertyRNA rna_ActionSlots_new_slot_;
PropertyRNA &rna_ActionSlots_new_slot = reinterpret_cast<PropertyRNA &>(rna_ActionSlots_new_slot_);

FunctionRNA *rna_ActionSlots_new_func;
static PointerPropertyRNA rna_ActionSlots_remove_action_slot_;
PropertyRNA &rna_ActionSlots_remove_action_slot = reinterpret_cast<PropertyRNA &>(rna_ActionSlots_remove_action_slot_);

FunctionRNA *rna_ActionSlots_remove_func;
StructRNA *RNA_ActionSlots;
void register_struct_ActionSlots(BlenderRNA &brna)
{
	rna_ActionSlots_rna_properties_ = {
		{&rna_ActionSlots_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlots_rna_properties_begin, ActionSlots_rna_properties_next, ActionSlots_rna_properties_end, ActionSlots_rna_properties_get, nullptr, nullptr, ActionSlots_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionSlots_rna_type_ = {
		{&rna_ActionSlots_active, 	&rna_ActionSlots_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlots_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ActionSlots_active_ = {
		{nullptr, 	&rna_ActionSlots_rna_type,
		-1, "active", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Slot",
		"Active slot for this action",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376832, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlots_active_get, ActionSlots_active_set, nullptr, nullptr,RNA_ActionSlot
	};

	StructRNA *srna = RNA_ActionSlots;
	srna->cont.properties = {&rna_ActionSlots_rna_properties, &rna_ActionSlots_active};
	srna->identifier = "ActionSlots";
	srna->flag = 516;
	srna->name = "Action Slots";
	srna->description = "Collection of action slots";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ActionSlots_rna_properties;
	{
	rna_ActionSlots_new_id_type_ = {
		{&rna_ActionSlots_new_name, 	nullptr,
		-1, "id_type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Data-block Type",
		"The data-block type that the slot is intended for. This is combined with the slot name to create the slot\'s unique identifier, and is also used to limit (on a best-effort basis) which data-blocks the slot can be assigned to.",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_id_type_items, 39, 16975
	};
	rna_ActionSlots_new_name_ = {
		{&rna_ActionSlots_new_slot, 	&rna_ActionSlots_new_id_type,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the slot. This will be made unique within the Action among slots of the same type",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};
	rna_ActionSlots_new_slot_ = {
		{nullptr, 	&rna_ActionSlots_new_name,
		-1, "slot", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created action slot",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionSlot
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionSlots_new_id_type, &rna_ActionSlots_new_slot};
		func->identifier = "new";
		func->flag = 28;
		func->description = "Add a slot to the Action";
		func->call = ActionSlots_new_call;
		func->c_ret = &rna_ActionSlots_new_slot;
		rna_ActionSlots_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionSlots_remove_action_slot_ = {
		{nullptr, 	nullptr,
		-1, "action_slot", 8388608, 0, 5, 0, 0, PropertyPathTemplateType(0), "Action Slot",
		"The slot to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionSlot
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionSlots_remove_action_slot, &rna_ActionSlots_remove_action_slot};
		func->identifier = "remove";
		func->flag = 24;
		func->description = "Remove the slot from the Action, including all animation that is associated with that slot";
		func->call = ActionSlots_remove_call;
		rna_ActionSlots_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Action Layers */
static CollectionPropertyRNA rna_ActionLayers_rna_properties_;
PropertyRNA &rna_ActionLayers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionLayers_rna_properties_);

static PointerPropertyRNA rna_ActionLayers_rna_type_;
PropertyRNA &rna_ActionLayers_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionLayers_rna_type_);

static StringPropertyRNA rna_ActionLayers_new_name_;
PropertyRNA &rna_ActionLayers_new_name = reinterpret_cast<PropertyRNA &>(rna_ActionLayers_new_name_);

static PointerPropertyRNA rna_ActionLayers_new_layer_;
PropertyRNA &rna_ActionLayers_new_layer = reinterpret_cast<PropertyRNA &>(rna_ActionLayers_new_layer_);

FunctionRNA *rna_ActionLayers_new_func;
static PointerPropertyRNA rna_ActionLayers_remove_anim_layer_;
PropertyRNA &rna_ActionLayers_remove_anim_layer = reinterpret_cast<PropertyRNA &>(rna_ActionLayers_remove_anim_layer_);

FunctionRNA *rna_ActionLayers_remove_func;
StructRNA *RNA_ActionLayers;
void register_struct_ActionLayers(BlenderRNA &brna)
{
	rna_ActionLayers_rna_properties_ = {
		{&rna_ActionLayers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionLayers_rna_properties_begin, ActionLayers_rna_properties_next, ActionLayers_rna_properties_end, ActionLayers_rna_properties_get, nullptr, nullptr, ActionLayers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionLayers_rna_type_ = {
		{nullptr, 	&rna_ActionLayers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionLayers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ActionLayers;
	srna->cont.properties = {&rna_ActionLayers_rna_properties, &rna_ActionLayers_rna_type};
	srna->identifier = "ActionLayers";
	srna->flag = 516;
	srna->name = "Action Layers";
	srna->description = "Collection of animation layers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ActionLayers_rna_properties;
	{
	rna_ActionLayers_new_name_ = {
		{&rna_ActionLayers_new_layer, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the layer, will be made unique within the Action",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 63, ""
	};
	rna_ActionLayers_new_layer_ = {
		{nullptr, 	&rna_ActionLayers_new_name,
		-1, "layer", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created animation layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionLayers_new_name, &rna_ActionLayers_new_layer};
		func->identifier = "new";
		func->flag = 24;
		func->description = "Add a layer to the Animation. Currently an Animation can only have at most one layer.";
		func->call = ActionLayers_new_call;
		func->c_ret = &rna_ActionLayers_new_layer;
		rna_ActionLayers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionLayers_remove_anim_layer_ = {
		{nullptr, 	nullptr,
		-1, "anim_layer", 8388608, 0, 5, 0, 0, PropertyPathTemplateType(0), "Animation Layer",
		"The layer to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionLayers_remove_anim_layer, &rna_ActionLayers_remove_anim_layer};
		func->identifier = "remove";
		func->flag = 24;
		func->description = "Remove the layer from the animation";
		func->call = ActionLayers_remove_call;
		rna_ActionLayers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Action Pose Markers */
static CollectionPropertyRNA rna_ActionPoseMarkers_rna_properties_;
PropertyRNA &rna_ActionPoseMarkers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionPoseMarkers_rna_properties_);

static PointerPropertyRNA rna_ActionPoseMarkers_rna_type_;
PropertyRNA &rna_ActionPoseMarkers_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionPoseMarkers_rna_type_);

static PointerPropertyRNA rna_ActionPoseMarkers_active_;
PropertyRNA &rna_ActionPoseMarkers_active = reinterpret_cast<PropertyRNA &>(rna_ActionPoseMarkers_active_);

static IntPropertyRNA rna_ActionPoseMarkers_active_index_;
PropertyRNA &rna_ActionPoseMarkers_active_index = reinterpret_cast<PropertyRNA &>(rna_ActionPoseMarkers_active_index_);

static StringPropertyRNA rna_ActionPoseMarkers_new_name_;
PropertyRNA &rna_ActionPoseMarkers_new_name = reinterpret_cast<PropertyRNA &>(rna_ActionPoseMarkers_new_name_);

static PointerPropertyRNA rna_ActionPoseMarkers_new_marker_;
PropertyRNA &rna_ActionPoseMarkers_new_marker = reinterpret_cast<PropertyRNA &>(rna_ActionPoseMarkers_new_marker_);

FunctionRNA *rna_ActionPoseMarkers_new_func;
static PointerPropertyRNA rna_ActionPoseMarkers_remove_marker_;
PropertyRNA &rna_ActionPoseMarkers_remove_marker = reinterpret_cast<PropertyRNA &>(rna_ActionPoseMarkers_remove_marker_);

FunctionRNA *rna_ActionPoseMarkers_remove_func;
StructRNA *RNA_ActionPoseMarkers;
void register_struct_ActionPoseMarkers(BlenderRNA &brna)
{
	rna_ActionPoseMarkers_rna_properties_ = {
		{&rna_ActionPoseMarkers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionPoseMarkers_rna_properties_begin, ActionPoseMarkers_rna_properties_next, ActionPoseMarkers_rna_properties_end, ActionPoseMarkers_rna_properties_get, nullptr, nullptr, ActionPoseMarkers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionPoseMarkers_rna_type_ = {
		{&rna_ActionPoseMarkers_active, 	&rna_ActionPoseMarkers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionPoseMarkers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ActionPoseMarkers_active_ = {
		{&rna_ActionPoseMarkers_active_index, 	&rna_ActionPoseMarkers_rna_type,
		-1, "active", 8454145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Pose Marker",
		"Active pose marker for this action",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionPoseMarkers_active_get, ActionPoseMarkers_active_set, nullptr, nullptr,RNA_TimelineMarker
	};

	rna_ActionPoseMarkers_active_index_ = {
		{nullptr, 	&rna_ActionPoseMarkers_active,
		-1, "active_index", 65539, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Pose Marker Index",
		"Index of active pose marker",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionPoseMarkers_active_index_get, ActionPoseMarkers_active_index_set, nullptr, nullptr, rna_Action_active_pose_marker_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ActionPoseMarkers;
	srna->cont.properties = {&rna_ActionPoseMarkers_rna_properties, &rna_ActionPoseMarkers_active_index};
	srna->identifier = "ActionPoseMarkers";
	srna->flag = 516;
	srna->name = "Action Pose Markers";
	srna->description = "Collection of timeline markers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ActionPoseMarkers_rna_properties;
	{
	rna_ActionPoseMarkers_new_name_ = {
		{&rna_ActionPoseMarkers_new_marker, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), nullptr,
		"New name for the marker (not unique)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Marker"
	};
	rna_ActionPoseMarkers_new_marker_ = {
		{nullptr, 	&rna_ActionPoseMarkers_new_name,
		-1, "marker", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created marker",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_TimelineMarker
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionPoseMarkers_new_name, &rna_ActionPoseMarkers_new_marker};
		func->identifier = "new";
		func->description = "Add a pose marker to the action";
		func->call = ActionPoseMarkers_new_call;
		func->c_ret = &rna_ActionPoseMarkers_new_marker;
		rna_ActionPoseMarkers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionPoseMarkers_remove_marker_ = {
		{nullptr, 	nullptr,
		-1, "marker", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Timeline marker to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_TimelineMarker
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionPoseMarkers_remove_marker, &rna_ActionPoseMarkers_remove_marker};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a timeline marker";
		func->call = ActionPoseMarkers_remove_call;
		rna_ActionPoseMarkers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Action Group */
static CollectionPropertyRNA rna_ActionGroup_rna_properties_;
PropertyRNA &rna_ActionGroup_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_rna_properties_);

static PointerPropertyRNA rna_ActionGroup_rna_type_;
PropertyRNA &rna_ActionGroup_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_rna_type_);

static StringPropertyRNA rna_ActionGroup_name_;
PropertyRNA &rna_ActionGroup_name = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_name_);

static CollectionPropertyRNA rna_ActionGroup_channels_;
PropertyRNA &rna_ActionGroup_channels = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_channels_);

static BoolPropertyRNA rna_ActionGroup_select_;
PropertyRNA &rna_ActionGroup_select = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_select_);

static BoolPropertyRNA rna_ActionGroup_lock_;
PropertyRNA &rna_ActionGroup_lock = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_lock_);

static BoolPropertyRNA rna_ActionGroup_mute_;
PropertyRNA &rna_ActionGroup_mute = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_mute_);

static BoolPropertyRNA rna_ActionGroup_show_expanded_;
PropertyRNA &rna_ActionGroup_show_expanded = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_show_expanded_);

static BoolPropertyRNA rna_ActionGroup_show_expanded_graph_;
PropertyRNA &rna_ActionGroup_show_expanded_graph = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_show_expanded_graph_);

static BoolPropertyRNA rna_ActionGroup_use_pin_;
PropertyRNA &rna_ActionGroup_use_pin = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_use_pin_);

static EnumPropertyRNA rna_ActionGroup_color_set_;
PropertyRNA &rna_ActionGroup_color_set = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_color_set_);

static BoolPropertyRNA rna_ActionGroup_is_custom_color_set_;
PropertyRNA &rna_ActionGroup_is_custom_color_set = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_is_custom_color_set_);

static PointerPropertyRNA rna_ActionGroup_colors_;
PropertyRNA &rna_ActionGroup_colors = reinterpret_cast<PropertyRNA &>(rna_ActionGroup_colors_);

StructRNA *RNA_ActionGroup;
void register_struct_ActionGroup(BlenderRNA &brna)
{
	rna_ActionGroup_rna_properties_ = {
		{&rna_ActionGroup_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_rna_properties_begin, ActionGroup_rna_properties_next, ActionGroup_rna_properties_end, ActionGroup_rna_properties_get, nullptr, nullptr, ActionGroup_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionGroup_rna_type_ = {
		{&rna_ActionGroup_name, 	&rna_ActionGroup_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ActionGroup_name_ = {
		{&rna_ActionGroup_channels, 	&rna_ActionGroup_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_name_get, ActionGroup_name_length, ActionGroup_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_ActionGroup_channels_ = {
		{&rna_ActionGroup_select, 	&rna_ActionGroup_name,
		-1, "channels", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Channels",
		"F-Curves in this group",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_channels_begin, ActionGroup_channels_next, ActionGroup_channels_end, ActionGroup_channels_get, nullptr, nullptr, nullptr, nullptr, RNA_FCurve
	};

	rna_ActionGroup_select_ = {
		{&rna_ActionGroup_lock, 	&rna_ActionGroup_channels,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Action group is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376838, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_select_get, ActionGroup_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ActionGroup_lock_ = {
		{&rna_ActionGroup_mute, 	&rna_ActionGroup_select,
		-1, "lock", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock",
		"Action group is locked",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_lock_get, ActionGroup_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ActionGroup_mute_ = {
		{&rna_ActionGroup_show_expanded, 	&rna_ActionGroup_lock,
		-1, "mute", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mute",
		"Action group is muted",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_mute_get, ActionGroup_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ActionGroup_show_expanded_ = {
		{&rna_ActionGroup_show_expanded_graph, 	&rna_ActionGroup_mute,
		-1, "show_expanded", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "Expanded",
		"Action group is expanded except in graph editor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_show_expanded_get, ActionGroup_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ActionGroup_show_expanded_graph_ = {
		{&rna_ActionGroup_use_pin, 	&rna_ActionGroup_show_expanded,
		-1, "show_expanded_graph", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "Expanded in Graph Editor",
		"Action group is expanded in graph editor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_show_expanded_graph_get, ActionGroup_show_expanded_graph_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ActionGroup_use_pin_ = {
		{&rna_ActionGroup_color_set, 	&rna_ActionGroup_show_expanded_graph,
		-1, "use_pin", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pin in Graph Editor",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_use_pin_get, ActionGroup_use_pin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ActionGroup_color_set_ = {
		{&rna_ActionGroup_is_custom_color_set, 	&rna_ActionGroup_use_pin,
		-1, "color_set", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Set",
		"Custom color set to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_color_set_get, ActionGroup_color_set_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_color_sets_items, 22, 0
	};

	rna_ActionGroup_is_custom_color_set_ = {
		{&rna_ActionGroup_colors, 	&rna_ActionGroup_color_set,
		-1, "is_custom_color_set", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Custom Color Set",
		"Color set is user-defined instead of a fixed theme color set",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_is_custom_color_set_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ActionGroup_colors_ = {
		{nullptr, 	&rna_ActionGroup_is_custom_color_set,
		-1, "colors", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Colors",
		"Copy of the colors associated with the group\'s color set",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionGroup_colors_get, nullptr, nullptr, nullptr,RNA_ThemeBoneColorSet
	};

	StructRNA *srna = RNA_ActionGroup;
	srna->cont.properties = {&rna_ActionGroup_rna_properties, &rna_ActionGroup_colors};
	srna->identifier = "ActionGroup";
	srna->flag = 516;
	srna->name = "Action Group";
	srna->description = "Groups of F-Curves";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_ActionGroup_name;
	srna->iteratorproperty = &rna_ActionGroup_rna_properties;
};

/* Dope Sheet */
static CollectionPropertyRNA rna_DopeSheet_rna_properties_;
PropertyRNA &rna_DopeSheet_rna_properties = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_rna_properties_);

static PointerPropertyRNA rna_DopeSheet_rna_type_;
PropertyRNA &rna_DopeSheet_rna_type = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_rna_type_);

static PointerPropertyRNA rna_DopeSheet_source_;
PropertyRNA &rna_DopeSheet_source = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_source_);

static BoolPropertyRNA rna_DopeSheet_show_datablock_filters_;
PropertyRNA &rna_DopeSheet_show_datablock_filters = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_datablock_filters_);

static BoolPropertyRNA rna_DopeSheet_show_only_selected_;
PropertyRNA &rna_DopeSheet_show_only_selected = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_only_selected_);

static BoolPropertyRNA rna_DopeSheet_show_only_slot_of_active_object_;
PropertyRNA &rna_DopeSheet_show_only_slot_of_active_object = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_only_slot_of_active_object_);

static BoolPropertyRNA rna_DopeSheet_show_hidden_;
PropertyRNA &rna_DopeSheet_show_hidden = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_hidden_);

static BoolPropertyRNA rna_DopeSheet_use_datablock_sort_;
PropertyRNA &rna_DopeSheet_use_datablock_sort = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_use_datablock_sort_);

static BoolPropertyRNA rna_DopeSheet_use_filter_invert_;
PropertyRNA &rna_DopeSheet_use_filter_invert = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_use_filter_invert_);

static BoolPropertyRNA rna_DopeSheet_show_only_errors_;
PropertyRNA &rna_DopeSheet_show_only_errors = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_only_errors_);

static PointerPropertyRNA rna_DopeSheet_filter_collection_;
PropertyRNA &rna_DopeSheet_filter_collection = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_filter_collection_);

static StringPropertyRNA rna_DopeSheet_filter_fcurve_name_;
PropertyRNA &rna_DopeSheet_filter_fcurve_name = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_filter_fcurve_name_);

static StringPropertyRNA rna_DopeSheet_filter_text_;
PropertyRNA &rna_DopeSheet_filter_text = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_filter_text_);

static BoolPropertyRNA rna_DopeSheet_use_multi_word_filter_;
PropertyRNA &rna_DopeSheet_use_multi_word_filter = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_use_multi_word_filter_);

static BoolPropertyRNA rna_DopeSheet_show_missing_nla_;
PropertyRNA &rna_DopeSheet_show_missing_nla = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_missing_nla_);

static BoolPropertyRNA rna_DopeSheet_show_summary_;
PropertyRNA &rna_DopeSheet_show_summary = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_summary_);

static BoolPropertyRNA rna_DopeSheet_show_expanded_summary_;
PropertyRNA &rna_DopeSheet_show_expanded_summary = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_expanded_summary_);

static BoolPropertyRNA rna_DopeSheet_show_transforms_;
PropertyRNA &rna_DopeSheet_show_transforms = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_transforms_);

static BoolPropertyRNA rna_DopeSheet_show_shapekeys_;
PropertyRNA &rna_DopeSheet_show_shapekeys = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_shapekeys_);

static BoolPropertyRNA rna_DopeSheet_show_modifiers_;
PropertyRNA &rna_DopeSheet_show_modifiers = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_modifiers_);

static BoolPropertyRNA rna_DopeSheet_show_meshes_;
PropertyRNA &rna_DopeSheet_show_meshes = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_meshes_);

static BoolPropertyRNA rna_DopeSheet_show_lattices_;
PropertyRNA &rna_DopeSheet_show_lattices = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_lattices_);

static BoolPropertyRNA rna_DopeSheet_show_cameras_;
PropertyRNA &rna_DopeSheet_show_cameras = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_cameras_);

static BoolPropertyRNA rna_DopeSheet_show_materials_;
PropertyRNA &rna_DopeSheet_show_materials = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_materials_);

static BoolPropertyRNA rna_DopeSheet_show_lights_;
PropertyRNA &rna_DopeSheet_show_lights = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_lights_);

static BoolPropertyRNA rna_DopeSheet_show_linestyles_;
PropertyRNA &rna_DopeSheet_show_linestyles = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_linestyles_);

static BoolPropertyRNA rna_DopeSheet_show_textures_;
PropertyRNA &rna_DopeSheet_show_textures = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_textures_);

static BoolPropertyRNA rna_DopeSheet_show_curves_;
PropertyRNA &rna_DopeSheet_show_curves = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_curves_);

static BoolPropertyRNA rna_DopeSheet_show_worlds_;
PropertyRNA &rna_DopeSheet_show_worlds = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_worlds_);

static BoolPropertyRNA rna_DopeSheet_show_scenes_;
PropertyRNA &rna_DopeSheet_show_scenes = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_scenes_);

static BoolPropertyRNA rna_DopeSheet_show_particles_;
PropertyRNA &rna_DopeSheet_show_particles = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_particles_);

static BoolPropertyRNA rna_DopeSheet_show_metaballs_;
PropertyRNA &rna_DopeSheet_show_metaballs = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_metaballs_);

static BoolPropertyRNA rna_DopeSheet_show_armatures_;
PropertyRNA &rna_DopeSheet_show_armatures = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_armatures_);

static BoolPropertyRNA rna_DopeSheet_show_nodes_;
PropertyRNA &rna_DopeSheet_show_nodes = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_nodes_);

static BoolPropertyRNA rna_DopeSheet_show_speakers_;
PropertyRNA &rna_DopeSheet_show_speakers = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_speakers_);

static BoolPropertyRNA rna_DopeSheet_show_cache_files_;
PropertyRNA &rna_DopeSheet_show_cache_files = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_cache_files_);

static BoolPropertyRNA rna_DopeSheet_show_hair_curves_;
PropertyRNA &rna_DopeSheet_show_hair_curves = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_hair_curves_);

static BoolPropertyRNA rna_DopeSheet_show_pointclouds_;
PropertyRNA &rna_DopeSheet_show_pointclouds = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_pointclouds_);

static BoolPropertyRNA rna_DopeSheet_show_volumes_;
PropertyRNA &rna_DopeSheet_show_volumes = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_volumes_);

static BoolPropertyRNA rna_DopeSheet_show_lightprobes_;
PropertyRNA &rna_DopeSheet_show_lightprobes = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_lightprobes_);

static BoolPropertyRNA rna_DopeSheet_show_gpencil_;
PropertyRNA &rna_DopeSheet_show_gpencil = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_gpencil_);

static BoolPropertyRNA rna_DopeSheet_show_movieclips_;
PropertyRNA &rna_DopeSheet_show_movieclips = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_movieclips_);

static BoolPropertyRNA rna_DopeSheet_show_driver_fallback_as_error_;
PropertyRNA &rna_DopeSheet_show_driver_fallback_as_error = reinterpret_cast<PropertyRNA &>(rna_DopeSheet_show_driver_fallback_as_error_);

StructRNA *RNA_DopeSheet;
void register_struct_DopeSheet(BlenderRNA &brna)
{
	rna_DopeSheet_rna_properties_ = {
		{&rna_DopeSheet_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_rna_properties_begin, DopeSheet_rna_properties_next, DopeSheet_rna_properties_end, DopeSheet_rna_properties_get, nullptr, nullptr, DopeSheet_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_DopeSheet_rna_type_ = {
		{&rna_DopeSheet_source, 	&rna_DopeSheet_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_DopeSheet_source_ = {
		{&rna_DopeSheet_show_datablock_filters, 	&rna_DopeSheet_rna_type,
		-1, "source", 8388800, 0, 0, 0, 0, PropertyPathTemplateType(0), "Source",
		"ID-Block representing source data, usually ID_SCE (i.e. Scene)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_source_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_DopeSheet_show_datablock_filters_ = {
		{&rna_DopeSheet_show_only_selected, 	&rna_DopeSheet_source,
		-1, "show_datablock_filters", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Data-Block Filters",
		"Show options for whether channels related to certain types of data are included",
		33, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376832, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_datablock_filters_get, DopeSheet_show_datablock_filters_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DopeSheet_show_only_selected_ = {
		{&rna_DopeSheet_show_only_slot_of_active_object, 	&rna_DopeSheet_show_datablock_filters,
		-1, "show_only_selected", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Only Show Selected",
		"Only include channels relating to selected objects and data",
		30, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_only_selected_get, DopeSheet_show_only_selected_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DopeSheet_show_only_slot_of_active_object_ = {
		{&rna_DopeSheet_show_hidden, 	&rna_DopeSheet_show_only_selected,
		-1, "show_only_slot_of_active_object", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Only Show Slot of Active Object",
		"Only show the slot of the active Object. Otherwise show all the Action\'s Slots",
		504, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_only_slot_of_active_object_get, DopeSheet_show_only_slot_of_active_object_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DopeSheet_show_hidden_ = {
		{&rna_DopeSheet_use_datablock_sort, 	&rna_DopeSheet_show_only_slot_of_active_object,
		-1, "show_hidden", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Hidden",
		"Include channels from objects/bone that are not visible",
		86, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_hidden_get, DopeSheet_show_hidden_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DopeSheet_use_datablock_sort_ = {
		{&rna_DopeSheet_use_filter_invert, 	&rna_DopeSheet_show_hidden,
		-1, "use_datablock_sort", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sort Data-Blocks",
		"Alphabetically sorts data-blocks - mainly objects in the scene (disable to increase viewport speed)",
		700, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_use_datablock_sort_get, DopeSheet_use_datablock_sort_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_use_filter_invert_ = {
		{&rna_DopeSheet_show_only_errors, 	&rna_DopeSheet_use_datablock_sort,
		-1, "use_filter_invert", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert",
		"Invert filter search",
		114, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_use_filter_invert_get, DopeSheet_use_filter_invert_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DopeSheet_show_only_errors_ = {
		{&rna_DopeSheet_filter_collection, 	&rna_DopeSheet_use_filter_invert,
		-1, "show_only_errors", 4194307, 0, 0, 0, 0, PropertyPathTemplateType(0), "Only Show Errors",
		"Only include F-Curves and drivers that are disabled or have errors",
		48, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Action_show_errors_update, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_only_errors_get, DopeSheet_show_only_errors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DopeSheet_filter_collection_ = {
		{&rna_DopeSheet_filter_fcurve_name, 	&rna_DopeSheet_show_only_errors,
		-1, "filter_collection", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Filtering Collection",
		"Collection that included object should be a member of",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_filter_collection_get, DopeSheet_filter_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_DopeSheet_filter_fcurve_name_ = {
		{&rna_DopeSheet_filter_text, 	&rna_DopeSheet_filter_collection,
		-1, "filter_fcurve_name", -2147221503, 0, 0, 0, 0, PropertyPathTemplateType(0), "F-Curve Name Filter",
		"F-Curve live filtering string",
		109, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_filter_fcurve_name_get, DopeSheet_filter_fcurve_name_length, DopeSheet_filter_fcurve_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_DopeSheet_filter_text_ = {
		{&rna_DopeSheet_use_multi_word_filter, 	&rna_DopeSheet_filter_fcurve_name,
		-1, "filter_text", -2147221503, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name Filter",
		"Live filtering string",
		109, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_filter_text_get, DopeSheet_filter_text_length, DopeSheet_filter_text_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_DopeSheet_use_multi_word_filter_ = {
		{&rna_DopeSheet_show_missing_nla, 	&rna_DopeSheet_filter_text,
		-1, "use_multi_word_filter", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multi-Word Fuzzy Filter",
		"Perform fuzzy/multi-word matching.\nWarning: May be slow",
		700, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_use_multi_word_filter_get, DopeSheet_use_multi_word_filter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DopeSheet_show_missing_nla_ = {
		{&rna_DopeSheet_show_summary, 	&rna_DopeSheet_use_multi_word_filter,
		-1, "show_missing_nla", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Include Missing NLA",
		"Include animation data-blocks with no NLA data (NLA editor only)",
		134, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_missing_nla_get, DopeSheet_show_missing_nla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_summary_ = {
		{&rna_DopeSheet_show_expanded_summary, 	&rna_DopeSheet_show_missing_nla,
		-1, "show_summary", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Summary",
		"Display an additional \'summary\' line (Dope Sheet editors only)",
		54, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_summary_get, DopeSheet_show_summary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DopeSheet_show_expanded_summary_ = {
		{&rna_DopeSheet_show_transforms, 	&rna_DopeSheet_show_summary,
		-1, "show_expanded_summary", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collapse Summary",
		"Collapse summary when shown, so all other channels get hidden (Dope Sheet editors only)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_expanded_summary_get, DopeSheet_show_expanded_summary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_transforms_ = {
		{&rna_DopeSheet_show_shapekeys, 	&rna_DopeSheet_show_expanded_summary,
		-1, "show_transforms", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Transforms",
		"Include visualization of object-level animation data (mostly transforms)",
		604, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_transforms_get, DopeSheet_show_transforms_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_shapekeys_ = {
		{&rna_DopeSheet_show_modifiers, 	&rna_DopeSheet_show_transforms,
		-1, "show_shapekeys", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Shape Keys",
		"Include visualization of shape key related animation data",
		190, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_shapekeys_get, DopeSheet_show_shapekeys_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_modifiers_ = {
		{&rna_DopeSheet_show_meshes, 	&rna_DopeSheet_show_shapekeys,
		-1, "show_modifiers", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Modifier Data",
		"Include visualization of animation data related to data-blocks linked to modifiers",
		503, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_modifiers_get, DopeSheet_show_modifiers_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_meshes_ = {
		{&rna_DopeSheet_show_lattices, 	&rna_DopeSheet_show_modifiers,
		-1, "show_meshes", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Meshes",
		"Include visualization of mesh related animation data",
		288, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_meshes_get, DopeSheet_show_meshes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_lattices_ = {
		{&rna_DopeSheet_show_cameras, 	&rna_DopeSheet_show_meshes,
		-1, "show_lattices", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Lattices",
		"Include visualization of lattice related animation data",
		285, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_lattices_get, DopeSheet_show_lattices_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_cameras_ = {
		{&rna_DopeSheet_show_materials, 	&rna_DopeSheet_show_lattices,
		-1, "show_cameras", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Camera",
		"Include visualization of camera related animation data",
		276, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_cameras_get, DopeSheet_show_cameras_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_materials_ = {
		{&rna_DopeSheet_show_lights, 	&rna_DopeSheet_show_cameras,
		-1, "show_materials", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Material",
		"Include visualization of material related animation data",
		199, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_materials_get, DopeSheet_show_materials_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_lights_ = {
		{&rna_DopeSheet_show_linestyles, 	&rna_DopeSheet_show_materials,
		-1, "show_lights", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Light",
		"Include visualization of light related animation data",
		286, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_lights_get, DopeSheet_show_lights_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_linestyles_ = {
		{&rna_DopeSheet_show_textures, 	&rna_DopeSheet_show_lights,
		-1, "show_linestyles", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Line Style",
		"Include visualization of Line Style related Animation data",
		198, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_linestyles_get, DopeSheet_show_linestyles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_textures_ = {
		{&rna_DopeSheet_show_curves, 	&rna_DopeSheet_show_linestyles,
		-1, "show_textures", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Texture",
		"Include visualization of texture related animation data",
		200, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_textures_get, DopeSheet_show_textures_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_curves_ = {
		{&rna_DopeSheet_show_worlds, 	&rna_DopeSheet_show_textures,
		-1, "show_curves", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Curve",
		"Include visualization of curve related animation data",
		182, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_curves_get, DopeSheet_show_curves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_worlds_ = {
		{&rna_DopeSheet_show_scenes, 	&rna_DopeSheet_show_curves,
		-1, "show_worlds", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display World",
		"Include visualization of world related animation data",
		201, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_worlds_get, DopeSheet_show_worlds_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_scenes_ = {
		{&rna_DopeSheet_show_particles, 	&rna_DopeSheet_show_worlds,
		-1, "show_scenes", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Scene",
		"Include visualization of scene related animation data",
		195, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_scenes_get, DopeSheet_show_scenes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_particles_ = {
		{&rna_DopeSheet_show_metaballs, 	&rna_DopeSheet_show_scenes,
		-1, "show_particles", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Particle",
		"Include visualization of particle related animation data",
		189, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_particles_get, DopeSheet_show_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_metaballs_ = {
		{&rna_DopeSheet_show_armatures, 	&rna_DopeSheet_show_particles,
		-1, "show_metaballs", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Metaball",
		"Include visualization of metaball related animation data",
		289, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_metaballs_get, DopeSheet_show_metaballs_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_armatures_ = {
		{&rna_DopeSheet_show_nodes, 	&rna_DopeSheet_show_metaballs,
		-1, "show_armatures", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Armature",
		"Include visualization of armature related animation data",
		275, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_armatures_get, DopeSheet_show_armatures_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_nodes_ = {
		{&rna_DopeSheet_show_speakers, 	&rna_DopeSheet_show_armatures,
		-1, "show_nodes", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Node",
		"Include visualization of node related animation data",
		146, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_nodes_get, DopeSheet_show_nodes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_speakers_ = {
		{&rna_DopeSheet_show_cache_files, 	&rna_DopeSheet_show_nodes,
		-1, "show_speakers", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Speaker",
		"Include visualization of speaker related animation data",
		291, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_speakers_get, DopeSheet_show_speakers_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_cache_files_ = {
		{&rna_DopeSheet_show_hair_curves, 	&rna_DopeSheet_show_speakers,
		-1, "show_cache_files", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Cache Files",
		"Include visualization of cache file related animation data",
		208, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_cache_files_get, DopeSheet_show_cache_files_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_hair_curves_ = {
		{&rna_DopeSheet_show_pointclouds, 	&rna_DopeSheet_show_cache_files,
		-1, "show_hair_curves", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Hair",
		"Include visualization of hair related animation data",
		278, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_hair_curves_get, DopeSheet_show_hair_curves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_pointclouds_ = {
		{&rna_DopeSheet_show_volumes, 	&rna_DopeSheet_show_hair_curves,
		-1, "show_pointclouds", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Point Cloud",
		"Include visualization of point cloud related animation data",
		290, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_pointclouds_get, DopeSheet_show_pointclouds_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_volumes_ = {
		{&rna_DopeSheet_show_lightprobes, 	&rna_DopeSheet_show_pointclouds,
		-1, "show_volumes", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Volume",
		"Include visualization of volume related animation data",
		293, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_volumes_get, DopeSheet_show_volumes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_lightprobes_ = {
		{&rna_DopeSheet_show_gpencil, 	&rna_DopeSheet_show_volumes,
		-1, "show_lightprobes", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Light Probe",
		"Include visualization of light probe related animation data",
		287, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_lightprobes_get, DopeSheet_show_lightprobes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_gpencil_ = {
		{&rna_DopeSheet_show_movieclips, 	&rna_DopeSheet_show_lightprobes,
		-1, "show_gpencil", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Grease Pencil",
		"Include visualization of Grease Pencil related animation data and frames",
		282, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_gpencil_get, DopeSheet_show_gpencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_movieclips_ = {
		{&rna_DopeSheet_show_driver_fallback_as_error, 	&rna_DopeSheet_show_gpencil,
		-1, "show_movieclips", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Movie Clips",
		"Include visualization of movie clip related animation data",
		154, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_movieclips_get, DopeSheet_show_movieclips_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_DopeSheet_show_driver_fallback_as_error_ = {
		{nullptr, 	&rna_DopeSheet_show_movieclips,
		-1, "show_driver_fallback_as_error", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Variable Fallback As Error",
		"Include drivers that relied on any fallback values for their evaluation in the Only Show Errors filter, even if the driver evaluation succeeded",
		223, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DopeSheet_show_driver_fallback_as_error_get, DopeSheet_show_driver_fallback_as_error_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_DopeSheet;
	srna->cont.properties = {&rna_DopeSheet_rna_properties, &rna_DopeSheet_show_driver_fallback_as_error};
	srna->identifier = "DopeSheet";
	srna->flag = 516;
	srna->name = "Dope Sheet";
	srna->description = "Settings for filtering the channels shown in animation editors";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_DopeSheet_rna_properties;
	srna->path = rna_DopeSheet_path;
};

/* Action slot */
static CollectionPropertyRNA rna_ActionSlot_rna_properties_;
PropertyRNA &rna_ActionSlot_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_rna_properties_);

static PointerPropertyRNA rna_ActionSlot_rna_type_;
PropertyRNA &rna_ActionSlot_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_rna_type_);

static StringPropertyRNA rna_ActionSlot_identifier_;
PropertyRNA &rna_ActionSlot_identifier = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_identifier_);

static EnumPropertyRNA rna_ActionSlot_target_id_type_;
PropertyRNA &rna_ActionSlot_target_id_type = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_target_id_type_);

static IntPropertyRNA rna_ActionSlot_target_id_type_icon_;
PropertyRNA &rna_ActionSlot_target_id_type_icon = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_target_id_type_icon_);

static StringPropertyRNA rna_ActionSlot_name_display_;
PropertyRNA &rna_ActionSlot_name_display = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_name_display_);

static IntPropertyRNA rna_ActionSlot_handle_;
PropertyRNA &rna_ActionSlot_handle = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_handle_);

static BoolPropertyRNA rna_ActionSlot_active_;
PropertyRNA &rna_ActionSlot_active = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_active_);

static BoolPropertyRNA rna_ActionSlot_select_;
PropertyRNA &rna_ActionSlot_select = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_select_);

static BoolPropertyRNA rna_ActionSlot_show_expanded_;
PropertyRNA &rna_ActionSlot_show_expanded = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_show_expanded_);

static CollectionPropertyRNA rna_ActionSlot_users_users_;
PropertyRNA &rna_ActionSlot_users_users = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_users_users_);

FunctionRNA *rna_ActionSlot_users_func;
static PointerPropertyRNA rna_ActionSlot_duplicate_slot_;
PropertyRNA &rna_ActionSlot_duplicate_slot = reinterpret_cast<PropertyRNA &>(rna_ActionSlot_duplicate_slot_);

FunctionRNA *rna_ActionSlot_duplicate_func;
StructRNA *RNA_ActionSlot;
void register_struct_ActionSlot(BlenderRNA &brna)
{
	rna_ActionSlot_rna_properties_ = {
		{&rna_ActionSlot_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlot_rna_properties_begin, ActionSlot_rna_properties_next, ActionSlot_rna_properties_end, ActionSlot_rna_properties_get, nullptr, nullptr, ActionSlot_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionSlot_rna_type_ = {
		{&rna_ActionSlot_identifier, 	&rna_ActionSlot_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlot_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ActionSlot_identifier_ = {
		{&rna_ActionSlot_target_id_type, 	&rna_ActionSlot_rna_type,
		-1, "identifier", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Slot Identifier",
		"Used when connecting an Action to a data-block, to find the correct slot handle. This is the display name, prefixed by two characters determined by the slot\'s ID type",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {258, 0, 0}, 0,
		rna_ActionSlot_identifier_update, 256376832, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlot_identifier_get, ActionSlot_identifier_length, ActionSlot_identifier_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 258, ""
	};

	static const EnumPropertyItem rna_ActionSlot_target_id_type_items[2] = {
		{0, "UNSPECIFIED", 0, "Unspecified", "Not yet specified. When this slot is first assigned to a data-block, this will be set to the type of that data-block"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ActionSlot_target_id_type_ = {
		{&rna_ActionSlot_target_id_type_icon, 	&rna_ActionSlot_identifier,
		-1, "target_id_type", 16777219, 0, 0, 0, 0, PropertyPathTemplateType(0), "Target ID Type",
		"Type of data-block that this slot is intended to animate; can be set when \'UNSPECIFIED\' but is otherwise read-only",
		0, "ID",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ActionSlot_identifier_update, 256376832, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlot_target_id_type_get, ActionSlot_target_id_type_set, rna_ActionSlot_target_id_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ActionSlot_target_id_type_items, 1, 0
	};

	rna_ActionSlot_target_id_type_icon_ = {
		{&rna_ActionSlot_name_display, 	&rna_ActionSlot_target_id_type,
		-1, "target_id_type_icon", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "target_id_type_icon",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlot_target_id_type_icon_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ActionSlot_name_display_ = {
		{&rna_ActionSlot_handle, 	&rna_ActionSlot_target_id_type_icon,
		-1, "name_display", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Slot Display Name",
		"Name of the slot, for display in the user interface. This name combined with the slot\'s data-block type is unique within its Action",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ActionSlot_identifier_update, 256376837, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlot_name_display_get, ActionSlot_name_display_length, ActionSlot_name_display_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_ActionSlot_handle_ = {
		{&rna_ActionSlot_active, 	&rna_ActionSlot_name_display,
		-1, "handle", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Slot Handle",
		"Number specific to this Slot, unique within the Action.\nThis is used, for example, on a ActionKeyframeStrip to look up the ActionChannelbag for this Slot",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ActionSlot, handle), RawPropertyType(0), nullptr},
		ActionSlot_handle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ActionSlot_active_ = {
		{&rna_ActionSlot_select, 	&rna_ActionSlot_handle,
		-1, "active", 1073741824, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"Whether this is the active slot, can be set by assigning to action.slots.active",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376838, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlot_active_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ActionSlot_select_ = {
		{&rna_ActionSlot_show_expanded, 	&rna_ActionSlot_active,
		-1, "select", 1073741825, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Selection state of the slot",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376838, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlot_select_get, ActionSlot_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ActionSlot_show_expanded_ = {
		{nullptr, 	&rna_ActionSlot_select,
		-1, "show_expanded", 1073741825, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Expanded",
		"Expanded state of the slot",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376838, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionSlot_show_expanded_get, ActionSlot_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ActionSlot;
	srna->cont.properties = {&rna_ActionSlot_rna_properties, &rna_ActionSlot_show_expanded};
	srna->identifier = "ActionSlot";
	srna->flag = 516;
	srna->name = "Action slot";
	srna->description = "Identifier for a set of channels in this Action, that can be used by a data-block to specify what it gets animated by";
	srna->translation_context = "*";
	srna->icon = 504;
	srna->nameproperty = &rna_ActionSlot_identifier;
	srna->iteratorproperty = &rna_ActionSlot_rna_properties;
	srna->path = rna_ActionSlot_path;
	{
	rna_ActionSlot_users_users_ = {
		{nullptr, 	nullptr,
		-1, "users", 128, 0, 2, 0, 0, PropertyPathTemplateType(0), "users",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, RNA_ID
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionSlot_users_users, &rna_ActionSlot_users_users};
		func->identifier = "users";
		func->flag = 4;
		func->description = "Return the data-blocks that are animated by this slot of this action";
		func->call = ActionSlot_users_call;
		func->c_ret = &rna_ActionSlot_users_users;
		rna_ActionSlot_users_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionSlot_duplicate_slot_ = {
		{nullptr, 	nullptr,
		-1, "slot", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Duplicated Slot",
		"The slot created by duplicating this one",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionSlot
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionSlot_duplicate_slot, &rna_ActionSlot_duplicate_slot};
		func->identifier = "duplicate";
		func->flag = 2048;
		func->description = "Duplicate this slot, including all the animation data associated with it";
		func->call = ActionSlot_duplicate_call;
		func->c_ret = &rna_ActionSlot_duplicate_slot;
		rna_ActionSlot_duplicate_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Action Layer */
static CollectionPropertyRNA rna_ActionLayer_rna_properties_;
PropertyRNA &rna_ActionLayer_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionLayer_rna_properties_);

static PointerPropertyRNA rna_ActionLayer_rna_type_;
PropertyRNA &rna_ActionLayer_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionLayer_rna_type_);

static StringPropertyRNA rna_ActionLayer_name_;
PropertyRNA &rna_ActionLayer_name = reinterpret_cast<PropertyRNA &>(rna_ActionLayer_name_);

static CollectionPropertyRNA rna_ActionLayer_strips_;
PropertyRNA &rna_ActionLayer_strips = reinterpret_cast<PropertyRNA &>(rna_ActionLayer_strips_);

StructRNA *RNA_ActionLayer;
void register_struct_ActionLayer(BlenderRNA &brna)
{
	rna_ActionLayer_rna_properties_ = {
		{&rna_ActionLayer_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionLayer_rna_properties_begin, ActionLayer_rna_properties_next, ActionLayer_rna_properties_end, ActionLayer_rna_properties_get, nullptr, nullptr, ActionLayer_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionLayer_rna_type_ = {
		{&rna_ActionLayer_name, 	&rna_ActionLayer_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionLayer_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ActionLayer_name_ = {
		{&rna_ActionLayer_strips, 	&rna_ActionLayer_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionLayer_name_get, ActionLayer_name_length, ActionLayer_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_ActionLayer_strips_ = {
		{nullptr, 	&rna_ActionLayer_name,
		-1, "strips", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strips",
		"The list of strips that are on this animation layer",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ActionStrips},
		ActionLayer_strips_begin, ActionLayer_strips_next, ActionLayer_strips_end, ActionLayer_strips_get, ActionLayer_strips_length, ActionLayer_strips_lookup_int, nullptr, nullptr, RNA_ActionStrip
	};

	StructRNA *srna = RNA_ActionLayer;
	srna->cont.properties = {&rna_ActionLayer_rna_properties, &rna_ActionLayer_strips};
	srna->identifier = "ActionLayer";
	srna->flag = 516;
	srna->name = "Action Layer";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_ActionLayer_name;
	srna->iteratorproperty = &rna_ActionLayer_rna_properties;
	srna->path = rna_ActionLayer_path;
};

/* Action Strips */
static CollectionPropertyRNA rna_ActionStrips_rna_properties_;
PropertyRNA &rna_ActionStrips_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionStrips_rna_properties_);

static PointerPropertyRNA rna_ActionStrips_rna_type_;
PropertyRNA &rna_ActionStrips_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionStrips_rna_type_);

static EnumPropertyRNA rna_ActionStrips_new_type_;
PropertyRNA &rna_ActionStrips_new_type = reinterpret_cast<PropertyRNA &>(rna_ActionStrips_new_type_);

static PointerPropertyRNA rna_ActionStrips_new_strip_;
PropertyRNA &rna_ActionStrips_new_strip = reinterpret_cast<PropertyRNA &>(rna_ActionStrips_new_strip_);

FunctionRNA *rna_ActionStrips_new_func;
static PointerPropertyRNA rna_ActionStrips_remove_anim_strip_;
PropertyRNA &rna_ActionStrips_remove_anim_strip = reinterpret_cast<PropertyRNA &>(rna_ActionStrips_remove_anim_strip_);

FunctionRNA *rna_ActionStrips_remove_func;
StructRNA *RNA_ActionStrips;
void register_struct_ActionStrips(BlenderRNA &brna)
{
	rna_ActionStrips_rna_properties_ = {
		{&rna_ActionStrips_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionStrips_rna_properties_begin, ActionStrips_rna_properties_next, ActionStrips_rna_properties_end, ActionStrips_rna_properties_get, nullptr, nullptr, ActionStrips_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionStrips_rna_type_ = {
		{nullptr, 	&rna_ActionStrips_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionStrips_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ActionStrips;
	srna->cont.properties = {&rna_ActionStrips_rna_properties, &rna_ActionStrips_rna_type};
	srna->identifier = "ActionStrips";
	srna->flag = 516;
	srna->name = "Action Strips";
	srna->description = "Collection of animation strips";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ActionStrips_rna_properties;
	{
	static const EnumPropertyItem rna_ActionStrips_new_type_items[2] = {
		{0, "KEYFRAME", 0, "Keyframe", "Strip containing keyframes on F-Curves"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ActionStrips_new_type_ = {
		{&rna_ActionStrips_new_strip, 	nullptr,
		-1, "type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"The type of strip to create",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ActionStrips_new_type_items, 1, 0
	};
	rna_ActionStrips_new_strip_ = {
		{nullptr, 	&rna_ActionStrips_new_type,
		-1, "strip", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created animation strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionStrip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionStrips_new_type, &rna_ActionStrips_new_strip};
		func->identifier = "new";
		func->flag = 2072;
		func->description = "Add a new strip to the layer. Currently a layer can only have one strip, with infinite boundaries.";
		func->call = ActionStrips_new_call;
		func->c_ret = &rna_ActionStrips_new_strip;
		rna_ActionStrips_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionStrips_remove_anim_strip_ = {
		{nullptr, 	nullptr,
		-1, "anim_strip", 8388608, 0, 5, 0, 0, PropertyPathTemplateType(0), "Animation Strip",
		"The strip to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionStrip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionStrips_remove_anim_strip, &rna_ActionStrips_remove_anim_strip};
		func->identifier = "remove";
		func->flag = 2072;
		func->description = "Remove the strip from the animation layer";
		func->call = ActionStrips_remove_call;
		rna_ActionStrips_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Action Strip */
static CollectionPropertyRNA rna_ActionStrip_rna_properties_;
PropertyRNA &rna_ActionStrip_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionStrip_rna_properties_);

static PointerPropertyRNA rna_ActionStrip_rna_type_;
PropertyRNA &rna_ActionStrip_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionStrip_rna_type_);

static EnumPropertyRNA rna_ActionStrip_type_;
PropertyRNA &rna_ActionStrip_type = reinterpret_cast<PropertyRNA &>(rna_ActionStrip_type_);

StructRNA *RNA_ActionStrip;
void register_struct_ActionStrip(BlenderRNA &brna)
{
	rna_ActionStrip_rna_properties_ = {
		{&rna_ActionStrip_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionStrip_rna_properties_begin, ActionStrip_rna_properties_next, ActionStrip_rna_properties_end, ActionStrip_rna_properties_get, nullptr, nullptr, ActionStrip_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionStrip_rna_type_ = {
		{&rna_ActionStrip_type, 	&rna_ActionStrip_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionStrip_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_ActionStrip_type_items[2] = {
		{0, "KEYFRAME", 0, "Keyframe", "Strip with a set of F-Curves for each action slot"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ActionStrip_type_ = {
		{nullptr, 	&rna_ActionStrip_rna_type,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ActionStrip, strip_type), RawPropertyType(10), nullptr},
		ActionStrip_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ActionStrip_type_items, 1, 0
	};

	StructRNA *srna = RNA_ActionStrip;
	srna->cont.properties = {&rna_ActionStrip_rna_properties, &rna_ActionStrip_type};
	srna->identifier = "ActionStrip";
	srna->flag = 516;
	srna->name = "Action Strip";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ActionStrip_rna_properties;
	srna->refine = rna_ActionStrip_refine;
	srna->path = rna_ActionStrip_path;
};

/* Keyframe Animation Strip */
static CollectionPropertyRNA rna_ActionKeyframeStrip_channelbags_;
PropertyRNA &rna_ActionKeyframeStrip_channelbags = reinterpret_cast<PropertyRNA &>(rna_ActionKeyframeStrip_channelbags_);

static PointerPropertyRNA rna_ActionKeyframeStrip_channelbag_slot_;
PropertyRNA &rna_ActionKeyframeStrip_channelbag_slot = reinterpret_cast<PropertyRNA &>(rna_ActionKeyframeStrip_channelbag_slot_);

static BoolPropertyRNA rna_ActionKeyframeStrip_channelbag_ensure_;
PropertyRNA &rna_ActionKeyframeStrip_channelbag_ensure = reinterpret_cast<PropertyRNA &>(rna_ActionKeyframeStrip_channelbag_ensure_);

static PointerPropertyRNA rna_ActionKeyframeStrip_channelbag_channels_;
PropertyRNA &rna_ActionKeyframeStrip_channelbag_channels = reinterpret_cast<PropertyRNA &>(rna_ActionKeyframeStrip_channelbag_channels_);

FunctionRNA *rna_ActionKeyframeStrip_channelbag_func;
static PointerPropertyRNA rna_ActionKeyframeStrip_key_insert_slot_;
PropertyRNA &rna_ActionKeyframeStrip_key_insert_slot = reinterpret_cast<PropertyRNA &>(rna_ActionKeyframeStrip_key_insert_slot_);

static StringPropertyRNA rna_ActionKeyframeStrip_key_insert_data_path_;
PropertyRNA &rna_ActionKeyframeStrip_key_insert_data_path = reinterpret_cast<PropertyRNA &>(rna_ActionKeyframeStrip_key_insert_data_path_);

static IntPropertyRNA rna_ActionKeyframeStrip_key_insert_array_index_;
PropertyRNA &rna_ActionKeyframeStrip_key_insert_array_index = reinterpret_cast<PropertyRNA &>(rna_ActionKeyframeStrip_key_insert_array_index_);

static FloatPropertyRNA rna_ActionKeyframeStrip_key_insert_value_;
PropertyRNA &rna_ActionKeyframeStrip_key_insert_value = reinterpret_cast<PropertyRNA &>(rna_ActionKeyframeStrip_key_insert_value_);

static FloatPropertyRNA rna_ActionKeyframeStrip_key_insert_time_;
PropertyRNA &rna_ActionKeyframeStrip_key_insert_time = reinterpret_cast<PropertyRNA &>(rna_ActionKeyframeStrip_key_insert_time_);

static BoolPropertyRNA rna_ActionKeyframeStrip_key_insert_success_;
PropertyRNA &rna_ActionKeyframeStrip_key_insert_success = reinterpret_cast<PropertyRNA &>(rna_ActionKeyframeStrip_key_insert_success_);

FunctionRNA *rna_ActionKeyframeStrip_key_insert_func;
StructRNA *RNA_ActionKeyframeStrip;
void register_struct_ActionKeyframeStrip(BlenderRNA &brna)
{
	rna_ActionKeyframeStrip_channelbags_ = {
		{nullptr, 	nullptr,
		-1, "channelbags", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "channelbags",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ActionChannelbags},
		ActionKeyframeStrip_channelbags_begin, ActionKeyframeStrip_channelbags_next, ActionKeyframeStrip_channelbags_end, ActionKeyframeStrip_channelbags_get, ActionKeyframeStrip_channelbags_length, ActionKeyframeStrip_channelbags_lookup_int, nullptr, nullptr, RNA_ActionChannelbag
	};

	StructRNA *srna = RNA_ActionKeyframeStrip;
	srna->cont.properties = {&rna_ActionKeyframeStrip_channelbags, &rna_ActionKeyframeStrip_channelbags};
	srna->identifier = "ActionKeyframeStrip";
	srna->flag = 516;
	srna->name = "Keyframe Animation Strip";
	srna->description = "Strip with a set of F-Curves for each action slot";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ActionStrip_rna_properties;
	srna->base = RNA_ActionStrip;
	srna->refine = rna_ActionStrip_refine;
	srna->path = rna_ActionStrip_path;
	{
	rna_ActionKeyframeStrip_channelbag_slot_ = {
		{&rna_ActionKeyframeStrip_channelbag_ensure, 	nullptr,
		-1, "slot", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Slot",
		"The slot for which to find the channelbag",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionSlot
	};
	rna_ActionKeyframeStrip_channelbag_ensure_ = {
		{&rna_ActionKeyframeStrip_channelbag_channels, 	&rna_ActionKeyframeStrip_channelbag_slot,
		-1, "ensure", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Create if necessary",
		"Ensure the channelbag exists for this slot, creating it if necessary",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_ActionKeyframeStrip_channelbag_channels_ = {
		{nullptr, 	&rna_ActionKeyframeStrip_channelbag_ensure,
		-1, "channels", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Channels",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionChannelbag
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionKeyframeStrip_channelbag_slot, &rna_ActionKeyframeStrip_channelbag_channels};
		func->identifier = "channelbag";
		func->flag = 2064;
		func->description = "Find the ActionChannelbag for a specific Slot";
		func->call = ActionKeyframeStrip_channelbag_call;
		func->c_ret = &rna_ActionKeyframeStrip_channelbag_channels;
		rna_ActionKeyframeStrip_channelbag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionKeyframeStrip_key_insert_slot_ = {
		{&rna_ActionKeyframeStrip_key_insert_data_path, 	nullptr,
		-1, "slot", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Slot",
		"The slot that identifies which \'thing\' should be keyed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionSlot
	};
	rna_ActionKeyframeStrip_key_insert_data_path_ = {
		{&rna_ActionKeyframeStrip_key_insert_array_index, 	&rna_ActionKeyframeStrip_key_insert_slot,
		-1, "data_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"F-Curve data path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_ActionKeyframeStrip_key_insert_array_index_ = {
		{&rna_ActionKeyframeStrip_key_insert_value, 	&rna_ActionKeyframeStrip_key_insert_data_path,
		-1, "array_index", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Array Index",
		"Index of the animated array element, or -1 if the property is not an array",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 4, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
	rna_ActionKeyframeStrip_key_insert_value_ = {
		{&rna_ActionKeyframeStrip_key_insert_time, 	&rna_ActionKeyframeStrip_key_insert_array_index,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value to key",
		"Value of the animated property",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_ActionKeyframeStrip_key_insert_time_ = {
		{&rna_ActionKeyframeStrip_key_insert_success, 	&rna_ActionKeyframeStrip_key_insert_value,
		-1, "time", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Time of the key",
		"Time, in frames, of the key",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_ActionKeyframeStrip_key_insert_success_ = {
		{nullptr, 	&rna_ActionKeyframeStrip_key_insert_time,
		-1, "success", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Success",
		"Whether the key was successfully inserted",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionKeyframeStrip_key_insert_slot, &rna_ActionKeyframeStrip_key_insert_success};
		func->identifier = "key_insert";
		func->flag = 2068;
		func->description = "key_insert";
		func->call = ActionKeyframeStrip_key_insert_call;
		func->c_ret = &rna_ActionKeyframeStrip_key_insert_success;
		rna_ActionKeyframeStrip_key_insert_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Animation Channels for Slots */
static CollectionPropertyRNA rna_ActionChannelbags_rna_properties_;
PropertyRNA &rna_ActionChannelbags_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbags_rna_properties_);

static PointerPropertyRNA rna_ActionChannelbags_rna_type_;
PropertyRNA &rna_ActionChannelbags_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbags_rna_type_);

static PointerPropertyRNA rna_ActionChannelbags_new_slot_;
PropertyRNA &rna_ActionChannelbags_new_slot = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbags_new_slot_);

static PointerPropertyRNA rna_ActionChannelbags_new_channelbag_;
PropertyRNA &rna_ActionChannelbags_new_channelbag = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbags_new_channelbag_);

FunctionRNA *rna_ActionChannelbags_new_func;
static PointerPropertyRNA rna_ActionChannelbags_remove_channelbag_;
PropertyRNA &rna_ActionChannelbags_remove_channelbag = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbags_remove_channelbag_);

FunctionRNA *rna_ActionChannelbags_remove_func;
StructRNA *RNA_ActionChannelbags;
void register_struct_ActionChannelbags(BlenderRNA &brna)
{
	rna_ActionChannelbags_rna_properties_ = {
		{&rna_ActionChannelbags_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionChannelbags_rna_properties_begin, ActionChannelbags_rna_properties_next, ActionChannelbags_rna_properties_end, ActionChannelbags_rna_properties_get, nullptr, nullptr, ActionChannelbags_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionChannelbags_rna_type_ = {
		{nullptr, 	&rna_ActionChannelbags_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionChannelbags_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ActionChannelbags;
	srna->cont.properties = {&rna_ActionChannelbags_rna_properties, &rna_ActionChannelbags_rna_type};
	srna->identifier = "ActionChannelbags";
	srna->flag = 516;
	srna->name = "Animation Channels for Slots";
	srna->description = "For each action slot, a list of animation channels that are meant for that slot";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ActionChannelbags_rna_properties;
	{
	rna_ActionChannelbags_new_slot_ = {
		{&rna_ActionChannelbags_new_channelbag, 	nullptr,
		-1, "slot", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action Slot",
		"The slot that should be animated by this channelbag",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionSlot
	};
	rna_ActionChannelbags_new_channelbag_ = {
		{nullptr, 	&rna_ActionChannelbags_new_slot,
		-1, "channelbag", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created channelbag",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionChannelbag
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionChannelbags_new_slot, &rna_ActionChannelbags_new_channelbag};
		func->identifier = "new";
		func->flag = 2072;
		func->description = "Add a new channelbag to the strip, to contain animation channels for a specific slot";
		func->call = ActionChannelbags_new_call;
		func->c_ret = &rna_ActionChannelbags_new_channelbag;
		rna_ActionChannelbags_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionChannelbags_remove_channelbag_ = {
		{nullptr, 	nullptr,
		-1, "channelbag", 8388608, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The channelbag to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionChannelbag
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionChannelbags_remove_channelbag, &rna_ActionChannelbags_remove_channelbag};
		func->identifier = "remove";
		func->flag = 2072;
		func->description = "Remove the channelbag from the strip";
		func->call = ActionChannelbags_remove_call;
		rna_ActionChannelbags_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Animation Channel Bag */
static CollectionPropertyRNA rna_ActionChannelbag_rna_properties_;
PropertyRNA &rna_ActionChannelbag_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbag_rna_properties_);

static PointerPropertyRNA rna_ActionChannelbag_rna_type_;
PropertyRNA &rna_ActionChannelbag_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbag_rna_type_);

static IntPropertyRNA rna_ActionChannelbag_slot_handle_;
PropertyRNA &rna_ActionChannelbag_slot_handle = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbag_slot_handle_);

static PointerPropertyRNA rna_ActionChannelbag_slot_;
PropertyRNA &rna_ActionChannelbag_slot = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbag_slot_);

static CollectionPropertyRNA rna_ActionChannelbag_fcurves_;
PropertyRNA &rna_ActionChannelbag_fcurves = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbag_fcurves_);

static CollectionPropertyRNA rna_ActionChannelbag_groups_;
PropertyRNA &rna_ActionChannelbag_groups = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbag_groups_);

StructRNA *RNA_ActionChannelbag;
void register_struct_ActionChannelbag(BlenderRNA &brna)
{
	rna_ActionChannelbag_rna_properties_ = {
		{&rna_ActionChannelbag_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionChannelbag_rna_properties_begin, ActionChannelbag_rna_properties_next, ActionChannelbag_rna_properties_end, ActionChannelbag_rna_properties_get, nullptr, nullptr, ActionChannelbag_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionChannelbag_rna_type_ = {
		{&rna_ActionChannelbag_slot_handle, 	&rna_ActionChannelbag_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionChannelbag_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ActionChannelbag_slot_handle_ = {
		{&rna_ActionChannelbag_slot, 	&rna_ActionChannelbag_rna_type,
		-1, "slot_handle", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "slot_handle",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ActionChannelbag, slot_handle), RawPropertyType(0), nullptr},
		ActionChannelbag_slot_handle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ActionChannelbag_slot_ = {
		{&rna_ActionChannelbag_fcurves, 	&rna_ActionChannelbag_slot_handle,
		-1, "slot", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Slot",
		"The Slot that the Channelbag\'s animation data is for",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionChannelbag_slot_get, nullptr, nullptr, nullptr,RNA_ActionSlot
	};

	rna_ActionChannelbag_fcurves_ = {
		{&rna_ActionChannelbag_groups, 	&rna_ActionChannelbag_slot,
		-1, "fcurves", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "F-Curves",
		"The individual F-Curves that animate the slot",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ActionChannelbagFCurves},
		ActionChannelbag_fcurves_begin, ActionChannelbag_fcurves_next, ActionChannelbag_fcurves_end, ActionChannelbag_fcurves_get, ActionChannelbag_fcurves_length, ActionChannelbag_fcurves_lookup_int, nullptr, nullptr, RNA_FCurve
	};

	rna_ActionChannelbag_groups_ = {
		{nullptr, 	&rna_ActionChannelbag_fcurves,
		-1, "groups", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "F-Curve Groups",
		"Groupings of F-Curves for display purposes, in e.g. the dopesheet and graph editor",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ActionChannelbagGroups},
		ActionChannelbag_groups_begin, ActionChannelbag_groups_next, ActionChannelbag_groups_end, ActionChannelbag_groups_get, ActionChannelbag_groups_length, ActionChannelbag_groups_lookup_int, nullptr, nullptr, RNA_ActionGroup
	};

	StructRNA *srna = RNA_ActionChannelbag;
	srna->cont.properties = {&rna_ActionChannelbag_rna_properties, &rna_ActionChannelbag_groups};
	srna->identifier = "ActionChannelbag";
	srna->flag = 516;
	srna->name = "Animation Channel Bag";
	srna->description = "Collection of animation channels, typically associated with an action slot";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ActionChannelbag_rna_properties;
	srna->path = rna_Channelbag_path;
};

/* F-Curves */
static CollectionPropertyRNA rna_ActionChannelbagFCurves_rna_properties_;
PropertyRNA &rna_ActionChannelbagFCurves_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_rna_properties_);

static PointerPropertyRNA rna_ActionChannelbagFCurves_rna_type_;
PropertyRNA &rna_ActionChannelbagFCurves_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_rna_type_);

static StringPropertyRNA rna_ActionChannelbagFCurves_new_data_path_;
PropertyRNA &rna_ActionChannelbagFCurves_new_data_path = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_new_data_path_);

static IntPropertyRNA rna_ActionChannelbagFCurves_new_index_;
PropertyRNA &rna_ActionChannelbagFCurves_new_index = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_new_index_);

static StringPropertyRNA rna_ActionChannelbagFCurves_new_group_name_;
PropertyRNA &rna_ActionChannelbagFCurves_new_group_name = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_new_group_name_);

static PointerPropertyRNA rna_ActionChannelbagFCurves_new_fcurve_;
PropertyRNA &rna_ActionChannelbagFCurves_new_fcurve = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_new_fcurve_);

FunctionRNA *rna_ActionChannelbagFCurves_new_func;
static PointerPropertyRNA rna_ActionChannelbagFCurves_new_from_fcurve_source_;
PropertyRNA &rna_ActionChannelbagFCurves_new_from_fcurve_source = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_new_from_fcurve_source_);

static StringPropertyRNA rna_ActionChannelbagFCurves_new_from_fcurve_data_path_;
PropertyRNA &rna_ActionChannelbagFCurves_new_from_fcurve_data_path = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_new_from_fcurve_data_path_);

static PointerPropertyRNA rna_ActionChannelbagFCurves_new_from_fcurve_fcurve_;
PropertyRNA &rna_ActionChannelbagFCurves_new_from_fcurve_fcurve = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_new_from_fcurve_fcurve_);

FunctionRNA *rna_ActionChannelbagFCurves_new_from_fcurve_func;
static StringPropertyRNA rna_ActionChannelbagFCurves_ensure_data_path_;
PropertyRNA &rna_ActionChannelbagFCurves_ensure_data_path = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_ensure_data_path_);

static IntPropertyRNA rna_ActionChannelbagFCurves_ensure_index_;
PropertyRNA &rna_ActionChannelbagFCurves_ensure_index = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_ensure_index_);

static StringPropertyRNA rna_ActionChannelbagFCurves_ensure_group_name_;
PropertyRNA &rna_ActionChannelbagFCurves_ensure_group_name = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_ensure_group_name_);

static PointerPropertyRNA rna_ActionChannelbagFCurves_ensure_fcurve_;
PropertyRNA &rna_ActionChannelbagFCurves_ensure_fcurve = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_ensure_fcurve_);

FunctionRNA *rna_ActionChannelbagFCurves_ensure_func;
static StringPropertyRNA rna_ActionChannelbagFCurves_find_data_path_;
PropertyRNA &rna_ActionChannelbagFCurves_find_data_path = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_find_data_path_);

static IntPropertyRNA rna_ActionChannelbagFCurves_find_index_;
PropertyRNA &rna_ActionChannelbagFCurves_find_index = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_find_index_);

static PointerPropertyRNA rna_ActionChannelbagFCurves_find_fcurve_;
PropertyRNA &rna_ActionChannelbagFCurves_find_fcurve = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_find_fcurve_);

FunctionRNA *rna_ActionChannelbagFCurves_find_func;
static PointerPropertyRNA rna_ActionChannelbagFCurves_remove_fcurve_;
PropertyRNA &rna_ActionChannelbagFCurves_remove_fcurve = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagFCurves_remove_fcurve_);

FunctionRNA *rna_ActionChannelbagFCurves_remove_func;
FunctionRNA *rna_ActionChannelbagFCurves_clear_func;
StructRNA *RNA_ActionChannelbagFCurves;
void register_struct_ActionChannelbagFCurves(BlenderRNA &brna)
{
	rna_ActionChannelbagFCurves_rna_properties_ = {
		{&rna_ActionChannelbagFCurves_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionChannelbagFCurves_rna_properties_begin, ActionChannelbagFCurves_rna_properties_next, ActionChannelbagFCurves_rna_properties_end, ActionChannelbagFCurves_rna_properties_get, nullptr, nullptr, ActionChannelbagFCurves_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionChannelbagFCurves_rna_type_ = {
		{nullptr, 	&rna_ActionChannelbagFCurves_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionChannelbagFCurves_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ActionChannelbagFCurves;
	srna->cont.properties = {&rna_ActionChannelbagFCurves_rna_properties, &rna_ActionChannelbagFCurves_rna_type};
	srna->identifier = "ActionChannelbagFCurves";
	srna->flag = 516;
	srna->name = "F-Curves";
	srna->description = "Collection of F-Curves for a specific action slot, on a specific strip";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ActionChannelbagFCurves_rna_properties;
	{
	rna_ActionChannelbagFCurves_new_data_path_ = {
		{&rna_ActionChannelbagFCurves_new_index, 	nullptr,
		-1, "data_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"F-Curve data path to use",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_ActionChannelbagFCurves_new_index_ = {
		{&rna_ActionChannelbagFCurves_new_group_name, 	&rna_ActionChannelbagFCurves_new_data_path,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Array index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_ActionChannelbagFCurves_new_group_name_ = {
		{&rna_ActionChannelbagFCurves_new_fcurve, 	&rna_ActionChannelbagFCurves_new_index,
		-1, "group_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Group Name",
		"Name of the Group for this F-Curve, will be created if it does not exist yet",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_ActionChannelbagFCurves_new_fcurve_ = {
		{nullptr, 	&rna_ActionChannelbagFCurves_new_group_name,
		-1, "fcurve", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created F-Curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionChannelbagFCurves_new_data_path, &rna_ActionChannelbagFCurves_new_fcurve};
		func->identifier = "new";
		func->flag = 20;
		func->description = "Add an F-Curve to the channelbag";
		func->call = ActionChannelbagFCurves_new_call;
		func->c_ret = &rna_ActionChannelbagFCurves_new_fcurve;
		rna_ActionChannelbagFCurves_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionChannelbagFCurves_new_from_fcurve_source_ = {
		{&rna_ActionChannelbagFCurves_new_from_fcurve_data_path, 	nullptr,
		-1, "source", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Source F-Curve",
		"The F-Curve to copy",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
	rna_ActionChannelbagFCurves_new_from_fcurve_data_path_ = {
		{&rna_ActionChannelbagFCurves_new_from_fcurve_fcurve, 	&rna_ActionChannelbagFCurves_new_from_fcurve_source,
		-1, "data_path", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"F-Curve data path to use. If not provided, this will use the same data path as the given F-Curve",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_ActionChannelbagFCurves_new_from_fcurve_fcurve_ = {
		{nullptr, 	&rna_ActionChannelbagFCurves_new_from_fcurve_data_path,
		-1, "fcurve", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created F-Curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionChannelbagFCurves_new_from_fcurve_source, &rna_ActionChannelbagFCurves_new_from_fcurve_fcurve};
		func->identifier = "new_from_fcurve";
		func->flag = 2064;
		func->description = "Copy an F-Curve into the channelbag. The original F-Curve is unchanged";
		func->call = ActionChannelbagFCurves_new_from_fcurve_call;
		func->c_ret = &rna_ActionChannelbagFCurves_new_from_fcurve_fcurve;
		rna_ActionChannelbagFCurves_new_from_fcurve_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionChannelbagFCurves_ensure_data_path_ = {
		{&rna_ActionChannelbagFCurves_ensure_index, 	nullptr,
		-1, "data_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"F-Curve data path to use",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_ActionChannelbagFCurves_ensure_index_ = {
		{&rna_ActionChannelbagFCurves_ensure_group_name, 	&rna_ActionChannelbagFCurves_ensure_data_path,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Array index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_ActionChannelbagFCurves_ensure_group_name_ = {
		{&rna_ActionChannelbagFCurves_ensure_fcurve, 	&rna_ActionChannelbagFCurves_ensure_index,
		-1, "group_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Group Name",
		"Name of the Group for this F-Curve, will be created if it does not exist yet. This parameter is ignored if the F-Curve already exists",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_ActionChannelbagFCurves_ensure_fcurve_ = {
		{nullptr, 	&rna_ActionChannelbagFCurves_ensure_group_name,
		-1, "fcurve", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Found or newly created F-Curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionChannelbagFCurves_ensure_data_path, &rna_ActionChannelbagFCurves_ensure_fcurve};
		func->identifier = "ensure";
		func->flag = 20;
		func->description = "Returns the F-Curve if it already exists, and creates it if necessary";
		func->call = ActionChannelbagFCurves_ensure_call;
		func->c_ret = &rna_ActionChannelbagFCurves_ensure_fcurve;
		rna_ActionChannelbagFCurves_ensure_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionChannelbagFCurves_find_data_path_ = {
		{&rna_ActionChannelbagFCurves_find_index, 	nullptr,
		-1, "data_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"F-Curve data path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_ActionChannelbagFCurves_find_index_ = {
		{&rna_ActionChannelbagFCurves_find_fcurve, 	&rna_ActionChannelbagFCurves_find_data_path,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Array index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_ActionChannelbagFCurves_find_fcurve_ = {
		{nullptr, 	&rna_ActionChannelbagFCurves_find_index,
		-1, "fcurve", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The found F-Curve, or None if it does not exist",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionChannelbagFCurves_find_data_path, &rna_ActionChannelbagFCurves_find_fcurve};
		func->identifier = "find";
		func->flag = 16;
		func->description = "Find an F-Curve. Note that this function performs a linear scan of all F-Curves in the channelbag.";
		func->call = ActionChannelbagFCurves_find_call;
		func->c_ret = &rna_ActionChannelbagFCurves_find_fcurve;
		rna_ActionChannelbagFCurves_find_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionChannelbagFCurves_remove_fcurve_ = {
		{nullptr, 	nullptr,
		-1, "fcurve", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"F-Curve to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionChannelbagFCurves_remove_fcurve, &rna_ActionChannelbagFCurves_remove_fcurve};
		func->identifier = "remove";
		func->flag = 2072;
		func->description = "Remove F-Curve";
		func->call = ActionChannelbagFCurves_remove_call;
		rna_ActionChannelbagFCurves_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 2056;
		func->description = "Remove all F-Curves from this channelbag";
		func->call = ActionChannelbagFCurves_clear_call;
		rna_ActionChannelbagFCurves_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* F-Curve Groups */
static CollectionPropertyRNA rna_ActionChannelbagGroups_rna_properties_;
PropertyRNA &rna_ActionChannelbagGroups_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagGroups_rna_properties_);

static PointerPropertyRNA rna_ActionChannelbagGroups_rna_type_;
PropertyRNA &rna_ActionChannelbagGroups_rna_type = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagGroups_rna_type_);

static StringPropertyRNA rna_ActionChannelbagGroups_new_name_;
PropertyRNA &rna_ActionChannelbagGroups_new_name = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagGroups_new_name_);

static PointerPropertyRNA rna_ActionChannelbagGroups_new_action_group_;
PropertyRNA &rna_ActionChannelbagGroups_new_action_group = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagGroups_new_action_group_);

FunctionRNA *rna_ActionChannelbagGroups_new_func;
static PointerPropertyRNA rna_ActionChannelbagGroups_remove_action_group_;
PropertyRNA &rna_ActionChannelbagGroups_remove_action_group = reinterpret_cast<PropertyRNA &>(rna_ActionChannelbagGroups_remove_action_group_);

FunctionRNA *rna_ActionChannelbagGroups_remove_func;
StructRNA *RNA_ActionChannelbagGroups;
void register_struct_ActionChannelbagGroups(BlenderRNA &brna)
{
	rna_ActionChannelbagGroups_rna_properties_ = {
		{&rna_ActionChannelbagGroups_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionChannelbagGroups_rna_properties_begin, ActionChannelbagGroups_rna_properties_next, ActionChannelbagGroups_rna_properties_end, ActionChannelbagGroups_rna_properties_get, nullptr, nullptr, ActionChannelbagGroups_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ActionChannelbagGroups_rna_type_ = {
		{nullptr, 	&rna_ActionChannelbagGroups_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ActionChannelbagGroups_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ActionChannelbagGroups;
	srna->cont.properties = {&rna_ActionChannelbagGroups_rna_properties, &rna_ActionChannelbagGroups_rna_type};
	srna->identifier = "ActionChannelbagGroups";
	srna->flag = 516;
	srna->name = "F-Curve Groups";
	srna->description = "Collection of f-curve groups";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ActionChannelbagGroups_rna_properties;
	{
	rna_ActionChannelbagGroups_new_name_ = {
		{&rna_ActionChannelbagGroups_new_action_group, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the action group",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Group"
	};
	rna_ActionChannelbagGroups_new_action_group_ = {
		{nullptr, 	&rna_ActionChannelbagGroups_new_name,
		-1, "action_group", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created action group",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionChannelbagGroups_new_name, &rna_ActionChannelbagGroups_new_action_group};
		func->identifier = "new";
		func->description = "Create a new action group and add it to the action";
		func->call = ActionChannelbagGroups_new_call;
		func->c_ret = &rna_ActionChannelbagGroups_new_action_group;
		rna_ActionChannelbagGroups_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ActionChannelbagGroups_remove_action_group_ = {
		{nullptr, 	nullptr,
		-1, "action_group", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Action group to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ActionGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ActionChannelbagGroups_remove_action_group, &rna_ActionChannelbagGroups_remove_action_group};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove action group";
		func->call = ActionChannelbagGroups_remove_call;
		rna_ActionChannelbagGroups_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
