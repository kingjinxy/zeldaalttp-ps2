	THUMB_FUNC_START sub_0806EE2C
sub_0806EE2C: @ 0x0806EE2C
	push {r4-r6,lr}
	sub sp, sp, #8
	bl sub_08131BC4
	ldr r1, _0806EEB0  @ =gUnknown_02000C00
	ldr r0, _0806EEB4  @ =gUnknown_02000C40
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r6, _0806EEB8  @ =gRam
	ldr r1, _0806EEBC  @ =0x00000CFA
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #255
	bne _0806EEA8
	mov r0, sp
	mov r2, #246
	lsl r2, r2, #1
	add r5, r2, #0
	strh r5, [r0]
	ldr r1, _0806EEC0  @ =gUnknown_0201C000
	ldr r4, _0806EEC4  @ =0x01001000
	add r2, r4, #0
	bl CpuSet
	mov r0, sp
	add r0, r0, #2
	strh r5, [r0]
	ldr r1, _0806EEC8  @ =gUnknown_02018000
	add r2, r4, #0
	bl CpuSet
	add r0, sp, #4
	mov r1, #127
	strh r1, [r0]
	ldr r1, _0806EECC  @ =gUnknown_0201A000
	add r2, r4, #0
	bl CpuSet
	ldr r1, _0806EED0  @ =0x00000A2A
	add r0, r6, r1
	mov r1, #0
	strh r1, [r0]
	ldr r2, _0806EED4  @ =0x00000A28
	add r0, r6, r2
	strh r1, [r0]
	add r2, r2, #160
	add r0, r6, r2
	strh r1, [r0]
	add r2, r2, #2
	add r0, r6, r2
	strh r1, [r0]
	sub r2, r2, #12
	add r0, r6, r2
	strh r1, [r0]
	add r2, r2, #70
	add r0, r6, r2
	strh r1, [r0]
	ldr r0, _0806EED8  @ =0x000009E8
	add r1, r6, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0806EEA8:
	add sp, sp, #8
	pop {r4-r6}
	pop {r0}
	bx r0
_0806EEB0:
	.4byte gUnknown_02000C00
_0806EEB4:
	.4byte gUnknown_02000C40
_0806EEB8:
	.4byte gRam
_0806EEBC:
	.4byte 0x00000CFA
_0806EEC0:
	.4byte gUnknown_0201C000
_0806EEC4:
	.4byte 0x01001000
_0806EEC8:
	.4byte gUnknown_02018000
_0806EECC:
	.4byte gUnknown_0201A000
_0806EED0:
	.4byte 0x00000A2A
_0806EED4:
	.4byte 0x00000A28
_0806EED8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806EE2C

