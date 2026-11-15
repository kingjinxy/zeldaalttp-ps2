	THUMB_FUNC_START sub_08074470
sub_08074470: @ 0x08074470
	push {lr}
	ldr r3, _080744B4  @ =gUnknown_020022BB
	ldrb r2, [r3]
	mov r1, #223
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _080744B8  @ =gUnknown_020022FB
	ldrb r0, [r2]
	and r1, r1, r0
	strb r1, [r2]
	sub r2, r2, #229
	ldrh r1, [r2]
	ldr r0, _080744BC  @ =0x0000FF7F
	and r0, r0, r1
	strh r0, [r2]
	ldr r2, _080744C0  @ =gUnknown_02002050
	ldrh r1, [r2]
	ldr r0, _080744C4  @ =0x0000FEFF
	and r0, r0, r1
	strh r0, [r2]
	bl sub_0812F150
	bl sub_0812FBC0
	ldr r1, _080744C8  @ =gRam
	ldr r0, _080744CC  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080744B4:
	.4byte gUnknown_020022BB
_080744B8:
	.4byte gUnknown_020022FB
_080744BC:
	.4byte 0x0000FF7F
_080744C0:
	.4byte gUnknown_02002050
_080744C4:
	.4byte 0x0000FEFF
_080744C8:
	.4byte gRam
_080744CC:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08074470

