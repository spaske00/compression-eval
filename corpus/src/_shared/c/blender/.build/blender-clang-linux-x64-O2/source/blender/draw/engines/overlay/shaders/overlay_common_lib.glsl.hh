static void metadata_overlay_common_lib_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("gpu_shader_math_constants_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
