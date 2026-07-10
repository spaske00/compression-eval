
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

#include "rna_context.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_Context_rna_properties;
extern PropertyRNA &rna_Context_rna_type;
extern PropertyRNA &rna_Context_window_manager;
extern PropertyRNA &rna_Context_window;
extern PropertyRNA &rna_Context_workspace;
extern PropertyRNA &rna_Context_screen;
extern PropertyRNA &rna_Context_area;
extern PropertyRNA &rna_Context_space_data;
extern PropertyRNA &rna_Context_region;
extern PropertyRNA &rna_Context_region_popup;
extern PropertyRNA &rna_Context_region_data;
extern PropertyRNA &rna_Context_gizmo_group;
extern PropertyRNA &rna_Context_asset;
extern PropertyRNA &rna_Context_blend_data;
extern PropertyRNA &rna_Context_scene;
extern PropertyRNA &rna_Context_view_layer;
extern PropertyRNA &rna_Context_engine;
extern PropertyRNA &rna_Context_collection;
extern PropertyRNA &rna_Context_layer_collection;
extern PropertyRNA &rna_Context_tool_settings;
extern PropertyRNA &rna_Context_preferences;
extern PropertyRNA &rna_Context_mode;

extern FunctionRNA *rna_Context_evaluated_depsgraph_get_func;
extern PropertyRNA &rna_Context_evaluated_depsgraph_get_depsgraph;


static PointerRNA Context_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Context_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Context_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Context_rna_properties_get(iter);
    }
}

void Context_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Context_rna_properties_get(iter);
    }
}

void Context_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Context_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Context_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA Context_window_manager_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_manager_get;
    return fn(ptr);
}

PointerRNA Context_window_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_window_get;
    return fn(ptr);
}

PointerRNA Context_workspace_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_workspace_get;
    return fn(ptr);
}

PointerRNA Context_screen_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_screen_get;
    return fn(ptr);
}

PointerRNA Context_area_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_area_get;
    return fn(ptr);
}

PointerRNA Context_space_data_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_space_data_get;
    return fn(ptr);
}

PointerRNA Context_region_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_region_get;
    return fn(ptr);
}

PointerRNA Context_region_popup_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_region_popup_get;
    return fn(ptr);
}

PointerRNA Context_region_data_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_region_data_get;
    return fn(ptr);
}

PointerRNA Context_gizmo_group_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_gizmo_group_get;
    return fn(ptr);
}

PointerRNA Context_asset_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_asset_get;
    return fn(ptr);
}

PointerRNA Context_blend_data_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_main_get;
    return fn(ptr);
}

PointerRNA Context_scene_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_scene_get;
    return fn(ptr);
}

PointerRNA Context_view_layer_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_view_layer_get;
    return fn(ptr);
}

void Context_engine_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Context_engine_get;
    fn(ptr, value);
}

int Context_engine_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Context_engine_length;
    return fn(ptr);
}

PointerRNA Context_collection_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_collection_get;
    return fn(ptr);
}

PointerRNA Context_layer_collection_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_layer_collection_get;
    return fn(ptr);
}

PointerRNA Context_tool_settings_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_tool_settings_get;
    return fn(ptr);
}

PointerRNA Context_preferences_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Context_preferences_get;
    return fn(ptr);
}

int Context_mode_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Context_mode_get;
    return fn(ptr);
}

Depsgraph *Context_evaluated_depsgraph_get_func(bContext *_self)
{
	return rna_Context_evaluated_depsgraph_get(_self);
}

static void Context_evaluated_depsgraph_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bContext *_self;
	Depsgraph *depsgraph;
	char *_data, *_retdata;
	
	_self = (bContext *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	depsgraph = rna_Context_evaluated_depsgraph_get(_self);
	*((Depsgraph **)_retdata) = depsgraph;
}

/* Repeated prototypes to detect errors */

Depsgraph *rna_Context_evaluated_depsgraph_get(bContext *_self);

/* Context */
static CollectionPropertyRNA rna_Context_rna_properties_;
PropertyRNA &rna_Context_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Context_rna_properties_);

static PointerPropertyRNA rna_Context_rna_type_;
PropertyRNA &rna_Context_rna_type = reinterpret_cast<PropertyRNA &>(rna_Context_rna_type_);

static PointerPropertyRNA rna_Context_window_manager_;
PropertyRNA &rna_Context_window_manager = reinterpret_cast<PropertyRNA &>(rna_Context_window_manager_);

static PointerPropertyRNA rna_Context_window_;
PropertyRNA &rna_Context_window = reinterpret_cast<PropertyRNA &>(rna_Context_window_);

static PointerPropertyRNA rna_Context_workspace_;
PropertyRNA &rna_Context_workspace = reinterpret_cast<PropertyRNA &>(rna_Context_workspace_);

static PointerPropertyRNA rna_Context_screen_;
PropertyRNA &rna_Context_screen = reinterpret_cast<PropertyRNA &>(rna_Context_screen_);

static PointerPropertyRNA rna_Context_area_;
PropertyRNA &rna_Context_area = reinterpret_cast<PropertyRNA &>(rna_Context_area_);

static PointerPropertyRNA rna_Context_space_data_;
PropertyRNA &rna_Context_space_data = reinterpret_cast<PropertyRNA &>(rna_Context_space_data_);

static PointerPropertyRNA rna_Context_region_;
PropertyRNA &rna_Context_region = reinterpret_cast<PropertyRNA &>(rna_Context_region_);

static PointerPropertyRNA rna_Context_region_popup_;
PropertyRNA &rna_Context_region_popup = reinterpret_cast<PropertyRNA &>(rna_Context_region_popup_);

static PointerPropertyRNA rna_Context_region_data_;
PropertyRNA &rna_Context_region_data = reinterpret_cast<PropertyRNA &>(rna_Context_region_data_);

static PointerPropertyRNA rna_Context_gizmo_group_;
PropertyRNA &rna_Context_gizmo_group = reinterpret_cast<PropertyRNA &>(rna_Context_gizmo_group_);

static PointerPropertyRNA rna_Context_asset_;
PropertyRNA &rna_Context_asset = reinterpret_cast<PropertyRNA &>(rna_Context_asset_);

static PointerPropertyRNA rna_Context_blend_data_;
PropertyRNA &rna_Context_blend_data = reinterpret_cast<PropertyRNA &>(rna_Context_blend_data_);

static PointerPropertyRNA rna_Context_scene_;
PropertyRNA &rna_Context_scene = reinterpret_cast<PropertyRNA &>(rna_Context_scene_);

static PointerPropertyRNA rna_Context_view_layer_;
PropertyRNA &rna_Context_view_layer = reinterpret_cast<PropertyRNA &>(rna_Context_view_layer_);

static StringPropertyRNA rna_Context_engine_;
PropertyRNA &rna_Context_engine = reinterpret_cast<PropertyRNA &>(rna_Context_engine_);

static PointerPropertyRNA rna_Context_collection_;
PropertyRNA &rna_Context_collection = reinterpret_cast<PropertyRNA &>(rna_Context_collection_);

static PointerPropertyRNA rna_Context_layer_collection_;
PropertyRNA &rna_Context_layer_collection = reinterpret_cast<PropertyRNA &>(rna_Context_layer_collection_);

static PointerPropertyRNA rna_Context_tool_settings_;
PropertyRNA &rna_Context_tool_settings = reinterpret_cast<PropertyRNA &>(rna_Context_tool_settings_);

static PointerPropertyRNA rna_Context_preferences_;
PropertyRNA &rna_Context_preferences = reinterpret_cast<PropertyRNA &>(rna_Context_preferences_);

static EnumPropertyRNA rna_Context_mode_;
PropertyRNA &rna_Context_mode = reinterpret_cast<PropertyRNA &>(rna_Context_mode_);

static PointerPropertyRNA rna_Context_evaluated_depsgraph_get_depsgraph_;
PropertyRNA &rna_Context_evaluated_depsgraph_get_depsgraph = reinterpret_cast<PropertyRNA &>(rna_Context_evaluated_depsgraph_get_depsgraph_);

FunctionRNA *rna_Context_evaluated_depsgraph_get_func;
StructRNA *RNA_Context;
void register_struct_Context(BlenderRNA &brna)
{
	rna_Context_rna_properties_ = {
		{&rna_Context_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_rna_properties_begin, Context_rna_properties_next, Context_rna_properties_end, Context_rna_properties_get, nullptr, nullptr, Context_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Context_rna_type_ = {
		{&rna_Context_window_manager, 	&rna_Context_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Context_window_manager_ = {
		{&rna_Context_window, 	&rna_Context_rna_type,
		-1, "window_manager", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "window_manager",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_window_manager_get, nullptr, nullptr, nullptr,RNA_WindowManager
	};

	rna_Context_window_ = {
		{&rna_Context_workspace, 	&rna_Context_window_manager,
		-1, "window", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "window",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_window_get, nullptr, nullptr, nullptr,RNA_Window
	};

	rna_Context_workspace_ = {
		{&rna_Context_screen, 	&rna_Context_window,
		-1, "workspace", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "workspace",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_workspace_get, nullptr, nullptr, nullptr,RNA_WorkSpace
	};

	rna_Context_screen_ = {
		{&rna_Context_area, 	&rna_Context_workspace,
		-1, "screen", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "screen",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_screen_get, nullptr, nullptr, nullptr,RNA_Screen
	};

	rna_Context_area_ = {
		{&rna_Context_space_data, 	&rna_Context_screen,
		-1, "area", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "area",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_area_get, nullptr, nullptr, nullptr,RNA_Area
	};

	rna_Context_space_data_ = {
		{&rna_Context_region, 	&rna_Context_area,
		-1, "space_data", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The current space, may be None in background-mode, when the cursor is outside the window or when using menu-search",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_space_data_get, nullptr, nullptr, nullptr,RNA_Space
	};

	rna_Context_region_ = {
		{&rna_Context_region_popup, 	&rna_Context_space_data,
		-1, "region", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "region",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_region_get, nullptr, nullptr, nullptr,RNA_Region
	};

	rna_Context_region_popup_ = {
		{&rna_Context_region_data, 	&rna_Context_region,
		-1, "region_popup", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Popup Region",
		"The temporary region for pop-ups (including menus and pop-overs)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_region_popup_get, nullptr, nullptr, nullptr,RNA_Region
	};

	rna_Context_region_data_ = {
		{&rna_Context_gizmo_group, 	&rna_Context_region_popup,
		-1, "region_data", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "region_data",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_region_data_get, nullptr, nullptr, nullptr,RNA_RegionView3D
	};

	rna_Context_gizmo_group_ = {
		{&rna_Context_asset, 	&rna_Context_region_data,
		-1, "gizmo_group", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "gizmo_group",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_gizmo_group_get, nullptr, nullptr, nullptr,RNA_GizmoGroup
	};

	rna_Context_asset_ = {
		{&rna_Context_blend_data, 	&rna_Context_gizmo_group,
		-1, "asset", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "asset",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_asset_get, nullptr, nullptr, nullptr,RNA_AssetRepresentation
	};

	rna_Context_blend_data_ = {
		{&rna_Context_scene, 	&rna_Context_asset,
		-1, "blend_data", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "blend_data",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_blend_data_get, nullptr, nullptr, nullptr,RNA_BlendData
	};

	rna_Context_scene_ = {
		{&rna_Context_view_layer, 	&rna_Context_blend_data,
		-1, "scene", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "scene",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_scene_get, nullptr, nullptr, nullptr,RNA_Scene
	};

	rna_Context_view_layer_ = {
		{&rna_Context_engine, 	&rna_Context_scene,
		-1, "view_layer", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "view_layer",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_view_layer_get, nullptr, nullptr, nullptr,RNA_ViewLayer
	};

	rna_Context_engine_ = {
		{&rna_Context_collection, 	&rna_Context_view_layer,
		-1, "engine", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "engine",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_engine_get, Context_engine_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Context_collection_ = {
		{&rna_Context_layer_collection, 	&rna_Context_engine,
		-1, "collection", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "collection",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_collection_get, nullptr, nullptr, nullptr,RNA_Collection
	};

	rna_Context_layer_collection_ = {
		{&rna_Context_tool_settings, 	&rna_Context_collection,
		-1, "layer_collection", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "layer_collection",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_layer_collection_get, nullptr, nullptr, nullptr,RNA_LayerCollection
	};

	rna_Context_tool_settings_ = {
		{&rna_Context_preferences, 	&rna_Context_layer_collection,
		-1, "tool_settings", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "tool_settings",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_tool_settings_get, nullptr, nullptr, nullptr,RNA_ToolSettings
	};

	rna_Context_preferences_ = {
		{&rna_Context_mode, 	&rna_Context_tool_settings,
		-1, "preferences", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "preferences",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_preferences_get, nullptr, nullptr, nullptr,RNA_Preferences
	};

	rna_Context_mode_ = {
		{nullptr, 	&rna_Context_preferences,
		-1, "mode", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Context_mode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_context_mode_items, 27, 0
	};

	StructRNA *srna = RNA_Context;
	srna->cont.properties = {&rna_Context_rna_properties, &rna_Context_mode};
	srna->identifier = "Context";
	srna->flag = 516;
	srna->name = "Context";
	srna->description = "Current windowmanager and data context";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Context_rna_properties;
	{
	rna_Context_evaluated_depsgraph_get_depsgraph_ = {
		{nullptr, 	nullptr,
		-1, "depsgraph", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Evaluated dependency graph",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Context_evaluated_depsgraph_get_depsgraph, &rna_Context_evaluated_depsgraph_get_depsgraph};
		func->identifier = "evaluated_depsgraph_get";
		func->description = "Get the dependency graph for the current scene and view layer, to access to data-blocks with animation and modifiers applied. If any data-blocks have been edited, the dependency graph will be updated. This invalidates all references to evaluated data-blocks from the dependency graph.";
		func->call = Context_evaluated_depsgraph_get_call;
		func->c_ret = &rna_Context_evaluated_depsgraph_get_depsgraph;
		rna_Context_evaluated_depsgraph_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
