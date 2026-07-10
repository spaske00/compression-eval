static void metadata_gpencil_antialiasing_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpencil_infos.hh");
  source.add_dependency("gpu_shader_smaa_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
