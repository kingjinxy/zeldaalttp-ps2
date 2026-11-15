	THUMB_FUNC_START sub_080EB8B8
sub_080EB8B8: @ 0x080EB8B8
	push {r4-r6,lr}
	add r4, r0, #0
	add r6, r1, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	lsl r6, r6, #24
	lsr r6, r6, #24
	ldr r5, _080EB910  @ =gRam
	ldr r1, _080EB914  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	bl GetRandomInt
	ldr r1, _080EB918  @ =0x00000FC2
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #96
	strb r1, [r2]
	ldr r0, _080EB91C  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080EB920  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080EB924  @ =gUnknown_081780A1
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080EB928  @ =0x00000F12
	add r5, r5, r1
	add r4, r4, r5
	ldr r0, _080EB92C  @ =gUnknown_081780A5
	add r6, r6, r0
	ldrb r0, [r6]
	strb r0, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
_080EB910:
	.4byte gRam
_080EB914:
	.4byte 0x00000FB2
_080EB918:
	.4byte 0x00000FC2
_080EB91C:
	.4byte 0x00000F52
_080EB920:
	.4byte 0x00000F22
_080EB924:
	.4byte gUnknown_081780A1
_080EB928:
	.4byte 0x00000F12
_080EB92C:
	.4byte gUnknown_081780A5
	THUMB_FUNC_END sub_080EB8B8

