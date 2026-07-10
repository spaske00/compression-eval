static void metadata_gpu_shader_material_fractal_voronoi_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpu_shader_material_voronoi.glsl");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
