static void metadata_eevee_surf_world_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_geom_infos.hh");
  source.add_dependency("eevee_nodetree_infos.hh");
  source.add_dependency("eevee_attributes_world_lib.glsl");
  source.add_dependency("eevee_colorspace_lib.bsl.hh");
  source.add_dependency("eevee_lightprobe.bsl.hh");
  source.add_dependency("eevee_nodetree_frag_lib.glsl");
  source.add_dependency("eevee_pipeline.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_surf_common.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
