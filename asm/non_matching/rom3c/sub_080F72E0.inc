	THUMB_FUNC_START sub_080F72E0
sub_080F72E0: @ 0x080F72E0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
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
	bne _080F73A8
	mov r7, #31
	ldr r1, _080F73B8  @ =gUnknown_08179B8C
	ldr r2, _080F73BC  @ =gRam
	ldr r3, _080F73C0  @ =0x00000F92
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	add r0, r0, #31
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r6, r2, #0
	mov r4, #150
	lsl r4, r4, #4
	add r4, r4, r6
	mov r9, r4
	ldr r0, _080F73C4  @ =0x00000964
	add r0, r0, r6
	mov r8, r0
	ldr r1, _080F73C8  @ =0x00000969
	add r1, r1, r6
	mov r10, r1
_080F7330:
	ldr r2, _080F73CC  @ =gUnknown_0200EE18
	add r0, r5, r2
	ldrb r0, [r0]
	mov r3, r9
	strb r0, [r3]
	ldr r4, _080F73D0  @ =gUnknown_0200EE98
	add r0, r5, r4
	ldrb r1, [r0]
	ldr r2, _080F73D4  @ =0x00000961
	add r0, r6, r2
	strb r1, [r0]
	ldr r3, _080F73D8  @ =gUnknown_0200EF18
	add r0, r5, r3
	ldrb r0, [r0]
	mov r4, r8
	strb r0, [r4]
	ldr r1, _080F73DC  @ =gUnknown_0200EF98
	add r0, r5, r1
	ldrb r1, [r0]
	add r2, r2, #4
	add r0, r6, r2
	strb r1, [r0]
	ldr r0, _080F73E0  @ =gUnknown_03003E74
	add r1, r7, #0
	sub r1, r1, #31
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _080F73E4  @ =0x00000952
	add r2, r6, r3
	mov r4, r9
	ldrh r1, [r4]
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080F73E8  @ =0x00000958
	add r3, r6, r2
	mov r4, r8
	ldrh r2, [r4]
	ldrh r3, [r3]
	sub r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r4, r10
	ldrb r3, [r4]
	lsl r3, r3, #8
	mov r4, #60
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	sub r7, r7, #1
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r7, #0
	bge _080F7330
_080F73A8:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080F73B8:
	.4byte gUnknown_08179B8C
_080F73BC:
	.4byte gRam
_080F73C0:
	.4byte 0x00000F92
_080F73C4:
	.4byte 0x00000964
_080F73C8:
	.4byte 0x00000969
_080F73CC:
	.4byte gUnknown_0200EE18
_080F73D0:
	.4byte gUnknown_0200EE98
_080F73D4:
	.4byte 0x00000961
_080F73D8:
	.4byte gUnknown_0200EF18
_080F73DC:
	.4byte gUnknown_0200EF98
_080F73E0:
	.4byte gUnknown_03003E74
_080F73E4:
	.4byte 0x00000952
_080F73E8:
	.4byte 0x00000958
	THUMB_FUNC_END sub_080F72E0

