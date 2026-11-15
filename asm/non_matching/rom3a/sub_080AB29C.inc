	THUMB_FUNC_START sub_080AB29C
sub_080AB29C: @ 0x080AB29C
	push {r4,r5,lr}
	ldr r1, _080AB2CC  @ =gRam
	ldr r0, _080AB2D0  @ =0x00000AC8
	add r2, r1, r0
	ldr r3, _080AB2D4  @ =0x0000179C
	add r4, r1, r3
	ldrh r0, [r4]
	ldrh r5, [r2]
	add r0, r0, r5
	mov r3, #0
	strh r0, [r2]
	ldr r0, _080AB2D8  @ =0x00000ACA
	add r2, r1, r0
	ldr r5, _080AB2DC  @ =0x0000179A
	add r1, r1, r5
	ldrh r0, [r1]
	ldrh r5, [r2]
	add r0, r0, r5
	strh r0, [r2]
	strh r3, [r4]
	strh r3, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_080AB2CC:
	.4byte gRam
_080AB2D0:
	.4byte 0x00000AC8
_080AB2D4:
	.4byte 0x0000179C
_080AB2D8:
	.4byte 0x00000ACA
_080AB2DC:
	.4byte 0x0000179A
	THUMB_FUNC_END sub_080AB29C

