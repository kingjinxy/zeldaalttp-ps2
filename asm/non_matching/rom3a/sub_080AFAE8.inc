	THUMB_FUNC_START sub_080AFAE8
sub_080AFAE8: @ 0x080AFAE8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r0, #0
	cmp r0, #0
	blt _080AFB4E
	cmp r0, #1
	bgt _080AFB24
	ldr r1, _080AFB10  @ =gRam
	ldr r2, _080AFB14  @ =0x000016C4
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _080AFB18  @ =0x00000978
	add r0, r1, r3
	strh r2, [r0]
	ldr r2, _080AFB1C  @ =0x00001734
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080AFB20  @ =0x00001735
	b _080AFB40
_080AFB10:
	.4byte gRam
_080AFB14:
	.4byte 0x000016C4
_080AFB18:
	.4byte 0x00000978
_080AFB1C:
	.4byte 0x00001734
_080AFB20:
	.4byte 0x00001735
_080AFB24:
	cmp r1, #3
	bgt _080AFB4E
	ldr r1, _080AFB54  @ =gRam
	mov r2, #182
	lsl r2, r2, #5
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _080AFB58  @ =0x00000978
	add r0, r1, r3
	strh r2, [r0]
	ldr r2, _080AFB5C  @ =0x00001732
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080AFB60  @ =0x00001733
_080AFB40:
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080AFB64  @ =0x0000097C
	add r1, r1, r0
	strh r2, [r1]
_080AFB4E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AFB54:
	.4byte gRam
_080AFB58:
	.4byte 0x00000978
_080AFB5C:
	.4byte 0x00001732
_080AFB60:
	.4byte 0x00001733
_080AFB64:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080AFAE8

