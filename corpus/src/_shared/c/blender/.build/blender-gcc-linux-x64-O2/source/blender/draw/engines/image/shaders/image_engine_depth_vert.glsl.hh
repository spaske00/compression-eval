static void metadata_image_engine_depth_vert_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_model_lib.glsl");
  source.add_dependency("draw_view_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
