	THUMB_FUNC_START sub_080EB1F0
sub_080EB1F0: @ 0x080EB1F0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _080EB2D4  @ =gRam
	ldr r1, _080EB2D8  @ =0x00000F92
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	lsl r1, r1, #5
	ldr r0, _080EB2DC  @ =gUnknown_08177DB8
	add r1, r1, r0
	add r0, r6, #0
	mov r2, #4
	bl sub_080C9480
	ldr r1, _080EB2E0  @ =0x000010D2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r0, [r0]
	mov r8, r4
	cmp r0, #0
	bne _080EB2C6
	ldr r0, _080EB2E4  @ =0x00000FD2
	add r0, r0, r8
	add r0, r6, r0
	ldrb r0, [r0]
	ldr r7, _080EB2E8  @ =gUnknown_03003E74
	ldr r1, _080EB2EC  @ =gUnknown_08177F38
	mov r9, r1
	ldr r1, _080EB2F0  @ =gUnknown_08177F44
	mov r10, r1
	cmp r0, #0
	beq _080EB268
	mov r2, #3
	mov r12, r7
	mov r3, #170
	lsl r3, r3, #3
	add r3, r3, r8
	mov r4, #240
_080EB246:
	mov r0, r12
	ldrh r1, [r0]
	lsl r0, r2, #24
	asr r2, r0, #24
	add r1, r1, r2
	lsl r1, r1, #3
	add r5, r1, r3
	ldrb r0, [r5, #3]
	lsr r0, r0, #6
	cmp r0, #1
	beq _080EB25E
	strb r4, [r5]
_080EB25E:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _080EB246
_080EB268:
	ldr r0, _080EB2D8  @ =0x00000F92
	add r0, r0, r8
	add r0, r6, r0
	ldrb r0, [r0]
	add r0, r0, r9
	ldrb r0, [r0]
	lsr r0, r0, #2
	ldrh r7, [r7]
	add r0, r0, r7
	lsl r0, r0, #3
	mov r1, #170
	lsl r1, r1, #3
	add r1, r1, r8
	add r5, r0, r1
	ldrh r4, [r5, #4]
	lsl r0, r4, #22
	lsr r0, r0, #22
	mov r2, #128
	lsl r2, r2, #1
	and r2, r2, r0
	ldr r3, _080EB2F4  @ =0x00001082
	add r3, r3, r8
	add r3, r6, r3
	ldrb r0, [r3]
	add r0, r0, r10
	ldrb r1, [r0]
	orr r1, r1, r2
	ldr r0, _080EB2F8  @ =0xFFFFFC00
	and r0, r0, r4
	orr r0, r0, r1
	strh r0, [r5, #4]
	ldrb r0, [r3]
	ldr r1, _080EB2FC  @ =gUnknown_08177F48
	add r0, r0, r1
	ldrb r1, [r0]
	lsr r1, r1, #6
	mov r0, #1
	and r1, r1, r0
	lsl r1, r1, #4
	ldrb r2, [r5, #3]
	sub r0, r0, #18
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r5, #3]
	add r0, r6, #0
	bl sub_080C6230
_080EB2C6:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080EB2D4:
	.4byte gRam
_080EB2D8:
	.4byte 0x00000F92
_080EB2DC:
	.4byte gUnknown_08177DB8
_080EB2E0:
	.4byte 0x000010D2
_080EB2E4:
	.4byte 0x00000FD2
_080EB2E8:
	.4byte gUnknown_03003E74
_080EB2EC:
	.4byte gUnknown_08177F38
_080EB2F0:
	.4byte gUnknown_08177F44
_080EB2F4:
	.4byte 0x00001082
_080EB2F8:
	.4byte 0xFFFFFC00
_080EB2FC:
	.4byte gUnknown_08177F48
	THUMB_FUNC_END sub_080EB1F0

