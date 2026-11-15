	THUMB_FUNC_START sub_0810398C
sub_0810398C: @ 0x0810398C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _081039D0  @ =gRam
	ldr r1, _081039D4  @ =0x00000FC2
	add r0, r5, r1
	add r0, r0, r4
	mov r8, r0
	ldrb r7, [r0]
	cmp r7, #0
	bne _08103A10
	ldr r2, _081039D8  @ =0x00000F22
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	sub r2, r2, #16
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _081039E0
	ldr r1, _081039DC  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
	b _08103A10
_081039D0:
	.4byte gRam
_081039D4:
	.4byte 0x00000FC2
_081039D8:
	.4byte 0x00000F22
_081039DC:
	.4byte 0x00000FA2
_081039E0:
	ldr r2, _08103A1C  @ =0x00000F52
	add r1, r5, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #63
	mov r1, r8
	strb r0, [r1]
	add r0, r6, #0
	bl sub_080C2FA8
	ldr r2, _08103A20  @ =0x00000FB2
	add r1, r5, r2
	add r1, r6, r1
	strb r0, [r1]
	ldr r0, _08103A24  @ =0x00000F92
	add r2, r5, r0
	add r2, r6, r2
	ldr r3, _08103A28  @ =gUnknown_0817BA40
	ldrb r0, [r1]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
_08103A10:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08103A1C:
	.4byte 0x00000F52
_08103A20:
	.4byte 0x00000FB2
_08103A24:
	.4byte 0x00000F92
_08103A28:
	.4byte gUnknown_0817BA40
	THUMB_FUNC_END sub_0810398C

