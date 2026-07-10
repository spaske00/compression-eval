
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

#include "rna_wm.cc"
#include "rna_wm_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_Operator_rna_properties;
extern PropertyRNA &rna_Operator_rna_type;
extern PropertyRNA &rna_Operator_name;
extern PropertyRNA &rna_Operator_properties;
extern PropertyRNA &rna_Operator_has_reports;
extern PropertyRNA &rna_Operator_bl_idname;
extern PropertyRNA &rna_Operator_bl_label;
extern PropertyRNA &rna_Operator_bl_translation_context;
extern PropertyRNA &rna_Operator_bl_description;
extern PropertyRNA &rna_Operator_bl_undo_group;
extern PropertyRNA &rna_Operator_bl_options;
extern PropertyRNA &rna_Operator_bl_cursor_pending;
extern PropertyRNA &rna_Operator_layout;
extern PropertyRNA &rna_Operator_options;
extern PropertyRNA &rna_Operator_macros;

extern FunctionRNA *rna_Operator_report_func;
extern PropertyRNA &rna_Operator_report_type;
extern PropertyRNA &rna_Operator_report_message;

extern FunctionRNA *rna_Operator_is_repeat_func;
extern PropertyRNA &rna_Operator_is_repeat_result;

extern FunctionRNA *rna_Operator_poll_func;
extern PropertyRNA &rna_Operator_poll_visible;
extern PropertyRNA &rna_Operator_poll_context;

extern FunctionRNA *rna_Operator_execute_func;
extern PropertyRNA &rna_Operator_execute_context;
extern PropertyRNA &rna_Operator_execute_result;

extern FunctionRNA *rna_Operator_check_func;
extern PropertyRNA &rna_Operator_check_context;
extern PropertyRNA &rna_Operator_check_result;

extern FunctionRNA *rna_Operator_invoke_func;
extern PropertyRNA &rna_Operator_invoke_context;
extern PropertyRNA &rna_Operator_invoke_event;
extern PropertyRNA &rna_Operator_invoke_result;

extern FunctionRNA *rna_Operator_modal_func;
extern PropertyRNA &rna_Operator_modal_context;
extern PropertyRNA &rna_Operator_modal_event;
extern PropertyRNA &rna_Operator_modal_result;

extern FunctionRNA *rna_Operator_draw_func;
extern PropertyRNA &rna_Operator_draw_context;

extern FunctionRNA *rna_Operator_cancel_func;
extern PropertyRNA &rna_Operator_cancel_context;

extern FunctionRNA *rna_Operator_description_func;
extern PropertyRNA &rna_Operator_description_result;
extern PropertyRNA &rna_Operator_description_context;
extern PropertyRNA &rna_Operator_description_properties;



extern PropertyRNA &rna_OperatorProperties_rna_properties;
extern PropertyRNA &rna_OperatorProperties_rna_type;

extern FunctionRNA *rna_OperatorProperties_bl_system_properties_get_func;
extern PropertyRNA &rna_OperatorProperties_bl_system_properties_get_do_create;
extern PropertyRNA &rna_OperatorProperties_bl_system_properties_get_system_properties;



extern PropertyRNA &rna_OperatorOptions_rna_properties;
extern PropertyRNA &rna_OperatorOptions_rna_type;
extern PropertyRNA &rna_OperatorOptions_is_grab_cursor;
extern PropertyRNA &rna_OperatorOptions_is_invoke;
extern PropertyRNA &rna_OperatorOptions_is_repeat;
extern PropertyRNA &rna_OperatorOptions_is_repeat_last;
extern PropertyRNA &rna_OperatorOptions_use_cursor_region;


extern PropertyRNA &rna_PropertyGroup_rna_properties;
extern PropertyRNA &rna_PropertyGroup_rna_type;
extern PropertyRNA &rna_PropertyGroup_name;

extern PropertyRNA &rna_OperatorMousePath_loc;
extern PropertyRNA &rna_OperatorMousePath_time;

extern FunctionRNA *rna_PropertyGroup_bl_system_properties_get_func;
extern PropertyRNA &rna_PropertyGroup_bl_system_properties_get_do_create;
extern PropertyRNA &rna_PropertyGroup_bl_system_properties_get_system_properties;



extern PropertyRNA &rna_PropertyGroup_rna_properties;
extern PropertyRNA &rna_PropertyGroup_rna_type;
extern PropertyRNA &rna_PropertyGroup_name;

extern PropertyRNA &rna_OperatorFileListElement_name;

extern FunctionRNA *rna_PropertyGroup_bl_system_properties_get_func;
extern PropertyRNA &rna_PropertyGroup_bl_system_properties_get_do_create;
extern PropertyRNA &rna_PropertyGroup_bl_system_properties_get_system_properties;



extern PropertyRNA &rna_Macro_rna_properties;
extern PropertyRNA &rna_Macro_rna_type;
extern PropertyRNA &rna_Macro_name;
extern PropertyRNA &rna_Macro_properties;
extern PropertyRNA &rna_Macro_has_reports;
extern PropertyRNA &rna_Macro_bl_idname;
extern PropertyRNA &rna_Macro_bl_label;
extern PropertyRNA &rna_Macro_bl_translation_context;
extern PropertyRNA &rna_Macro_bl_description;
extern PropertyRNA &rna_Macro_bl_undo_group;
extern PropertyRNA &rna_Macro_bl_options;
extern PropertyRNA &rna_Macro_bl_cursor_pending;

extern FunctionRNA *rna_Macro_report_func;
extern PropertyRNA &rna_Macro_report_type;
extern PropertyRNA &rna_Macro_report_message;

extern FunctionRNA *rna_Macro_poll_func;
extern PropertyRNA &rna_Macro_poll_visible;
extern PropertyRNA &rna_Macro_poll_context;

extern FunctionRNA *rna_Macro_draw_func;
extern PropertyRNA &rna_Macro_draw_context;



extern PropertyRNA &rna_OperatorMacro_rna_properties;
extern PropertyRNA &rna_OperatorMacro_rna_type;
extern PropertyRNA &rna_OperatorMacro_properties;


extern PropertyRNA &rna_NDOFMotionEventData_rna_properties;
extern PropertyRNA &rna_NDOFMotionEventData_rna_type;
extern PropertyRNA &rna_NDOFMotionEventData_translation;
extern PropertyRNA &rna_NDOFMotionEventData_rotation;
extern PropertyRNA &rna_NDOFMotionEventData_progress;
extern PropertyRNA &rna_NDOFMotionEventData_time_delta;


extern PropertyRNA &rna_Event_rna_properties;
extern PropertyRNA &rna_Event_rna_type;
extern PropertyRNA &rna_Event_ascii;
extern PropertyRNA &rna_Event_unicode;
extern PropertyRNA &rna_Event_value;
extern PropertyRNA &rna_Event_value_prev;
extern PropertyRNA &rna_Event_type;
extern PropertyRNA &rna_Event_type_prev;
extern PropertyRNA &rna_Event_direction;
extern PropertyRNA &rna_Event_is_repeat;
extern PropertyRNA &rna_Event_is_consecutive;
extern PropertyRNA &rna_Event_mouse_x;
extern PropertyRNA &rna_Event_mouse_y;
extern PropertyRNA &rna_Event_mouse_region_x;
extern PropertyRNA &rna_Event_mouse_region_y;
extern PropertyRNA &rna_Event_mouse_prev_x;
extern PropertyRNA &rna_Event_mouse_prev_y;
extern PropertyRNA &rna_Event_mouse_prev_press_x;
extern PropertyRNA &rna_Event_mouse_prev_press_y;
extern PropertyRNA &rna_Event_pressure;
extern PropertyRNA &rna_Event_tilt;
extern PropertyRNA &rna_Event_is_tablet;
extern PropertyRNA &rna_Event_is_mouse_absolute;
extern PropertyRNA &rna_Event_ndof_motion;
extern PropertyRNA &rna_Event_xr;
extern PropertyRNA &rna_Event_shift;
extern PropertyRNA &rna_Event_ctrl;
extern PropertyRNA &rna_Event_alt;
extern PropertyRNA &rna_Event_oskey;
extern PropertyRNA &rna_Event_hyper;


extern PropertyRNA &rna_Timer_rna_properties;
extern PropertyRNA &rna_Timer_rna_type;
extern PropertyRNA &rna_Timer_time_step;
extern PropertyRNA &rna_Timer_time_delta;
extern PropertyRNA &rna_Timer_time_duration;


extern PropertyRNA &rna_UIPopupMenu_rna_properties;
extern PropertyRNA &rna_UIPopupMenu_rna_type;
extern PropertyRNA &rna_UIPopupMenu_layout;


extern PropertyRNA &rna_UIPopover_rna_properties;
extern PropertyRNA &rna_UIPopover_rna_type;
extern PropertyRNA &rna_UIPopover_layout;


extern PropertyRNA &rna_UIPieMenu_rna_properties;
extern PropertyRNA &rna_UIPieMenu_rna_type;
extern PropertyRNA &rna_UIPieMenu_layout;


extern PropertyRNA &rna_Window_rna_properties;
extern PropertyRNA &rna_Window_rna_type;
extern PropertyRNA &rna_Window_parent;
extern PropertyRNA &rna_Window_scene;
extern PropertyRNA &rna_Window_workspace;
extern PropertyRNA &rna_Window_screen;
extern PropertyRNA &rna_Window_view_layer;
extern PropertyRNA &rna_Window_x;
extern PropertyRNA &rna_Window_y;
extern PropertyRNA &rna_Window_width;
extern PropertyRNA &rna_Window_height;
extern PropertyRNA &rna_Window_stereo_3d_display;
extern PropertyRNA &rna_Window_support_hdr_color;
extern PropertyRNA &rna_Window_modal_operators;

extern FunctionRNA *rna_Window_cursor_warp_func;
extern PropertyRNA &rna_Window_cursor_warp_x;
extern PropertyRNA &rna_Window_cursor_warp_y;

extern FunctionRNA *rna_Window_cursor_set_func;
extern PropertyRNA &rna_Window_cursor_set_cursor;

extern FunctionRNA *rna_Window_cursor_modal_set_func;
extern PropertyRNA &rna_Window_cursor_modal_set_cursor;

extern FunctionRNA *rna_Window_cursor_modal_restore_func;
extern FunctionRNA *rna_Window_event_simulate_func;
extern PropertyRNA &rna_Window_event_simulate_type;
extern PropertyRNA &rna_Window_event_simulate_value;
extern PropertyRNA &rna_Window_event_simulate_unicode;
extern PropertyRNA &rna_Window_event_simulate_x;
extern PropertyRNA &rna_Window_event_simulate_y;
extern PropertyRNA &rna_Window_event_simulate_shift;
extern PropertyRNA &rna_Window_event_simulate_ctrl;
extern PropertyRNA &rna_Window_event_simulate_alt;
extern PropertyRNA &rna_Window_event_simulate_oskey;
extern PropertyRNA &rna_Window_event_simulate_hyper;
extern PropertyRNA &rna_Window_event_simulate_event;

extern FunctionRNA *rna_Window_find_playing_scene_func;
extern PropertyRNA &rna_Window_find_playing_scene_scrub;
extern PropertyRNA &rna_Window_find_playing_scene_scene;



extern PropertyRNA &rna_Stereo3dDisplay_rna_properties;
extern PropertyRNA &rna_Stereo3dDisplay_rna_type;
extern PropertyRNA &rna_Stereo3dDisplay_display_mode;
extern PropertyRNA &rna_Stereo3dDisplay_anaglyph_type;
extern PropertyRNA &rna_Stereo3dDisplay_interlace_type;
extern PropertyRNA &rna_Stereo3dDisplay_use_interlace_swap;
extern PropertyRNA &rna_Stereo3dDisplay_use_sidebyside_crosseyed;


extern PropertyRNA &rna_Report_rna_properties;
extern PropertyRNA &rna_Report_rna_type;
extern PropertyRNA &rna_Report_session_uid;
extern PropertyRNA &rna_Report_type;
extern PropertyRNA &rna_Report_message;


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

extern PropertyRNA &rna_WindowManager_operators;
extern PropertyRNA &rna_WindowManager_reports;
extern PropertyRNA &rna_WindowManager_windows;
extern PropertyRNA &rna_WindowManager_keyconfigs;
extern PropertyRNA &rna_WindowManager_undo_stack;
extern PropertyRNA &rna_WindowManager_xr_session_settings;
extern PropertyRNA &rna_WindowManager_xr_session_state;
extern PropertyRNA &rna_WindowManager_extensions_updates;
extern PropertyRNA &rna_WindowManager_extensions_blocked;
extern PropertyRNA &rna_WindowManager_is_event_handling_break;
extern PropertyRNA &rna_WindowManager_is_interface_locked;

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


extern FunctionRNA *rna_WindowManager_fileselect_add_func;
extern PropertyRNA &rna_WindowManager_fileselect_add_operator;

extern FunctionRNA *rna_WindowManager_modal_handler_add_func;
extern PropertyRNA &rna_WindowManager_modal_handler_add_operator;
extern PropertyRNA &rna_WindowManager_modal_handler_add_handle;

extern FunctionRNA *rna_WindowManager_event_timer_add_func;
extern PropertyRNA &rna_WindowManager_event_timer_add_time_step;
extern PropertyRNA &rna_WindowManager_event_timer_add_window;
extern PropertyRNA &rna_WindowManager_event_timer_add_result;

extern FunctionRNA *rna_WindowManager_event_timer_remove_func;
extern PropertyRNA &rna_WindowManager_event_timer_remove_timer;

extern FunctionRNA *rna_WindowManager_gizmo_group_type_ensure_func;
extern PropertyRNA &rna_WindowManager_gizmo_group_type_ensure_identifier;

extern FunctionRNA *rna_WindowManager_gizmo_group_type_unlink_delayed_func;
extern PropertyRNA &rna_WindowManager_gizmo_group_type_unlink_delayed_identifier;

extern FunctionRNA *rna_WindowManager_progress_begin_func;
extern PropertyRNA &rna_WindowManager_progress_begin_min;
extern PropertyRNA &rna_WindowManager_progress_begin_max;

extern FunctionRNA *rna_WindowManager_progress_update_func;
extern PropertyRNA &rna_WindowManager_progress_update_value;

extern FunctionRNA *rna_WindowManager_progress_end_func;
extern FunctionRNA *rna_WindowManager_invoke_props_popup_func;
extern PropertyRNA &rna_WindowManager_invoke_props_popup_operator;
extern PropertyRNA &rna_WindowManager_invoke_props_popup_event;
extern PropertyRNA &rna_WindowManager_invoke_props_popup_result;

extern FunctionRNA *rna_WindowManager_invoke_props_dialog_func;
extern PropertyRNA &rna_WindowManager_invoke_props_dialog_operator;
extern PropertyRNA &rna_WindowManager_invoke_props_dialog_width;
extern PropertyRNA &rna_WindowManager_invoke_props_dialog_result;
extern PropertyRNA &rna_WindowManager_invoke_props_dialog_title;
extern PropertyRNA &rna_WindowManager_invoke_props_dialog_confirm_text;
extern PropertyRNA &rna_WindowManager_invoke_props_dialog_cancel_default;
extern PropertyRNA &rna_WindowManager_invoke_props_dialog_text_ctxt;
extern PropertyRNA &rna_WindowManager_invoke_props_dialog_translate;

extern FunctionRNA *rna_WindowManager_invoke_search_popup_func;
extern PropertyRNA &rna_WindowManager_invoke_search_popup_operator;

extern FunctionRNA *rna_WindowManager_invoke_popup_func;
extern PropertyRNA &rna_WindowManager_invoke_popup_operator;
extern PropertyRNA &rna_WindowManager_invoke_popup_width;
extern PropertyRNA &rna_WindowManager_invoke_popup_result;

extern FunctionRNA *rna_WindowManager_invoke_confirm_func;
extern PropertyRNA &rna_WindowManager_invoke_confirm_operator;
extern PropertyRNA &rna_WindowManager_invoke_confirm_event;
extern PropertyRNA &rna_WindowManager_invoke_confirm_result;
extern PropertyRNA &rna_WindowManager_invoke_confirm_title;
extern PropertyRNA &rna_WindowManager_invoke_confirm_message;
extern PropertyRNA &rna_WindowManager_invoke_confirm_confirm_text;
extern PropertyRNA &rna_WindowManager_invoke_confirm_icon;
extern PropertyRNA &rna_WindowManager_invoke_confirm_text_ctxt;
extern PropertyRNA &rna_WindowManager_invoke_confirm_translate;

extern FunctionRNA *rna_WindowManager_popmenu_begin__internal_func;
extern PropertyRNA &rna_WindowManager_popmenu_begin__internal_title;
extern PropertyRNA &rna_WindowManager_popmenu_begin__internal_icon;
extern PropertyRNA &rna_WindowManager_popmenu_begin__internal_menu;

extern FunctionRNA *rna_WindowManager_popmenu_end__internal_func;
extern PropertyRNA &rna_WindowManager_popmenu_end__internal_menu;

extern FunctionRNA *rna_WindowManager_popover_begin__internal_func;
extern PropertyRNA &rna_WindowManager_popover_begin__internal_ui_units_x;
extern PropertyRNA &rna_WindowManager_popover_begin__internal_menu;
extern PropertyRNA &rna_WindowManager_popover_begin__internal_from_active_button;

extern FunctionRNA *rna_WindowManager_popover_end__internal_func;
extern PropertyRNA &rna_WindowManager_popover_end__internal_menu;
extern PropertyRNA &rna_WindowManager_popover_end__internal_keymap;

extern FunctionRNA *rna_WindowManager_piemenu_begin__internal_func;
extern PropertyRNA &rna_WindowManager_piemenu_begin__internal_title;
extern PropertyRNA &rna_WindowManager_piemenu_begin__internal_icon;
extern PropertyRNA &rna_WindowManager_piemenu_begin__internal_event;
extern PropertyRNA &rna_WindowManager_piemenu_begin__internal_menu_pie;

extern FunctionRNA *rna_WindowManager_piemenu_end__internal_func;
extern PropertyRNA &rna_WindowManager_piemenu_end__internal_menu;

extern FunctionRNA *rna_WindowManager_operator_properties_last_func;
extern PropertyRNA &rna_WindowManager_operator_properties_last_operator;
extern PropertyRNA &rna_WindowManager_operator_properties_last_result;

extern FunctionRNA *rna_WindowManager_print_undo_steps_func;
extern FunctionRNA *rna_WindowManager_tag_script_reload_func;
extern FunctionRNA *rna_WindowManager_asset_library_status_begin_loading_func;
extern PropertyRNA &rna_WindowManager_asset_library_status_begin_loading_library_url;
extern PropertyRNA &rna_WindowManager_asset_library_status_begin_loading_timeout;

extern FunctionRNA *rna_WindowManager_asset_library_status_ping_still_loading_func;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_still_loading_library_url;

extern FunctionRNA *rna_WindowManager_asset_library_status_ping_metafiles_in_place_func;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_metafiles_in_place_library_url;

extern FunctionRNA *rna_WindowManager_asset_library_status_ping_loaded_new_pages_func;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_loaded_new_pages_library_url;

extern FunctionRNA *rna_WindowManager_asset_library_status_ping_loaded_new_preview_func;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_loaded_new_preview_preview_full_path;

extern FunctionRNA *rna_WindowManager_asset_library_status_ping_asset_file_progress_func;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_progress_absolute_file_url;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_progress_size_written;

extern FunctionRNA *rna_WindowManager_asset_library_status_ping_asset_file_succeeded_func;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_succeeded_library_url;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_succeeded_absolute_file_url;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_succeeded_local_file_abspath;

extern FunctionRNA *rna_WindowManager_asset_library_status_ping_asset_file_failed_func;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_failed_library_url;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_failed_absolute_file_url;
extern PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_failed_local_file_abspath;

extern FunctionRNA *rna_WindowManager_asset_library_status_ping_finished_download_queue_func;
extern FunctionRNA *rna_WindowManager_asset_library_status_finished_loading_func;
extern PropertyRNA &rna_WindowManager_asset_library_status_finished_loading_library_url;

extern FunctionRNA *rna_WindowManager_asset_library_status_failed_loading_func;
extern PropertyRNA &rna_WindowManager_asset_library_status_failed_loading_library_url;
extern PropertyRNA &rna_WindowManager_asset_library_status_failed_loading_message;

extern FunctionRNA *rna_WindowManager_register_node_group_operators_func;


extern PropertyRNA &rna_Windows_rna_properties;
extern PropertyRNA &rna_Windows_rna_type;

extern FunctionRNA *rna_Windows_find_playing_func;
extern PropertyRNA &rna_Windows_find_playing_scrub;
extern PropertyRNA &rna_Windows_find_playing_window;



extern PropertyRNA &rna_KeyConfigurations_rna_properties;
extern PropertyRNA &rna_KeyConfigurations_rna_type;
extern PropertyRNA &rna_KeyConfigurations_active;
extern PropertyRNA &rna_KeyConfigurations_default;
extern PropertyRNA &rna_KeyConfigurations_addon;
extern PropertyRNA &rna_KeyConfigurations_user;

extern FunctionRNA *rna_KeyConfigurations_new_func;
extern PropertyRNA &rna_KeyConfigurations_new_name;
extern PropertyRNA &rna_KeyConfigurations_new_keyconfig;

extern FunctionRNA *rna_KeyConfigurations_remove_func;
extern PropertyRNA &rna_KeyConfigurations_remove_keyconfig;

extern FunctionRNA *rna_KeyConfigurations_find_item_from_operator_func;
extern PropertyRNA &rna_KeyConfigurations_find_item_from_operator_idname;
extern PropertyRNA &rna_KeyConfigurations_find_item_from_operator_context;
extern PropertyRNA &rna_KeyConfigurations_find_item_from_operator_properties;
extern PropertyRNA &rna_KeyConfigurations_find_item_from_operator_include;
extern PropertyRNA &rna_KeyConfigurations_find_item_from_operator_exclude;
extern PropertyRNA &rna_KeyConfigurations_find_item_from_operator_keymap;
extern PropertyRNA &rna_KeyConfigurations_find_item_from_operator_item;

extern FunctionRNA *rna_KeyConfigurations_update_func;
extern PropertyRNA &rna_KeyConfigurations_update_keep_properties;



extern PropertyRNA &rna_KeyConfigPreferences_rna_properties;
extern PropertyRNA &rna_KeyConfigPreferences_rna_type;
extern PropertyRNA &rna_KeyConfigPreferences_bl_idname;

extern FunctionRNA *rna_KeyConfigPreferences_bl_system_properties_get_func;
extern PropertyRNA &rna_KeyConfigPreferences_bl_system_properties_get_do_create;
extern PropertyRNA &rna_KeyConfigPreferences_bl_system_properties_get_system_properties;



extern PropertyRNA &rna_KeyConfig_rna_properties;
extern PropertyRNA &rna_KeyConfig_rna_type;
extern PropertyRNA &rna_KeyConfig_name;
extern PropertyRNA &rna_KeyConfig_keymaps;
extern PropertyRNA &rna_KeyConfig_is_user_defined;
extern PropertyRNA &rna_KeyConfig_preferences;


extern PropertyRNA &rna_KeyMaps_rna_properties;
extern PropertyRNA &rna_KeyMaps_rna_type;

extern FunctionRNA *rna_KeyMaps_new_func;
extern PropertyRNA &rna_KeyMaps_new_name;
extern PropertyRNA &rna_KeyMaps_new_space_type;
extern PropertyRNA &rna_KeyMaps_new_region_type;
extern PropertyRNA &rna_KeyMaps_new_modal;
extern PropertyRNA &rna_KeyMaps_new_tool;
extern PropertyRNA &rna_KeyMaps_new_keymap;

extern FunctionRNA *rna_KeyMaps_remove_func;
extern PropertyRNA &rna_KeyMaps_remove_keymap;

extern FunctionRNA *rna_KeyMaps_clear_func;
extern FunctionRNA *rna_KeyMaps_find_func;
extern PropertyRNA &rna_KeyMaps_find_name;
extern PropertyRNA &rna_KeyMaps_find_space_type;
extern PropertyRNA &rna_KeyMaps_find_region_type;
extern PropertyRNA &rna_KeyMaps_find_keymap;

extern FunctionRNA *rna_KeyMaps_find_match_func;
extern PropertyRNA &rna_KeyMaps_find_match_keymap;
extern PropertyRNA &rna_KeyMaps_find_match_result;

extern FunctionRNA *rna_KeyMaps_find_modal_func;
extern PropertyRNA &rna_KeyMaps_find_modal_name;
extern PropertyRNA &rna_KeyMaps_find_modal_keymap;



extern PropertyRNA &rna_KeyMap_rna_properties;
extern PropertyRNA &rna_KeyMap_rna_type;
extern PropertyRNA &rna_KeyMap_name;
extern PropertyRNA &rna_KeyMap_bl_owner_id;
extern PropertyRNA &rna_KeyMap_space_type;
extern PropertyRNA &rna_KeyMap_region_type;
extern PropertyRNA &rna_KeyMap_keymap_items;
extern PropertyRNA &rna_KeyMap_is_user_modified;
extern PropertyRNA &rna_KeyMap_is_modal;
extern PropertyRNA &rna_KeyMap_show_expanded_items;
extern PropertyRNA &rna_KeyMap_show_expanded_children;
extern PropertyRNA &rna_KeyMap_modal_event_values;

extern FunctionRNA *rna_KeyMap_active_func;
extern PropertyRNA &rna_KeyMap_active_keymap;

extern FunctionRNA *rna_KeyMap_restore_to_default_func;
extern FunctionRNA *rna_KeyMap_restore_item_to_default_func;
extern PropertyRNA &rna_KeyMap_restore_item_to_default_item;



extern PropertyRNA &rna_KeyMapItems_rna_properties;
extern PropertyRNA &rna_KeyMapItems_rna_type;

extern FunctionRNA *rna_KeyMapItems_new_func;
extern PropertyRNA &rna_KeyMapItems_new_idname;
extern PropertyRNA &rna_KeyMapItems_new_type;
extern PropertyRNA &rna_KeyMapItems_new_value;
extern PropertyRNA &rna_KeyMapItems_new_any;
extern PropertyRNA &rna_KeyMapItems_new_shift;
extern PropertyRNA &rna_KeyMapItems_new_ctrl;
extern PropertyRNA &rna_KeyMapItems_new_alt;
extern PropertyRNA &rna_KeyMapItems_new_oskey;
extern PropertyRNA &rna_KeyMapItems_new_hyper;
extern PropertyRNA &rna_KeyMapItems_new_key_modifier;
extern PropertyRNA &rna_KeyMapItems_new_direction;
extern PropertyRNA &rna_KeyMapItems_new_repeat;
extern PropertyRNA &rna_KeyMapItems_new_head;
extern PropertyRNA &rna_KeyMapItems_new_item;

extern FunctionRNA *rna_KeyMapItems_new_modal_func;
extern PropertyRNA &rna_KeyMapItems_new_modal_propvalue;
extern PropertyRNA &rna_KeyMapItems_new_modal_type;
extern PropertyRNA &rna_KeyMapItems_new_modal_value;
extern PropertyRNA &rna_KeyMapItems_new_modal_any;
extern PropertyRNA &rna_KeyMapItems_new_modal_shift;
extern PropertyRNA &rna_KeyMapItems_new_modal_ctrl;
extern PropertyRNA &rna_KeyMapItems_new_modal_alt;
extern PropertyRNA &rna_KeyMapItems_new_modal_oskey;
extern PropertyRNA &rna_KeyMapItems_new_modal_hyper;
extern PropertyRNA &rna_KeyMapItems_new_modal_key_modifier;
extern PropertyRNA &rna_KeyMapItems_new_modal_direction;
extern PropertyRNA &rna_KeyMapItems_new_modal_repeat;
extern PropertyRNA &rna_KeyMapItems_new_modal_item;

extern FunctionRNA *rna_KeyMapItems_new_from_item_func;
extern PropertyRNA &rna_KeyMapItems_new_from_item_item;
extern PropertyRNA &rna_KeyMapItems_new_from_item_head;
extern PropertyRNA &rna_KeyMapItems_new_from_item_result;

extern FunctionRNA *rna_KeyMapItems_remove_func;
extern PropertyRNA &rna_KeyMapItems_remove_item;

extern FunctionRNA *rna_KeyMapItems_from_id_func;
extern PropertyRNA &rna_KeyMapItems_from_id_id;
extern PropertyRNA &rna_KeyMapItems_from_id_item;

extern FunctionRNA *rna_KeyMapItems_find_from_operator_func;
extern PropertyRNA &rna_KeyMapItems_find_from_operator_idname;
extern PropertyRNA &rna_KeyMapItems_find_from_operator_properties;
extern PropertyRNA &rna_KeyMapItems_find_from_operator_include;
extern PropertyRNA &rna_KeyMapItems_find_from_operator_exclude;
extern PropertyRNA &rna_KeyMapItems_find_from_operator_item;

extern FunctionRNA *rna_KeyMapItems_find_match_func;
extern PropertyRNA &rna_KeyMapItems_find_match_keymap;
extern PropertyRNA &rna_KeyMapItems_find_match_item;
extern PropertyRNA &rna_KeyMapItems_find_match_result;

extern FunctionRNA *rna_KeyMapItems_match_event_func;
extern PropertyRNA &rna_KeyMapItems_match_event_event;
extern PropertyRNA &rna_KeyMapItems_match_event_item;



extern PropertyRNA &rna_KeyMapItem_rna_properties;
extern PropertyRNA &rna_KeyMapItem_rna_type;
extern PropertyRNA &rna_KeyMapItem_idname;
extern PropertyRNA &rna_KeyMapItem_name;
extern PropertyRNA &rna_KeyMapItem_properties;
extern PropertyRNA &rna_KeyMapItem_map_type;
extern PropertyRNA &rna_KeyMapItem_type;
extern PropertyRNA &rna_KeyMapItem_value;
extern PropertyRNA &rna_KeyMapItem_direction;
extern PropertyRNA &rna_KeyMapItem_id;
extern PropertyRNA &rna_KeyMapItem_any;
extern PropertyRNA &rna_KeyMapItem_shift;
extern PropertyRNA &rna_KeyMapItem_ctrl;
extern PropertyRNA &rna_KeyMapItem_alt;
extern PropertyRNA &rna_KeyMapItem_oskey;
extern PropertyRNA &rna_KeyMapItem_hyper;
extern PropertyRNA &rna_KeyMapItem_shift_ui;
extern PropertyRNA &rna_KeyMapItem_ctrl_ui;
extern PropertyRNA &rna_KeyMapItem_alt_ui;
extern PropertyRNA &rna_KeyMapItem_oskey_ui;
extern PropertyRNA &rna_KeyMapItem_hyper_ui;
extern PropertyRNA &rna_KeyMapItem_key_modifier;
extern PropertyRNA &rna_KeyMapItem_repeat;
extern PropertyRNA &rna_KeyMapItem_show_expanded;
extern PropertyRNA &rna_KeyMapItem_propvalue;
extern PropertyRNA &rna_KeyMapItem_active;
extern PropertyRNA &rna_KeyMapItem_is_user_modified;
extern PropertyRNA &rna_KeyMapItem_is_user_defined;

extern FunctionRNA *rna_KeyMapItem_compare_func;
extern PropertyRNA &rna_KeyMapItem_compare_item;
extern PropertyRNA &rna_KeyMapItem_compare_result;

extern FunctionRNA *rna_KeyMapItem_to_string_func;
extern PropertyRNA &rna_KeyMapItem_to_string_compact;
extern PropertyRNA &rna_KeyMapItem_to_string_result;


static PointerRNA Operator_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Operator_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Operator_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Operator_rna_properties_get(iter);
    }
}

void Operator_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Operator_rna_properties_get(iter);
    }
}

void Operator_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Operator_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Operator_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Operator_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Operator_name_get;
    fn(ptr, value);
}

int Operator_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Operator_name_length;
    return fn(ptr);
}

PointerRNA Operator_properties_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Operator_properties_get;
    return fn(ptr);
}

bool Operator_has_reports_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Operator_has_reports_get;
    return fn(ptr);
}

void Operator_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    BLI_assert(strlen(data->type->idname) < 64);
    strcpy(value, data->type->idname);
}

int Operator_bl_idname_length(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return strlen(data->type->idname);
}

void Operator_bl_idname_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Operator_bl_idname_set;
    fn(ptr, value);
}

void Operator_bl_label_get(PointerRNA *ptr, char *value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    BLI_assert(strlen(data->type->name) < 64);
    strcpy(value, data->type->name);
}

int Operator_bl_label_length(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return strlen(data->type->name);
}

void Operator_bl_label_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Operator_bl_label_set;
    fn(ptr, value);
}

void Operator_bl_translation_context_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Operator_bl_translation_context_get;
    fn(ptr, value);
}

int Operator_bl_translation_context_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Operator_bl_translation_context_length;
    return fn(ptr);
}

void Operator_bl_translation_context_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Operator_bl_translation_context_set;
    fn(ptr, value);
}

void Operator_bl_description_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Operator_bl_description_get;
    fn(ptr, value);
}

int Operator_bl_description_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Operator_bl_description_length;
    return fn(ptr);
}

void Operator_bl_description_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Operator_bl_description_set;
    fn(ptr, value);
}

void Operator_bl_undo_group_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Operator_bl_undo_group_get;
    fn(ptr, value);
}

int Operator_bl_undo_group_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Operator_bl_undo_group_length;
    return fn(ptr);
}

void Operator_bl_undo_group_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Operator_bl_undo_group_set;
    fn(ptr, value);
}

int Operator_bl_options_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (int)(data->type->flag);
}

void Operator_bl_options_set(PointerRNA *ptr, int value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    data->type->flag = (std::remove_reference_t<decltype(data->type->flag)>)value;
}

int Operator_bl_cursor_pending_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (int)(data->type->cursor_pending);
}

void Operator_bl_cursor_pending_set(PointerRNA *ptr, int value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    data->type->cursor_pending = (std::remove_reference_t<decltype(data->type->cursor_pending)>)value;
}

PointerRNA Operator_layout_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Operator_layout_get;
    return fn(ptr);
}

PointerRNA Operator_options_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Operator_options_get;
    return fn(ptr);
}

static PointerRNA Operator_macros_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Macro, rna_iterator_listbase_get(iter));
}

void Operator_macros_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Operator_macros;

    rna_iterator_listbase_begin(iter, ptr, &data->macro, nullptr);

    if (iter->valid) {
        iter->ptr = Operator_macros_get(iter);
    }
}

void Operator_macros_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Operator_macros_get(iter);
    }
}

void Operator_macros_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Operator_macros_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Operator_macros_begin(&iter, ptr);

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
        if (found) { *r_ptr = Operator_macros_get(&iter); }
    }

    Operator_macros_end(&iter);

    return found;
}

int Macro_bl_idname_length(PointerRNA *);
void Macro_bl_idname_get(PointerRNA *, char *);

bool Operator_macros_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Operator_macros_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Macro_bl_idname_length(&iter.ptr);
            if (namelen < 1024) {
                Macro_bl_idname_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                Macro_bl_idname_get(&iter.ptr, name);
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
        Operator_macros_next(&iter);
    }
    Operator_macros_end(&iter);

    return found;
}

static PointerRNA OperatorProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void OperatorProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_OperatorProperties_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = OperatorProperties_rna_properties_get(iter);
    }
}

void OperatorProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = OperatorProperties_rna_properties_get(iter);
    }
}

void OperatorProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool OperatorProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA OperatorProperties_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA OperatorOptions_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void OperatorOptions_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_OperatorOptions_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = OperatorOptions_rna_properties_get(iter);
    }
}

void OperatorOptions_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = OperatorOptions_rna_properties_get(iter);
    }
}

void OperatorOptions_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool OperatorOptions_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA OperatorOptions_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool OperatorOptions_is_grab_cursor_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

bool OperatorOptions_is_invoke_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

bool OperatorOptions_is_repeat_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

bool OperatorOptions_is_repeat_last_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

bool OperatorOptions_use_cursor_region_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void OperatorOptions_use_cursor_region_set(PointerRNA *ptr, bool value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

static PointerRNA Macro_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Macro_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Macro_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Macro_rna_properties_get(iter);
    }
}

void Macro_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Macro_rna_properties_get(iter);
    }
}

void Macro_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Macro_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Macro_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Macro_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Operator_name_get;
    fn(ptr, value);
}

int Macro_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Operator_name_length;
    return fn(ptr);
}

PointerRNA Macro_properties_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Operator_properties_get;
    return fn(ptr);
}

bool Macro_has_reports_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Operator_has_reports_get;
    return fn(ptr);
}

void Macro_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    BLI_assert(strlen(data->type->idname) < 64);
    strcpy(value, data->type->idname);
}

int Macro_bl_idname_length(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return strlen(data->type->idname);
}

void Macro_bl_idname_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Operator_bl_idname_set;
    fn(ptr, value);
}

void Macro_bl_label_get(PointerRNA *ptr, char *value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    BLI_assert(strlen(data->type->name) < 64);
    strcpy(value, data->type->name);
}

int Macro_bl_label_length(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return strlen(data->type->name);
}

void Macro_bl_label_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Operator_bl_label_set;
    fn(ptr, value);
}

void Macro_bl_translation_context_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Operator_bl_translation_context_get;
    fn(ptr, value);
}

int Macro_bl_translation_context_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Operator_bl_translation_context_length;
    return fn(ptr);
}

void Macro_bl_translation_context_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Operator_bl_translation_context_set;
    fn(ptr, value);
}

void Macro_bl_description_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Operator_bl_description_get;
    fn(ptr, value);
}

int Macro_bl_description_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Operator_bl_description_length;
    return fn(ptr);
}

void Macro_bl_description_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Operator_bl_description_set;
    fn(ptr, value);
}

void Macro_bl_undo_group_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Operator_bl_undo_group_get;
    fn(ptr, value);
}

int Macro_bl_undo_group_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Operator_bl_undo_group_length;
    return fn(ptr);
}

void Macro_bl_undo_group_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Operator_bl_undo_group_set;
    fn(ptr, value);
}

int Macro_bl_options_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (int)(data->type->flag);
}

void Macro_bl_options_set(PointerRNA *ptr, int value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    data->type->flag = (std::remove_reference_t<decltype(data->type->flag)>)value;
}

int Macro_bl_cursor_pending_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (int)(data->type->cursor_pending);
}

void Macro_bl_cursor_pending_set(PointerRNA *ptr, int value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    data->type->cursor_pending = (std::remove_reference_t<decltype(data->type->cursor_pending)>)value;
}

static PointerRNA OperatorMacro_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void OperatorMacro_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_OperatorMacro_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = OperatorMacro_rna_properties_get(iter);
    }
}

void OperatorMacro_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = OperatorMacro_rna_properties_get(iter);
    }
}

void OperatorMacro_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool OperatorMacro_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA OperatorMacro_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA OperatorMacro_properties_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_OperatorMacro_properties_get;
    return fn(ptr);
}

static PointerRNA NDOFMotionEventData_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void NDOFMotionEventData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NDOFMotionEventData_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = NDOFMotionEventData_rna_properties_get(iter);
    }
}

void NDOFMotionEventData_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NDOFMotionEventData_rna_properties_get(iter);
    }
}

void NDOFMotionEventData_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NDOFMotionEventData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA NDOFMotionEventData_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void NDOFMotionEventData_translation_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_NDOFMotionEventData_translation_get;
    fn(ptr, values);
}

void NDOFMotionEventData_rotation_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_NDOFMotionEventData_rotation_get;
    fn(ptr, values);
}

int NDOFMotionEventData_progress_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_NDOFMotionEventData_progress_get;
    return fn(ptr);
}

float NDOFMotionEventData_time_delta_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_NDOFMotionEventData_time_delta_get;
    return fn(ptr);
}

static PointerRNA Event_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Event_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Event_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Event_rna_properties_get(iter);
    }
}

void Event_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Event_rna_properties_get(iter);
    }
}

void Event_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Event_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Event_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Event_ascii_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Event_ascii_get;
    fn(ptr, value);
}

int Event_ascii_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Event_ascii_length;
    return fn(ptr);
}

void Event_unicode_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Event_unicode_get;
    fn(ptr, value);
}

int Event_unicode_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Event_unicode_length;
    return fn(ptr);
}

int Event_value_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->val);
}

int Event_value_prev_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_val);
}

int Event_type_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->type);
}

int Event_type_prev_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_type);
}

int Event_direction_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->direction);
}

bool Event_is_repeat_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Event_is_repeat_get;
    return fn(ptr);
}

bool Event_is_consecutive_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Event_is_consecutive_get;
    return fn(ptr);
}

int Event_mouse_x_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->xy[0]);
}

int Event_mouse_y_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->xy[1]);
}

int Event_mouse_region_x_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->mval[0]);
}

int Event_mouse_region_y_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->mval[1]);
}

int Event_mouse_prev_x_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_xy[0]);
}

int Event_mouse_prev_y_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_xy[1]);
}

int Event_mouse_prev_press_x_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_press_xy[0]);
}

int Event_mouse_prev_press_y_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_press_xy[1]);
}

float Event_pressure_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Event_pressure_get;
    return fn(ptr);
}

void Event_tilt_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_Event_tilt_get;
    fn(ptr, values);
}

bool Event_is_tablet_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Event_is_tablet_get;
    return fn(ptr);
}

bool Event_is_mouse_absolute_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return ((uint64_t(data->tablet.is_motion_absolute) & 1) != 0);
}

PointerRNA Event_ndof_motion_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Event_ndof_motion_get;
    return fn(ptr);
}

PointerRNA Event_xr_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Event_xr_get;
    return fn(ptr);
}

bool Event_shift_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return ((uint64_t(data->modifier) & 1) != 0);
}

bool Event_ctrl_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return ((uint64_t(data->modifier) & 2) != 0);
}

bool Event_alt_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return ((uint64_t(data->modifier) & 4) != 0);
}

bool Event_oskey_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return ((uint64_t(data->modifier) & 8) != 0);
}

bool Event_hyper_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return ((uint64_t(data->modifier) & 16) != 0);
}

static PointerRNA Timer_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Timer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Timer_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Timer_rna_properties_get(iter);
    }
}

void Timer_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Timer_rna_properties_get(iter);
    }
}

void Timer_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Timer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Timer_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float Timer_time_step_get(PointerRNA *ptr)
{
    wmTimer *data = (wmTimer *)(ptr->data);
    return (float)(data->time_step);
}

float Timer_time_delta_get(PointerRNA *ptr)
{
    wmTimer *data = (wmTimer *)(ptr->data);
    return (float)(data->time_delta);
}

float Timer_time_duration_get(PointerRNA *ptr)
{
    wmTimer *data = (wmTimer *)(ptr->data);
    return (float)(data->time_duration);
}

static PointerRNA UIPopupMenu_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UIPopupMenu_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UIPopupMenu_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UIPopupMenu_rna_properties_get(iter);
    }
}

void UIPopupMenu_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UIPopupMenu_rna_properties_get(iter);
    }
}

void UIPopupMenu_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UIPopupMenu_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UIPopupMenu_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA UIPopupMenu_layout_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_PopupMenu_layout_get;
    return fn(ptr);
}

static PointerRNA UIPopover_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UIPopover_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UIPopover_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UIPopover_rna_properties_get(iter);
    }
}

void UIPopover_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UIPopover_rna_properties_get(iter);
    }
}

void UIPopover_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UIPopover_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UIPopover_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA UIPopover_layout_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_PopoverMenu_layout_get;
    return fn(ptr);
}

static PointerRNA UIPieMenu_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UIPieMenu_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UIPieMenu_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UIPieMenu_rna_properties_get(iter);
    }
}

void UIPieMenu_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UIPieMenu_rna_properties_get(iter);
    }
}

void UIPieMenu_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UIPieMenu_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UIPieMenu_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA UIPieMenu_layout_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_PieMenu_layout_get;
    return fn(ptr);
}

static PointerRNA Window_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Window_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Window_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Window_rna_properties_get(iter);
    }
}

void Window_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Window_rna_properties_get(iter);
    }
}

void Window_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Window_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Window_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA Window_parent_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Window, data->parent);
}

PointerRNA Window_scene_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Scene, data->scene);
}

void Window_scene_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Window_scene_set;
    fn(ptr, value, reports);
}

PointerRNA Window_workspace_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Window_workspace_get;
    return fn(ptr);
}

void Window_workspace_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Window_workspace_set;
    fn(ptr, value, reports);
}

PointerRNA Window_screen_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Window_screen_get;
    return fn(ptr);
}

void Window_screen_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Window_screen_set;
    fn(ptr, value, reports);
}

PointerRNA Window_view_layer_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Window_view_layer_get;
    return fn(ptr);
}

void Window_view_layer_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Window_view_layer_set;
    fn(ptr, value, reports);
}

int Window_x_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return (int)(data->posx);
}

int Window_y_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return (int)(data->posy);
}

int Window_width_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return (int)(data->sizex);
}

int Window_height_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return (int)(data->sizey);
}

PointerRNA Window_stereo_3d_display_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Stereo3dDisplay, data->stereo3d_format);
}

bool Window_support_hdr_color_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Window_support_hdr_color_get;
    return fn(ptr);
}

static PointerRNA Window_modal_operators_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Window_modal_operators_get;
    return fn(iter);
}

void Window_modal_operators_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Window_modal_operators;

    PropCollectionBeginFunc fn = rna_Window_modal_operators_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Window_modal_operators_get(iter);
    }
}

void Window_modal_operators_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Window_modal_operators_get(iter);
    }
}

void Window_modal_operators_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Window_modal_operators_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Window_modal_operators_begin(&iter, ptr);

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
        if (found) { *r_ptr = Window_modal_operators_get(&iter); }
    }

    Window_modal_operators_end(&iter);

    return found;
}

static PointerRNA Stereo3dDisplay_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Stereo3dDisplay_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Stereo3dDisplay_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Stereo3dDisplay_rna_properties_get(iter);
    }
}

void Stereo3dDisplay_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Stereo3dDisplay_rna_properties_get(iter);
    }
}

void Stereo3dDisplay_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Stereo3dDisplay_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Stereo3dDisplay_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int Stereo3dDisplay_display_mode_get(PointerRNA *ptr)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    return (int)(data->display_mode);
}

void Stereo3dDisplay_display_mode_set(PointerRNA *ptr, int value)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    data->display_mode = (std::remove_reference_t<decltype(data->display_mode)>)value;
}

int Stereo3dDisplay_anaglyph_type_get(PointerRNA *ptr)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    return (int)(data->anaglyph_type);
}

void Stereo3dDisplay_anaglyph_type_set(PointerRNA *ptr, int value)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    data->anaglyph_type = (std::remove_reference_t<decltype(data->anaglyph_type)>)value;
}

int Stereo3dDisplay_interlace_type_get(PointerRNA *ptr)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    return (int)(data->interlace_type);
}

void Stereo3dDisplay_interlace_type_set(PointerRNA *ptr, int value)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    data->interlace_type = (std::remove_reference_t<decltype(data->interlace_type)>)value;
}

bool Stereo3dDisplay_use_interlace_swap_get(PointerRNA *ptr)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void Stereo3dDisplay_use_interlace_swap_set(PointerRNA *ptr, bool value)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool Stereo3dDisplay_use_sidebyside_crosseyed_get(PointerRNA *ptr)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void Stereo3dDisplay_use_sidebyside_crosseyed_set(PointerRNA *ptr, bool value)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

static PointerRNA Report_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Report_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Report_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Report_rna_properties_get(iter);
    }
}

void Report_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Report_rna_properties_get(iter);
    }
}

void Report_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Report_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Report_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int Report_session_uid_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Report_session_uid_get;
    return fn(ptr);
}

int Report_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Report_type_get;
    return fn(ptr);
}

void Report_message_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Report_message_get;
    fn(ptr, value);
}

int Report_message_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Report_message_length;
    return fn(ptr);
}

static PointerRNA WindowManager_operators_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Operator, rna_iterator_listbase_get(iter));
}

void WindowManager_operators_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_WindowManager_operators;

    PropCollectionBeginFunc fn = rna_WindowManager_operators_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = WindowManager_operators_get(iter);
    }
}

void WindowManager_operators_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = WindowManager_operators_get(iter);
    }
}

void WindowManager_operators_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool WindowManager_operators_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    WindowManager_operators_begin(&iter, ptr);

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
        if (found) { *r_ptr = WindowManager_operators_get(&iter); }
    }

    WindowManager_operators_end(&iter);

    return found;
}

static PointerRNA WindowManager_reports_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Report, rna_iterator_listbase_get(iter));
}

void WindowManager_reports_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_WindowManager_reports;

    PropCollectionBeginFunc fn = rna_WindowManager_reports_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = WindowManager_reports_get(iter);
    }
}

void WindowManager_reports_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = WindowManager_reports_get(iter);
    }
}

void WindowManager_reports_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool WindowManager_reports_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    WindowManager_reports_begin(&iter, ptr);

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
        if (found) { *r_ptr = WindowManager_reports_get(&iter); }
    }

    WindowManager_reports_end(&iter);

    return found;
}

static PointerRNA WindowManager_windows_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Window, rna_iterator_listbase_get(iter));
}

void WindowManager_windows_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_WindowManager_windows;

    rna_iterator_listbase_begin(iter, ptr, &data->windows, nullptr);

    if (iter->valid) {
        iter->ptr = WindowManager_windows_get(iter);
    }
}

void WindowManager_windows_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = WindowManager_windows_get(iter);
    }
}

void WindowManager_windows_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool WindowManager_windows_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    WindowManager_windows_begin(&iter, ptr);

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
        if (found) { *r_ptr = WindowManager_windows_get(&iter); }
    }

    WindowManager_windows_end(&iter);

    return found;
}

static PointerRNA WindowManager_keyconfigs_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_KeyConfig, rna_iterator_listbase_get(iter));
}

void WindowManager_keyconfigs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_WindowManager_keyconfigs;

    PropCollectionBeginFunc fn = rna_WindowManager_keyconfigs_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = WindowManager_keyconfigs_get(iter);
    }
}

void WindowManager_keyconfigs_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = WindowManager_keyconfigs_get(iter);
    }
}

void WindowManager_keyconfigs_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool WindowManager_keyconfigs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    WindowManager_keyconfigs_begin(&iter, ptr);

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
        if (found) { *r_ptr = WindowManager_keyconfigs_get(&iter); }
    }

    WindowManager_keyconfigs_end(&iter);

    return found;
}

PointerRNA WindowManager_undo_stack_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_WindowManager_undo_stack_get;
    return fn(ptr);
}

PointerRNA WindowManager_xr_session_settings_get(PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_XrSessionSettings, &data->xr.session_settings);
}

PointerRNA WindowManager_xr_session_state_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_WindowManager_xr_session_state_get;
    return fn(ptr);
}

int WindowManager_extensions_updates_get(PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    return (int)(data->extensions_updates);
}

void WindowManager_extensions_updates_set(PointerRNA *ptr, int value)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    data->extensions_updates = (std::remove_reference_t<decltype(data->extensions_updates)>)value;
}

int WindowManager_extensions_blocked_get(PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    return (int)(data->extensions_blocked);
}

void WindowManager_extensions_blocked_set(PointerRNA *ptr, int value)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    data->extensions_blocked = (std::remove_reference_t<decltype(data->extensions_blocked)>)value;
}

bool WindowManager_is_event_handling_break_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_WindowManager_is_event_handling_break_get;
    return fn(ptr);
}

bool WindowManager_is_interface_locked_get(PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    return (bool)(data->runtime->is_interface_locked);
}

static PointerRNA Windows_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Windows_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Windows_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Windows_rna_properties_get(iter);
    }
}

void Windows_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Windows_rna_properties_get(iter);
    }
}

void Windows_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Windows_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Windows_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA KeyConfigurations_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyConfigurations_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyConfigurations_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyConfigurations_rna_properties_get(iter);
    }
}

void KeyConfigurations_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyConfigurations_rna_properties_get(iter);
    }
}

void KeyConfigurations_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyConfigurations_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyConfigurations_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA KeyConfigurations_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_WindowManager_active_keyconfig_get;
    return fn(ptr);
}

void KeyConfigurations_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_WindowManager_active_keyconfig_set;
    fn(ptr, value, reports);
}

PointerRNA KeyConfigurations_default_value_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_WindowManager_default_keyconfig_get;
    return fn(ptr);
}

PointerRNA KeyConfigurations_addon_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_WindowManager_addon_keyconfig_get;
    return fn(ptr);
}

PointerRNA KeyConfigurations_user_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_WindowManager_user_keyconfig_get;
    return fn(ptr);
}

static PointerRNA KeyConfigPreferences_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyConfigPreferences_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyConfigPreferences_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyConfigPreferences_rna_properties_get(iter);
    }
}

void KeyConfigPreferences_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyConfigPreferences_rna_properties_get(iter);
    }
}

void KeyConfigPreferences_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyConfigPreferences_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyConfigPreferences_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void KeyConfigPreferences_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmKeyConfigPref *data = (wmKeyConfigPref *)(ptr->data);
    BLI_assert(strlen(data->idname) < 64);
    strcpy(value, data->idname);
}

int KeyConfigPreferences_bl_idname_length(PointerRNA *ptr)
{
    wmKeyConfigPref *data = (wmKeyConfigPref *)(ptr->data);
    return strlen(data->idname);
}

void KeyConfigPreferences_bl_idname_set(PointerRNA *ptr, const char *value)
{
    wmKeyConfigPref *data = (wmKeyConfigPref *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, 64);
}

static PointerRNA KeyConfig_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyConfig_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyConfig_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyConfig_rna_properties_get(iter);
    }
}

void KeyConfig_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyConfig_rna_properties_get(iter);
    }
}

void KeyConfig_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyConfig_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyConfig_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void KeyConfig_name_get(PointerRNA *ptr, char *value)
{
    wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
    BLI_assert(strlen(data->idname) < 64);
    strcpy(value, data->idname);
}

int KeyConfig_name_length(PointerRNA *ptr)
{
    wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
    return strlen(data->idname);
}

void KeyConfig_name_set(PointerRNA *ptr, const char *value)
{
    wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, 64);
}

static PointerRNA KeyConfig_keymaps_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_KeyMap, rna_iterator_listbase_get(iter));
}

void KeyConfig_keymaps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    wmKeyConfig *data = (wmKeyConfig *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyConfig_keymaps;

    rna_iterator_listbase_begin(iter, ptr, &data->keymaps, nullptr);

    if (iter->valid) {
        iter->ptr = KeyConfig_keymaps_get(iter);
    }
}

void KeyConfig_keymaps_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyConfig_keymaps_get(iter);
    }
}

void KeyConfig_keymaps_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyConfig_keymaps_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    KeyConfig_keymaps_begin(&iter, ptr);

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
        if (found) { *r_ptr = KeyConfig_keymaps_get(&iter); }
    }

    KeyConfig_keymaps_end(&iter);

    return found;
}

int KeyMap_name_length(PointerRNA *);
void KeyMap_name_get(PointerRNA *, char *);

bool KeyConfig_keymaps_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    KeyConfig_keymaps_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = KeyMap_name_length(&iter.ptr);
            if (namelen < 1024) {
                KeyMap_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                KeyMap_name_get(&iter.ptr, name);
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
        KeyConfig_keymaps_next(&iter);
    }
    KeyConfig_keymaps_end(&iter);

    return found;
}

bool KeyConfig_is_user_defined_get(PointerRNA *ptr)
{
    wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

PointerRNA KeyConfig_preferences_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_wmKeyConfig_preferences_get;
    return fn(ptr);
}

static PointerRNA KeyMaps_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyMaps_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyMaps_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyMaps_rna_properties_get(iter);
    }
}

void KeyMaps_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyMaps_rna_properties_get(iter);
    }
}

void KeyMaps_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyMaps_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyMaps_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA KeyMap_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyMap_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyMap_rna_properties_get(iter);
    }
}

void KeyMap_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyMap_rna_properties_get(iter);
    }
}

void KeyMap_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyMap_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void KeyMap_name_get(PointerRNA *ptr, char *value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    BLI_assert(strlen(data->idname) < 64);
    strcpy(value, data->idname);
}

int KeyMap_name_length(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return strlen(data->idname);
}

void KeyMap_bl_owner_id_get(PointerRNA *ptr, char *value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    BLI_assert(strlen(data->owner_id) < 128);
    strcpy(value, data->owner_id);
}

int KeyMap_bl_owner_id_length(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return strlen(data->owner_id);
}

void KeyMap_bl_owner_id_set(PointerRNA *ptr, const char *value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    BLI_strncpy_utf8(data->owner_id, value, 128);
}

int KeyMap_space_type_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return (int)(data->spaceid);
}

int KeyMap_region_type_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return (int)(data->regionid);
}

static PointerRNA KeyMap_keymap_items_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_KeyMapItem, rna_iterator_listbase_get(iter));
}

void KeyMap_keymap_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyMap_keymap_items;

    rna_iterator_listbase_begin(iter, ptr, &data->items, nullptr);

    if (iter->valid) {
        iter->ptr = KeyMap_keymap_items_get(iter);
    }
}

void KeyMap_keymap_items_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyMap_keymap_items_get(iter);
    }
}

void KeyMap_keymap_items_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyMap_keymap_items_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    KeyMap_keymap_items_begin(&iter, ptr);

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
        if (found) { *r_ptr = KeyMap_keymap_items_get(&iter); }
    }

    KeyMap_keymap_items_end(&iter);

    return found;
}

int KeyMapItem_idname_length(PointerRNA *);
void KeyMapItem_idname_get(PointerRNA *, char *);

bool KeyMap_keymap_items_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    KeyMap_keymap_items_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = KeyMapItem_idname_length(&iter.ptr);
            if (namelen < 1024) {
                KeyMapItem_idname_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                KeyMapItem_idname_get(&iter.ptr, name);
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
        KeyMap_keymap_items_next(&iter);
    }
    KeyMap_keymap_items_end(&iter);

    return found;
}

bool KeyMap_is_user_modified_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void KeyMap_is_user_modified_set(PointerRNA *ptr, bool value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool KeyMap_is_modal_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

bool KeyMap_show_expanded_items_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void KeyMap_show_expanded_items_set(PointerRNA *ptr, bool value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool KeyMap_show_expanded_children_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void KeyMap_show_expanded_children_set(PointerRNA *ptr, bool value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

static PointerRNA KeyMap_modal_event_values_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

void KeyMap_modal_event_values_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyMap_modal_event_values;

    PropCollectionBeginFunc fn = rna_KeyMap_modal_event_values_items_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyMap_modal_event_values_get(iter);
    }
}

void KeyMap_modal_event_values_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyMap_modal_event_values_get(iter);
    }
}

void KeyMap_modal_event_values_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool KeyMap_modal_event_values_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    KeyMap_modal_event_values_begin(&iter, ptr);

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
        if (found) { *r_ptr = KeyMap_modal_event_values_get(&iter); }
    }

    KeyMap_modal_event_values_end(&iter);

    return found;
}

static PointerRNA KeyMapItems_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyMapItems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyMapItems_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyMapItems_rna_properties_get(iter);
    }
}

void KeyMapItems_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyMapItems_rna_properties_get(iter);
    }
}

void KeyMapItems_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyMapItems_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyMapItems_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA KeyMapItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyMapItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyMapItem_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyMapItem_rna_properties_get(iter);
    }
}

void KeyMapItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyMapItem_rna_properties_get(iter);
    }
}

void KeyMapItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyMapItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyMapItem_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void KeyMapItem_idname_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_wmKeyMapItem_idname_get;
    fn(ptr, value);
}

int KeyMapItem_idname_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_wmKeyMapItem_idname_length;
    return fn(ptr);
}

void KeyMapItem_idname_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_wmKeyMapItem_idname_set;
    fn(ptr, value);
}

void KeyMapItem_idname_search(const bContext *C, PointerRNA *ptr, PropertyRNA *prop, const char *edit_text, FunctionRef<void(StringPropertySearchVisitParams)> visit_fn)
{

    StringPropertySearchFunc fn = WM_operatortype_idname_visit_for_search;

    fn(C, ptr, prop, edit_text, visit_fn);
}

void KeyMapItem_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_wmKeyMapItem_name_get;
    fn(ptr, value);
}

int KeyMapItem_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_wmKeyMapItem_name_length;
    return fn(ptr);
}

PointerRNA KeyMapItem_properties_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_KeyMapItem_properties_get;
    return fn(ptr);
}

int KeyMapItem_map_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_wmKeyMapItem_map_type_get;
    return fn(ptr);
}

void KeyMapItem_map_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_wmKeyMapItem_map_type_set;
    fn(ptr, value);
}

int KeyMapItem_type_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->type);
}

void KeyMapItem_type_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

int KeyMapItem_value_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->val);
}

void KeyMapItem_value_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->val = (std::remove_reference_t<decltype(data->val)>)value;
}

int KeyMapItem_direction_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->direction);
}

void KeyMapItem_direction_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->direction = (std::remove_reference_t<decltype(data->direction)>)value;
}

int KeyMapItem_id_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->id);
}

bool KeyMapItem_any_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_any_get;
    return fn(ptr);
}

void KeyMapItem_any_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_KeyMapItem_any_set;
    fn(ptr, value);
}

int KeyMapItem_shift_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->shift);
}

void KeyMapItem_shift_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->shift = (std::remove_reference_t<decltype(data->shift)>)std::clamp(value, -1, 1);
}

int KeyMapItem_ctrl_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->ctrl);
}

void KeyMapItem_ctrl_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->ctrl = (std::remove_reference_t<decltype(data->ctrl)>)std::clamp(value, -1, 1);
}

int KeyMapItem_alt_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->alt);
}

void KeyMapItem_alt_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->alt = (std::remove_reference_t<decltype(data->alt)>)std::clamp(value, -1, 1);
}

int KeyMapItem_oskey_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->oskey);
}

void KeyMapItem_oskey_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->oskey = (std::remove_reference_t<decltype(data->oskey)>)std::clamp(value, -1, 1);
}

int KeyMapItem_hyper_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->hyper);
}

void KeyMapItem_hyper_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->hyper = (std::remove_reference_t<decltype(data->hyper)>)std::clamp(value, -1, 1);
}

bool KeyMapItem_shift_ui_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_shift_get;
    return fn(ptr);
}

void KeyMapItem_shift_ui_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->shift = (std::remove_reference_t<decltype(data->shift)>)value;
}

bool KeyMapItem_ctrl_ui_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_ctrl_get;
    return fn(ptr);
}

void KeyMapItem_ctrl_ui_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->ctrl = (std::remove_reference_t<decltype(data->ctrl)>)value;
}

bool KeyMapItem_alt_ui_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_alt_get;
    return fn(ptr);
}

void KeyMapItem_alt_ui_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->alt = (std::remove_reference_t<decltype(data->alt)>)value;
}

bool KeyMapItem_oskey_ui_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_oskey_get;
    return fn(ptr);
}

void KeyMapItem_oskey_ui_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->oskey = (std::remove_reference_t<decltype(data->oskey)>)value;
}

bool KeyMapItem_hyper_ui_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_hyper_get;
    return fn(ptr);
}

void KeyMapItem_hyper_ui_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->hyper = (std::remove_reference_t<decltype(data->hyper)>)value;
}

int KeyMapItem_key_modifier_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->keymodifier);
}

void KeyMapItem_key_modifier_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_wmKeyMapItem_keymodifier_set;
    fn(ptr, value);
}

bool KeyMapItem_repeat_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return !((uint64_t(data->flag) & 16) != 0);
}

void KeyMapItem_repeat_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool KeyMapItem_show_expanded_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void KeyMapItem_show_expanded_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

int KeyMapItem_propvalue_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->propvalue);
}

void KeyMapItem_propvalue_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    data->propvalue = (std::remove_reference_t<decltype(data->propvalue)>)value;
}

bool KeyMapItem_active_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void KeyMapItem_active_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool KeyMapItem_is_user_modified_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

bool KeyMapItem_is_user_defined_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_userdefined_get;
    return fn(ptr);
}

void Operator_report_func(wmOperator *_self, int type, const char * message)
{
	rna_Operator_report(_self, type, message);
}

static void Operator_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmOperator *_self;
	int type;
	const char * message;
	char *_data;
	
	_self = (wmOperator *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	message = *((const char * *)_data);
	
	rna_Operator_report(_self, type, message);
}

bool Operator_is_repeat_func(wmOperator *_self, bContext *C)
{
	return rna_Operator_is_repeat(_self, C);
}

static void Operator_is_repeat_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmOperator *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (wmOperator *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = rna_Operator_is_repeat(_self, C);
	*((bool *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

void rna_Operator_report(wmOperator *_self, int type, const char * message);
bool rna_Operator_is_repeat(wmOperator *_self, bContext *C);

IDPropertyGroup *OperatorProperties_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void OperatorProperties_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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




void Macro_report_func(wmOperator *_self, int type, const char * message)
{
	rna_Operator_report(_self, type, message);
}

static void Macro_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmOperator *_self;
	int type;
	const char * message;
	char *_data;
	
	_self = (wmOperator *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	message = *((const char * *)_data);
	
	rna_Operator_report(_self, type, message);
}

/* Repeated prototypes to detect errors */

void rna_Operator_report(wmOperator *_self, int type, const char * message);








void Window_cursor_warp_func(wmWindow *_self, int x, int y)
{
	WM_cursor_warp(_self, x, y);
}

static void Window_cursor_warp_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindow *_self;
	int x;
	int y;
	char *_data;
	
	_self = (wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	
	WM_cursor_warp(_self, x, y);
}

void Window_cursor_set_func(wmWindow *_self, int cursor)
{
	WM_cursor_set(_self, cursor);
}

static void Window_cursor_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindow *_self;
	int cursor;
	char *_data;
	
	_self = (wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	cursor = *((int *)_data);
	
	WM_cursor_set(_self, cursor);
}

void Window_cursor_modal_set_func(wmWindow *_self, int cursor)
{
	WM_cursor_modal_set(_self, cursor);
}

static void Window_cursor_modal_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindow *_self;
	int cursor;
	char *_data;
	
	_self = (wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	cursor = *((int *)_data);
	
	WM_cursor_modal_set(_self, cursor);
}

void Window_cursor_modal_restore_func(wmWindow *_self)
{
	WM_cursor_modal_restore(_self);
}

static void Window_cursor_modal_restore_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindow *_self;
	_self = (wmWindow *)_ptr->data;
	
	WM_cursor_modal_restore(_self);
}

wmEvent *Window_event_simulate_func(wmWindow *_self, ReportList *reports, int type, int value, const char * unicode, int x, int y, bool shift, bool ctrl, bool alt, bool oskey, bool hyper)
{
	return rna_Window_event_add_simulate(_self, reports, type, value, unicode, x, y, shift, ctrl, alt, oskey, hyper);
}

static void Window_event_simulate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindow *_self;
	int type;
	int value;
	const char * unicode;
	int x;
	int y;
	bool shift;
	bool ctrl;
	bool alt;
	bool oskey;
	bool hyper;
	wmEvent *event;
	char *_data, *_retdata;
	
	_self = (wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	value = *((int *)_data);
	_data += 8;
	unicode = *((const char * *)_data);
	_data += 8;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	_data += 8;
	shift = *((bool *)_data);
	_data += 8;
	ctrl = *((bool *)_data);
	_data += 8;
	alt = *((bool *)_data);
	_data += 8;
	oskey = *((bool *)_data);
	_data += 8;
	hyper = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	event = rna_Window_event_add_simulate(_self, reports, type, value, unicode, x, y, shift, ctrl, alt, oskey, hyper);
	*((wmEvent **)_retdata) = event;
}

Scene *Window_find_playing_scene_func(wmWindow *_self, bool scrub)
{
	return rna_Window_find_playing_scene(_self, scrub);
}

static void Window_find_playing_scene_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindow *_self;
	bool scrub;
	Scene *scene;
	char *_data, *_retdata;
	
	_self = (wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	scrub = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	scene = rna_Window_find_playing_scene(_self, scrub);
	*((Scene **)_retdata) = scene;
}

/* Repeated prototypes to detect errors */

void WM_cursor_warp(wmWindow *_self, int x, int y);
void WM_cursor_set(wmWindow *_self, int cursor);
void WM_cursor_modal_set(wmWindow *_self, int cursor);
void WM_cursor_modal_restore(wmWindow *_self);
wmEvent *rna_Window_event_add_simulate(wmWindow *_self, ReportList *reports, int type, int value, const char * unicode, int x, int y, bool shift, bool ctrl, bool alt, bool oskey, bool hyper);
Scene *rna_Window_find_playing_scene(wmWindow *_self, bool scrub);



void WindowManager_fileselect_add_func(bContext *C, wmOperator *operator_value)
{
	WM_event_add_fileselect(C, operator_value);
}

static void WindowManager_fileselect_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmOperator *operator_value;
	char *_data;
	
	_data = (char *)_parms->data;
	operator_value = *((wmOperator **)_data);
	
	WM_event_add_fileselect(C, operator_value);
}

bool WindowManager_modal_handler_add_func(bContext *C, ReportList *reports, wmOperator *operator_value)
{
	return rna_event_modal_handler_add(C, reports, operator_value);
}

static void WindowManager_modal_handler_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmOperator *operator_value;
	bool handle;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((wmOperator **)_data);
	_data += 8;
	_retdata = _data;
	
	handle = rna_event_modal_handler_add(C, reports, operator_value);
	*((bool *)_retdata) = handle;
}

wmTimer *WindowManager_event_timer_add_func(wmWindowManager *_self, float time_step, wmWindow *window)
{
	return rna_event_timer_add(_self, time_step, window);
}

static void WindowManager_event_timer_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	float time_step;
	wmWindow *window;
	wmTimer *result;
	char *_data, *_retdata;
	
	_self = (wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	time_step = *((float *)_data);
	_data += 8;
	window = *((wmWindow **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_event_timer_add(_self, time_step, window);
	*((wmTimer **)_retdata) = result;
}

void WindowManager_event_timer_remove_func(wmWindowManager *_self, wmTimer *timer)
{
	rna_event_timer_remove(_self, timer);
}

static void WindowManager_event_timer_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	wmTimer *timer;
	char *_data;
	
	_self = (wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	timer = *((wmTimer **)_data);
	
	rna_event_timer_remove(_self, timer);
}

void WindowManager_gizmo_group_type_ensure_func(ReportList *reports, const char * identifier)
{
	rna_gizmo_group_type_ensure(reports, identifier);
}

static void WindowManager_gizmo_group_type_ensure_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * identifier;
	char *_data;
	
	_data = (char *)_parms->data;
	identifier = *((const char * *)_data);
	
	rna_gizmo_group_type_ensure(reports, identifier);
}

void WindowManager_gizmo_group_type_unlink_delayed_func(ReportList *reports, const char * identifier)
{
	rna_gizmo_group_type_unlink_delayed(reports, identifier);
}

static void WindowManager_gizmo_group_type_unlink_delayed_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * identifier;
	char *_data;
	
	_data = (char *)_parms->data;
	identifier = *((const char * *)_data);
	
	rna_gizmo_group_type_unlink_delayed(reports, identifier);
}

void WindowManager_progress_begin_func(wmWindowManager *_self, float min, float max)
{
	rna_progress_begin(_self, min, max);
}

static void WindowManager_progress_begin_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	float min;
	float max;
	char *_data;
	
	_self = (wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	min = *((float *)_data);
	_data += 8;
	max = *((float *)_data);
	
	rna_progress_begin(_self, min, max);
}

void WindowManager_progress_update_func(wmWindowManager *_self, float value)
{
	rna_progress_update(_self, value);
}

static void WindowManager_progress_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	float value;
	char *_data;
	
	_self = (wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((float *)_data);
	
	rna_progress_update(_self, value);
}

void WindowManager_progress_end_func(wmWindowManager *_self)
{
	rna_progress_end(_self);
}

static void WindowManager_progress_end_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	_self = (wmWindowManager *)_ptr->data;
	
	rna_progress_end(_self);
}

int WindowManager_invoke_props_popup_func(bContext *C, wmOperator *operator_value, wmEvent *event)
{
	return rna_Operator_props_popup(C, operator_value, event);
}

static void WindowManager_invoke_props_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmOperator *operator_value;
	wmEvent *event;
	int result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((wmOperator **)_data);
	_data += 8;
	event = *((wmEvent **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Operator_props_popup(C, operator_value, event);
	*((int *)_retdata) = result;
}

int WindowManager_invoke_props_dialog_func(bContext *C, wmOperator *operator_value, int width, const char * title, const char * confirm_text, bool cancel_default, const char * text_ctxt, bool translate)
{
	return rna_Operator_props_dialog_popup(C, operator_value, width, title, confirm_text, cancel_default, text_ctxt, translate);
}

static void WindowManager_invoke_props_dialog_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmOperator *operator_value;
	int width;
	int result;
	const char * title;
	const char * confirm_text;
	bool cancel_default;
	const char * text_ctxt;
	bool translate;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((wmOperator **)_data);
	_data += 8;
	width = *((int *)_data);
	_data += 8;
	_retdata = _data;
	_data += 8;
	title = *((const char * *)_data);
	_data += 8;
	confirm_text = *((const char * *)_data);
	_data += 8;
	cancel_default = *((bool *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	
	result = rna_Operator_props_dialog_popup(C, operator_value, width, title, confirm_text, cancel_default, text_ctxt, translate);
	*((int *)_retdata) = result;
}

void WindowManager_invoke_search_popup_func(bContext *C, wmOperator *operator_value)
{
	rna_Operator_enum_search_invoke(C, operator_value);
}

static void WindowManager_invoke_search_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmOperator *operator_value;
	char *_data;
	
	_data = (char *)_parms->data;
	operator_value = *((wmOperator **)_data);
	
	rna_Operator_enum_search_invoke(C, operator_value);
}

int WindowManager_invoke_popup_func(bContext *C, wmOperator *operator_value, int width)
{
	return rna_Operator_ui_popup(C, operator_value, width);
}

static void WindowManager_invoke_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmOperator *operator_value;
	int width;
	int result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((wmOperator **)_data);
	_data += 8;
	width = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Operator_ui_popup(C, operator_value, width);
	*((int *)_retdata) = result;
}

int WindowManager_invoke_confirm_func(bContext *C, wmOperator *operator_value, wmEvent *event, const char * title, const char * message, const char * confirm_text, int icon, const char * text_ctxt, bool translate)
{
	return rna_Operator_confirm(C, operator_value, event, title, message, confirm_text, icon, text_ctxt, translate);
}

static void WindowManager_invoke_confirm_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmOperator *operator_value;
	wmEvent *event;
	int result;
	const char * title;
	const char * message;
	const char * confirm_text;
	int icon;
	const char * text_ctxt;
	bool translate;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((wmOperator **)_data);
	_data += 8;
	event = *((wmEvent **)_data);
	_data += 8;
	_retdata = _data;
	_data += 8;
	title = *((const char * *)_data);
	_data += 8;
	message = *((const char * *)_data);
	_data += 8;
	confirm_text = *((const char * *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	
	result = rna_Operator_confirm(C, operator_value, event, title, message, confirm_text, icon, text_ctxt, translate);
	*((int *)_retdata) = result;
}

PointerRNA WindowManager_popmenu_begin__internal_func(bContext *C, ReportList *reports, const char * title, int icon)
{
	return rna_PopMenuBegin(C, reports, title, icon);
}

static void WindowManager_popmenu_begin__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * title;
	int icon;
	PointerRNA menu;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	title = *((const char * *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	menu = rna_PopMenuBegin(C, reports, title, icon);
	*reinterpret_cast<PointerRNA *>(_retdata) = menu;
}

void WindowManager_popmenu_end__internal_func(bContext *C, PointerRNA *menu)
{
	rna_PopMenuEnd(C, menu);
}

static void WindowManager_popmenu_end__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA *menu;
	char *_data;
	
	_data = (char *)_parms->data;
	menu = ((PointerRNA *)_data);
	
	rna_PopMenuEnd(C, menu);
}

PointerRNA WindowManager_popover_begin__internal_func(bContext *C, ReportList *reports, int ui_units_x, bool from_active_button)
{
	return rna_PopoverBegin(C, reports, ui_units_x, from_active_button);
}

static void WindowManager_popover_begin__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	int ui_units_x;
	PointerRNA menu;
	bool from_active_button;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	ui_units_x = *((int *)_data);
	_data += 8;
	_retdata = _data;
	_data += 88;
	from_active_button = *((bool *)_data);
	
	menu = rna_PopoverBegin(C, reports, ui_units_x, from_active_button);
	*reinterpret_cast<PointerRNA *>(_retdata) = menu;
}

void WindowManager_popover_end__internal_func(bContext *C, PointerRNA *menu, wmKeyMap *keymap)
{
	rna_PopoverEnd(C, menu, keymap);
}

static void WindowManager_popover_end__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA *menu;
	wmKeyMap *keymap;
	char *_data;
	
	_data = (char *)_parms->data;
	menu = ((PointerRNA *)_data);
	_data += 88;
	keymap = *((wmKeyMap **)_data);
	
	rna_PopoverEnd(C, menu, keymap);
}

PointerRNA WindowManager_piemenu_begin__internal_func(bContext *C, ReportList *reports, const char * title, int icon, PointerRNA *event)
{
	return rna_PieMenuBegin(C, reports, title, icon, event);
}

static void WindowManager_piemenu_begin__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * title;
	int icon;
	PointerRNA *event;
	PointerRNA menu_pie;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	title = *((const char * *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	event = ((PointerRNA *)_data);
	_data += 88;
	_retdata = _data;
	
	menu_pie = rna_PieMenuBegin(C, reports, title, icon, event);
	*reinterpret_cast<PointerRNA *>(_retdata) = menu_pie;
}

void WindowManager_piemenu_end__internal_func(bContext *C, PointerRNA *menu)
{
	rna_PieMenuEnd(C, menu);
}

static void WindowManager_piemenu_end__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA *menu;
	char *_data;
	
	_data = (char *)_parms->data;
	menu = ((PointerRNA *)_data);
	
	rna_PieMenuEnd(C, menu);
}

PointerRNA WindowManager_operator_properties_last_func(const char * operator_value)
{
	return rna_WindoManager_operator_properties_last(operator_value);
}

static void WindowManager_operator_properties_last_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * operator_value;
	PointerRNA result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WindoManager_operator_properties_last(operator_value);
	*reinterpret_cast<PointerRNA *>(_retdata) = result;
}

void WindowManager_print_undo_steps_func(wmWindowManager *_self)
{
	rna_WindowManager_print_undo_steps(_self);
}

static void WindowManager_print_undo_steps_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	_self = (wmWindowManager *)_ptr->data;
	
	rna_WindowManager_print_undo_steps(_self);
}

void WindowManager_tag_script_reload_func(void)
{
	rna_WindowManager_tag_script_reload();
}

static void WindowManager_tag_script_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	
	rna_WindowManager_tag_script_reload();
}

void WindowManager_asset_library_status_begin_loading_func(const char * library_url, float timeout)
{
	rna_asset_library_status_begin_loading(library_url, timeout);
}

static void WindowManager_asset_library_status_begin_loading_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * library_url;
	float timeout;
	char *_data;
	
	_data = (char *)_parms->data;
	library_url = *((const char * *)_data);
	_data += 8;
	timeout = *((float *)_data);
	
	rna_asset_library_status_begin_loading(library_url, timeout);
}

void WindowManager_asset_library_status_ping_still_loading_func(const char * library_url)
{
	rna_asset_library_status_ping_still_loading(library_url);
}

static void WindowManager_asset_library_status_ping_still_loading_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * library_url;
	char *_data;
	
	_data = (char *)_parms->data;
	library_url = *((const char * *)_data);
	
	rna_asset_library_status_ping_still_loading(library_url);
}

void WindowManager_asset_library_status_ping_metafiles_in_place_func(const char * library_url)
{
	rna_asset_library_status_ping_metafiles_in_place(library_url);
}

static void WindowManager_asset_library_status_ping_metafiles_in_place_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * library_url;
	char *_data;
	
	_data = (char *)_parms->data;
	library_url = *((const char * *)_data);
	
	rna_asset_library_status_ping_metafiles_in_place(library_url);
}

void WindowManager_asset_library_status_ping_loaded_new_pages_func(const char * library_url)
{
	rna_asset_library_status_ping_loaded_new_pages(library_url);
}

static void WindowManager_asset_library_status_ping_loaded_new_pages_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * library_url;
	char *_data;
	
	_data = (char *)_parms->data;
	library_url = *((const char * *)_data);
	
	rna_asset_library_status_ping_loaded_new_pages(library_url);
}

void WindowManager_asset_library_status_ping_loaded_new_preview_func(bContext *C, const char * preview_full_path)
{
	rna_asset_library_status_ping_loaded_new_preview(C, preview_full_path);
}

static void WindowManager_asset_library_status_ping_loaded_new_preview_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * preview_full_path;
	char *_data;
	
	_data = (char *)_parms->data;
	preview_full_path = *((const char * *)_data);
	
	rna_asset_library_status_ping_loaded_new_preview(C, preview_full_path);
}

void WindowManager_asset_library_status_ping_asset_file_progress_func(const char * absolute_file_url, int size_written)
{
	rna_asset_library_status_ping_asset_file_progress(absolute_file_url, size_written);
}

static void WindowManager_asset_library_status_ping_asset_file_progress_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * absolute_file_url;
	int size_written;
	char *_data;
	
	_data = (char *)_parms->data;
	absolute_file_url = *((const char * *)_data);
	_data += 8;
	size_written = *((int *)_data);
	
	rna_asset_library_status_ping_asset_file_progress(absolute_file_url, size_written);
}

void WindowManager_asset_library_status_ping_asset_file_succeeded_func(bContext *C, const char * library_url, const char * absolute_file_url, const char * local_file_abspath)
{
	rna_asset_library_status_ping_asset_file_succeeded(C, library_url, absolute_file_url, local_file_abspath);
}

static void WindowManager_asset_library_status_ping_asset_file_succeeded_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * library_url;
	const char * absolute_file_url;
	const char * local_file_abspath;
	char *_data;
	
	_data = (char *)_parms->data;
	library_url = *((const char * *)_data);
	_data += 8;
	absolute_file_url = *((const char * *)_data);
	_data += 8;
	local_file_abspath = *((const char * *)_data);
	
	rna_asset_library_status_ping_asset_file_succeeded(C, library_url, absolute_file_url, local_file_abspath);
}

void WindowManager_asset_library_status_ping_asset_file_failed_func(bContext *C, const char * library_url, const char * absolute_file_url, const char * local_file_abspath)
{
	rna_asset_library_status_ping_asset_file_failed(C, library_url, absolute_file_url, local_file_abspath);
}

static void WindowManager_asset_library_status_ping_asset_file_failed_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * library_url;
	const char * absolute_file_url;
	const char * local_file_abspath;
	char *_data;
	
	_data = (char *)_parms->data;
	library_url = *((const char * *)_data);
	_data += 8;
	absolute_file_url = *((const char * *)_data);
	_data += 8;
	local_file_abspath = *((const char * *)_data);
	
	rna_asset_library_status_ping_asset_file_failed(C, library_url, absolute_file_url, local_file_abspath);
}

void WindowManager_asset_library_status_ping_finished_download_queue_func(bContext *C)
{
	rna_asset_library_status_ping_finished_download_queue(C);
}

static void WindowManager_asset_library_status_ping_finished_download_queue_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	
	rna_asset_library_status_ping_finished_download_queue(C);
}

void WindowManager_asset_library_status_finished_loading_func(const char * library_url)
{
	rna_asset_library_status_finished_loading(library_url);
}

static void WindowManager_asset_library_status_finished_loading_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * library_url;
	char *_data;
	
	_data = (char *)_parms->data;
	library_url = *((const char * *)_data);
	
	rna_asset_library_status_finished_loading(library_url);
}

void WindowManager_asset_library_status_failed_loading_func(const char * library_url, const char * message)
{
	rna_asset_library_status_failed_loading(library_url, message);
}

static void WindowManager_asset_library_status_failed_loading_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * library_url;
	const char * message;
	char *_data;
	
	_data = (char *)_parms->data;
	library_url = *((const char * *)_data);
	_data += 8;
	message = *((const char * *)_data);
	
	rna_asset_library_status_failed_loading(library_url, message);
}

void WindowManager_register_node_group_operators_func(bContext *C)
{
	rna_register_node_group_operators(C);
}

static void WindowManager_register_node_group_operators_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	
	rna_register_node_group_operators(C);
}

/* Repeated prototypes to detect errors */

void WM_event_add_fileselect(bContext *C, wmOperator *operator_value);
bool rna_event_modal_handler_add(bContext *C, ReportList *reports, wmOperator *operator_value);
wmTimer *rna_event_timer_add(wmWindowManager *_self, float time_step, wmWindow *window);
void rna_event_timer_remove(wmWindowManager *_self, wmTimer *timer);
void rna_gizmo_group_type_ensure(ReportList *reports, const char * identifier);
void rna_gizmo_group_type_unlink_delayed(ReportList *reports, const char * identifier);
void rna_progress_begin(wmWindowManager *_self, float min, float max);
void rna_progress_update(wmWindowManager *_self, float value);
void rna_progress_end(wmWindowManager *_self);
int rna_Operator_props_popup(bContext *C, wmOperator *operator_value, wmEvent *event);
int rna_Operator_props_dialog_popup(bContext *C, wmOperator *operator_value, int width, const char * title, const char * confirm_text, bool cancel_default, const char * text_ctxt, bool translate);
void rna_Operator_enum_search_invoke(bContext *C, wmOperator *operator_value);
int rna_Operator_ui_popup(bContext *C, wmOperator *operator_value, int width);
int rna_Operator_confirm(bContext *C, wmOperator *operator_value, wmEvent *event, const char * title, const char * message, const char * confirm_text, int icon, const char * text_ctxt, bool translate);
PointerRNA rna_PopMenuBegin(bContext *C, ReportList *reports, const char * title, int icon);
void rna_PopMenuEnd(bContext *C, PointerRNA *menu);
PointerRNA rna_PopoverBegin(bContext *C, ReportList *reports, int ui_units_x, bool from_active_button);
void rna_PopoverEnd(bContext *C, PointerRNA *menu, wmKeyMap *keymap);
PointerRNA rna_PieMenuBegin(bContext *C, ReportList *reports, const char * title, int icon, PointerRNA *event);
void rna_PieMenuEnd(bContext *C, PointerRNA *menu);
PointerRNA rna_WindoManager_operator_properties_last(const char * operator_value);
void rna_WindowManager_print_undo_steps(wmWindowManager *_self);
void rna_WindowManager_tag_script_reload(void);
void rna_asset_library_status_begin_loading(const char * library_url, float timeout);
void rna_asset_library_status_ping_still_loading(const char * library_url);
void rna_asset_library_status_ping_metafiles_in_place(const char * library_url);
void rna_asset_library_status_ping_loaded_new_pages(const char * library_url);
void rna_asset_library_status_ping_loaded_new_preview(bContext *C, const char * preview_full_path);
void rna_asset_library_status_ping_asset_file_progress(const char * absolute_file_url, int size_written);
void rna_asset_library_status_ping_asset_file_succeeded(bContext *C, const char * library_url, const char * absolute_file_url, const char * local_file_abspath);
void rna_asset_library_status_ping_asset_file_failed(bContext *C, const char * library_url, const char * absolute_file_url, const char * local_file_abspath);
void rna_asset_library_status_ping_finished_download_queue(bContext *C);
void rna_asset_library_status_finished_loading(const char * library_url);
void rna_asset_library_status_failed_loading(const char * library_url, const char * message);
void rna_register_node_group_operators(bContext *C);

wmWindow *Windows_find_playing_func(wmWindowManager *_self, bool scrub)
{
	return rna_Windows_find_playing(_self, scrub);
}

static void Windows_find_playing_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	bool scrub;
	wmWindow *window;
	char *_data, *_retdata;
	
	_self = (wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	scrub = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	window = rna_Windows_find_playing(_self, scrub);
	*((wmWindow **)_retdata) = window;
}

/* Repeated prototypes to detect errors */

wmWindow *rna_Windows_find_playing(wmWindowManager *_self, bool scrub);

wmKeyConfig *KeyConfigurations_new_func(wmWindowManager *_self, const char * name)
{
	return rna_KeyConfig_new(_self, name);
}

static void KeyConfigurations_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	const char * name;
	wmKeyConfig *keyconfig;
	char *_data, *_retdata;
	
	_self = (wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	keyconfig = rna_KeyConfig_new(_self, name);
	*((wmKeyConfig **)_retdata) = keyconfig;
}

void KeyConfigurations_remove_func(wmWindowManager *_self, ReportList *reports, PointerRNA *keyconfig)
{
	rna_KeyConfig_remove(_self, reports, keyconfig);
}

static void KeyConfigurations_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	PointerRNA *keyconfig;
	char *_data;
	
	_self = (wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	keyconfig = *((PointerRNA **)_data);
	
	rna_KeyConfig_remove(_self, reports, keyconfig);
}

PointerRNA KeyConfigurations_find_item_from_operator_func(wmWindowManager *_self, bContext *C, const char * idname, int context, PointerRNA *properties, int include, int exclude, PointerRNA *keymap)
{
	return rna_KeyConfig_find_item_from_operator(_self, C, idname, context, properties, include, exclude, keymap);
}

static void KeyConfigurations_find_item_from_operator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	const char * idname;
	int context;
	PointerRNA *properties;
	int include;
	int exclude;
	PointerRNA *keymap;
	PointerRNA item;
	char *_data, *_retdata;
	
	_self = (wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
	_data += 8;
	context = *((int *)_data);
	_data += 8;
	properties = ((PointerRNA *)_data);
	_data += 88;
	include = *((int *)_data);
	_data += 8;
	exclude = *((int *)_data);
	_data += 8;
	keymap = ((PointerRNA *)_data);
	_data += 88;
	_retdata = _data;
	
	item = rna_KeyConfig_find_item_from_operator(_self, C, idname, context, properties, include, exclude, keymap);
	*reinterpret_cast<PointerRNA *>(_retdata) = item;
}

void KeyConfigurations_update_func(wmWindowManager *_self, bool keep_properties)
{
	rna_KeyConfig_update(_self, keep_properties);
}

static void KeyConfigurations_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmWindowManager *_self;
	bool keep_properties;
	char *_data;
	
	_self = (wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	keep_properties = *((bool *)_data);
	
	rna_KeyConfig_update(_self, keep_properties);
}

/* Repeated prototypes to detect errors */

wmKeyConfig *rna_KeyConfig_new(wmWindowManager *_self, const char * name);
void rna_KeyConfig_remove(wmWindowManager *_self, ReportList *reports, PointerRNA *keyconfig);
PointerRNA rna_KeyConfig_find_item_from_operator(wmWindowManager *_self, bContext *C, const char * idname, int context, PointerRNA *properties, int include, int exclude, PointerRNA *keymap);
void rna_KeyConfig_update(wmWindowManager *_self, bool keep_properties);

IDPropertyGroup *KeyConfigPreferences_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void KeyConfigPreferences_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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


wmKeyMap *KeyMaps_new_func(wmKeyConfig *_self, ReportList *reports, const char * name, int space_type, int region_type, bool modal, bool tool)
{
	return rna_KeyMaps_new(_self, reports, name, space_type, region_type, modal, tool);
}

static void KeyMaps_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyConfig *_self;
	const char * name;
	int space_type;
	int region_type;
	bool modal;
	bool tool;
	wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	space_type = *((int *)_data);
	_data += 8;
	region_type = *((int *)_data);
	_data += 8;
	modal = *((bool *)_data);
	_data += 8;
	tool = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	keymap = rna_KeyMaps_new(_self, reports, name, space_type, region_type, modal, tool);
	*((wmKeyMap **)_retdata) = keymap;
}

void KeyMaps_remove_func(wmKeyConfig *_self, ReportList *reports, PointerRNA *keymap)
{
	rna_KeyMaps_remove(_self, reports, keymap);
}

static void KeyMaps_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyConfig *_self;
	PointerRNA *keymap;
	char *_data;
	
	_self = (wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	keymap = *((PointerRNA **)_data);
	
	rna_KeyMaps_remove(_self, reports, keymap);
}

void KeyMaps_clear_func(wmKeyConfig *_self)
{
	rna_KeyMaps_clear(_self);
}

static void KeyMaps_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyConfig *_self;
	_self = (wmKeyConfig *)_ptr->data;
	
	rna_KeyMaps_clear(_self);
}

wmKeyMap *KeyMaps_find_func(wmKeyConfig *_self, const char * name, int space_type, int region_type)
{
	return rna_KeyMaps_find(_self, name, space_type, region_type);
}

static void KeyMaps_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyConfig *_self;
	const char * name;
	int space_type;
	int region_type;
	wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	space_type = *((int *)_data);
	_data += 8;
	region_type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	keymap = rna_KeyMaps_find(_self, name, space_type, region_type);
	*((wmKeyMap **)_retdata) = keymap;
}

wmKeyMap *KeyMaps_find_match_func(wmKeyConfig *_self, wmKeyMap *keymap)
{
	return rna_KeyMaps_find_match(_self, keymap);
}

static void KeyMaps_find_match_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyConfig *_self;
	wmKeyMap *keymap;
	wmKeyMap *result;
	char *_data, *_retdata;
	
	_self = (wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	keymap = *((wmKeyMap **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_KeyMaps_find_match(_self, keymap);
	*((wmKeyMap **)_retdata) = result;
}

wmKeyMap *KeyMaps_find_modal_func(wmKeyConfig *_self, const char * name)
{
	return rna_KeyMaps_find_modal(_self, name);
}

static void KeyMaps_find_modal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyConfig *_self;
	const char * name;
	wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	keymap = rna_KeyMaps_find_modal(_self, name);
	*((wmKeyMap **)_retdata) = keymap;
}

/* Repeated prototypes to detect errors */

wmKeyMap *rna_KeyMaps_new(wmKeyConfig *_self, ReportList *reports, const char * name, int space_type, int region_type, bool modal, bool tool);
void rna_KeyMaps_remove(wmKeyConfig *_self, ReportList *reports, PointerRNA *keymap);
void rna_KeyMaps_clear(wmKeyConfig *_self);
wmKeyMap *rna_KeyMaps_find(wmKeyConfig *_self, const char * name, int space_type, int region_type);
wmKeyMap *rna_KeyMaps_find_match(wmKeyConfig *_self, wmKeyMap *keymap);
wmKeyMap *rna_KeyMaps_find_modal(wmKeyConfig *_self, const char * name);

wmKeyMap *KeyMap_active_func(wmKeyMap *_self, bContext *C)
{
	return rna_keymap_active(_self, C);
}

static void KeyMap_active_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyMap *_self;
	wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	keymap = rna_keymap_active(_self, C);
	*((wmKeyMap **)_retdata) = keymap;
}

void KeyMap_restore_to_default_func(wmKeyMap *_self, bContext *C)
{
	rna_keymap_restore_to_default(_self, C);
}

static void KeyMap_restore_to_default_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyMap *_self;
	_self = (wmKeyMap *)_ptr->data;
	
	rna_keymap_restore_to_default(_self, C);
}

void KeyMap_restore_item_to_default_func(wmKeyMap *_self, bContext *C, wmKeyMapItem *item)
{
	rna_keymap_restore_item_to_default(_self, C, item);
}

static void KeyMap_restore_item_to_default_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyMap *_self;
	wmKeyMapItem *item;
	char *_data;
	
	_self = (wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((wmKeyMapItem **)_data);
	
	rna_keymap_restore_item_to_default(_self, C, item);
}

/* Repeated prototypes to detect errors */

wmKeyMap *rna_keymap_active(wmKeyMap *_self, bContext *C);
void rna_keymap_restore_to_default(wmKeyMap *_self, bContext *C);
void rna_keymap_restore_item_to_default(wmKeyMap *_self, bContext *C, wmKeyMapItem *item);

wmKeyMapItem *KeyMapItems_new_func(wmKeyMap *_self, ReportList *reports, const char * idname, int type, int value, bool any, int shift, int ctrl, int alt, int oskey, int hyper, int key_modifier, int direction, bool repeat, bool head)
{
	return rna_KeyMap_item_new(_self, reports, idname, type, value, any, shift, ctrl, alt, oskey, hyper, key_modifier, direction, repeat, head);
}

static void KeyMapItems_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyMap *_self;
	const char * idname;
	int type;
	int value;
	bool any;
	int shift;
	int ctrl;
	int alt;
	int oskey;
	int hyper;
	int key_modifier;
	int direction;
	bool repeat;
	bool head;
	wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self = (wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	value = *((int *)_data);
	_data += 8;
	any = *((bool *)_data);
	_data += 8;
	shift = *((int *)_data);
	_data += 8;
	ctrl = *((int *)_data);
	_data += 8;
	alt = *((int *)_data);
	_data += 8;
	oskey = *((int *)_data);
	_data += 8;
	hyper = *((int *)_data);
	_data += 8;
	key_modifier = *((int *)_data);
	_data += 8;
	direction = *((int *)_data);
	_data += 8;
	repeat = *((bool *)_data);
	_data += 8;
	head = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_KeyMap_item_new(_self, reports, idname, type, value, any, shift, ctrl, alt, oskey, hyper, key_modifier, direction, repeat, head);
	*((wmKeyMapItem **)_retdata) = item;
}

wmKeyMapItem *KeyMapItems_new_modal_func(wmKeyMap *_self, ReportList *reports, const char * propvalue, int type, int value, bool any, int shift, int ctrl, int alt, int oskey, int hyper, int key_modifier, int direction, bool repeat)
{
	return rna_KeyMap_item_new_modal(_self, reports, propvalue, type, value, any, shift, ctrl, alt, oskey, hyper, key_modifier, direction, repeat);
}

static void KeyMapItems_new_modal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyMap *_self;
	const char * propvalue;
	int type;
	int value;
	bool any;
	int shift;
	int ctrl;
	int alt;
	int oskey;
	int hyper;
	int key_modifier;
	int direction;
	bool repeat;
	wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self = (wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	propvalue = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	value = *((int *)_data);
	_data += 8;
	any = *((bool *)_data);
	_data += 8;
	shift = *((int *)_data);
	_data += 8;
	ctrl = *((int *)_data);
	_data += 8;
	alt = *((int *)_data);
	_data += 8;
	oskey = *((int *)_data);
	_data += 8;
	hyper = *((int *)_data);
	_data += 8;
	key_modifier = *((int *)_data);
	_data += 8;
	direction = *((int *)_data);
	_data += 8;
	repeat = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_KeyMap_item_new_modal(_self, reports, propvalue, type, value, any, shift, ctrl, alt, oskey, hyper, key_modifier, direction, repeat);
	*((wmKeyMapItem **)_retdata) = item;
}

wmKeyMapItem *KeyMapItems_new_from_item_func(wmKeyMap *_self, ReportList *reports, wmKeyMapItem *item, bool head)
{
	return rna_KeyMap_item_new_from_item(_self, reports, item, head);
}

static void KeyMapItems_new_from_item_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyMap *_self;
	wmKeyMapItem *item;
	bool head;
	wmKeyMapItem *result;
	char *_data, *_retdata;
	
	_self = (wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((wmKeyMapItem **)_data);
	_data += 8;
	head = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_KeyMap_item_new_from_item(_self, reports, item, head);
	*((wmKeyMapItem **)_retdata) = result;
}

void KeyMapItems_remove_func(wmKeyMap *_self, ReportList *reports, PointerRNA *item)
{
	rna_KeyMap_item_remove(_self, reports, item);
}

static void KeyMapItems_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyMap *_self;
	PointerRNA *item;
	char *_data;
	
	_self = (wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((PointerRNA **)_data);
	
	rna_KeyMap_item_remove(_self, reports, item);
}

wmKeyMapItem *KeyMapItems_from_id_func(wmKeyMap *_self, int id)
{
	return WM_keymap_item_find_id(_self, id);
}

static void KeyMapItems_from_id_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyMap *_self;
	int id;
	wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self = (wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	id = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	item = WM_keymap_item_find_id(_self, id);
	*((wmKeyMapItem **)_retdata) = item;
}

PointerRNA KeyMapItems_find_from_operator_func(ID *_selfid, wmKeyMap *_self, const char * idname, PointerRNA *properties, int include, int exclude)
{
	return rna_KeyMap_item_find_from_operator(_selfid, _self, idname, properties, include, exclude);
}

static void KeyMapItems_find_from_operator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	wmKeyMap *_self;
	const char * idname;
	PointerRNA *properties;
	int include;
	int exclude;
	PointerRNA item;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
	_data += 8;
	properties = ((PointerRNA *)_data);
	_data += 88;
	include = *((int *)_data);
	_data += 8;
	exclude = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_KeyMap_item_find_from_operator(_selfid, _self, idname, properties, include, exclude);
	*reinterpret_cast<PointerRNA *>(_retdata) = item;
}

PointerRNA KeyMapItems_find_match_func(ID *_selfid, wmKeyMap *_self, ReportList *reports, wmKeyMap *keymap, wmKeyMapItem *item)
{
	return rna_KeyMap_item_find_match(_selfid, _self, reports, keymap, item);
}

static void KeyMapItems_find_match_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	wmKeyMap *_self;
	wmKeyMap *keymap;
	wmKeyMapItem *item;
	PointerRNA result;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	keymap = *((wmKeyMap **)_data);
	_data += 8;
	item = *((wmKeyMapItem **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_KeyMap_item_find_match(_selfid, _self, reports, keymap, item);
	*reinterpret_cast<PointerRNA *>(_retdata) = result;
}

PointerRNA KeyMapItems_match_event_func(ID *_selfid, wmKeyMap *_self, bContext *C, wmEvent *event)
{
	return rna_KeyMap_item_match_event(_selfid, _self, C, event);
}

static void KeyMapItems_match_event_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	wmKeyMap *_self;
	wmEvent *event;
	PointerRNA item;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	event = *((wmEvent **)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_KeyMap_item_match_event(_selfid, _self, C, event);
	*reinterpret_cast<PointerRNA *>(_retdata) = item;
}

/* Repeated prototypes to detect errors */

wmKeyMapItem *rna_KeyMap_item_new(wmKeyMap *_self, ReportList *reports, const char * idname, int type, int value, bool any, int shift, int ctrl, int alt, int oskey, int hyper, int key_modifier, int direction, bool repeat, bool head);
wmKeyMapItem *rna_KeyMap_item_new_modal(wmKeyMap *_self, ReportList *reports, const char * propvalue, int type, int value, bool any, int shift, int ctrl, int alt, int oskey, int hyper, int key_modifier, int direction, bool repeat);
wmKeyMapItem *rna_KeyMap_item_new_from_item(wmKeyMap *_self, ReportList *reports, wmKeyMapItem *item, bool head);
void rna_KeyMap_item_remove(wmKeyMap *_self, ReportList *reports, PointerRNA *item);
wmKeyMapItem *WM_keymap_item_find_id(wmKeyMap *_self, int id);
PointerRNA rna_KeyMap_item_find_from_operator(ID *_selfid, wmKeyMap *_self, const char * idname, PointerRNA *properties, int include, int exclude);
PointerRNA rna_KeyMap_item_find_match(ID *_selfid, wmKeyMap *_self, ReportList *reports, wmKeyMap *keymap, wmKeyMapItem *item);
PointerRNA rna_KeyMap_item_match_event(ID *_selfid, wmKeyMap *_self, bContext *C, wmEvent *event);

bool KeyMapItem_compare_func(wmKeyMapItem *_self, wmKeyMapItem *item)
{
	return rna_KeyMapItem_compare(_self, item);
}

static void KeyMapItem_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyMapItem *_self;
	wmKeyMapItem *item;
	bool result;
	char *_data, *_retdata;
	
	_self = (wmKeyMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((wmKeyMapItem **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_KeyMapItem_compare(_self, item);
	*((bool *)_retdata) = result;
}

void KeyMapItem_to_string_func(wmKeyMapItem *_self, bool compact, char * result)
{
	rna_KeyMapItem_to_string(_self, compact, result);
}

static void KeyMapItem_to_string_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmKeyMapItem *_self;
	bool compact;
	char * result;
	char *_data;
	
	_self = (wmKeyMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	compact = *((bool *)_data);
	_data += 8;
	result = ((char * )_data);
	
	rna_KeyMapItem_to_string(_self, compact, result);
}

/* Repeated prototypes to detect errors */

bool rna_KeyMapItem_compare(wmKeyMapItem *_self, wmKeyMapItem *item);
void rna_KeyMapItem_to_string(wmKeyMapItem *_self, bool compact, char * result);

/* Operator */
static CollectionPropertyRNA rna_Operator_rna_properties_;
PropertyRNA &rna_Operator_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Operator_rna_properties_);

static PointerPropertyRNA rna_Operator_rna_type_;
PropertyRNA &rna_Operator_rna_type = reinterpret_cast<PropertyRNA &>(rna_Operator_rna_type_);

static StringPropertyRNA rna_Operator_name_;
PropertyRNA &rna_Operator_name = reinterpret_cast<PropertyRNA &>(rna_Operator_name_);

static PointerPropertyRNA rna_Operator_properties_;
PropertyRNA &rna_Operator_properties = reinterpret_cast<PropertyRNA &>(rna_Operator_properties_);

static BoolPropertyRNA rna_Operator_has_reports_;
PropertyRNA &rna_Operator_has_reports = reinterpret_cast<PropertyRNA &>(rna_Operator_has_reports_);

static StringPropertyRNA rna_Operator_bl_idname_;
PropertyRNA &rna_Operator_bl_idname = reinterpret_cast<PropertyRNA &>(rna_Operator_bl_idname_);

static StringPropertyRNA rna_Operator_bl_label_;
PropertyRNA &rna_Operator_bl_label = reinterpret_cast<PropertyRNA &>(rna_Operator_bl_label_);

static StringPropertyRNA rna_Operator_bl_translation_context_;
PropertyRNA &rna_Operator_bl_translation_context = reinterpret_cast<PropertyRNA &>(rna_Operator_bl_translation_context_);

static StringPropertyRNA rna_Operator_bl_description_;
PropertyRNA &rna_Operator_bl_description = reinterpret_cast<PropertyRNA &>(rna_Operator_bl_description_);

static StringPropertyRNA rna_Operator_bl_undo_group_;
PropertyRNA &rna_Operator_bl_undo_group = reinterpret_cast<PropertyRNA &>(rna_Operator_bl_undo_group_);

static EnumPropertyRNA rna_Operator_bl_options_;
PropertyRNA &rna_Operator_bl_options = reinterpret_cast<PropertyRNA &>(rna_Operator_bl_options_);

static EnumPropertyRNA rna_Operator_bl_cursor_pending_;
PropertyRNA &rna_Operator_bl_cursor_pending = reinterpret_cast<PropertyRNA &>(rna_Operator_bl_cursor_pending_);

static PointerPropertyRNA rna_Operator_layout_;
PropertyRNA &rna_Operator_layout = reinterpret_cast<PropertyRNA &>(rna_Operator_layout_);

static PointerPropertyRNA rna_Operator_options_;
PropertyRNA &rna_Operator_options = reinterpret_cast<PropertyRNA &>(rna_Operator_options_);

static CollectionPropertyRNA rna_Operator_macros_;
PropertyRNA &rna_Operator_macros = reinterpret_cast<PropertyRNA &>(rna_Operator_macros_);

static EnumPropertyRNA rna_Operator_report_type_;
PropertyRNA &rna_Operator_report_type = reinterpret_cast<PropertyRNA &>(rna_Operator_report_type_);

static StringPropertyRNA rna_Operator_report_message_;
PropertyRNA &rna_Operator_report_message = reinterpret_cast<PropertyRNA &>(rna_Operator_report_message_);

FunctionRNA *rna_Operator_report_func;
static BoolPropertyRNA rna_Operator_is_repeat_result_;
PropertyRNA &rna_Operator_is_repeat_result = reinterpret_cast<PropertyRNA &>(rna_Operator_is_repeat_result_);

FunctionRNA *rna_Operator_is_repeat_func;
static BoolPropertyRNA rna_Operator_poll_visible_;
PropertyRNA &rna_Operator_poll_visible = reinterpret_cast<PropertyRNA &>(rna_Operator_poll_visible_);

static PointerPropertyRNA rna_Operator_poll_context_;
PropertyRNA &rna_Operator_poll_context = reinterpret_cast<PropertyRNA &>(rna_Operator_poll_context_);

FunctionRNA *rna_Operator_poll_func;
static PointerPropertyRNA rna_Operator_execute_context_;
PropertyRNA &rna_Operator_execute_context = reinterpret_cast<PropertyRNA &>(rna_Operator_execute_context_);

static EnumPropertyRNA rna_Operator_execute_result_;
PropertyRNA &rna_Operator_execute_result = reinterpret_cast<PropertyRNA &>(rna_Operator_execute_result_);

FunctionRNA *rna_Operator_execute_func;
static PointerPropertyRNA rna_Operator_check_context_;
PropertyRNA &rna_Operator_check_context = reinterpret_cast<PropertyRNA &>(rna_Operator_check_context_);

static BoolPropertyRNA rna_Operator_check_result_;
PropertyRNA &rna_Operator_check_result = reinterpret_cast<PropertyRNA &>(rna_Operator_check_result_);

FunctionRNA *rna_Operator_check_func;
static PointerPropertyRNA rna_Operator_invoke_context_;
PropertyRNA &rna_Operator_invoke_context = reinterpret_cast<PropertyRNA &>(rna_Operator_invoke_context_);

static PointerPropertyRNA rna_Operator_invoke_event_;
PropertyRNA &rna_Operator_invoke_event = reinterpret_cast<PropertyRNA &>(rna_Operator_invoke_event_);

static EnumPropertyRNA rna_Operator_invoke_result_;
PropertyRNA &rna_Operator_invoke_result = reinterpret_cast<PropertyRNA &>(rna_Operator_invoke_result_);

FunctionRNA *rna_Operator_invoke_func;
static PointerPropertyRNA rna_Operator_modal_context_;
PropertyRNA &rna_Operator_modal_context = reinterpret_cast<PropertyRNA &>(rna_Operator_modal_context_);

static PointerPropertyRNA rna_Operator_modal_event_;
PropertyRNA &rna_Operator_modal_event = reinterpret_cast<PropertyRNA &>(rna_Operator_modal_event_);

static EnumPropertyRNA rna_Operator_modal_result_;
PropertyRNA &rna_Operator_modal_result = reinterpret_cast<PropertyRNA &>(rna_Operator_modal_result_);

FunctionRNA *rna_Operator_modal_func;
static PointerPropertyRNA rna_Operator_draw_context_;
PropertyRNA &rna_Operator_draw_context = reinterpret_cast<PropertyRNA &>(rna_Operator_draw_context_);

FunctionRNA *rna_Operator_draw_func;
static PointerPropertyRNA rna_Operator_cancel_context_;
PropertyRNA &rna_Operator_cancel_context = reinterpret_cast<PropertyRNA &>(rna_Operator_cancel_context_);

FunctionRNA *rna_Operator_cancel_func;
static StringPropertyRNA rna_Operator_description_result_;
PropertyRNA &rna_Operator_description_result = reinterpret_cast<PropertyRNA &>(rna_Operator_description_result_);

static PointerPropertyRNA rna_Operator_description_context_;
PropertyRNA &rna_Operator_description_context = reinterpret_cast<PropertyRNA &>(rna_Operator_description_context_);

static PointerPropertyRNA rna_Operator_description_properties_;
PropertyRNA &rna_Operator_description_properties = reinterpret_cast<PropertyRNA &>(rna_Operator_description_properties_);

FunctionRNA *rna_Operator_description_func;
StructRNA *RNA_Operator;
void register_struct_Operator(BlenderRNA &brna)
{
	rna_Operator_rna_properties_ = {
		{&rna_Operator_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_rna_properties_begin, Operator_rna_properties_next, Operator_rna_properties_end, Operator_rna_properties_get, nullptr, nullptr, Operator_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Operator_rna_type_ = {
		{&rna_Operator_name, 	&rna_Operator_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Operator_name_ = {
		{&rna_Operator_properties, 	&rna_Operator_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_name_get, Operator_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Operator_properties_ = {
		{&rna_Operator_has_reports, 	&rna_Operator_name,
		-1, "properties", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Properties",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_properties_get, nullptr, nullptr, nullptr,RNA_OperatorProperties
	};

	rna_Operator_has_reports_ = {
		{&rna_Operator_bl_idname, 	&rna_Operator_properties,
		-1, "has_reports", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Reports",
		"Operator has a set of reports (warnings and errors) from last execution",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_has_reports_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Operator_bl_idname_ = {
		{&rna_Operator_bl_label, 	&rna_Operator_has_reports,
		-1, "bl_idname", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_idname",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_bl_idname_get, Operator_bl_idname_length, Operator_bl_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Operator_bl_label_ = {
		{&rna_Operator_bl_translation_context, 	&rna_Operator_bl_idname,
		-1, "bl_label", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_label",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_bl_label_get, Operator_bl_label_length, Operator_bl_label_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Operator_bl_translation_context_ = {
		{&rna_Operator_bl_description, 	&rna_Operator_bl_label,
		-1, "bl_translation_context", 262193, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_translation_context",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_bl_translation_context_get, Operator_bl_translation_context_length, Operator_bl_translation_context_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "Operator"
	};

	rna_Operator_bl_description_ = {
		{&rna_Operator_bl_undo_group, 	&rna_Operator_bl_translation_context,
		-1, "bl_description", 262193, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_description",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_bl_description_get, Operator_bl_description_length, Operator_bl_description_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_Operator_bl_undo_group_ = {
		{&rna_Operator_bl_options, 	&rna_Operator_bl_description,
		-1, "bl_undo_group", 262193, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_undo_group",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_bl_undo_group_get, Operator_bl_undo_group_length, Operator_bl_undo_group_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Operator_bl_options_ = {
		{&rna_Operator_bl_cursor_pending, 	&rna_Operator_bl_undo_group,
		-1, "bl_options", 2097203, 0, 0, 0, 0, PropertyPathTemplateType(0), "Options",
		"Options for this operator type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_bl_options_get, Operator_bl_options_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_type_flag_items, 12, 0
	};

	rna_Operator_bl_cursor_pending_ = {
		{&rna_Operator_layout, 	&rna_Operator_bl_options,
		-1, "bl_cursor_pending", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Idle Cursor",
		"Cursor to use when waiting for the user to select a location to activate the operator (when ``bl_options`` has ``DEPENDS_ON_CURSOR`` set)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_bl_cursor_pending_get, Operator_bl_cursor_pending_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_window_cursor_items, 26, 1
	};

	rna_Operator_layout_ = {
		{&rna_Operator_options, 	&rna_Operator_bl_cursor_pending,
		-1, "layout", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "layout",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_layout_get, nullptr, nullptr, nullptr,RNA_UILayout
	};

	rna_Operator_options_ = {
		{&rna_Operator_macros, 	&rna_Operator_layout,
		-1, "options", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Options",
		"Runtime options",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_options_get, nullptr, nullptr, nullptr,RNA_OperatorOptions
	};

	rna_Operator_macros_ = {
		{nullptr, 	&rna_Operator_options,
		-1, "macros", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Macros",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Operator_macros_begin, Operator_macros_next, Operator_macros_end, Operator_macros_get, nullptr, Operator_macros_lookup_int, Operator_macros_lookup_string, nullptr, RNA_Macro
	};

	StructRNA *srna = RNA_Operator;
	srna->cont.properties = {&rna_Operator_rna_properties, &rna_Operator_macros};
	srna->identifier = "Operator";
	srna->flag = 1540;
	srna->name = "Operator";
	srna->description = "Storage of an operator being executed, or registered after execution";
	srna->translation_context = "Operator";
	srna->icon = 63;
	srna->nameproperty = &rna_Operator_bl_idname;
	srna->iteratorproperty = &rna_Operator_rna_properties;
	srna->refine = rna_Operator_refine;
	srna->reg = rna_Operator_register;
	srna->unreg = rna_Operator_unregister;
	srna->instance = rna_Operator_instance;
	{
	rna_Operator_report_type_ = {
		{&rna_Operator_report_message, 	nullptr,
		-1, "type", 2097155, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_wm_report_items, 9, 0
	};
	rna_Operator_report_message_ = {
		{nullptr, 	&rna_Operator_report_type,
		-1, "message", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Report Message",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Operator_report_type, &rna_Operator_report_message};
		func->identifier = "report";
		func->description = "report";
		func->call = Operator_report_call;
		rna_Operator_report_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Operator_is_repeat_result_ = {
		{nullptr, 	nullptr,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Operator_is_repeat_result, &rna_Operator_is_repeat_result};
		func->identifier = "is_repeat";
		func->flag = 8;
		func->description = "is_repeat";
		func->call = Operator_is_repeat_call;
		func->c_ret = &rna_Operator_is_repeat_result;
		rna_Operator_is_repeat_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Operator_poll_visible_ = {
		{&rna_Operator_poll_context, 	nullptr,
		-1, "visible", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Operator_poll_context_ = {
		{nullptr, 	&rna_Operator_poll_visible,
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
		func->cont.properties = {&rna_Operator_poll_visible, &rna_Operator_poll_context};
		func->identifier = "poll";
		func->flag = 97;
		func->description = "Test if the operator can be called or not";
		func->c_ret = &rna_Operator_poll_visible;
		rna_Operator_poll_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Operator_execute_context_ = {
		{&rna_Operator_execute_result, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_Operator_execute_result_ = {
		{nullptr, 	&rna_Operator_execute_context,
		-1, "result", 2097155, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Operator_execute_context, &rna_Operator_execute_result};
		func->identifier = "execute";
		func->flag = 4192;
		func->description = "Execute the operator";
		func->c_ret = &rna_Operator_execute_result;
		rna_Operator_execute_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Operator_check_context_ = {
		{&rna_Operator_check_result, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_Operator_check_result_ = {
		{nullptr, 	&rna_Operator_check_context,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Operator_check_context, &rna_Operator_check_result};
		func->identifier = "check";
		func->flag = 4192;
		func->description = "Check the operator settings, return True to signal a change to redraw";
		func->c_ret = &rna_Operator_check_result;
		rna_Operator_check_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Operator_invoke_context_ = {
		{&rna_Operator_invoke_event, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_Operator_invoke_event_ = {
		{&rna_Operator_invoke_result, 	&rna_Operator_invoke_context,
		-1, "event", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Event
	};
	rna_Operator_invoke_result_ = {
		{nullptr, 	&rna_Operator_invoke_event,
		-1, "result", 2097155, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Operator_invoke_context, &rna_Operator_invoke_result};
		func->identifier = "invoke";
		func->flag = 4192;
		func->description = "Invoke the operator";
		func->c_ret = &rna_Operator_invoke_result;
		rna_Operator_invoke_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Operator_modal_context_ = {
		{&rna_Operator_modal_event, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_Operator_modal_event_ = {
		{&rna_Operator_modal_result, 	&rna_Operator_modal_context,
		-1, "event", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Event
	};
	rna_Operator_modal_result_ = {
		{nullptr, 	&rna_Operator_modal_event,
		-1, "result", 2097155, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Operator_modal_context, &rna_Operator_modal_result};
		func->identifier = "modal";
		func->flag = 4192;
		func->description = "Modal operator function";
		func->c_ret = &rna_Operator_modal_result;
		rna_Operator_modal_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Operator_draw_context_ = {
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
		func->cont.properties = {&rna_Operator_draw_context, &rna_Operator_draw_context};
		func->identifier = "draw";
		func->flag = 96;
		func->description = "Draw function for the operator";
		rna_Operator_draw_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Operator_cancel_context_ = {
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
		func->cont.properties = {&rna_Operator_cancel_context, &rna_Operator_cancel_context};
		func->identifier = "cancel";
		func->flag = 4192;
		func->description = "Called when the operator is canceled";
		rna_Operator_cancel_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Operator_description_result_ = {
		{&rna_Operator_description_context, 	nullptr,
		-1, "result", 8388609, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 4096, ""
	};
	rna_Operator_description_context_ = {
		{&rna_Operator_description_properties, 	&rna_Operator_description_result,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_Operator_description_properties_ = {
		{nullptr, 	&rna_Operator_description_context,
		-1, "properties", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_OperatorProperties
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Operator_description_result, &rna_Operator_description_properties};
		func->identifier = "description";
		func->flag = 97;
		func->description = "Compute a description string that depends on parameters";
		rna_Operator_description_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Operator Properties */
static CollectionPropertyRNA rna_OperatorProperties_rna_properties_;
PropertyRNA &rna_OperatorProperties_rna_properties = reinterpret_cast<PropertyRNA &>(rna_OperatorProperties_rna_properties_);

static PointerPropertyRNA rna_OperatorProperties_rna_type_;
PropertyRNA &rna_OperatorProperties_rna_type = reinterpret_cast<PropertyRNA &>(rna_OperatorProperties_rna_type_);

static BoolPropertyRNA rna_OperatorProperties_bl_system_properties_get_do_create_;
PropertyRNA &rna_OperatorProperties_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_OperatorProperties_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_OperatorProperties_bl_system_properties_get_system_properties_;
PropertyRNA &rna_OperatorProperties_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_OperatorProperties_bl_system_properties_get_system_properties_);

FunctionRNA *rna_OperatorProperties_bl_system_properties_get_func;
StructRNA *RNA_OperatorProperties;
void register_struct_OperatorProperties(BlenderRNA &brna)
{
	rna_OperatorProperties_rna_properties_ = {
		{&rna_OperatorProperties_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorProperties_rna_properties_begin, OperatorProperties_rna_properties_next, OperatorProperties_rna_properties_end, OperatorProperties_rna_properties_get, nullptr, nullptr, OperatorProperties_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_OperatorProperties_rna_type_ = {
		{nullptr, 	&rna_OperatorProperties_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorProperties_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_OperatorProperties;
	srna->cont.properties = {&rna_OperatorProperties_rna_properties, &rna_OperatorProperties_rna_type};
	srna->identifier = "OperatorProperties";
	srna->flag = 2692;
	srna->name = "Operator Properties";
	srna->description = "Input properties of an operator";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_OperatorProperties_rna_properties;
	srna->refine = rna_OperatorProperties_refine;
	srna->idproperties = rna_OperatorProperties_idprops;
	srna->system_idproperties = rna_OperatorProperties_idprops;
	{
	rna_OperatorProperties_bl_system_properties_get_do_create_ = {
		{&rna_OperatorProperties_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_OperatorProperties_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_OperatorProperties_bl_system_properties_get_do_create,
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
		func->cont.properties = {&rna_OperatorProperties_bl_system_properties_get_do_create, &rna_OperatorProperties_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = OperatorProperties_bl_system_properties_get_call;
		func->c_ret = &rna_OperatorProperties_bl_system_properties_get_system_properties;
		rna_OperatorProperties_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Operator Options */
static CollectionPropertyRNA rna_OperatorOptions_rna_properties_;
PropertyRNA &rna_OperatorOptions_rna_properties = reinterpret_cast<PropertyRNA &>(rna_OperatorOptions_rna_properties_);

static PointerPropertyRNA rna_OperatorOptions_rna_type_;
PropertyRNA &rna_OperatorOptions_rna_type = reinterpret_cast<PropertyRNA &>(rna_OperatorOptions_rna_type_);

static BoolPropertyRNA rna_OperatorOptions_is_grab_cursor_;
PropertyRNA &rna_OperatorOptions_is_grab_cursor = reinterpret_cast<PropertyRNA &>(rna_OperatorOptions_is_grab_cursor_);

static BoolPropertyRNA rna_OperatorOptions_is_invoke_;
PropertyRNA &rna_OperatorOptions_is_invoke = reinterpret_cast<PropertyRNA &>(rna_OperatorOptions_is_invoke_);

static BoolPropertyRNA rna_OperatorOptions_is_repeat_;
PropertyRNA &rna_OperatorOptions_is_repeat = reinterpret_cast<PropertyRNA &>(rna_OperatorOptions_is_repeat_);

static BoolPropertyRNA rna_OperatorOptions_is_repeat_last_;
PropertyRNA &rna_OperatorOptions_is_repeat_last = reinterpret_cast<PropertyRNA &>(rna_OperatorOptions_is_repeat_last_);

static BoolPropertyRNA rna_OperatorOptions_use_cursor_region_;
PropertyRNA &rna_OperatorOptions_use_cursor_region = reinterpret_cast<PropertyRNA &>(rna_OperatorOptions_use_cursor_region_);

StructRNA *RNA_OperatorOptions;
void register_struct_OperatorOptions(BlenderRNA &brna)
{
	rna_OperatorOptions_rna_properties_ = {
		{&rna_OperatorOptions_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorOptions_rna_properties_begin, OperatorOptions_rna_properties_next, OperatorOptions_rna_properties_end, OperatorOptions_rna_properties_get, nullptr, nullptr, OperatorOptions_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_OperatorOptions_rna_type_ = {
		{&rna_OperatorOptions_is_grab_cursor, 	&rna_OperatorOptions_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorOptions_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_OperatorOptions_is_grab_cursor_ = {
		{&rna_OperatorOptions_is_invoke, 	&rna_OperatorOptions_rna_type,
		-1, "is_grab_cursor", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grab Cursor",
		"True when the cursor is grabbed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorOptions_is_grab_cursor_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_OperatorOptions_is_invoke_ = {
		{&rna_OperatorOptions_is_repeat, 	&rna_OperatorOptions_is_grab_cursor,
		-1, "is_invoke", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invoke",
		"True when invoked (even if only the execute callbacks available)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorOptions_is_invoke_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_OperatorOptions_is_repeat_ = {
		{&rna_OperatorOptions_is_repeat_last, 	&rna_OperatorOptions_is_invoke,
		-1, "is_repeat", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Repeat",
		"True when run from the \'Adjust Last Operation\' panel",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorOptions_is_repeat_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_OperatorOptions_is_repeat_last_ = {
		{&rna_OperatorOptions_use_cursor_region, 	&rna_OperatorOptions_is_repeat,
		-1, "is_repeat_last", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Repeat Call",
		"True when run from the operator \'Repeat Last\'",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorOptions_is_repeat_last_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_OperatorOptions_use_cursor_region_ = {
		{nullptr, 	&rna_OperatorOptions_is_repeat_last,
		-1, "use_cursor_region", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Focus Region",
		"Enable to use the region under the cursor for modal execution",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorOptions_use_cursor_region_get, OperatorOptions_use_cursor_region_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_OperatorOptions;
	srna->cont.properties = {&rna_OperatorOptions_rna_properties, &rna_OperatorOptions_use_cursor_region};
	srna->identifier = "OperatorOptions";
	srna->flag = 516;
	srna->name = "Operator Options";
	srna->description = "Runtime options";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_OperatorOptions_rna_properties;
};

/* Operator Mouse Path */
static FloatPropertyRNA rna_OperatorMousePath_loc_;
PropertyRNA &rna_OperatorMousePath_loc = reinterpret_cast<PropertyRNA &>(rna_OperatorMousePath_loc_);

static FloatPropertyRNA rna_OperatorMousePath_time_;
PropertyRNA &rna_OperatorMousePath_time = reinterpret_cast<PropertyRNA &>(rna_OperatorMousePath_time_);

StructRNA *RNA_OperatorMousePath;
void register_struct_OperatorMousePath(BlenderRNA &brna)
{
	static float rna_OperatorMousePath_loc_default[2] = {
		0.0f,
		0.0f
	};
	rna_OperatorMousePath_loc_ = {
		{&rna_OperatorMousePath_time, 	nullptr,
		-1, "loc", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Location",
		"Mouse location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_OperatorMousePath_loc_default
	};

	rna_OperatorMousePath_time_ = {
		{nullptr, 	&rna_OperatorMousePath_loc,
		-1, "time", 1027, 0, 0, 0, 0, PropertyPathTemplateType(0), "Time",
		"Time of mouse location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_OperatorMousePath;
	srna->cont.properties = {&rna_OperatorMousePath_loc, &rna_OperatorMousePath_time};
	srna->identifier = "OperatorMousePath";
	srna->flag = 516;
	srna->name = "Operator Mouse Path";
	srna->description = "Mouse path values for operators that record such paths";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_PropertyGroup_name;
	srna->iteratorproperty = &rna_PropertyGroup_rna_properties;
	srna->base = RNA_PropertyGroup;
	srna->refine = rna_PropertyGroup_refine;
	srna->reg = rna_PropertyGroup_register;
	srna->unreg = rna_PropertyGroup_unregister;
	srna->idproperties = rna_PropertyGroup_idprops;
	srna->system_idproperties = rna_PropertyGroup_idprops;
};

/* Operator File List Element */
static StringPropertyRNA rna_OperatorFileListElement_name_;
PropertyRNA &rna_OperatorFileListElement_name = reinterpret_cast<PropertyRNA &>(rna_OperatorFileListElement_name_);

StructRNA *RNA_OperatorFileListElement;
void register_struct_OperatorFileListElement(BlenderRNA &brna)
{
	rna_OperatorFileListElement_name_ = {
		{nullptr, 	nullptr,
		-1, "name", 263169, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of a file or directory within a file list",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILENAME) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	StructRNA *srna = RNA_OperatorFileListElement;
	srna->cont.properties = {&rna_OperatorFileListElement_name, &rna_OperatorFileListElement_name};
	srna->identifier = "OperatorFileListElement";
	srna->flag = 516;
	srna->name = "Operator File List Element";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_PropertyGroup_name;
	srna->iteratorproperty = &rna_PropertyGroup_rna_properties;
	srna->base = RNA_PropertyGroup;
	srna->refine = rna_PropertyGroup_refine;
	srna->reg = rna_PropertyGroup_register;
	srna->unreg = rna_PropertyGroup_unregister;
	srna->idproperties = rna_PropertyGroup_idprops;
	srna->system_idproperties = rna_PropertyGroup_idprops;
};

/* Macro Operator */
static CollectionPropertyRNA rna_Macro_rna_properties_;
PropertyRNA &rna_Macro_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Macro_rna_properties_);

static PointerPropertyRNA rna_Macro_rna_type_;
PropertyRNA &rna_Macro_rna_type = reinterpret_cast<PropertyRNA &>(rna_Macro_rna_type_);

static StringPropertyRNA rna_Macro_name_;
PropertyRNA &rna_Macro_name = reinterpret_cast<PropertyRNA &>(rna_Macro_name_);

static PointerPropertyRNA rna_Macro_properties_;
PropertyRNA &rna_Macro_properties = reinterpret_cast<PropertyRNA &>(rna_Macro_properties_);

static BoolPropertyRNA rna_Macro_has_reports_;
PropertyRNA &rna_Macro_has_reports = reinterpret_cast<PropertyRNA &>(rna_Macro_has_reports_);

static StringPropertyRNA rna_Macro_bl_idname_;
PropertyRNA &rna_Macro_bl_idname = reinterpret_cast<PropertyRNA &>(rna_Macro_bl_idname_);

static StringPropertyRNA rna_Macro_bl_label_;
PropertyRNA &rna_Macro_bl_label = reinterpret_cast<PropertyRNA &>(rna_Macro_bl_label_);

static StringPropertyRNA rna_Macro_bl_translation_context_;
PropertyRNA &rna_Macro_bl_translation_context = reinterpret_cast<PropertyRNA &>(rna_Macro_bl_translation_context_);

static StringPropertyRNA rna_Macro_bl_description_;
PropertyRNA &rna_Macro_bl_description = reinterpret_cast<PropertyRNA &>(rna_Macro_bl_description_);

static StringPropertyRNA rna_Macro_bl_undo_group_;
PropertyRNA &rna_Macro_bl_undo_group = reinterpret_cast<PropertyRNA &>(rna_Macro_bl_undo_group_);

static EnumPropertyRNA rna_Macro_bl_options_;
PropertyRNA &rna_Macro_bl_options = reinterpret_cast<PropertyRNA &>(rna_Macro_bl_options_);

static EnumPropertyRNA rna_Macro_bl_cursor_pending_;
PropertyRNA &rna_Macro_bl_cursor_pending = reinterpret_cast<PropertyRNA &>(rna_Macro_bl_cursor_pending_);

static EnumPropertyRNA rna_Macro_report_type_;
PropertyRNA &rna_Macro_report_type = reinterpret_cast<PropertyRNA &>(rna_Macro_report_type_);

static StringPropertyRNA rna_Macro_report_message_;
PropertyRNA &rna_Macro_report_message = reinterpret_cast<PropertyRNA &>(rna_Macro_report_message_);

FunctionRNA *rna_Macro_report_func;
static BoolPropertyRNA rna_Macro_poll_visible_;
PropertyRNA &rna_Macro_poll_visible = reinterpret_cast<PropertyRNA &>(rna_Macro_poll_visible_);

static PointerPropertyRNA rna_Macro_poll_context_;
PropertyRNA &rna_Macro_poll_context = reinterpret_cast<PropertyRNA &>(rna_Macro_poll_context_);

FunctionRNA *rna_Macro_poll_func;
static PointerPropertyRNA rna_Macro_draw_context_;
PropertyRNA &rna_Macro_draw_context = reinterpret_cast<PropertyRNA &>(rna_Macro_draw_context_);

FunctionRNA *rna_Macro_draw_func;
StructRNA *RNA_Macro;
void register_struct_Macro(BlenderRNA &brna)
{
	rna_Macro_rna_properties_ = {
		{&rna_Macro_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_rna_properties_begin, Macro_rna_properties_next, Macro_rna_properties_end, Macro_rna_properties_get, nullptr, nullptr, Macro_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Macro_rna_type_ = {
		{&rna_Macro_name, 	&rna_Macro_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Macro_name_ = {
		{&rna_Macro_properties, 	&rna_Macro_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_name_get, Macro_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Macro_properties_ = {
		{&rna_Macro_has_reports, 	&rna_Macro_name,
		-1, "properties", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Properties",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_properties_get, nullptr, nullptr, nullptr,RNA_OperatorProperties
	};

	rna_Macro_has_reports_ = {
		{&rna_Macro_bl_idname, 	&rna_Macro_properties,
		-1, "has_reports", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Reports",
		"Operator has a set of reports (warnings and errors) from last execution",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_has_reports_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Macro_bl_idname_ = {
		{&rna_Macro_bl_label, 	&rna_Macro_has_reports,
		-1, "bl_idname", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_idname",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_bl_idname_get, Macro_bl_idname_length, Macro_bl_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Macro_bl_label_ = {
		{&rna_Macro_bl_translation_context, 	&rna_Macro_bl_idname,
		-1, "bl_label", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_label",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_bl_label_get, Macro_bl_label_length, Macro_bl_label_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Macro_bl_translation_context_ = {
		{&rna_Macro_bl_description, 	&rna_Macro_bl_label,
		-1, "bl_translation_context", 262193, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_translation_context",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_bl_translation_context_get, Macro_bl_translation_context_length, Macro_bl_translation_context_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "Operator"
	};

	rna_Macro_bl_description_ = {
		{&rna_Macro_bl_undo_group, 	&rna_Macro_bl_translation_context,
		-1, "bl_description", 262193, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_description",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_bl_description_get, Macro_bl_description_length, Macro_bl_description_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_Macro_bl_undo_group_ = {
		{&rna_Macro_bl_options, 	&rna_Macro_bl_description,
		-1, "bl_undo_group", 262193, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_undo_group",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_bl_undo_group_get, Macro_bl_undo_group_length, Macro_bl_undo_group_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Macro_bl_options_ = {
		{&rna_Macro_bl_cursor_pending, 	&rna_Macro_bl_undo_group,
		-1, "bl_options", 2097203, 0, 0, 0, 0, PropertyPathTemplateType(0), "Options",
		"Options for this operator type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_bl_options_get, Macro_bl_options_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_type_flag_items, 12, 0
	};

	rna_Macro_bl_cursor_pending_ = {
		{nullptr, 	&rna_Macro_bl_options,
		-1, "bl_cursor_pending", 51, 0, 0, 0, 0, PropertyPathTemplateType(0), "Idle Cursor",
		"Cursor to use when waiting for the user to select a location to activate the operator (when ``bl_options`` has ``DEPENDS_ON_CURSOR`` set)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Macro_bl_cursor_pending_get, Macro_bl_cursor_pending_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_window_cursor_items, 26, 1
	};

	StructRNA *srna = RNA_Macro;
	srna->cont.properties = {&rna_Macro_rna_properties, &rna_Macro_bl_cursor_pending};
	srna->identifier = "Macro";
	srna->flag = 1540;
	srna->name = "Macro Operator";
	srna->description = "Storage of a macro operator being executed, or registered after execution";
	srna->translation_context = "Operator";
	srna->icon = 63;
	srna->nameproperty = &rna_Macro_bl_idname;
	srna->iteratorproperty = &rna_Macro_rna_properties;
	srna->refine = rna_MacroOperator_refine;
	srna->reg = rna_MacroOperator_register;
	srna->unreg = rna_Operator_unregister;
	srna->instance = rna_Operator_instance;
	{
	rna_Macro_report_type_ = {
		{&rna_Macro_report_message, 	nullptr,
		-1, "type", 2097155, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_wm_report_items, 9, 0
	};
	rna_Macro_report_message_ = {
		{nullptr, 	&rna_Macro_report_type,
		-1, "message", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Report Message",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Macro_report_type, &rna_Macro_report_message};
		func->identifier = "report";
		func->description = "report";
		func->call = Macro_report_call;
		rna_Macro_report_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Macro_poll_visible_ = {
		{&rna_Macro_poll_context, 	nullptr,
		-1, "visible", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Macro_poll_context_ = {
		{nullptr, 	&rna_Macro_poll_visible,
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
		func->cont.properties = {&rna_Macro_poll_visible, &rna_Macro_poll_context};
		func->identifier = "poll";
		func->flag = 97;
		func->description = "Test if the operator can be called or not";
		func->c_ret = &rna_Macro_poll_visible;
		rna_Macro_poll_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Macro_draw_context_ = {
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
		func->cont.properties = {&rna_Macro_draw_context, &rna_Macro_draw_context};
		func->identifier = "draw";
		func->flag = 96;
		func->description = "Draw function for the operator";
		rna_Macro_draw_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Operator Macro */
static CollectionPropertyRNA rna_OperatorMacro_rna_properties_;
PropertyRNA &rna_OperatorMacro_rna_properties = reinterpret_cast<PropertyRNA &>(rna_OperatorMacro_rna_properties_);

static PointerPropertyRNA rna_OperatorMacro_rna_type_;
PropertyRNA &rna_OperatorMacro_rna_type = reinterpret_cast<PropertyRNA &>(rna_OperatorMacro_rna_type_);

static PointerPropertyRNA rna_OperatorMacro_properties_;
PropertyRNA &rna_OperatorMacro_properties = reinterpret_cast<PropertyRNA &>(rna_OperatorMacro_properties_);

StructRNA *RNA_OperatorMacro;
void register_struct_OperatorMacro(BlenderRNA &brna)
{
	rna_OperatorMacro_rna_properties_ = {
		{&rna_OperatorMacro_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorMacro_rna_properties_begin, OperatorMacro_rna_properties_next, OperatorMacro_rna_properties_end, OperatorMacro_rna_properties_get, nullptr, nullptr, OperatorMacro_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_OperatorMacro_rna_type_ = {
		{&rna_OperatorMacro_properties, 	&rna_OperatorMacro_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorMacro_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_OperatorMacro_properties_ = {
		{nullptr, 	&rna_OperatorMacro_rna_type,
		-1, "properties", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Properties",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		OperatorMacro_properties_get, nullptr, nullptr, nullptr,RNA_OperatorProperties
	};

	StructRNA *srna = RNA_OperatorMacro;
	srna->cont.properties = {&rna_OperatorMacro_rna_properties, &rna_OperatorMacro_properties};
	srna->identifier = "OperatorMacro";
	srna->flag = 516;
	srna->name = "Operator Macro";
	srna->description = "Storage of a sub operator in a macro after it has been added";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_OperatorMacro_rna_properties;
};

/* NDOF Motion Data */
static CollectionPropertyRNA rna_NDOFMotionEventData_rna_properties_;
PropertyRNA &rna_NDOFMotionEventData_rna_properties = reinterpret_cast<PropertyRNA &>(rna_NDOFMotionEventData_rna_properties_);

static PointerPropertyRNA rna_NDOFMotionEventData_rna_type_;
PropertyRNA &rna_NDOFMotionEventData_rna_type = reinterpret_cast<PropertyRNA &>(rna_NDOFMotionEventData_rna_type_);

static FloatPropertyRNA rna_NDOFMotionEventData_translation_;
PropertyRNA &rna_NDOFMotionEventData_translation = reinterpret_cast<PropertyRNA &>(rna_NDOFMotionEventData_translation_);

static FloatPropertyRNA rna_NDOFMotionEventData_rotation_;
PropertyRNA &rna_NDOFMotionEventData_rotation = reinterpret_cast<PropertyRNA &>(rna_NDOFMotionEventData_rotation_);

static EnumPropertyRNA rna_NDOFMotionEventData_progress_;
PropertyRNA &rna_NDOFMotionEventData_progress = reinterpret_cast<PropertyRNA &>(rna_NDOFMotionEventData_progress_);

static FloatPropertyRNA rna_NDOFMotionEventData_time_delta_;
PropertyRNA &rna_NDOFMotionEventData_time_delta = reinterpret_cast<PropertyRNA &>(rna_NDOFMotionEventData_time_delta_);

StructRNA *RNA_NDOFMotionEventData;
void register_struct_NDOFMotionEventData(BlenderRNA &brna)
{
	rna_NDOFMotionEventData_rna_properties_ = {
		{&rna_NDOFMotionEventData_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NDOFMotionEventData_rna_properties_begin, NDOFMotionEventData_rna_properties_next, NDOFMotionEventData_rna_properties_end, NDOFMotionEventData_rna_properties_get, nullptr, nullptr, NDOFMotionEventData_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_NDOFMotionEventData_rna_type_ = {
		{&rna_NDOFMotionEventData_translation, 	&rna_NDOFMotionEventData_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NDOFMotionEventData_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_NDOFMotionEventData_translation_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NDOFMotionEventData_translation_ = {
		{&rna_NDOFMotionEventData_rotation, 	&rna_NDOFMotionEventData_rna_type,
		-1, "translation", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Translation",
		"The translation of this motion event. The range on each axis is [-1 to 1], before being multiplied by the sensitivity preference. This is typically scaled by the time-delta before use.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, NDOFMotionEventData_translation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_NDOFMotionEventData_translation_default
	};

	static float rna_NDOFMotionEventData_rotation_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NDOFMotionEventData_rotation_ = {
		{&rna_NDOFMotionEventData_progress, 	&rna_NDOFMotionEventData_translation,
		-1, "rotation", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Rotation",
		"Axis-angle rotation of this motion event. The vector magnitude is the angle where 1.0 represents 360 degrees. The angle is typically scaled by the time-delta before use.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, NDOFMotionEventData_rotation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_NDOFMotionEventData_rotation_default
	};

	static const EnumPropertyItem rna_NDOFMotionEventData_progress_items[4] = {
		{1, "STARTING", 0, "Starting", ""	},
		{2, "IN_PROGRESS", 0, "In progress", ""	},
		{3, "FINISHING", 0, "Finishing", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_NDOFMotionEventData_progress_ = {
		{&rna_NDOFMotionEventData_time_delta, 	&rna_NDOFMotionEventData_rotation,
		-1, "progress", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Progress",
		"Indicates the gesture phase",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NDOFMotionEventData_progress_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_NDOFMotionEventData_progress_items, 3, 1
	};

	rna_NDOFMotionEventData_time_delta_ = {
		{nullptr, 	&rna_NDOFMotionEventData_progress,
		-1, "time_delta", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Time Delta",
		"Time since previous motion event (in seconds)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NDOFMotionEventData_time_delta_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NDOFMotionEventData;
	srna->cont.properties = {&rna_NDOFMotionEventData_rna_properties, &rna_NDOFMotionEventData_time_delta};
	srna->identifier = "NDOFMotionEventData";
	srna->flag = 516;
	srna->name = "NDOF Motion Data";
	srna->description = "NDOF motion data for window manager events";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_NDOFMotionEventData_rna_properties;
};

/* Event */
static CollectionPropertyRNA rna_Event_rna_properties_;
PropertyRNA &rna_Event_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Event_rna_properties_);

static PointerPropertyRNA rna_Event_rna_type_;
PropertyRNA &rna_Event_rna_type = reinterpret_cast<PropertyRNA &>(rna_Event_rna_type_);

static StringPropertyRNA rna_Event_ascii_;
PropertyRNA &rna_Event_ascii = reinterpret_cast<PropertyRNA &>(rna_Event_ascii_);

static StringPropertyRNA rna_Event_unicode_;
PropertyRNA &rna_Event_unicode = reinterpret_cast<PropertyRNA &>(rna_Event_unicode_);

static EnumPropertyRNA rna_Event_value_;
PropertyRNA &rna_Event_value = reinterpret_cast<PropertyRNA &>(rna_Event_value_);

static EnumPropertyRNA rna_Event_value_prev_;
PropertyRNA &rna_Event_value_prev = reinterpret_cast<PropertyRNA &>(rna_Event_value_prev_);

static EnumPropertyRNA rna_Event_type_;
PropertyRNA &rna_Event_type = reinterpret_cast<PropertyRNA &>(rna_Event_type_);

static EnumPropertyRNA rna_Event_type_prev_;
PropertyRNA &rna_Event_type_prev = reinterpret_cast<PropertyRNA &>(rna_Event_type_prev_);

static EnumPropertyRNA rna_Event_direction_;
PropertyRNA &rna_Event_direction = reinterpret_cast<PropertyRNA &>(rna_Event_direction_);

static BoolPropertyRNA rna_Event_is_repeat_;
PropertyRNA &rna_Event_is_repeat = reinterpret_cast<PropertyRNA &>(rna_Event_is_repeat_);

static BoolPropertyRNA rna_Event_is_consecutive_;
PropertyRNA &rna_Event_is_consecutive = reinterpret_cast<PropertyRNA &>(rna_Event_is_consecutive_);

static IntPropertyRNA rna_Event_mouse_x_;
PropertyRNA &rna_Event_mouse_x = reinterpret_cast<PropertyRNA &>(rna_Event_mouse_x_);

static IntPropertyRNA rna_Event_mouse_y_;
PropertyRNA &rna_Event_mouse_y = reinterpret_cast<PropertyRNA &>(rna_Event_mouse_y_);

static IntPropertyRNA rna_Event_mouse_region_x_;
PropertyRNA &rna_Event_mouse_region_x = reinterpret_cast<PropertyRNA &>(rna_Event_mouse_region_x_);

static IntPropertyRNA rna_Event_mouse_region_y_;
PropertyRNA &rna_Event_mouse_region_y = reinterpret_cast<PropertyRNA &>(rna_Event_mouse_region_y_);

static IntPropertyRNA rna_Event_mouse_prev_x_;
PropertyRNA &rna_Event_mouse_prev_x = reinterpret_cast<PropertyRNA &>(rna_Event_mouse_prev_x_);

static IntPropertyRNA rna_Event_mouse_prev_y_;
PropertyRNA &rna_Event_mouse_prev_y = reinterpret_cast<PropertyRNA &>(rna_Event_mouse_prev_y_);

static IntPropertyRNA rna_Event_mouse_prev_press_x_;
PropertyRNA &rna_Event_mouse_prev_press_x = reinterpret_cast<PropertyRNA &>(rna_Event_mouse_prev_press_x_);

static IntPropertyRNA rna_Event_mouse_prev_press_y_;
PropertyRNA &rna_Event_mouse_prev_press_y = reinterpret_cast<PropertyRNA &>(rna_Event_mouse_prev_press_y_);

static FloatPropertyRNA rna_Event_pressure_;
PropertyRNA &rna_Event_pressure = reinterpret_cast<PropertyRNA &>(rna_Event_pressure_);

static FloatPropertyRNA rna_Event_tilt_;
PropertyRNA &rna_Event_tilt = reinterpret_cast<PropertyRNA &>(rna_Event_tilt_);

static BoolPropertyRNA rna_Event_is_tablet_;
PropertyRNA &rna_Event_is_tablet = reinterpret_cast<PropertyRNA &>(rna_Event_is_tablet_);

static BoolPropertyRNA rna_Event_is_mouse_absolute_;
PropertyRNA &rna_Event_is_mouse_absolute = reinterpret_cast<PropertyRNA &>(rna_Event_is_mouse_absolute_);

static PointerPropertyRNA rna_Event_ndof_motion_;
PropertyRNA &rna_Event_ndof_motion = reinterpret_cast<PropertyRNA &>(rna_Event_ndof_motion_);

static PointerPropertyRNA rna_Event_xr_;
PropertyRNA &rna_Event_xr = reinterpret_cast<PropertyRNA &>(rna_Event_xr_);

static BoolPropertyRNA rna_Event_shift_;
PropertyRNA &rna_Event_shift = reinterpret_cast<PropertyRNA &>(rna_Event_shift_);

static BoolPropertyRNA rna_Event_ctrl_;
PropertyRNA &rna_Event_ctrl = reinterpret_cast<PropertyRNA &>(rna_Event_ctrl_);

static BoolPropertyRNA rna_Event_alt_;
PropertyRNA &rna_Event_alt = reinterpret_cast<PropertyRNA &>(rna_Event_alt_);

static BoolPropertyRNA rna_Event_oskey_;
PropertyRNA &rna_Event_oskey = reinterpret_cast<PropertyRNA &>(rna_Event_oskey_);

static BoolPropertyRNA rna_Event_hyper_;
PropertyRNA &rna_Event_hyper = reinterpret_cast<PropertyRNA &>(rna_Event_hyper_);

StructRNA *RNA_Event;
void register_struct_Event(BlenderRNA &brna)
{
	rna_Event_rna_properties_ = {
		{&rna_Event_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_rna_properties_begin, Event_rna_properties_next, Event_rna_properties_end, Event_rna_properties_get, nullptr, nullptr, Event_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Event_rna_type_ = {
		{&rna_Event_ascii, 	&rna_Event_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Event_ascii_ = {
		{&rna_Event_unicode, 	&rna_Event_rna_type,
		-1, "ascii", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "ASCII",
		"Single ASCII character for this event",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_ascii_get, Event_ascii_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Event_unicode_ = {
		{&rna_Event_value, 	&rna_Event_ascii,
		-1, "unicode", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Unicode",
		"Single unicode character for this event",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_unicode_get, Event_unicode_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Event_value_ = {
		{&rna_Event_value_prev, 	&rna_Event_unicode,
		-1, "value", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Value",
		"The type of event, only applies to some",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
	};

	rna_Event_value_prev_ = {
		{&rna_Event_type, 	&rna_Event_value,
		-1, "value_prev", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Previous Value",
		"The type of event, only applies to some",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_value_prev_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
	};

	rna_Event_type_ = {
		{&rna_Event_type_prev, 	&rna_Event_value_prev,
		-1, "type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "UI_Events_KeyMaps",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 207, 0
	};

	rna_Event_type_prev_ = {
		{&rna_Event_direction, 	&rna_Event_type,
		-1, "type_prev", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Previous Type",
		"",
		0, "UI_Events_KeyMaps",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_type_prev_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 207, 0
	};

	rna_Event_direction_ = {
		{&rna_Event_is_repeat, 	&rna_Event_type_prev,
		-1, "direction", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Direction",
		"The direction (only applies to drag events)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_direction_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_direction_items, 9, -1
	};

	rna_Event_is_repeat_ = {
		{&rna_Event_is_consecutive, 	&rna_Event_direction,
		-1, "is_repeat", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Repeat",
		"The event is generated by holding a key down",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_is_repeat_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Event_is_consecutive_ = {
		{&rna_Event_mouse_x, 	&rna_Event_is_repeat,
		-1, "is_consecutive", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Consecutive",
		"Part of a trackpad or NDOF motion, interrupted by cursor motion, button or key press events",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_is_consecutive_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Event_mouse_x_ = {
		{&rna_Event_mouse_y, 	&rna_Event_is_consecutive,
		-1, "mouse_x", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mouse X Position",
		"The window relative horizontal location of the mouse",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_mouse_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Event_mouse_y_ = {
		{&rna_Event_mouse_region_x, 	&rna_Event_mouse_x,
		-1, "mouse_y", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mouse Y Position",
		"The window relative vertical location of the mouse",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_mouse_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Event_mouse_region_x_ = {
		{&rna_Event_mouse_region_y, 	&rna_Event_mouse_y,
		-1, "mouse_region_x", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mouse X Position",
		"The region relative horizontal location of the mouse",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_mouse_region_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Event_mouse_region_y_ = {
		{&rna_Event_mouse_prev_x, 	&rna_Event_mouse_region_x,
		-1, "mouse_region_y", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mouse Y Position",
		"The region relative vertical location of the mouse",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_mouse_region_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Event_mouse_prev_x_ = {
		{&rna_Event_mouse_prev_y, 	&rna_Event_mouse_region_y,
		-1, "mouse_prev_x", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mouse Previous X Position",
		"The window relative horizontal location of the mouse",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_mouse_prev_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Event_mouse_prev_y_ = {
		{&rna_Event_mouse_prev_press_x, 	&rna_Event_mouse_prev_x,
		-1, "mouse_prev_y", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mouse Previous Y Position",
		"The window relative vertical location of the mouse",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_mouse_prev_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Event_mouse_prev_press_x_ = {
		{&rna_Event_mouse_prev_press_y, 	&rna_Event_mouse_prev_y,
		-1, "mouse_prev_press_x", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mouse Previous X Press Position",
		"The window relative horizontal location of the last press event",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_mouse_prev_press_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Event_mouse_prev_press_y_ = {
		{&rna_Event_pressure, 	&rna_Event_mouse_prev_press_x,
		-1, "mouse_prev_press_y", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mouse Previous Y Press Position",
		"The window relative vertical location of the last press event",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_mouse_prev_press_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Event_pressure_ = {
		{&rna_Event_tilt, 	&rna_Event_mouse_prev_press_y,
		-1, "pressure", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tablet Pressure",
		"The pressure of the tablet or 1.0 if no tablet present",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_pressure_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	static float rna_Event_tilt_default[2] = {
		0.0f,
		0.0f
	};
	rna_Event_tilt_ = {
		{&rna_Event_is_tablet, 	&rna_Event_pressure,
		-1, "tilt", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tablet Tilt",
		"The pressure of the tablet or zeroes if no tablet present",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_LENGTH)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Event_tilt_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Event_tilt_default
	};

	rna_Event_is_tablet_ = {
		{&rna_Event_is_mouse_absolute, 	&rna_Event_tilt,
		-1, "is_tablet", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Tablet",
		"The event has tablet data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_is_tablet_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Event_is_mouse_absolute_ = {
		{&rna_Event_ndof_motion, 	&rna_Event_is_tablet,
		-1, "is_mouse_absolute", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Absolute Motion",
		"The last motion event was an absolute input",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_is_mouse_absolute_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Event_ndof_motion_ = {
		{&rna_Event_xr, 	&rna_Event_is_mouse_absolute,
		-1, "ndof_motion", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "NDOF motion",
		"NDOF motion event data",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_ndof_motion_get, nullptr, nullptr, nullptr,RNA_NDOFMotionEventData
	};

	rna_Event_xr_ = {
		{&rna_Event_shift, 	&rna_Event_ndof_motion,
		-1, "xr", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "XR",
		"XR event data",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_xr_get, nullptr, nullptr, nullptr,RNA_XrEventData
	};

	rna_Event_shift_ = {
		{&rna_Event_ctrl, 	&rna_Event_xr,
		-1, "shift", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shift",
		"True when the Shift key is held",
		0, "WindowManager",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_shift_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Event_ctrl_ = {
		{&rna_Event_alt, 	&rna_Event_shift,
		-1, "ctrl", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ctrl",
		"True when the Ctrl key is held",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_ctrl_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Event_alt_ = {
		{&rna_Event_oskey, 	&rna_Event_ctrl,
		-1, "alt", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Alt",
		"True when the Alt/Option key is held",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_alt_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Event_oskey_ = {
		{&rna_Event_hyper, 	&rna_Event_alt,
		-1, "oskey", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "OS Key",
		"True when the Cmd key is held",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_oskey_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Event_hyper_ = {
		{nullptr, 	&rna_Event_oskey,
		-1, "hyper", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hyper",
		"True when the Hyper key is held",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Event_hyper_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Event;
	srna->cont.properties = {&rna_Event_rna_properties, &rna_Event_hyper};
	srna->identifier = "Event";
	srna->flag = 516;
	srna->name = "Event";
	srna->description = "Window Manager Event";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Event_rna_properties;
};

/* Timer */
static CollectionPropertyRNA rna_Timer_rna_properties_;
PropertyRNA &rna_Timer_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Timer_rna_properties_);

static PointerPropertyRNA rna_Timer_rna_type_;
PropertyRNA &rna_Timer_rna_type = reinterpret_cast<PropertyRNA &>(rna_Timer_rna_type_);

static FloatPropertyRNA rna_Timer_time_step_;
PropertyRNA &rna_Timer_time_step = reinterpret_cast<PropertyRNA &>(rna_Timer_time_step_);

static FloatPropertyRNA rna_Timer_time_delta_;
PropertyRNA &rna_Timer_time_delta = reinterpret_cast<PropertyRNA &>(rna_Timer_time_delta_);

static FloatPropertyRNA rna_Timer_time_duration_;
PropertyRNA &rna_Timer_time_duration = reinterpret_cast<PropertyRNA &>(rna_Timer_time_duration_);

StructRNA *RNA_Timer;
void register_struct_Timer(BlenderRNA &brna)
{
	rna_Timer_rna_properties_ = {
		{&rna_Timer_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Timer_rna_properties_begin, Timer_rna_properties_next, Timer_rna_properties_end, Timer_rna_properties_get, nullptr, nullptr, Timer_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Timer_rna_type_ = {
		{&rna_Timer_time_step, 	&rna_Timer_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Timer_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Timer_time_step_ = {
		{&rna_Timer_time_delta, 	&rna_Timer_rna_type,
		-1, "time_step", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Time Step",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Timer_time_step_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Timer_time_delta_ = {
		{&rna_Timer_time_duration, 	&rna_Timer_time_step,
		-1, "time_delta", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Delta",
		"Time since last step in seconds",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Timer_time_delta_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Timer_time_duration_ = {
		{nullptr, 	&rna_Timer_time_delta,
		-1, "time_duration", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Delta",
		"Time since the timer started seconds",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Timer_time_duration_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_Timer;
	srna->cont.properties = {&rna_Timer_rna_properties, &rna_Timer_time_duration};
	srna->identifier = "Timer";
	srna->flag = 516;
	srna->name = "Timer";
	srna->description = "Window event timer";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Timer_rna_properties;
};

/* UIPopupMenu */
static CollectionPropertyRNA rna_UIPopupMenu_rna_properties_;
PropertyRNA &rna_UIPopupMenu_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UIPopupMenu_rna_properties_);

static PointerPropertyRNA rna_UIPopupMenu_rna_type_;
PropertyRNA &rna_UIPopupMenu_rna_type = reinterpret_cast<PropertyRNA &>(rna_UIPopupMenu_rna_type_);

static PointerPropertyRNA rna_UIPopupMenu_layout_;
PropertyRNA &rna_UIPopupMenu_layout = reinterpret_cast<PropertyRNA &>(rna_UIPopupMenu_layout_);

StructRNA *RNA_UIPopupMenu;
void register_struct_UIPopupMenu(BlenderRNA &brna)
{
	rna_UIPopupMenu_rna_properties_ = {
		{&rna_UIPopupMenu_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UIPopupMenu_rna_properties_begin, UIPopupMenu_rna_properties_next, UIPopupMenu_rna_properties_end, UIPopupMenu_rna_properties_get, nullptr, nullptr, UIPopupMenu_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UIPopupMenu_rna_type_ = {
		{&rna_UIPopupMenu_layout, 	&rna_UIPopupMenu_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UIPopupMenu_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_UIPopupMenu_layout_ = {
		{nullptr, 	&rna_UIPopupMenu_rna_type,
		-1, "layout", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "layout",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UIPopupMenu_layout_get, nullptr, nullptr, nullptr,RNA_UILayout
	};

	StructRNA *srna = RNA_UIPopupMenu;
	srna->cont.properties = {&rna_UIPopupMenu_rna_properties, &rna_UIPopupMenu_layout};
	srna->identifier = "UIPopupMenu";
	srna->flag = 516;
	srna->name = "UIPopupMenu";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UIPopupMenu_rna_properties;
};

/* UIPopover */
static CollectionPropertyRNA rna_UIPopover_rna_properties_;
PropertyRNA &rna_UIPopover_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UIPopover_rna_properties_);

static PointerPropertyRNA rna_UIPopover_rna_type_;
PropertyRNA &rna_UIPopover_rna_type = reinterpret_cast<PropertyRNA &>(rna_UIPopover_rna_type_);

static PointerPropertyRNA rna_UIPopover_layout_;
PropertyRNA &rna_UIPopover_layout = reinterpret_cast<PropertyRNA &>(rna_UIPopover_layout_);

StructRNA *RNA_UIPopover;
void register_struct_UIPopover(BlenderRNA &brna)
{
	rna_UIPopover_rna_properties_ = {
		{&rna_UIPopover_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UIPopover_rna_properties_begin, UIPopover_rna_properties_next, UIPopover_rna_properties_end, UIPopover_rna_properties_get, nullptr, nullptr, UIPopover_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UIPopover_rna_type_ = {
		{&rna_UIPopover_layout, 	&rna_UIPopover_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UIPopover_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_UIPopover_layout_ = {
		{nullptr, 	&rna_UIPopover_rna_type,
		-1, "layout", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "layout",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UIPopover_layout_get, nullptr, nullptr, nullptr,RNA_UILayout
	};

	StructRNA *srna = RNA_UIPopover;
	srna->cont.properties = {&rna_UIPopover_rna_properties, &rna_UIPopover_layout};
	srna->identifier = "UIPopover";
	srna->flag = 516;
	srna->name = "UIPopover";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UIPopover_rna_properties;
};

/* UIPieMenu */
static CollectionPropertyRNA rna_UIPieMenu_rna_properties_;
PropertyRNA &rna_UIPieMenu_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UIPieMenu_rna_properties_);

static PointerPropertyRNA rna_UIPieMenu_rna_type_;
PropertyRNA &rna_UIPieMenu_rna_type = reinterpret_cast<PropertyRNA &>(rna_UIPieMenu_rna_type_);

static PointerPropertyRNA rna_UIPieMenu_layout_;
PropertyRNA &rna_UIPieMenu_layout = reinterpret_cast<PropertyRNA &>(rna_UIPieMenu_layout_);

StructRNA *RNA_UIPieMenu;
void register_struct_UIPieMenu(BlenderRNA &brna)
{
	rna_UIPieMenu_rna_properties_ = {
		{&rna_UIPieMenu_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UIPieMenu_rna_properties_begin, UIPieMenu_rna_properties_next, UIPieMenu_rna_properties_end, UIPieMenu_rna_properties_get, nullptr, nullptr, UIPieMenu_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UIPieMenu_rna_type_ = {
		{&rna_UIPieMenu_layout, 	&rna_UIPieMenu_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UIPieMenu_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_UIPieMenu_layout_ = {
		{nullptr, 	&rna_UIPieMenu_rna_type,
		-1, "layout", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "layout",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UIPieMenu_layout_get, nullptr, nullptr, nullptr,RNA_UILayout
	};

	StructRNA *srna = RNA_UIPieMenu;
	srna->cont.properties = {&rna_UIPieMenu_rna_properties, &rna_UIPieMenu_layout};
	srna->identifier = "UIPieMenu";
	srna->flag = 516;
	srna->name = "UIPieMenu";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UIPieMenu_rna_properties;
};

/* Window */
static CollectionPropertyRNA rna_Window_rna_properties_;
PropertyRNA &rna_Window_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Window_rna_properties_);

static PointerPropertyRNA rna_Window_rna_type_;
PropertyRNA &rna_Window_rna_type = reinterpret_cast<PropertyRNA &>(rna_Window_rna_type_);

static PointerPropertyRNA rna_Window_parent_;
PropertyRNA &rna_Window_parent = reinterpret_cast<PropertyRNA &>(rna_Window_parent_);

static PointerPropertyRNA rna_Window_scene_;
PropertyRNA &rna_Window_scene = reinterpret_cast<PropertyRNA &>(rna_Window_scene_);

static PointerPropertyRNA rna_Window_workspace_;
PropertyRNA &rna_Window_workspace = reinterpret_cast<PropertyRNA &>(rna_Window_workspace_);

static PointerPropertyRNA rna_Window_screen_;
PropertyRNA &rna_Window_screen = reinterpret_cast<PropertyRNA &>(rna_Window_screen_);

static PointerPropertyRNA rna_Window_view_layer_;
PropertyRNA &rna_Window_view_layer = reinterpret_cast<PropertyRNA &>(rna_Window_view_layer_);

static IntPropertyRNA rna_Window_x_;
PropertyRNA &rna_Window_x = reinterpret_cast<PropertyRNA &>(rna_Window_x_);

static IntPropertyRNA rna_Window_y_;
PropertyRNA &rna_Window_y = reinterpret_cast<PropertyRNA &>(rna_Window_y_);

static IntPropertyRNA rna_Window_width_;
PropertyRNA &rna_Window_width = reinterpret_cast<PropertyRNA &>(rna_Window_width_);

static IntPropertyRNA rna_Window_height_;
PropertyRNA &rna_Window_height = reinterpret_cast<PropertyRNA &>(rna_Window_height_);

static PointerPropertyRNA rna_Window_stereo_3d_display_;
PropertyRNA &rna_Window_stereo_3d_display = reinterpret_cast<PropertyRNA &>(rna_Window_stereo_3d_display_);

static BoolPropertyRNA rna_Window_support_hdr_color_;
PropertyRNA &rna_Window_support_hdr_color = reinterpret_cast<PropertyRNA &>(rna_Window_support_hdr_color_);

static CollectionPropertyRNA rna_Window_modal_operators_;
PropertyRNA &rna_Window_modal_operators = reinterpret_cast<PropertyRNA &>(rna_Window_modal_operators_);

static IntPropertyRNA rna_Window_cursor_warp_x_;
PropertyRNA &rna_Window_cursor_warp_x = reinterpret_cast<PropertyRNA &>(rna_Window_cursor_warp_x_);

static IntPropertyRNA rna_Window_cursor_warp_y_;
PropertyRNA &rna_Window_cursor_warp_y = reinterpret_cast<PropertyRNA &>(rna_Window_cursor_warp_y_);

FunctionRNA *rna_Window_cursor_warp_func;
static EnumPropertyRNA rna_Window_cursor_set_cursor_;
PropertyRNA &rna_Window_cursor_set_cursor = reinterpret_cast<PropertyRNA &>(rna_Window_cursor_set_cursor_);

FunctionRNA *rna_Window_cursor_set_func;
static EnumPropertyRNA rna_Window_cursor_modal_set_cursor_;
PropertyRNA &rna_Window_cursor_modal_set_cursor = reinterpret_cast<PropertyRNA &>(rna_Window_cursor_modal_set_cursor_);

FunctionRNA *rna_Window_cursor_modal_set_func;
FunctionRNA *rna_Window_cursor_modal_restore_func;
static EnumPropertyRNA rna_Window_event_simulate_type_;
PropertyRNA &rna_Window_event_simulate_type = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_type_);

static EnumPropertyRNA rna_Window_event_simulate_value_;
PropertyRNA &rna_Window_event_simulate_value = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_value_);

static StringPropertyRNA rna_Window_event_simulate_unicode_;
PropertyRNA &rna_Window_event_simulate_unicode = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_unicode_);

static IntPropertyRNA rna_Window_event_simulate_x_;
PropertyRNA &rna_Window_event_simulate_x = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_x_);

static IntPropertyRNA rna_Window_event_simulate_y_;
PropertyRNA &rna_Window_event_simulate_y = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_y_);

static BoolPropertyRNA rna_Window_event_simulate_shift_;
PropertyRNA &rna_Window_event_simulate_shift = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_shift_);

static BoolPropertyRNA rna_Window_event_simulate_ctrl_;
PropertyRNA &rna_Window_event_simulate_ctrl = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_ctrl_);

static BoolPropertyRNA rna_Window_event_simulate_alt_;
PropertyRNA &rna_Window_event_simulate_alt = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_alt_);

static BoolPropertyRNA rna_Window_event_simulate_oskey_;
PropertyRNA &rna_Window_event_simulate_oskey = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_oskey_);

static BoolPropertyRNA rna_Window_event_simulate_hyper_;
PropertyRNA &rna_Window_event_simulate_hyper = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_hyper_);

static PointerPropertyRNA rna_Window_event_simulate_event_;
PropertyRNA &rna_Window_event_simulate_event = reinterpret_cast<PropertyRNA &>(rna_Window_event_simulate_event_);

FunctionRNA *rna_Window_event_simulate_func;
static BoolPropertyRNA rna_Window_find_playing_scene_scrub_;
PropertyRNA &rna_Window_find_playing_scene_scrub = reinterpret_cast<PropertyRNA &>(rna_Window_find_playing_scene_scrub_);

static PointerPropertyRNA rna_Window_find_playing_scene_scene_;
PropertyRNA &rna_Window_find_playing_scene_scene = reinterpret_cast<PropertyRNA &>(rna_Window_find_playing_scene_scene_);

FunctionRNA *rna_Window_find_playing_scene_func;
StructRNA *RNA_Window;
void register_struct_Window(BlenderRNA &brna)
{
	rna_Window_rna_properties_ = {
		{&rna_Window_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Window_rna_properties_begin, Window_rna_properties_next, Window_rna_properties_end, Window_rna_properties_get, nullptr, nullptr, Window_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Window_rna_type_ = {
		{&rna_Window_parent, 	&rna_Window_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Window_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Window_parent_ = {
		{&rna_Window_scene, 	&rna_Window_rna_type,
		-1, "parent", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Parent Window",
		"Active workspace and scene follow this window",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Window_parent_get, nullptr, nullptr, nullptr,RNA_Window
	};

	rna_Window_scene_ = {
		{&rna_Window_workspace, 	&rna_Window_parent,
		-1, "scene", 12845185, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scene",
		"Active scene to be edited in the window",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Window_scene_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Window_scene_get, Window_scene_set, nullptr, nullptr,RNA_Scene
	};

	rna_Window_workspace_ = {
		{&rna_Window_screen, 	&rna_Window_scene,
		-1, "workspace", 12845185, 0, 0, 0, 0, PropertyPathTemplateType(0), "Workspace",
		"Active workspace showing in the window",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Window_workspace_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Window_workspace_get, Window_workspace_set, nullptr, nullptr,RNA_WorkSpace
	};

	rna_Window_screen_ = {
		{&rna_Window_view_layer, 	&rna_Window_workspace,
		-1, "screen", 12845249, 0, 0, 0, 0, PropertyPathTemplateType(0), "Screen",
		"Active workspace screen showing in the window",
		0, "Screen",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_workspace_screen_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Window_screen_get, Window_screen_set, nullptr, rna_Window_screen_assign_poll,RNA_Screen
	};

	rna_Window_view_layer_ = {
		{&rna_Window_x, 	&rna_Window_screen,
		-1, "view_layer", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active View Layer",
		"The active workspace view layer showing in the window",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 68157440, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Window_view_layer_get, Window_view_layer_set, nullptr, nullptr,RNA_ViewLayer
	};

	rna_Window_x_ = {
		{&rna_Window_y, 	&rna_Window_view_layer,
		-1, "x", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "X Position",
		"Horizontal location of the window",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmWindow, posx), RawPropertyType(1), nullptr},
		Window_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Window_y_ = {
		{&rna_Window_width, 	&rna_Window_x,
		-1, "y", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Y Position",
		"Vertical location of the window",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmWindow, posy), RawPropertyType(1), nullptr},
		Window_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Window_width_ = {
		{&rna_Window_height, 	&rna_Window_y,
		-1, "width", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Width",
		"Window width",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmWindow, sizex), RawPropertyType(1), nullptr},
		Window_width_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Window_height_ = {
		{&rna_Window_stereo_3d_display, 	&rna_Window_width,
		-1, "height", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Height",
		"Window height",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmWindow, sizey), RawPropertyType(1), nullptr},
		Window_height_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Window_stereo_3d_display_ = {
		{&rna_Window_support_hdr_color, 	&rna_Window_height,
		-1, "stereo_3d_display", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stereo 3D Display",
		"Settings for stereo 3D display",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Window_stereo_3d_display_get, nullptr, nullptr, nullptr,RNA_Stereo3dDisplay
	};

	rna_Window_support_hdr_color_ = {
		{&rna_Window_modal_operators, 	&rna_Window_stereo_3d_display,
		-1, "support_hdr_color", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Support HDR Color",
		"The window has a HDR graphics buffer that wide gamut and high dynamic range colors can be written to, in extended sRGB color space.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Window_support_hdr_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Window_modal_operators_ = {
		{nullptr, 	&rna_Window_support_hdr_color,
		-1, "modal_operators", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Modal Operators",
		"A list of currently running modal operators",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Window_modal_operators_begin, Window_modal_operators_next, Window_modal_operators_end, Window_modal_operators_get, nullptr, Window_modal_operators_lookup_int, nullptr, nullptr, RNA_Operator
	};

	StructRNA *srna = RNA_Window;
	srna->cont.properties = {&rna_Window_rna_properties, &rna_Window_modal_operators};
	srna->identifier = "Window";
	srna->flag = 516;
	srna->name = "Window";
	srna->description = "Open window";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Window_rna_properties;
	{
	rna_Window_cursor_warp_x_ = {
		{&rna_Window_cursor_warp_y, 	nullptr,
		-1, "x", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Window_cursor_warp_y_ = {
		{nullptr, 	&rna_Window_cursor_warp_x,
		-1, "y", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Window_cursor_warp_x, &rna_Window_cursor_warp_y};
		func->identifier = "cursor_warp";
		func->description = "Set the cursor position";
		func->call = Window_cursor_warp_call;
		rna_Window_cursor_warp_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Window_cursor_set_cursor_ = {
		{nullptr, 	nullptr,
		-1, "cursor", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "cursor",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_window_cursor_items, 26, 1
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Window_cursor_set_cursor, &rna_Window_cursor_set_cursor};
		func->identifier = "cursor_set";
		func->description = "Set the cursor";
		func->call = Window_cursor_set_call;
		rna_Window_cursor_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Window_cursor_modal_set_cursor_ = {
		{nullptr, 	nullptr,
		-1, "cursor", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "cursor",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_window_cursor_items, 26, 1
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Window_cursor_modal_set_cursor, &rna_Window_cursor_modal_set_cursor};
		func->identifier = "cursor_modal_set";
		func->description = "Set the cursor, so the previous cursor can be restored";
		func->call = Window_cursor_modal_set_call;
		rna_Window_cursor_modal_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "cursor_modal_restore";
		func->description = "Restore the previous cursor after calling ``cursor_modal_set``";
		func->call = Window_cursor_modal_restore_call;
		rna_Window_cursor_modal_restore_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Window_event_simulate_type_ = {
		{&rna_Window_event_simulate_value, 	nullptr,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 207, 0
	};
	rna_Window_event_simulate_value_ = {
		{&rna_Window_event_simulate_unicode, 	&rna_Window_event_simulate_type,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
	};
	rna_Window_event_simulate_unicode_ = {
		{&rna_Window_event_simulate_x, 	&rna_Window_event_simulate_value,
		-1, "unicode", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_Window_event_simulate_x_ = {
		{&rna_Window_event_simulate_y, 	&rna_Window_event_simulate_unicode,
		-1, "x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Window_event_simulate_y_ = {
		{&rna_Window_event_simulate_shift, 	&rna_Window_event_simulate_x,
		-1, "y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Window_event_simulate_shift_ = {
		{&rna_Window_event_simulate_ctrl, 	&rna_Window_event_simulate_y,
		-1, "shift", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shift",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Window_event_simulate_ctrl_ = {
		{&rna_Window_event_simulate_alt, 	&rna_Window_event_simulate_shift,
		-1, "ctrl", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ctrl",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Window_event_simulate_alt_ = {
		{&rna_Window_event_simulate_oskey, 	&rna_Window_event_simulate_ctrl,
		-1, "alt", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Alt",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Window_event_simulate_oskey_ = {
		{&rna_Window_event_simulate_hyper, 	&rna_Window_event_simulate_alt,
		-1, "oskey", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "OS Key",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Window_event_simulate_hyper_ = {
		{&rna_Window_event_simulate_event, 	&rna_Window_event_simulate_oskey,
		-1, "hyper", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hyper",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Window_event_simulate_event_ = {
		{nullptr, 	&rna_Window_event_simulate_hyper,
		-1, "event", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Item",
		"Added key map item",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Event
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Window_event_simulate_type, &rna_Window_event_simulate_event};
		func->identifier = "event_simulate";
		func->flag = 16;
		func->description = "event_simulate";
		func->call = Window_event_simulate_call;
		func->c_ret = &rna_Window_event_simulate_event;
		rna_Window_event_simulate_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Window_find_playing_scene_scrub_ = {
		{&rna_Window_find_playing_scene_scene, 	nullptr,
		-1, "scrub", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scrubbing",
		"Check if time in the scene is being scrubbed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Window_find_playing_scene_scene_ = {
		{nullptr, 	&rna_Window_find_playing_scene_scrub,
		-1, "scene", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "Scene",
		"Scene that is currently playing",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Window_find_playing_scene_scrub, &rna_Window_find_playing_scene_scene};
		func->identifier = "find_playing_scene";
		func->description = "find_playing_scene";
		func->call = Window_find_playing_scene_call;
		func->c_ret = &rna_Window_find_playing_scene_scene;
		rna_Window_find_playing_scene_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Stereo 3D Display */
static CollectionPropertyRNA rna_Stereo3dDisplay_rna_properties_;
PropertyRNA &rna_Stereo3dDisplay_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Stereo3dDisplay_rna_properties_);

static PointerPropertyRNA rna_Stereo3dDisplay_rna_type_;
PropertyRNA &rna_Stereo3dDisplay_rna_type = reinterpret_cast<PropertyRNA &>(rna_Stereo3dDisplay_rna_type_);

static EnumPropertyRNA rna_Stereo3dDisplay_display_mode_;
PropertyRNA &rna_Stereo3dDisplay_display_mode = reinterpret_cast<PropertyRNA &>(rna_Stereo3dDisplay_display_mode_);

static EnumPropertyRNA rna_Stereo3dDisplay_anaglyph_type_;
PropertyRNA &rna_Stereo3dDisplay_anaglyph_type = reinterpret_cast<PropertyRNA &>(rna_Stereo3dDisplay_anaglyph_type_);

static EnumPropertyRNA rna_Stereo3dDisplay_interlace_type_;
PropertyRNA &rna_Stereo3dDisplay_interlace_type = reinterpret_cast<PropertyRNA &>(rna_Stereo3dDisplay_interlace_type_);

static BoolPropertyRNA rna_Stereo3dDisplay_use_interlace_swap_;
PropertyRNA &rna_Stereo3dDisplay_use_interlace_swap = reinterpret_cast<PropertyRNA &>(rna_Stereo3dDisplay_use_interlace_swap_);

static BoolPropertyRNA rna_Stereo3dDisplay_use_sidebyside_crosseyed_;
PropertyRNA &rna_Stereo3dDisplay_use_sidebyside_crosseyed = reinterpret_cast<PropertyRNA &>(rna_Stereo3dDisplay_use_sidebyside_crosseyed_);

StructRNA *RNA_Stereo3dDisplay;
void register_struct_Stereo3dDisplay(BlenderRNA &brna)
{
	rna_Stereo3dDisplay_rna_properties_ = {
		{&rna_Stereo3dDisplay_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Stereo3dDisplay_rna_properties_begin, Stereo3dDisplay_rna_properties_next, Stereo3dDisplay_rna_properties_end, Stereo3dDisplay_rna_properties_get, nullptr, nullptr, Stereo3dDisplay_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Stereo3dDisplay_rna_type_ = {
		{&rna_Stereo3dDisplay_display_mode, 	&rna_Stereo3dDisplay_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Stereo3dDisplay_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Stereo3dDisplay_display_mode_ = {
		{&rna_Stereo3dDisplay_anaglyph_type, 	&rna_Stereo3dDisplay_rna_type,
		-1, "display_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Display Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Stereo3dFormat, display_mode), RawPropertyType(2), nullptr},
		Stereo3dDisplay_display_mode_get, Stereo3dDisplay_display_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_stereo3d_display_items, 5, 0
	};

	rna_Stereo3dDisplay_anaglyph_type_ = {
		{&rna_Stereo3dDisplay_interlace_type, 	&rna_Stereo3dDisplay_display_mode,
		-1, "anaglyph_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Anaglyph Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Stereo3dFormat, anaglyph_type), RawPropertyType(2), nullptr},
		Stereo3dDisplay_anaglyph_type_get, Stereo3dDisplay_anaglyph_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_stereo3d_anaglyph_type_items, 3, 0
	};

	rna_Stereo3dDisplay_interlace_type_ = {
		{&rna_Stereo3dDisplay_use_interlace_swap, 	&rna_Stereo3dDisplay_anaglyph_type,
		-1, "interlace_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interlace Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Stereo3dFormat, interlace_type), RawPropertyType(2), nullptr},
		Stereo3dDisplay_interlace_type_get, Stereo3dDisplay_interlace_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_stereo3d_interlace_type_items, 3, 0
	};

	rna_Stereo3dDisplay_use_interlace_swap_ = {
		{&rna_Stereo3dDisplay_use_sidebyside_crosseyed, 	&rna_Stereo3dDisplay_interlace_type,
		-1, "use_interlace_swap", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Swap Left/Right",
		"Swap left and right stereo channels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Stereo3dDisplay_use_interlace_swap_get, Stereo3dDisplay_use_interlace_swap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Stereo3dDisplay_use_sidebyside_crosseyed_ = {
		{nullptr, 	&rna_Stereo3dDisplay_use_interlace_swap,
		-1, "use_sidebyside_crosseyed", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cross-Eyed",
		"Right eye should see left image and vice versa",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Stereo3dDisplay_use_sidebyside_crosseyed_get, Stereo3dDisplay_use_sidebyside_crosseyed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Stereo3dDisplay;
	srna->cont.properties = {&rna_Stereo3dDisplay_rna_properties, &rna_Stereo3dDisplay_use_sidebyside_crosseyed};
	srna->identifier = "Stereo3dDisplay";
	srna->flag = 516;
	srna->name = "Stereo 3D Display";
	srna->description = "Settings for stereo 3D display";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Stereo3dDisplay_rna_properties;
};

/* Report */
static CollectionPropertyRNA rna_Report_rna_properties_;
PropertyRNA &rna_Report_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Report_rna_properties_);

static PointerPropertyRNA rna_Report_rna_type_;
PropertyRNA &rna_Report_rna_type = reinterpret_cast<PropertyRNA &>(rna_Report_rna_type_);

static IntPropertyRNA rna_Report_session_uid_;
PropertyRNA &rna_Report_session_uid = reinterpret_cast<PropertyRNA &>(rna_Report_session_uid_);

static EnumPropertyRNA rna_Report_type_;
PropertyRNA &rna_Report_type = reinterpret_cast<PropertyRNA &>(rna_Report_type_);

static StringPropertyRNA rna_Report_message_;
PropertyRNA &rna_Report_message = reinterpret_cast<PropertyRNA &>(rna_Report_message_);

StructRNA *RNA_Report;
void register_struct_Report(BlenderRNA &brna)
{
	rna_Report_rna_properties_ = {
		{&rna_Report_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Report_rna_properties_begin, Report_rna_properties_next, Report_rna_properties_end, Report_rna_properties_get, nullptr, nullptr, Report_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Report_rna_type_ = {
		{&rna_Report_session_uid, 	&rna_Report_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Report_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Report_session_uid_ = {
		{&rna_Report_type, 	&rna_Report_rna_type,
		-1, "session_uid", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Session UID",
		"Unique per-session report identifier",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Report_session_uid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Report_type_ = {
		{&rna_Report_message, 	&rna_Report_session_uid,
		-1, "type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"Report type (severity)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Report_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_wm_report_items, 9, 1
	};

	rna_Report_message_ = {
		{nullptr, 	&rna_Report_type,
		-1, "message", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Message",
		"Report message text",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Report_message_get, Report_message_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_Report;
	srna->cont.properties = {&rna_Report_rna_properties, &rna_Report_message};
	srna->identifier = "Report";
	srna->flag = 516;
	srna->name = "Report";
	srna->description = "Report entry";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Report_rna_properties;
};

/* Window Manager */
static CollectionPropertyRNA rna_WindowManager_operators_;
PropertyRNA &rna_WindowManager_operators = reinterpret_cast<PropertyRNA &>(rna_WindowManager_operators_);

static CollectionPropertyRNA rna_WindowManager_reports_;
PropertyRNA &rna_WindowManager_reports = reinterpret_cast<PropertyRNA &>(rna_WindowManager_reports_);

static CollectionPropertyRNA rna_WindowManager_windows_;
PropertyRNA &rna_WindowManager_windows = reinterpret_cast<PropertyRNA &>(rna_WindowManager_windows_);

static CollectionPropertyRNA rna_WindowManager_keyconfigs_;
PropertyRNA &rna_WindowManager_keyconfigs = reinterpret_cast<PropertyRNA &>(rna_WindowManager_keyconfigs_);

static PointerPropertyRNA rna_WindowManager_undo_stack_;
PropertyRNA &rna_WindowManager_undo_stack = reinterpret_cast<PropertyRNA &>(rna_WindowManager_undo_stack_);

static PointerPropertyRNA rna_WindowManager_xr_session_settings_;
PropertyRNA &rna_WindowManager_xr_session_settings = reinterpret_cast<PropertyRNA &>(rna_WindowManager_xr_session_settings_);

static PointerPropertyRNA rna_WindowManager_xr_session_state_;
PropertyRNA &rna_WindowManager_xr_session_state = reinterpret_cast<PropertyRNA &>(rna_WindowManager_xr_session_state_);

static IntPropertyRNA rna_WindowManager_extensions_updates_;
PropertyRNA &rna_WindowManager_extensions_updates = reinterpret_cast<PropertyRNA &>(rna_WindowManager_extensions_updates_);

static IntPropertyRNA rna_WindowManager_extensions_blocked_;
PropertyRNA &rna_WindowManager_extensions_blocked = reinterpret_cast<PropertyRNA &>(rna_WindowManager_extensions_blocked_);

static BoolPropertyRNA rna_WindowManager_is_event_handling_break_;
PropertyRNA &rna_WindowManager_is_event_handling_break = reinterpret_cast<PropertyRNA &>(rna_WindowManager_is_event_handling_break_);

static BoolPropertyRNA rna_WindowManager_is_interface_locked_;
PropertyRNA &rna_WindowManager_is_interface_locked = reinterpret_cast<PropertyRNA &>(rna_WindowManager_is_interface_locked_);

static PointerPropertyRNA rna_WindowManager_fileselect_add_operator_;
PropertyRNA &rna_WindowManager_fileselect_add_operator = reinterpret_cast<PropertyRNA &>(rna_WindowManager_fileselect_add_operator_);

FunctionRNA *rna_WindowManager_fileselect_add_func;
static PointerPropertyRNA rna_WindowManager_modal_handler_add_operator_;
PropertyRNA &rna_WindowManager_modal_handler_add_operator = reinterpret_cast<PropertyRNA &>(rna_WindowManager_modal_handler_add_operator_);

static BoolPropertyRNA rna_WindowManager_modal_handler_add_handle_;
PropertyRNA &rna_WindowManager_modal_handler_add_handle = reinterpret_cast<PropertyRNA &>(rna_WindowManager_modal_handler_add_handle_);

FunctionRNA *rna_WindowManager_modal_handler_add_func;
static FloatPropertyRNA rna_WindowManager_event_timer_add_time_step_;
PropertyRNA &rna_WindowManager_event_timer_add_time_step = reinterpret_cast<PropertyRNA &>(rna_WindowManager_event_timer_add_time_step_);

static PointerPropertyRNA rna_WindowManager_event_timer_add_window_;
PropertyRNA &rna_WindowManager_event_timer_add_window = reinterpret_cast<PropertyRNA &>(rna_WindowManager_event_timer_add_window_);

static PointerPropertyRNA rna_WindowManager_event_timer_add_result_;
PropertyRNA &rna_WindowManager_event_timer_add_result = reinterpret_cast<PropertyRNA &>(rna_WindowManager_event_timer_add_result_);

FunctionRNA *rna_WindowManager_event_timer_add_func;
static PointerPropertyRNA rna_WindowManager_event_timer_remove_timer_;
PropertyRNA &rna_WindowManager_event_timer_remove_timer = reinterpret_cast<PropertyRNA &>(rna_WindowManager_event_timer_remove_timer_);

FunctionRNA *rna_WindowManager_event_timer_remove_func;
static StringPropertyRNA rna_WindowManager_gizmo_group_type_ensure_identifier_;
PropertyRNA &rna_WindowManager_gizmo_group_type_ensure_identifier = reinterpret_cast<PropertyRNA &>(rna_WindowManager_gizmo_group_type_ensure_identifier_);

FunctionRNA *rna_WindowManager_gizmo_group_type_ensure_func;
static StringPropertyRNA rna_WindowManager_gizmo_group_type_unlink_delayed_identifier_;
PropertyRNA &rna_WindowManager_gizmo_group_type_unlink_delayed_identifier = reinterpret_cast<PropertyRNA &>(rna_WindowManager_gizmo_group_type_unlink_delayed_identifier_);

FunctionRNA *rna_WindowManager_gizmo_group_type_unlink_delayed_func;
static FloatPropertyRNA rna_WindowManager_progress_begin_min_;
PropertyRNA &rna_WindowManager_progress_begin_min = reinterpret_cast<PropertyRNA &>(rna_WindowManager_progress_begin_min_);

static FloatPropertyRNA rna_WindowManager_progress_begin_max_;
PropertyRNA &rna_WindowManager_progress_begin_max = reinterpret_cast<PropertyRNA &>(rna_WindowManager_progress_begin_max_);

FunctionRNA *rna_WindowManager_progress_begin_func;
static FloatPropertyRNA rna_WindowManager_progress_update_value_;
PropertyRNA &rna_WindowManager_progress_update_value = reinterpret_cast<PropertyRNA &>(rna_WindowManager_progress_update_value_);

FunctionRNA *rna_WindowManager_progress_update_func;
FunctionRNA *rna_WindowManager_progress_end_func;
static PointerPropertyRNA rna_WindowManager_invoke_props_popup_operator_;
PropertyRNA &rna_WindowManager_invoke_props_popup_operator = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_popup_operator_);

static PointerPropertyRNA rna_WindowManager_invoke_props_popup_event_;
PropertyRNA &rna_WindowManager_invoke_props_popup_event = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_popup_event_);

static EnumPropertyRNA rna_WindowManager_invoke_props_popup_result_;
PropertyRNA &rna_WindowManager_invoke_props_popup_result = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_popup_result_);

FunctionRNA *rna_WindowManager_invoke_props_popup_func;
static PointerPropertyRNA rna_WindowManager_invoke_props_dialog_operator_;
PropertyRNA &rna_WindowManager_invoke_props_dialog_operator = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_dialog_operator_);

static IntPropertyRNA rna_WindowManager_invoke_props_dialog_width_;
PropertyRNA &rna_WindowManager_invoke_props_dialog_width = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_dialog_width_);

static EnumPropertyRNA rna_WindowManager_invoke_props_dialog_result_;
PropertyRNA &rna_WindowManager_invoke_props_dialog_result = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_dialog_result_);

static StringPropertyRNA rna_WindowManager_invoke_props_dialog_title_;
PropertyRNA &rna_WindowManager_invoke_props_dialog_title = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_dialog_title_);

static StringPropertyRNA rna_WindowManager_invoke_props_dialog_confirm_text_;
PropertyRNA &rna_WindowManager_invoke_props_dialog_confirm_text = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_dialog_confirm_text_);

static BoolPropertyRNA rna_WindowManager_invoke_props_dialog_cancel_default_;
PropertyRNA &rna_WindowManager_invoke_props_dialog_cancel_default = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_dialog_cancel_default_);

static StringPropertyRNA rna_WindowManager_invoke_props_dialog_text_ctxt_;
PropertyRNA &rna_WindowManager_invoke_props_dialog_text_ctxt = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_dialog_text_ctxt_);

static BoolPropertyRNA rna_WindowManager_invoke_props_dialog_translate_;
PropertyRNA &rna_WindowManager_invoke_props_dialog_translate = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_props_dialog_translate_);

FunctionRNA *rna_WindowManager_invoke_props_dialog_func;
static PointerPropertyRNA rna_WindowManager_invoke_search_popup_operator_;
PropertyRNA &rna_WindowManager_invoke_search_popup_operator = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_search_popup_operator_);

FunctionRNA *rna_WindowManager_invoke_search_popup_func;
static PointerPropertyRNA rna_WindowManager_invoke_popup_operator_;
PropertyRNA &rna_WindowManager_invoke_popup_operator = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_popup_operator_);

static IntPropertyRNA rna_WindowManager_invoke_popup_width_;
PropertyRNA &rna_WindowManager_invoke_popup_width = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_popup_width_);

static EnumPropertyRNA rna_WindowManager_invoke_popup_result_;
PropertyRNA &rna_WindowManager_invoke_popup_result = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_popup_result_);

FunctionRNA *rna_WindowManager_invoke_popup_func;
static PointerPropertyRNA rna_WindowManager_invoke_confirm_operator_;
PropertyRNA &rna_WindowManager_invoke_confirm_operator = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_confirm_operator_);

static PointerPropertyRNA rna_WindowManager_invoke_confirm_event_;
PropertyRNA &rna_WindowManager_invoke_confirm_event = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_confirm_event_);

static EnumPropertyRNA rna_WindowManager_invoke_confirm_result_;
PropertyRNA &rna_WindowManager_invoke_confirm_result = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_confirm_result_);

static StringPropertyRNA rna_WindowManager_invoke_confirm_title_;
PropertyRNA &rna_WindowManager_invoke_confirm_title = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_confirm_title_);

static StringPropertyRNA rna_WindowManager_invoke_confirm_message_;
PropertyRNA &rna_WindowManager_invoke_confirm_message = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_confirm_message_);

static StringPropertyRNA rna_WindowManager_invoke_confirm_confirm_text_;
PropertyRNA &rna_WindowManager_invoke_confirm_confirm_text = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_confirm_confirm_text_);

static EnumPropertyRNA rna_WindowManager_invoke_confirm_icon_;
PropertyRNA &rna_WindowManager_invoke_confirm_icon = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_confirm_icon_);

static StringPropertyRNA rna_WindowManager_invoke_confirm_text_ctxt_;
PropertyRNA &rna_WindowManager_invoke_confirm_text_ctxt = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_confirm_text_ctxt_);

static BoolPropertyRNA rna_WindowManager_invoke_confirm_translate_;
PropertyRNA &rna_WindowManager_invoke_confirm_translate = reinterpret_cast<PropertyRNA &>(rna_WindowManager_invoke_confirm_translate_);

FunctionRNA *rna_WindowManager_invoke_confirm_func;
static StringPropertyRNA rna_WindowManager_popmenu_begin__internal_title_;
PropertyRNA &rna_WindowManager_popmenu_begin__internal_title = reinterpret_cast<PropertyRNA &>(rna_WindowManager_popmenu_begin__internal_title_);

static EnumPropertyRNA rna_WindowManager_popmenu_begin__internal_icon_;
PropertyRNA &rna_WindowManager_popmenu_begin__internal_icon = reinterpret_cast<PropertyRNA &>(rna_WindowManager_popmenu_begin__internal_icon_);

static PointerPropertyRNA rna_WindowManager_popmenu_begin__internal_menu_;
PropertyRNA &rna_WindowManager_popmenu_begin__internal_menu = reinterpret_cast<PropertyRNA &>(rna_WindowManager_popmenu_begin__internal_menu_);

FunctionRNA *rna_WindowManager_popmenu_begin__internal_func;
static PointerPropertyRNA rna_WindowManager_popmenu_end__internal_menu_;
PropertyRNA &rna_WindowManager_popmenu_end__internal_menu = reinterpret_cast<PropertyRNA &>(rna_WindowManager_popmenu_end__internal_menu_);

FunctionRNA *rna_WindowManager_popmenu_end__internal_func;
static IntPropertyRNA rna_WindowManager_popover_begin__internal_ui_units_x_;
PropertyRNA &rna_WindowManager_popover_begin__internal_ui_units_x = reinterpret_cast<PropertyRNA &>(rna_WindowManager_popover_begin__internal_ui_units_x_);

static PointerPropertyRNA rna_WindowManager_popover_begin__internal_menu_;
PropertyRNA &rna_WindowManager_popover_begin__internal_menu = reinterpret_cast<PropertyRNA &>(rna_WindowManager_popover_begin__internal_menu_);

static BoolPropertyRNA rna_WindowManager_popover_begin__internal_from_active_button_;
PropertyRNA &rna_WindowManager_popover_begin__internal_from_active_button = reinterpret_cast<PropertyRNA &>(rna_WindowManager_popover_begin__internal_from_active_button_);

FunctionRNA *rna_WindowManager_popover_begin__internal_func;
static PointerPropertyRNA rna_WindowManager_popover_end__internal_menu_;
PropertyRNA &rna_WindowManager_popover_end__internal_menu = reinterpret_cast<PropertyRNA &>(rna_WindowManager_popover_end__internal_menu_);

static PointerPropertyRNA rna_WindowManager_popover_end__internal_keymap_;
PropertyRNA &rna_WindowManager_popover_end__internal_keymap = reinterpret_cast<PropertyRNA &>(rna_WindowManager_popover_end__internal_keymap_);

FunctionRNA *rna_WindowManager_popover_end__internal_func;
static StringPropertyRNA rna_WindowManager_piemenu_begin__internal_title_;
PropertyRNA &rna_WindowManager_piemenu_begin__internal_title = reinterpret_cast<PropertyRNA &>(rna_WindowManager_piemenu_begin__internal_title_);

static EnumPropertyRNA rna_WindowManager_piemenu_begin__internal_icon_;
PropertyRNA &rna_WindowManager_piemenu_begin__internal_icon = reinterpret_cast<PropertyRNA &>(rna_WindowManager_piemenu_begin__internal_icon_);

static PointerPropertyRNA rna_WindowManager_piemenu_begin__internal_event_;
PropertyRNA &rna_WindowManager_piemenu_begin__internal_event = reinterpret_cast<PropertyRNA &>(rna_WindowManager_piemenu_begin__internal_event_);

static PointerPropertyRNA rna_WindowManager_piemenu_begin__internal_menu_pie_;
PropertyRNA &rna_WindowManager_piemenu_begin__internal_menu_pie = reinterpret_cast<PropertyRNA &>(rna_WindowManager_piemenu_begin__internal_menu_pie_);

FunctionRNA *rna_WindowManager_piemenu_begin__internal_func;
static PointerPropertyRNA rna_WindowManager_piemenu_end__internal_menu_;
PropertyRNA &rna_WindowManager_piemenu_end__internal_menu = reinterpret_cast<PropertyRNA &>(rna_WindowManager_piemenu_end__internal_menu_);

FunctionRNA *rna_WindowManager_piemenu_end__internal_func;
static StringPropertyRNA rna_WindowManager_operator_properties_last_operator_;
PropertyRNA &rna_WindowManager_operator_properties_last_operator = reinterpret_cast<PropertyRNA &>(rna_WindowManager_operator_properties_last_operator_);

static PointerPropertyRNA rna_WindowManager_operator_properties_last_result_;
PropertyRNA &rna_WindowManager_operator_properties_last_result = reinterpret_cast<PropertyRNA &>(rna_WindowManager_operator_properties_last_result_);

FunctionRNA *rna_WindowManager_operator_properties_last_func;
FunctionRNA *rna_WindowManager_print_undo_steps_func;
FunctionRNA *rna_WindowManager_tag_script_reload_func;
static StringPropertyRNA rna_WindowManager_asset_library_status_begin_loading_library_url_;
PropertyRNA &rna_WindowManager_asset_library_status_begin_loading_library_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_begin_loading_library_url_);

static FloatPropertyRNA rna_WindowManager_asset_library_status_begin_loading_timeout_;
PropertyRNA &rna_WindowManager_asset_library_status_begin_loading_timeout = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_begin_loading_timeout_);

FunctionRNA *rna_WindowManager_asset_library_status_begin_loading_func;
static StringPropertyRNA rna_WindowManager_asset_library_status_ping_still_loading_library_url_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_still_loading_library_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_still_loading_library_url_);

FunctionRNA *rna_WindowManager_asset_library_status_ping_still_loading_func;
static StringPropertyRNA rna_WindowManager_asset_library_status_ping_metafiles_in_place_library_url_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_metafiles_in_place_library_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_metafiles_in_place_library_url_);

FunctionRNA *rna_WindowManager_asset_library_status_ping_metafiles_in_place_func;
static StringPropertyRNA rna_WindowManager_asset_library_status_ping_loaded_new_pages_library_url_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_loaded_new_pages_library_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_loaded_new_pages_library_url_);

FunctionRNA *rna_WindowManager_asset_library_status_ping_loaded_new_pages_func;
static StringPropertyRNA rna_WindowManager_asset_library_status_ping_loaded_new_preview_preview_full_path_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_loaded_new_preview_preview_full_path = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_loaded_new_preview_preview_full_path_);

FunctionRNA *rna_WindowManager_asset_library_status_ping_loaded_new_preview_func;
static StringPropertyRNA rna_WindowManager_asset_library_status_ping_asset_file_progress_absolute_file_url_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_progress_absolute_file_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_asset_file_progress_absolute_file_url_);

static IntPropertyRNA rna_WindowManager_asset_library_status_ping_asset_file_progress_size_written_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_progress_size_written = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_asset_file_progress_size_written_);

FunctionRNA *rna_WindowManager_asset_library_status_ping_asset_file_progress_func;
static StringPropertyRNA rna_WindowManager_asset_library_status_ping_asset_file_succeeded_library_url_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_succeeded_library_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_asset_file_succeeded_library_url_);

static StringPropertyRNA rna_WindowManager_asset_library_status_ping_asset_file_succeeded_absolute_file_url_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_succeeded_absolute_file_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_asset_file_succeeded_absolute_file_url_);

static StringPropertyRNA rna_WindowManager_asset_library_status_ping_asset_file_succeeded_local_file_abspath_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_succeeded_local_file_abspath = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_asset_file_succeeded_local_file_abspath_);

FunctionRNA *rna_WindowManager_asset_library_status_ping_asset_file_succeeded_func;
static StringPropertyRNA rna_WindowManager_asset_library_status_ping_asset_file_failed_library_url_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_failed_library_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_asset_file_failed_library_url_);

static StringPropertyRNA rna_WindowManager_asset_library_status_ping_asset_file_failed_absolute_file_url_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_failed_absolute_file_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_asset_file_failed_absolute_file_url_);

static StringPropertyRNA rna_WindowManager_asset_library_status_ping_asset_file_failed_local_file_abspath_;
PropertyRNA &rna_WindowManager_asset_library_status_ping_asset_file_failed_local_file_abspath = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_ping_asset_file_failed_local_file_abspath_);

FunctionRNA *rna_WindowManager_asset_library_status_ping_asset_file_failed_func;
FunctionRNA *rna_WindowManager_asset_library_status_ping_finished_download_queue_func;
static StringPropertyRNA rna_WindowManager_asset_library_status_finished_loading_library_url_;
PropertyRNA &rna_WindowManager_asset_library_status_finished_loading_library_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_finished_loading_library_url_);

FunctionRNA *rna_WindowManager_asset_library_status_finished_loading_func;
static StringPropertyRNA rna_WindowManager_asset_library_status_failed_loading_library_url_;
PropertyRNA &rna_WindowManager_asset_library_status_failed_loading_library_url = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_failed_loading_library_url_);

static StringPropertyRNA rna_WindowManager_asset_library_status_failed_loading_message_;
PropertyRNA &rna_WindowManager_asset_library_status_failed_loading_message = reinterpret_cast<PropertyRNA &>(rna_WindowManager_asset_library_status_failed_loading_message_);

FunctionRNA *rna_WindowManager_asset_library_status_failed_loading_func;
FunctionRNA *rna_WindowManager_register_node_group_operators_func;
StructRNA *RNA_WindowManager;
void register_struct_WindowManager(BlenderRNA &brna)
{
	rna_WindowManager_operators_ = {
		{&rna_WindowManager_reports, 	nullptr,
		-1, "operators", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Operators",
		"Operator registry",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WindowManager_operators_begin, WindowManager_operators_next, WindowManager_operators_end, WindowManager_operators_get, nullptr, WindowManager_operators_lookup_int, nullptr, nullptr, RNA_Operator
	};

	rna_WindowManager_reports_ = {
		{&rna_WindowManager_windows, 	&rna_WindowManager_operators,
		-1, "reports", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reports",
		"Collection of reports",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WindowManager_reports_begin, WindowManager_reports_next, WindowManager_reports_end, WindowManager_reports_get, nullptr, WindowManager_reports_lookup_int, nullptr, nullptr, RNA_Report
	};

	rna_WindowManager_windows_ = {
		{&rna_WindowManager_keyconfigs, 	&rna_WindowManager_reports,
		-1, "windows", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Windows",
		"Open windows",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_Windows},
		WindowManager_windows_begin, WindowManager_windows_next, WindowManager_windows_end, WindowManager_windows_get, nullptr, WindowManager_windows_lookup_int, nullptr, nullptr, RNA_Window
	};

	rna_WindowManager_keyconfigs_ = {
		{&rna_WindowManager_undo_stack, 	&rna_WindowManager_windows,
		-1, "keyconfigs", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Key Configurations",
		"Registered key configurations",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_KeyConfigurations},
		WindowManager_keyconfigs_begin, WindowManager_keyconfigs_next, WindowManager_keyconfigs_end, WindowManager_keyconfigs_get, nullptr, WindowManager_keyconfigs_lookup_int, nullptr, nullptr, RNA_KeyConfig
	};

	rna_WindowManager_undo_stack_ = {
		{&rna_WindowManager_xr_session_settings, 	&rna_WindowManager_keyconfigs,
		-1, "undo_stack", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Undo Stack",
		"Read-only access to the undo stack",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WindowManager_undo_stack_get, nullptr, nullptr, nullptr,RNA_UndoStack
	};

	rna_WindowManager_xr_session_settings_ = {
		{&rna_WindowManager_xr_session_state, 	&rna_WindowManager_undo_stack,
		-1, "xr_session_settings", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "XR Session Settings",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WindowManager_xr_session_settings_get, nullptr, nullptr, nullptr,RNA_XrSessionSettings
	};

	rna_WindowManager_xr_session_state_ = {
		{&rna_WindowManager_extensions_updates, 	&rna_WindowManager_xr_session_settings,
		-1, "xr_session_state", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "XR Session State",
		"Runtime state information about the VR session",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WindowManager_xr_session_state_get, nullptr, nullptr, nullptr,RNA_XrSessionState
	};

	rna_WindowManager_extensions_updates_ = {
		{&rna_WindowManager_extensions_blocked, 	&rna_WindowManager_xr_session_state,
		-1, "extensions_updates", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Extensions Updates",
		"Number of extensions with available update",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_WindowManager_extensions_statusbar_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmWindowManager, extensions_updates), RawPropertyType(0), nullptr},
		WindowManager_extensions_updates_get, WindowManager_extensions_updates_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_WindowManager_extensions_blocked_ = {
		{&rna_WindowManager_is_event_handling_break, 	&rna_WindowManager_extensions_updates,
		-1, "extensions_blocked", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Extensions Blocked",
		"Number of installed extensions which are blocked",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_WindowManager_extensions_statusbar_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmWindowManager, extensions_blocked), RawPropertyType(0), nullptr},
		WindowManager_extensions_blocked_get, WindowManager_extensions_blocked_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_WindowManager_is_event_handling_break_ = {
		{&rna_WindowManager_is_interface_locked, 	&rna_WindowManager_extensions_blocked,
		-1, "is_event_handling_break", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Event Handling Break",
		"Remaining events in the queue are delayed until the next main loop iteration",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WindowManager_is_event_handling_break_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_WindowManager_is_interface_locked_ = {
		{nullptr, 	&rna_WindowManager_is_event_handling_break,
		-1, "is_interface_locked", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Interface Locked",
		"If true, the interface is currently locked by a running job and data should not be modified from application timers. Otherwise, the running job might conflict with the handler causing unexpected results or even crashes.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WindowManager_is_interface_locked_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_WindowManager;
	srna->cont.properties = {&rna_WindowManager_operators, &rna_WindowManager_is_interface_locked};
	srna->identifier = "WindowManager";
	srna->flag = 517;
	srna->name = "Window Manager";
	srna->description = "Window manager data-block defining open windows and other user interface data";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	rna_WindowManager_fileselect_add_operator_ = {
		{nullptr, 	nullptr,
		-1, "operator", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Operator to call",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Operator
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_fileselect_add_operator, &rna_WindowManager_fileselect_add_operator};
		func->identifier = "fileselect_add";
		func->flag = 9;
		func->description = "Opens a file selector with an operator.";
		func->call = WindowManager_fileselect_add_call;
		rna_WindowManager_fileselect_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_modal_handler_add_operator_ = {
		{&rna_WindowManager_modal_handler_add_handle, 	nullptr,
		-1, "operator", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Operator to call",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Operator
	};
	rna_WindowManager_modal_handler_add_handle_ = {
		{nullptr, 	&rna_WindowManager_modal_handler_add_operator,
		-1, "handle", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Whether adding the handler was successful",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_modal_handler_add_operator, &rna_WindowManager_modal_handler_add_handle};
		func->identifier = "modal_handler_add";
		func->flag = 25;
		func->description = "Add a modal handler to the window manager, for the given modal operator (called by invoke() with self, just before returning {\'RUNNING_MODAL\'})";
		func->call = WindowManager_modal_handler_add_call;
		func->c_ret = &rna_WindowManager_modal_handler_add_handle;
		rna_WindowManager_modal_handler_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_event_timer_add_time_step_ = {
		{&rna_WindowManager_event_timer_add_window, 	nullptr,
		-1, "time_step", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Time Step",
		"Interval in seconds between timer events",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_WindowManager_event_timer_add_window_ = {
		{&rna_WindowManager_event_timer_add_result, 	&rna_WindowManager_event_timer_add_time_step,
		-1, "window", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Window to attach the timer to, or None",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Window
	};
	rna_WindowManager_event_timer_add_result_ = {
		{nullptr, 	&rna_WindowManager_event_timer_add_window,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Timer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_event_timer_add_time_step, &rna_WindowManager_event_timer_add_result};
		func->identifier = "event_timer_add";
		func->description = "Add a timer to the given window, to generate periodic \'TIMER\' events";
		func->call = WindowManager_event_timer_add_call;
		func->c_ret = &rna_WindowManager_event_timer_add_result;
		rna_WindowManager_event_timer_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_event_timer_remove_timer_ = {
		{nullptr, 	nullptr,
		-1, "timer", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Timer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_event_timer_remove_timer, &rna_WindowManager_event_timer_remove_timer};
		func->identifier = "event_timer_remove";
		func->description = "event_timer_remove";
		func->call = WindowManager_event_timer_remove_call;
		rna_WindowManager_event_timer_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_gizmo_group_type_ensure_identifier_ = {
		{nullptr, 	nullptr,
		-1, "identifier", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Gizmo group type name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_gizmo_group_type_ensure_identifier, &rna_WindowManager_gizmo_group_type_ensure_identifier};
		func->identifier = "gizmo_group_type_ensure";
		func->flag = 17;
		func->description = "Activate an existing widget group (when the persistent option isn\'t set)";
		func->call = WindowManager_gizmo_group_type_ensure_call;
		rna_WindowManager_gizmo_group_type_ensure_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_gizmo_group_type_unlink_delayed_identifier_ = {
		{nullptr, 	nullptr,
		-1, "identifier", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Gizmo group type name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_gizmo_group_type_unlink_delayed_identifier, &rna_WindowManager_gizmo_group_type_unlink_delayed_identifier};
		func->identifier = "gizmo_group_type_unlink_delayed";
		func->flag = 17;
		func->description = "Unlink a widget group (when the persistent option is set)";
		func->call = WindowManager_gizmo_group_type_unlink_delayed_call;
		rna_WindowManager_gizmo_group_type_unlink_delayed_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_progress_begin_min_ = {
		{&rna_WindowManager_progress_begin_max, 	nullptr,
		-1, "min", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "min",
		"any value in range [0,9999]",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_WindowManager_progress_begin_max_ = {
		{nullptr, 	&rna_WindowManager_progress_begin_min,
		-1, "max", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "max",
		"any value in range [min+1,9998]",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_progress_begin_min, &rna_WindowManager_progress_begin_max};
		func->identifier = "progress_begin";
		func->description = "Start progress report";
		func->call = WindowManager_progress_begin_call;
		rna_WindowManager_progress_begin_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_progress_update_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "value",
		"Any value between min and max as set in progress_begin()",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_progress_update_value, &rna_WindowManager_progress_update_value};
		func->identifier = "progress_update";
		func->description = "Update the progress feedback";
		func->call = WindowManager_progress_update_call;
		rna_WindowManager_progress_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "progress_end";
		func->description = "Terminate progress report";
		func->call = WindowManager_progress_end_call;
		rna_WindowManager_progress_end_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_invoke_props_popup_operator_ = {
		{&rna_WindowManager_invoke_props_popup_event, 	nullptr,
		-1, "operator", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Operator to call",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Operator
	};
	rna_WindowManager_invoke_props_popup_event_ = {
		{&rna_WindowManager_invoke_props_popup_result, 	&rna_WindowManager_invoke_props_popup_operator,
		-1, "event", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Event",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Event
	};
	rna_WindowManager_invoke_props_popup_result_ = {
		{nullptr, 	&rna_WindowManager_invoke_props_popup_event,
		-1, "result", 2097155, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_invoke_props_popup_operator, &rna_WindowManager_invoke_props_popup_result};
		func->identifier = "invoke_props_popup";
		func->flag = 9;
		func->description = "Operator popup invoke (show operator properties and execute it automatically on changes)";
		func->call = WindowManager_invoke_props_popup_call;
		func->c_ret = &rna_WindowManager_invoke_props_popup_result;
		rna_WindowManager_invoke_props_popup_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_invoke_props_dialog_operator_ = {
		{&rna_WindowManager_invoke_props_dialog_width, 	nullptr,
		-1, "operator", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Operator to call",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Operator
	};
	rna_WindowManager_invoke_props_dialog_width_ = {
		{&rna_WindowManager_invoke_props_dialog_result, 	&rna_WindowManager_invoke_props_dialog_operator,
		-1, "width", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Width of the popup",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 300, nullptr
	};
	rna_WindowManager_invoke_props_dialog_result_ = {
		{&rna_WindowManager_invoke_props_dialog_title, 	&rna_WindowManager_invoke_props_dialog_width,
		-1, "result", 2097155, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
	};
	rna_WindowManager_invoke_props_dialog_title_ = {
		{&rna_WindowManager_invoke_props_dialog_confirm_text, 	&rna_WindowManager_invoke_props_dialog_result,
		-1, "title", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Title",
		"Optional text to show as title of the popup",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_invoke_props_dialog_confirm_text_ = {
		{&rna_WindowManager_invoke_props_dialog_cancel_default, 	&rna_WindowManager_invoke_props_dialog_title,
		-1, "confirm_text", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Confirm Text",
		"Optional text to show instead to the default \"OK\" confirmation button text",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_invoke_props_dialog_cancel_default_ = {
		{&rna_WindowManager_invoke_props_dialog_text_ctxt, 	&rna_WindowManager_invoke_props_dialog_confirm_text,
		-1, "cancel_default", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "cancel_default",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_WindowManager_invoke_props_dialog_text_ctxt_ = {
		{&rna_WindowManager_invoke_props_dialog_translate, 	&rna_WindowManager_invoke_props_dialog_cancel_default,
		-1, "text_ctxt", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Override automatic translation context of the given text",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_invoke_props_dialog_translate_ = {
		{nullptr, 	&rna_WindowManager_invoke_props_dialog_text_ctxt,
		-1, "translate", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Translate the given text, when UI translation is enabled",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_invoke_props_dialog_operator, &rna_WindowManager_invoke_props_dialog_translate};
		func->identifier = "invoke_props_dialog";
		func->flag = 9;
		func->description = "Operator dialog (non-autoexec popup) invoke (show operator properties and only execute it on click on OK button)";
		func->call = WindowManager_invoke_props_dialog_call;
		func->c_ret = &rna_WindowManager_invoke_props_dialog_result;
		rna_WindowManager_invoke_props_dialog_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_invoke_search_popup_operator_ = {
		{nullptr, 	nullptr,
		-1, "operator", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Operator to call",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Operator
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_invoke_search_popup_operator, &rna_WindowManager_invoke_search_popup_operator};
		func->identifier = "invoke_search_popup";
		func->flag = 9;
		func->description = "Operator search popup invoke which searches values of the operator\'s :class:`bpy.types.Operator.bl_property` (which must be an EnumProperty), executing it on confirmation";
		func->call = WindowManager_invoke_search_popup_call;
		rna_WindowManager_invoke_search_popup_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_invoke_popup_operator_ = {
		{&rna_WindowManager_invoke_popup_width, 	nullptr,
		-1, "operator", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Operator to call",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Operator
	};
	rna_WindowManager_invoke_popup_width_ = {
		{&rna_WindowManager_invoke_popup_result, 	&rna_WindowManager_invoke_popup_operator,
		-1, "width", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Width of the popup",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 300, nullptr
	};
	rna_WindowManager_invoke_popup_result_ = {
		{nullptr, 	&rna_WindowManager_invoke_popup_width,
		-1, "result", 2097155, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_invoke_popup_operator, &rna_WindowManager_invoke_popup_result};
		func->identifier = "invoke_popup";
		func->flag = 9;
		func->description = "Operator popup invoke (only shows operator\'s properties, without executing it)";
		func->call = WindowManager_invoke_popup_call;
		func->c_ret = &rna_WindowManager_invoke_popup_result;
		rna_WindowManager_invoke_popup_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_invoke_confirm_operator_ = {
		{&rna_WindowManager_invoke_confirm_event, 	nullptr,
		-1, "operator", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Operator to call",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Operator
	};
	rna_WindowManager_invoke_confirm_event_ = {
		{&rna_WindowManager_invoke_confirm_result, 	&rna_WindowManager_invoke_confirm_operator,
		-1, "event", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Event",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Event
	};
	rna_WindowManager_invoke_confirm_result_ = {
		{&rna_WindowManager_invoke_confirm_title, 	&rna_WindowManager_invoke_confirm_event,
		-1, "result", 2097155, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
	};
	rna_WindowManager_invoke_confirm_title_ = {
		{&rna_WindowManager_invoke_confirm_message, 	&rna_WindowManager_invoke_confirm_result,
		-1, "title", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Title",
		"Optional text to show as title of the popup",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_invoke_confirm_message_ = {
		{&rna_WindowManager_invoke_confirm_confirm_text, 	&rna_WindowManager_invoke_confirm_title,
		-1, "message", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Message",
		"Optional first line of content text",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_invoke_confirm_confirm_text_ = {
		{&rna_WindowManager_invoke_confirm_icon, 	&rna_WindowManager_invoke_confirm_message,
		-1, "confirm_text", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Confirm Text",
		"Optional text to show instead to the default \"OK\" confirmation button text",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	static const EnumPropertyItem rna_WindowManager_invoke_confirm_icon_items[6] = {
		{-1, "NONE", 0, "None", ""	},
		{0, "WARNING", 0, "Warning", ""	},
		{1, "QUESTION", 0, "Question", ""	},
		{2, "ERROR", 0, "Error", ""	},
		{3, "INFO", 0, "Info", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_WindowManager_invoke_confirm_icon_ = {
		{&rna_WindowManager_invoke_confirm_text_ctxt, 	&rna_WindowManager_invoke_confirm_confirm_text,
		-1, "icon", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Icon",
		"Optional icon displayed in the dialog",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_WindowManager_invoke_confirm_icon_items, 5, -1
	};
	rna_WindowManager_invoke_confirm_text_ctxt_ = {
		{&rna_WindowManager_invoke_confirm_translate, 	&rna_WindowManager_invoke_confirm_icon,
		-1, "text_ctxt", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Override automatic translation context of the given text",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_invoke_confirm_translate_ = {
		{nullptr, 	&rna_WindowManager_invoke_confirm_text_ctxt,
		-1, "translate", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Translate the given text, when UI translation is enabled",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_invoke_confirm_operator, &rna_WindowManager_invoke_confirm_translate};
		func->identifier = "invoke_confirm";
		func->flag = 9;
		func->description = "Operator confirmation popup (only to let user confirm the execution, no operator properties shown)";
		func->call = WindowManager_invoke_confirm_call;
		func->c_ret = &rna_WindowManager_invoke_confirm_result;
		rna_WindowManager_invoke_confirm_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_popmenu_begin__internal_title_ = {
		{&rna_WindowManager_popmenu_begin__internal_icon, 	nullptr,
		-1, "title", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_popmenu_begin__internal_icon_ = {
		{&rna_WindowManager_popmenu_begin__internal_menu, 	&rna_WindowManager_popmenu_begin__internal_title,
		-1, "icon", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "icon",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_icon_items, 1029, 0
	};
	rna_WindowManager_popmenu_begin__internal_menu_ = {
		{nullptr, 	&rna_WindowManager_popmenu_begin__internal_icon,
		-1, "menu", 8650752, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UIPopupMenu
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_popmenu_begin__internal_title, &rna_WindowManager_popmenu_begin__internal_menu};
		func->identifier = "popmenu_begin__internal";
		func->flag = 25;
		func->description = "popmenu_begin__internal";
		func->call = WindowManager_popmenu_begin__internal_call;
		func->c_ret = &rna_WindowManager_popmenu_begin__internal_menu;
		rna_WindowManager_popmenu_begin__internal_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_popmenu_end__internal_menu_ = {
		{nullptr, 	nullptr,
		-1, "menu", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UIPopupMenu
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_popmenu_end__internal_menu, &rna_WindowManager_popmenu_end__internal_menu};
		func->identifier = "popmenu_end__internal";
		func->flag = 9;
		func->description = "popmenu_end__internal";
		func->call = WindowManager_popmenu_end__internal_call;
		rna_WindowManager_popmenu_end__internal_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_popover_begin__internal_ui_units_x_ = {
		{&rna_WindowManager_popover_begin__internal_menu, 	nullptr,
		-1, "ui_units_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "ui_units_x",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_WindowManager_popover_begin__internal_menu_ = {
		{&rna_WindowManager_popover_begin__internal_from_active_button, 	&rna_WindowManager_popover_begin__internal_ui_units_x,
		-1, "menu", 8650752, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UIPopover
	};
	rna_WindowManager_popover_begin__internal_from_active_button_ = {
		{nullptr, 	&rna_WindowManager_popover_begin__internal_menu,
		-1, "from_active_button", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Button",
		"Use the active button for positioning",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_popover_begin__internal_ui_units_x, &rna_WindowManager_popover_begin__internal_from_active_button};
		func->identifier = "popover_begin__internal";
		func->flag = 25;
		func->description = "popover_begin__internal";
		func->call = WindowManager_popover_begin__internal_call;
		func->c_ret = &rna_WindowManager_popover_begin__internal_menu;
		rna_WindowManager_popover_begin__internal_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_popover_end__internal_menu_ = {
		{&rna_WindowManager_popover_end__internal_keymap, 	nullptr,
		-1, "menu", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UIPopover
	};
	rna_WindowManager_popover_end__internal_keymap_ = {
		{nullptr, 	&rna_WindowManager_popover_end__internal_menu,
		-1, "keymap", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Key Map",
		"Active key map",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_popover_end__internal_menu, &rna_WindowManager_popover_end__internal_keymap};
		func->identifier = "popover_end__internal";
		func->flag = 9;
		func->description = "popover_end__internal";
		func->call = WindowManager_popover_end__internal_call;
		rna_WindowManager_popover_end__internal_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_piemenu_begin__internal_title_ = {
		{&rna_WindowManager_piemenu_begin__internal_icon, 	nullptr,
		-1, "title", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_piemenu_begin__internal_icon_ = {
		{&rna_WindowManager_piemenu_begin__internal_event, 	&rna_WindowManager_piemenu_begin__internal_title,
		-1, "icon", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "icon",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_icon_items, 1029, 0
	};
	rna_WindowManager_piemenu_begin__internal_event_ = {
		{&rna_WindowManager_piemenu_begin__internal_menu_pie, 	&rna_WindowManager_piemenu_begin__internal_icon,
		-1, "event", 8650752, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Event
	};
	rna_WindowManager_piemenu_begin__internal_menu_pie_ = {
		{nullptr, 	&rna_WindowManager_piemenu_begin__internal_event,
		-1, "menu_pie", 8650752, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UIPieMenu
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_piemenu_begin__internal_title, &rna_WindowManager_piemenu_begin__internal_menu_pie};
		func->identifier = "piemenu_begin__internal";
		func->flag = 25;
		func->description = "piemenu_begin__internal";
		func->call = WindowManager_piemenu_begin__internal_call;
		func->c_ret = &rna_WindowManager_piemenu_begin__internal_menu_pie;
		rna_WindowManager_piemenu_begin__internal_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_piemenu_end__internal_menu_ = {
		{nullptr, 	nullptr,
		-1, "menu", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UIPieMenu
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_piemenu_end__internal_menu, &rna_WindowManager_piemenu_end__internal_menu};
		func->identifier = "piemenu_end__internal";
		func->flag = 9;
		func->description = "piemenu_end__internal";
		func->call = WindowManager_piemenu_end__internal_call;
		rna_WindowManager_piemenu_end__internal_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_operator_properties_last_operator_ = {
		{&rna_WindowManager_operator_properties_last_result, 	nullptr,
		-1, "operator", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_operator_properties_last_result_ = {
		{nullptr, 	&rna_WindowManager_operator_properties_last_operator,
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
		func->cont.properties = {&rna_WindowManager_operator_properties_last_operator, &rna_WindowManager_operator_properties_last_result};
		func->identifier = "operator_properties_last";
		func->flag = 1;
		func->description = "operator_properties_last";
		func->call = WindowManager_operator_properties_last_call;
		func->c_ret = &rna_WindowManager_operator_properties_last_result;
		rna_WindowManager_operator_properties_last_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "print_undo_steps";
		func->description = "print_undo_steps";
		func->call = WindowManager_print_undo_steps_call;
		rna_WindowManager_print_undo_steps_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "tag_script_reload";
		func->flag = 1;
		func->description = "Tag for refreshing the interface after scripts have been reloaded";
		func->call = WindowManager_tag_script_reload_call;
		rna_WindowManager_tag_script_reload_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_asset_library_status_begin_loading_library_url_ = {
		{&rna_WindowManager_asset_library_status_begin_loading_timeout, 	nullptr,
		-1, "library_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The URL identifying the asset library being loaded",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_asset_library_status_begin_loading_timeout_ = {
		{nullptr, 	&rna_WindowManager_asset_library_status_begin_loading_library_url,
		-1, "timeout", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Timeout",
		"Maximum time in seconds after which the asset library loading will be considered cancelled, if no further status reporting is done (e.g. by repeated calls to `asset_library_status_ping_still_loading()`).",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.3000000119f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_asset_library_status_begin_loading_library_url, &rna_WindowManager_asset_library_status_begin_loading_timeout};
		func->identifier = "asset_library_status_begin_loading";
		func->flag = 1;
		func->description = "Inform the asset system that the asset library at the given URL is being loaded.";
		func->call = WindowManager_asset_library_status_begin_loading_call;
		rna_WindowManager_asset_library_status_begin_loading_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_asset_library_status_ping_still_loading_library_url_ = {
		{nullptr, 	nullptr,
		-1, "library_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The URL identifying the asset library being loaded",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_asset_library_status_ping_still_loading_library_url, &rna_WindowManager_asset_library_status_ping_still_loading_library_url};
		func->identifier = "asset_library_status_ping_still_loading";
		func->flag = 1;
		func->description = "Inform the asset system that the loading is still ongoing. Call this regularly to prevent the loading status to timeout.";
		func->call = WindowManager_asset_library_status_ping_still_loading_call;
		rna_WindowManager_asset_library_status_ping_still_loading_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_asset_library_status_ping_metafiles_in_place_library_url_ = {
		{nullptr, 	nullptr,
		-1, "library_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The URL identifying the asset library being loaded",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_asset_library_status_ping_metafiles_in_place_library_url, &rna_WindowManager_asset_library_status_ping_metafiles_in_place_library_url};
		func->identifier = "asset_library_status_ping_metafiles_in_place";
		func->flag = 1;
		func->description = "Inform the asset system that the asset meta files (_asset-library-meta.json, asset-listing.json, blender_assets.cats.txt) are in place and ready to be loaded";
		func->call = WindowManager_asset_library_status_ping_metafiles_in_place_call;
		rna_WindowManager_asset_library_status_ping_metafiles_in_place_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_asset_library_status_ping_loaded_new_pages_library_url_ = {
		{nullptr, 	nullptr,
		-1, "library_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The URL identifying the asset library being loaded",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_asset_library_status_ping_loaded_new_pages_library_url, &rna_WindowManager_asset_library_status_ping_loaded_new_pages_library_url};
		func->identifier = "asset_library_status_ping_loaded_new_pages";
		func->flag = 1;
		func->description = "Inform the asset system that new content";
		func->call = WindowManager_asset_library_status_ping_loaded_new_pages_call;
		rna_WindowManager_asset_library_status_ping_loaded_new_pages_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_asset_library_status_ping_loaded_new_preview_preview_full_path_ = {
		{nullptr, 	nullptr,
		-1, "preview_full_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The full path (not URL!) pointing to the the asset preview that should be available now",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_asset_library_status_ping_loaded_new_preview_preview_full_path, &rna_WindowManager_asset_library_status_ping_loaded_new_preview_preview_full_path};
		func->identifier = "asset_library_status_ping_loaded_new_preview";
		func->flag = 9;
		func->description = "Inform the asset system that a new preview is available and ready for display";
		func->call = WindowManager_asset_library_status_ping_loaded_new_preview_call;
		rna_WindowManager_asset_library_status_ping_loaded_new_preview_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_asset_library_status_ping_asset_file_progress_absolute_file_url_ = {
		{&rna_WindowManager_asset_library_status_ping_asset_file_progress_size_written, 	nullptr,
		-1, "absolute_file_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The absolute URL this file was downloaded from",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_asset_library_status_ping_asset_file_progress_size_written_ = {
		{nullptr, 	&rna_WindowManager_asset_library_status_ping_asset_file_progress_absolute_file_url,
		-1, "size_written", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Size Written to Disk",
		"The number of bytes written to disk after uncompressing the download data, if needed",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_asset_library_status_ping_asset_file_progress_absolute_file_url, &rna_WindowManager_asset_library_status_ping_asset_file_progress_size_written};
		func->identifier = "asset_library_status_ping_asset_file_progress";
		func->flag = 1;
		func->description = "Inform the asset system about the current progress of an asset file.";
		func->call = WindowManager_asset_library_status_ping_asset_file_progress_call;
		rna_WindowManager_asset_library_status_ping_asset_file_progress_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_asset_library_status_ping_asset_file_succeeded_library_url_ = {
		{&rna_WindowManager_asset_library_status_ping_asset_file_succeeded_absolute_file_url, 	nullptr,
		-1, "library_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The URL identifying the asset library being loaded",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_asset_library_status_ping_asset_file_succeeded_absolute_file_url_ = {
		{&rna_WindowManager_asset_library_status_ping_asset_file_succeeded_local_file_abspath, 	&rna_WindowManager_asset_library_status_ping_asset_file_succeeded_library_url,
		-1, "absolute_file_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The absolute URL this file was downloaded from",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_asset_library_status_ping_asset_file_succeeded_local_file_abspath_ = {
		{nullptr, 	&rna_WindowManager_asset_library_status_ping_asset_file_succeeded_absolute_file_url,
		-1, "local_file_abspath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Local Path",
		"The absolute path this file was downloaded to",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_asset_library_status_ping_asset_file_succeeded_library_url, &rna_WindowManager_asset_library_status_ping_asset_file_succeeded_local_file_abspath};
		func->identifier = "asset_library_status_ping_asset_file_succeeded";
		func->flag = 9;
		func->description = "Inform the asset system that a single asset file download has finished successfully.";
		func->call = WindowManager_asset_library_status_ping_asset_file_succeeded_call;
		rna_WindowManager_asset_library_status_ping_asset_file_succeeded_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_asset_library_status_ping_asset_file_failed_library_url_ = {
		{&rna_WindowManager_asset_library_status_ping_asset_file_failed_absolute_file_url, 	nullptr,
		-1, "library_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The URL identifying the asset library being loaded",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_asset_library_status_ping_asset_file_failed_absolute_file_url_ = {
		{&rna_WindowManager_asset_library_status_ping_asset_file_failed_local_file_abspath, 	&rna_WindowManager_asset_library_status_ping_asset_file_failed_library_url,
		-1, "absolute_file_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The absolute URL this file was downloaded from",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_asset_library_status_ping_asset_file_failed_local_file_abspath_ = {
		{nullptr, 	&rna_WindowManager_asset_library_status_ping_asset_file_failed_absolute_file_url,
		-1, "local_file_abspath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Local Path",
		"The absolute path this file was supposed to be downloaded to",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_asset_library_status_ping_asset_file_failed_library_url, &rna_WindowManager_asset_library_status_ping_asset_file_failed_local_file_abspath};
		func->identifier = "asset_library_status_ping_asset_file_failed";
		func->flag = 9;
		func->description = "Inform the asset system that a single asset file download has stopped because of some failure.";
		func->call = WindowManager_asset_library_status_ping_asset_file_failed_call;
		rna_WindowManager_asset_library_status_ping_asset_file_failed_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "asset_library_status_ping_finished_download_queue";
		func->flag = 9;
		func->description = "Inform the asset system that there are no more pending asset file downloads for any asset library.";
		func->call = WindowManager_asset_library_status_ping_finished_download_queue_call;
		rna_WindowManager_asset_library_status_ping_finished_download_queue_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_asset_library_status_finished_loading_library_url_ = {
		{nullptr, 	nullptr,
		-1, "library_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The URL identifying the asset library being loaded",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_asset_library_status_finished_loading_library_url, &rna_WindowManager_asset_library_status_finished_loading_library_url};
		func->identifier = "asset_library_status_finished_loading";
		func->flag = 1;
		func->description = "Inform the asset system that the asset library at the given URL has successfully finished loading.";
		func->call = WindowManager_asset_library_status_finished_loading_call;
		rna_WindowManager_asset_library_status_finished_loading_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_WindowManager_asset_library_status_failed_loading_library_url_ = {
		{&rna_WindowManager_asset_library_status_failed_loading_message, 	nullptr,
		-1, "library_url", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "URL",
		"The URL identifying the asset library being loaded",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_WindowManager_asset_library_status_failed_loading_message_ = {
		{nullptr, 	&rna_WindowManager_asset_library_status_failed_loading_library_url,
		-1, "message", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Message",
		"An error message to show to users",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_WindowManager_asset_library_status_failed_loading_library_url, &rna_WindowManager_asset_library_status_failed_loading_message};
		func->identifier = "asset_library_status_failed_loading";
		func->flag = 1;
		func->description = "Inform the asset system that the asset library at the given URL failed loading, and should be aborted.";
		func->call = WindowManager_asset_library_status_failed_loading_call;
		rna_WindowManager_asset_library_status_failed_loading_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "register_node_group_operators";
		func->flag = 9;
		func->description = "Trigger manual re-registration of node group operators. Useful in background mode where this doesn\'t happen automatically.";
		func->call = WindowManager_register_node_group_operators_call;
		rna_WindowManager_register_node_group_operators_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Windows */
static CollectionPropertyRNA rna_Windows_rna_properties_;
PropertyRNA &rna_Windows_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Windows_rna_properties_);

static PointerPropertyRNA rna_Windows_rna_type_;
PropertyRNA &rna_Windows_rna_type = reinterpret_cast<PropertyRNA &>(rna_Windows_rna_type_);

static BoolPropertyRNA rna_Windows_find_playing_scrub_;
PropertyRNA &rna_Windows_find_playing_scrub = reinterpret_cast<PropertyRNA &>(rna_Windows_find_playing_scrub_);

static PointerPropertyRNA rna_Windows_find_playing_window_;
PropertyRNA &rna_Windows_find_playing_window = reinterpret_cast<PropertyRNA &>(rna_Windows_find_playing_window_);

FunctionRNA *rna_Windows_find_playing_func;
StructRNA *RNA_Windows;
void register_struct_Windows(BlenderRNA &brna)
{
	rna_Windows_rna_properties_ = {
		{&rna_Windows_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Windows_rna_properties_begin, Windows_rna_properties_next, Windows_rna_properties_end, Windows_rna_properties_get, nullptr, nullptr, Windows_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Windows_rna_type_ = {
		{nullptr, 	&rna_Windows_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Windows_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_Windows;
	srna->cont.properties = {&rna_Windows_rna_properties, &rna_Windows_rna_type};
	srna->identifier = "Windows";
	srna->flag = 516;
	srna->name = "Windows";
	srna->description = "Collection of windows";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Windows_rna_properties;
	{
	rna_Windows_find_playing_scrub_ = {
		{&rna_Windows_find_playing_window, 	nullptr,
		-1, "scrub", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scrubbing",
		"Check if time in the window is being scrubbed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Windows_find_playing_window_ = {
		{nullptr, 	&rna_Windows_find_playing_scrub,
		-1, "window", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Window",
		"Window that is currently playing",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Window
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Windows_find_playing_scrub, &rna_Windows_find_playing_window};
		func->identifier = "find_playing";
		func->description = "find_playing";
		func->call = Windows_find_playing_call;
		func->c_ret = &rna_Windows_find_playing_window;
		rna_Windows_find_playing_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* KeyConfigs */
static CollectionPropertyRNA rna_KeyConfigurations_rna_properties_;
PropertyRNA &rna_KeyConfigurations_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_rna_properties_);

static PointerPropertyRNA rna_KeyConfigurations_rna_type_;
PropertyRNA &rna_KeyConfigurations_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_rna_type_);

static PointerPropertyRNA rna_KeyConfigurations_active_;
PropertyRNA &rna_KeyConfigurations_active = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_active_);

static PointerPropertyRNA rna_KeyConfigurations_default_;
PropertyRNA &rna_KeyConfigurations_default = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_default_);

static PointerPropertyRNA rna_KeyConfigurations_addon_;
PropertyRNA &rna_KeyConfigurations_addon = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_addon_);

static PointerPropertyRNA rna_KeyConfigurations_user_;
PropertyRNA &rna_KeyConfigurations_user = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_user_);

static StringPropertyRNA rna_KeyConfigurations_new_name_;
PropertyRNA &rna_KeyConfigurations_new_name = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_new_name_);

static PointerPropertyRNA rna_KeyConfigurations_new_keyconfig_;
PropertyRNA &rna_KeyConfigurations_new_keyconfig = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_new_keyconfig_);

FunctionRNA *rna_KeyConfigurations_new_func;
static PointerPropertyRNA rna_KeyConfigurations_remove_keyconfig_;
PropertyRNA &rna_KeyConfigurations_remove_keyconfig = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_remove_keyconfig_);

FunctionRNA *rna_KeyConfigurations_remove_func;
static StringPropertyRNA rna_KeyConfigurations_find_item_from_operator_idname_;
PropertyRNA &rna_KeyConfigurations_find_item_from_operator_idname = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_find_item_from_operator_idname_);

static EnumPropertyRNA rna_KeyConfigurations_find_item_from_operator_context_;
PropertyRNA &rna_KeyConfigurations_find_item_from_operator_context = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_find_item_from_operator_context_);

static PointerPropertyRNA rna_KeyConfigurations_find_item_from_operator_properties_;
PropertyRNA &rna_KeyConfigurations_find_item_from_operator_properties = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_find_item_from_operator_properties_);

static EnumPropertyRNA rna_KeyConfigurations_find_item_from_operator_include_;
PropertyRNA &rna_KeyConfigurations_find_item_from_operator_include = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_find_item_from_operator_include_);

static EnumPropertyRNA rna_KeyConfigurations_find_item_from_operator_exclude_;
PropertyRNA &rna_KeyConfigurations_find_item_from_operator_exclude = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_find_item_from_operator_exclude_);

static PointerPropertyRNA rna_KeyConfigurations_find_item_from_operator_keymap_;
PropertyRNA &rna_KeyConfigurations_find_item_from_operator_keymap = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_find_item_from_operator_keymap_);

static PointerPropertyRNA rna_KeyConfigurations_find_item_from_operator_item_;
PropertyRNA &rna_KeyConfigurations_find_item_from_operator_item = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_find_item_from_operator_item_);

FunctionRNA *rna_KeyConfigurations_find_item_from_operator_func;
static BoolPropertyRNA rna_KeyConfigurations_update_keep_properties_;
PropertyRNA &rna_KeyConfigurations_update_keep_properties = reinterpret_cast<PropertyRNA &>(rna_KeyConfigurations_update_keep_properties_);

FunctionRNA *rna_KeyConfigurations_update_func;
StructRNA *RNA_KeyConfigurations;
void register_struct_KeyConfigurations(BlenderRNA &brna)
{
	rna_KeyConfigurations_rna_properties_ = {
		{&rna_KeyConfigurations_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfigurations_rna_properties_begin, KeyConfigurations_rna_properties_next, KeyConfigurations_rna_properties_end, KeyConfigurations_rna_properties_get, nullptr, nullptr, KeyConfigurations_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyConfigurations_rna_type_ = {
		{&rna_KeyConfigurations_active, 	&rna_KeyConfigurations_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfigurations_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_KeyConfigurations_active_ = {
		{&rna_KeyConfigurations_default, 	&rna_KeyConfigurations_rna_type,
		-1, "active", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active KeyConfig",
		"Active key configuration (preset)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfigurations_active_get, KeyConfigurations_active_set, nullptr, nullptr,RNA_KeyConfig
	};

	rna_KeyConfigurations_default_ = {
		{&rna_KeyConfigurations_addon, 	&rna_KeyConfigurations_active,
		-1, "default", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default Key Configuration",
		"Default builtin key configuration",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfigurations_default_value_get, nullptr, nullptr, nullptr,RNA_KeyConfig
	};

	rna_KeyConfigurations_addon_ = {
		{&rna_KeyConfigurations_user, 	&rna_KeyConfigurations_default,
		-1, "addon", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Add-on Key Configuration",
		"Key configuration that can be extended by add-ons, and is added to the active configuration when handling events",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfigurations_addon_get, nullptr, nullptr, nullptr,RNA_KeyConfig
	};

	rna_KeyConfigurations_user_ = {
		{nullptr, 	&rna_KeyConfigurations_addon,
		-1, "user", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "User Key Configuration",
		"Final key configuration that combines keymaps from the active and add-on configurations, and can be edited by the user",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfigurations_user_get, nullptr, nullptr, nullptr,RNA_KeyConfig
	};

	StructRNA *srna = RNA_KeyConfigurations;
	srna->cont.properties = {&rna_KeyConfigurations_rna_properties, &rna_KeyConfigurations_user};
	srna->identifier = "KeyConfigurations";
	srna->flag = 516;
	srna->name = "KeyConfigs";
	srna->description = "Collection of KeyConfigs";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_KeyConfigurations_rna_properties;
	{
	rna_KeyConfigurations_new_name_ = {
		{&rna_KeyConfigurations_new_keyconfig, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_KeyConfigurations_new_keyconfig_ = {
		{nullptr, 	&rna_KeyConfigurations_new_name,
		-1, "keyconfig", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Key Configuration",
		"Added key configuration",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyConfig
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyConfigurations_new_name, &rna_KeyConfigurations_new_keyconfig};
		func->identifier = "new";
		func->description = "new";
		func->call = KeyConfigurations_new_call;
		func->c_ret = &rna_KeyConfigurations_new_keyconfig;
		rna_KeyConfigurations_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyConfigurations_remove_keyconfig_ = {
		{nullptr, 	nullptr,
		-1, "keyconfig", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "Key Configuration",
		"Removed key configuration",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyConfig
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyConfigurations_remove_keyconfig, &rna_KeyConfigurations_remove_keyconfig};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "remove";
		func->call = KeyConfigurations_remove_call;
		rna_KeyConfigurations_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyConfigurations_find_item_from_operator_idname_ = {
		{&rna_KeyConfigurations_find_item_from_operator_context, 	nullptr,
		-1, "idname", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Operator Identifier",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_KeyConfigurations_find_item_from_operator_context_ = {
		{&rna_KeyConfigurations_find_item_from_operator_properties, 	&rna_KeyConfigurations_find_item_from_operator_idname,
		-1, "context", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "context",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_context_items, 12, 0
	};
	rna_KeyConfigurations_find_item_from_operator_properties_ = {
		{&rna_KeyConfigurations_find_item_from_operator_include, 	&rna_KeyConfigurations_find_item_from_operator_context,
		-1, "properties", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_OperatorProperties
	};
	rna_KeyConfigurations_find_item_from_operator_include_ = {
		{&rna_KeyConfigurations_find_item_from_operator_exclude, 	&rna_KeyConfigurations_find_item_from_operator_properties,
		-1, "include", 2097155, 0, 0, 0, 0, PropertyPathTemplateType(0), "Include",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_mask_items, 8, 226
	};
	rna_KeyConfigurations_find_item_from_operator_exclude_ = {
		{&rna_KeyConfigurations_find_item_from_operator_keymap, 	&rna_KeyConfigurations_find_item_from_operator_include,
		-1, "exclude", 2097155, 0, 0, 0, 0, PropertyPathTemplateType(0), "Exclude",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_mask_items, 8, 0
	};
	rna_KeyConfigurations_find_item_from_operator_keymap_ = {
		{&rna_KeyConfigurations_find_item_from_operator_item, 	&rna_KeyConfigurations_find_item_from_operator_exclude,
		-1, "keymap", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
	rna_KeyConfigurations_find_item_from_operator_item_ = {
		{nullptr, 	&rna_KeyConfigurations_find_item_from_operator_keymap,
		-1, "item", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyConfigurations_find_item_from_operator_idname, &rna_KeyConfigurations_find_item_from_operator_item};
		func->identifier = "find_item_from_operator";
		func->flag = 8;
		func->description = "find_item_from_operator";
		func->call = KeyConfigurations_find_item_from_operator_call;
		func->c_ret = &rna_KeyConfigurations_find_item_from_operator_item;
		rna_KeyConfigurations_find_item_from_operator_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyConfigurations_update_keep_properties_ = {
		{nullptr, 	nullptr,
		-1, "keep_properties", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Keep Properties",
		"Operator properties are kept to allow the operators to be registered again in the future",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyConfigurations_update_keep_properties, &rna_KeyConfigurations_update_keep_properties};
		func->identifier = "update";
		func->description = "update";
		func->call = KeyConfigurations_update_call;
		rna_KeyConfigurations_update_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Key-Config Preferences */
static CollectionPropertyRNA rna_KeyConfigPreferences_rna_properties_;
PropertyRNA &rna_KeyConfigPreferences_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyConfigPreferences_rna_properties_);

static PointerPropertyRNA rna_KeyConfigPreferences_rna_type_;
PropertyRNA &rna_KeyConfigPreferences_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyConfigPreferences_rna_type_);

static StringPropertyRNA rna_KeyConfigPreferences_bl_idname_;
PropertyRNA &rna_KeyConfigPreferences_bl_idname = reinterpret_cast<PropertyRNA &>(rna_KeyConfigPreferences_bl_idname_);

static BoolPropertyRNA rna_KeyConfigPreferences_bl_system_properties_get_do_create_;
PropertyRNA &rna_KeyConfigPreferences_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_KeyConfigPreferences_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_KeyConfigPreferences_bl_system_properties_get_system_properties_;
PropertyRNA &rna_KeyConfigPreferences_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_KeyConfigPreferences_bl_system_properties_get_system_properties_);

FunctionRNA *rna_KeyConfigPreferences_bl_system_properties_get_func;
StructRNA *RNA_KeyConfigPreferences;
void register_struct_KeyConfigPreferences(BlenderRNA &brna)
{
	rna_KeyConfigPreferences_rna_properties_ = {
		{&rna_KeyConfigPreferences_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfigPreferences_rna_properties_begin, KeyConfigPreferences_rna_properties_next, KeyConfigPreferences_rna_properties_end, KeyConfigPreferences_rna_properties_get, nullptr, nullptr, KeyConfigPreferences_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyConfigPreferences_rna_type_ = {
		{&rna_KeyConfigPreferences_bl_idname, 	&rna_KeyConfigPreferences_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfigPreferences_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_KeyConfigPreferences_bl_idname_ = {
		{nullptr, 	&rna_KeyConfigPreferences_rna_type,
		-1, "bl_idname", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_idname",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfigPreferences_bl_idname_get, KeyConfigPreferences_bl_idname_length, KeyConfigPreferences_bl_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	StructRNA *srna = RNA_KeyConfigPreferences;
	srna->cont.properties = {&rna_KeyConfigPreferences_rna_properties, &rna_KeyConfigPreferences_bl_idname};
	srna->identifier = "KeyConfigPreferences";
	srna->flag = 644;
	srna->name = "Key-Config Preferences";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_KeyConfigPreferences_rna_properties;
	srna->refine = rna_wmKeyConfigPref_refine;
	srna->reg = rna_wmKeyConfigPref_register;
	srna->unreg = rna_wmKeyConfigPref_unregister;
	srna->system_idproperties = rna_wmKeyConfigPref_idprops;
	{
	rna_KeyConfigPreferences_bl_system_properties_get_do_create_ = {
		{&rna_KeyConfigPreferences_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_KeyConfigPreferences_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_KeyConfigPreferences_bl_system_properties_get_do_create,
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
		func->cont.properties = {&rna_KeyConfigPreferences_bl_system_properties_get_do_create, &rna_KeyConfigPreferences_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = KeyConfigPreferences_bl_system_properties_get_call;
		func->c_ret = &rna_KeyConfigPreferences_bl_system_properties_get_system_properties;
		rna_KeyConfigPreferences_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Key Configuration */
static CollectionPropertyRNA rna_KeyConfig_rna_properties_;
PropertyRNA &rna_KeyConfig_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyConfig_rna_properties_);

static PointerPropertyRNA rna_KeyConfig_rna_type_;
PropertyRNA &rna_KeyConfig_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyConfig_rna_type_);

static StringPropertyRNA rna_KeyConfig_name_;
PropertyRNA &rna_KeyConfig_name = reinterpret_cast<PropertyRNA &>(rna_KeyConfig_name_);

static CollectionPropertyRNA rna_KeyConfig_keymaps_;
PropertyRNA &rna_KeyConfig_keymaps = reinterpret_cast<PropertyRNA &>(rna_KeyConfig_keymaps_);

static BoolPropertyRNA rna_KeyConfig_is_user_defined_;
PropertyRNA &rna_KeyConfig_is_user_defined = reinterpret_cast<PropertyRNA &>(rna_KeyConfig_is_user_defined_);

static PointerPropertyRNA rna_KeyConfig_preferences_;
PropertyRNA &rna_KeyConfig_preferences = reinterpret_cast<PropertyRNA &>(rna_KeyConfig_preferences_);

StructRNA *RNA_KeyConfig;
void register_struct_KeyConfig(BlenderRNA &brna)
{
	rna_KeyConfig_rna_properties_ = {
		{&rna_KeyConfig_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfig_rna_properties_begin, KeyConfig_rna_properties_next, KeyConfig_rna_properties_end, KeyConfig_rna_properties_get, nullptr, nullptr, KeyConfig_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyConfig_rna_type_ = {
		{&rna_KeyConfig_name, 	&rna_KeyConfig_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfig_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_KeyConfig_name_ = {
		{&rna_KeyConfig_keymaps, 	&rna_KeyConfig_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the key configuration",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfig_name_get, KeyConfig_name_length, KeyConfig_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_KeyConfig_keymaps_ = {
		{&rna_KeyConfig_is_user_defined, 	&rna_KeyConfig_name,
		-1, "keymaps", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Key Maps",
		"Key maps configured as part of this configuration",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_KeyMaps},
		KeyConfig_keymaps_begin, KeyConfig_keymaps_next, KeyConfig_keymaps_end, KeyConfig_keymaps_get, nullptr, KeyConfig_keymaps_lookup_int, KeyConfig_keymaps_lookup_string, nullptr, RNA_KeyMap
	};

	rna_KeyConfig_is_user_defined_ = {
		{&rna_KeyConfig_preferences, 	&rna_KeyConfig_keymaps,
		-1, "is_user_defined", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "User Defined",
		"Indicates that a keyconfig was defined by the user",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfig_is_user_defined_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyConfig_preferences_ = {
		{nullptr, 	&rna_KeyConfig_is_user_defined,
		-1, "preferences", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "preferences",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyConfig_preferences_get, nullptr, nullptr, nullptr,RNA_KeyConfigPreferences
	};

	StructRNA *srna = RNA_KeyConfig;
	srna->cont.properties = {&rna_KeyConfig_rna_properties, &rna_KeyConfig_preferences};
	srna->identifier = "KeyConfig";
	srna->flag = 516;
	srna->name = "Key Configuration";
	srna->description = "Input configuration, including keymaps";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_KeyConfig_name;
	srna->iteratorproperty = &rna_KeyConfig_rna_properties;
};

/* Key Maps */
static CollectionPropertyRNA rna_KeyMaps_rna_properties_;
PropertyRNA &rna_KeyMaps_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_rna_properties_);

static PointerPropertyRNA rna_KeyMaps_rna_type_;
PropertyRNA &rna_KeyMaps_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_rna_type_);

static StringPropertyRNA rna_KeyMaps_new_name_;
PropertyRNA &rna_KeyMaps_new_name = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_new_name_);

static EnumPropertyRNA rna_KeyMaps_new_space_type_;
PropertyRNA &rna_KeyMaps_new_space_type = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_new_space_type_);

static EnumPropertyRNA rna_KeyMaps_new_region_type_;
PropertyRNA &rna_KeyMaps_new_region_type = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_new_region_type_);

static BoolPropertyRNA rna_KeyMaps_new_modal_;
PropertyRNA &rna_KeyMaps_new_modal = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_new_modal_);

static BoolPropertyRNA rna_KeyMaps_new_tool_;
PropertyRNA &rna_KeyMaps_new_tool = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_new_tool_);

static PointerPropertyRNA rna_KeyMaps_new_keymap_;
PropertyRNA &rna_KeyMaps_new_keymap = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_new_keymap_);

FunctionRNA *rna_KeyMaps_new_func;
static PointerPropertyRNA rna_KeyMaps_remove_keymap_;
PropertyRNA &rna_KeyMaps_remove_keymap = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_remove_keymap_);

FunctionRNA *rna_KeyMaps_remove_func;
FunctionRNA *rna_KeyMaps_clear_func;
static StringPropertyRNA rna_KeyMaps_find_name_;
PropertyRNA &rna_KeyMaps_find_name = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_find_name_);

static EnumPropertyRNA rna_KeyMaps_find_space_type_;
PropertyRNA &rna_KeyMaps_find_space_type = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_find_space_type_);

static EnumPropertyRNA rna_KeyMaps_find_region_type_;
PropertyRNA &rna_KeyMaps_find_region_type = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_find_region_type_);

static PointerPropertyRNA rna_KeyMaps_find_keymap_;
PropertyRNA &rna_KeyMaps_find_keymap = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_find_keymap_);

FunctionRNA *rna_KeyMaps_find_func;
static PointerPropertyRNA rna_KeyMaps_find_match_keymap_;
PropertyRNA &rna_KeyMaps_find_match_keymap = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_find_match_keymap_);

static PointerPropertyRNA rna_KeyMaps_find_match_result_;
PropertyRNA &rna_KeyMaps_find_match_result = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_find_match_result_);

FunctionRNA *rna_KeyMaps_find_match_func;
static StringPropertyRNA rna_KeyMaps_find_modal_name_;
PropertyRNA &rna_KeyMaps_find_modal_name = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_find_modal_name_);

static PointerPropertyRNA rna_KeyMaps_find_modal_keymap_;
PropertyRNA &rna_KeyMaps_find_modal_keymap = reinterpret_cast<PropertyRNA &>(rna_KeyMaps_find_modal_keymap_);

FunctionRNA *rna_KeyMaps_find_modal_func;
StructRNA *RNA_KeyMaps;
void register_struct_KeyMaps(BlenderRNA &brna)
{
	rna_KeyMaps_rna_properties_ = {
		{&rna_KeyMaps_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMaps_rna_properties_begin, KeyMaps_rna_properties_next, KeyMaps_rna_properties_end, KeyMaps_rna_properties_get, nullptr, nullptr, KeyMaps_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyMaps_rna_type_ = {
		{nullptr, 	&rna_KeyMaps_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMaps_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_KeyMaps;
	srna->cont.properties = {&rna_KeyMaps_rna_properties, &rna_KeyMaps_rna_type};
	srna->identifier = "KeyMaps";
	srna->flag = 516;
	srna->name = "Key Maps";
	srna->description = "Collection of keymaps";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_KeyMaps_rna_properties;
	{
	rna_KeyMaps_new_name_ = {
		{&rna_KeyMaps_new_space_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_KeyMaps_new_space_type_ = {
		{&rna_KeyMaps_new_region_type, 	&rna_KeyMaps_new_name,
		-1, "space_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Space Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_type_items, 24, 0
	};
	rna_KeyMaps_new_region_type_ = {
		{&rna_KeyMaps_new_modal, 	&rna_KeyMaps_new_space_type,
		-1, "region_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Region Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_region_type_items, 17, 0
	};
	rna_KeyMaps_new_modal_ = {
		{&rna_KeyMaps_new_tool, 	&rna_KeyMaps_new_region_type,
		-1, "modal", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Modal",
		"Keymap for modal operators. Modal keymaps are not supported for :class:`KeyConfigs.addons`.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMaps_new_tool_ = {
		{&rna_KeyMaps_new_keymap, 	&rna_KeyMaps_new_modal,
		-1, "tool", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tool",
		"Keymap for active tools",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMaps_new_keymap_ = {
		{nullptr, 	&rna_KeyMaps_new_tool,
		-1, "keymap", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Key Map",
		"Added key map",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMaps_new_name, &rna_KeyMaps_new_keymap};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Ensure the keymap exists. This will return the one with the given name/space type/region type, or create a new one if it does not exist yet.";
		func->call = KeyMaps_new_call;
		func->c_ret = &rna_KeyMaps_new_keymap;
		rna_KeyMaps_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMaps_remove_keymap_ = {
		{nullptr, 	nullptr,
		-1, "keymap", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "Key Map",
		"Removed key map",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMaps_remove_keymap, &rna_KeyMaps_remove_keymap};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "remove";
		func->call = KeyMaps_remove_call;
		rna_KeyMaps_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->description = "Remove all keymaps.";
		func->call = KeyMaps_clear_call;
		rna_KeyMaps_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMaps_find_name_ = {
		{&rna_KeyMaps_find_space_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_KeyMaps_find_space_type_ = {
		{&rna_KeyMaps_find_region_type, 	&rna_KeyMaps_find_name,
		-1, "space_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Space Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_type_items, 24, 0
	};
	rna_KeyMaps_find_region_type_ = {
		{&rna_KeyMaps_find_keymap, 	&rna_KeyMaps_find_space_type,
		-1, "region_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Region Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_region_type_items, 17, 0
	};
	rna_KeyMaps_find_keymap_ = {
		{nullptr, 	&rna_KeyMaps_find_region_type,
		-1, "keymap", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Key Map",
		"Corresponding key map",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMaps_find_name, &rna_KeyMaps_find_keymap};
		func->identifier = "find";
		func->description = "find";
		func->call = KeyMaps_find_call;
		func->c_ret = &rna_KeyMaps_find_keymap;
		rna_KeyMaps_find_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMaps_find_match_keymap_ = {
		{&rna_KeyMaps_find_match_result, 	nullptr,
		-1, "keymap", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Key Map",
		"The key map for comparison",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
	rna_KeyMaps_find_match_result_ = {
		{nullptr, 	&rna_KeyMaps_find_match_keymap,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Key Map",
		"Corresponding key map",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMaps_find_match_keymap, &rna_KeyMaps_find_match_result};
		func->identifier = "find_match";
		func->description = "find_match";
		func->call = KeyMaps_find_match_call;
		func->c_ret = &rna_KeyMaps_find_match_result;
		rna_KeyMaps_find_match_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMaps_find_modal_name_ = {
		{&rna_KeyMaps_find_modal_keymap, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Operator Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_KeyMaps_find_modal_keymap_ = {
		{nullptr, 	&rna_KeyMaps_find_modal_name,
		-1, "keymap", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Key Map",
		"Corresponding key map",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMaps_find_modal_name, &rna_KeyMaps_find_modal_keymap};
		func->identifier = "find_modal";
		func->description = "find_modal";
		func->call = KeyMaps_find_modal_call;
		func->c_ret = &rna_KeyMaps_find_modal_keymap;
		rna_KeyMaps_find_modal_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Key Map */
static CollectionPropertyRNA rna_KeyMap_rna_properties_;
PropertyRNA &rna_KeyMap_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyMap_rna_properties_);

static PointerPropertyRNA rna_KeyMap_rna_type_;
PropertyRNA &rna_KeyMap_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyMap_rna_type_);

static StringPropertyRNA rna_KeyMap_name_;
PropertyRNA &rna_KeyMap_name = reinterpret_cast<PropertyRNA &>(rna_KeyMap_name_);

static StringPropertyRNA rna_KeyMap_bl_owner_id_;
PropertyRNA &rna_KeyMap_bl_owner_id = reinterpret_cast<PropertyRNA &>(rna_KeyMap_bl_owner_id_);

static EnumPropertyRNA rna_KeyMap_space_type_;
PropertyRNA &rna_KeyMap_space_type = reinterpret_cast<PropertyRNA &>(rna_KeyMap_space_type_);

static EnumPropertyRNA rna_KeyMap_region_type_;
PropertyRNA &rna_KeyMap_region_type = reinterpret_cast<PropertyRNA &>(rna_KeyMap_region_type_);

static CollectionPropertyRNA rna_KeyMap_keymap_items_;
PropertyRNA &rna_KeyMap_keymap_items = reinterpret_cast<PropertyRNA &>(rna_KeyMap_keymap_items_);

static BoolPropertyRNA rna_KeyMap_is_user_modified_;
PropertyRNA &rna_KeyMap_is_user_modified = reinterpret_cast<PropertyRNA &>(rna_KeyMap_is_user_modified_);

static BoolPropertyRNA rna_KeyMap_is_modal_;
PropertyRNA &rna_KeyMap_is_modal = reinterpret_cast<PropertyRNA &>(rna_KeyMap_is_modal_);

static BoolPropertyRNA rna_KeyMap_show_expanded_items_;
PropertyRNA &rna_KeyMap_show_expanded_items = reinterpret_cast<PropertyRNA &>(rna_KeyMap_show_expanded_items_);

static BoolPropertyRNA rna_KeyMap_show_expanded_children_;
PropertyRNA &rna_KeyMap_show_expanded_children = reinterpret_cast<PropertyRNA &>(rna_KeyMap_show_expanded_children_);

static CollectionPropertyRNA rna_KeyMap_modal_event_values_;
PropertyRNA &rna_KeyMap_modal_event_values = reinterpret_cast<PropertyRNA &>(rna_KeyMap_modal_event_values_);

static PointerPropertyRNA rna_KeyMap_active_keymap_;
PropertyRNA &rna_KeyMap_active_keymap = reinterpret_cast<PropertyRNA &>(rna_KeyMap_active_keymap_);

FunctionRNA *rna_KeyMap_active_func;
FunctionRNA *rna_KeyMap_restore_to_default_func;
static PointerPropertyRNA rna_KeyMap_restore_item_to_default_item_;
PropertyRNA &rna_KeyMap_restore_item_to_default_item = reinterpret_cast<PropertyRNA &>(rna_KeyMap_restore_item_to_default_item_);

FunctionRNA *rna_KeyMap_restore_item_to_default_func;
StructRNA *RNA_KeyMap;
void register_struct_KeyMap(BlenderRNA &brna)
{
	rna_KeyMap_rna_properties_ = {
		{&rna_KeyMap_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMap_rna_properties_begin, KeyMap_rna_properties_next, KeyMap_rna_properties_end, KeyMap_rna_properties_get, nullptr, nullptr, KeyMap_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyMap_rna_type_ = {
		{&rna_KeyMap_name, 	&rna_KeyMap_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMap_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_KeyMap_name_ = {
		{&rna_KeyMap_bl_owner_id, 	&rna_KeyMap_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the key map",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMap_name_get, KeyMap_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_KeyMap_bl_owner_id_ = {
		{&rna_KeyMap_space_type, 	&rna_KeyMap_name,
		-1, "bl_owner_id", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Owner",
		"Internal owner",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {128, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMap_bl_owner_id_get, KeyMap_bl_owner_id_length, KeyMap_bl_owner_id_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 128, ""
	};

	rna_KeyMap_space_type_ = {
		{&rna_KeyMap_region_type, 	&rna_KeyMap_bl_owner_id,
		-1, "space_type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Space Type",
		"Optional space type keymap is associated with",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMap, spaceid), RawPropertyType(1), nullptr},
		KeyMap_space_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_type_items, 24, 0
	};

	rna_KeyMap_region_type_ = {
		{&rna_KeyMap_keymap_items, 	&rna_KeyMap_space_type,
		-1, "region_type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Region Type",
		"Optional region type keymap is associated with",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMap, regionid), RawPropertyType(1), nullptr},
		KeyMap_region_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_region_type_items, 17, 0
	};

	rna_KeyMap_keymap_items_ = {
		{&rna_KeyMap_is_user_modified, 	&rna_KeyMap_region_type,
		-1, "keymap_items", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Items",
		"Items in the keymap, linking an operator to an input event",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_KeyMapItems},
		KeyMap_keymap_items_begin, KeyMap_keymap_items_next, KeyMap_keymap_items_end, KeyMap_keymap_items_get, nullptr, KeyMap_keymap_items_lookup_int, KeyMap_keymap_items_lookup_string, nullptr, RNA_KeyMapItem
	};

	rna_KeyMap_is_user_modified_ = {
		{&rna_KeyMap_is_modal, 	&rna_KeyMap_keymap_items,
		-1, "is_user_modified", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "User Defined",
		"Keymap is defined by the user",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMap_is_user_modified_get, KeyMap_is_user_modified_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMap_is_modal_ = {
		{&rna_KeyMap_show_expanded_items, 	&rna_KeyMap_is_user_modified,
		-1, "is_modal", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Modal Keymap",
		"Indicates that a keymap is used for translate modal events for an operator",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMap_is_modal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMap_show_expanded_items_ = {
		{&rna_KeyMap_show_expanded_children, 	&rna_KeyMap_is_modal,
		-1, "show_expanded_items", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Items Expanded",
		"Expanded in the user interface",
		33, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMap_show_expanded_items_get, KeyMap_show_expanded_items_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMap_show_expanded_children_ = {
		{&rna_KeyMap_modal_event_values, 	&rna_KeyMap_show_expanded_items,
		-1, "show_expanded_children", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Children Expanded",
		"Children expanded in the user interface",
		33, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMap_show_expanded_children_get, KeyMap_show_expanded_children_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMap_modal_event_values_ = {
		{nullptr, 	&rna_KeyMap_show_expanded_children,
		-1, "modal_event_values", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Modal Events",
		"Give access to the possible event values of this modal keymap\'s items (#KeyMapItem.propvalue), for API introspection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMap_modal_event_values_begin, KeyMap_modal_event_values_next, KeyMap_modal_event_values_end, KeyMap_modal_event_values_get, nullptr, KeyMap_modal_event_values_lookup_int, nullptr, nullptr, RNA_EnumPropertyItem
	};

	StructRNA *srna = RNA_KeyMap;
	srna->cont.properties = {&rna_KeyMap_rna_properties, &rna_KeyMap_modal_event_values};
	srna->identifier = "KeyMap";
	srna->flag = 516;
	srna->name = "Key Map";
	srna->description = "Input configuration, including keymaps";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_KeyMap_name;
	srna->iteratorproperty = &rna_KeyMap_rna_properties;
	{
	rna_KeyMap_active_keymap_ = {
		{nullptr, 	nullptr,
		-1, "keymap", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Key Map",
		"Active key map",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMap_active_keymap, &rna_KeyMap_active_keymap};
		func->identifier = "active";
		func->flag = 8;
		func->description = "active";
		func->call = KeyMap_active_call;
		func->c_ret = &rna_KeyMap_active_keymap;
		rna_KeyMap_active_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "restore_to_default";
		func->flag = 8;
		func->description = "restore_to_default";
		func->call = KeyMap_restore_to_default_call;
		rna_KeyMap_restore_to_default_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMap_restore_item_to_default_item_ = {
		{nullptr, 	nullptr,
		-1, "item", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "Item",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMap_restore_item_to_default_item, &rna_KeyMap_restore_item_to_default_item};
		func->identifier = "restore_item_to_default";
		func->flag = 8;
		func->description = "restore_item_to_default";
		func->call = KeyMap_restore_item_to_default_call;
		rna_KeyMap_restore_item_to_default_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* KeyMap Items */
static CollectionPropertyRNA rna_KeyMapItems_rna_properties_;
PropertyRNA &rna_KeyMapItems_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_rna_properties_);

static PointerPropertyRNA rna_KeyMapItems_rna_type_;
PropertyRNA &rna_KeyMapItems_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_rna_type_);

static StringPropertyRNA rna_KeyMapItems_new_idname_;
PropertyRNA &rna_KeyMapItems_new_idname = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_idname_);

static EnumPropertyRNA rna_KeyMapItems_new_type_;
PropertyRNA &rna_KeyMapItems_new_type = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_type_);

static EnumPropertyRNA rna_KeyMapItems_new_value_;
PropertyRNA &rna_KeyMapItems_new_value = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_value_);

static BoolPropertyRNA rna_KeyMapItems_new_any_;
PropertyRNA &rna_KeyMapItems_new_any = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_any_);

static IntPropertyRNA rna_KeyMapItems_new_shift_;
PropertyRNA &rna_KeyMapItems_new_shift = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_shift_);

static IntPropertyRNA rna_KeyMapItems_new_ctrl_;
PropertyRNA &rna_KeyMapItems_new_ctrl = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_ctrl_);

static IntPropertyRNA rna_KeyMapItems_new_alt_;
PropertyRNA &rna_KeyMapItems_new_alt = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_alt_);

static IntPropertyRNA rna_KeyMapItems_new_oskey_;
PropertyRNA &rna_KeyMapItems_new_oskey = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_oskey_);

static IntPropertyRNA rna_KeyMapItems_new_hyper_;
PropertyRNA &rna_KeyMapItems_new_hyper = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_hyper_);

static EnumPropertyRNA rna_KeyMapItems_new_key_modifier_;
PropertyRNA &rna_KeyMapItems_new_key_modifier = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_key_modifier_);

static EnumPropertyRNA rna_KeyMapItems_new_direction_;
PropertyRNA &rna_KeyMapItems_new_direction = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_direction_);

static BoolPropertyRNA rna_KeyMapItems_new_repeat_;
PropertyRNA &rna_KeyMapItems_new_repeat = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_repeat_);

static BoolPropertyRNA rna_KeyMapItems_new_head_;
PropertyRNA &rna_KeyMapItems_new_head = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_head_);

static PointerPropertyRNA rna_KeyMapItems_new_item_;
PropertyRNA &rna_KeyMapItems_new_item = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_item_);

FunctionRNA *rna_KeyMapItems_new_func;
static StringPropertyRNA rna_KeyMapItems_new_modal_propvalue_;
PropertyRNA &rna_KeyMapItems_new_modal_propvalue = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_propvalue_);

static EnumPropertyRNA rna_KeyMapItems_new_modal_type_;
PropertyRNA &rna_KeyMapItems_new_modal_type = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_type_);

static EnumPropertyRNA rna_KeyMapItems_new_modal_value_;
PropertyRNA &rna_KeyMapItems_new_modal_value = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_value_);

static BoolPropertyRNA rna_KeyMapItems_new_modal_any_;
PropertyRNA &rna_KeyMapItems_new_modal_any = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_any_);

static IntPropertyRNA rna_KeyMapItems_new_modal_shift_;
PropertyRNA &rna_KeyMapItems_new_modal_shift = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_shift_);

static IntPropertyRNA rna_KeyMapItems_new_modal_ctrl_;
PropertyRNA &rna_KeyMapItems_new_modal_ctrl = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_ctrl_);

static IntPropertyRNA rna_KeyMapItems_new_modal_alt_;
PropertyRNA &rna_KeyMapItems_new_modal_alt = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_alt_);

static IntPropertyRNA rna_KeyMapItems_new_modal_oskey_;
PropertyRNA &rna_KeyMapItems_new_modal_oskey = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_oskey_);

static IntPropertyRNA rna_KeyMapItems_new_modal_hyper_;
PropertyRNA &rna_KeyMapItems_new_modal_hyper = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_hyper_);

static EnumPropertyRNA rna_KeyMapItems_new_modal_key_modifier_;
PropertyRNA &rna_KeyMapItems_new_modal_key_modifier = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_key_modifier_);

static EnumPropertyRNA rna_KeyMapItems_new_modal_direction_;
PropertyRNA &rna_KeyMapItems_new_modal_direction = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_direction_);

static BoolPropertyRNA rna_KeyMapItems_new_modal_repeat_;
PropertyRNA &rna_KeyMapItems_new_modal_repeat = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_repeat_);

static PointerPropertyRNA rna_KeyMapItems_new_modal_item_;
PropertyRNA &rna_KeyMapItems_new_modal_item = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_modal_item_);

FunctionRNA *rna_KeyMapItems_new_modal_func;
static PointerPropertyRNA rna_KeyMapItems_new_from_item_item_;
PropertyRNA &rna_KeyMapItems_new_from_item_item = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_from_item_item_);

static BoolPropertyRNA rna_KeyMapItems_new_from_item_head_;
PropertyRNA &rna_KeyMapItems_new_from_item_head = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_from_item_head_);

static PointerPropertyRNA rna_KeyMapItems_new_from_item_result_;
PropertyRNA &rna_KeyMapItems_new_from_item_result = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_new_from_item_result_);

FunctionRNA *rna_KeyMapItems_new_from_item_func;
static PointerPropertyRNA rna_KeyMapItems_remove_item_;
PropertyRNA &rna_KeyMapItems_remove_item = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_remove_item_);

FunctionRNA *rna_KeyMapItems_remove_func;
static IntPropertyRNA rna_KeyMapItems_from_id_id_;
PropertyRNA &rna_KeyMapItems_from_id_id = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_from_id_id_);

static PointerPropertyRNA rna_KeyMapItems_from_id_item_;
PropertyRNA &rna_KeyMapItems_from_id_item = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_from_id_item_);

FunctionRNA *rna_KeyMapItems_from_id_func;
static StringPropertyRNA rna_KeyMapItems_find_from_operator_idname_;
PropertyRNA &rna_KeyMapItems_find_from_operator_idname = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_find_from_operator_idname_);

static PointerPropertyRNA rna_KeyMapItems_find_from_operator_properties_;
PropertyRNA &rna_KeyMapItems_find_from_operator_properties = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_find_from_operator_properties_);

static EnumPropertyRNA rna_KeyMapItems_find_from_operator_include_;
PropertyRNA &rna_KeyMapItems_find_from_operator_include = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_find_from_operator_include_);

static EnumPropertyRNA rna_KeyMapItems_find_from_operator_exclude_;
PropertyRNA &rna_KeyMapItems_find_from_operator_exclude = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_find_from_operator_exclude_);

static PointerPropertyRNA rna_KeyMapItems_find_from_operator_item_;
PropertyRNA &rna_KeyMapItems_find_from_operator_item = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_find_from_operator_item_);

FunctionRNA *rna_KeyMapItems_find_from_operator_func;
static PointerPropertyRNA rna_KeyMapItems_find_match_keymap_;
PropertyRNA &rna_KeyMapItems_find_match_keymap = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_find_match_keymap_);

static PointerPropertyRNA rna_KeyMapItems_find_match_item_;
PropertyRNA &rna_KeyMapItems_find_match_item = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_find_match_item_);

static PointerPropertyRNA rna_KeyMapItems_find_match_result_;
PropertyRNA &rna_KeyMapItems_find_match_result = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_find_match_result_);

FunctionRNA *rna_KeyMapItems_find_match_func;
static PointerPropertyRNA rna_KeyMapItems_match_event_event_;
PropertyRNA &rna_KeyMapItems_match_event_event = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_match_event_event_);

static PointerPropertyRNA rna_KeyMapItems_match_event_item_;
PropertyRNA &rna_KeyMapItems_match_event_item = reinterpret_cast<PropertyRNA &>(rna_KeyMapItems_match_event_item_);

FunctionRNA *rna_KeyMapItems_match_event_func;
StructRNA *RNA_KeyMapItems;
void register_struct_KeyMapItems(BlenderRNA &brna)
{
	rna_KeyMapItems_rna_properties_ = {
		{&rna_KeyMapItems_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItems_rna_properties_begin, KeyMapItems_rna_properties_next, KeyMapItems_rna_properties_end, KeyMapItems_rna_properties_get, nullptr, nullptr, KeyMapItems_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyMapItems_rna_type_ = {
		{nullptr, 	&rna_KeyMapItems_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItems_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_KeyMapItems;
	srna->cont.properties = {&rna_KeyMapItems_rna_properties, &rna_KeyMapItems_rna_type};
	srna->identifier = "KeyMapItems";
	srna->flag = 516;
	srna->name = "KeyMap Items";
	srna->description = "Collection of keymap items";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_KeyMapItems_rna_properties;
	{
	rna_KeyMapItems_new_idname_ = {
		{&rna_KeyMapItems_new_type, 	nullptr,
		-1, "idname", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Operator Identifier",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_KeyMapItems_new_type_ = {
		{&rna_KeyMapItems_new_value, 	&rna_KeyMapItems_new_idname,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 207, 0
	};
	rna_KeyMapItems_new_value_ = {
		{&rna_KeyMapItems_new_any, 	&rna_KeyMapItems_new_type,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
	};
	rna_KeyMapItems_new_any_ = {
		{&rna_KeyMapItems_new_shift, 	&rna_KeyMapItems_new_value,
		-1, "any", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Any",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_shift_ = {
		{&rna_KeyMapItems_new_ctrl, 	&rna_KeyMapItems_new_any,
		-1, "shift", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shift",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_ctrl_ = {
		{&rna_KeyMapItems_new_alt, 	&rna_KeyMapItems_new_shift,
		-1, "ctrl", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ctrl",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_alt_ = {
		{&rna_KeyMapItems_new_oskey, 	&rna_KeyMapItems_new_ctrl,
		-1, "alt", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Alt",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_oskey_ = {
		{&rna_KeyMapItems_new_hyper, 	&rna_KeyMapItems_new_alt,
		-1, "oskey", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "OS Key",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_hyper_ = {
		{&rna_KeyMapItems_new_key_modifier, 	&rna_KeyMapItems_new_oskey,
		-1, "hyper", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hyper",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_key_modifier_ = {
		{&rna_KeyMapItems_new_direction, 	&rna_KeyMapItems_new_hyper,
		-1, "key_modifier", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Key Modifier",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 207, 0
	};
	rna_KeyMapItems_new_direction_ = {
		{&rna_KeyMapItems_new_repeat, 	&rna_KeyMapItems_new_key_modifier,
		-1, "direction", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Direction",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_direction_items, 9, -1
	};
	rna_KeyMapItems_new_repeat_ = {
		{&rna_KeyMapItems_new_head, 	&rna_KeyMapItems_new_direction,
		-1, "repeat", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Repeat",
		"When set, accept key-repeat events",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_head_ = {
		{&rna_KeyMapItems_new_item, 	&rna_KeyMapItems_new_repeat,
		-1, "head", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "At Head",
		"Force item to be added at start (not end) of key map so that it doesn\'t get blocked by an existing key map item",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_item_ = {
		{nullptr, 	&rna_KeyMapItems_new_head,
		-1, "item", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Item",
		"Added key map item",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMapItems_new_idname, &rna_KeyMapItems_new_item};
		func->identifier = "new";
		func->flag = 16;
		func->description = "new";
		func->call = KeyMapItems_new_call;
		func->c_ret = &rna_KeyMapItems_new_item;
		rna_KeyMapItems_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMapItems_new_modal_propvalue_ = {
		{&rna_KeyMapItems_new_modal_type, 	nullptr,
		-1, "propvalue", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Property Value",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_KeyMapItems_new_modal_type_ = {
		{&rna_KeyMapItems_new_modal_value, 	&rna_KeyMapItems_new_modal_propvalue,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 207, 0
	};
	rna_KeyMapItems_new_modal_value_ = {
		{&rna_KeyMapItems_new_modal_any, 	&rna_KeyMapItems_new_modal_type,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
	};
	rna_KeyMapItems_new_modal_any_ = {
		{&rna_KeyMapItems_new_modal_shift, 	&rna_KeyMapItems_new_modal_value,
		-1, "any", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Any",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_modal_shift_ = {
		{&rna_KeyMapItems_new_modal_ctrl, 	&rna_KeyMapItems_new_modal_any,
		-1, "shift", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shift",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_modal_ctrl_ = {
		{&rna_KeyMapItems_new_modal_alt, 	&rna_KeyMapItems_new_modal_shift,
		-1, "ctrl", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ctrl",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_modal_alt_ = {
		{&rna_KeyMapItems_new_modal_oskey, 	&rna_KeyMapItems_new_modal_ctrl,
		-1, "alt", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Alt",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_modal_oskey_ = {
		{&rna_KeyMapItems_new_modal_hyper, 	&rna_KeyMapItems_new_modal_alt,
		-1, "oskey", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "OS Key",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_modal_hyper_ = {
		{&rna_KeyMapItems_new_modal_key_modifier, 	&rna_KeyMapItems_new_modal_oskey,
		-1, "hyper", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hyper",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_modal_key_modifier_ = {
		{&rna_KeyMapItems_new_modal_direction, 	&rna_KeyMapItems_new_modal_hyper,
		-1, "key_modifier", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Key Modifier",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 207, 0
	};
	rna_KeyMapItems_new_modal_direction_ = {
		{&rna_KeyMapItems_new_modal_repeat, 	&rna_KeyMapItems_new_modal_key_modifier,
		-1, "direction", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Direction",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_direction_items, 9, -1
	};
	rna_KeyMapItems_new_modal_repeat_ = {
		{&rna_KeyMapItems_new_modal_item, 	&rna_KeyMapItems_new_modal_direction,
		-1, "repeat", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Repeat",
		"When set, accept key-repeat events",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_modal_item_ = {
		{nullptr, 	&rna_KeyMapItems_new_modal_repeat,
		-1, "item", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Item",
		"Added key map item",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMapItems_new_modal_propvalue, &rna_KeyMapItems_new_modal_item};
		func->identifier = "new_modal";
		func->flag = 16;
		func->description = "new_modal";
		func->call = KeyMapItems_new_modal_call;
		func->c_ret = &rna_KeyMapItems_new_modal_item;
		rna_KeyMapItems_new_modal_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMapItems_new_from_item_item_ = {
		{&rna_KeyMapItems_new_from_item_head, 	nullptr,
		-1, "item", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "Item",
		"Item to use as a reference",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
	rna_KeyMapItems_new_from_item_head_ = {
		{&rna_KeyMapItems_new_from_item_result, 	&rna_KeyMapItems_new_from_item_item,
		-1, "head", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "At Head",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_new_from_item_result_ = {
		{nullptr, 	&rna_KeyMapItems_new_from_item_head,
		-1, "result", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Item",
		"Added key map item",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMapItems_new_from_item_item, &rna_KeyMapItems_new_from_item_result};
		func->identifier = "new_from_item";
		func->flag = 16;
		func->description = "new_from_item";
		func->call = KeyMapItems_new_from_item_call;
		func->c_ret = &rna_KeyMapItems_new_from_item_result;
		rna_KeyMapItems_new_from_item_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMapItems_remove_item_ = {
		{nullptr, 	nullptr,
		-1, "item", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "Item",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMapItems_remove_item, &rna_KeyMapItems_remove_item};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "remove";
		func->call = KeyMapItems_remove_call;
		rna_KeyMapItems_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMapItems_from_id_id_ = {
		{&rna_KeyMapItems_from_id_item, 	nullptr,
		-1, "id", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "id",
		"ID of the item",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItems_from_id_item_ = {
		{nullptr, 	&rna_KeyMapItems_from_id_id,
		-1, "item", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Item",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMapItems_from_id_id, &rna_KeyMapItems_from_id_item};
		func->identifier = "from_id";
		func->description = "from_id";
		func->call = KeyMapItems_from_id_call;
		func->c_ret = &rna_KeyMapItems_from_id_item;
		rna_KeyMapItems_from_id_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMapItems_find_from_operator_idname_ = {
		{&rna_KeyMapItems_find_from_operator_properties, 	nullptr,
		-1, "idname", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Operator Identifier",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_KeyMapItems_find_from_operator_properties_ = {
		{&rna_KeyMapItems_find_from_operator_include, 	&rna_KeyMapItems_find_from_operator_idname,
		-1, "properties", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_OperatorProperties
	};
	rna_KeyMapItems_find_from_operator_include_ = {
		{&rna_KeyMapItems_find_from_operator_exclude, 	&rna_KeyMapItems_find_from_operator_properties,
		-1, "include", 2097155, 0, 0, 0, 0, PropertyPathTemplateType(0), "Include",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_mask_items, 8, 226
	};
	rna_KeyMapItems_find_from_operator_exclude_ = {
		{&rna_KeyMapItems_find_from_operator_item, 	&rna_KeyMapItems_find_from_operator_include,
		-1, "exclude", 2097155, 0, 0, 0, 0, PropertyPathTemplateType(0), "Exclude",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_mask_items, 8, 0
	};
	rna_KeyMapItems_find_from_operator_item_ = {
		{nullptr, 	&rna_KeyMapItems_find_from_operator_exclude,
		-1, "item", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMapItems_find_from_operator_idname, &rna_KeyMapItems_find_from_operator_item};
		func->identifier = "find_from_operator";
		func->flag = 2048;
		func->description = "find_from_operator";
		func->call = KeyMapItems_find_from_operator_call;
		func->c_ret = &rna_KeyMapItems_find_from_operator_item;
		rna_KeyMapItems_find_from_operator_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMapItems_find_match_keymap_ = {
		{&rna_KeyMapItems_find_match_item, 	nullptr,
		-1, "keymap", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The matching keymap",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
	rna_KeyMapItems_find_match_item_ = {
		{&rna_KeyMapItems_find_match_result, 	&rna_KeyMapItems_find_match_keymap,
		-1, "item", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The matching keymap item",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
	rna_KeyMapItems_find_match_result_ = {
		{nullptr, 	&rna_KeyMapItems_find_match_item,
		-1, "result", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"The keymap item from this keymap which matches the keymap item from the arguments passed in",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMapItems_find_match_keymap, &rna_KeyMapItems_find_match_result};
		func->identifier = "find_match";
		func->flag = 2064;
		func->description = "find_match";
		func->call = KeyMapItems_find_match_call;
		func->c_ret = &rna_KeyMapItems_find_match_result;
		rna_KeyMapItems_find_match_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMapItems_match_event_event_ = {
		{&rna_KeyMapItems_match_event_item, 	nullptr,
		-1, "event", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Event to match against",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Event
	};
	rna_KeyMapItems_match_event_item_ = {
		{nullptr, 	&rna_KeyMapItems_match_event_event,
		-1, "item", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMapItems_match_event_event, &rna_KeyMapItems_match_event_item};
		func->identifier = "match_event";
		func->flag = 2056;
		func->description = "match_event";
		func->call = KeyMapItems_match_event_call;
		func->c_ret = &rna_KeyMapItems_match_event_item;
		rna_KeyMapItems_match_event_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Key Map Item */
static CollectionPropertyRNA rna_KeyMapItem_rna_properties_;
PropertyRNA &rna_KeyMapItem_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_rna_properties_);

static PointerPropertyRNA rna_KeyMapItem_rna_type_;
PropertyRNA &rna_KeyMapItem_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_rna_type_);

static StringPropertyRNA rna_KeyMapItem_idname_;
PropertyRNA &rna_KeyMapItem_idname = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_idname_);

static StringPropertyRNA rna_KeyMapItem_name_;
PropertyRNA &rna_KeyMapItem_name = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_name_);

static PointerPropertyRNA rna_KeyMapItem_properties_;
PropertyRNA &rna_KeyMapItem_properties = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_properties_);

static EnumPropertyRNA rna_KeyMapItem_map_type_;
PropertyRNA &rna_KeyMapItem_map_type = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_map_type_);

static EnumPropertyRNA rna_KeyMapItem_type_;
PropertyRNA &rna_KeyMapItem_type = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_type_);

static EnumPropertyRNA rna_KeyMapItem_value_;
PropertyRNA &rna_KeyMapItem_value = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_value_);

static EnumPropertyRNA rna_KeyMapItem_direction_;
PropertyRNA &rna_KeyMapItem_direction = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_direction_);

static IntPropertyRNA rna_KeyMapItem_id_;
PropertyRNA &rna_KeyMapItem_id = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_id_);

static BoolPropertyRNA rna_KeyMapItem_any_;
PropertyRNA &rna_KeyMapItem_any = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_any_);

static IntPropertyRNA rna_KeyMapItem_shift_;
PropertyRNA &rna_KeyMapItem_shift = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_shift_);

static IntPropertyRNA rna_KeyMapItem_ctrl_;
PropertyRNA &rna_KeyMapItem_ctrl = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_ctrl_);

static IntPropertyRNA rna_KeyMapItem_alt_;
PropertyRNA &rna_KeyMapItem_alt = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_alt_);

static IntPropertyRNA rna_KeyMapItem_oskey_;
PropertyRNA &rna_KeyMapItem_oskey = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_oskey_);

static IntPropertyRNA rna_KeyMapItem_hyper_;
PropertyRNA &rna_KeyMapItem_hyper = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_hyper_);

static BoolPropertyRNA rna_KeyMapItem_shift_ui_;
PropertyRNA &rna_KeyMapItem_shift_ui = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_shift_ui_);

static BoolPropertyRNA rna_KeyMapItem_ctrl_ui_;
PropertyRNA &rna_KeyMapItem_ctrl_ui = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_ctrl_ui_);

static BoolPropertyRNA rna_KeyMapItem_alt_ui_;
PropertyRNA &rna_KeyMapItem_alt_ui = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_alt_ui_);

static BoolPropertyRNA rna_KeyMapItem_oskey_ui_;
PropertyRNA &rna_KeyMapItem_oskey_ui = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_oskey_ui_);

static BoolPropertyRNA rna_KeyMapItem_hyper_ui_;
PropertyRNA &rna_KeyMapItem_hyper_ui = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_hyper_ui_);

static EnumPropertyRNA rna_KeyMapItem_key_modifier_;
PropertyRNA &rna_KeyMapItem_key_modifier = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_key_modifier_);

static BoolPropertyRNA rna_KeyMapItem_repeat_;
PropertyRNA &rna_KeyMapItem_repeat = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_repeat_);

static BoolPropertyRNA rna_KeyMapItem_show_expanded_;
PropertyRNA &rna_KeyMapItem_show_expanded = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_show_expanded_);

static EnumPropertyRNA rna_KeyMapItem_propvalue_;
PropertyRNA &rna_KeyMapItem_propvalue = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_propvalue_);

static BoolPropertyRNA rna_KeyMapItem_active_;
PropertyRNA &rna_KeyMapItem_active = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_active_);

static BoolPropertyRNA rna_KeyMapItem_is_user_modified_;
PropertyRNA &rna_KeyMapItem_is_user_modified = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_is_user_modified_);

static BoolPropertyRNA rna_KeyMapItem_is_user_defined_;
PropertyRNA &rna_KeyMapItem_is_user_defined = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_is_user_defined_);

static PointerPropertyRNA rna_KeyMapItem_compare_item_;
PropertyRNA &rna_KeyMapItem_compare_item = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_compare_item_);

static BoolPropertyRNA rna_KeyMapItem_compare_result_;
PropertyRNA &rna_KeyMapItem_compare_result = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_compare_result_);

FunctionRNA *rna_KeyMapItem_compare_func;
static BoolPropertyRNA rna_KeyMapItem_to_string_compact_;
PropertyRNA &rna_KeyMapItem_to_string_compact = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_to_string_compact_);

static StringPropertyRNA rna_KeyMapItem_to_string_result_;
PropertyRNA &rna_KeyMapItem_to_string_result = reinterpret_cast<PropertyRNA &>(rna_KeyMapItem_to_string_result_);

FunctionRNA *rna_KeyMapItem_to_string_func;
StructRNA *RNA_KeyMapItem;
void register_struct_KeyMapItem(BlenderRNA &brna)
{
	rna_KeyMapItem_rna_properties_ = {
		{&rna_KeyMapItem_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_rna_properties_begin, KeyMapItem_rna_properties_next, KeyMapItem_rna_properties_end, KeyMapItem_rna_properties_get, nullptr, nullptr, KeyMapItem_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyMapItem_rna_type_ = {
		{&rna_KeyMapItem_idname, 	&rna_KeyMapItem_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_KeyMapItem_idname_ = {
		{&rna_KeyMapItem_name, 	&rna_KeyMapItem_rna_type,
		-1, "idname", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Identifier",
		"Identifier of operator to call on input event",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_idname_get, KeyMapItem_idname_length, KeyMapItem_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, KeyMapItem_idname_search, eStringPropertySearchFlag(7), nullptr, 64, ""
	};

	rna_KeyMapItem_name_ = {
		{&rna_KeyMapItem_properties, 	&rna_KeyMapItem_idname,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of operator (translated) to call on input event",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_name_get, KeyMapItem_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_KeyMapItem_properties_ = {
		{&rna_KeyMapItem_map_type, 	&rna_KeyMapItem_name,
		-1, "properties", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Properties",
		"Properties to set when the operator is called",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_properties_get, nullptr, nullptr, nullptr,RNA_OperatorProperties
	};

	static const EnumPropertyItem rna_KeyMapItem_map_type_items[6] = {
		{0, "KEYBOARD", 0, "Keyboard", ""	},
		{1, "MOUSE", 0, "Mouse", ""	},
		{5, "NDOF", 0, "NDOF", ""	},
		{3, "TEXTINPUT", 0, "Text Input", ""	},
		{4, "TIMER", 0, "Timer", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_KeyMapItem_map_type_ = {
		{&rna_KeyMapItem_type, 	&rna_KeyMapItem_properties,
		-1, "map_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Map Type",
		"Type of event mapping",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_map_type_get, KeyMapItem_map_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_KeyMapItem_map_type_items, 5, 0
	};

	rna_KeyMapItem_type_ = {
		{&rna_KeyMapItem_value, 	&rna_KeyMapItem_map_type,
		-1, "type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of event",
		0, "UI_Events_KeyMaps",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMapItem, type), RawPropertyType(1), nullptr},
		KeyMapItem_type_get, KeyMapItem_type_set, rna_KeyMapItem_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 207, 0
	};

	rna_KeyMapItem_value_ = {
		{&rna_KeyMapItem_direction, 	&rna_KeyMapItem_type,
		-1, "value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMapItem, val), RawPropertyType(10), nullptr},
		KeyMapItem_value_get, KeyMapItem_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
	};

	rna_KeyMapItem_direction_ = {
		{&rna_KeyMapItem_id, 	&rna_KeyMapItem_value,
		-1, "direction", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Direction",
		"The direction (only applies to drag events)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMapItem, direction), RawPropertyType(10), nullptr},
		KeyMapItem_direction_get, KeyMapItem_direction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_direction_items, 9, -1
	};

	rna_KeyMapItem_id_ = {
		{&rna_KeyMapItem_any, 	&rna_KeyMapItem_direction,
		-1, "id", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "ID",
		"ID of the item",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMapItem, id), RawPropertyType(1), nullptr},
		KeyMapItem_id_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_any_ = {
		{&rna_KeyMapItem_shift, 	&rna_KeyMapItem_id,
		-1, "any", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Any",
		"Any modifier keys pressed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_any_get, KeyMapItem_any_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_shift_ = {
		{&rna_KeyMapItem_ctrl, 	&rna_KeyMapItem_any,
		-1, "shift", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shift",
		"Shift key pressed, -1 for any state",
		0, "WindowManager",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMapItem, shift), RawPropertyType(10), nullptr},
		KeyMapItem_shift_get, KeyMapItem_shift_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_ctrl_ = {
		{&rna_KeyMapItem_alt, 	&rna_KeyMapItem_shift,
		-1, "ctrl", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Ctrl",
		"Control key pressed, -1 for any state",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMapItem, ctrl), RawPropertyType(10), nullptr},
		KeyMapItem_ctrl_get, KeyMapItem_ctrl_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_alt_ = {
		{&rna_KeyMapItem_oskey, 	&rna_KeyMapItem_ctrl,
		-1, "alt", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alt",
		"Alt key pressed, -1 for any state",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMapItem, alt), RawPropertyType(10), nullptr},
		KeyMapItem_alt_get, KeyMapItem_alt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_oskey_ = {
		{&rna_KeyMapItem_hyper, 	&rna_KeyMapItem_alt,
		-1, "oskey", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "OS Key",
		"Operating system key pressed, -1 for any state",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMapItem, oskey), RawPropertyType(10), nullptr},
		KeyMapItem_oskey_get, KeyMapItem_oskey_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_hyper_ = {
		{&rna_KeyMapItem_shift_ui, 	&rna_KeyMapItem_oskey,
		-1, "hyper", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Hyper",
		"Hyper key pressed, -1 for any state",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMapItem, hyper), RawPropertyType(10), nullptr},
		KeyMapItem_hyper_get, KeyMapItem_hyper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_shift_ui_ = {
		{&rna_KeyMapItem_ctrl_ui, 	&rna_KeyMapItem_hyper,
		-1, "shift_ui", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shift",
		"Shift key pressed",
		0, "WindowManager",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_shift_ui_get, KeyMapItem_shift_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_ctrl_ui_ = {
		{&rna_KeyMapItem_alt_ui, 	&rna_KeyMapItem_shift_ui,
		-1, "ctrl_ui", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ctrl",
		"Control key pressed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_ctrl_ui_get, KeyMapItem_ctrl_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_alt_ui_ = {
		{&rna_KeyMapItem_oskey_ui, 	&rna_KeyMapItem_ctrl_ui,
		-1, "alt_ui", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Alt",
		"Alt key pressed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_alt_ui_get, KeyMapItem_alt_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_oskey_ui_ = {
		{&rna_KeyMapItem_hyper_ui, 	&rna_KeyMapItem_alt_ui,
		-1, "oskey_ui", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "OS Key",
		"Operating system key pressed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_oskey_ui_get, KeyMapItem_oskey_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_hyper_ui_ = {
		{&rna_KeyMapItem_key_modifier, 	&rna_KeyMapItem_oskey_ui,
		-1, "hyper_ui", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hyper",
		"Hyper key pressed. An additional modifier which can be configured on Linux, typically replacing CapsLock",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_hyper_ui_get, KeyMapItem_hyper_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_key_modifier_ = {
		{&rna_KeyMapItem_repeat, 	&rna_KeyMapItem_hyper_ui,
		-1, "key_modifier", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Key Modifier",
		"Regular key pressed as a modifier",
		0, "UI_Events_KeyMaps",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_key_modifier_get, KeyMapItem_key_modifier_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 207, 0
	};

	rna_KeyMapItem_repeat_ = {
		{&rna_KeyMapItem_show_expanded, 	&rna_KeyMapItem_key_modifier,
		-1, "repeat", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "Repeat",
		"Active on key-repeat events (when a key is held)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_repeat_get, KeyMapItem_repeat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_show_expanded_ = {
		{&rna_KeyMapItem_propvalue, 	&rna_KeyMapItem_repeat,
		-1, "show_expanded", 1073745923, 0, 0, 0, 0, PropertyPathTemplateType(0), "Expanded",
		"Show key map event and property details in the user interface",
		33, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_show_expanded_get, KeyMapItem_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_propvalue_ = {
		{&rna_KeyMapItem_active, 	&rna_KeyMapItem_show_expanded,
		-1, "propvalue", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Property Value",
		"The value this event translates to in a modal keymap",
		0, "WindowManager",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(wmKeyMapItem, propvalue), RawPropertyType(1), nullptr},
		KeyMapItem_propvalue_get, KeyMapItem_propvalue_set, rna_KeyMapItem_propvalue_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_keymap_propvalue_items, 1, 0
	};

	rna_KeyMapItem_active_ = {
		{&rna_KeyMapItem_is_user_modified, 	&rna_KeyMapItem_propvalue,
		-1, "active", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"Activate or deactivate item",
		7, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_KeyMapItem_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_active_get, KeyMapItem_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_is_user_modified_ = {
		{&rna_KeyMapItem_is_user_defined, 	&rna_KeyMapItem_active,
		-1, "is_user_modified", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "User Modified",
		"Is this keymap item modified by the user",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_is_user_modified_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyMapItem_is_user_defined_ = {
		{nullptr, 	&rna_KeyMapItem_is_user_modified,
		-1, "is_user_defined", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "User Defined",
		"Is this keymap item user defined (does not just replace a builtin item)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyMapItem_is_user_defined_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_KeyMapItem;
	srna->cont.properties = {&rna_KeyMapItem_rna_properties, &rna_KeyMapItem_is_user_defined};
	srna->identifier = "KeyMapItem";
	srna->flag = 516;
	srna->name = "Key Map Item";
	srna->description = "Item in a Key Map";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_KeyMapItem_idname;
	srna->iteratorproperty = &rna_KeyMapItem_rna_properties;
	{
	rna_KeyMapItem_compare_item_ = {
		{&rna_KeyMapItem_compare_result, 	nullptr,
		-1, "item", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Item",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMapItem
	};
	rna_KeyMapItem_compare_result_ = {
		{nullptr, 	&rna_KeyMapItem_compare_item,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Comparison result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMapItem_compare_item, &rna_KeyMapItem_compare_result};
		func->identifier = "compare";
		func->description = "compare";
		func->call = KeyMapItem_compare_call;
		func->c_ret = &rna_KeyMapItem_compare_result;
		rna_KeyMapItem_compare_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyMapItem_to_string_compact_ = {
		{&rna_KeyMapItem_to_string_result, 	nullptr,
		-1, "compact", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Compact",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_KeyMapItem_to_string_result_ = {
		{nullptr, 	&rna_KeyMapItem_to_string_compact,
		-1, "result", 8650753, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyMapItem_to_string_compact, &rna_KeyMapItem_to_string_result};
		func->identifier = "to_string";
		func->description = "to_string";
		func->call = KeyMapItem_to_string_call;
		rna_KeyMapItem_to_string_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
