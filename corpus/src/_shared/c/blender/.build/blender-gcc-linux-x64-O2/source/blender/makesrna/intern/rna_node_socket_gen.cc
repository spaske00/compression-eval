
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

#include "rna_node_socket.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;



extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloat_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatUnsigned_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatPercentage_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatFactor_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatMass_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatAngle_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatTime_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatTimeAbsolute_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatDistance_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatWavelength_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatColorTemperature_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatFrequency_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFloatPixel_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketInt_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntUnsigned_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntPercentage_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntFactor_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntPixel_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketBool_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVector_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorFactor_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorPercentage_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorTranslation_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorDirection_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorVelocity_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorAcceleration_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorEuler_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorXYZ_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorPixel_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVector2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorFactor2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorPercentage2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorTranslation2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorDirection2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorVelocity2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorAcceleration2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorEuler2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorXYZ2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorPixel2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVector4D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorFactor4D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorPercentage4D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorTranslation4D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorDirection4D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorVelocity4D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorAcceleration4D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorEuler4D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorXYZ4D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketVectorPixel4D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntVector2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntVectorUnsigned2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntVectorPercentage2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntVectorFactor2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntVectorPixel2D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntVector3D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntVectorUnsigned3D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntVectorPercentage3D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntVectorFactor3D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketIntVectorPixel3D_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketRotation_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketColor_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketString_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketStringFilePath_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketObject_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketImage_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketCollection_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketTexture_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketMaterial_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketMenu_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketFont_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketScene_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketText_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketMask_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern PropertyRNA &rna_NodeSocketSound_default_value;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;




extern PropertyRNA &rna_NodeSocket_rna_properties;
extern PropertyRNA &rna_NodeSocket_rna_type;
extern PropertyRNA &rna_NodeSocket_name;
extern PropertyRNA &rna_NodeSocket_label;
extern PropertyRNA &rna_NodeSocket_identifier;
extern PropertyRNA &rna_NodeSocket_description;
extern PropertyRNA &rna_NodeSocket_is_output;
extern PropertyRNA &rna_NodeSocket_select;
extern PropertyRNA &rna_NodeSocket_hide;
extern PropertyRNA &rna_NodeSocket_enabled;
extern PropertyRNA &rna_NodeSocket_link_limit;
extern PropertyRNA &rna_NodeSocket_is_linked;
extern PropertyRNA &rna_NodeSocket_is_unavailable;
extern PropertyRNA &rna_NodeSocket_is_multi_input;
extern PropertyRNA &rna_NodeSocket_show_expanded;
extern PropertyRNA &rna_NodeSocket_is_inactive;
extern PropertyRNA &rna_NodeSocket_is_icon_visible;
extern PropertyRNA &rna_NodeSocket_hide_value;
extern PropertyRNA &rna_NodeSocket_pin_gizmo;
extern PropertyRNA &rna_NodeSocket_node;
extern PropertyRNA &rna_NodeSocket_type;
extern PropertyRNA &rna_NodeSocket_display_shape;
extern PropertyRNA &rna_NodeSocket_inferred_structure_type;
extern PropertyRNA &rna_NodeSocket_bl_idname;
extern PropertyRNA &rna_NodeSocket_bl_label;
extern PropertyRNA &rna_NodeSocket_bl_subtype_label;

extern FunctionRNA *rna_NodeSocketStandard_draw_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_layout;
extern PropertyRNA &rna_NodeSocketStandard_draw_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_text;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_context;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_node;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_color;

extern FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color;


extern FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create;
extern PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_NodeSocket_draw_func;
extern PropertyRNA &rna_NodeSocket_draw_context;
extern PropertyRNA &rna_NodeSocket_draw_layout;
extern PropertyRNA &rna_NodeSocket_draw_node;
extern PropertyRNA &rna_NodeSocket_draw_text;

extern FunctionRNA *rna_NodeSocket_draw_color_func;
extern PropertyRNA &rna_NodeSocket_draw_color_context;
extern PropertyRNA &rna_NodeSocket_draw_color_node;
extern PropertyRNA &rna_NodeSocket_draw_color_color;

extern FunctionRNA *rna_NodeSocket_draw_color_simple_func;
extern PropertyRNA &rna_NodeSocket_draw_color_simple_color;


static PointerRNA NodeSocket_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void NodeSocket_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NodeSocket_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = NodeSocket_rna_properties_get(iter);
    }
}

void NodeSocket_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NodeSocket_rna_properties_get(iter);
    }
}

void NodeSocket_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NodeSocket_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA NodeSocket_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void NodeSocket_name_get(PointerRNA *ptr, char *value)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int NodeSocket_name_length(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return strlen(data->name);
}

void NodeSocket_name_set(PointerRNA *ptr, const char *value)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

void NodeSocket_label_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_NodeSocket_label_get;
    fn(ptr, value);
}

int NodeSocket_label_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_NodeSocket_label_length;
    return fn(ptr);
}

void NodeSocket_identifier_get(PointerRNA *ptr, char *value)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    BLI_assert(strlen(data->identifier) < 64);
    strcpy(value, data->identifier);
}

int NodeSocket_identifier_length(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return strlen(data->identifier);
}

void NodeSocket_description_get(PointerRNA *ptr, char *value)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    BLI_assert(strlen(data->description) < 64);
    strcpy(value, data->description);
}

int NodeSocket_description_length(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return strlen(data->description);
}

void NodeSocket_description_set(PointerRNA *ptr, const char *value)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    BLI_strncpy_utf8(data->description, value, 64);
}

bool NodeSocket_is_output_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NodeSocket_is_output_get;
    return fn(ptr);
}

bool NodeSocket_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NodeSocket_select_get;
    return fn(ptr);
}

bool NodeSocket_hide_get(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void NodeSocket_hide_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_NodeSocket_hide_set;
    fn(ptr, value);
}

bool NodeSocket_enabled_get(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return !((uint64_t(data->flag) & 8) != 0);
}

void NodeSocket_enabled_set(PointerRNA *ptr, bool value)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

int NodeSocket_link_limit_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_NodeSocket_link_limit_get;
    return fn(ptr);
}

void NodeSocket_link_limit_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_NodeSocket_link_limit_set;
    fn(ptr, value);
}

bool NodeSocket_is_linked_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NodeSocket_is_linked_get;
    return fn(ptr);
}

bool NodeSocket_is_unavailable_get(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

bool NodeSocket_is_multi_input_get(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

bool NodeSocket_show_expanded_get(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return !((uint64_t(data->flag) & 64) != 0);
}

void NodeSocket_show_expanded_set(PointerRNA *ptr, bool value)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool NodeSocket_is_inactive_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NodeSocket_is_inactive_get;
    return fn(ptr);
}

bool NodeSocket_is_icon_visible_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NodeSocket_is_icon_visible_get;
    return fn(ptr);
}

bool NodeSocket_hide_value_get(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void NodeSocket_hide_value_set(PointerRNA *ptr, bool value)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool NodeSocket_pin_gizmo_get(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void NodeSocket_pin_gizmo_set(PointerRNA *ptr, bool value)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

PointerRNA NodeSocket_node_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_NodeSocket_node_get;
    return fn(ptr);
}

int NodeSocket_type_get(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return (int)(data->type);
}

void NodeSocket_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_NodeSocket_type_set;
    fn(ptr, value);
}

int NodeSocket_display_shape_get(PointerRNA *ptr)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    return (int)(data->display_shape);
}

void NodeSocket_display_shape_set(PointerRNA *ptr, int value)
{
    bNodeSocket *data = (bNodeSocket *)(ptr->data);
    data->display_shape = (std::remove_reference_t<decltype(data->display_shape)>)value;
}

int NodeSocket_inferred_structure_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_NodeSocket_inferred_structure_type_get;
    return fn(ptr);
}

void NodeSocket_bl_idname_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_NodeSocket_bl_idname_get;
    fn(ptr, value);
}

int NodeSocket_bl_idname_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_NodeSocket_bl_idname_length;
    return fn(ptr);
}

void NodeSocket_bl_idname_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_NodeSocket_bl_idname_set;
    fn(ptr, value);
}

void NodeSocket_bl_label_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_NodeSocket_bl_label_get;
    fn(ptr, value);
}

int NodeSocket_bl_label_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_NodeSocket_bl_label_length;
    return fn(ptr);
}

void NodeSocket_bl_label_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_NodeSocket_bl_label_set;
    fn(ptr, value);
}

void NodeSocket_bl_subtype_label_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_NodeSocket_bl_subtype_label_get;
    fn(ptr, value);
}

int NodeSocket_bl_subtype_label_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_NodeSocket_bl_subtype_label_length;
    return fn(ptr);
}

void NodeSocket_bl_subtype_label_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_NodeSocket_bl_subtype_label_set;
    fn(ptr, value);
}

float NodeSocketFloat_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloat_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatUnsigned_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatUnsigned_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatPercentage_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatPercentage_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatFactor_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatFactor_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatMass_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatMass_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatAngle_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatAngle_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatTime_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatTime_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatTimeAbsolute_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatTimeAbsolute_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatDistance_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatDistance_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatWavelength_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatWavelength_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatColorTemperature_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatColorTemperature_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatFrequency_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatFrequency_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float NodeSocketFloatPixel_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    return (float)(data->value);
}

void NodeSocketFloatPixel_default_value_set(PointerRNA *ptr, float value)
{
    bNodeSocketValueFloat *data = (bNodeSocketValueFloat *)(((bNodeSocket *)ptr->data)->default_value);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_float_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

int NodeSocketInt_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueInt *data = (bNodeSocketValueInt *)(((bNodeSocket *)ptr->data)->default_value);
    return (int)(data->value);
}

void NodeSocketInt_default_value_set(PointerRNA *ptr, int value)
{
    bNodeSocketValueInt *data = (bNodeSocketValueInt *)(((bNodeSocket *)ptr->data)->default_value);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

int NodeSocketIntUnsigned_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueInt *data = (bNodeSocketValueInt *)(((bNodeSocket *)ptr->data)->default_value);
    return (int)(data->value);
}

void NodeSocketIntUnsigned_default_value_set(PointerRNA *ptr, int value)
{
    bNodeSocketValueInt *data = (bNodeSocketValueInt *)(((bNodeSocket *)ptr->data)->default_value);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

int NodeSocketIntPercentage_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueInt *data = (bNodeSocketValueInt *)(((bNodeSocket *)ptr->data)->default_value);
    return (int)(data->value);
}

void NodeSocketIntPercentage_default_value_set(PointerRNA *ptr, int value)
{
    bNodeSocketValueInt *data = (bNodeSocketValueInt *)(((bNodeSocket *)ptr->data)->default_value);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

int NodeSocketIntFactor_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueInt *data = (bNodeSocketValueInt *)(((bNodeSocket *)ptr->data)->default_value);
    return (int)(data->value);
}

void NodeSocketIntFactor_default_value_set(PointerRNA *ptr, int value)
{
    bNodeSocketValueInt *data = (bNodeSocketValueInt *)(((bNodeSocket *)ptr->data)->default_value);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

int NodeSocketIntPixel_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueInt *data = (bNodeSocketValueInt *)(((bNodeSocket *)ptr->data)->default_value);
    return (int)(data->value);
}

void NodeSocketIntPixel_default_value_set(PointerRNA *ptr, int value)
{
    bNodeSocketValueInt *data = (bNodeSocketValueInt *)(((bNodeSocket *)ptr->data)->default_value);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

bool NodeSocketBool_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueBoolean *data = (bNodeSocketValueBoolean *)(((bNodeSocket *)ptr->data)->default_value);
    return ((uint64_t(data->value) & 1) != 0);
}

void NodeSocketBool_default_value_set(PointerRNA *ptr, bool value)
{
    bNodeSocketValueBoolean *data = (bNodeSocketValueBoolean *)(((bNodeSocket *)ptr->data)->default_value);
    if (value) { data->value = std::remove_reference_t<decltype(data->value)>(uint64_t(data->value) | 1); }
    else { data->value = std::remove_reference_t<decltype(data->value)>(uint64_t(data->value) & ~uint64_t(1)); }
}

void NodeSocketVector_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVector_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorFactor_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorFactor_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorPercentage_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorPercentage_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorTranslation_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorTranslation_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorDirection_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorDirection_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorVelocity_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorVelocity_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorAcceleration_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorAcceleration_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorEuler_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorEuler_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorXYZ_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorXYZ_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorPixel_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorPixel_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVector2D_default_value_get(PointerRNA *ptr, float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVector2D_default_value_set(PointerRNA *ptr, const float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorFactor2D_default_value_get(PointerRNA *ptr, float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorFactor2D_default_value_set(PointerRNA *ptr, const float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorPercentage2D_default_value_get(PointerRNA *ptr, float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorPercentage2D_default_value_set(PointerRNA *ptr, const float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorTranslation2D_default_value_get(PointerRNA *ptr, float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorTranslation2D_default_value_set(PointerRNA *ptr, const float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorDirection2D_default_value_get(PointerRNA *ptr, float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorDirection2D_default_value_set(PointerRNA *ptr, const float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorVelocity2D_default_value_get(PointerRNA *ptr, float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorVelocity2D_default_value_set(PointerRNA *ptr, const float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorAcceleration2D_default_value_get(PointerRNA *ptr, float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorAcceleration2D_default_value_set(PointerRNA *ptr, const float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorEuler2D_default_value_get(PointerRNA *ptr, float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorEuler2D_default_value_set(PointerRNA *ptr, const float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorXYZ2D_default_value_get(PointerRNA *ptr, float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorXYZ2D_default_value_set(PointerRNA *ptr, const float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorPixel2D_default_value_get(PointerRNA *ptr, float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorPixel2D_default_value_set(PointerRNA *ptr, const float values[2])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVector4D_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVector4D_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorFactor4D_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorFactor4D_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorPercentage4D_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorPercentage4D_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorTranslation4D_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorTranslation4D_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorDirection4D_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorDirection4D_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorVelocity4D_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorVelocity4D_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorAcceleration4D_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorAcceleration4D_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorEuler4D_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorEuler4D_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorXYZ4D_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorXYZ4D_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketVectorPixel4D_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketVectorPixel4D_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueVector *data = (bNodeSocketValueVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketIntVector2D_default_value_get(PointerRNA *ptr, int values[2])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->value)[i]);
    }
}

void NodeSocketIntVector2D_default_value_set(PointerRNA *ptr, const int values[2])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((int *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketIntVectorUnsigned2D_default_value_get(PointerRNA *ptr, int values[2])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->value)[i]);
    }
}

void NodeSocketIntVectorUnsigned2D_default_value_set(PointerRNA *ptr, const int values[2])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((int *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketIntVectorPercentage2D_default_value_get(PointerRNA *ptr, int values[2])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->value)[i]);
    }
}

void NodeSocketIntVectorPercentage2D_default_value_set(PointerRNA *ptr, const int values[2])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((int *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketIntVectorFactor2D_default_value_get(PointerRNA *ptr, int values[2])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->value)[i]);
    }
}

void NodeSocketIntVectorFactor2D_default_value_set(PointerRNA *ptr, const int values[2])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((int *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketIntVectorPixel2D_default_value_get(PointerRNA *ptr, int values[2])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->value)[i]);
    }
}

void NodeSocketIntVectorPixel2D_default_value_set(PointerRNA *ptr, const int values[2])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 2; i++) {
        ((int *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketIntVector3D_default_value_get(PointerRNA *ptr, int values[3])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->value)[i]);
    }
}

void NodeSocketIntVector3D_default_value_set(PointerRNA *ptr, const int values[3])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((int *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketIntVectorUnsigned3D_default_value_get(PointerRNA *ptr, int values[3])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->value)[i]);
    }
}

void NodeSocketIntVectorUnsigned3D_default_value_set(PointerRNA *ptr, const int values[3])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((int *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketIntVectorPercentage3D_default_value_get(PointerRNA *ptr, int values[3])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->value)[i]);
    }
}

void NodeSocketIntVectorPercentage3D_default_value_set(PointerRNA *ptr, const int values[3])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((int *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketIntVectorFactor3D_default_value_get(PointerRNA *ptr, int values[3])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->value)[i]);
    }
}

void NodeSocketIntVectorFactor3D_default_value_set(PointerRNA *ptr, const int values[3])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((int *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketIntVectorPixel3D_default_value_get(PointerRNA *ptr, int values[3])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->value)[i]);
    }
}

void NodeSocketIntVectorPixel3D_default_value_set(PointerRNA *ptr, const int values[3])
{
    bNodeSocketValueIntVector *data = (bNodeSocketValueIntVector *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_NodeSocketStandard_int_vector_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    for (i = 0; i < 3; i++) {
        ((int *)data->value)[i] = std::clamp(values[i], prop_clamp_min, prop_clamp_max);
    }
}

void NodeSocketRotation_default_value_get(PointerRNA *ptr, float values[3])
{
    bNodeSocketValueRotation *data = (bNodeSocketValueRotation *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->value_euler)[i]);
    }
}

void NodeSocketRotation_default_value_set(PointerRNA *ptr, const float values[3])
{
    bNodeSocketValueRotation *data = (bNodeSocketValueRotation *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->value_euler)[i] = values[i];
    }
}

void NodeSocketColor_default_value_get(PointerRNA *ptr, float values[4])
{
    bNodeSocketValueRGBA *data = (bNodeSocketValueRGBA *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void NodeSocketColor_default_value_set(PointerRNA *ptr, const float values[4])
{
    bNodeSocketValueRGBA *data = (bNodeSocketValueRGBA *)(((bNodeSocket *)ptr->data)->default_value);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->value)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void NodeSocketString_default_value_get(PointerRNA *ptr, char *value)
{
    bNodeSocketValueString *data = (bNodeSocketValueString *)(((bNodeSocket *)ptr->data)->default_value);
    BLI_assert(strlen(data->value) < 1024);
    strcpy(value, data->value);
}

int NodeSocketString_default_value_length(PointerRNA *ptr)
{
    bNodeSocketValueString *data = (bNodeSocketValueString *)(((bNodeSocket *)ptr->data)->default_value);
    return strlen(data->value);
}

void NodeSocketString_default_value_set(PointerRNA *ptr, const char *value)
{
    bNodeSocketValueString *data = (bNodeSocketValueString *)(((bNodeSocket *)ptr->data)->default_value);
    BLI_strncpy_utf8(data->value, value, 1024);
}

void NodeSocketStringFilePath_default_value_get(PointerRNA *ptr, char *value)
{
    bNodeSocketValueString *data = (bNodeSocketValueString *)(((bNodeSocket *)ptr->data)->default_value);
    BLI_assert(strlen(data->value) < 1024);
    strcpy(value, data->value);
}

int NodeSocketStringFilePath_default_value_length(PointerRNA *ptr)
{
    bNodeSocketValueString *data = (bNodeSocketValueString *)(((bNodeSocket *)ptr->data)->default_value);
    return strlen(data->value);
}

void NodeSocketStringFilePath_default_value_set(PointerRNA *ptr, const char *value)
{
    bNodeSocketValueString *data = (bNodeSocketValueString *)(((bNodeSocket *)ptr->data)->default_value);
    BLI_strncpy(data->value, value, 1024);
}

PointerRNA NodeSocketObject_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueObject *data = (bNodeSocketValueObject *)(((bNodeSocket *)ptr->data)->default_value);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->value);
}

void NodeSocketObject_default_value_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bNodeSocketValueObject *data = (bNodeSocketValueObject *)(((bNodeSocket *)ptr->data)->default_value);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->value) {
        id_us_min((ID *)data->value);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->value = value.data;
}

PointerRNA NodeSocketImage_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueImage *data = (bNodeSocketValueImage *)(((bNodeSocket *)ptr->data)->default_value);
    return RNA_pointer_create_with_parent(*ptr, RNA_Image, data->value);
}

void NodeSocketImage_default_value_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bNodeSocketValueImage *data = (bNodeSocketValueImage *)(((bNodeSocket *)ptr->data)->default_value);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->value) {
        id_us_min((ID *)data->value);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->value = value.data;
}

PointerRNA NodeSocketCollection_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueCollection *data = (bNodeSocketValueCollection *)(((bNodeSocket *)ptr->data)->default_value);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->value);
}

void NodeSocketCollection_default_value_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bNodeSocketValueCollection *data = (bNodeSocketValueCollection *)(((bNodeSocket *)ptr->data)->default_value);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->value) {
        id_us_min((ID *)data->value);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->value = value.data;
}

PointerRNA NodeSocketTexture_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueTexture *data = (bNodeSocketValueTexture *)(((bNodeSocket *)ptr->data)->default_value);
    return RNA_pointer_create_with_parent(*ptr, RNA_Texture, data->value);
}

void NodeSocketTexture_default_value_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bNodeSocketValueTexture *data = (bNodeSocketValueTexture *)(((bNodeSocket *)ptr->data)->default_value);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->value) {
        id_us_min((ID *)data->value);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->value = value.data;
}

PointerRNA NodeSocketMaterial_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueMaterial *data = (bNodeSocketValueMaterial *)(((bNodeSocket *)ptr->data)->default_value);
    return RNA_pointer_create_with_parent(*ptr, RNA_Material, data->value);
}

void NodeSocketMaterial_default_value_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bNodeSocketValueMaterial *data = (bNodeSocketValueMaterial *)(((bNodeSocket *)ptr->data)->default_value);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->value) {
        id_us_min((ID *)data->value);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->value = value.data;
}

int NodeSocketMenu_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueMenu *data = (bNodeSocketValueMenu *)(((bNodeSocket *)ptr->data)->default_value);
    return (int)(data->value);
}

void NodeSocketMenu_default_value_set(PointerRNA *ptr, int value)
{
    bNodeSocketValueMenu *data = (bNodeSocketValueMenu *)(((bNodeSocket *)ptr->data)->default_value);
    data->value = (std::remove_reference_t<decltype(data->value)>)value;
}

PointerRNA NodeSocketFont_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueFont *data = (bNodeSocketValueFont *)(((bNodeSocket *)ptr->data)->default_value);
    return RNA_pointer_create_with_parent(*ptr, RNA_VectorFont, data->value);
}

void NodeSocketFont_default_value_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bNodeSocketValueFont *data = (bNodeSocketValueFont *)(((bNodeSocket *)ptr->data)->default_value);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->value) {
        id_us_min((ID *)data->value);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->value = value.data;
}

PointerRNA NodeSocketScene_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueScene *data = (bNodeSocketValueScene *)(((bNodeSocket *)ptr->data)->default_value);
    return RNA_pointer_create_with_parent(*ptr, RNA_Scene, data->value);
}

void NodeSocketScene_default_value_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bNodeSocketValueScene *data = (bNodeSocketValueScene *)(((bNodeSocket *)ptr->data)->default_value);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->value) {
        id_us_min((ID *)data->value);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->value = value.data;
}

PointerRNA NodeSocketText_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueText *data = (bNodeSocketValueText *)(((bNodeSocket *)ptr->data)->default_value);
    return RNA_pointer_create_with_parent(*ptr, RNA_Text, data->value);
}

void NodeSocketText_default_value_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bNodeSocketValueText *data = (bNodeSocketValueText *)(((bNodeSocket *)ptr->data)->default_value);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->value) {
        id_us_min((ID *)data->value);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->value = value.data;
}

PointerRNA NodeSocketMask_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueMask *data = (bNodeSocketValueMask *)(((bNodeSocket *)ptr->data)->default_value);
    return RNA_pointer_create_with_parent(*ptr, RNA_Mask, data->value);
}

void NodeSocketMask_default_value_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bNodeSocketValueMask *data = (bNodeSocketValueMask *)(((bNodeSocket *)ptr->data)->default_value);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->value) {
        id_us_min((ID *)data->value);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->value = value.data;
}

PointerRNA NodeSocketSound_default_value_get(PointerRNA *ptr)
{
    bNodeSocketValueSound *data = (bNodeSocketValueSound *)(((bNodeSocket *)ptr->data)->default_value);
    return RNA_pointer_create_with_parent(*ptr, RNA_Sound, data->value);
}

void NodeSocketSound_default_value_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    bNodeSocketValueSound *data = (bNodeSocketValueSound *)(((bNodeSocket *)ptr->data)->default_value);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->value) {
        id_us_min((ID *)data->value);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->value = value.data;
}

IDPropertyGroup *NodeSocket_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void NodeSocket_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

void NodeSocketStandard_draw_func(ID *_selfid, bNodeSocket *_self, bContext *context, ui::Layout *layout, PointerRNA *node, const char * text)
{
	rna_NodeSocketStandard_draw(_selfid, _self, context, layout, node, text);
}

static void NodeSocketStandard_draw_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bNodeSocket *_self;
	bContext *context;
	ui::Layout *layout;
	PointerRNA *node;
	const char * text;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bNodeSocket *)_ptr->data;
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	layout = *((ui::Layout **)_data);
	_data += 8;
	node = ((PointerRNA *)_data);
	_data += 88;
	text = *((const char * *)_data);
	
	rna_NodeSocketStandard_draw(_selfid, _self, context, layout, node, text);
}

void NodeSocketStandard_draw_color_func(ID *_selfid, bNodeSocket *_self, bContext *context, PointerRNA *node, float color[4])
{
	rna_NodeSocketStandard_draw_color(_selfid, _self, context, node, color);
}

static void NodeSocketStandard_draw_color_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	bNodeSocket *_self;
	bContext *context;
	PointerRNA *node;
	float *color;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (bNodeSocket *)_ptr->data;
	_data = (char *)_parms->data;
	context = *((bContext **)_data);
	_data += 8;
	node = ((PointerRNA *)_data);
	_data += 88;
	color = ((float *)_data);
	
	rna_NodeSocketStandard_draw_color(_selfid, _self, context, node, color);
}

void NodeSocketStandard_draw_color_simple_func(StructRNA *_type, float color[4])
{
	rna_NodeSocketStandard_draw_color_simple(_type, color);
}

static void NodeSocketStandard_draw_color_simple_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	StructRNA *_type;
	float *color;
	char *_data;
	
	_type = _ptr->type;
	_data = (char *)_parms->data;
	color = ((float *)_data);
	
	rna_NodeSocketStandard_draw_color_simple(_type, color);
}

/* Repeated prototypes to detect errors */

void rna_NodeSocketStandard_draw(ID *_selfid, bNodeSocket *_self, bContext *context, ui::Layout *layout, PointerRNA *node, const char * text);
void rna_NodeSocketStandard_draw_color(ID *_selfid, bNodeSocket *_self, bContext *context, PointerRNA *node, float color[4]);
void rna_NodeSocketStandard_draw_color_simple(StructRNA *_type, float color[4]);

















































































/* Node Socket */
static CollectionPropertyRNA rna_NodeSocket_rna_properties_;
PropertyRNA &rna_NodeSocket_rna_properties = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_rna_properties_);

static PointerPropertyRNA rna_NodeSocket_rna_type_;
PropertyRNA &rna_NodeSocket_rna_type = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_rna_type_);

static StringPropertyRNA rna_NodeSocket_name_;
PropertyRNA &rna_NodeSocket_name = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_name_);

static StringPropertyRNA rna_NodeSocket_label_;
PropertyRNA &rna_NodeSocket_label = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_label_);

static StringPropertyRNA rna_NodeSocket_identifier_;
PropertyRNA &rna_NodeSocket_identifier = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_identifier_);

static StringPropertyRNA rna_NodeSocket_description_;
PropertyRNA &rna_NodeSocket_description = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_description_);

static BoolPropertyRNA rna_NodeSocket_is_output_;
PropertyRNA &rna_NodeSocket_is_output = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_is_output_);

static BoolPropertyRNA rna_NodeSocket_select_;
PropertyRNA &rna_NodeSocket_select = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_select_);

static BoolPropertyRNA rna_NodeSocket_hide_;
PropertyRNA &rna_NodeSocket_hide = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_hide_);

static BoolPropertyRNA rna_NodeSocket_enabled_;
PropertyRNA &rna_NodeSocket_enabled = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_enabled_);

static IntPropertyRNA rna_NodeSocket_link_limit_;
PropertyRNA &rna_NodeSocket_link_limit = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_link_limit_);

static BoolPropertyRNA rna_NodeSocket_is_linked_;
PropertyRNA &rna_NodeSocket_is_linked = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_is_linked_);

static BoolPropertyRNA rna_NodeSocket_is_unavailable_;
PropertyRNA &rna_NodeSocket_is_unavailable = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_is_unavailable_);

static BoolPropertyRNA rna_NodeSocket_is_multi_input_;
PropertyRNA &rna_NodeSocket_is_multi_input = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_is_multi_input_);

static BoolPropertyRNA rna_NodeSocket_show_expanded_;
PropertyRNA &rna_NodeSocket_show_expanded = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_show_expanded_);

static BoolPropertyRNA rna_NodeSocket_is_inactive_;
PropertyRNA &rna_NodeSocket_is_inactive = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_is_inactive_);

static BoolPropertyRNA rna_NodeSocket_is_icon_visible_;
PropertyRNA &rna_NodeSocket_is_icon_visible = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_is_icon_visible_);

static BoolPropertyRNA rna_NodeSocket_hide_value_;
PropertyRNA &rna_NodeSocket_hide_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_hide_value_);

static BoolPropertyRNA rna_NodeSocket_pin_gizmo_;
PropertyRNA &rna_NodeSocket_pin_gizmo = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_pin_gizmo_);

static PointerPropertyRNA rna_NodeSocket_node_;
PropertyRNA &rna_NodeSocket_node = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_node_);

static EnumPropertyRNA rna_NodeSocket_type_;
PropertyRNA &rna_NodeSocket_type = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_type_);

static EnumPropertyRNA rna_NodeSocket_display_shape_;
PropertyRNA &rna_NodeSocket_display_shape = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_display_shape_);

static EnumPropertyRNA rna_NodeSocket_inferred_structure_type_;
PropertyRNA &rna_NodeSocket_inferred_structure_type = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_inferred_structure_type_);

static StringPropertyRNA rna_NodeSocket_bl_idname_;
PropertyRNA &rna_NodeSocket_bl_idname = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_bl_idname_);

static StringPropertyRNA rna_NodeSocket_bl_label_;
PropertyRNA &rna_NodeSocket_bl_label = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_bl_label_);

static StringPropertyRNA rna_NodeSocket_bl_subtype_label_;
PropertyRNA &rna_NodeSocket_bl_subtype_label = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_bl_subtype_label_);

static BoolPropertyRNA rna_NodeSocket_bl_system_properties_get_do_create_;
PropertyRNA &rna_NodeSocket_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_NodeSocket_bl_system_properties_get_system_properties_;
PropertyRNA &rna_NodeSocket_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_bl_system_properties_get_system_properties_);

FunctionRNA *rna_NodeSocket_bl_system_properties_get_func;
static PointerPropertyRNA rna_NodeSocket_draw_context_;
PropertyRNA &rna_NodeSocket_draw_context = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_draw_context_);

static PointerPropertyRNA rna_NodeSocket_draw_layout_;
PropertyRNA &rna_NodeSocket_draw_layout = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_draw_layout_);

static PointerPropertyRNA rna_NodeSocket_draw_node_;
PropertyRNA &rna_NodeSocket_draw_node = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_draw_node_);

static StringPropertyRNA rna_NodeSocket_draw_text_;
PropertyRNA &rna_NodeSocket_draw_text = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_draw_text_);

FunctionRNA *rna_NodeSocket_draw_func;
static PointerPropertyRNA rna_NodeSocket_draw_color_context_;
PropertyRNA &rna_NodeSocket_draw_color_context = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_draw_color_context_);

static PointerPropertyRNA rna_NodeSocket_draw_color_node_;
PropertyRNA &rna_NodeSocket_draw_color_node = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_draw_color_node_);

static FloatPropertyRNA rna_NodeSocket_draw_color_color_;
PropertyRNA &rna_NodeSocket_draw_color_color = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_draw_color_color_);

FunctionRNA *rna_NodeSocket_draw_color_func;
static FloatPropertyRNA rna_NodeSocket_draw_color_simple_color_;
PropertyRNA &rna_NodeSocket_draw_color_simple_color = reinterpret_cast<PropertyRNA &>(rna_NodeSocket_draw_color_simple_color_);

FunctionRNA *rna_NodeSocket_draw_color_simple_func;
StructRNA *RNA_NodeSocket;
void register_struct_NodeSocket(BlenderRNA &brna)
{
	rna_NodeSocket_rna_properties_ = {
		{&rna_NodeSocket_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_rna_properties_begin, NodeSocket_rna_properties_next, NodeSocket_rna_properties_end, NodeSocket_rna_properties_get, nullptr, nullptr, NodeSocket_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_NodeSocket_rna_type_ = {
		{&rna_NodeSocket_name, 	&rna_NodeSocket_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_NodeSocket_name_ = {
		{&rna_NodeSocket_label, 	&rna_NodeSocket_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Socket name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_NodeSocket_update, 301989889, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_name_get, NodeSocket_name_length, NodeSocket_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_NodeSocket_label_ = {
		{&rna_NodeSocket_identifier, 	&rna_NodeSocket_name,
		-1, "label", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Label",
		"Custom dynamic defined UI label for the socket. Can be translated if translation is enabled in the preferences",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_label_get, NodeSocket_label_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_NodeSocket_identifier_ = {
		{&rna_NodeSocket_description, 	&rna_NodeSocket_label,
		-1, "identifier", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Identifier",
		"Unique identifier for mapping sockets",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_identifier_get, NodeSocket_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_NodeSocket_description_ = {
		{&rna_NodeSocket_is_output, 	&rna_NodeSocket_identifier,
		-1, "description", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tooltip",
		"Socket tooltip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_NodeSocket_update, 301989889, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_description_get, NodeSocket_description_length, NodeSocket_description_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_NodeSocket_is_output_ = {
		{&rna_NodeSocket_select, 	&rna_NodeSocket_description,
		-1, "is_output", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Output",
		"True if the socket is an output, otherwise input",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_is_output_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_select_ = {
		{&rna_NodeSocket_hide, 	&rna_NodeSocket_is_output,
		-1, "select", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"True if the socket is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_select_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_hide_ = {
		{&rna_NodeSocket_enabled, 	&rna_NodeSocket_select,
		-1, "hide", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Hide the socket",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 305332224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_hide_get, NodeSocket_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_enabled_ = {
		{&rna_NodeSocket_link_limit, 	&rna_NodeSocket_hide,
		-1, "enabled", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Enabled",
		"Enable the socket",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NodeSocket_enabled_update, 305332224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_enabled_get, NodeSocket_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_NodeSocket_link_limit_ = {
		{&rna_NodeSocket_is_linked, 	&rna_NodeSocket_enabled,
		-1, "link_limit", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Link Limit",
		"Max number of links allowed for this socket",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 301989889, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_link_limit_get, NodeSocket_link_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 4095, 1, 4095, 1, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_is_linked_ = {
		{&rna_NodeSocket_is_unavailable, 	&rna_NodeSocket_link_limit,
		-1, "is_linked", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Linked",
		"True if the socket is connected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_is_linked_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_is_unavailable_ = {
		{&rna_NodeSocket_is_multi_input, 	&rna_NodeSocket_is_linked,
		-1, "is_unavailable", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Unavailable",
		"True if the socket is unavailable",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_is_unavailable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_is_multi_input_ = {
		{&rna_NodeSocket_show_expanded, 	&rna_NodeSocket_is_unavailable,
		-1, "is_multi_input", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multi Input",
		"True if the socket can accept multiple ordered input links",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_is_multi_input_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_show_expanded_ = {
		{&rna_NodeSocket_is_inactive, 	&rna_NodeSocket_is_multi_input,
		-1, "show_expanded", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "Expanded",
		"Socket links are expanded in the user interface",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 301989889, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_show_expanded_get, NodeSocket_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_NodeSocket_is_inactive_ = {
		{&rna_NodeSocket_is_icon_visible, 	&rna_NodeSocket_show_expanded,
		-1, "is_inactive", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inactive",
		"Socket is grayed out because it has been detected to not have any effect on the output",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_is_inactive_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_is_icon_visible_ = {
		{&rna_NodeSocket_hide_value, 	&rna_NodeSocket_is_inactive,
		-1, "is_icon_visible", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Icon Visible",
		"Socket is drawn as interactive icon in the node editor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_is_icon_visible_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_hide_value_ = {
		{&rna_NodeSocket_pin_gizmo, 	&rna_NodeSocket_is_icon_visible,
		-1, "hide_value", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide Value",
		"Hide the socket input value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 305332224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_hide_value_get, NodeSocket_hide_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_pin_gizmo_ = {
		{&rna_NodeSocket_node, 	&rna_NodeSocket_hide_value,
		-1, "pin_gizmo", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pin Gizmo",
		"Keep gizmo visible even when the node is not selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 302120960, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_pin_gizmo_get, NodeSocket_pin_gizmo_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NodeSocket_node_ = {
		{&rna_NodeSocket_type, 	&rna_NodeSocket_pin_gizmo,
		-1, "node", 8388736, 2, 0, 0, 0, PropertyPathTemplateType(0), "Node",
		"Node owning this socket",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_node_get, nullptr, nullptr, nullptr,RNA_Node
	};

	rna_NodeSocket_type_ = {
		{&rna_NodeSocket_display_shape, 	&rna_NodeSocket_node,
		-1, "type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"Data type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NodeSocket_update, 301989889, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_type_get, NodeSocket_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_node_socket_type_items, 25, 0
	};

	static const EnumPropertyItem rna_NodeSocket_display_shape_items[10] = {
		{0, "CIRCLE", 0, "Circle", ""	},
		{1, "SQUARE", 0, "Square", ""	},
		{2, "DIAMOND", 0, "Diamond", ""	},
		{3, "CIRCLE_DOT", 0, "Circle with inner dot", ""	},
		{4, "SQUARE_DOT", 0, "Square with inner dot", ""	},
		{5, "DIAMOND_DOT", 0, "Diamond with inner dot", ""	},
		{6, "LINE", 0, "Line", ""	},
		{7, "VOLUME_GRID", 0, "Volume Grid", ""	},
		{8, "LIST", 0, "List", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_NodeSocket_display_shape_ = {
		{&rna_NodeSocket_inferred_structure_type, 	&rna_NodeSocket_type,
		-1, "display_shape", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shape",
		"Socket shape",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NodeSocket_update, 301989889, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bNodeSocket, display_shape), RawPropertyType(2), nullptr},
		NodeSocket_display_shape_get, NodeSocket_display_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_NodeSocket_display_shape_items, 9, 0
	};

	rna_NodeSocket_inferred_structure_type_ = {
		{&rna_NodeSocket_bl_idname, 	&rna_NodeSocket_display_shape,
		-1, "inferred_structure_type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inferred Structure Type",
		"Best known structure type of the socket. This may not match the socket shape, e.g. for unlinked input sockets",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_inferred_structure_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_node_socket_structure_type_items, 6, 0
	};

	rna_NodeSocket_bl_idname_ = {
		{&rna_NodeSocket_bl_label, 	&rna_NodeSocket_inferred_structure_type,
		-1, "bl_idname", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_bl_idname_get, NodeSocket_bl_idname_length, NodeSocket_bl_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_NodeSocket_bl_label_ = {
		{&rna_NodeSocket_bl_subtype_label, 	&rna_NodeSocket_bl_idname,
		-1, "bl_label", 262193, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type Label",
		"Label to display for the socket type in the UI",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_bl_label_get, NodeSocket_bl_label_length, NodeSocket_bl_label_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_NodeSocket_bl_subtype_label_ = {
		{nullptr, 	&rna_NodeSocket_bl_label,
		-1, "bl_subtype_label", 262193, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subtype Label",
		"Label to display for the socket subtype in the UI",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocket_bl_subtype_label_get, NodeSocket_bl_subtype_label_length, NodeSocket_bl_subtype_label_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_NodeSocket;
	srna->cont.properties = {&rna_NodeSocket_rna_properties, &rna_NodeSocket_bl_subtype_label};
	srna->identifier = "NodeSocket";
	srna->flag = 516;
	srna->name = "Node Socket";
	srna->description = "Input or output socket of a node";
	srna->translation_context = "*";
	srna->icon = 0;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
	{
	rna_NodeSocket_bl_system_properties_get_do_create_ = {
		{&rna_NodeSocket_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_NodeSocket_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_NodeSocket_bl_system_properties_get_do_create,
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
		func->cont.properties = {&rna_NodeSocket_bl_system_properties_get_do_create, &rna_NodeSocket_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = NodeSocket_bl_system_properties_get_call;
		func->c_ret = &rna_NodeSocket_bl_system_properties_get_system_properties;
		rna_NodeSocket_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_NodeSocket_draw_context_ = {
		{&rna_NodeSocket_draw_layout, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_NodeSocket_draw_layout_ = {
		{&rna_NodeSocket_draw_node, 	&rna_NodeSocket_draw_context,
		-1, "layout", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "Layout",
		"Layout in the UI",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UILayout
	};
	rna_NodeSocket_draw_node_ = {
		{&rna_NodeSocket_draw_text, 	&rna_NodeSocket_draw_layout,
		-1, "node", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "Node",
		"Node the socket belongs to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Node
	};
	rna_NodeSocket_draw_text_ = {
		{nullptr, 	&rna_NodeSocket_draw_node,
		-1, "text", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Text",
		"Text label to draw alongside properties",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NodeSocket_draw_context, &rna_NodeSocket_draw_text};
		func->identifier = "draw";
		func->flag = 32;
		func->description = "Draw socket";
		rna_NodeSocket_draw_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_NodeSocket_draw_color_context_ = {
		{&rna_NodeSocket_draw_color_node, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_NodeSocket_draw_color_node_ = {
		{&rna_NodeSocket_draw_color_color, 	&rna_NodeSocket_draw_color_context,
		-1, "node", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "Node",
		"Node the socket belongs to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Node
	};
	static float rna_NodeSocket_draw_color_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		1.0f
	};
	rna_NodeSocket_draw_color_color_ = {
		{nullptr, 	&rna_NodeSocket_draw_color_node,
		-1, "color", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, rna_NodeSocket_draw_color_color_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NodeSocket_draw_color_context, &rna_NodeSocket_draw_color_color};
		func->identifier = "draw_color";
		func->flag = 96;
		func->description = "Color of the socket icon";
		rna_NodeSocket_draw_color_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_NodeSocket_draw_color_simple_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		1.0f
	};
	rna_NodeSocket_draw_color_simple_color_ = {
		{nullptr, 	nullptr,
		-1, "color", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, rna_NodeSocket_draw_color_simple_color_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NodeSocket_draw_color_simple_color, &rna_NodeSocket_draw_color_simple_color};
		func->identifier = "draw_color_simple";
		func->flag = 97;
		func->description = "Color of the socket icon. Used to draw sockets in places where the socket does not belong to a node, like the node interface panel. Also used to draw node sockets if draw_color is not defined.";
		rna_NodeSocket_draw_color_simple_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* NodeSocketStandard */
static PointerPropertyRNA rna_NodeSocketStandard_draw_context_;
PropertyRNA &rna_NodeSocketStandard_draw_context = reinterpret_cast<PropertyRNA &>(rna_NodeSocketStandard_draw_context_);

static PointerPropertyRNA rna_NodeSocketStandard_draw_layout_;
PropertyRNA &rna_NodeSocketStandard_draw_layout = reinterpret_cast<PropertyRNA &>(rna_NodeSocketStandard_draw_layout_);

static PointerPropertyRNA rna_NodeSocketStandard_draw_node_;
PropertyRNA &rna_NodeSocketStandard_draw_node = reinterpret_cast<PropertyRNA &>(rna_NodeSocketStandard_draw_node_);

static StringPropertyRNA rna_NodeSocketStandard_draw_text_;
PropertyRNA &rna_NodeSocketStandard_draw_text = reinterpret_cast<PropertyRNA &>(rna_NodeSocketStandard_draw_text_);

FunctionRNA *rna_NodeSocketStandard_draw_func;
static PointerPropertyRNA rna_NodeSocketStandard_draw_color_context_;
PropertyRNA &rna_NodeSocketStandard_draw_color_context = reinterpret_cast<PropertyRNA &>(rna_NodeSocketStandard_draw_color_context_);

static PointerPropertyRNA rna_NodeSocketStandard_draw_color_node_;
PropertyRNA &rna_NodeSocketStandard_draw_color_node = reinterpret_cast<PropertyRNA &>(rna_NodeSocketStandard_draw_color_node_);

static FloatPropertyRNA rna_NodeSocketStandard_draw_color_color_;
PropertyRNA &rna_NodeSocketStandard_draw_color_color = reinterpret_cast<PropertyRNA &>(rna_NodeSocketStandard_draw_color_color_);

FunctionRNA *rna_NodeSocketStandard_draw_color_func;
static FloatPropertyRNA rna_NodeSocketStandard_draw_color_simple_color_;
PropertyRNA &rna_NodeSocketStandard_draw_color_simple_color = reinterpret_cast<PropertyRNA &>(rna_NodeSocketStandard_draw_color_simple_color_);

FunctionRNA *rna_NodeSocketStandard_draw_color_simple_func;
StructRNA *RNA_NodeSocketStandard;
void register_struct_NodeSocketStandard(BlenderRNA &brna)
{

	StructRNA *srna = RNA_NodeSocketStandard;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "NodeSocketStandard";
	srna->flag = 516;
	srna->name = "NodeSocketStandard";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 0;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocket;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
	{
	rna_NodeSocketStandard_draw_context_ = {
		{&rna_NodeSocketStandard_draw_layout, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_NodeSocketStandard_draw_layout_ = {
		{&rna_NodeSocketStandard_draw_node, 	&rna_NodeSocketStandard_draw_context,
		-1, "layout", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "Layout",
		"Layout in the UI",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_UILayout
	};
	rna_NodeSocketStandard_draw_node_ = {
		{&rna_NodeSocketStandard_draw_text, 	&rna_NodeSocketStandard_draw_layout,
		-1, "node", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "Node",
		"Node the socket belongs to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Node
	};
	rna_NodeSocketStandard_draw_text_ = {
		{nullptr, 	&rna_NodeSocketStandard_draw_node,
		-1, "text", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Text",
		"Text label to draw alongside properties",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NodeSocketStandard_draw_context, &rna_NodeSocketStandard_draw_text};
		func->identifier = "draw";
		func->flag = 2048;
		func->description = "Draw socket";
		func->call = NodeSocketStandard_draw_call;
		rna_NodeSocketStandard_draw_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_NodeSocketStandard_draw_color_context_ = {
		{&rna_NodeSocketStandard_draw_color_node, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_NodeSocketStandard_draw_color_node_ = {
		{&rna_NodeSocketStandard_draw_color_color, 	&rna_NodeSocketStandard_draw_color_context,
		-1, "node", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "Node",
		"Node the socket belongs to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Node
	};
	static float rna_NodeSocketStandard_draw_color_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		1.0f
	};
	rna_NodeSocketStandard_draw_color_color_ = {
		{nullptr, 	&rna_NodeSocketStandard_draw_color_node,
		-1, "color", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, rna_NodeSocketStandard_draw_color_color_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NodeSocketStandard_draw_color_context, &rna_NodeSocketStandard_draw_color_color};
		func->identifier = "draw_color";
		func->flag = 2048;
		func->description = "Color of the socket icon";
		func->call = NodeSocketStandard_draw_color_call;
		rna_NodeSocketStandard_draw_color_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_NodeSocketStandard_draw_color_simple_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		1.0f
	};
	rna_NodeSocketStandard_draw_color_simple_color_ = {
		{nullptr, 	nullptr,
		-1, "color", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, rna_NodeSocketStandard_draw_color_simple_color_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NodeSocketStandard_draw_color_simple_color, &rna_NodeSocketStandard_draw_color_simple_color};
		func->identifier = "draw_color_simple";
		func->flag = 99;
		func->description = "Color of the socket icon";
		func->call = NodeSocketStandard_draw_color_simple_call;
		rna_NodeSocketStandard_draw_color_simple_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloat_default_value_;
PropertyRNA &rna_NodeSocketFloat_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloat_default_value_);

StructRNA *RNA_NodeSocketFloat;
void register_struct_NodeSocketFloat(BlenderRNA &brna)
{
	rna_NodeSocketFloat_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloat_default_value_get, NodeSocketFloat_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloat;
	srna->cont.properties = {&rna_NodeSocketFloat_default_value, &rna_NodeSocketFloat_default_value};
	srna->identifier = "NodeSocketFloat";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatUnsigned_default_value_;
PropertyRNA &rna_NodeSocketFloatUnsigned_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatUnsigned_default_value_);

StructRNA *RNA_NodeSocketFloatUnsigned;
void register_struct_NodeSocketFloatUnsigned(BlenderRNA &brna)
{
	rna_NodeSocketFloatUnsigned_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatUnsigned_default_value_get, NodeSocketFloatUnsigned_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatUnsigned;
	srna->cont.properties = {&rna_NodeSocketFloatUnsigned_default_value, &rna_NodeSocketFloatUnsigned_default_value};
	srna->identifier = "NodeSocketFloatUnsigned";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatPercentage_default_value_;
PropertyRNA &rna_NodeSocketFloatPercentage_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatPercentage_default_value_);

StructRNA *RNA_NodeSocketFloatPercentage;
void register_struct_NodeSocketFloatPercentage(BlenderRNA &brna)
{
	rna_NodeSocketFloatPercentage_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatPercentage_default_value_get, NodeSocketFloatPercentage_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatPercentage;
	srna->cont.properties = {&rna_NodeSocketFloatPercentage_default_value, &rna_NodeSocketFloatPercentage_default_value};
	srna->identifier = "NodeSocketFloatPercentage";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatFactor_default_value_;
PropertyRNA &rna_NodeSocketFloatFactor_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatFactor_default_value_);

StructRNA *RNA_NodeSocketFloatFactor;
void register_struct_NodeSocketFloatFactor(BlenderRNA &brna)
{
	rna_NodeSocketFloatFactor_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatFactor_default_value_get, NodeSocketFloatFactor_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatFactor;
	srna->cont.properties = {&rna_NodeSocketFloatFactor_default_value, &rna_NodeSocketFloatFactor_default_value};
	srna->identifier = "NodeSocketFloatFactor";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatMass_default_value_;
PropertyRNA &rna_NodeSocketFloatMass_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatMass_default_value_);

StructRNA *RNA_NodeSocketFloatMass;
void register_struct_NodeSocketFloatMass(BlenderRNA &brna)
{
	rna_NodeSocketFloatMass_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MASS) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatMass_default_value_get, NodeSocketFloatMass_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatMass;
	srna->cont.properties = {&rna_NodeSocketFloatMass_default_value, &rna_NodeSocketFloatMass_default_value};
	srna->identifier = "NodeSocketFloatMass";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatAngle_default_value_;
PropertyRNA &rna_NodeSocketFloatAngle_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatAngle_default_value_);

StructRNA *RNA_NodeSocketFloatAngle;
void register_struct_NodeSocketFloatAngle(BlenderRNA &brna)
{
	rna_NodeSocketFloatAngle_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatAngle_default_value_get, NodeSocketFloatAngle_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatAngle;
	srna->cont.properties = {&rna_NodeSocketFloatAngle_default_value, &rna_NodeSocketFloatAngle_default_value};
	srna->identifier = "NodeSocketFloatAngle";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatTime_default_value_;
PropertyRNA &rna_NodeSocketFloatTime_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatTime_default_value_);

StructRNA *RNA_NodeSocketFloatTime;
void register_struct_NodeSocketFloatTime(BlenderRNA &brna)
{
	rna_NodeSocketFloatTime_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatTime_default_value_get, NodeSocketFloatTime_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatTime;
	srna->cont.properties = {&rna_NodeSocketFloatTime_default_value, &rna_NodeSocketFloatTime_default_value};
	srna->identifier = "NodeSocketFloatTime";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatTimeAbsolute_default_value_;
PropertyRNA &rna_NodeSocketFloatTimeAbsolute_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatTimeAbsolute_default_value_);

StructRNA *RNA_NodeSocketFloatTimeAbsolute;
void register_struct_NodeSocketFloatTimeAbsolute(BlenderRNA &brna)
{
	rna_NodeSocketFloatTimeAbsolute_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME_ABSOLUTE) | int(PROP_UNIT_TIME_ABSOLUTE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatTimeAbsolute_default_value_get, NodeSocketFloatTimeAbsolute_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatTimeAbsolute;
	srna->cont.properties = {&rna_NodeSocketFloatTimeAbsolute_default_value, &rna_NodeSocketFloatTimeAbsolute_default_value};
	srna->identifier = "NodeSocketFloatTimeAbsolute";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatDistance_default_value_;
PropertyRNA &rna_NodeSocketFloatDistance_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatDistance_default_value_);

StructRNA *RNA_NodeSocketFloatDistance;
void register_struct_NodeSocketFloatDistance(BlenderRNA &brna)
{
	rna_NodeSocketFloatDistance_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatDistance_default_value_get, NodeSocketFloatDistance_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatDistance;
	srna->cont.properties = {&rna_NodeSocketFloatDistance_default_value, &rna_NodeSocketFloatDistance_default_value};
	srna->identifier = "NodeSocketFloatDistance";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatWavelength_default_value_;
PropertyRNA &rna_NodeSocketFloatWavelength_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatWavelength_default_value_);

StructRNA *RNA_NodeSocketFloatWavelength;
void register_struct_NodeSocketFloatWavelength(BlenderRNA &brna)
{
	rna_NodeSocketFloatWavelength_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_WAVELENGTH) | int(PROP_UNIT_WAVELENGTH)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatWavelength_default_value_get, NodeSocketFloatWavelength_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatWavelength;
	srna->cont.properties = {&rna_NodeSocketFloatWavelength_default_value, &rna_NodeSocketFloatWavelength_default_value};
	srna->identifier = "NodeSocketFloatWavelength";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatColorTemperature_default_value_;
PropertyRNA &rna_NodeSocketFloatColorTemperature_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatColorTemperature_default_value_);

StructRNA *RNA_NodeSocketFloatColorTemperature;
void register_struct_NodeSocketFloatColorTemperature(BlenderRNA &brna)
{
	rna_NodeSocketFloatColorTemperature_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_TEMPERATURE) | int(PROP_UNIT_COLOR_TEMPERATURE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatColorTemperature_default_value_get, NodeSocketFloatColorTemperature_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatColorTemperature;
	srna->cont.properties = {&rna_NodeSocketFloatColorTemperature_default_value, &rna_NodeSocketFloatColorTemperature_default_value};
	srna->identifier = "NodeSocketFloatColorTemperature";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatFrequency_default_value_;
PropertyRNA &rna_NodeSocketFloatFrequency_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatFrequency_default_value_);

StructRNA *RNA_NodeSocketFloatFrequency;
void register_struct_NodeSocketFloatFrequency(BlenderRNA &brna)
{
	rna_NodeSocketFloatFrequency_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FREQUENCY) | int(PROP_UNIT_FREQUENCY)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatFrequency_default_value_get, NodeSocketFloatFrequency_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatFrequency;
	srna->cont.properties = {&rna_NodeSocketFloatFrequency_default_value, &rna_NodeSocketFloatFrequency_default_value};
	srna->identifier = "NodeSocketFloatFrequency";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Float Node Socket */
static FloatPropertyRNA rna_NodeSocketFloatPixel_default_value_;
PropertyRNA &rna_NodeSocketFloatPixel_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFloatPixel_default_value_);

StructRNA *RNA_NodeSocketFloatPixel;
void register_struct_NodeSocketFloatPixel(BlenderRNA &brna)
{
	rna_NodeSocketFloatPixel_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueFloat, value), RawPropertyType(5), nullptr},
		NodeSocketFloatPixel_default_value_get, NodeSocketFloatPixel_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_float_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, rna_NodeSocketStandard_float_default, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_NodeSocketFloatPixel;
	srna->cont.properties = {&rna_NodeSocketFloatPixel_default_value, &rna_NodeSocketFloatPixel_default_value};
	srna->identifier = "NodeSocketFloatPixel";
	srna->flag = 516;
	srna->name = "Float Node Socket";
	srna->description = "Floating-point number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1006;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Node Socket */
static IntPropertyRNA rna_NodeSocketInt_default_value_;
PropertyRNA &rna_NodeSocketInt_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketInt_default_value_);

StructRNA *RNA_NodeSocketInt;
void register_struct_NodeSocketInt(BlenderRNA &brna)
{
	rna_NodeSocketInt_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueInt, value), RawPropertyType(0), nullptr},
		NodeSocketInt_default_value_get, NodeSocketInt_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_int_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, rna_NodeSocketStandard_int_default, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_NodeSocketInt;
	srna->cont.properties = {&rna_NodeSocketInt_default_value, &rna_NodeSocketInt_default_value};
	srna->identifier = "NodeSocketInt";
	srna->flag = 516;
	srna->name = "Integer Node Socket";
	srna->description = "Integer number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1011;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Node Socket */
static IntPropertyRNA rna_NodeSocketIntUnsigned_default_value_;
PropertyRNA &rna_NodeSocketIntUnsigned_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntUnsigned_default_value_);

StructRNA *RNA_NodeSocketIntUnsigned;
void register_struct_NodeSocketIntUnsigned(BlenderRNA &brna)
{
	rna_NodeSocketIntUnsigned_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueInt, value), RawPropertyType(0), nullptr},
		NodeSocketIntUnsigned_default_value_get, NodeSocketIntUnsigned_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_int_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, rna_NodeSocketStandard_int_default, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_NodeSocketIntUnsigned;
	srna->cont.properties = {&rna_NodeSocketIntUnsigned_default_value, &rna_NodeSocketIntUnsigned_default_value};
	srna->identifier = "NodeSocketIntUnsigned";
	srna->flag = 516;
	srna->name = "Integer Node Socket";
	srna->description = "Integer number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1011;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Node Socket */
static IntPropertyRNA rna_NodeSocketIntPercentage_default_value_;
PropertyRNA &rna_NodeSocketIntPercentage_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntPercentage_default_value_);

StructRNA *RNA_NodeSocketIntPercentage;
void register_struct_NodeSocketIntPercentage(BlenderRNA &brna)
{
	rna_NodeSocketIntPercentage_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueInt, value), RawPropertyType(0), nullptr},
		NodeSocketIntPercentage_default_value_get, NodeSocketIntPercentage_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_int_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, rna_NodeSocketStandard_int_default, nullptr, 100, nullptr
	};

	StructRNA *srna = RNA_NodeSocketIntPercentage;
	srna->cont.properties = {&rna_NodeSocketIntPercentage_default_value, &rna_NodeSocketIntPercentage_default_value};
	srna->identifier = "NodeSocketIntPercentage";
	srna->flag = 516;
	srna->name = "Integer Node Socket";
	srna->description = "Integer number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1011;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Node Socket */
static IntPropertyRNA rna_NodeSocketIntFactor_default_value_;
PropertyRNA &rna_NodeSocketIntFactor_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntFactor_default_value_);

StructRNA *RNA_NodeSocketIntFactor;
void register_struct_NodeSocketIntFactor(BlenderRNA &brna)
{
	rna_NodeSocketIntFactor_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueInt, value), RawPropertyType(0), nullptr},
		NodeSocketIntFactor_default_value_get, NodeSocketIntFactor_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_int_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, rna_NodeSocketStandard_int_default, nullptr, 1, nullptr
	};

	StructRNA *srna = RNA_NodeSocketIntFactor;
	srna->cont.properties = {&rna_NodeSocketIntFactor_default_value, &rna_NodeSocketIntFactor_default_value};
	srna->identifier = "NodeSocketIntFactor";
	srna->flag = 516;
	srna->name = "Integer Node Socket";
	srna->description = "Integer number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1011;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Node Socket */
static IntPropertyRNA rna_NodeSocketIntPixel_default_value_;
PropertyRNA &rna_NodeSocketIntPixel_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntPixel_default_value_);

StructRNA *RNA_NodeSocketIntPixel;
void register_struct_NodeSocketIntPixel(BlenderRNA &brna)
{
	rna_NodeSocketIntPixel_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueInt, value), RawPropertyType(0), nullptr},
		NodeSocketIntPixel_default_value_get, NodeSocketIntPixel_default_value_set, nullptr, nullptr, rna_NodeSocketStandard_int_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, rna_NodeSocketStandard_int_default, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_NodeSocketIntPixel;
	srna->cont.properties = {&rna_NodeSocketIntPixel_default_value, &rna_NodeSocketIntPixel_default_value};
	srna->identifier = "NodeSocketIntPixel";
	srna->flag = 516;
	srna->name = "Integer Node Socket";
	srna->description = "Integer number socket of a node";
	srna->translation_context = "*";
	srna->icon = 1011;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Boolean Node Socket */
static BoolPropertyRNA rna_NodeSocketBool_default_value_;
PropertyRNA &rna_NodeSocketBool_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketBool_default_value_);

StructRNA *RNA_NodeSocketBool;
void register_struct_NodeSocketBool(BlenderRNA &brna)
{
	rna_NodeSocketBool_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 0, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketBool_default_value_get, NodeSocketBool_default_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_NodeSocketStandard_boolean_default, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_NodeSocketBool;
	srna->cont.properties = {&rna_NodeSocketBool_default_value, &rna_NodeSocketBool_default_value};
	srna->identifier = "NodeSocketBool";
	srna->flag = 516;
	srna->name = "Boolean Node Socket";
	srna->description = "Boolean value socket of a node";
	srna->translation_context = "*";
	srna->icon = 1010;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVector_default_value_;
PropertyRNA &rna_NodeSocketVector_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVector_default_value_);

StructRNA *RNA_NodeSocketVector;
void register_struct_NodeSocketVector(BlenderRNA &brna)
{
	static float rna_NodeSocketVector_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVector_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVector_default_value_get, NodeSocketVector_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVector_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVector;
	srna->cont.properties = {&rna_NodeSocketVector_default_value, &rna_NodeSocketVector_default_value};
	srna->identifier = "NodeSocketVector";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorFactor_default_value_;
PropertyRNA &rna_NodeSocketVectorFactor_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorFactor_default_value_);

StructRNA *RNA_NodeSocketVectorFactor;
void register_struct_NodeSocketVectorFactor(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorFactor_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorFactor_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorFactor_default_value_get, NodeSocketVectorFactor_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorFactor_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorFactor;
	srna->cont.properties = {&rna_NodeSocketVectorFactor_default_value, &rna_NodeSocketVectorFactor_default_value};
	srna->identifier = "NodeSocketVectorFactor";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorPercentage_default_value_;
PropertyRNA &rna_NodeSocketVectorPercentage_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorPercentage_default_value_);

StructRNA *RNA_NodeSocketVectorPercentage;
void register_struct_NodeSocketVectorPercentage(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorPercentage_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorPercentage_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorPercentage_default_value_get, NodeSocketVectorPercentage_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorPercentage_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorPercentage;
	srna->cont.properties = {&rna_NodeSocketVectorPercentage_default_value, &rna_NodeSocketVectorPercentage_default_value};
	srna->identifier = "NodeSocketVectorPercentage";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorTranslation_default_value_;
PropertyRNA &rna_NodeSocketVectorTranslation_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorTranslation_default_value_);

StructRNA *RNA_NodeSocketVectorTranslation;
void register_struct_NodeSocketVectorTranslation(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorTranslation_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorTranslation_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorTranslation_default_value_get, NodeSocketVectorTranslation_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorTranslation_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorTranslation;
	srna->cont.properties = {&rna_NodeSocketVectorTranslation_default_value, &rna_NodeSocketVectorTranslation_default_value};
	srna->identifier = "NodeSocketVectorTranslation";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorDirection_default_value_;
PropertyRNA &rna_NodeSocketVectorDirection_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorDirection_default_value_);

StructRNA *RNA_NodeSocketVectorDirection;
void register_struct_NodeSocketVectorDirection(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorDirection_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorDirection_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorDirection_default_value_get, NodeSocketVectorDirection_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorDirection_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorDirection;
	srna->cont.properties = {&rna_NodeSocketVectorDirection_default_value, &rna_NodeSocketVectorDirection_default_value};
	srna->identifier = "NodeSocketVectorDirection";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorVelocity_default_value_;
PropertyRNA &rna_NodeSocketVectorVelocity_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorVelocity_default_value_);

StructRNA *RNA_NodeSocketVectorVelocity;
void register_struct_NodeSocketVectorVelocity(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorVelocity_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorVelocity_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorVelocity_default_value_get, NodeSocketVectorVelocity_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorVelocity_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorVelocity;
	srna->cont.properties = {&rna_NodeSocketVectorVelocity_default_value, &rna_NodeSocketVectorVelocity_default_value};
	srna->identifier = "NodeSocketVectorVelocity";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorAcceleration_default_value_;
PropertyRNA &rna_NodeSocketVectorAcceleration_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorAcceleration_default_value_);

StructRNA *RNA_NodeSocketVectorAcceleration;
void register_struct_NodeSocketVectorAcceleration(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorAcceleration_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorAcceleration_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ACCELERATION) | int(PROP_UNIT_ACCELERATION)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorAcceleration_default_value_get, NodeSocketVectorAcceleration_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorAcceleration_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorAcceleration;
	srna->cont.properties = {&rna_NodeSocketVectorAcceleration_default_value, &rna_NodeSocketVectorAcceleration_default_value};
	srna->identifier = "NodeSocketVectorAcceleration";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorEuler_default_value_;
PropertyRNA &rna_NodeSocketVectorEuler_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorEuler_default_value_);

StructRNA *RNA_NodeSocketVectorEuler;
void register_struct_NodeSocketVectorEuler(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorEuler_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorEuler_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorEuler_default_value_get, NodeSocketVectorEuler_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorEuler_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorEuler;
	srna->cont.properties = {&rna_NodeSocketVectorEuler_default_value, &rna_NodeSocketVectorEuler_default_value};
	srna->identifier = "NodeSocketVectorEuler";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorXYZ_default_value_;
PropertyRNA &rna_NodeSocketVectorXYZ_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorXYZ_default_value_);

StructRNA *RNA_NodeSocketVectorXYZ;
void register_struct_NodeSocketVectorXYZ(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorXYZ_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorXYZ_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorXYZ_default_value_get, NodeSocketVectorXYZ_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorXYZ_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorXYZ;
	srna->cont.properties = {&rna_NodeSocketVectorXYZ_default_value, &rna_NodeSocketVectorXYZ_default_value};
	srna->identifier = "NodeSocketVectorXYZ";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorPixel_default_value_;
PropertyRNA &rna_NodeSocketVectorPixel_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorPixel_default_value_);

StructRNA *RNA_NodeSocketVectorPixel;
void register_struct_NodeSocketVectorPixel(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorPixel_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorPixel_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorPixel_default_value_get, NodeSocketVectorPixel_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorPixel_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorPixel;
	srna->cont.properties = {&rna_NodeSocketVectorPixel_default_value, &rna_NodeSocketVectorPixel_default_value};
	srna->identifier = "NodeSocketVectorPixel";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVector2D_default_value_;
PropertyRNA &rna_NodeSocketVector2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVector2D_default_value_);

StructRNA *RNA_NodeSocketVector2D;
void register_struct_NodeSocketVector2D(BlenderRNA &brna)
{
	static float rna_NodeSocketVector2D_default_value_default[2] = {
		0.0f,
		0.0f
	};
	rna_NodeSocketVector2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVector2D_default_value_get, NodeSocketVector2D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVector2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVector2D;
	srna->cont.properties = {&rna_NodeSocketVector2D_default_value, &rna_NodeSocketVector2D_default_value};
	srna->identifier = "NodeSocketVector2D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorFactor2D_default_value_;
PropertyRNA &rna_NodeSocketVectorFactor2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorFactor2D_default_value_);

StructRNA *RNA_NodeSocketVectorFactor2D;
void register_struct_NodeSocketVectorFactor2D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorFactor2D_default_value_default[2] = {
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorFactor2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorFactor2D_default_value_get, NodeSocketVectorFactor2D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorFactor2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorFactor2D;
	srna->cont.properties = {&rna_NodeSocketVectorFactor2D_default_value, &rna_NodeSocketVectorFactor2D_default_value};
	srna->identifier = "NodeSocketVectorFactor2D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorPercentage2D_default_value_;
PropertyRNA &rna_NodeSocketVectorPercentage2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorPercentage2D_default_value_);

StructRNA *RNA_NodeSocketVectorPercentage2D;
void register_struct_NodeSocketVectorPercentage2D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorPercentage2D_default_value_default[2] = {
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorPercentage2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorPercentage2D_default_value_get, NodeSocketVectorPercentage2D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorPercentage2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorPercentage2D;
	srna->cont.properties = {&rna_NodeSocketVectorPercentage2D_default_value, &rna_NodeSocketVectorPercentage2D_default_value};
	srna->identifier = "NodeSocketVectorPercentage2D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorTranslation2D_default_value_;
PropertyRNA &rna_NodeSocketVectorTranslation2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorTranslation2D_default_value_);

StructRNA *RNA_NodeSocketVectorTranslation2D;
void register_struct_NodeSocketVectorTranslation2D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorTranslation2D_default_value_default[2] = {
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorTranslation2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorTranslation2D_default_value_get, NodeSocketVectorTranslation2D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorTranslation2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorTranslation2D;
	srna->cont.properties = {&rna_NodeSocketVectorTranslation2D_default_value, &rna_NodeSocketVectorTranslation2D_default_value};
	srna->identifier = "NodeSocketVectorTranslation2D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorDirection2D_default_value_;
PropertyRNA &rna_NodeSocketVectorDirection2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorDirection2D_default_value_);

StructRNA *RNA_NodeSocketVectorDirection2D;
void register_struct_NodeSocketVectorDirection2D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorDirection2D_default_value_default[2] = {
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorDirection2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorDirection2D_default_value_get, NodeSocketVectorDirection2D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorDirection2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorDirection2D;
	srna->cont.properties = {&rna_NodeSocketVectorDirection2D_default_value, &rna_NodeSocketVectorDirection2D_default_value};
	srna->identifier = "NodeSocketVectorDirection2D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorVelocity2D_default_value_;
PropertyRNA &rna_NodeSocketVectorVelocity2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorVelocity2D_default_value_);

StructRNA *RNA_NodeSocketVectorVelocity2D;
void register_struct_NodeSocketVectorVelocity2D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorVelocity2D_default_value_default[2] = {
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorVelocity2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorVelocity2D_default_value_get, NodeSocketVectorVelocity2D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorVelocity2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorVelocity2D;
	srna->cont.properties = {&rna_NodeSocketVectorVelocity2D_default_value, &rna_NodeSocketVectorVelocity2D_default_value};
	srna->identifier = "NodeSocketVectorVelocity2D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorAcceleration2D_default_value_;
PropertyRNA &rna_NodeSocketVectorAcceleration2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorAcceleration2D_default_value_);

StructRNA *RNA_NodeSocketVectorAcceleration2D;
void register_struct_NodeSocketVectorAcceleration2D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorAcceleration2D_default_value_default[2] = {
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorAcceleration2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ACCELERATION) | int(PROP_UNIT_ACCELERATION)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorAcceleration2D_default_value_get, NodeSocketVectorAcceleration2D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorAcceleration2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorAcceleration2D;
	srna->cont.properties = {&rna_NodeSocketVectorAcceleration2D_default_value, &rna_NodeSocketVectorAcceleration2D_default_value};
	srna->identifier = "NodeSocketVectorAcceleration2D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorEuler2D_default_value_;
PropertyRNA &rna_NodeSocketVectorEuler2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorEuler2D_default_value_);

StructRNA *RNA_NodeSocketVectorEuler2D;
void register_struct_NodeSocketVectorEuler2D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorEuler2D_default_value_default[2] = {
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorEuler2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorEuler2D_default_value_get, NodeSocketVectorEuler2D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorEuler2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorEuler2D;
	srna->cont.properties = {&rna_NodeSocketVectorEuler2D_default_value, &rna_NodeSocketVectorEuler2D_default_value};
	srna->identifier = "NodeSocketVectorEuler2D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorXYZ2D_default_value_;
PropertyRNA &rna_NodeSocketVectorXYZ2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorXYZ2D_default_value_);

StructRNA *RNA_NodeSocketVectorXYZ2D;
void register_struct_NodeSocketVectorXYZ2D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorXYZ2D_default_value_default[2] = {
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorXYZ2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorXYZ2D_default_value_get, NodeSocketVectorXYZ2D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorXYZ2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorXYZ2D;
	srna->cont.properties = {&rna_NodeSocketVectorXYZ2D_default_value, &rna_NodeSocketVectorXYZ2D_default_value};
	srna->identifier = "NodeSocketVectorXYZ2D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorPixel2D_default_value_;
PropertyRNA &rna_NodeSocketVectorPixel2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorPixel2D_default_value_);

StructRNA *RNA_NodeSocketVectorPixel2D;
void register_struct_NodeSocketVectorPixel2D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorPixel2D_default_value_default[2] = {
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorPixel2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorPixel2D_default_value_get, NodeSocketVectorPixel2D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorPixel2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorPixel2D;
	srna->cont.properties = {&rna_NodeSocketVectorPixel2D_default_value, &rna_NodeSocketVectorPixel2D_default_value};
	srna->identifier = "NodeSocketVectorPixel2D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVector4D_default_value_;
PropertyRNA &rna_NodeSocketVector4D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVector4D_default_value_);

StructRNA *RNA_NodeSocketVector4D;
void register_struct_NodeSocketVector4D(BlenderRNA &brna)
{
	static float rna_NodeSocketVector4D_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVector4D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVector4D_default_value_get, NodeSocketVector4D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVector4D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVector4D;
	srna->cont.properties = {&rna_NodeSocketVector4D_default_value, &rna_NodeSocketVector4D_default_value};
	srna->identifier = "NodeSocketVector4D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorFactor4D_default_value_;
PropertyRNA &rna_NodeSocketVectorFactor4D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorFactor4D_default_value_);

StructRNA *RNA_NodeSocketVectorFactor4D;
void register_struct_NodeSocketVectorFactor4D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorFactor4D_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorFactor4D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorFactor4D_default_value_get, NodeSocketVectorFactor4D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorFactor4D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorFactor4D;
	srna->cont.properties = {&rna_NodeSocketVectorFactor4D_default_value, &rna_NodeSocketVectorFactor4D_default_value};
	srna->identifier = "NodeSocketVectorFactor4D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorPercentage4D_default_value_;
PropertyRNA &rna_NodeSocketVectorPercentage4D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorPercentage4D_default_value_);

StructRNA *RNA_NodeSocketVectorPercentage4D;
void register_struct_NodeSocketVectorPercentage4D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorPercentage4D_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorPercentage4D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorPercentage4D_default_value_get, NodeSocketVectorPercentage4D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorPercentage4D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorPercentage4D;
	srna->cont.properties = {&rna_NodeSocketVectorPercentage4D_default_value, &rna_NodeSocketVectorPercentage4D_default_value};
	srna->identifier = "NodeSocketVectorPercentage4D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorTranslation4D_default_value_;
PropertyRNA &rna_NodeSocketVectorTranslation4D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorTranslation4D_default_value_);

StructRNA *RNA_NodeSocketVectorTranslation4D;
void register_struct_NodeSocketVectorTranslation4D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorTranslation4D_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorTranslation4D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorTranslation4D_default_value_get, NodeSocketVectorTranslation4D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorTranslation4D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorTranslation4D;
	srna->cont.properties = {&rna_NodeSocketVectorTranslation4D_default_value, &rna_NodeSocketVectorTranslation4D_default_value};
	srna->identifier = "NodeSocketVectorTranslation4D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorDirection4D_default_value_;
PropertyRNA &rna_NodeSocketVectorDirection4D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorDirection4D_default_value_);

StructRNA *RNA_NodeSocketVectorDirection4D;
void register_struct_NodeSocketVectorDirection4D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorDirection4D_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorDirection4D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorDirection4D_default_value_get, NodeSocketVectorDirection4D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorDirection4D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorDirection4D;
	srna->cont.properties = {&rna_NodeSocketVectorDirection4D_default_value, &rna_NodeSocketVectorDirection4D_default_value};
	srna->identifier = "NodeSocketVectorDirection4D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorVelocity4D_default_value_;
PropertyRNA &rna_NodeSocketVectorVelocity4D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorVelocity4D_default_value_);

StructRNA *RNA_NodeSocketVectorVelocity4D;
void register_struct_NodeSocketVectorVelocity4D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorVelocity4D_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorVelocity4D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorVelocity4D_default_value_get, NodeSocketVectorVelocity4D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorVelocity4D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorVelocity4D;
	srna->cont.properties = {&rna_NodeSocketVectorVelocity4D_default_value, &rna_NodeSocketVectorVelocity4D_default_value};
	srna->identifier = "NodeSocketVectorVelocity4D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorAcceleration4D_default_value_;
PropertyRNA &rna_NodeSocketVectorAcceleration4D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorAcceleration4D_default_value_);

StructRNA *RNA_NodeSocketVectorAcceleration4D;
void register_struct_NodeSocketVectorAcceleration4D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorAcceleration4D_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorAcceleration4D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ACCELERATION) | int(PROP_UNIT_ACCELERATION)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorAcceleration4D_default_value_get, NodeSocketVectorAcceleration4D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorAcceleration4D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorAcceleration4D;
	srna->cont.properties = {&rna_NodeSocketVectorAcceleration4D_default_value, &rna_NodeSocketVectorAcceleration4D_default_value};
	srna->identifier = "NodeSocketVectorAcceleration4D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorEuler4D_default_value_;
PropertyRNA &rna_NodeSocketVectorEuler4D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorEuler4D_default_value_);

StructRNA *RNA_NodeSocketVectorEuler4D;
void register_struct_NodeSocketVectorEuler4D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorEuler4D_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorEuler4D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorEuler4D_default_value_get, NodeSocketVectorEuler4D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorEuler4D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorEuler4D;
	srna->cont.properties = {&rna_NodeSocketVectorEuler4D_default_value, &rna_NodeSocketVectorEuler4D_default_value};
	srna->identifier = "NodeSocketVectorEuler4D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorXYZ4D_default_value_;
PropertyRNA &rna_NodeSocketVectorXYZ4D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorXYZ4D_default_value_);

StructRNA *RNA_NodeSocketVectorXYZ4D;
void register_struct_NodeSocketVectorXYZ4D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorXYZ4D_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorXYZ4D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorXYZ4D_default_value_get, NodeSocketVectorXYZ4D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorXYZ4D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorXYZ4D;
	srna->cont.properties = {&rna_NodeSocketVectorXYZ4D_default_value, &rna_NodeSocketVectorXYZ4D_default_value};
	srna->identifier = "NodeSocketVectorXYZ4D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Vector Node Socket */
static FloatPropertyRNA rna_NodeSocketVectorPixel4D_default_value_;
PropertyRNA &rna_NodeSocketVectorPixel4D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketVectorPixel4D_default_value_);

StructRNA *RNA_NodeSocketVectorPixel4D;
void register_struct_NodeSocketVectorPixel4D(BlenderRNA &brna)
{
	static float rna_NodeSocketVectorPixel4D_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketVectorPixel4D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueVector, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketVectorPixel4D_default_value_get, NodeSocketVectorPixel4D_default_value_set, rna_NodeSocketStandard_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_vector_default, 0.0f, rna_NodeSocketVectorPixel4D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketVectorPixel4D;
	srna->cont.properties = {&rna_NodeSocketVectorPixel4D_default_value, &rna_NodeSocketVectorPixel4D_default_value};
	srna->identifier = "NodeSocketVectorPixel4D";
	srna->flag = 516;
	srna->name = "Vector Node Socket";
	srna->description = "3D vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1007;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Vector Node Socket */
static IntPropertyRNA rna_NodeSocketIntVector2D_default_value_;
PropertyRNA &rna_NodeSocketIntVector2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntVector2D_default_value_);

StructRNA *RNA_NodeSocketIntVector2D;
void register_struct_NodeSocketIntVector2D(BlenderRNA &brna)
{
	static int rna_NodeSocketIntVector2D_default_value_default[2] = {
		0,
		0
	};
	rna_NodeSocketIntVector2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueIntVector, value), RawPropertyType(0), nullptr},
		nullptr, nullptr, NodeSocketIntVector2D_default_value_get, NodeSocketIntVector2D_default_value_set, rna_NodeSocketStandard_int_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, rna_NodeSocketStandard_int_vector_default, 0, rna_NodeSocketIntVector2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketIntVector2D;
	srna->cont.properties = {&rna_NodeSocketIntVector2D_default_value, &rna_NodeSocketIntVector2D_default_value};
	srna->identifier = "NodeSocketIntVector2D";
	srna->flag = 516;
	srna->name = "Integer Vector Node Socket";
	srna->description = "Integer vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1029;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Vector Node Socket */
static IntPropertyRNA rna_NodeSocketIntVectorUnsigned2D_default_value_;
PropertyRNA &rna_NodeSocketIntVectorUnsigned2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntVectorUnsigned2D_default_value_);

StructRNA *RNA_NodeSocketIntVectorUnsigned2D;
void register_struct_NodeSocketIntVectorUnsigned2D(BlenderRNA &brna)
{
	static int rna_NodeSocketIntVectorUnsigned2D_default_value_default[2] = {
		0,
		0
	};
	rna_NodeSocketIntVectorUnsigned2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueIntVector, value), RawPropertyType(0), nullptr},
		nullptr, nullptr, NodeSocketIntVectorUnsigned2D_default_value_get, NodeSocketIntVectorUnsigned2D_default_value_set, rna_NodeSocketStandard_int_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, rna_NodeSocketStandard_int_vector_default, 0, rna_NodeSocketIntVectorUnsigned2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketIntVectorUnsigned2D;
	srna->cont.properties = {&rna_NodeSocketIntVectorUnsigned2D_default_value, &rna_NodeSocketIntVectorUnsigned2D_default_value};
	srna->identifier = "NodeSocketIntVectorUnsigned2D";
	srna->flag = 516;
	srna->name = "Integer Vector Node Socket";
	srna->description = "Integer vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1029;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Vector Node Socket */
static IntPropertyRNA rna_NodeSocketIntVectorPercentage2D_default_value_;
PropertyRNA &rna_NodeSocketIntVectorPercentage2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntVectorPercentage2D_default_value_);

StructRNA *RNA_NodeSocketIntVectorPercentage2D;
void register_struct_NodeSocketIntVectorPercentage2D(BlenderRNA &brna)
{
	static int rna_NodeSocketIntVectorPercentage2D_default_value_default[2] = {
		0,
		0
	};
	rna_NodeSocketIntVectorPercentage2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueIntVector, value), RawPropertyType(0), nullptr},
		nullptr, nullptr, NodeSocketIntVectorPercentage2D_default_value_get, NodeSocketIntVectorPercentage2D_default_value_set, rna_NodeSocketStandard_int_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, rna_NodeSocketStandard_int_vector_default, 0, rna_NodeSocketIntVectorPercentage2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketIntVectorPercentage2D;
	srna->cont.properties = {&rna_NodeSocketIntVectorPercentage2D_default_value, &rna_NodeSocketIntVectorPercentage2D_default_value};
	srna->identifier = "NodeSocketIntVectorPercentage2D";
	srna->flag = 516;
	srna->name = "Integer Vector Node Socket";
	srna->description = "Integer vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1029;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Vector Node Socket */
static IntPropertyRNA rna_NodeSocketIntVectorFactor2D_default_value_;
PropertyRNA &rna_NodeSocketIntVectorFactor2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntVectorFactor2D_default_value_);

StructRNA *RNA_NodeSocketIntVectorFactor2D;
void register_struct_NodeSocketIntVectorFactor2D(BlenderRNA &brna)
{
	static int rna_NodeSocketIntVectorFactor2D_default_value_default[2] = {
		0,
		0
	};
	rna_NodeSocketIntVectorFactor2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueIntVector, value), RawPropertyType(0), nullptr},
		nullptr, nullptr, NodeSocketIntVectorFactor2D_default_value_get, NodeSocketIntVectorFactor2D_default_value_set, rna_NodeSocketStandard_int_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, rna_NodeSocketStandard_int_vector_default, 0, rna_NodeSocketIntVectorFactor2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketIntVectorFactor2D;
	srna->cont.properties = {&rna_NodeSocketIntVectorFactor2D_default_value, &rna_NodeSocketIntVectorFactor2D_default_value};
	srna->identifier = "NodeSocketIntVectorFactor2D";
	srna->flag = 516;
	srna->name = "Integer Vector Node Socket";
	srna->description = "Integer vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1029;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Vector Node Socket */
static IntPropertyRNA rna_NodeSocketIntVectorPixel2D_default_value_;
PropertyRNA &rna_NodeSocketIntVectorPixel2D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntVectorPixel2D_default_value_);

StructRNA *RNA_NodeSocketIntVectorPixel2D;
void register_struct_NodeSocketIntVectorPixel2D(BlenderRNA &brna)
{
	static int rna_NodeSocketIntVectorPixel2D_default_value_default[2] = {
		0,
		0
	};
	rna_NodeSocketIntVectorPixel2D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueIntVector, value), RawPropertyType(0), nullptr},
		nullptr, nullptr, NodeSocketIntVectorPixel2D_default_value_get, NodeSocketIntVectorPixel2D_default_value_set, rna_NodeSocketStandard_int_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, rna_NodeSocketStandard_int_vector_default, 0, rna_NodeSocketIntVectorPixel2D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketIntVectorPixel2D;
	srna->cont.properties = {&rna_NodeSocketIntVectorPixel2D_default_value, &rna_NodeSocketIntVectorPixel2D_default_value};
	srna->identifier = "NodeSocketIntVectorPixel2D";
	srna->flag = 516;
	srna->name = "Integer Vector Node Socket";
	srna->description = "Integer vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1029;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Vector Node Socket */
static IntPropertyRNA rna_NodeSocketIntVector3D_default_value_;
PropertyRNA &rna_NodeSocketIntVector3D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntVector3D_default_value_);

StructRNA *RNA_NodeSocketIntVector3D;
void register_struct_NodeSocketIntVector3D(BlenderRNA &brna)
{
	static int rna_NodeSocketIntVector3D_default_value_default[3] = {
		0,
		0,
		0
	};
	rna_NodeSocketIntVector3D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueIntVector, value), RawPropertyType(0), nullptr},
		nullptr, nullptr, NodeSocketIntVector3D_default_value_get, NodeSocketIntVector3D_default_value_set, rna_NodeSocketStandard_int_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, rna_NodeSocketStandard_int_vector_default, 0, rna_NodeSocketIntVector3D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketIntVector3D;
	srna->cont.properties = {&rna_NodeSocketIntVector3D_default_value, &rna_NodeSocketIntVector3D_default_value};
	srna->identifier = "NodeSocketIntVector3D";
	srna->flag = 516;
	srna->name = "Integer Vector Node Socket";
	srna->description = "Integer vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1029;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Vector Node Socket */
static IntPropertyRNA rna_NodeSocketIntVectorUnsigned3D_default_value_;
PropertyRNA &rna_NodeSocketIntVectorUnsigned3D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntVectorUnsigned3D_default_value_);

StructRNA *RNA_NodeSocketIntVectorUnsigned3D;
void register_struct_NodeSocketIntVectorUnsigned3D(BlenderRNA &brna)
{
	static int rna_NodeSocketIntVectorUnsigned3D_default_value_default[3] = {
		0,
		0,
		0
	};
	rna_NodeSocketIntVectorUnsigned3D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueIntVector, value), RawPropertyType(0), nullptr},
		nullptr, nullptr, NodeSocketIntVectorUnsigned3D_default_value_get, NodeSocketIntVectorUnsigned3D_default_value_set, rna_NodeSocketStandard_int_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, rna_NodeSocketStandard_int_vector_default, 0, rna_NodeSocketIntVectorUnsigned3D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketIntVectorUnsigned3D;
	srna->cont.properties = {&rna_NodeSocketIntVectorUnsigned3D_default_value, &rna_NodeSocketIntVectorUnsigned3D_default_value};
	srna->identifier = "NodeSocketIntVectorUnsigned3D";
	srna->flag = 516;
	srna->name = "Integer Vector Node Socket";
	srna->description = "Integer vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1029;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Vector Node Socket */
static IntPropertyRNA rna_NodeSocketIntVectorPercentage3D_default_value_;
PropertyRNA &rna_NodeSocketIntVectorPercentage3D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntVectorPercentage3D_default_value_);

StructRNA *RNA_NodeSocketIntVectorPercentage3D;
void register_struct_NodeSocketIntVectorPercentage3D(BlenderRNA &brna)
{
	static int rna_NodeSocketIntVectorPercentage3D_default_value_default[3] = {
		0,
		0,
		0
	};
	rna_NodeSocketIntVectorPercentage3D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueIntVector, value), RawPropertyType(0), nullptr},
		nullptr, nullptr, NodeSocketIntVectorPercentage3D_default_value_get, NodeSocketIntVectorPercentage3D_default_value_set, rna_NodeSocketStandard_int_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, rna_NodeSocketStandard_int_vector_default, 0, rna_NodeSocketIntVectorPercentage3D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketIntVectorPercentage3D;
	srna->cont.properties = {&rna_NodeSocketIntVectorPercentage3D_default_value, &rna_NodeSocketIntVectorPercentage3D_default_value};
	srna->identifier = "NodeSocketIntVectorPercentage3D";
	srna->flag = 516;
	srna->name = "Integer Vector Node Socket";
	srna->description = "Integer vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1029;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Vector Node Socket */
static IntPropertyRNA rna_NodeSocketIntVectorFactor3D_default_value_;
PropertyRNA &rna_NodeSocketIntVectorFactor3D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntVectorFactor3D_default_value_);

StructRNA *RNA_NodeSocketIntVectorFactor3D;
void register_struct_NodeSocketIntVectorFactor3D(BlenderRNA &brna)
{
	static int rna_NodeSocketIntVectorFactor3D_default_value_default[3] = {
		0,
		0,
		0
	};
	rna_NodeSocketIntVectorFactor3D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueIntVector, value), RawPropertyType(0), nullptr},
		nullptr, nullptr, NodeSocketIntVectorFactor3D_default_value_get, NodeSocketIntVectorFactor3D_default_value_set, rna_NodeSocketStandard_int_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, rna_NodeSocketStandard_int_vector_default, 0, rna_NodeSocketIntVectorFactor3D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketIntVectorFactor3D;
	srna->cont.properties = {&rna_NodeSocketIntVectorFactor3D_default_value, &rna_NodeSocketIntVectorFactor3D_default_value};
	srna->identifier = "NodeSocketIntVectorFactor3D";
	srna->flag = 516;
	srna->name = "Integer Vector Node Socket";
	srna->description = "Integer vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1029;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Integer Vector Node Socket */
static IntPropertyRNA rna_NodeSocketIntVectorPixel3D_default_value_;
PropertyRNA &rna_NodeSocketIntVectorPixel3D_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketIntVectorPixel3D_default_value_);

StructRNA *RNA_NodeSocketIntVectorPixel3D;
void register_struct_NodeSocketIntVectorPixel3D(BlenderRNA &brna)
{
	static int rna_NodeSocketIntVectorPixel3D_default_value_default[3] = {
		0,
		0,
		0
	};
	rna_NodeSocketIntVectorPixel3D_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueIntVector, value), RawPropertyType(0), nullptr},
		nullptr, nullptr, NodeSocketIntVectorPixel3D_default_value_get, NodeSocketIntVectorPixel3D_default_value_set, rna_NodeSocketStandard_int_vector_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, rna_NodeSocketStandard_int_vector_default, 0, rna_NodeSocketIntVectorPixel3D_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketIntVectorPixel3D;
	srna->cont.properties = {&rna_NodeSocketIntVectorPixel3D_default_value, &rna_NodeSocketIntVectorPixel3D_default_value};
	srna->identifier = "NodeSocketIntVectorPixel3D";
	srna->flag = 516;
	srna->name = "Integer Vector Node Socket";
	srna->description = "Integer vector socket of a node";
	srna->translation_context = "*";
	srna->icon = 1029;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Rotation Node Socket */
static FloatPropertyRNA rna_NodeSocketRotation_default_value_;
PropertyRNA &rna_NodeSocketRotation_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketRotation_default_value_);

StructRNA *RNA_NodeSocketRotation;
void register_struct_NodeSocketRotation(BlenderRNA &brna)
{
	static float rna_NodeSocketRotation_default_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketRotation_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {3, 0, 0}, 3,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueRotation, value_euler), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketRotation_default_value_get, NodeSocketRotation_default_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_NodeSocketRotation_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketRotation;
	srna->cont.properties = {&rna_NodeSocketRotation_default_value, &rna_NodeSocketRotation_default_value};
	srna->identifier = "NodeSocketRotation";
	srna->flag = 516;
	srna->name = "Rotation Node Socket";
	srna->description = "Rotation value socket of a node";
	srna->translation_context = "*";
	srna->icon = 1019;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Matrix Node Socket */
StructRNA *RNA_NodeSocketMatrix;
void register_struct_NodeSocketMatrix(BlenderRNA &brna)
{

	StructRNA *srna = RNA_NodeSocketMatrix;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "NodeSocketMatrix";
	srna->flag = 516;
	srna->name = "Matrix Node Socket";
	srna->description = "Matrix value socket of a node";
	srna->translation_context = "*";
	srna->icon = 1021;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Color Node Socket */
static FloatPropertyRNA rna_NodeSocketColor_default_value_;
PropertyRNA &rna_NodeSocketColor_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketColor_default_value_);

StructRNA *RNA_NodeSocketColor;
void register_struct_NodeSocketColor(BlenderRNA &brna)
{
	static float rna_NodeSocketColor_default_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_NodeSocketColor_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueRGBA, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, NodeSocketColor_default_value_get, NodeSocketColor_default_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, rna_NodeSocketStandard_color_default, 0.0f, rna_NodeSocketColor_default_value_default
	};

	StructRNA *srna = RNA_NodeSocketColor;
	srna->cont.properties = {&rna_NodeSocketColor_default_value, &rna_NodeSocketColor_default_value};
	srna->identifier = "NodeSocketColor";
	srna->flag = 516;
	srna->name = "Color Node Socket";
	srna->description = "RGBA color socket of a node";
	srna->translation_context = "*";
	srna->icon = 1008;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* String Node Socket */
static StringPropertyRNA rna_NodeSocketString_default_value_;
PropertyRNA &rna_NodeSocketString_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketString_default_value_);

StructRNA *RNA_NodeSocketString;
void register_struct_NodeSocketString(BlenderRNA &brna)
{
	rna_NodeSocketString_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4456449, 0, 0, 0, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketString_default_value_get, NodeSocketString_default_value_length, NodeSocketString_default_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, rna_NodeSocketStandard_string_default, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	StructRNA *srna = RNA_NodeSocketString;
	srna->cont.properties = {&rna_NodeSocketString_default_value, &rna_NodeSocketString_default_value};
	srna->identifier = "NodeSocketString";
	srna->flag = 516;
	srna->name = "String Node Socket";
	srna->description = "String socket of a node";
	srna->translation_context = "*";
	srna->icon = 1012;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* String Node Socket */
static StringPropertyRNA rna_NodeSocketStringFilePath_default_value_;
PropertyRNA &rna_NodeSocketStringFilePath_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketStringFilePath_default_value_);

StructRNA *RNA_NodeSocketStringFilePath;
void register_struct_NodeSocketStringFilePath(BlenderRNA &brna)
{
	rna_NodeSocketStringFilePath_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4489217, 0, 0, 0, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketStringFilePath_default_value_get, NodeSocketStringFilePath_default_value_length, NodeSocketStringFilePath_default_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, rna_NodeSocketStandard_string_default, nullptr, eStringPropertySearchFlag(0), rna_NodeSocketString_filepath_filter, 1024, ""
	};

	StructRNA *srna = RNA_NodeSocketStringFilePath;
	srna->cont.properties = {&rna_NodeSocketStringFilePath_default_value, &rna_NodeSocketStringFilePath_default_value};
	srna->identifier = "NodeSocketStringFilePath";
	srna->flag = 516;
	srna->name = "String Node Socket";
	srna->description = "String socket of a node";
	srna->translation_context = "*";
	srna->icon = 1012;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Shader Node Socket */
StructRNA *RNA_NodeSocketShader;
void register_struct_NodeSocketShader(BlenderRNA &brna)
{

	StructRNA *srna = RNA_NodeSocketShader;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "NodeSocketShader";
	srna->flag = 516;
	srna->name = "Shader Node Socket";
	srna->description = "Shader socket of a node";
	srna->translation_context = "*";
	srna->icon = 1009;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Object Node Socket */
static PointerPropertyRNA rna_NodeSocketObject_default_value_;
PropertyRNA &rna_NodeSocketObject_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketObject_default_value_);

StructRNA *RNA_NodeSocketObject;
void register_struct_NodeSocketObject(BlenderRNA &brna)
{
	rna_NodeSocketObject_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 12583105, 1, 0, 64, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_and_relation_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketObject_default_value_get, NodeSocketObject_default_value_set, nullptr, nullptr,RNA_Object
	};

	StructRNA *srna = RNA_NodeSocketObject;
	srna->cont.properties = {&rna_NodeSocketObject_default_value, &rna_NodeSocketObject_default_value};
	srna->identifier = "NodeSocketObject";
	srna->flag = 516;
	srna->name = "Object Node Socket";
	srna->description = "Object socket of a node";
	srna->translation_context = "*";
	srna->icon = 1013;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Image Node Socket */
static PointerPropertyRNA rna_NodeSocketImage_default_value_;
PropertyRNA &rna_NodeSocketImage_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketImage_default_value_);

StructRNA *RNA_NodeSocketImage;
void register_struct_NodeSocketImage(BlenderRNA &brna)
{
	rna_NodeSocketImage_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 12583105, 1, 0, 64, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_and_relation_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketImage_default_value_get, NodeSocketImage_default_value_set, nullptr, rna_Image_no_renderresult_or_viewer_poll,RNA_Image
	};

	StructRNA *srna = RNA_NodeSocketImage;
	srna->cont.properties = {&rna_NodeSocketImage_default_value, &rna_NodeSocketImage_default_value};
	srna->identifier = "NodeSocketImage";
	srna->flag = 516;
	srna->name = "Image Node Socket";
	srna->description = "Image socket of a node";
	srna->translation_context = "*";
	srna->icon = 1014;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Geometry Node Socket */
StructRNA *RNA_NodeSocketGeometry;
void register_struct_NodeSocketGeometry(BlenderRNA &brna)
{

	StructRNA *srna = RNA_NodeSocketGeometry;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "NodeSocketGeometry";
	srna->flag = 516;
	srna->name = "Geometry Node Socket";
	srna->description = "Geometry socket of a node";
	srna->translation_context = "*";
	srna->icon = 1015;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Collection Node Socket */
static PointerPropertyRNA rna_NodeSocketCollection_default_value_;
PropertyRNA &rna_NodeSocketCollection_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketCollection_default_value_);

StructRNA *RNA_NodeSocketCollection;
void register_struct_NodeSocketCollection(BlenderRNA &brna)
{
	rna_NodeSocketCollection_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 12583105, 1, 0, 64, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_and_relation_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketCollection_default_value_get, NodeSocketCollection_default_value_set, nullptr, nullptr,RNA_Collection
	};

	StructRNA *srna = RNA_NodeSocketCollection;
	srna->cont.properties = {&rna_NodeSocketCollection_default_value, &rna_NodeSocketCollection_default_value};
	srna->identifier = "NodeSocketCollection";
	srna->flag = 516;
	srna->name = "Collection Node Socket";
	srna->description = "Collection socket of a node";
	srna->translation_context = "*";
	srna->icon = 1016;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Texture Node Socket */
static PointerPropertyRNA rna_NodeSocketTexture_default_value_;
PropertyRNA &rna_NodeSocketTexture_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketTexture_default_value_);

StructRNA *RNA_NodeSocketTexture;
void register_struct_NodeSocketTexture(BlenderRNA &brna)
{
	rna_NodeSocketTexture_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 12583105, 1, 0, 64, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_and_relation_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketTexture_default_value_get, NodeSocketTexture_default_value_set, nullptr, nullptr,RNA_Texture
	};

	StructRNA *srna = RNA_NodeSocketTexture;
	srna->cont.properties = {&rna_NodeSocketTexture_default_value, &rna_NodeSocketTexture_default_value};
	srna->identifier = "NodeSocketTexture";
	srna->flag = 516;
	srna->name = "Texture Node Socket";
	srna->description = "Texture socket of a node";
	srna->translation_context = "*";
	srna->icon = 1017;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Material Node Socket */
static PointerPropertyRNA rna_NodeSocketMaterial_default_value_;
PropertyRNA &rna_NodeSocketMaterial_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketMaterial_default_value_);

StructRNA *RNA_NodeSocketMaterial;
void register_struct_NodeSocketMaterial(BlenderRNA &brna)
{
	rna_NodeSocketMaterial_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 12583105, 1, 0, 64, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_and_relation_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketMaterial_default_value_get, NodeSocketMaterial_default_value_set, nullptr, nullptr,RNA_Material
	};

	StructRNA *srna = RNA_NodeSocketMaterial;
	srna->cont.properties = {&rna_NodeSocketMaterial_default_value, &rna_NodeSocketMaterial_default_value};
	srna->identifier = "NodeSocketMaterial";
	srna->flag = 516;
	srna->name = "Material Node Socket";
	srna->description = "Material socket of a node";
	srna->translation_context = "*";
	srna->icon = 1018;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Menu Node Socket */
static EnumPropertyRNA rna_NodeSocketMenu_default_value_;
PropertyRNA &rna_NodeSocketMenu_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketMenu_default_value_);

StructRNA *RNA_NodeSocketMenu;
void register_struct_NodeSocketMenu(BlenderRNA &brna)
{
	rna_NodeSocketMenu_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 4194305, 0, 0, 4, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
		offsetof(bNodeSocketValueMenu, value), RawPropertyType(0), nullptr},
		NodeSocketMenu_default_value_get, NodeSocketMenu_default_value_set, RNA_node_socket_menu_itemf, nullptr, nullptr, nullptr, nullptr, rna_NodeSocketStandard_menu_default, rna_enum_dummy_NULL_items, 0, 0
	};

	StructRNA *srna = RNA_NodeSocketMenu;
	srna->cont.properties = {&rna_NodeSocketMenu_default_value, &rna_NodeSocketMenu_default_value};
	srna->identifier = "NodeSocketMenu";
	srna->flag = 516;
	srna->name = "Menu Node Socket";
	srna->description = "Menu socket of a node";
	srna->translation_context = "*";
	srna->icon = 1020;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Bundle Node Socket */
StructRNA *RNA_NodeSocketBundle;
void register_struct_NodeSocketBundle(BlenderRNA &brna)
{

	StructRNA *srna = RNA_NodeSocketBundle;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "NodeSocketBundle";
	srna->flag = 516;
	srna->name = "Bundle Node Socket";
	srna->description = "Bundle socket of a node";
	srna->translation_context = "*";
	srna->icon = 1022;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Closure Node Socket */
StructRNA *RNA_NodeSocketClosure;
void register_struct_NodeSocketClosure(BlenderRNA &brna)
{

	StructRNA *srna = RNA_NodeSocketClosure;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "NodeSocketClosure";
	srna->flag = 516;
	srna->name = "Closure Node Socket";
	srna->description = "Closure socket of a node";
	srna->translation_context = "*";
	srna->icon = 1023;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Font Node Socket */
static PointerPropertyRNA rna_NodeSocketFont_default_value_;
PropertyRNA &rna_NodeSocketFont_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketFont_default_value_);

StructRNA *RNA_NodeSocketFont;
void register_struct_NodeSocketFont(BlenderRNA &brna)
{
	rna_NodeSocketFont_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 12583105, 1, 0, 64, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_and_relation_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketFont_default_value_get, NodeSocketFont_default_value_set, nullptr, nullptr,RNA_VectorFont
	};

	StructRNA *srna = RNA_NodeSocketFont;
	srna->cont.properties = {&rna_NodeSocketFont_default_value, &rna_NodeSocketFont_default_value};
	srna->identifier = "NodeSocketFont";
	srna->flag = 516;
	srna->name = "Font Node Socket";
	srna->description = "Font socket of a node";
	srna->translation_context = "*";
	srna->icon = 1024;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Scene Node Socket */
static PointerPropertyRNA rna_NodeSocketScene_default_value_;
PropertyRNA &rna_NodeSocketScene_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketScene_default_value_);

StructRNA *RNA_NodeSocketScene;
void register_struct_NodeSocketScene(BlenderRNA &brna)
{
	rna_NodeSocketScene_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 12583105, 1, 0, 64, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_and_relation_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketScene_default_value_get, NodeSocketScene_default_value_set, nullptr, nullptr,RNA_Scene
	};

	StructRNA *srna = RNA_NodeSocketScene;
	srna->cont.properties = {&rna_NodeSocketScene_default_value, &rna_NodeSocketScene_default_value};
	srna->identifier = "NodeSocketScene";
	srna->flag = 516;
	srna->name = "Scene Node Socket";
	srna->description = "Scene socket of a node";
	srna->translation_context = "*";
	srna->icon = 1025;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Text Node Socket */
static PointerPropertyRNA rna_NodeSocketText_default_value_;
PropertyRNA &rna_NodeSocketText_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketText_default_value_);

StructRNA *RNA_NodeSocketText;
void register_struct_NodeSocketText(BlenderRNA &brna)
{
	rna_NodeSocketText_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 12583105, 1, 0, 64, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_and_relation_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketText_default_value_get, NodeSocketText_default_value_set, nullptr, nullptr,RNA_Text
	};

	StructRNA *srna = RNA_NodeSocketText;
	srna->cont.properties = {&rna_NodeSocketText_default_value, &rna_NodeSocketText_default_value};
	srna->identifier = "NodeSocketText";
	srna->flag = 516;
	srna->name = "Text Node Socket";
	srna->description = "Text socket of a node";
	srna->translation_context = "*";
	srna->icon = 1026;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Mask Node Socket */
static PointerPropertyRNA rna_NodeSocketMask_default_value_;
PropertyRNA &rna_NodeSocketMask_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketMask_default_value_);

StructRNA *RNA_NodeSocketMask;
void register_struct_NodeSocketMask(BlenderRNA &brna)
{
	rna_NodeSocketMask_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 12583105, 1, 0, 64, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_and_relation_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketMask_default_value_get, NodeSocketMask_default_value_set, nullptr, nullptr,RNA_Mask
	};

	StructRNA *srna = RNA_NodeSocketMask;
	srna->cont.properties = {&rna_NodeSocketMask_default_value, &rna_NodeSocketMask_default_value};
	srna->identifier = "NodeSocketMask";
	srna->flag = 516;
	srna->name = "Mask Node Socket";
	srna->description = "Mask socket of a node";
	srna->translation_context = "*";
	srna->icon = 1027;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Sound Node Socket */
static PointerPropertyRNA rna_NodeSocketSound_default_value_;
PropertyRNA &rna_NodeSocketSound_default_value = reinterpret_cast<PropertyRNA &>(rna_NodeSocketSound_default_value_);

StructRNA *RNA_NodeSocketSound;
void register_struct_NodeSocketSound(BlenderRNA &brna)
{
	rna_NodeSocketSound_default_value_ = {
		{nullptr, 	nullptr,
		-1, "default_value", 12583105, 1, 0, 64, 0, PropertyPathTemplateType(0), "default_value",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_NodeSocketStandard_value_and_relation_update, 301989889, nullptr, nullptr, rna_NodeSocketStandard_name_func, rna_NodeSocketStandard_description_func, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NodeSocketSound_default_value_get, NodeSocketSound_default_value_set, nullptr, nullptr,RNA_Sound
	};

	StructRNA *srna = RNA_NodeSocketSound;
	srna->cont.properties = {&rna_NodeSocketSound_default_value, &rna_NodeSocketSound_default_value};
	srna->identifier = "NodeSocketSound";
	srna->flag = 516;
	srna->name = "Sound Node Socket";
	srna->description = "Sound socket of a node";
	srna->translation_context = "*";
	srna->icon = 1028;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};

/* Virtual Node Socket */
StructRNA *RNA_NodeSocketVirtual;
void register_struct_NodeSocketVirtual(BlenderRNA &brna)
{

	StructRNA *srna = RNA_NodeSocketVirtual;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "NodeSocketVirtual";
	srna->flag = 516;
	srna->name = "Virtual Node Socket";
	srna->description = "Virtual socket of a node";
	srna->translation_context = "*";
	srna->icon = 0;
	srna->nameproperty = &rna_NodeSocket_name;
	srna->iteratorproperty = &rna_NodeSocket_rna_properties;
	srna->base = RNA_NodeSocketStandard;
	srna->refine = rna_NodeSocket_refine;
	srna->path = rna_NodeSocket_path;
	srna->reg = rna_NodeSocket_register;
	srna->unreg = rna_NodeSocket_unregister;
	srna->system_idproperties = rna_NodeSocket_idprops;
};


}  // namespace blender
