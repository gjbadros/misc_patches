*** 1.1	1996/07/11 16:21:42
--- ResMgmt.c	1996/07/11 16:25:28
***************
*** 266,275 ****
         */
        if (!resource_retrieved)
        {
  	 XtGetSubresources(
  	    w,			base,
  	    subpart_name,	subpart_class,
! 	    resources + i,	(Cardinal) 1,
  	    NULL,		(Cardinal) 0 );
        }
     }
--- 266,278 ----
         */
        if (!resource_retrieved)
        {
+          XtResource res;
+ 	 memcpy (&res, resources+i,sizeof(res));
+ 	 
  	 XtGetSubresources(
  	    w,			base,
  	    subpart_name,	subpart_class,
! 	    &res,	(Cardinal) 1,
  	    NULL,		(Cardinal) 0 );
        }
     }
