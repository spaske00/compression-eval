static void metadata_eevee_depth_of_field_bokeh_lut_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_depth_of_field_lib.bsl.hh");
  source.add_dependency("gpu_shader_math_constants_lib.glsl");
  source.add_dependency("gpu_shader_math_safe_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
