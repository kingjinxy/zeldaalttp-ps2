	THUMB_FUNC_START sub_08108E7C
sub_08108E7C: @ 0x08108E7C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _08108EBC  @ =gRam
	ldr r1, _08108EC0  @ =0x00001122
	add r0, r5, r1
	add r2, r4, r0
	mov r0, #5
	strb r0, [r2]
	ldr r3, _08108EC4  @ =0x00000D84
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _08108EC8  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r6, [r0]
	cmp r6, #0
	beq _08108ED4
	ldr r3, _08108ECC  @ =0x00000F92
	add r1, r5, r3
	add r1, r4, r1
	ldr r2, _08108ED0  @ =gUnknown_0817C298
	add r3, r3, #32
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _08108EF2
_08108EBC:
	.4byte gRam
_08108EC0:
	.4byte 0x00001122
_08108EC4:
	.4byte 0x00000D84
_08108EC8:
	.4byte 0x00000FC2
_08108ECC:
	.4byte 0x00000F92
_08108ED0:
	.4byte gUnknown_0817C298
_08108ED4:
	mov r0, #1
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #18
	bl sub_081098B0
	ldr r1, _08108EF8  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #214
	strb r1, [r0]
	ldr r3, _08108EFC  @ =0x000010C2
	add r0, r5, r3
	add r0, r4, r0
	strb r6, [r0]
_08108EF2:
	pop {r4-r6}
	pop {r0}
	bx r0
_08108EF8:
	.4byte 0x00000FF2
_08108EFC:
	.4byte 0x000010C2
	THUMB_FUNC_END sub_08108E7C

