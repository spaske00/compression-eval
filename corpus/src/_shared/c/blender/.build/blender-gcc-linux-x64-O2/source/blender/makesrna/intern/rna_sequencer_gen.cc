
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

#include "rna_sequencer.cc"
#include "rna_sequencer_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_StripColorBalanceData_rna_properties;
extern PropertyRNA &rna_StripColorBalanceData_rna_type;
extern PropertyRNA &rna_StripColorBalanceData_correction_method;
extern PropertyRNA &rna_StripColorBalanceData_lift;
extern PropertyRNA &rna_StripColorBalanceData_gamma;
extern PropertyRNA &rna_StripColorBalanceData_gain;
extern PropertyRNA &rna_StripColorBalanceData_slope;
extern PropertyRNA &rna_StripColorBalanceData_offset;
extern PropertyRNA &rna_StripColorBalanceData_power;
extern PropertyRNA &rna_StripColorBalanceData_invert_lift;
extern PropertyRNA &rna_StripColorBalanceData_invert_gamma;
extern PropertyRNA &rna_StripColorBalanceData_invert_gain;
extern PropertyRNA &rna_StripColorBalanceData_invert_slope;
extern PropertyRNA &rna_StripColorBalanceData_invert_offset;
extern PropertyRNA &rna_StripColorBalanceData_invert_power;


extern PropertyRNA &rna_StripElement_rna_properties;
extern PropertyRNA &rna_StripElement_rna_type;
extern PropertyRNA &rna_StripElement_filename;
extern PropertyRNA &rna_StripElement_orig_width;
extern PropertyRNA &rna_StripElement_orig_height;
extern PropertyRNA &rna_StripElement_orig_fps;


extern PropertyRNA &rna_RetimingKey_rna_properties;
extern PropertyRNA &rna_RetimingKey_rna_type;
extern PropertyRNA &rna_RetimingKey_timeline_frame;

extern FunctionRNA *rna_RetimingKey_remove_func;


extern PropertyRNA &rna_StripProxy_rna_properties;
extern PropertyRNA &rna_StripProxy_rna_type;
extern PropertyRNA &rna_StripProxy_directory;
extern PropertyRNA &rna_StripProxy_filepath;
extern PropertyRNA &rna_StripProxy_use_overwrite;
extern PropertyRNA &rna_StripProxy_build_25;
extern PropertyRNA &rna_StripProxy_build_50;
extern PropertyRNA &rna_StripProxy_build_75;
extern PropertyRNA &rna_StripProxy_build_100;
extern PropertyRNA &rna_StripProxy_quality;
extern PropertyRNA &rna_StripProxy_use_proxy_custom_directory;
extern PropertyRNA &rna_StripProxy_use_proxy_custom_file;


extern PropertyRNA &rna_StripColorBalanceData_rna_properties;
extern PropertyRNA &rna_StripColorBalanceData_rna_type;
extern PropertyRNA &rna_StripColorBalanceData_correction_method;
extern PropertyRNA &rna_StripColorBalanceData_lift;
extern PropertyRNA &rna_StripColorBalanceData_gamma;
extern PropertyRNA &rna_StripColorBalanceData_gain;
extern PropertyRNA &rna_StripColorBalanceData_slope;
extern PropertyRNA &rna_StripColorBalanceData_offset;
extern PropertyRNA &rna_StripColorBalanceData_power;
extern PropertyRNA &rna_StripColorBalanceData_invert_lift;
extern PropertyRNA &rna_StripColorBalanceData_invert_gamma;
extern PropertyRNA &rna_StripColorBalanceData_invert_gain;
extern PropertyRNA &rna_StripColorBalanceData_invert_slope;
extern PropertyRNA &rna_StripColorBalanceData_invert_offset;
extern PropertyRNA &rna_StripColorBalanceData_invert_power;


extern PropertyRNA &rna_StripCrop_rna_properties;
extern PropertyRNA &rna_StripCrop_rna_type;
extern PropertyRNA &rna_StripCrop_max_y;
extern PropertyRNA &rna_StripCrop_min_y;
extern PropertyRNA &rna_StripCrop_min_x;
extern PropertyRNA &rna_StripCrop_max_x;


extern PropertyRNA &rna_StripTransform_rna_properties;
extern PropertyRNA &rna_StripTransform_rna_type;
extern PropertyRNA &rna_StripTransform_scale_x;
extern PropertyRNA &rna_StripTransform_scale_y;
extern PropertyRNA &rna_StripTransform_offset_x;
extern PropertyRNA &rna_StripTransform_offset_y;
extern PropertyRNA &rna_StripTransform_rotation;
extern PropertyRNA &rna_StripTransform_origin;
extern PropertyRNA &rna_StripTransform_filter;


extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_StripModifiers_rna_properties;
extern PropertyRNA &rna_StripModifiers_rna_type;
extern PropertyRNA &rna_StripModifiers_active;

extern FunctionRNA *rna_StripModifiers_new_func;
extern PropertyRNA &rna_StripModifiers_new_name;
extern PropertyRNA &rna_StripModifiers_new_type;
extern PropertyRNA &rna_StripModifiers_new_modifier;

extern FunctionRNA *rna_StripModifiers_remove_func;
extern PropertyRNA &rna_StripModifiers_remove_modifier;

extern FunctionRNA *rna_StripModifiers_clear_func;


extern PropertyRNA &rna_SequenceEditor_rna_properties;
extern PropertyRNA &rna_SequenceEditor_rna_type;
extern PropertyRNA &rna_SequenceEditor_strips;
extern PropertyRNA &rna_SequenceEditor_strips_all;
extern PropertyRNA &rna_SequenceEditor_meta_stack;
extern PropertyRNA &rna_SequenceEditor_channels;
extern PropertyRNA &rna_SequenceEditor_active_strip;
extern PropertyRNA &rna_SequenceEditor_selected_retiming_keys;
extern PropertyRNA &rna_SequenceEditor_show_overlay_frame;
extern PropertyRNA &rna_SequenceEditor_use_overlay_frame_lock;
extern PropertyRNA &rna_SequenceEditor_show_missing_media;
extern PropertyRNA &rna_SequenceEditor_overlay_frame;
extern PropertyRNA &rna_SequenceEditor_proxy_storage;
extern PropertyRNA &rna_SequenceEditor_proxy_dir;
extern PropertyRNA &rna_SequenceEditor_use_cache_raw;
extern PropertyRNA &rna_SequenceEditor_use_cache_final;
extern PropertyRNA &rna_SequenceEditor_use_prefetch;
extern PropertyRNA &rna_SequenceEditor_cache_raw_size;
extern PropertyRNA &rna_SequenceEditor_cache_final_size;

extern FunctionRNA *rna_SequenceEditor_display_stack_func;
extern PropertyRNA &rna_SequenceEditor_display_stack_meta_sequence;



extern PropertyRNA &rna_StripsTopLevel_rna_properties;
extern PropertyRNA &rna_StripsTopLevel_rna_type;

extern FunctionRNA *rna_StripsTopLevel_new_clip_func;
extern PropertyRNA &rna_StripsTopLevel_new_clip_name;
extern PropertyRNA &rna_StripsTopLevel_new_clip_clip;
extern PropertyRNA &rna_StripsTopLevel_new_clip_channel;
extern PropertyRNA &rna_StripsTopLevel_new_clip_frame_start;
extern PropertyRNA &rna_StripsTopLevel_new_clip_sequence;

extern FunctionRNA *rna_StripsTopLevel_new_mask_func;
extern PropertyRNA &rna_StripsTopLevel_new_mask_name;
extern PropertyRNA &rna_StripsTopLevel_new_mask_mask;
extern PropertyRNA &rna_StripsTopLevel_new_mask_channel;
extern PropertyRNA &rna_StripsTopLevel_new_mask_frame_start;
extern PropertyRNA &rna_StripsTopLevel_new_mask_sequence;

extern FunctionRNA *rna_StripsTopLevel_new_scene_func;
extern PropertyRNA &rna_StripsTopLevel_new_scene_name;
extern PropertyRNA &rna_StripsTopLevel_new_scene_scene;
extern PropertyRNA &rna_StripsTopLevel_new_scene_channel;
extern PropertyRNA &rna_StripsTopLevel_new_scene_frame_start;
extern PropertyRNA &rna_StripsTopLevel_new_scene_sequence;

extern FunctionRNA *rna_StripsTopLevel_new_image_func;
extern PropertyRNA &rna_StripsTopLevel_new_image_name;
extern PropertyRNA &rna_StripsTopLevel_new_image_filepath;
extern PropertyRNA &rna_StripsTopLevel_new_image_channel;
extern PropertyRNA &rna_StripsTopLevel_new_image_frame_start;
extern PropertyRNA &rna_StripsTopLevel_new_image_fit_method;
extern PropertyRNA &rna_StripsTopLevel_new_image_sequence;

extern FunctionRNA *rna_StripsTopLevel_new_movie_func;
extern PropertyRNA &rna_StripsTopLevel_new_movie_name;
extern PropertyRNA &rna_StripsTopLevel_new_movie_filepath;
extern PropertyRNA &rna_StripsTopLevel_new_movie_channel;
extern PropertyRNA &rna_StripsTopLevel_new_movie_frame_start;
extern PropertyRNA &rna_StripsTopLevel_new_movie_fit_method;
extern PropertyRNA &rna_StripsTopLevel_new_movie_stream;
extern PropertyRNA &rna_StripsTopLevel_new_movie_sequence;

extern FunctionRNA *rna_StripsTopLevel_new_sound_func;
extern PropertyRNA &rna_StripsTopLevel_new_sound_name;
extern PropertyRNA &rna_StripsTopLevel_new_sound_filepath;
extern PropertyRNA &rna_StripsTopLevel_new_sound_channel;
extern PropertyRNA &rna_StripsTopLevel_new_sound_frame_start;
extern PropertyRNA &rna_StripsTopLevel_new_sound_stream;
extern PropertyRNA &rna_StripsTopLevel_new_sound_sequence;

extern FunctionRNA *rna_StripsTopLevel_new_meta_func;
extern PropertyRNA &rna_StripsTopLevel_new_meta_name;
extern PropertyRNA &rna_StripsTopLevel_new_meta_channel;
extern PropertyRNA &rna_StripsTopLevel_new_meta_frame_start;
extern PropertyRNA &rna_StripsTopLevel_new_meta_sequence;

extern FunctionRNA *rna_StripsTopLevel_new_effect_func;
extern PropertyRNA &rna_StripsTopLevel_new_effect_name;
extern PropertyRNA &rna_StripsTopLevel_new_effect_type;
extern PropertyRNA &rna_StripsTopLevel_new_effect_channel;
extern PropertyRNA &rna_StripsTopLevel_new_effect_frame_start;
extern PropertyRNA &rna_StripsTopLevel_new_effect_length;
extern PropertyRNA &rna_StripsTopLevel_new_effect_input1;
extern PropertyRNA &rna_StripsTopLevel_new_effect_input2;
extern PropertyRNA &rna_StripsTopLevel_new_effect_sequence;

extern FunctionRNA *rna_StripsTopLevel_remove_func;
extern PropertyRNA &rna_StripsTopLevel_remove_sequence;



extern PropertyRNA &rna_SequenceTimelineChannel_rna_properties;
extern PropertyRNA &rna_SequenceTimelineChannel_rna_type;
extern PropertyRNA &rna_SequenceTimelineChannel_name;
extern PropertyRNA &rna_SequenceTimelineChannel_number;
extern PropertyRNA &rna_SequenceTimelineChannel_lock;
extern PropertyRNA &rna_SequenceTimelineChannel_mute;


extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_ImageStrip_directory;
extern PropertyRNA &rna_ImageStrip_elements;
extern PropertyRNA &rna_ImageStrip_retiming_keys;
extern PropertyRNA &rna_ImageStrip_use_multiview;
extern PropertyRNA &rna_ImageStrip_views_format;
extern PropertyRNA &rna_ImageStrip_stereo_3d_format;
extern PropertyRNA &rna_ImageStrip_use_deinterlace;
extern PropertyRNA &rna_ImageStrip_alpha_mode;
extern PropertyRNA &rna_ImageStrip_use_flip_x;
extern PropertyRNA &rna_ImageStrip_use_flip_y;
extern PropertyRNA &rna_ImageStrip_use_float;
extern PropertyRNA &rna_ImageStrip_use_reverse_frames;
extern PropertyRNA &rna_ImageStrip_color_multiply;
extern PropertyRNA &rna_ImageStrip_multiply_alpha;
extern PropertyRNA &rna_ImageStrip_color_saturation;
extern PropertyRNA &rna_ImageStrip_strobe;
extern PropertyRNA &rna_ImageStrip_transform;
extern PropertyRNA &rna_ImageStrip_crop;
extern PropertyRNA &rna_ImageStrip_use_proxy;
extern PropertyRNA &rna_ImageStrip_proxy;
extern PropertyRNA &rna_ImageStrip_animation_offset_start;
extern PropertyRNA &rna_ImageStrip_content_trim_start;
extern PropertyRNA &rna_ImageStrip_animation_offset_end;
extern PropertyRNA &rna_ImageStrip_content_trim_end;
extern PropertyRNA &rna_ImageStrip_colorspace_settings;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_StripElements_rna_properties;
extern PropertyRNA &rna_StripElements_rna_type;

extern FunctionRNA *rna_StripElements_append_func;
extern PropertyRNA &rna_StripElements_append_filename;
extern PropertyRNA &rna_StripElements_append_elem;

extern FunctionRNA *rna_StripElements_pop_func;
extern PropertyRNA &rna_StripElements_pop_index;



extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_MetaStrip_strips;
extern PropertyRNA &rna_MetaStrip_channels;
extern PropertyRNA &rna_MetaStrip_volume;
extern PropertyRNA &rna_MetaStrip_use_deinterlace;
extern PropertyRNA &rna_MetaStrip_alpha_mode;
extern PropertyRNA &rna_MetaStrip_use_flip_x;
extern PropertyRNA &rna_MetaStrip_use_flip_y;
extern PropertyRNA &rna_MetaStrip_use_float;
extern PropertyRNA &rna_MetaStrip_use_reverse_frames;
extern PropertyRNA &rna_MetaStrip_color_multiply;
extern PropertyRNA &rna_MetaStrip_multiply_alpha;
extern PropertyRNA &rna_MetaStrip_color_saturation;
extern PropertyRNA &rna_MetaStrip_strobe;
extern PropertyRNA &rna_MetaStrip_transform;
extern PropertyRNA &rna_MetaStrip_crop;
extern PropertyRNA &rna_MetaStrip_use_proxy;
extern PropertyRNA &rna_MetaStrip_proxy;
extern PropertyRNA &rna_MetaStrip_animation_offset_start;
extern PropertyRNA &rna_MetaStrip_content_trim_start;
extern PropertyRNA &rna_MetaStrip_animation_offset_end;
extern PropertyRNA &rna_MetaStrip_content_trim_end;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;


extern FunctionRNA *rna_MetaStrip_separate_func;


extern PropertyRNA &rna_StripsMeta_rna_properties;
extern PropertyRNA &rna_StripsMeta_rna_type;

extern FunctionRNA *rna_StripsMeta_new_clip_func;
extern PropertyRNA &rna_StripsMeta_new_clip_name;
extern PropertyRNA &rna_StripsMeta_new_clip_clip;
extern PropertyRNA &rna_StripsMeta_new_clip_channel;
extern PropertyRNA &rna_StripsMeta_new_clip_frame_start;
extern PropertyRNA &rna_StripsMeta_new_clip_sequence;

extern FunctionRNA *rna_StripsMeta_new_mask_func;
extern PropertyRNA &rna_StripsMeta_new_mask_name;
extern PropertyRNA &rna_StripsMeta_new_mask_mask;
extern PropertyRNA &rna_StripsMeta_new_mask_channel;
extern PropertyRNA &rna_StripsMeta_new_mask_frame_start;
extern PropertyRNA &rna_StripsMeta_new_mask_sequence;

extern FunctionRNA *rna_StripsMeta_new_scene_func;
extern PropertyRNA &rna_StripsMeta_new_scene_name;
extern PropertyRNA &rna_StripsMeta_new_scene_scene;
extern PropertyRNA &rna_StripsMeta_new_scene_channel;
extern PropertyRNA &rna_StripsMeta_new_scene_frame_start;
extern PropertyRNA &rna_StripsMeta_new_scene_sequence;

extern FunctionRNA *rna_StripsMeta_new_image_func;
extern PropertyRNA &rna_StripsMeta_new_image_name;
extern PropertyRNA &rna_StripsMeta_new_image_filepath;
extern PropertyRNA &rna_StripsMeta_new_image_channel;
extern PropertyRNA &rna_StripsMeta_new_image_frame_start;
extern PropertyRNA &rna_StripsMeta_new_image_fit_method;
extern PropertyRNA &rna_StripsMeta_new_image_sequence;

extern FunctionRNA *rna_StripsMeta_new_movie_func;
extern PropertyRNA &rna_StripsMeta_new_movie_name;
extern PropertyRNA &rna_StripsMeta_new_movie_filepath;
extern PropertyRNA &rna_StripsMeta_new_movie_channel;
extern PropertyRNA &rna_StripsMeta_new_movie_frame_start;
extern PropertyRNA &rna_StripsMeta_new_movie_fit_method;
extern PropertyRNA &rna_StripsMeta_new_movie_stream;
extern PropertyRNA &rna_StripsMeta_new_movie_sequence;

extern FunctionRNA *rna_StripsMeta_new_sound_func;
extern PropertyRNA &rna_StripsMeta_new_sound_name;
extern PropertyRNA &rna_StripsMeta_new_sound_filepath;
extern PropertyRNA &rna_StripsMeta_new_sound_channel;
extern PropertyRNA &rna_StripsMeta_new_sound_frame_start;
extern PropertyRNA &rna_StripsMeta_new_sound_stream;
extern PropertyRNA &rna_StripsMeta_new_sound_sequence;

extern FunctionRNA *rna_StripsMeta_new_meta_func;
extern PropertyRNA &rna_StripsMeta_new_meta_name;
extern PropertyRNA &rna_StripsMeta_new_meta_channel;
extern PropertyRNA &rna_StripsMeta_new_meta_frame_start;
extern PropertyRNA &rna_StripsMeta_new_meta_sequence;

extern FunctionRNA *rna_StripsMeta_new_effect_func;
extern PropertyRNA &rna_StripsMeta_new_effect_name;
extern PropertyRNA &rna_StripsMeta_new_effect_type;
extern PropertyRNA &rna_StripsMeta_new_effect_channel;
extern PropertyRNA &rna_StripsMeta_new_effect_frame_start;
extern PropertyRNA &rna_StripsMeta_new_effect_length;
extern PropertyRNA &rna_StripsMeta_new_effect_input1;
extern PropertyRNA &rna_StripsMeta_new_effect_input2;
extern PropertyRNA &rna_StripsMeta_new_effect_sequence;

extern FunctionRNA *rna_StripsMeta_remove_func;
extern PropertyRNA &rna_StripsMeta_remove_sequence;



extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_SceneStrip_scene;
extern PropertyRNA &rna_SceneStrip_scene_camera;
extern PropertyRNA &rna_SceneStrip_view_layer;
extern PropertyRNA &rna_SceneStrip_scene_input;
extern PropertyRNA &rna_SceneStrip_use_annotations;
extern PropertyRNA &rna_SceneStrip_retiming_keys;
extern PropertyRNA &rna_SceneStrip_volume;
extern PropertyRNA &rna_SceneStrip_use_deinterlace;
extern PropertyRNA &rna_SceneStrip_alpha_mode;
extern PropertyRNA &rna_SceneStrip_use_flip_x;
extern PropertyRNA &rna_SceneStrip_use_flip_y;
extern PropertyRNA &rna_SceneStrip_use_float;
extern PropertyRNA &rna_SceneStrip_use_reverse_frames;
extern PropertyRNA &rna_SceneStrip_color_multiply;
extern PropertyRNA &rna_SceneStrip_multiply_alpha;
extern PropertyRNA &rna_SceneStrip_color_saturation;
extern PropertyRNA &rna_SceneStrip_strobe;
extern PropertyRNA &rna_SceneStrip_transform;
extern PropertyRNA &rna_SceneStrip_crop;
extern PropertyRNA &rna_SceneStrip_use_proxy;
extern PropertyRNA &rna_SceneStrip_proxy;
extern PropertyRNA &rna_SceneStrip_animation_offset_start;
extern PropertyRNA &rna_SceneStrip_content_trim_start;
extern PropertyRNA &rna_SceneStrip_animation_offset_end;
extern PropertyRNA &rna_SceneStrip_content_trim_end;
extern PropertyRNA &rna_SceneStrip_fps;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_MovieStrip_stream_index;
extern PropertyRNA &rna_MovieStrip_elements;
extern PropertyRNA &rna_MovieStrip_retiming_keys;
extern PropertyRNA &rna_MovieStrip_filepath;
extern PropertyRNA &rna_MovieStrip_use_multiview;
extern PropertyRNA &rna_MovieStrip_views_format;
extern PropertyRNA &rna_MovieStrip_stereo_3d_format;
extern PropertyRNA &rna_MovieStrip_use_deinterlace;
extern PropertyRNA &rna_MovieStrip_alpha_mode;
extern PropertyRNA &rna_MovieStrip_use_flip_x;
extern PropertyRNA &rna_MovieStrip_use_flip_y;
extern PropertyRNA &rna_MovieStrip_use_float;
extern PropertyRNA &rna_MovieStrip_use_reverse_frames;
extern PropertyRNA &rna_MovieStrip_color_multiply;
extern PropertyRNA &rna_MovieStrip_multiply_alpha;
extern PropertyRNA &rna_MovieStrip_color_saturation;
extern PropertyRNA &rna_MovieStrip_strobe;
extern PropertyRNA &rna_MovieStrip_transform;
extern PropertyRNA &rna_MovieStrip_crop;
extern PropertyRNA &rna_MovieStrip_use_proxy;
extern PropertyRNA &rna_MovieStrip_proxy;
extern PropertyRNA &rna_MovieStrip_animation_offset_start;
extern PropertyRNA &rna_MovieStrip_content_trim_start;
extern PropertyRNA &rna_MovieStrip_animation_offset_end;
extern PropertyRNA &rna_MovieStrip_content_trim_end;
extern PropertyRNA &rna_MovieStrip_colorspace_settings;
extern PropertyRNA &rna_MovieStrip_fps;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;


extern FunctionRNA *rna_MovieStrip_reload_if_needed_func;
extern PropertyRNA &rna_MovieStrip_reload_if_needed_can_produce_frames;

extern FunctionRNA *rna_MovieStrip_metadata_func;
extern PropertyRNA &rna_MovieStrip_metadata_metadata;



extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_MovieClipStrip_clip;
extern PropertyRNA &rna_MovieClipStrip_undistort;
extern PropertyRNA &rna_MovieClipStrip_stabilize2d;
extern PropertyRNA &rna_MovieClipStrip_use_deinterlace;
extern PropertyRNA &rna_MovieClipStrip_alpha_mode;
extern PropertyRNA &rna_MovieClipStrip_use_flip_x;
extern PropertyRNA &rna_MovieClipStrip_use_flip_y;
extern PropertyRNA &rna_MovieClipStrip_use_float;
extern PropertyRNA &rna_MovieClipStrip_use_reverse_frames;
extern PropertyRNA &rna_MovieClipStrip_color_multiply;
extern PropertyRNA &rna_MovieClipStrip_multiply_alpha;
extern PropertyRNA &rna_MovieClipStrip_color_saturation;
extern PropertyRNA &rna_MovieClipStrip_strobe;
extern PropertyRNA &rna_MovieClipStrip_transform;
extern PropertyRNA &rna_MovieClipStrip_crop;
extern PropertyRNA &rna_MovieClipStrip_animation_offset_start;
extern PropertyRNA &rna_MovieClipStrip_content_trim_start;
extern PropertyRNA &rna_MovieClipStrip_animation_offset_end;
extern PropertyRNA &rna_MovieClipStrip_content_trim_end;
extern PropertyRNA &rna_MovieClipStrip_fps;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_MaskStrip_mask;
extern PropertyRNA &rna_MaskStrip_use_deinterlace;
extern PropertyRNA &rna_MaskStrip_alpha_mode;
extern PropertyRNA &rna_MaskStrip_use_flip_x;
extern PropertyRNA &rna_MaskStrip_use_flip_y;
extern PropertyRNA &rna_MaskStrip_use_float;
extern PropertyRNA &rna_MaskStrip_use_reverse_frames;
extern PropertyRNA &rna_MaskStrip_color_multiply;
extern PropertyRNA &rna_MaskStrip_multiply_alpha;
extern PropertyRNA &rna_MaskStrip_color_saturation;
extern PropertyRNA &rna_MaskStrip_strobe;
extern PropertyRNA &rna_MaskStrip_transform;
extern PropertyRNA &rna_MaskStrip_crop;
extern PropertyRNA &rna_MaskStrip_animation_offset_start;
extern PropertyRNA &rna_MaskStrip_content_trim_start;
extern PropertyRNA &rna_MaskStrip_animation_offset_end;
extern PropertyRNA &rna_MaskStrip_content_trim_end;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_SoundStrip_sound;
extern PropertyRNA &rna_SoundStrip_volume;
extern PropertyRNA &rna_SoundStrip_pan;
extern PropertyRNA &rna_SoundStrip_sound_offset;
extern PropertyRNA &rna_SoundStrip_show_waveform;
extern PropertyRNA &rna_SoundStrip_pitch_correction;
extern PropertyRNA &rna_SoundStrip_retiming_keys;
extern PropertyRNA &rna_SoundStrip_animation_offset_start;
extern PropertyRNA &rna_SoundStrip_content_trim_start;
extern PropertyRNA &rna_SoundStrip_animation_offset_end;
extern PropertyRNA &rna_SoundStrip_content_trim_end;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_AddStrip_input_count;
extern PropertyRNA &rna_AddStrip_input_1;
extern PropertyRNA &rna_AddStrip_input_2;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_AdjustmentStrip_input_count;
extern PropertyRNA &rna_AdjustmentStrip_animation_offset_start;
extern PropertyRNA &rna_AdjustmentStrip_content_trim_start;
extern PropertyRNA &rna_AdjustmentStrip_animation_offset_end;
extern PropertyRNA &rna_AdjustmentStrip_content_trim_end;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_AlphaOverStrip_input_count;
extern PropertyRNA &rna_AlphaOverStrip_input_1;
extern PropertyRNA &rna_AlphaOverStrip_input_2;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_AlphaUnderStrip_input_count;
extern PropertyRNA &rna_AlphaUnderStrip_input_1;
extern PropertyRNA &rna_AlphaUnderStrip_input_2;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_ColorStrip_input_count;
extern PropertyRNA &rna_ColorStrip_color;
extern PropertyRNA &rna_ColorStrip_width;
extern PropertyRNA &rna_ColorStrip_height;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_CrossStrip_input_count;
extern PropertyRNA &rna_CrossStrip_input_1;
extern PropertyRNA &rna_CrossStrip_input_2;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_GammaCrossStrip_input_count;
extern PropertyRNA &rna_GammaCrossStrip_input_1;
extern PropertyRNA &rna_GammaCrossStrip_input_2;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_CompositorStrip_input_count;
extern PropertyRNA &rna_CompositorStrip_input_1;
extern PropertyRNA &rna_CompositorStrip_input_2;
extern PropertyRNA &rna_CompositorStrip_node_group;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_GlowStrip_input_count;
extern PropertyRNA &rna_GlowStrip_input_1;
extern PropertyRNA &rna_GlowStrip_threshold;
extern PropertyRNA &rna_GlowStrip_clamp;
extern PropertyRNA &rna_GlowStrip_boost_factor;
extern PropertyRNA &rna_GlowStrip_blur_radius;
extern PropertyRNA &rna_GlowStrip_quality;
extern PropertyRNA &rna_GlowStrip_use_only_boost;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_MulticamStrip_input_count;
extern PropertyRNA &rna_MulticamStrip_multicam_source;
extern PropertyRNA &rna_MulticamStrip_animation_offset_start;
extern PropertyRNA &rna_MulticamStrip_content_trim_start;
extern PropertyRNA &rna_MulticamStrip_animation_offset_end;
extern PropertyRNA &rna_MulticamStrip_content_trim_end;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_MultiplyStrip_input_count;
extern PropertyRNA &rna_MultiplyStrip_input_1;
extern PropertyRNA &rna_MultiplyStrip_input_2;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_SpeedControlStrip_input_count;
extern PropertyRNA &rna_SpeedControlStrip_input_1;
extern PropertyRNA &rna_SpeedControlStrip_speed_control;
extern PropertyRNA &rna_SpeedControlStrip_speed_factor;
extern PropertyRNA &rna_SpeedControlStrip_speed_frame_number;
extern PropertyRNA &rna_SpeedControlStrip_speed_length;
extern PropertyRNA &rna_SpeedControlStrip_use_frame_interpolate;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_SubtractStrip_input_count;
extern PropertyRNA &rna_SubtractStrip_input_1;
extern PropertyRNA &rna_SubtractStrip_input_2;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_WipeStrip_input_count;
extern PropertyRNA &rna_WipeStrip_input_1;
extern PropertyRNA &rna_WipeStrip_input_2;
extern PropertyRNA &rna_WipeStrip_blur_width;
extern PropertyRNA &rna_WipeStrip_angle;
extern PropertyRNA &rna_WipeStrip_direction;
extern PropertyRNA &rna_WipeStrip_transition_type;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_GaussianBlurStrip_input_count;
extern PropertyRNA &rna_GaussianBlurStrip_input_1;
extern PropertyRNA &rna_GaussianBlurStrip_size_x;
extern PropertyRNA &rna_GaussianBlurStrip_size_y;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_TextStrip_input_count;
extern PropertyRNA &rna_TextStrip_font;
extern PropertyRNA &rna_TextStrip_font_size;
extern PropertyRNA &rna_TextStrip_space_line;
extern PropertyRNA &rna_TextStrip_abs_space_line;
extern PropertyRNA &rna_TextStrip_use_absolute_line_spacing;
extern PropertyRNA &rna_TextStrip_color;
extern PropertyRNA &rna_TextStrip_shadow_color;
extern PropertyRNA &rna_TextStrip_shadow_angle;
extern PropertyRNA &rna_TextStrip_shadow_offset;
extern PropertyRNA &rna_TextStrip_shadow_blur;
extern PropertyRNA &rna_TextStrip_outline_color;
extern PropertyRNA &rna_TextStrip_outline_width;
extern PropertyRNA &rna_TextStrip_box_color;
extern PropertyRNA &rna_TextStrip_location;
extern PropertyRNA &rna_TextStrip_wrap_width;
extern PropertyRNA &rna_TextStrip_box_margin;
extern PropertyRNA &rna_TextStrip_box_roundness;
extern PropertyRNA &rna_TextStrip_alignment_x;
extern PropertyRNA &rna_TextStrip_anchor_x;
extern PropertyRNA &rna_TextStrip_anchor_y;
extern PropertyRNA &rna_TextStrip_text;
extern PropertyRNA &rna_TextStrip_use_shadow;
extern PropertyRNA &rna_TextStrip_use_outline;
extern PropertyRNA &rna_TextStrip_use_box;
extern PropertyRNA &rna_TextStrip_use_bold;
extern PropertyRNA &rna_TextStrip_use_italic;
extern PropertyRNA &rna_TextStrip_textbox_state;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_EffectStrip_use_deinterlace;
extern PropertyRNA &rna_EffectStrip_alpha_mode;
extern PropertyRNA &rna_EffectStrip_use_flip_x;
extern PropertyRNA &rna_EffectStrip_use_flip_y;
extern PropertyRNA &rna_EffectStrip_use_float;
extern PropertyRNA &rna_EffectStrip_use_reverse_frames;
extern PropertyRNA &rna_EffectStrip_color_multiply;
extern PropertyRNA &rna_EffectStrip_multiply_alpha;
extern PropertyRNA &rna_EffectStrip_color_saturation;
extern PropertyRNA &rna_EffectStrip_strobe;
extern PropertyRNA &rna_EffectStrip_transform;
extern PropertyRNA &rna_EffectStrip_crop;
extern PropertyRNA &rna_EffectStrip_use_proxy;
extern PropertyRNA &rna_EffectStrip_proxy;

extern PropertyRNA &rna_Strip_rna_properties;
extern PropertyRNA &rna_Strip_rna_type;
extern PropertyRNA &rna_Strip_name;
extern PropertyRNA &rna_Strip_type;
extern PropertyRNA &rna_Strip_select;
extern PropertyRNA &rna_Strip_select_left_handle;
extern PropertyRNA &rna_Strip_select_right_handle;
extern PropertyRNA &rna_Strip_mute;
extern PropertyRNA &rna_Strip_lock;
extern PropertyRNA &rna_Strip_frame_final_duration;
extern PropertyRNA &rna_Strip_duration;
extern PropertyRNA &rna_Strip_frame_duration;
extern PropertyRNA &rna_Strip_content_duration;
extern PropertyRNA &rna_Strip_frame_start;
extern PropertyRNA &rna_Strip_content_start;
extern PropertyRNA &rna_Strip_content_end;
extern PropertyRNA &rna_Strip_frame_final_start;
extern PropertyRNA &rna_Strip_left_handle;
extern PropertyRNA &rna_Strip_frame_final_end;
extern PropertyRNA &rna_Strip_right_handle;
extern PropertyRNA &rna_Strip_frame_offset_start;
extern PropertyRNA &rna_Strip_left_handle_offset;
extern PropertyRNA &rna_Strip_frame_offset_end;
extern PropertyRNA &rna_Strip_right_handle_offset;
extern PropertyRNA &rna_Strip_channel;
extern PropertyRNA &rna_Strip_blend_type;
extern PropertyRNA &rna_Strip_blend_alpha;
extern PropertyRNA &rna_Strip_effect_fader;
extern PropertyRNA &rna_Strip_use_default_fade;
extern PropertyRNA &rna_Strip_color_tag;
extern PropertyRNA &rna_Strip_modifiers;
extern PropertyRNA &rna_Strip_show_retiming_keys;
extern PropertyRNA &rna_Strip_connections;

extern PropertyRNA &rna_ColorMixStrip_input_count;
extern PropertyRNA &rna_ColorMixStrip_input_1;
extern PropertyRNA &rna_ColorMixStrip_input_2;
extern PropertyRNA &rna_ColorMixStrip_blend_effect;
extern PropertyRNA &rna_ColorMixStrip_factor;

extern FunctionRNA *rna_Strip_bl_system_properties_get_func;
extern PropertyRNA &rna_Strip_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Strip_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Strip_strip_elem_from_frame_func;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_frame;
extern PropertyRNA &rna_Strip_strip_elem_from_frame_elem;

extern FunctionRNA *rna_Strip_swap_func;
extern PropertyRNA &rna_Strip_swap_other;

extern FunctionRNA *rna_Strip_move_to_meta_func;
extern PropertyRNA &rna_Strip_move_to_meta_meta_sequence;

extern FunctionRNA *rna_Strip_parent_meta_func;
extern PropertyRNA &rna_Strip_parent_meta_sequence;

extern FunctionRNA *rna_Strip_invalidate_cache_func;
extern PropertyRNA &rna_Strip_invalidate_cache_type;

extern FunctionRNA *rna_Strip_split_func;
extern PropertyRNA &rna_Strip_split_frame;
extern PropertyRNA &rna_Strip_split_split_method;
extern PropertyRNA &rna_Strip_split_ignore_connections;
extern PropertyRNA &rna_Strip_split_sequence;



extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;


extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;

extern PropertyRNA &rna_ColorBalanceModifier_color_balance;
extern PropertyRNA &rna_ColorBalanceModifier_color_multiply;
extern PropertyRNA &rna_ColorBalanceModifier_open_mask_input_panel;


extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;

extern PropertyRNA &rna_CurvesModifier_curve_mapping;
extern PropertyRNA &rna_CurvesModifier_open_mask_input_panel;


extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;

extern PropertyRNA &rna_HueCorrectModifier_curve_mapping;
extern PropertyRNA &rna_HueCorrectModifier_open_mask_input_panel;


extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;


extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;

extern PropertyRNA &rna_BrightContrastModifier_bright;
extern PropertyRNA &rna_BrightContrastModifier_contrast;
extern PropertyRNA &rna_BrightContrastModifier_open_mask_input_panel;


extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;

extern PropertyRNA &rna_WhiteBalanceModifier_white_value;
extern PropertyRNA &rna_WhiteBalanceModifier_open_mask_input_panel;


extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;

extern PropertyRNA &rna_SequencerTonemapModifierData_tonemap_type;
extern PropertyRNA &rna_SequencerTonemapModifierData_key;
extern PropertyRNA &rna_SequencerTonemapModifierData_offset;
extern PropertyRNA &rna_SequencerTonemapModifierData_gamma;
extern PropertyRNA &rna_SequencerTonemapModifierData_intensity;
extern PropertyRNA &rna_SequencerTonemapModifierData_contrast;
extern PropertyRNA &rna_SequencerTonemapModifierData_adaptation;
extern PropertyRNA &rna_SequencerTonemapModifierData_correction;
extern PropertyRNA &rna_SequencerTonemapModifierData_open_mask_input_panel;


extern PropertyRNA &rna_SequencerCompositorModifierProperties_rna_properties;
extern PropertyRNA &rna_SequencerCompositorModifierProperties_rna_type;

extern FunctionRNA *rna_SequencerCompositorModifierProperties_bl_system_properties_get_func;
extern PropertyRNA &rna_SequencerCompositorModifierProperties_bl_system_properties_get_do_create;
extern PropertyRNA &rna_SequencerCompositorModifierProperties_bl_system_properties_get_system_properties;



extern PropertyRNA &rna_SequencerCompositorModifierPropertiesEmpty_rna_properties;
extern PropertyRNA &rna_SequencerCompositorModifierPropertiesEmpty_rna_type;

extern FunctionRNA *rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_func;
extern PropertyRNA &rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_do_create;
extern PropertyRNA &rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_system_properties;



extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;

extern PropertyRNA &rna_SequencerCompositorModifierData_node_group;
extern PropertyRNA &rna_SequencerCompositorModifierData_show_group_selector;
extern PropertyRNA &rna_SequencerCompositorModifierData_open_mask_input_panel;
extern PropertyRNA &rna_SequencerCompositorModifierData_properties;


extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;

extern PropertyRNA &rna_SoundEqualizerModifier_graphics;

extern FunctionRNA *rna_SoundEqualizerModifier_new_graphic_func;
extern PropertyRNA &rna_SoundEqualizerModifier_new_graphic_min_freq;
extern PropertyRNA &rna_SoundEqualizerModifier_new_graphic_max_freq;
extern PropertyRNA &rna_SoundEqualizerModifier_new_graphic_graphic_eqs;

extern FunctionRNA *rna_SoundEqualizerModifier_clear_soundeqs_func;


extern PropertyRNA &rna_EQCurveMappingData_rna_properties;
extern PropertyRNA &rna_EQCurveMappingData_rna_type;
extern PropertyRNA &rna_EQCurveMappingData_curve_mapping;


extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;

extern PropertyRNA &rna_PitchModifier_mode;
extern PropertyRNA &rna_PitchModifier_semitones;
extern PropertyRNA &rna_PitchModifier_cents;
extern PropertyRNA &rna_PitchModifier_ratio;
extern PropertyRNA &rna_PitchModifier_preserve_formant;
extern PropertyRNA &rna_PitchModifier_quality;


extern PropertyRNA &rna_StripModifier_rna_properties;
extern PropertyRNA &rna_StripModifier_rna_type;
extern PropertyRNA &rna_StripModifier_name;
extern PropertyRNA &rna_StripModifier_type;
extern PropertyRNA &rna_StripModifier_mute;
extern PropertyRNA &rna_StripModifier_enable;
extern PropertyRNA &rna_StripModifier_show_preview;
extern PropertyRNA &rna_StripModifier_show_expanded;
extern PropertyRNA &rna_StripModifier_input_mask_type;
extern PropertyRNA &rna_StripModifier_mask_time;
extern PropertyRNA &rna_StripModifier_input_mask_strip;
extern PropertyRNA &rna_StripModifier_input_mask_id;
extern PropertyRNA &rna_StripModifier_is_active;

extern PropertyRNA &rna_EchoModifier_delay;
extern PropertyRNA &rna_EchoModifier_feedback;
extern PropertyRNA &rna_EchoModifier_mix;


extern PropertyRNA &rna_RetimingKeys_rna_properties;
extern PropertyRNA &rna_RetimingKeys_rna_type;

extern FunctionRNA *rna_RetimingKeys_add_func;
extern PropertyRNA &rna_RetimingKeys_add_timeline_frame;
extern PropertyRNA &rna_RetimingKeys_add_retiming_key;

extern FunctionRNA *rna_RetimingKeys_reset_func;

static PointerRNA StripColorBalanceData_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StripColorBalanceData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StripColorBalanceData_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StripColorBalanceData_rna_properties_get(iter);
    }
}

void StripColorBalanceData_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StripColorBalanceData_rna_properties_get(iter);
    }
}

void StripColorBalanceData_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StripColorBalanceData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StripColorBalanceData_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int StripColorBalanceData_correction_method_get(PointerRNA *ptr)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    return (int)(data->method);
}

void StripColorBalanceData_correction_method_set(PointerRNA *ptr, int value)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    data->method = (std::remove_reference_t<decltype(data->method)>)value;
}

void StripColorBalanceData_lift_get(PointerRNA *ptr, float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->lift)[i]);
    }
}

void StripColorBalanceData_lift_set(PointerRNA *ptr, const float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->lift)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void StripColorBalanceData_gamma_get(PointerRNA *ptr, float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gamma)[i]);
    }
}

void StripColorBalanceData_gamma_set(PointerRNA *ptr, const float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->gamma)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void StripColorBalanceData_gain_get(PointerRNA *ptr, float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gain)[i]);
    }
}

void StripColorBalanceData_gain_set(PointerRNA *ptr, const float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->gain)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void StripColorBalanceData_slope_get(PointerRNA *ptr, float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->slope)[i]);
    }
}

void StripColorBalanceData_slope_set(PointerRNA *ptr, const float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->slope)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void StripColorBalanceData_offset_get(PointerRNA *ptr, float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->offset)[i]);
    }
}

void StripColorBalanceData_offset_set(PointerRNA *ptr, const float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->offset)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void StripColorBalanceData_power_get(PointerRNA *ptr, float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->power)[i]);
    }
}

void StripColorBalanceData_power_set(PointerRNA *ptr, const float values[3])
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->power)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

bool StripColorBalanceData_invert_lift_get(PointerRNA *ptr)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void StripColorBalanceData_invert_lift_set(PointerRNA *ptr, bool value)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool StripColorBalanceData_invert_gamma_get(PointerRNA *ptr)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void StripColorBalanceData_invert_gamma_set(PointerRNA *ptr, bool value)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool StripColorBalanceData_invert_gain_get(PointerRNA *ptr)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void StripColorBalanceData_invert_gain_set(PointerRNA *ptr, bool value)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool StripColorBalanceData_invert_slope_get(PointerRNA *ptr)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void StripColorBalanceData_invert_slope_set(PointerRNA *ptr, bool value)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool StripColorBalanceData_invert_offset_get(PointerRNA *ptr)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void StripColorBalanceData_invert_offset_set(PointerRNA *ptr, bool value)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool StripColorBalanceData_invert_power_get(PointerRNA *ptr)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void StripColorBalanceData_invert_power_set(PointerRNA *ptr, bool value)
{
    StripColorBalance *data = (StripColorBalance *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

static PointerRNA StripElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StripElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StripElement_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StripElement_rna_properties_get(iter);
    }
}

void StripElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StripElement_rna_properties_get(iter);
    }
}

void StripElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StripElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StripElement_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void StripElement_filename_get(PointerRNA *ptr, char *value)
{
    StripElem *data = (StripElem *)(ptr->data);
    BLI_assert(strlen(data->filename) < 256);
    strcpy(value, data->filename);
}

int StripElement_filename_length(PointerRNA *ptr)
{
    StripElem *data = (StripElem *)(ptr->data);
    return strlen(data->filename);
}

void StripElement_filename_set(PointerRNA *ptr, const char *value)
{
    StripElem *data = (StripElem *)(ptr->data);
    BLI_strncpy(data->filename, value, 256);
}

int StripElement_orig_width_get(PointerRNA *ptr)
{
    StripElem *data = (StripElem *)(ptr->data);
    return (int)(data->orig_width);
}

int StripElement_orig_height_get(PointerRNA *ptr)
{
    StripElem *data = (StripElem *)(ptr->data);
    return (int)(data->orig_height);
}

float StripElement_orig_fps_get(PointerRNA *ptr)
{
    StripElem *data = (StripElem *)(ptr->data);
    return (float)(data->orig_fps);
}

static PointerRNA RetimingKey_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RetimingKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RetimingKey_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RetimingKey_rna_properties_get(iter);
    }
}

void RetimingKey_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RetimingKey_rna_properties_get(iter);
    }
}

void RetimingKey_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RetimingKey_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RetimingKey_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int RetimingKey_timeline_frame_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_retiming_key_frame_get;
    return fn(ptr);
}

void RetimingKey_timeline_frame_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_retiming_key_frame_set;
    fn(ptr, value);
}

static PointerRNA StripProxy_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StripProxy_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StripProxy_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StripProxy_rna_properties_get(iter);
    }
}

void StripProxy_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StripProxy_rna_properties_get(iter);
    }
}

void StripProxy_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StripProxy_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StripProxy_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void StripProxy_directory_get(PointerRNA *ptr, char *value)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    BLI_assert(strlen(data->dirpath) < 768);
    strcpy(value, data->dirpath);
}

int StripProxy_directory_length(PointerRNA *ptr)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    return strlen(data->dirpath);
}

void StripProxy_directory_set(PointerRNA *ptr, const char *value)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    BLI_strncpy(data->dirpath, value, 768);
}

void StripProxy_filepath_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Strip_proxy_filepath_get;
    fn(ptr, value);
}

int StripProxy_filepath_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Strip_proxy_filepath_length;
    return fn(ptr);
}

void StripProxy_filepath_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Strip_proxy_filepath_set;
    fn(ptr, value);
}

bool StripProxy_use_overwrite_get(PointerRNA *ptr)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    return !((uint64_t(data->build_flags) & 1) != 0);
}

void StripProxy_use_overwrite_set(PointerRNA *ptr, bool value)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    if (!value) { data->build_flags = std::remove_reference_t<decltype(data->build_flags)>(uint64_t(data->build_flags) | 1); }
    else { data->build_flags = std::remove_reference_t<decltype(data->build_flags)>(uint64_t(data->build_flags) & ~uint64_t(1)); }
}

bool StripProxy_build_25_get(PointerRNA *ptr)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flags) & 1) != 0);
}

void StripProxy_build_25_set(PointerRNA *ptr, bool value)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    if (value) { data->build_size_flags = std::remove_reference_t<decltype(data->build_size_flags)>(uint64_t(data->build_size_flags) | 1); }
    else { data->build_size_flags = std::remove_reference_t<decltype(data->build_size_flags)>(uint64_t(data->build_size_flags) & ~uint64_t(1)); }
}

bool StripProxy_build_50_get(PointerRNA *ptr)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flags) & 2) != 0);
}

void StripProxy_build_50_set(PointerRNA *ptr, bool value)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    if (value) { data->build_size_flags = std::remove_reference_t<decltype(data->build_size_flags)>(uint64_t(data->build_size_flags) | 2); }
    else { data->build_size_flags = std::remove_reference_t<decltype(data->build_size_flags)>(uint64_t(data->build_size_flags) & ~uint64_t(2)); }
}

bool StripProxy_build_75_get(PointerRNA *ptr)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flags) & 4) != 0);
}

void StripProxy_build_75_set(PointerRNA *ptr, bool value)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    if (value) { data->build_size_flags = std::remove_reference_t<decltype(data->build_size_flags)>(uint64_t(data->build_size_flags) | 4); }
    else { data->build_size_flags = std::remove_reference_t<decltype(data->build_size_flags)>(uint64_t(data->build_size_flags) & ~uint64_t(4)); }
}

bool StripProxy_build_100_get(PointerRNA *ptr)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    return ((uint64_t(data->build_size_flags) & 8) != 0);
}

void StripProxy_build_100_set(PointerRNA *ptr, bool value)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    if (value) { data->build_size_flags = std::remove_reference_t<decltype(data->build_size_flags)>(uint64_t(data->build_size_flags) | 8); }
    else { data->build_size_flags = std::remove_reference_t<decltype(data->build_size_flags)>(uint64_t(data->build_size_flags) & ~uint64_t(8)); }
}

int StripProxy_quality_get(PointerRNA *ptr)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    return (int)(data->quality);
}

void StripProxy_quality_set(PointerRNA *ptr, int value)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    data->quality = (std::remove_reference_t<decltype(data->quality)>)std::clamp(value, 0, 32767);
}

bool StripProxy_use_proxy_custom_directory_get(PointerRNA *ptr)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    return ((uint64_t(data->storage) & 4) != 0);
}

void StripProxy_use_proxy_custom_directory_set(PointerRNA *ptr, bool value)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    if (value) { data->storage = std::remove_reference_t<decltype(data->storage)>(uint64_t(data->storage) | 4); }
    else { data->storage = std::remove_reference_t<decltype(data->storage)>(uint64_t(data->storage) & ~uint64_t(4)); }
}

bool StripProxy_use_proxy_custom_file_get(PointerRNA *ptr)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    return ((uint64_t(data->storage) & 2) != 0);
}

void StripProxy_use_proxy_custom_file_set(PointerRNA *ptr, bool value)
{
    StripProxy *data = (StripProxy *)(ptr->data);
    if (value) { data->storage = std::remove_reference_t<decltype(data->storage)>(uint64_t(data->storage) | 2); }
    else { data->storage = std::remove_reference_t<decltype(data->storage)>(uint64_t(data->storage) & ~uint64_t(2)); }
}

static PointerRNA StripCrop_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StripCrop_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StripCrop_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StripCrop_rna_properties_get(iter);
    }
}

void StripCrop_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StripCrop_rna_properties_get(iter);
    }
}

void StripCrop_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StripCrop_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StripCrop_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int StripCrop_max_y_get(PointerRNA *ptr)
{
    StripCrop *data = (StripCrop *)(ptr->data);
    return (int)(data->top);
}

void StripCrop_max_y_set(PointerRNA *ptr, int value)
{
    StripCrop *data = (StripCrop *)(ptr->data);
    data->top = (std::remove_reference_t<decltype(data->top)>)value;
}

int StripCrop_min_y_get(PointerRNA *ptr)
{
    StripCrop *data = (StripCrop *)(ptr->data);
    return (int)(data->bottom);
}

void StripCrop_min_y_set(PointerRNA *ptr, int value)
{
    StripCrop *data = (StripCrop *)(ptr->data);
    data->bottom = (std::remove_reference_t<decltype(data->bottom)>)value;
}

int StripCrop_min_x_get(PointerRNA *ptr)
{
    StripCrop *data = (StripCrop *)(ptr->data);
    return (int)(data->left);
}

void StripCrop_min_x_set(PointerRNA *ptr, int value)
{
    StripCrop *data = (StripCrop *)(ptr->data);
    data->left = (std::remove_reference_t<decltype(data->left)>)value;
}

int StripCrop_max_x_get(PointerRNA *ptr)
{
    StripCrop *data = (StripCrop *)(ptr->data);
    return (int)(data->right);
}

void StripCrop_max_x_set(PointerRNA *ptr, int value)
{
    StripCrop *data = (StripCrop *)(ptr->data);
    data->right = (std::remove_reference_t<decltype(data->right)>)value;
}

static PointerRNA StripTransform_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StripTransform_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StripTransform_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StripTransform_rna_properties_get(iter);
    }
}

void StripTransform_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StripTransform_rna_properties_get(iter);
    }
}

void StripTransform_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StripTransform_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StripTransform_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float StripTransform_scale_x_get(PointerRNA *ptr)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    return (float)(data->scale_x);
}

void StripTransform_scale_x_set(PointerRNA *ptr, float value)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    data->scale_x = (std::remove_reference_t<decltype(data->scale_x)>)std::clamp(value, 0.0f, FLT_MAX);
}

float StripTransform_scale_y_get(PointerRNA *ptr)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    return (float)(data->scale_y);
}

void StripTransform_scale_y_set(PointerRNA *ptr, float value)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    data->scale_y = (std::remove_reference_t<decltype(data->scale_y)>)std::clamp(value, 0.0f, FLT_MAX);
}

float StripTransform_offset_x_get(PointerRNA *ptr)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    return (float)(data->xofs);
}

void StripTransform_offset_x_set(PointerRNA *ptr, float value)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    data->xofs = (std::remove_reference_t<decltype(data->xofs)>)value;
}

float StripTransform_offset_y_get(PointerRNA *ptr)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    return (float)(data->yofs);
}

void StripTransform_offset_y_set(PointerRNA *ptr, float value)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    data->yofs = (std::remove_reference_t<decltype(data->yofs)>)value;
}

float StripTransform_rotation_get(PointerRNA *ptr)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    return (float)(data->rotation);
}

void StripTransform_rotation_set(PointerRNA *ptr, float value)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    data->rotation = (std::remove_reference_t<decltype(data->rotation)>)value;
}

void StripTransform_origin_get(PointerRNA *ptr, float values[2])
{
    StripTransform *data = (StripTransform *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->origin)[i]);
    }
}

void StripTransform_origin_set(PointerRNA *ptr, const float values[2])
{
    StripTransform *data = (StripTransform *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->origin)[i] = values[i];
    }
}

int StripTransform_filter_get(PointerRNA *ptr)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    return (int)(data->filter);
}

void StripTransform_filter_set(PointerRNA *ptr, int value)
{
    StripTransform *data = (StripTransform *)(ptr->data);
    data->filter = (std::remove_reference_t<decltype(data->filter)>)value;
}

static PointerRNA Strip_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Strip_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Strip_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Strip_rna_properties_get(iter);
    }
}

void Strip_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Strip_rna_properties_get(iter);
    }
}

void Strip_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Strip_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Strip_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Strip_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Strip_name_get;
    fn(ptr, value);
}

int Strip_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Strip_name_length;
    return fn(ptr);
}

void Strip_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Strip_name_set;
    fn(ptr, value);
}

int Strip_type_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->type);
}

bool Strip_select_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void Strip_select_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool Strip_select_left_handle_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void Strip_select_left_handle_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool Strip_select_right_handle_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void Strip_select_right_handle_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool Strip_mute_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void Strip_mute_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool Strip_lock_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Strip_lock_get;
    return fn(ptr);
}

void Strip_lock_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16384); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16384)); }
}

int Strip_frame_final_duration_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_duration_get;
    return fn(ptr);
}

void Strip_frame_final_duration_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_duration_set;
    fn(ptr, value);
}

int Strip_duration_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_duration_get;
    return fn(ptr);
}

void Strip_duration_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_duration_set;
    fn(ptr, value);
}

int Strip_frame_duration_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_content_duration_get;
    return fn(ptr);
}

int Strip_content_duration_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_content_duration_get;
    return fn(ptr);
}

float Strip_frame_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->start);
}

void Strip_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Strip_content_start_set;
    fn(ptr, value);
}

float Strip_content_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->start);
}

void Strip_content_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Strip_content_start_set;
    fn(ptr, value);
}

int Strip_content_end_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_content_end_get;
    return fn(ptr);
}

int Strip_frame_final_start_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_left_handle_get;
    return fn(ptr);
}

void Strip_frame_final_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_left_handle_set;
    fn(ptr, value);
}

int Strip_left_handle_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_left_handle_get;
    return fn(ptr);
}

void Strip_left_handle_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_left_handle_set;
    fn(ptr, value);
}

int Strip_frame_final_end_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_right_handle_get;
    return fn(ptr);
}

void Strip_frame_final_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_right_handle_set;
    fn(ptr, value);
}

int Strip_right_handle_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_right_handle_get;
    return fn(ptr);
}

void Strip_right_handle_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_right_handle_set;
    fn(ptr, value);
}

float Strip_frame_offset_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->startofs);
}

void Strip_frame_offset_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Strip_left_handle_offset_set;
    fn(ptr, value);
}

float Strip_left_handle_offset_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->startofs);
}

void Strip_left_handle_offset_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Strip_left_handle_offset_set;
    fn(ptr, value);
}

float Strip_frame_offset_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->endofs);
}

void Strip_frame_offset_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Strip_right_handle_offset_set;
    fn(ptr, value);
}

float Strip_right_handle_offset_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->endofs);
}

void Strip_right_handle_offset_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Strip_right_handle_offset_set;
    fn(ptr, value);
}

int Strip_channel_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->channel);
}

void Strip_channel_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_channel_set;
    fn(ptr, value);
}

int Strip_blend_type_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->blend_mode);
}

void Strip_blend_type_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->blend_mode = (std::remove_reference_t<decltype(data->blend_mode)>)value;
}

float Strip_blend_alpha_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Strip_opacity_get;
    return fn(ptr);
}

void Strip_blend_alpha_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Strip_opacity_set;
    fn(ptr, value);
}

float Strip_effect_fader_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->effect_fader);
}

void Strip_effect_fader_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->effect_fader = (std::remove_reference_t<decltype(data->effect_fader)>)std::clamp(value, 0.0f, 1.0f);
}

bool Strip_use_default_fade_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 4194304) != 0);
}

void Strip_use_default_fade_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4194304); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4194304)); }
}

int Strip_color_tag_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Strip_color_tag_get;
    return fn(ptr);
}

void Strip_color_tag_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Strip_color_tag_set;
    fn(ptr, value);
}

static PointerRNA Strip_modifiers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_StripModifier, rna_iterator_listbase_get(iter));
}

void Strip_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Strip_modifiers;

    rna_iterator_listbase_begin(iter, ptr, &data->modifiers, nullptr);

    if (iter->valid) {
        iter->ptr = Strip_modifiers_get(iter);
    }
}

void Strip_modifiers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Strip_modifiers_get(iter);
    }
}

void Strip_modifiers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Strip_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Strip_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Strip_modifiers_get(&iter); }
    }

    Strip_modifiers_end(&iter);

    return found;
}

int StripModifier_name_length(PointerRNA *);
void StripModifier_name_get(PointerRNA *, char *);

bool Strip_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Strip_modifiers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = StripModifier_name_length(&iter.ptr);
            if (namelen < 1024) {
                StripModifier_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                StripModifier_name_get(&iter.ptr, name);
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
        Strip_modifiers_next(&iter);
    }
    Strip_modifiers_end(&iter);

    return found;
}

bool Strip_show_retiming_keys_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 524288) != 0);
}

void Strip_show_retiming_keys_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 524288); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(524288)); }
}

static PointerRNA Strip_connections_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Strip_connections_get;
    return fn(iter);
}

void Strip_connections_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Strip_connections;

    rna_iterator_listbase_begin(iter, ptr, &data->connections, nullptr);

    if (iter->valid) {
        iter->ptr = Strip_connections_get(iter);
    }
}

void Strip_connections_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Strip_connections_get(iter);
    }
}

void Strip_connections_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Strip_connections_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Strip_connections_begin(&iter, ptr);

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
        if (found) { *r_ptr = Strip_connections_get(&iter); }
    }

    Strip_connections_end(&iter);

    return found;
}

int Strip_name_length(PointerRNA *);
void Strip_name_get(PointerRNA *, char *);

bool Strip_connections_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Strip_connections_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Strip_name_length(&iter.ptr);
            if (namelen < 1024) {
                Strip_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                Strip_name_get(&iter.ptr, name);
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
        Strip_connections_next(&iter);
    }
    Strip_connections_end(&iter);

    return found;
}

static PointerRNA StripModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StripModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StripModifiers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StripModifiers_rna_properties_get(iter);
    }
}

void StripModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StripModifiers_rna_properties_get(iter);
    }
}

void StripModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StripModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StripModifiers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA StripModifiers_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Strip_active_modifier_get;
    return fn(ptr);
}

void StripModifiers_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_active_modifier_set;
    fn(ptr, value, reports);
}

static PointerRNA SequenceEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void SequenceEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SequenceEditor_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SequenceEditor_rna_properties_get(iter);
    }
}

void SequenceEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SequenceEditor_rna_properties_get(iter);
    }
}

void SequenceEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SequenceEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA SequenceEditor_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA SequenceEditor_strips_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Strip, rna_iterator_listbase_get(iter));
}

void SequenceEditor_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SequenceEditor_strips;

    rna_iterator_listbase_begin(iter, ptr, &data->seqbase, nullptr);

    if (iter->valid) {
        iter->ptr = SequenceEditor_strips_get(iter);
    }
}

void SequenceEditor_strips_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SequenceEditor_strips_get(iter);
    }
}

void SequenceEditor_strips_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SequenceEditor_strips_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    SequenceEditor_strips_begin(&iter, ptr);

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
        if (found) { *r_ptr = SequenceEditor_strips_get(&iter); }
    }

    SequenceEditor_strips_end(&iter);

    return found;
}

int Strip_name_length(PointerRNA *);
void Strip_name_get(PointerRNA *, char *);

bool SequenceEditor_strips_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    SequenceEditor_strips_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Strip_name_length(&iter.ptr);
            if (namelen < 1024) {
                Strip_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                Strip_name_get(&iter.ptr, name);
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
        SequenceEditor_strips_next(&iter);
    }
    SequenceEditor_strips_end(&iter);

    return found;
}

static PointerRNA SequenceEditor_strips_all_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_SequenceEditor_strips_all_get;
    return fn(iter);
}

void SequenceEditor_strips_all_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SequenceEditor_strips_all;

    PropCollectionBeginFunc fn = rna_SequenceEditor_strips_all_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SequenceEditor_strips_all_get(iter);
    }
}

void SequenceEditor_strips_all_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_SequenceEditor_strips_all_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SequenceEditor_strips_all_get(iter);
    }
}

void SequenceEditor_strips_all_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_SequenceEditor_strips_all_end;
    fn(iter);
}

bool SequenceEditor_strips_all_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_SequenceEditor_strips_all_lookup_string;
    return fn(ptr, key, r_ptr);
}

static PointerRNA SequenceEditor_meta_stack_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_SequenceEditor_meta_stack_get;
    return fn(iter);
}

void SequenceEditor_meta_stack_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SequenceEditor_meta_stack;

    rna_iterator_listbase_begin(iter, ptr, &data->metastack, nullptr);

    if (iter->valid) {
        iter->ptr = SequenceEditor_meta_stack_get(iter);
    }
}

void SequenceEditor_meta_stack_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SequenceEditor_meta_stack_get(iter);
    }
}

void SequenceEditor_meta_stack_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SequenceEditor_meta_stack_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    SequenceEditor_meta_stack_begin(&iter, ptr);

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
        if (found) { *r_ptr = SequenceEditor_meta_stack_get(&iter); }
    }

    SequenceEditor_meta_stack_end(&iter);

    return found;
}

int Strip_name_length(PointerRNA *);
void Strip_name_get(PointerRNA *, char *);

bool SequenceEditor_meta_stack_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    SequenceEditor_meta_stack_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Strip_name_length(&iter.ptr);
            if (namelen < 1024) {
                Strip_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                Strip_name_get(&iter.ptr, name);
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
        SequenceEditor_meta_stack_next(&iter);
    }
    SequenceEditor_meta_stack_end(&iter);

    return found;
}

static PointerRNA SequenceEditor_channels_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_SequenceTimelineChannel, rna_iterator_listbase_get(iter));
}

void SequenceEditor_channels_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SequenceEditor_channels;

    rna_iterator_listbase_begin(iter, ptr, &data->channels, nullptr);

    if (iter->valid) {
        iter->ptr = SequenceEditor_channels_get(iter);
    }
}

void SequenceEditor_channels_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SequenceEditor_channels_get(iter);
    }
}

void SequenceEditor_channels_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SequenceEditor_channels_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    SequenceEditor_channels_begin(&iter, ptr);

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
        if (found) { *r_ptr = SequenceEditor_channels_get(&iter); }
    }

    SequenceEditor_channels_end(&iter);

    return found;
}

int SequenceTimelineChannel_name_length(PointerRNA *);
void SequenceTimelineChannel_name_get(PointerRNA *, char *);

bool SequenceEditor_channels_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    SequenceEditor_channels_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = SequenceTimelineChannel_name_length(&iter.ptr);
            if (namelen < 1024) {
                SequenceTimelineChannel_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                SequenceTimelineChannel_name_get(&iter.ptr, name);
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
        SequenceEditor_channels_next(&iter);
    }
    SequenceEditor_channels_end(&iter);

    return found;
}

PointerRNA SequenceEditor_active_strip_get(PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->act_strip);
}

void SequenceEditor_active_strip_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Editing *data = (Editing *)(ptr->data);
    *(void **)&data->act_strip = value.data;
}

bool SequenceEditor_selected_retiming_keys_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SequenceEditor_selected_retiming_key_get;
    return fn(ptr);
}

bool SequenceEditor_show_overlay_frame_get(PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);
    return ((uint64_t(data->overlay_frame_flag) & 1) != 0);
}

void SequenceEditor_show_overlay_frame_set(PointerRNA *ptr, bool value)
{
    Editing *data = (Editing *)(ptr->data);
    if (value) { data->overlay_frame_flag = std::remove_reference_t<decltype(data->overlay_frame_flag)>(uint64_t(data->overlay_frame_flag) | 1); }
    else { data->overlay_frame_flag = std::remove_reference_t<decltype(data->overlay_frame_flag)>(uint64_t(data->overlay_frame_flag) & ~uint64_t(1)); }
}

bool SequenceEditor_use_overlay_frame_lock_get(PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);
    return ((uint64_t(data->overlay_frame_flag) & 2) != 0);
}

void SequenceEditor_use_overlay_frame_lock_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SequenceEditor_overlay_lock_set;
    fn(ptr, value);
}

bool SequenceEditor_show_missing_media_get(PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);
    return ((uint64_t(data->show_missing_media_flag) & 1) != 0);
}

void SequenceEditor_show_missing_media_set(PointerRNA *ptr, bool value)
{
    Editing *data = (Editing *)(ptr->data);
    if (value) { data->show_missing_media_flag = std::remove_reference_t<decltype(data->show_missing_media_flag)>(uint64_t(data->show_missing_media_flag) | 1); }
    else { data->show_missing_media_flag = std::remove_reference_t<decltype(data->show_missing_media_flag)>(uint64_t(data->show_missing_media_flag) & ~uint64_t(1)); }
}

int SequenceEditor_overlay_frame_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_SequenceEditor_overlay_frame_get;
    return fn(ptr);
}

void SequenceEditor_overlay_frame_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_SequenceEditor_overlay_frame_set;
    fn(ptr, value);
}

int SequenceEditor_proxy_storage_get(PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);
    return (int)(data->proxy_storage);
}

void SequenceEditor_proxy_storage_set(PointerRNA *ptr, int value)
{
    Editing *data = (Editing *)(ptr->data);
    data->proxy_storage = (std::remove_reference_t<decltype(data->proxy_storage)>)value;
}

void SequenceEditor_proxy_dir_get(PointerRNA *ptr, char *value)
{
    Editing *data = (Editing *)(ptr->data);
    BLI_assert(strlen(data->proxy_dir) < 1024);
    strcpy(value, data->proxy_dir);
}

int SequenceEditor_proxy_dir_length(PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);
    return strlen(data->proxy_dir);
}

void SequenceEditor_proxy_dir_set(PointerRNA *ptr, const char *value)
{
    Editing *data = (Editing *)(ptr->data);
    BLI_strncpy(data->proxy_dir, value, 1024);
}

bool SequenceEditor_use_cache_raw_get(PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 1) != 0);
}

void SequenceEditor_use_cache_raw_set(PointerRNA *ptr, bool value)
{
    Editing *data = (Editing *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 1); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(1)); }
}

bool SequenceEditor_use_cache_final_get(PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 8) != 0);
}

void SequenceEditor_use_cache_final_set(PointerRNA *ptr, bool value)
{
    Editing *data = (Editing *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 8); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(8)); }
}

bool SequenceEditor_use_prefetch_get(PointerRNA *ptr)
{
    Editing *data = (Editing *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 1024) != 0);
}

void SequenceEditor_use_prefetch_set(PointerRNA *ptr, bool value)
{
    Editing *data = (Editing *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 1024); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(1024)); }
}

int SequenceEditor_cache_raw_size_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_SequenceEditor_get_cache_raw_size;
    return fn(ptr);
}

int SequenceEditor_cache_final_size_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_SequenceEditor_get_cache_final_size;
    return fn(ptr);
}

static PointerRNA StripsTopLevel_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StripsTopLevel_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StripsTopLevel_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StripsTopLevel_rna_properties_get(iter);
    }
}

void StripsTopLevel_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StripsTopLevel_rna_properties_get(iter);
    }
}

void StripsTopLevel_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StripsTopLevel_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StripsTopLevel_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA SequenceTimelineChannel_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void SequenceTimelineChannel_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SequenceTimelineChannel_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SequenceTimelineChannel_rna_properties_get(iter);
    }
}

void SequenceTimelineChannel_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SequenceTimelineChannel_rna_properties_get(iter);
    }
}

void SequenceTimelineChannel_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SequenceTimelineChannel_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA SequenceTimelineChannel_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void SequenceTimelineChannel_name_get(PointerRNA *ptr, char *value)
{
    SeqTimelineChannel *data = (SeqTimelineChannel *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int SequenceTimelineChannel_name_length(PointerRNA *ptr)
{
    SeqTimelineChannel *data = (SeqTimelineChannel *)(ptr->data);
    return strlen(data->name);
}

void SequenceTimelineChannel_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_SequenceTimelineChannel_name_set;
    fn(ptr, value);
}

int SequenceTimelineChannel_number_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_SequenceTimelineChannel_number_get;
    return fn(ptr);
}

bool SequenceTimelineChannel_lock_get(PointerRNA *ptr)
{
    SeqTimelineChannel *data = (SeqTimelineChannel *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void SequenceTimelineChannel_lock_set(PointerRNA *ptr, bool value)
{
    SeqTimelineChannel *data = (SeqTimelineChannel *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool SequenceTimelineChannel_mute_get(PointerRNA *ptr)
{
    SeqTimelineChannel *data = (SeqTimelineChannel *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void SequenceTimelineChannel_mute_set(PointerRNA *ptr, bool value)
{
    SeqTimelineChannel *data = (SeqTimelineChannel *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

void ImageStrip_directory_get(PointerRNA *ptr, char *value)
{
    Strip *data = (Strip *)(ptr->data);
    BLI_assert(strlen(data->data->dirpath) < 768);
    strcpy(value, data->data->dirpath);
}

int ImageStrip_directory_length(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return strlen(data->data->dirpath);
}

void ImageStrip_directory_set(PointerRNA *ptr, const char *value)
{
    Strip *data = (Strip *)(ptr->data);
    BLI_strncpy(data->data->dirpath, value, 768);
}

int ImageStrip_elements_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Strip_elements_length;
    return fn(ptr);
}

static PointerRNA ImageStrip_elements_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_StripElement, rna_iterator_array_get(iter));
}

void ImageStrip_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ImageStrip_elements;

    PropCollectionBeginFunc fn = rna_Strip_elements_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ImageStrip_elements_get(iter);
    }
}

void ImageStrip_elements_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ImageStrip_elements_get(iter);
    }
}

void ImageStrip_elements_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ImageStrip_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ImageStrip_elements_begin(&iter, ptr);

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
        if (found) { *r_ptr = ImageStrip_elements_get(&iter); }
    }

    ImageStrip_elements_end(&iter);

    return found;
}

int ImageStrip_retiming_keys_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Strip_retiming_keys_length;
    return fn(ptr);
}

static PointerRNA ImageStrip_retiming_keys_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_RetimingKey, rna_iterator_array_get(iter));
}

void ImageStrip_retiming_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ImageStrip_retiming_keys;

    PropCollectionBeginFunc fn = rna_Strip_retiming_keys_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ImageStrip_retiming_keys_get(iter);
    }
}

void ImageStrip_retiming_keys_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ImageStrip_retiming_keys_get(iter);
    }
}

void ImageStrip_retiming_keys_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ImageStrip_retiming_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ImageStrip_retiming_keys_begin(&iter, ptr);

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
        if (found) { *r_ptr = ImageStrip_retiming_keys_get(&iter); }
    }

    ImageStrip_retiming_keys_end(&iter);

    return found;
}

bool ImageStrip_use_multiview_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 536870912) != 0);
}

void ImageStrip_use_multiview_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 536870912); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(536870912)); }
}

int ImageStrip_views_format_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->views_format);
}

void ImageStrip_views_format_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->views_format = (std::remove_reference_t<decltype(data->views_format)>)value;
}

PointerRNA ImageStrip_stereo_3d_format_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Stereo3dFormat, data->stereo3d_format);
}

bool ImageStrip_use_deinterlace_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void ImageStrip_use_deinterlace_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int ImageStrip_alpha_mode_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->alpha_mode);
}

void ImageStrip_alpha_mode_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->alpha_mode = (std::remove_reference_t<decltype(data->alpha_mode)>)value;
}

bool ImageStrip_use_flip_x_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void ImageStrip_use_flip_x_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool ImageStrip_use_flip_y_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void ImageStrip_use_flip_y_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool ImageStrip_use_float_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void ImageStrip_use_float_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool ImageStrip_use_reverse_frames_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void ImageStrip_use_reverse_frames_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

float ImageStrip_color_multiply_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->mul);
}

void ImageStrip_color_multiply_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->mul = (std::remove_reference_t<decltype(data->mul)>)std::clamp(value, 0.0f, 20.0f);
}

bool ImageStrip_multiply_alpha_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2097152) != 0);
}

void ImageStrip_multiply_alpha_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2097152); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2097152)); }
}

float ImageStrip_color_saturation_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->sat);
}

void ImageStrip_color_saturation_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->sat = (std::remove_reference_t<decltype(data->sat)>)std::clamp(value, 0.0f, 20.0f);
}

float ImageStrip_strobe_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->strobe);
}

void ImageStrip_strobe_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->strobe = (std::remove_reference_t<decltype(data->strobe)>)std::clamp(value, 1.0f, 30.0f);
}

PointerRNA ImageStrip_transform_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripTransform, data->data->transform);
}

PointerRNA ImageStrip_crop_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripCrop, data->data->crop);
}

bool ImageStrip_use_proxy_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 32768) != 0);
}

void ImageStrip_use_proxy_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Strip_use_proxy_set;
    fn(ptr, value);
}

PointerRNA ImageStrip_proxy_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripProxy, data->data->proxy);
}

int ImageStrip_animation_offset_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void ImageStrip_animation_offset_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int ImageStrip_content_trim_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void ImageStrip_content_trim_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int ImageStrip_animation_offset_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void ImageStrip_animation_offset_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int ImageStrip_content_trim_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void ImageStrip_content_trim_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

PointerRNA ImageStrip_colorspace_settings_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ColorManagedInputColorspaceSettings, &data->data->colorspace_settings);
}

static PointerRNA StripElements_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StripElements_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StripElements_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StripElements_rna_properties_get(iter);
    }
}

void StripElements_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StripElements_rna_properties_get(iter);
    }
}

void StripElements_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StripElements_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StripElements_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA MetaStrip_strips_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Strip, rna_iterator_listbase_get(iter));
}

void MetaStrip_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MetaStrip_strips;

    rna_iterator_listbase_begin(iter, ptr, &data->seqbase, nullptr);

    if (iter->valid) {
        iter->ptr = MetaStrip_strips_get(iter);
    }
}

void MetaStrip_strips_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MetaStrip_strips_get(iter);
    }
}

void MetaStrip_strips_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MetaStrip_strips_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MetaStrip_strips_begin(&iter, ptr);

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
        if (found) { *r_ptr = MetaStrip_strips_get(&iter); }
    }

    MetaStrip_strips_end(&iter);

    return found;
}

int Strip_name_length(PointerRNA *);
void Strip_name_get(PointerRNA *, char *);

bool MetaStrip_strips_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MetaStrip_strips_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Strip_name_length(&iter.ptr);
            if (namelen < 1024) {
                Strip_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                Strip_name_get(&iter.ptr, name);
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
        MetaStrip_strips_next(&iter);
    }
    MetaStrip_strips_end(&iter);

    return found;
}

static PointerRNA MetaStrip_channels_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_SequenceTimelineChannel, rna_iterator_listbase_get(iter));
}

void MetaStrip_channels_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MetaStrip_channels;

    rna_iterator_listbase_begin(iter, ptr, &data->channels, nullptr);

    if (iter->valid) {
        iter->ptr = MetaStrip_channels_get(iter);
    }
}

void MetaStrip_channels_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MetaStrip_channels_get(iter);
    }
}

void MetaStrip_channels_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MetaStrip_channels_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MetaStrip_channels_begin(&iter, ptr);

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
        if (found) { *r_ptr = MetaStrip_channels_get(&iter); }
    }

    MetaStrip_channels_end(&iter);

    return found;
}

int SequenceTimelineChannel_name_length(PointerRNA *);
void SequenceTimelineChannel_name_get(PointerRNA *, char *);

bool MetaStrip_channels_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MetaStrip_channels_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = SequenceTimelineChannel_name_length(&iter.ptr);
            if (namelen < 1024) {
                SequenceTimelineChannel_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                SequenceTimelineChannel_name_get(&iter.ptr, name);
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
        MetaStrip_channels_next(&iter);
    }
    MetaStrip_channels_end(&iter);

    return found;
}

float MetaStrip_volume_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->volume);
}

void MetaStrip_volume_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->volume = (std::remove_reference_t<decltype(data->volume)>)std::clamp(value, 0.0f, 100.0f);
}

bool MetaStrip_use_deinterlace_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void MetaStrip_use_deinterlace_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int MetaStrip_alpha_mode_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->alpha_mode);
}

void MetaStrip_alpha_mode_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->alpha_mode = (std::remove_reference_t<decltype(data->alpha_mode)>)value;
}

bool MetaStrip_use_flip_x_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void MetaStrip_use_flip_x_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool MetaStrip_use_flip_y_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void MetaStrip_use_flip_y_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool MetaStrip_use_float_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void MetaStrip_use_float_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool MetaStrip_use_reverse_frames_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void MetaStrip_use_reverse_frames_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

float MetaStrip_color_multiply_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->mul);
}

void MetaStrip_color_multiply_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->mul = (std::remove_reference_t<decltype(data->mul)>)std::clamp(value, 0.0f, 20.0f);
}

bool MetaStrip_multiply_alpha_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2097152) != 0);
}

void MetaStrip_multiply_alpha_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2097152); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2097152)); }
}

float MetaStrip_color_saturation_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->sat);
}

void MetaStrip_color_saturation_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->sat = (std::remove_reference_t<decltype(data->sat)>)std::clamp(value, 0.0f, 20.0f);
}

float MetaStrip_strobe_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->strobe);
}

void MetaStrip_strobe_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->strobe = (std::remove_reference_t<decltype(data->strobe)>)std::clamp(value, 1.0f, 30.0f);
}

PointerRNA MetaStrip_transform_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripTransform, data->data->transform);
}

PointerRNA MetaStrip_crop_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripCrop, data->data->crop);
}

bool MetaStrip_use_proxy_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 32768) != 0);
}

void MetaStrip_use_proxy_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Strip_use_proxy_set;
    fn(ptr, value);
}

PointerRNA MetaStrip_proxy_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripProxy, data->data->proxy);
}

int MetaStrip_animation_offset_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void MetaStrip_animation_offset_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int MetaStrip_content_trim_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void MetaStrip_content_trim_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int MetaStrip_animation_offset_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void MetaStrip_animation_offset_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int MetaStrip_content_trim_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void MetaStrip_content_trim_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

static PointerRNA StripsMeta_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StripsMeta_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StripsMeta_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StripsMeta_rna_properties_get(iter);
    }
}

void StripsMeta_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StripsMeta_rna_properties_get(iter);
    }
}

void StripsMeta_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StripsMeta_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StripsMeta_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA SceneStrip_scene_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Scene, data->scene);
}

void SceneStrip_scene_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_SceneStrip_scene_set;
    fn(ptr, value, reports);
}

PointerRNA SceneStrip_scene_camera_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->scene_camera);
}

void SceneStrip_scene_camera_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Strip *data = (Strip *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->scene_camera = value.data;
}

PointerRNA SceneStrip_view_layer_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_SceneStrip_view_layer_get;
    return fn(ptr);
}

void SceneStrip_view_layer_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_SceneStrip_view_layer_set;
    fn(ptr, value, reports);
}

int SceneStrip_scene_input_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (uint64_t(data->flag) & 1073741824);
}

void SceneStrip_scene_input_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1073741824));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

bool SceneStrip_use_annotations_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return !((uint64_t(data->flag) & 268435456) != 0);
}

void SceneStrip_use_annotations_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 268435456); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(268435456)); }
}

int SceneStrip_retiming_keys_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Strip_retiming_keys_length;
    return fn(ptr);
}

static PointerRNA SceneStrip_retiming_keys_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_RetimingKey, rna_iterator_array_get(iter));
}

void SceneStrip_retiming_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SceneStrip_retiming_keys;

    PropCollectionBeginFunc fn = rna_Strip_retiming_keys_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SceneStrip_retiming_keys_get(iter);
    }
}

void SceneStrip_retiming_keys_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SceneStrip_retiming_keys_get(iter);
    }
}

void SceneStrip_retiming_keys_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool SceneStrip_retiming_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    SceneStrip_retiming_keys_begin(&iter, ptr);

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
        if (found) { *r_ptr = SceneStrip_retiming_keys_get(&iter); }
    }

    SceneStrip_retiming_keys_end(&iter);

    return found;
}

float SceneStrip_volume_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->volume);
}

void SceneStrip_volume_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->volume = (std::remove_reference_t<decltype(data->volume)>)std::clamp(value, 0.0f, 100.0f);
}

bool SceneStrip_use_deinterlace_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void SceneStrip_use_deinterlace_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int SceneStrip_alpha_mode_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->alpha_mode);
}

void SceneStrip_alpha_mode_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->alpha_mode = (std::remove_reference_t<decltype(data->alpha_mode)>)value;
}

bool SceneStrip_use_flip_x_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void SceneStrip_use_flip_x_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool SceneStrip_use_flip_y_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void SceneStrip_use_flip_y_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool SceneStrip_use_float_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void SceneStrip_use_float_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool SceneStrip_use_reverse_frames_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void SceneStrip_use_reverse_frames_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

float SceneStrip_color_multiply_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->mul);
}

void SceneStrip_color_multiply_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->mul = (std::remove_reference_t<decltype(data->mul)>)std::clamp(value, 0.0f, 20.0f);
}

bool SceneStrip_multiply_alpha_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2097152) != 0);
}

void SceneStrip_multiply_alpha_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2097152); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2097152)); }
}

float SceneStrip_color_saturation_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->sat);
}

void SceneStrip_color_saturation_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->sat = (std::remove_reference_t<decltype(data->sat)>)std::clamp(value, 0.0f, 20.0f);
}

float SceneStrip_strobe_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->strobe);
}

void SceneStrip_strobe_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->strobe = (std::remove_reference_t<decltype(data->strobe)>)std::clamp(value, 1.0f, 30.0f);
}

PointerRNA SceneStrip_transform_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripTransform, data->data->transform);
}

PointerRNA SceneStrip_crop_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripCrop, data->data->crop);
}

bool SceneStrip_use_proxy_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 32768) != 0);
}

void SceneStrip_use_proxy_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Strip_use_proxy_set;
    fn(ptr, value);
}

PointerRNA SceneStrip_proxy_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripProxy, data->data->proxy);
}

int SceneStrip_animation_offset_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void SceneStrip_animation_offset_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int SceneStrip_content_trim_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void SceneStrip_content_trim_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int SceneStrip_animation_offset_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void SceneStrip_animation_offset_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int SceneStrip_content_trim_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void SceneStrip_content_trim_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

float SceneStrip_fps_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Strip_fps_get;
    return fn(ptr);
}

int MovieStrip_stream_index_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->streamindex);
}

void MovieStrip_stream_index_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->streamindex = (std::remove_reference_t<decltype(data->streamindex)>)std::clamp(value, 0, 20);
}

int MovieStrip_elements_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Strip_elements_length;
    return fn(ptr);
}

static PointerRNA MovieStrip_elements_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_StripElement, rna_iterator_array_get(iter));
}

void MovieStrip_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieStrip_elements;

    PropCollectionBeginFunc fn = rna_Strip_elements_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieStrip_elements_get(iter);
    }
}

void MovieStrip_elements_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieStrip_elements_get(iter);
    }
}

void MovieStrip_elements_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MovieStrip_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieStrip_elements_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieStrip_elements_get(&iter); }
    }

    MovieStrip_elements_end(&iter);

    return found;
}

int MovieStrip_retiming_keys_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Strip_retiming_keys_length;
    return fn(ptr);
}

static PointerRNA MovieStrip_retiming_keys_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_RetimingKey, rna_iterator_array_get(iter));
}

void MovieStrip_retiming_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MovieStrip_retiming_keys;

    PropCollectionBeginFunc fn = rna_Strip_retiming_keys_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieStrip_retiming_keys_get(iter);
    }
}

void MovieStrip_retiming_keys_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MovieStrip_retiming_keys_get(iter);
    }
}

void MovieStrip_retiming_keys_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MovieStrip_retiming_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MovieStrip_retiming_keys_begin(&iter, ptr);

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
        if (found) { *r_ptr = MovieStrip_retiming_keys_get(&iter); }
    }

    MovieStrip_retiming_keys_end(&iter);

    return found;
}

void MovieStrip_filepath_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Strip_filepath_get;
    fn(ptr, value);
}

int MovieStrip_filepath_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Strip_filepath_length;
    return fn(ptr);
}

void MovieStrip_filepath_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Strip_filepath_set;
    fn(ptr, value);
}

bool MovieStrip_use_multiview_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 536870912) != 0);
}

void MovieStrip_use_multiview_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 536870912); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(536870912)); }
}

int MovieStrip_views_format_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->views_format);
}

void MovieStrip_views_format_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->views_format = (std::remove_reference_t<decltype(data->views_format)>)value;
}

PointerRNA MovieStrip_stereo_3d_format_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Stereo3dFormat, data->stereo3d_format);
}

bool MovieStrip_use_deinterlace_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void MovieStrip_use_deinterlace_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int MovieStrip_alpha_mode_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->alpha_mode);
}

void MovieStrip_alpha_mode_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->alpha_mode = (std::remove_reference_t<decltype(data->alpha_mode)>)value;
}

bool MovieStrip_use_flip_x_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void MovieStrip_use_flip_x_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool MovieStrip_use_flip_y_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void MovieStrip_use_flip_y_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool MovieStrip_use_float_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void MovieStrip_use_float_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool MovieStrip_use_reverse_frames_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void MovieStrip_use_reverse_frames_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

float MovieStrip_color_multiply_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->mul);
}

void MovieStrip_color_multiply_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->mul = (std::remove_reference_t<decltype(data->mul)>)std::clamp(value, 0.0f, 20.0f);
}

bool MovieStrip_multiply_alpha_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2097152) != 0);
}

void MovieStrip_multiply_alpha_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2097152); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2097152)); }
}

float MovieStrip_color_saturation_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->sat);
}

void MovieStrip_color_saturation_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->sat = (std::remove_reference_t<decltype(data->sat)>)std::clamp(value, 0.0f, 20.0f);
}

float MovieStrip_strobe_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->strobe);
}

void MovieStrip_strobe_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->strobe = (std::remove_reference_t<decltype(data->strobe)>)std::clamp(value, 1.0f, 30.0f);
}

PointerRNA MovieStrip_transform_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripTransform, data->data->transform);
}

PointerRNA MovieStrip_crop_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripCrop, data->data->crop);
}

bool MovieStrip_use_proxy_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 32768) != 0);
}

void MovieStrip_use_proxy_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Strip_use_proxy_set;
    fn(ptr, value);
}

PointerRNA MovieStrip_proxy_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripProxy, data->data->proxy);
}

int MovieStrip_animation_offset_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void MovieStrip_animation_offset_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int MovieStrip_content_trim_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void MovieStrip_content_trim_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int MovieStrip_animation_offset_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void MovieStrip_animation_offset_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int MovieStrip_content_trim_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void MovieStrip_content_trim_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

PointerRNA MovieStrip_colorspace_settings_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ColorManagedInputColorspaceSettings, &data->data->colorspace_settings);
}

float MovieStrip_fps_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Strip_fps_get;
    return fn(ptr);
}

PointerRNA MovieClipStrip_clip_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MovieClip, data->clip);
}

void MovieClipStrip_clip_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Strip *data = (Strip *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->clip) {
        id_us_min((ID *)data->clip);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->clip = value.data;
}

bool MovieClipStrip_undistort_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->clip_flag) & 1) != 0);
}

void MovieClipStrip_undistort_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->clip_flag = std::remove_reference_t<decltype(data->clip_flag)>(uint64_t(data->clip_flag) | 1); }
    else { data->clip_flag = std::remove_reference_t<decltype(data->clip_flag)>(uint64_t(data->clip_flag) & ~uint64_t(1)); }
}

bool MovieClipStrip_stabilize2d_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->clip_flag) & 2) != 0);
}

void MovieClipStrip_stabilize2d_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->clip_flag = std::remove_reference_t<decltype(data->clip_flag)>(uint64_t(data->clip_flag) | 2); }
    else { data->clip_flag = std::remove_reference_t<decltype(data->clip_flag)>(uint64_t(data->clip_flag) & ~uint64_t(2)); }
}

bool MovieClipStrip_use_deinterlace_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void MovieClipStrip_use_deinterlace_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int MovieClipStrip_alpha_mode_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->alpha_mode);
}

void MovieClipStrip_alpha_mode_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->alpha_mode = (std::remove_reference_t<decltype(data->alpha_mode)>)value;
}

bool MovieClipStrip_use_flip_x_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void MovieClipStrip_use_flip_x_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool MovieClipStrip_use_flip_y_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void MovieClipStrip_use_flip_y_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool MovieClipStrip_use_float_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void MovieClipStrip_use_float_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool MovieClipStrip_use_reverse_frames_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void MovieClipStrip_use_reverse_frames_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

float MovieClipStrip_color_multiply_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->mul);
}

void MovieClipStrip_color_multiply_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->mul = (std::remove_reference_t<decltype(data->mul)>)std::clamp(value, 0.0f, 20.0f);
}

bool MovieClipStrip_multiply_alpha_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2097152) != 0);
}

void MovieClipStrip_multiply_alpha_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2097152); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2097152)); }
}

float MovieClipStrip_color_saturation_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->sat);
}

void MovieClipStrip_color_saturation_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->sat = (std::remove_reference_t<decltype(data->sat)>)std::clamp(value, 0.0f, 20.0f);
}

float MovieClipStrip_strobe_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->strobe);
}

void MovieClipStrip_strobe_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->strobe = (std::remove_reference_t<decltype(data->strobe)>)std::clamp(value, 1.0f, 30.0f);
}

PointerRNA MovieClipStrip_transform_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripTransform, data->data->transform);
}

PointerRNA MovieClipStrip_crop_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripCrop, data->data->crop);
}

int MovieClipStrip_animation_offset_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void MovieClipStrip_animation_offset_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int MovieClipStrip_content_trim_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void MovieClipStrip_content_trim_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int MovieClipStrip_animation_offset_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void MovieClipStrip_animation_offset_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int MovieClipStrip_content_trim_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void MovieClipStrip_content_trim_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

float MovieClipStrip_fps_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Strip_fps_get;
    return fn(ptr);
}

PointerRNA MaskStrip_mask_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Mask, data->mask);
}

void MaskStrip_mask_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Strip *data = (Strip *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->mask) {
        id_us_min((ID *)data->mask);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->mask = value.data;
}

bool MaskStrip_use_deinterlace_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void MaskStrip_use_deinterlace_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int MaskStrip_alpha_mode_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->alpha_mode);
}

void MaskStrip_alpha_mode_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->alpha_mode = (std::remove_reference_t<decltype(data->alpha_mode)>)value;
}

bool MaskStrip_use_flip_x_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void MaskStrip_use_flip_x_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool MaskStrip_use_flip_y_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void MaskStrip_use_flip_y_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool MaskStrip_use_float_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void MaskStrip_use_float_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool MaskStrip_use_reverse_frames_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void MaskStrip_use_reverse_frames_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

float MaskStrip_color_multiply_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->mul);
}

void MaskStrip_color_multiply_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->mul = (std::remove_reference_t<decltype(data->mul)>)std::clamp(value, 0.0f, 20.0f);
}

bool MaskStrip_multiply_alpha_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2097152) != 0);
}

void MaskStrip_multiply_alpha_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2097152); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2097152)); }
}

float MaskStrip_color_saturation_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->sat);
}

void MaskStrip_color_saturation_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->sat = (std::remove_reference_t<decltype(data->sat)>)std::clamp(value, 0.0f, 20.0f);
}

float MaskStrip_strobe_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->strobe);
}

void MaskStrip_strobe_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->strobe = (std::remove_reference_t<decltype(data->strobe)>)std::clamp(value, 1.0f, 30.0f);
}

PointerRNA MaskStrip_transform_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripTransform, data->data->transform);
}

PointerRNA MaskStrip_crop_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripCrop, data->data->crop);
}

int MaskStrip_animation_offset_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void MaskStrip_animation_offset_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int MaskStrip_content_trim_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void MaskStrip_content_trim_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int MaskStrip_animation_offset_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void MaskStrip_animation_offset_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int MaskStrip_content_trim_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void MaskStrip_content_trim_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

PointerRNA SoundStrip_sound_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Sound, data->sound);
}

void SoundStrip_sound_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Strip *data = (Strip *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->sound) {
        id_us_min((ID *)data->sound);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->sound = value.data;
}

float SoundStrip_volume_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->volume);
}

void SoundStrip_volume_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->volume = (std::remove_reference_t<decltype(data->volume)>)std::clamp(value, 0.0f, 100.0f);
}

float SoundStrip_pan_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->pan);
}

void SoundStrip_pan_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_Strip_pan_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->pan = (std::remove_reference_t<decltype(data->pan)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float SoundStrip_sound_offset_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->sound_offset);
}

void SoundStrip_sound_offset_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->sound_offset = (std::remove_reference_t<decltype(data->sound_offset)>)value;
}

bool SoundStrip_show_waveform_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 134217728) != 0);
}

void SoundStrip_show_waveform_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 134217728); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(134217728)); }
}

bool SoundStrip_pitch_correction_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2147483648LL) != 0);
}

void SoundStrip_pitch_correction_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2147483648LL); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2147483648LL)); }
}

int SoundStrip_retiming_keys_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Strip_retiming_keys_length;
    return fn(ptr);
}

static PointerRNA SoundStrip_retiming_keys_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_RetimingKey, rna_iterator_array_get(iter));
}

void SoundStrip_retiming_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SoundStrip_retiming_keys;

    PropCollectionBeginFunc fn = rna_Strip_retiming_keys_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SoundStrip_retiming_keys_get(iter);
    }
}

void SoundStrip_retiming_keys_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SoundStrip_retiming_keys_get(iter);
    }
}

void SoundStrip_retiming_keys_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool SoundStrip_retiming_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    SoundStrip_retiming_keys_begin(&iter, ptr);

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
        if (found) { *r_ptr = SoundStrip_retiming_keys_get(&iter); }
    }

    SoundStrip_retiming_keys_end(&iter);

    return found;
}

int SoundStrip_animation_offset_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void SoundStrip_animation_offset_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int SoundStrip_content_trim_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void SoundStrip_content_trim_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int SoundStrip_animation_offset_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void SoundStrip_animation_offset_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int SoundStrip_content_trim_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void SoundStrip_content_trim_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

bool EffectStrip_use_deinterlace_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void EffectStrip_use_deinterlace_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int EffectStrip_alpha_mode_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->alpha_mode);
}

void EffectStrip_alpha_mode_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->alpha_mode = (std::remove_reference_t<decltype(data->alpha_mode)>)value;
}

bool EffectStrip_use_flip_x_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void EffectStrip_use_flip_x_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool EffectStrip_use_flip_y_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void EffectStrip_use_flip_y_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool EffectStrip_use_float_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void EffectStrip_use_float_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool EffectStrip_use_reverse_frames_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void EffectStrip_use_reverse_frames_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

float EffectStrip_color_multiply_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->mul);
}

void EffectStrip_color_multiply_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->mul = (std::remove_reference_t<decltype(data->mul)>)std::clamp(value, 0.0f, 20.0f);
}

bool EffectStrip_multiply_alpha_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 2097152) != 0);
}

void EffectStrip_multiply_alpha_set(PointerRNA *ptr, bool value)
{
    Strip *data = (Strip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2097152); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2097152)); }
}

float EffectStrip_color_saturation_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->sat);
}

void EffectStrip_color_saturation_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->sat = (std::remove_reference_t<decltype(data->sat)>)std::clamp(value, 0.0f, 20.0f);
}

float EffectStrip_strobe_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (float)(data->strobe);
}

void EffectStrip_strobe_set(PointerRNA *ptr, float value)
{
    Strip *data = (Strip *)(ptr->data);
    data->strobe = (std::remove_reference_t<decltype(data->strobe)>)std::clamp(value, 1.0f, 30.0f);
}

PointerRNA EffectStrip_transform_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripTransform, data->data->transform);
}

PointerRNA EffectStrip_crop_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripCrop, data->data->crop);
}

bool EffectStrip_use_proxy_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return ((uint64_t(data->flag) & 32768) != 0);
}

void EffectStrip_use_proxy_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Strip_use_proxy_set;
    fn(ptr, value);
}

PointerRNA EffectStrip_proxy_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripProxy, data->data->proxy);
}

int AddStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA AddStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void AddStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

PointerRNA AddStrip_input_2_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input2);
}

void AddStrip_input_2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_2_set;
    fn(ptr, value, reports);
}

int AdjustmentStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

int AdjustmentStrip_animation_offset_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void AdjustmentStrip_animation_offset_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int AdjustmentStrip_content_trim_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void AdjustmentStrip_content_trim_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int AdjustmentStrip_animation_offset_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void AdjustmentStrip_animation_offset_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int AdjustmentStrip_content_trim_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void AdjustmentStrip_content_trim_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int AlphaOverStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA AlphaOverStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void AlphaOverStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

PointerRNA AlphaOverStrip_input_2_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input2);
}

void AlphaOverStrip_input_2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_2_set;
    fn(ptr, value, reports);
}

int AlphaUnderStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA AlphaUnderStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void AlphaUnderStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

PointerRNA AlphaUnderStrip_input_2_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input2);
}

void AlphaUnderStrip_input_2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_2_set;
    fn(ptr, value, reports);
}

int ColorStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

void ColorStrip_color_get(PointerRNA *ptr, float values[3])
{
    SolidColorVars *data = (SolidColorVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->col)[i]);
    }
}

void ColorStrip_color_set(PointerRNA *ptr, const float values[3])
{
    SolidColorVars *data = (SolidColorVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->col)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

int ColorStrip_width_get(PointerRNA *ptr)
{
    SolidColorVars *data = (SolidColorVars *)(((Strip *)ptr->data)->effectdata);
    return (int)(data->width);
}

void ColorStrip_width_set(PointerRNA *ptr, int value)
{
    SolidColorVars *data = (SolidColorVars *)(((Strip *)ptr->data)->effectdata);
    data->width = (std::remove_reference_t<decltype(data->width)>)std::clamp(value, 1, INT_MAX);
}

int ColorStrip_height_get(PointerRNA *ptr)
{
    SolidColorVars *data = (SolidColorVars *)(((Strip *)ptr->data)->effectdata);
    return (int)(data->height);
}

void ColorStrip_height_set(PointerRNA *ptr, int value)
{
    SolidColorVars *data = (SolidColorVars *)(((Strip *)ptr->data)->effectdata);
    data->height = (std::remove_reference_t<decltype(data->height)>)std::clamp(value, 1, INT_MAX);
}

int CrossStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA CrossStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void CrossStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

PointerRNA CrossStrip_input_2_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input2);
}

void CrossStrip_input_2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_2_set;
    fn(ptr, value, reports);
}

int GammaCrossStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA GammaCrossStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void GammaCrossStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

PointerRNA GammaCrossStrip_input_2_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input2);
}

void GammaCrossStrip_input_2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_2_set;
    fn(ptr, value, reports);
}

int CompositorStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA CompositorStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void CompositorStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

PointerRNA CompositorStrip_input_2_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input2);
}

void CompositorStrip_input_2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_2_set;
    fn(ptr, value, reports);
}

PointerRNA CompositorStrip_node_group_get(PointerRNA *ptr)
{
    CompositorEffectVars *data = (CompositorEffectVars *)(((Strip *)ptr->data)->effectdata);
    return RNA_pointer_create_with_parent(*ptr, RNA_NodeTree, data->node_group);
}

void CompositorStrip_node_group_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    CompositorEffectVars *data = (CompositorEffectVars *)(((Strip *)ptr->data)->effectdata);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->node_group) {
        id_us_min((ID *)data->node_group);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->node_group = value.data;
}

int GlowStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA GlowStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void GlowStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

float GlowStrip_threshold_get(PointerRNA *ptr)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->fMini);
}

void GlowStrip_threshold_set(PointerRNA *ptr, float value)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    data->fMini = (std::remove_reference_t<decltype(data->fMini)>)std::clamp(value, 0.0f, 1.0f);
}

float GlowStrip_clamp_get(PointerRNA *ptr)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->fClamp);
}

void GlowStrip_clamp_set(PointerRNA *ptr, float value)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    data->fClamp = (std::remove_reference_t<decltype(data->fClamp)>)std::clamp(value, 0.0f, 1.0f);
}

float GlowStrip_boost_factor_get(PointerRNA *ptr)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->fBoost);
}

void GlowStrip_boost_factor_set(PointerRNA *ptr, float value)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    data->fBoost = (std::remove_reference_t<decltype(data->fBoost)>)std::clamp(value, 0.0f, 10.0f);
}

float GlowStrip_blur_radius_get(PointerRNA *ptr)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->dDist);
}

void GlowStrip_blur_radius_set(PointerRNA *ptr, float value)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    data->dDist = (std::remove_reference_t<decltype(data->dDist)>)std::clamp(value, 0.5000000000f, 20.0f);
}

int GlowStrip_quality_get(PointerRNA *ptr)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    return (int)(data->dQuality);
}

void GlowStrip_quality_set(PointerRNA *ptr, int value)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    data->dQuality = (std::remove_reference_t<decltype(data->dQuality)>)std::clamp(value, 1, 5);
}

bool GlowStrip_use_only_boost_get(PointerRNA *ptr)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    return (bool)(data->bNoComp);
}

void GlowStrip_use_only_boost_set(PointerRNA *ptr, bool value)
{
    GlowVars *data = (GlowVars *)(((Strip *)ptr->data)->effectdata);
    data->bNoComp = (std::remove_reference_t<decltype(data->bNoComp)>)value;
}

int MulticamStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

int MulticamStrip_multicam_source_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->multicam_source);
}

void MulticamStrip_multicam_source_set(PointerRNA *ptr, int value)
{
    Strip *data = (Strip *)(ptr->data);
    data->multicam_source = (std::remove_reference_t<decltype(data->multicam_source)>)std::clamp(value, 0, 127);
}

int MulticamStrip_animation_offset_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void MulticamStrip_animation_offset_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int MulticamStrip_content_trim_start_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_startofs);
}

void MulticamStrip_content_trim_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_start_set;
    fn(ptr, value);
}

int MulticamStrip_animation_offset_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void MulticamStrip_animation_offset_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int MulticamStrip_content_trim_end_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return (int)(data->anim_endofs);
}

void MulticamStrip_content_trim_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Strip_content_trim_end_set;
    fn(ptr, value);
}

int MultiplyStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA MultiplyStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void MultiplyStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

PointerRNA MultiplyStrip_input_2_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input2);
}

void MultiplyStrip_input_2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_2_set;
    fn(ptr, value, reports);
}

int SpeedControlStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA SpeedControlStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void SpeedControlStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

int SpeedControlStrip_speed_control_get(PointerRNA *ptr)
{
    SpeedControlVars *data = (SpeedControlVars *)(((Strip *)ptr->data)->effectdata);
    return (int)(data->speed_control_type);
}

void SpeedControlStrip_speed_control_set(PointerRNA *ptr, int value)
{
    SpeedControlVars *data = (SpeedControlVars *)(((Strip *)ptr->data)->effectdata);
    data->speed_control_type = (std::remove_reference_t<decltype(data->speed_control_type)>)value;
}

float SpeedControlStrip_speed_factor_get(PointerRNA *ptr)
{
    SpeedControlVars *data = (SpeedControlVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->speed_fader);
}

void SpeedControlStrip_speed_factor_set(PointerRNA *ptr, float value)
{
    SpeedControlVars *data = (SpeedControlVars *)(((Strip *)ptr->data)->effectdata);
    data->speed_fader = (std::remove_reference_t<decltype(data->speed_fader)>)value;
}

float SpeedControlStrip_speed_frame_number_get(PointerRNA *ptr)
{
    SpeedControlVars *data = (SpeedControlVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->speed_fader_frame_number);
}

void SpeedControlStrip_speed_frame_number_set(PointerRNA *ptr, float value)
{
    SpeedControlVars *data = (SpeedControlVars *)(((Strip *)ptr->data)->effectdata);
    data->speed_fader_frame_number = (std::remove_reference_t<decltype(data->speed_fader_frame_number)>)value;
}

float SpeedControlStrip_speed_length_get(PointerRNA *ptr)
{
    SpeedControlVars *data = (SpeedControlVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->speed_fader_length);
}

void SpeedControlStrip_speed_length_set(PointerRNA *ptr, float value)
{
    SpeedControlVars *data = (SpeedControlVars *)(((Strip *)ptr->data)->effectdata);
    data->speed_fader_length = (std::remove_reference_t<decltype(data->speed_fader_length)>)value;
}

bool SpeedControlStrip_use_frame_interpolate_get(PointerRNA *ptr)
{
    SpeedControlVars *data = (SpeedControlVars *)(((Strip *)ptr->data)->effectdata);
    return ((uint64_t(data->flags) & 8) != 0);
}

void SpeedControlStrip_use_frame_interpolate_set(PointerRNA *ptr, bool value)
{
    SpeedControlVars *data = (SpeedControlVars *)(((Strip *)ptr->data)->effectdata);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

int SubtractStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA SubtractStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void SubtractStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

PointerRNA SubtractStrip_input_2_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input2);
}

void SubtractStrip_input_2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_2_set;
    fn(ptr, value, reports);
}

int WipeStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA WipeStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void WipeStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

PointerRNA WipeStrip_input_2_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input2);
}

void WipeStrip_input_2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_2_set;
    fn(ptr, value, reports);
}

float WipeStrip_blur_width_get(PointerRNA *ptr)
{
    WipeVars *data = (WipeVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->edgeWidth);
}

void WipeStrip_blur_width_set(PointerRNA *ptr, float value)
{
    WipeVars *data = (WipeVars *)(((Strip *)ptr->data)->effectdata);
    data->edgeWidth = (std::remove_reference_t<decltype(data->edgeWidth)>)std::clamp(value, 0.0f, 1.0f);
}

float WipeStrip_angle_get(PointerRNA *ptr)
{
    WipeVars *data = (WipeVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->angle);
}

void WipeStrip_angle_set(PointerRNA *ptr, float value)
{
    WipeVars *data = (WipeVars *)(((Strip *)ptr->data)->effectdata);
    data->angle = (std::remove_reference_t<decltype(data->angle)>)std::clamp(value, -1.5707963705f, 1.5707963705f);
}

int WipeStrip_direction_get(PointerRNA *ptr)
{
    WipeVars *data = (WipeVars *)(((Strip *)ptr->data)->effectdata);
    return (int)(data->forward);
}

void WipeStrip_direction_set(PointerRNA *ptr, int value)
{
    WipeVars *data = (WipeVars *)(((Strip *)ptr->data)->effectdata);
    data->forward = (std::remove_reference_t<decltype(data->forward)>)value;
}

int WipeStrip_transition_type_get(PointerRNA *ptr)
{
    WipeVars *data = (WipeVars *)(((Strip *)ptr->data)->effectdata);
    return (int)(data->wipetype);
}

void WipeStrip_transition_type_set(PointerRNA *ptr, int value)
{
    WipeVars *data = (WipeVars *)(((Strip *)ptr->data)->effectdata);
    data->wipetype = (std::remove_reference_t<decltype(data->wipetype)>)value;
}

int GaussianBlurStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA GaussianBlurStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void GaussianBlurStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

float GaussianBlurStrip_size_x_get(PointerRNA *ptr)
{
    GaussianBlurVars *data = (GaussianBlurVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->size_x);
}

void GaussianBlurStrip_size_x_set(PointerRNA *ptr, float value)
{
    GaussianBlurVars *data = (GaussianBlurVars *)(((Strip *)ptr->data)->effectdata);
    data->size_x = (std::remove_reference_t<decltype(data->size_x)>)std::clamp(value, 0.0f, FLT_MAX);
}

float GaussianBlurStrip_size_y_get(PointerRNA *ptr)
{
    GaussianBlurVars *data = (GaussianBlurVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->size_y);
}

void GaussianBlurStrip_size_y_set(PointerRNA *ptr, float value)
{
    GaussianBlurVars *data = (GaussianBlurVars *)(((Strip *)ptr->data)->effectdata);
    data->size_y = (std::remove_reference_t<decltype(data->size_y)>)std::clamp(value, 0.0f, FLT_MAX);
}

int TextStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA TextStrip_font_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return RNA_pointer_create_with_parent(*ptr, RNA_VectorFont, data->text_font);
}

void TextStrip_font_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_text_font_set;
    fn(ptr, value, reports);
}

float TextStrip_font_size_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->text_size);
}

void TextStrip_font_size_set(PointerRNA *ptr, float value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->text_size = (std::remove_reference_t<decltype(data->text_size)>)std::clamp(value, 0.0f, 2000.0f);
}

float TextStrip_space_line_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->space_line);
}

void TextStrip_space_line_set(PointerRNA *ptr, float value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->space_line = (std::remove_reference_t<decltype(data->space_line)>)std::clamp(value, 0.0f, 50.0f);
}

float TextStrip_abs_space_line_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->abs_space_line);
}

void TextStrip_abs_space_line_set(PointerRNA *ptr, float value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->abs_space_line = (std::remove_reference_t<decltype(data->abs_space_line)>)std::clamp(value, 0.0f, 5000.0f);
}

bool TextStrip_use_absolute_line_spacing_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return ((uint64_t(data->flag) & 32) != 0);
}

void TextStrip_use_absolute_line_spacing_set(PointerRNA *ptr, bool value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

void TextStrip_color_get(PointerRNA *ptr, float values[4])
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void TextStrip_color_set(PointerRNA *ptr, const float values[4])
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void TextStrip_shadow_color_get(PointerRNA *ptr, float values[4])
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->shadow_color)[i]);
    }
}

void TextStrip_shadow_color_set(PointerRNA *ptr, const float values[4])
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->shadow_color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float TextStrip_shadow_angle_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->shadow_angle);
}

void TextStrip_shadow_angle_set(PointerRNA *ptr, float value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->shadow_angle = (std::remove_reference_t<decltype(data->shadow_angle)>)std::clamp(value, 0.0f, 6.2831854820f);
}

float TextStrip_shadow_offset_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->shadow_offset);
}

void TextStrip_shadow_offset_set(PointerRNA *ptr, float value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->shadow_offset = (std::remove_reference_t<decltype(data->shadow_offset)>)std::clamp(value, 0.0f, 1.0f);
}

float TextStrip_shadow_blur_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->shadow_blur);
}

void TextStrip_shadow_blur_set(PointerRNA *ptr, float value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->shadow_blur = (std::remove_reference_t<decltype(data->shadow_blur)>)std::clamp(value, 0.0f, 1.0f);
}

void TextStrip_outline_color_get(PointerRNA *ptr, float values[4])
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->outline_color)[i]);
    }
}

void TextStrip_outline_color_set(PointerRNA *ptr, const float values[4])
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->outline_color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float TextStrip_outline_width_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->outline_width);
}

void TextStrip_outline_width_set(PointerRNA *ptr, float value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->outline_width = (std::remove_reference_t<decltype(data->outline_width)>)std::clamp(value, 0.0f, 1.0f);
}

void TextStrip_box_color_get(PointerRNA *ptr, float values[4])
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->box_color)[i]);
    }
}

void TextStrip_box_color_set(PointerRNA *ptr, const float values[4])
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->box_color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void TextStrip_location_get(PointerRNA *ptr, float values[2])
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->loc)[i]);
    }
}

void TextStrip_location_set(PointerRNA *ptr, const float values[2])
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->loc)[i] = values[i];
    }
}

float TextStrip_wrap_width_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->wrap_width);
}

void TextStrip_wrap_width_set(PointerRNA *ptr, float value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->wrap_width = (std::remove_reference_t<decltype(data->wrap_width)>)std::clamp(value, 0.0f, FLT_MAX);
}

float TextStrip_box_margin_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->box_margin);
}

void TextStrip_box_margin_set(PointerRNA *ptr, float value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->box_margin = (std::remove_reference_t<decltype(data->box_margin)>)std::clamp(value, 0.0f, 1.0f);
}

float TextStrip_box_roundness_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->box_roundness);
}

void TextStrip_box_roundness_set(PointerRNA *ptr, float value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->box_roundness = (std::remove_reference_t<decltype(data->box_roundness)>)std::clamp(value, 0.0f, 1.0f);
}

int TextStrip_alignment_x_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (int)(data->align);
}

void TextStrip_alignment_x_set(PointerRNA *ptr, int value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->align = (std::remove_reference_t<decltype(data->align)>)value;
}

int TextStrip_anchor_x_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (int)(data->anchor_x);
}

void TextStrip_anchor_x_set(PointerRNA *ptr, int value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->anchor_x = (std::remove_reference_t<decltype(data->anchor_x)>)value;
}

int TextStrip_anchor_y_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return (int)(data->anchor_y);
}

void TextStrip_anchor_y_set(PointerRNA *ptr, int value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    data->anchor_y = (std::remove_reference_t<decltype(data->anchor_y)>)value;
}

void TextStrip_text_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Strip_text_get;
    fn(ptr, value);
}

int TextStrip_text_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Strip_text_length;
    return fn(ptr);
}

void TextStrip_text_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Strip_text_set;
    fn(ptr, value);
}

bool TextStrip_use_shadow_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return ((uint64_t(data->flag) & 1) != 0);
}

void TextStrip_use_shadow_set(PointerRNA *ptr, bool value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool TextStrip_use_outline_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return ((uint64_t(data->flag) & 16) != 0);
}

void TextStrip_use_outline_set(PointerRNA *ptr, bool value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool TextStrip_use_box_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return ((uint64_t(data->flag) & 2) != 0);
}

void TextStrip_use_box_set(PointerRNA *ptr, bool value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool TextStrip_use_bold_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return ((uint64_t(data->flag) & 4) != 0);
}

void TextStrip_use_bold_set(PointerRNA *ptr, bool value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool TextStrip_use_italic_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return ((uint64_t(data->flag) & 8) != 0);
}

void TextStrip_use_italic_set(PointerRNA *ptr, bool value)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

PointerRNA TextStrip_textbox_state_get(PointerRNA *ptr)
{
    TextVars *data = (TextVars *)(((Strip *)ptr->data)->effectdata);
    return RNA_pointer_create_with_parent(*ptr, RNA_TextboxState, &data->textbox_state);
}

int ColorMixStrip_input_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Strip_input_count_get;
    return fn(ptr);
}

PointerRNA ColorMixStrip_input_1_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input1);
}

void ColorMixStrip_input_1_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_1_set;
    fn(ptr, value, reports);
}

PointerRNA ColorMixStrip_input_2_get(PointerRNA *ptr)
{
    Strip *data = (Strip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->input2);
}

void ColorMixStrip_input_2_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Strip_input_2_set;
    fn(ptr, value, reports);
}

int ColorMixStrip_blend_effect_get(PointerRNA *ptr)
{
    ColorMixVars *data = (ColorMixVars *)(((Strip *)ptr->data)->effectdata);
    return (int)(data->blend_effect);
}

void ColorMixStrip_blend_effect_set(PointerRNA *ptr, int value)
{
    ColorMixVars *data = (ColorMixVars *)(((Strip *)ptr->data)->effectdata);
    data->blend_effect = (std::remove_reference_t<decltype(data->blend_effect)>)value;
}

float ColorMixStrip_factor_get(PointerRNA *ptr)
{
    ColorMixVars *data = (ColorMixVars *)(((Strip *)ptr->data)->effectdata);
    return (float)(data->factor);
}

void ColorMixStrip_factor_set(PointerRNA *ptr, float value)
{
    ColorMixVars *data = (ColorMixVars *)(((Strip *)ptr->data)->effectdata);
    data->factor = (std::remove_reference_t<decltype(data->factor)>)std::clamp(value, 0.0f, 1.0f);
}

static PointerRNA StripModifier_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StripModifier_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StripModifier_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StripModifier_rna_properties_get(iter);
    }
}

void StripModifier_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StripModifier_rna_properties_get(iter);
    }
}

void StripModifier_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StripModifier_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StripModifier_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void StripModifier_name_get(PointerRNA *ptr, char *value)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int StripModifier_name_length(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return strlen(data->name);
}

void StripModifier_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_StripModifier_name_set;
    fn(ptr, value);
}

int StripModifier_type_get(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return (int)(data->type);
}

bool StripModifier_mute_get(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void StripModifier_mute_set(PointerRNA *ptr, bool value)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool StripModifier_enable_get(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void StripModifier_enable_set(PointerRNA *ptr, bool value)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool StripModifier_show_preview_get(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void StripModifier_show_preview_set(PointerRNA *ptr, bool value)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool StripModifier_show_expanded_get(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return ((uint64_t(data->layout_panel_open_flag) & 1) != 0);
}

void StripModifier_show_expanded_set(PointerRNA *ptr, bool value)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    if (value) { data->layout_panel_open_flag = std::remove_reference_t<decltype(data->layout_panel_open_flag)>(uint64_t(data->layout_panel_open_flag) | 1); }
    else { data->layout_panel_open_flag = std::remove_reference_t<decltype(data->layout_panel_open_flag)>(uint64_t(data->layout_panel_open_flag) & ~uint64_t(1)); }
}

int StripModifier_input_mask_type_get(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return (int)(data->mask_input_type);
}

void StripModifier_input_mask_type_set(PointerRNA *ptr, int value)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    data->mask_input_type = (std::remove_reference_t<decltype(data->mask_input_type)>)value;
}

int StripModifier_mask_time_get(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return (int)(data->mask_time);
}

void StripModifier_mask_time_set(PointerRNA *ptr, int value)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    data->mask_time = (std::remove_reference_t<decltype(data->mask_time)>)value;
}

PointerRNA StripModifier_input_mask_strip_get(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Strip, data->mask_strip);
}

void StripModifier_input_mask_strip_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_StripModifier_strip_set;
    fn(ptr, value, reports);
}

PointerRNA StripModifier_input_mask_id_get(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Mask, data->mask_id);
}

void StripModifier_input_mask_id_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->mask_id) {
        id_us_min((ID *)data->mask_id);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->mask_id = value.data;
}

bool StripModifier_is_active_get(PointerRNA *ptr)
{
    StripModifierData *data = (StripModifierData *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void StripModifier_is_active_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_StripModifier_is_active_set;
    fn(ptr, value);
}

PointerRNA ColorBalanceModifier_color_balance_get(PointerRNA *ptr)
{
    ColorBalanceModifierData *data = (ColorBalanceModifierData *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_StripColorBalanceData, &data->color_balance);
}

float ColorBalanceModifier_color_multiply_get(PointerRNA *ptr)
{
    ColorBalanceModifierData *data = (ColorBalanceModifierData *)(ptr->data);
    return (float)(data->color_multiply);
}

void ColorBalanceModifier_color_multiply_set(PointerRNA *ptr, float value)
{
    ColorBalanceModifierData *data = (ColorBalanceModifierData *)(ptr->data);
    data->color_multiply = (std::remove_reference_t<decltype(data->color_multiply)>)std::clamp(value, 0.0f, 20.0f);
}

bool ColorBalanceModifier_open_mask_input_panel_get(PointerRNA *ptr)
{
    ColorBalanceModifierData *data = (ColorBalanceModifierData *)(ptr->data);
    return ((uint64_t(data->modifier.layout_panel_open_flag) & 2) != 0);
}

void ColorBalanceModifier_open_mask_input_panel_set(PointerRNA *ptr, bool value)
{
    ColorBalanceModifierData *data = (ColorBalanceModifierData *)(ptr->data);
    if (value) { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) | 2); }
    else { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) & ~uint64_t(2)); }
}

PointerRNA CurvesModifier_curve_mapping_get(PointerRNA *ptr)
{
    CurvesModifierData *data = (CurvesModifierData *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, &data->curve_mapping);
}

bool CurvesModifier_open_mask_input_panel_get(PointerRNA *ptr)
{
    CurvesModifierData *data = (CurvesModifierData *)(ptr->data);
    return ((uint64_t(data->modifier.layout_panel_open_flag) & 2) != 0);
}

void CurvesModifier_open_mask_input_panel_set(PointerRNA *ptr, bool value)
{
    CurvesModifierData *data = (CurvesModifierData *)(ptr->data);
    if (value) { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) | 2); }
    else { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) & ~uint64_t(2)); }
}

PointerRNA HueCorrectModifier_curve_mapping_get(PointerRNA *ptr)
{
    HueCorrectModifierData *data = (HueCorrectModifierData *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, &data->curve_mapping);
}

bool HueCorrectModifier_open_mask_input_panel_get(PointerRNA *ptr)
{
    HueCorrectModifierData *data = (HueCorrectModifierData *)(ptr->data);
    return ((uint64_t(data->modifier.layout_panel_open_flag) & 2) != 0);
}

void HueCorrectModifier_open_mask_input_panel_set(PointerRNA *ptr, bool value)
{
    HueCorrectModifierData *data = (HueCorrectModifierData *)(ptr->data);
    if (value) { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) | 2); }
    else { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) & ~uint64_t(2)); }
}

float BrightContrastModifier_bright_get(PointerRNA *ptr)
{
    BrightContrastModifierData *data = (BrightContrastModifierData *)(ptr->data);
    return (float)(data->bright);
}

void BrightContrastModifier_bright_set(PointerRNA *ptr, float value)
{
    BrightContrastModifierData *data = (BrightContrastModifierData *)(ptr->data);
    data->bright = (std::remove_reference_t<decltype(data->bright)>)value;
}

float BrightContrastModifier_contrast_get(PointerRNA *ptr)
{
    BrightContrastModifierData *data = (BrightContrastModifierData *)(ptr->data);
    return (float)(data->contrast);
}

void BrightContrastModifier_contrast_set(PointerRNA *ptr, float value)
{
    BrightContrastModifierData *data = (BrightContrastModifierData *)(ptr->data);
    data->contrast = (std::remove_reference_t<decltype(data->contrast)>)std::clamp(value, -100.0f, 100.0f);
}

bool BrightContrastModifier_open_mask_input_panel_get(PointerRNA *ptr)
{
    BrightContrastModifierData *data = (BrightContrastModifierData *)(ptr->data);
    return ((uint64_t(data->modifier.layout_panel_open_flag) & 2) != 0);
}

void BrightContrastModifier_open_mask_input_panel_set(PointerRNA *ptr, bool value)
{
    BrightContrastModifierData *data = (BrightContrastModifierData *)(ptr->data);
    if (value) { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) | 2); }
    else { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) & ~uint64_t(2)); }
}

void WhiteBalanceModifier_white_value_get(PointerRNA *ptr, float values[3])
{
    WhiteBalanceModifierData *data = (WhiteBalanceModifierData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->white_value)[i]);
    }
}

void WhiteBalanceModifier_white_value_set(PointerRNA *ptr, const float values[3])
{
    WhiteBalanceModifierData *data = (WhiteBalanceModifierData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->white_value)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

bool WhiteBalanceModifier_open_mask_input_panel_get(PointerRNA *ptr)
{
    WhiteBalanceModifierData *data = (WhiteBalanceModifierData *)(ptr->data);
    return ((uint64_t(data->modifier.layout_panel_open_flag) & 2) != 0);
}

void WhiteBalanceModifier_open_mask_input_panel_set(PointerRNA *ptr, bool value)
{
    WhiteBalanceModifierData *data = (WhiteBalanceModifierData *)(ptr->data);
    if (value) { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) | 2); }
    else { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) & ~uint64_t(2)); }
}

int SequencerTonemapModifierData_tonemap_type_get(PointerRNA *ptr)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    return (int)(data->type);
}

void SequencerTonemapModifierData_tonemap_type_set(PointerRNA *ptr, int value)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

float SequencerTonemapModifierData_key_get(PointerRNA *ptr)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    return (float)(data->key);
}

void SequencerTonemapModifierData_key_set(PointerRNA *ptr, float value)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    data->key = (std::remove_reference_t<decltype(data->key)>)std::clamp(value, 0.0f, 1.0f);
}

float SequencerTonemapModifierData_offset_get(PointerRNA *ptr)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    return (float)(data->offset);
}

void SequencerTonemapModifierData_offset_set(PointerRNA *ptr, float value)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    data->offset = (std::remove_reference_t<decltype(data->offset)>)std::clamp(value, 0.0010000000f, 10.0f);
}

float SequencerTonemapModifierData_gamma_get(PointerRNA *ptr)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    return (float)(data->gamma);
}

void SequencerTonemapModifierData_gamma_set(PointerRNA *ptr, float value)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    data->gamma = (std::remove_reference_t<decltype(data->gamma)>)std::clamp(value, 0.0010000000f, 3.0f);
}

float SequencerTonemapModifierData_intensity_get(PointerRNA *ptr)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    return (float)(data->intensity);
}

void SequencerTonemapModifierData_intensity_set(PointerRNA *ptr, float value)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    data->intensity = (std::remove_reference_t<decltype(data->intensity)>)std::clamp(value, -8.0f, 8.0f);
}

float SequencerTonemapModifierData_contrast_get(PointerRNA *ptr)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    return (float)(data->contrast);
}

void SequencerTonemapModifierData_contrast_set(PointerRNA *ptr, float value)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    data->contrast = (std::remove_reference_t<decltype(data->contrast)>)std::clamp(value, 0.0f, 1.0f);
}

float SequencerTonemapModifierData_adaptation_get(PointerRNA *ptr)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    return (float)(data->adaptation);
}

void SequencerTonemapModifierData_adaptation_set(PointerRNA *ptr, float value)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    data->adaptation = (std::remove_reference_t<decltype(data->adaptation)>)std::clamp(value, 0.0f, 1.0f);
}

float SequencerTonemapModifierData_correction_get(PointerRNA *ptr)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    return (float)(data->correction);
}

void SequencerTonemapModifierData_correction_set(PointerRNA *ptr, float value)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    data->correction = (std::remove_reference_t<decltype(data->correction)>)std::clamp(value, 0.0f, 1.0f);
}

bool SequencerTonemapModifierData_open_mask_input_panel_get(PointerRNA *ptr)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    return ((uint64_t(data->modifier.layout_panel_open_flag) & 2) != 0);
}

void SequencerTonemapModifierData_open_mask_input_panel_set(PointerRNA *ptr, bool value)
{
    SequencerTonemapModifierData *data = (SequencerTonemapModifierData *)(ptr->data);
    if (value) { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) | 2); }
    else { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) & ~uint64_t(2)); }
}

static PointerRNA SequencerCompositorModifierProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void SequencerCompositorModifierProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SequencerCompositorModifierProperties_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SequencerCompositorModifierProperties_rna_properties_get(iter);
    }
}

void SequencerCompositorModifierProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SequencerCompositorModifierProperties_rna_properties_get(iter);
    }
}

void SequencerCompositorModifierProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SequencerCompositorModifierProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA SequencerCompositorModifierProperties_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA SequencerCompositorModifierPropertiesEmpty_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void SequencerCompositorModifierPropertiesEmpty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SequencerCompositorModifierPropertiesEmpty_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SequencerCompositorModifierPropertiesEmpty_rna_properties_get(iter);
    }
}

void SequencerCompositorModifierPropertiesEmpty_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SequencerCompositorModifierPropertiesEmpty_rna_properties_get(iter);
    }
}

void SequencerCompositorModifierPropertiesEmpty_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SequencerCompositorModifierPropertiesEmpty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA SequencerCompositorModifierPropertiesEmpty_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA SequencerCompositorModifierData_node_group_get(PointerRNA *ptr)
{
    SequencerCompositorModifierData *data = (SequencerCompositorModifierData *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_NodeTree, data->node_group);
}

void SequencerCompositorModifierData_node_group_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    SequencerCompositorModifierData *data = (SequencerCompositorModifierData *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->node_group) {
        id_us_min((ID *)data->node_group);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->node_group = value.data;
}

bool SequencerCompositorModifierData_show_group_selector_get(PointerRNA *ptr)
{
    SequencerCompositorModifierData *data = (SequencerCompositorModifierData *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void SequencerCompositorModifierData_show_group_selector_set(PointerRNA *ptr, bool value)
{
    SequencerCompositorModifierData *data = (SequencerCompositorModifierData *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool SequencerCompositorModifierData_open_mask_input_panel_get(PointerRNA *ptr)
{
    SequencerCompositorModifierData *data = (SequencerCompositorModifierData *)(ptr->data);
    return ((uint64_t(data->modifier.layout_panel_open_flag) & 2) != 0);
}

void SequencerCompositorModifierData_open_mask_input_panel_set(PointerRNA *ptr, bool value)
{
    SequencerCompositorModifierData *data = (SequencerCompositorModifierData *)(ptr->data);
    if (value) { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) | 2); }
    else { data->modifier.layout_panel_open_flag = std::remove_reference_t<decltype(data->modifier.layout_panel_open_flag)>(uint64_t(data->modifier.layout_panel_open_flag) & ~uint64_t(2)); }
}

PointerRNA SequencerCompositorModifierData_properties_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_SequencerCompositorModifierProperties_get;
    return fn(ptr);
}

static PointerRNA SoundEqualizerModifier_graphics_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_EQCurveMappingData, rna_iterator_listbase_get(iter));
}

void SoundEqualizerModifier_graphics_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    SoundEqualizerModifierData *data = (SoundEqualizerModifierData *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SoundEqualizerModifier_graphics;

    rna_iterator_listbase_begin(iter, ptr, &data->graphics, nullptr);

    if (iter->valid) {
        iter->ptr = SoundEqualizerModifier_graphics_get(iter);
    }
}

void SoundEqualizerModifier_graphics_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SoundEqualizerModifier_graphics_get(iter);
    }
}

void SoundEqualizerModifier_graphics_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SoundEqualizerModifier_graphics_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    SoundEqualizerModifier_graphics_begin(&iter, ptr);

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
        if (found) { *r_ptr = SoundEqualizerModifier_graphics_get(&iter); }
    }

    SoundEqualizerModifier_graphics_end(&iter);

    return found;
}

static PointerRNA EQCurveMappingData_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void EQCurveMappingData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_EQCurveMappingData_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = EQCurveMappingData_rna_properties_get(iter);
    }
}

void EQCurveMappingData_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = EQCurveMappingData_rna_properties_get(iter);
    }
}

void EQCurveMappingData_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool EQCurveMappingData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA EQCurveMappingData_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA EQCurveMappingData_curve_mapping_get(PointerRNA *ptr)
{
    EQCurveMappingData *data = (EQCurveMappingData *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, &data->curve_mapping);
}

int PitchModifier_mode_get(PointerRNA *ptr)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    return (int)(data->mode);
}

void PitchModifier_mode_set(PointerRNA *ptr, int value)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

int PitchModifier_semitones_get(PointerRNA *ptr)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    return (int)(data->semitones);
}

void PitchModifier_semitones_set(PointerRNA *ptr, int value)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    data->semitones = (std::remove_reference_t<decltype(data->semitones)>)std::clamp(value, -12, 12);
}

int PitchModifier_cents_get(PointerRNA *ptr)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    return (int)(data->cents);
}

void PitchModifier_cents_set(PointerRNA *ptr, int value)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    data->cents = (std::remove_reference_t<decltype(data->cents)>)std::clamp(value, -100, 100);
}

float PitchModifier_ratio_get(PointerRNA *ptr)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    return (float)(data->ratio);
}

void PitchModifier_ratio_set(PointerRNA *ptr, float value)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    data->ratio = (std::remove_reference_t<decltype(data->ratio)>)std::clamp(value, 0.5000000000f, 2.0f);
}

bool PitchModifier_preserve_formant_get(PointerRNA *ptr)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    return (bool)(data->preserve_formant);
}

void PitchModifier_preserve_formant_set(PointerRNA *ptr, bool value)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    data->preserve_formant = (std::remove_reference_t<decltype(data->preserve_formant)>)value;
}

int PitchModifier_quality_get(PointerRNA *ptr)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    return (int)(data->quality);
}

void PitchModifier_quality_set(PointerRNA *ptr, int value)
{
    PitchModifierData *data = (PitchModifierData *)(ptr->data);
    data->quality = (std::remove_reference_t<decltype(data->quality)>)value;
}

float EchoModifier_delay_get(PointerRNA *ptr)
{
    EchoModifierData *data = (EchoModifierData *)(ptr->data);
    return (float)(data->delay);
}

void EchoModifier_delay_set(PointerRNA *ptr, float value)
{
    EchoModifierData *data = (EchoModifierData *)(ptr->data);
    data->delay = (std::remove_reference_t<decltype(data->delay)>)std::clamp(value, 0.0500000007f, 5.0f);
}

float EchoModifier_feedback_get(PointerRNA *ptr)
{
    EchoModifierData *data = (EchoModifierData *)(ptr->data);
    return (float)(data->feedback);
}

void EchoModifier_feedback_set(PointerRNA *ptr, float value)
{
    EchoModifierData *data = (EchoModifierData *)(ptr->data);
    data->feedback = (std::remove_reference_t<decltype(data->feedback)>)std::clamp(value, 0.0f, 1.0f);
}

float EchoModifier_mix_get(PointerRNA *ptr)
{
    EchoModifierData *data = (EchoModifierData *)(ptr->data);
    return (float)(data->mix);
}

void EchoModifier_mix_set(PointerRNA *ptr, float value)
{
    EchoModifierData *data = (EchoModifierData *)(ptr->data);
    data->mix = (std::remove_reference_t<decltype(data->mix)>)std::clamp(value, 0.0f, 1.0f);
}

static PointerRNA RetimingKeys_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void RetimingKeys_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_RetimingKeys_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = RetimingKeys_rna_properties_get(iter);
    }
}

void RetimingKeys_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = RetimingKeys_rna_properties_get(iter);
    }
}

void RetimingKeys_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool RetimingKeys_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA RetimingKeys_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}



void RetimingKey_remove_func(ID *_selfid, SeqRetimingKey *_self)
{
	rna_Strip_retiming_key_remove(_selfid, _self);
}

static void RetimingKey_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	SeqRetimingKey *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (SeqRetimingKey *)_ptr->data;
	
	rna_Strip_retiming_key_remove(_selfid, _self);
}

/* Repeated prototypes to detect errors */

void rna_Strip_retiming_key_remove(ID *_selfid, SeqRetimingKey *_self);





IDPropertyGroup *Strip_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void Strip_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

StripElem *Strip_strip_elem_from_frame_func(ID *_selfid, Strip *_self, int frame)
{
	return rna_Strip_elem_from_frame(_selfid, _self, frame);
}

static void Strip_strip_elem_from_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	int frame;
	StripElem *elem;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	elem = rna_Strip_elem_from_frame(_selfid, _self, frame);
	*((StripElem **)_retdata) = elem;
}

void Strip_swap_func(ID *_selfid, Strip *_self, ReportList *reports, Strip *other)
{
	rna_Strip_swap_internal(_selfid, _self, reports, other);
}

static void Strip_swap_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	Strip *other;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	other = *((Strip **)_data);
	
	rna_Strip_swap_internal(_selfid, _self, reports, other);
}

void Strip_move_to_meta_func(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, Strip *meta_sequence)
{
	rna_Strips_move_strip_to_meta(_selfid, _self, bmain, reports, meta_sequence);
}

static void Strip_move_to_meta_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	Strip *meta_sequence;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	meta_sequence = *((Strip **)_data);
	
	rna_Strips_move_strip_to_meta(_selfid, _self, CTX_data_main(C), reports, meta_sequence);
}

Strip *Strip_parent_meta_func(ID *_selfid, Strip *_self)
{
	return rna_Strip_parent_meta(_selfid, _self);
}

static void Strip_parent_meta_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	sequence = rna_Strip_parent_meta(_selfid, _self);
	*((Strip **)_retdata) = sequence;
}

void Strip_invalidate_cache_func(ID *_selfid, Strip *_self, int type)
{
	rna_Strip_invalidate_cache_rnafunc(_selfid, _self, type);
}

static void Strip_invalidate_cache_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	int type;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	
	rna_Strip_invalidate_cache_rnafunc(_selfid, _self, type);
}

Strip *Strip_split_func(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, int frame, int split_method, bool ignore_connections)
{
	return rna_Strip_split(_selfid, _self, bmain, reports, frame, split_method, ignore_connections);
}

static void Strip_split_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	int frame;
	int split_method;
	bool ignore_connections;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	split_method = *((int *)_data);
	_data += 8;
	ignore_connections = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strip_split(_selfid, _self, CTX_data_main(C), reports, frame, split_method, ignore_connections);
	*((Strip **)_retdata) = sequence;
}

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);
StripElem *rna_Strip_elem_from_frame(ID *_selfid, Strip *_self, int frame);
void rna_Strip_swap_internal(ID *_selfid, Strip *_self, ReportList *reports, Strip *other);
void rna_Strips_move_strip_to_meta(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, Strip *meta_sequence);
Strip *rna_Strip_parent_meta(ID *_selfid, Strip *_self);
void rna_Strip_invalidate_cache_rnafunc(ID *_selfid, Strip *_self, int type);
Strip *rna_Strip_split(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, int frame, int split_method, bool ignore_connections);

StripModifierData *StripModifiers_new_func(ID *_selfid, Strip *_self, ReportList *reports, const char * name, int type)
{
	return rna_Strip_modifier_new(_selfid, _self, reports, name, type);
}

static void StripModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	const char * name;
	int type;
	StripModifierData *modifier;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	modifier = rna_Strip_modifier_new(_selfid, _self, reports, name, type);
	*((StripModifierData **)_retdata) = modifier;
}

void StripModifiers_remove_func(ID *_selfid, Strip *_self, ReportList *reports, PointerRNA *modifier)
{
	rna_Strip_modifier_remove(_selfid, _self, reports, modifier);
}

static void StripModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	PointerRNA *modifier;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((PointerRNA **)_data);
	
	rna_Strip_modifier_remove(_selfid, _self, reports, modifier);
}

void StripModifiers_clear_func(ID *_selfid, Strip *_self)
{
	rna_Strip_modifier_clear(_selfid, _self);
}

static void StripModifiers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	
	rna_Strip_modifier_clear(_selfid, _self);
}

/* Repeated prototypes to detect errors */

StripModifierData *rna_Strip_modifier_new(ID *_selfid, Strip *_self, ReportList *reports, const char * name, int type);
void rna_Strip_modifier_remove(ID *_selfid, Strip *_self, ReportList *reports, PointerRNA *modifier);
void rna_Strip_modifier_clear(ID *_selfid, Strip *_self);

void SequenceEditor_display_stack_func(ID *_selfid, Editing *_self, ReportList *reports, Strip *meta_sequence)
{
	rna_SequenceEditor_display_stack(_selfid, _self, reports, meta_sequence);
}

static void SequenceEditor_display_stack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Editing *_self;
	Strip *meta_sequence;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Editing *)_ptr->data;
	_data = (char *)_parms->data;
	meta_sequence = *((Strip **)_data);
	
	rna_SequenceEditor_display_stack(_selfid, _self, reports, meta_sequence);
}

/* Repeated prototypes to detect errors */

void rna_SequenceEditor_display_stack(ID *_selfid, Editing *_self, ReportList *reports, Strip *meta_sequence);

Strip *StripsTopLevel_new_clip_func(ID *_selfid, Editing *_self, Main *bmain, const char * name, MovieClip *clip, int channel, int frame_start)
{
	return rna_Strips_editing_new_clip(_selfid, _self, bmain, name, clip, channel, frame_start);
}

static void StripsTopLevel_new_clip_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Editing *_self;
	const char * name;
	MovieClip *clip;
	int channel;
	int frame_start;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	clip = *((MovieClip **)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_editing_new_clip(_selfid, _self, CTX_data_main(C), name, clip, channel, frame_start);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsTopLevel_new_mask_func(ID *_selfid, Editing *_self, Main *bmain, const char * name, Mask *mask, int channel, int frame_start)
{
	return rna_Strips_editing_new_mask(_selfid, _self, bmain, name, mask, channel, frame_start);
}

static void StripsTopLevel_new_mask_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Editing *_self;
	const char * name;
	Mask *mask;
	int channel;
	int frame_start;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	mask = *((Mask **)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_editing_new_mask(_selfid, _self, CTX_data_main(C), name, mask, channel, frame_start);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsTopLevel_new_scene_func(ID *_selfid, Editing *_self, Main *bmain, const char * name, Scene *scene, int channel, int frame_start)
{
	return rna_Strips_editing_new_scene(_selfid, _self, bmain, name, scene, channel, frame_start);
}

static void StripsTopLevel_new_scene_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Editing *_self;
	const char * name;
	Scene *scene;
	int channel;
	int frame_start;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	scene = *((Scene **)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_editing_new_scene(_selfid, _self, CTX_data_main(C), name, scene, channel, frame_start);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsTopLevel_new_image_func(ID *_selfid, Editing *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int fit_method)
{
	return rna_Strips_editing_new_image(_selfid, _self, bmain, reports, name, filepath, channel, frame_start, fit_method);
}

static void StripsTopLevel_new_image_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Editing *_self;
	const char * name;
	const char * filepath;
	int channel;
	int frame_start;
	int fit_method;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	filepath = *((const char * *)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	fit_method = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_editing_new_image(_selfid, _self, CTX_data_main(C), reports, name, filepath, channel, frame_start, fit_method);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsTopLevel_new_movie_func(ID *_selfid, Editing *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int fit_method, int stream)
{
	return rna_Strips_editing_new_movie(_selfid, _self, bmain, reports, name, filepath, channel, frame_start, fit_method, stream);
}

static void StripsTopLevel_new_movie_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Editing *_self;
	const char * name;
	const char * filepath;
	int channel;
	int frame_start;
	int fit_method;
	int stream;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	filepath = *((const char * *)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	fit_method = *((int *)_data);
	_data += 8;
	stream = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_editing_new_movie(_selfid, _self, CTX_data_main(C), reports, name, filepath, channel, frame_start, fit_method, stream);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsTopLevel_new_sound_func(ID *_selfid, Editing *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int stream)
{
	return rna_Strips_editing_new_sound(_selfid, _self, bmain, reports, name, filepath, channel, frame_start, stream);
}

static void StripsTopLevel_new_sound_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Editing *_self;
	const char * name;
	const char * filepath;
	int channel;
	int frame_start;
	int stream;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	filepath = *((const char * *)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	stream = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_editing_new_sound(_selfid, _self, CTX_data_main(C), reports, name, filepath, channel, frame_start, stream);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsTopLevel_new_meta_func(ID *_selfid, Editing *_self, const char * name, int channel, int frame_start)
{
	return rna_Strips_editing_new_meta(_selfid, _self, name, channel, frame_start);
}

static void StripsTopLevel_new_meta_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Editing *_self;
	const char * name;
	int channel;
	int frame_start;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_editing_new_meta(_selfid, _self, name, channel, frame_start);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsTopLevel_new_effect_func(ID *_selfid, Editing *_self, ReportList *reports, const char * name, int type, int channel, int frame_start, int length, Strip *input1, Strip *input2)
{
	return rna_Strips_editing_new_effect(_selfid, _self, reports, name, type, channel, frame_start, length, input1, input2);
}

static void StripsTopLevel_new_effect_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Editing *_self;
	const char * name;
	int type;
	int channel;
	int frame_start;
	int length;
	Strip *input1;
	Strip *input2;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	length = *((int *)_data);
	_data += 8;
	input1 = *((Strip **)_data);
	_data += 8;
	input2 = *((Strip **)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_editing_new_effect(_selfid, _self, reports, name, type, channel, frame_start, length, input1, input2);
	*((Strip **)_retdata) = sequence;
}

void StripsTopLevel_remove_func(ID *_selfid, Editing *_self, Main *bmain, ReportList *reports, PointerRNA *sequence)
{
	rna_Strips_editing_remove(_selfid, _self, bmain, reports, sequence);
}

static void StripsTopLevel_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Editing *_self;
	PointerRNA *sequence;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Editing *)_ptr->data;
	_data = (char *)_parms->data;
	sequence = *((PointerRNA **)_data);
	
	rna_Strips_editing_remove(_selfid, _self, CTX_data_main(C), reports, sequence);
}

/* Repeated prototypes to detect errors */

Strip *rna_Strips_editing_new_clip(ID *_selfid, Editing *_self, Main *bmain, const char * name, MovieClip *clip, int channel, int frame_start);
Strip *rna_Strips_editing_new_mask(ID *_selfid, Editing *_self, Main *bmain, const char * name, Mask *mask, int channel, int frame_start);
Strip *rna_Strips_editing_new_scene(ID *_selfid, Editing *_self, Main *bmain, const char * name, Scene *scene, int channel, int frame_start);
Strip *rna_Strips_editing_new_image(ID *_selfid, Editing *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int fit_method);
Strip *rna_Strips_editing_new_movie(ID *_selfid, Editing *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int fit_method, int stream);
Strip *rna_Strips_editing_new_sound(ID *_selfid, Editing *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int stream);
Strip *rna_Strips_editing_new_meta(ID *_selfid, Editing *_self, const char * name, int channel, int frame_start);
Strip *rna_Strips_editing_new_effect(ID *_selfid, Editing *_self, ReportList *reports, const char * name, int type, int channel, int frame_start, int length, Strip *input1, Strip *input2);
void rna_Strips_editing_remove(ID *_selfid, Editing *_self, Main *bmain, ReportList *reports, PointerRNA *sequence);



StripElem *StripElements_append_func(ID *_selfid, Strip *_self, const char * filename)
{
	return rna_StripElements_append(_selfid, _self, filename);
}

static void StripElements_append_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	const char * filename;
	StripElem *elem;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	filename = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	elem = rna_StripElements_append(_selfid, _self, filename);
	*((StripElem **)_retdata) = elem;
}

void StripElements_pop_func(ID *_selfid, Strip *_self, ReportList *reports, int index)
{
	rna_StripElements_pop(_selfid, _self, reports, index);
}

static void StripElements_pop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	int index;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_StripElements_pop(_selfid, _self, reports, index);
}

/* Repeated prototypes to detect errors */

StripElem *rna_StripElements_append(ID *_selfid, Strip *_self, const char * filename);
void rna_StripElements_pop(ID *_selfid, Strip *_self, ReportList *reports, int index);

void MetaStrip_separate_func(ID *_selfid, Strip *_self, Main *bmain)
{
	rna_Strip_separate(_selfid, _self, bmain);
}

static void MetaStrip_separate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	
	rna_Strip_separate(_selfid, _self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

void rna_Strip_separate(ID *_selfid, Strip *_self, Main *bmain);

Strip *StripsMeta_new_clip_func(ID *_selfid, Strip *_self, Main *bmain, const char * name, MovieClip *clip, int channel, int frame_start)
{
	return rna_Strips_meta_new_clip(_selfid, _self, bmain, name, clip, channel, frame_start);
}

static void StripsMeta_new_clip_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	const char * name;
	MovieClip *clip;
	int channel;
	int frame_start;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	clip = *((MovieClip **)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_meta_new_clip(_selfid, _self, CTX_data_main(C), name, clip, channel, frame_start);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsMeta_new_mask_func(ID *_selfid, Strip *_self, Main *bmain, const char * name, Mask *mask, int channel, int frame_start)
{
	return rna_Strips_meta_new_mask(_selfid, _self, bmain, name, mask, channel, frame_start);
}

static void StripsMeta_new_mask_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	const char * name;
	Mask *mask;
	int channel;
	int frame_start;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	mask = *((Mask **)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_meta_new_mask(_selfid, _self, CTX_data_main(C), name, mask, channel, frame_start);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsMeta_new_scene_func(ID *_selfid, Strip *_self, Main *bmain, const char * name, Scene *scene, int channel, int frame_start)
{
	return rna_Strips_meta_new_scene(_selfid, _self, bmain, name, scene, channel, frame_start);
}

static void StripsMeta_new_scene_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	const char * name;
	Scene *scene;
	int channel;
	int frame_start;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	scene = *((Scene **)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_meta_new_scene(_selfid, _self, CTX_data_main(C), name, scene, channel, frame_start);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsMeta_new_image_func(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int fit_method)
{
	return rna_Strips_meta_new_image(_selfid, _self, bmain, reports, name, filepath, channel, frame_start, fit_method);
}

static void StripsMeta_new_image_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	const char * name;
	const char * filepath;
	int channel;
	int frame_start;
	int fit_method;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	filepath = *((const char * *)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	fit_method = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_meta_new_image(_selfid, _self, CTX_data_main(C), reports, name, filepath, channel, frame_start, fit_method);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsMeta_new_movie_func(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int fit_method, int stream)
{
	return rna_Strips_meta_new_movie(_selfid, _self, bmain, reports, name, filepath, channel, frame_start, fit_method, stream);
}

static void StripsMeta_new_movie_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	const char * name;
	const char * filepath;
	int channel;
	int frame_start;
	int fit_method;
	int stream;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	filepath = *((const char * *)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	fit_method = *((int *)_data);
	_data += 8;
	stream = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_meta_new_movie(_selfid, _self, CTX_data_main(C), reports, name, filepath, channel, frame_start, fit_method, stream);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsMeta_new_sound_func(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int stream)
{
	return rna_Strips_meta_new_sound(_selfid, _self, bmain, reports, name, filepath, channel, frame_start, stream);
}

static void StripsMeta_new_sound_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	const char * name;
	const char * filepath;
	int channel;
	int frame_start;
	int stream;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	filepath = *((const char * *)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	stream = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_meta_new_sound(_selfid, _self, CTX_data_main(C), reports, name, filepath, channel, frame_start, stream);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsMeta_new_meta_func(ID *_selfid, Strip *_self, const char * name, int channel, int frame_start)
{
	return rna_Strips_meta_new_meta(_selfid, _self, name, channel, frame_start);
}

static void StripsMeta_new_meta_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	const char * name;
	int channel;
	int frame_start;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_meta_new_meta(_selfid, _self, name, channel, frame_start);
	*((Strip **)_retdata) = sequence;
}

Strip *StripsMeta_new_effect_func(ID *_selfid, Strip *_self, ReportList *reports, const char * name, int type, int channel, int frame_start, int length, Strip *input1, Strip *input2)
{
	return rna_Strips_meta_new_effect(_selfid, _self, reports, name, type, channel, frame_start, length, input1, input2);
}

static void StripsMeta_new_effect_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	const char * name;
	int type;
	int channel;
	int frame_start;
	int length;
	Strip *input1;
	Strip *input2;
	Strip *sequence;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	channel = *((int *)_data);
	_data += 8;
	frame_start = *((int *)_data);
	_data += 8;
	length = *((int *)_data);
	_data += 8;
	input1 = *((Strip **)_data);
	_data += 8;
	input2 = *((Strip **)_data);
	_data += 8;
	_retdata = _data;
	
	sequence = rna_Strips_meta_new_effect(_selfid, _self, reports, name, type, channel, frame_start, length, input1, input2);
	*((Strip **)_retdata) = sequence;
}

void StripsMeta_remove_func(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, PointerRNA *sequence)
{
	rna_Strips_meta_remove(_selfid, _self, bmain, reports, sequence);
}

static void StripsMeta_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	PointerRNA *sequence;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	sequence = *((PointerRNA **)_data);
	
	rna_Strips_meta_remove(_selfid, _self, CTX_data_main(C), reports, sequence);
}

/* Repeated prototypes to detect errors */

Strip *rna_Strips_meta_new_clip(ID *_selfid, Strip *_self, Main *bmain, const char * name, MovieClip *clip, int channel, int frame_start);
Strip *rna_Strips_meta_new_mask(ID *_selfid, Strip *_self, Main *bmain, const char * name, Mask *mask, int channel, int frame_start);
Strip *rna_Strips_meta_new_scene(ID *_selfid, Strip *_self, Main *bmain, const char * name, Scene *scene, int channel, int frame_start);
Strip *rna_Strips_meta_new_image(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int fit_method);
Strip *rna_Strips_meta_new_movie(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int fit_method, int stream);
Strip *rna_Strips_meta_new_sound(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start, int stream);
Strip *rna_Strips_meta_new_meta(ID *_selfid, Strip *_self, const char * name, int channel, int frame_start);
Strip *rna_Strips_meta_new_effect(ID *_selfid, Strip *_self, ReportList *reports, const char * name, int type, int channel, int frame_start, int length, Strip *input1, Strip *input2);
void rna_Strips_meta_remove(ID *_selfid, Strip *_self, Main *bmain, ReportList *reports, PointerRNA *sequence);


bool MovieStrip_reload_if_needed_func(ID *_selfid, Strip *_self, Main *bmain)
{
	return rna_MovieStrip_reload_if_needed(_selfid, _self, bmain);
}

static void MovieStrip_reload_if_needed_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	bool can_produce_frames;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	can_produce_frames = rna_MovieStrip_reload_if_needed(_selfid, _self, CTX_data_main(C));
	*((bool *)_retdata) = can_produce_frames;
}

PointerRNA MovieStrip_metadata_func(ID *_selfid, Strip *_self)
{
	return rna_MovieStrip_metadata_get(_selfid, _self);
}

static void MovieStrip_metadata_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	PointerRNA metadata;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	metadata = rna_MovieStrip_metadata_get(_selfid, _self);
	*reinterpret_cast<PointerRNA *>(_retdata) = metadata;
}

/* Repeated prototypes to detect errors */

bool rna_MovieStrip_reload_if_needed(ID *_selfid, Strip *_self, Main *bmain);
PointerRNA rna_MovieStrip_metadata_get(ID *_selfid, Strip *_self);






























IDPropertyGroup *SequencerCompositorModifierProperties_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void SequencerCompositorModifierProperties_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

IDPropertyGroup *SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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


EQCurveMappingData *SoundEqualizerModifier_new_graphic_func(SoundEqualizerModifierData *_self, bContext *C, float min_freq, float max_freq)
{
	return rna_Strip_SoundEqualizer_Curve_add(_self, C, min_freq, max_freq);
}

static void SoundEqualizerModifier_new_graphic_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	SoundEqualizerModifierData *_self;
	float min_freq;
	float max_freq;
	EQCurveMappingData *graphic_eqs;
	char *_data, *_retdata;
	
	_self = (SoundEqualizerModifierData *)_ptr->data;
	_data = (char *)_parms->data;
	min_freq = *((float *)_data);
	_data += 8;
	max_freq = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	graphic_eqs = rna_Strip_SoundEqualizer_Curve_add(_self, C, min_freq, max_freq);
	*((EQCurveMappingData **)_retdata) = graphic_eqs;
}

void SoundEqualizerModifier_clear_soundeqs_func(SoundEqualizerModifierData *_self, bContext *C)
{
	rna_Strip_SoundEqualizer_Curve_clear(_self, C);
}

static void SoundEqualizerModifier_clear_soundeqs_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	SoundEqualizerModifierData *_self;
	_self = (SoundEqualizerModifierData *)_ptr->data;
	
	rna_Strip_SoundEqualizer_Curve_clear(_self, C);
}

/* Repeated prototypes to detect errors */

EQCurveMappingData *rna_Strip_SoundEqualizer_Curve_add(SoundEqualizerModifierData *_self, bContext *C, float min_freq, float max_freq);
void rna_Strip_SoundEqualizer_Curve_clear(SoundEqualizerModifierData *_self, bContext *C);




SeqRetimingKey *RetimingKeys_add_func(ID *_selfid, Strip *_self, ReportList *reports, int timeline_frame)
{
	return rna_Strip_retiming_keys_add(_selfid, _self, reports, timeline_frame);
}

static void RetimingKeys_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	int timeline_frame;
	SeqRetimingKey *retiming_key;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	_data = (char *)_parms->data;
	timeline_frame = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	retiming_key = rna_Strip_retiming_keys_add(_selfid, _self, reports, timeline_frame);
	*((SeqRetimingKey **)_retdata) = retiming_key;
}

void RetimingKeys_reset_func(ID *_selfid, Strip *_self)
{
	rna_Strip_retiming_keys_reset(_selfid, _self);
}

static void RetimingKeys_reset_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	Strip *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (Strip *)_ptr->data;
	
	rna_Strip_retiming_keys_reset(_selfid, _self);
}

/* Repeated prototypes to detect errors */

SeqRetimingKey *rna_Strip_retiming_keys_add(ID *_selfid, Strip *_self, ReportList *reports, int timeline_frame);
void rna_Strip_retiming_keys_reset(ID *_selfid, Strip *_self);

/* Strip Color Balance Data */
static CollectionPropertyRNA rna_StripColorBalanceData_rna_properties_;
PropertyRNA &rna_StripColorBalanceData_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_rna_properties_);

static PointerPropertyRNA rna_StripColorBalanceData_rna_type_;
PropertyRNA &rna_StripColorBalanceData_rna_type = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_rna_type_);

static EnumPropertyRNA rna_StripColorBalanceData_correction_method_;
PropertyRNA &rna_StripColorBalanceData_correction_method = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_correction_method_);

static FloatPropertyRNA rna_StripColorBalanceData_lift_;
PropertyRNA &rna_StripColorBalanceData_lift = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_lift_);

static FloatPropertyRNA rna_StripColorBalanceData_gamma_;
PropertyRNA &rna_StripColorBalanceData_gamma = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_gamma_);

static FloatPropertyRNA rna_StripColorBalanceData_gain_;
PropertyRNA &rna_StripColorBalanceData_gain = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_gain_);

static FloatPropertyRNA rna_StripColorBalanceData_slope_;
PropertyRNA &rna_StripColorBalanceData_slope = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_slope_);

static FloatPropertyRNA rna_StripColorBalanceData_offset_;
PropertyRNA &rna_StripColorBalanceData_offset = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_offset_);

static FloatPropertyRNA rna_StripColorBalanceData_power_;
PropertyRNA &rna_StripColorBalanceData_power = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_power_);

static BoolPropertyRNA rna_StripColorBalanceData_invert_lift_;
PropertyRNA &rna_StripColorBalanceData_invert_lift = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_invert_lift_);

static BoolPropertyRNA rna_StripColorBalanceData_invert_gamma_;
PropertyRNA &rna_StripColorBalanceData_invert_gamma = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_invert_gamma_);

static BoolPropertyRNA rna_StripColorBalanceData_invert_gain_;
PropertyRNA &rna_StripColorBalanceData_invert_gain = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_invert_gain_);

static BoolPropertyRNA rna_StripColorBalanceData_invert_slope_;
PropertyRNA &rna_StripColorBalanceData_invert_slope = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_invert_slope_);

static BoolPropertyRNA rna_StripColorBalanceData_invert_offset_;
PropertyRNA &rna_StripColorBalanceData_invert_offset = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_invert_offset_);

static BoolPropertyRNA rna_StripColorBalanceData_invert_power_;
PropertyRNA &rna_StripColorBalanceData_invert_power = reinterpret_cast<PropertyRNA &>(rna_StripColorBalanceData_invert_power_);

StructRNA *RNA_StripColorBalanceData;
void register_struct_StripColorBalanceData(BlenderRNA &brna)
{
	rna_StripColorBalanceData_rna_properties_ = {
		{&rna_StripColorBalanceData_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripColorBalanceData_rna_properties_begin, StripColorBalanceData_rna_properties_next, StripColorBalanceData_rna_properties_end, StripColorBalanceData_rna_properties_get, nullptr, nullptr, StripColorBalanceData_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StripColorBalanceData_rna_type_ = {
		{&rna_StripColorBalanceData_correction_method, 	&rna_StripColorBalanceData_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripColorBalanceData_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_StripColorBalanceData_correction_method_items[3] = {
		{0, "LIFT_GAMMA_GAIN", 0, "Lift/Gamma/Gain", ""	},
		{1, "OFFSET_POWER_SLOPE", 0, "Offset/Power/Slope (ASC-CDL)", "ASC-CDL standard color correction"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StripColorBalanceData_correction_method_ = {
		{&rna_StripColorBalanceData_lift, 	&rna_StripColorBalanceData_rna_type,
		-1, "correction_method", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Correction Method",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripColorBalance, method), RawPropertyType(0), nullptr},
		StripColorBalanceData_correction_method_get, StripColorBalanceData_correction_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StripColorBalanceData_correction_method_items, 2, 0
	};

	static float rna_StripColorBalanceData_lift_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_StripColorBalanceData_lift_ = {
		{&rna_StripColorBalanceData_gamma, 	&rna_StripColorBalanceData_correction_method,
		-1, "lift", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lift",
		"Color balance lift (shadows)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripColorBalance, lift), RawPropertyType(5), nullptr},
		nullptr, nullptr, StripColorBalanceData_lift_get, StripColorBalanceData_lift_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 1.0f, rna_StripColorBalanceData_lift_default
	};

	static float rna_StripColorBalanceData_gamma_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_StripColorBalanceData_gamma_ = {
		{&rna_StripColorBalanceData_gain, 	&rna_StripColorBalanceData_lift,
		-1, "gamma", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gamma",
		"Color balance gamma (midtones)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripColorBalance, gamma), RawPropertyType(5), nullptr},
		nullptr, nullptr, StripColorBalanceData_gamma_get, StripColorBalanceData_gamma_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 1.0f, rna_StripColorBalanceData_gamma_default
	};

	static float rna_StripColorBalanceData_gain_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_StripColorBalanceData_gain_ = {
		{&rna_StripColorBalanceData_slope, 	&rna_StripColorBalanceData_gamma,
		-1, "gain", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gain",
		"Color balance gain (highlights)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripColorBalance, gain), RawPropertyType(5), nullptr},
		nullptr, nullptr, StripColorBalanceData_gain_get, StripColorBalanceData_gain_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 1.0f, rna_StripColorBalanceData_gain_default
	};

	static float rna_StripColorBalanceData_slope_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_StripColorBalanceData_slope_ = {
		{&rna_StripColorBalanceData_offset, 	&rna_StripColorBalanceData_gain,
		-1, "slope", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Slope",
		"Correction for highlights",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripColorBalance, slope), RawPropertyType(5), nullptr},
		nullptr, nullptr, StripColorBalanceData_slope_get, StripColorBalanceData_slope_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 1.0f, rna_StripColorBalanceData_slope_default
	};

	static float rna_StripColorBalanceData_offset_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_StripColorBalanceData_offset_ = {
		{&rna_StripColorBalanceData_power, 	&rna_StripColorBalanceData_slope,
		-1, "offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Correction for entire tonal range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripColorBalance, offset), RawPropertyType(5), nullptr},
		nullptr, nullptr, StripColorBalanceData_offset_get, StripColorBalanceData_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 1.0f, rna_StripColorBalanceData_offset_default
	};

	static float rna_StripColorBalanceData_power_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_StripColorBalanceData_power_ = {
		{&rna_StripColorBalanceData_invert_lift, 	&rna_StripColorBalanceData_offset,
		-1, "power", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Power",
		"Correction for midtones",
		0, "MovieClip",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripColorBalance, power), RawPropertyType(5), nullptr},
		nullptr, nullptr, StripColorBalanceData_power_get, StripColorBalanceData_power_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 1.0f, rna_StripColorBalanceData_power_default
	};

	rna_StripColorBalanceData_invert_lift_ = {
		{&rna_StripColorBalanceData_invert_gamma, 	&rna_StripColorBalanceData_power,
		-1, "invert_lift", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inverse Lift",
		"Invert the lift color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripColorBalanceData_invert_lift_get, StripColorBalanceData_invert_lift_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripColorBalanceData_invert_gamma_ = {
		{&rna_StripColorBalanceData_invert_gain, 	&rna_StripColorBalanceData_invert_lift,
		-1, "invert_gamma", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inverse Gamma",
		"Invert the gamma color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripColorBalanceData_invert_gamma_get, StripColorBalanceData_invert_gamma_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripColorBalanceData_invert_gain_ = {
		{&rna_StripColorBalanceData_invert_slope, 	&rna_StripColorBalanceData_invert_gamma,
		-1, "invert_gain", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inverse Gain",
		"Invert the gain color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripColorBalanceData_invert_gain_get, StripColorBalanceData_invert_gain_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripColorBalanceData_invert_slope_ = {
		{&rna_StripColorBalanceData_invert_offset, 	&rna_StripColorBalanceData_invert_gain,
		-1, "invert_slope", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inverse Slope",
		"Invert the slope color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripColorBalanceData_invert_slope_get, StripColorBalanceData_invert_slope_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripColorBalanceData_invert_offset_ = {
		{&rna_StripColorBalanceData_invert_power, 	&rna_StripColorBalanceData_invert_slope,
		-1, "invert_offset", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inverse Offset",
		"Invert the offset color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripColorBalanceData_invert_offset_get, StripColorBalanceData_invert_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripColorBalanceData_invert_power_ = {
		{nullptr, 	&rna_StripColorBalanceData_invert_offset,
		-1, "invert_power", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inverse Power",
		"Invert the power color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripColorBalance_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripColorBalanceData_invert_power_get, StripColorBalanceData_invert_power_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_StripColorBalanceData;
	srna->cont.properties = {&rna_StripColorBalanceData_rna_properties, &rna_StripColorBalanceData_invert_power};
	srna->identifier = "StripColorBalanceData";
	srna->flag = 516;
	srna->name = "Strip Color Balance Data";
	srna->description = "Color balance parameters for a sequence strip and its modifiers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StripColorBalanceData_rna_properties;
	srna->path = rna_StripColorBalance_path;
};

/* Strip Element */
static CollectionPropertyRNA rna_StripElement_rna_properties_;
PropertyRNA &rna_StripElement_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StripElement_rna_properties_);

static PointerPropertyRNA rna_StripElement_rna_type_;
PropertyRNA &rna_StripElement_rna_type = reinterpret_cast<PropertyRNA &>(rna_StripElement_rna_type_);

static StringPropertyRNA rna_StripElement_filename_;
PropertyRNA &rna_StripElement_filename = reinterpret_cast<PropertyRNA &>(rna_StripElement_filename_);

static IntPropertyRNA rna_StripElement_orig_width_;
PropertyRNA &rna_StripElement_orig_width = reinterpret_cast<PropertyRNA &>(rna_StripElement_orig_width_);

static IntPropertyRNA rna_StripElement_orig_height_;
PropertyRNA &rna_StripElement_orig_height = reinterpret_cast<PropertyRNA &>(rna_StripElement_orig_height_);

static FloatPropertyRNA rna_StripElement_orig_fps_;
PropertyRNA &rna_StripElement_orig_fps = reinterpret_cast<PropertyRNA &>(rna_StripElement_orig_fps_);

StructRNA *RNA_StripElement;
void register_struct_StripElement(BlenderRNA &brna)
{
	rna_StripElement_rna_properties_ = {
		{&rna_StripElement_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripElement_rna_properties_begin, StripElement_rna_properties_next, StripElement_rna_properties_end, StripElement_rna_properties_get, nullptr, nullptr, StripElement_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StripElement_rna_type_ = {
		{&rna_StripElement_filename, 	&rna_StripElement_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripElement_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_StripElement_filename_ = {
		{&rna_StripElement_orig_width, 	&rna_StripElement_rna_type,
		-1, "filename", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Filename",
		"Name of the source file",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILENAME) | int(PROP_UNIT_NONE)), nullptr, 0, {256, 0, 0}, 0,
		rna_StripElement_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripElement_filename_get, StripElement_filename_length, StripElement_filename_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};

	rna_StripElement_orig_width_ = {
		{&rna_StripElement_orig_height, 	&rna_StripElement_filename,
		-1, "orig_width", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Orig Width",
		"Original image width",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripElem, orig_width), RawPropertyType(0), nullptr},
		StripElement_orig_width_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_StripElement_orig_height_ = {
		{&rna_StripElement_orig_fps, 	&rna_StripElement_orig_width,
		-1, "orig_height", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Orig Height",
		"Original image height",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripElem, orig_height), RawPropertyType(0), nullptr},
		StripElement_orig_height_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_StripElement_orig_fps_ = {
		{nullptr, 	&rna_StripElement_orig_height,
		-1, "orig_fps", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Orig FPS",
		"Original frames per second",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripElem, orig_fps), RawPropertyType(5), nullptr},
		StripElement_orig_fps_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_StripElement;
	srna->cont.properties = {&rna_StripElement_rna_properties, &rna_StripElement_orig_fps};
	srna->identifier = "StripElement";
	srna->flag = 516;
	srna->name = "Strip Element";
	srna->description = "Sequence strip data for a single frame";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StripElement_rna_properties;
};

/* Retiming Key */
static CollectionPropertyRNA rna_RetimingKey_rna_properties_;
PropertyRNA &rna_RetimingKey_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RetimingKey_rna_properties_);

static PointerPropertyRNA rna_RetimingKey_rna_type_;
PropertyRNA &rna_RetimingKey_rna_type = reinterpret_cast<PropertyRNA &>(rna_RetimingKey_rna_type_);

static IntPropertyRNA rna_RetimingKey_timeline_frame_;
PropertyRNA &rna_RetimingKey_timeline_frame = reinterpret_cast<PropertyRNA &>(rna_RetimingKey_timeline_frame_);

FunctionRNA *rna_RetimingKey_remove_func;
StructRNA *RNA_RetimingKey;
void register_struct_RetimingKey(BlenderRNA &brna)
{
	rna_RetimingKey_rna_properties_ = {
		{&rna_RetimingKey_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RetimingKey_rna_properties_begin, RetimingKey_rna_properties_next, RetimingKey_rna_properties_end, RetimingKey_rna_properties_get, nullptr, nullptr, RetimingKey_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RetimingKey_rna_type_ = {
		{&rna_RetimingKey_timeline_frame, 	&rna_RetimingKey_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RetimingKey_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_RetimingKey_timeline_frame_ = {
		{nullptr, 	&rna_RetimingKey_rna_type,
		-1, "timeline_frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Timeline Frame",
		"Position of retiming key in timeline",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RetimingKey_timeline_frame_get, RetimingKey_timeline_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_RetimingKey;
	srna->cont.properties = {&rna_RetimingKey_rna_properties, &rna_RetimingKey_timeline_frame};
	srna->identifier = "RetimingKey";
	srna->flag = 516;
	srna->name = "Retiming Key";
	srna->description = "Key mapped to particular frame that can be moved to change playback speed";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RetimingKey_rna_properties;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "remove";
		func->flag = 2048;
		func->description = "Remove retiming key";
		func->call = RetimingKey_remove_call;
		rna_RetimingKey_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Strip Proxy */
static CollectionPropertyRNA rna_StripProxy_rna_properties_;
PropertyRNA &rna_StripProxy_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StripProxy_rna_properties_);

static PointerPropertyRNA rna_StripProxy_rna_type_;
PropertyRNA &rna_StripProxy_rna_type = reinterpret_cast<PropertyRNA &>(rna_StripProxy_rna_type_);

static StringPropertyRNA rna_StripProxy_directory_;
PropertyRNA &rna_StripProxy_directory = reinterpret_cast<PropertyRNA &>(rna_StripProxy_directory_);

static StringPropertyRNA rna_StripProxy_filepath_;
PropertyRNA &rna_StripProxy_filepath = reinterpret_cast<PropertyRNA &>(rna_StripProxy_filepath_);

static BoolPropertyRNA rna_StripProxy_use_overwrite_;
PropertyRNA &rna_StripProxy_use_overwrite = reinterpret_cast<PropertyRNA &>(rna_StripProxy_use_overwrite_);

static BoolPropertyRNA rna_StripProxy_build_25_;
PropertyRNA &rna_StripProxy_build_25 = reinterpret_cast<PropertyRNA &>(rna_StripProxy_build_25_);

static BoolPropertyRNA rna_StripProxy_build_50_;
PropertyRNA &rna_StripProxy_build_50 = reinterpret_cast<PropertyRNA &>(rna_StripProxy_build_50_);

static BoolPropertyRNA rna_StripProxy_build_75_;
PropertyRNA &rna_StripProxy_build_75 = reinterpret_cast<PropertyRNA &>(rna_StripProxy_build_75_);

static BoolPropertyRNA rna_StripProxy_build_100_;
PropertyRNA &rna_StripProxy_build_100 = reinterpret_cast<PropertyRNA &>(rna_StripProxy_build_100_);

static IntPropertyRNA rna_StripProxy_quality_;
PropertyRNA &rna_StripProxy_quality = reinterpret_cast<PropertyRNA &>(rna_StripProxy_quality_);

static BoolPropertyRNA rna_StripProxy_use_proxy_custom_directory_;
PropertyRNA &rna_StripProxy_use_proxy_custom_directory = reinterpret_cast<PropertyRNA &>(rna_StripProxy_use_proxy_custom_directory_);

static BoolPropertyRNA rna_StripProxy_use_proxy_custom_file_;
PropertyRNA &rna_StripProxy_use_proxy_custom_file = reinterpret_cast<PropertyRNA &>(rna_StripProxy_use_proxy_custom_file_);

StructRNA *RNA_StripProxy;
void register_struct_StripProxy(BlenderRNA &brna)
{
	rna_StripProxy_rna_properties_ = {
		{&rna_StripProxy_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_rna_properties_begin, StripProxy_rna_properties_next, StripProxy_rna_properties_end, StripProxy_rna_properties_get, nullptr, nullptr, StripProxy_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StripProxy_rna_type_ = {
		{&rna_StripProxy_directory, 	&rna_StripProxy_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_StripProxy_directory_ = {
		{&rna_StripProxy_filepath, 	&rna_StripProxy_rna_type,
		-1, "directory", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "Directory",
		"Location to store the proxy files",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_DIRPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {768, 0, 0}, 0,
		rna_StripProxy_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_directory_get, StripProxy_directory_length, StripProxy_directory_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 768, ""
	};

	rna_StripProxy_filepath_ = {
		{&rna_StripProxy_use_overwrite, 	&rna_StripProxy_directory,
		-1, "filepath", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "Path",
		"Location of custom proxy file",
		0, "File browser",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripProxy_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_filepath_get, StripProxy_filepath_length, StripProxy_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_StripProxy_use_overwrite_ = {
		{&rna_StripProxy_build_25, 	&rna_StripProxy_filepath,
		-1, "use_overwrite", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Overwrite",
		"Overwrite existing proxy files when building",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_use_overwrite_get, StripProxy_use_overwrite_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripProxy_build_25_ = {
		{&rna_StripProxy_build_50, 	&rna_StripProxy_use_overwrite,
		-1, "build_25", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "25%",
		"Build 25% proxy resolution",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_build_25_get, StripProxy_build_25_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripProxy_build_50_ = {
		{&rna_StripProxy_build_75, 	&rna_StripProxy_build_25,
		-1, "build_50", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "50%",
		"Build 50% proxy resolution",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_build_50_get, StripProxy_build_50_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripProxy_build_75_ = {
		{&rna_StripProxy_build_100, 	&rna_StripProxy_build_50,
		-1, "build_75", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "75%",
		"Build 75% proxy resolution",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_build_75_get, StripProxy_build_75_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripProxy_build_100_ = {
		{&rna_StripProxy_quality, 	&rna_StripProxy_build_75,
		-1, "build_100", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "100%",
		"Build 100% proxy resolution",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_build_100_get, StripProxy_build_100_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripProxy_quality_ = {
		{&rna_StripProxy_use_proxy_custom_directory, 	&rna_StripProxy_build_100,
		-1, "quality", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Quality",
		"Quality of proxies to build",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripProxy, quality), RawPropertyType(1), nullptr},
		StripProxy_quality_get, StripProxy_quality_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_StripProxy_use_proxy_custom_directory_ = {
		{&rna_StripProxy_use_proxy_custom_file, 	&rna_StripProxy_quality,
		-1, "use_proxy_custom_directory", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Proxy Custom Directory",
		"Use a custom directory to store data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_use_proxy_custom_directory_get, StripProxy_use_proxy_custom_directory_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripProxy_use_proxy_custom_file_ = {
		{nullptr, 	&rna_StripProxy_use_proxy_custom_directory,
		-1, "use_proxy_custom_file", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Proxy Custom File",
		"Use a custom file to read proxy data from",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripProxy_use_proxy_custom_file_get, StripProxy_use_proxy_custom_file_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_StripProxy;
	srna->cont.properties = {&rna_StripProxy_rna_properties, &rna_StripProxy_use_proxy_custom_file};
	srna->identifier = "StripProxy";
	srna->flag = 516;
	srna->name = "Strip Proxy";
	srna->description = "Proxy parameters for a sequence strip";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StripProxy_rna_properties;
};

/* Strip Color Balance */
StructRNA *RNA_StripColorBalance;
void register_struct_StripColorBalance(BlenderRNA &brna)
{

	StructRNA *srna = RNA_StripColorBalance;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "StripColorBalance";
	srna->flag = 516;
	srna->name = "Strip Color Balance";
	srna->description = "Color balance parameters for a sequence strip";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StripColorBalanceData_rna_properties;
	srna->base = RNA_StripColorBalanceData;
	srna->path = rna_StripColorBalance_path;
};

/* Strip Crop */
static CollectionPropertyRNA rna_StripCrop_rna_properties_;
PropertyRNA &rna_StripCrop_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StripCrop_rna_properties_);

static PointerPropertyRNA rna_StripCrop_rna_type_;
PropertyRNA &rna_StripCrop_rna_type = reinterpret_cast<PropertyRNA &>(rna_StripCrop_rna_type_);

static IntPropertyRNA rna_StripCrop_max_y_;
PropertyRNA &rna_StripCrop_max_y = reinterpret_cast<PropertyRNA &>(rna_StripCrop_max_y_);

static IntPropertyRNA rna_StripCrop_min_y_;
PropertyRNA &rna_StripCrop_min_y = reinterpret_cast<PropertyRNA &>(rna_StripCrop_min_y_);

static IntPropertyRNA rna_StripCrop_min_x_;
PropertyRNA &rna_StripCrop_min_x = reinterpret_cast<PropertyRNA &>(rna_StripCrop_min_x_);

static IntPropertyRNA rna_StripCrop_max_x_;
PropertyRNA &rna_StripCrop_max_x = reinterpret_cast<PropertyRNA &>(rna_StripCrop_max_x_);

StructRNA *RNA_StripCrop;
void register_struct_StripCrop(BlenderRNA &brna)
{
	rna_StripCrop_rna_properties_ = {
		{&rna_StripCrop_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripCrop_rna_properties_begin, StripCrop_rna_properties_next, StripCrop_rna_properties_end, StripCrop_rna_properties_get, nullptr, nullptr, StripCrop_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StripCrop_rna_type_ = {
		{&rna_StripCrop_max_y, 	&rna_StripCrop_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripCrop_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_StripCrop_max_y_ = {
		{&rna_StripCrop_min_y, 	&rna_StripCrop_rna_type,
		-1, "max_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Top",
		"Number of pixels to crop from the top",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripCrop_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripCrop, top), RawPropertyType(0), nullptr},
		StripCrop_max_y_get, StripCrop_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 4096, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_StripCrop_min_y_ = {
		{&rna_StripCrop_min_x, 	&rna_StripCrop_max_y,
		-1, "min_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bottom",
		"Number of pixels to crop from the bottom",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripCrop_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripCrop, bottom), RawPropertyType(0), nullptr},
		StripCrop_min_y_get, StripCrop_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 4096, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_StripCrop_min_x_ = {
		{&rna_StripCrop_max_x, 	&rna_StripCrop_min_y,
		-1, "min_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Left",
		"Number of pixels to crop from the left side",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripCrop_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripCrop, left), RawPropertyType(0), nullptr},
		StripCrop_min_x_get, StripCrop_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 4096, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_StripCrop_max_x_ = {
		{nullptr, 	&rna_StripCrop_min_x,
		-1, "max_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Right",
		"Number of pixels to crop from the right side",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripCrop_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripCrop, right), RawPropertyType(0), nullptr},
		StripCrop_max_x_get, StripCrop_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 4096, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_StripCrop;
	srna->cont.properties = {&rna_StripCrop_rna_properties, &rna_StripCrop_max_x};
	srna->identifier = "StripCrop";
	srna->flag = 516;
	srna->name = "Strip Crop";
	srna->description = "Cropping parameters for a sequence strip";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StripCrop_rna_properties;
	srna->path = rna_StripCrop_path;
};

/* Strip Transform */
static CollectionPropertyRNA rna_StripTransform_rna_properties_;
PropertyRNA &rna_StripTransform_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StripTransform_rna_properties_);

static PointerPropertyRNA rna_StripTransform_rna_type_;
PropertyRNA &rna_StripTransform_rna_type = reinterpret_cast<PropertyRNA &>(rna_StripTransform_rna_type_);

static FloatPropertyRNA rna_StripTransform_scale_x_;
PropertyRNA &rna_StripTransform_scale_x = reinterpret_cast<PropertyRNA &>(rna_StripTransform_scale_x_);

static FloatPropertyRNA rna_StripTransform_scale_y_;
PropertyRNA &rna_StripTransform_scale_y = reinterpret_cast<PropertyRNA &>(rna_StripTransform_scale_y_);

static FloatPropertyRNA rna_StripTransform_offset_x_;
PropertyRNA &rna_StripTransform_offset_x = reinterpret_cast<PropertyRNA &>(rna_StripTransform_offset_x_);

static FloatPropertyRNA rna_StripTransform_offset_y_;
PropertyRNA &rna_StripTransform_offset_y = reinterpret_cast<PropertyRNA &>(rna_StripTransform_offset_y_);

static FloatPropertyRNA rna_StripTransform_rotation_;
PropertyRNA &rna_StripTransform_rotation = reinterpret_cast<PropertyRNA &>(rna_StripTransform_rotation_);

static FloatPropertyRNA rna_StripTransform_origin_;
PropertyRNA &rna_StripTransform_origin = reinterpret_cast<PropertyRNA &>(rna_StripTransform_origin_);

static EnumPropertyRNA rna_StripTransform_filter_;
PropertyRNA &rna_StripTransform_filter = reinterpret_cast<PropertyRNA &>(rna_StripTransform_filter_);

StructRNA *RNA_StripTransform;
void register_struct_StripTransform(BlenderRNA &brna)
{
	rna_StripTransform_rna_properties_ = {
		{&rna_StripTransform_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripTransform_rna_properties_begin, StripTransform_rna_properties_next, StripTransform_rna_properties_end, StripTransform_rna_properties_get, nullptr, nullptr, StripTransform_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StripTransform_rna_type_ = {
		{&rna_StripTransform_scale_x, 	&rna_StripTransform_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripTransform_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_StripTransform_scale_x_ = {
		{&rna_StripTransform_scale_y, 	&rna_StripTransform_rna_type,
		-1, "scale_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale X",
		"Scale along X axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripTransform_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripTransform, scale_x), RawPropertyType(5), nullptr},
		StripTransform_scale_x_get, StripTransform_scale_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 3.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_StripTransform_scale_y_ = {
		{&rna_StripTransform_offset_x, 	&rna_StripTransform_scale_x,
		-1, "scale_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale Y",
		"Scale along Y axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripTransform_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripTransform, scale_y), RawPropertyType(5), nullptr},
		StripTransform_scale_y_get, StripTransform_scale_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 3.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_StripTransform_offset_x_ = {
		{&rna_StripTransform_offset_y, 	&rna_StripTransform_scale_y,
		-1, "offset_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Translate X",
		"Move along X axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripTransform_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripTransform, xofs), RawPropertyType(5), nullptr},
		StripTransform_offset_x_get, StripTransform_offset_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_StripTransform_offset_y_ = {
		{&rna_StripTransform_rotation, 	&rna_StripTransform_offset_x,
		-1, "offset_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Translate Y",
		"Move along Y axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripTransform_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripTransform, yofs), RawPropertyType(5), nullptr},
		StripTransform_offset_y_get, StripTransform_offset_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_StripTransform_rotation_ = {
		{&rna_StripTransform_origin, 	&rna_StripTransform_offset_y,
		-1, "rotation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Rotate around image center",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripTransform_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripTransform, rotation), RawPropertyType(5), nullptr},
		StripTransform_rotation_get, StripTransform_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_StripTransform_origin_default[2] = {
		0.0f,
		0.0f
	};
	rna_StripTransform_origin_ = {
		{&rna_StripTransform_filter, 	&rna_StripTransform_rotation,
		-1, "origin", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Origin",
		"Origin of image for transformation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_StripTransform_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripTransform, origin), RawPropertyType(5), nullptr},
		nullptr, nullptr, StripTransform_origin_get, StripTransform_origin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_StripTransform_origin_default
	};

	static const EnumPropertyItem rna_StripTransform_filter_items[7] = {
		{-1, "AUTO", 0, "Auto", "Automatically choose filter based on scaling factor"	},
		{0, "NEAREST", 0, "Nearest", "Use nearest sample"	},
		{1, "BILINEAR", 0, "Bilinear", "Interpolate between 2×2 samples"	},
		{4, "CUBIC_MITCHELL", 0, "Cubic Mitchell", "Cubic Mitchell filter on 4×4 samples"	},
		{3, "CUBIC_BSPLINE", 0, "Cubic B-Spline", "Cubic B-Spline filter (blurry but no ringing) on 4×4 samples"	},
		{2, "BOX", 0, "Box", "Averages source image samples that fall under destination pixel"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StripTransform_filter_ = {
		{nullptr, 	&rna_StripTransform_origin,
		-1, "filter", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Filter",
		"Type of filter to use for image transformation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripTransform_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripTransform, filter), RawPropertyType(0), nullptr},
		StripTransform_filter_get, StripTransform_filter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StripTransform_filter_items, 6, -1
	};

	StructRNA *srna = RNA_StripTransform;
	srna->cont.properties = {&rna_StripTransform_rna_properties, &rna_StripTransform_filter};
	srna->identifier = "StripTransform";
	srna->flag = 516;
	srna->name = "Strip Transform";
	srna->description = "Transform parameters for a sequence strip";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StripTransform_rna_properties;
	srna->path = rna_StripTransform_path;
};

/* Strip */
static CollectionPropertyRNA rna_Strip_rna_properties_;
PropertyRNA &rna_Strip_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Strip_rna_properties_);

static PointerPropertyRNA rna_Strip_rna_type_;
PropertyRNA &rna_Strip_rna_type = reinterpret_cast<PropertyRNA &>(rna_Strip_rna_type_);

static StringPropertyRNA rna_Strip_name_;
PropertyRNA &rna_Strip_name = reinterpret_cast<PropertyRNA &>(rna_Strip_name_);

static EnumPropertyRNA rna_Strip_type_;
PropertyRNA &rna_Strip_type = reinterpret_cast<PropertyRNA &>(rna_Strip_type_);

static BoolPropertyRNA rna_Strip_select_;
PropertyRNA &rna_Strip_select = reinterpret_cast<PropertyRNA &>(rna_Strip_select_);

static BoolPropertyRNA rna_Strip_select_left_handle_;
PropertyRNA &rna_Strip_select_left_handle = reinterpret_cast<PropertyRNA &>(rna_Strip_select_left_handle_);

static BoolPropertyRNA rna_Strip_select_right_handle_;
PropertyRNA &rna_Strip_select_right_handle = reinterpret_cast<PropertyRNA &>(rna_Strip_select_right_handle_);

static BoolPropertyRNA rna_Strip_mute_;
PropertyRNA &rna_Strip_mute = reinterpret_cast<PropertyRNA &>(rna_Strip_mute_);

static BoolPropertyRNA rna_Strip_lock_;
PropertyRNA &rna_Strip_lock = reinterpret_cast<PropertyRNA &>(rna_Strip_lock_);

static IntPropertyRNA rna_Strip_frame_final_duration_;
PropertyRNA &rna_Strip_frame_final_duration = reinterpret_cast<PropertyRNA &>(rna_Strip_frame_final_duration_);

static IntPropertyRNA rna_Strip_duration_;
PropertyRNA &rna_Strip_duration = reinterpret_cast<PropertyRNA &>(rna_Strip_duration_);

static IntPropertyRNA rna_Strip_frame_duration_;
PropertyRNA &rna_Strip_frame_duration = reinterpret_cast<PropertyRNA &>(rna_Strip_frame_duration_);

static IntPropertyRNA rna_Strip_content_duration_;
PropertyRNA &rna_Strip_content_duration = reinterpret_cast<PropertyRNA &>(rna_Strip_content_duration_);

static FloatPropertyRNA rna_Strip_frame_start_;
PropertyRNA &rna_Strip_frame_start = reinterpret_cast<PropertyRNA &>(rna_Strip_frame_start_);

static FloatPropertyRNA rna_Strip_content_start_;
PropertyRNA &rna_Strip_content_start = reinterpret_cast<PropertyRNA &>(rna_Strip_content_start_);

static IntPropertyRNA rna_Strip_content_end_;
PropertyRNA &rna_Strip_content_end = reinterpret_cast<PropertyRNA &>(rna_Strip_content_end_);

static IntPropertyRNA rna_Strip_frame_final_start_;
PropertyRNA &rna_Strip_frame_final_start = reinterpret_cast<PropertyRNA &>(rna_Strip_frame_final_start_);

static IntPropertyRNA rna_Strip_left_handle_;
PropertyRNA &rna_Strip_left_handle = reinterpret_cast<PropertyRNA &>(rna_Strip_left_handle_);

static IntPropertyRNA rna_Strip_frame_final_end_;
PropertyRNA &rna_Strip_frame_final_end = reinterpret_cast<PropertyRNA &>(rna_Strip_frame_final_end_);

static IntPropertyRNA rna_Strip_right_handle_;
PropertyRNA &rna_Strip_right_handle = reinterpret_cast<PropertyRNA &>(rna_Strip_right_handle_);

static FloatPropertyRNA rna_Strip_frame_offset_start_;
PropertyRNA &rna_Strip_frame_offset_start = reinterpret_cast<PropertyRNA &>(rna_Strip_frame_offset_start_);

static FloatPropertyRNA rna_Strip_left_handle_offset_;
PropertyRNA &rna_Strip_left_handle_offset = reinterpret_cast<PropertyRNA &>(rna_Strip_left_handle_offset_);

static FloatPropertyRNA rna_Strip_frame_offset_end_;
PropertyRNA &rna_Strip_frame_offset_end = reinterpret_cast<PropertyRNA &>(rna_Strip_frame_offset_end_);

static FloatPropertyRNA rna_Strip_right_handle_offset_;
PropertyRNA &rna_Strip_right_handle_offset = reinterpret_cast<PropertyRNA &>(rna_Strip_right_handle_offset_);

static IntPropertyRNA rna_Strip_channel_;
PropertyRNA &rna_Strip_channel = reinterpret_cast<PropertyRNA &>(rna_Strip_channel_);

static EnumPropertyRNA rna_Strip_blend_type_;
PropertyRNA &rna_Strip_blend_type = reinterpret_cast<PropertyRNA &>(rna_Strip_blend_type_);

static FloatPropertyRNA rna_Strip_blend_alpha_;
PropertyRNA &rna_Strip_blend_alpha = reinterpret_cast<PropertyRNA &>(rna_Strip_blend_alpha_);

static FloatPropertyRNA rna_Strip_effect_fader_;
PropertyRNA &rna_Strip_effect_fader = reinterpret_cast<PropertyRNA &>(rna_Strip_effect_fader_);

static BoolPropertyRNA rna_Strip_use_default_fade_;
PropertyRNA &rna_Strip_use_default_fade = reinterpret_cast<PropertyRNA &>(rna_Strip_use_default_fade_);

static EnumPropertyRNA rna_Strip_color_tag_;
PropertyRNA &rna_Strip_color_tag = reinterpret_cast<PropertyRNA &>(rna_Strip_color_tag_);

static CollectionPropertyRNA rna_Strip_modifiers_;
PropertyRNA &rna_Strip_modifiers = reinterpret_cast<PropertyRNA &>(rna_Strip_modifiers_);

static BoolPropertyRNA rna_Strip_show_retiming_keys_;
PropertyRNA &rna_Strip_show_retiming_keys = reinterpret_cast<PropertyRNA &>(rna_Strip_show_retiming_keys_);

static CollectionPropertyRNA rna_Strip_connections_;
PropertyRNA &rna_Strip_connections = reinterpret_cast<PropertyRNA &>(rna_Strip_connections_);

static BoolPropertyRNA rna_Strip_bl_system_properties_get_do_create_;
PropertyRNA &rna_Strip_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_Strip_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_Strip_bl_system_properties_get_system_properties_;
PropertyRNA &rna_Strip_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_Strip_bl_system_properties_get_system_properties_);

FunctionRNA *rna_Strip_bl_system_properties_get_func;
static IntPropertyRNA rna_Strip_strip_elem_from_frame_frame_;
PropertyRNA &rna_Strip_strip_elem_from_frame_frame = reinterpret_cast<PropertyRNA &>(rna_Strip_strip_elem_from_frame_frame_);

static PointerPropertyRNA rna_Strip_strip_elem_from_frame_elem_;
PropertyRNA &rna_Strip_strip_elem_from_frame_elem = reinterpret_cast<PropertyRNA &>(rna_Strip_strip_elem_from_frame_elem_);

FunctionRNA *rna_Strip_strip_elem_from_frame_func;
static PointerPropertyRNA rna_Strip_swap_other_;
PropertyRNA &rna_Strip_swap_other = reinterpret_cast<PropertyRNA &>(rna_Strip_swap_other_);

FunctionRNA *rna_Strip_swap_func;
static PointerPropertyRNA rna_Strip_move_to_meta_meta_sequence_;
PropertyRNA &rna_Strip_move_to_meta_meta_sequence = reinterpret_cast<PropertyRNA &>(rna_Strip_move_to_meta_meta_sequence_);

FunctionRNA *rna_Strip_move_to_meta_func;
static PointerPropertyRNA rna_Strip_parent_meta_sequence_;
PropertyRNA &rna_Strip_parent_meta_sequence = reinterpret_cast<PropertyRNA &>(rna_Strip_parent_meta_sequence_);

FunctionRNA *rna_Strip_parent_meta_func;
static EnumPropertyRNA rna_Strip_invalidate_cache_type_;
PropertyRNA &rna_Strip_invalidate_cache_type = reinterpret_cast<PropertyRNA &>(rna_Strip_invalidate_cache_type_);

FunctionRNA *rna_Strip_invalidate_cache_func;
static IntPropertyRNA rna_Strip_split_frame_;
PropertyRNA &rna_Strip_split_frame = reinterpret_cast<PropertyRNA &>(rna_Strip_split_frame_);

static EnumPropertyRNA rna_Strip_split_split_method_;
PropertyRNA &rna_Strip_split_split_method = reinterpret_cast<PropertyRNA &>(rna_Strip_split_split_method_);

static BoolPropertyRNA rna_Strip_split_ignore_connections_;
PropertyRNA &rna_Strip_split_ignore_connections = reinterpret_cast<PropertyRNA &>(rna_Strip_split_ignore_connections_);

static PointerPropertyRNA rna_Strip_split_sequence_;
PropertyRNA &rna_Strip_split_sequence = reinterpret_cast<PropertyRNA &>(rna_Strip_split_sequence_);

FunctionRNA *rna_Strip_split_func;
StructRNA *RNA_Strip;
void register_struct_Strip(BlenderRNA &brna)
{
	rna_Strip_rna_properties_ = {
		{&rna_Strip_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_rna_properties_begin, Strip_rna_properties_next, Strip_rna_properties_end, Strip_rna_properties_get, nullptr, nullptr, Strip_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Strip_rna_type_ = {
		{&rna_Strip_name, 	&rna_Strip_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Strip_name_ = {
		{&rna_Strip_type, 	&rna_Strip_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_name_get, Strip_name_length, Strip_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 62, ""
	};

	static const EnumPropertyItem rna_Strip_type_items[25] = {
		{0, "IMAGE", 0, "Image", ""	},
		{1, "META", 0, "Meta", ""	},
		{2, "SCENE", 0, "Scene", ""	},
		{3, "MOVIE", 0, "Movie", ""	},
		{6, "MOVIECLIP", 0, "Clip", ""	},
		{7, "MASK", 0, "Mask", ""	},
		{4, "SOUND", 0, "Sound", ""	},
		{8, "CROSS", 0, "Crossfade", ""	},
		{9, "ADD", 0, "Add", ""	},
		{10, "SUBTRACT", 0, "Subtract", ""	},
		{11, "ALPHA_OVER", 0, "Alpha Over", ""	},
		{12, "ALPHA_UNDER", 0, "Alpha Under", ""	},
		{13, "GAMMA_CROSS", 0, "Gamma Crossfade", ""	},
		{16, "COMPOSITOR", 0, "Compositor", ""	},
		{14, "MULTIPLY", 0, "Multiply", ""	},
		{25, "WIPE", 0, "Wipe", ""	},
		{26, "GLOW", 0, "Glow", ""	},
		{28, "COLOR", 0, "Color", ""	},
		{29, "SPEED", 0, "Speed", ""	},
		{30, "MULTICAM", 0, "Multicam Selector", ""	},
		{31, "ADJUSTMENT", 0, "Adjustment Layer", ""	},
		{40, "GAUSSIAN_BLUR", 0, "Gaussian Blur", ""	},
		{41, "TEXT", 0, "Text", ""	},
		{42, "COLORMIX", 0, "Color Mix", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Strip_type_ = {
		{&rna_Strip_select, 	&rna_Strip_name,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "Sequence",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, type), RawPropertyType(0), nullptr},
		Strip_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Strip_type_items, 24, 0
	};

	rna_Strip_select_ = {
		{&rna_Strip_select_left_handle, 	&rna_Strip_type,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Whether the strip is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279302, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_select_get, Strip_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Strip_select_left_handle_ = {
		{&rna_Strip_select_right_handle, 	&rna_Strip_select,
		-1, "select_left_handle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Left Handle Selected",
		"Whether the left handle is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279302, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_select_left_handle_get, Strip_select_left_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Strip_select_right_handle_ = {
		{&rna_Strip_mute, 	&rna_Strip_select_left_handle,
		-1, "select_right_handle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Right Handle Selected",
		"Whether the right handle is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279302, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_select_right_handle_get, Strip_select_right_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Strip_mute_ = {
		{&rna_Strip_lock, 	&rna_Strip_select_right_handle,
		-1, "mute", 4198659, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mute",
		"Disable strip so that it does not contribute any output",
		8, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Strip_mute_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_mute_get, Strip_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Strip_lock_ = {
		{&rna_Strip_frame_final_duration, 	&rna_Strip_mute,
		-1, "lock", 4097, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock",
		"Lock strip so that it cannot be transformed",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_lock_get, Strip_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_Strip_frame_final_duration_deprecated = {
	"Replaced by \'.duration\'.",
		510, 600,
};

	rna_Strip_frame_final_duration_ = {
		{&rna_Strip_duration, 	&rna_Strip_lock,
		-1, "frame_final_duration", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Length",
		"The length of the contents of this strip after the handles are applied",
		0, "*",
		&rna_Strip_frame_final_duration_deprecated,		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, rna_Strip_time_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_frame_final_duration_get, Strip_frame_final_duration_set, nullptr, nullptr, rna_Strip_duration_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Strip_duration_ = {
		{&rna_Strip_frame_duration, 	&rna_Strip_frame_final_duration,
		-1, "duration", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strip Duration",
		"Length of the strip in frames from left handle to right handle",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, rna_Strip_time_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_duration_get, Strip_duration_set, nullptr, nullptr, rna_Strip_duration_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_Strip_frame_duration_deprecated = {
	"Replaced by \'.content_duration\'.",
		510, 600,
};

	rna_Strip_frame_duration_ = {
		{&rna_Strip_content_duration, 	&rna_Strip_duration,
		-1, "frame_duration", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Length",
		"The length of the contents of this strip before the handles are applied",
		0, "*",
		&rna_Strip_frame_duration_deprecated,		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_frame_duration_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 1048574, 1, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Strip_content_duration_ = {
		{&rna_Strip_frame_start, 	&rna_Strip_frame_duration,
		-1, "content_duration", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Duration",
		"Length of the underlying strip source in frames, excluding handles",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_content_duration_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 1048574, 1, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_Strip_frame_start_deprecated = {
	"Replaced by \'.content_start\'.",
		510, 600,
};

	rna_Strip_frame_start_ = {
		{&rna_Strip_content_start, 	&rna_Strip_content_duration,
		-1, "frame_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"X position where the strip begins",
		0, "*",
		&rna_Strip_frame_start_deprecated,		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, rna_Strip_time_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_frame_start_get, Strip_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -FLT_MAX, FLT_MAX, 100.0f, 0, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Strip_content_start_ = {
		{&rna_Strip_content_end, 	&rna_Strip_frame_start,
		-1, "content_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Start",
		"Timeline frame where underlying strip source begins",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, rna_Strip_time_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_content_start_get, Strip_content_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -FLT_MAX, FLT_MAX, 100.0f, 0, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Strip_content_end_ = {
		{&rna_Strip_frame_final_start, 	&rna_Strip_content_start,
		-1, "content_end", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content End",
		"Timeline frame where underlying strip source ends",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_content_end_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, INT_MIN, INT_MAX, 100, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_Strip_frame_final_start_deprecated = {
	"Replaced by \'.left_handle\'.",
		510, 600,
};

	rna_Strip_frame_final_start_ = {
		{&rna_Strip_left_handle, 	&rna_Strip_content_end,
		-1, "frame_final_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"Start frame displayed in the sequence editor after offsets are applied, setting this is equivalent to moving the handle, not the actual start frame",
		0, "*",
		&rna_Strip_frame_final_start_deprecated,		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, rna_Strip_time_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_frame_final_start_get, Strip_frame_final_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Strip_left_handle_ = {
		{&rna_Strip_frame_final_end, 	&rna_Strip_frame_final_start,
		-1, "left_handle", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Left Handle",
		"Timeline frame of the left handle and the start frame of the strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, rna_Strip_time_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_left_handle_get, Strip_left_handle_set, nullptr, nullptr, rna_Strip_left_handle_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_Strip_frame_final_end_deprecated = {
	"Replaced by \'.right_handle\'.",
		510, 600,
};

	rna_Strip_frame_final_end_ = {
		{&rna_Strip_right_handle, 	&rna_Strip_left_handle,
		-1, "frame_final_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"End frame displayed in the sequence editor after offsets are applied",
		0, "*",
		&rna_Strip_frame_final_end_deprecated,		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, rna_Strip_time_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_frame_final_end_get, Strip_frame_final_end_set, nullptr, nullptr, rna_Strip_right_handle_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Strip_right_handle_ = {
		{&rna_Strip_frame_offset_start, 	&rna_Strip_frame_final_end,
		-1, "right_handle", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"Timeline frame of the right handle, which is the first frame where the strip no longer contributes to the output",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, rna_Strip_time_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_right_handle_get, Strip_right_handle_set, nullptr, nullptr, rna_Strip_right_handle_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_Strip_frame_offset_start_deprecated = {
	"Replaced by \'.left_handle_offset\'.",
		510, 600,
};

	rna_Strip_frame_offset_start_ = {
		{&rna_Strip_left_handle_offset, 	&rna_Strip_right_handle,
		-1, "frame_offset_start", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Start Offset",
		"Offset from the start of the strip in frames",
		0, "*",
		&rna_Strip_frame_offset_start_deprecated,		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_frame_change_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_frame_offset_start_get, Strip_frame_offset_start_set, nullptr, nullptr, rna_Strip_left_handle_offset_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Strip_left_handle_offset_ = {
		{&rna_Strip_frame_offset_end, 	&rna_Strip_frame_offset_start,
		-1, "left_handle_offset", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Left Handle Offset",
		"Rightward frame offset of the left handle from the start of the strip content",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_frame_change_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_left_handle_offset_get, Strip_left_handle_offset_set, nullptr, nullptr, rna_Strip_left_handle_offset_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const DeprecatedRNA rna_Strip_frame_offset_end_deprecated = {
	"Replaced by \'.right_handle_offset\'.",
		510, 600,
};

	rna_Strip_frame_offset_end_ = {
		{&rna_Strip_right_handle_offset, 	&rna_Strip_left_handle_offset,
		-1, "frame_offset_end", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "End Offset",
		"Offset from the end of the strip in frames",
		0, "*",
		&rna_Strip_frame_offset_end_deprecated,		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_frame_change_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_frame_offset_end_get, Strip_frame_offset_end_set, nullptr, nullptr, rna_Strip_right_handle_offset_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Strip_right_handle_offset_ = {
		{&rna_Strip_channel, 	&rna_Strip_frame_offset_end,
		-1, "right_handle_offset", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Right Handle Offset",
		"Leftward frame offset of the right handle from the end of the strip content",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_frame_change_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_right_handle_offset_get, Strip_right_handle_offset_set, nullptr, nullptr, rna_Strip_right_handle_offset_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Strip_channel_ = {
		{&rna_Strip_blend_type, 	&rna_Strip_right_handle_offset,
		-1, "channel", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Channel",
		"Vertical position of the strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_channel_get, Strip_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Strip_blend_type_items[33] = {
		{0, "REPLACE", 0, "Replace", ""	},
		{8, "CROSS", 0, "Cross", ""	},
		{0, "", 0, nullptr, nullptr	},
		{46, "DARKEN", 0, "Darken", ""	},
		{14, "MULTIPLY", 0, "Multiply", ""	},
		{47, "BURN", 0, "Color Burn", ""	},
		{48, "LINEAR_BURN", 0, "Linear Burn", ""	},
		{0, "", 0, nullptr, nullptr	},
		{44, "LIGHTEN", 0, "Lighten", ""	},
		{43, "SCREEN", 0, "Screen", ""	},
		{45, "DODGE", 0, "Color Dodge", ""	},
		{9, "ADD", 0, "Add", ""	},
		{0, "", 0, nullptr, nullptr	},
		{49, "OVERLAY", 0, "Overlay", ""	},
		{51, "SOFT_LIGHT", 0, "Soft Light", ""	},
		{50, "HARD_LIGHT", 0, "Hard Light", ""	},
		{54, "VIVID_LIGHT", 0, "Vivid Light", ""	},
		{53, "LINEAR_LIGHT", 0, "Linear Light", ""	},
		{52, "PIN_LIGHT", 0, "Pin Light", ""	},
		{0, "", 0, nullptr, nullptr	},
		{59, "DIFFERENCE", 0, "Difference", ""	},
		{60, "EXCLUSION", 0, "Exclusion", ""	},
		{10, "SUBTRACT", 0, "Subtract", ""	},
		{0, "", 0, nullptr, nullptr	},
		{55, "HUE", 0, "Hue", ""	},
		{56, "SATURATION", 0, "Saturation", ""	},
		{58, "COLOR", 0, "Color", ""	},
		{57, "VALUE", 0, "Value", ""	},
		{0, "", 0, nullptr, nullptr	},
		{11, "ALPHA_OVER", 0, "Alpha Over", ""	},
		{12, "ALPHA_UNDER", 0, "Alpha Under", ""	},
		{13, "GAMMA_CROSS", 0, "Gamma Cross", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Strip_blend_type_ = {
		{&rna_Strip_blend_alpha, 	&rna_Strip_channel,
		-1, "blend_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blending Mode",
		"Method for controlling how the strip combines with other strips",
		0, "Color",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, blend_mode), RawPropertyType(0), nullptr},
		Strip_blend_type_get, Strip_blend_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Strip_blend_type_items, 32, 11
	};

	rna_Strip_blend_alpha_ = {
		{&rna_Strip_effect_fader, 	&rna_Strip_blend_type,
		-1, "blend_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Blend Opacity",
		"Percentage of how much the strip\'s colors affect other strips",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_blend_alpha_get, Strip_blend_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Strip_effect_fader_ = {
		{&rna_Strip_use_default_fade, 	&rna_Strip_blend_alpha,
		-1, "effect_fader", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Effect Fader Position",
		"Custom fade value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, effect_fader), RawPropertyType(5), nullptr},
		Strip_effect_fader_get, Strip_effect_fader_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Strip_use_default_fade_ = {
		{&rna_Strip_color_tag, 	&rna_Strip_effect_fader,
		-1, "use_default_fade", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Default Fade",
		"Fade effect using the built-in default (usually makes the transition as long as the effect strip)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_use_default_fade_get, Strip_use_default_fade_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Strip_color_tag_ = {
		{&rna_Strip_modifiers, 	&rna_Strip_use_default_fade,
		-1, "color_tag", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strip Color",
		"Color tag for a strip",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_color_tag_get, Strip_color_tag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_strip_color_items, 10, 0
	};

	rna_Strip_modifiers_ = {
		{&rna_Strip_show_retiming_keys, 	&rna_Strip_color_tag,
		-1, "modifiers", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Modifiers",
		"Modifiers affecting this strip",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_StripModifiers},
		Strip_modifiers_begin, Strip_modifiers_next, Strip_modifiers_end, Strip_modifiers_get, nullptr, Strip_modifiers_lookup_int, Strip_modifiers_lookup_string, nullptr, RNA_StripModifier
	};

	rna_Strip_show_retiming_keys_ = {
		{&rna_Strip_connections, 	&rna_Strip_modifiers,
		-1, "show_retiming_keys", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Retiming Keys",
		"Show retiming keys, so they can be moved",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_show_retiming_keys_get, Strip_show_retiming_keys_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Strip_connections_ = {
		{nullptr, 	&rna_Strip_show_retiming_keys,
		-1, "connections", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Connected Strips",
		"Other strips currently connected to this strip",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Strip_connections_begin, Strip_connections_next, Strip_connections_end, Strip_connections_get, nullptr, Strip_connections_lookup_int, Strip_connections_lookup_string, nullptr, RNA_Strip
	};

	StructRNA *srna = RNA_Strip;
	srna->cont.properties = {&rna_Strip_rna_properties, &rna_Strip_connections};
	srna->identifier = "Strip";
	srna->flag = 516;
	srna->name = "Strip";
	srna->description = "A single container for content in the Video Sequence Editor";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
	{
	rna_Strip_bl_system_properties_get_do_create_ = {
		{&rna_Strip_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Strip_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_Strip_bl_system_properties_get_do_create,
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
		func->cont.properties = {&rna_Strip_bl_system_properties_get_do_create, &rna_Strip_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = Strip_bl_system_properties_get_call;
		func->c_ret = &rna_Strip_bl_system_properties_get_system_properties;
		rna_Strip_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Strip_strip_elem_from_frame_frame_ = {
		{&rna_Strip_strip_elem_from_frame_elem, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame",
		"The frame to get the strip element from",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Strip_strip_elem_from_frame_elem_ = {
		{nullptr, 	&rna_Strip_strip_elem_from_frame_frame,
		-1, "elem", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"strip element of the current frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_StripElement
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Strip_strip_elem_from_frame_frame, &rna_Strip_strip_elem_from_frame_elem};
		func->identifier = "strip_elem_from_frame";
		func->flag = 2048;
		func->description = "Return the strip element from a given frame or None";
		func->call = Strip_strip_elem_from_frame_call;
		func->c_ret = &rna_Strip_strip_elem_from_frame_elem;
		rna_Strip_strip_elem_from_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Strip_swap_other_ = {
		{nullptr, 	nullptr,
		-1, "other", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "Other",
		"Other strip to swap with",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Strip_swap_other, &rna_Strip_swap_other};
		func->identifier = "swap";
		func->flag = 2064;
		func->description = "Swap the position of this strip with another";
		func->call = Strip_swap_call;
		rna_Strip_swap_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Strip_move_to_meta_meta_sequence_ = {
		{nullptr, 	nullptr,
		-1, "meta_sequence", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "Destination Meta Strip",
		"Meta to move the strip into",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Strip_move_to_meta_meta_sequence, &rna_Strip_move_to_meta_meta_sequence};
		func->identifier = "move_to_meta";
		func->flag = 2068;
		func->description = "Move this strip into a meta Strip";
		func->call = Strip_move_to_meta_call;
		rna_Strip_move_to_meta_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Strip_parent_meta_sequence_ = {
		{nullptr, 	nullptr,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Parent meta strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Strip_parent_meta_sequence, &rna_Strip_parent_meta_sequence};
		func->identifier = "parent_meta";
		func->flag = 2048;
		func->description = "Returns parent meta Strip";
		func->call = Strip_parent_meta_call;
		func->c_ret = &rna_Strip_parent_meta_sequence;
		rna_Strip_parent_meta_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static const EnumPropertyItem rna_Strip_invalidate_cache_type_items[3] = {
		{1, "RAW", 0, "Raw", ""	},
		{8, "COMPOSITE", 0, "Composite", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Strip_invalidate_cache_type_ = {
		{nullptr, 	nullptr,
		-1, "type", 262147, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"Cache Type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Strip_invalidate_cache_type_items, 2, 1
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Strip_invalidate_cache_type, &rna_Strip_invalidate_cache_type};
		func->identifier = "invalidate_cache";
		func->flag = 2048;
		func->description = "Invalidate cached images for strip and all dependent strips";
		func->call = Strip_invalidate_cache_call;
		rna_Strip_invalidate_cache_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Strip_split_frame_ = {
		{&rna_Strip_split_split_method, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Frame where to split the strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	static const EnumPropertyItem rna_Strip_split_split_method_items[3] = {
		{0, "SOFT", 0, "Soft", ""	},
		{1, "HARD", 0, "Hard", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Strip_split_split_method_ = {
		{&rna_Strip_split_ignore_connections, 	&rna_Strip_split_frame,
		-1, "split_method", 262147, 0, 1, 0, 0, PropertyPathTemplateType(0), "Split Method",
		"The type of split operation to perform on strips",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Strip_split_split_method_items, 2, 0
	};
	rna_Strip_split_ignore_connections_ = {
		{&rna_Strip_split_sequence, 	&rna_Strip_split_split_method,
		-1, "ignore_connections", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Don\'t propagate split to connected strips",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Strip_split_sequence_ = {
		{nullptr, 	&rna_Strip_split_ignore_connections,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Right side Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Strip_split_frame, &rna_Strip_split_sequence};
		func->identifier = "split";
		func->flag = 2068;
		func->description = "Split Strip";
		func->call = Strip_split_call;
		func->c_ret = &rna_Strip_split_sequence;
		rna_Strip_split_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Strip Modifiers */
static CollectionPropertyRNA rna_StripModifiers_rna_properties_;
PropertyRNA &rna_StripModifiers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StripModifiers_rna_properties_);

static PointerPropertyRNA rna_StripModifiers_rna_type_;
PropertyRNA &rna_StripModifiers_rna_type = reinterpret_cast<PropertyRNA &>(rna_StripModifiers_rna_type_);

static PointerPropertyRNA rna_StripModifiers_active_;
PropertyRNA &rna_StripModifiers_active = reinterpret_cast<PropertyRNA &>(rna_StripModifiers_active_);

static StringPropertyRNA rna_StripModifiers_new_name_;
PropertyRNA &rna_StripModifiers_new_name = reinterpret_cast<PropertyRNA &>(rna_StripModifiers_new_name_);

static EnumPropertyRNA rna_StripModifiers_new_type_;
PropertyRNA &rna_StripModifiers_new_type = reinterpret_cast<PropertyRNA &>(rna_StripModifiers_new_type_);

static PointerPropertyRNA rna_StripModifiers_new_modifier_;
PropertyRNA &rna_StripModifiers_new_modifier = reinterpret_cast<PropertyRNA &>(rna_StripModifiers_new_modifier_);

FunctionRNA *rna_StripModifiers_new_func;
static PointerPropertyRNA rna_StripModifiers_remove_modifier_;
PropertyRNA &rna_StripModifiers_remove_modifier = reinterpret_cast<PropertyRNA &>(rna_StripModifiers_remove_modifier_);

FunctionRNA *rna_StripModifiers_remove_func;
FunctionRNA *rna_StripModifiers_clear_func;
StructRNA *RNA_StripModifiers;
void register_struct_StripModifiers(BlenderRNA &brna)
{
	rna_StripModifiers_rna_properties_ = {
		{&rna_StripModifiers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifiers_rna_properties_begin, StripModifiers_rna_properties_next, StripModifiers_rna_properties_end, StripModifiers_rna_properties_get, nullptr, nullptr, StripModifiers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StripModifiers_rna_type_ = {
		{&rna_StripModifiers_active, 	&rna_StripModifiers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifiers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_StripModifiers_active_ = {
		{nullptr, 	&rna_StripModifiers_rna_type,
		-1, "active", 1082130433, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Modifier",
		"The active strip modifier in the list",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifiers_active_get, StripModifiers_active_set, nullptr, nullptr,RNA_StripModifier
	};

	StructRNA *srna = RNA_StripModifiers;
	srna->cont.properties = {&rna_StripModifiers_rna_properties, &rna_StripModifiers_active};
	srna->identifier = "StripModifiers";
	srna->flag = 516;
	srna->name = "Strip Modifiers";
	srna->description = "Collection of strip modifiers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StripModifiers_rna_properties;
	{
	rna_StripModifiers_new_name_ = {
		{&rna_StripModifiers_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the modifier",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripModifiers_new_type_ = {
		{&rna_StripModifiers_new_modifier, 	&rna_StripModifiers_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Modifier type to add",
		0, "Sequence",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_strip_modifier_type_items, 11, 1
	};
	rna_StripModifiers_new_modifier_ = {
		{nullptr, 	&rna_StripModifiers_new_type,
		-1, "modifier", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created modifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_StripModifier
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripModifiers_new_name, &rna_StripModifiers_new_modifier};
		func->identifier = "new";
		func->flag = 2064;
		func->description = "Add a new modifier";
		func->call = StripModifiers_new_call;
		func->c_ret = &rna_StripModifiers_new_modifier;
		rna_StripModifiers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripModifiers_remove_modifier_ = {
		{nullptr, 	nullptr,
		-1, "modifier", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Modifier to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_StripModifier
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripModifiers_remove_modifier, &rna_StripModifiers_remove_modifier};
		func->identifier = "remove";
		func->flag = 2064;
		func->description = "Remove an existing modifier from the strip";
		func->call = StripModifiers_remove_call;
		rna_StripModifiers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 2048;
		func->description = "Remove all modifiers from the strip";
		func->call = StripModifiers_clear_call;
		rna_StripModifiers_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Sequence Editor */
static CollectionPropertyRNA rna_SequenceEditor_rna_properties_;
PropertyRNA &rna_SequenceEditor_rna_properties = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_rna_properties_);

static PointerPropertyRNA rna_SequenceEditor_rna_type_;
PropertyRNA &rna_SequenceEditor_rna_type = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_rna_type_);

static CollectionPropertyRNA rna_SequenceEditor_strips_;
PropertyRNA &rna_SequenceEditor_strips = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_strips_);

static CollectionPropertyRNA rna_SequenceEditor_strips_all_;
PropertyRNA &rna_SequenceEditor_strips_all = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_strips_all_);

static CollectionPropertyRNA rna_SequenceEditor_meta_stack_;
PropertyRNA &rna_SequenceEditor_meta_stack = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_meta_stack_);

static CollectionPropertyRNA rna_SequenceEditor_channels_;
PropertyRNA &rna_SequenceEditor_channels = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_channels_);

static PointerPropertyRNA rna_SequenceEditor_active_strip_;
PropertyRNA &rna_SequenceEditor_active_strip = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_active_strip_);

static BoolPropertyRNA rna_SequenceEditor_selected_retiming_keys_;
PropertyRNA &rna_SequenceEditor_selected_retiming_keys = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_selected_retiming_keys_);

static BoolPropertyRNA rna_SequenceEditor_show_overlay_frame_;
PropertyRNA &rna_SequenceEditor_show_overlay_frame = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_show_overlay_frame_);

static BoolPropertyRNA rna_SequenceEditor_use_overlay_frame_lock_;
PropertyRNA &rna_SequenceEditor_use_overlay_frame_lock = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_use_overlay_frame_lock_);

static BoolPropertyRNA rna_SequenceEditor_show_missing_media_;
PropertyRNA &rna_SequenceEditor_show_missing_media = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_show_missing_media_);

static IntPropertyRNA rna_SequenceEditor_overlay_frame_;
PropertyRNA &rna_SequenceEditor_overlay_frame = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_overlay_frame_);

static EnumPropertyRNA rna_SequenceEditor_proxy_storage_;
PropertyRNA &rna_SequenceEditor_proxy_storage = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_proxy_storage_);

static StringPropertyRNA rna_SequenceEditor_proxy_dir_;
PropertyRNA &rna_SequenceEditor_proxy_dir = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_proxy_dir_);

static BoolPropertyRNA rna_SequenceEditor_use_cache_raw_;
PropertyRNA &rna_SequenceEditor_use_cache_raw = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_use_cache_raw_);

static BoolPropertyRNA rna_SequenceEditor_use_cache_final_;
PropertyRNA &rna_SequenceEditor_use_cache_final = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_use_cache_final_);

static BoolPropertyRNA rna_SequenceEditor_use_prefetch_;
PropertyRNA &rna_SequenceEditor_use_prefetch = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_use_prefetch_);

static IntPropertyRNA rna_SequenceEditor_cache_raw_size_;
PropertyRNA &rna_SequenceEditor_cache_raw_size = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_cache_raw_size_);

static IntPropertyRNA rna_SequenceEditor_cache_final_size_;
PropertyRNA &rna_SequenceEditor_cache_final_size = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_cache_final_size_);

static PointerPropertyRNA rna_SequenceEditor_display_stack_meta_sequence_;
PropertyRNA &rna_SequenceEditor_display_stack_meta_sequence = reinterpret_cast<PropertyRNA &>(rna_SequenceEditor_display_stack_meta_sequence_);

FunctionRNA *rna_SequenceEditor_display_stack_func;
StructRNA *RNA_SequenceEditor;
void register_struct_SequenceEditor(BlenderRNA &brna)
{
	rna_SequenceEditor_rna_properties_ = {
		{&rna_SequenceEditor_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_rna_properties_begin, SequenceEditor_rna_properties_next, SequenceEditor_rna_properties_end, SequenceEditor_rna_properties_get, nullptr, nullptr, SequenceEditor_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_SequenceEditor_rna_type_ = {
		{&rna_SequenceEditor_strips, 	&rna_SequenceEditor_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_SequenceEditor_strips_ = {
		{&rna_SequenceEditor_strips_all, 	&rna_SequenceEditor_rna_type,
		-1, "strips", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strips",
		"Top-level strips only",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_StripsTopLevel},
		SequenceEditor_strips_begin, SequenceEditor_strips_next, SequenceEditor_strips_end, SequenceEditor_strips_get, nullptr, SequenceEditor_strips_lookup_int, SequenceEditor_strips_lookup_string, nullptr, RNA_Strip
	};

	rna_SequenceEditor_strips_all_ = {
		{&rna_SequenceEditor_meta_stack, 	&rna_SequenceEditor_strips,
		-1, "strips_all", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "All Strips",
		"All strips, recursively including those inside metastrips",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_strips_all_begin, SequenceEditor_strips_all_next, SequenceEditor_strips_all_end, SequenceEditor_strips_all_get, nullptr, nullptr, SequenceEditor_strips_all_lookup_string, nullptr, RNA_Strip
	};

	rna_SequenceEditor_meta_stack_ = {
		{&rna_SequenceEditor_channels, 	&rna_SequenceEditor_strips_all,
		-1, "meta_stack", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Meta Stack",
		"Meta strip stack, last is currently edited meta strip",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_meta_stack_begin, SequenceEditor_meta_stack_next, SequenceEditor_meta_stack_end, SequenceEditor_meta_stack_get, nullptr, SequenceEditor_meta_stack_lookup_int, SequenceEditor_meta_stack_lookup_string, nullptr, RNA_Strip
	};

	rna_SequenceEditor_channels_ = {
		{&rna_SequenceEditor_active_strip, 	&rna_SequenceEditor_meta_stack,
		-1, "channels", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Channels",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_channels_begin, SequenceEditor_channels_next, SequenceEditor_channels_end, SequenceEditor_channels_get, nullptr, SequenceEditor_channels_lookup_int, SequenceEditor_channels_lookup_string, nullptr, RNA_SequenceTimelineChannel
	};

	rna_SequenceEditor_active_strip_ = {
		{&rna_SequenceEditor_selected_retiming_keys, 	&rna_SequenceEditor_channels,
		-1, "active_strip", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Strip",
		"Sequencer\'s active strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_active_strip_get, SequenceEditor_active_strip_set, nullptr, nullptr,RNA_Strip
	};

	rna_SequenceEditor_selected_retiming_keys_ = {
		{&rna_SequenceEditor_show_overlay_frame, 	&rna_SequenceEditor_active_strip,
		-1, "selected_retiming_keys", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Retiming Key Selection Status",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_selected_retiming_keys_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SequenceEditor_show_overlay_frame_ = {
		{&rna_SequenceEditor_use_overlay_frame_lock, 	&rna_SequenceEditor_selected_retiming_keys,
		-1, "show_overlay_frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Overlay",
		"Partial overlay on top of the sequencer with a frame offset",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 269549568, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_show_overlay_frame_get, SequenceEditor_show_overlay_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SequenceEditor_use_overlay_frame_lock_ = {
		{&rna_SequenceEditor_show_missing_media, 	&rna_SequenceEditor_show_overlay_frame,
		-1, "use_overlay_frame_lock", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Overlay Lock",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 269549568, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_use_overlay_frame_lock_get, SequenceEditor_use_overlay_frame_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SequenceEditor_show_missing_media_ = {
		{&rna_SequenceEditor_overlay_frame, 	&rna_SequenceEditor_use_overlay_frame_lock,
		-1, "show_missing_media", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Missing Media",
		"Render missing images/movies with a solid magenta color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_SequenceEditor_update_cache, 269549568, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_show_missing_media_get, SequenceEditor_show_missing_media_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SequenceEditor_overlay_frame_ = {
		{&rna_SequenceEditor_proxy_storage, 	&rna_SequenceEditor_show_missing_media,
		-1, "overlay_frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Overlay Offset",
		"Number of frames to offset",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 269549568, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_overlay_frame_get, SequenceEditor_overlay_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_SequenceEditor_proxy_storage_items[3] = {
		{0, "PER_STRIP", 0, "Per Strip", "Store proxies using per strip settings"	},
		{1, "PROJECT", 0, "Project", "Store proxies using project directory"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_SequenceEditor_proxy_storage_ = {
		{&rna_SequenceEditor_proxy_dir, 	&rna_SequenceEditor_overlay_frame,
		-1, "proxy_storage", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Proxy Storage",
		"How to store proxies for this project",
		0, "Sequence",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_SequenceEditor_update_cache, 269549568, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Editing, proxy_storage), RawPropertyType(0), nullptr},
		SequenceEditor_proxy_storage_get, SequenceEditor_proxy_storage_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_SequenceEditor_proxy_storage_items, 2, 0
	};

	rna_SequenceEditor_proxy_dir_ = {
		{&rna_SequenceEditor_use_cache_raw, 	&rna_SequenceEditor_proxy_storage,
		-1, "proxy_dir", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "Proxy Directory",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_DIRPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_SequenceEditor_update_cache, 269549568, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_proxy_dir_get, SequenceEditor_proxy_dir_length, SequenceEditor_proxy_dir_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_SequenceEditor_use_cache_raw_ = {
		{&rna_SequenceEditor_use_cache_final, 	&rna_SequenceEditor_proxy_dir,
		-1, "use_cache_raw", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cache Raw",
		"Cache raw images read from disk, for faster tweaking of strip parameters at the cost of memory usage",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_SequenceEditor_cache_settings_changed, 269549568, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_use_cache_raw_get, SequenceEditor_use_cache_raw_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SequenceEditor_use_cache_final_ = {
		{&rna_SequenceEditor_use_prefetch, 	&rna_SequenceEditor_use_cache_raw,
		-1, "use_cache_final", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cache Final",
		"Cache final image for each frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_SequenceEditor_cache_settings_changed, 269549568, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_use_cache_final_get, SequenceEditor_use_cache_final_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SequenceEditor_use_prefetch_ = {
		{&rna_SequenceEditor_cache_raw_size, 	&rna_SequenceEditor_use_cache_final,
		-1, "use_prefetch", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Prefetch Frames",
		"Render frames ahead of current frame in the background for faster playback",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_use_prefetch_get, SequenceEditor_use_prefetch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SequenceEditor_cache_raw_size_ = {
		{&rna_SequenceEditor_cache_final_size, 	&rna_SequenceEditor_use_prefetch,
		-1, "cache_raw_size", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Raw Cache Size",
		"Size of raw source images cache in megabytes",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_cache_raw_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SequenceEditor_cache_final_size_ = {
		{nullptr, 	&rna_SequenceEditor_cache_raw_size,
		-1, "cache_final_size", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Final Cache Size",
		"Size of final rendered images cache in megabytes",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceEditor_cache_final_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_SequenceEditor;
	srna->cont.properties = {&rna_SequenceEditor_rna_properties, &rna_SequenceEditor_cache_final_size};
	srna->identifier = "SequenceEditor";
	srna->flag = 516;
	srna->name = "Sequence Editor";
	srna->description = "Sequence editing data for a Scene data-block";
	srna->translation_context = "*";
	srna->icon = 150;
	srna->iteratorproperty = &rna_SequenceEditor_rna_properties;
	srna->path = rna_SequenceEditor_path;
	{
	rna_SequenceEditor_display_stack_meta_sequence_ = {
		{nullptr, 	nullptr,
		-1, "meta_sequence", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "Meta Strip",
		"Meta to display its stack",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_SequenceEditor_display_stack_meta_sequence, &rna_SequenceEditor_display_stack_meta_sequence};
		func->identifier = "display_stack";
		func->flag = 2064;
		func->description = "Display strips stack";
		func->call = SequenceEditor_display_stack_call;
		rna_SequenceEditor_display_stack_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Strips */
static CollectionPropertyRNA rna_StripsTopLevel_rna_properties_;
PropertyRNA &rna_StripsTopLevel_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_rna_properties_);

static PointerPropertyRNA rna_StripsTopLevel_rna_type_;
PropertyRNA &rna_StripsTopLevel_rna_type = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_rna_type_);

static StringPropertyRNA rna_StripsTopLevel_new_clip_name_;
PropertyRNA &rna_StripsTopLevel_new_clip_name = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_clip_name_);

static PointerPropertyRNA rna_StripsTopLevel_new_clip_clip_;
PropertyRNA &rna_StripsTopLevel_new_clip_clip = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_clip_clip_);

static IntPropertyRNA rna_StripsTopLevel_new_clip_channel_;
PropertyRNA &rna_StripsTopLevel_new_clip_channel = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_clip_channel_);

static IntPropertyRNA rna_StripsTopLevel_new_clip_frame_start_;
PropertyRNA &rna_StripsTopLevel_new_clip_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_clip_frame_start_);

static PointerPropertyRNA rna_StripsTopLevel_new_clip_sequence_;
PropertyRNA &rna_StripsTopLevel_new_clip_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_clip_sequence_);

FunctionRNA *rna_StripsTopLevel_new_clip_func;
static StringPropertyRNA rna_StripsTopLevel_new_mask_name_;
PropertyRNA &rna_StripsTopLevel_new_mask_name = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_mask_name_);

static PointerPropertyRNA rna_StripsTopLevel_new_mask_mask_;
PropertyRNA &rna_StripsTopLevel_new_mask_mask = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_mask_mask_);

static IntPropertyRNA rna_StripsTopLevel_new_mask_channel_;
PropertyRNA &rna_StripsTopLevel_new_mask_channel = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_mask_channel_);

static IntPropertyRNA rna_StripsTopLevel_new_mask_frame_start_;
PropertyRNA &rna_StripsTopLevel_new_mask_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_mask_frame_start_);

static PointerPropertyRNA rna_StripsTopLevel_new_mask_sequence_;
PropertyRNA &rna_StripsTopLevel_new_mask_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_mask_sequence_);

FunctionRNA *rna_StripsTopLevel_new_mask_func;
static StringPropertyRNA rna_StripsTopLevel_new_scene_name_;
PropertyRNA &rna_StripsTopLevel_new_scene_name = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_scene_name_);

static PointerPropertyRNA rna_StripsTopLevel_new_scene_scene_;
PropertyRNA &rna_StripsTopLevel_new_scene_scene = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_scene_scene_);

static IntPropertyRNA rna_StripsTopLevel_new_scene_channel_;
PropertyRNA &rna_StripsTopLevel_new_scene_channel = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_scene_channel_);

static IntPropertyRNA rna_StripsTopLevel_new_scene_frame_start_;
PropertyRNA &rna_StripsTopLevel_new_scene_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_scene_frame_start_);

static PointerPropertyRNA rna_StripsTopLevel_new_scene_sequence_;
PropertyRNA &rna_StripsTopLevel_new_scene_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_scene_sequence_);

FunctionRNA *rna_StripsTopLevel_new_scene_func;
static StringPropertyRNA rna_StripsTopLevel_new_image_name_;
PropertyRNA &rna_StripsTopLevel_new_image_name = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_image_name_);

static StringPropertyRNA rna_StripsTopLevel_new_image_filepath_;
PropertyRNA &rna_StripsTopLevel_new_image_filepath = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_image_filepath_);

static IntPropertyRNA rna_StripsTopLevel_new_image_channel_;
PropertyRNA &rna_StripsTopLevel_new_image_channel = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_image_channel_);

static IntPropertyRNA rna_StripsTopLevel_new_image_frame_start_;
PropertyRNA &rna_StripsTopLevel_new_image_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_image_frame_start_);

static EnumPropertyRNA rna_StripsTopLevel_new_image_fit_method_;
PropertyRNA &rna_StripsTopLevel_new_image_fit_method = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_image_fit_method_);

static PointerPropertyRNA rna_StripsTopLevel_new_image_sequence_;
PropertyRNA &rna_StripsTopLevel_new_image_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_image_sequence_);

FunctionRNA *rna_StripsTopLevel_new_image_func;
static StringPropertyRNA rna_StripsTopLevel_new_movie_name_;
PropertyRNA &rna_StripsTopLevel_new_movie_name = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_movie_name_);

static StringPropertyRNA rna_StripsTopLevel_new_movie_filepath_;
PropertyRNA &rna_StripsTopLevel_new_movie_filepath = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_movie_filepath_);

static IntPropertyRNA rna_StripsTopLevel_new_movie_channel_;
PropertyRNA &rna_StripsTopLevel_new_movie_channel = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_movie_channel_);

static IntPropertyRNA rna_StripsTopLevel_new_movie_frame_start_;
PropertyRNA &rna_StripsTopLevel_new_movie_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_movie_frame_start_);

static EnumPropertyRNA rna_StripsTopLevel_new_movie_fit_method_;
PropertyRNA &rna_StripsTopLevel_new_movie_fit_method = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_movie_fit_method_);

static IntPropertyRNA rna_StripsTopLevel_new_movie_stream_;
PropertyRNA &rna_StripsTopLevel_new_movie_stream = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_movie_stream_);

static PointerPropertyRNA rna_StripsTopLevel_new_movie_sequence_;
PropertyRNA &rna_StripsTopLevel_new_movie_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_movie_sequence_);

FunctionRNA *rna_StripsTopLevel_new_movie_func;
static StringPropertyRNA rna_StripsTopLevel_new_sound_name_;
PropertyRNA &rna_StripsTopLevel_new_sound_name = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_sound_name_);

static StringPropertyRNA rna_StripsTopLevel_new_sound_filepath_;
PropertyRNA &rna_StripsTopLevel_new_sound_filepath = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_sound_filepath_);

static IntPropertyRNA rna_StripsTopLevel_new_sound_channel_;
PropertyRNA &rna_StripsTopLevel_new_sound_channel = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_sound_channel_);

static IntPropertyRNA rna_StripsTopLevel_new_sound_frame_start_;
PropertyRNA &rna_StripsTopLevel_new_sound_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_sound_frame_start_);

static IntPropertyRNA rna_StripsTopLevel_new_sound_stream_;
PropertyRNA &rna_StripsTopLevel_new_sound_stream = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_sound_stream_);

static PointerPropertyRNA rna_StripsTopLevel_new_sound_sequence_;
PropertyRNA &rna_StripsTopLevel_new_sound_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_sound_sequence_);

FunctionRNA *rna_StripsTopLevel_new_sound_func;
static StringPropertyRNA rna_StripsTopLevel_new_meta_name_;
PropertyRNA &rna_StripsTopLevel_new_meta_name = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_meta_name_);

static IntPropertyRNA rna_StripsTopLevel_new_meta_channel_;
PropertyRNA &rna_StripsTopLevel_new_meta_channel = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_meta_channel_);

static IntPropertyRNA rna_StripsTopLevel_new_meta_frame_start_;
PropertyRNA &rna_StripsTopLevel_new_meta_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_meta_frame_start_);

static PointerPropertyRNA rna_StripsTopLevel_new_meta_sequence_;
PropertyRNA &rna_StripsTopLevel_new_meta_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_meta_sequence_);

FunctionRNA *rna_StripsTopLevel_new_meta_func;
static StringPropertyRNA rna_StripsTopLevel_new_effect_name_;
PropertyRNA &rna_StripsTopLevel_new_effect_name = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_effect_name_);

static EnumPropertyRNA rna_StripsTopLevel_new_effect_type_;
PropertyRNA &rna_StripsTopLevel_new_effect_type = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_effect_type_);

static IntPropertyRNA rna_StripsTopLevel_new_effect_channel_;
PropertyRNA &rna_StripsTopLevel_new_effect_channel = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_effect_channel_);

static IntPropertyRNA rna_StripsTopLevel_new_effect_frame_start_;
PropertyRNA &rna_StripsTopLevel_new_effect_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_effect_frame_start_);

static IntPropertyRNA rna_StripsTopLevel_new_effect_length_;
PropertyRNA &rna_StripsTopLevel_new_effect_length = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_effect_length_);

static PointerPropertyRNA rna_StripsTopLevel_new_effect_input1_;
PropertyRNA &rna_StripsTopLevel_new_effect_input1 = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_effect_input1_);

static PointerPropertyRNA rna_StripsTopLevel_new_effect_input2_;
PropertyRNA &rna_StripsTopLevel_new_effect_input2 = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_effect_input2_);

static PointerPropertyRNA rna_StripsTopLevel_new_effect_sequence_;
PropertyRNA &rna_StripsTopLevel_new_effect_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_new_effect_sequence_);

FunctionRNA *rna_StripsTopLevel_new_effect_func;
static PointerPropertyRNA rna_StripsTopLevel_remove_sequence_;
PropertyRNA &rna_StripsTopLevel_remove_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsTopLevel_remove_sequence_);

FunctionRNA *rna_StripsTopLevel_remove_func;
StructRNA *RNA_StripsTopLevel;
void register_struct_StripsTopLevel(BlenderRNA &brna)
{
	rna_StripsTopLevel_rna_properties_ = {
		{&rna_StripsTopLevel_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripsTopLevel_rna_properties_begin, StripsTopLevel_rna_properties_next, StripsTopLevel_rna_properties_end, StripsTopLevel_rna_properties_get, nullptr, nullptr, StripsTopLevel_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StripsTopLevel_rna_type_ = {
		{nullptr, 	&rna_StripsTopLevel_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripsTopLevel_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_StripsTopLevel;
	srna->cont.properties = {&rna_StripsTopLevel_rna_properties, &rna_StripsTopLevel_rna_type};
	srna->identifier = "StripsTopLevel";
	srna->flag = 516;
	srna->name = "Strips";
	srna->description = "Collection of Strips";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StripsTopLevel_rna_properties;
	{
	rna_StripsTopLevel_new_clip_name_ = {
		{&rna_StripsTopLevel_new_clip_clip, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsTopLevel_new_clip_clip_ = {
		{&rna_StripsTopLevel_new_clip_channel, 	&rna_StripsTopLevel_new_clip_name,
		-1, "clip", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Movie clip to add",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieClip
	};
	rna_StripsTopLevel_new_clip_channel_ = {
		{&rna_StripsTopLevel_new_clip_frame_start, 	&rna_StripsTopLevel_new_clip_clip,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_clip_frame_start_ = {
		{&rna_StripsTopLevel_new_clip_sequence, 	&rna_StripsTopLevel_new_clip_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_clip_sequence_ = {
		{nullptr, 	&rna_StripsTopLevel_new_clip_frame_start,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsTopLevel_new_clip_name, &rna_StripsTopLevel_new_clip_sequence};
		func->identifier = "new_clip";
		func->flag = 2052;
		func->description = "Add a new movie clip strip";
		func->call = StripsTopLevel_new_clip_call;
		func->c_ret = &rna_StripsTopLevel_new_clip_sequence;
		rna_StripsTopLevel_new_clip_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsTopLevel_new_mask_name_ = {
		{&rna_StripsTopLevel_new_mask_mask, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsTopLevel_new_mask_mask_ = {
		{&rna_StripsTopLevel_new_mask_channel, 	&rna_StripsTopLevel_new_mask_name,
		-1, "mask", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Mask to add",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Mask
	};
	rna_StripsTopLevel_new_mask_channel_ = {
		{&rna_StripsTopLevel_new_mask_frame_start, 	&rna_StripsTopLevel_new_mask_mask,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_mask_frame_start_ = {
		{&rna_StripsTopLevel_new_mask_sequence, 	&rna_StripsTopLevel_new_mask_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_mask_sequence_ = {
		{nullptr, 	&rna_StripsTopLevel_new_mask_frame_start,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsTopLevel_new_mask_name, &rna_StripsTopLevel_new_mask_sequence};
		func->identifier = "new_mask";
		func->flag = 2052;
		func->description = "Add a new mask strip";
		func->call = StripsTopLevel_new_mask_call;
		func->c_ret = &rna_StripsTopLevel_new_mask_sequence;
		rna_StripsTopLevel_new_mask_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsTopLevel_new_scene_name_ = {
		{&rna_StripsTopLevel_new_scene_scene, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsTopLevel_new_scene_scene_ = {
		{&rna_StripsTopLevel_new_scene_channel, 	&rna_StripsTopLevel_new_scene_name,
		-1, "scene", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Scene to add",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	rna_StripsTopLevel_new_scene_channel_ = {
		{&rna_StripsTopLevel_new_scene_frame_start, 	&rna_StripsTopLevel_new_scene_scene,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_scene_frame_start_ = {
		{&rna_StripsTopLevel_new_scene_sequence, 	&rna_StripsTopLevel_new_scene_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_scene_sequence_ = {
		{nullptr, 	&rna_StripsTopLevel_new_scene_frame_start,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsTopLevel_new_scene_name, &rna_StripsTopLevel_new_scene_sequence};
		func->identifier = "new_scene";
		func->flag = 2052;
		func->description = "Add a new scene strip";
		func->call = StripsTopLevel_new_scene_call;
		func->c_ret = &rna_StripsTopLevel_new_scene_sequence;
		rna_StripsTopLevel_new_scene_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsTopLevel_new_image_name_ = {
		{&rna_StripsTopLevel_new_image_filepath, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsTopLevel_new_image_filepath_ = {
		{&rna_StripsTopLevel_new_image_channel, 	&rna_StripsTopLevel_new_image_name,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Filepath to image",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "File"
	};
	rna_StripsTopLevel_new_image_channel_ = {
		{&rna_StripsTopLevel_new_image_frame_start, 	&rna_StripsTopLevel_new_image_filepath,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_image_frame_start_ = {
		{&rna_StripsTopLevel_new_image_fit_method, 	&rna_StripsTopLevel_new_image_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_image_fit_method_ = {
		{&rna_StripsTopLevel_new_image_sequence, 	&rna_StripsTopLevel_new_image_frame_start,
		-1, "fit_method", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image Fit Method",
		"Mode for fitting the image to the canvas",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_strip_scale_method_items, 4, 3
	};
	rna_StripsTopLevel_new_image_sequence_ = {
		{nullptr, 	&rna_StripsTopLevel_new_image_fit_method,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsTopLevel_new_image_name, &rna_StripsTopLevel_new_image_sequence};
		func->identifier = "new_image";
		func->flag = 2068;
		func->description = "Add a new image strip";
		func->call = StripsTopLevel_new_image_call;
		func->c_ret = &rna_StripsTopLevel_new_image_sequence;
		rna_StripsTopLevel_new_image_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsTopLevel_new_movie_name_ = {
		{&rna_StripsTopLevel_new_movie_filepath, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsTopLevel_new_movie_filepath_ = {
		{&rna_StripsTopLevel_new_movie_channel, 	&rna_StripsTopLevel_new_movie_name,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Filepath to movie",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "File"
	};
	rna_StripsTopLevel_new_movie_channel_ = {
		{&rna_StripsTopLevel_new_movie_frame_start, 	&rna_StripsTopLevel_new_movie_filepath,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_movie_frame_start_ = {
		{&rna_StripsTopLevel_new_movie_fit_method, 	&rna_StripsTopLevel_new_movie_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_movie_fit_method_ = {
		{&rna_StripsTopLevel_new_movie_stream, 	&rna_StripsTopLevel_new_movie_frame_start,
		-1, "fit_method", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image Fit Method",
		"Mode for fitting the image to the canvas",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_strip_scale_method_items, 4, 3
	};
	rna_StripsTopLevel_new_movie_stream_ = {
		{&rna_StripsTopLevel_new_movie_sequence, 	&rna_StripsTopLevel_new_movie_fit_method,
		-1, "stream", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stream",
		"Stream index for multi-stream files",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 20, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_movie_sequence_ = {
		{nullptr, 	&rna_StripsTopLevel_new_movie_stream,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsTopLevel_new_movie_name, &rna_StripsTopLevel_new_movie_sequence};
		func->identifier = "new_movie";
		func->flag = 2068;
		func->description = "Add a new movie strip";
		func->call = StripsTopLevel_new_movie_call;
		func->c_ret = &rna_StripsTopLevel_new_movie_sequence;
		rna_StripsTopLevel_new_movie_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsTopLevel_new_sound_name_ = {
		{&rna_StripsTopLevel_new_sound_filepath, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsTopLevel_new_sound_filepath_ = {
		{&rna_StripsTopLevel_new_sound_channel, 	&rna_StripsTopLevel_new_sound_name,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Filepath to movie",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "File"
	};
	rna_StripsTopLevel_new_sound_channel_ = {
		{&rna_StripsTopLevel_new_sound_frame_start, 	&rna_StripsTopLevel_new_sound_filepath,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_sound_frame_start_ = {
		{&rna_StripsTopLevel_new_sound_stream, 	&rna_StripsTopLevel_new_sound_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_sound_stream_ = {
		{&rna_StripsTopLevel_new_sound_sequence, 	&rna_StripsTopLevel_new_sound_frame_start,
		-1, "stream", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stream",
		"Stream index for multi-stream files",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 20, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_sound_sequence_ = {
		{nullptr, 	&rna_StripsTopLevel_new_sound_stream,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsTopLevel_new_sound_name, &rna_StripsTopLevel_new_sound_sequence};
		func->identifier = "new_sound";
		func->flag = 2068;
		func->description = "Add a new sound strip";
		func->call = StripsTopLevel_new_sound_call;
		func->c_ret = &rna_StripsTopLevel_new_sound_sequence;
		rna_StripsTopLevel_new_sound_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsTopLevel_new_meta_name_ = {
		{&rna_StripsTopLevel_new_meta_channel, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsTopLevel_new_meta_channel_ = {
		{&rna_StripsTopLevel_new_meta_frame_start, 	&rna_StripsTopLevel_new_meta_name,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_meta_frame_start_ = {
		{&rna_StripsTopLevel_new_meta_sequence, 	&rna_StripsTopLevel_new_meta_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_meta_sequence_ = {
		{nullptr, 	&rna_StripsTopLevel_new_meta_frame_start,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsTopLevel_new_meta_name, &rna_StripsTopLevel_new_meta_sequence};
		func->identifier = "new_meta";
		func->flag = 2048;
		func->description = "Add a new meta strip";
		func->call = StripsTopLevel_new_meta_call;
		func->c_ret = &rna_StripsTopLevel_new_meta_sequence;
		rna_StripsTopLevel_new_meta_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsTopLevel_new_effect_name_ = {
		{&rna_StripsTopLevel_new_effect_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	static const EnumPropertyItem rna_StripsTopLevel_new_effect_type_items[18] = {
		{8, "CROSS", 0, "Crossfade", "Fade out of one video, fading into another"	},
		{9, "ADD", 0, "Add", "Add together color channels from two videos"	},
		{10, "SUBTRACT", 0, "Subtract", "Subtract one strip\'s color from another"	},
		{11, "ALPHA_OVER", 0, "Alpha Over", "Blend alpha on top of another video"	},
		{12, "ALPHA_UNDER", 0, "Alpha Under", "Blend alpha below another video"	},
		{13, "GAMMA_CROSS", 0, "Gamma Crossfade", "Crossfade with color correction"	},
		{16, "COMPOSITOR", 0, "Compositor", "Compositor based effect"	},
		{14, "MULTIPLY", 0, "Multiply", "Multiply color channels from two videos"	},
		{25, "WIPE", 0, "Wipe", "Sweep a transition line across the frame"	},
		{26, "GLOW", 0, "Glow", "Add blur and brightness to light areas"	},
		{28, "COLOR", 0, "Color", "Add a simple color strip"	},
		{29, "SPEED", 0, "Speed", "Timewarp video strips, modifying playback speed"	},
		{30, "MULTICAM", 0, "Multicam Selector", "Control active camera angles"	},
		{31, "ADJUSTMENT", 0, "Adjustment Layer", "Apply nondestructive effects"	},
		{40, "GAUSSIAN_BLUR", 0, "Gaussian Blur", "Soften details along axes"	},
		{41, "TEXT", 0, "Text", "Add a simple text strip"	},
		{42, "COLORMIX", 0, "Color Mix", "Combine two strips using blend modes"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StripsTopLevel_new_effect_type_ = {
		{&rna_StripsTopLevel_new_effect_channel, 	&rna_StripsTopLevel_new_effect_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"type for the new strip",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StripsTopLevel_new_effect_type_items, 17, 8
	};
	rna_StripsTopLevel_new_effect_channel_ = {
		{&rna_StripsTopLevel_new_effect_frame_start, 	&rna_StripsTopLevel_new_effect_type,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_effect_frame_start_ = {
		{&rna_StripsTopLevel_new_effect_length, 	&rna_StripsTopLevel_new_effect_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_effect_length_ = {
		{&rna_StripsTopLevel_new_effect_input1, 	&rna_StripsTopLevel_new_effect_frame_start,
		-1, "length", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Length of the strip in frames, or the length of each strip if multiple are added",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsTopLevel_new_effect_input1_ = {
		{&rna_StripsTopLevel_new_effect_input2, 	&rna_StripsTopLevel_new_effect_length,
		-1, "input1", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"First input strip for effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
	rna_StripsTopLevel_new_effect_input2_ = {
		{&rna_StripsTopLevel_new_effect_sequence, 	&rna_StripsTopLevel_new_effect_input1,
		-1, "input2", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Second input strip for effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
	rna_StripsTopLevel_new_effect_sequence_ = {
		{nullptr, 	&rna_StripsTopLevel_new_effect_input2,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsTopLevel_new_effect_name, &rna_StripsTopLevel_new_effect_sequence};
		func->identifier = "new_effect";
		func->flag = 2064;
		func->description = "Add a new effect strip";
		func->call = StripsTopLevel_new_effect_call;
		func->c_ret = &rna_StripsTopLevel_new_effect_sequence;
		rna_StripsTopLevel_new_effect_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsTopLevel_remove_sequence_ = {
		{nullptr, 	nullptr,
		-1, "sequence", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Strip to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsTopLevel_remove_sequence, &rna_StripsTopLevel_remove_sequence};
		func->identifier = "remove";
		func->flag = 2068;
		func->description = "Remove a Strip";
		func->call = StripsTopLevel_remove_call;
		rna_StripsTopLevel_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Channel */
static CollectionPropertyRNA rna_SequenceTimelineChannel_rna_properties_;
PropertyRNA &rna_SequenceTimelineChannel_rna_properties = reinterpret_cast<PropertyRNA &>(rna_SequenceTimelineChannel_rna_properties_);

static PointerPropertyRNA rna_SequenceTimelineChannel_rna_type_;
PropertyRNA &rna_SequenceTimelineChannel_rna_type = reinterpret_cast<PropertyRNA &>(rna_SequenceTimelineChannel_rna_type_);

static StringPropertyRNA rna_SequenceTimelineChannel_name_;
PropertyRNA &rna_SequenceTimelineChannel_name = reinterpret_cast<PropertyRNA &>(rna_SequenceTimelineChannel_name_);

static IntPropertyRNA rna_SequenceTimelineChannel_number_;
PropertyRNA &rna_SequenceTimelineChannel_number = reinterpret_cast<PropertyRNA &>(rna_SequenceTimelineChannel_number_);

static BoolPropertyRNA rna_SequenceTimelineChannel_lock_;
PropertyRNA &rna_SequenceTimelineChannel_lock = reinterpret_cast<PropertyRNA &>(rna_SequenceTimelineChannel_lock_);

static BoolPropertyRNA rna_SequenceTimelineChannel_mute_;
PropertyRNA &rna_SequenceTimelineChannel_mute = reinterpret_cast<PropertyRNA &>(rna_SequenceTimelineChannel_mute_);

StructRNA *RNA_SequenceTimelineChannel;
void register_struct_SequenceTimelineChannel(BlenderRNA &brna)
{
	rna_SequenceTimelineChannel_rna_properties_ = {
		{&rna_SequenceTimelineChannel_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceTimelineChannel_rna_properties_begin, SequenceTimelineChannel_rna_properties_next, SequenceTimelineChannel_rna_properties_end, SequenceTimelineChannel_rna_properties_get, nullptr, nullptr, SequenceTimelineChannel_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_SequenceTimelineChannel_rna_type_ = {
		{&rna_SequenceTimelineChannel_name, 	&rna_SequenceTimelineChannel_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceTimelineChannel_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_SequenceTimelineChannel_name_ = {
		{&rna_SequenceTimelineChannel_number, 	&rna_SequenceTimelineChannel_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceTimelineChannel_name_get, SequenceTimelineChannel_name_length, SequenceTimelineChannel_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_SequenceTimelineChannel_number_ = {
		{&rna_SequenceTimelineChannel_lock, 	&rna_SequenceTimelineChannel_name,
		-1, "number", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Number",
		"Channel number",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceTimelineChannel_number_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SequenceTimelineChannel_lock_ = {
		{&rna_SequenceTimelineChannel_mute, 	&rna_SequenceTimelineChannel_number,
		-1, "lock", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock channel",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceTimelineChannel_lock_get, SequenceTimelineChannel_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SequenceTimelineChannel_mute_ = {
		{nullptr, 	&rna_SequenceTimelineChannel_lock,
		-1, "mute", 4194307, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mute channel",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_SequenceTimelineChannel_mute_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequenceTimelineChannel_mute_get, SequenceTimelineChannel_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_SequenceTimelineChannel;
	srna->cont.properties = {&rna_SequenceTimelineChannel_rna_properties, &rna_SequenceTimelineChannel_mute};
	srna->identifier = "SequenceTimelineChannel";
	srna->flag = 516;
	srna->name = "Channel";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_SequenceTimelineChannel_name;
	srna->iteratorproperty = &rna_SequenceTimelineChannel_rna_properties;
	srna->path = rna_SeqTimelineChannel_path;
};

/* Image Strip */
static StringPropertyRNA rna_ImageStrip_directory_;
PropertyRNA &rna_ImageStrip_directory = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_directory_);

static CollectionPropertyRNA rna_ImageStrip_elements_;
PropertyRNA &rna_ImageStrip_elements = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_elements_);

static CollectionPropertyRNA rna_ImageStrip_retiming_keys_;
PropertyRNA &rna_ImageStrip_retiming_keys = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_retiming_keys_);

static BoolPropertyRNA rna_ImageStrip_use_multiview_;
PropertyRNA &rna_ImageStrip_use_multiview = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_use_multiview_);

static EnumPropertyRNA rna_ImageStrip_views_format_;
PropertyRNA &rna_ImageStrip_views_format = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_views_format_);

static PointerPropertyRNA rna_ImageStrip_stereo_3d_format_;
PropertyRNA &rna_ImageStrip_stereo_3d_format = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_stereo_3d_format_);

static BoolPropertyRNA rna_ImageStrip_use_deinterlace_;
PropertyRNA &rna_ImageStrip_use_deinterlace = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_use_deinterlace_);

static EnumPropertyRNA rna_ImageStrip_alpha_mode_;
PropertyRNA &rna_ImageStrip_alpha_mode = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_alpha_mode_);

static BoolPropertyRNA rna_ImageStrip_use_flip_x_;
PropertyRNA &rna_ImageStrip_use_flip_x = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_use_flip_x_);

static BoolPropertyRNA rna_ImageStrip_use_flip_y_;
PropertyRNA &rna_ImageStrip_use_flip_y = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_use_flip_y_);

static BoolPropertyRNA rna_ImageStrip_use_float_;
PropertyRNA &rna_ImageStrip_use_float = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_use_float_);

static BoolPropertyRNA rna_ImageStrip_use_reverse_frames_;
PropertyRNA &rna_ImageStrip_use_reverse_frames = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_use_reverse_frames_);

static FloatPropertyRNA rna_ImageStrip_color_multiply_;
PropertyRNA &rna_ImageStrip_color_multiply = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_color_multiply_);

static BoolPropertyRNA rna_ImageStrip_multiply_alpha_;
PropertyRNA &rna_ImageStrip_multiply_alpha = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_multiply_alpha_);

static FloatPropertyRNA rna_ImageStrip_color_saturation_;
PropertyRNA &rna_ImageStrip_color_saturation = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_color_saturation_);

static FloatPropertyRNA rna_ImageStrip_strobe_;
PropertyRNA &rna_ImageStrip_strobe = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_strobe_);

static PointerPropertyRNA rna_ImageStrip_transform_;
PropertyRNA &rna_ImageStrip_transform = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_transform_);

static PointerPropertyRNA rna_ImageStrip_crop_;
PropertyRNA &rna_ImageStrip_crop = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_crop_);

static BoolPropertyRNA rna_ImageStrip_use_proxy_;
PropertyRNA &rna_ImageStrip_use_proxy = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_use_proxy_);

static PointerPropertyRNA rna_ImageStrip_proxy_;
PropertyRNA &rna_ImageStrip_proxy = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_proxy_);

static IntPropertyRNA rna_ImageStrip_animation_offset_start_;
PropertyRNA &rna_ImageStrip_animation_offset_start = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_animation_offset_start_);

static IntPropertyRNA rna_ImageStrip_content_trim_start_;
PropertyRNA &rna_ImageStrip_content_trim_start = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_content_trim_start_);

static IntPropertyRNA rna_ImageStrip_animation_offset_end_;
PropertyRNA &rna_ImageStrip_animation_offset_end = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_animation_offset_end_);

static IntPropertyRNA rna_ImageStrip_content_trim_end_;
PropertyRNA &rna_ImageStrip_content_trim_end = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_content_trim_end_);

static PointerPropertyRNA rna_ImageStrip_colorspace_settings_;
PropertyRNA &rna_ImageStrip_colorspace_settings = reinterpret_cast<PropertyRNA &>(rna_ImageStrip_colorspace_settings_);

StructRNA *RNA_ImageStrip;
void register_struct_ImageStrip(BlenderRNA &brna)
{
	rna_ImageStrip_directory_ = {
		{&rna_ImageStrip_elements, 	nullptr,
		-1, "directory", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "Directory",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_DIRPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {768, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_directory_get, ImageStrip_directory_length, ImageStrip_directory_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 768, ""
	};

	rna_ImageStrip_elements_ = {
		{&rna_ImageStrip_retiming_keys, 	&rna_ImageStrip_directory,
		-1, "elements", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Elements",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_StripElements},
		ImageStrip_elements_begin, ImageStrip_elements_next, ImageStrip_elements_end, ImageStrip_elements_get, ImageStrip_elements_length, ImageStrip_elements_lookup_int, nullptr, nullptr, RNA_StripElement
	};

	rna_ImageStrip_retiming_keys_ = {
		{&rna_ImageStrip_use_multiview, 	&rna_ImageStrip_elements,
		-1, "retiming_keys", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Retiming Keys",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_RetimingKeys},
		ImageStrip_retiming_keys_begin, ImageStrip_retiming_keys_next, ImageStrip_retiming_keys_end, ImageStrip_retiming_keys_get, ImageStrip_retiming_keys_length, ImageStrip_retiming_keys_lookup_int, nullptr, nullptr, RNA_RetimingKey
	};

	rna_ImageStrip_use_multiview_ = {
		{&rna_ImageStrip_views_format, 	&rna_ImageStrip_retiming_keys,
		-1, "use_multiview", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Multi-View",
		"Use Multiple Views (when available)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_views_format_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_use_multiview_get, ImageStrip_use_multiview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageStrip_views_format_ = {
		{&rna_ImageStrip_stereo_3d_format, 	&rna_ImageStrip_use_multiview,
		-1, "views_format", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Views Format",
		"Mode to load image views",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_views_format_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, views_format), RawPropertyType(2), nullptr},
		ImageStrip_views_format_get, ImageStrip_views_format_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_views_format_items, 2, 0
	};

	rna_ImageStrip_stereo_3d_format_ = {
		{&rna_ImageStrip_use_deinterlace, 	&rna_ImageStrip_views_format,
		-1, "stereo_3d_format", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stereo 3D Format",
		"Settings for stereo 3D",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_stereo_3d_format_get, nullptr, nullptr, nullptr,RNA_Stereo3dFormat
	};

	rna_ImageStrip_use_deinterlace_ = {
		{&rna_ImageStrip_alpha_mode, 	&rna_ImageStrip_stereo_3d_format,
		-1, "use_deinterlace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deinterlace",
		"Remove fields from video movies",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_reopen_files_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_use_deinterlace_get, ImageStrip_use_deinterlace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_ImageStrip_alpha_mode_items[3] = {
		{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"	},
		{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ImageStrip_alpha_mode_ = {
		{&rna_ImageStrip_use_flip_x, 	&rna_ImageStrip_use_deinterlace,
		-1, "alpha_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alpha Mode",
		"Representation of alpha information in the RGBA pixels",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, alpha_mode), RawPropertyType(6), nullptr},
		ImageStrip_alpha_mode_get, ImageStrip_alpha_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ImageStrip_alpha_mode_items, 2, 0
	};

	rna_ImageStrip_use_flip_x_ = {
		{&rna_ImageStrip_use_flip_y, 	&rna_ImageStrip_alpha_mode,
		-1, "use_flip_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip X",
		"Flip on the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_use_flip_x_get, ImageStrip_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageStrip_use_flip_y_ = {
		{&rna_ImageStrip_use_float, 	&rna_ImageStrip_use_flip_x,
		-1, "use_flip_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip Y",
		"Flip on the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_use_flip_y_get, ImageStrip_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageStrip_use_float_ = {
		{&rna_ImageStrip_use_reverse_frames, 	&rna_ImageStrip_use_flip_y,
		-1, "use_float", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Convert Float",
		"Convert input to float data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_use_float_get, ImageStrip_use_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageStrip_use_reverse_frames_ = {
		{&rna_ImageStrip_color_multiply, 	&rna_ImageStrip_use_float,
		-1, "use_reverse_frames", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reverse Frames",
		"Reverse frame order",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_use_reverse_frames_get, ImageStrip_use_reverse_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageStrip_color_multiply_ = {
		{&rna_ImageStrip_multiply_alpha, 	&rna_ImageStrip_use_reverse_frames,
		-1, "color_multiply", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Multiply Colors",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, mul), RawPropertyType(5), nullptr},
		ImageStrip_color_multiply_get, ImageStrip_color_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ImageStrip_multiply_alpha_ = {
		{&rna_ImageStrip_color_saturation, 	&rna_ImageStrip_color_multiply,
		-1, "multiply_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Alpha",
		"Multiply alpha along with color channels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_multiply_alpha_get, ImageStrip_multiply_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageStrip_color_saturation_ = {
		{&rna_ImageStrip_strobe, 	&rna_ImageStrip_multiply_alpha,
		-1, "color_saturation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Adjust the intensity of the input\'s color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, sat), RawPropertyType(5), nullptr},
		ImageStrip_color_saturation_get, ImageStrip_color_saturation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ImageStrip_strobe_ = {
		{&rna_ImageStrip_transform, 	&rna_ImageStrip_color_saturation,
		-1, "strobe", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strobe",
		"Only display every nth frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, strobe), RawPropertyType(5), nullptr},
		ImageStrip_strobe_get, ImageStrip_strobe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ImageStrip_transform_ = {
		{&rna_ImageStrip_crop, 	&rna_ImageStrip_strobe,
		-1, "transform", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transform",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_transform_get, nullptr, nullptr, nullptr,RNA_StripTransform
	};

	rna_ImageStrip_crop_ = {
		{&rna_ImageStrip_use_proxy, 	&rna_ImageStrip_transform,
		-1, "crop", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Crop",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_crop_get, nullptr, nullptr, nullptr,RNA_StripCrop
	};

	rna_ImageStrip_use_proxy_ = {
		{&rna_ImageStrip_proxy, 	&rna_ImageStrip_crop,
		-1, "use_proxy", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Proxy",
		"Use a preview proxy for this strip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_use_proxy_get, ImageStrip_use_proxy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ImageStrip_proxy_ = {
		{&rna_ImageStrip_animation_offset_start, 	&rna_ImageStrip_use_proxy,
		-1, "proxy", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Proxy",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_proxy_get, nullptr, nullptr, nullptr,RNA_StripProxy
	};

	static const DeprecatedRNA rna_ImageStrip_animation_offset_start_deprecated = {
	"Replaced by \'.content_trim_start\'.",
		510, 600,
};

	rna_ImageStrip_animation_offset_start_ = {
		{&rna_ImageStrip_content_trim_start, 	&rna_ImageStrip_proxy,
		-1, "animation_offset_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Start Offset",
		"Animation start offset (trim start)",
		0, "*",
		&rna_ImageStrip_animation_offset_start_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_animation_offset_start_get, ImageStrip_animation_offset_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImageStrip_content_trim_start_ = {
		{&rna_ImageStrip_animation_offset_end, 	&rna_ImageStrip_animation_offset_start,
		-1, "content_trim_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim Start",
		"Number of frames to ignore from the start of the underlying source. The source content is trimmed, and previous frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_content_trim_start_get, ImageStrip_content_trim_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_ImageStrip_animation_offset_end_deprecated = {
	"Replaced by \'.content_trim_end\'.",
		510, 600,
};

	rna_ImageStrip_animation_offset_end_ = {
		{&rna_ImageStrip_content_trim_end, 	&rna_ImageStrip_content_trim_start,
		-1, "animation_offset_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation End Offset",
		"Animation end offset (trim end)",
		0, "*",
		&rna_ImageStrip_animation_offset_end_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_animation_offset_end_get, ImageStrip_animation_offset_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImageStrip_content_trim_end_ = {
		{&rna_ImageStrip_colorspace_settings, 	&rna_ImageStrip_animation_offset_end,
		-1, "content_trim_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim End",
		"Number of frames to ignore from the end of the underlying source. The source content is trimmed, and future frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_content_trim_end_get, ImageStrip_content_trim_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ImageStrip_colorspace_settings_ = {
		{nullptr, 	&rna_ImageStrip_content_trim_end,
		-1, "colorspace_settings", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Space Settings",
		"Input color space settings",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ImageStrip_colorspace_settings_get, nullptr, nullptr, nullptr,RNA_ColorManagedInputColorspaceSettings
	};

	StructRNA *srna = RNA_ImageStrip;
	srna->cont.properties = {&rna_ImageStrip_directory, &rna_ImageStrip_colorspace_settings};
	srna->identifier = "ImageStrip";
	srna->flag = 516;
	srna->name = "Image Strip";
	srna->description = "Sequence strip to load one or more images";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_Strip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* StripElements */
static CollectionPropertyRNA rna_StripElements_rna_properties_;
PropertyRNA &rna_StripElements_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StripElements_rna_properties_);

static PointerPropertyRNA rna_StripElements_rna_type_;
PropertyRNA &rna_StripElements_rna_type = reinterpret_cast<PropertyRNA &>(rna_StripElements_rna_type_);

static StringPropertyRNA rna_StripElements_append_filename_;
PropertyRNA &rna_StripElements_append_filename = reinterpret_cast<PropertyRNA &>(rna_StripElements_append_filename_);

static PointerPropertyRNA rna_StripElements_append_elem_;
PropertyRNA &rna_StripElements_append_elem = reinterpret_cast<PropertyRNA &>(rna_StripElements_append_elem_);

FunctionRNA *rna_StripElements_append_func;
static IntPropertyRNA rna_StripElements_pop_index_;
PropertyRNA &rna_StripElements_pop_index = reinterpret_cast<PropertyRNA &>(rna_StripElements_pop_index_);

FunctionRNA *rna_StripElements_pop_func;
StructRNA *RNA_StripElements;
void register_struct_StripElements(BlenderRNA &brna)
{
	rna_StripElements_rna_properties_ = {
		{&rna_StripElements_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripElements_rna_properties_begin, StripElements_rna_properties_next, StripElements_rna_properties_end, StripElements_rna_properties_get, nullptr, nullptr, StripElements_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StripElements_rna_type_ = {
		{nullptr, 	&rna_StripElements_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripElements_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_StripElements;
	srna->cont.properties = {&rna_StripElements_rna_properties, &rna_StripElements_rna_type};
	srna->identifier = "StripElements";
	srna->flag = 516;
	srna->name = "StripElements";
	srna->description = "Collection of StripElement";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StripElements_rna_properties;
	{
	rna_StripElements_append_filename_ = {
		{&rna_StripElements_append_elem, 	nullptr,
		-1, "filename", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Filepath to image",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "File"
	};
	rna_StripElements_append_elem_ = {
		{nullptr, 	&rna_StripElements_append_filename,
		-1, "elem", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New StripElement",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_StripElement
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripElements_append_filename, &rna_StripElements_append_elem};
		func->identifier = "append";
		func->flag = 2048;
		func->description = "Push an image from ImageStrip.directory";
		func->call = StripElements_append_call;
		func->c_ret = &rna_StripElements_append_elem;
		rna_StripElements_append_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripElements_pop_index_ = {
		{nullptr, 	nullptr,
		-1, "index", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Index of image to remove",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripElements_pop_index, &rna_StripElements_pop_index};
		func->identifier = "pop";
		func->flag = 2064;
		func->description = "Pop an image off the collection";
		func->call = StripElements_pop_call;
		rna_StripElements_pop_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Meta Strip */
static CollectionPropertyRNA rna_MetaStrip_strips_;
PropertyRNA &rna_MetaStrip_strips = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_strips_);

static CollectionPropertyRNA rna_MetaStrip_channels_;
PropertyRNA &rna_MetaStrip_channels = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_channels_);

static FloatPropertyRNA rna_MetaStrip_volume_;
PropertyRNA &rna_MetaStrip_volume = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_volume_);

static BoolPropertyRNA rna_MetaStrip_use_deinterlace_;
PropertyRNA &rna_MetaStrip_use_deinterlace = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_use_deinterlace_);

static EnumPropertyRNA rna_MetaStrip_alpha_mode_;
PropertyRNA &rna_MetaStrip_alpha_mode = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_alpha_mode_);

static BoolPropertyRNA rna_MetaStrip_use_flip_x_;
PropertyRNA &rna_MetaStrip_use_flip_x = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_use_flip_x_);

static BoolPropertyRNA rna_MetaStrip_use_flip_y_;
PropertyRNA &rna_MetaStrip_use_flip_y = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_use_flip_y_);

static BoolPropertyRNA rna_MetaStrip_use_float_;
PropertyRNA &rna_MetaStrip_use_float = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_use_float_);

static BoolPropertyRNA rna_MetaStrip_use_reverse_frames_;
PropertyRNA &rna_MetaStrip_use_reverse_frames = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_use_reverse_frames_);

static FloatPropertyRNA rna_MetaStrip_color_multiply_;
PropertyRNA &rna_MetaStrip_color_multiply = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_color_multiply_);

static BoolPropertyRNA rna_MetaStrip_multiply_alpha_;
PropertyRNA &rna_MetaStrip_multiply_alpha = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_multiply_alpha_);

static FloatPropertyRNA rna_MetaStrip_color_saturation_;
PropertyRNA &rna_MetaStrip_color_saturation = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_color_saturation_);

static FloatPropertyRNA rna_MetaStrip_strobe_;
PropertyRNA &rna_MetaStrip_strobe = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_strobe_);

static PointerPropertyRNA rna_MetaStrip_transform_;
PropertyRNA &rna_MetaStrip_transform = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_transform_);

static PointerPropertyRNA rna_MetaStrip_crop_;
PropertyRNA &rna_MetaStrip_crop = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_crop_);

static BoolPropertyRNA rna_MetaStrip_use_proxy_;
PropertyRNA &rna_MetaStrip_use_proxy = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_use_proxy_);

static PointerPropertyRNA rna_MetaStrip_proxy_;
PropertyRNA &rna_MetaStrip_proxy = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_proxy_);

static IntPropertyRNA rna_MetaStrip_animation_offset_start_;
PropertyRNA &rna_MetaStrip_animation_offset_start = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_animation_offset_start_);

static IntPropertyRNA rna_MetaStrip_content_trim_start_;
PropertyRNA &rna_MetaStrip_content_trim_start = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_content_trim_start_);

static IntPropertyRNA rna_MetaStrip_animation_offset_end_;
PropertyRNA &rna_MetaStrip_animation_offset_end = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_animation_offset_end_);

static IntPropertyRNA rna_MetaStrip_content_trim_end_;
PropertyRNA &rna_MetaStrip_content_trim_end = reinterpret_cast<PropertyRNA &>(rna_MetaStrip_content_trim_end_);

FunctionRNA *rna_MetaStrip_separate_func;
StructRNA *RNA_MetaStrip;
void register_struct_MetaStrip(BlenderRNA &brna)
{
	rna_MetaStrip_strips_ = {
		{&rna_MetaStrip_channels, 	nullptr,
		-1, "strips", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strips",
		"Strips nested in meta strip",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_StripsMeta},
		MetaStrip_strips_begin, MetaStrip_strips_next, MetaStrip_strips_end, MetaStrip_strips_get, nullptr, MetaStrip_strips_lookup_int, MetaStrip_strips_lookup_string, nullptr, RNA_Strip
	};

	rna_MetaStrip_channels_ = {
		{&rna_MetaStrip_volume, 	&rna_MetaStrip_strips,
		-1, "channels", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Channels",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_channels_begin, MetaStrip_channels_next, MetaStrip_channels_end, MetaStrip_channels_get, nullptr, MetaStrip_channels_lookup_int, MetaStrip_channels_lookup_string, nullptr, RNA_SequenceTimelineChannel
	};

	rna_MetaStrip_volume_ = {
		{&rna_MetaStrip_use_deinterlace, 	&rna_MetaStrip_channels,
		-1, "volume", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Volume",
		"Playback volume of the sound",
		0, "Sound",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_audio_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, volume), RawPropertyType(5), nullptr},
		MetaStrip_volume_get, MetaStrip_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MetaStrip_use_deinterlace_ = {
		{&rna_MetaStrip_alpha_mode, 	&rna_MetaStrip_volume,
		-1, "use_deinterlace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deinterlace",
		"Remove fields from video movies",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_reopen_files_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_use_deinterlace_get, MetaStrip_use_deinterlace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_MetaStrip_alpha_mode_items[3] = {
		{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"	},
		{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MetaStrip_alpha_mode_ = {
		{&rna_MetaStrip_use_flip_x, 	&rna_MetaStrip_use_deinterlace,
		-1, "alpha_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alpha Mode",
		"Representation of alpha information in the RGBA pixels",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, alpha_mode), RawPropertyType(6), nullptr},
		MetaStrip_alpha_mode_get, MetaStrip_alpha_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MetaStrip_alpha_mode_items, 2, 0
	};

	rna_MetaStrip_use_flip_x_ = {
		{&rna_MetaStrip_use_flip_y, 	&rna_MetaStrip_alpha_mode,
		-1, "use_flip_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip X",
		"Flip on the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_use_flip_x_get, MetaStrip_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MetaStrip_use_flip_y_ = {
		{&rna_MetaStrip_use_float, 	&rna_MetaStrip_use_flip_x,
		-1, "use_flip_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip Y",
		"Flip on the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_use_flip_y_get, MetaStrip_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MetaStrip_use_float_ = {
		{&rna_MetaStrip_use_reverse_frames, 	&rna_MetaStrip_use_flip_y,
		-1, "use_float", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Convert Float",
		"Convert input to float data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_use_float_get, MetaStrip_use_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MetaStrip_use_reverse_frames_ = {
		{&rna_MetaStrip_color_multiply, 	&rna_MetaStrip_use_float,
		-1, "use_reverse_frames", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reverse Frames",
		"Reverse frame order",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_use_reverse_frames_get, MetaStrip_use_reverse_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MetaStrip_color_multiply_ = {
		{&rna_MetaStrip_multiply_alpha, 	&rna_MetaStrip_use_reverse_frames,
		-1, "color_multiply", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Multiply Colors",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, mul), RawPropertyType(5), nullptr},
		MetaStrip_color_multiply_get, MetaStrip_color_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MetaStrip_multiply_alpha_ = {
		{&rna_MetaStrip_color_saturation, 	&rna_MetaStrip_color_multiply,
		-1, "multiply_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Alpha",
		"Multiply alpha along with color channels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_multiply_alpha_get, MetaStrip_multiply_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MetaStrip_color_saturation_ = {
		{&rna_MetaStrip_strobe, 	&rna_MetaStrip_multiply_alpha,
		-1, "color_saturation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Adjust the intensity of the input\'s color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, sat), RawPropertyType(5), nullptr},
		MetaStrip_color_saturation_get, MetaStrip_color_saturation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MetaStrip_strobe_ = {
		{&rna_MetaStrip_transform, 	&rna_MetaStrip_color_saturation,
		-1, "strobe", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strobe",
		"Only display every nth frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, strobe), RawPropertyType(5), nullptr},
		MetaStrip_strobe_get, MetaStrip_strobe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MetaStrip_transform_ = {
		{&rna_MetaStrip_crop, 	&rna_MetaStrip_strobe,
		-1, "transform", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transform",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_transform_get, nullptr, nullptr, nullptr,RNA_StripTransform
	};

	rna_MetaStrip_crop_ = {
		{&rna_MetaStrip_use_proxy, 	&rna_MetaStrip_transform,
		-1, "crop", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Crop",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_crop_get, nullptr, nullptr, nullptr,RNA_StripCrop
	};

	rna_MetaStrip_use_proxy_ = {
		{&rna_MetaStrip_proxy, 	&rna_MetaStrip_crop,
		-1, "use_proxy", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Proxy",
		"Use a preview proxy for this strip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_use_proxy_get, MetaStrip_use_proxy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MetaStrip_proxy_ = {
		{&rna_MetaStrip_animation_offset_start, 	&rna_MetaStrip_use_proxy,
		-1, "proxy", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Proxy",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_proxy_get, nullptr, nullptr, nullptr,RNA_StripProxy
	};

	static const DeprecatedRNA rna_MetaStrip_animation_offset_start_deprecated = {
	"Replaced by \'.content_trim_start\'.",
		510, 600,
};

	rna_MetaStrip_animation_offset_start_ = {
		{&rna_MetaStrip_content_trim_start, 	&rna_MetaStrip_proxy,
		-1, "animation_offset_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Start Offset",
		"Animation start offset (trim start)",
		0, "*",
		&rna_MetaStrip_animation_offset_start_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_animation_offset_start_get, MetaStrip_animation_offset_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MetaStrip_content_trim_start_ = {
		{&rna_MetaStrip_animation_offset_end, 	&rna_MetaStrip_animation_offset_start,
		-1, "content_trim_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim Start",
		"Number of frames to ignore from the start of the underlying source. The source content is trimmed, and previous frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_content_trim_start_get, MetaStrip_content_trim_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_MetaStrip_animation_offset_end_deprecated = {
	"Replaced by \'.content_trim_end\'.",
		510, 600,
};

	rna_MetaStrip_animation_offset_end_ = {
		{&rna_MetaStrip_content_trim_end, 	&rna_MetaStrip_content_trim_start,
		-1, "animation_offset_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation End Offset",
		"Animation end offset (trim end)",
		0, "*",
		&rna_MetaStrip_animation_offset_end_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_animation_offset_end_get, MetaStrip_animation_offset_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MetaStrip_content_trim_end_ = {
		{nullptr, 	&rna_MetaStrip_animation_offset_end,
		-1, "content_trim_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim End",
		"Number of frames to ignore from the end of the underlying source. The source content is trimmed, and future frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaStrip_content_trim_end_get, MetaStrip_content_trim_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MetaStrip;
	srna->cont.properties = {&rna_MetaStrip_strips, &rna_MetaStrip_content_trim_end};
	srna->identifier = "MetaStrip";
	srna->flag = 516;
	srna->name = "Meta Strip";
	srna->description = "Sequence strip to group other strips as a single sequence strip";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_Strip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "separate";
		func->flag = 2052;
		func->description = "Separate meta";
		func->call = MetaStrip_separate_call;
		rna_MetaStrip_separate_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Strips */
static CollectionPropertyRNA rna_StripsMeta_rna_properties_;
PropertyRNA &rna_StripsMeta_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_rna_properties_);

static PointerPropertyRNA rna_StripsMeta_rna_type_;
PropertyRNA &rna_StripsMeta_rna_type = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_rna_type_);

static StringPropertyRNA rna_StripsMeta_new_clip_name_;
PropertyRNA &rna_StripsMeta_new_clip_name = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_clip_name_);

static PointerPropertyRNA rna_StripsMeta_new_clip_clip_;
PropertyRNA &rna_StripsMeta_new_clip_clip = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_clip_clip_);

static IntPropertyRNA rna_StripsMeta_new_clip_channel_;
PropertyRNA &rna_StripsMeta_new_clip_channel = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_clip_channel_);

static IntPropertyRNA rna_StripsMeta_new_clip_frame_start_;
PropertyRNA &rna_StripsMeta_new_clip_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_clip_frame_start_);

static PointerPropertyRNA rna_StripsMeta_new_clip_sequence_;
PropertyRNA &rna_StripsMeta_new_clip_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_clip_sequence_);

FunctionRNA *rna_StripsMeta_new_clip_func;
static StringPropertyRNA rna_StripsMeta_new_mask_name_;
PropertyRNA &rna_StripsMeta_new_mask_name = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_mask_name_);

static PointerPropertyRNA rna_StripsMeta_new_mask_mask_;
PropertyRNA &rna_StripsMeta_new_mask_mask = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_mask_mask_);

static IntPropertyRNA rna_StripsMeta_new_mask_channel_;
PropertyRNA &rna_StripsMeta_new_mask_channel = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_mask_channel_);

static IntPropertyRNA rna_StripsMeta_new_mask_frame_start_;
PropertyRNA &rna_StripsMeta_new_mask_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_mask_frame_start_);

static PointerPropertyRNA rna_StripsMeta_new_mask_sequence_;
PropertyRNA &rna_StripsMeta_new_mask_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_mask_sequence_);

FunctionRNA *rna_StripsMeta_new_mask_func;
static StringPropertyRNA rna_StripsMeta_new_scene_name_;
PropertyRNA &rna_StripsMeta_new_scene_name = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_scene_name_);

static PointerPropertyRNA rna_StripsMeta_new_scene_scene_;
PropertyRNA &rna_StripsMeta_new_scene_scene = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_scene_scene_);

static IntPropertyRNA rna_StripsMeta_new_scene_channel_;
PropertyRNA &rna_StripsMeta_new_scene_channel = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_scene_channel_);

static IntPropertyRNA rna_StripsMeta_new_scene_frame_start_;
PropertyRNA &rna_StripsMeta_new_scene_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_scene_frame_start_);

static PointerPropertyRNA rna_StripsMeta_new_scene_sequence_;
PropertyRNA &rna_StripsMeta_new_scene_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_scene_sequence_);

FunctionRNA *rna_StripsMeta_new_scene_func;
static StringPropertyRNA rna_StripsMeta_new_image_name_;
PropertyRNA &rna_StripsMeta_new_image_name = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_image_name_);

static StringPropertyRNA rna_StripsMeta_new_image_filepath_;
PropertyRNA &rna_StripsMeta_new_image_filepath = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_image_filepath_);

static IntPropertyRNA rna_StripsMeta_new_image_channel_;
PropertyRNA &rna_StripsMeta_new_image_channel = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_image_channel_);

static IntPropertyRNA rna_StripsMeta_new_image_frame_start_;
PropertyRNA &rna_StripsMeta_new_image_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_image_frame_start_);

static EnumPropertyRNA rna_StripsMeta_new_image_fit_method_;
PropertyRNA &rna_StripsMeta_new_image_fit_method = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_image_fit_method_);

static PointerPropertyRNA rna_StripsMeta_new_image_sequence_;
PropertyRNA &rna_StripsMeta_new_image_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_image_sequence_);

FunctionRNA *rna_StripsMeta_new_image_func;
static StringPropertyRNA rna_StripsMeta_new_movie_name_;
PropertyRNA &rna_StripsMeta_new_movie_name = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_movie_name_);

static StringPropertyRNA rna_StripsMeta_new_movie_filepath_;
PropertyRNA &rna_StripsMeta_new_movie_filepath = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_movie_filepath_);

static IntPropertyRNA rna_StripsMeta_new_movie_channel_;
PropertyRNA &rna_StripsMeta_new_movie_channel = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_movie_channel_);

static IntPropertyRNA rna_StripsMeta_new_movie_frame_start_;
PropertyRNA &rna_StripsMeta_new_movie_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_movie_frame_start_);

static EnumPropertyRNA rna_StripsMeta_new_movie_fit_method_;
PropertyRNA &rna_StripsMeta_new_movie_fit_method = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_movie_fit_method_);

static IntPropertyRNA rna_StripsMeta_new_movie_stream_;
PropertyRNA &rna_StripsMeta_new_movie_stream = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_movie_stream_);

static PointerPropertyRNA rna_StripsMeta_new_movie_sequence_;
PropertyRNA &rna_StripsMeta_new_movie_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_movie_sequence_);

FunctionRNA *rna_StripsMeta_new_movie_func;
static StringPropertyRNA rna_StripsMeta_new_sound_name_;
PropertyRNA &rna_StripsMeta_new_sound_name = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_sound_name_);

static StringPropertyRNA rna_StripsMeta_new_sound_filepath_;
PropertyRNA &rna_StripsMeta_new_sound_filepath = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_sound_filepath_);

static IntPropertyRNA rna_StripsMeta_new_sound_channel_;
PropertyRNA &rna_StripsMeta_new_sound_channel = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_sound_channel_);

static IntPropertyRNA rna_StripsMeta_new_sound_frame_start_;
PropertyRNA &rna_StripsMeta_new_sound_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_sound_frame_start_);

static IntPropertyRNA rna_StripsMeta_new_sound_stream_;
PropertyRNA &rna_StripsMeta_new_sound_stream = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_sound_stream_);

static PointerPropertyRNA rna_StripsMeta_new_sound_sequence_;
PropertyRNA &rna_StripsMeta_new_sound_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_sound_sequence_);

FunctionRNA *rna_StripsMeta_new_sound_func;
static StringPropertyRNA rna_StripsMeta_new_meta_name_;
PropertyRNA &rna_StripsMeta_new_meta_name = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_meta_name_);

static IntPropertyRNA rna_StripsMeta_new_meta_channel_;
PropertyRNA &rna_StripsMeta_new_meta_channel = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_meta_channel_);

static IntPropertyRNA rna_StripsMeta_new_meta_frame_start_;
PropertyRNA &rna_StripsMeta_new_meta_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_meta_frame_start_);

static PointerPropertyRNA rna_StripsMeta_new_meta_sequence_;
PropertyRNA &rna_StripsMeta_new_meta_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_meta_sequence_);

FunctionRNA *rna_StripsMeta_new_meta_func;
static StringPropertyRNA rna_StripsMeta_new_effect_name_;
PropertyRNA &rna_StripsMeta_new_effect_name = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_effect_name_);

static EnumPropertyRNA rna_StripsMeta_new_effect_type_;
PropertyRNA &rna_StripsMeta_new_effect_type = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_effect_type_);

static IntPropertyRNA rna_StripsMeta_new_effect_channel_;
PropertyRNA &rna_StripsMeta_new_effect_channel = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_effect_channel_);

static IntPropertyRNA rna_StripsMeta_new_effect_frame_start_;
PropertyRNA &rna_StripsMeta_new_effect_frame_start = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_effect_frame_start_);

static IntPropertyRNA rna_StripsMeta_new_effect_length_;
PropertyRNA &rna_StripsMeta_new_effect_length = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_effect_length_);

static PointerPropertyRNA rna_StripsMeta_new_effect_input1_;
PropertyRNA &rna_StripsMeta_new_effect_input1 = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_effect_input1_);

static PointerPropertyRNA rna_StripsMeta_new_effect_input2_;
PropertyRNA &rna_StripsMeta_new_effect_input2 = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_effect_input2_);

static PointerPropertyRNA rna_StripsMeta_new_effect_sequence_;
PropertyRNA &rna_StripsMeta_new_effect_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_new_effect_sequence_);

FunctionRNA *rna_StripsMeta_new_effect_func;
static PointerPropertyRNA rna_StripsMeta_remove_sequence_;
PropertyRNA &rna_StripsMeta_remove_sequence = reinterpret_cast<PropertyRNA &>(rna_StripsMeta_remove_sequence_);

FunctionRNA *rna_StripsMeta_remove_func;
StructRNA *RNA_StripsMeta;
void register_struct_StripsMeta(BlenderRNA &brna)
{
	rna_StripsMeta_rna_properties_ = {
		{&rna_StripsMeta_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripsMeta_rna_properties_begin, StripsMeta_rna_properties_next, StripsMeta_rna_properties_end, StripsMeta_rna_properties_get, nullptr, nullptr, StripsMeta_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StripsMeta_rna_type_ = {
		{nullptr, 	&rna_StripsMeta_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripsMeta_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_StripsMeta;
	srna->cont.properties = {&rna_StripsMeta_rna_properties, &rna_StripsMeta_rna_type};
	srna->identifier = "StripsMeta";
	srna->flag = 516;
	srna->name = "Strips";
	srna->description = "Collection of Strips";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StripsMeta_rna_properties;
	{
	rna_StripsMeta_new_clip_name_ = {
		{&rna_StripsMeta_new_clip_clip, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsMeta_new_clip_clip_ = {
		{&rna_StripsMeta_new_clip_channel, 	&rna_StripsMeta_new_clip_name,
		-1, "clip", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Movie clip to add",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieClip
	};
	rna_StripsMeta_new_clip_channel_ = {
		{&rna_StripsMeta_new_clip_frame_start, 	&rna_StripsMeta_new_clip_clip,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_clip_frame_start_ = {
		{&rna_StripsMeta_new_clip_sequence, 	&rna_StripsMeta_new_clip_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_clip_sequence_ = {
		{nullptr, 	&rna_StripsMeta_new_clip_frame_start,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsMeta_new_clip_name, &rna_StripsMeta_new_clip_sequence};
		func->identifier = "new_clip";
		func->flag = 2052;
		func->description = "Add a new movie clip strip";
		func->call = StripsMeta_new_clip_call;
		func->c_ret = &rna_StripsMeta_new_clip_sequence;
		rna_StripsMeta_new_clip_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsMeta_new_mask_name_ = {
		{&rna_StripsMeta_new_mask_mask, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsMeta_new_mask_mask_ = {
		{&rna_StripsMeta_new_mask_channel, 	&rna_StripsMeta_new_mask_name,
		-1, "mask", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Mask to add",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Mask
	};
	rna_StripsMeta_new_mask_channel_ = {
		{&rna_StripsMeta_new_mask_frame_start, 	&rna_StripsMeta_new_mask_mask,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_mask_frame_start_ = {
		{&rna_StripsMeta_new_mask_sequence, 	&rna_StripsMeta_new_mask_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_mask_sequence_ = {
		{nullptr, 	&rna_StripsMeta_new_mask_frame_start,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsMeta_new_mask_name, &rna_StripsMeta_new_mask_sequence};
		func->identifier = "new_mask";
		func->flag = 2052;
		func->description = "Add a new mask strip";
		func->call = StripsMeta_new_mask_call;
		func->c_ret = &rna_StripsMeta_new_mask_sequence;
		rna_StripsMeta_new_mask_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsMeta_new_scene_name_ = {
		{&rna_StripsMeta_new_scene_scene, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsMeta_new_scene_scene_ = {
		{&rna_StripsMeta_new_scene_channel, 	&rna_StripsMeta_new_scene_name,
		-1, "scene", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Scene to add",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	rna_StripsMeta_new_scene_channel_ = {
		{&rna_StripsMeta_new_scene_frame_start, 	&rna_StripsMeta_new_scene_scene,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_scene_frame_start_ = {
		{&rna_StripsMeta_new_scene_sequence, 	&rna_StripsMeta_new_scene_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_scene_sequence_ = {
		{nullptr, 	&rna_StripsMeta_new_scene_frame_start,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsMeta_new_scene_name, &rna_StripsMeta_new_scene_sequence};
		func->identifier = "new_scene";
		func->flag = 2052;
		func->description = "Add a new scene strip";
		func->call = StripsMeta_new_scene_call;
		func->c_ret = &rna_StripsMeta_new_scene_sequence;
		rna_StripsMeta_new_scene_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsMeta_new_image_name_ = {
		{&rna_StripsMeta_new_image_filepath, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsMeta_new_image_filepath_ = {
		{&rna_StripsMeta_new_image_channel, 	&rna_StripsMeta_new_image_name,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Filepath to image",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "File"
	};
	rna_StripsMeta_new_image_channel_ = {
		{&rna_StripsMeta_new_image_frame_start, 	&rna_StripsMeta_new_image_filepath,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_image_frame_start_ = {
		{&rna_StripsMeta_new_image_fit_method, 	&rna_StripsMeta_new_image_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_image_fit_method_ = {
		{&rna_StripsMeta_new_image_sequence, 	&rna_StripsMeta_new_image_frame_start,
		-1, "fit_method", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image Fit Method",
		"Mode for fitting the image to the canvas",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_strip_scale_method_items, 4, 3
	};
	rna_StripsMeta_new_image_sequence_ = {
		{nullptr, 	&rna_StripsMeta_new_image_fit_method,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsMeta_new_image_name, &rna_StripsMeta_new_image_sequence};
		func->identifier = "new_image";
		func->flag = 2068;
		func->description = "Add a new image strip";
		func->call = StripsMeta_new_image_call;
		func->c_ret = &rna_StripsMeta_new_image_sequence;
		rna_StripsMeta_new_image_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsMeta_new_movie_name_ = {
		{&rna_StripsMeta_new_movie_filepath, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsMeta_new_movie_filepath_ = {
		{&rna_StripsMeta_new_movie_channel, 	&rna_StripsMeta_new_movie_name,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Filepath to movie",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "File"
	};
	rna_StripsMeta_new_movie_channel_ = {
		{&rna_StripsMeta_new_movie_frame_start, 	&rna_StripsMeta_new_movie_filepath,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_movie_frame_start_ = {
		{&rna_StripsMeta_new_movie_fit_method, 	&rna_StripsMeta_new_movie_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_movie_fit_method_ = {
		{&rna_StripsMeta_new_movie_stream, 	&rna_StripsMeta_new_movie_frame_start,
		-1, "fit_method", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image Fit Method",
		"Mode for fitting the image to the canvas",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_strip_scale_method_items, 4, 3
	};
	rna_StripsMeta_new_movie_stream_ = {
		{&rna_StripsMeta_new_movie_sequence, 	&rna_StripsMeta_new_movie_fit_method,
		-1, "stream", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stream",
		"Stream index for multi-stream files",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 20, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_movie_sequence_ = {
		{nullptr, 	&rna_StripsMeta_new_movie_stream,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsMeta_new_movie_name, &rna_StripsMeta_new_movie_sequence};
		func->identifier = "new_movie";
		func->flag = 2068;
		func->description = "Add a new movie strip";
		func->call = StripsMeta_new_movie_call;
		func->c_ret = &rna_StripsMeta_new_movie_sequence;
		rna_StripsMeta_new_movie_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsMeta_new_sound_name_ = {
		{&rna_StripsMeta_new_sound_filepath, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsMeta_new_sound_filepath_ = {
		{&rna_StripsMeta_new_sound_channel, 	&rna_StripsMeta_new_sound_name,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Filepath to movie",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "File"
	};
	rna_StripsMeta_new_sound_channel_ = {
		{&rna_StripsMeta_new_sound_frame_start, 	&rna_StripsMeta_new_sound_filepath,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_sound_frame_start_ = {
		{&rna_StripsMeta_new_sound_stream, 	&rna_StripsMeta_new_sound_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_sound_stream_ = {
		{&rna_StripsMeta_new_sound_sequence, 	&rna_StripsMeta_new_sound_frame_start,
		-1, "stream", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stream",
		"Stream index for multi-stream files",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 20, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_sound_sequence_ = {
		{nullptr, 	&rna_StripsMeta_new_sound_stream,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsMeta_new_sound_name, &rna_StripsMeta_new_sound_sequence};
		func->identifier = "new_sound";
		func->flag = 2068;
		func->description = "Add a new sound strip";
		func->call = StripsMeta_new_sound_call;
		func->c_ret = &rna_StripsMeta_new_sound_sequence;
		rna_StripsMeta_new_sound_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsMeta_new_meta_name_ = {
		{&rna_StripsMeta_new_meta_channel, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	rna_StripsMeta_new_meta_channel_ = {
		{&rna_StripsMeta_new_meta_frame_start, 	&rna_StripsMeta_new_meta_name,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_meta_frame_start_ = {
		{&rna_StripsMeta_new_meta_sequence, 	&rna_StripsMeta_new_meta_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_meta_sequence_ = {
		{nullptr, 	&rna_StripsMeta_new_meta_frame_start,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsMeta_new_meta_name, &rna_StripsMeta_new_meta_sequence};
		func->identifier = "new_meta";
		func->flag = 2048;
		func->description = "Add a new meta strip";
		func->call = StripsMeta_new_meta_call;
		func->c_ret = &rna_StripsMeta_new_meta_sequence;
		rna_StripsMeta_new_meta_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsMeta_new_effect_name_ = {
		{&rna_StripsMeta_new_effect_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the new strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Name"
	};
	static const EnumPropertyItem rna_StripsMeta_new_effect_type_items[18] = {
		{8, "CROSS", 0, "Crossfade", "Fade out of one video, fading into another"	},
		{9, "ADD", 0, "Add", "Add together color channels from two videos"	},
		{10, "SUBTRACT", 0, "Subtract", "Subtract one strip\'s color from another"	},
		{11, "ALPHA_OVER", 0, "Alpha Over", "Blend alpha on top of another video"	},
		{12, "ALPHA_UNDER", 0, "Alpha Under", "Blend alpha below another video"	},
		{13, "GAMMA_CROSS", 0, "Gamma Crossfade", "Crossfade with color correction"	},
		{16, "COMPOSITOR", 0, "Compositor", "Compositor based effect"	},
		{14, "MULTIPLY", 0, "Multiply", "Multiply color channels from two videos"	},
		{25, "WIPE", 0, "Wipe", "Sweep a transition line across the frame"	},
		{26, "GLOW", 0, "Glow", "Add blur and brightness to light areas"	},
		{28, "COLOR", 0, "Color", "Add a simple color strip"	},
		{29, "SPEED", 0, "Speed", "Timewarp video strips, modifying playback speed"	},
		{30, "MULTICAM", 0, "Multicam Selector", "Control active camera angles"	},
		{31, "ADJUSTMENT", 0, "Adjustment Layer", "Apply nondestructive effects"	},
		{40, "GAUSSIAN_BLUR", 0, "Gaussian Blur", "Soften details along axes"	},
		{41, "TEXT", 0, "Text", "Add a simple text strip"	},
		{42, "COLORMIX", 0, "Color Mix", "Combine two strips using blend modes"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StripsMeta_new_effect_type_ = {
		{&rna_StripsMeta_new_effect_channel, 	&rna_StripsMeta_new_effect_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"type for the new strip",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StripsMeta_new_effect_type_items, 17, 8
	};
	rna_StripsMeta_new_effect_channel_ = {
		{&rna_StripsMeta_new_effect_frame_start, 	&rna_StripsMeta_new_effect_type,
		-1, "channel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Channel",
		"The channel for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_effect_frame_start_ = {
		{&rna_StripsMeta_new_effect_length, 	&rna_StripsMeta_new_effect_channel,
		-1, "frame_start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The start frame for the new strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_effect_length_ = {
		{&rna_StripsMeta_new_effect_input1, 	&rna_StripsMeta_new_effect_frame_start,
		-1, "length", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Length of the strip in frames, or the length of each strip if multiple are added",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_StripsMeta_new_effect_input1_ = {
		{&rna_StripsMeta_new_effect_input2, 	&rna_StripsMeta_new_effect_length,
		-1, "input1", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"First input strip for effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
	rna_StripsMeta_new_effect_input2_ = {
		{&rna_StripsMeta_new_effect_sequence, 	&rna_StripsMeta_new_effect_input1,
		-1, "input2", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Second input strip for effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
	rna_StripsMeta_new_effect_sequence_ = {
		{nullptr, 	&rna_StripsMeta_new_effect_input2,
		-1, "sequence", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsMeta_new_effect_name, &rna_StripsMeta_new_effect_sequence};
		func->identifier = "new_effect";
		func->flag = 2064;
		func->description = "Add a new effect strip";
		func->call = StripsMeta_new_effect_call;
		func->c_ret = &rna_StripsMeta_new_effect_sequence;
		rna_StripsMeta_new_effect_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_StripsMeta_remove_sequence_ = {
		{nullptr, 	nullptr,
		-1, "sequence", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Strip to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Strip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_StripsMeta_remove_sequence, &rna_StripsMeta_remove_sequence};
		func->identifier = "remove";
		func->flag = 2068;
		func->description = "Remove a Strip";
		func->call = StripsMeta_remove_call;
		rna_StripsMeta_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Scene Strip */
static PointerPropertyRNA rna_SceneStrip_scene_;
PropertyRNA &rna_SceneStrip_scene = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_scene_);

static PointerPropertyRNA rna_SceneStrip_scene_camera_;
PropertyRNA &rna_SceneStrip_scene_camera = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_scene_camera_);

static PointerPropertyRNA rna_SceneStrip_view_layer_;
PropertyRNA &rna_SceneStrip_view_layer = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_view_layer_);

static EnumPropertyRNA rna_SceneStrip_scene_input_;
PropertyRNA &rna_SceneStrip_scene_input = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_scene_input_);

static BoolPropertyRNA rna_SceneStrip_use_annotations_;
PropertyRNA &rna_SceneStrip_use_annotations = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_use_annotations_);

static CollectionPropertyRNA rna_SceneStrip_retiming_keys_;
PropertyRNA &rna_SceneStrip_retiming_keys = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_retiming_keys_);

static FloatPropertyRNA rna_SceneStrip_volume_;
PropertyRNA &rna_SceneStrip_volume = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_volume_);

static BoolPropertyRNA rna_SceneStrip_use_deinterlace_;
PropertyRNA &rna_SceneStrip_use_deinterlace = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_use_deinterlace_);

static EnumPropertyRNA rna_SceneStrip_alpha_mode_;
PropertyRNA &rna_SceneStrip_alpha_mode = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_alpha_mode_);

static BoolPropertyRNA rna_SceneStrip_use_flip_x_;
PropertyRNA &rna_SceneStrip_use_flip_x = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_use_flip_x_);

static BoolPropertyRNA rna_SceneStrip_use_flip_y_;
PropertyRNA &rna_SceneStrip_use_flip_y = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_use_flip_y_);

static BoolPropertyRNA rna_SceneStrip_use_float_;
PropertyRNA &rna_SceneStrip_use_float = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_use_float_);

static BoolPropertyRNA rna_SceneStrip_use_reverse_frames_;
PropertyRNA &rna_SceneStrip_use_reverse_frames = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_use_reverse_frames_);

static FloatPropertyRNA rna_SceneStrip_color_multiply_;
PropertyRNA &rna_SceneStrip_color_multiply = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_color_multiply_);

static BoolPropertyRNA rna_SceneStrip_multiply_alpha_;
PropertyRNA &rna_SceneStrip_multiply_alpha = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_multiply_alpha_);

static FloatPropertyRNA rna_SceneStrip_color_saturation_;
PropertyRNA &rna_SceneStrip_color_saturation = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_color_saturation_);

static FloatPropertyRNA rna_SceneStrip_strobe_;
PropertyRNA &rna_SceneStrip_strobe = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_strobe_);

static PointerPropertyRNA rna_SceneStrip_transform_;
PropertyRNA &rna_SceneStrip_transform = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_transform_);

static PointerPropertyRNA rna_SceneStrip_crop_;
PropertyRNA &rna_SceneStrip_crop = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_crop_);

static BoolPropertyRNA rna_SceneStrip_use_proxy_;
PropertyRNA &rna_SceneStrip_use_proxy = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_use_proxy_);

static PointerPropertyRNA rna_SceneStrip_proxy_;
PropertyRNA &rna_SceneStrip_proxy = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_proxy_);

static IntPropertyRNA rna_SceneStrip_animation_offset_start_;
PropertyRNA &rna_SceneStrip_animation_offset_start = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_animation_offset_start_);

static IntPropertyRNA rna_SceneStrip_content_trim_start_;
PropertyRNA &rna_SceneStrip_content_trim_start = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_content_trim_start_);

static IntPropertyRNA rna_SceneStrip_animation_offset_end_;
PropertyRNA &rna_SceneStrip_animation_offset_end = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_animation_offset_end_);

static IntPropertyRNA rna_SceneStrip_content_trim_end_;
PropertyRNA &rna_SceneStrip_content_trim_end = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_content_trim_end_);

static FloatPropertyRNA rna_SceneStrip_fps_;
PropertyRNA &rna_SceneStrip_fps = reinterpret_cast<PropertyRNA &>(rna_SceneStrip_fps_);

StructRNA *RNA_SceneStrip;
void register_struct_SceneStrip(BlenderRNA &brna)
{
	rna_SceneStrip_scene_ = {
		{&rna_SceneStrip_scene_camera, 	nullptr,
		-1, "scene", 13631617, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scene",
		"Scene that this strip uses",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Strip_scene_sync_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_scene_get, SceneStrip_scene_set, nullptr, nullptr,RNA_Scene
	};

	rna_SceneStrip_scene_camera_ = {
		{&rna_SceneStrip_view_layer, 	&rna_SceneStrip_scene,
		-1, "scene_camera", 12583041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Camera Override",
		"Override the scene\'s active camera",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Strip_scene_sync_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_scene_camera_get, SceneStrip_scene_camera_set, nullptr, rna_Camera_object_poll,RNA_Object
	};

	rna_SceneStrip_view_layer_ = {
		{&rna_SceneStrip_scene_input, 	&rna_SceneStrip_scene_camera,
		-1, "view_layer", 12582913, 0, 0, 0, 0, PropertyPathTemplateType(0), "View Layer",
		"View Layer of the scene to render (uses the default if unset)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Strip_scene_sync_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_view_layer_get, SceneStrip_view_layer_set, nullptr, rna_SceneStrip_view_layer_poll,RNA_ViewLayer
	};

	static const EnumPropertyItem rna_SceneStrip_scene_input_items[3] = {
		{0, "CAMERA", 156, "Camera", "Use the Scene\'s 3D camera as input"	},
		{1073741824, "SEQUENCER", 150, "Sequencer", "Use the Scene\'s Sequencer timeline as input"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_SceneStrip_scene_input_ = {
		{&rna_SceneStrip_use_annotations, 	&rna_SceneStrip_view_layer,
		-1, "scene_input", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Input",
		"Input type to use for the Scene strip",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_use_strip, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, flag), RawPropertyType(0), nullptr},
		SceneStrip_scene_input_get, SceneStrip_scene_input_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_SceneStrip_scene_input_items, 2, 0
	};

	rna_SceneStrip_use_annotations_ = {
		{&rna_SceneStrip_retiming_keys, 	&rna_SceneStrip_scene_input,
		-1, "use_annotations", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Annotations",
		"Show Annotations in OpenGL previews",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_use_annotations_get, SceneStrip_use_annotations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_SceneStrip_retiming_keys_ = {
		{&rna_SceneStrip_volume, 	&rna_SceneStrip_use_annotations,
		-1, "retiming_keys", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Retiming Keys",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_RetimingKeys},
		SceneStrip_retiming_keys_begin, SceneStrip_retiming_keys_next, SceneStrip_retiming_keys_end, SceneStrip_retiming_keys_get, SceneStrip_retiming_keys_length, SceneStrip_retiming_keys_lookup_int, nullptr, nullptr, RNA_RetimingKey
	};

	rna_SceneStrip_volume_ = {
		{&rna_SceneStrip_use_deinterlace, 	&rna_SceneStrip_retiming_keys,
		-1, "volume", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Volume",
		"Playback volume of the sound",
		0, "Sound",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_audio_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, volume), RawPropertyType(5), nullptr},
		SceneStrip_volume_get, SceneStrip_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_SceneStrip_use_deinterlace_ = {
		{&rna_SceneStrip_alpha_mode, 	&rna_SceneStrip_volume,
		-1, "use_deinterlace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deinterlace",
		"Remove fields from video movies",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_reopen_files_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_use_deinterlace_get, SceneStrip_use_deinterlace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_SceneStrip_alpha_mode_items[3] = {
		{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"	},
		{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_SceneStrip_alpha_mode_ = {
		{&rna_SceneStrip_use_flip_x, 	&rna_SceneStrip_use_deinterlace,
		-1, "alpha_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alpha Mode",
		"Representation of alpha information in the RGBA pixels",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, alpha_mode), RawPropertyType(6), nullptr},
		SceneStrip_alpha_mode_get, SceneStrip_alpha_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_SceneStrip_alpha_mode_items, 2, 0
	};

	rna_SceneStrip_use_flip_x_ = {
		{&rna_SceneStrip_use_flip_y, 	&rna_SceneStrip_alpha_mode,
		-1, "use_flip_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip X",
		"Flip on the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_use_flip_x_get, SceneStrip_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SceneStrip_use_flip_y_ = {
		{&rna_SceneStrip_use_float, 	&rna_SceneStrip_use_flip_x,
		-1, "use_flip_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip Y",
		"Flip on the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_use_flip_y_get, SceneStrip_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SceneStrip_use_float_ = {
		{&rna_SceneStrip_use_reverse_frames, 	&rna_SceneStrip_use_flip_y,
		-1, "use_float", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Convert Float",
		"Convert input to float data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_use_float_get, SceneStrip_use_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SceneStrip_use_reverse_frames_ = {
		{&rna_SceneStrip_color_multiply, 	&rna_SceneStrip_use_float,
		-1, "use_reverse_frames", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reverse Frames",
		"Reverse frame order",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_use_reverse_frames_get, SceneStrip_use_reverse_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SceneStrip_color_multiply_ = {
		{&rna_SceneStrip_multiply_alpha, 	&rna_SceneStrip_use_reverse_frames,
		-1, "color_multiply", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Multiply Colors",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, mul), RawPropertyType(5), nullptr},
		SceneStrip_color_multiply_get, SceneStrip_color_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_SceneStrip_multiply_alpha_ = {
		{&rna_SceneStrip_color_saturation, 	&rna_SceneStrip_color_multiply,
		-1, "multiply_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Alpha",
		"Multiply alpha along with color channels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_multiply_alpha_get, SceneStrip_multiply_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SceneStrip_color_saturation_ = {
		{&rna_SceneStrip_strobe, 	&rna_SceneStrip_multiply_alpha,
		-1, "color_saturation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Adjust the intensity of the input\'s color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, sat), RawPropertyType(5), nullptr},
		SceneStrip_color_saturation_get, SceneStrip_color_saturation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_SceneStrip_strobe_ = {
		{&rna_SceneStrip_transform, 	&rna_SceneStrip_color_saturation,
		-1, "strobe", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strobe",
		"Only display every nth frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, strobe), RawPropertyType(5), nullptr},
		SceneStrip_strobe_get, SceneStrip_strobe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SceneStrip_transform_ = {
		{&rna_SceneStrip_crop, 	&rna_SceneStrip_strobe,
		-1, "transform", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transform",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_transform_get, nullptr, nullptr, nullptr,RNA_StripTransform
	};

	rna_SceneStrip_crop_ = {
		{&rna_SceneStrip_use_proxy, 	&rna_SceneStrip_transform,
		-1, "crop", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Crop",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_crop_get, nullptr, nullptr, nullptr,RNA_StripCrop
	};

	rna_SceneStrip_use_proxy_ = {
		{&rna_SceneStrip_proxy, 	&rna_SceneStrip_crop,
		-1, "use_proxy", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Proxy",
		"Use a preview proxy for this strip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_use_proxy_get, SceneStrip_use_proxy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SceneStrip_proxy_ = {
		{&rna_SceneStrip_animation_offset_start, 	&rna_SceneStrip_use_proxy,
		-1, "proxy", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Proxy",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_proxy_get, nullptr, nullptr, nullptr,RNA_StripProxy
	};

	static const DeprecatedRNA rna_SceneStrip_animation_offset_start_deprecated = {
	"Replaced by \'.content_trim_start\'.",
		510, 600,
};

	rna_SceneStrip_animation_offset_start_ = {
		{&rna_SceneStrip_content_trim_start, 	&rna_SceneStrip_proxy,
		-1, "animation_offset_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Start Offset",
		"Animation start offset (trim start)",
		0, "*",
		&rna_SceneStrip_animation_offset_start_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_animation_offset_start_get, SceneStrip_animation_offset_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SceneStrip_content_trim_start_ = {
		{&rna_SceneStrip_animation_offset_end, 	&rna_SceneStrip_animation_offset_start,
		-1, "content_trim_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim Start",
		"Number of frames to ignore from the start of the underlying source. The source content is trimmed, and previous frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_content_trim_start_get, SceneStrip_content_trim_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_SceneStrip_animation_offset_end_deprecated = {
	"Replaced by \'.content_trim_end\'.",
		510, 600,
};

	rna_SceneStrip_animation_offset_end_ = {
		{&rna_SceneStrip_content_trim_end, 	&rna_SceneStrip_content_trim_start,
		-1, "animation_offset_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation End Offset",
		"Animation end offset (trim end)",
		0, "*",
		&rna_SceneStrip_animation_offset_end_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_animation_offset_end_get, SceneStrip_animation_offset_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SceneStrip_content_trim_end_ = {
		{&rna_SceneStrip_fps, 	&rna_SceneStrip_animation_offset_end,
		-1, "content_trim_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim End",
		"Number of frames to ignore from the end of the underlying source. The source content is trimmed, and future frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_content_trim_end_get, SceneStrip_content_trim_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SceneStrip_fps_ = {
		{nullptr, 	&rna_SceneStrip_content_trim_end,
		-1, "fps", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "FPS",
		"Frames per second",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SceneStrip_fps_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_SceneStrip;
	srna->cont.properties = {&rna_SceneStrip_scene, &rna_SceneStrip_fps};
	srna->identifier = "SceneStrip";
	srna->flag = 516;
	srna->name = "Scene Strip";
	srna->description = "Sequence strip using the rendered image of a scene";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_Strip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Movie Strip */
static IntPropertyRNA rna_MovieStrip_stream_index_;
PropertyRNA &rna_MovieStrip_stream_index = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_stream_index_);

static CollectionPropertyRNA rna_MovieStrip_elements_;
PropertyRNA &rna_MovieStrip_elements = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_elements_);

static CollectionPropertyRNA rna_MovieStrip_retiming_keys_;
PropertyRNA &rna_MovieStrip_retiming_keys = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_retiming_keys_);

static StringPropertyRNA rna_MovieStrip_filepath_;
PropertyRNA &rna_MovieStrip_filepath = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_filepath_);

static BoolPropertyRNA rna_MovieStrip_use_multiview_;
PropertyRNA &rna_MovieStrip_use_multiview = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_use_multiview_);

static EnumPropertyRNA rna_MovieStrip_views_format_;
PropertyRNA &rna_MovieStrip_views_format = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_views_format_);

static PointerPropertyRNA rna_MovieStrip_stereo_3d_format_;
PropertyRNA &rna_MovieStrip_stereo_3d_format = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_stereo_3d_format_);

static BoolPropertyRNA rna_MovieStrip_use_deinterlace_;
PropertyRNA &rna_MovieStrip_use_deinterlace = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_use_deinterlace_);

static EnumPropertyRNA rna_MovieStrip_alpha_mode_;
PropertyRNA &rna_MovieStrip_alpha_mode = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_alpha_mode_);

static BoolPropertyRNA rna_MovieStrip_use_flip_x_;
PropertyRNA &rna_MovieStrip_use_flip_x = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_use_flip_x_);

static BoolPropertyRNA rna_MovieStrip_use_flip_y_;
PropertyRNA &rna_MovieStrip_use_flip_y = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_use_flip_y_);

static BoolPropertyRNA rna_MovieStrip_use_float_;
PropertyRNA &rna_MovieStrip_use_float = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_use_float_);

static BoolPropertyRNA rna_MovieStrip_use_reverse_frames_;
PropertyRNA &rna_MovieStrip_use_reverse_frames = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_use_reverse_frames_);

static FloatPropertyRNA rna_MovieStrip_color_multiply_;
PropertyRNA &rna_MovieStrip_color_multiply = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_color_multiply_);

static BoolPropertyRNA rna_MovieStrip_multiply_alpha_;
PropertyRNA &rna_MovieStrip_multiply_alpha = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_multiply_alpha_);

static FloatPropertyRNA rna_MovieStrip_color_saturation_;
PropertyRNA &rna_MovieStrip_color_saturation = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_color_saturation_);

static FloatPropertyRNA rna_MovieStrip_strobe_;
PropertyRNA &rna_MovieStrip_strobe = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_strobe_);

static PointerPropertyRNA rna_MovieStrip_transform_;
PropertyRNA &rna_MovieStrip_transform = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_transform_);

static PointerPropertyRNA rna_MovieStrip_crop_;
PropertyRNA &rna_MovieStrip_crop = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_crop_);

static BoolPropertyRNA rna_MovieStrip_use_proxy_;
PropertyRNA &rna_MovieStrip_use_proxy = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_use_proxy_);

static PointerPropertyRNA rna_MovieStrip_proxy_;
PropertyRNA &rna_MovieStrip_proxy = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_proxy_);

static IntPropertyRNA rna_MovieStrip_animation_offset_start_;
PropertyRNA &rna_MovieStrip_animation_offset_start = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_animation_offset_start_);

static IntPropertyRNA rna_MovieStrip_content_trim_start_;
PropertyRNA &rna_MovieStrip_content_trim_start = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_content_trim_start_);

static IntPropertyRNA rna_MovieStrip_animation_offset_end_;
PropertyRNA &rna_MovieStrip_animation_offset_end = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_animation_offset_end_);

static IntPropertyRNA rna_MovieStrip_content_trim_end_;
PropertyRNA &rna_MovieStrip_content_trim_end = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_content_trim_end_);

static PointerPropertyRNA rna_MovieStrip_colorspace_settings_;
PropertyRNA &rna_MovieStrip_colorspace_settings = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_colorspace_settings_);

static FloatPropertyRNA rna_MovieStrip_fps_;
PropertyRNA &rna_MovieStrip_fps = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_fps_);

static BoolPropertyRNA rna_MovieStrip_reload_if_needed_can_produce_frames_;
PropertyRNA &rna_MovieStrip_reload_if_needed_can_produce_frames = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_reload_if_needed_can_produce_frames_);

FunctionRNA *rna_MovieStrip_reload_if_needed_func;
static PointerPropertyRNA rna_MovieStrip_metadata_metadata_;
PropertyRNA &rna_MovieStrip_metadata_metadata = reinterpret_cast<PropertyRNA &>(rna_MovieStrip_metadata_metadata_);

FunctionRNA *rna_MovieStrip_metadata_func;
StructRNA *RNA_MovieStrip;
void register_struct_MovieStrip(BlenderRNA &brna)
{
	rna_MovieStrip_stream_index_ = {
		{&rna_MovieStrip_elements, 	nullptr,
		-1, "stream_index", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stream Index",
		"For files with several movie streams, use the stream with the given index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_reopen_files_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, streamindex), RawPropertyType(1), nullptr},
		MovieStrip_stream_index_get, MovieStrip_stream_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 20, 0, 20, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_elements_ = {
		{&rna_MovieStrip_retiming_keys, 	&rna_MovieStrip_stream_index,
		-1, "elements", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Elements",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_elements_begin, MovieStrip_elements_next, MovieStrip_elements_end, MovieStrip_elements_get, MovieStrip_elements_length, MovieStrip_elements_lookup_int, nullptr, nullptr, RNA_StripElement
	};

	rna_MovieStrip_retiming_keys_ = {
		{&rna_MovieStrip_filepath, 	&rna_MovieStrip_elements,
		-1, "retiming_keys", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Retiming Keys",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_RetimingKeys},
		MovieStrip_retiming_keys_begin, MovieStrip_retiming_keys_next, MovieStrip_retiming_keys_end, MovieStrip_retiming_keys_get, MovieStrip_retiming_keys_length, MovieStrip_retiming_keys_lookup_int, nullptr, nullptr, RNA_RetimingKey
	};

	rna_MovieStrip_filepath_ = {
		{&rna_MovieStrip_use_multiview, 	&rna_MovieStrip_retiming_keys,
		-1, "filepath", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "File",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_filepath_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_filepath_get, MovieStrip_filepath_length, MovieStrip_filepath_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_MovieStrip_use_multiview_ = {
		{&rna_MovieStrip_views_format, 	&rna_MovieStrip_filepath,
		-1, "use_multiview", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Multi-View",
		"Use Multiple Views (when available)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_views_format_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_use_multiview_get, MovieStrip_use_multiview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_views_format_ = {
		{&rna_MovieStrip_stereo_3d_format, 	&rna_MovieStrip_use_multiview,
		-1, "views_format", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Views Format",
		"Mode to load movie views",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_views_format_update, 187891712, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, views_format), RawPropertyType(2), nullptr},
		MovieStrip_views_format_get, MovieStrip_views_format_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_views_format_items, 2, 0
	};

	rna_MovieStrip_stereo_3d_format_ = {
		{&rna_MovieStrip_use_deinterlace, 	&rna_MovieStrip_views_format,
		-1, "stereo_3d_format", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stereo 3D Format",
		"Settings for stereo 3D",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_stereo_3d_format_get, nullptr, nullptr, nullptr,RNA_Stereo3dFormat
	};

	rna_MovieStrip_use_deinterlace_ = {
		{&rna_MovieStrip_alpha_mode, 	&rna_MovieStrip_stereo_3d_format,
		-1, "use_deinterlace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deinterlace",
		"Remove fields from video movies",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_reopen_files_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_use_deinterlace_get, MovieStrip_use_deinterlace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_MovieStrip_alpha_mode_items[3] = {
		{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"	},
		{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieStrip_alpha_mode_ = {
		{&rna_MovieStrip_use_flip_x, 	&rna_MovieStrip_use_deinterlace,
		-1, "alpha_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alpha Mode",
		"Representation of alpha information in the RGBA pixels",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, alpha_mode), RawPropertyType(6), nullptr},
		MovieStrip_alpha_mode_get, MovieStrip_alpha_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieStrip_alpha_mode_items, 2, 0
	};

	rna_MovieStrip_use_flip_x_ = {
		{&rna_MovieStrip_use_flip_y, 	&rna_MovieStrip_alpha_mode,
		-1, "use_flip_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip X",
		"Flip on the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_use_flip_x_get, MovieStrip_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_use_flip_y_ = {
		{&rna_MovieStrip_use_float, 	&rna_MovieStrip_use_flip_x,
		-1, "use_flip_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip Y",
		"Flip on the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_use_flip_y_get, MovieStrip_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_use_float_ = {
		{&rna_MovieStrip_use_reverse_frames, 	&rna_MovieStrip_use_flip_y,
		-1, "use_float", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Convert Float",
		"Convert input to float data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_use_float_get, MovieStrip_use_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_use_reverse_frames_ = {
		{&rna_MovieStrip_color_multiply, 	&rna_MovieStrip_use_float,
		-1, "use_reverse_frames", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reverse Frames",
		"Reverse frame order",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_use_reverse_frames_get, MovieStrip_use_reverse_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_color_multiply_ = {
		{&rna_MovieStrip_multiply_alpha, 	&rna_MovieStrip_use_reverse_frames,
		-1, "color_multiply", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Multiply Colors",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, mul), RawPropertyType(5), nullptr},
		MovieStrip_color_multiply_get, MovieStrip_color_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MovieStrip_multiply_alpha_ = {
		{&rna_MovieStrip_color_saturation, 	&rna_MovieStrip_color_multiply,
		-1, "multiply_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Alpha",
		"Multiply alpha along with color channels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_multiply_alpha_get, MovieStrip_multiply_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_color_saturation_ = {
		{&rna_MovieStrip_strobe, 	&rna_MovieStrip_multiply_alpha,
		-1, "color_saturation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Adjust the intensity of the input\'s color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, sat), RawPropertyType(5), nullptr},
		MovieStrip_color_saturation_get, MovieStrip_color_saturation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MovieStrip_strobe_ = {
		{&rna_MovieStrip_transform, 	&rna_MovieStrip_color_saturation,
		-1, "strobe", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strobe",
		"Only display every nth frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, strobe), RawPropertyType(5), nullptr},
		MovieStrip_strobe_get, MovieStrip_strobe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieStrip_transform_ = {
		{&rna_MovieStrip_crop, 	&rna_MovieStrip_strobe,
		-1, "transform", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transform",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_transform_get, nullptr, nullptr, nullptr,RNA_StripTransform
	};

	rna_MovieStrip_crop_ = {
		{&rna_MovieStrip_use_proxy, 	&rna_MovieStrip_transform,
		-1, "crop", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Crop",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_crop_get, nullptr, nullptr, nullptr,RNA_StripCrop
	};

	rna_MovieStrip_use_proxy_ = {
		{&rna_MovieStrip_proxy, 	&rna_MovieStrip_crop,
		-1, "use_proxy", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Proxy",
		"Use a preview proxy for this strip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_use_proxy_get, MovieStrip_use_proxy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_proxy_ = {
		{&rna_MovieStrip_animation_offset_start, 	&rna_MovieStrip_use_proxy,
		-1, "proxy", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Proxy",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_proxy_get, nullptr, nullptr, nullptr,RNA_StripProxy
	};

	static const DeprecatedRNA rna_MovieStrip_animation_offset_start_deprecated = {
	"Replaced by \'.content_trim_start\'.",
		510, 600,
};

	rna_MovieStrip_animation_offset_start_ = {
		{&rna_MovieStrip_content_trim_start, 	&rna_MovieStrip_proxy,
		-1, "animation_offset_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Start Offset",
		"Animation start offset (trim start)",
		0, "*",
		&rna_MovieStrip_animation_offset_start_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_animation_offset_start_get, MovieStrip_animation_offset_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_content_trim_start_ = {
		{&rna_MovieStrip_animation_offset_end, 	&rna_MovieStrip_animation_offset_start,
		-1, "content_trim_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim Start",
		"Number of frames to ignore from the start of the underlying source. The source content is trimmed, and previous frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_content_trim_start_get, MovieStrip_content_trim_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_MovieStrip_animation_offset_end_deprecated = {
	"Replaced by \'.content_trim_end\'.",
		510, 600,
};

	rna_MovieStrip_animation_offset_end_ = {
		{&rna_MovieStrip_content_trim_end, 	&rna_MovieStrip_content_trim_start,
		-1, "animation_offset_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation End Offset",
		"Animation end offset (trim end)",
		0, "*",
		&rna_MovieStrip_animation_offset_end_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_animation_offset_end_get, MovieStrip_animation_offset_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_content_trim_end_ = {
		{&rna_MovieStrip_colorspace_settings, 	&rna_MovieStrip_animation_offset_end,
		-1, "content_trim_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim End",
		"Number of frames to ignore from the end of the underlying source. The source content is trimmed, and future frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_content_trim_end_get, MovieStrip_content_trim_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieStrip_colorspace_settings_ = {
		{&rna_MovieStrip_fps, 	&rna_MovieStrip_content_trim_end,
		-1, "colorspace_settings", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Space Settings",
		"Input color space settings",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_colorspace_settings_get, nullptr, nullptr, nullptr,RNA_ColorManagedInputColorspaceSettings
	};

	rna_MovieStrip_fps_ = {
		{nullptr, 	&rna_MovieStrip_colorspace_settings,
		-1, "fps", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "FPS",
		"Frames per second",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieStrip_fps_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_MovieStrip;
	srna->cont.properties = {&rna_MovieStrip_stream_index, &rna_MovieStrip_fps};
	srna->identifier = "MovieStrip";
	srna->flag = 516;
	srna->name = "Movie Strip";
	srna->description = "Sequence strip to load a video";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_Strip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
	{
	rna_MovieStrip_reload_if_needed_can_produce_frames_ = {
		{nullptr, 	nullptr,
		-1, "can_produce_frames", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Can Produce Frames",
		"True if the strip can produce frames, False otherwise",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieStrip_reload_if_needed_can_produce_frames, &rna_MovieStrip_reload_if_needed_can_produce_frames};
		func->identifier = "reload_if_needed";
		func->flag = 2052;
		func->description = "reload_if_needed";
		func->call = MovieStrip_reload_if_needed_call;
		func->c_ret = &rna_MovieStrip_reload_if_needed_can_produce_frames;
		rna_MovieStrip_reload_if_needed_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MovieStrip_metadata_metadata_ = {
		{nullptr, 	nullptr,
		-1, "metadata", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"Dict-like object containing the metadata",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_IDPropertyWrapPtr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MovieStrip_metadata_metadata, &rna_MovieStrip_metadata_metadata};
		func->identifier = "metadata";
		func->flag = 2048;
		func->description = "Retrieve metadata of the movie file";
		func->call = MovieStrip_metadata_call;
		func->c_ret = &rna_MovieStrip_metadata_metadata;
		rna_MovieStrip_metadata_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* MovieClip Strip */
static PointerPropertyRNA rna_MovieClipStrip_clip_;
PropertyRNA &rna_MovieClipStrip_clip = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_clip_);

static BoolPropertyRNA rna_MovieClipStrip_undistort_;
PropertyRNA &rna_MovieClipStrip_undistort = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_undistort_);

static BoolPropertyRNA rna_MovieClipStrip_stabilize2d_;
PropertyRNA &rna_MovieClipStrip_stabilize2d = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_stabilize2d_);

static BoolPropertyRNA rna_MovieClipStrip_use_deinterlace_;
PropertyRNA &rna_MovieClipStrip_use_deinterlace = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_use_deinterlace_);

static EnumPropertyRNA rna_MovieClipStrip_alpha_mode_;
PropertyRNA &rna_MovieClipStrip_alpha_mode = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_alpha_mode_);

static BoolPropertyRNA rna_MovieClipStrip_use_flip_x_;
PropertyRNA &rna_MovieClipStrip_use_flip_x = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_use_flip_x_);

static BoolPropertyRNA rna_MovieClipStrip_use_flip_y_;
PropertyRNA &rna_MovieClipStrip_use_flip_y = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_use_flip_y_);

static BoolPropertyRNA rna_MovieClipStrip_use_float_;
PropertyRNA &rna_MovieClipStrip_use_float = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_use_float_);

static BoolPropertyRNA rna_MovieClipStrip_use_reverse_frames_;
PropertyRNA &rna_MovieClipStrip_use_reverse_frames = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_use_reverse_frames_);

static FloatPropertyRNA rna_MovieClipStrip_color_multiply_;
PropertyRNA &rna_MovieClipStrip_color_multiply = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_color_multiply_);

static BoolPropertyRNA rna_MovieClipStrip_multiply_alpha_;
PropertyRNA &rna_MovieClipStrip_multiply_alpha = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_multiply_alpha_);

static FloatPropertyRNA rna_MovieClipStrip_color_saturation_;
PropertyRNA &rna_MovieClipStrip_color_saturation = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_color_saturation_);

static FloatPropertyRNA rna_MovieClipStrip_strobe_;
PropertyRNA &rna_MovieClipStrip_strobe = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_strobe_);

static PointerPropertyRNA rna_MovieClipStrip_transform_;
PropertyRNA &rna_MovieClipStrip_transform = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_transform_);

static PointerPropertyRNA rna_MovieClipStrip_crop_;
PropertyRNA &rna_MovieClipStrip_crop = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_crop_);

static IntPropertyRNA rna_MovieClipStrip_animation_offset_start_;
PropertyRNA &rna_MovieClipStrip_animation_offset_start = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_animation_offset_start_);

static IntPropertyRNA rna_MovieClipStrip_content_trim_start_;
PropertyRNA &rna_MovieClipStrip_content_trim_start = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_content_trim_start_);

static IntPropertyRNA rna_MovieClipStrip_animation_offset_end_;
PropertyRNA &rna_MovieClipStrip_animation_offset_end = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_animation_offset_end_);

static IntPropertyRNA rna_MovieClipStrip_content_trim_end_;
PropertyRNA &rna_MovieClipStrip_content_trim_end = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_content_trim_end_);

static FloatPropertyRNA rna_MovieClipStrip_fps_;
PropertyRNA &rna_MovieClipStrip_fps = reinterpret_cast<PropertyRNA &>(rna_MovieClipStrip_fps_);

StructRNA *RNA_MovieClipStrip;
void register_struct_MovieClipStrip(BlenderRNA &brna)
{
	rna_MovieClipStrip_clip_ = {
		{&rna_MovieClipStrip_undistort, 	nullptr,
		-1, "clip", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Movie Clip",
		"Movie clip that this strip uses",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_clip_get, MovieClipStrip_clip_set, nullptr, nullptr,RNA_MovieClip
	};

	rna_MovieClipStrip_undistort_ = {
		{&rna_MovieClipStrip_stabilize2d, 	&rna_MovieClipStrip_clip,
		-1, "undistort", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Undistort Clip",
		"Use the undistorted version of the clip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_undistort_get, MovieClipStrip_undistort_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipStrip_stabilize2d_ = {
		{&rna_MovieClipStrip_use_deinterlace, 	&rna_MovieClipStrip_undistort,
		-1, "stabilize2d", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stabilize 2D Clip",
		"Use the 2D stabilized version of the clip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_stabilize2d_get, MovieClipStrip_stabilize2d_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipStrip_use_deinterlace_ = {
		{&rna_MovieClipStrip_alpha_mode, 	&rna_MovieClipStrip_stabilize2d,
		-1, "use_deinterlace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deinterlace",
		"Remove fields from video movies",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_reopen_files_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_use_deinterlace_get, MovieClipStrip_use_deinterlace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_MovieClipStrip_alpha_mode_items[3] = {
		{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"	},
		{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MovieClipStrip_alpha_mode_ = {
		{&rna_MovieClipStrip_use_flip_x, 	&rna_MovieClipStrip_use_deinterlace,
		-1, "alpha_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alpha Mode",
		"Representation of alpha information in the RGBA pixels",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, alpha_mode), RawPropertyType(6), nullptr},
		MovieClipStrip_alpha_mode_get, MovieClipStrip_alpha_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MovieClipStrip_alpha_mode_items, 2, 0
	};

	rna_MovieClipStrip_use_flip_x_ = {
		{&rna_MovieClipStrip_use_flip_y, 	&rna_MovieClipStrip_alpha_mode,
		-1, "use_flip_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip X",
		"Flip on the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_use_flip_x_get, MovieClipStrip_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipStrip_use_flip_y_ = {
		{&rna_MovieClipStrip_use_float, 	&rna_MovieClipStrip_use_flip_x,
		-1, "use_flip_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip Y",
		"Flip on the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_use_flip_y_get, MovieClipStrip_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipStrip_use_float_ = {
		{&rna_MovieClipStrip_use_reverse_frames, 	&rna_MovieClipStrip_use_flip_y,
		-1, "use_float", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Convert Float",
		"Convert input to float data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_use_float_get, MovieClipStrip_use_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipStrip_use_reverse_frames_ = {
		{&rna_MovieClipStrip_color_multiply, 	&rna_MovieClipStrip_use_float,
		-1, "use_reverse_frames", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reverse Frames",
		"Reverse frame order",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_use_reverse_frames_get, MovieClipStrip_use_reverse_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipStrip_color_multiply_ = {
		{&rna_MovieClipStrip_multiply_alpha, 	&rna_MovieClipStrip_use_reverse_frames,
		-1, "color_multiply", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Multiply Colors",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, mul), RawPropertyType(5), nullptr},
		MovieClipStrip_color_multiply_get, MovieClipStrip_color_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MovieClipStrip_multiply_alpha_ = {
		{&rna_MovieClipStrip_color_saturation, 	&rna_MovieClipStrip_color_multiply,
		-1, "multiply_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Alpha",
		"Multiply alpha along with color channels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_multiply_alpha_get, MovieClipStrip_multiply_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipStrip_color_saturation_ = {
		{&rna_MovieClipStrip_strobe, 	&rna_MovieClipStrip_multiply_alpha,
		-1, "color_saturation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Adjust the intensity of the input\'s color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, sat), RawPropertyType(5), nullptr},
		MovieClipStrip_color_saturation_get, MovieClipStrip_color_saturation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MovieClipStrip_strobe_ = {
		{&rna_MovieClipStrip_transform, 	&rna_MovieClipStrip_color_saturation,
		-1, "strobe", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strobe",
		"Only display every nth frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, strobe), RawPropertyType(5), nullptr},
		MovieClipStrip_strobe_get, MovieClipStrip_strobe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MovieClipStrip_transform_ = {
		{&rna_MovieClipStrip_crop, 	&rna_MovieClipStrip_strobe,
		-1, "transform", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transform",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_transform_get, nullptr, nullptr, nullptr,RNA_StripTransform
	};

	rna_MovieClipStrip_crop_ = {
		{&rna_MovieClipStrip_animation_offset_start, 	&rna_MovieClipStrip_transform,
		-1, "crop", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Crop",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_crop_get, nullptr, nullptr, nullptr,RNA_StripCrop
	};

	static const DeprecatedRNA rna_MovieClipStrip_animation_offset_start_deprecated = {
	"Replaced by \'.content_trim_start\'.",
		510, 600,
};

	rna_MovieClipStrip_animation_offset_start_ = {
		{&rna_MovieClipStrip_content_trim_start, 	&rna_MovieClipStrip_crop,
		-1, "animation_offset_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Start Offset",
		"Animation start offset (trim start)",
		0, "*",
		&rna_MovieClipStrip_animation_offset_start_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_animation_offset_start_get, MovieClipStrip_animation_offset_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipStrip_content_trim_start_ = {
		{&rna_MovieClipStrip_animation_offset_end, 	&rna_MovieClipStrip_animation_offset_start,
		-1, "content_trim_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim Start",
		"Number of frames to ignore from the start of the underlying source. The source content is trimmed, and previous frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_content_trim_start_get, MovieClipStrip_content_trim_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_MovieClipStrip_animation_offset_end_deprecated = {
	"Replaced by \'.content_trim_end\'.",
		510, 600,
};

	rna_MovieClipStrip_animation_offset_end_ = {
		{&rna_MovieClipStrip_content_trim_end, 	&rna_MovieClipStrip_content_trim_start,
		-1, "animation_offset_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation End Offset",
		"Animation end offset (trim end)",
		0, "*",
		&rna_MovieClipStrip_animation_offset_end_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_animation_offset_end_get, MovieClipStrip_animation_offset_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipStrip_content_trim_end_ = {
		{&rna_MovieClipStrip_fps, 	&rna_MovieClipStrip_animation_offset_end,
		-1, "content_trim_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim End",
		"Number of frames to ignore from the end of the underlying source. The source content is trimmed, and future frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_content_trim_end_get, MovieClipStrip_content_trim_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MovieClipStrip_fps_ = {
		{nullptr, 	&rna_MovieClipStrip_content_trim_end,
		-1, "fps", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "FPS",
		"Frames per second",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MovieClipStrip_fps_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_MovieClipStrip;
	srna->cont.properties = {&rna_MovieClipStrip_clip, &rna_MovieClipStrip_fps};
	srna->identifier = "MovieClipStrip";
	srna->flag = 516;
	srna->name = "MovieClip Strip";
	srna->description = "Sequence strip to load a video from the clip editor";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_Strip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Mask Strip */
static PointerPropertyRNA rna_MaskStrip_mask_;
PropertyRNA &rna_MaskStrip_mask = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_mask_);

static BoolPropertyRNA rna_MaskStrip_use_deinterlace_;
PropertyRNA &rna_MaskStrip_use_deinterlace = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_use_deinterlace_);

static EnumPropertyRNA rna_MaskStrip_alpha_mode_;
PropertyRNA &rna_MaskStrip_alpha_mode = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_alpha_mode_);

static BoolPropertyRNA rna_MaskStrip_use_flip_x_;
PropertyRNA &rna_MaskStrip_use_flip_x = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_use_flip_x_);

static BoolPropertyRNA rna_MaskStrip_use_flip_y_;
PropertyRNA &rna_MaskStrip_use_flip_y = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_use_flip_y_);

static BoolPropertyRNA rna_MaskStrip_use_float_;
PropertyRNA &rna_MaskStrip_use_float = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_use_float_);

static BoolPropertyRNA rna_MaskStrip_use_reverse_frames_;
PropertyRNA &rna_MaskStrip_use_reverse_frames = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_use_reverse_frames_);

static FloatPropertyRNA rna_MaskStrip_color_multiply_;
PropertyRNA &rna_MaskStrip_color_multiply = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_color_multiply_);

static BoolPropertyRNA rna_MaskStrip_multiply_alpha_;
PropertyRNA &rna_MaskStrip_multiply_alpha = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_multiply_alpha_);

static FloatPropertyRNA rna_MaskStrip_color_saturation_;
PropertyRNA &rna_MaskStrip_color_saturation = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_color_saturation_);

static FloatPropertyRNA rna_MaskStrip_strobe_;
PropertyRNA &rna_MaskStrip_strobe = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_strobe_);

static PointerPropertyRNA rna_MaskStrip_transform_;
PropertyRNA &rna_MaskStrip_transform = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_transform_);

static PointerPropertyRNA rna_MaskStrip_crop_;
PropertyRNA &rna_MaskStrip_crop = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_crop_);

static IntPropertyRNA rna_MaskStrip_animation_offset_start_;
PropertyRNA &rna_MaskStrip_animation_offset_start = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_animation_offset_start_);

static IntPropertyRNA rna_MaskStrip_content_trim_start_;
PropertyRNA &rna_MaskStrip_content_trim_start = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_content_trim_start_);

static IntPropertyRNA rna_MaskStrip_animation_offset_end_;
PropertyRNA &rna_MaskStrip_animation_offset_end = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_animation_offset_end_);

static IntPropertyRNA rna_MaskStrip_content_trim_end_;
PropertyRNA &rna_MaskStrip_content_trim_end = reinterpret_cast<PropertyRNA &>(rna_MaskStrip_content_trim_end_);

StructRNA *RNA_MaskStrip;
void register_struct_MaskStrip(BlenderRNA &brna)
{
	rna_MaskStrip_mask_ = {
		{&rna_MaskStrip_use_deinterlace, 	nullptr,
		-1, "mask", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mask",
		"Mask that this strip uses",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_mask_get, MaskStrip_mask_set, nullptr, nullptr,RNA_Mask
	};

	rna_MaskStrip_use_deinterlace_ = {
		{&rna_MaskStrip_alpha_mode, 	&rna_MaskStrip_mask,
		-1, "use_deinterlace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deinterlace",
		"Remove fields from video movies",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_reopen_files_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_use_deinterlace_get, MaskStrip_use_deinterlace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_MaskStrip_alpha_mode_items[3] = {
		{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"	},
		{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaskStrip_alpha_mode_ = {
		{&rna_MaskStrip_use_flip_x, 	&rna_MaskStrip_use_deinterlace,
		-1, "alpha_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alpha Mode",
		"Representation of alpha information in the RGBA pixels",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, alpha_mode), RawPropertyType(6), nullptr},
		MaskStrip_alpha_mode_get, MaskStrip_alpha_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaskStrip_alpha_mode_items, 2, 0
	};

	rna_MaskStrip_use_flip_x_ = {
		{&rna_MaskStrip_use_flip_y, 	&rna_MaskStrip_alpha_mode,
		-1, "use_flip_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip X",
		"Flip on the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_use_flip_x_get, MaskStrip_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskStrip_use_flip_y_ = {
		{&rna_MaskStrip_use_float, 	&rna_MaskStrip_use_flip_x,
		-1, "use_flip_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip Y",
		"Flip on the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_use_flip_y_get, MaskStrip_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskStrip_use_float_ = {
		{&rna_MaskStrip_use_reverse_frames, 	&rna_MaskStrip_use_flip_y,
		-1, "use_float", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Convert Float",
		"Convert input to float data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_use_float_get, MaskStrip_use_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskStrip_use_reverse_frames_ = {
		{&rna_MaskStrip_color_multiply, 	&rna_MaskStrip_use_float,
		-1, "use_reverse_frames", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reverse Frames",
		"Reverse frame order",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_use_reverse_frames_get, MaskStrip_use_reverse_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskStrip_color_multiply_ = {
		{&rna_MaskStrip_multiply_alpha, 	&rna_MaskStrip_use_reverse_frames,
		-1, "color_multiply", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Multiply Colors",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, mul), RawPropertyType(5), nullptr},
		MaskStrip_color_multiply_get, MaskStrip_color_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MaskStrip_multiply_alpha_ = {
		{&rna_MaskStrip_color_saturation, 	&rna_MaskStrip_color_multiply,
		-1, "multiply_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Alpha",
		"Multiply alpha along with color channels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_multiply_alpha_get, MaskStrip_multiply_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaskStrip_color_saturation_ = {
		{&rna_MaskStrip_strobe, 	&rna_MaskStrip_multiply_alpha,
		-1, "color_saturation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Adjust the intensity of the input\'s color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, sat), RawPropertyType(5), nullptr},
		MaskStrip_color_saturation_get, MaskStrip_color_saturation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MaskStrip_strobe_ = {
		{&rna_MaskStrip_transform, 	&rna_MaskStrip_color_saturation,
		-1, "strobe", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strobe",
		"Only display every nth frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, strobe), RawPropertyType(5), nullptr},
		MaskStrip_strobe_get, MaskStrip_strobe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaskStrip_transform_ = {
		{&rna_MaskStrip_crop, 	&rna_MaskStrip_strobe,
		-1, "transform", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transform",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_transform_get, nullptr, nullptr, nullptr,RNA_StripTransform
	};

	rna_MaskStrip_crop_ = {
		{&rna_MaskStrip_animation_offset_start, 	&rna_MaskStrip_transform,
		-1, "crop", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Crop",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_crop_get, nullptr, nullptr, nullptr,RNA_StripCrop
	};

	static const DeprecatedRNA rna_MaskStrip_animation_offset_start_deprecated = {
	"Replaced by \'.content_trim_start\'.",
		510, 600,
};

	rna_MaskStrip_animation_offset_start_ = {
		{&rna_MaskStrip_content_trim_start, 	&rna_MaskStrip_crop,
		-1, "animation_offset_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Start Offset",
		"Animation start offset (trim start)",
		0, "*",
		&rna_MaskStrip_animation_offset_start_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_animation_offset_start_get, MaskStrip_animation_offset_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MaskStrip_content_trim_start_ = {
		{&rna_MaskStrip_animation_offset_end, 	&rna_MaskStrip_animation_offset_start,
		-1, "content_trim_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim Start",
		"Number of frames to ignore from the start of the underlying source. The source content is trimmed, and previous frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_content_trim_start_get, MaskStrip_content_trim_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_MaskStrip_animation_offset_end_deprecated = {
	"Replaced by \'.content_trim_end\'.",
		510, 600,
};

	rna_MaskStrip_animation_offset_end_ = {
		{&rna_MaskStrip_content_trim_end, 	&rna_MaskStrip_content_trim_start,
		-1, "animation_offset_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation End Offset",
		"Animation end offset (trim end)",
		0, "*",
		&rna_MaskStrip_animation_offset_end_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_animation_offset_end_get, MaskStrip_animation_offset_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MaskStrip_content_trim_end_ = {
		{nullptr, 	&rna_MaskStrip_animation_offset_end,
		-1, "content_trim_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim End",
		"Number of frames to ignore from the end of the underlying source. The source content is trimmed, and future frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaskStrip_content_trim_end_get, MaskStrip_content_trim_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MaskStrip;
	srna->cont.properties = {&rna_MaskStrip_mask, &rna_MaskStrip_content_trim_end};
	srna->identifier = "MaskStrip";
	srna->flag = 516;
	srna->name = "Mask Strip";
	srna->description = "Sequence strip to load a video from a mask";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_Strip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Sound Strip */
static PointerPropertyRNA rna_SoundStrip_sound_;
PropertyRNA &rna_SoundStrip_sound = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_sound_);

static FloatPropertyRNA rna_SoundStrip_volume_;
PropertyRNA &rna_SoundStrip_volume = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_volume_);

static FloatPropertyRNA rna_SoundStrip_pan_;
PropertyRNA &rna_SoundStrip_pan = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_pan_);

static FloatPropertyRNA rna_SoundStrip_sound_offset_;
PropertyRNA &rna_SoundStrip_sound_offset = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_sound_offset_);

static BoolPropertyRNA rna_SoundStrip_show_waveform_;
PropertyRNA &rna_SoundStrip_show_waveform = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_show_waveform_);

static BoolPropertyRNA rna_SoundStrip_pitch_correction_;
PropertyRNA &rna_SoundStrip_pitch_correction = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_pitch_correction_);

static CollectionPropertyRNA rna_SoundStrip_retiming_keys_;
PropertyRNA &rna_SoundStrip_retiming_keys = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_retiming_keys_);

static IntPropertyRNA rna_SoundStrip_animation_offset_start_;
PropertyRNA &rna_SoundStrip_animation_offset_start = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_animation_offset_start_);

static IntPropertyRNA rna_SoundStrip_content_trim_start_;
PropertyRNA &rna_SoundStrip_content_trim_start = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_content_trim_start_);

static IntPropertyRNA rna_SoundStrip_animation_offset_end_;
PropertyRNA &rna_SoundStrip_animation_offset_end = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_animation_offset_end_);

static IntPropertyRNA rna_SoundStrip_content_trim_end_;
PropertyRNA &rna_SoundStrip_content_trim_end = reinterpret_cast<PropertyRNA &>(rna_SoundStrip_content_trim_end_);

StructRNA *RNA_SoundStrip;
void register_struct_SoundStrip(BlenderRNA &brna)
{
	rna_SoundStrip_sound_ = {
		{&rna_SoundStrip_volume, 	nullptr,
		-1, "sound", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sound",
		"Sound data-block used by this strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_sound_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoundStrip_sound_get, SoundStrip_sound_set, nullptr, nullptr,RNA_Sound
	};

	rna_SoundStrip_volume_ = {
		{&rna_SoundStrip_pan, 	&rna_SoundStrip_sound,
		-1, "volume", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Volume",
		"Playback volume of the sound",
		0, "Sound",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_audio_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, volume), RawPropertyType(5), nullptr},
		SoundStrip_volume_get, SoundStrip_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_SoundStrip_pan_ = {
		{&rna_SoundStrip_sound_offset, 	&rna_SoundStrip_volume,
		-1, "pan", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pan",
		"Playback panning of the sound (only for Mono sources)",
		0, "Sound",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_audio_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, pan), RawPropertyType(5), nullptr},
		SoundStrip_pan_get, SoundStrip_pan_set, nullptr, nullptr, rna_Strip_pan_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoundStrip_sound_offset_ = {
		{&rna_SoundStrip_show_waveform, 	&rna_SoundStrip_pan,
		-1, "sound_offset", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sound Offset",
		"Subframe offset of the sound source start expressed in seconds",
		0, "Sound",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME_ABSOLUTE) | int(PROP_UNIT_TIME_ABSOLUTE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_audio_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, sound_offset), RawPropertyType(5), nullptr},
		SoundStrip_sound_offset_get, SoundStrip_sound_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SoundStrip_show_waveform_ = {
		{&rna_SoundStrip_pitch_correction, 	&rna_SoundStrip_sound_offset,
		-1, "show_waveform", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display Waveform",
		"Display the audio waveform inside the strip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoundStrip_show_waveform_get, SoundStrip_show_waveform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SoundStrip_pitch_correction_ = {
		{&rna_SoundStrip_retiming_keys, 	&rna_SoundStrip_show_waveform,
		-1, "pitch_correction", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Preserve Pitch",
		"Maintain the original pitch of the audio when changing playback speed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_sound_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoundStrip_pitch_correction_get, SoundStrip_pitch_correction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SoundStrip_retiming_keys_ = {
		{&rna_SoundStrip_animation_offset_start, 	&rna_SoundStrip_pitch_correction,
		-1, "retiming_keys", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Retiming Keys",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_RetimingKeys},
		SoundStrip_retiming_keys_begin, SoundStrip_retiming_keys_next, SoundStrip_retiming_keys_end, SoundStrip_retiming_keys_get, SoundStrip_retiming_keys_length, SoundStrip_retiming_keys_lookup_int, nullptr, nullptr, RNA_RetimingKey
	};

	static const DeprecatedRNA rna_SoundStrip_animation_offset_start_deprecated = {
	"Replaced by \'.content_trim_start\'.",
		510, 600,
};

	rna_SoundStrip_animation_offset_start_ = {
		{&rna_SoundStrip_content_trim_start, 	&rna_SoundStrip_retiming_keys,
		-1, "animation_offset_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Start Offset",
		"Animation start offset (trim start)",
		0, "*",
		&rna_SoundStrip_animation_offset_start_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoundStrip_animation_offset_start_get, SoundStrip_animation_offset_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SoundStrip_content_trim_start_ = {
		{&rna_SoundStrip_animation_offset_end, 	&rna_SoundStrip_animation_offset_start,
		-1, "content_trim_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim Start",
		"Number of frames to ignore from the start of the underlying source. The source content is trimmed, and previous frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoundStrip_content_trim_start_get, SoundStrip_content_trim_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_SoundStrip_animation_offset_end_deprecated = {
	"Replaced by \'.content_trim_end\'.",
		510, 600,
};

	rna_SoundStrip_animation_offset_end_ = {
		{&rna_SoundStrip_content_trim_end, 	&rna_SoundStrip_content_trim_start,
		-1, "animation_offset_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation End Offset",
		"Animation end offset (trim end)",
		0, "*",
		&rna_SoundStrip_animation_offset_end_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoundStrip_animation_offset_end_get, SoundStrip_animation_offset_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SoundStrip_content_trim_end_ = {
		{nullptr, 	&rna_SoundStrip_animation_offset_end,
		-1, "content_trim_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim End",
		"Number of frames to ignore from the end of the underlying source. The source content is trimmed, and future frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoundStrip_content_trim_end_get, SoundStrip_content_trim_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_SoundStrip;
	srna->cont.properties = {&rna_SoundStrip_sound, &rna_SoundStrip_content_trim_end};
	srna->identifier = "SoundStrip";
	srna->flag = 516;
	srna->name = "Sound Strip";
	srna->description = "Sequence strip defining a sound to be played over a period of time";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_Strip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Effect Strip */
static BoolPropertyRNA rna_EffectStrip_use_deinterlace_;
PropertyRNA &rna_EffectStrip_use_deinterlace = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_use_deinterlace_);

static EnumPropertyRNA rna_EffectStrip_alpha_mode_;
PropertyRNA &rna_EffectStrip_alpha_mode = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_alpha_mode_);

static BoolPropertyRNA rna_EffectStrip_use_flip_x_;
PropertyRNA &rna_EffectStrip_use_flip_x = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_use_flip_x_);

static BoolPropertyRNA rna_EffectStrip_use_flip_y_;
PropertyRNA &rna_EffectStrip_use_flip_y = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_use_flip_y_);

static BoolPropertyRNA rna_EffectStrip_use_float_;
PropertyRNA &rna_EffectStrip_use_float = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_use_float_);

static BoolPropertyRNA rna_EffectStrip_use_reverse_frames_;
PropertyRNA &rna_EffectStrip_use_reverse_frames = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_use_reverse_frames_);

static FloatPropertyRNA rna_EffectStrip_color_multiply_;
PropertyRNA &rna_EffectStrip_color_multiply = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_color_multiply_);

static BoolPropertyRNA rna_EffectStrip_multiply_alpha_;
PropertyRNA &rna_EffectStrip_multiply_alpha = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_multiply_alpha_);

static FloatPropertyRNA rna_EffectStrip_color_saturation_;
PropertyRNA &rna_EffectStrip_color_saturation = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_color_saturation_);

static FloatPropertyRNA rna_EffectStrip_strobe_;
PropertyRNA &rna_EffectStrip_strobe = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_strobe_);

static PointerPropertyRNA rna_EffectStrip_transform_;
PropertyRNA &rna_EffectStrip_transform = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_transform_);

static PointerPropertyRNA rna_EffectStrip_crop_;
PropertyRNA &rna_EffectStrip_crop = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_crop_);

static BoolPropertyRNA rna_EffectStrip_use_proxy_;
PropertyRNA &rna_EffectStrip_use_proxy = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_use_proxy_);

static PointerPropertyRNA rna_EffectStrip_proxy_;
PropertyRNA &rna_EffectStrip_proxy = reinterpret_cast<PropertyRNA &>(rna_EffectStrip_proxy_);

StructRNA *RNA_EffectStrip;
void register_struct_EffectStrip(BlenderRNA &brna)
{
	rna_EffectStrip_use_deinterlace_ = {
		{&rna_EffectStrip_alpha_mode, 	nullptr,
		-1, "use_deinterlace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deinterlace",
		"Remove fields from video movies",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_reopen_files_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectStrip_use_deinterlace_get, EffectStrip_use_deinterlace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_EffectStrip_alpha_mode_items[3] = {
		{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"	},
		{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_EffectStrip_alpha_mode_ = {
		{&rna_EffectStrip_use_flip_x, 	&rna_EffectStrip_use_deinterlace,
		-1, "alpha_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alpha Mode",
		"Representation of alpha information in the RGBA pixels",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, alpha_mode), RawPropertyType(6), nullptr},
		EffectStrip_alpha_mode_get, EffectStrip_alpha_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_EffectStrip_alpha_mode_items, 2, 0
	};

	rna_EffectStrip_use_flip_x_ = {
		{&rna_EffectStrip_use_flip_y, 	&rna_EffectStrip_alpha_mode,
		-1, "use_flip_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip X",
		"Flip on the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectStrip_use_flip_x_get, EffectStrip_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EffectStrip_use_flip_y_ = {
		{&rna_EffectStrip_use_float, 	&rna_EffectStrip_use_flip_x,
		-1, "use_flip_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip Y",
		"Flip on the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectStrip_use_flip_y_get, EffectStrip_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EffectStrip_use_float_ = {
		{&rna_EffectStrip_use_reverse_frames, 	&rna_EffectStrip_use_flip_y,
		-1, "use_float", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Convert Float",
		"Convert input to float data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectStrip_use_float_get, EffectStrip_use_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EffectStrip_use_reverse_frames_ = {
		{&rna_EffectStrip_color_multiply, 	&rna_EffectStrip_use_float,
		-1, "use_reverse_frames", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Reverse Frames",
		"Reverse frame order",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectStrip_use_reverse_frames_get, EffectStrip_use_reverse_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EffectStrip_color_multiply_ = {
		{&rna_EffectStrip_multiply_alpha, 	&rna_EffectStrip_use_reverse_frames,
		-1, "color_multiply", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Multiply Colors",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, mul), RawPropertyType(5), nullptr},
		EffectStrip_color_multiply_get, EffectStrip_color_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_EffectStrip_multiply_alpha_ = {
		{&rna_EffectStrip_color_saturation, 	&rna_EffectStrip_color_multiply,
		-1, "multiply_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Alpha",
		"Multiply alpha along with color channels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectStrip_multiply_alpha_get, EffectStrip_multiply_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EffectStrip_color_saturation_ = {
		{&rna_EffectStrip_strobe, 	&rna_EffectStrip_multiply_alpha,
		-1, "color_saturation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Adjust the intensity of the input\'s color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, sat), RawPropertyType(5), nullptr},
		EffectStrip_color_saturation_get, EffectStrip_color_saturation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_EffectStrip_strobe_ = {
		{&rna_EffectStrip_transform, 	&rna_EffectStrip_color_saturation,
		-1, "strobe", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strobe",
		"Only display every nth frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, strobe), RawPropertyType(5), nullptr},
		EffectStrip_strobe_get, EffectStrip_strobe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EffectStrip_transform_ = {
		{&rna_EffectStrip_crop, 	&rna_EffectStrip_strobe,
		-1, "transform", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transform",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectStrip_transform_get, nullptr, nullptr, nullptr,RNA_StripTransform
	};

	rna_EffectStrip_crop_ = {
		{&rna_EffectStrip_use_proxy, 	&rna_EffectStrip_transform,
		-1, "crop", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Crop",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectStrip_crop_get, nullptr, nullptr, nullptr,RNA_StripCrop
	};

	rna_EffectStrip_use_proxy_ = {
		{&rna_EffectStrip_proxy, 	&rna_EffectStrip_crop,
		-1, "use_proxy", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Proxy",
		"Use a preview proxy for this strip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectStrip_use_proxy_get, EffectStrip_use_proxy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EffectStrip_proxy_ = {
		{nullptr, 	&rna_EffectStrip_use_proxy,
		-1, "proxy", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Proxy",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EffectStrip_proxy_get, nullptr, nullptr, nullptr,RNA_StripProxy
	};

	StructRNA *srna = RNA_EffectStrip;
	srna->cont.properties = {&rna_EffectStrip_use_deinterlace, &rna_EffectStrip_proxy};
	srna->identifier = "EffectStrip";
	srna->flag = 516;
	srna->name = "Effect Strip";
	srna->description = "Sequence strip applying an effect on the images created by other strips";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_Strip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Add Strip */
static IntPropertyRNA rna_AddStrip_input_count_;
PropertyRNA &rna_AddStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_AddStrip_input_count_);

static PointerPropertyRNA rna_AddStrip_input_1_;
PropertyRNA &rna_AddStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_AddStrip_input_1_);

static PointerPropertyRNA rna_AddStrip_input_2_;
PropertyRNA &rna_AddStrip_input_2 = reinterpret_cast<PropertyRNA &>(rna_AddStrip_input_2_);

StructRNA *RNA_AddStrip;
void register_struct_AddStrip(BlenderRNA &brna)
{
	rna_AddStrip_input_count_ = {
		{&rna_AddStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AddStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AddStrip_input_1_ = {
		{&rna_AddStrip_input_2, 	&rna_AddStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AddStrip_input_1_get, AddStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_AddStrip_input_2_ = {
		{nullptr, 	&rna_AddStrip_input_1,
		-1, "input_2", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 2",
		"Second input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AddStrip_input_2_get, AddStrip_input_2_set, nullptr, nullptr,RNA_Strip
	};

	StructRNA *srna = RNA_AddStrip;
	srna->cont.properties = {&rna_AddStrip_input_count, &rna_AddStrip_input_2};
	srna->identifier = "AddStrip";
	srna->flag = 516;
	srna->name = "Add Strip";
	srna->description = "Add Strip";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Adjustment Layer Strip */
static IntPropertyRNA rna_AdjustmentStrip_input_count_;
PropertyRNA &rna_AdjustmentStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_AdjustmentStrip_input_count_);

static IntPropertyRNA rna_AdjustmentStrip_animation_offset_start_;
PropertyRNA &rna_AdjustmentStrip_animation_offset_start = reinterpret_cast<PropertyRNA &>(rna_AdjustmentStrip_animation_offset_start_);

static IntPropertyRNA rna_AdjustmentStrip_content_trim_start_;
PropertyRNA &rna_AdjustmentStrip_content_trim_start = reinterpret_cast<PropertyRNA &>(rna_AdjustmentStrip_content_trim_start_);

static IntPropertyRNA rna_AdjustmentStrip_animation_offset_end_;
PropertyRNA &rna_AdjustmentStrip_animation_offset_end = reinterpret_cast<PropertyRNA &>(rna_AdjustmentStrip_animation_offset_end_);

static IntPropertyRNA rna_AdjustmentStrip_content_trim_end_;
PropertyRNA &rna_AdjustmentStrip_content_trim_end = reinterpret_cast<PropertyRNA &>(rna_AdjustmentStrip_content_trim_end_);

StructRNA *RNA_AdjustmentStrip;
void register_struct_AdjustmentStrip(BlenderRNA &brna)
{
	rna_AdjustmentStrip_input_count_ = {
		{&rna_AdjustmentStrip_animation_offset_start, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AdjustmentStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_AdjustmentStrip_animation_offset_start_deprecated = {
	"Replaced by \'.content_trim_start\'.",
		510, 600,
};

	rna_AdjustmentStrip_animation_offset_start_ = {
		{&rna_AdjustmentStrip_content_trim_start, 	&rna_AdjustmentStrip_input_count,
		-1, "animation_offset_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Start Offset",
		"Animation start offset (trim start)",
		0, "*",
		&rna_AdjustmentStrip_animation_offset_start_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AdjustmentStrip_animation_offset_start_get, AdjustmentStrip_animation_offset_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AdjustmentStrip_content_trim_start_ = {
		{&rna_AdjustmentStrip_animation_offset_end, 	&rna_AdjustmentStrip_animation_offset_start,
		-1, "content_trim_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim Start",
		"Number of frames to ignore from the start of the underlying source. The source content is trimmed, and previous frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AdjustmentStrip_content_trim_start_get, AdjustmentStrip_content_trim_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_AdjustmentStrip_animation_offset_end_deprecated = {
	"Replaced by \'.content_trim_end\'.",
		510, 600,
};

	rna_AdjustmentStrip_animation_offset_end_ = {
		{&rna_AdjustmentStrip_content_trim_end, 	&rna_AdjustmentStrip_content_trim_start,
		-1, "animation_offset_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation End Offset",
		"Animation end offset (trim end)",
		0, "*",
		&rna_AdjustmentStrip_animation_offset_end_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AdjustmentStrip_animation_offset_end_get, AdjustmentStrip_animation_offset_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AdjustmentStrip_content_trim_end_ = {
		{nullptr, 	&rna_AdjustmentStrip_animation_offset_end,
		-1, "content_trim_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim End",
		"Number of frames to ignore from the end of the underlying source. The source content is trimmed, and future frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AdjustmentStrip_content_trim_end_get, AdjustmentStrip_content_trim_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_AdjustmentStrip;
	srna->cont.properties = {&rna_AdjustmentStrip_input_count, &rna_AdjustmentStrip_content_trim_end};
	srna->identifier = "AdjustmentStrip";
	srna->flag = 516;
	srna->name = "Adjustment Layer Strip";
	srna->description = "Sequence strip to perform filter adjustments to layers below";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Alpha Over Strip */
static IntPropertyRNA rna_AlphaOverStrip_input_count_;
PropertyRNA &rna_AlphaOverStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_AlphaOverStrip_input_count_);

static PointerPropertyRNA rna_AlphaOverStrip_input_1_;
PropertyRNA &rna_AlphaOverStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_AlphaOverStrip_input_1_);

static PointerPropertyRNA rna_AlphaOverStrip_input_2_;
PropertyRNA &rna_AlphaOverStrip_input_2 = reinterpret_cast<PropertyRNA &>(rna_AlphaOverStrip_input_2_);

StructRNA *RNA_AlphaOverStrip;
void register_struct_AlphaOverStrip(BlenderRNA &brna)
{
	rna_AlphaOverStrip_input_count_ = {
		{&rna_AlphaOverStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AlphaOverStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AlphaOverStrip_input_1_ = {
		{&rna_AlphaOverStrip_input_2, 	&rna_AlphaOverStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AlphaOverStrip_input_1_get, AlphaOverStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_AlphaOverStrip_input_2_ = {
		{nullptr, 	&rna_AlphaOverStrip_input_1,
		-1, "input_2", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 2",
		"Second input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AlphaOverStrip_input_2_get, AlphaOverStrip_input_2_set, nullptr, nullptr,RNA_Strip
	};

	StructRNA *srna = RNA_AlphaOverStrip;
	srna->cont.properties = {&rna_AlphaOverStrip_input_count, &rna_AlphaOverStrip_input_2};
	srna->identifier = "AlphaOverStrip";
	srna->flag = 516;
	srna->name = "Alpha Over Strip";
	srna->description = "Alpha Over Strip";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Alpha Under Strip */
static IntPropertyRNA rna_AlphaUnderStrip_input_count_;
PropertyRNA &rna_AlphaUnderStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_AlphaUnderStrip_input_count_);

static PointerPropertyRNA rna_AlphaUnderStrip_input_1_;
PropertyRNA &rna_AlphaUnderStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_AlphaUnderStrip_input_1_);

static PointerPropertyRNA rna_AlphaUnderStrip_input_2_;
PropertyRNA &rna_AlphaUnderStrip_input_2 = reinterpret_cast<PropertyRNA &>(rna_AlphaUnderStrip_input_2_);

StructRNA *RNA_AlphaUnderStrip;
void register_struct_AlphaUnderStrip(BlenderRNA &brna)
{
	rna_AlphaUnderStrip_input_count_ = {
		{&rna_AlphaUnderStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AlphaUnderStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AlphaUnderStrip_input_1_ = {
		{&rna_AlphaUnderStrip_input_2, 	&rna_AlphaUnderStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AlphaUnderStrip_input_1_get, AlphaUnderStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_AlphaUnderStrip_input_2_ = {
		{nullptr, 	&rna_AlphaUnderStrip_input_1,
		-1, "input_2", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 2",
		"Second input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AlphaUnderStrip_input_2_get, AlphaUnderStrip_input_2_set, nullptr, nullptr,RNA_Strip
	};

	StructRNA *srna = RNA_AlphaUnderStrip;
	srna->cont.properties = {&rna_AlphaUnderStrip_input_count, &rna_AlphaUnderStrip_input_2};
	srna->identifier = "AlphaUnderStrip";
	srna->flag = 516;
	srna->name = "Alpha Under Strip";
	srna->description = "Alpha Under Strip";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Color Strip */
static IntPropertyRNA rna_ColorStrip_input_count_;
PropertyRNA &rna_ColorStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_ColorStrip_input_count_);

static FloatPropertyRNA rna_ColorStrip_color_;
PropertyRNA &rna_ColorStrip_color = reinterpret_cast<PropertyRNA &>(rna_ColorStrip_color_);

static IntPropertyRNA rna_ColorStrip_width_;
PropertyRNA &rna_ColorStrip_width = reinterpret_cast<PropertyRNA &>(rna_ColorStrip_width_);

static IntPropertyRNA rna_ColorStrip_height_;
PropertyRNA &rna_ColorStrip_height = reinterpret_cast<PropertyRNA &>(rna_ColorStrip_height_);

StructRNA *RNA_ColorStrip;
void register_struct_ColorStrip(BlenderRNA &brna)
{
	rna_ColorStrip_input_count_ = {
		{&rna_ColorStrip_color, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_ColorStrip_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ColorStrip_color_ = {
		{&rna_ColorStrip_width, 	&rna_ColorStrip_input_count,
		-1, "color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Effect Strip color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SolidColorVars, col), RawPropertyType(5), nullptr},
		nullptr, nullptr, ColorStrip_color_get, ColorStrip_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ColorStrip_color_default
	};

	rna_ColorStrip_width_ = {
		{&rna_ColorStrip_height, 	&rna_ColorStrip_color,
		-1, "width", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Width",
		"Width of the color strip in pixels",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SolidColorVars, width), RawPropertyType(0), nullptr},
		ColorStrip_width_get, ColorStrip_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, rna_ColorStrip_width_default, nullptr, 0, nullptr
	};

	rna_ColorStrip_height_ = {
		{nullptr, 	&rna_ColorStrip_width,
		-1, "height", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Height",
		"Height of the color strip in pixels",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SolidColorVars, height), RawPropertyType(0), nullptr},
		ColorStrip_height_get, ColorStrip_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, rna_ColorStrip_height_default, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ColorStrip;
	srna->cont.properties = {&rna_ColorStrip_input_count, &rna_ColorStrip_height};
	srna->identifier = "ColorStrip";
	srna->flag = 516;
	srna->name = "Color Strip";
	srna->description = "Sequence strip creating an image filled with a single color";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Crossfade Strip */
static IntPropertyRNA rna_CrossStrip_input_count_;
PropertyRNA &rna_CrossStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_CrossStrip_input_count_);

static PointerPropertyRNA rna_CrossStrip_input_1_;
PropertyRNA &rna_CrossStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_CrossStrip_input_1_);

static PointerPropertyRNA rna_CrossStrip_input_2_;
PropertyRNA &rna_CrossStrip_input_2 = reinterpret_cast<PropertyRNA &>(rna_CrossStrip_input_2_);

StructRNA *RNA_CrossStrip;
void register_struct_CrossStrip(BlenderRNA &brna)
{
	rna_CrossStrip_input_count_ = {
		{&rna_CrossStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CrossStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_CrossStrip_input_1_ = {
		{&rna_CrossStrip_input_2, 	&rna_CrossStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CrossStrip_input_1_get, CrossStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_CrossStrip_input_2_ = {
		{nullptr, 	&rna_CrossStrip_input_1,
		-1, "input_2", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 2",
		"Second input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CrossStrip_input_2_get, CrossStrip_input_2_set, nullptr, nullptr,RNA_Strip
	};

	StructRNA *srna = RNA_CrossStrip;
	srna->cont.properties = {&rna_CrossStrip_input_count, &rna_CrossStrip_input_2};
	srna->identifier = "CrossStrip";
	srna->flag = 516;
	srna->name = "Crossfade Strip";
	srna->description = "Crossfade Strip";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Gamma Crossfade Strip */
static IntPropertyRNA rna_GammaCrossStrip_input_count_;
PropertyRNA &rna_GammaCrossStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_GammaCrossStrip_input_count_);

static PointerPropertyRNA rna_GammaCrossStrip_input_1_;
PropertyRNA &rna_GammaCrossStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_GammaCrossStrip_input_1_);

static PointerPropertyRNA rna_GammaCrossStrip_input_2_;
PropertyRNA &rna_GammaCrossStrip_input_2 = reinterpret_cast<PropertyRNA &>(rna_GammaCrossStrip_input_2_);

StructRNA *RNA_GammaCrossStrip;
void register_struct_GammaCrossStrip(BlenderRNA &brna)
{
	rna_GammaCrossStrip_input_count_ = {
		{&rna_GammaCrossStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GammaCrossStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_GammaCrossStrip_input_1_ = {
		{&rna_GammaCrossStrip_input_2, 	&rna_GammaCrossStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GammaCrossStrip_input_1_get, GammaCrossStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_GammaCrossStrip_input_2_ = {
		{nullptr, 	&rna_GammaCrossStrip_input_1,
		-1, "input_2", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 2",
		"Second input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GammaCrossStrip_input_2_get, GammaCrossStrip_input_2_set, nullptr, nullptr,RNA_Strip
	};

	StructRNA *srna = RNA_GammaCrossStrip;
	srna->cont.properties = {&rna_GammaCrossStrip_input_count, &rna_GammaCrossStrip_input_2};
	srna->identifier = "GammaCrossStrip";
	srna->flag = 516;
	srna->name = "Gamma Crossfade Strip";
	srna->description = "Gamma Crossfade Strip";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Compositor Strip */
static IntPropertyRNA rna_CompositorStrip_input_count_;
PropertyRNA &rna_CompositorStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_CompositorStrip_input_count_);

static PointerPropertyRNA rna_CompositorStrip_input_1_;
PropertyRNA &rna_CompositorStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_CompositorStrip_input_1_);

static PointerPropertyRNA rna_CompositorStrip_input_2_;
PropertyRNA &rna_CompositorStrip_input_2 = reinterpret_cast<PropertyRNA &>(rna_CompositorStrip_input_2_);

static PointerPropertyRNA rna_CompositorStrip_node_group_;
PropertyRNA &rna_CompositorStrip_node_group = reinterpret_cast<PropertyRNA &>(rna_CompositorStrip_node_group_);

StructRNA *RNA_CompositorStrip;
void register_struct_CompositorStrip(BlenderRNA &brna)
{
	rna_CompositorStrip_input_count_ = {
		{&rna_CompositorStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CompositorStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_CompositorStrip_input_1_ = {
		{&rna_CompositorStrip_input_2, 	&rna_CompositorStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CompositorStrip_input_1_get, CompositorStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_CompositorStrip_input_2_ = {
		{&rna_CompositorStrip_node_group, 	&rna_CompositorStrip_input_1,
		-1, "input_2", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 2",
		"Second input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CompositorStrip_input_2_get, CompositorStrip_input_2_set, nullptr, nullptr,RNA_Strip
	};

	rna_CompositorStrip_node_group_ = {
		{nullptr, 	&rna_CompositorStrip_input_2,
		-1, "node_group", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Node Group",
		"Node group that controls what this effect does",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CompositorEffect_node_group_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CompositorStrip_node_group_get, CompositorStrip_node_group_set, nullptr, rna_Compositor_node_group_poll,RNA_NodeTree
	};

	StructRNA *srna = RNA_CompositorStrip;
	srna->cont.properties = {&rna_CompositorStrip_input_count, &rna_CompositorStrip_node_group};
	srna->identifier = "CompositorStrip";
	srna->flag = 516;
	srna->name = "Compositor Strip";
	srna->description = "Compositor Strip";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Glow Strip */
static IntPropertyRNA rna_GlowStrip_input_count_;
PropertyRNA &rna_GlowStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_GlowStrip_input_count_);

static PointerPropertyRNA rna_GlowStrip_input_1_;
PropertyRNA &rna_GlowStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_GlowStrip_input_1_);

static FloatPropertyRNA rna_GlowStrip_threshold_;
PropertyRNA &rna_GlowStrip_threshold = reinterpret_cast<PropertyRNA &>(rna_GlowStrip_threshold_);

static FloatPropertyRNA rna_GlowStrip_clamp_;
PropertyRNA &rna_GlowStrip_clamp = reinterpret_cast<PropertyRNA &>(rna_GlowStrip_clamp_);

static FloatPropertyRNA rna_GlowStrip_boost_factor_;
PropertyRNA &rna_GlowStrip_boost_factor = reinterpret_cast<PropertyRNA &>(rna_GlowStrip_boost_factor_);

static FloatPropertyRNA rna_GlowStrip_blur_radius_;
PropertyRNA &rna_GlowStrip_blur_radius = reinterpret_cast<PropertyRNA &>(rna_GlowStrip_blur_radius_);

static IntPropertyRNA rna_GlowStrip_quality_;
PropertyRNA &rna_GlowStrip_quality = reinterpret_cast<PropertyRNA &>(rna_GlowStrip_quality_);

static BoolPropertyRNA rna_GlowStrip_use_only_boost_;
PropertyRNA &rna_GlowStrip_use_only_boost = reinterpret_cast<PropertyRNA &>(rna_GlowStrip_use_only_boost_);

StructRNA *RNA_GlowStrip;
void register_struct_GlowStrip(BlenderRNA &brna)
{
	rna_GlowStrip_input_count_ = {
		{&rna_GlowStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GlowStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_GlowStrip_input_1_ = {
		{&rna_GlowStrip_threshold, 	&rna_GlowStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GlowStrip_input_1_get, GlowStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_GlowStrip_threshold_ = {
		{&rna_GlowStrip_clamp, 	&rna_GlowStrip_input_1,
		-1, "threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Minimum intensity to trigger a glow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowVars, fMini), RawPropertyType(5), nullptr},
		GlowStrip_threshold_get, GlowStrip_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_GlowStrip_clamp_ = {
		{&rna_GlowStrip_boost_factor, 	&rna_GlowStrip_threshold,
		-1, "clamp", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clamp",
		"Brightness limit of intensity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowVars, fClamp), RawPropertyType(5), nullptr},
		GlowStrip_clamp_get, GlowStrip_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_GlowStrip_boost_factor_ = {
		{&rna_GlowStrip_blur_radius, 	&rna_GlowStrip_clamp,
		-1, "boost_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Boost Factor",
		"Brightness multiplier",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowVars, fBoost), RawPropertyType(5), nullptr},
		GlowStrip_boost_factor_get, GlowStrip_boost_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_GlowStrip_blur_radius_ = {
		{&rna_GlowStrip_quality, 	&rna_GlowStrip_boost_factor,
		-1, "blur_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blur Distance",
		"Radius of glow effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowVars, dDist), RawPropertyType(5), nullptr},
		GlowStrip_blur_radius_get, GlowStrip_blur_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.5000000000f, 20.0f, 0.5000000000f, 20.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_GlowStrip_quality_ = {
		{&rna_GlowStrip_use_only_boost, 	&rna_GlowStrip_blur_radius,
		-1, "quality", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Quality",
		"Accuracy of the blur effect",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowVars, dQuality), RawPropertyType(0), nullptr},
		GlowStrip_quality_get, GlowStrip_quality_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 5, 1, 5, 1, nullptr, nullptr, 0, nullptr
	};

	rna_GlowStrip_use_only_boost_ = {
		{nullptr, 	&rna_GlowStrip_quality,
		-1, "use_only_boost", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Only Boost",
		"Show the glow buffer only",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowVars, bNoComp), RawPropertyType(0), nullptr},
		GlowStrip_use_only_boost_get, GlowStrip_use_only_boost_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_GlowStrip;
	srna->cont.properties = {&rna_GlowStrip_input_count, &rna_GlowStrip_use_only_boost};
	srna->identifier = "GlowStrip";
	srna->flag = 516;
	srna->name = "Glow Strip";
	srna->description = "Sequence strip creating a glow effect";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Multicam Select Strip */
static IntPropertyRNA rna_MulticamStrip_input_count_;
PropertyRNA &rna_MulticamStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_MulticamStrip_input_count_);

static IntPropertyRNA rna_MulticamStrip_multicam_source_;
PropertyRNA &rna_MulticamStrip_multicam_source = reinterpret_cast<PropertyRNA &>(rna_MulticamStrip_multicam_source_);

static IntPropertyRNA rna_MulticamStrip_animation_offset_start_;
PropertyRNA &rna_MulticamStrip_animation_offset_start = reinterpret_cast<PropertyRNA &>(rna_MulticamStrip_animation_offset_start_);

static IntPropertyRNA rna_MulticamStrip_content_trim_start_;
PropertyRNA &rna_MulticamStrip_content_trim_start = reinterpret_cast<PropertyRNA &>(rna_MulticamStrip_content_trim_start_);

static IntPropertyRNA rna_MulticamStrip_animation_offset_end_;
PropertyRNA &rna_MulticamStrip_animation_offset_end = reinterpret_cast<PropertyRNA &>(rna_MulticamStrip_animation_offset_end_);

static IntPropertyRNA rna_MulticamStrip_content_trim_end_;
PropertyRNA &rna_MulticamStrip_content_trim_end = reinterpret_cast<PropertyRNA &>(rna_MulticamStrip_content_trim_end_);

StructRNA *RNA_MulticamStrip;
void register_struct_MulticamStrip(BlenderRNA &brna)
{
	rna_MulticamStrip_input_count_ = {
		{&rna_MulticamStrip_multicam_source, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MulticamStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MulticamStrip_multicam_source_ = {
		{&rna_MulticamStrip_animation_offset_start, 	&rna_MulticamStrip_input_count,
		-1, "multicam_source", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Multicam Source Channel",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Strip, multicam_source), RawPropertyType(0), nullptr},
		MulticamStrip_multicam_source_get, MulticamStrip_multicam_source_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 127, 0, 127, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_MulticamStrip_animation_offset_start_deprecated = {
	"Replaced by \'.content_trim_start\'.",
		510, 600,
};

	rna_MulticamStrip_animation_offset_start_ = {
		{&rna_MulticamStrip_content_trim_start, 	&rna_MulticamStrip_multicam_source,
		-1, "animation_offset_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Start Offset",
		"Animation start offset (trim start)",
		0, "*",
		&rna_MulticamStrip_animation_offset_start_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MulticamStrip_animation_offset_start_get, MulticamStrip_animation_offset_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MulticamStrip_content_trim_start_ = {
		{&rna_MulticamStrip_animation_offset_end, 	&rna_MulticamStrip_animation_offset_start,
		-1, "content_trim_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim Start",
		"Number of frames to ignore from the start of the underlying source. The source content is trimmed, and previous frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MulticamStrip_content_trim_start_get, MulticamStrip_content_trim_start_set, nullptr, nullptr, rna_Strip_content_trim_start_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_MulticamStrip_animation_offset_end_deprecated = {
	"Replaced by \'.content_trim_end\'.",
		510, 600,
};

	rna_MulticamStrip_animation_offset_end_ = {
		{&rna_MulticamStrip_content_trim_end, 	&rna_MulticamStrip_content_trim_start,
		-1, "animation_offset_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation End Offset",
		"Animation end offset (trim end)",
		0, "*",
		&rna_MulticamStrip_animation_offset_end_deprecated,		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MulticamStrip_animation_offset_end_get, MulticamStrip_animation_offset_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MulticamStrip_content_trim_end_ = {
		{nullptr, 	&rna_MulticamStrip_animation_offset_end,
		-1, "content_trim_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Content Trim End",
		"Number of frames to ignore from the end of the underlying source. The source content is trimmed, and future frames are turned into holds",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_preprocessed_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MulticamStrip_content_trim_end_get, MulticamStrip_content_trim_end_set, nullptr, nullptr, rna_Strip_content_trim_end_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MulticamStrip;
	srna->cont.properties = {&rna_MulticamStrip_input_count, &rna_MulticamStrip_content_trim_end};
	srna->identifier = "MulticamStrip";
	srna->flag = 516;
	srna->name = "Multicam Select Strip";
	srna->description = "Sequence strip to perform multicam editing";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Multiply Strip */
static IntPropertyRNA rna_MultiplyStrip_input_count_;
PropertyRNA &rna_MultiplyStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_MultiplyStrip_input_count_);

static PointerPropertyRNA rna_MultiplyStrip_input_1_;
PropertyRNA &rna_MultiplyStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_MultiplyStrip_input_1_);

static PointerPropertyRNA rna_MultiplyStrip_input_2_;
PropertyRNA &rna_MultiplyStrip_input_2 = reinterpret_cast<PropertyRNA &>(rna_MultiplyStrip_input_2_);

StructRNA *RNA_MultiplyStrip;
void register_struct_MultiplyStrip(BlenderRNA &brna)
{
	rna_MultiplyStrip_input_count_ = {
		{&rna_MultiplyStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MultiplyStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MultiplyStrip_input_1_ = {
		{&rna_MultiplyStrip_input_2, 	&rna_MultiplyStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MultiplyStrip_input_1_get, MultiplyStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_MultiplyStrip_input_2_ = {
		{nullptr, 	&rna_MultiplyStrip_input_1,
		-1, "input_2", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 2",
		"Second input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MultiplyStrip_input_2_get, MultiplyStrip_input_2_set, nullptr, nullptr,RNA_Strip
	};

	StructRNA *srna = RNA_MultiplyStrip;
	srna->cont.properties = {&rna_MultiplyStrip_input_count, &rna_MultiplyStrip_input_2};
	srna->identifier = "MultiplyStrip";
	srna->flag = 516;
	srna->name = "Multiply Strip";
	srna->description = "Multiply Strip";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* SpeedControl Strip */
static IntPropertyRNA rna_SpeedControlStrip_input_count_;
PropertyRNA &rna_SpeedControlStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_SpeedControlStrip_input_count_);

static PointerPropertyRNA rna_SpeedControlStrip_input_1_;
PropertyRNA &rna_SpeedControlStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_SpeedControlStrip_input_1_);

static EnumPropertyRNA rna_SpeedControlStrip_speed_control_;
PropertyRNA &rna_SpeedControlStrip_speed_control = reinterpret_cast<PropertyRNA &>(rna_SpeedControlStrip_speed_control_);

static FloatPropertyRNA rna_SpeedControlStrip_speed_factor_;
PropertyRNA &rna_SpeedControlStrip_speed_factor = reinterpret_cast<PropertyRNA &>(rna_SpeedControlStrip_speed_factor_);

static FloatPropertyRNA rna_SpeedControlStrip_speed_frame_number_;
PropertyRNA &rna_SpeedControlStrip_speed_frame_number = reinterpret_cast<PropertyRNA &>(rna_SpeedControlStrip_speed_frame_number_);

static FloatPropertyRNA rna_SpeedControlStrip_speed_length_;
PropertyRNA &rna_SpeedControlStrip_speed_length = reinterpret_cast<PropertyRNA &>(rna_SpeedControlStrip_speed_length_);

static BoolPropertyRNA rna_SpeedControlStrip_use_frame_interpolate_;
PropertyRNA &rna_SpeedControlStrip_use_frame_interpolate = reinterpret_cast<PropertyRNA &>(rna_SpeedControlStrip_use_frame_interpolate_);

StructRNA *RNA_SpeedControlStrip;
void register_struct_SpeedControlStrip(BlenderRNA &brna)
{
	rna_SpeedControlStrip_input_count_ = {
		{&rna_SpeedControlStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SpeedControlStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SpeedControlStrip_input_1_ = {
		{&rna_SpeedControlStrip_speed_control, 	&rna_SpeedControlStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SpeedControlStrip_input_1_get, SpeedControlStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	static const EnumPropertyItem rna_SpeedControlStrip_speed_control_items[5] = {
		{0, "STRETCH", 0, "Stretch", "Adjust input playback speed, so its duration fits strip length"	},
		{1, "MULTIPLY", 0, "Multiply", "Multiply with the speed factor"	},
		{3, "FRAME_NUMBER", 0, "Frame Number", "Frame number of the input strip"	},
		{2, "LENGTH", 0, "Length", "Percentage of the input strip length"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_SpeedControlStrip_speed_control_ = {
		{&rna_SpeedControlStrip_speed_factor, 	&rna_SpeedControlStrip_input_1,
		-1, "speed_control", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Speed Control",
		"Speed control method",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SpeedControlVars, speed_control_type), RawPropertyType(0), nullptr},
		SpeedControlStrip_speed_control_get, SpeedControlStrip_speed_control_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_SpeedControlStrip_speed_control_items, 4, 0
	};

	rna_SpeedControlStrip_speed_factor_ = {
		{&rna_SpeedControlStrip_speed_frame_number, 	&rna_SpeedControlStrip_speed_control,
		-1, "speed_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Multiply Factor",
		"Multiply the current speed of the strip with this number or remap current frame to this frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SpeedControlVars, speed_fader), RawPropertyType(5), nullptr},
		SpeedControlStrip_speed_factor_get, SpeedControlStrip_speed_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SpeedControlStrip_speed_frame_number_ = {
		{&rna_SpeedControlStrip_speed_length, 	&rna_SpeedControlStrip_speed_factor,
		-1, "speed_frame_number", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frame Number",
		"Frame number of input strip",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SpeedControlVars, speed_fader_frame_number), RawPropertyType(5), nullptr},
		SpeedControlStrip_speed_frame_number_get, SpeedControlStrip_speed_frame_number_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1048574.0f, -FLT_MAX, FLT_MAX, 1.0f, -1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SpeedControlStrip_speed_length_ = {
		{&rna_SpeedControlStrip_use_frame_interpolate, 	&rna_SpeedControlStrip_speed_frame_number,
		-1, "speed_length", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Length",
		"Percentage of input strip length",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SpeedControlVars, speed_fader_length), RawPropertyType(5), nullptr},
		SpeedControlStrip_speed_length_get, SpeedControlStrip_speed_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, -1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SpeedControlStrip_use_frame_interpolate_ = {
		{nullptr, 	&rna_SpeedControlStrip_speed_length,
		-1, "use_frame_interpolate", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame Interpolation",
		"Do crossfade blending between current and next frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SpeedControlStrip_use_frame_interpolate_get, SpeedControlStrip_use_frame_interpolate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_SpeedControlStrip;
	srna->cont.properties = {&rna_SpeedControlStrip_input_count, &rna_SpeedControlStrip_use_frame_interpolate};
	srna->identifier = "SpeedControlStrip";
	srna->flag = 516;
	srna->name = "SpeedControl Strip";
	srna->description = "Sequence strip to control the speed of other strips";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Subtract Strip */
static IntPropertyRNA rna_SubtractStrip_input_count_;
PropertyRNA &rna_SubtractStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_SubtractStrip_input_count_);

static PointerPropertyRNA rna_SubtractStrip_input_1_;
PropertyRNA &rna_SubtractStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_SubtractStrip_input_1_);

static PointerPropertyRNA rna_SubtractStrip_input_2_;
PropertyRNA &rna_SubtractStrip_input_2 = reinterpret_cast<PropertyRNA &>(rna_SubtractStrip_input_2_);

StructRNA *RNA_SubtractStrip;
void register_struct_SubtractStrip(BlenderRNA &brna)
{
	rna_SubtractStrip_input_count_ = {
		{&rna_SubtractStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SubtractStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SubtractStrip_input_1_ = {
		{&rna_SubtractStrip_input_2, 	&rna_SubtractStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SubtractStrip_input_1_get, SubtractStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_SubtractStrip_input_2_ = {
		{nullptr, 	&rna_SubtractStrip_input_1,
		-1, "input_2", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 2",
		"Second input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SubtractStrip_input_2_get, SubtractStrip_input_2_set, nullptr, nullptr,RNA_Strip
	};

	StructRNA *srna = RNA_SubtractStrip;
	srna->cont.properties = {&rna_SubtractStrip_input_count, &rna_SubtractStrip_input_2};
	srna->identifier = "SubtractStrip";
	srna->flag = 516;
	srna->name = "Subtract Strip";
	srna->description = "Subtract Strip";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Wipe Strip */
static IntPropertyRNA rna_WipeStrip_input_count_;
PropertyRNA &rna_WipeStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_WipeStrip_input_count_);

static PointerPropertyRNA rna_WipeStrip_input_1_;
PropertyRNA &rna_WipeStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_WipeStrip_input_1_);

static PointerPropertyRNA rna_WipeStrip_input_2_;
PropertyRNA &rna_WipeStrip_input_2 = reinterpret_cast<PropertyRNA &>(rna_WipeStrip_input_2_);

static FloatPropertyRNA rna_WipeStrip_blur_width_;
PropertyRNA &rna_WipeStrip_blur_width = reinterpret_cast<PropertyRNA &>(rna_WipeStrip_blur_width_);

static FloatPropertyRNA rna_WipeStrip_angle_;
PropertyRNA &rna_WipeStrip_angle = reinterpret_cast<PropertyRNA &>(rna_WipeStrip_angle_);

static EnumPropertyRNA rna_WipeStrip_direction_;
PropertyRNA &rna_WipeStrip_direction = reinterpret_cast<PropertyRNA &>(rna_WipeStrip_direction_);

static EnumPropertyRNA rna_WipeStrip_transition_type_;
PropertyRNA &rna_WipeStrip_transition_type = reinterpret_cast<PropertyRNA &>(rna_WipeStrip_transition_type_);

StructRNA *RNA_WipeStrip;
void register_struct_WipeStrip(BlenderRNA &brna)
{
	rna_WipeStrip_input_count_ = {
		{&rna_WipeStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WipeStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_WipeStrip_input_1_ = {
		{&rna_WipeStrip_input_2, 	&rna_WipeStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WipeStrip_input_1_get, WipeStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_WipeStrip_input_2_ = {
		{&rna_WipeStrip_blur_width, 	&rna_WipeStrip_input_1,
		-1, "input_2", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 2",
		"Second input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WipeStrip_input_2_get, WipeStrip_input_2_set, nullptr, nullptr,RNA_Strip
	};

	rna_WipeStrip_blur_width_ = {
		{&rna_WipeStrip_angle, 	&rna_WipeStrip_input_2,
		-1, "blur_width", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blur Width",
		"Width of the blur for the transition, in percentage relative to the image size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(WipeVars, edgeWidth), RawPropertyType(5), nullptr},
		WipeStrip_blur_width_get, WipeStrip_blur_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_WipeStrip_angle_ = {
		{&rna_WipeStrip_direction, 	&rna_WipeStrip_blur_width,
		-1, "angle", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angle",
		"Angle of the transition",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(WipeVars, angle), RawPropertyType(5), nullptr},
		WipeStrip_angle_get, WipeStrip_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_WipeStrip_direction_items[3] = {
		{0, "OUT", 0, "Out", ""	},
		{1, "IN", 0, "In", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_WipeStrip_direction_ = {
		{&rna_WipeStrip_transition_type, 	&rna_WipeStrip_angle,
		-1, "direction", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Direction",
		"Whether to fade in or out",
		0, "Sequence",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(WipeVars, forward), RawPropertyType(1), nullptr},
		WipeStrip_direction_get, WipeStrip_direction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_WipeStrip_direction_items, 2, 0
	};

	static const EnumPropertyItem rna_WipeStrip_transition_type_items[5] = {
		{0, "SINGLE", 0, "Single", ""	},
		{1, "DOUBLE", 0, "Double", ""	},
		{2, "IRIS", 0, "Iris", ""	},
		{3, "CLOCK", 0, "Clock", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_WipeStrip_transition_type_ = {
		{nullptr, 	&rna_WipeStrip_direction,
		-1, "transition_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Transition Type",
		"",
		0, "Sequence",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(WipeVars, wipetype), RawPropertyType(7), nullptr},
		WipeStrip_transition_type_get, WipeStrip_transition_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_WipeStrip_transition_type_items, 4, 0
	};

	StructRNA *srna = RNA_WipeStrip;
	srna->cont.properties = {&rna_WipeStrip_input_count, &rna_WipeStrip_transition_type};
	srna->identifier = "WipeStrip";
	srna->flag = 516;
	srna->name = "Wipe Strip";
	srna->description = "Sequence strip creating a wipe transition";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Gaussian Blur Strip */
static IntPropertyRNA rna_GaussianBlurStrip_input_count_;
PropertyRNA &rna_GaussianBlurStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_GaussianBlurStrip_input_count_);

static PointerPropertyRNA rna_GaussianBlurStrip_input_1_;
PropertyRNA &rna_GaussianBlurStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_GaussianBlurStrip_input_1_);

static FloatPropertyRNA rna_GaussianBlurStrip_size_x_;
PropertyRNA &rna_GaussianBlurStrip_size_x = reinterpret_cast<PropertyRNA &>(rna_GaussianBlurStrip_size_x_);

static FloatPropertyRNA rna_GaussianBlurStrip_size_y_;
PropertyRNA &rna_GaussianBlurStrip_size_y = reinterpret_cast<PropertyRNA &>(rna_GaussianBlurStrip_size_y_);

StructRNA *RNA_GaussianBlurStrip;
void register_struct_GaussianBlurStrip(BlenderRNA &brna)
{
	rna_GaussianBlurStrip_input_count_ = {
		{&rna_GaussianBlurStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GaussianBlurStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_GaussianBlurStrip_input_1_ = {
		{&rna_GaussianBlurStrip_size_x, 	&rna_GaussianBlurStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GaussianBlurStrip_input_1_get, GaussianBlurStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_GaussianBlurStrip_size_x_ = {
		{&rna_GaussianBlurStrip_size_y, 	&rna_GaussianBlurStrip_input_1,
		-1, "size_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size X",
		"Size of the blur along X axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GaussianBlurVars, size_x), RawPropertyType(5), nullptr},
		GaussianBlurStrip_size_x_get, GaussianBlurStrip_size_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, -1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_GaussianBlurStrip_size_y_ = {
		{nullptr, 	&rna_GaussianBlurStrip_size_x,
		-1, "size_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size Y",
		"Size of the blur along Y axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GaussianBlurVars, size_y), RawPropertyType(5), nullptr},
		GaussianBlurStrip_size_y_get, GaussianBlurStrip_size_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, -1, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_GaussianBlurStrip;
	srna->cont.properties = {&rna_GaussianBlurStrip_input_count, &rna_GaussianBlurStrip_size_y};
	srna->identifier = "GaussianBlurStrip";
	srna->flag = 516;
	srna->name = "Gaussian Blur Strip";
	srna->description = "Sequence strip creating a gaussian blur";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Text Strip */
static IntPropertyRNA rna_TextStrip_input_count_;
PropertyRNA &rna_TextStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_TextStrip_input_count_);

static PointerPropertyRNA rna_TextStrip_font_;
PropertyRNA &rna_TextStrip_font = reinterpret_cast<PropertyRNA &>(rna_TextStrip_font_);

static FloatPropertyRNA rna_TextStrip_font_size_;
PropertyRNA &rna_TextStrip_font_size = reinterpret_cast<PropertyRNA &>(rna_TextStrip_font_size_);

static FloatPropertyRNA rna_TextStrip_space_line_;
PropertyRNA &rna_TextStrip_space_line = reinterpret_cast<PropertyRNA &>(rna_TextStrip_space_line_);

static FloatPropertyRNA rna_TextStrip_abs_space_line_;
PropertyRNA &rna_TextStrip_abs_space_line = reinterpret_cast<PropertyRNA &>(rna_TextStrip_abs_space_line_);

static BoolPropertyRNA rna_TextStrip_use_absolute_line_spacing_;
PropertyRNA &rna_TextStrip_use_absolute_line_spacing = reinterpret_cast<PropertyRNA &>(rna_TextStrip_use_absolute_line_spacing_);

static FloatPropertyRNA rna_TextStrip_color_;
PropertyRNA &rna_TextStrip_color = reinterpret_cast<PropertyRNA &>(rna_TextStrip_color_);

static FloatPropertyRNA rna_TextStrip_shadow_color_;
PropertyRNA &rna_TextStrip_shadow_color = reinterpret_cast<PropertyRNA &>(rna_TextStrip_shadow_color_);

static FloatPropertyRNA rna_TextStrip_shadow_angle_;
PropertyRNA &rna_TextStrip_shadow_angle = reinterpret_cast<PropertyRNA &>(rna_TextStrip_shadow_angle_);

static FloatPropertyRNA rna_TextStrip_shadow_offset_;
PropertyRNA &rna_TextStrip_shadow_offset = reinterpret_cast<PropertyRNA &>(rna_TextStrip_shadow_offset_);

static FloatPropertyRNA rna_TextStrip_shadow_blur_;
PropertyRNA &rna_TextStrip_shadow_blur = reinterpret_cast<PropertyRNA &>(rna_TextStrip_shadow_blur_);

static FloatPropertyRNA rna_TextStrip_outline_color_;
PropertyRNA &rna_TextStrip_outline_color = reinterpret_cast<PropertyRNA &>(rna_TextStrip_outline_color_);

static FloatPropertyRNA rna_TextStrip_outline_width_;
PropertyRNA &rna_TextStrip_outline_width = reinterpret_cast<PropertyRNA &>(rna_TextStrip_outline_width_);

static FloatPropertyRNA rna_TextStrip_box_color_;
PropertyRNA &rna_TextStrip_box_color = reinterpret_cast<PropertyRNA &>(rna_TextStrip_box_color_);

static FloatPropertyRNA rna_TextStrip_location_;
PropertyRNA &rna_TextStrip_location = reinterpret_cast<PropertyRNA &>(rna_TextStrip_location_);

static FloatPropertyRNA rna_TextStrip_wrap_width_;
PropertyRNA &rna_TextStrip_wrap_width = reinterpret_cast<PropertyRNA &>(rna_TextStrip_wrap_width_);

static FloatPropertyRNA rna_TextStrip_box_margin_;
PropertyRNA &rna_TextStrip_box_margin = reinterpret_cast<PropertyRNA &>(rna_TextStrip_box_margin_);

static FloatPropertyRNA rna_TextStrip_box_roundness_;
PropertyRNA &rna_TextStrip_box_roundness = reinterpret_cast<PropertyRNA &>(rna_TextStrip_box_roundness_);

static EnumPropertyRNA rna_TextStrip_alignment_x_;
PropertyRNA &rna_TextStrip_alignment_x = reinterpret_cast<PropertyRNA &>(rna_TextStrip_alignment_x_);

static EnumPropertyRNA rna_TextStrip_anchor_x_;
PropertyRNA &rna_TextStrip_anchor_x = reinterpret_cast<PropertyRNA &>(rna_TextStrip_anchor_x_);

static EnumPropertyRNA rna_TextStrip_anchor_y_;
PropertyRNA &rna_TextStrip_anchor_y = reinterpret_cast<PropertyRNA &>(rna_TextStrip_anchor_y_);

static StringPropertyRNA rna_TextStrip_text_;
PropertyRNA &rna_TextStrip_text = reinterpret_cast<PropertyRNA &>(rna_TextStrip_text_);

static BoolPropertyRNA rna_TextStrip_use_shadow_;
PropertyRNA &rna_TextStrip_use_shadow = reinterpret_cast<PropertyRNA &>(rna_TextStrip_use_shadow_);

static BoolPropertyRNA rna_TextStrip_use_outline_;
PropertyRNA &rna_TextStrip_use_outline = reinterpret_cast<PropertyRNA &>(rna_TextStrip_use_outline_);

static BoolPropertyRNA rna_TextStrip_use_box_;
PropertyRNA &rna_TextStrip_use_box = reinterpret_cast<PropertyRNA &>(rna_TextStrip_use_box_);

static BoolPropertyRNA rna_TextStrip_use_bold_;
PropertyRNA &rna_TextStrip_use_bold = reinterpret_cast<PropertyRNA &>(rna_TextStrip_use_bold_);

static BoolPropertyRNA rna_TextStrip_use_italic_;
PropertyRNA &rna_TextStrip_use_italic = reinterpret_cast<PropertyRNA &>(rna_TextStrip_use_italic_);

static PointerPropertyRNA rna_TextStrip_textbox_state_;
PropertyRNA &rna_TextStrip_textbox_state = reinterpret_cast<PropertyRNA &>(rna_TextStrip_textbox_state_);

StructRNA *RNA_TextStrip;
void register_struct_TextStrip(BlenderRNA &brna)
{
	rna_TextStrip_input_count_ = {
		{&rna_TextStrip_font, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_TextStrip_font_ = {
		{&rna_TextStrip_font_size, 	&rna_TextStrip_input_count,
		-1, "font", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Font",
		"Font of the text. Falls back to the UI font by default.",
		672, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextStrip_font_get, TextStrip_font_set, nullptr, nullptr,RNA_VectorFont
	};

	rna_TextStrip_font_size_ = {
		{&rna_TextStrip_space_line, 	&rna_TextStrip_font,
		-1, "font_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Size of the text",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, text_size), RawPropertyType(5), nullptr},
		TextStrip_font_size_get, TextStrip_font_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2000.0f, 0.0f, 2000.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TextStrip_space_line_ = {
		{&rna_TextStrip_abs_space_line, 	&rna_TextStrip_font_size,
		-1, "space_line", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Line Spacing",
		"Distance between lines of text in proportion to text size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, space_line), RawPropertyType(5), nullptr},
		TextStrip_space_line_get, TextStrip_space_line_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 50.0f, 1.0f, 1, nullptr, nullptr, 1.0f, nullptr
	};

	rna_TextStrip_abs_space_line_ = {
		{&rna_TextStrip_use_absolute_line_spacing, 	&rna_TextStrip_space_line,
		-1, "abs_space_line", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Absolute Line Spacing",
		"Distance between lines of text in pixels",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, abs_space_line), RawPropertyType(5), nullptr},
		TextStrip_abs_space_line_get, TextStrip_abs_space_line_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 500.0f, 0.0f, 5000.0f, 50.0f, 1, nullptr, nullptr, 1.0f, nullptr
	};

	rna_TextStrip_use_absolute_line_spacing_ = {
		{&rna_TextStrip_color, 	&rna_TextStrip_abs_space_line,
		-1, "use_absolute_line_spacing", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Absolute Line Spacing",
		"Define spacing using pixel values instead of relative scaling based on font size",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextStrip_use_absolute_line_spacing_get, TextStrip_use_absolute_line_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_TextStrip_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_TextStrip_color_ = {
		{&rna_TextStrip_shadow_color, 	&rna_TextStrip_use_absolute_line_spacing,
		-1, "color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Text color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, TextStrip_color_get, TextStrip_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_TextStrip_color_default
	};

	static float rna_TextStrip_shadow_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_TextStrip_shadow_color_ = {
		{&rna_TextStrip_shadow_angle, 	&rna_TextStrip_color,
		-1, "shadow_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, shadow_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, TextStrip_shadow_color_get, TextStrip_shadow_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_TextStrip_shadow_color_default
	};

	rna_TextStrip_shadow_angle_ = {
		{&rna_TextStrip_shadow_offset, 	&rna_TextStrip_shadow_color,
		-1, "shadow_angle", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Angle",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, shadow_angle), RawPropertyType(5), nullptr},
		TextStrip_shadow_angle_get, TextStrip_shadow_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 6.2831854820f, 0.0f, 6.2831854820f, 10.0f, 3, nullptr, nullptr, 1.1344640255f, nullptr
	};

	rna_TextStrip_shadow_offset_ = {
		{&rna_TextStrip_shadow_blur, 	&rna_TextStrip_shadow_angle,
		-1, "shadow_offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Offset",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, shadow_offset), RawPropertyType(5), nullptr},
		TextStrip_shadow_offset_get, TextStrip_shadow_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 0.0399999991f, nullptr
	};

	rna_TextStrip_shadow_blur_ = {
		{&rna_TextStrip_outline_color, 	&rna_TextStrip_shadow_offset,
		-1, "shadow_blur", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Blur",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, shadow_blur), RawPropertyType(5), nullptr},
		TextStrip_shadow_blur_get, TextStrip_shadow_blur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_TextStrip_outline_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_TextStrip_outline_color_ = {
		{&rna_TextStrip_outline_width, 	&rna_TextStrip_shadow_blur,
		-1, "outline_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Outline Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, outline_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, TextStrip_outline_color_get, TextStrip_outline_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_TextStrip_outline_color_default
	};

	rna_TextStrip_outline_width_ = {
		{&rna_TextStrip_box_color, 	&rna_TextStrip_outline_color,
		-1, "outline_width", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Outline Width",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, outline_width), RawPropertyType(5), nullptr},
		TextStrip_outline_width_get, TextStrip_outline_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 0.0500000007f, nullptr
	};

	static float rna_TextStrip_box_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_TextStrip_box_color_ = {
		{&rna_TextStrip_location, 	&rna_TextStrip_outline_width,
		-1, "box_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Box Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, box_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, TextStrip_box_color_get, TextStrip_box_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_TextStrip_box_color_default
	};

	static float rna_TextStrip_location_default[2] = {
		0.0f,
		0.0f
	};
	rna_TextStrip_location_ = {
		{&rna_TextStrip_wrap_width, 	&rna_TextStrip_box_color,
		-1, "location", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"Location of the text",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, loc), RawPropertyType(5), nullptr},
		nullptr, nullptr, TextStrip_location_get, TextStrip_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 1.0f, -1, nullptr, nullptr, 0.0f, rna_TextStrip_location_default
	};

	rna_TextStrip_wrap_width_ = {
		{&rna_TextStrip_box_margin, 	&rna_TextStrip_location,
		-1, "wrap_width", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Wrap Width",
		"Word wrap width as factor, zero disables",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, wrap_width), RawPropertyType(5), nullptr},
		TextStrip_wrap_width_get, TextStrip_wrap_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, -1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_TextStrip_box_margin_ = {
		{&rna_TextStrip_box_roundness, 	&rna_TextStrip_wrap_width,
		-1, "box_margin", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Box Margin",
		"Box margin as factor of image width",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, box_margin), RawPropertyType(5), nullptr},
		TextStrip_box_margin_get, TextStrip_box_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, -1, nullptr, nullptr, 0.0099999998f, nullptr
	};

	rna_TextStrip_box_roundness_ = {
		{&rna_TextStrip_alignment_x, 	&rna_TextStrip_box_margin,
		-1, "box_roundness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Box Roundness",
		"Box corner radius as a factor of box height",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, box_roundness), RawPropertyType(5), nullptr},
		TextStrip_box_roundness_get, TextStrip_box_roundness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_TextStrip_alignment_x_items[4] = {
		{0, "LEFT", 402, "Left", ""	},
		{1, "CENTER", 399, "Center", ""	},
		{2, "RIGHT", 404, "Right", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TextStrip_alignment_x_ = {
		{&rna_TextStrip_anchor_x, 	&rna_TextStrip_box_roundness,
		-1, "alignment_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Align X",
		"Horizontal text alignment",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, align), RawPropertyType(6), nullptr},
		TextStrip_alignment_x_get, TextStrip_alignment_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TextStrip_alignment_x_items, 3, 0
	};

	static const EnumPropertyItem rna_TextStrip_anchor_x_items[4] = {
		{0, "LEFT", 387, "Left", ""	},
		{1, "CENTER", 386, "Center", ""	},
		{2, "RIGHT", 388, "Right", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TextStrip_anchor_x_ = {
		{&rna_TextStrip_anchor_y, 	&rna_TextStrip_alignment_x,
		-1, "anchor_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Anchor X",
		"Horizontal position of the text box relative to Location",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, anchor_x), RawPropertyType(6), nullptr},
		TextStrip_anchor_x_get, TextStrip_anchor_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TextStrip_anchor_x_items, 3, 0
	};

	static const EnumPropertyItem rna_TextStrip_anchor_y_items[4] = {
		{0, "TOP", 389, "Top", ""	},
		{1, "CENTER", 386, "Center", ""	},
		{2, "BOTTOM", 385, "Bottom", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_TextStrip_anchor_y_ = {
		{&rna_TextStrip_text, 	&rna_TextStrip_anchor_x,
		-1, "anchor_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Anchor Y",
		"Vertical position of the text box relative to Location",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TextVars, anchor_y), RawPropertyType(6), nullptr},
		TextStrip_anchor_y_get, TextStrip_anchor_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_TextStrip_anchor_y_items, 3, 0
	};

	rna_TextStrip_text_ = {
		{&rna_TextStrip_use_shadow, 	&rna_TextStrip_anchor_y,
		-1, "text", -2147221503, 0, 0, 0, 0, PropertyPathTemplateType(0), "Text",
		"Text that will be displayed",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextStrip_text_get, TextStrip_text_length, TextStrip_text_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_TextStrip_use_shadow_ = {
		{&rna_TextStrip_use_outline, 	&rna_TextStrip_text,
		-1, "use_shadow", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shadow",
		"Display shadow behind text",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextStrip_use_shadow_get, TextStrip_use_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextStrip_use_outline_ = {
		{&rna_TextStrip_use_box, 	&rna_TextStrip_use_shadow,
		-1, "use_outline", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Outline",
		"Display outline around text",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextStrip_use_outline_get, TextStrip_use_outline_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextStrip_use_box_ = {
		{&rna_TextStrip_use_bold, 	&rna_TextStrip_use_outline,
		-1, "use_box", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Box",
		"Display colored box behind text",
		0, "Sequence",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextStrip_use_box_get, TextStrip_use_box_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextStrip_use_bold_ = {
		{&rna_TextStrip_use_italic, 	&rna_TextStrip_use_box,
		-1, "use_bold", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bold",
		"Display text as bold",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextStrip_use_bold_get, TextStrip_use_bold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextStrip_use_italic_ = {
		{&rna_TextStrip_textbox_state, 	&rna_TextStrip_use_bold,
		-1, "use_italic", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Italic",
		"Display text as italic",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextStrip_use_italic_get, TextStrip_use_italic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TextStrip_textbox_state_ = {
		{nullptr, 	&rna_TextStrip_use_italic,
		-1, "textbox_state", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "UI Textbox State",
		"Textbox state in the UI",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TextStrip_textbox_state_get, nullptr, nullptr, nullptr,RNA_TextboxState
	};

	StructRNA *srna = RNA_TextStrip;
	srna->cont.properties = {&rna_TextStrip_input_count, &rna_TextStrip_textbox_state};
	srna->identifier = "TextStrip";
	srna->flag = 516;
	srna->name = "Text Strip";
	srna->description = "Sequence strip creating text";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Color Mix Strip */
static IntPropertyRNA rna_ColorMixStrip_input_count_;
PropertyRNA &rna_ColorMixStrip_input_count = reinterpret_cast<PropertyRNA &>(rna_ColorMixStrip_input_count_);

static PointerPropertyRNA rna_ColorMixStrip_input_1_;
PropertyRNA &rna_ColorMixStrip_input_1 = reinterpret_cast<PropertyRNA &>(rna_ColorMixStrip_input_1_);

static PointerPropertyRNA rna_ColorMixStrip_input_2_;
PropertyRNA &rna_ColorMixStrip_input_2 = reinterpret_cast<PropertyRNA &>(rna_ColorMixStrip_input_2_);

static EnumPropertyRNA rna_ColorMixStrip_blend_effect_;
PropertyRNA &rna_ColorMixStrip_blend_effect = reinterpret_cast<PropertyRNA &>(rna_ColorMixStrip_blend_effect_);

static FloatPropertyRNA rna_ColorMixStrip_factor_;
PropertyRNA &rna_ColorMixStrip_factor = reinterpret_cast<PropertyRNA &>(rna_ColorMixStrip_factor_);

StructRNA *RNA_ColorMixStrip;
void register_struct_ColorMixStrip(BlenderRNA &brna)
{
	rna_ColorMixStrip_input_count_ = {
		{&rna_ColorMixStrip_input_1, 	nullptr,
		-1, "input_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "input_count",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorMixStrip_input_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ColorMixStrip_input_1_ = {
		{&rna_ColorMixStrip_input_2, 	&rna_ColorMixStrip_input_count,
		-1, "input_1", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 1",
		"First input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorMixStrip_input_1_get, ColorMixStrip_input_1_set, nullptr, nullptr,RNA_Strip
	};

	rna_ColorMixStrip_input_2_ = {
		{&rna_ColorMixStrip_blend_effect, 	&rna_ColorMixStrip_input_1,
		-1, "input_2", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input 2",
		"Second input for the effect strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorMixStrip_input_2_get, ColorMixStrip_input_2_set, nullptr, nullptr,RNA_Strip
	};

	static const EnumPropertyItem rna_ColorMixStrip_blend_effect_items[26] = {
		{46, "DARKEN", 0, "Darken", ""	},
		{14, "MULTIPLY", 0, "Multiply", ""	},
		{47, "BURN", 0, "Color Burn", ""	},
		{48, "LINEAR_BURN", 0, "Linear Burn", ""	},
		{0, "", 0, nullptr, nullptr	},
		{44, "LIGHTEN", 0, "Lighten", ""	},
		{43, "SCREEN", 0, "Screen", ""	},
		{45, "DODGE", 0, "Color Dodge", ""	},
		{9, "ADD", 0, "Add", ""	},
		{0, "", 0, nullptr, nullptr	},
		{49, "OVERLAY", 0, "Overlay", ""	},
		{51, "SOFT_LIGHT", 0, "Soft Light", ""	},
		{50, "HARD_LIGHT", 0, "Hard Light", ""	},
		{54, "VIVID_LIGHT", 0, "Vivid Light", ""	},
		{53, "LINEAR_LIGHT", 0, "Linear Light", ""	},
		{52, "PIN_LIGHT", 0, "Pin Light", ""	},
		{0, "", 0, nullptr, nullptr	},
		{59, "DIFFERENCE", 0, "Difference", ""	},
		{60, "EXCLUSION", 0, "Exclusion", ""	},
		{10, "SUBTRACT", 0, "Subtract", ""	},
		{0, "", 0, nullptr, nullptr	},
		{55, "HUE", 0, "Hue", ""	},
		{56, "SATURATION", 0, "Saturation", ""	},
		{58, "COLOR", 0, "Color", ""	},
		{57, "VALUE", 0, "Value", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ColorMixStrip_blend_effect_ = {
		{&rna_ColorMixStrip_factor, 	&rna_ColorMixStrip_input_2,
		-1, "blend_effect", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blending Mode",
		"Method for controlling how the strip combines with other strips",
		0, "Color",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorMixVars, blend_effect), RawPropertyType(0), nullptr},
		ColorMixStrip_blend_effect_get, ColorMixStrip_blend_effect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ColorMixStrip_blend_effect_items, 25, 46
	};

	rna_ColorMixStrip_factor_ = {
		{nullptr, 	&rna_ColorMixStrip_blend_effect,
		-1, "factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blend Factor",
		"Percentage of how much the strip\'s colors affect other strips",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Strip_invalidate_raw_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorMixVars, factor), RawPropertyType(5), nullptr},
		ColorMixStrip_factor_get, ColorMixStrip_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ColorMixStrip;
	srna->cont.properties = {&rna_ColorMixStrip_input_count, &rna_ColorMixStrip_factor};
	srna->identifier = "ColorMixStrip";
	srna->flag = 516;
	srna->name = "Color Mix Strip";
	srna->description = "Color Mix Strip";
	srna->translation_context = "*";
	srna->icon = 722;
	srna->nameproperty = &rna_Strip_name;
	srna->iteratorproperty = &rna_Strip_rna_properties;
	srna->base = RNA_EffectStrip;
	srna->refine = rna_Strip_refine;
	srna->path = rna_Strip_path;
	srna->idproperties = rna_Strip_idprops;
	srna->system_idproperties = rna_Strip_system_idprops;
};

/* Strip Modifier */
static CollectionPropertyRNA rna_StripModifier_rna_properties_;
PropertyRNA &rna_StripModifier_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StripModifier_rna_properties_);

static PointerPropertyRNA rna_StripModifier_rna_type_;
PropertyRNA &rna_StripModifier_rna_type = reinterpret_cast<PropertyRNA &>(rna_StripModifier_rna_type_);

static StringPropertyRNA rna_StripModifier_name_;
PropertyRNA &rna_StripModifier_name = reinterpret_cast<PropertyRNA &>(rna_StripModifier_name_);

static EnumPropertyRNA rna_StripModifier_type_;
PropertyRNA &rna_StripModifier_type = reinterpret_cast<PropertyRNA &>(rna_StripModifier_type_);

static BoolPropertyRNA rna_StripModifier_mute_;
PropertyRNA &rna_StripModifier_mute = reinterpret_cast<PropertyRNA &>(rna_StripModifier_mute_);

static BoolPropertyRNA rna_StripModifier_enable_;
PropertyRNA &rna_StripModifier_enable = reinterpret_cast<PropertyRNA &>(rna_StripModifier_enable_);

static BoolPropertyRNA rna_StripModifier_show_preview_;
PropertyRNA &rna_StripModifier_show_preview = reinterpret_cast<PropertyRNA &>(rna_StripModifier_show_preview_);

static BoolPropertyRNA rna_StripModifier_show_expanded_;
PropertyRNA &rna_StripModifier_show_expanded = reinterpret_cast<PropertyRNA &>(rna_StripModifier_show_expanded_);

static EnumPropertyRNA rna_StripModifier_input_mask_type_;
PropertyRNA &rna_StripModifier_input_mask_type = reinterpret_cast<PropertyRNA &>(rna_StripModifier_input_mask_type_);

static EnumPropertyRNA rna_StripModifier_mask_time_;
PropertyRNA &rna_StripModifier_mask_time = reinterpret_cast<PropertyRNA &>(rna_StripModifier_mask_time_);

static PointerPropertyRNA rna_StripModifier_input_mask_strip_;
PropertyRNA &rna_StripModifier_input_mask_strip = reinterpret_cast<PropertyRNA &>(rna_StripModifier_input_mask_strip_);

static PointerPropertyRNA rna_StripModifier_input_mask_id_;
PropertyRNA &rna_StripModifier_input_mask_id = reinterpret_cast<PropertyRNA &>(rna_StripModifier_input_mask_id_);

static BoolPropertyRNA rna_StripModifier_is_active_;
PropertyRNA &rna_StripModifier_is_active = reinterpret_cast<PropertyRNA &>(rna_StripModifier_is_active_);

StructRNA *RNA_StripModifier;
void register_struct_StripModifier(BlenderRNA &brna)
{
	rna_StripModifier_rna_properties_ = {
		{&rna_StripModifier_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifier_rna_properties_begin, StripModifier_rna_properties_next, StripModifier_rna_properties_end, StripModifier_rna_properties_get, nullptr, nullptr, StripModifier_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StripModifier_rna_type_ = {
		{&rna_StripModifier_name, 	&rna_StripModifier_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifier_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_StripModifier_name_ = {
		{&rna_StripModifier_type, 	&rna_StripModifier_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifier_name_get, StripModifier_name_length, StripModifier_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_StripModifier_type_ = {
		{&rna_StripModifier_mute, 	&rna_StripModifier_name,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "Sequence",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripModifierData, type), RawPropertyType(0), nullptr},
		StripModifier_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_strip_modifier_type_items, 11, 4
	};

	rna_StripModifier_mute_ = {
		{&rna_StripModifier_enable, 	&rna_StripModifier_type,
		-1, "mute", 4355, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mute",
		"Mute this modifier",
		16, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifier_mute_get, StripModifier_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripModifier_enable_ = {
		{&rna_StripModifier_show_preview, 	&rna_StripModifier_mute,
		-1, "enable", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Render",
		"Use modifier during render",
		27, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifier_enable_get, StripModifier_enable_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_StripModifier_show_preview_ = {
		{&rna_StripModifier_show_expanded, 	&rna_StripModifier_enable,
		-1, "show_preview", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Preview",
		"Display modifier in preview",
		31, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifier_show_preview_get, StripModifier_show_preview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_StripModifier_show_expanded_ = {
		{&rna_StripModifier_input_mask_type, 	&rna_StripModifier_show_preview,
		-1, "show_expanded", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "Expanded",
		"Mute expanded settings for the modifier",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifier_show_expanded_get, StripModifier_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_StripModifier_input_mask_type_items[3] = {
		{0, "STRIP", 0, "Strip", "Use sequencer strip as mask input"	},
		{1, "ID", 0, "Mask", "Use mask ID as mask input"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StripModifier_input_mask_type_ = {
		{&rna_StripModifier_mask_time, 	&rna_StripModifier_show_expanded,
		-1, "input_mask_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of input data used for mask",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripModifierData, mask_input_type), RawPropertyType(0), nullptr},
		StripModifier_input_mask_type_get, StripModifier_input_mask_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StripModifier_input_mask_type_items, 2, 0
	};

	static const EnumPropertyItem rna_StripModifier_mask_time_items[3] = {
		{0, "RELATIVE", 0, "Relative", "Mask animation is offset to start of strip"	},
		{1, "ABSOLUTE", 0, "Absolute", "Mask animation is in sync with scene frame"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_StripModifier_mask_time_ = {
		{&rna_StripModifier_input_mask_strip, 	&rna_StripModifier_input_mask_type,
		-1, "mask_time", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mask Time",
		"Time to use for the Mask animation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(StripModifierData, mask_time), RawPropertyType(0), nullptr},
		StripModifier_mask_time_get, StripModifier_mask_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_StripModifier_mask_time_items, 2, 0
	};

	rna_StripModifier_input_mask_strip_ = {
		{&rna_StripModifier_input_mask_id, 	&rna_StripModifier_mask_time,
		-1, "input_mask_strip", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mask Strip",
		"Strip used as mask input for the modifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifier_input_mask_strip_get, StripModifier_input_mask_strip_set, nullptr, rna_StripModifier_otherStrip_poll,RNA_Strip
	};

	rna_StripModifier_input_mask_id_ = {
		{&rna_StripModifier_is_active, 	&rna_StripModifier_input_mask_strip,
		-1, "input_mask_id", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mask",
		"Mask ID used as mask input for the modifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifier_input_mask_id_get, StripModifier_input_mask_id_set, nullptr, nullptr,RNA_Mask
	};

	rna_StripModifier_is_active_ = {
		{nullptr, 	&rna_StripModifier_input_mask_id,
		-1, "is_active", 1073741825, 1, 0, 0, 0, PropertyPathTemplateType(0), "Is Active",
		"This modifier is active",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StripModifier_is_active_get, StripModifier_is_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_StripModifier;
	srna->cont.properties = {&rna_StripModifier_rna_properties, &rna_StripModifier_is_active};
	srna->identifier = "StripModifier";
	srna->flag = 516;
	srna->name = "Strip Modifier";
	srna->description = "Modifier for sequence strip";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* ColorBalanceModifier */
static PointerPropertyRNA rna_ColorBalanceModifier_color_balance_;
PropertyRNA &rna_ColorBalanceModifier_color_balance = reinterpret_cast<PropertyRNA &>(rna_ColorBalanceModifier_color_balance_);

static FloatPropertyRNA rna_ColorBalanceModifier_color_multiply_;
PropertyRNA &rna_ColorBalanceModifier_color_multiply = reinterpret_cast<PropertyRNA &>(rna_ColorBalanceModifier_color_multiply_);

static BoolPropertyRNA rna_ColorBalanceModifier_open_mask_input_panel_;
PropertyRNA &rna_ColorBalanceModifier_open_mask_input_panel = reinterpret_cast<PropertyRNA &>(rna_ColorBalanceModifier_open_mask_input_panel_);

StructRNA *RNA_ColorBalanceModifier;
void register_struct_ColorBalanceModifier(BlenderRNA &brna)
{
	rna_ColorBalanceModifier_color_balance_ = {
		{&rna_ColorBalanceModifier_color_multiply, 	nullptr,
		-1, "color_balance", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "color_balance",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorBalanceModifier_color_balance_get, nullptr, nullptr, nullptr,RNA_StripColorBalanceData
	};

	rna_ColorBalanceModifier_color_multiply_ = {
		{&rna_ColorBalanceModifier_open_mask_input_panel, 	&rna_ColorBalanceModifier_color_balance,
		-1, "color_multiply", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Multiply Colors",
		"Multiply the intensity of each pixel",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorBalanceModifierData, color_multiply), RawPropertyType(5), nullptr},
		ColorBalanceModifier_color_multiply_get, ColorBalanceModifier_color_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ColorBalanceModifier_open_mask_input_panel_ = {
		{nullptr, 	&rna_ColorBalanceModifier_color_multiply,
		-1, "open_mask_input_panel", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "open_mask_input_panel",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorBalanceModifier_open_mask_input_panel_get, ColorBalanceModifier_open_mask_input_panel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ColorBalanceModifier;
	srna->cont.properties = {&rna_ColorBalanceModifier_color_balance, &rna_ColorBalanceModifier_open_mask_input_panel};
	srna->identifier = "ColorBalanceModifier";
	srna->flag = 516;
	srna->name = "ColorBalanceModifier";
	srna->description = "Color balance modifier for sequence strip";
	srna->translation_context = "*";
	srna->icon = 728;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* CurvesModifier */
static PointerPropertyRNA rna_CurvesModifier_curve_mapping_;
PropertyRNA &rna_CurvesModifier_curve_mapping = reinterpret_cast<PropertyRNA &>(rna_CurvesModifier_curve_mapping_);

static BoolPropertyRNA rna_CurvesModifier_open_mask_input_panel_;
PropertyRNA &rna_CurvesModifier_open_mask_input_panel = reinterpret_cast<PropertyRNA &>(rna_CurvesModifier_open_mask_input_panel_);

StructRNA *RNA_CurvesModifier;
void register_struct_CurvesModifier(BlenderRNA &brna)
{
	rna_CurvesModifier_curve_mapping_ = {
		{&rna_CurvesModifier_open_mask_input_panel, 	nullptr,
		-1, "curve_mapping", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve Mapping",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurvesModifier_curve_mapping_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_CurvesModifier_open_mask_input_panel_ = {
		{nullptr, 	&rna_CurvesModifier_curve_mapping,
		-1, "open_mask_input_panel", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "open_mask_input_panel",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurvesModifier_open_mask_input_panel_get, CurvesModifier_open_mask_input_panel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_CurvesModifier;
	srna->cont.properties = {&rna_CurvesModifier_curve_mapping, &rna_CurvesModifier_open_mask_input_panel};
	srna->identifier = "CurvesModifier";
	srna->flag = 516;
	srna->name = "CurvesModifier";
	srna->description = "RGB curves modifier for sequence strip";
	srna->translation_context = "*";
	srna->icon = 729;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* HueCorrectModifier */
static PointerPropertyRNA rna_HueCorrectModifier_curve_mapping_;
PropertyRNA &rna_HueCorrectModifier_curve_mapping = reinterpret_cast<PropertyRNA &>(rna_HueCorrectModifier_curve_mapping_);

static BoolPropertyRNA rna_HueCorrectModifier_open_mask_input_panel_;
PropertyRNA &rna_HueCorrectModifier_open_mask_input_panel = reinterpret_cast<PropertyRNA &>(rna_HueCorrectModifier_open_mask_input_panel_);

StructRNA *RNA_HueCorrectModifier;
void register_struct_HueCorrectModifier(BlenderRNA &brna)
{
	rna_HueCorrectModifier_curve_mapping_ = {
		{&rna_HueCorrectModifier_open_mask_input_panel, 	nullptr,
		-1, "curve_mapping", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve Mapping",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		HueCorrectModifier_curve_mapping_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_HueCorrectModifier_open_mask_input_panel_ = {
		{nullptr, 	&rna_HueCorrectModifier_curve_mapping,
		-1, "open_mask_input_panel", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "open_mask_input_panel",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		HueCorrectModifier_open_mask_input_panel_get, HueCorrectModifier_open_mask_input_panel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_HueCorrectModifier;
	srna->cont.properties = {&rna_HueCorrectModifier_curve_mapping, &rna_HueCorrectModifier_open_mask_input_panel};
	srna->identifier = "HueCorrectModifier";
	srna->flag = 516;
	srna->name = "HueCorrectModifier";
	srna->description = "Hue correction modifier for sequence strip";
	srna->translation_context = "*";
	srna->icon = 730;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* Mask Modifier */
StructRNA *RNA_MaskStripModifier;
void register_struct_MaskStripModifier(BlenderRNA &brna)
{

	StructRNA *srna = RNA_MaskStripModifier;
	srna->cont.properties = {nullptr, nullptr};
	srna->identifier = "MaskStripModifier";
	srna->flag = 516;
	srna->name = "Mask Modifier";
	srna->description = "Mask modifier for sequence strip";
	srna->translation_context = "*";
	srna->icon = 470;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* BrightContrastModifier */
static FloatPropertyRNA rna_BrightContrastModifier_bright_;
PropertyRNA &rna_BrightContrastModifier_bright = reinterpret_cast<PropertyRNA &>(rna_BrightContrastModifier_bright_);

static FloatPropertyRNA rna_BrightContrastModifier_contrast_;
PropertyRNA &rna_BrightContrastModifier_contrast = reinterpret_cast<PropertyRNA &>(rna_BrightContrastModifier_contrast_);

static BoolPropertyRNA rna_BrightContrastModifier_open_mask_input_panel_;
PropertyRNA &rna_BrightContrastModifier_open_mask_input_panel = reinterpret_cast<PropertyRNA &>(rna_BrightContrastModifier_open_mask_input_panel_);

StructRNA *RNA_BrightContrastModifier;
void register_struct_BrightContrastModifier(BlenderRNA &brna)
{
	rna_BrightContrastModifier_bright_ = {
		{&rna_BrightContrastModifier_contrast, 	nullptr,
		-1, "bright", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brightness",
		"Adjust the luminosity of the colors",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrightContrastModifierData, bright), RawPropertyType(5), nullptr},
		BrightContrastModifier_bright_get, BrightContrastModifier_bright_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrightContrastModifier_contrast_ = {
		{&rna_BrightContrastModifier_open_mask_input_panel, 	&rna_BrightContrastModifier_bright,
		-1, "contrast", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Contrast",
		"Adjust the difference in luminosity between pixels",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BrightContrastModifierData, contrast), RawPropertyType(5), nullptr},
		BrightContrastModifier_contrast_get, BrightContrastModifier_contrast_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BrightContrastModifier_open_mask_input_panel_ = {
		{nullptr, 	&rna_BrightContrastModifier_contrast,
		-1, "open_mask_input_panel", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "open_mask_input_panel",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BrightContrastModifier_open_mask_input_panel_get, BrightContrastModifier_open_mask_input_panel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BrightContrastModifier;
	srna->cont.properties = {&rna_BrightContrastModifier_bright, &rna_BrightContrastModifier_open_mask_input_panel};
	srna->identifier = "BrightContrastModifier";
	srna->flag = 516;
	srna->name = "BrightContrastModifier";
	srna->description = "Bright/contrast modifier data for sequence strip";
	srna->translation_context = "*";
	srna->icon = 727;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* WhiteBalanceModifier */
static FloatPropertyRNA rna_WhiteBalanceModifier_white_value_;
PropertyRNA &rna_WhiteBalanceModifier_white_value = reinterpret_cast<PropertyRNA &>(rna_WhiteBalanceModifier_white_value_);

static BoolPropertyRNA rna_WhiteBalanceModifier_open_mask_input_panel_;
PropertyRNA &rna_WhiteBalanceModifier_open_mask_input_panel = reinterpret_cast<PropertyRNA &>(rna_WhiteBalanceModifier_open_mask_input_panel_);

StructRNA *RNA_WhiteBalanceModifier;
void register_struct_WhiteBalanceModifier(BlenderRNA &brna)
{
	static float rna_WhiteBalanceModifier_white_value_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_WhiteBalanceModifier_white_value_ = {
		{&rna_WhiteBalanceModifier_open_mask_input_panel, 	nullptr,
		-1, "white_value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "White Value",
		"This color defines white in the strip",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(WhiteBalanceModifierData, white_value), RawPropertyType(5), nullptr},
		nullptr, nullptr, WhiteBalanceModifier_white_value_get, WhiteBalanceModifier_white_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_WhiteBalanceModifier_white_value_default
	};

	rna_WhiteBalanceModifier_open_mask_input_panel_ = {
		{nullptr, 	&rna_WhiteBalanceModifier_white_value,
		-1, "open_mask_input_panel", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "open_mask_input_panel",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		WhiteBalanceModifier_open_mask_input_panel_get, WhiteBalanceModifier_open_mask_input_panel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_WhiteBalanceModifier;
	srna->cont.properties = {&rna_WhiteBalanceModifier_white_value, &rna_WhiteBalanceModifier_open_mask_input_panel};
	srna->identifier = "WhiteBalanceModifier";
	srna->flag = 516;
	srna->name = "WhiteBalanceModifier";
	srna->description = "White balance modifier for sequence strip";
	srna->translation_context = "*";
	srna->icon = 732;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* SequencerTonemapModifierData */
static EnumPropertyRNA rna_SequencerTonemapModifierData_tonemap_type_;
PropertyRNA &rna_SequencerTonemapModifierData_tonemap_type = reinterpret_cast<PropertyRNA &>(rna_SequencerTonemapModifierData_tonemap_type_);

static FloatPropertyRNA rna_SequencerTonemapModifierData_key_;
PropertyRNA &rna_SequencerTonemapModifierData_key = reinterpret_cast<PropertyRNA &>(rna_SequencerTonemapModifierData_key_);

static FloatPropertyRNA rna_SequencerTonemapModifierData_offset_;
PropertyRNA &rna_SequencerTonemapModifierData_offset = reinterpret_cast<PropertyRNA &>(rna_SequencerTonemapModifierData_offset_);

static FloatPropertyRNA rna_SequencerTonemapModifierData_gamma_;
PropertyRNA &rna_SequencerTonemapModifierData_gamma = reinterpret_cast<PropertyRNA &>(rna_SequencerTonemapModifierData_gamma_);

static FloatPropertyRNA rna_SequencerTonemapModifierData_intensity_;
PropertyRNA &rna_SequencerTonemapModifierData_intensity = reinterpret_cast<PropertyRNA &>(rna_SequencerTonemapModifierData_intensity_);

static FloatPropertyRNA rna_SequencerTonemapModifierData_contrast_;
PropertyRNA &rna_SequencerTonemapModifierData_contrast = reinterpret_cast<PropertyRNA &>(rna_SequencerTonemapModifierData_contrast_);

static FloatPropertyRNA rna_SequencerTonemapModifierData_adaptation_;
PropertyRNA &rna_SequencerTonemapModifierData_adaptation = reinterpret_cast<PropertyRNA &>(rna_SequencerTonemapModifierData_adaptation_);

static FloatPropertyRNA rna_SequencerTonemapModifierData_correction_;
PropertyRNA &rna_SequencerTonemapModifierData_correction = reinterpret_cast<PropertyRNA &>(rna_SequencerTonemapModifierData_correction_);

static BoolPropertyRNA rna_SequencerTonemapModifierData_open_mask_input_panel_;
PropertyRNA &rna_SequencerTonemapModifierData_open_mask_input_panel = reinterpret_cast<PropertyRNA &>(rna_SequencerTonemapModifierData_open_mask_input_panel_);

StructRNA *RNA_SequencerTonemapModifierData;
void register_struct_SequencerTonemapModifierData(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_SequencerTonemapModifierData_tonemap_type_items[3] = {
		{1, "RD_PHOTORECEPTOR", 0, "R/D Photoreceptor", ""	},
		{0, "RH_SIMPLE", 0, "Rh Simple", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_SequencerTonemapModifierData_tonemap_type_ = {
		{&rna_SequencerTonemapModifierData_key, 	nullptr,
		-1, "tonemap_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tonemap Type",
		"Tone mapping algorithm",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SequencerTonemapModifierData, type), RawPropertyType(0), nullptr},
		SequencerTonemapModifierData_tonemap_type_get, SequencerTonemapModifierData_tonemap_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_SequencerTonemapModifierData_tonemap_type_items, 2, 0
	};

	rna_SequencerTonemapModifierData_key_ = {
		{&rna_SequencerTonemapModifierData_offset, 	&rna_SequencerTonemapModifierData_tonemap_type,
		-1, "key", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Key",
		"The value the average luminance is mapped to",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SequencerTonemapModifierData, key), RawPropertyType(5), nullptr},
		SequencerTonemapModifierData_key_get, SequencerTonemapModifierData_key_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SequencerTonemapModifierData_offset_ = {
		{&rna_SequencerTonemapModifierData_gamma, 	&rna_SequencerTonemapModifierData_key,
		-1, "offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Normally always 1, but can be used as an extra control to alter the brightness curve",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SequencerTonemapModifierData, offset), RawPropertyType(5), nullptr},
		SequencerTonemapModifierData_offset_get, SequencerTonemapModifierData_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 10.0f, 0.0010000000f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SequencerTonemapModifierData_gamma_ = {
		{&rna_SequencerTonemapModifierData_intensity, 	&rna_SequencerTonemapModifierData_offset,
		-1, "gamma", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gamma",
		"If not used, set to 1",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SequencerTonemapModifierData, gamma), RawPropertyType(5), nullptr},
		SequencerTonemapModifierData_gamma_get, SequencerTonemapModifierData_gamma_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 3.0f, 0.0010000000f, 3.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SequencerTonemapModifierData_intensity_ = {
		{&rna_SequencerTonemapModifierData_contrast, 	&rna_SequencerTonemapModifierData_gamma,
		-1, "intensity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Intensity",
		"If less than zero, darkens image; otherwise, makes it brighter",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SequencerTonemapModifierData, intensity), RawPropertyType(5), nullptr},
		SequencerTonemapModifierData_intensity_get, SequencerTonemapModifierData_intensity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -8.0f, 8.0f, -8.0f, 8.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SequencerTonemapModifierData_contrast_ = {
		{&rna_SequencerTonemapModifierData_adaptation, 	&rna_SequencerTonemapModifierData_intensity,
		-1, "contrast", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Contrast",
		"Set to 0 to use estimate from input image",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SequencerTonemapModifierData, contrast), RawPropertyType(5), nullptr},
		SequencerTonemapModifierData_contrast_get, SequencerTonemapModifierData_contrast_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SequencerTonemapModifierData_adaptation_ = {
		{&rna_SequencerTonemapModifierData_correction, 	&rna_SequencerTonemapModifierData_contrast,
		-1, "adaptation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Adaptation",
		"If 0, global; if 1, based on pixel intensity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SequencerTonemapModifierData, adaptation), RawPropertyType(5), nullptr},
		SequencerTonemapModifierData_adaptation_get, SequencerTonemapModifierData_adaptation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SequencerTonemapModifierData_correction_ = {
		{&rna_SequencerTonemapModifierData_open_mask_input_panel, 	&rna_SequencerTonemapModifierData_adaptation,
		-1, "correction", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color Correction",
		"If 0, same for all channels; if 1, each independent",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SequencerTonemapModifierData, correction), RawPropertyType(5), nullptr},
		SequencerTonemapModifierData_correction_get, SequencerTonemapModifierData_correction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SequencerTonemapModifierData_open_mask_input_panel_ = {
		{nullptr, 	&rna_SequencerTonemapModifierData_correction,
		-1, "open_mask_input_panel", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "open_mask_input_panel",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequencerTonemapModifierData_open_mask_input_panel_get, SequencerTonemapModifierData_open_mask_input_panel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_SequencerTonemapModifierData;
	srna->cont.properties = {&rna_SequencerTonemapModifierData_tonemap_type, &rna_SequencerTonemapModifierData_open_mask_input_panel};
	srna->identifier = "SequencerTonemapModifierData";
	srna->flag = 516;
	srna->name = "SequencerTonemapModifierData";
	srna->description = "Tone mapping modifier";
	srna->translation_context = "*";
	srna->icon = 731;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* Sequencer Compositor Modifier Properties */
static CollectionPropertyRNA rna_SequencerCompositorModifierProperties_rna_properties_;
PropertyRNA &rna_SequencerCompositorModifierProperties_rna_properties = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierProperties_rna_properties_);

static PointerPropertyRNA rna_SequencerCompositorModifierProperties_rna_type_;
PropertyRNA &rna_SequencerCompositorModifierProperties_rna_type = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierProperties_rna_type_);

static BoolPropertyRNA rna_SequencerCompositorModifierProperties_bl_system_properties_get_do_create_;
PropertyRNA &rna_SequencerCompositorModifierProperties_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierProperties_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_SequencerCompositorModifierProperties_bl_system_properties_get_system_properties_;
PropertyRNA &rna_SequencerCompositorModifierProperties_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierProperties_bl_system_properties_get_system_properties_);

FunctionRNA *rna_SequencerCompositorModifierProperties_bl_system_properties_get_func;
StructRNA *RNA_SequencerCompositorModifierProperties;
void register_struct_SequencerCompositorModifierProperties(BlenderRNA &brna)
{
	rna_SequencerCompositorModifierProperties_rna_properties_ = {
		{&rna_SequencerCompositorModifierProperties_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequencerCompositorModifierProperties_rna_properties_begin, SequencerCompositorModifierProperties_rna_properties_next, SequencerCompositorModifierProperties_rna_properties_end, SequencerCompositorModifierProperties_rna_properties_get, nullptr, nullptr, SequencerCompositorModifierProperties_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_SequencerCompositorModifierProperties_rna_type_ = {
		{nullptr, 	&rna_SequencerCompositorModifierProperties_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequencerCompositorModifierProperties_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_SequencerCompositorModifierProperties;
	srna->cont.properties = {&rna_SequencerCompositorModifierProperties_rna_properties, &rna_SequencerCompositorModifierProperties_rna_type};
	srna->identifier = "SequencerCompositorModifierProperties";
	srna->flag = 516;
	srna->name = "Sequencer Compositor Modifier Properties";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_SequencerCompositorModifierProperties_rna_properties;
	srna->refine = rna_SequencerCompositorModifierProperties_refine;
	srna->path = rna_SequencerCompositorModifierProperties_path;
	srna->system_idproperties = rna_SequencerCompositorModifier_idprops;
	{
	rna_SequencerCompositorModifierProperties_bl_system_properties_get_do_create_ = {
		{&rna_SequencerCompositorModifierProperties_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_SequencerCompositorModifierProperties_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_SequencerCompositorModifierProperties_bl_system_properties_get_do_create,
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
		func->cont.properties = {&rna_SequencerCompositorModifierProperties_bl_system_properties_get_do_create, &rna_SequencerCompositorModifierProperties_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = SequencerCompositorModifierProperties_bl_system_properties_get_call;
		func->c_ret = &rna_SequencerCompositorModifierProperties_bl_system_properties_get_system_properties;
		rna_SequencerCompositorModifierProperties_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Sequencer Compositor Modifier Empty Properties */
static CollectionPropertyRNA rna_SequencerCompositorModifierPropertiesEmpty_rna_properties_;
PropertyRNA &rna_SequencerCompositorModifierPropertiesEmpty_rna_properties = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierPropertiesEmpty_rna_properties_);

static PointerPropertyRNA rna_SequencerCompositorModifierPropertiesEmpty_rna_type_;
PropertyRNA &rna_SequencerCompositorModifierPropertiesEmpty_rna_type = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierPropertiesEmpty_rna_type_);

static BoolPropertyRNA rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_do_create_;
PropertyRNA &rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_system_properties_;
PropertyRNA &rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_system_properties_);

FunctionRNA *rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_func;
StructRNA *RNA_SequencerCompositorModifierPropertiesEmpty;
void register_struct_SequencerCompositorModifierPropertiesEmpty(BlenderRNA &brna)
{
	rna_SequencerCompositorModifierPropertiesEmpty_rna_properties_ = {
		{&rna_SequencerCompositorModifierPropertiesEmpty_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequencerCompositorModifierPropertiesEmpty_rna_properties_begin, SequencerCompositorModifierPropertiesEmpty_rna_properties_next, SequencerCompositorModifierPropertiesEmpty_rna_properties_end, SequencerCompositorModifierPropertiesEmpty_rna_properties_get, nullptr, nullptr, SequencerCompositorModifierPropertiesEmpty_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_SequencerCompositorModifierPropertiesEmpty_rna_type_ = {
		{nullptr, 	&rna_SequencerCompositorModifierPropertiesEmpty_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequencerCompositorModifierPropertiesEmpty_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_SequencerCompositorModifierPropertiesEmpty;
	srna->cont.properties = {&rna_SequencerCompositorModifierPropertiesEmpty_rna_properties, &rna_SequencerCompositorModifierPropertiesEmpty_rna_type};
	srna->identifier = "SequencerCompositorModifierPropertiesEmpty";
	srna->flag = 516;
	srna->name = "Sequencer Compositor Modifier Empty Properties";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_SequencerCompositorModifierPropertiesEmpty_rna_properties;
	srna->path = rna_SequencerCompositorModifierProperties_path;
	srna->system_idproperties = rna_SequencerCompositorModifier_idprops;
	{
	rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_do_create_ = {
		{&rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_do_create,
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
		func->cont.properties = {&rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_do_create, &rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_call;
		func->c_ret = &rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_system_properties;
		rna_SequencerCompositorModifierPropertiesEmpty_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* SequencerCompositorModifierData */
static PointerPropertyRNA rna_SequencerCompositorModifierData_node_group_;
PropertyRNA &rna_SequencerCompositorModifierData_node_group = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierData_node_group_);

static BoolPropertyRNA rna_SequencerCompositorModifierData_show_group_selector_;
PropertyRNA &rna_SequencerCompositorModifierData_show_group_selector = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierData_show_group_selector_);

static BoolPropertyRNA rna_SequencerCompositorModifierData_open_mask_input_panel_;
PropertyRNA &rna_SequencerCompositorModifierData_open_mask_input_panel = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierData_open_mask_input_panel_);

static PointerPropertyRNA rna_SequencerCompositorModifierData_properties_;
PropertyRNA &rna_SequencerCompositorModifierData_properties = reinterpret_cast<PropertyRNA &>(rna_SequencerCompositorModifierData_properties_);

StructRNA *RNA_SequencerCompositorModifierData;
void register_struct_SequencerCompositorModifierData(BlenderRNA &brna)
{
	rna_SequencerCompositorModifierData_node_group_ = {
		{&rna_SequencerCompositorModifierData_show_group_selector, 	nullptr,
		-1, "node_group", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Node Group",
		"Node group that controls what this modifier does",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CompositorModifier_node_group_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequencerCompositorModifierData_node_group_get, SequencerCompositorModifierData_node_group_set, nullptr, rna_Compositor_node_group_poll,RNA_NodeTree
	};

	rna_SequencerCompositorModifierData_show_group_selector_ = {
		{&rna_SequencerCompositorModifierData_open_mask_input_panel, 	&rna_SequencerCompositorModifierData_node_group,
		-1, "show_group_selector", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Node Group",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequencerCompositorModifierData_show_group_selector_get, SequencerCompositorModifierData_show_group_selector_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SequencerCompositorModifierData_open_mask_input_panel_ = {
		{&rna_SequencerCompositorModifierData_properties, 	&rna_SequencerCompositorModifierData_show_group_selector,
		-1, "open_mask_input_panel", 1073741827, 0, 0, 0, 0, PropertyPathTemplateType(0), "open_mask_input_panel",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequencerCompositorModifierData_open_mask_input_panel_get, SequencerCompositorModifierData_open_mask_input_panel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SequencerCompositorModifierData_properties_ = {
		{nullptr, 	&rna_SequencerCompositorModifierData_open_mask_input_panel,
		-1, "properties", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Properties",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SequencerCompositorModifierData_properties_get, nullptr, nullptr, nullptr,RNA_SequencerCompositorModifierProperties
	};

	StructRNA *srna = RNA_SequencerCompositorModifierData;
	srna->cont.properties = {&rna_SequencerCompositorModifierData_node_group, &rna_SequencerCompositorModifierData_properties};
	srna->identifier = "SequencerCompositorModifierData";
	srna->flag = 516;
	srna->name = "SequencerCompositorModifierData";
	srna->description = "Compositor Modifier";
	srna->translation_context = "*";
	srna->icon = 143;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* SoundEqualizerModifier */
static CollectionPropertyRNA rna_SoundEqualizerModifier_graphics_;
PropertyRNA &rna_SoundEqualizerModifier_graphics = reinterpret_cast<PropertyRNA &>(rna_SoundEqualizerModifier_graphics_);

static FloatPropertyRNA rna_SoundEqualizerModifier_new_graphic_min_freq_;
PropertyRNA &rna_SoundEqualizerModifier_new_graphic_min_freq = reinterpret_cast<PropertyRNA &>(rna_SoundEqualizerModifier_new_graphic_min_freq_);

static FloatPropertyRNA rna_SoundEqualizerModifier_new_graphic_max_freq_;
PropertyRNA &rna_SoundEqualizerModifier_new_graphic_max_freq = reinterpret_cast<PropertyRNA &>(rna_SoundEqualizerModifier_new_graphic_max_freq_);

static PointerPropertyRNA rna_SoundEqualizerModifier_new_graphic_graphic_eqs_;
PropertyRNA &rna_SoundEqualizerModifier_new_graphic_graphic_eqs = reinterpret_cast<PropertyRNA &>(rna_SoundEqualizerModifier_new_graphic_graphic_eqs_);

FunctionRNA *rna_SoundEqualizerModifier_new_graphic_func;
FunctionRNA *rna_SoundEqualizerModifier_clear_soundeqs_func;
StructRNA *RNA_SoundEqualizerModifier;
void register_struct_SoundEqualizerModifier(BlenderRNA &brna)
{
	rna_SoundEqualizerModifier_graphics_ = {
		{nullptr, 	nullptr,
		-1, "graphics", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Graphical definition equalization",
		"Graphical definition equalization",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SoundEqualizerModifier_graphics_begin, SoundEqualizerModifier_graphics_next, SoundEqualizerModifier_graphics_end, SoundEqualizerModifier_graphics_get, nullptr, SoundEqualizerModifier_graphics_lookup_int, nullptr, nullptr, RNA_EQCurveMappingData
	};

	StructRNA *srna = RNA_SoundEqualizerModifier;
	srna->cont.properties = {&rna_SoundEqualizerModifier_graphics, &rna_SoundEqualizerModifier_graphics};
	srna->identifier = "SoundEqualizerModifier";
	srna->flag = 516;
	srna->name = "SoundEqualizerModifier";
	srna->description = "Equalize audio";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
	{
	rna_SoundEqualizerModifier_new_graphic_min_freq_ = {
		{&rna_SoundEqualizerModifier_new_graphic_max_freq, 	nullptr,
		-1, "min_freq", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Minimum Frequency",
		"Minimum Frequency",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20000.0f, 0.0f, 20000.0f, 1.0f, 3, nullptr, nullptr, 30.0f, nullptr
	};
	rna_SoundEqualizerModifier_new_graphic_max_freq_ = {
		{&rna_SoundEqualizerModifier_new_graphic_graphic_eqs, 	&rna_SoundEqualizerModifier_new_graphic_min_freq,
		-1, "max_freq", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Maximum Frequency",
		"Maximum Frequency",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20000.0f, 0.0f, 20000.0f, 1.0f, 3, nullptr, nullptr, 20000.0f, nullptr
	};
	rna_SoundEqualizerModifier_new_graphic_graphic_eqs_ = {
		{nullptr, 	&rna_SoundEqualizerModifier_new_graphic_max_freq,
		-1, "graphic_eqs", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created graphical Equalizer definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_EQCurveMappingData
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_SoundEqualizerModifier_new_graphic_min_freq, &rna_SoundEqualizerModifier_new_graphic_graphic_eqs};
		func->identifier = "new_graphic";
		func->flag = 8;
		func->description = "Add a new EQ band";
		func->call = SoundEqualizerModifier_new_graphic_call;
		func->c_ret = &rna_SoundEqualizerModifier_new_graphic_graphic_eqs;
		rna_SoundEqualizerModifier_new_graphic_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear_soundeqs";
		func->flag = 8;
		func->description = "Remove all graphical equalizers from the Equalizer modifier";
		func->call = SoundEqualizerModifier_clear_soundeqs_call;
		rna_SoundEqualizerModifier_clear_soundeqs_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* EQCurveMappingData */
static CollectionPropertyRNA rna_EQCurveMappingData_rna_properties_;
PropertyRNA &rna_EQCurveMappingData_rna_properties = reinterpret_cast<PropertyRNA &>(rna_EQCurveMappingData_rna_properties_);

static PointerPropertyRNA rna_EQCurveMappingData_rna_type_;
PropertyRNA &rna_EQCurveMappingData_rna_type = reinterpret_cast<PropertyRNA &>(rna_EQCurveMappingData_rna_type_);

static PointerPropertyRNA rna_EQCurveMappingData_curve_mapping_;
PropertyRNA &rna_EQCurveMappingData_curve_mapping = reinterpret_cast<PropertyRNA &>(rna_EQCurveMappingData_curve_mapping_);

StructRNA *RNA_EQCurveMappingData;
void register_struct_EQCurveMappingData(BlenderRNA &brna)
{
	rna_EQCurveMappingData_rna_properties_ = {
		{&rna_EQCurveMappingData_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EQCurveMappingData_rna_properties_begin, EQCurveMappingData_rna_properties_next, EQCurveMappingData_rna_properties_end, EQCurveMappingData_rna_properties_get, nullptr, nullptr, EQCurveMappingData_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_EQCurveMappingData_rna_type_ = {
		{&rna_EQCurveMappingData_curve_mapping, 	&rna_EQCurveMappingData_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EQCurveMappingData_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_EQCurveMappingData_curve_mapping_ = {
		{nullptr, 	&rna_EQCurveMappingData_rna_type,
		-1, "curve_mapping", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve Mapping",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_EQCurveMapping_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EQCurveMappingData_curve_mapping_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	StructRNA *srna = RNA_EQCurveMappingData;
	srna->cont.properties = {&rna_EQCurveMappingData_rna_properties, &rna_EQCurveMappingData_curve_mapping};
	srna->identifier = "EQCurveMappingData";
	srna->flag = 516;
	srna->name = "EQCurveMappingData";
	srna->description = "EQCurveMappingData";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_EQCurveMappingData_rna_properties;
};

/* PitchModifier */
static EnumPropertyRNA rna_PitchModifier_mode_;
PropertyRNA &rna_PitchModifier_mode = reinterpret_cast<PropertyRNA &>(rna_PitchModifier_mode_);

static IntPropertyRNA rna_PitchModifier_semitones_;
PropertyRNA &rna_PitchModifier_semitones = reinterpret_cast<PropertyRNA &>(rna_PitchModifier_semitones_);

static IntPropertyRNA rna_PitchModifier_cents_;
PropertyRNA &rna_PitchModifier_cents = reinterpret_cast<PropertyRNA &>(rna_PitchModifier_cents_);

static FloatPropertyRNA rna_PitchModifier_ratio_;
PropertyRNA &rna_PitchModifier_ratio = reinterpret_cast<PropertyRNA &>(rna_PitchModifier_ratio_);

static BoolPropertyRNA rna_PitchModifier_preserve_formant_;
PropertyRNA &rna_PitchModifier_preserve_formant = reinterpret_cast<PropertyRNA &>(rna_PitchModifier_preserve_formant_);

static EnumPropertyRNA rna_PitchModifier_quality_;
PropertyRNA &rna_PitchModifier_quality = reinterpret_cast<PropertyRNA &>(rna_PitchModifier_quality_);

StructRNA *RNA_PitchModifier;
void register_struct_PitchModifier(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_PitchModifier_mode_items[3] = {
		{0, "SEMITONES", 0, "Semitones", "Shift pitch using semitones and cents"	},
		{1, "RATIO", 0, "Ratio", "Shift pitch using a direct ratio"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_PitchModifier_mode_ = {
		{&rna_PitchModifier_semitones, 	nullptr,
		-1, "mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Mode of the pitch shift",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_Pitch_mode_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PitchModifierData, mode), RawPropertyType(0), nullptr},
		PitchModifier_mode_get, PitchModifier_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_PitchModifier_mode_items, 2, 0
	};

	rna_PitchModifier_semitones_ = {
		{&rna_PitchModifier_cents, 	&rna_PitchModifier_mode,
		-1, "semitones", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Semitones",
		"Number of semitones to shift the pitch.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_Pitch_semitones_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PitchModifierData, semitones), RawPropertyType(0), nullptr},
		PitchModifier_semitones_get, PitchModifier_semitones_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -12, 12, -12, 12, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PitchModifier_cents_ = {
		{&rna_PitchModifier_ratio, 	&rna_PitchModifier_semitones,
		-1, "cents", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Cents",
		"A cent is one one-hundredth of a semi-tone.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_Pitch_semitones_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PitchModifierData, cents), RawPropertyType(0), nullptr},
		PitchModifier_cents_get, PitchModifier_cents_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -100, 100, -100, 100, 1, nullptr, nullptr, 0, nullptr
	};

	rna_PitchModifier_ratio_ = {
		{&rna_PitchModifier_preserve_formant, 	&rna_PitchModifier_cents,
		-1, "ratio", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Ratio",
		"Factor by which the audio pitch is scaled.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PitchModifierData, ratio), RawPropertyType(5), nullptr},
		PitchModifier_ratio_get, PitchModifier_ratio_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.5000000000f, 2.0f, 0.5000000000f, 2.0f, 0.1000000015f, -1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PitchModifier_preserve_formant_ = {
		{&rna_PitchModifier_quality, 	&rna_PitchModifier_ratio,
		-1, "preserve_formant", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Preserve Vocal Formants",
		"Whether to preserve the vocal formants when shifting the pitch.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PitchModifierData, preserve_formant), RawPropertyType(3), nullptr},
		PitchModifier_preserve_formant_get, PitchModifier_preserve_formant_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_PitchModifier_quality_items[4] = {
		{0, "HIGH", 0, "High", "Prioritize high-quality pitch processing"	},
		{1, "FAST", 0, "Fast", "Prioritize speed over audio quality"	},
		{2, "CONSISTENT", 0, "Consistent", "Prioritize consistency for dynamic pitch changes"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_PitchModifier_quality_ = {
		{nullptr, 	&rna_PitchModifier_preserve_formant,
		-1, "quality", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Quality",
		"Quality of the pitch shifting",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PitchModifierData, quality), RawPropertyType(0), nullptr},
		PitchModifier_quality_get, PitchModifier_quality_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_PitchModifier_quality_items, 3, 0
	};

	StructRNA *srna = RNA_PitchModifier;
	srna->cont.properties = {&rna_PitchModifier_mode, &rna_PitchModifier_quality};
	srna->identifier = "PitchModifier";
	srna->flag = 516;
	srna->name = "PitchModifier";
	srna->description = "Shift Audio Pitch";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* EchoModifier */
static FloatPropertyRNA rna_EchoModifier_delay_;
PropertyRNA &rna_EchoModifier_delay = reinterpret_cast<PropertyRNA &>(rna_EchoModifier_delay_);

static FloatPropertyRNA rna_EchoModifier_feedback_;
PropertyRNA &rna_EchoModifier_feedback = reinterpret_cast<PropertyRNA &>(rna_EchoModifier_feedback_);

static FloatPropertyRNA rna_EchoModifier_mix_;
PropertyRNA &rna_EchoModifier_mix = reinterpret_cast<PropertyRNA &>(rna_EchoModifier_mix_);

StructRNA *RNA_EchoModifier;
void register_struct_EchoModifier(BlenderRNA &brna)
{
	rna_EchoModifier_delay_ = {
		{&rna_EchoModifier_feedback, 	nullptr,
		-1, "delay", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Delay",
		"The delay of the effect in seconds",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EchoModifierData, delay), RawPropertyType(5), nullptr},
		EchoModifier_delay_get, EchoModifier_delay_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0500000007f, 5.0f, 0.0500000007f, 5.0f, 0.2000000030f, -1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EchoModifier_feedback_ = {
		{&rna_EchoModifier_mix, 	&rna_EchoModifier_delay,
		-1, "feedback", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Feedback",
		"The feedback of the effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EchoModifierData, feedback), RawPropertyType(5), nullptr},
		EchoModifier_feedback_get, EchoModifier_feedback_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EchoModifier_mix_ = {
		{nullptr, 	&rna_EchoModifier_feedback,
		-1, "mix", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mix",
		"The wet/dry mix of the effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_StripModifier_update, 84279296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(EchoModifierData, mix), RawPropertyType(5), nullptr},
		EchoModifier_mix_get, EchoModifier_mix_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_EchoModifier;
	srna->cont.properties = {&rna_EchoModifier_delay, &rna_EchoModifier_mix};
	srna->identifier = "EchoModifier";
	srna->flag = 516;
	srna->name = "EchoModifier";
	srna->description = "Tooltip";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_StripModifier_name;
	srna->iteratorproperty = &rna_StripModifier_rna_properties;
	srna->base = RNA_StripModifier;
	srna->refine = rna_StripModifier_refine;
	srna->path = rna_StripModifier_path;
};

/* RetimingKeys */
static CollectionPropertyRNA rna_RetimingKeys_rna_properties_;
PropertyRNA &rna_RetimingKeys_rna_properties = reinterpret_cast<PropertyRNA &>(rna_RetimingKeys_rna_properties_);

static PointerPropertyRNA rna_RetimingKeys_rna_type_;
PropertyRNA &rna_RetimingKeys_rna_type = reinterpret_cast<PropertyRNA &>(rna_RetimingKeys_rna_type_);

static IntPropertyRNA rna_RetimingKeys_add_timeline_frame_;
PropertyRNA &rna_RetimingKeys_add_timeline_frame = reinterpret_cast<PropertyRNA &>(rna_RetimingKeys_add_timeline_frame_);

static PointerPropertyRNA rna_RetimingKeys_add_retiming_key_;
PropertyRNA &rna_RetimingKeys_add_retiming_key = reinterpret_cast<PropertyRNA &>(rna_RetimingKeys_add_retiming_key_);

FunctionRNA *rna_RetimingKeys_add_func;
FunctionRNA *rna_RetimingKeys_reset_func;
StructRNA *RNA_RetimingKeys;
void register_struct_RetimingKeys(BlenderRNA &brna)
{
	rna_RetimingKeys_rna_properties_ = {
		{&rna_RetimingKeys_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RetimingKeys_rna_properties_begin, RetimingKeys_rna_properties_next, RetimingKeys_rna_properties_end, RetimingKeys_rna_properties_get, nullptr, nullptr, RetimingKeys_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_RetimingKeys_rna_type_ = {
		{nullptr, 	&rna_RetimingKeys_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		RetimingKeys_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_RetimingKeys;
	srna->cont.properties = {&rna_RetimingKeys_rna_properties, &rna_RetimingKeys_rna_type};
	srna->identifier = "RetimingKeys";
	srna->flag = 516;
	srna->name = "RetimingKeys";
	srna->description = "Collection of RetimingKey";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_RetimingKeys_rna_properties;
	{
	rna_RetimingKeys_add_timeline_frame_ = {
		{&rna_RetimingKeys_add_retiming_key, 	nullptr,
		-1, "timeline_frame", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Timeline Frame",
		"Where to add the retiming key in the timeline",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};
	rna_RetimingKeys_add_retiming_key_ = {
		{nullptr, 	&rna_RetimingKeys_add_timeline_frame,
		-1, "retiming_key", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New RetimingKey",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_RetimingKey
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_RetimingKeys_add_timeline_frame, &rna_RetimingKeys_add_retiming_key};
		func->identifier = "add";
		func->flag = 2064;
		func->description = "Add retiming key";
		func->call = RetimingKeys_add_call;
		func->c_ret = &rna_RetimingKeys_add_retiming_key;
		rna_RetimingKeys_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "reset";
		func->flag = 2048;
		func->description = "Remove all retiming keys";
		func->call = RetimingKeys_reset_call;
		rna_RetimingKeys_reset_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
