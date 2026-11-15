	THUMB_FUNC_START sub_080FC868
sub_080FC868: @ 0x080FC868
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r4, _080FC9B0  @ =gUnknown_03003E74
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	ldr r5, _080FC9B4  @ =gRam
	ldr r1, _080FC9B8  @ =0x00000F82
	add r0, r5, r1
	mov r2, r8
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #2
	bls _080FC894
	b _080FC9FA
_080FC894:
	add r1, r0, #0
	lsl r1, r1, #6
	ldr r0, _080FC9BC  @ =gUnknown_0817A7E8
	add r1, r1, r0
	mov r0, r8
	mov r2, #8
	bl sub_080C9480
	ldrh r0, [r4]
	add r0, r0, #8
	strh r0, [r4]
	ldr r1, _080FC9C0  @ =0x000010E2
	add r0, r5, r1
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FC8B8
	b _080FC9FA
_080FC8B8:
	mov r1, #1
	add r3, r5, #0
	ldr r2, _080FC9C4  @ =0x000015F2
	add r2, r2, r5
	mov r10, r2
_080FC8C2:
	lsl r0, r1, #24
	asr r4, r0, #24
	ldr r2, _080FC9C8  @ =0x00000E15
	add r1, r5, r2
	add r1, r4, r1
	ldrb r1, [r1]
	add r2, r0, #0
	cmp r1, #7
	beq _080FC8D6
	b _080FC9EC
_080FC8D6:
	ldr r1, _080FC9CC  @ =0x00000DF7
	add r0, r3, r1
	add r6, r4, r0
	sub r1, r1, #10
	add r0, r3, r1
	add r7, r4, r0
	ldrb r1, [r6]
	ldrb r0, [r7]
	orr r0, r0, r1
	cmp r0, #0
	bne _080FC8EE
	b _080FC9EC
_080FC8EE:
	mov r0, r8
	bl sub_080C4574
	ldr r2, _080FC9D0  @ =0x00000DCF
	add r0, r5, r2
	add r0, r0, r4
	mov r9, r0
	ldrb r1, [r0]
	add r2, r2, #20
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #6
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	lsr r1, r1, #8
	add r2, r2, #16
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080FC9D4  @ =0x00000DC5
	add r0, r5, r1
	add r3, r4, r0
	ldrb r1, [r3]
	ldr r2, _080FC9D8  @ =0x00000DD9
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _080FC9DC  @ =0x00000A92
	add r0, r5, r2
	add r4, r4, r0
	ldrb r0, [r4]
	sub r1, r1, r0
	ldr r2, _080FC9E0  @ =0x00000961
	add r0, r5, r2
	strb r1, [r0]
	lsr r1, r1, #8
	add r2, r2, #16
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _080FC9E4  @ =0x00000964
	add r1, r5, r0
	mov r0, #2
	strb r0, [r1]
	sub r2, r2, #12
	add r1, r5, r2
	mov r0, #15
	strb r0, [r1]
	str r3, [sp]
	bl sub_080C466C
	lsl r0, r0, #24
	ldr r3, [sp]
	cmp r0, #0
	beq _080FC9FA
	ldrb r0, [r6]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r6]
	ldrb r0, [r7]
	mvn r0, r0
	add r0, r0, #1
	lsl r2, r0, #24
	lsr r2, r2, #25
	mov r1, #128
	and r0, r0, r1
	orr r2, r2, r0
	strb r2, [r7]
	ldr r1, _080FC9C0  @ =0x000010E2
	add r0, r5, r1
	add r0, r0, r8
	mov r1, #32
	strb r1, [r0]
	ldr r2, _080FC9E8  @ =0x000015F0
	add r1, r5, r2
	mov r0, #5
	strb r0, [r1]
	mov r0, r9
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	ldrb r0, [r3]
	ldrb r1, [r4]
	sub r0, r0, r1
	mov r1, r10
	strb r0, [r1]
	mov r0, #113
	mov r1, #0
	bl sub_0812A324
	b _080FC9FA
_080FC9B0:
	.4byte gUnknown_03003E74
_080FC9B4:
	.4byte gRam
_080FC9B8:
	.4byte 0x00000F82
_080FC9BC:
	.4byte gUnknown_0817A7E8
_080FC9C0:
	.4byte 0x000010E2
_080FC9C4:
	.4byte 0x000015F2
_080FC9C8:
	.4byte 0x00000E15
_080FC9CC:
	.4byte 0x00000DF7
_080FC9D0:
	.4byte 0x00000DCF
_080FC9D4:
	.4byte 0x00000DC5
_080FC9D8:
	.4byte 0x00000DD9
_080FC9DC:
	.4byte 0x00000A92
_080FC9E0:
	.4byte 0x00000961
_080FC9E4:
	.4byte 0x00000964
_080FC9E8:
	.4byte 0x000015F0
_080FC9EC:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r2, r1
	lsr r1, r0, #24
	cmp r0, #0
	blt _080FC9FA
	b _080FC8C2
_080FC9FA:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080FC868

	.byte 0x00
	.byte 0x00
