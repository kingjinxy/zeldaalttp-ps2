	THUMB_FUNC_START sub_08104AC4
sub_08104AC4: @ 0x08104AC4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _08104AEC  @ =gRam
	ldr r1, _08104AF0  @ =0x00001072
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #0
	strb r1, [r0]
	ldr r5, _08104AF4  @ =0x00000FC2
	add r0, r4, r5
	add r0, r3, r0
	ldrb r2, [r0]
	cmp r2, #0
	beq _08104AF8
	add r0, r3, #0
	bl sub_08104B3C
	b _08104B20
	.byte 0x00
	.byte 0x00
_08104AEC:
	.4byte gRam
_08104AF0:
	.4byte 0x00001072
_08104AF4:
	.4byte 0x00000FC2
_08104AF8:
	ldr r1, _08104B28  @ =0x000010E2
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #16
	strb r1, [r0]
	ldr r5, _08104B2C  @ =0x00000F52
	add r0, r4, r5
	add r0, r3, r0
	strb r2, [r0]
	ldr r0, _08104B30  @ =0x00000F62
	add r1, r4, r0
	add r1, r3, r1
	ldr r2, _08104B34  @ =gUnknown_0817BCBC
	ldr r5, _08104B38  @ =0x000010A2
	add r0, r4, r5
	add r0, r3, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_08104B20:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08104B28:
	.4byte 0x000010E2
_08104B2C:
	.4byte 0x00000F52
_08104B30:
	.4byte 0x00000F62
_08104B34:
	.4byte gUnknown_0817BCBC
_08104B38:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_08104AC4

