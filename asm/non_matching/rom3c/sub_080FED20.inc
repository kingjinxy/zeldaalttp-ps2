	THUMB_FUNC_START sub_080FED20
sub_080FED20: @ 0x080FED20
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	mov r0, #8
	bl sub_080CF3E8
	ldr r5, _080FEDA4  @ =gRam
	ldr r1, _080FEDA8  @ =0x00000F92
	add r0, r5, r1
	add r6, r4, r0
	ldrb r1, [r6]
	lsl r1, r1, #4
	ldr r0, _080FEDAC  @ =gUnknown_0817ABCC
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
	ldr r2, _080FEDB0  @ =0x000010D2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FEE4A
	mov r1, #0
	ldr r3, _080FEDB4  @ =0x000009DA
	add r0, r5, r3
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FED68
	mov r1, #1
_080FED68:
	cmp r1, #0
	beq _080FEDC8
	mov r0, #4
	bl sub_080CF3E8
	ldr r0, _080FEDB8  @ =0x00000964
	add r1, r5, r0
	ldr r2, _080FEDBC  @ =0x00001142
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	ldrh r2, [r1]
	add r2, r2, r0
	strh r2, [r1]
	ldr r0, _080FEDC0  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r5, r3
	ldrh r1, [r1]
	add r2, r2, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080FEDC4  @ =0x000024CC
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	b _080FEE4A
	.byte 0x00
	.byte 0x00
_080FEDA4:
	.4byte gRam
_080FEDA8:
	.4byte 0x00000F92
_080FEDAC:
	.4byte gUnknown_0817ABCC
_080FEDB0:
	.4byte 0x000010D2
_080FEDB4:
	.4byte 0x000009DA
_080FEDB8:
	.4byte 0x00000964
_080FEDBC:
	.4byte 0x00001142
_080FEDC0:
	.4byte gUnknown_03003E74
_080FEDC4:
	.4byte 0x000024CC
_080FEDC8:
	ldrb r0, [r6]
	lsl r1, r0, #3
	add r0, r0, r1
	ldr r2, _080FEE58  @ =0x0000096C
	add r1, r5, r2
	strb r0, [r1]
	ldr r3, _080FEE5C  @ =0x00000964
	add r4, r5, r3
	ldr r0, _080FEE60  @ =0x00001142
	add r1, r5, r0
	add r1, r7, r1
	ldrh r0, [r4]
	ldrb r1, [r1]
	add r0, r0, r1
	strh r0, [r4]
	mov r0, #36
	bl sub_080CF3E8
	mov r2, #8
	mov r6, #0
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r5
	mov r9, r1
	ldr r3, _080FEE64  @ =gUnknown_0817ABFC
	mov r8, r3
	add r7, r4, #0
_080FEDFE:
	ldr r0, _080FEE68  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r6
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _080FEE58  @ =0x0000096C
	add r1, r5, r3
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	lsl r4, r2, #24
	asr r4, r4, #24
	add r1, r1, r4
	lsl r1, r1, #1
	add r1, r1, r8
	ldrh r1, [r1]
	mov r2, r9
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r7]
	add r2, r2, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r3, #2
	str r3, [sp]
	ldr r3, _080FEE6C  @ =0x000024CC
	bl sub_080C6368
	sub r4, r4, #1
	lsl r4, r4, #24
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsr r2, r4, #24
	cmp r4, #0
	bge _080FEDFE
_080FEE4A:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080FEE58:
	.4byte 0x0000096C
_080FEE5C:
	.4byte 0x00000964
_080FEE60:
	.4byte 0x00001142
_080FEE64:
	.4byte gUnknown_0817ABFC
_080FEE68:
	.4byte gUnknown_03003E74
_080FEE6C:
	.4byte 0x000024CC
	THUMB_FUNC_END sub_080FED20

