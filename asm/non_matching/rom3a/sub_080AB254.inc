	THUMB_FUNC_START sub_080AB254
sub_080AB254: @ 0x080AB254
	push {lr}
	ldr r2, _080AB27C  @ =gRam
	ldr r1, _080AB280  @ =0x0000193C
	add r0, r2, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r0, #0
	beq _080AB28C
	ldr r1, _080AB284  @ =0x00000AC2
	add r0, r2, r1
	ldrh r1, [r0]
	mov r3, #128
	lsl r3, r3, #8
	add r1, r1, r3
	strh r1, [r0]
	lsr r1, r1, #16
	ldr r3, _080AB288  @ =0x0000179A
	add r0, r2, r3
	strh r1, [r0]
	b _080AB294
_080AB27C:
	.4byte gRam
_080AB280:
	.4byte 0x0000193C
_080AB284:
	.4byte 0x00000AC2
_080AB288:
	.4byte 0x0000179A
_080AB28C:
	ldr r0, _080AB298  @ =0x0000179A
	add r1, r2, r0
	mov r0, #2
	strh r0, [r1]
_080AB294:
	pop {r0}
	bx r0
_080AB298:
	.4byte 0x0000179A
	THUMB_FUNC_END sub_080AB254

