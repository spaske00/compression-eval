static void metadata_eevee_attributes_curves_lib_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_curves_lib.glsl");
  source.add_dependency("eevee_geom_types_lib.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
