	THUMB_FUNC_START sub_080F6F14
sub_080F6F14: @ 0x080F6F14
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #8]
	mov r0, #0
	mov r8, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	ldr r2, [sp, #8]
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F6FC0
	ldr r0, _080F6F54  @ =gRam
	ldr r1, _080F6F58  @ =0x00000FB2
	add r0, r0, r1
	ldr r3, [sp, #8]
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #31
	bls _080F6F5C
	mov r0, #12
	bl sub_080CF3A0
	b _080F6F66
_080F6F54:
	.4byte gRam
_080F6F58:
	.4byte 0x00000FB2
_080F6F5C:
	mov r0, #12
	bl sub_080CF388
	mov r7, #1
	mov r8, r7
_080F6F66:
	mov r4, #1
	ldr r6, _080F6FD0  @ =gRam
	ldr r0, _080F6FD4  @ =0x00000969
	add r0, r0, r6
	mov r10, r0
	ldr r1, _080F6FD8  @ =0x00000964
	add r1, r1, r6
	mov r9, r1
_080F6F76:
	ldr r1, _080F6FDC  @ =gUnknown_08179B90
	lsl r0, r4, #1
	add r0, r0, r1
	ldrh r2, [r0]
	mov r3, r9
	ldrh r3, [r3]
	add r2, r2, r3
	ldr r0, _080F6FE0  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r8
	sub r5, r4, #1
	sub r0, r0, r5
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r7, #150
	lsl r7, r7, #4
	add r1, r6, r7
	ldrh r1, [r1]
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080F6FE4  @ =gUnknown_08179B94
	add r3, r4, r3
	ldrb r3, [r3]
	mov r7, r10
	ldrb r4, [r7]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	add r4, r5, #0
	cmp r4, #0
	bge _080F6F76
	ldr r0, [sp, #8]
	bl sub_080F6FE8
_080F6FC0:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080F6FD0:
	.4byte gRam
_080F6FD4:
	.4byte 0x00000969
_080F6FD8:
	.4byte 0x00000964
_080F6FDC:
	.4byte gUnknown_08179B90
_080F6FE0:
	.4byte gUnknown_03003E74
_080F6FE4:
	.4byte gUnknown_08179B94
	THUMB_FUNC_END sub_080F6F14

