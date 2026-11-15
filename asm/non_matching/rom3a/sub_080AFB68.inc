	THUMB_FUNC_START sub_080AFB68
sub_080AFB68: @ 0x080AFB68
	push {r4,r5,lr}
	add r4, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r0, #0
	cmp r0, #0
	blt _080AFBCE
	cmp r0, #1
	bgt _080AFBA4
	ldr r1, _080AFB94  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r3, r1, r0
	ldrh r2, [r3]
	ldr r5, _080AFB98  @ =0x00000978
	add r0, r1, r5
	strh r2, [r0]
	ldr r2, _080AFB9C  @ =0x00001732
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r5, _080AFBA0  @ =0x00001733
	b _080AFBBE
_080AFB94:
	.4byte gRam
_080AFB98:
	.4byte 0x00000978
_080AFB9C:
	.4byte 0x00001732
_080AFBA0:
	.4byte 0x00001733
_080AFBA4:
	cmp r1, #3
	bgt _080AFBCE
	ldr r1, _080AFBD4  @ =gRam
	ldr r2, _080AFBD8  @ =0x000016C4
	add r3, r1, r2
	ldrh r2, [r3]
	ldr r5, _080AFBDC  @ =0x00000978
	add r0, r1, r5
	strh r2, [r0]
	ldr r2, _080AFBE0  @ =0x00001734
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r5, _080AFBE4  @ =0x00001735
_080AFBBE:
	add r0, r1, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080AFBE8  @ =0x0000097C
	add r1, r1, r0
	strh r2, [r1]
	str r3, [r4]
_080AFBCE:
	pop {r4,r5}
	pop {r0}
	bx r0
_080AFBD4:
	.4byte gRam
_080AFBD8:
	.4byte 0x000016C4
_080AFBDC:
	.4byte 0x00000978
_080AFBE0:
	.4byte 0x00001734
_080AFBE4:
	.4byte 0x00001735
_080AFBE8:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080AFB68

