	THUMB_FUNC_START sub_080C8DAC
sub_080C8DAC: @ 0x080C8DAC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	add r5, r1, #0
	mov r4, #0
	ldr r1, _080C8E64  @ =gRam
	ldr r2, _080C8E68  @ =0x0000096C
	add r0, r1, r2
	ldrb r2, [r0]
	mov r8, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080C8E56
	add r7, r1, #0
	ldr r0, _080C8E6C  @ =0x00000964
	add r0, r0, r7
	mov r9, r0
_080C8DD6:
	ldrb r3, [r5, #4]
	ldrb r0, [r5, #5]
	lsl r0, r0, #8
	orr r3, r3, r0
	ldr r1, _080C8E70  @ =0x00000968
	add r0, r7, r1
	ldrh r0, [r0]
	eor r3, r3, r0
	mov r2, #150
	lsl r2, r2, #4
	add r0, r7, r2
	ldrh r0, [r0]
	ldrh r1, [r5]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r6, r0, #0
	add r2, r2, #24
	add r0, r7, r2
	strh r6, [r0]
	mov r1, #237
	lsl r1, r1, #4
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C8E18
	ldr r2, _080C8E74  @ =0x0000F1FF
	add r0, r2, #0
	and r3, r3, r0
	mov r1, #128
	lsl r1, r1, #3
	add r0, r1, #0
	orr r3, r3, r0
_080C8E18:
	ldr r0, _080C8E78  @ =gUnknown_03003E74
	lsl r4, r4, #24
	asr r4, r4, #24
	ldrh r0, [r0]
	add r0, r0, r4
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, r9
	ldrh r2, [r1]
	ldrh r1, [r5, #2]
	add r2, r2, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldrb r1, [r5, #7]
	str r1, [sp]
	add r1, r6, #0
	bl sub_080C6368
	mov r2, r8
	lsl r0, r2, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	add r4, r4, #1
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r5, r5, #8
	lsr r2, r0, #24
	mov r8, r2
	cmp r0, #0
	bne _080C8DD6
_080C8E56:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080C8E64:
	.4byte gRam
_080C8E68:
	.4byte 0x0000096C
_080C8E6C:
	.4byte 0x00000964
_080C8E70:
	.4byte 0x00000968
_080C8E74:
	.4byte 0x0000F1FF
_080C8E78:
	.4byte gUnknown_03003E74
	THUMB_FUNC_END sub_080C8DAC

