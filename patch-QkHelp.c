*** 1.1	1996/07/11 16:21:37
--- QkHelp.c	1996/07/11 17:59:21
***************
*** 525,531 ****
     Widget             w,
     XdtQkHelpShellPtr  qh_shell_ptr )
  #else
! static void _AgentGadetAware( w, qh_shell_ptr )
     Widget             w;
     XdtQkHelpShellPtr  qh_shell_ptr;
  #endif
--- 525,531 ----
     Widget             w,
     XdtQkHelpShellPtr  qh_shell_ptr )
  #else
! static void _AgentGadgetAware( w, qh_shell_ptr )
     Widget             w;
     XdtQkHelpShellPtr  qh_shell_ptr;
  #endif
***************
*** 1179,1189 ****
        },{
           XdtNbgColorFromParent, XdtCBgColorFromParent, 
           XtRBoolean, sizeof( Boolean ), OFFSET_OF( bgColorFromParent ), 
!          XtRBoolean, (XtPointer) TRUE
        },{
           XdtNbgTextureFromParent, XdtCBgTextureFromParent, 
           XtRBoolean, sizeof( Boolean ), OFFSET_OF( bgTextureFromParent ), 
!          XtRBoolean, (XtPointer) FALSE
        }
     };
     #undef OFFSET_OF
--- 1179,1189 ----
        },{
           XdtNbgColorFromParent, XdtCBgColorFromParent, 
           XtRBoolean, sizeof( Boolean ), OFFSET_OF( bgColorFromParent ), 
!          XtRImmediate, (XtPointer) TRUE
        },{
           XdtNbgTextureFromParent, XdtCBgTextureFromParent, 
           XtRBoolean, sizeof( Boolean ), OFFSET_OF( bgTextureFromParent ), 
!          XtRImmediate, (XtPointer) FALSE
        }
     };
     #undef OFFSET_OF
