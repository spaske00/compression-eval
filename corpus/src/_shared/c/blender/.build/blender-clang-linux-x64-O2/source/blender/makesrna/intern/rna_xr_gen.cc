
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

#include "rna_xr.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_XrActionMap_rna_properties;
extern PropertyRNA &rna_XrActionMap_rna_type;
extern PropertyRNA &rna_XrActionMap_name;
extern PropertyRNA &rna_XrActionMap_actionmap_items;
extern PropertyRNA &rna_XrActionMap_selected_item;


extern PropertyRNA &rna_XrActionMapItems_rna_properties;
extern PropertyRNA &rna_XrActionMapItems_rna_type;

extern FunctionRNA *rna_XrActionMapItems_new_func;
extern PropertyRNA &rna_XrActionMapItems_new_name;
extern PropertyRNA &rna_XrActionMapItems_new_replace_existing;
extern PropertyRNA &rna_XrActionMapItems_new_item;

extern FunctionRNA *rna_XrActionMapItems_new_from_item_func;
extern PropertyRNA &rna_XrActionMapItems_new_from_item_item;
extern PropertyRNA &rna_XrActionMapItems_new_from_item_result;

extern FunctionRNA *rna_XrActionMapItems_remove_func;
extern PropertyRNA &rna_XrActionMapItems_remove_item;

extern FunctionRNA *rna_XrActionMapItems_find_func;
extern PropertyRNA &rna_XrActionMapItems_find_name;
extern PropertyRNA &rna_XrActionMapItems_find_item;



extern PropertyRNA &rna_XrUserPath_rna_properties;
extern PropertyRNA &rna_XrUserPath_rna_type;
extern PropertyRNA &rna_XrUserPath_path;


extern PropertyRNA &rna_XrActionMapItem_rna_properties;
extern PropertyRNA &rna_XrActionMapItem_rna_type;
extern PropertyRNA &rna_XrActionMapItem_name;
extern PropertyRNA &rna_XrActionMapItem_type;
extern PropertyRNA &rna_XrActionMapItem_user_paths;
extern PropertyRNA &rna_XrActionMapItem_op;
extern PropertyRNA &rna_XrActionMapItem_op_name;
extern PropertyRNA &rna_XrActionMapItem_op_properties;
extern PropertyRNA &rna_XrActionMapItem_op_mode;
extern PropertyRNA &rna_XrActionMapItem_bimanual;
extern PropertyRNA &rna_XrActionMapItem_pose_is_controller_grip;
extern PropertyRNA &rna_XrActionMapItem_pose_is_controller_aim;
extern PropertyRNA &rna_XrActionMapItem_haptic_name;
extern PropertyRNA &rna_XrActionMapItem_haptic_match_user_paths;
extern PropertyRNA &rna_XrActionMapItem_haptic_duration;
extern PropertyRNA &rna_XrActionMapItem_haptic_frequency;
extern PropertyRNA &rna_XrActionMapItem_haptic_amplitude;
extern PropertyRNA &rna_XrActionMapItem_haptic_mode;
extern PropertyRNA &rna_XrActionMapItem_bindings;
extern PropertyRNA &rna_XrActionMapItem_selected_binding;


extern PropertyRNA &rna_XrUserPaths_rna_properties;
extern PropertyRNA &rna_XrUserPaths_rna_type;

extern FunctionRNA *rna_XrUserPaths_new_func;
extern PropertyRNA &rna_XrUserPaths_new_path;
extern PropertyRNA &rna_XrUserPaths_new_user_path;

extern FunctionRNA *rna_XrUserPaths_remove_func;
extern PropertyRNA &rna_XrUserPaths_remove_user_path;

extern FunctionRNA *rna_XrUserPaths_find_func;
extern PropertyRNA &rna_XrUserPaths_find_path;
extern PropertyRNA &rna_XrUserPaths_find_user_path;



extern PropertyRNA &rna_XrActionMapBindings_rna_properties;
extern PropertyRNA &rna_XrActionMapBindings_rna_type;

extern FunctionRNA *rna_XrActionMapBindings_new_func;
extern PropertyRNA &rna_XrActionMapBindings_new_name;
extern PropertyRNA &rna_XrActionMapBindings_new_replace_existing;
extern PropertyRNA &rna_XrActionMapBindings_new_binding;

extern FunctionRNA *rna_XrActionMapBindings_new_from_binding_func;
extern PropertyRNA &rna_XrActionMapBindings_new_from_binding_binding;
extern PropertyRNA &rna_XrActionMapBindings_new_from_binding_result;

extern FunctionRNA *rna_XrActionMapBindings_remove_func;
extern PropertyRNA &rna_XrActionMapBindings_remove_binding;

extern FunctionRNA *rna_XrActionMapBindings_find_func;
extern PropertyRNA &rna_XrActionMapBindings_find_name;
extern PropertyRNA &rna_XrActionMapBindings_find_binding;



extern PropertyRNA &rna_XrComponentPath_rna_properties;
extern PropertyRNA &rna_XrComponentPath_rna_type;
extern PropertyRNA &rna_XrComponentPath_path;


extern PropertyRNA &rna_XrActionMapBinding_rna_properties;
extern PropertyRNA &rna_XrActionMapBinding_rna_type;
extern PropertyRNA &rna_XrActionMapBinding_name;
extern PropertyRNA &rna_XrActionMapBinding_profile;
extern PropertyRNA &rna_XrActionMapBinding_component_paths;
extern PropertyRNA &rna_XrActionMapBinding_threshold;
extern PropertyRNA &rna_XrActionMapBinding_axis0_region;
extern PropertyRNA &rna_XrActionMapBinding_axis1_region;
extern PropertyRNA &rna_XrActionMapBinding_pose_location;
extern PropertyRNA &rna_XrActionMapBinding_pose_rotation;


extern PropertyRNA &rna_XrComponentPaths_rna_properties;
extern PropertyRNA &rna_XrComponentPaths_rna_type;

extern FunctionRNA *rna_XrComponentPaths_new_func;
extern PropertyRNA &rna_XrComponentPaths_new_path;
extern PropertyRNA &rna_XrComponentPaths_new_component_path;

extern FunctionRNA *rna_XrComponentPaths_remove_func;
extern PropertyRNA &rna_XrComponentPaths_remove_component_path;

extern FunctionRNA *rna_XrComponentPaths_find_func;
extern PropertyRNA &rna_XrComponentPaths_find_path;
extern PropertyRNA &rna_XrComponentPaths_find_component_path;



extern PropertyRNA &rna_XrSessionSettings_rna_properties;
extern PropertyRNA &rna_XrSessionSettings_rna_type;
extern PropertyRNA &rna_XrSessionSettings_shading;
extern PropertyRNA &rna_XrSessionSettings_base_pose_type;
extern PropertyRNA &rna_XrSessionSettings_base_pose_object;
extern PropertyRNA &rna_XrSessionSettings_base_pose_location;
extern PropertyRNA &rna_XrSessionSettings_base_pose_angle;
extern PropertyRNA &rna_XrSessionSettings_base_scale;
extern PropertyRNA &rna_XrSessionSettings_show_floor;
extern PropertyRNA &rna_XrSessionSettings_show_passthrough;
extern PropertyRNA &rna_XrSessionSettings_show_annotation;
extern PropertyRNA &rna_XrSessionSettings_show_selection;
extern PropertyRNA &rna_XrSessionSettings_show_controllers;
extern PropertyRNA &rna_XrSessionSettings_show_custom_overlays;
extern PropertyRNA &rna_XrSessionSettings_show_object_extras;
extern PropertyRNA &rna_XrSessionSettings_controller_draw_style;
extern PropertyRNA &rna_XrSessionSettings_viewfinder_enabled;
extern PropertyRNA &rna_XrSessionSettings_viewfinder_hand;
extern PropertyRNA &rna_XrSessionSettings_viewfinder_scale;
extern PropertyRNA &rna_XrSessionSettings_viewfinder_crosshair_enabled;
extern PropertyRNA &rna_XrSessionSettings_viewfinder_passepartout_overscan;
extern PropertyRNA &rna_XrSessionSettings_viewfinder_passepartout_opacity;
extern PropertyRNA &rna_XrSessionSettings_clip_start;
extern PropertyRNA &rna_XrSessionSettings_clip_end;
extern PropertyRNA &rna_XrSessionSettings_fly_speed;
extern PropertyRNA &rna_XrSessionSettings_view_scale;
extern PropertyRNA &rna_XrSessionSettings_use_positional_tracking;
extern PropertyRNA &rna_XrSessionSettings_use_absolute_tracking;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_mesh;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_curve;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_surf;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_meta;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_font;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_curves;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_pointcloud;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_volume;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_armature;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_lattice;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_empty;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_grease_pencil;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_camera;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_light;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_speaker;
extern PropertyRNA &rna_XrSessionSettings_show_object_viewport_light_probe;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_mesh;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_curve;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_surf;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_meta;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_font;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_curves;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_pointcloud;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_volume;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_armature;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_lattice;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_empty;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_grease_pencil;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_camera;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_light;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_speaker;
extern PropertyRNA &rna_XrSessionSettings_show_object_select_light_probe;
extern PropertyRNA &rna_XrSessionSettings_icon_from_show_object_viewport;


extern PropertyRNA &rna_XrSessionState_rna_properties;
extern PropertyRNA &rna_XrSessionState_rna_type;
extern PropertyRNA &rna_XrSessionState_viewfinder;
extern PropertyRNA &rna_XrSessionState_viewer_pose_location;
extern PropertyRNA &rna_XrSessionState_viewer_pose_rotation;
extern PropertyRNA &rna_XrSessionState_navigation_location;
extern PropertyRNA &rna_XrSessionState_navigation_rotation;
extern PropertyRNA &rna_XrSessionState_navigation_scale;
extern PropertyRNA &rna_XrSessionState_viewer_scale;
extern PropertyRNA &rna_XrSessionState_actionmaps;
extern PropertyRNA &rna_XrSessionState_active_actionmap;
extern PropertyRNA &rna_XrSessionState_selected_actionmap;

extern FunctionRNA *rna_XrSessionState_is_running_func;
extern PropertyRNA &rna_XrSessionState_is_running_context;
extern PropertyRNA &rna_XrSessionState_is_running_result;

extern FunctionRNA *rna_XrSessionState_reset_to_base_pose_func;
extern PropertyRNA &rna_XrSessionState_reset_to_base_pose_context;

extern FunctionRNA *rna_XrSessionState_action_set_create_func;
extern PropertyRNA &rna_XrSessionState_action_set_create_context;
extern PropertyRNA &rna_XrSessionState_action_set_create_actionmap;
extern PropertyRNA &rna_XrSessionState_action_set_create_result;

extern FunctionRNA *rna_XrSessionState_action_create_func;
extern PropertyRNA &rna_XrSessionState_action_create_context;
extern PropertyRNA &rna_XrSessionState_action_create_actionmap;
extern PropertyRNA &rna_XrSessionState_action_create_actionmap_item;
extern PropertyRNA &rna_XrSessionState_action_create_result;

extern FunctionRNA *rna_XrSessionState_action_binding_create_func;
extern PropertyRNA &rna_XrSessionState_action_binding_create_context;
extern PropertyRNA &rna_XrSessionState_action_binding_create_actionmap;
extern PropertyRNA &rna_XrSessionState_action_binding_create_actionmap_item;
extern PropertyRNA &rna_XrSessionState_action_binding_create_actionmap_binding;
extern PropertyRNA &rna_XrSessionState_action_binding_create_result;

extern FunctionRNA *rna_XrSessionState_active_action_set_set_func;
extern PropertyRNA &rna_XrSessionState_active_action_set_set_context;
extern PropertyRNA &rna_XrSessionState_active_action_set_set_action_set;
extern PropertyRNA &rna_XrSessionState_active_action_set_set_result;

extern FunctionRNA *rna_XrSessionState_controller_pose_actions_set_func;
extern PropertyRNA &rna_XrSessionState_controller_pose_actions_set_context;
extern PropertyRNA &rna_XrSessionState_controller_pose_actions_set_action_set;
extern PropertyRNA &rna_XrSessionState_controller_pose_actions_set_grip_action;
extern PropertyRNA &rna_XrSessionState_controller_pose_actions_set_aim_action;
extern PropertyRNA &rna_XrSessionState_controller_pose_actions_set_result;

extern FunctionRNA *rna_XrSessionState_action_state_get_func;
extern PropertyRNA &rna_XrSessionState_action_state_get_context;
extern PropertyRNA &rna_XrSessionState_action_state_get_action_set_name;
extern PropertyRNA &rna_XrSessionState_action_state_get_action_name;
extern PropertyRNA &rna_XrSessionState_action_state_get_user_path;
extern PropertyRNA &rna_XrSessionState_action_state_get_state;

extern FunctionRNA *rna_XrSessionState_haptic_action_apply_func;
extern PropertyRNA &rna_XrSessionState_haptic_action_apply_context;
extern PropertyRNA &rna_XrSessionState_haptic_action_apply_action_set_name;
extern PropertyRNA &rna_XrSessionState_haptic_action_apply_action_name;
extern PropertyRNA &rna_XrSessionState_haptic_action_apply_user_path;
extern PropertyRNA &rna_XrSessionState_haptic_action_apply_duration;
extern PropertyRNA &rna_XrSessionState_haptic_action_apply_frequency;
extern PropertyRNA &rna_XrSessionState_haptic_action_apply_amplitude;
extern PropertyRNA &rna_XrSessionState_haptic_action_apply_result;

extern FunctionRNA *rna_XrSessionState_haptic_action_stop_func;
extern PropertyRNA &rna_XrSessionState_haptic_action_stop_context;
extern PropertyRNA &rna_XrSessionState_haptic_action_stop_action_set_name;
extern PropertyRNA &rna_XrSessionState_haptic_action_stop_action_name;
extern PropertyRNA &rna_XrSessionState_haptic_action_stop_user_path;

extern FunctionRNA *rna_XrSessionState_controller_grip_location_get_func;
extern PropertyRNA &rna_XrSessionState_controller_grip_location_get_context;
extern PropertyRNA &rna_XrSessionState_controller_grip_location_get_index;
extern PropertyRNA &rna_XrSessionState_controller_grip_location_get_location;

extern FunctionRNA *rna_XrSessionState_controller_grip_rotation_get_func;
extern PropertyRNA &rna_XrSessionState_controller_grip_rotation_get_context;
extern PropertyRNA &rna_XrSessionState_controller_grip_rotation_get_index;
extern PropertyRNA &rna_XrSessionState_controller_grip_rotation_get_rotation;

extern FunctionRNA *rna_XrSessionState_controller_aim_location_get_func;
extern PropertyRNA &rna_XrSessionState_controller_aim_location_get_context;
extern PropertyRNA &rna_XrSessionState_controller_aim_location_get_index;
extern PropertyRNA &rna_XrSessionState_controller_aim_location_get_location;

extern FunctionRNA *rna_XrSessionState_controller_aim_rotation_get_func;
extern PropertyRNA &rna_XrSessionState_controller_aim_rotation_get_context;
extern PropertyRNA &rna_XrSessionState_controller_aim_rotation_get_index;
extern PropertyRNA &rna_XrSessionState_controller_aim_rotation_get_rotation;



extern PropertyRNA &rna_XrActionMaps_rna_properties;
extern PropertyRNA &rna_XrActionMaps_rna_type;

extern FunctionRNA *rna_XrActionMaps_new_func;
extern PropertyRNA &rna_XrActionMaps_new_xr_session_state;
extern PropertyRNA &rna_XrActionMaps_new_name;
extern PropertyRNA &rna_XrActionMaps_new_replace_existing;
extern PropertyRNA &rna_XrActionMaps_new_actionmap;

extern FunctionRNA *rna_XrActionMaps_new_from_actionmap_func;
extern PropertyRNA &rna_XrActionMaps_new_from_actionmap_xr_session_state;
extern PropertyRNA &rna_XrActionMaps_new_from_actionmap_actionmap;
extern PropertyRNA &rna_XrActionMaps_new_from_actionmap_result;

extern FunctionRNA *rna_XrActionMaps_remove_func;
extern PropertyRNA &rna_XrActionMaps_remove_xr_session_state;
extern PropertyRNA &rna_XrActionMaps_remove_actionmap;

extern FunctionRNA *rna_XrActionMaps_find_func;
extern PropertyRNA &rna_XrActionMaps_find_xr_session_state;
extern PropertyRNA &rna_XrActionMaps_find_name;
extern PropertyRNA &rna_XrActionMaps_find_actionmap;



extern PropertyRNA &rna_XrViewfinderState_rna_properties;
extern PropertyRNA &rna_XrViewfinderState_rna_type;
extern PropertyRNA &rna_XrViewfinderState_location;
extern PropertyRNA &rna_XrViewfinderState_orientation;
extern PropertyRNA &rna_XrViewfinderState_capture_dof_enabled;
extern PropertyRNA &rna_XrViewfinderState_capture_lens_focal;
extern PropertyRNA &rna_XrViewfinderState_capture_dof_distance;
extern PropertyRNA &rna_XrViewfinderState_capture_dof_fstop;
extern PropertyRNA &rna_XrViewfinderState_playback_show_active_capture_in_space_enabled;
extern PropertyRNA &rna_XrViewfinderState_active_mode;
extern PropertyRNA &rna_XrViewfinderState_active_action_live;
extern PropertyRNA &rna_XrViewfinderState_active_action_playback;
extern PropertyRNA &rna_XrViewfinderState_active_action_confirm;

extern FunctionRNA *rna_XrViewfinderState_trigger_flash_func;
extern FunctionRNA *rna_XrViewfinderState_trigger_focus_indicator_func;
extern PropertyRNA &rna_XrViewfinderState_trigger_focus_indicator_hit_success;

extern FunctionRNA *rna_XrViewfinderState_reset_view_smoothing_func;


extern PropertyRNA &rna_XrEventData_rna_properties;
extern PropertyRNA &rna_XrEventData_rna_type;
extern PropertyRNA &rna_XrEventData_action_set;
extern PropertyRNA &rna_XrEventData_action;
extern PropertyRNA &rna_XrEventData_user_path;
extern PropertyRNA &rna_XrEventData_user_path_other;
extern PropertyRNA &rna_XrEventData_type;
extern PropertyRNA &rna_XrEventData_state;
extern PropertyRNA &rna_XrEventData_state_other;
extern PropertyRNA &rna_XrEventData_float_threshold;
extern PropertyRNA &rna_XrEventData_controller_location;
extern PropertyRNA &rna_XrEventData_controller_rotation;
extern PropertyRNA &rna_XrEventData_controller_location_other;
extern PropertyRNA &rna_XrEventData_controller_rotation_other;
extern PropertyRNA &rna_XrEventData_bimanual;

static PointerRNA XrActionMap_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrActionMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrActionMap_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMap_rna_properties_get(iter);
    }
}

void XrActionMap_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrActionMap_rna_properties_get(iter);
    }
}

void XrActionMap_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrActionMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrActionMap_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void XrActionMap_name_get(PointerRNA *ptr, char *value)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int XrActionMap_name_length(PointerRNA *ptr)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    return strlen(data->name);
}

void XrActionMap_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

int XrActionMap_actionmap_items_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_XrActionMap_items_length;
    return fn(ptr);
}

static PointerRNA XrActionMap_actionmap_items_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_XrActionMapItem, rna_iterator_listbase_get(iter));
}

void XrActionMap_actionmap_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrActionMap_actionmap_items;

    PropCollectionBeginFunc fn = rna_XrActionMap_items_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMap_actionmap_items_get(iter);
    }
}

void XrActionMap_actionmap_items_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrActionMap_actionmap_items_get(iter);
    }
}

void XrActionMap_actionmap_items_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrActionMap_actionmap_items_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    XrActionMap_actionmap_items_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMap_actionmap_items_get(&iter); }
    }

    XrActionMap_actionmap_items_end(&iter);

    return found;
}

int XrActionMapItem_name_length(PointerRNA *);
void XrActionMapItem_name_get(PointerRNA *, char *);

bool XrActionMap_actionmap_items_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    XrActionMap_actionmap_items_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = XrActionMapItem_name_length(&iter.ptr);
            if (namelen < 1024) {
                XrActionMapItem_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                XrActionMapItem_name_get(&iter.ptr, name);
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
        XrActionMap_actionmap_items_next(&iter);
    }
    XrActionMap_actionmap_items_end(&iter);

    return found;
}

int XrActionMap_selected_item_get(PointerRNA *ptr)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    return (int)(data->selitem);
}

void XrActionMap_selected_item_set(PointerRNA *ptr, int value)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    data->selitem = (std::remove_reference_t<decltype(data->selitem)>)std::clamp(value, -32768, 32767);
}

static PointerRNA XrActionMapItems_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrActionMapItems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrActionMapItems_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItems_rna_properties_get(iter);
    }
}

void XrActionMapItems_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItems_rna_properties_get(iter);
    }
}

void XrActionMapItems_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrActionMapItems_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrActionMapItems_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA XrUserPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrUserPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrUserPath_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrUserPath_rna_properties_get(iter);
    }
}

void XrUserPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrUserPath_rna_properties_get(iter);
    }
}

void XrUserPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrUserPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrUserPath_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void XrUserPath_path_get(PointerRNA *ptr, char *value)
{
    XrUserPath *data = (XrUserPath *)(ptr->data);
    BLI_assert(strlen(data->path) < 64);
    strcpy(value, data->path);
}

int XrUserPath_path_length(PointerRNA *ptr)
{
    XrUserPath *data = (XrUserPath *)(ptr->data);
    return strlen(data->path);
}

void XrUserPath_path_set(PointerRNA *ptr, const char *value)
{
    XrUserPath *data = (XrUserPath *)(ptr->data);
    BLI_strncpy_utf8(data->path, value, 64);
}

static PointerRNA XrActionMapItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrActionMapItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrActionMapItem_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_rna_properties_get(iter);
    }
}

void XrActionMapItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_rna_properties_get(iter);
    }
}

void XrActionMapItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrActionMapItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrActionMapItem_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void XrActionMapItem_name_get(PointerRNA *ptr, char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int XrActionMapItem_name_length(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return strlen(data->name);
}

void XrActionMapItem_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

int XrActionMapItem_type_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (int)(data->type);
}

void XrActionMapItem_type_set(PointerRNA *ptr, int value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

int XrActionMapItem_user_paths_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_XrActionMapItem_user_paths_length;
    return fn(ptr);
}

static PointerRNA XrActionMapItem_user_paths_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_XrUserPath, rna_iterator_listbase_get(iter));
}

void XrActionMapItem_user_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrActionMapItem_user_paths;

    PropCollectionBeginFunc fn = rna_XrActionMapItem_user_paths_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_user_paths_get(iter);
    }
}

void XrActionMapItem_user_paths_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_user_paths_get(iter);
    }
}

void XrActionMapItem_user_paths_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrActionMapItem_user_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    XrActionMapItem_user_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMapItem_user_paths_get(&iter); }
    }

    XrActionMapItem_user_paths_end(&iter);

    return found;
}

void XrActionMapItem_op_get(PointerRNA *ptr, char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_assert(strlen(data->op) < 64);
    strcpy(value, data->op);
}

int XrActionMapItem_op_length(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return strlen(data->op);
}

void XrActionMapItem_op_set(PointerRNA *ptr, const char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(data->op, value, 64);
}

void XrActionMapItem_op_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_XrActionMapItem_op_name_get;
    fn(ptr, value);
}

int XrActionMapItem_op_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_XrActionMapItem_op_name_length;
    return fn(ptr);
}

PointerRNA XrActionMapItem_op_properties_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_XrActionMapItem_op_properties_get;
    return fn(ptr);
}

int XrActionMapItem_op_mode_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (int)(data->op_flag);
}

void XrActionMapItem_op_mode_set(PointerRNA *ptr, int value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->op_flag = (std::remove_reference_t<decltype(data->op_flag)>)value;
}

bool XrActionMapItem_bimanual_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrActionMapItem_bimanual_get;
    return fn(ptr);
}

void XrActionMapItem_bimanual_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrActionMapItem_bimanual_set;
    fn(ptr, value);
}

bool XrActionMapItem_pose_is_controller_grip_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrActionMapItem_pose_is_controller_grip_get;
    return fn(ptr);
}

void XrActionMapItem_pose_is_controller_grip_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrActionMapItem_pose_is_controller_grip_set;
    fn(ptr, value);
}

bool XrActionMapItem_pose_is_controller_aim_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrActionMapItem_pose_is_controller_aim_get;
    return fn(ptr);
}

void XrActionMapItem_pose_is_controller_aim_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrActionMapItem_pose_is_controller_aim_set;
    fn(ptr, value);
}

void XrActionMapItem_haptic_name_get(PointerRNA *ptr, char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_assert(strlen(data->haptic_name) < 64);
    strcpy(value, data->haptic_name);
}

int XrActionMapItem_haptic_name_length(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return strlen(data->haptic_name);
}

void XrActionMapItem_haptic_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(data->haptic_name, value, 64);
}

bool XrActionMapItem_haptic_match_user_paths_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrActionMapItem_haptic_match_user_paths_get;
    return fn(ptr);
}

void XrActionMapItem_haptic_match_user_paths_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrActionMapItem_haptic_match_user_paths_set;
    fn(ptr, value);
}

float XrActionMapItem_haptic_duration_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (float)(data->haptic_duration);
}

void XrActionMapItem_haptic_duration_set(PointerRNA *ptr, float value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->haptic_duration = (std::remove_reference_t<decltype(data->haptic_duration)>)std::clamp(value, 0.0f, FLT_MAX);
}

float XrActionMapItem_haptic_frequency_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (float)(data->haptic_frequency);
}

void XrActionMapItem_haptic_frequency_set(PointerRNA *ptr, float value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->haptic_frequency = (std::remove_reference_t<decltype(data->haptic_frequency)>)std::clamp(value, 0.0f, FLT_MAX);
}

float XrActionMapItem_haptic_amplitude_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (float)(data->haptic_amplitude);
}

void XrActionMapItem_haptic_amplitude_set(PointerRNA *ptr, float value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->haptic_amplitude = (std::remove_reference_t<decltype(data->haptic_amplitude)>)std::clamp(value, 0.0f, 1.0f);
}

int XrActionMapItem_haptic_mode_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrActionMapItem_haptic_mode_get;
    return fn(ptr);
}

void XrActionMapItem_haptic_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_XrActionMapItem_haptic_mode_set;
    fn(ptr, value);
}

int XrActionMapItem_bindings_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_XrActionMapItem_bindings_length;
    return fn(ptr);
}

static PointerRNA XrActionMapItem_bindings_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_XrActionMapBinding, rna_iterator_listbase_get(iter));
}

void XrActionMapItem_bindings_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrActionMapItem_bindings;

    PropCollectionBeginFunc fn = rna_XrActionMapItem_bindings_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_bindings_get(iter);
    }
}

void XrActionMapItem_bindings_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_bindings_get(iter);
    }
}

void XrActionMapItem_bindings_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrActionMapItem_bindings_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    XrActionMapItem_bindings_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMapItem_bindings_get(&iter); }
    }

    XrActionMapItem_bindings_end(&iter);

    return found;
}

int XrActionMapBinding_name_length(PointerRNA *);
void XrActionMapBinding_name_get(PointerRNA *, char *);

bool XrActionMapItem_bindings_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    XrActionMapItem_bindings_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = XrActionMapBinding_name_length(&iter.ptr);
            if (namelen < 1024) {
                XrActionMapBinding_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                XrActionMapBinding_name_get(&iter.ptr, name);
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
        XrActionMapItem_bindings_next(&iter);
    }
    XrActionMapItem_bindings_end(&iter);

    return found;
}

int XrActionMapItem_selected_binding_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (int)(data->selbinding);
}

void XrActionMapItem_selected_binding_set(PointerRNA *ptr, int value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->selbinding = (std::remove_reference_t<decltype(data->selbinding)>)std::clamp(value, -32768, 32767);
}

static PointerRNA XrUserPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrUserPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrUserPaths_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrUserPaths_rna_properties_get(iter);
    }
}

void XrUserPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrUserPaths_rna_properties_get(iter);
    }
}

void XrUserPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrUserPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrUserPaths_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA XrActionMapBindings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrActionMapBindings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrActionMapBindings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapBindings_rna_properties_get(iter);
    }
}

void XrActionMapBindings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapBindings_rna_properties_get(iter);
    }
}

void XrActionMapBindings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrActionMapBindings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrActionMapBindings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA XrComponentPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrComponentPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrComponentPath_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrComponentPath_rna_properties_get(iter);
    }
}

void XrComponentPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrComponentPath_rna_properties_get(iter);
    }
}

void XrComponentPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrComponentPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrComponentPath_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void XrComponentPath_path_get(PointerRNA *ptr, char *value)
{
    XrComponentPath *data = (XrComponentPath *)(ptr->data);
    BLI_assert(strlen(data->path) < 192);
    strcpy(value, data->path);
}

int XrComponentPath_path_length(PointerRNA *ptr)
{
    XrComponentPath *data = (XrComponentPath *)(ptr->data);
    return strlen(data->path);
}

void XrComponentPath_path_set(PointerRNA *ptr, const char *value)
{
    XrComponentPath *data = (XrComponentPath *)(ptr->data);
    BLI_strncpy_utf8(data->path, value, 192);
}

static PointerRNA XrActionMapBinding_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrActionMapBinding_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrActionMapBinding_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_rna_properties_get(iter);
    }
}

void XrActionMapBinding_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_rna_properties_get(iter);
    }
}

void XrActionMapBinding_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrActionMapBinding_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrActionMapBinding_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void XrActionMapBinding_name_get(PointerRNA *ptr, char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int XrActionMapBinding_name_length(PointerRNA *ptr)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    return strlen(data->name);
}

void XrActionMapBinding_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

void XrActionMapBinding_profile_get(PointerRNA *ptr, char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_assert(strlen(data->profile) < 256);
    strcpy(value, data->profile);
}

int XrActionMapBinding_profile_length(PointerRNA *ptr)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    return strlen(data->profile);
}

void XrActionMapBinding_profile_set(PointerRNA *ptr, const char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_strncpy_utf8(data->profile, value, 256);
}

int XrActionMapBinding_component_paths_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_XrActionMapBinding_component_paths_length;
    return fn(ptr);
}

static PointerRNA XrActionMapBinding_component_paths_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_XrComponentPath, rna_iterator_listbase_get(iter));
}

void XrActionMapBinding_component_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrActionMapBinding_component_paths;

    PropCollectionBeginFunc fn = rna_XrActionMapBinding_component_paths_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_component_paths_get(iter);
    }
}

void XrActionMapBinding_component_paths_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_component_paths_get(iter);
    }
}

void XrActionMapBinding_component_paths_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrActionMapBinding_component_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    XrActionMapBinding_component_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMapBinding_component_paths_get(&iter); }
    }

    XrActionMapBinding_component_paths_end(&iter);

    return found;
}

float XrActionMapBinding_threshold_get(PointerRNA *ptr)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    return (float)(data->float_threshold);
}

void XrActionMapBinding_threshold_set(PointerRNA *ptr, float value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    data->float_threshold = (std::remove_reference_t<decltype(data->float_threshold)>)std::clamp(value, 0.0f, 1.0f);
}

int XrActionMapBinding_axis0_region_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrActionMapBinding_axis0_region_get;
    return fn(ptr);
}

void XrActionMapBinding_axis0_region_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_XrActionMapBinding_axis0_region_set;
    fn(ptr, value);
}

int XrActionMapBinding_axis1_region_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrActionMapBinding_axis1_region_get;
    return fn(ptr);
}

void XrActionMapBinding_axis1_region_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_XrActionMapBinding_axis1_region_set;
    fn(ptr, value);
}

void XrActionMapBinding_pose_location_get(PointerRNA *ptr, float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_location)[i]);
    }
}

void XrActionMapBinding_pose_location_set(PointerRNA *ptr, const float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->pose_location)[i] = values[i];
    }
}

void XrActionMapBinding_pose_rotation_get(PointerRNA *ptr, float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_rotation)[i]);
    }
}

void XrActionMapBinding_pose_rotation_set(PointerRNA *ptr, const float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->pose_rotation)[i] = values[i];
    }
}

static PointerRNA XrComponentPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrComponentPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrComponentPaths_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrComponentPaths_rna_properties_get(iter);
    }
}

void XrComponentPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrComponentPaths_rna_properties_get(iter);
    }
}

void XrComponentPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrComponentPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrComponentPaths_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA XrSessionSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrSessionSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrSessionSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrSessionSettings_rna_properties_get(iter);
    }
}

void XrSessionSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrSessionSettings_rna_properties_get(iter);
    }
}

void XrSessionSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrSessionSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrSessionSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA XrSessionSettings_shading_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_View3DShading, &data->shading);
}

int XrSessionSettings_base_pose_type_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (int)(data->base_pose_type);
}

void XrSessionSettings_base_pose_type_set(PointerRNA *ptr, int value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->base_pose_type = (std::remove_reference_t<decltype(data->base_pose_type)>)value;
}

PointerRNA XrSessionSettings_base_pose_object_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->base_pose_object);
}

void XrSessionSettings_base_pose_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->base_pose_object = value.data;
}

void XrSessionSettings_base_pose_location_get(PointerRNA *ptr, float values[3])
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->base_pose_location)[i]);
    }
}

void XrSessionSettings_base_pose_location_set(PointerRNA *ptr, const float values[3])
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->base_pose_location)[i] = values[i];
    }
}

float XrSessionSettings_base_pose_angle_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->base_pose_angle);
}

void XrSessionSettings_base_pose_angle_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->base_pose_angle = (std::remove_reference_t<decltype(data->base_pose_angle)>)value;
}

float XrSessionSettings_base_scale_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->base_scale);
}

void XrSessionSettings_base_scale_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->base_scale = (std::remove_reference_t<decltype(data->base_scale)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

bool XrSessionSettings_show_floor_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return ((uint64_t(data->draw_flags) & 4) != 0);
}

void XrSessionSettings_show_floor_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) | 4); }
    else { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) & ~uint64_t(4)); }
}

bool XrSessionSettings_show_passthrough_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return ((uint64_t(data->draw_flags) & 128) != 0);
}

void XrSessionSettings_show_passthrough_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) | 128); }
    else { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) & ~uint64_t(128)); }
}

bool XrSessionSettings_show_annotation_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return ((uint64_t(data->draw_flags) & 1) != 0);
}

void XrSessionSettings_show_annotation_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) | 1); }
    else { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) & ~uint64_t(1)); }
}

bool XrSessionSettings_show_selection_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return ((uint64_t(data->draw_flags) & 8) != 0);
}

void XrSessionSettings_show_selection_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) | 8); }
    else { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) & ~uint64_t(8)); }
}

bool XrSessionSettings_show_controllers_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return ((uint64_t(data->draw_flags) & 16) != 0);
}

void XrSessionSettings_show_controllers_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) | 16); }
    else { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) & ~uint64_t(16)); }
}

bool XrSessionSettings_show_custom_overlays_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return ((uint64_t(data->draw_flags) & 32) != 0);
}

void XrSessionSettings_show_custom_overlays_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) | 32); }
    else { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) & ~uint64_t(32)); }
}

bool XrSessionSettings_show_object_extras_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return ((uint64_t(data->draw_flags) & 64) != 0);
}

void XrSessionSettings_show_object_extras_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) | 64); }
    else { data->draw_flags = std::remove_reference_t<decltype(data->draw_flags)>(uint64_t(data->draw_flags) & ~uint64_t(64)); }
}

int XrSessionSettings_controller_draw_style_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (int)(data->controller_draw_style);
}

void XrSessionSettings_controller_draw_style_set(PointerRNA *ptr, int value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->controller_draw_style = (std::remove_reference_t<decltype(data->controller_draw_style)>)value;
}

bool XrSessionSettings_viewfinder_enabled_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (bool)(data->viewfinder_enabled);
}

void XrSessionSettings_viewfinder_enabled_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->viewfinder_enabled = (std::remove_reference_t<decltype(data->viewfinder_enabled)>)value;
}

int XrSessionSettings_viewfinder_hand_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (int)(data->viewfinder_hand);
}

void XrSessionSettings_viewfinder_hand_set(PointerRNA *ptr, int value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->viewfinder_hand = (std::remove_reference_t<decltype(data->viewfinder_hand)>)value;
}

float XrSessionSettings_viewfinder_scale_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->viewfinder_scale);
}

void XrSessionSettings_viewfinder_scale_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->viewfinder_scale = (std::remove_reference_t<decltype(data->viewfinder_scale)>)std::clamp(value, -3.0f, FLT_MAX);
}

bool XrSessionSettings_viewfinder_crosshair_enabled_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (bool)(data->viewfinder_crosshair_enabled);
}

void XrSessionSettings_viewfinder_crosshair_enabled_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->viewfinder_crosshair_enabled = (std::remove_reference_t<decltype(data->viewfinder_crosshair_enabled)>)value;
}

float XrSessionSettings_viewfinder_passepartout_overscan_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->viewfinder_passepartout_overscan);
}

void XrSessionSettings_viewfinder_passepartout_overscan_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->viewfinder_passepartout_overscan = (std::remove_reference_t<decltype(data->viewfinder_passepartout_overscan)>)std::clamp(value, 0.0f, 1.0f);
}

float XrSessionSettings_viewfinder_passepartout_opacity_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->viewfinder_passepartout_opacity);
}

void XrSessionSettings_viewfinder_passepartout_opacity_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->viewfinder_passepartout_opacity = (std::remove_reference_t<decltype(data->viewfinder_passepartout_opacity)>)std::clamp(value, 0.0f, 1.0f);
}

float XrSessionSettings_clip_start_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->clip_start);
}

void XrSessionSettings_clip_start_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->clip_start = (std::remove_reference_t<decltype(data->clip_start)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

float XrSessionSettings_clip_end_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->clip_end);
}

void XrSessionSettings_clip_end_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->clip_end = (std::remove_reference_t<decltype(data->clip_end)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

float XrSessionSettings_fly_speed_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->fly_speed);
}

void XrSessionSettings_fly_speed_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->fly_speed = (std::remove_reference_t<decltype(data->fly_speed)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

float XrSessionSettings_view_scale_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->view_scale);
}

void XrSessionSettings_view_scale_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->view_scale = (std::remove_reference_t<decltype(data->view_scale)>)std::clamp(value, 0.0000010000f, FLT_MAX);
}

bool XrSessionSettings_use_positional_tracking_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrSessionSettings_use_positional_tracking_get;
    return fn(ptr);
}

void XrSessionSettings_use_positional_tracking_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrSessionSettings_use_positional_tracking_set;
    fn(ptr, value);
}

bool XrSessionSettings_use_absolute_tracking_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrSessionSettings_use_absolute_tracking_get;
    return fn(ptr);
}

void XrSessionSettings_use_absolute_tracking_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrSessionSettings_use_absolute_tracking_set;
    fn(ptr, value);
}

bool XrSessionSettings_show_object_viewport_mesh_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 2) != 0);
}

void XrSessionSettings_show_object_viewport_mesh_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 2); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(2)); }
}

bool XrSessionSettings_show_object_viewport_curve_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 4) != 0);
}

void XrSessionSettings_show_object_viewport_curve_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 4); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(4)); }
}

bool XrSessionSettings_show_object_viewport_surf_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 8) != 0);
}

void XrSessionSettings_show_object_viewport_surf_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 8); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(8)); }
}

bool XrSessionSettings_show_object_viewport_meta_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 32) != 0);
}

void XrSessionSettings_show_object_viewport_meta_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 32); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(32)); }
}

bool XrSessionSettings_show_object_viewport_font_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 16) != 0);
}

void XrSessionSettings_show_object_viewport_font_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 16); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(16)); }
}

bool XrSessionSettings_show_object_viewport_curves_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 134217728) != 0);
}

void XrSessionSettings_show_object_viewport_curves_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 134217728); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(134217728)); }
}

bool XrSessionSettings_show_object_viewport_pointcloud_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 268435456) != 0);
}

void XrSessionSettings_show_object_viewport_pointcloud_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 268435456); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(268435456)); }
}

bool XrSessionSettings_show_object_viewport_volume_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 536870912) != 0);
}

void XrSessionSettings_show_object_viewport_volume_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 536870912); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(536870912)); }
}

bool XrSessionSettings_show_object_viewport_armature_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 33554432) != 0);
}

void XrSessionSettings_show_object_viewport_armature_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 33554432); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(33554432)); }
}

bool XrSessionSettings_show_object_viewport_lattice_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 4194304) != 0);
}

void XrSessionSettings_show_object_viewport_lattice_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 4194304); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(4194304)); }
}

bool XrSessionSettings_show_object_viewport_empty_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 1) != 0);
}

void XrSessionSettings_show_object_viewport_empty_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 1); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(1)); }
}

bool XrSessionSettings_show_object_viewport_grease_pencil_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 1073741824) != 0);
}

void XrSessionSettings_show_object_viewport_grease_pencil_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 1073741824); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(1073741824)); }
}

bool XrSessionSettings_show_object_viewport_camera_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 2048) != 0);
}

void XrSessionSettings_show_object_viewport_camera_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 2048); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(2048)); }
}

bool XrSessionSettings_show_object_viewport_light_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 1024) != 0);
}

void XrSessionSettings_show_object_viewport_light_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 1024); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(1024)); }
}

bool XrSessionSettings_show_object_viewport_speaker_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 4096) != 0);
}

void XrSessionSettings_show_object_viewport_speaker_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 4096); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(4096)); }
}

bool XrSessionSettings_show_object_viewport_light_probe_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_viewport) & 8192) != 0);
}

void XrSessionSettings_show_object_viewport_light_probe_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) | 8192); }
    else { data->object_type_exclude_viewport = std::remove_reference_t<decltype(data->object_type_exclude_viewport)>(uint64_t(data->object_type_exclude_viewport) & ~uint64_t(8192)); }
}

bool XrSessionSettings_show_object_select_mesh_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 2) != 0);
}

void XrSessionSettings_show_object_select_mesh_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 2); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(2)); }
}

bool XrSessionSettings_show_object_select_curve_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 4) != 0);
}

void XrSessionSettings_show_object_select_curve_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 4); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(4)); }
}

bool XrSessionSettings_show_object_select_surf_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 8) != 0);
}

void XrSessionSettings_show_object_select_surf_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 8); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(8)); }
}

bool XrSessionSettings_show_object_select_meta_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 32) != 0);
}

void XrSessionSettings_show_object_select_meta_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 32); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(32)); }
}

bool XrSessionSettings_show_object_select_font_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 16) != 0);
}

void XrSessionSettings_show_object_select_font_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 16); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(16)); }
}

bool XrSessionSettings_show_object_select_curves_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 134217728) != 0);
}

void XrSessionSettings_show_object_select_curves_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 134217728); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(134217728)); }
}

bool XrSessionSettings_show_object_select_pointcloud_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 268435456) != 0);
}

void XrSessionSettings_show_object_select_pointcloud_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 268435456); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(268435456)); }
}

bool XrSessionSettings_show_object_select_volume_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 536870912) != 0);
}

void XrSessionSettings_show_object_select_volume_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 536870912); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(536870912)); }
}

bool XrSessionSettings_show_object_select_armature_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 33554432) != 0);
}

void XrSessionSettings_show_object_select_armature_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 33554432); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(33554432)); }
}

bool XrSessionSettings_show_object_select_lattice_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 4194304) != 0);
}

void XrSessionSettings_show_object_select_lattice_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 4194304); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(4194304)); }
}

bool XrSessionSettings_show_object_select_empty_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 1) != 0);
}

void XrSessionSettings_show_object_select_empty_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 1); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(1)); }
}

bool XrSessionSettings_show_object_select_grease_pencil_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 1073741824) != 0);
}

void XrSessionSettings_show_object_select_grease_pencil_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 1073741824); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(1073741824)); }
}

bool XrSessionSettings_show_object_select_camera_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 2048) != 0);
}

void XrSessionSettings_show_object_select_camera_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 2048); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(2048)); }
}

bool XrSessionSettings_show_object_select_light_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 1024) != 0);
}

void XrSessionSettings_show_object_select_light_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 1024); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(1024)); }
}

bool XrSessionSettings_show_object_select_speaker_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 4096) != 0);
}

void XrSessionSettings_show_object_select_speaker_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 4096); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(4096)); }
}

bool XrSessionSettings_show_object_select_light_probe_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !((uint64_t(data->object_type_exclude_select) & 8192) != 0);
}

void XrSessionSettings_show_object_select_light_probe_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) | 8192); }
    else { data->object_type_exclude_select = std::remove_reference_t<decltype(data->object_type_exclude_select)>(uint64_t(data->object_type_exclude_select) & ~uint64_t(8192)); }
}

int XrSessionSettings_icon_from_show_object_viewport_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_XrSessionSettings_icon_from_show_object_viewport_get;
    return fn(ptr);
}

static PointerRNA XrSessionState_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrSessionState_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrSessionState_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrSessionState_rna_properties_get(iter);
    }
}

void XrSessionState_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrSessionState_rna_properties_get(iter);
    }
}

void XrSessionState_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrSessionState_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrSessionState_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA XrSessionState_viewfinder_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_XrSessionState_viewfinder_get;
    return fn(ptr);
}

void XrSessionState_viewer_pose_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_XrSessionState_viewer_pose_location_get;
    fn(ptr, values);
}

void XrSessionState_viewer_pose_rotation_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_XrSessionState_viewer_pose_rotation_get;
    fn(ptr, values);
}

void XrSessionState_navigation_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_XrSessionState_nav_location_get;
    fn(ptr, values);
}

void XrSessionState_navigation_location_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_XrSessionState_nav_location_set;
    fn(ptr, values);
}

void XrSessionState_navigation_rotation_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_XrSessionState_nav_rotation_get;
    fn(ptr, values);
}

void XrSessionState_navigation_rotation_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_XrSessionState_nav_rotation_set;
    fn(ptr, values);
}

float XrSessionState_navigation_scale_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_XrSessionState_nav_scale_get;
    return fn(ptr);
}

void XrSessionState_navigation_scale_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_XrSessionState_nav_scale_set;
    fn(ptr, value);
}

float XrSessionState_viewer_scale_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_XrSessionState_viewer_scale_get;
    return fn(ptr);
}

int XrSessionState_actionmaps_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_XrSessionState_actionmaps_length;
    return fn(ptr);
}

static PointerRNA XrSessionState_actionmaps_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_XrActionMap, rna_iterator_listbase_get(iter));
}

void XrSessionState_actionmaps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrSessionState_actionmaps;

    PropCollectionBeginFunc fn = rna_XrSessionState_actionmaps_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrSessionState_actionmaps_get(iter);
    }
}

void XrSessionState_actionmaps_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrSessionState_actionmaps_get(iter);
    }
}

void XrSessionState_actionmaps_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrSessionState_actionmaps_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    XrSessionState_actionmaps_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrSessionState_actionmaps_get(&iter); }
    }

    XrSessionState_actionmaps_end(&iter);

    return found;
}

int XrSessionState_active_actionmap_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_XrSessionState_active_actionmap_get;
    return fn(ptr);
}

void XrSessionState_active_actionmap_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_XrSessionState_active_actionmap_set;
    fn(ptr, value);
}

int XrSessionState_selected_actionmap_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_XrSessionState_selected_actionmap_get;
    return fn(ptr);
}

void XrSessionState_selected_actionmap_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_XrSessionState_selected_actionmap_set;
    fn(ptr, value);
}

static PointerRNA XrActionMaps_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrActionMaps_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrActionMaps_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMaps_rna_properties_get(iter);
    }
}

void XrActionMaps_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrActionMaps_rna_properties_get(iter);
    }
}

void XrActionMaps_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrActionMaps_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrActionMaps_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA XrViewfinderState_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrViewfinderState_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrViewfinderState_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrViewfinderState_rna_properties_get(iter);
    }
}

void XrViewfinderState_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrViewfinderState_rna_properties_get(iter);
    }
}

void XrViewfinderState_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrViewfinderState_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrViewfinderState_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void XrViewfinderState_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_XrSessionState_viewfinder_location_get;
    fn(ptr, values);
}

void XrViewfinderState_orientation_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_XrSessionState_viewfinder_orientation_get;
    fn(ptr, values);
}

bool XrViewfinderState_capture_dof_enabled_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrSessionState_viewfinder_capture_dof_enabled_get;
    return fn(ptr);
}

void XrViewfinderState_capture_dof_enabled_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrSessionState_viewfinder_capture_dof_enabled_set;
    fn(ptr, value);
}

float XrViewfinderState_capture_lens_focal_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_XrSessionState_viewfinder_capture_lens_focal_get;
    return fn(ptr);
}

void XrViewfinderState_capture_lens_focal_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_XrSessionState_viewfinder_capture_lens_focal_set;
    fn(ptr, value);
}

float XrViewfinderState_capture_dof_distance_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_XrSessionState_viewfinder_capture_dof_distance_get;
    return fn(ptr);
}

void XrViewfinderState_capture_dof_distance_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_XrSessionState_viewfinder_capture_dof_distance_set;
    fn(ptr, value);
}

float XrViewfinderState_capture_dof_fstop_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_XrSessionState_viewfinder_capture_dof_fstop_get;
    return fn(ptr);
}

void XrViewfinderState_capture_dof_fstop_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_XrSessionState_viewfinder_capture_dof_fstop_set;
    fn(ptr, value);
}

bool XrViewfinderState_playback_show_active_capture_in_space_enabled_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrSessionState_viewfinder_playback_show_active_capture_in_space_enabled_get;
    return fn(ptr);
}

void XrViewfinderState_playback_show_active_capture_in_space_enabled_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrSessionState_viewfinder_playback_show_active_capture_in_space_enabled_set;
    fn(ptr, value);
}

int XrViewfinderState_active_mode_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrSessionState_viewfinder_active_mode_get;
    return fn(ptr);
}

void XrViewfinderState_active_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_XrSessionState_viewfinder_active_mode_set;
    fn(ptr, value);
}

int XrViewfinderState_active_action_live_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrSessionState_viewfinder_active_action_live_get;
    return fn(ptr);
}

void XrViewfinderState_active_action_live_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_XrSessionState_viewfinder_active_action_live_set;
    fn(ptr, value);
}

int XrViewfinderState_active_action_playback_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrSessionState_viewfinder_active_action_playback_get;
    return fn(ptr);
}

void XrViewfinderState_active_action_playback_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_XrSessionState_viewfinder_active_action_playback_set;
    fn(ptr, value);
}

int XrViewfinderState_active_action_confirm_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrSessionState_viewfinder_active_action_confirm_get;
    return fn(ptr);
}

void XrViewfinderState_active_action_confirm_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_XrSessionState_viewfinder_active_action_confirm_set;
    fn(ptr, value);
}

static PointerRNA XrEventData_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void XrEventData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_XrEventData_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrEventData_rna_properties_get(iter);
    }
}

void XrEventData_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = XrEventData_rna_properties_get(iter);
    }
}

void XrEventData_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool XrEventData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA XrEventData_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void XrEventData_action_set_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_XrEventData_action_set_get;
    fn(ptr, value);
}

int XrEventData_action_set_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_XrEventData_action_set_length;
    return fn(ptr);
}

void XrEventData_action_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_XrEventData_action_get;
    fn(ptr, value);
}

int XrEventData_action_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_XrEventData_action_length;
    return fn(ptr);
}

void XrEventData_user_path_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_XrEventData_user_path_get;
    fn(ptr, value);
}

int XrEventData_user_path_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_XrEventData_user_path_length;
    return fn(ptr);
}

void XrEventData_user_path_other_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_XrEventData_user_path_other_get;
    fn(ptr, value);
}

int XrEventData_user_path_other_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_XrEventData_user_path_other_length;
    return fn(ptr);
}

int XrEventData_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrEventData_type_get;
    return fn(ptr);
}

void XrEventData_state_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_state_get;
    fn(ptr, values);
}

void XrEventData_state_other_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_state_other_get;
    fn(ptr, values);
}

float XrEventData_float_threshold_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_XrEventData_float_threshold_get;
    return fn(ptr);
}

void XrEventData_controller_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_controller_location_get;
    fn(ptr, values);
}

void XrEventData_controller_rotation_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_controller_rotation_get;
    fn(ptr, values);
}

void XrEventData_controller_location_other_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_controller_location_other_get;
    fn(ptr, values);
}

void XrEventData_controller_rotation_other_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_controller_rotation_other_get;
    fn(ptr, values);
}

bool XrEventData_bimanual_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrEventData_bimanual_get;
    return fn(ptr);
}


XrActionMapItem *XrActionMapItems_new_func(XrActionMap *_self, const char * name, bool replace_existing)
{
	return rna_XrActionMapItem_new(_self, name, replace_existing);
}

static void XrActionMapItems_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMap *_self;
	const char * name;
	bool replace_existing;
	XrActionMapItem *item;
	char *_data, *_retdata;
	
	_self = (XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	replace_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_XrActionMapItem_new(_self, name, replace_existing);
	*((XrActionMapItem **)_retdata) = item;
}

XrActionMapItem *XrActionMapItems_new_from_item_func(XrActionMap *_self, XrActionMapItem *item)
{
	return rna_XrActionMapItem_new_from_item(_self, item);
}

static void XrActionMapItems_new_from_item_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMap *_self;
	XrActionMapItem *item;
	XrActionMapItem *result;
	char *_data, *_retdata;
	
	_self = (XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((XrActionMapItem **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrActionMapItem_new_from_item(_self, item);
	*((XrActionMapItem **)_retdata) = result;
}

void XrActionMapItems_remove_func(XrActionMap *_self, ReportList *reports, PointerRNA *item)
{
	rna_XrActionMapItem_remove(_self, reports, item);
}

static void XrActionMapItems_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMap *_self;
	PointerRNA *item;
	char *_data;
	
	_self = (XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((PointerRNA **)_data);
	
	rna_XrActionMapItem_remove(_self, reports, item);
}

XrActionMapItem *XrActionMapItems_find_func(XrActionMap *_self, const char * name)
{
	return rna_XrActionMapItem_find(_self, name);
}

static void XrActionMapItems_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMap *_self;
	const char * name;
	XrActionMapItem *item;
	char *_data, *_retdata;
	
	_self = (XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_XrActionMapItem_find(_self, name);
	*((XrActionMapItem **)_retdata) = item;
}

/* Repeated prototypes to detect errors */

XrActionMapItem *rna_XrActionMapItem_new(XrActionMap *_self, const char * name, bool replace_existing);
XrActionMapItem *rna_XrActionMapItem_new_from_item(XrActionMap *_self, XrActionMapItem *item);
void rna_XrActionMapItem_remove(XrActionMap *_self, ReportList *reports, PointerRNA *item);
XrActionMapItem *rna_XrActionMapItem_find(XrActionMap *_self, const char * name);



XrUserPath *XrUserPaths_new_func(XrActionMapItem *_self, const char * path)
{
	return rna_XrUserPath_new(_self, path);
}

static void XrUserPaths_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMapItem *_self;
	const char * path;
	XrUserPath *user_path;
	char *_data, *_retdata;
	
	_self = (XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	user_path = rna_XrUserPath_new(_self, path);
	*((XrUserPath **)_retdata) = user_path;
}

void XrUserPaths_remove_func(XrActionMapItem *_self, PointerRNA *user_path)
{
	rna_XrUserPath_remove(_self, user_path);
}

static void XrUserPaths_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMapItem *_self;
	PointerRNA *user_path;
	char *_data;
	
	_self = (XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	user_path = *((PointerRNA **)_data);
	
	rna_XrUserPath_remove(_self, user_path);
}

XrUserPath *XrUserPaths_find_func(XrActionMapItem *_self, const char * path)
{
	return rna_XrUserPath_find(_self, path);
}

static void XrUserPaths_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMapItem *_self;
	const char * path;
	XrUserPath *user_path;
	char *_data, *_retdata;
	
	_self = (XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	user_path = rna_XrUserPath_find(_self, path);
	*((XrUserPath **)_retdata) = user_path;
}

/* Repeated prototypes to detect errors */

XrUserPath *rna_XrUserPath_new(XrActionMapItem *_self, const char * path);
void rna_XrUserPath_remove(XrActionMapItem *_self, PointerRNA *user_path);
XrUserPath *rna_XrUserPath_find(XrActionMapItem *_self, const char * path);

XrActionMapBinding *XrActionMapBindings_new_func(XrActionMapItem *_self, const char * name, bool replace_existing)
{
	return rna_XrActionMapBinding_new(_self, name, replace_existing);
}

static void XrActionMapBindings_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMapItem *_self;
	const char * name;
	bool replace_existing;
	XrActionMapBinding *binding;
	char *_data, *_retdata;
	
	_self = (XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	replace_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	binding = rna_XrActionMapBinding_new(_self, name, replace_existing);
	*((XrActionMapBinding **)_retdata) = binding;
}

XrActionMapBinding *XrActionMapBindings_new_from_binding_func(XrActionMapItem *_self, XrActionMapBinding *binding)
{
	return rna_XrActionMapBinding_new_from_binding(_self, binding);
}

static void XrActionMapBindings_new_from_binding_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMapItem *_self;
	XrActionMapBinding *binding;
	XrActionMapBinding *result;
	char *_data, *_retdata;
	
	_self = (XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	binding = *((XrActionMapBinding **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrActionMapBinding_new_from_binding(_self, binding);
	*((XrActionMapBinding **)_retdata) = result;
}

void XrActionMapBindings_remove_func(XrActionMapItem *_self, ReportList *reports, PointerRNA *binding)
{
	rna_XrActionMapBinding_remove(_self, reports, binding);
}

static void XrActionMapBindings_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMapItem *_self;
	PointerRNA *binding;
	char *_data;
	
	_self = (XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	binding = *((PointerRNA **)_data);
	
	rna_XrActionMapBinding_remove(_self, reports, binding);
}

XrActionMapBinding *XrActionMapBindings_find_func(XrActionMapItem *_self, const char * name)
{
	return rna_XrActionMapBinding_find(_self, name);
}

static void XrActionMapBindings_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMapItem *_self;
	const char * name;
	XrActionMapBinding *binding;
	char *_data, *_retdata;
	
	_self = (XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	binding = rna_XrActionMapBinding_find(_self, name);
	*((XrActionMapBinding **)_retdata) = binding;
}

/* Repeated prototypes to detect errors */

XrActionMapBinding *rna_XrActionMapBinding_new(XrActionMapItem *_self, const char * name, bool replace_existing);
XrActionMapBinding *rna_XrActionMapBinding_new_from_binding(XrActionMapItem *_self, XrActionMapBinding *binding);
void rna_XrActionMapBinding_remove(XrActionMapItem *_self, ReportList *reports, PointerRNA *binding);
XrActionMapBinding *rna_XrActionMapBinding_find(XrActionMapItem *_self, const char * name);



XrComponentPath *XrComponentPaths_new_func(XrActionMapBinding *_self, const char * path)
{
	return rna_XrComponentPath_new(_self, path);
}

static void XrComponentPaths_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMapBinding *_self;
	const char * path;
	XrComponentPath *component_path;
	char *_data, *_retdata;
	
	_self = (XrActionMapBinding *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	component_path = rna_XrComponentPath_new(_self, path);
	*((XrComponentPath **)_retdata) = component_path;
}

void XrComponentPaths_remove_func(XrActionMapBinding *_self, PointerRNA *component_path)
{
	rna_XrComponentPath_remove(_self, component_path);
}

static void XrComponentPaths_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMapBinding *_self;
	PointerRNA *component_path;
	char *_data;
	
	_self = (XrActionMapBinding *)_ptr->data;
	_data = (char *)_parms->data;
	component_path = *((PointerRNA **)_data);
	
	rna_XrComponentPath_remove(_self, component_path);
}

XrComponentPath *XrComponentPaths_find_func(XrActionMapBinding *_self, const char * path)
{
	return rna_XrComponentPath_find(_self, path);
}

static void XrComponentPaths_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	XrActionMapBinding *_self;
	const char * path;
	XrComponentPath *component_path;
	char *_data, *_retdata;
	
	_self = (XrActionMapBinding *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	component_path = rna_XrComponentPath_find(_self, path);
	*((XrComponentPath **)_retdata) = component_path;
}

/* Repeated prototypes to detect errors */

XrComponentPath *rna_XrComponentPath_new(XrActionMapBinding *_self, const char * path);
void rna_XrComponentPath_remove(XrActionMapBinding *_self, PointerRNA *component_path);
XrComponentPath *rna_XrComponentPath_find(XrActionMapBinding *_self, const char * path);


bool XrSessionState_is_running_func(bContext *context)
{
	return rna_XrSessionState_is_running(context);
}

static void XrSessionState_is_running_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_is_running(context);
	*((bool *)_retdata) = result;
}

void XrSessionState_reset_to_base_pose_func(bContext *context)
{
	rna_XrSessionState_reset_to_base_pose(context);
}

static void XrSessionState_reset_to_base_pose_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	
	rna_XrSessionState_reset_to_base_pose(context);
}

bool XrSessionState_action_set_create_func(bContext *context, XrActionMap *actionmap)
{
	return rna_XrSessionState_action_set_create(context, actionmap);
}

static void XrSessionState_action_set_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	XrActionMap *actionmap;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	actionmap = *((XrActionMap **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_action_set_create(context, actionmap);
	*((bool *)_retdata) = result;
}

bool XrSessionState_action_create_func(bContext *context, XrActionMap *actionmap, XrActionMapItem *actionmap_item)
{
	return rna_XrSessionState_action_create(context, actionmap, actionmap_item);
}

static void XrSessionState_action_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	XrActionMap *actionmap;
	XrActionMapItem *actionmap_item;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	actionmap = *((XrActionMap **)_data);
	_data += 8;
	actionmap_item = *((XrActionMapItem **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_action_create(context, actionmap, actionmap_item);
	*((bool *)_retdata) = result;
}

bool XrSessionState_action_binding_create_func(bContext *context, XrActionMap *actionmap, XrActionMapItem *actionmap_item, XrActionMapBinding *actionmap_binding)
{
	return rna_XrSessionState_action_binding_create(context, actionmap, actionmap_item, actionmap_binding);
}

static void XrSessionState_action_binding_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	XrActionMap *actionmap;
	XrActionMapItem *actionmap_item;
	XrActionMapBinding *actionmap_binding;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	actionmap = *((XrActionMap **)_data);
	_data += 8;
	actionmap_item = *((XrActionMapItem **)_data);
	_data += 8;
	actionmap_binding = *((XrActionMapBinding **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_action_binding_create(context, actionmap, actionmap_item, actionmap_binding);
	*((bool *)_retdata) = result;
}

bool XrSessionState_active_action_set_set_func(bContext *context, const char * action_set)
{
	return rna_XrSessionState_active_action_set_set(context, action_set);
}

static void XrSessionState_active_action_set_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	const char * action_set;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	action_set = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_active_action_set_set(context, action_set);
	*((bool *)_retdata) = result;
}

bool XrSessionState_controller_pose_actions_set_func(bContext *context, const char * action_set, const char * grip_action, const char * aim_action)
{
	return rna_XrSessionState_controller_pose_actions_set(context, action_set, grip_action, aim_action);
}

static void XrSessionState_controller_pose_actions_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	const char * action_set;
	const char * grip_action;
	const char * aim_action;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	action_set = *((const char * *)_data);
	_data += 8;
	grip_action = *((const char * *)_data);
	_data += 8;
	aim_action = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_controller_pose_actions_set(context, action_set, grip_action, aim_action);
	*((bool *)_retdata) = result;
}

void XrSessionState_action_state_get_func(bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float state[2])
{
	rna_XrSessionState_action_state_get(context, action_set_name, action_name, user_path, state);
}

static void XrSessionState_action_state_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	const char * action_set_name;
	const char * action_name;
	const char * user_path;
	float *state;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	action_set_name = *((const char * *)_data);
	_data += 8;
	action_name = *((const char * *)_data);
	_data += 8;
	user_path = *((const char * *)_data);
	_data += 8;
	state = ((float *)_data);
	
	rna_XrSessionState_action_state_get(context, action_set_name, action_name, user_path, state);
}

bool XrSessionState_haptic_action_apply_func(bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float duration, float frequency, float amplitude)
{
	return rna_XrSessionState_haptic_action_apply(context, action_set_name, action_name, user_path, duration, frequency, amplitude);
}

static void XrSessionState_haptic_action_apply_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	const char * action_set_name;
	const char * action_name;
	const char * user_path;
	float duration;
	float frequency;
	float amplitude;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	action_set_name = *((const char * *)_data);
	_data += 8;
	action_name = *((const char * *)_data);
	_data += 8;
	user_path = *((const char * *)_data);
	_data += 8;
	duration = *((float *)_data);
	_data += 8;
	frequency = *((float *)_data);
	_data += 8;
	amplitude = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_haptic_action_apply(context, action_set_name, action_name, user_path, duration, frequency, amplitude);
	*((bool *)_retdata) = result;
}

void XrSessionState_haptic_action_stop_func(bContext *context, const char * action_set_name, const char * action_name, const char * user_path)
{
	rna_XrSessionState_haptic_action_stop(context, action_set_name, action_name, user_path);
}

static void XrSessionState_haptic_action_stop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	const char * action_set_name;
	const char * action_name;
	const char * user_path;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	action_set_name = *((const char * *)_data);
	_data += 8;
	action_name = *((const char * *)_data);
	_data += 8;
	user_path = *((const char * *)_data);
	
	rna_XrSessionState_haptic_action_stop(context, action_set_name, action_name, user_path);
}

void XrSessionState_controller_grip_location_get_func(bContext *context, int index, float location[3])
{
	rna_XrSessionState_controller_grip_location_get(context, index, location);
}

static void XrSessionState_controller_grip_location_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	int index;
	float *location;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	location = ((float *)_data);
	
	rna_XrSessionState_controller_grip_location_get(context, index, location);
}

void XrSessionState_controller_grip_rotation_get_func(bContext *context, int index, float rotation[4])
{
	rna_XrSessionState_controller_grip_rotation_get(context, index, rotation);
}

static void XrSessionState_controller_grip_rotation_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	int index;
	float *rotation;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	rotation = ((float *)_data);
	
	rna_XrSessionState_controller_grip_rotation_get(context, index, rotation);
}

void XrSessionState_controller_aim_location_get_func(bContext *context, int index, float location[3])
{
	rna_XrSessionState_controller_aim_location_get(context, index, location);
}

static void XrSessionState_controller_aim_location_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	int index;
	float *location;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	location = ((float *)_data);
	
	rna_XrSessionState_controller_aim_location_get(context, index, location);
}

void XrSessionState_controller_aim_rotation_get_func(bContext *context, int index, float rotation[4])
{
	rna_XrSessionState_controller_aim_rotation_get(context, index, rotation);
}

static void XrSessionState_controller_aim_rotation_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *context;
	int index;
	float *rotation;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	rotation = ((float *)_data);
	
	rna_XrSessionState_controller_aim_rotation_get(context, index, rotation);
}

/* Repeated prototypes to detect errors */

bool rna_XrSessionState_is_running(bContext *context);
void rna_XrSessionState_reset_to_base_pose(bContext *context);
bool rna_XrSessionState_action_set_create(bContext *context, XrActionMap *actionmap);
bool rna_XrSessionState_action_create(bContext *context, XrActionMap *actionmap, XrActionMapItem *actionmap_item);
bool rna_XrSessionState_action_binding_create(bContext *context, XrActionMap *actionmap, XrActionMapItem *actionmap_item, XrActionMapBinding *actionmap_binding);
bool rna_XrSessionState_active_action_set_set(bContext *context, const char * action_set);
bool rna_XrSessionState_controller_pose_actions_set(bContext *context, const char * action_set, const char * grip_action, const char * aim_action);
void rna_XrSessionState_action_state_get(bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float state[2]);
bool rna_XrSessionState_haptic_action_apply(bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float duration, float frequency, float amplitude);
void rna_XrSessionState_haptic_action_stop(bContext *context, const char * action_set_name, const char * action_name, const char * user_path);
void rna_XrSessionState_controller_grip_location_get(bContext *context, int index, float location[3]);
void rna_XrSessionState_controller_grip_rotation_get(bContext *context, int index, float rotation[4]);
void rna_XrSessionState_controller_aim_location_get(bContext *context, int index, float location[3]);
void rna_XrSessionState_controller_aim_rotation_get(bContext *context, int index, float rotation[4]);

XrActionMap *XrActionMaps_new_func(PointerRNA *xr_session_state, const char * name, bool replace_existing)
{
	return rna_XrActionMap_new(xr_session_state, name, replace_existing);
}

static void XrActionMaps_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA *xr_session_state;
	const char * name;
	bool replace_existing;
	XrActionMap *actionmap;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	xr_session_state = ((PointerRNA *)_data);
	_data += 88;
	name = *((const char * *)_data);
	_data += 8;
	replace_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	actionmap = rna_XrActionMap_new(xr_session_state, name, replace_existing);
	*((XrActionMap **)_retdata) = actionmap;
}

XrActionMap *XrActionMaps_new_from_actionmap_func(PointerRNA *xr_session_state, XrActionMap *actionmap)
{
	return rna_XrActionMap_new_from_actionmap(xr_session_state, actionmap);
}

static void XrActionMaps_new_from_actionmap_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA *xr_session_state;
	XrActionMap *actionmap;
	XrActionMap *result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	xr_session_state = ((PointerRNA *)_data);
	_data += 88;
	actionmap = *((XrActionMap **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrActionMap_new_from_actionmap(xr_session_state, actionmap);
	*((XrActionMap **)_retdata) = result;
}

void XrActionMaps_remove_func(ReportList *reports, PointerRNA *xr_session_state, PointerRNA *actionmap)
{
	rna_XrActionMap_remove(reports, xr_session_state, actionmap);
}

static void XrActionMaps_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA *xr_session_state;
	PointerRNA *actionmap;
	char *_data;
	
	_data = (char *)_parms->data;
	xr_session_state = ((PointerRNA *)_data);
	_data += 88;
	actionmap = *((PointerRNA **)_data);
	
	rna_XrActionMap_remove(reports, xr_session_state, actionmap);
}

XrActionMap *XrActionMaps_find_func(PointerRNA *xr_session_state, const char * name)
{
	return rna_XrActionMap_find(xr_session_state, name);
}

static void XrActionMaps_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA *xr_session_state;
	const char * name;
	XrActionMap *actionmap;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	xr_session_state = ((PointerRNA *)_data);
	_data += 88;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	actionmap = rna_XrActionMap_find(xr_session_state, name);
	*((XrActionMap **)_retdata) = actionmap;
}

/* Repeated prototypes to detect errors */

XrActionMap *rna_XrActionMap_new(PointerRNA *xr_session_state, const char * name, bool replace_existing);
XrActionMap *rna_XrActionMap_new_from_actionmap(PointerRNA *xr_session_state, XrActionMap *actionmap);
void rna_XrActionMap_remove(ReportList *reports, PointerRNA *xr_session_state, PointerRNA *actionmap);
XrActionMap *rna_XrActionMap_find(PointerRNA *xr_session_state, const char * name);

void XrViewfinderState_trigger_flash_func(PointerRNA _self)
{
	rna_XrSessionState_viewfinder_trigger_flash(_self);
}

static void XrViewfinderState_trigger_flash_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	_self = *_ptr;
	
	rna_XrSessionState_viewfinder_trigger_flash(_self);
}

void XrViewfinderState_trigger_focus_indicator_func(PointerRNA _self, bool hit_success)
{
	rna_XrSessionState_viewfinder_trigger_focus_indicator(_self, hit_success);
}

static void XrViewfinderState_trigger_focus_indicator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	bool hit_success;
	char *_data;
	
	_self = *_ptr;
	_data = (char *)_parms->data;
	hit_success = *((bool *)_data);
	
	rna_XrSessionState_viewfinder_trigger_focus_indicator(_self, hit_success);
}

void XrViewfinderState_reset_view_smoothing_func(PointerRNA _self)
{
	rna_XrSessionState_viewfinder_reset_view_smoothing(_self);
}

static void XrViewfinderState_reset_view_smoothing_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	_self = *_ptr;
	
	rna_XrSessionState_viewfinder_reset_view_smoothing(_self);
}

/* Repeated prototypes to detect errors */

void rna_XrSessionState_viewfinder_trigger_flash(PointerRNA _self);
void rna_XrSessionState_viewfinder_trigger_focus_indicator(PointerRNA _self, bool hit_success);
void rna_XrSessionState_viewfinder_reset_view_smoothing(PointerRNA _self);


/* XR Action Map */
static CollectionPropertyRNA rna_XrActionMap_rna_properties_;
PropertyRNA &rna_XrActionMap_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrActionMap_rna_properties_);

static PointerPropertyRNA rna_XrActionMap_rna_type_;
PropertyRNA &rna_XrActionMap_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrActionMap_rna_type_);

static StringPropertyRNA rna_XrActionMap_name_;
PropertyRNA &rna_XrActionMap_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMap_name_);

static CollectionPropertyRNA rna_XrActionMap_actionmap_items_;
PropertyRNA &rna_XrActionMap_actionmap_items = reinterpret_cast<PropertyRNA &>(rna_XrActionMap_actionmap_items_);

static IntPropertyRNA rna_XrActionMap_selected_item_;
PropertyRNA &rna_XrActionMap_selected_item = reinterpret_cast<PropertyRNA &>(rna_XrActionMap_selected_item_);

StructRNA *RNA_XrActionMap;
void register_struct_XrActionMap(BlenderRNA &brna)
{
	rna_XrActionMap_rna_properties_ = {
		{&rna_XrActionMap_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMap_rna_properties_begin, XrActionMap_rna_properties_next, XrActionMap_rna_properties_end, XrActionMap_rna_properties_get, nullptr, nullptr, XrActionMap_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrActionMap_rna_type_ = {
		{&rna_XrActionMap_name, 	&rna_XrActionMap_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMap_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_XrActionMap_name_ = {
		{&rna_XrActionMap_actionmap_items, 	&rna_XrActionMap_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the action map",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_XrActionMap_name_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMap_name_get, XrActionMap_name_length, XrActionMap_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_XrActionMap_actionmap_items_ = {
		{&rna_XrActionMap_selected_item, 	&rna_XrActionMap_name,
		-1, "actionmap_items", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Items",
		"Items in the action map, mapping an XR event to an operator, pose, or haptic output",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_XrActionMapItems},
		XrActionMap_actionmap_items_begin, XrActionMap_actionmap_items_next, XrActionMap_actionmap_items_end, XrActionMap_actionmap_items_get, XrActionMap_actionmap_items_length, XrActionMap_actionmap_items_lookup_int, XrActionMap_actionmap_items_lookup_string, nullptr, RNA_XrActionMapItem
	};

	rna_XrActionMap_selected_item_ = {
		{nullptr, 	&rna_XrActionMap_actionmap_items,
		-1, "selected_item", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Selected Item",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrActionMap, selitem), RawPropertyType(1), nullptr},
		XrActionMap_selected_item_get, XrActionMap_selected_item_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_XrActionMap;
	srna->cont.properties = {&rna_XrActionMap_rna_properties, &rna_XrActionMap_selected_item};
	srna->identifier = "XrActionMap";
	srna->flag = 516;
	srna->name = "XR Action Map";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_XrActionMap_name;
	srna->iteratorproperty = &rna_XrActionMap_rna_properties;
};

/* XR Action Map Items */
static CollectionPropertyRNA rna_XrActionMapItems_rna_properties_;
PropertyRNA &rna_XrActionMapItems_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItems_rna_properties_);

static PointerPropertyRNA rna_XrActionMapItems_rna_type_;
PropertyRNA &rna_XrActionMapItems_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItems_rna_type_);

static StringPropertyRNA rna_XrActionMapItems_new_name_;
PropertyRNA &rna_XrActionMapItems_new_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItems_new_name_);

static BoolPropertyRNA rna_XrActionMapItems_new_replace_existing_;
PropertyRNA &rna_XrActionMapItems_new_replace_existing = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItems_new_replace_existing_);

static PointerPropertyRNA rna_XrActionMapItems_new_item_;
PropertyRNA &rna_XrActionMapItems_new_item = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItems_new_item_);

FunctionRNA *rna_XrActionMapItems_new_func;
static PointerPropertyRNA rna_XrActionMapItems_new_from_item_item_;
PropertyRNA &rna_XrActionMapItems_new_from_item_item = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItems_new_from_item_item_);

static PointerPropertyRNA rna_XrActionMapItems_new_from_item_result_;
PropertyRNA &rna_XrActionMapItems_new_from_item_result = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItems_new_from_item_result_);

FunctionRNA *rna_XrActionMapItems_new_from_item_func;
static PointerPropertyRNA rna_XrActionMapItems_remove_item_;
PropertyRNA &rna_XrActionMapItems_remove_item = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItems_remove_item_);

FunctionRNA *rna_XrActionMapItems_remove_func;
static StringPropertyRNA rna_XrActionMapItems_find_name_;
PropertyRNA &rna_XrActionMapItems_find_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItems_find_name_);

static PointerPropertyRNA rna_XrActionMapItems_find_item_;
PropertyRNA &rna_XrActionMapItems_find_item = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItems_find_item_);

FunctionRNA *rna_XrActionMapItems_find_func;
StructRNA *RNA_XrActionMapItems;
void register_struct_XrActionMapItems(BlenderRNA &brna)
{
	rna_XrActionMapItems_rna_properties_ = {
		{&rna_XrActionMapItems_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItems_rna_properties_begin, XrActionMapItems_rna_properties_next, XrActionMapItems_rna_properties_end, XrActionMapItems_rna_properties_get, nullptr, nullptr, XrActionMapItems_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrActionMapItems_rna_type_ = {
		{nullptr, 	&rna_XrActionMapItems_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItems_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_XrActionMapItems;
	srna->cont.properties = {&rna_XrActionMapItems_rna_properties, &rna_XrActionMapItems_rna_type};
	srna->identifier = "XrActionMapItems";
	srna->flag = 516;
	srna->name = "XR Action Map Items";
	srna->description = "Collection of XR action map items";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrActionMapItems_rna_properties;
	{
	rna_XrActionMapItems_new_name_ = {
		{&rna_XrActionMapItems_new_replace_existing, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name of the action map item",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrActionMapItems_new_replace_existing_ = {
		{&rna_XrActionMapItems_new_item, 	&rna_XrActionMapItems_new_name,
		-1, "replace_existing", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Replace Existing",
		"Replace any existing item with the same name",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_XrActionMapItems_new_item_ = {
		{nullptr, 	&rna_XrActionMapItems_new_replace_existing,
		-1, "item", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Item",
		"Added action map item",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMapItems_new_name, &rna_XrActionMapItems_new_item};
		func->identifier = "new";
		func->description = "new";
		func->call = XrActionMapItems_new_call;
		func->c_ret = &rna_XrActionMapItems_new_item;
		rna_XrActionMapItems_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrActionMapItems_new_from_item_item_ = {
		{&rna_XrActionMapItems_new_from_item_result, 	nullptr,
		-1, "item", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "Item",
		"Item to use as a reference",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapItem
	};
	rna_XrActionMapItems_new_from_item_result_ = {
		{nullptr, 	&rna_XrActionMapItems_new_from_item_item,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Item",
		"Added action map item",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMapItems_new_from_item_item, &rna_XrActionMapItems_new_from_item_result};
		func->identifier = "new_from_item";
		func->description = "new_from_item";
		func->call = XrActionMapItems_new_from_item_call;
		func->c_ret = &rna_XrActionMapItems_new_from_item_result;
		rna_XrActionMapItems_new_from_item_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrActionMapItems_remove_item_ = {
		{nullptr, 	nullptr,
		-1, "item", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "Item",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMapItems_remove_item, &rna_XrActionMapItems_remove_item};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "remove";
		func->call = XrActionMapItems_remove_call;
		rna_XrActionMapItems_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrActionMapItems_find_name_ = {
		{&rna_XrActionMapItems_find_item, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrActionMapItems_find_item_ = {
		{nullptr, 	&rna_XrActionMapItems_find_name,
		-1, "item", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Item",
		"The action map item with the given name",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMapItems_find_name, &rna_XrActionMapItems_find_item};
		func->identifier = "find";
		func->description = "find";
		func->call = XrActionMapItems_find_call;
		func->c_ret = &rna_XrActionMapItems_find_item;
		rna_XrActionMapItems_find_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* XR User Path */
static CollectionPropertyRNA rna_XrUserPath_rna_properties_;
PropertyRNA &rna_XrUserPath_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrUserPath_rna_properties_);

static PointerPropertyRNA rna_XrUserPath_rna_type_;
PropertyRNA &rna_XrUserPath_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrUserPath_rna_type_);

static StringPropertyRNA rna_XrUserPath_path_;
PropertyRNA &rna_XrUserPath_path = reinterpret_cast<PropertyRNA &>(rna_XrUserPath_path_);

StructRNA *RNA_XrUserPath;
void register_struct_XrUserPath(BlenderRNA &brna)
{
	rna_XrUserPath_rna_properties_ = {
		{&rna_XrUserPath_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrUserPath_rna_properties_begin, XrUserPath_rna_properties_next, XrUserPath_rna_properties_end, XrUserPath_rna_properties_get, nullptr, nullptr, XrUserPath_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrUserPath_rna_type_ = {
		{&rna_XrUserPath_path, 	&rna_XrUserPath_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrUserPath_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_XrUserPath_path_ = {
		{nullptr, 	&rna_XrUserPath_rna_type,
		-1, "path", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Path",
		"OpenXR user path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrUserPath_path_get, XrUserPath_path_length, XrUserPath_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	StructRNA *srna = RNA_XrUserPath;
	srna->cont.properties = {&rna_XrUserPath_rna_properties, &rna_XrUserPath_path};
	srna->identifier = "XrUserPath";
	srna->flag = 516;
	srna->name = "XR User Path";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrUserPath_rna_properties;
};

/* XR Action Map Item */
static CollectionPropertyRNA rna_XrActionMapItem_rna_properties_;
PropertyRNA &rna_XrActionMapItem_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_rna_properties_);

static PointerPropertyRNA rna_XrActionMapItem_rna_type_;
PropertyRNA &rna_XrActionMapItem_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_rna_type_);

static StringPropertyRNA rna_XrActionMapItem_name_;
PropertyRNA &rna_XrActionMapItem_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_name_);

static EnumPropertyRNA rna_XrActionMapItem_type_;
PropertyRNA &rna_XrActionMapItem_type = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_type_);

static CollectionPropertyRNA rna_XrActionMapItem_user_paths_;
PropertyRNA &rna_XrActionMapItem_user_paths = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_user_paths_);

static StringPropertyRNA rna_XrActionMapItem_op_;
PropertyRNA &rna_XrActionMapItem_op = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_op_);

static StringPropertyRNA rna_XrActionMapItem_op_name_;
PropertyRNA &rna_XrActionMapItem_op_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_op_name_);

static PointerPropertyRNA rna_XrActionMapItem_op_properties_;
PropertyRNA &rna_XrActionMapItem_op_properties = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_op_properties_);

static EnumPropertyRNA rna_XrActionMapItem_op_mode_;
PropertyRNA &rna_XrActionMapItem_op_mode = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_op_mode_);

static BoolPropertyRNA rna_XrActionMapItem_bimanual_;
PropertyRNA &rna_XrActionMapItem_bimanual = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_bimanual_);

static BoolPropertyRNA rna_XrActionMapItem_pose_is_controller_grip_;
PropertyRNA &rna_XrActionMapItem_pose_is_controller_grip = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_pose_is_controller_grip_);

static BoolPropertyRNA rna_XrActionMapItem_pose_is_controller_aim_;
PropertyRNA &rna_XrActionMapItem_pose_is_controller_aim = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_pose_is_controller_aim_);

static StringPropertyRNA rna_XrActionMapItem_haptic_name_;
PropertyRNA &rna_XrActionMapItem_haptic_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_haptic_name_);

static BoolPropertyRNA rna_XrActionMapItem_haptic_match_user_paths_;
PropertyRNA &rna_XrActionMapItem_haptic_match_user_paths = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_haptic_match_user_paths_);

static FloatPropertyRNA rna_XrActionMapItem_haptic_duration_;
PropertyRNA &rna_XrActionMapItem_haptic_duration = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_haptic_duration_);

static FloatPropertyRNA rna_XrActionMapItem_haptic_frequency_;
PropertyRNA &rna_XrActionMapItem_haptic_frequency = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_haptic_frequency_);

static FloatPropertyRNA rna_XrActionMapItem_haptic_amplitude_;
PropertyRNA &rna_XrActionMapItem_haptic_amplitude = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_haptic_amplitude_);

static EnumPropertyRNA rna_XrActionMapItem_haptic_mode_;
PropertyRNA &rna_XrActionMapItem_haptic_mode = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_haptic_mode_);

static CollectionPropertyRNA rna_XrActionMapItem_bindings_;
PropertyRNA &rna_XrActionMapItem_bindings = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_bindings_);

static IntPropertyRNA rna_XrActionMapItem_selected_binding_;
PropertyRNA &rna_XrActionMapItem_selected_binding = reinterpret_cast<PropertyRNA &>(rna_XrActionMapItem_selected_binding_);

StructRNA *RNA_XrActionMapItem;
void register_struct_XrActionMapItem(BlenderRNA &brna)
{
	rna_XrActionMapItem_rna_properties_ = {
		{&rna_XrActionMapItem_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_rna_properties_begin, XrActionMapItem_rna_properties_next, XrActionMapItem_rna_properties_end, XrActionMapItem_rna_properties_get, nullptr, nullptr, XrActionMapItem_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrActionMapItem_rna_type_ = {
		{&rna_XrActionMapItem_name, 	&rna_XrActionMapItem_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_XrActionMapItem_name_ = {
		{&rna_XrActionMapItem_type, 	&rna_XrActionMapItem_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the action map item",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_XrActionMapItem_name_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_name_get, XrActionMapItem_name_length, XrActionMapItem_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_XrActionMapItem_type_items[5] = {
		{2, "FLOAT", 0, "Float", "Float action, representing either a digital or analog button"	},
		{3, "VECTOR2D", 0, "Vector2D", "2D float vector action, representing a thumbstick or trackpad"	},
		{4, "POSE", 0, "Pose", "3D pose action, representing a controller\'s location and rotation"	},
		{100, "VIBRATION", 0, "Vibration", "Haptic vibration output action, to be applied with a duration, frequency, and amplitude"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrActionMapItem_type_ = {
		{&rna_XrActionMapItem_user_paths, 	&rna_XrActionMapItem_name,
		-1, "type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Action type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_XrActionMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrActionMapItem, type), RawPropertyType(2), nullptr},
		XrActionMapItem_type_get, XrActionMapItem_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrActionMapItem_type_items, 4, 2
	};

	rna_XrActionMapItem_user_paths_ = {
		{&rna_XrActionMapItem_op, 	&rna_XrActionMapItem_type,
		-1, "user_paths", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "User Paths",
		"OpenXR user paths",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_XrUserPaths},
		XrActionMapItem_user_paths_begin, XrActionMapItem_user_paths_next, XrActionMapItem_user_paths_end, XrActionMapItem_user_paths_get, XrActionMapItem_user_paths_length, XrActionMapItem_user_paths_lookup_int, nullptr, nullptr, RNA_XrUserPath
	};

	rna_XrActionMapItem_op_ = {
		{&rna_XrActionMapItem_op_name, 	&rna_XrActionMapItem_user_paths,
		-1, "op", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Operator",
		"Identifier of operator to call on action event",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_XrActionMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_op_get, XrActionMapItem_op_length, XrActionMapItem_op_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_XrActionMapItem_op_name_ = {
		{&rna_XrActionMapItem_op_properties, 	&rna_XrActionMapItem_op,
		-1, "op_name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Operator Name",
		"Name of operator (translated) to call on action event",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_op_name_get, XrActionMapItem_op_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_XrActionMapItem_op_properties_ = {
		{&rna_XrActionMapItem_op_mode, 	&rna_XrActionMapItem_op_name,
		-1, "op_properties", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Operator Properties",
		"Properties to set when the operator is called",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_XrActionMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_op_properties_get, nullptr, nullptr, nullptr,RNA_OperatorProperties
	};

	static const EnumPropertyItem rna_XrActionMapItem_op_mode_items[4] = {
		{0, "PRESS", 0, "Press", "Execute operator on button press (non-modal operators only)"	},
		{1, "RELEASE", 0, "Release", "Execute operator on button release (non-modal operators only)"	},
		{2, "MODAL", 0, "Modal", "Use modal execution (modal operators only)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrActionMapItem_op_mode_ = {
		{&rna_XrActionMapItem_bimanual, 	&rna_XrActionMapItem_op_properties,
		-1, "op_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Operator Mode",
		"Operator execution mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrActionMapItem, op_flag), RawPropertyType(1), nullptr},
		XrActionMapItem_op_mode_get, XrActionMapItem_op_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrActionMapItem_op_mode_items, 3, 0
	};

	rna_XrActionMapItem_bimanual_ = {
		{&rna_XrActionMapItem_pose_is_controller_grip, 	&rna_XrActionMapItem_op_mode,
		-1, "bimanual", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bimanual",
		"The action depends on the states/poses of both user paths",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_bimanual_get, XrActionMapItem_bimanual_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrActionMapItem_pose_is_controller_grip_ = {
		{&rna_XrActionMapItem_pose_is_controller_aim, 	&rna_XrActionMapItem_bimanual,
		-1, "pose_is_controller_grip", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Controller Grip",
		"The action poses will be used for the VR controller grips",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_pose_is_controller_grip_get, XrActionMapItem_pose_is_controller_grip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrActionMapItem_pose_is_controller_aim_ = {
		{&rna_XrActionMapItem_haptic_name, 	&rna_XrActionMapItem_pose_is_controller_grip,
		-1, "pose_is_controller_aim", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Controller Aim",
		"The action poses will be used for the VR controller aims",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_pose_is_controller_aim_get, XrActionMapItem_pose_is_controller_aim_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrActionMapItem_haptic_name_ = {
		{&rna_XrActionMapItem_haptic_match_user_paths, 	&rna_XrActionMapItem_pose_is_controller_aim,
		-1, "haptic_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Haptic Name",
		"Name of the haptic action to apply when executing this action",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_haptic_name_get, XrActionMapItem_haptic_name_length, XrActionMapItem_haptic_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_XrActionMapItem_haptic_match_user_paths_ = {
		{&rna_XrActionMapItem_haptic_duration, 	&rna_XrActionMapItem_haptic_name,
		-1, "haptic_match_user_paths", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Haptic Match User Paths",
		"Apply haptics to the same user paths for the haptic action and this action",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_haptic_match_user_paths_get, XrActionMapItem_haptic_match_user_paths_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrActionMapItem_haptic_duration_ = {
		{&rna_XrActionMapItem_haptic_frequency, 	&rna_XrActionMapItem_haptic_match_user_paths,
		-1, "haptic_duration", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Haptic Duration",
		"Haptic duration in seconds. 0.0 is the minimum supported duration.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrActionMapItem, haptic_duration), RawPropertyType(5), nullptr},
		XrActionMapItem_haptic_duration_get, XrActionMapItem_haptic_duration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrActionMapItem_haptic_frequency_ = {
		{&rna_XrActionMapItem_haptic_amplitude, 	&rna_XrActionMapItem_haptic_duration,
		-1, "haptic_frequency", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Haptic Frequency",
		"Frequency of the haptic vibration in hertz. 0.0 specifies the OpenXR runtime\'s default frequency.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrActionMapItem, haptic_frequency), RawPropertyType(5), nullptr},
		XrActionMapItem_haptic_frequency_get, XrActionMapItem_haptic_frequency_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrActionMapItem_haptic_amplitude_ = {
		{&rna_XrActionMapItem_haptic_mode, 	&rna_XrActionMapItem_haptic_frequency,
		-1, "haptic_amplitude", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Haptic Amplitude",
		"Intensity of the haptic vibration, ranging from 0.0 to 1.0",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrActionMapItem, haptic_amplitude), RawPropertyType(5), nullptr},
		XrActionMapItem_haptic_amplitude_get, XrActionMapItem_haptic_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_XrActionMapItem_haptic_mode_items[5] = {
		{2, "PRESS", 0, "Press", "Apply haptics on button press"	},
		{4, "RELEASE", 0, "Release", "Apply haptics on button release"	},
		{6, "PRESS_RELEASE", 0, "Press Release", "Apply haptics on button press and release"	},
		{8, "REPEAT", 0, "Repeat", "Apply haptics repeatedly for the duration of the button press"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrActionMapItem_haptic_mode_ = {
		{&rna_XrActionMapItem_bindings, 	&rna_XrActionMapItem_haptic_amplitude,
		-1, "haptic_mode", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Haptic mode",
		"Haptic application mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapItem_haptic_mode_get, XrActionMapItem_haptic_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrActionMapItem_haptic_mode_items, 4, 2
	};

	rna_XrActionMapItem_bindings_ = {
		{&rna_XrActionMapItem_selected_binding, 	&rna_XrActionMapItem_haptic_mode,
		-1, "bindings", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bindings",
		"Bindings for the action map item, mapping the action to an XR input",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_XrActionMapBindings},
		XrActionMapItem_bindings_begin, XrActionMapItem_bindings_next, XrActionMapItem_bindings_end, XrActionMapItem_bindings_get, XrActionMapItem_bindings_length, XrActionMapItem_bindings_lookup_int, XrActionMapItem_bindings_lookup_string, nullptr, RNA_XrActionMapBinding
	};

	rna_XrActionMapItem_selected_binding_ = {
		{nullptr, 	&rna_XrActionMapItem_bindings,
		-1, "selected_binding", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Selected Binding",
		"Currently selected binding",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrActionMapItem, selbinding), RawPropertyType(1), nullptr},
		XrActionMapItem_selected_binding_get, XrActionMapItem_selected_binding_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_XrActionMapItem;
	srna->cont.properties = {&rna_XrActionMapItem_rna_properties, &rna_XrActionMapItem_selected_binding};
	srna->identifier = "XrActionMapItem";
	srna->flag = 516;
	srna->name = "XR Action Map Item";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_XrActionMapItem_name;
	srna->iteratorproperty = &rna_XrActionMapItem_rna_properties;
};

/* XR User Paths */
static CollectionPropertyRNA rna_XrUserPaths_rna_properties_;
PropertyRNA &rna_XrUserPaths_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrUserPaths_rna_properties_);

static PointerPropertyRNA rna_XrUserPaths_rna_type_;
PropertyRNA &rna_XrUserPaths_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrUserPaths_rna_type_);

static StringPropertyRNA rna_XrUserPaths_new_path_;
PropertyRNA &rna_XrUserPaths_new_path = reinterpret_cast<PropertyRNA &>(rna_XrUserPaths_new_path_);

static PointerPropertyRNA rna_XrUserPaths_new_user_path_;
PropertyRNA &rna_XrUserPaths_new_user_path = reinterpret_cast<PropertyRNA &>(rna_XrUserPaths_new_user_path_);

FunctionRNA *rna_XrUserPaths_new_func;
static PointerPropertyRNA rna_XrUserPaths_remove_user_path_;
PropertyRNA &rna_XrUserPaths_remove_user_path = reinterpret_cast<PropertyRNA &>(rna_XrUserPaths_remove_user_path_);

FunctionRNA *rna_XrUserPaths_remove_func;
static StringPropertyRNA rna_XrUserPaths_find_path_;
PropertyRNA &rna_XrUserPaths_find_path = reinterpret_cast<PropertyRNA &>(rna_XrUserPaths_find_path_);

static PointerPropertyRNA rna_XrUserPaths_find_user_path_;
PropertyRNA &rna_XrUserPaths_find_user_path = reinterpret_cast<PropertyRNA &>(rna_XrUserPaths_find_user_path_);

FunctionRNA *rna_XrUserPaths_find_func;
StructRNA *RNA_XrUserPaths;
void register_struct_XrUserPaths(BlenderRNA &brna)
{
	rna_XrUserPaths_rna_properties_ = {
		{&rna_XrUserPaths_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrUserPaths_rna_properties_begin, XrUserPaths_rna_properties_next, XrUserPaths_rna_properties_end, XrUserPaths_rna_properties_get, nullptr, nullptr, XrUserPaths_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrUserPaths_rna_type_ = {
		{nullptr, 	&rna_XrUserPaths_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrUserPaths_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_XrUserPaths;
	srna->cont.properties = {&rna_XrUserPaths_rna_properties, &rna_XrUserPaths_rna_type};
	srna->identifier = "XrUserPaths";
	srna->flag = 516;
	srna->name = "XR User Paths";
	srna->description = "Collection of OpenXR user paths";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrUserPaths_rna_properties;
	{
	rna_XrUserPaths_new_path_ = {
		{&rna_XrUserPaths_new_user_path, 	nullptr,
		-1, "path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Path",
		"OpenXR user path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrUserPaths_new_user_path_ = {
		{nullptr, 	&rna_XrUserPaths_new_path,
		-1, "user_path", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "User Path",
		"Added user path",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrUserPath
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrUserPaths_new_path, &rna_XrUserPaths_new_user_path};
		func->identifier = "new";
		func->description = "new";
		func->call = XrUserPaths_new_call;
		func->c_ret = &rna_XrUserPaths_new_user_path;
		rna_XrUserPaths_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrUserPaths_remove_user_path_ = {
		{nullptr, 	nullptr,
		-1, "user_path", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "User Path",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrUserPath
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrUserPaths_remove_user_path, &rna_XrUserPaths_remove_user_path};
		func->identifier = "remove";
		func->description = "remove";
		func->call = XrUserPaths_remove_call;
		rna_XrUserPaths_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrUserPaths_find_path_ = {
		{&rna_XrUserPaths_find_user_path, 	nullptr,
		-1, "path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Path",
		"OpenXR user path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrUserPaths_find_user_path_ = {
		{nullptr, 	&rna_XrUserPaths_find_path,
		-1, "user_path", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "User Path",
		"The user path with the given path",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrUserPath
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrUserPaths_find_path, &rna_XrUserPaths_find_user_path};
		func->identifier = "find";
		func->description = "find";
		func->call = XrUserPaths_find_call;
		func->c_ret = &rna_XrUserPaths_find_user_path;
		rna_XrUserPaths_find_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* XR Action Map Bindings */
static CollectionPropertyRNA rna_XrActionMapBindings_rna_properties_;
PropertyRNA &rna_XrActionMapBindings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBindings_rna_properties_);

static PointerPropertyRNA rna_XrActionMapBindings_rna_type_;
PropertyRNA &rna_XrActionMapBindings_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBindings_rna_type_);

static StringPropertyRNA rna_XrActionMapBindings_new_name_;
PropertyRNA &rna_XrActionMapBindings_new_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBindings_new_name_);

static BoolPropertyRNA rna_XrActionMapBindings_new_replace_existing_;
PropertyRNA &rna_XrActionMapBindings_new_replace_existing = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBindings_new_replace_existing_);

static PointerPropertyRNA rna_XrActionMapBindings_new_binding_;
PropertyRNA &rna_XrActionMapBindings_new_binding = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBindings_new_binding_);

FunctionRNA *rna_XrActionMapBindings_new_func;
static PointerPropertyRNA rna_XrActionMapBindings_new_from_binding_binding_;
PropertyRNA &rna_XrActionMapBindings_new_from_binding_binding = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBindings_new_from_binding_binding_);

static PointerPropertyRNA rna_XrActionMapBindings_new_from_binding_result_;
PropertyRNA &rna_XrActionMapBindings_new_from_binding_result = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBindings_new_from_binding_result_);

FunctionRNA *rna_XrActionMapBindings_new_from_binding_func;
static PointerPropertyRNA rna_XrActionMapBindings_remove_binding_;
PropertyRNA &rna_XrActionMapBindings_remove_binding = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBindings_remove_binding_);

FunctionRNA *rna_XrActionMapBindings_remove_func;
static StringPropertyRNA rna_XrActionMapBindings_find_name_;
PropertyRNA &rna_XrActionMapBindings_find_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBindings_find_name_);

static PointerPropertyRNA rna_XrActionMapBindings_find_binding_;
PropertyRNA &rna_XrActionMapBindings_find_binding = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBindings_find_binding_);

FunctionRNA *rna_XrActionMapBindings_find_func;
StructRNA *RNA_XrActionMapBindings;
void register_struct_XrActionMapBindings(BlenderRNA &brna)
{
	rna_XrActionMapBindings_rna_properties_ = {
		{&rna_XrActionMapBindings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapBindings_rna_properties_begin, XrActionMapBindings_rna_properties_next, XrActionMapBindings_rna_properties_end, XrActionMapBindings_rna_properties_get, nullptr, nullptr, XrActionMapBindings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrActionMapBindings_rna_type_ = {
		{nullptr, 	&rna_XrActionMapBindings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapBindings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_XrActionMapBindings;
	srna->cont.properties = {&rna_XrActionMapBindings_rna_properties, &rna_XrActionMapBindings_rna_type};
	srna->identifier = "XrActionMapBindings";
	srna->flag = 516;
	srna->name = "XR Action Map Bindings";
	srna->description = "Collection of XR action map bindings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrActionMapBindings_rna_properties;
	{
	rna_XrActionMapBindings_new_name_ = {
		{&rna_XrActionMapBindings_new_replace_existing, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name of the action map binding",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrActionMapBindings_new_replace_existing_ = {
		{&rna_XrActionMapBindings_new_binding, 	&rna_XrActionMapBindings_new_name,
		-1, "replace_existing", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Replace Existing",
		"Replace any existing binding with the same name",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_XrActionMapBindings_new_binding_ = {
		{nullptr, 	&rna_XrActionMapBindings_new_replace_existing,
		-1, "binding", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Binding",
		"Added action map binding",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapBinding
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMapBindings_new_name, &rna_XrActionMapBindings_new_binding};
		func->identifier = "new";
		func->description = "new";
		func->call = XrActionMapBindings_new_call;
		func->c_ret = &rna_XrActionMapBindings_new_binding;
		rna_XrActionMapBindings_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrActionMapBindings_new_from_binding_binding_ = {
		{&rna_XrActionMapBindings_new_from_binding_result, 	nullptr,
		-1, "binding", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "Binding",
		"Binding to use as a reference",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapBinding
	};
	rna_XrActionMapBindings_new_from_binding_result_ = {
		{nullptr, 	&rna_XrActionMapBindings_new_from_binding_binding,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Binding",
		"Added action map binding",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapBinding
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMapBindings_new_from_binding_binding, &rna_XrActionMapBindings_new_from_binding_result};
		func->identifier = "new_from_binding";
		func->description = "new_from_binding";
		func->call = XrActionMapBindings_new_from_binding_call;
		func->c_ret = &rna_XrActionMapBindings_new_from_binding_result;
		rna_XrActionMapBindings_new_from_binding_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrActionMapBindings_remove_binding_ = {
		{nullptr, 	nullptr,
		-1, "binding", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "Binding",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapBinding
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMapBindings_remove_binding, &rna_XrActionMapBindings_remove_binding};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "remove";
		func->call = XrActionMapBindings_remove_call;
		rna_XrActionMapBindings_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrActionMapBindings_find_name_ = {
		{&rna_XrActionMapBindings_find_binding, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrActionMapBindings_find_binding_ = {
		{nullptr, 	&rna_XrActionMapBindings_find_name,
		-1, "binding", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Binding",
		"The action map binding with the given name",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapBinding
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMapBindings_find_name, &rna_XrActionMapBindings_find_binding};
		func->identifier = "find";
		func->description = "find";
		func->call = XrActionMapBindings_find_call;
		func->c_ret = &rna_XrActionMapBindings_find_binding;
		rna_XrActionMapBindings_find_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* XR Component Path */
static CollectionPropertyRNA rna_XrComponentPath_rna_properties_;
PropertyRNA &rna_XrComponentPath_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrComponentPath_rna_properties_);

static PointerPropertyRNA rna_XrComponentPath_rna_type_;
PropertyRNA &rna_XrComponentPath_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrComponentPath_rna_type_);

static StringPropertyRNA rna_XrComponentPath_path_;
PropertyRNA &rna_XrComponentPath_path = reinterpret_cast<PropertyRNA &>(rna_XrComponentPath_path_);

StructRNA *RNA_XrComponentPath;
void register_struct_XrComponentPath(BlenderRNA &brna)
{
	rna_XrComponentPath_rna_properties_ = {
		{&rna_XrComponentPath_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrComponentPath_rna_properties_begin, XrComponentPath_rna_properties_next, XrComponentPath_rna_properties_end, XrComponentPath_rna_properties_get, nullptr, nullptr, XrComponentPath_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrComponentPath_rna_type_ = {
		{&rna_XrComponentPath_path, 	&rna_XrComponentPath_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrComponentPath_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_XrComponentPath_path_ = {
		{nullptr, 	&rna_XrComponentPath_rna_type,
		-1, "path", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Path",
		"OpenXR component path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {192, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrComponentPath_path_get, XrComponentPath_path_length, XrComponentPath_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 192, ""
	};

	StructRNA *srna = RNA_XrComponentPath;
	srna->cont.properties = {&rna_XrComponentPath_rna_properties, &rna_XrComponentPath_path};
	srna->identifier = "XrComponentPath";
	srna->flag = 516;
	srna->name = "XR Component Path";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrComponentPath_rna_properties;
};

/* XR Action Map Binding */
static CollectionPropertyRNA rna_XrActionMapBinding_rna_properties_;
PropertyRNA &rna_XrActionMapBinding_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBinding_rna_properties_);

static PointerPropertyRNA rna_XrActionMapBinding_rna_type_;
PropertyRNA &rna_XrActionMapBinding_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBinding_rna_type_);

static StringPropertyRNA rna_XrActionMapBinding_name_;
PropertyRNA &rna_XrActionMapBinding_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBinding_name_);

static StringPropertyRNA rna_XrActionMapBinding_profile_;
PropertyRNA &rna_XrActionMapBinding_profile = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBinding_profile_);

static CollectionPropertyRNA rna_XrActionMapBinding_component_paths_;
PropertyRNA &rna_XrActionMapBinding_component_paths = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBinding_component_paths_);

static FloatPropertyRNA rna_XrActionMapBinding_threshold_;
PropertyRNA &rna_XrActionMapBinding_threshold = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBinding_threshold_);

static EnumPropertyRNA rna_XrActionMapBinding_axis0_region_;
PropertyRNA &rna_XrActionMapBinding_axis0_region = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBinding_axis0_region_);

static EnumPropertyRNA rna_XrActionMapBinding_axis1_region_;
PropertyRNA &rna_XrActionMapBinding_axis1_region = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBinding_axis1_region_);

static FloatPropertyRNA rna_XrActionMapBinding_pose_location_;
PropertyRNA &rna_XrActionMapBinding_pose_location = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBinding_pose_location_);

static FloatPropertyRNA rna_XrActionMapBinding_pose_rotation_;
PropertyRNA &rna_XrActionMapBinding_pose_rotation = reinterpret_cast<PropertyRNA &>(rna_XrActionMapBinding_pose_rotation_);

StructRNA *RNA_XrActionMapBinding;
void register_struct_XrActionMapBinding(BlenderRNA &brna)
{
	rna_XrActionMapBinding_rna_properties_ = {
		{&rna_XrActionMapBinding_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapBinding_rna_properties_begin, XrActionMapBinding_rna_properties_next, XrActionMapBinding_rna_properties_end, XrActionMapBinding_rna_properties_get, nullptr, nullptr, XrActionMapBinding_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrActionMapBinding_rna_type_ = {
		{&rna_XrActionMapBinding_name, 	&rna_XrActionMapBinding_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapBinding_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_XrActionMapBinding_name_ = {
		{&rna_XrActionMapBinding_profile, 	&rna_XrActionMapBinding_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the action map binding",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_XrActionMapBinding_name_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapBinding_name_get, XrActionMapBinding_name_length, XrActionMapBinding_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_XrActionMapBinding_profile_ = {
		{&rna_XrActionMapBinding_component_paths, 	&rna_XrActionMapBinding_name,
		-1, "profile", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Profile",
		"OpenXR interaction profile path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {256, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapBinding_profile_get, XrActionMapBinding_profile_length, XrActionMapBinding_profile_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_XrActionMapBinding_component_paths_ = {
		{&rna_XrActionMapBinding_threshold, 	&rna_XrActionMapBinding_profile,
		-1, "component_paths", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Component Paths",
		"OpenXR component paths",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_XrComponentPaths},
		XrActionMapBinding_component_paths_begin, XrActionMapBinding_component_paths_next, XrActionMapBinding_component_paths_end, XrActionMapBinding_component_paths_get, XrActionMapBinding_component_paths_length, XrActionMapBinding_component_paths_lookup_int, nullptr, nullptr, RNA_XrComponentPath
	};

	rna_XrActionMapBinding_threshold_ = {
		{&rna_XrActionMapBinding_axis0_region, 	&rna_XrActionMapBinding_component_paths,
		-1, "threshold", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Input threshold for button/axis actions",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrActionMapBinding, float_threshold), RawPropertyType(5), nullptr},
		XrActionMapBinding_threshold_get, XrActionMapBinding_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_XrActionMapBinding_axis0_region_items[4] = {
		{0, "ANY", 0, "Any", "Use any axis region for operator execution"	},
		{1, "POSITIVE", 0, "Positive", "Use positive axis region only for operator execution"	},
		{2, "NEGATIVE", 0, "Negative", "Use negative axis region only for operator execution"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrActionMapBinding_axis0_region_ = {
		{&rna_XrActionMapBinding_axis1_region, 	&rna_XrActionMapBinding_threshold,
		-1, "axis0_region", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Axis 0 Region",
		"Action execution region for the first input axis",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapBinding_axis0_region_get, XrActionMapBinding_axis0_region_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrActionMapBinding_axis0_region_items, 3, 0
	};

	static const EnumPropertyItem rna_XrActionMapBinding_axis1_region_items[4] = {
		{0, "ANY", 0, "Any", "Use any axis region for operator execution"	},
		{4, "POSITIVE", 0, "Positive", "Use positive axis region only for operator execution"	},
		{8, "NEGATIVE", 0, "Negative", "Use negative axis region only for operator execution"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrActionMapBinding_axis1_region_ = {
		{&rna_XrActionMapBinding_pose_location, 	&rna_XrActionMapBinding_axis0_region,
		-1, "axis1_region", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Axis 1 Region",
		"Action execution region for the second input axis",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMapBinding_axis1_region_get, XrActionMapBinding_axis1_region_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrActionMapBinding_axis1_region_items, 3, 0
	};

	static float rna_XrActionMapBinding_pose_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrActionMapBinding_pose_location_ = {
		{&rna_XrActionMapBinding_pose_rotation, 	&rna_XrActionMapBinding_axis1_region,
		-1, "pose_location", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pose Location Offset",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrActionMapBinding, pose_location), RawPropertyType(5), nullptr},
		nullptr, nullptr, XrActionMapBinding_pose_location_get, XrActionMapBinding_pose_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrActionMapBinding_pose_location_default
	};

	static float rna_XrActionMapBinding_pose_rotation_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrActionMapBinding_pose_rotation_ = {
		{nullptr, 	&rna_XrActionMapBinding_pose_location,
		-1, "pose_rotation", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pose Rotation Offset",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrActionMapBinding, pose_rotation), RawPropertyType(5), nullptr},
		nullptr, nullptr, XrActionMapBinding_pose_rotation_get, XrActionMapBinding_pose_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrActionMapBinding_pose_rotation_default
	};

	StructRNA *srna = RNA_XrActionMapBinding;
	srna->cont.properties = {&rna_XrActionMapBinding_rna_properties, &rna_XrActionMapBinding_pose_rotation};
	srna->identifier = "XrActionMapBinding";
	srna->flag = 516;
	srna->name = "XR Action Map Binding";
	srna->description = "Binding in an XR action map item";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_XrActionMapBinding_name;
	srna->iteratorproperty = &rna_XrActionMapBinding_rna_properties;
};

/* XR Component Paths */
static CollectionPropertyRNA rna_XrComponentPaths_rna_properties_;
PropertyRNA &rna_XrComponentPaths_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrComponentPaths_rna_properties_);

static PointerPropertyRNA rna_XrComponentPaths_rna_type_;
PropertyRNA &rna_XrComponentPaths_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrComponentPaths_rna_type_);

static StringPropertyRNA rna_XrComponentPaths_new_path_;
PropertyRNA &rna_XrComponentPaths_new_path = reinterpret_cast<PropertyRNA &>(rna_XrComponentPaths_new_path_);

static PointerPropertyRNA rna_XrComponentPaths_new_component_path_;
PropertyRNA &rna_XrComponentPaths_new_component_path = reinterpret_cast<PropertyRNA &>(rna_XrComponentPaths_new_component_path_);

FunctionRNA *rna_XrComponentPaths_new_func;
static PointerPropertyRNA rna_XrComponentPaths_remove_component_path_;
PropertyRNA &rna_XrComponentPaths_remove_component_path = reinterpret_cast<PropertyRNA &>(rna_XrComponentPaths_remove_component_path_);

FunctionRNA *rna_XrComponentPaths_remove_func;
static StringPropertyRNA rna_XrComponentPaths_find_path_;
PropertyRNA &rna_XrComponentPaths_find_path = reinterpret_cast<PropertyRNA &>(rna_XrComponentPaths_find_path_);

static PointerPropertyRNA rna_XrComponentPaths_find_component_path_;
PropertyRNA &rna_XrComponentPaths_find_component_path = reinterpret_cast<PropertyRNA &>(rna_XrComponentPaths_find_component_path_);

FunctionRNA *rna_XrComponentPaths_find_func;
StructRNA *RNA_XrComponentPaths;
void register_struct_XrComponentPaths(BlenderRNA &brna)
{
	rna_XrComponentPaths_rna_properties_ = {
		{&rna_XrComponentPaths_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrComponentPaths_rna_properties_begin, XrComponentPaths_rna_properties_next, XrComponentPaths_rna_properties_end, XrComponentPaths_rna_properties_get, nullptr, nullptr, XrComponentPaths_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrComponentPaths_rna_type_ = {
		{nullptr, 	&rna_XrComponentPaths_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrComponentPaths_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_XrComponentPaths;
	srna->cont.properties = {&rna_XrComponentPaths_rna_properties, &rna_XrComponentPaths_rna_type};
	srna->identifier = "XrComponentPaths";
	srna->flag = 516;
	srna->name = "XR Component Paths";
	srna->description = "Collection of OpenXR component paths";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrComponentPaths_rna_properties;
	{
	rna_XrComponentPaths_new_path_ = {
		{&rna_XrComponentPaths_new_component_path, 	nullptr,
		-1, "path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Path",
		"OpenXR component path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 192, ""
	};
	rna_XrComponentPaths_new_component_path_ = {
		{nullptr, 	&rna_XrComponentPaths_new_path,
		-1, "component_path", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Component Path",
		"Added component path",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrComponentPath
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrComponentPaths_new_path, &rna_XrComponentPaths_new_component_path};
		func->identifier = "new";
		func->description = "new";
		func->call = XrComponentPaths_new_call;
		func->c_ret = &rna_XrComponentPaths_new_component_path;
		rna_XrComponentPaths_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrComponentPaths_remove_component_path_ = {
		{nullptr, 	nullptr,
		-1, "component_path", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "Component Path",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrComponentPath
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrComponentPaths_remove_component_path, &rna_XrComponentPaths_remove_component_path};
		func->identifier = "remove";
		func->description = "remove";
		func->call = XrComponentPaths_remove_call;
		rna_XrComponentPaths_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrComponentPaths_find_path_ = {
		{&rna_XrComponentPaths_find_component_path, 	nullptr,
		-1, "path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Path",
		"OpenXR component path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 192, ""
	};
	rna_XrComponentPaths_find_component_path_ = {
		{nullptr, 	&rna_XrComponentPaths_find_path,
		-1, "component_path", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Component Path",
		"The component path with the given path",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrComponentPath
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrComponentPaths_find_path, &rna_XrComponentPaths_find_component_path};
		func->identifier = "find";
		func->description = "find";
		func->call = XrComponentPaths_find_call;
		func->c_ret = &rna_XrComponentPaths_find_component_path;
		rna_XrComponentPaths_find_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* XR Session Settings */
static CollectionPropertyRNA rna_XrSessionSettings_rna_properties_;
PropertyRNA &rna_XrSessionSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_rna_properties_);

static PointerPropertyRNA rna_XrSessionSettings_rna_type_;
PropertyRNA &rna_XrSessionSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_rna_type_);

static PointerPropertyRNA rna_XrSessionSettings_shading_;
PropertyRNA &rna_XrSessionSettings_shading = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_shading_);

static EnumPropertyRNA rna_XrSessionSettings_base_pose_type_;
PropertyRNA &rna_XrSessionSettings_base_pose_type = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_base_pose_type_);

static PointerPropertyRNA rna_XrSessionSettings_base_pose_object_;
PropertyRNA &rna_XrSessionSettings_base_pose_object = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_base_pose_object_);

static FloatPropertyRNA rna_XrSessionSettings_base_pose_location_;
PropertyRNA &rna_XrSessionSettings_base_pose_location = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_base_pose_location_);

static FloatPropertyRNA rna_XrSessionSettings_base_pose_angle_;
PropertyRNA &rna_XrSessionSettings_base_pose_angle = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_base_pose_angle_);

static FloatPropertyRNA rna_XrSessionSettings_base_scale_;
PropertyRNA &rna_XrSessionSettings_base_scale = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_base_scale_);

static BoolPropertyRNA rna_XrSessionSettings_show_floor_;
PropertyRNA &rna_XrSessionSettings_show_floor = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_floor_);

static BoolPropertyRNA rna_XrSessionSettings_show_passthrough_;
PropertyRNA &rna_XrSessionSettings_show_passthrough = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_passthrough_);

static BoolPropertyRNA rna_XrSessionSettings_show_annotation_;
PropertyRNA &rna_XrSessionSettings_show_annotation = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_annotation_);

static BoolPropertyRNA rna_XrSessionSettings_show_selection_;
PropertyRNA &rna_XrSessionSettings_show_selection = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_selection_);

static BoolPropertyRNA rna_XrSessionSettings_show_controllers_;
PropertyRNA &rna_XrSessionSettings_show_controllers = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_controllers_);

static BoolPropertyRNA rna_XrSessionSettings_show_custom_overlays_;
PropertyRNA &rna_XrSessionSettings_show_custom_overlays = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_custom_overlays_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_extras_;
PropertyRNA &rna_XrSessionSettings_show_object_extras = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_extras_);

static EnumPropertyRNA rna_XrSessionSettings_controller_draw_style_;
PropertyRNA &rna_XrSessionSettings_controller_draw_style = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_controller_draw_style_);

static BoolPropertyRNA rna_XrSessionSettings_viewfinder_enabled_;
PropertyRNA &rna_XrSessionSettings_viewfinder_enabled = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_viewfinder_enabled_);

static EnumPropertyRNA rna_XrSessionSettings_viewfinder_hand_;
PropertyRNA &rna_XrSessionSettings_viewfinder_hand = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_viewfinder_hand_);

static FloatPropertyRNA rna_XrSessionSettings_viewfinder_scale_;
PropertyRNA &rna_XrSessionSettings_viewfinder_scale = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_viewfinder_scale_);

static BoolPropertyRNA rna_XrSessionSettings_viewfinder_crosshair_enabled_;
PropertyRNA &rna_XrSessionSettings_viewfinder_crosshair_enabled = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_viewfinder_crosshair_enabled_);

static FloatPropertyRNA rna_XrSessionSettings_viewfinder_passepartout_overscan_;
PropertyRNA &rna_XrSessionSettings_viewfinder_passepartout_overscan = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_viewfinder_passepartout_overscan_);

static FloatPropertyRNA rna_XrSessionSettings_viewfinder_passepartout_opacity_;
PropertyRNA &rna_XrSessionSettings_viewfinder_passepartout_opacity = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_viewfinder_passepartout_opacity_);

static FloatPropertyRNA rna_XrSessionSettings_clip_start_;
PropertyRNA &rna_XrSessionSettings_clip_start = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_clip_start_);

static FloatPropertyRNA rna_XrSessionSettings_clip_end_;
PropertyRNA &rna_XrSessionSettings_clip_end = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_clip_end_);

static FloatPropertyRNA rna_XrSessionSettings_fly_speed_;
PropertyRNA &rna_XrSessionSettings_fly_speed = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_fly_speed_);

static FloatPropertyRNA rna_XrSessionSettings_view_scale_;
PropertyRNA &rna_XrSessionSettings_view_scale = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_view_scale_);

static BoolPropertyRNA rna_XrSessionSettings_use_positional_tracking_;
PropertyRNA &rna_XrSessionSettings_use_positional_tracking = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_use_positional_tracking_);

static BoolPropertyRNA rna_XrSessionSettings_use_absolute_tracking_;
PropertyRNA &rna_XrSessionSettings_use_absolute_tracking = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_use_absolute_tracking_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_mesh_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_mesh = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_mesh_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_curve_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_curve = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_curve_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_surf_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_surf = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_surf_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_meta_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_meta = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_meta_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_font_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_font = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_font_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_curves_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_curves = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_curves_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_pointcloud_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_pointcloud = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_pointcloud_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_volume_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_volume = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_volume_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_armature_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_armature = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_armature_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_lattice_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_lattice = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_lattice_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_empty_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_empty = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_empty_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_grease_pencil_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_grease_pencil_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_camera_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_camera = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_camera_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_light_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_light = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_light_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_speaker_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_speaker = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_speaker_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_light_probe_;
PropertyRNA &rna_XrSessionSettings_show_object_viewport_light_probe = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_viewport_light_probe_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_mesh_;
PropertyRNA &rna_XrSessionSettings_show_object_select_mesh = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_mesh_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_curve_;
PropertyRNA &rna_XrSessionSettings_show_object_select_curve = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_curve_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_surf_;
PropertyRNA &rna_XrSessionSettings_show_object_select_surf = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_surf_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_meta_;
PropertyRNA &rna_XrSessionSettings_show_object_select_meta = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_meta_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_font_;
PropertyRNA &rna_XrSessionSettings_show_object_select_font = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_font_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_curves_;
PropertyRNA &rna_XrSessionSettings_show_object_select_curves = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_curves_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_pointcloud_;
PropertyRNA &rna_XrSessionSettings_show_object_select_pointcloud = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_pointcloud_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_volume_;
PropertyRNA &rna_XrSessionSettings_show_object_select_volume = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_volume_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_armature_;
PropertyRNA &rna_XrSessionSettings_show_object_select_armature = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_armature_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_lattice_;
PropertyRNA &rna_XrSessionSettings_show_object_select_lattice = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_lattice_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_empty_;
PropertyRNA &rna_XrSessionSettings_show_object_select_empty = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_empty_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_grease_pencil_;
PropertyRNA &rna_XrSessionSettings_show_object_select_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_grease_pencil_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_camera_;
PropertyRNA &rna_XrSessionSettings_show_object_select_camera = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_camera_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_light_;
PropertyRNA &rna_XrSessionSettings_show_object_select_light = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_light_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_speaker_;
PropertyRNA &rna_XrSessionSettings_show_object_select_speaker = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_speaker_);

static BoolPropertyRNA rna_XrSessionSettings_show_object_select_light_probe_;
PropertyRNA &rna_XrSessionSettings_show_object_select_light_probe = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_show_object_select_light_probe_);

static IntPropertyRNA rna_XrSessionSettings_icon_from_show_object_viewport_;
PropertyRNA &rna_XrSessionSettings_icon_from_show_object_viewport = reinterpret_cast<PropertyRNA &>(rna_XrSessionSettings_icon_from_show_object_viewport_);

StructRNA *RNA_XrSessionSettings;
void register_struct_XrSessionSettings(BlenderRNA &brna)
{
	rna_XrSessionSettings_rna_properties_ = {
		{&rna_XrSessionSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_rna_properties_begin, XrSessionSettings_rna_properties_next, XrSessionSettings_rna_properties_end, XrSessionSettings_rna_properties_get, nullptr, nullptr, XrSessionSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrSessionSettings_rna_type_ = {
		{&rna_XrSessionSettings_shading, 	&rna_XrSessionSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_XrSessionSettings_shading_ = {
		{&rna_XrSessionSettings_base_pose_type, 	&rna_XrSessionSettings_rna_type,
		-1, "shading", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shading Settings",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_shading_get, nullptr, nullptr, nullptr,RNA_View3DShading
	};

	static const EnumPropertyItem rna_XrSessionSettings_base_pose_type_items[4] = {
		{0, "SCENE_CAMERA", 0, "Scene Camera", "Follow the active scene camera to define the VR view\'s base pose"	},
		{1, "OBJECT", 0, "Object", "Follow the transformation of an object to define the VR view\'s base pose"	},
		{2, "CUSTOM", 0, "Custom", "Follow a custom transformation to define the VR view\'s base pose"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrSessionSettings_base_pose_type_ = {
		{&rna_XrSessionSettings_base_pose_object, 	&rna_XrSessionSettings_shading,
		-1, "base_pose_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Base Pose Type",
		"Define where the location and rotation for the VR view come from, to which translation and rotation deltas from the VR headset will be applied to",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, base_pose_type), RawPropertyType(2), nullptr},
		XrSessionSettings_base_pose_type_get, XrSessionSettings_base_pose_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrSessionSettings_base_pose_type_items, 3, 0
	};

	rna_XrSessionSettings_base_pose_object_ = {
		{&rna_XrSessionSettings_base_pose_location, 	&rna_XrSessionSettings_base_pose_type,
		-1, "base_pose_object", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Base Pose Object",
		"Object to take the location and rotation to which translation and rotation deltas from the VR headset will be applied to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_base_pose_object_get, XrSessionSettings_base_pose_object_set, nullptr, nullptr,RNA_Object
	};

	static float rna_XrSessionSettings_base_pose_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrSessionSettings_base_pose_location_ = {
		{&rna_XrSessionSettings_base_pose_angle, 	&rna_XrSessionSettings_base_pose_object,
		-1, "base_pose_location", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Base Pose Location",
		"Coordinates to apply translation deltas from the VR headset to",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, base_pose_location), RawPropertyType(5), nullptr},
		nullptr, nullptr, XrSessionSettings_base_pose_location_get, XrSessionSettings_base_pose_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_XrSessionSettings_base_pose_location_default
	};

	rna_XrSessionSettings_base_pose_angle_ = {
		{&rna_XrSessionSettings_base_scale, 	&rna_XrSessionSettings_base_pose_location,
		-1, "base_pose_angle", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Base Pose Angle",
		"Rotation angle around the Z-Axis to apply the rotation deltas from the VR headset to",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_AXISANGLE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, base_pose_angle), RawPropertyType(5), nullptr},
		XrSessionSettings_base_pose_angle_get, XrSessionSettings_base_pose_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrSessionSettings_base_scale_ = {
		{&rna_XrSessionSettings_show_floor, 	&rna_XrSessionSettings_base_pose_angle,
		-1, "base_scale", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Base Scale",
		"Uniform base pose scale to apply to VR view",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, base_scale), RawPropertyType(5), nullptr},
		XrSessionSettings_base_scale_get, XrSessionSettings_base_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_XrSessionSettings_show_floor_ = {
		{&rna_XrSessionSettings_show_passthrough, 	&rna_XrSessionSettings_base_scale,
		-1, "show_floor", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Grid Floor",
		"Show the ground plane grid",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_floor_get, XrSessionSettings_show_floor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrSessionSettings_show_passthrough_ = {
		{&rna_XrSessionSettings_show_annotation, 	&rna_XrSessionSettings_show_floor,
		-1, "show_passthrough", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Passthrough",
		"Show the passthrough view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_passthrough_get, XrSessionSettings_show_passthrough_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrSessionSettings_show_annotation_ = {
		{&rna_XrSessionSettings_show_selection, 	&rna_XrSessionSettings_show_passthrough,
		-1, "show_annotation", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Annotation",
		"Show annotations for this view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_annotation_get, XrSessionSettings_show_annotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrSessionSettings_show_selection_ = {
		{&rna_XrSessionSettings_show_controllers, 	&rna_XrSessionSettings_show_annotation,
		-1, "show_selection", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Selection",
		"Show selection outlines",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_selection_get, XrSessionSettings_show_selection_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrSessionSettings_show_controllers_ = {
		{&rna_XrSessionSettings_show_custom_overlays, 	&rna_XrSessionSettings_show_selection,
		-1, "show_controllers", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Controllers",
		"Show VR controllers (requires VR actions for controller poses)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_controllers_get, XrSessionSettings_show_controllers_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrSessionSettings_show_custom_overlays_ = {
		{&rna_XrSessionSettings_show_object_extras, 	&rna_XrSessionSettings_show_controllers,
		-1, "show_custom_overlays", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Custom Overlays",
		"Show custom VR overlays",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_custom_overlays_get, XrSessionSettings_show_custom_overlays_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrSessionSettings_show_object_extras_ = {
		{&rna_XrSessionSettings_controller_draw_style, 	&rna_XrSessionSettings_show_custom_overlays,
		-1, "show_object_extras", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Object Extras",
		"Show object extras, including empties, lights, and cameras",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_extras_get, XrSessionSettings_show_object_extras_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_XrSessionSettings_controller_draw_style_items[5] = {
		{0, "DARK", 0, "Dark", "Draw dark controller"	},
		{1, "LIGHT", 0, "Light", "Draw light controller"	},
		{2, "DARK_RAY", 0, "Dark + Ray", "Draw dark controller with aiming axis ray"	},
		{3, "LIGHT_RAY", 0, "Light + Ray", "Draw light controller with aiming axis ray"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrSessionSettings_controller_draw_style_ = {
		{&rna_XrSessionSettings_viewfinder_enabled, 	&rna_XrSessionSettings_show_object_extras,
		-1, "controller_draw_style", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Controller Draw Style",
		"Style to use when drawing VR controllers",
		0, "Color",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, controller_draw_style), RawPropertyType(2), nullptr},
		XrSessionSettings_controller_draw_style_get, XrSessionSettings_controller_draw_style_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrSessionSettings_controller_draw_style_items, 4, 0
	};

	rna_XrSessionSettings_viewfinder_enabled_ = {
		{&rna_XrSessionSettings_viewfinder_hand, 	&rna_XrSessionSettings_controller_draw_style,
		-1, "viewfinder_enabled", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Viewfinder Enabled",
		"Enable the Location Scouting Viewfinder",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, viewfinder_enabled), RawPropertyType(3), nullptr},
		XrSessionSettings_viewfinder_enabled_get, XrSessionSettings_viewfinder_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_XrSessionSettings_viewfinder_hand_items[3] = {
		{0, "LEFT", 0, "Left", "Place the viewfinder on the left hand controller"	},
		{1, "RIGHT", 0, "Right", "Place the viewfinder on the right hand controller"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrSessionSettings_viewfinder_hand_ = {
		{&rna_XrSessionSettings_viewfinder_scale, 	&rna_XrSessionSettings_viewfinder_enabled,
		-1, "viewfinder_hand", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Viewfinder Hand",
		"Hand on which to place the Location Scouting Viewfinder",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, viewfinder_hand), RawPropertyType(2), nullptr},
		XrSessionSettings_viewfinder_hand_get, XrSessionSettings_viewfinder_hand_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrSessionSettings_viewfinder_hand_items, 2, 0
	};

	rna_XrSessionSettings_viewfinder_scale_ = {
		{&rna_XrSessionSettings_viewfinder_crosshair_enabled, 	&rna_XrSessionSettings_viewfinder_hand,
		-1, "viewfinder_scale", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Viewfinder Scale",
		"Location Scouting Viewfinder size scale",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, viewfinder_scale), RawPropertyType(5), nullptr},
		XrSessionSettings_viewfinder_scale_get, XrSessionSettings_viewfinder_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 3.0f, -3.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_XrSessionSettings_viewfinder_crosshair_enabled_ = {
		{&rna_XrSessionSettings_viewfinder_passepartout_overscan, 	&rna_XrSessionSettings_viewfinder_scale,
		-1, "viewfinder_crosshair_enabled", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Viewfinder Crosshair Enabled",
		"Enable the Viewfinder Crosshair",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, viewfinder_crosshair_enabled), RawPropertyType(3), nullptr},
		XrSessionSettings_viewfinder_crosshair_enabled_get, XrSessionSettings_viewfinder_crosshair_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_viewfinder_passepartout_overscan_ = {
		{&rna_XrSessionSettings_viewfinder_passepartout_opacity, 	&rna_XrSessionSettings_viewfinder_crosshair_enabled,
		-1, "viewfinder_passepartout_overscan", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Viewfinder Passepartout Overscan",
		"Border size of the Viewfinder Passepartout overlay",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, viewfinder_passepartout_overscan), RawPropertyType(5), nullptr},
		XrSessionSettings_viewfinder_passepartout_overscan_get, XrSessionSettings_viewfinder_passepartout_overscan_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_XrSessionSettings_viewfinder_passepartout_opacity_ = {
		{&rna_XrSessionSettings_clip_start, 	&rna_XrSessionSettings_viewfinder_passepartout_overscan,
		-1, "viewfinder_passepartout_opacity", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Viewfinder Passepartout Opacity",
		"Opacity of the darkened Viewfinder Passepartout overlay",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, viewfinder_passepartout_opacity), RawPropertyType(5), nullptr},
		XrSessionSettings_viewfinder_passepartout_opacity_get, XrSessionSettings_viewfinder_passepartout_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_XrSessionSettings_clip_start_ = {
		{&rna_XrSessionSettings_clip_end, 	&rna_XrSessionSettings_viewfinder_passepartout_opacity,
		-1, "clip_start", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clip Start",
		"VR viewport near clipping distance",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, clip_start), RawPropertyType(5), nullptr},
		XrSessionSettings_clip_start_get, XrSessionSettings_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrSessionSettings_clip_end_ = {
		{&rna_XrSessionSettings_fly_speed, 	&rna_XrSessionSettings_clip_start,
		-1, "clip_end", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clip End",
		"VR viewport far clipping distance",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, clip_end), RawPropertyType(5), nullptr},
		XrSessionSettings_clip_end_get, XrSessionSettings_clip_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 1000.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrSessionSettings_fly_speed_ = {
		{&rna_XrSessionSettings_view_scale, 	&rna_XrSessionSettings_clip_end,
		-1, "fly_speed", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fly Speed",
		"Fly speed in meters per second",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, fly_speed), RawPropertyType(5), nullptr},
		XrSessionSettings_fly_speed_get, XrSessionSettings_fly_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 50.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrSessionSettings_view_scale_ = {
		{&rna_XrSessionSettings_use_positional_tracking, 	&rna_XrSessionSettings_fly_speed,
		-1, "view_scale", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "View Scale",
		"Scaling factor applied to the VR view for fine adjustments. Modifying this value will keep the viewer at the same world relative position",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(XrSessionSettings, view_scale), RawPropertyType(5), nullptr},
		XrSessionSettings_view_scale_get, XrSessionSettings_view_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 100.0f, 0.0000010000f, FLT_MAX, 0.1000000015f, 4, nullptr, nullptr, 1.0f, nullptr
	};

	rna_XrSessionSettings_use_positional_tracking_ = {
		{&rna_XrSessionSettings_use_absolute_tracking, 	&rna_XrSessionSettings_view_scale,
		-1, "use_positional_tracking", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Positional Tracking",
		"Allow VR headsets to affect the location in virtual space, in addition to the rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_use_positional_tracking_get, XrSessionSettings_use_positional_tracking_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrSessionSettings_use_absolute_tracking_ = {
		{&rna_XrSessionSettings_show_object_viewport_mesh, 	&rna_XrSessionSettings_use_positional_tracking,
		-1, "use_absolute_tracking", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Absolute Tracking",
		"Allow the VR tracking origin to be defined independently of the headset location",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_use_absolute_tracking_get, XrSessionSettings_use_absolute_tracking_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_mesh_ = {
		{&rna_XrSessionSettings_show_object_viewport_curve, 	&rna_XrSessionSettings_use_absolute_tracking,
		-1, "show_object_viewport_mesh", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mesh",
		"Show mesh objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_mesh_get, XrSessionSettings_show_object_viewport_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_curve_ = {
		{&rna_XrSessionSettings_show_object_viewport_surf, 	&rna_XrSessionSettings_show_object_viewport_mesh,
		-1, "show_object_viewport_curve", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve",
		"Show curves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_curve_get, XrSessionSettings_show_object_viewport_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_surf_ = {
		{&rna_XrSessionSettings_show_object_viewport_meta, 	&rna_XrSessionSettings_show_object_viewport_curve,
		-1, "show_object_viewport_surf", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Surface",
		"Show surfaces",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_surf_get, XrSessionSettings_show_object_viewport_surf_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_meta_ = {
		{&rna_XrSessionSettings_show_object_viewport_font, 	&rna_XrSessionSettings_show_object_viewport_surf,
		-1, "show_object_viewport_meta", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Meta",
		"Show metaballs",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_meta_get, XrSessionSettings_show_object_viewport_meta_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_font_ = {
		{&rna_XrSessionSettings_show_object_viewport_curves, 	&rna_XrSessionSettings_show_object_viewport_meta,
		-1, "show_object_viewport_font", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Font",
		"Show text objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_font_get, XrSessionSettings_show_object_viewport_font_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_curves_ = {
		{&rna_XrSessionSettings_show_object_viewport_pointcloud, 	&rna_XrSessionSettings_show_object_viewport_font,
		-1, "show_object_viewport_curves", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hair Curves",
		"Show hair curves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_curves_get, XrSessionSettings_show_object_viewport_curves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_pointcloud_ = {
		{&rna_XrSessionSettings_show_object_viewport_volume, 	&rna_XrSessionSettings_show_object_viewport_curves,
		-1, "show_object_viewport_pointcloud", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Point Cloud",
		"Show point clouds",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_pointcloud_get, XrSessionSettings_show_object_viewport_pointcloud_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_volume_ = {
		{&rna_XrSessionSettings_show_object_viewport_armature, 	&rna_XrSessionSettings_show_object_viewport_pointcloud,
		-1, "show_object_viewport_volume", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Volume",
		"Show volumes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_volume_get, XrSessionSettings_show_object_viewport_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_armature_ = {
		{&rna_XrSessionSettings_show_object_viewport_lattice, 	&rna_XrSessionSettings_show_object_viewport_volume,
		-1, "show_object_viewport_armature", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Armature",
		"Show armatures",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_armature_get, XrSessionSettings_show_object_viewport_armature_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_lattice_ = {
		{&rna_XrSessionSettings_show_object_viewport_empty, 	&rna_XrSessionSettings_show_object_viewport_armature,
		-1, "show_object_viewport_lattice", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lattice",
		"Show lattices",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_lattice_get, XrSessionSettings_show_object_viewport_lattice_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_empty_ = {
		{&rna_XrSessionSettings_show_object_viewport_grease_pencil, 	&rna_XrSessionSettings_show_object_viewport_lattice,
		-1, "show_object_viewport_empty", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Empty",
		"Show empties",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_empty_get, XrSessionSettings_show_object_viewport_empty_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_grease_pencil_ = {
		{&rna_XrSessionSettings_show_object_viewport_camera, 	&rna_XrSessionSettings_show_object_viewport_empty,
		-1, "show_object_viewport_grease_pencil", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grease Pencil",
		"Show Grease Pencil objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_grease_pencil_get, XrSessionSettings_show_object_viewport_grease_pencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_camera_ = {
		{&rna_XrSessionSettings_show_object_viewport_light, 	&rna_XrSessionSettings_show_object_viewport_grease_pencil,
		-1, "show_object_viewport_camera", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Camera",
		"Show cameras",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_camera_get, XrSessionSettings_show_object_viewport_camera_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_light_ = {
		{&rna_XrSessionSettings_show_object_viewport_speaker, 	&rna_XrSessionSettings_show_object_viewport_camera,
		-1, "show_object_viewport_light", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Light",
		"Show lights",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_light_get, XrSessionSettings_show_object_viewport_light_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_speaker_ = {
		{&rna_XrSessionSettings_show_object_viewport_light_probe, 	&rna_XrSessionSettings_show_object_viewport_light,
		-1, "show_object_viewport_speaker", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Speaker",
		"Show speakers",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_speaker_get, XrSessionSettings_show_object_viewport_speaker_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_viewport_light_probe_ = {
		{&rna_XrSessionSettings_show_object_select_mesh, 	&rna_XrSessionSettings_show_object_viewport_speaker,
		-1, "show_object_viewport_light_probe", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Light Probe",
		"Show light probes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_viewport_light_probe_get, XrSessionSettings_show_object_viewport_light_probe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_mesh_ = {
		{&rna_XrSessionSettings_show_object_select_curve, 	&rna_XrSessionSettings_show_object_viewport_light_probe,
		-1, "show_object_select_mesh", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mesh",
		"Allow selection of mesh objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_mesh_get, XrSessionSettings_show_object_select_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_curve_ = {
		{&rna_XrSessionSettings_show_object_select_surf, 	&rna_XrSessionSettings_show_object_select_mesh,
		-1, "show_object_select_curve", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve",
		"Allow selection of curves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_curve_get, XrSessionSettings_show_object_select_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_surf_ = {
		{&rna_XrSessionSettings_show_object_select_meta, 	&rna_XrSessionSettings_show_object_select_curve,
		-1, "show_object_select_surf", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Surface",
		"Allow selection of surfaces",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_surf_get, XrSessionSettings_show_object_select_surf_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_meta_ = {
		{&rna_XrSessionSettings_show_object_select_font, 	&rna_XrSessionSettings_show_object_select_surf,
		-1, "show_object_select_meta", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Meta",
		"Allow selection of metaballs",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_meta_get, XrSessionSettings_show_object_select_meta_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_font_ = {
		{&rna_XrSessionSettings_show_object_select_curves, 	&rna_XrSessionSettings_show_object_select_meta,
		-1, "show_object_select_font", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Font",
		"Allow selection of text objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_font_get, XrSessionSettings_show_object_select_font_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_curves_ = {
		{&rna_XrSessionSettings_show_object_select_pointcloud, 	&rna_XrSessionSettings_show_object_select_font,
		-1, "show_object_select_curves", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hair Curves",
		"Allow selection of hair curves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_curves_get, XrSessionSettings_show_object_select_curves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_pointcloud_ = {
		{&rna_XrSessionSettings_show_object_select_volume, 	&rna_XrSessionSettings_show_object_select_curves,
		-1, "show_object_select_pointcloud", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Point Cloud",
		"Allow selection of point clouds",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_pointcloud_get, XrSessionSettings_show_object_select_pointcloud_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_volume_ = {
		{&rna_XrSessionSettings_show_object_select_armature, 	&rna_XrSessionSettings_show_object_select_pointcloud,
		-1, "show_object_select_volume", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Volume",
		"Allow selection of volumes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_volume_get, XrSessionSettings_show_object_select_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_armature_ = {
		{&rna_XrSessionSettings_show_object_select_lattice, 	&rna_XrSessionSettings_show_object_select_volume,
		-1, "show_object_select_armature", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Armature",
		"Allow selection of armatures",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_armature_get, XrSessionSettings_show_object_select_armature_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_lattice_ = {
		{&rna_XrSessionSettings_show_object_select_empty, 	&rna_XrSessionSettings_show_object_select_armature,
		-1, "show_object_select_lattice", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lattice",
		"Allow selection of lattices",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_lattice_get, XrSessionSettings_show_object_select_lattice_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_empty_ = {
		{&rna_XrSessionSettings_show_object_select_grease_pencil, 	&rna_XrSessionSettings_show_object_select_lattice,
		-1, "show_object_select_empty", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Empty",
		"Allow selection of empties",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_empty_get, XrSessionSettings_show_object_select_empty_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_grease_pencil_ = {
		{&rna_XrSessionSettings_show_object_select_camera, 	&rna_XrSessionSettings_show_object_select_empty,
		-1, "show_object_select_grease_pencil", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grease Pencil",
		"Allow selection of Grease Pencil objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_grease_pencil_get, XrSessionSettings_show_object_select_grease_pencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_camera_ = {
		{&rna_XrSessionSettings_show_object_select_light, 	&rna_XrSessionSettings_show_object_select_grease_pencil,
		-1, "show_object_select_camera", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Camera",
		"Allow selection of cameras",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_camera_get, XrSessionSettings_show_object_select_camera_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_light_ = {
		{&rna_XrSessionSettings_show_object_select_speaker, 	&rna_XrSessionSettings_show_object_select_camera,
		-1, "show_object_select_light", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Light",
		"Allow selection of lights",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_light_get, XrSessionSettings_show_object_select_light_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_speaker_ = {
		{&rna_XrSessionSettings_show_object_select_light_probe, 	&rna_XrSessionSettings_show_object_select_light,
		-1, "show_object_select_speaker", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Speaker",
		"Allow selection of speakers",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_speaker_get, XrSessionSettings_show_object_select_speaker_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_show_object_select_light_probe_ = {
		{&rna_XrSessionSettings_icon_from_show_object_viewport, 	&rna_XrSessionSettings_show_object_select_speaker,
		-1, "show_object_select_light_probe", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Light Probe",
		"Allow selection of light probes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_show_object_select_light_probe_get, XrSessionSettings_show_object_select_light_probe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_XrSessionSettings_icon_from_show_object_viewport_ = {
		{nullptr, 	&rna_XrSessionSettings_show_object_select_light_probe,
		-1, "icon_from_show_object_viewport", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Visibility Icon",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionSettings_icon_from_show_object_viewport_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_XrSessionSettings;
	srna->cont.properties = {&rna_XrSessionSettings_rna_properties, &rna_XrSessionSettings_icon_from_show_object_viewport};
	srna->identifier = "XrSessionSettings";
	srna->flag = 516;
	srna->name = "XR Session Settings";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrSessionSettings_rna_properties;
};

/* Session State */
static CollectionPropertyRNA rna_XrSessionState_rna_properties_;
PropertyRNA &rna_XrSessionState_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_rna_properties_);

static PointerPropertyRNA rna_XrSessionState_rna_type_;
PropertyRNA &rna_XrSessionState_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_rna_type_);

static PointerPropertyRNA rna_XrSessionState_viewfinder_;
PropertyRNA &rna_XrSessionState_viewfinder = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_viewfinder_);

static FloatPropertyRNA rna_XrSessionState_viewer_pose_location_;
PropertyRNA &rna_XrSessionState_viewer_pose_location = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_viewer_pose_location_);

static FloatPropertyRNA rna_XrSessionState_viewer_pose_rotation_;
PropertyRNA &rna_XrSessionState_viewer_pose_rotation = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_viewer_pose_rotation_);

static FloatPropertyRNA rna_XrSessionState_navigation_location_;
PropertyRNA &rna_XrSessionState_navigation_location = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_navigation_location_);

static FloatPropertyRNA rna_XrSessionState_navigation_rotation_;
PropertyRNA &rna_XrSessionState_navigation_rotation = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_navigation_rotation_);

static FloatPropertyRNA rna_XrSessionState_navigation_scale_;
PropertyRNA &rna_XrSessionState_navigation_scale = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_navigation_scale_);

static FloatPropertyRNA rna_XrSessionState_viewer_scale_;
PropertyRNA &rna_XrSessionState_viewer_scale = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_viewer_scale_);

static CollectionPropertyRNA rna_XrSessionState_actionmaps_;
PropertyRNA &rna_XrSessionState_actionmaps = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_actionmaps_);

static IntPropertyRNA rna_XrSessionState_active_actionmap_;
PropertyRNA &rna_XrSessionState_active_actionmap = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_active_actionmap_);

static IntPropertyRNA rna_XrSessionState_selected_actionmap_;
PropertyRNA &rna_XrSessionState_selected_actionmap = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_selected_actionmap_);

static PointerPropertyRNA rna_XrSessionState_is_running_context_;
PropertyRNA &rna_XrSessionState_is_running_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_is_running_context_);

static BoolPropertyRNA rna_XrSessionState_is_running_result_;
PropertyRNA &rna_XrSessionState_is_running_result = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_is_running_result_);

FunctionRNA *rna_XrSessionState_is_running_func;
static PointerPropertyRNA rna_XrSessionState_reset_to_base_pose_context_;
PropertyRNA &rna_XrSessionState_reset_to_base_pose_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_reset_to_base_pose_context_);

FunctionRNA *rna_XrSessionState_reset_to_base_pose_func;
static PointerPropertyRNA rna_XrSessionState_action_set_create_context_;
PropertyRNA &rna_XrSessionState_action_set_create_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_set_create_context_);

static PointerPropertyRNA rna_XrSessionState_action_set_create_actionmap_;
PropertyRNA &rna_XrSessionState_action_set_create_actionmap = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_set_create_actionmap_);

static BoolPropertyRNA rna_XrSessionState_action_set_create_result_;
PropertyRNA &rna_XrSessionState_action_set_create_result = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_set_create_result_);

FunctionRNA *rna_XrSessionState_action_set_create_func;
static PointerPropertyRNA rna_XrSessionState_action_create_context_;
PropertyRNA &rna_XrSessionState_action_create_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_create_context_);

static PointerPropertyRNA rna_XrSessionState_action_create_actionmap_;
PropertyRNA &rna_XrSessionState_action_create_actionmap = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_create_actionmap_);

static PointerPropertyRNA rna_XrSessionState_action_create_actionmap_item_;
PropertyRNA &rna_XrSessionState_action_create_actionmap_item = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_create_actionmap_item_);

static BoolPropertyRNA rna_XrSessionState_action_create_result_;
PropertyRNA &rna_XrSessionState_action_create_result = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_create_result_);

FunctionRNA *rna_XrSessionState_action_create_func;
static PointerPropertyRNA rna_XrSessionState_action_binding_create_context_;
PropertyRNA &rna_XrSessionState_action_binding_create_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_binding_create_context_);

static PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_;
PropertyRNA &rna_XrSessionState_action_binding_create_actionmap = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_binding_create_actionmap_);

static PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_item_;
PropertyRNA &rna_XrSessionState_action_binding_create_actionmap_item = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_binding_create_actionmap_item_);

static PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_binding_;
PropertyRNA &rna_XrSessionState_action_binding_create_actionmap_binding = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_binding_create_actionmap_binding_);

static BoolPropertyRNA rna_XrSessionState_action_binding_create_result_;
PropertyRNA &rna_XrSessionState_action_binding_create_result = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_binding_create_result_);

FunctionRNA *rna_XrSessionState_action_binding_create_func;
static PointerPropertyRNA rna_XrSessionState_active_action_set_set_context_;
PropertyRNA &rna_XrSessionState_active_action_set_set_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_active_action_set_set_context_);

static StringPropertyRNA rna_XrSessionState_active_action_set_set_action_set_;
PropertyRNA &rna_XrSessionState_active_action_set_set_action_set = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_active_action_set_set_action_set_);

static BoolPropertyRNA rna_XrSessionState_active_action_set_set_result_;
PropertyRNA &rna_XrSessionState_active_action_set_set_result = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_active_action_set_set_result_);

FunctionRNA *rna_XrSessionState_active_action_set_set_func;
static PointerPropertyRNA rna_XrSessionState_controller_pose_actions_set_context_;
PropertyRNA &rna_XrSessionState_controller_pose_actions_set_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_pose_actions_set_context_);

static StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_action_set_;
PropertyRNA &rna_XrSessionState_controller_pose_actions_set_action_set = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_pose_actions_set_action_set_);

static StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_grip_action_;
PropertyRNA &rna_XrSessionState_controller_pose_actions_set_grip_action = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_pose_actions_set_grip_action_);

static StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_aim_action_;
PropertyRNA &rna_XrSessionState_controller_pose_actions_set_aim_action = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_pose_actions_set_aim_action_);

static BoolPropertyRNA rna_XrSessionState_controller_pose_actions_set_result_;
PropertyRNA &rna_XrSessionState_controller_pose_actions_set_result = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_pose_actions_set_result_);

FunctionRNA *rna_XrSessionState_controller_pose_actions_set_func;
static PointerPropertyRNA rna_XrSessionState_action_state_get_context_;
PropertyRNA &rna_XrSessionState_action_state_get_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_state_get_context_);

static StringPropertyRNA rna_XrSessionState_action_state_get_action_set_name_;
PropertyRNA &rna_XrSessionState_action_state_get_action_set_name = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_state_get_action_set_name_);

static StringPropertyRNA rna_XrSessionState_action_state_get_action_name_;
PropertyRNA &rna_XrSessionState_action_state_get_action_name = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_state_get_action_name_);

static StringPropertyRNA rna_XrSessionState_action_state_get_user_path_;
PropertyRNA &rna_XrSessionState_action_state_get_user_path = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_state_get_user_path_);

static FloatPropertyRNA rna_XrSessionState_action_state_get_state_;
PropertyRNA &rna_XrSessionState_action_state_get_state = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_action_state_get_state_);

FunctionRNA *rna_XrSessionState_action_state_get_func;
static PointerPropertyRNA rna_XrSessionState_haptic_action_apply_context_;
PropertyRNA &rna_XrSessionState_haptic_action_apply_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_apply_context_);

static StringPropertyRNA rna_XrSessionState_haptic_action_apply_action_set_name_;
PropertyRNA &rna_XrSessionState_haptic_action_apply_action_set_name = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_apply_action_set_name_);

static StringPropertyRNA rna_XrSessionState_haptic_action_apply_action_name_;
PropertyRNA &rna_XrSessionState_haptic_action_apply_action_name = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_apply_action_name_);

static StringPropertyRNA rna_XrSessionState_haptic_action_apply_user_path_;
PropertyRNA &rna_XrSessionState_haptic_action_apply_user_path = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_apply_user_path_);

static FloatPropertyRNA rna_XrSessionState_haptic_action_apply_duration_;
PropertyRNA &rna_XrSessionState_haptic_action_apply_duration = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_apply_duration_);

static FloatPropertyRNA rna_XrSessionState_haptic_action_apply_frequency_;
PropertyRNA &rna_XrSessionState_haptic_action_apply_frequency = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_apply_frequency_);

static FloatPropertyRNA rna_XrSessionState_haptic_action_apply_amplitude_;
PropertyRNA &rna_XrSessionState_haptic_action_apply_amplitude = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_apply_amplitude_);

static BoolPropertyRNA rna_XrSessionState_haptic_action_apply_result_;
PropertyRNA &rna_XrSessionState_haptic_action_apply_result = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_apply_result_);

FunctionRNA *rna_XrSessionState_haptic_action_apply_func;
static PointerPropertyRNA rna_XrSessionState_haptic_action_stop_context_;
PropertyRNA &rna_XrSessionState_haptic_action_stop_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_stop_context_);

static StringPropertyRNA rna_XrSessionState_haptic_action_stop_action_set_name_;
PropertyRNA &rna_XrSessionState_haptic_action_stop_action_set_name = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_stop_action_set_name_);

static StringPropertyRNA rna_XrSessionState_haptic_action_stop_action_name_;
PropertyRNA &rna_XrSessionState_haptic_action_stop_action_name = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_stop_action_name_);

static StringPropertyRNA rna_XrSessionState_haptic_action_stop_user_path_;
PropertyRNA &rna_XrSessionState_haptic_action_stop_user_path = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_haptic_action_stop_user_path_);

FunctionRNA *rna_XrSessionState_haptic_action_stop_func;
static PointerPropertyRNA rna_XrSessionState_controller_grip_location_get_context_;
PropertyRNA &rna_XrSessionState_controller_grip_location_get_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_grip_location_get_context_);

static IntPropertyRNA rna_XrSessionState_controller_grip_location_get_index_;
PropertyRNA &rna_XrSessionState_controller_grip_location_get_index = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_grip_location_get_index_);

static FloatPropertyRNA rna_XrSessionState_controller_grip_location_get_location_;
PropertyRNA &rna_XrSessionState_controller_grip_location_get_location = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_grip_location_get_location_);

FunctionRNA *rna_XrSessionState_controller_grip_location_get_func;
static PointerPropertyRNA rna_XrSessionState_controller_grip_rotation_get_context_;
PropertyRNA &rna_XrSessionState_controller_grip_rotation_get_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_grip_rotation_get_context_);

static IntPropertyRNA rna_XrSessionState_controller_grip_rotation_get_index_;
PropertyRNA &rna_XrSessionState_controller_grip_rotation_get_index = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_grip_rotation_get_index_);

static FloatPropertyRNA rna_XrSessionState_controller_grip_rotation_get_rotation_;
PropertyRNA &rna_XrSessionState_controller_grip_rotation_get_rotation = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_grip_rotation_get_rotation_);

FunctionRNA *rna_XrSessionState_controller_grip_rotation_get_func;
static PointerPropertyRNA rna_XrSessionState_controller_aim_location_get_context_;
PropertyRNA &rna_XrSessionState_controller_aim_location_get_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_aim_location_get_context_);

static IntPropertyRNA rna_XrSessionState_controller_aim_location_get_index_;
PropertyRNA &rna_XrSessionState_controller_aim_location_get_index = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_aim_location_get_index_);

static FloatPropertyRNA rna_XrSessionState_controller_aim_location_get_location_;
PropertyRNA &rna_XrSessionState_controller_aim_location_get_location = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_aim_location_get_location_);

FunctionRNA *rna_XrSessionState_controller_aim_location_get_func;
static PointerPropertyRNA rna_XrSessionState_controller_aim_rotation_get_context_;
PropertyRNA &rna_XrSessionState_controller_aim_rotation_get_context = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_aim_rotation_get_context_);

static IntPropertyRNA rna_XrSessionState_controller_aim_rotation_get_index_;
PropertyRNA &rna_XrSessionState_controller_aim_rotation_get_index = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_aim_rotation_get_index_);

static FloatPropertyRNA rna_XrSessionState_controller_aim_rotation_get_rotation_;
PropertyRNA &rna_XrSessionState_controller_aim_rotation_get_rotation = reinterpret_cast<PropertyRNA &>(rna_XrSessionState_controller_aim_rotation_get_rotation_);

FunctionRNA *rna_XrSessionState_controller_aim_rotation_get_func;
StructRNA *RNA_XrSessionState;
void register_struct_XrSessionState(BlenderRNA &brna)
{
	rna_XrSessionState_rna_properties_ = {
		{&rna_XrSessionState_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionState_rna_properties_begin, XrSessionState_rna_properties_next, XrSessionState_rna_properties_end, XrSessionState_rna_properties_get, nullptr, nullptr, XrSessionState_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrSessionState_rna_type_ = {
		{&rna_XrSessionState_viewfinder, 	&rna_XrSessionState_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionState_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_XrSessionState_viewfinder_ = {
		{&rna_XrSessionState_viewer_pose_location, 	&rna_XrSessionState_rna_type,
		-1, "viewfinder", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder",
		"Viewfinder State",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionState_viewfinder_get, nullptr, nullptr, nullptr,RNA_XrViewfinderState
	};

	static float rna_XrSessionState_viewer_pose_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrSessionState_viewer_pose_location_ = {
		{&rna_XrSessionState_viewer_pose_rotation, 	&rna_XrSessionState_viewfinder,
		-1, "viewer_pose_location", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewer Pose Location",
		"Last known location of the viewer pose (center between the eyes) in world space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrSessionState_viewer_pose_location_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrSessionState_viewer_pose_location_default
	};

	static float rna_XrSessionState_viewer_pose_rotation_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrSessionState_viewer_pose_rotation_ = {
		{&rna_XrSessionState_navigation_location, 	&rna_XrSessionState_viewer_pose_location,
		-1, "viewer_pose_rotation", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewer Pose Rotation",
		"Last known rotation of the viewer pose (center between the eyes) in world space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrSessionState_viewer_pose_rotation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrSessionState_viewer_pose_rotation_default
	};

	static float rna_XrSessionState_navigation_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrSessionState_navigation_location_ = {
		{&rna_XrSessionState_navigation_rotation, 	&rna_XrSessionState_viewer_pose_rotation,
		-1, "navigation_location", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Navigation Location",
		"Location offset to apply to base pose when determining viewer location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrSessionState_navigation_location_get, XrSessionState_navigation_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrSessionState_navigation_location_default
	};

	static float rna_XrSessionState_navigation_rotation_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrSessionState_navigation_rotation_ = {
		{&rna_XrSessionState_navigation_scale, 	&rna_XrSessionState_navigation_location,
		-1, "navigation_rotation", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Navigation Rotation",
		"Rotation offset to apply to base pose when determining viewer rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrSessionState_navigation_rotation_get, XrSessionState_navigation_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrSessionState_navigation_rotation_default
	};

	rna_XrSessionState_navigation_scale_ = {
		{&rna_XrSessionState_viewer_scale, 	&rna_XrSessionState_navigation_rotation,
		-1, "navigation_scale", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Navigation Scale",
		"Navigation scale multiplier applied when determining viewer scale",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionState_navigation_scale_get, XrSessionState_navigation_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrSessionState_viewer_scale_ = {
		{&rna_XrSessionState_actionmaps, 	&rna_XrSessionState_navigation_scale,
		-1, "viewer_scale", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewer Scale",
		"Viewer XR scale factor, computed from the navigation scale, view scale session setting, and active scene unit scale",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionState_viewer_scale_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrSessionState_actionmaps_ = {
		{&rna_XrSessionState_active_actionmap, 	&rna_XrSessionState_viewer_scale,
		-1, "actionmaps", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "XR Action Maps",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_XrActionMaps},
		XrSessionState_actionmaps_begin, XrSessionState_actionmaps_next, XrSessionState_actionmaps_end, XrSessionState_actionmaps_get, XrSessionState_actionmaps_length, XrSessionState_actionmaps_lookup_int, nullptr, nullptr, RNA_XrActionMap
	};

	rna_XrSessionState_active_actionmap_ = {
		{&rna_XrSessionState_selected_actionmap, 	&rna_XrSessionState_actionmaps,
		-1, "active_actionmap", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Action Map",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionState_active_actionmap_get, XrSessionState_active_actionmap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_XrSessionState_selected_actionmap_ = {
		{nullptr, 	&rna_XrSessionState_active_actionmap,
		-1, "selected_actionmap", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selected Action Map",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrSessionState_selected_actionmap_get, XrSessionState_selected_actionmap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_XrSessionState;
	srna->cont.properties = {&rna_XrSessionState_rna_properties, &rna_XrSessionState_selected_actionmap};
	srna->identifier = "XrSessionState";
	srna->flag = 516;
	srna->name = "Session State";
	srna->description = "Runtime state information about the VR session";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrSessionState_rna_properties;
	{
	rna_XrSessionState_is_running_context_ = {
		{&rna_XrSessionState_is_running_result, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_is_running_result_ = {
		{nullptr, 	&rna_XrSessionState_is_running_context,
		-1, "result", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_is_running_context, &rna_XrSessionState_is_running_result};
		func->identifier = "is_running";
		func->flag = 1;
		func->description = "Query if the VR session is currently running";
		func->call = XrSessionState_is_running_call;
		func->c_ret = &rna_XrSessionState_is_running_result;
		rna_XrSessionState_is_running_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_reset_to_base_pose_context_ = {
		{nullptr, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_reset_to_base_pose_context, &rna_XrSessionState_reset_to_base_pose_context};
		func->identifier = "reset_to_base_pose";
		func->flag = 1;
		func->description = "Force resetting of position and rotation deltas";
		func->call = XrSessionState_reset_to_base_pose_call;
		rna_XrSessionState_reset_to_base_pose_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_action_set_create_context_ = {
		{&rna_XrSessionState_action_set_create_actionmap, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_action_set_create_actionmap_ = {
		{&rna_XrSessionState_action_set_create_result, 	&rna_XrSessionState_action_set_create_context,
		-1, "actionmap", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMap
	};
	rna_XrSessionState_action_set_create_result_ = {
		{nullptr, 	&rna_XrSessionState_action_set_create_actionmap,
		-1, "result", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_action_set_create_context, &rna_XrSessionState_action_set_create_result};
		func->identifier = "action_set_create";
		func->flag = 1;
		func->description = "Create a VR action set";
		func->call = XrSessionState_action_set_create_call;
		func->c_ret = &rna_XrSessionState_action_set_create_result;
		rna_XrSessionState_action_set_create_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_action_create_context_ = {
		{&rna_XrSessionState_action_create_actionmap, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_action_create_actionmap_ = {
		{&rna_XrSessionState_action_create_actionmap_item, 	&rna_XrSessionState_action_create_context,
		-1, "actionmap", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMap
	};
	rna_XrSessionState_action_create_actionmap_item_ = {
		{&rna_XrSessionState_action_create_result, 	&rna_XrSessionState_action_create_actionmap,
		-1, "actionmap_item", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapItem
	};
	rna_XrSessionState_action_create_result_ = {
		{nullptr, 	&rna_XrSessionState_action_create_actionmap_item,
		-1, "result", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_action_create_context, &rna_XrSessionState_action_create_result};
		func->identifier = "action_create";
		func->flag = 1;
		func->description = "Create a VR action";
		func->call = XrSessionState_action_create_call;
		func->c_ret = &rna_XrSessionState_action_create_result;
		rna_XrSessionState_action_create_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_action_binding_create_context_ = {
		{&rna_XrSessionState_action_binding_create_actionmap, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_action_binding_create_actionmap_ = {
		{&rna_XrSessionState_action_binding_create_actionmap_item, 	&rna_XrSessionState_action_binding_create_context,
		-1, "actionmap", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMap
	};
	rna_XrSessionState_action_binding_create_actionmap_item_ = {
		{&rna_XrSessionState_action_binding_create_actionmap_binding, 	&rna_XrSessionState_action_binding_create_actionmap,
		-1, "actionmap_item", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapItem
	};
	rna_XrSessionState_action_binding_create_actionmap_binding_ = {
		{&rna_XrSessionState_action_binding_create_result, 	&rna_XrSessionState_action_binding_create_actionmap_item,
		-1, "actionmap_binding", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMapBinding
	};
	rna_XrSessionState_action_binding_create_result_ = {
		{nullptr, 	&rna_XrSessionState_action_binding_create_actionmap_binding,
		-1, "result", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_action_binding_create_context, &rna_XrSessionState_action_binding_create_result};
		func->identifier = "action_binding_create";
		func->flag = 1;
		func->description = "Create a VR action binding";
		func->call = XrSessionState_action_binding_create_call;
		func->c_ret = &rna_XrSessionState_action_binding_create_result;
		rna_XrSessionState_action_binding_create_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_active_action_set_set_context_ = {
		{&rna_XrSessionState_active_action_set_set_action_set, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_active_action_set_set_action_set_ = {
		{&rna_XrSessionState_active_action_set_set_result, 	&rna_XrSessionState_active_action_set_set_context,
		-1, "action_set", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action Set",
		"Action set name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_active_action_set_set_result_ = {
		{nullptr, 	&rna_XrSessionState_active_action_set_set_action_set,
		-1, "result", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_active_action_set_set_context, &rna_XrSessionState_active_action_set_set_result};
		func->identifier = "active_action_set_set";
		func->flag = 1;
		func->description = "Set the active VR action set";
		func->call = XrSessionState_active_action_set_set_call;
		func->c_ret = &rna_XrSessionState_active_action_set_set_result;
		rna_XrSessionState_active_action_set_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_controller_pose_actions_set_context_ = {
		{&rna_XrSessionState_controller_pose_actions_set_action_set, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_controller_pose_actions_set_action_set_ = {
		{&rna_XrSessionState_controller_pose_actions_set_grip_action, 	&rna_XrSessionState_controller_pose_actions_set_context,
		-1, "action_set", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action Set",
		"Action set name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_controller_pose_actions_set_grip_action_ = {
		{&rna_XrSessionState_controller_pose_actions_set_aim_action, 	&rna_XrSessionState_controller_pose_actions_set_action_set,
		-1, "grip_action", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Grip Action",
		"Name of the action representing the controller grips",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_controller_pose_actions_set_aim_action_ = {
		{&rna_XrSessionState_controller_pose_actions_set_result, 	&rna_XrSessionState_controller_pose_actions_set_grip_action,
		-1, "aim_action", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Aim Action",
		"Name of the action representing the controller aims",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_controller_pose_actions_set_result_ = {
		{nullptr, 	&rna_XrSessionState_controller_pose_actions_set_aim_action,
		-1, "result", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_controller_pose_actions_set_context, &rna_XrSessionState_controller_pose_actions_set_result};
		func->identifier = "controller_pose_actions_set";
		func->flag = 1;
		func->description = "Set the actions that determine the VR controller poses";
		func->call = XrSessionState_controller_pose_actions_set_call;
		func->c_ret = &rna_XrSessionState_controller_pose_actions_set_result;
		rna_XrSessionState_controller_pose_actions_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_action_state_get_context_ = {
		{&rna_XrSessionState_action_state_get_action_set_name, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_action_state_get_action_set_name_ = {
		{&rna_XrSessionState_action_state_get_action_name, 	&rna_XrSessionState_action_state_get_context,
		-1, "action_set_name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action Set",
		"Action set name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_action_state_get_action_name_ = {
		{&rna_XrSessionState_action_state_get_user_path, 	&rna_XrSessionState_action_state_get_action_set_name,
		-1, "action_name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action",
		"Action name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_action_state_get_user_path_ = {
		{&rna_XrSessionState_action_state_get_state, 	&rna_XrSessionState_action_state_get_action_name,
		-1, "user_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "User Path",
		"OpenXR user path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	static float rna_XrSessionState_action_state_get_state_default[2] = {
		0.0f,
		0.0f
	};
	rna_XrSessionState_action_state_get_state_ = {
		{nullptr, 	&rna_XrSessionState_action_state_get_user_path,
		-1, "state", 262145, 0, 2, 0, 0, PropertyPathTemplateType(0), "Action State",
		"Current state of the VR action. Second float value is only set for 2D vector type actions.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_XrSessionState_action_state_get_state_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_action_state_get_context, &rna_XrSessionState_action_state_get_state};
		func->identifier = "action_state_get";
		func->flag = 1;
		func->description = "Get the current state of a VR action";
		func->call = XrSessionState_action_state_get_call;
		rna_XrSessionState_action_state_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_haptic_action_apply_context_ = {
		{&rna_XrSessionState_haptic_action_apply_action_set_name, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_haptic_action_apply_action_set_name_ = {
		{&rna_XrSessionState_haptic_action_apply_action_name, 	&rna_XrSessionState_haptic_action_apply_context,
		-1, "action_set_name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action Set",
		"Action set name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_haptic_action_apply_action_name_ = {
		{&rna_XrSessionState_haptic_action_apply_user_path, 	&rna_XrSessionState_haptic_action_apply_action_set_name,
		-1, "action_name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action",
		"Action name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_haptic_action_apply_user_path_ = {
		{&rna_XrSessionState_haptic_action_apply_duration, 	&rna_XrSessionState_haptic_action_apply_action_name,
		-1, "user_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "User Path",
		"Optional OpenXR user path. If not set, the action will be applied to all paths.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_haptic_action_apply_duration_ = {
		{&rna_XrSessionState_haptic_action_apply_frequency, 	&rna_XrSessionState_haptic_action_apply_user_path,
		-1, "duration", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Duration",
		"Haptic duration in seconds. 0.0 is the minimum supported duration.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_XrSessionState_haptic_action_apply_frequency_ = {
		{&rna_XrSessionState_haptic_action_apply_amplitude, 	&rna_XrSessionState_haptic_action_apply_duration,
		-1, "frequency", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frequency",
		"Frequency of the haptic vibration in hertz. 0.0 specifies the OpenXR runtime\'s default frequency.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_XrSessionState_haptic_action_apply_amplitude_ = {
		{&rna_XrSessionState_haptic_action_apply_result, 	&rna_XrSessionState_haptic_action_apply_frequency,
		-1, "amplitude", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Amplitude",
		"Haptic amplitude, ranging from 0.0 to 1.0",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};
	rna_XrSessionState_haptic_action_apply_result_ = {
		{nullptr, 	&rna_XrSessionState_haptic_action_apply_amplitude,
		-1, "result", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_haptic_action_apply_context, &rna_XrSessionState_haptic_action_apply_result};
		func->identifier = "haptic_action_apply";
		func->flag = 1;
		func->description = "Apply a VR haptic action";
		func->call = XrSessionState_haptic_action_apply_call;
		func->c_ret = &rna_XrSessionState_haptic_action_apply_result;
		rna_XrSessionState_haptic_action_apply_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_haptic_action_stop_context_ = {
		{&rna_XrSessionState_haptic_action_stop_action_set_name, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_haptic_action_stop_action_set_name_ = {
		{&rna_XrSessionState_haptic_action_stop_action_name, 	&rna_XrSessionState_haptic_action_stop_context,
		-1, "action_set_name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action Set",
		"Action set name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_haptic_action_stop_action_name_ = {
		{&rna_XrSessionState_haptic_action_stop_user_path, 	&rna_XrSessionState_haptic_action_stop_action_set_name,
		-1, "action_name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action",
		"Action name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrSessionState_haptic_action_stop_user_path_ = {
		{nullptr, 	&rna_XrSessionState_haptic_action_stop_action_name,
		-1, "user_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "User Path",
		"Optional OpenXR user path. If not set, the action will be stopped for all paths.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_haptic_action_stop_context, &rna_XrSessionState_haptic_action_stop_user_path};
		func->identifier = "haptic_action_stop";
		func->flag = 1;
		func->description = "Stop a VR haptic action";
		func->call = XrSessionState_haptic_action_stop_call;
		rna_XrSessionState_haptic_action_stop_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_controller_grip_location_get_context_ = {
		{&rna_XrSessionState_controller_grip_location_get_index, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_controller_grip_location_get_index_ = {
		{&rna_XrSessionState_controller_grip_location_get_location, 	&rna_XrSessionState_controller_grip_location_get_context,
		-1, "index", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Index",
		"Controller index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, nullptr, nullptr, 0, nullptr
	};
	static float rna_XrSessionState_controller_grip_location_get_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrSessionState_controller_grip_location_get_location_ = {
		{nullptr, 	&rna_XrSessionState_controller_grip_location_get_index,
		-1, "location", 262145, 0, 2, 0, 0, PropertyPathTemplateType(0), "Location",
		"Controller grip location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_XrSessionState_controller_grip_location_get_location_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_controller_grip_location_get_context, &rna_XrSessionState_controller_grip_location_get_location};
		func->identifier = "controller_grip_location_get";
		func->flag = 1;
		func->description = "Get the last known controller grip location in world space";
		func->call = XrSessionState_controller_grip_location_get_call;
		rna_XrSessionState_controller_grip_location_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_controller_grip_rotation_get_context_ = {
		{&rna_XrSessionState_controller_grip_rotation_get_index, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_controller_grip_rotation_get_index_ = {
		{&rna_XrSessionState_controller_grip_rotation_get_rotation, 	&rna_XrSessionState_controller_grip_rotation_get_context,
		-1, "index", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Index",
		"Controller index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, nullptr, nullptr, 0, nullptr
	};
	static float rna_XrSessionState_controller_grip_rotation_get_rotation_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrSessionState_controller_grip_rotation_get_rotation_ = {
		{nullptr, 	&rna_XrSessionState_controller_grip_rotation_get_index,
		-1, "rotation", 262145, 0, 2, 0, 0, PropertyPathTemplateType(0), "Rotation",
		"Controller grip quaternion rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_XrSessionState_controller_grip_rotation_get_rotation_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_controller_grip_rotation_get_context, &rna_XrSessionState_controller_grip_rotation_get_rotation};
		func->identifier = "controller_grip_rotation_get";
		func->flag = 1;
		func->description = "Get the last known controller grip rotation (quaternion) in world space";
		func->call = XrSessionState_controller_grip_rotation_get_call;
		rna_XrSessionState_controller_grip_rotation_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_controller_aim_location_get_context_ = {
		{&rna_XrSessionState_controller_aim_location_get_index, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_controller_aim_location_get_index_ = {
		{&rna_XrSessionState_controller_aim_location_get_location, 	&rna_XrSessionState_controller_aim_location_get_context,
		-1, "index", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Index",
		"Controller index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, nullptr, nullptr, 0, nullptr
	};
	static float rna_XrSessionState_controller_aim_location_get_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrSessionState_controller_aim_location_get_location_ = {
		{nullptr, 	&rna_XrSessionState_controller_aim_location_get_index,
		-1, "location", 262145, 0, 2, 0, 0, PropertyPathTemplateType(0), "Location",
		"Controller aim location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_XrSessionState_controller_aim_location_get_location_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_controller_aim_location_get_context, &rna_XrSessionState_controller_aim_location_get_location};
		func->identifier = "controller_aim_location_get";
		func->flag = 1;
		func->description = "Get the last known controller aim location in world space";
		func->call = XrSessionState_controller_aim_location_get_call;
		rna_XrSessionState_controller_aim_location_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrSessionState_controller_aim_rotation_get_context_ = {
		{&rna_XrSessionState_controller_aim_rotation_get_index, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_XrSessionState_controller_aim_rotation_get_index_ = {
		{&rna_XrSessionState_controller_aim_rotation_get_rotation, 	&rna_XrSessionState_controller_aim_rotation_get_context,
		-1, "index", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Index",
		"Controller index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, nullptr, nullptr, 0, nullptr
	};
	static float rna_XrSessionState_controller_aim_rotation_get_rotation_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrSessionState_controller_aim_rotation_get_rotation_ = {
		{nullptr, 	&rna_XrSessionState_controller_aim_rotation_get_index,
		-1, "rotation", 262145, 0, 2, 0, 0, PropertyPathTemplateType(0), "Rotation",
		"Controller aim quaternion rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_XrSessionState_controller_aim_rotation_get_rotation_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrSessionState_controller_aim_rotation_get_context, &rna_XrSessionState_controller_aim_rotation_get_rotation};
		func->identifier = "controller_aim_rotation_get";
		func->flag = 1;
		func->description = "Get the last known controller aim rotation (quaternion) in world space";
		func->call = XrSessionState_controller_aim_rotation_get_call;
		rna_XrSessionState_controller_aim_rotation_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* XR Action Maps */
static CollectionPropertyRNA rna_XrActionMaps_rna_properties_;
PropertyRNA &rna_XrActionMaps_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_rna_properties_);

static PointerPropertyRNA rna_XrActionMaps_rna_type_;
PropertyRNA &rna_XrActionMaps_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_rna_type_);

static PointerPropertyRNA rna_XrActionMaps_new_xr_session_state_;
PropertyRNA &rna_XrActionMaps_new_xr_session_state = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_new_xr_session_state_);

static StringPropertyRNA rna_XrActionMaps_new_name_;
PropertyRNA &rna_XrActionMaps_new_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_new_name_);

static BoolPropertyRNA rna_XrActionMaps_new_replace_existing_;
PropertyRNA &rna_XrActionMaps_new_replace_existing = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_new_replace_existing_);

static PointerPropertyRNA rna_XrActionMaps_new_actionmap_;
PropertyRNA &rna_XrActionMaps_new_actionmap = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_new_actionmap_);

FunctionRNA *rna_XrActionMaps_new_func;
static PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_xr_session_state_;
PropertyRNA &rna_XrActionMaps_new_from_actionmap_xr_session_state = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_new_from_actionmap_xr_session_state_);

static PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_actionmap_;
PropertyRNA &rna_XrActionMaps_new_from_actionmap_actionmap = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_new_from_actionmap_actionmap_);

static PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_result_;
PropertyRNA &rna_XrActionMaps_new_from_actionmap_result = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_new_from_actionmap_result_);

FunctionRNA *rna_XrActionMaps_new_from_actionmap_func;
static PointerPropertyRNA rna_XrActionMaps_remove_xr_session_state_;
PropertyRNA &rna_XrActionMaps_remove_xr_session_state = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_remove_xr_session_state_);

static PointerPropertyRNA rna_XrActionMaps_remove_actionmap_;
PropertyRNA &rna_XrActionMaps_remove_actionmap = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_remove_actionmap_);

FunctionRNA *rna_XrActionMaps_remove_func;
static PointerPropertyRNA rna_XrActionMaps_find_xr_session_state_;
PropertyRNA &rna_XrActionMaps_find_xr_session_state = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_find_xr_session_state_);

static StringPropertyRNA rna_XrActionMaps_find_name_;
PropertyRNA &rna_XrActionMaps_find_name = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_find_name_);

static PointerPropertyRNA rna_XrActionMaps_find_actionmap_;
PropertyRNA &rna_XrActionMaps_find_actionmap = reinterpret_cast<PropertyRNA &>(rna_XrActionMaps_find_actionmap_);

FunctionRNA *rna_XrActionMaps_find_func;
StructRNA *RNA_XrActionMaps;
void register_struct_XrActionMaps(BlenderRNA &brna)
{
	rna_XrActionMaps_rna_properties_ = {
		{&rna_XrActionMaps_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMaps_rna_properties_begin, XrActionMaps_rna_properties_next, XrActionMaps_rna_properties_end, XrActionMaps_rna_properties_get, nullptr, nullptr, XrActionMaps_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrActionMaps_rna_type_ = {
		{nullptr, 	&rna_XrActionMaps_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrActionMaps_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_XrActionMaps;
	srna->cont.properties = {&rna_XrActionMaps_rna_properties, &rna_XrActionMaps_rna_type};
	srna->identifier = "XrActionMaps";
	srna->flag = 516;
	srna->name = "XR Action Maps";
	srna->description = "Collection of XR action maps";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrActionMaps_rna_properties;
	{
	rna_XrActionMaps_new_xr_session_state_ = {
		{&rna_XrActionMaps_new_name, 	nullptr,
		-1, "xr_session_state", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "XR Session State",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrSessionState
	};
	rna_XrActionMaps_new_name_ = {
		{&rna_XrActionMaps_new_replace_existing, 	&rna_XrActionMaps_new_xr_session_state,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrActionMaps_new_replace_existing_ = {
		{&rna_XrActionMaps_new_actionmap, 	&rna_XrActionMaps_new_name,
		-1, "replace_existing", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Replace Existing",
		"Replace any existing actionmap with the same name",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_XrActionMaps_new_actionmap_ = {
		{nullptr, 	&rna_XrActionMaps_new_replace_existing,
		-1, "actionmap", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Action Map",
		"Added action map",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMaps_new_xr_session_state, &rna_XrActionMaps_new_actionmap};
		func->identifier = "new";
		func->flag = 1;
		func->description = "new";
		func->call = XrActionMaps_new_call;
		func->c_ret = &rna_XrActionMaps_new_actionmap;
		rna_XrActionMaps_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrActionMaps_new_from_actionmap_xr_session_state_ = {
		{&rna_XrActionMaps_new_from_actionmap_actionmap, 	nullptr,
		-1, "xr_session_state", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "XR Session State",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrSessionState
	};
	rna_XrActionMaps_new_from_actionmap_actionmap_ = {
		{&rna_XrActionMaps_new_from_actionmap_result, 	&rna_XrActionMaps_new_from_actionmap_xr_session_state,
		-1, "actionmap", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "Action Map",
		"Action map to use as a reference",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMap
	};
	rna_XrActionMaps_new_from_actionmap_result_ = {
		{nullptr, 	&rna_XrActionMaps_new_from_actionmap_actionmap,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Action Map",
		"Added action map",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMaps_new_from_actionmap_xr_session_state, &rna_XrActionMaps_new_from_actionmap_result};
		func->identifier = "new_from_actionmap";
		func->flag = 1;
		func->description = "new_from_actionmap";
		func->call = XrActionMaps_new_from_actionmap_call;
		func->c_ret = &rna_XrActionMaps_new_from_actionmap_result;
		rna_XrActionMaps_new_from_actionmap_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrActionMaps_remove_xr_session_state_ = {
		{&rna_XrActionMaps_remove_actionmap, 	nullptr,
		-1, "xr_session_state", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "XR Session State",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrSessionState
	};
	rna_XrActionMaps_remove_actionmap_ = {
		{nullptr, 	&rna_XrActionMaps_remove_xr_session_state,
		-1, "actionmap", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "Action Map",
		"Removed action map",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMaps_remove_xr_session_state, &rna_XrActionMaps_remove_actionmap};
		func->identifier = "remove";
		func->flag = 17;
		func->description = "remove";
		func->call = XrActionMaps_remove_call;
		rna_XrActionMaps_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrActionMaps_find_xr_session_state_ = {
		{&rna_XrActionMaps_find_name, 	nullptr,
		-1, "xr_session_state", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "XR Session State",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrSessionState
	};
	rna_XrActionMaps_find_name_ = {
		{&rna_XrActionMaps_find_actionmap, 	&rna_XrActionMaps_find_xr_session_state,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_XrActionMaps_find_actionmap_ = {
		{nullptr, 	&rna_XrActionMaps_find_name,
		-1, "actionmap", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Action Map",
		"The action map with the given name",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_XrActionMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrActionMaps_find_xr_session_state, &rna_XrActionMaps_find_actionmap};
		func->identifier = "find";
		func->flag = 1;
		func->description = "find";
		func->call = XrActionMaps_find_call;
		func->c_ret = &rna_XrActionMaps_find_actionmap;
		rna_XrActionMaps_find_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Viewfinder State */
static CollectionPropertyRNA rna_XrViewfinderState_rna_properties_;
PropertyRNA &rna_XrViewfinderState_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_rna_properties_);

static PointerPropertyRNA rna_XrViewfinderState_rna_type_;
PropertyRNA &rna_XrViewfinderState_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_rna_type_);

static FloatPropertyRNA rna_XrViewfinderState_location_;
PropertyRNA &rna_XrViewfinderState_location = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_location_);

static FloatPropertyRNA rna_XrViewfinderState_orientation_;
PropertyRNA &rna_XrViewfinderState_orientation = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_orientation_);

static BoolPropertyRNA rna_XrViewfinderState_capture_dof_enabled_;
PropertyRNA &rna_XrViewfinderState_capture_dof_enabled = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_capture_dof_enabled_);

static FloatPropertyRNA rna_XrViewfinderState_capture_lens_focal_;
PropertyRNA &rna_XrViewfinderState_capture_lens_focal = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_capture_lens_focal_);

static FloatPropertyRNA rna_XrViewfinderState_capture_dof_distance_;
PropertyRNA &rna_XrViewfinderState_capture_dof_distance = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_capture_dof_distance_);

static FloatPropertyRNA rna_XrViewfinderState_capture_dof_fstop_;
PropertyRNA &rna_XrViewfinderState_capture_dof_fstop = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_capture_dof_fstop_);

static BoolPropertyRNA rna_XrViewfinderState_playback_show_active_capture_in_space_enabled_;
PropertyRNA &rna_XrViewfinderState_playback_show_active_capture_in_space_enabled = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_playback_show_active_capture_in_space_enabled_);

static EnumPropertyRNA rna_XrViewfinderState_active_mode_;
PropertyRNA &rna_XrViewfinderState_active_mode = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_active_mode_);

static EnumPropertyRNA rna_XrViewfinderState_active_action_live_;
PropertyRNA &rna_XrViewfinderState_active_action_live = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_active_action_live_);

static EnumPropertyRNA rna_XrViewfinderState_active_action_playback_;
PropertyRNA &rna_XrViewfinderState_active_action_playback = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_active_action_playback_);

static EnumPropertyRNA rna_XrViewfinderState_active_action_confirm_;
PropertyRNA &rna_XrViewfinderState_active_action_confirm = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_active_action_confirm_);

FunctionRNA *rna_XrViewfinderState_trigger_flash_func;
static BoolPropertyRNA rna_XrViewfinderState_trigger_focus_indicator_hit_success_;
PropertyRNA &rna_XrViewfinderState_trigger_focus_indicator_hit_success = reinterpret_cast<PropertyRNA &>(rna_XrViewfinderState_trigger_focus_indicator_hit_success_);

FunctionRNA *rna_XrViewfinderState_trigger_focus_indicator_func;
FunctionRNA *rna_XrViewfinderState_reset_view_smoothing_func;
StructRNA *RNA_XrViewfinderState;
void register_struct_XrViewfinderState(BlenderRNA &brna)
{
	rna_XrViewfinderState_rna_properties_ = {
		{&rna_XrViewfinderState_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_rna_properties_begin, XrViewfinderState_rna_properties_next, XrViewfinderState_rna_properties_end, XrViewfinderState_rna_properties_get, nullptr, nullptr, XrViewfinderState_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrViewfinderState_rna_type_ = {
		{&rna_XrViewfinderState_location, 	&rna_XrViewfinderState_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_XrViewfinderState_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrViewfinderState_location_ = {
		{&rna_XrViewfinderState_orientation, 	&rna_XrViewfinderState_rna_type,
		-1, "location", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Location",
		"Last known location of the viewfinder in world space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrViewfinderState_location_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrViewfinderState_location_default
	};

	static float rna_XrViewfinderState_orientation_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrViewfinderState_orientation_ = {
		{&rna_XrViewfinderState_capture_dof_enabled, 	&rna_XrViewfinderState_location,
		-1, "orientation", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Rotation",
		"Last known orientation of the viewfinder in world space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrViewfinderState_orientation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrViewfinderState_orientation_default
	};

	rna_XrViewfinderState_capture_dof_enabled_ = {
		{&rna_XrViewfinderState_capture_lens_focal, 	&rna_XrViewfinderState_orientation,
		-1, "capture_dof_enabled", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Capture Depth of Field Enabled",
		"Enable viewfinder capture depth of field",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_capture_dof_enabled_get, XrViewfinderState_capture_dof_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_XrViewfinderState_capture_lens_focal_ = {
		{&rna_XrViewfinderState_capture_dof_distance, 	&rna_XrViewfinderState_capture_dof_enabled,
		-1, "capture_lens_focal", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Capture Focal Length",
		"Viewfinder capture focal length value in millimeters",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_capture_lens_focal_get, XrViewfinderState_capture_lens_focal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrViewfinderState_capture_dof_distance_ = {
		{&rna_XrViewfinderState_capture_dof_fstop, 	&rna_XrViewfinderState_capture_lens_focal,
		-1, "capture_dof_distance", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Capture Focus Distance",
		"Viewfinder capture distance to the focus point for depth of field",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_capture_dof_distance_get, XrViewfinderState_capture_dof_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrViewfinderState_capture_dof_fstop_ = {
		{&rna_XrViewfinderState_playback_show_active_capture_in_space_enabled, 	&rna_XrViewfinderState_capture_dof_distance,
		-1, "capture_dof_fstop", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Capture F-Stop",
		"Viewfinder capture f-stop ratio",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_capture_dof_fstop_get, XrViewfinderState_capture_dof_fstop_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_XrViewfinderState_playback_show_active_capture_in_space_enabled_ = {
		{&rna_XrViewfinderState_active_mode, 	&rna_XrViewfinderState_capture_dof_fstop,
		-1, "playback_show_active_capture_in_space_enabled", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Playback Show Active Capture in Space Enabled",
		"Display active capture in space when in Viewfinder Playback mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_playback_show_active_capture_in_space_enabled_get, XrViewfinderState_playback_show_active_capture_in_space_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_XrViewfinderState_active_mode_items[4] = {
		{0, "LIVE", 28, "Live Mode", "Capture a shot using the viewfinder"	},
		{1, "PLAYBACK", 197, "Playback Mode", "Preview and playback captured shots in the viewfinder"	},
		{2, "CONFIRM", 56, "Confirmation Mode", "Confirm user action"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrViewfinderState_active_mode_ = {
		{&rna_XrViewfinderState_active_action_live, 	&rna_XrViewfinderState_playback_show_active_capture_in_space_enabled,
		-1, "active_mode", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Mode",
		"Active viewfinder mode, live or playback",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_active_mode_get, XrViewfinderState_active_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrViewfinderState_active_mode_items, 3, 0
	};

	static const EnumPropertyItem rna_XrViewfinderState_active_action_live_items[5] = {
		{0, "LENS", 649, "Focal Length Control", nullptr	},
		{1, "DOF", 205, "Toggle Depth of Field", nullptr	},
		{2, "FOCUS", 573, "Set Focus Point", nullptr	},
		{3, "APERTURE", 577, "Aperture Control", nullptr	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrViewfinderState_active_action_live_ = {
		{&rna_XrViewfinderState_active_action_playback, 	&rna_XrViewfinderState_active_mode,
		-1, "active_action_live", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Live Action",
		"Active viewfinder live action",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_active_action_live_get, XrViewfinderState_active_action_live_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrViewfinderState_active_action_live_items, 4, 0
	};

	static const EnumPropertyItem rna_XrViewfinderState_active_action_playback_items[4] = {
		{0, "BROWSE", 194, "Browse Captured Shots", nullptr	},
		{1, "PREVIEW", 276, "Preview Active Shot in Space", nullptr	},
		{2, "DELETE", 102, "Delete Active Shot", nullptr	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrViewfinderState_active_action_playback_ = {
		{&rna_XrViewfinderState_active_action_confirm, 	&rna_XrViewfinderState_active_action_live,
		-1, "active_action_playback", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Playback Action",
		"Active viewfinder playback action",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_active_action_playback_get, XrViewfinderState_active_action_playback_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrViewfinderState_active_action_playback_items, 3, 0
	};

	static const EnumPropertyItem rna_XrViewfinderState_active_action_confirm_items[3] = {
		{1, "CANCEL", 112, "Cancel", nullptr	},
		{0, "CONFIRM", 56, "Confirm", nullptr	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrViewfinderState_active_action_confirm_ = {
		{nullptr, 	&rna_XrViewfinderState_active_action_playback,
		-1, "active_action_confirm", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viewfinder Confirm Action",
		"Active viewfinder confirm action",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 17235968, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrViewfinderState_active_action_confirm_get, XrViewfinderState_active_action_confirm_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrViewfinderState_active_action_confirm_items, 2, 0
	};

	StructRNA *srna = RNA_XrViewfinderState;
	srna->cont.properties = {&rna_XrViewfinderState_rna_properties, &rna_XrViewfinderState_active_action_confirm};
	srna->identifier = "XrViewfinderState";
	srna->flag = 516;
	srna->name = "Viewfinder State";
	srna->description = "Runtime state information about the VR Location Scouting Viewfinder";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrViewfinderState_rna_properties;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "trigger_flash";
		func->flag = 8192;
		func->description = "Trigger the Viewfinder flash to indicate a shot was captured";
		func->call = XrViewfinderState_trigger_flash_call;
		rna_XrViewfinderState_trigger_flash_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_XrViewfinderState_trigger_focus_indicator_hit_success_ = {
		{nullptr, 	nullptr,
		-1, "hit_success", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Hit success",
		"True to blink the success color, False to blink the miss color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_XrViewfinderState_trigger_focus_indicator_hit_success, &rna_XrViewfinderState_trigger_focus_indicator_hit_success};
		func->identifier = "trigger_focus_indicator";
		func->flag = 8192;
		func->description = "Blink the Viewfinder crosshair to indicate whether a focus action hit a target";
		func->call = XrViewfinderState_trigger_focus_indicator_call;
		rna_XrViewfinderState_trigger_focus_indicator_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "reset_view_smoothing";
		func->flag = 8192;
		func->description = "Reset the Viewfinder continuous view smoothing";
		func->call = XrViewfinderState_reset_view_smoothing_call;
		rna_XrViewfinderState_reset_view_smoothing_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* XrEventData */
static CollectionPropertyRNA rna_XrEventData_rna_properties_;
PropertyRNA &rna_XrEventData_rna_properties = reinterpret_cast<PropertyRNA &>(rna_XrEventData_rna_properties_);

static PointerPropertyRNA rna_XrEventData_rna_type_;
PropertyRNA &rna_XrEventData_rna_type = reinterpret_cast<PropertyRNA &>(rna_XrEventData_rna_type_);

static StringPropertyRNA rna_XrEventData_action_set_;
PropertyRNA &rna_XrEventData_action_set = reinterpret_cast<PropertyRNA &>(rna_XrEventData_action_set_);

static StringPropertyRNA rna_XrEventData_action_;
PropertyRNA &rna_XrEventData_action = reinterpret_cast<PropertyRNA &>(rna_XrEventData_action_);

static StringPropertyRNA rna_XrEventData_user_path_;
PropertyRNA &rna_XrEventData_user_path = reinterpret_cast<PropertyRNA &>(rna_XrEventData_user_path_);

static StringPropertyRNA rna_XrEventData_user_path_other_;
PropertyRNA &rna_XrEventData_user_path_other = reinterpret_cast<PropertyRNA &>(rna_XrEventData_user_path_other_);

static EnumPropertyRNA rna_XrEventData_type_;
PropertyRNA &rna_XrEventData_type = reinterpret_cast<PropertyRNA &>(rna_XrEventData_type_);

static FloatPropertyRNA rna_XrEventData_state_;
PropertyRNA &rna_XrEventData_state = reinterpret_cast<PropertyRNA &>(rna_XrEventData_state_);

static FloatPropertyRNA rna_XrEventData_state_other_;
PropertyRNA &rna_XrEventData_state_other = reinterpret_cast<PropertyRNA &>(rna_XrEventData_state_other_);

static FloatPropertyRNA rna_XrEventData_float_threshold_;
PropertyRNA &rna_XrEventData_float_threshold = reinterpret_cast<PropertyRNA &>(rna_XrEventData_float_threshold_);

static FloatPropertyRNA rna_XrEventData_controller_location_;
PropertyRNA &rna_XrEventData_controller_location = reinterpret_cast<PropertyRNA &>(rna_XrEventData_controller_location_);

static FloatPropertyRNA rna_XrEventData_controller_rotation_;
PropertyRNA &rna_XrEventData_controller_rotation = reinterpret_cast<PropertyRNA &>(rna_XrEventData_controller_rotation_);

static FloatPropertyRNA rna_XrEventData_controller_location_other_;
PropertyRNA &rna_XrEventData_controller_location_other = reinterpret_cast<PropertyRNA &>(rna_XrEventData_controller_location_other_);

static FloatPropertyRNA rna_XrEventData_controller_rotation_other_;
PropertyRNA &rna_XrEventData_controller_rotation_other = reinterpret_cast<PropertyRNA &>(rna_XrEventData_controller_rotation_other_);

static BoolPropertyRNA rna_XrEventData_bimanual_;
PropertyRNA &rna_XrEventData_bimanual = reinterpret_cast<PropertyRNA &>(rna_XrEventData_bimanual_);

StructRNA *RNA_XrEventData;
void register_struct_XrEventData(BlenderRNA &brna)
{
	rna_XrEventData_rna_properties_ = {
		{&rna_XrEventData_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrEventData_rna_properties_begin, XrEventData_rna_properties_next, XrEventData_rna_properties_end, XrEventData_rna_properties_get, nullptr, nullptr, XrEventData_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_XrEventData_rna_type_ = {
		{&rna_XrEventData_action_set, 	&rna_XrEventData_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrEventData_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_XrEventData_action_set_ = {
		{&rna_XrEventData_action, 	&rna_XrEventData_rna_type,
		-1, "action_set", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Action Set",
		"XR action set name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrEventData_action_set_get, XrEventData_action_set_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_XrEventData_action_ = {
		{&rna_XrEventData_user_path, 	&rna_XrEventData_action_set,
		-1, "action", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Action",
		"XR action name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrEventData_action_get, XrEventData_action_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_XrEventData_user_path_ = {
		{&rna_XrEventData_user_path_other, 	&rna_XrEventData_action,
		-1, "user_path", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "User Path",
		"User path of the action. E.g. \"/user/hand/left\"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrEventData_user_path_get, XrEventData_user_path_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_XrEventData_user_path_other_ = {
		{&rna_XrEventData_type, 	&rna_XrEventData_user_path,
		-1, "user_path_other", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "User Path Other",
		"Other user path, for bimanual actions. E.g. \"/user/hand/right\"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrEventData_user_path_other_get, XrEventData_user_path_other_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	static const EnumPropertyItem rna_XrEventData_type_items[5] = {
		{2, "FLOAT", 0, "Float", "Float action, representing either a digital or analog button"	},
		{3, "VECTOR2D", 0, "Vector2D", "2D float vector action, representing a thumbstick or trackpad"	},
		{4, "POSE", 0, "Pose", "3D pose action, representing a controller\'s location and rotation"	},
		{100, "VIBRATION", 0, "Vibration", "Haptic vibration output action, to be applied with a duration, frequency, and amplitude"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_XrEventData_type_ = {
		{&rna_XrEventData_state, 	&rna_XrEventData_user_path_other,
		-1, "type", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"XR action type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrEventData_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_XrEventData_type_items, 4, 2
	};

	static float rna_XrEventData_state_default[2] = {
		0.0f,
		0.0f
	};
	rna_XrEventData_state_ = {
		{&rna_XrEventData_state_other, 	&rna_XrEventData_type,
		-1, "state", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "State",
		"XR action values corresponding to type",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrEventData_state_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrEventData_state_default
	};

	static float rna_XrEventData_state_other_default[2] = {
		0.0f,
		0.0f
	};
	rna_XrEventData_state_other_ = {
		{&rna_XrEventData_float_threshold, 	&rna_XrEventData_state,
		-1, "state_other", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "State Other",
		"State of the other user path for bimanual actions",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrEventData_state_other_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrEventData_state_other_default
	};

	rna_XrEventData_float_threshold_ = {
		{&rna_XrEventData_controller_location, 	&rna_XrEventData_state_other,
		-1, "float_threshold", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Float Threshold",
		"Input threshold for float/2D vector actions",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrEventData_float_threshold_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_XrEventData_controller_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrEventData_controller_location_ = {
		{&rna_XrEventData_controller_rotation, 	&rna_XrEventData_float_threshold,
		-1, "controller_location", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Controller Location",
		"Location of the action\'s corresponding controller aim in world space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrEventData_controller_location_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrEventData_controller_location_default
	};

	static float rna_XrEventData_controller_rotation_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrEventData_controller_rotation_ = {
		{&rna_XrEventData_controller_location_other, 	&rna_XrEventData_controller_location,
		-1, "controller_rotation", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Controller Rotation",
		"Rotation of the action\'s corresponding controller aim in world space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrEventData_controller_rotation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrEventData_controller_rotation_default
	};

	static float rna_XrEventData_controller_location_other_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrEventData_controller_location_other_ = {
		{&rna_XrEventData_controller_rotation_other, 	&rna_XrEventData_controller_rotation,
		-1, "controller_location_other", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Controller Location Other",
		"Controller aim location of the other user path for bimanual actions",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrEventData_controller_location_other_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrEventData_controller_location_other_default
	};

	static float rna_XrEventData_controller_rotation_other_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_XrEventData_controller_rotation_other_ = {
		{&rna_XrEventData_bimanual, 	&rna_XrEventData_controller_location_other,
		-1, "controller_rotation_other", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Controller Rotation Other",
		"Controller aim rotation of the other user path for bimanual actions",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, XrEventData_controller_rotation_other_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_XrEventData_controller_rotation_other_default
	};

	rna_XrEventData_bimanual_ = {
		{nullptr, 	&rna_XrEventData_controller_rotation_other,
		-1, "bimanual", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bimanual",
		"Whether bimanual interaction is occurring",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		XrEventData_bimanual_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_XrEventData;
	srna->cont.properties = {&rna_XrEventData_rna_properties, &rna_XrEventData_bimanual};
	srna->identifier = "XrEventData";
	srna->flag = 516;
	srna->name = "XrEventData";
	srna->description = "XR Data for Window Manager Event";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_XrEventData_rna_properties;
};


}  // namespace blender
