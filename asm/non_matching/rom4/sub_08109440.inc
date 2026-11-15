	THUMB_FUNC_START sub_08109440
sub_08109440: @ 0x08109440
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	ldr r6, _08109488  @ =gRam
	ldr r0, _0810948C  @ =0x00001172
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	mov r4, #0
	strb r0, [r1]
	add r0, r5, #0
	bl sub_0810A70C
	ldr r1, _08109490  @ =0x000010A2
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
	sub r1, r1, #224
	add r0, r6, r1
	add r4, r5, r0
	ldrb r1, [r4]
	cmp r1, #0
	beq _08109498
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _081094C0
	ldr r1, _08109494  @ =0x00000F92
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	b _081094C0
	.byte 0x00
	.byte 0x00
_08109488:
	.4byte gRam
_0810948C:
	.4byte 0x00001172
_08109490:
	.4byte 0x000010A2
_08109494:
	.4byte 0x00000F92
_08109498:
	bl GetRandomInt
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	bne _081094B8
	mov r0, #127
	strb r0, [r4]
	ldr r1, _081094B4  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #12
	strb r1, [r0]
	b _081094C0
_081094B4:
	.4byte 0x00000F52
_081094B8:
	add r0, r7, #0
	mov r1, #13
	bl sub_081098B0
_081094C0:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08109440

	.byte 0x00
	.byte 0x00
