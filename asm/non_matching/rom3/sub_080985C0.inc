	THUMB_FUNC_START sub_080985C0
sub_080985C0: @ 0x080985C0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	mov r2, sp
	ldr r1, _080986A0  @ =gRam
	mov r3, #151
	lsl r3, r3, #4
	add r0, r1, r3
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r4, _080986A4  @ =0x00000971
	add r0, r1, r4
	ldrb r0, [r0]
	strb r0, [r2, #1]
	add r3, r3, #4
	add r0, r1, r3
	ldrb r0, [r0]
	strb r0, [r2, #2]
	add r4, r4, #4
	add r0, r1, r4
	ldrb r0, [r0]
	strb r0, [r2, #3]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r1, r2
	ldrb r2, [r0]
	sub r3, r3, #20
	add r0, r1, r3
	strb r2, [r0]
	ldr r4, _080986A8  @ =0x000016EC
	add r0, r1, r4
	strb r2, [r0]
	ldr r2, _080986AC  @ =0x000016C4
	add r0, r1, r2
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	add r4, r4, #4
	add r0, r1, r4
	strb r2, [r0]
	ldr r2, _080986B0  @ =0x000016C1
	add r0, r1, r2
	ldrb r2, [r0]
	add r3, r3, #3
	add r0, r1, r3
	strb r2, [r0]
	sub r4, r4, #3
	add r0, r1, r4
	strb r2, [r0]
	ldr r2, _080986B4  @ =0x000016C5
	add r0, r1, r2
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	add r4, r4, #4
	add r0, r1, r4
	strb r2, [r0]
	mov r0, #1
	mov r12, r0
	mov r7, #2
	mov r10, r1
	mov r1, #182
	lsl r1, r1, #5
	add r1, r1, r10
	mov r9, r1
	ldr r2, _080986AC  @ =0x000016C4
	add r2, r2, r10
	mov r8, r2
_08098652:
	mov r4, sp
	add r3, r4, r7
	ldrb r1, [r3]
	ldr r2, _080986B8  @ =gUnknown_03003900
	add r2, r2, r12
	ldrb r0, [r2]
	add r1, r1, r0
	add r0, r1, #0
	mov r4, #255
	lsl r4, r4, #8
	and r0, r0, r4
	lsl r0, r0, #16
	lsr r0, r0, #16
	neg r0, r0
	lsr r4, r0, #31
	strb r1, [r2]
	add r1, r7, #1
	mov r2, sp
	add r0, r2, r1
	ldrb r2, [r0]
	mov r0, #0
	add r5, r3, #0
	add r6, r1, #0
	cmp r2, #7
	bls _0809868A
	mov r0, #240
	orr r2, r2, r0
	mov r0, #255
_0809868A:
	cmp r7, #0
	bne _080986BC
	lsl r1, r0, #8
	add r1, r1, r2
	add r1, r1, r4
	mov r3, r9
	ldrh r0, [r3]
	add r0, r0, r1
	strh r0, [r3]
	b _080986CA
	.byte 0x00
	.byte 0x00
_080986A0:
	.4byte gRam
_080986A4:
	.4byte 0x00000971
_080986A8:
	.4byte 0x000016EC
_080986AC:
	.4byte 0x000016C4
_080986B0:
	.4byte 0x000016C1
_080986B4:
	.4byte 0x000016C5
_080986B8:
	.4byte gUnknown_03003900
_080986BC:
	lsl r1, r0, #8
	add r1, r1, r2
	add r1, r1, r4
	mov r4, r8
	ldrh r0, [r4]
	add r0, r0, r1
	strh r0, [r4]
_080986CA:
	ldrb r0, [r5]
	lsr r3, r0, #4
	strb r3, [r5]
	mov r1, sp
	add r0, r1, r6
	ldrb r2, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080986E6
	neg r0, r2
	lsl r0, r0, #24
	lsr r2, r0, #24
_080986E6:
	ldr r1, _0809875C  @ =gUnknown_030038FD
	add r1, r1, r12
	lsl r0, r2, #4
	orr r3, r3, r0
	strb r3, [r1]
	mov r0, r12
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	sub r0, r7, #2
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r0, #0
	bge _08098652
	mov r2, r10
	ldr r3, _08098760  @ =0x00000B14
	add r0, r2, r3
	ldrh r0, [r0]
	cmp r0, #4
	bne _0809873A
	ldr r4, _08098764  @ =0x0000172A
	add r1, r2, r4
	mov r0, #0
	strb r0, [r1]
	mov r0, #182
	lsl r0, r0, #5
	add r1, r2, r0
	ldr r3, _08098768  @ =0x0000179A
	add r0, r2, r3
	ldrh r0, [r0]
	ldrh r4, [r1]
	add r0, r0, r4
	strh r0, [r1]
	ldr r0, _0809876C  @ =0x000016C4
	add r1, r2, r0
	add r3, r3, #2
	add r0, r2, r3
	ldrh r0, [r0]
	ldrh r4, [r1]
	add r0, r0, r4
	strh r0, [r1]
_0809873A:
	ldr r0, _08098770  @ =0x00001728
	add r0, r0, r10
	mov r1, #0
	strb r1, [r0]
	ldr r0, _08098774  @ =0x00001729
	add r0, r0, r10
	strb r1, [r0]
	bl sub_08097548
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0809875C:
	.4byte gUnknown_030038FD
_08098760:
	.4byte 0x00000B14
_08098764:
	.4byte 0x0000172A
_08098768:
	.4byte 0x0000179A
_0809876C:
	.4byte 0x000016C4
_08098770:
	.4byte 0x00001728
_08098774:
	.4byte 0x00001729
	THUMB_FUNC_END sub_080985C0

