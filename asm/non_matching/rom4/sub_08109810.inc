	THUMB_FUNC_START sub_08109810
sub_08109810: @ 0x08109810
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	ldr r4, _08109874  @ =gRam
	ldr r1, _08109878  @ =0x00001022
	add r0, r4, r1
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #208
	bhi _0810982A
	mov r0, #208
	strb r0, [r1]
_0810982A:
	ldr r1, _0810987C  @ =0x00000FC2
	add r0, r4, r1
	add r2, r3, r0
	ldrb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08109890
	lsr r2, r0, #26
	mov r0, #7
	and r2, r2, r0
	sub r1, r1, #16
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08109850
	add r0, r2, #0
	add r0, r0, #8
	add r2, r0, #0
_08109850:
	ldr r0, _08109880  @ =0x000010A2
	add r1, r4, r0
	add r1, r3, r1
	ldr r0, _08109884  @ =gUnknown_0817C2FE
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08109888  @ =0x00000F92
	add r1, r4, r0
	add r1, r3, r1
	ldr r0, _0810988C  @ =gUnknown_0817C30E
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r3, #0
	bl sub_0810A48C
	b _081098A4
_08109874:
	.4byte gRam
_08109878:
	.4byte 0x00001022
_0810987C:
	.4byte 0x00000FC2
_08109880:
	.4byte 0x000010A2
_08109884:
	.4byte gUnknown_0817C2FE
_08109888:
	.4byte 0x00000F92
_0810988C:
	.4byte gUnknown_0817C30E
_08109890:
	ldr r1, _081098AC  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #6
	strb r1, [r0]
	mov r0, #127
	strb r0, [r2]
	add r0, r5, #0
	bl sub_0810A70C
_081098A4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081098AC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08109810

