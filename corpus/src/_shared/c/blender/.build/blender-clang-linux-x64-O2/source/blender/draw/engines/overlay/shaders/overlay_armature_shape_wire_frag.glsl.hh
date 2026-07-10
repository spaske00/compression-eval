static void metadata_overlay_armature_shape_wire_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("overlay_armature_infos.hh");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  source.add_dependency("select_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
