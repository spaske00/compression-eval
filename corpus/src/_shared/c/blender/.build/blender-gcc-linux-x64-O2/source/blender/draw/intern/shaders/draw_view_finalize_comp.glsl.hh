static void metadata_draw_view_finalize_comp_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(14753491627235796485LLU));
  source.add_dependency("draw_view_infos.hh");
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_transform_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
