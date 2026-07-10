static void metadata_overlay_edit_uv_faces_vert_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("overlay_edit_mode_infos.hh");
  source.add_dependency("draw_model_lib.glsl");
  source.add_dependency("draw_object_infos_lib.glsl");
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
