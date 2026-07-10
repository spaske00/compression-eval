static void metadata_draw_object_infos_lib_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_object_infos_infos.hh");
  source.add_dependency("draw_model_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
