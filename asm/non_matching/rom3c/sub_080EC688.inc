	THUMB_FUNC_START sub_080EC688
sub_080EC688: @ 0x080EC688
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	mov r0, #165
	mov r1, r10
	bl sub_080CA538
	add r7, r0, #0
	cmp r7, #0
	bge _080EC6AA
	b _080EC7B0
_080EC6AA:
	ldr r3, _080EC7C4  @ =gRam
	ldr r1, _080EC7C8  @ =0x00000FB2
	add r0, r3, r1
	add r0, r0, r10
	ldrb r6, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	ldr r0, _080EC7CC  @ =gUnknown_08178430
	add r0, r6, r0
	ldrb r0, [r0]
	ldrh r5, [r1]
	add r5, r5, r0
	ldr r0, _080EC7D0  @ =gUnknown_08178434
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r5, r5, r0
	lsl r5, r5, #16
	lsr r0, r5, #16
	mov r9, r0
	add r4, r4, #4
	add r1, r3, r4
	ldr r0, _080EC7D4  @ =gUnknown_08178438
	add r0, r6, r0
	ldrb r0, [r0]
	ldrh r4, [r1]
	add r4, r4, r0
	ldr r0, _080EC7D8  @ =gUnknown_0817843C
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r4, r4, r0
	lsl r4, r4, #16
	lsr r0, r4, #16
	mov r8, r0
	mov r0, r10
	mov r1, #99
	str r3, [sp]
	bl sub_080CF140
	lsl r0, r7, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r3, [sp]
	ldr r1, _080EC7DC  @ =0x00000EE2
	add r0, r3, r1
	add r0, r7, r0
	mov r1, r9
	strb r1, [r0]
	ldr r1, _080EC7E0  @ =0x00000F02
	add r0, r3, r1
	add r0, r7, r0
	lsr r5, r5, #24
	strb r5, [r0]
	sub r1, r1, #48
	add r0, r3, r1
	add r0, r7, r0
	mov r1, r8
	strb r1, [r0]
	ldr r1, _080EC7E4  @ =0x00000EF2
	add r0, r3, r1
	add r0, r7, r0
	lsr r4, r4, #24
	strb r4, [r0]
	ldr r4, _080EC7E8  @ =0x00000F22
	add r1, r3, r4
	add r1, r7, r1
	ldr r0, _080EC7EC  @ =gUnknown_08178428
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EC7F0  @ =0x00000F12
	add r1, r3, r0
	add r1, r7, r1
	ldr r0, _080EC7F4  @ =gUnknown_0817842C
	add r6, r6, r0
	ldrb r0, [r6]
	strb r0, [r1]
	ldr r4, _080EC7F8  @ =0x00001032
	add r1, r3, r4
	add r1, r7, r1
	ldrb r2, [r1]
	mov r0, #64
	orr r0, r0, r2
	strb r0, [r1]
	ldr r1, _080EC7FC  @ =0x00000E75
	add r0, r3, r1
	add r0, r7, r0
	mov r1, #64
	strb r1, [r0]
	sub r4, r4, #32
	add r2, r3, r4
	add r2, r7, r2
	mov r1, #33
	strb r1, [r2]
	sub r4, r4, #160
	add r0, r3, r4
	add r0, r7, r0
	strb r1, [r0]
	ldr r1, _080EC800  @ =0x00001122
	add r0, r3, r1
	add r0, r7, r0
	mov r1, #2
	strb r1, [r0]
	ldr r4, _080EC804  @ =0x00001132
	add r0, r3, r4
	add r0, r7, r0
	mov r1, #20
	strb r1, [r0]
	add r4, r4, #64
	add r0, r3, r4
	add r0, r7, r0
	strb r1, [r0]
	ldr r1, _080EC808  @ =0x00000EA5
	add r0, r3, r1
	add r0, r7, r0
	mov r1, #37
	strb r1, [r0]
	mov r0, #1
	strb r0, [r2]
	ldr r0, _080EC80C  @ =gShield
	ldrb r0, [r0]
	cmp r0, #2
	bls _080EC7B0
	add r4, r4, #64
	add r0, r3, r4
	add r0, r7, r0
	mov r1, #32
	strb r1, [r0]
_080EC7B0:
	add r0, r7, #0
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080EC7C4:
	.4byte gRam
_080EC7C8:
	.4byte 0x00000FB2
_080EC7CC:
	.4byte gUnknown_08178430
_080EC7D0:
	.4byte gUnknown_08178434
_080EC7D4:
	.4byte gUnknown_08178438
_080EC7D8:
	.4byte gUnknown_0817843C
_080EC7DC:
	.4byte 0x00000EE2
_080EC7E0:
	.4byte 0x00000F02
_080EC7E4:
	.4byte 0x00000EF2
_080EC7E8:
	.4byte 0x00000F22
_080EC7EC:
	.4byte gUnknown_08178428
_080EC7F0:
	.4byte 0x00000F12
_080EC7F4:
	.4byte gUnknown_0817842C
_080EC7F8:
	.4byte 0x00001032
_080EC7FC:
	.4byte 0x00000E75
_080EC800:
	.4byte 0x00001122
_080EC804:
	.4byte 0x00001132
_080EC808:
	.4byte 0x00000EA5
_080EC80C:
	.4byte gShield
	THUMB_FUNC_END sub_080EC688

