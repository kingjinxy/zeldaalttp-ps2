	THUMB_FUNC_START sub_08104B3C
sub_08104B3C: @ 0x08104B3C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r5, r1, #0
	ldr r4, _08104B90  @ =gRam
	ldr r2, _08104B94  @ =0x00000FC2
	add r0, r4, r2
	add r0, r1, r0
	ldrb r0, [r0]
	sub r0, r0, #64
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _08104B5E
	add r0, r1, #0
	bl sub_080DBD34
_08104B5E:
	ldr r1, _08104B98  @ =0x00000F92
	add r0, r4, r1
	add r6, r5, r0
	mov r0, #0
	strb r0, [r6]
	add r0, r5, #0
	bl sub_080C36D8
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _08104B9C  @ =0x0000097D
	add r0, r4, r2
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bls _08104B8A
	ldr r0, _08104BA0  @ =gUnknown_0817BCC6
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r6]
_08104B8A:
	pop {r4-r6}
	pop {r0}
	bx r0
_08104B90:
	.4byte gRam
_08104B94:
	.4byte 0x00000FC2
_08104B98:
	.4byte 0x00000F92
_08104B9C:
	.4byte 0x0000097D
_08104BA0:
	.4byte gUnknown_0817BCC6
	THUMB_FUNC_END sub_08104B3C

