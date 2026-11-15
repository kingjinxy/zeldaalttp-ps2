	THUMB_FUNC_START sub_08067618
sub_08067618: @ 0x08067618
	push {lr}
	bl 0x0800099C
	mov r1, #3
	bl __umodsi3
	cmp r0, #1
	beq _0806763C
	cmp r0, #1
	bcc _08067632
	cmp r0, #2
	beq _08067654
	b _08067660
_08067632:
	ldr r0, _08067638  @ =gUnknown_08441C92
	b _0806763E
	.byte 0x00
	.byte 0x00
_08067638:
	.4byte gUnknown_08441C92
_0806763C:
	ldr r0, _0806764C  @ =gUnknown_08441C9A
_0806763E:
	mov r1, #146
	lsl r1, r1, #3
	ldr r2, _08067650  @ =0x00000485
	bl sub_080675B8
	b _08067660
	.byte 0x00
	.byte 0x00
_0806764C:
	.4byte gUnknown_08441C9A
_08067650:
	.4byte 0x00000485
_08067654:
	ldr r0, _08067678  @ =gUnknown_08441CA2
	mov r1, #146
	lsl r1, r1, #3
	ldr r2, _0806767C  @ =0x00000485
	bl sub_080675B8
_08067660:
	bl 0x0800099C
	mov r1, #3
	bl __umodsi3
	cmp r0, #1
	beq _08067688
	cmp r0, #1
	bcc _08067680
	cmp r0, #2
	beq _080676A0
	b _080676AC
_08067678:
	.4byte gUnknown_08441CA2
_0806767C:
	.4byte 0x00000485
_08067680:
	ldr r0, _08067684  @ =gUnknown_08441CAA
	b _0806768A
_08067684:
	.4byte gUnknown_08441CAA
_08067688:
	ldr r0, _08067698  @ =gUnknown_08441CB2
_0806768A:
	ldr r1, _0806769C  @ =0x00000485
	mov r2, #146
	lsl r2, r2, #3
	bl sub_080675B8
	b _080676AC
	.byte 0x00
	.byte 0x00
_08067698:
	.4byte gUnknown_08441CB2
_0806769C:
	.4byte 0x00000485
_080676A0:
	ldr r0, _080676C4  @ =gUnknown_08441CBA
	ldr r1, _080676C8  @ =0x00000485
	mov r2, #146
	lsl r2, r2, #3
	bl sub_080675B8
_080676AC:
	bl 0x0800099C
	mov r1, #3
	bl __umodsi3
	cmp r0, #1
	beq _080676D4
	cmp r0, #1
	bcc _080676CC
	cmp r0, #2
	beq _080676EC
	b _080676F6
_080676C4:
	.4byte gUnknown_08441CBA
_080676C8:
	.4byte 0x00000485
_080676CC:
	ldr r0, _080676D0  @ =gUnknown_08441CC2
	b _080676D6
_080676D0:
	.4byte gUnknown_08441CC2
_080676D4:
	ldr r0, _080676E0  @ =gUnknown_08441CCA
_080676D6:
	ldr r1, _080676E4  @ =0x00000477
	ldr r2, _080676E8  @ =0x0000046E
	bl sub_080675B8
	b _080676F6
_080676E0:
	.4byte gUnknown_08441CCA
_080676E4:
	.4byte 0x00000477
_080676E8:
	.4byte 0x0000046E
_080676EC:
	ldr r0, _08067710  @ =gUnknown_08441CD2
	ldr r1, _08067714  @ =0x00000477
	ldr r2, _08067718  @ =0x0000046E
	bl sub_080675B8
_080676F6:
	bl 0x0800099C
	mov r1, #3
	bl __umodsi3
	cmp r0, #1
	beq _08067724
	cmp r0, #1
	bcc _0806771C
	cmp r0, #2
	beq _0806773C
	b _08067746
	.byte 0x00
	.byte 0x00
_08067710:
	.4byte gUnknown_08441CD2
_08067714:
	.4byte 0x00000477
_08067718:
	.4byte 0x0000046E
_0806771C:
	ldr r0, _08067720  @ =gUnknown_08441CDA
	b _08067726
_08067720:
	.4byte gUnknown_08441CDA
_08067724:
	ldr r0, _08067730  @ =gUnknown_08441CE2
_08067726:
	ldr r1, _08067734  @ =0x0000046E
	ldr r2, _08067738  @ =0x00000477
	bl sub_080675B8
	b _08067746
_08067730:
	.4byte gUnknown_08441CE2
_08067734:
	.4byte 0x0000046E
_08067738:
	.4byte 0x00000477
_0806773C:
	ldr r0, _0806774C  @ =gUnknown_08441CEA
	ldr r1, _08067750  @ =0x0000046E
	ldr r2, _08067754  @ =0x00000477
	bl sub_080675B8
_08067746:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806774C:
	.4byte gUnknown_08441CEA
_08067750:
	.4byte 0x0000046E
_08067754:
	.4byte 0x00000477
	THUMB_FUNC_END sub_08067618

