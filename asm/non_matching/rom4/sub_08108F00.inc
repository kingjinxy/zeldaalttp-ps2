	THUMB_FUNC_START sub_08108F00
sub_08108F00: @ 0x08108F00
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _08108F78  @ =gRam
	ldr r1, _08108F7C  @ =0x00000F92
	add r0, r2, r1
	add r6, r4, r0
	ldr r1, _08108F80  @ =gUnknown_0817C29A
	ldr r3, _08108F84  @ =0x00000FB2
	add r0, r2, r3
	add r7, r4, r0
	ldrb r0, [r7]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r6]
	ldr r1, _08108F88  @ =0x00000FC2
	add r0, r2, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _08108F94
	cmp r0, #52
	bne _08108F3A
	add r0, r4, #0
	str r2, [sp]
	bl sub_0810A518
	ldr r2, [sp]
_08108F3A:
	ldrb r0, [r5]
	cmp r0, #51
	bhi _08108F4A
	ldr r0, _08108F8C  @ =gUnknown_0817C29C
	ldrb r1, [r7]
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r6]
_08108F4A:
	ldrb r0, [r5]
	sub r0, r0, #40
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bls _08108F70
	ldr r3, _08108F90  @ =0x00001172
	add r1, r2, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r1, [r5]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08108F70
	mov r0, #255
	strb r0, [r6]
_08108F70:
	add r0, r4, #0
	bl sub_0810A4B8
	b _08108F9C
_08108F78:
	.4byte gRam
_08108F7C:
	.4byte 0x00000F92
_08108F80:
	.4byte gUnknown_0817C29A
_08108F84:
	.4byte 0x00000FB2
_08108F88:
	.4byte 0x00000FC2
_08108F8C:
	.4byte gUnknown_0817C29C
_08108F90:
	.4byte 0x00001172
_08108F94:
	add r0, r4, #0
	mov r1, #18
	bl sub_081098B0
_08108F9C:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08108F00

