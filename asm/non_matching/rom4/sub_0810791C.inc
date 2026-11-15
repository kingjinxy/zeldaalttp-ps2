	THUMB_FUNC_START sub_0810791C
sub_0810791C: @ 0x0810791C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r2, _081079B4  @ =gRam
	ldr r1, _081079B8  @ =0x00000FC2
	add r0, r2, r1
	add r0, r0, r7
	mov r10, r0
	ldrb r3, [r0]
	mov r9, r3
	cmp r3, #0
	bne _08107A04
	add r1, r1, #64
	add r0, r2, r1
	add r0, r0, r7
	mov r8, r0
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	mov r3, #150
	lsl r3, r3, #4
	add r4, r2, r3
	strb r0, [r4]
	str r2, [sp]
	bl GetRandomInt
	mov r5, #3
	and r5, r5, r0
	add r6, r5, #0
	mov r0, #0
	ldrsb r0, [r4, r0]
	ldr r2, [sp]
	cmp r5, r0
	beq _08107A04
	ldr r1, _081079BC  @ =0x00001092
	add r0, r2, r1
	add r1, r7, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _0810798E
	ldr r3, _081079C0  @ =0x00000ED2
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _081079F0
_0810798E:
	ldr r1, _081079C4  @ =gUnknown_02010990
	ldr r0, _081079C8  @ =gUnknown_0817BFEC
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	ldr r0, _081079CC  @ =gUnknown_0817BFF0
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	cmp r1, #1
	bne _081079D0
	mov r0, r8
	strb r5, [r0]
	b _081079D8
_081079B4:
	.4byte gRam
_081079B8:
	.4byte 0x00000FC2
_081079BC:
	.4byte 0x00001092
_081079C0:
	.4byte 0x00000ED2
_081079C4:
	.4byte gUnknown_02010990
_081079C8:
	.4byte gUnknown_0817BFEC
_081079CC:
	.4byte gUnknown_0817BFF0
_081079D0:
	mov r0, #128
	orr r6, r6, r0
	mov r1, r8
	strb r6, [r1]
_081079D8:
	ldr r1, _081079E8  @ =gRam
	ldr r3, _081079EC  @ =0x00000F52
	add r1, r1, r3
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _08107A04
_081079E8:
	.4byte gRam
_081079EC:
	.4byte 0x00000F52
_081079F0:
	mov r0, r9
	strb r0, [r1]
	ldr r1, _08107A14  @ =0x00000F52
	add r0, r2, r1
	add r0, r7, r0
	mov r1, #2
	strb r1, [r0]
	mov r0, #80
	mov r3, r10
	strb r0, [r3]
_08107A04:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08107A14:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810791C

