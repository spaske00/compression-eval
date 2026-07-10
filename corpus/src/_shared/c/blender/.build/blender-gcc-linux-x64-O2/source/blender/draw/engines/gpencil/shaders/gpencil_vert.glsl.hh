static void metadata_gpencil_vert_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpencil_infos.hh");
  source.add_dependency("draw_grease_pencil_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
