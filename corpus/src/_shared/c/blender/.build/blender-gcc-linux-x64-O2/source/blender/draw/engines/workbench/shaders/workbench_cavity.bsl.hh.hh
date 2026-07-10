static void metadata_workbench_cavity_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("workbench_common.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
