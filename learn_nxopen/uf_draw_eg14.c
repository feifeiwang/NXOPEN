/*
 The following example retrieves information about a simple section
line and then creates a similar section line and section view.
*/
#include <stdio.h>
#include <string.h>
#include <uf.h>
#include <uf_defs.h>
#include <uf_draw.h>
#include <uf_draw_types.h>
#include <uf_drf_types.h>
#include <uf_obj.h>
void ufusr(char *param, int *retcod, int param_len)
{
    int                         ifail = 0;
    int                         numchrs;
    int                         num_sxviews;
    int                         num_sxsegs;
    int                         seg_ndx;
    int                         len;
    tag_t                       sxline1_tag;
    tag_t                       pview_tag;
    tag_t                       dwg_tag;
    tag_t                       curve_tag;
    tag_t                       new_sxview_tag;
    tag_t *                     sxview_tags = NULL;
    tag_t *                     sxseg_tags = NULL;
    double                      step_dir[3];
    double                      arrow_dir[3];
    double                      view_placement_pt[2];
    double                      sxview_scale = 1.0;
    char                        error_message[133];
    char *                      sxline1 = "simple_sxline1";
    char                        dwg_name[MAX_FSPEC_SIZE +1];
    char                        sxview_name[MAX_FSPEC_SIZE +1];
    UF_DRAW_sxline_status_t     sxline_status;
    UF_DRAW_sxseg_info_t        sxseg_info;
    UF_DRF_object_p_t           object = NULL;
    ifail = UF_initialize();
    if( !ifail )
    {
        /* Find the tag of the section line from its name. */
        numchrs = strlen( sxline1 );
        ifail = uc5028( sxline1, numchrs, &sxline1_tag );
    }
    if( !ifail )
    {
        /* Retrieve information about a simple section line. */
        ifail = UF_DRAW_ask_simple_sxline( sxline1_tag,
        step_dir, arrow_dir, &pview_tag, &num_sxviews,
        &sxview_tags, &num_sxsegs, &sxseg_tags,
        &sxline_status );
    }
    if( !ifail )
    {
        /* Read current drawing name. */
        ifail = uc6492( dwg_name );
    }
    if( !ifail )
    {
        /* Get section view name from its tag. */
        ifail = uc5027( sxview_tags[0], sxview_name, &len );
    }
    if( !ifail )
    {
        /* Find the drawing location of the section view. */
        ifail = uc6483( dwg_name, sxview_name, view_placement_pt );
    }
    if( !ifail )
    {
        /* Get the section line segment information. */
        for( seg_ndx = 0; seg_ndx < num_sxsegs; seg_ndx++ )
        {
            ifail = UF_DRAW_ask_sxline_sxseg( sxseg_tags[seg_ndx],
                &sxseg_info, &curve_tag, &object );
            if( ifail ) break;

            /* Save only the cut segment. */
            if( sxseg_info.sxseg_type == UF_DRAW_sxseg_cut ) break;
            /* If not a cut segment, free it. */
            UF_free( object );
        }
    }
    if( !ifail )
    {
        /* Get tag from drawing name. */
        len = strlen( dwg_name );
        ifail = uc5028( dwg_name, len, &dwg_tag );
    }
    /* Create a similar simple section line. */
    if( !ifail )
    {
        ifail = UF_DRAW_create_simple_sxview( dwg_tag,
            sxview_scale,  step_dir, arrow_dir, pview_tag,
            object, view_placement_pt, &new_sxview_tag );
    }
    UF_free( object );
    UF_free( sxview_tags );
    UF_free( sxseg_tags );
    printf( "UF_DRAW_create_simple_sxview sample " );
    if( ifail )
    {
        ifail = UF_get_fail_message( ifail, error_message );
        printf( "fails.\nError is: %s\n", error_message );
    }
    else
        printf( "is successful.\n" );
    UF_terminate();
}

