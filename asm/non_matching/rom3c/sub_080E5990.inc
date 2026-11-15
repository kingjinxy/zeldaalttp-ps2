	THUMB_FUNC_START sub_080E5990
sub_080E5990: @ 0x080E5990
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E5A34
	mov r7, #3
	ldr r2, _080E5A44  @ =gRam
	ldr r1, _080E5A48  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsr r1, r1, #1
	mov r0, #12
	bic r0, r0, r1
	add r0, r0, #3
	add r5, r0, #0
	add r6, sp, #4
	mov r8, r2
	ldr r3, _080E5A4C  @ =0x00000964
	add r3, r3, r8
	mov r9, r3
_080E59D0:
	ldr r0, _080E5A50  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _080E5A54  @ =gUnknown_08177500
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E5A58  @ =gUnknown_08177520
	add r3, r3, r2
	ldrh r2, [r3]
	mov r4, r9
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E5A5C  @ =gUnknown_08177540
	add r3, r5, r3
	ldrb r3, [r3]
	lsl r3, r3, #24
	mov r4, #246
	lsl r4, r4, #17
	add r3, r3, r4
	lsr r3, r3, #16
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	lsl r1, r7, #24
	mov r0, #255
	lsl r0, r0, #24
	add r1, r1, r0
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r7, r1, #24
	cmp r1, #0
	bge _080E59D0
_080E5A34:
	add sp, sp, #8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E5A44:
	.4byte gRam
_080E5A48:
	.4byte 0x00000FC2
_080E5A4C:
	.4byte 0x00000964
_080E5A50:
	.4byte gUnknown_03003E74
_080E5A54:
	.4byte gUnknown_08177500
_080E5A58:
	.4byte gUnknown_08177520
_080E5A5C:
	.4byte gUnknown_08177540
	THUMB_FUNC_END sub_080E5990

