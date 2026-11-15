	THUMB_FUNC_START sub_080EF54C
sub_080EF54C: @ 0x080EF54C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080EF6D0  @ =gRam
	ldr r1, _080EF6D4  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080EF5A0
	ldr r2, _080EF6D8  @ =0x00000FA2
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
	bl sub_080CAEC0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EF5A0
	mov r0, #234
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r3, _080EF6DC  @ =0x00001152
	add r0, r6, r3
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _080EF6E0  @ =0x00000F62
	add r0, r6, r1
	add r4, r4, r0
	mov r0, #3
	strb r0, [r4]
_080EF5A0:
	ldr r4, _080EF6D0  @ =gRam
	ldr r2, _080EF6E4  @ =gUnknown_030031F2
	add r0, r5, r2
	ldrb r1, [r0]
	add r0, r1, #0
	sub r0, r0, #32
	lsl r0, r0, #24
	cmp r0, #0
	bge _080EF5B4
	b _080EF6C0
_080EF5B4:
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _080EF5BE
	b _080EF6C0
_080EF5BE:
	ldr r3, _080EF6E8  @ =0x00001052
	add r1, r4, r3
	add r1, r5, r1
	ldr r2, _080EF6EC  @ =gUnknown_08178C04
	ldr r3, _080EF6F0  @ =0x000011F0
	add r0, r4, r3
	add r7, r5, r0
	ldrb r0, [r7]
	add r0, r0, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	sub r1, r1, r0
	mov r2, #63
	ldr r0, _080EF6F4  @ =gUnknown_08178BE0
	add r0, r5, r0
	and r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _080EF6F8  @ =gUnknown_0200EC18
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080EF6FC  @ =gUnknown_03003132
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080EF700  @ =0x00000952
	add r0, r0, r4
	mov r10, r0
	ldrh r0, [r0]
	sub r2, r2, r0
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r8, r2
	ldr r2, _080EF704  @ =gUnknown_0200ED18
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080EF708  @ =gUnknown_0200EE18
	add r1, r1, r3
	ldrb r0, [r1]
	sub r2, r2, r0
	ldr r1, _080EF70C  @ =gUnknown_03003122
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r3, _080EF710  @ =0x00000958
	add r3, r3, r4
	mov r9, r3
	ldrh r0, [r3]
	sub r2, r2, r0
	lsl r2, r2, #16
	lsr r6, r2, #16
	ldr r1, _080EF714  @ =0x00000974
	add r0, r4, r1
	mov r2, r8
	strb r2, [r0]
	ldr r3, _080EF718  @ =0x00000975
	add r0, r4, r3
	strb r6, [r0]
	mov r0, #0
	add r1, r5, #0
	bl sub_080CA538
	add r2, r0, #0
	cmp r2, #0
	blt _080EF6C0
	ldr r0, _080EF71C  @ =0x00000CA2
	add r1, r4, r0
	mov r0, #11
	strh r0, [r1]
	ldr r1, _080EF6D8  @ =0x00000FA2
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #4
	strb r1, [r0]
	ldr r3, _080EF6E4  @ =gUnknown_030031F2
	add r0, r2, r3
	mov r1, #31
	strb r1, [r0]
	ldr r3, _080EF6E0  @ =0x00000F62
	add r0, r4, r3
	add r0, r2, r0
	strb r1, [r0]
	mov r0, r10
	ldrh r1, [r0]
	add r1, r1, r8
	sub r3, r3, #128
	add r0, r4, r3
	add r0, r2, r0
	strb r1, [r0]
	ldr r3, _080EF6FC  @ =gUnknown_03003132
	add r0, r2, r3
	lsr r1, r1, #8
	strb r1, [r0]
	mov r0, r9
	ldrh r1, [r0]
	add r1, r6, r1
	ldr r3, _080EF720  @ =0x00000ED2
	add r0, r4, r3
	add r0, r2, r0
	strb r1, [r0]
	ldr r3, _080EF70C  @ =gUnknown_03003122
	add r0, r2, r3
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080EF724  @ =0x00001012
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #3
	strb r1, [r0]
	ldr r3, _080EF728  @ =0x00001122
	add r0, r4, r3
	add r0, r2, r0
	mov r1, #12
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #41
	bl sub_080CF0AC
	ldrb r1, [r7]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080EF6C0
	sub r0, r1, #1
	strb r0, [r7]
_080EF6C0:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EF6D0:
	.4byte gRam
_080EF6D4:
	.4byte 0x00000FC2
_080EF6D8:
	.4byte 0x00000FA2
_080EF6DC:
	.4byte 0x00001152
_080EF6E0:
	.4byte 0x00000F62
_080EF6E4:
	.4byte gUnknown_030031F2
_080EF6E8:
	.4byte 0x00001052
_080EF6EC:
	.4byte gUnknown_08178C04
_080EF6F0:
	.4byte 0x000011F0
_080EF6F4:
	.4byte gUnknown_08178BE0
_080EF6F8:
	.4byte gUnknown_0200EC18
_080EF6FC:
	.4byte gUnknown_03003132
_080EF700:
	.4byte 0x00000952
_080EF704:
	.4byte gUnknown_0200ED18
_080EF708:
	.4byte gUnknown_0200EE18
_080EF70C:
	.4byte gUnknown_03003122
_080EF710:
	.4byte 0x00000958
_080EF714:
	.4byte 0x00000974
_080EF718:
	.4byte 0x00000975
_080EF71C:
	.4byte 0x00000CA2
_080EF720:
	.4byte 0x00000ED2
_080EF724:
	.4byte 0x00001012
_080EF728:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080EF54C

