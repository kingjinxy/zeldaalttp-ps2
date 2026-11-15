	THUMB_FUNC_START sub_080E937C
sub_080E937C: @ 0x080E937C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r6, _080E93B0  @ =gRam
	ldr r1, _080E93B4  @ =0x00000FC2
	add r0, r6, r1
	add r4, r2, r0
	ldrb r3, [r4]
	add r5, r3, #0
	cmp r5, #0
	beq _080E93C4
	ldr r1, _080E93B8  @ =gUnknown_08177AC8
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r3
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r3, _080E93BC  @ =0x00000A28
	add r0, r6, r3
	strh r1, [r0]
	ldr r1, _080E93C0  @ =0x00001770
	add r0, r6, r1
	strb r2, [r0]
	b _080E93E4
	.byte 0x00
	.byte 0x00
_080E93B0:
	.4byte gRam
_080E93B4:
	.4byte 0x00000FC2
_080E93B8:
	.4byte gUnknown_08177AC8
_080E93BC:
	.4byte 0x00000A28
_080E93C0:
	.4byte 0x00001770
_080E93C4:
	ldr r3, _080E93EC  @ =0x00000F52
	add r1, r6, r3
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #127
	strb r0, [r4]
	ldr r1, _080E93F0  @ =0x00000A28
	add r0, r6, r1
	strh r5, [r0]
	add r3, r3, #64
	add r0, r6, r3
	add r0, r2, r0
	mov r1, #4
	strb r1, [r0]
_080E93E4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E93EC:
	.4byte 0x00000F52
_080E93F0:
	.4byte 0x00000A28
	THUMB_FUNC_END sub_080E937C

