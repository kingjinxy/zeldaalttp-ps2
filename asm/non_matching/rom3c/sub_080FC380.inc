	THUMB_FUNC_START sub_080FC380
sub_080FC380: @ 0x080FC380
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r3, _080FC3CC  @ =gUnknown_020109BA
	ldr r1, _080FC3D0  @ =gUnknown_0817A772
	ldr r6, _080FC3D4  @ =gRam
	ldr r0, _080FC3D8  @ =0x00001082
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldrh r0, [r3]
	add r1, r1, r0
	strh r1, [r3]
	mov r4, #255
	ldr r3, _080FC3DC  @ =gUnknown_0817A776
	ldrb r0, [r2]
	add r0, r0, r3
	and r1, r1, r4
	ldrb r0, [r0]
	cmp r1, r0
	bne _080FC3BC
	ldr r0, _080FC3E0  @ =0x00001092
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FC3BC:
	ldr r1, _080FC3E4  @ =gUnknown_020109B8
	ldrb r0, [r1]
	add r0, r0, #3
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FC3CC:
	.4byte gUnknown_020109BA
_080FC3D0:
	.4byte gUnknown_0817A772
_080FC3D4:
	.4byte gRam
_080FC3D8:
	.4byte 0x00001082
_080FC3DC:
	.4byte gUnknown_0817A776
_080FC3E0:
	.4byte 0x00001092
_080FC3E4:
	.4byte gUnknown_020109B8
	THUMB_FUNC_END sub_080FC380

