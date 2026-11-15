	THUMB_FUNC_START sub_080E3BF0
sub_080E3BF0: @ 0x080E3BF0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsl r1, r1, #24
	lsr r7, r1, #26
	ldr r2, _080E3CB4  @ =gRam
	ldr r1, _080E3CB8  @ =0x00000F92
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	add r0, r1, #0
	sub r0, r0, #14
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r1, #13
	bhi _080E3C26
	ldr r0, _080E3CBC  @ =gUnknown_081771CC
	ldr r4, _080E3CC0  @ =0x00000FB2
	add r1, r2, r4
	add r1, r3, r1
	ldrb r1, [r1]
	add r1, r1, r0
	ldrb r0, [r1]
_080E3C26:
	lsl r1, r0, #2
	ldr r3, _080E3CC4  @ =0x0000096C
	add r0, r2, r3
	strb r1, [r0]
	mov r1, #3
	mov r8, r2
	ldr r4, _080E3CC8  @ =0x00000964
	add r4, r4, r8
	mov r9, r4
_080E3C38:
	ldr r0, _080E3CC4  @ =0x0000096C
	add r0, r0, r8
	ldrb r5, [r0]
	lsl r6, r1, #24
	asr r6, r6, #24
	add r5, r6, r5
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r0, _080E3CCC  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r7
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _080E3CD0  @ =gUnknown_081771D0
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E3CD4  @ =gUnknown_08177230
	add r3, r3, r2
	ldrh r2, [r3]
	mov r3, r9
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E3CD8  @ =gUnknown_08177290
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080E3CDC  @ =gUnknown_081772C0
	add r5, r5, r4
	ldrb r5, [r5]
	mov r4, #32
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	sub r6, r6, #1
	lsl r6, r6, #24
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsr r1, r6, #24
	cmp r6, #0
	bge _080E3C38
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3CB4:
	.4byte gRam
_080E3CB8:
	.4byte 0x00000F92
_080E3CBC:
	.4byte gUnknown_081771CC
_080E3CC0:
	.4byte 0x00000FB2
_080E3CC4:
	.4byte 0x0000096C
_080E3CC8:
	.4byte 0x00000964
_080E3CCC:
	.4byte gUnknown_03003E74
_080E3CD0:
	.4byte gUnknown_081771D0
_080E3CD4:
	.4byte gUnknown_08177230
_080E3CD8:
	.4byte gUnknown_08177290
_080E3CDC:
	.4byte gUnknown_081772C0
	THUMB_FUNC_END sub_080E3BF0

