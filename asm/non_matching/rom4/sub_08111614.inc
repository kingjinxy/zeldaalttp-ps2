	THUMB_FUNC_START sub_08111614
sub_08111614: @ 0x08111614
	push {r4-r6,lr}
	add r2, r0, #0
	add r6, r1, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r0, #243
	add r1, r2, #0
	bl sub_080CA538
	cmp r0, #0
	blt _0811165E
	lsl r5, r0, #24
	lsr r5, r5, #24
	ldr r4, _08111664  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r2, r4, r0
	ldr r0, _08111668  @ =gUnknown_0817D590
	lsl r1, r6, #2
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	ldr r0, _0811166C  @ =0x00000964
	add r2, r4, r0
	ldrh r0, [r1, #2]
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	add r0, r5, #0
	bl sub_080CAE50
	ldr r3, _08111670  @ =0x00000F52
	add r4, r4, r3
	add r5, r5, r4
	strb r6, [r5]
_0811165E:
	pop {r4-r6}
	pop {r0}
	bx r0
_08111664:
	.4byte gRam
_08111668:
	.4byte gUnknown_0817D590
_0811166C:
	.4byte 0x00000964
_08111670:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08111614

