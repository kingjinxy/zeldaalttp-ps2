	THUMB_FUNC_START sub_08100584
sub_08100584: @ 0x08100584
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _081005B0  @ =gRam
	ldr r1, _081005B4  @ =0x00000FE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	beq _081005C0
	ldr r2, _081005B8  @ =0x00000F92
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _081005BC  @ =gUnknown_0817ADEC
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _08100608
	.byte 0x00
	.byte 0x00
_081005B0:
	.4byte gRam
_081005B4:
	.4byte 0x00000FE2
_081005B8:
	.4byte 0x00000F92
_081005BC:
	.4byte gUnknown_0817ADEC
_081005C0:
	ldr r1, _08100610  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r2, _08100614  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
	ldr r0, _08100618  @ =0x00000FB2
	add r1, r5, r0
	add r1, r4, r1
	sub r2, r2, #240
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #7
	add r0, r0, #2
	strb r0, [r1]
	ldr r0, _0810061C  @ =0x000010A2
	add r1, r5, r0
	add r1, r4, r1
	add r2, r2, #16
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #7
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C351C
	ldr r1, _08100620  @ =0x00001172
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
_08100608:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08100610:
	.4byte 0x00000F82
_08100614:
	.4byte 0x00000FC2
_08100618:
	.4byte 0x00000FB2
_0810061C:
	.4byte 0x000010A2
_08100620:
	.4byte 0x00001172
	THUMB_FUNC_END sub_08100584

