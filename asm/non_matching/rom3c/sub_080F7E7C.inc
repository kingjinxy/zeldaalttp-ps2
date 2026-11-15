	THUMB_FUNC_START sub_080F7E7C
sub_080F7E7C: @ 0x080F7E7C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F7F50
	ldr r2, _080F7F60  @ =gRam
	ldr r1, _080F7F64  @ =0x00000F92
	add r0, r2, r1
	add r0, r0, r9
	ldrb r1, [r0]
	lsl r0, r1, #2
	add r0, r0, r1
	ldr r3, _080F7F68  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	mov r7, #4
	mov r8, r2
	ldr r6, _080F7F6C  @ =0x00000964
	add r6, r6, r8
	mov r10, r6
_080F7EBE:
	ldr r0, _080F7F68  @ =0x0000096C
	add r0, r0, r8
	ldrb r0, [r0]
	add r0, r0, r7
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r0, _080F7F70  @ =gUnknown_08179DF0
	add r0, r5, r0
	ldr r1, _080F7F74  @ =0x00000969
	add r1, r1, r8
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r4, r0, #0
	orr r4, r4, r2
	ldr r0, _080F7F78  @ =gUnknown_08179DDC
	add r0, r0, r5
	mov r12, r0
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080F7EF8
	mov r0, #241
	and r4, r4, r0
	mov r0, #8
	orr r4, r4, r0
	lsl r0, r4, #24
	lsr r4, r0, #24
_080F7EF8:
	ldr r0, _080F7F7C  @ =gUnknown_03003E74
	sub r1, r7, #4
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _080F7F80  @ =gUnknown_08179D8C
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080F7F84  @ =gUnknown_08179DB4
	add r3, r3, r2
	ldrh r2, [r3]
	mov r3, r10
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r6, r12
	ldrb r3, [r6]
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080F7F88  @ =gUnknown_08179E04
	add r4, r5, r4
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	sub r7, r7, #1
	cmp r7, #0
	bge _080F7EBE
	mov r0, r9
	mov r1, #12
	bl sub_080C57F8
_080F7F50:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080F7F60:
	.4byte gRam
_080F7F64:
	.4byte 0x00000F92
_080F7F68:
	.4byte 0x0000096C
_080F7F6C:
	.4byte 0x00000964
_080F7F70:
	.4byte gUnknown_08179DF0
_080F7F74:
	.4byte 0x00000969
_080F7F78:
	.4byte gUnknown_08179DDC
_080F7F7C:
	.4byte gUnknown_03003E74
_080F7F80:
	.4byte gUnknown_08179D8C
_080F7F84:
	.4byte gUnknown_08179DB4
_080F7F88:
	.4byte gUnknown_08179E04
	THUMB_FUNC_END sub_080F7E7C

