	THUMB_FUNC_START sub_080EB69C
sub_080EB69C: @ 0x080EB69C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r7, #1
	neg r7, r7
	ldr r5, _080EB6D0  @ =gRam
	ldr r2, _080EB6D4  @ =0x00000FC2
	add r0, r5, r2
	add r4, r6, r0
	ldrb r3, [r4]
	mov r12, r5
	cmp r3, #0
	bne _080EB6B8
	b _080EB7DC
_080EB6B8:
	cmp r3, #32
	beq _080EB6FC
	ldr r4, _080EB6D8  @ =0x00000FB2
	add r0, r5, r4
	add r0, r6, r0
	ldrb r2, [r0]
	cmp r3, #31
	bls _080EB6DC
	cmp r1, #0
	beq _080EB6E2
	mov r2, #8
	b _080EB6E2
_080EB6D0:
	.4byte gRam
_080EB6D4:
	.4byte 0x00000FC2
_080EB6D8:
	.4byte 0x00000FB2
_080EB6DC:
	add r0, r2, #4
	lsl r0, r0, #24
	lsr r2, r0, #24
_080EB6E2:
	ldr r0, _080EB6F4  @ =0x00000F92
	add r0, r0, r12
	add r0, r6, r0
	ldr r1, _080EB6F8  @ =gUnknown_08178078
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r0]
	b _080EB7E8
	.byte 0x00
	.byte 0x00
_080EB6F4:
	.4byte 0x00000F92
_080EB6F8:
	.4byte gUnknown_08178078
_080EB6FC:
	mov r0, #74
	add r1, r6, #0
	bl sub_080CA538
	add r7, r0, #0
	cmp r7, #0
	bge _080EB710
	ldrb r0, [r4]
	add r0, r0, #1
	b _080EB7E6
_080EB710:
	lsl r0, r7, #24
	lsr r0, r0, #24
	bl sub_080C2914
	ldr r1, _080EB7A8  @ =0x00000FD2
	add r0, r5, r1
	add r0, r7, r0
	mov r1, #64
	strb r1, [r0]
	ldr r2, _080EB7AC  @ =0x00000FB2
	add r0, r5, r2
	add r0, r6, r0
	ldrb r3, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r5, r4
	ldr r0, _080EB7B0  @ =gUnknown_08178081
	add r0, r3, r0
	ldrb r0, [r0]
	ldrh r2, [r1]
	add r2, r2, r0
	ldr r0, _080EB7B4  @ =gUnknown_08178085
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080EB7B8  @ =0x00000964
	add r1, r5, r0
	ldr r0, _080EB7BC  @ =gUnknown_08178089
	add r0, r3, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080EB7C0  @ =gUnknown_0817808D
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r4, _080EB7C4  @ =0x00000EE2
	add r0, r5, r4
	add r0, r7, r0
	strb r2, [r0]
	add r4, r4, #32
	add r0, r5, r4
	add r0, r7, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080EB7C8  @ =0x00000ED2
	add r0, r5, r2
	add r0, r7, r0
	strb r1, [r0]
	sub r4, r4, #16
	add r0, r5, r4
	add r0, r7, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080EB7CC  @ =0x00000F22
	add r1, r5, r0
	add r1, r7, r1
	ldr r0, _080EB7D0  @ =gUnknown_08178091
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r2, r2, #64
	add r1, r5, r2
	add r1, r7, r1
	ldr r0, _080EB7D4  @ =gUnknown_08178095
	add r3, r3, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r4, _080EB7D8  @ =0x00001152
	add r0, r5, r4
	add r0, r7, r0
	mov r1, #40
	strb r1, [r0]
	b _080EB7E8
_080EB7A8:
	.4byte 0x00000FD2
_080EB7AC:
	.4byte 0x00000FB2
_080EB7B0:
	.4byte gUnknown_08178081
_080EB7B4:
	.4byte gUnknown_08178085
_080EB7B8:
	.4byte 0x00000964
_080EB7BC:
	.4byte gUnknown_08178089
_080EB7C0:
	.4byte gUnknown_0817808D
_080EB7C4:
	.4byte 0x00000EE2
_080EB7C8:
	.4byte 0x00000ED2
_080EB7CC:
	.4byte 0x00000F22
_080EB7D0:
	.4byte gUnknown_08178091
_080EB7D4:
	.4byte gUnknown_08178095
_080EB7D8:
	.4byte 0x00001152
_080EB7DC:
	ldr r1, _080EB7F0  @ =0x00000F52
	add r0, r5, r1
	add r0, r6, r0
	strb r3, [r0]
	mov r0, #2
_080EB7E6:
	strb r0, [r4]
_080EB7E8:
	add r0, r7, #0
	pop {r4-r7}
	pop {r1}
	bx r1
_080EB7F0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EB69C

