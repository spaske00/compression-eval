
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

#include "rna_text.cc"
#include "rna_text_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_TextLine_rna_properties;
extern PropertyRNA &rna_TextLine_rna_type;
extern PropertyRNA &rna_TextLine_body;


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

extern PropertyRNA &rna_Text_filepath;
extern PropertyRNA &rna_Text_is_dirty;
extern PropertyRNA &rna_Text_is_modified;
extern PropertyRNA &rna_Text_is_in_memory;
extern PropertyRNA &rna_Text_use_module;
extern PropertyRNA &rna_Text_indentation;
extern PropertyRNA &rna_Text_lines;
extern PropertyRNA &rna_Text_current_line;
extern PropertyRNA &rna_Text_current_character;
extern PropertyRNA &rna_Text_current_line_index;
extern PropertyRNA &rna_Text_select_end_line;
extern PropertyRNA &rna_Text_select_end_line_index;
extern PropertyRNA &rna_Text_select_end_character;

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


extern FunctionRNA *rna_Text_clear_func;
extern FunctionRNA *rna_Text_write_func;
extern PropertyRNA &rna_Text_write_text;

extern FunctionRNA *rna_Text_from_string_func;
extern PropertyRNA &rna_Text_from_string_text;

extern FunctionRNA *rna_Text_as_string_func;
extern PropertyRNA &rna_Text_as_string_text;

extern FunctionRNA *rna_Text_is_syntax_highlight_supported_func;
extern PropertyRNA &rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported;

extern FunctionRNA *rna_Text_select_set_func;
extern PropertyRNA &rna_Text_select_set_line_start;
extern PropertyRNA &rna_Text_select_set_char_start;
extern PropertyRNA &rna_Text_select_set_line_end;
extern PropertyRNA &rna_Text_select_set_char_end;

extern FunctionRNA *rna_Text_cursor_set_func;
extern PropertyRNA &rna_Text_cursor_set_line;
extern PropertyRNA &rna_Text_cursor_set_character;
extern PropertyRNA &rna_Text_cursor_set_select;


static PointerRNA TextLine_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void TextLine_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_TextLine_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = TextLine_rna_properties_get(iter);
    }
}

void TextLine_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = TextLine_rna_properties_get(iter);
    }
}

void TextLine_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool TextLine_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA TextLine_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void TextLine_body_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_TextLine_body_get;
    fn(ptr, value);
}

int TextLine_body_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_TextLine_body_length;
    return fn(ptr);
}

void TextLine_body_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_TextLine_body_set;
    fn(ptr, value);
}

void Text_filepath_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Text_filepath_get;
    fn(ptr, value);
}

int Text_filepath_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Text_filepath_length;
    return fn(ptr);
}

void Text_filepath_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Text_filepath_set;
    fn(ptr, value);
}

bool Text_is_dirty_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return ((uint64_t(data->flags) & 1) != 0);
}

bool Text_is_modified_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Text_modified_get;
    return fn(ptr);
}

bool Text_is_in_memory_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

bool Text_use_module_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return ((uint64_t(data->flags) & 16) != 0);
}

void Text_use_module_set(PointerRNA *ptr, bool value)
{
    Text *data = (Text *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 16); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(16)); }
}

int Text_indentation_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return (uint64_t(data->flags) & 1024);
}

void Text_indentation_set(PointerRNA *ptr, int value)
{
    Text *data = (Text *)(ptr->data);
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1024));
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | uint64_t(value));
}

static PointerRNA Text_lines_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_TextLine, rna_iterator_listbase_get(iter));
}

void Text_lines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Text_lines;

    rna_iterator_listbase_begin(iter, ptr, &data->lines, nullptr);

    if (iter->valid) {
        iter->ptr = Text_lines_get(iter);
    }
}

void Text_lines_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Text_lines_get(iter);
    }
}

void Text_lines_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Text_lines_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Text_lines_begin(&iter, ptr);

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
        if (found) { *r_ptr = Text_lines_get(&iter); }
    }

    Text_lines_end(&iter);

    return found;
}

PointerRNA Text_current_line_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_TextLine, data->curl);
}

int Text_current_character_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Text_current_character_get;
    return fn(ptr);
}

void Text_current_character_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Text_current_character_set;
    fn(ptr, value);
}

int Text_current_line_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Text_current_line_index_get;
    return fn(ptr);
}

void Text_current_line_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Text_current_line_index_set;
    fn(ptr, value);
}

PointerRNA Text_select_end_line_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_TextLine, data->sell);
}

int Text_select_end_line_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Text_select_end_line_index_get;
    return fn(ptr);
}

void Text_select_end_line_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Text_select_end_line_index_set;
    fn(ptr, value);
}

int Text_select_end_character_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Text_select_end_character_get;
    return fn(ptr);
}

void Text_select_end_character_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Text_select_end_character_set;
    fn(ptr, value);
}


void Text_clear_func(Text *_self)
{
	rna_Text_clear(_self);
}

static void Text_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Text *_self;
	_self = (Text *)_ptr->data;
	
	rna_Text_clear(_self);
}

void Text_write_func(Text *_self, const char * text)
{
	rna_Text_write(_self, text);
}

static void Text_write_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Text *_self;
	const char * text;
	char *_data;
	
	_self = (Text *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	
	rna_Text_write(_self, text);
}

void Text_from_string_func(Text *_self, const char * text)
{
	rna_Text_from_string(_self, text);
}

static void Text_from_string_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Text *_self;
	const char * text;
	char *_data;
	
	_self = (Text *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	
	rna_Text_from_string(_self, text);
}

void Text_as_string_func(Text *_self, int *text_num, const char * *text)
{
	rna_Text_as_string(_self, text, text_num);
}

static void Text_as_string_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Text *_self;
	int *text_num;
	const char * *text;
	char *_data;
	
	_self = (Text *)_ptr->data;
	_data = (char *)_parms->data;
	text_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	text = ((const char * *)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Text_as_string(_self, text, text_num);
}

bool Text_is_syntax_highlight_supported_func(Text *_self)
{
	return ED_text_is_syntax_highlight_supported(_self);
}

static void Text_is_syntax_highlight_supported_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Text *_self;
	bool is_syntax_highlight_supported;
	char *_data, *_retdata;
	
	_self = (Text *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	is_syntax_highlight_supported = ED_text_is_syntax_highlight_supported(_self);
	*((bool *)_retdata) = is_syntax_highlight_supported;
}

void Text_select_set_func(Text *_self, int line_start, int char_start, int line_end, int char_end)
{
	rna_Text_select_set(_self, line_start, char_start, line_end, char_end);
}

static void Text_select_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Text *_self;
	int line_start;
	int char_start;
	int line_end;
	int char_end;
	char *_data;
	
	_self = (Text *)_ptr->data;
	_data = (char *)_parms->data;
	line_start = *((int *)_data);
	_data += 8;
	char_start = *((int *)_data);
	_data += 8;
	line_end = *((int *)_data);
	_data += 8;
	char_end = *((int *)_data);
	
	rna_Text_select_set(_self, line_start, char_start, line_end, char_end);
}

void Text_cursor_set_func(Text *_self, int line, int character, bool select)
{
	rna_Text_cursor_set(_self, line, character, select);
}

static void Text_cursor_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Text *_self;
	int line;
	int character;
	bool select;
	char *_data;
	
	_self = (Text *)_ptr->data;
	_data = (char *)_parms->data;
	line = *((int *)_data);
	_data += 8;
	character = *((int *)_data);
	_data += 8;
	select = *((bool *)_data);
	
	rna_Text_cursor_set(_self, line, character, select);
}

/* Repeated prototypes to detect errors */

void rna_Text_clear(Text *_self);
void rna_Text_write(Text *_self, const char * text);
void rna_Text_from_string(Text *_self, const char * text);
void rna_Text_as_string(Text *_self, int *text_num, const char * *text);
bool ED_text_is_syntax_highlight_supported(Text *_self);
void rna_Text_select_set(Text *_self, int line_start, int char_start, int line_end, int char_end);
void rna_Text_cursor_set(Text *_self, int line, int character, bool select);

/* Text Line */
static CollectionPropertyRNA rna_TextLine_rna_properties_;
PropertyRNA &rna_TextLine_rna_properties = reinterpret_cast<PropertyRNA &>(rna_TextLine_rna_properties_);

static PointerPropertyRNA rna_TextLine_rna_type_;
PropertyRNA &rna_TextLine_rna_type = reinterpret_cast<PropertyRNA &>(rna_TextLine_rna_type_);

static StringPropertyRNA rna_TextLine_body_;
PropertyRNA &rna_TextLine_body = reinterpret_cast<PropertyRNA &>(rna_TextLine_body_);

StructRNA *RNA_TextLine;
void register_struct_TextLine(BlenderRNA &brna)
{
	rna_TextLine_rna_properties_ = {
		{&rna_TextLine_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextLine_rna_properties_begin, TextLine_rna_properties_next, TextLine_rna_properties_end, TextLine_rna_properties_get, nullptr, nullptr, TextLine_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_TextLine_rna_type_ = {
		{&rna_TextLine_body, 	&rna_TextLine_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextLine_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_TextLine_body_ = {
		{nullptr, 	&rna_TextLine_rna_type,
		-1, "body", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Line",
		"Text in the line",
		0, "Text",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 218103809, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextLine_body_get, TextLine_body_length, TextLine_body_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_TextLine;
	srna->cont.properties = {&rna_TextLine_rna_properties, &rna_TextLine_body};
	srna->identifier = "TextLine";
	srna->flag = 516;
	srna->name = "Text Line";
	srna->description = "Line of text in a Text data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_TextLine_rna_properties;
};

/* Text */
static StringPropertyRNA rna_Text_filepath_;
PropertyRNA &rna_Text_filepath = reinterpret_cast<PropertyRNA &>(rna_Text_filepath_);

static BoolPropertyRNA rna_Text_is_dirty_;
PropertyRNA &rna_Text_is_dirty = reinterpret_cast<PropertyRNA &>(rna_Text_is_dirty_);

static BoolPropertyRNA rna_Text_is_modified_;
PropertyRNA &rna_Text_is_modified = reinterpret_cast<PropertyRNA &>(rna_Text_is_modified_);

static BoolPropertyRNA rna_Text_is_in_memory_;
PropertyRNA &rna_Text_is_in_memory = reinterpret_cast<PropertyRNA &>(rna_Text_is_in_memory_);

static BoolPropertyRNA rna_Text_use_module_;
PropertyRNA &rna_Text_use_module = reinterpret_cast<PropertyRNA &>(rna_Text_use_module_);

static EnumPropertyRNA rna_Text_indentation_;
PropertyRNA &rna_Text_indentation = reinterpret_cast<PropertyRNA &>(rna_Text_indentation_);

static CollectionPropertyRNA rna_Text_lines_;
PropertyRNA &rna_Text_lines = reinterpret_cast<PropertyRNA &>(rna_Text_lines_);

static PointerPropertyRNA rna_Text_current_line_;
PropertyRNA &rna_Text_current_line = reinterpret_cast<PropertyRNA &>(rna_Text_current_line_);

static IntPropertyRNA rna_Text_current_character_;
PropertyRNA &rna_Text_current_character = reinterpret_cast<PropertyRNA &>(rna_Text_current_character_);

static IntPropertyRNA rna_Text_current_line_index_;
PropertyRNA &rna_Text_current_line_index = reinterpret_cast<PropertyRNA &>(rna_Text_current_line_index_);

static PointerPropertyRNA rna_Text_select_end_line_;
PropertyRNA &rna_Text_select_end_line = reinterpret_cast<PropertyRNA &>(rna_Text_select_end_line_);

static IntPropertyRNA rna_Text_select_end_line_index_;
PropertyRNA &rna_Text_select_end_line_index = reinterpret_cast<PropertyRNA &>(rna_Text_select_end_line_index_);

static IntPropertyRNA rna_Text_select_end_character_;
PropertyRNA &rna_Text_select_end_character = reinterpret_cast<PropertyRNA &>(rna_Text_select_end_character_);

FunctionRNA *rna_Text_clear_func;
static StringPropertyRNA rna_Text_write_text_;
PropertyRNA &rna_Text_write_text = reinterpret_cast<PropertyRNA &>(rna_Text_write_text_);

FunctionRNA *rna_Text_write_func;
static StringPropertyRNA rna_Text_from_string_text_;
PropertyRNA &rna_Text_from_string_text = reinterpret_cast<PropertyRNA &>(rna_Text_from_string_text_);

FunctionRNA *rna_Text_from_string_func;
static StringPropertyRNA rna_Text_as_string_text_;
PropertyRNA &rna_Text_as_string_text = reinterpret_cast<PropertyRNA &>(rna_Text_as_string_text_);

FunctionRNA *rna_Text_as_string_func;
static BoolPropertyRNA rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported_;
PropertyRNA &rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported = reinterpret_cast<PropertyRNA &>(rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported_);

FunctionRNA *rna_Text_is_syntax_highlight_supported_func;
static IntPropertyRNA rna_Text_select_set_line_start_;
PropertyRNA &rna_Text_select_set_line_start = reinterpret_cast<PropertyRNA &>(rna_Text_select_set_line_start_);

static IntPropertyRNA rna_Text_select_set_char_start_;
PropertyRNA &rna_Text_select_set_char_start = reinterpret_cast<PropertyRNA &>(rna_Text_select_set_char_start_);

static IntPropertyRNA rna_Text_select_set_line_end_;
PropertyRNA &rna_Text_select_set_line_end = reinterpret_cast<PropertyRNA &>(rna_Text_select_set_line_end_);

static IntPropertyRNA rna_Text_select_set_char_end_;
PropertyRNA &rna_Text_select_set_char_end = reinterpret_cast<PropertyRNA &>(rna_Text_select_set_char_end_);

FunctionRNA *rna_Text_select_set_func;
static IntPropertyRNA rna_Text_cursor_set_line_;
PropertyRNA &rna_Text_cursor_set_line = reinterpret_cast<PropertyRNA &>(rna_Text_cursor_set_line_);

static IntPropertyRNA rna_Text_cursor_set_character_;
PropertyRNA &rna_Text_cursor_set_character = reinterpret_cast<PropertyRNA &>(rna_Text_cursor_set_character_);

static BoolPropertyRNA rna_Text_cursor_set_select_;
PropertyRNA &rna_Text_cursor_set_select = reinterpret_cast<PropertyRNA &>(rna_Text_cursor_set_select_);

FunctionRNA *rna_Text_cursor_set_func;
StructRNA *RNA_Text;
void register_struct_Text(BlenderRNA &brna)
{
	rna_Text_filepath_ = {
		{&rna_Text_is_dirty, 	nullptr,
		-1, "filepath", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Path",
		"Filename of the text file",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_filepath_get, Text_filepath_length, Text_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Text_is_dirty_ = {
		{&rna_Text_is_modified, 	&rna_Text_filepath,
		-1, "is_dirty", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Dirty",
		"Text file has been edited since last save",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_is_dirty_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Text_is_modified_ = {
		{&rna_Text_is_in_memory, 	&rna_Text_is_dirty,
		-1, "is_modified", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Modified",
		"Text file on disk is different than the one in memory",
		0, "Text",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_is_modified_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Text_is_in_memory_ = {
		{&rna_Text_use_module, 	&rna_Text_is_modified,
		-1, "is_in_memory", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Memory",
		"Text file is in memory, without a corresponding file on disk",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_is_in_memory_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Text_use_module_ = {
		{&rna_Text_indentation, 	&rna_Text_is_in_memory,
		-1, "use_module", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Register",
		"Run this text as a Python script on loading",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_use_module_get, Text_use_module_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Text_indentation_items[3] = {
		{0, "TABS", 0, "Tabs", "Indent using tabs"	},
		{1024, "SPACES", 0, "Spaces", "Indent using spaces"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Text_indentation_ = {
		{&rna_Text_lines, 	&rna_Text_use_module,
		-1, "indentation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Indentation",
		"Use tabs or spaces for indentation",
		0, "Text",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Text, flags), RawPropertyType(0), nullptr},
		Text_indentation_get, Text_indentation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Text_indentation_items, 2, 0
	};

	rna_Text_lines_ = {
		{&rna_Text_current_line, 	&rna_Text_indentation,
		-1, "lines", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lines",
		"Lines of text",
		0, "Text",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_lines_begin, Text_lines_next, Text_lines_end, Text_lines_get, nullptr, Text_lines_lookup_int, nullptr, nullptr, RNA_TextLine
	};

	rna_Text_current_line_ = {
		{&rna_Text_current_character, 	&rna_Text_lines,
		-1, "current_line", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Current Line",
		"Current line, and start line of selection if one exists",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_current_line_get, nullptr, nullptr, nullptr,RNA_TextLine
	};

	rna_Text_current_character_ = {
		{&rna_Text_current_line_index, 	&rna_Text_current_line,
		-1, "current_character", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Current Character",
		"Index of current character in current line, and also start index of character in selection if one exists",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 221380608, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_current_character_get, Text_current_character_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Text_current_line_index_ = {
		{&rna_Text_select_end_line, 	&rna_Text_current_character,
		-1, "current_line_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Current Line Index",
		"Index of current TextLine in TextLine collection",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 221380608, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_current_line_index_get, Text_current_line_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Text_select_end_line_ = {
		{&rna_Text_select_end_line_index, 	&rna_Text_current_line_index,
		-1, "select_end_line", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selection End Line",
		"End line of selection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_select_end_line_get, nullptr, nullptr, nullptr,RNA_TextLine
	};

	rna_Text_select_end_line_index_ = {
		{&rna_Text_select_end_character, 	&rna_Text_select_end_line,
		-1, "select_end_line_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select End Line Index",
		"Index of last TextLine in selection",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 221380608, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_select_end_line_index_get, Text_select_end_line_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Text_select_end_character_ = {
		{nullptr, 	&rna_Text_select_end_line_index,
		-1, "select_end_character", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selection End Character",
		"Index of character after end of selection in the selection end line",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 221380608, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Text_select_end_character_get, Text_select_end_character_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Text;
	srna->cont.properties = {&rna_Text_filepath, &rna_Text_select_end_character};
	srna->identifier = "Text";
	srna->flag = 517;
	srna->name = "Text";
	srna->description = "Text data-block referencing an external or packed text file";
	srna->translation_context = "*";
	srna->icon = 133;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->description = "clear the text block";
		func->call = Text_clear_call;
		rna_Text_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Text_write_text_ = {
		{nullptr, 	nullptr,
		-1, "text", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New text for this data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Text"
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Text_write_text, &rna_Text_write_text};
		func->identifier = "write";
		func->description = "write text at the cursor location and advance to the end of the text block";
		func->call = Text_write_call;
		rna_Text_write_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Text_from_string_text_ = {
		{nullptr, 	nullptr,
		-1, "text", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Text"
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Text_from_string_text, &rna_Text_from_string_text};
		func->identifier = "from_string";
		func->description = "Replace text with this string.";
		func->call = Text_from_string_call;
		rna_Text_from_string_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Text_as_string_text_ = {
		{nullptr, 	nullptr,
		-1, "text", 393217, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Text"
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Text_as_string_text, &rna_Text_as_string_text};
		func->identifier = "as_string";
		func->description = "Return the text as a string";
		func->call = Text_as_string_call;
		rna_Text_as_string_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported_ = {
		{nullptr, 	nullptr,
		-1, "is_syntax_highlight_supported", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported, &rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported};
		func->identifier = "is_syntax_highlight_supported";
		func->description = "Returns True if the editor supports syntax highlighting for the current text data-block";
		func->call = Text_is_syntax_highlight_supported_call;
		func->c_ret = &rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported;
		rna_Text_is_syntax_highlight_supported_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Text_select_set_line_start_ = {
		{&rna_Text_select_set_char_start, 	nullptr,
		-1, "line_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Start Line",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Text_select_set_char_start_ = {
		{&rna_Text_select_set_line_end, 	&rna_Text_select_set_line_start,
		-1, "char_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Start Character",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Text_select_set_line_end_ = {
		{&rna_Text_select_set_char_end, 	&rna_Text_select_set_char_start,
		-1, "line_end", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "End Line",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Text_select_set_char_end_ = {
		{nullptr, 	&rna_Text_select_set_line_end,
		-1, "char_end", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "End Character",
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
		func->cont.properties = {&rna_Text_select_set_line_start, &rna_Text_select_set_char_end};
		func->identifier = "select_set";
		func->description = "Set selection range by line and character index";
		func->call = Text_select_set_call;
		rna_Text_select_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Text_cursor_set_line_ = {
		{&rna_Text_cursor_set_character, 	nullptr,
		-1, "line", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Line",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Text_cursor_set_character_ = {
		{&rna_Text_cursor_set_select, 	&rna_Text_cursor_set_line,
		-1, "character", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Character",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Text_cursor_set_select_ = {
		{nullptr, 	&rna_Text_cursor_set_character,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Select when moving the cursor",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Text_cursor_set_line, &rna_Text_cursor_set_select};
		func->identifier = "cursor_set";
		func->description = "Set cursor by line and (optionally) character index";
		func->call = Text_cursor_set_call;
		rna_Text_cursor_set_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
