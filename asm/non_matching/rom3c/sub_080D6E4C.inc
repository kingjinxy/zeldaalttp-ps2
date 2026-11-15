	THUMB_FUNC_START sub_080D6E4C
sub_080D6E4C: @ 0x080D6E4C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r4, _080D6F30  @ =gRam
	ldr r1, _080D6F34  @ =0x00000F52
	add r0, r4, r1
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D6F20
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D6F20
	mov r2, #3
	mov r8, r4
	mov r3, sp
	add r3, r3, #4
	str r3, [sp, #8]
	ldr r7, _080D6F38  @ =0x00000964
	add r7, r7, r8
	mov r10, r7
_080D6E8E:
	ldr r0, _080D6F3C  @ =0x00000F92
	add r0, r0, r8
	add r0, r0, r9
	ldrb r0, [r0]
	lsl r0, r0, #2
	lsl r1, r2, #24
	asr r6, r1, #24
	add r0, r6, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r0, _080D6F40  @ =gUnknown_08175618
	add r0, r5, r0
	ldr r1, _080D6F44  @ =0x00000969
	add r1, r1, r8
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r4, r0, #0
	eor r4, r4, r2
	mov r0, #15
	and r0, r0, r2
	cmp r0, #0
	bne _080D6EC0
	mov r0, #240
	and r4, r4, r0
_080D6EC0:
	ldr r0, _080D6F48  @ =gUnknown_03003E74
	ldr r2, [sp, #8]
	ldrb r1, [r2]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _080D6F4C  @ =gUnknown_081755C8
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080D6F50  @ =gUnknown_081755E8
	add r3, r3, r2
	ldrh r2, [r3]
	mov r3, r10
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080D6F54  @ =gUnknown_08175608
	add r3, r5, r3
	ldrb r3, [r3]
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080D6F58  @ =gUnknown_08175628
	add r4, r5, r4
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	sub r1, r6, #1
	lsl r1, r1, #24
	ldr r7, [sp, #8]
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r2, r1, #24
	cmp r1, #0
	bge _080D6E8E
_080D6F20:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080D6F30:
	.4byte gRam
_080D6F34:
	.4byte 0x00000F52
_080D6F38:
	.4byte 0x00000964
_080D6F3C:
	.4byte 0x00000F92
_080D6F40:
	.4byte gUnknown_08175618
_080D6F44:
	.4byte 0x00000969
_080D6F48:
	.4byte gUnknown_03003E74
_080D6F4C:
	.4byte gUnknown_081755C8
_080D6F50:
	.4byte gUnknown_081755E8
_080D6F54:
	.4byte gUnknown_08175608
_080D6F58:
	.4byte gUnknown_08175628
	THUMB_FUNC_END sub_080D6E4C

